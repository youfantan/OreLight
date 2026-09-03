#pragma once

#define RAM_BASE_ADDRESS 0x20000000
#define RAM_SIZE 0x2000

#include <base.h>

static inline void __NOP(void)        { __asm volatile ("nop"); }
static inline void __WFI(void)        { __asm volatile ("wfi"); }
static inline void __enable_irq(void) { __asm volatile ("cpsie i"); }
static inline void __disable_irq(void){ __asm volatile ("cpsid i"); }

#include "register_spec.h"

enum class oscillator_type {
    external_crystal_oscillator,
    internal_rc_oscillator
};

struct ClockConfig {
    oscillator_type osc_type;
    u32 base_freq;
    u32 mp_factor;
    u32 pll_p;
    u32 pll_q;
};

template<ClockConfig CFG>
static void ClockInitialize() {
    static_assert(CFG.mp_factor * CFG.base_freq <= 64000000);
    if constexpr(CFG.mp_factor == 1) {
        // Use oscillator as clock source
        if constexpr (CFG.osc_type == oscillator_type::internal_rc_oscillator) {
            // Enable HSI
            RCC::CR::HSION = true;
            while (RCC::CR::HSIRDY == false) {}
            RCC::CR::HSIDIV = 0x00;
            // Switch system clock to HSI
            RCC::CFGR::SW = 0x00;
            // AHB and APB clock have the same frequency as System Clock
            RCC::CFGR::HPRE = 0x00;
            RCC::CFGR::PPRE = 0x00;
        } else {
            // Enable HSE
            RCC::CR::HSEON = true;
            while (RCC::CR::HSERDY == false) {}
            // Switch system clock to HSE
            RCC::CFGR::SW = 0x01;
            // AHB and APB clock have the same frequency as System Clock
            RCC::CFGR::HPRE = 0x00;
            RCC::CFGR::PPRE = 0x00;
        }
    } else {
        // Switch to HSI first
        RCC::CR::HSION = true;
        while (RCC::CR::HSIRDY == false) {}
        RCC::CR::HSIDIV = 0x00;
        RCC::CFGR::SW = 0x00;
        // Stop PLL(openocd may start PLL to boost flash)
        RCC::CR::PLLON = false;
        // Set PLL Vco to 128MHz
        if (CFG.osc_type == oscillator_type::external_crystal_oscillator) {
            // Enable HSE, HSE must be 8MHz
            RCC::CR::HSEON = 0x01;
            while (RCC::CR::HSERDY == 0x00) {}
            RCC::PLLCFGR::PLLSRC = 0x03;
            RCC::PLLCFGR::PLLN = 0x10;
        } else {
            RCC::PLLCFGR::PLLSRC = 0x02;
            RCC::PLLCFGR::PLLN = 0x08;
        }
        RCC::PLLCFGR::PLLM = 0x00;
        RCC::PLLCFGR::PLLR = 0x10 / CFG.mp_factor - 1;
        RCC::PLLCFGR::PLLREN = true;
        if constexpr (CFG.pll_q == 0) {
            RCC::PLLCFGR::PLLQEN = false;
        } else {
            RCC::PLLCFGR::PLLQ = CFG.pll_q;
            RCC::PLLCFGR::PLLQEN = true;
        }
        if constexpr (CFG.pll_p == 0) {
            RCC::PLLCFGR::PLLPEN = false;
        } else {
            RCC::PLLCFGR::PLLP = CFG.pll_p;
            RCC::PLLCFGR::PLLPEN = true;
        }
        // Set flash wait states for the target SYSCLK before switching to PLL
        if constexpr (CFG.mp_factor * CFG.base_freq <= 24000000) {
            FLASH::ACR::LATENCY = 0x00;
        } else if constexpr (CFG.mp_factor * CFG.base_freq <= 48000000) {
            FLASH::ACR::LATENCY = 0x01;
        } else {
            FLASH::ACR::LATENCY = 0x02;
        }
        FLASH::ACR::PRFTEN = true;
        // Enable PLL
        RCC::CR::PLLON = true;
        while (RCC::CR::PLLRDY == false) {}
        // Select PLLR as System Clock
        RCC::CFGR::SW = 0x02;
        while (RCC::CFGR::SWS != 0x02) {}
        RCC::CFGR::HPRE = 0x00;
        RCC::CFGR::PPRE = 0x00;
    }
}

struct GPIOPin {
    u16 Port;
    u16 Pin;

    bool IsInvalid() {
        return Port == 0xFFFF;
    }
};

constexpr static GPIOPin PA0  { 0, 0  };
constexpr static GPIOPin PA1  { 0, 1  };
constexpr static GPIOPin PA2  { 0, 2  };
constexpr static GPIOPin PA3  { 0, 3  };
constexpr static GPIOPin PA4  { 0, 4  };
constexpr static GPIOPin PA5  { 0, 5  };
constexpr static GPIOPin PA6  { 0, 6  };
constexpr static GPIOPin PA7  { 0, 7  };
constexpr static GPIOPin PA8  { 0, 8  };
constexpr static GPIOPin PA9  { 0, 9  };
constexpr static GPIOPin PA10 { 0, 10 };
constexpr static GPIOPin PA11 { 0, 11 };
constexpr static GPIOPin PA12 { 0, 12 };
constexpr static GPIOPin PA13 { 0, 13 };
constexpr static GPIOPin PA14 { 0, 14 };
constexpr static GPIOPin PA15 { 0, 15 };

