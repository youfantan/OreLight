#!/usr/bin/env python3

import argparse
import sys
import xml.etree.ElementTree as ET

DEFAULT_ACCESS = "read-write"
ACCESS_CODE = {
    "read-write": 0,
    "read-only": 1,
    "write-only": 2,
    "read-writeOnce": 3,
    "writeOnce": 3,
}


class Field:
    def __init__(self, name, off, length, access):
        self.name = name
        self.off = int(off)
        self.length = int(length)
        code = ACCESS_CODE.get(access)
        if code is None:
            print(f"warning: unknown access '{access}' for field '{name}', "
                  f"mapped to 'read-write'", file=sys.stderr)
            code = ACCESS_CODE[DEFAULT_ACCESS]
        self.access = code


class Register:
    def __init__(self, name, off):
        self.name = name
        self.off = off
        self.fields = []


class Peripheral:
    def __init__(self, name, base):
        self.name = name
        self.base = base
        self.registers = []


def _clone_register(r):
    nreg = Register(r.name, r.off)
    for f in r.fields:
        nf = Field(f.name, f.off, f.length, DEFAULT_ACCESS)
        nf.access = f.access
        nreg.fields.append(nf)
    return nreg


def _parse_register(el):
    name = el.findtext("name")
    off = int(el.findtext("addressOffset"), 0)
    reg_access = el.findtext("access")
    r = Register(name, off)
    fields_el = el.find("fields")
    if fields_el is not None:
        for f_el in fields_el.findall("field"):
            fname = f_el.findtext("name")
            foff = int(f_el.findtext("bitOffset"), 0)
            fwidth = f_el.findtext("bitWidth")
            flen = int(fwidth, 0) if fwidth else 1
            faccess = f_el.findtext("access") or reg_access or DEFAULT_ACCESS
            r.fields.append(Field(fname, foff, flen, faccess))
    return r


def parse_svd(path):
    tree = ET.parse(path)
    root = tree.getroot()

    raw = []
    for p_el in root.findall("./peripherals/peripheral"):
        name = p_el.findtext("name")
        derived = p_el.get("derivedFrom")
        raw.append((name, derived, p_el))

    parsed = {}
    peripherals = []
    for name, derived, p_el in raw:
        base = int(p_el.findtext("baseAddress"), 0)
        if derived is None:
            p = Peripheral(name, base)
            regs_el = p_el.find("registers")
            if regs_el is not None:
                for r_el in regs_el.findall("register"):
                    p.registers.append(_parse_register(r_el))
        else:
            src = parsed.get(derived)
            if src is None:
                raise ValueError(
                    f"peripheral '{name}' derives from '{derived}', "
                    f"which must be declared before it")
            p = Peripheral(name, base)
            for r in src.registers:
                p.registers.append(_clone_register(r))
            regs_el = p_el.find("registers")
            if regs_el is not None:
                for r_el in regs_el.findall("register"):
                    p.registers.append(_parse_register(r_el))
        p.registers.sort(key=lambda r: r.off)
        for r in p.registers:
            r.fields.sort(key=lambda f: f.off)
        parsed[name] = p
        peripherals.append(p)
    return peripherals


def _member_names(reg):
    names = []
    used = set()
    for f in reg.fields:
        n = f.name
        while n in used or n == reg.name:
            n += "V"
        used.add(n)
        names.append(n)
    return names


def emit(peripherals):
    print("#pragma once\n")
    for p in peripherals:
        print(f"constexpr static uint32_t {p.name}_BASE = {p.base};")
        for r in p.registers:
            print(f"constexpr static uint32_t {p.name}_{r.name}_BASE = {p.name}_BASE + {r.off};")
            for f in r.fields:
                print(f"constexpr static RegisterFieldDescriptor {p.name}_{r.name}_{f.name} = {{ {f.off}, {f.length}, {f.access} }};")
            print("\n")
        print("\n")
    for p in peripherals:
        print(f"struct {p.name} {{")
        for r in p.registers:
            print(f"\tstruct {r.name} {{")
            print(f"\t\tDECL_REGISTER({p.name}_{r.name}_BASE);")
            for f, member in zip(r.fields, _member_names(r)):
                print(f"\t\tconstexpr static RegisterField<{p.name}_{r.name}_{f.name}> {member} {{}};")
            print("\t};\n")
        print("};\n")


def main():
    parser = argparse.ArgumentParser(
        description="Parse a CMSIS-SVD file into a register map header, "
                    "mirroring peripheral_map_gen.py output.")
    parser.add_argument("svd", help="input SVD file")
    args = parser.parse_args()
    emit(parse_svd(args.svd))


if __name__ == "__main__":
    main()
