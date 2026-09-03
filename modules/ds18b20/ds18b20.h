#pragma once

#include <base.h>

template<typename GPIOPin>
class DS18B20 {
public:
    DS18B20(GPIOPin pin) : pin_(pin), conversion_us_(750000) {
        pin_.InitAsOutOD(GPIOPin::PuPd::Floating);
        pin_.SetOutputHigh();
    }

    bool Present() {
        return Reset();
    }

    void StartConversion() {
        Reset();
        WriteByte(0xCC);
        WriteByte(0x44);
    }

    u32 ConversionDelayUs() const {
        return conversion_us_;
    }

    bool ReadTemper(float& celsius) {
        u8 sp[9];
        if (!ReadScratchpad(sp)) {
            return false;
        }
        if (sp[8] != Crc8(sp, 8)) {
            return false;
        }
        conversion_us_ = ConversionWaitUs(sp[4]);
        const i16 raw = static_cast<i16>((static_cast<u16>(sp[1]) << 8) | sp[0]);
        celsius = static_cast<float>(raw) * 0.0625f;
        return true;
    }

private:
    GPIOPin pin_;
    u32 conversion_us_;

    bool Reset() {
        pin_.SetOutputLow();
        timer_sleep(480);
        pin_.SetOutputHigh();
        timer_sleep(70);
        bool present = !pin_.GetInputState();
        timer_sleep(410);
        return present;
    }

    void WriteBit(bool bit) {
        pin_.SetOutputLow();
        if (bit) {
            timer_sleep(6);
            pin_.SetOutputHigh();
            timer_sleep(64);
        } else {
            timer_sleep(60);
            pin_.SetOutputHigh();
            timer_sleep(10);
        }
    }

    bool ReadBit() {
        pin_.SetOutputLow();
        timer_sleep(2);
        pin_.SetOutputHigh();
        timer_sleep(7);
        const bool bit = pin_.GetInputState();
        timer_sleep(51);
        return bit;
    }

    void WriteByte(u8 data) {
        for (u8 i = 0; i < 8; ++i) {
            WriteBit((data >> i) & 0x01);
        }
    }

    u8 ReadByte() {
        u8 data = 0;
        for (u8 i = 0; i < 8; ++i) {
            if (ReadBit()) {
                data |= static_cast<u8>(1u << i);
            }
        }
        return data;
    }

    bool ReadScratchpad(u8 sp[9]) {
        if (!Reset()) {
            return false;
        }
        WriteByte(0xCC);
        WriteByte(0xBE);
        for (u8 i = 0; i < 9; ++i) {
            sp[i] = ReadByte();
        }
        return true;
    }

    static u32 ConversionWaitUs(u8 config) {
        const u32 wait_us[4] = { 93750, 187500, 375000, 750000 };
        return wait_us[(config >> 5) & 0x03];
    }

    static u8 Crc8(const u8* data, u8 len) {
        u8 crc = 0;
        for (u8 i = 0; i < len; ++i) {
            u8 byte = data[i];
            for (u8 j = 0; j < 8; ++j) {
                const u8 mix = static_cast<u8>((crc ^ byte) & 0x01);
                crc >>= 1;
                if (mix) {
                    crc ^= 0x8C;
                }
                byte >>= 1;
            }
        }
        return crc;
    }
};