constexpr static GPIOPin PB0  { 1, 0  };
constexpr static GPIOPin PB1  { 1, 1  };
constexpr static GPIOPin PB2  { 1, 2  };
constexpr static GPIOPin PB3  { 1, 3  };
constexpr static GPIOPin PB4  { 1, 4  };
constexpr static GPIOPin PB5  { 1, 5  };
constexpr static GPIOPin PB6  { 1, 6  };
constexpr static GPIOPin PB7  { 1, 7  };
constexpr static GPIOPin PB8  { 1, 8  };
constexpr static GPIOPin PB9  { 1, 9  };
constexpr static GPIOPin PB10 { 1, 10 };
constexpr static GPIOPin PB11 { 1, 11 };
constexpr static GPIOPin PB12 { 1, 12 };
constexpr static GPIOPin PB13 { 1, 13 };
constexpr static GPIOPin PB14 { 1, 14 };
constexpr static GPIOPin PB15 { 1, 15 };

constexpr static GPIOPin PC0  { 2, 0  };
constexpr static GPIOPin PC1  { 2, 1  };
constexpr static GPIOPin PC2  { 2, 2  };
constexpr static GPIOPin PC3  { 2, 3  };
constexpr static GPIOPin PC4  { 2, 4  };
constexpr static GPIOPin PC5  { 2, 5  };
constexpr static GPIOPin PC6  { 2, 6  };
constexpr static GPIOPin PC7  { 2, 7  };
constexpr static GPIOPin PC8  { 2, 8  };
constexpr static GPIOPin PC9  { 2, 9  };
constexpr static GPIOPin PC10 { 2, 10 };
constexpr static GPIOPin PC11 { 2, 11 };
constexpr static GPIOPin PC12 { 2, 12 };
constexpr static GPIOPin PC13 { 2, 13 };
constexpr static GPIOPin PC14 { 2, 14 };
constexpr static GPIOPin PC15 { 2, 15 };

constexpr static GPIOPin PD0  { 3, 0  };
constexpr static GPIOPin PD1  { 3, 1  };
constexpr static GPIOPin PD2  { 3, 2  };
constexpr static GPIOPin PD3  { 3, 3  };
constexpr static GPIOPin PD4  { 3, 4  };
constexpr static GPIOPin PD5  { 3, 5  };
constexpr static GPIOPin PD6  { 3, 6  };
constexpr static GPIOPin PD7  { 3, 7  };
constexpr static GPIOPin PD8  { 3, 8  };
constexpr static GPIOPin PD9  { 3, 9  };
constexpr static GPIOPin PD10 { 3, 10 };
constexpr static GPIOPin PD11 { 3, 11 };
constexpr static GPIOPin PD12 { 3, 12 };
constexpr static GPIOPin PD13 { 3, 13 };
constexpr static GPIOPin PD14 { 3, 14 };
constexpr static GPIOPin PD15 { 3, 15 };

constexpr static GPIOPin PE0  { 4, 0  };
constexpr static GPIOPin PE1  { 4, 1  };
constexpr static GPIOPin PE2  { 4, 2  };
constexpr static GPIOPin PE3  { 4, 3  };
constexpr static GPIOPin PE4  { 4, 4  };
constexpr static GPIOPin PE5  { 4, 5  };
constexpr static GPIOPin PE6  { 4, 6  };
constexpr static GPIOPin PE7  { 4, 7  };
constexpr static GPIOPin PE8  { 4, 8  };
constexpr static GPIOPin PE9  { 4, 9  };
constexpr static GPIOPin PE10 { 4, 10 };
constexpr static GPIOPin PE11 { 4, 11 };
constexpr static GPIOPin PE12 { 4, 12 };
constexpr static GPIOPin PE13 { 4, 13 };
constexpr static GPIOPin PE14 { 4, 14 };
constexpr static GPIOPin PE15 { 4, 15 };

constexpr static GPIOPin PF0  { 5, 0  };
constexpr static GPIOPin PF1  { 5, 1  };
constexpr static GPIOPin PF2  { 5, 2  };
constexpr static GPIOPin PF3  { 5, 3  };
constexpr static GPIOPin PF4  { 5, 4  };
constexpr static GPIOPin PF5  { 5, 5  };
constexpr static GPIOPin PF6  { 5, 6  };
constexpr static GPIOPin PF7  { 5, 7  };
constexpr static GPIOPin PF8  { 5, 8  };
constexpr static GPIOPin PF9  { 5, 9  };
constexpr static GPIOPin PF10 { 5, 10 };
constexpr static GPIOPin PF11 { 5, 11 };
constexpr static GPIOPin PF12 { 5, 12 };
constexpr static GPIOPin PF13 { 5, 13 };
constexpr static GPIOPin PF14 { 5, 14 };
constexpr static GPIOPin PF15 { 5, 15 };

template<u32 X>
class SPIDevice {
public:
    SPIDevice() {
        static_assert(X == 1 || X == 2);
        if constexpr(X == 1) {
        }
    }
};