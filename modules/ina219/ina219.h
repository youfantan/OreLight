#pragma once

#include <base.h>

template<typename Device>
class INA219 {
public:
    enum class Register : u8 {
        Configuration = 0x00,
        ShuntVoltage = 0x01,
        BusVoltage = 0x02,
        Power = 0x03,
        Current = 0x04,
        Calibration = 0x05,
        ManufacturerId = 0xFE,
        DieId = 0xFF,
    };

    enum class BusRange : u8 {
        V16 = 0,
        V32 = 1,
    };

    enum class PGAGain : u8 {
        Gain1 = 0,
        Gain2 = 1,
        Gain4 = 2,
        Gain8 = 3,
    };

    enum class ADCResolution : u8 {
        BIT9 = 0,
        BIT10,
        BIT11,
        BIT12,
        FILTERING_2 = 9,
        FILTERING_4,
        FILTERING_8,
        FILTERING_16,
        FILTERING_32,
        FILTERING_64,
        FILTERING_128,
    };

    enum class Mode : u8 {
        PowerDown = 0x00,
        ShuntTriggered = 0x01,
        BusTriggered = 0x02,
        ShuntBusTriggered = 0x03,
        AdcOff = 0x04,
        ShuntContinuous = 0x05,
        BusContinuous = 0x06,
        ShuntBusContinuous = 0x07,
    };

    INA219(Device& dev, u8 address) : device_(dev), address_(address), current_lsb_(0.0f) {

    }

    void Configure(PGAGain gain, ADCResolution res, Mode mode, BusRange range = BusRange::V32) {
        u16 cfg = (static_cast<u16>(range) << 13) |
          (static_cast<u16>(gain) << 11) |
          (static_cast<u16>(res) << 7) |
          (static_cast<u16>(res) << 3) |
          static_cast<u16>(mode);
        Write(Register::Configuration, cfg);
    }

    bool Alive() const {
        Write(Register::Configuration, 0x8000);
        timer_sleep(100);
        u16 default_cfg = Read(Register::Configuration);
        return default_cfg == 0x399F;
    }

    bool Calibrate(u16 shunt_mr, u16 max_current_ma) {
        if (shunt_mr == 0 || max_current_ma == 0) {
            return false;
        }
        u32 max_uv = shunt_mr * max_current_ma;
        if (max_uv > 320000) {
            return false;
        }
        current_lsb_ = (static_cast<float>(max_current_ma) / 1000) / (1 << 15) ;
        u32 calibration = 40960000UL / (static_cast<float>(max_current_ma) / (2 << 15) * 1000.0f * shunt_mr);
        if (calibration > 0xFFFF) {
            return false;
        }
        if (calibration == 0) {
            return false;
        }
        Write(Register::Calibration, static_cast<u16>(calibration));
        return true;
    }

    float GetBusVoltage() const {
        return static_cast<float>(Read(Register::BusVoltage) >> 3) * 0.004f;
    }

    float GetShuntVoltage() const {
        return static_cast<float>(SignExtend(Read(Register::ShuntVoltage))) * 0.00001f;
    }

    float GetCurrent() const {
        return static_cast<float>(SignExtend(Read(Register::Current))) * current_lsb_;
    }

    float GetPower() const {
        return static_cast<float>(Read(Register::Power)) * (current_lsb_ * 20.0f);
    }

    u16 Read(Register reg) const {
        const u8 reg_addr = static_cast<u8>(reg);
        device_.Send(address_, &reg_addr, 1);
        u8 buf[2];
        device_.Recv(address_, buf, sizeof(buf));
        return static_cast<u16>((static_cast<u16>(buf[0]) << 8) | buf[1]);
    }

    void Write(Register reg, u16 value) const {
        const u8 buf[3] = {
            static_cast<u8>(reg),
            static_cast<u8>(value >> 8),
            static_cast<u8>(value & 0xFF),
        };
        device_.Send(address_, buf, sizeof(buf));
    }

private:
    Device& device_;
    u8 address_;
    float current_lsb_;

    i32 SignExtend(u16 raw) const {
        i32 value = raw;
        if (value & 0x8000) {
            value -= 0x10000;
        }
        return value;
    }
};
