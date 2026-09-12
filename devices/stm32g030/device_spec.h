#pragma once

#include <base.h>
#include <type_traits>
#include <register_spec.h>
#include <sys_conf.h>
#include <utils.h>

static inline void __NOP(void)        { __asm volatile ("nop"); }
static inline void __WFI(void)        { __asm volatile ("wfi"); }
static inline void __enable_irq(void) { __asm volatile ("cpsie i"); }
static inline void __disable_irq(void){ __asm volatile ("cpsid i"); }


static void ClockInitialize() {
    static_assert(clk_cfg.mp_factor > 0);
    static_assert(clk_cfg.mp_factor * clk_cfg.base_freq <= 64000000);
    if constexpr(clk_cfg.mp_factor == 1) {
        // Use oscillator as clock source
        if constexpr (clk_cfg.osc_type == oscillator_type::internal_rc_oscillator) {
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
        if constexpr (clk_cfg.osc_type == external_crystal_oscillator) {
            // Enable HSE, HSE must be 8MHz
            RCC::CR::HSEON = 0x01;
            while (RCC::CR::HSERDY == 0x00) {}
            RCC::PLLSYSCFGR::PLLSRC = 0x03;
            RCC::PLLSYSCFGR::PLLN = 0x10;
        } else {
            RCC::PLLSYSCFGR::PLLSRC = 0x02;
            RCC::PLLSYSCFGR::PLLN = 0x08;
        }
        RCC::PLLSYSCFGR::PLLM = 0x00;
        RCC::PLLSYSCFGR::PLLR = 0x10 / clk_cfg.mp_factor - 1;
        RCC::PLLSYSCFGR::PLLREN = true;
        if constexpr (clk_cfg.pll_q == 0) {
            RCC::PLLSYSCFGR::PLLQEN = false;
        } else {
            RCC::PLLSYSCFGR::PLLQ = clk_cfg.pll_q;
            RCC::PLLSYSCFGR::PLLQEN = true;
        }
        if constexpr (clk_cfg.pll_p == 0) {
            RCC::PLLSYSCFGR::PLLPEN = false;
        } else {
            RCC::PLLSYSCFGR::PLLP = clk_cfg.pll_p;
            RCC::PLLSYSCFGR::PLLPEN = true;
        }
        // Set flash wait states for the target SYSCLK before switching to PLL
        if constexpr (clk_cfg.mp_factor * clk_cfg.base_freq <= 24000000) {
            FLASH::ACR::LATENCY = 0x00;
        } else if constexpr (clk_cfg.mp_factor * clk_cfg.base_freq <= 48000000) {
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

template<
    RegisterField RCCENR,
    RegisterField MODER,
    RegisterField OTR,
    RegisterField OSPEEDR,
    RegisterField PUPDR,
    RegisterField IDRR,
    RegisterField ODRR,
    RegisterField BSR,
    RegisterField BRR,
    RegisterField AFSELR,
    bool INVALID = false
    >
struct GPIOPin {
    enum class PuPd {
        Floating = 0,
        PullUp,
        PullDown,
    };

    void RCCInit() const {
        RCCENR = true;
    }

    void InitAsOutPP() const {
        RCCInit();
        MODER = 0x01;
        OTR = 0x00;
        OSPEEDR = 0x03;
    }

    void InitAsOutOD(PuPd pp) const {
        RCCInit();
        MODER = 0x01;
        OTR = 0x01;
        PUPDR = static_cast<u8>(pp);
        OSPEEDR = 0x03;
    }

    void InitAsInput(PuPd pp) const {
        RCCInit();
        MODER = 0x00;
        PUPDR = static_cast<u8>(pp);
    }

    void InitAsAnalog() const {
        RCCInit();
        MODER = 0x03;
        PUPDR = 0x00;
    }

    void InitAsAFOutPP(u8 af) const {
        RCCInit();
        MODER = 0x02;
        OTR = 0x00;
        OSPEEDR = 0x03;
        AFSELR = af;
    }

    void InitAsAFOutOD(u8 af, PuPd pp) const {
        RCCInit();
        MODER = 0x02;
        OTR = 0x01;
        PUPDR = static_cast<u8>(pp);
        OSPEEDR = 0x03;
        AFSELR = af;
    }

    void InitAsAFInput(u8 af, PuPd pp) const {
        RCCInit();
        MODER = 0x02;
        PUPDR = static_cast<u8>(pp);
        AFSELR = af;
    }

    const bool GetInputState() const {
        return static_cast<bool>(IDRR);
    }

    const bool GetOutputState() const {
        return static_cast<bool>(ODRR);
    }

    void SetOutputHigh() const {
        *reinterpret_cast<volatile u32*>(BSR.ADDR) = 1u << BSR.RFD.off;
    }

    void SetOutputLow() const {
        *reinterpret_cast<volatile u32*>(BRR.ADDR) = 1u << BRR.RFD.off;
    }

    void SetOutputState(bool state) const {
        if (state) SetOutputHigh();
        else SetOutputLow();
    }

    bool IsInvalid() const {
        return INVALID;
    }
};

constexpr static GPIOPin<RCC::IOPENR::GPIOAEN, GPIOA::MODER::MODER0, GPIOA::OTYPER::OT0, GPIOA::OSPEEDR::OSPEEDR0, GPIOA::PUPDR::PUPDR0, GPIOA::IDR::IDR0, GPIOA::ODR::ODR0, GPIOA::BSRR::BS0, GPIOA::BRR::BR0, GPIOA::AFRL::AFSEL0> PA0;
constexpr static GPIOPin<RCC::IOPENR::GPIOAEN, GPIOA::MODER::MODER1, GPIOA::OTYPER::OT1, GPIOA::OSPEEDR::OSPEEDR1, GPIOA::PUPDR::PUPDR1, GPIOA::IDR::IDR1, GPIOA::ODR::ODR1, GPIOA::BSRR::BS1, GPIOA::BRR::BR1, GPIOA::AFRL::AFSEL1> PA1;
constexpr static GPIOPin<RCC::IOPENR::GPIOAEN, GPIOA::MODER::MODER2, GPIOA::OTYPER::OT2, GPIOA::OSPEEDR::OSPEEDR2, GPIOA::PUPDR::PUPDR2, GPIOA::IDR::IDR2, GPIOA::ODR::ODR2, GPIOA::BSRR::BS2, GPIOA::BRR::BR2, GPIOA::AFRL::AFSEL2> PA2;
constexpr static GPIOPin<RCC::IOPENR::GPIOAEN, GPIOA::MODER::MODER3, GPIOA::OTYPER::OT3, GPIOA::OSPEEDR::OSPEEDR3, GPIOA::PUPDR::PUPDR3, GPIOA::IDR::IDR3, GPIOA::ODR::ODR3, GPIOA::BSRR::BS3, GPIOA::BRR::BR3, GPIOA::AFRL::AFSEL3> PA3;
constexpr static GPIOPin<RCC::IOPENR::GPIOAEN, GPIOA::MODER::MODER4, GPIOA::OTYPER::OT4, GPIOA::OSPEEDR::OSPEEDR4, GPIOA::PUPDR::PUPDR4, GPIOA::IDR::IDR4, GPIOA::ODR::ODR4, GPIOA::BSRR::BS4, GPIOA::BRR::BR4, GPIOA::AFRL::AFSEL4> PA4;
constexpr static GPIOPin<RCC::IOPENR::GPIOAEN, GPIOA::MODER::MODER5, GPIOA::OTYPER::OT5, GPIOA::OSPEEDR::OSPEEDR5, GPIOA::PUPDR::PUPDR5, GPIOA::IDR::IDR5, GPIOA::ODR::ODR5, GPIOA::BSRR::BS5, GPIOA::BRR::BR5, GPIOA::AFRL::AFSEL5> PA5;
constexpr static GPIOPin<RCC::IOPENR::GPIOAEN, GPIOA::MODER::MODER6, GPIOA::OTYPER::OT6, GPIOA::OSPEEDR::OSPEEDR6, GPIOA::PUPDR::PUPDR6, GPIOA::IDR::IDR6, GPIOA::ODR::ODR6, GPIOA::BSRR::BS6, GPIOA::BRR::BR6, GPIOA::AFRL::AFSEL6> PA6;
constexpr static GPIOPin<RCC::IOPENR::GPIOAEN, GPIOA::MODER::MODER7, GPIOA::OTYPER::OT7, GPIOA::OSPEEDR::OSPEEDR7, GPIOA::PUPDR::PUPDR7, GPIOA::IDR::IDR7, GPIOA::ODR::ODR7, GPIOA::BSRR::BS7, GPIOA::BRR::BR7, GPIOA::AFRL::AFSEL7> PA7;
constexpr static GPIOPin<RCC::IOPENR::GPIOAEN, GPIOA::MODER::MODER8, GPIOA::OTYPER::OT8, GPIOA::OSPEEDR::OSPEEDR8, GPIOA::PUPDR::PUPDR8, GPIOA::IDR::IDR8, GPIOA::ODR::ODR8, GPIOA::BSRR::BS8, GPIOA::BRR::BR8, GPIOA::AFRH::AFSEL8> PA8;
constexpr static GPIOPin<RCC::IOPENR::GPIOAEN, GPIOA::MODER::MODER9, GPIOA::OTYPER::OT9, GPIOA::OSPEEDR::OSPEEDR9, GPIOA::PUPDR::PUPDR9, GPIOA::IDR::IDR9, GPIOA::ODR::ODR9, GPIOA::BSRR::BS9, GPIOA::BRR::BR9, GPIOA::AFRH::AFSEL9> PA9;
constexpr static GPIOPin<RCC::IOPENR::GPIOAEN, GPIOA::MODER::MODER10, GPIOA::OTYPER::OT10, GPIOA::OSPEEDR::OSPEEDR10, GPIOA::PUPDR::PUPDR10, GPIOA::IDR::IDR10, GPIOA::ODR::ODR10, GPIOA::BSRR::BS10, GPIOA::BRR::BR10, GPIOA::AFRH::AFSEL10> PA10;
constexpr static GPIOPin<RCC::IOPENR::GPIOAEN, GPIOA::MODER::MODER11, GPIOA::OTYPER::OT11, GPIOA::OSPEEDR::OSPEEDR11, GPIOA::PUPDR::PUPDR11, GPIOA::IDR::IDR11, GPIOA::ODR::ODR11, GPIOA::BSRR::BS11, GPIOA::BRR::BR11, GPIOA::AFRH::AFSEL11> PA11;
constexpr static GPIOPin<RCC::IOPENR::GPIOAEN, GPIOA::MODER::MODER12, GPIOA::OTYPER::OT12, GPIOA::OSPEEDR::OSPEEDR12, GPIOA::PUPDR::PUPDR12, GPIOA::IDR::IDR12, GPIOA::ODR::ODR12, GPIOA::BSRR::BS12, GPIOA::BRR::BR12, GPIOA::AFRH::AFSEL12> PA12;
constexpr static GPIOPin<RCC::IOPENR::GPIOAEN, GPIOA::MODER::MODER13, GPIOA::OTYPER::OT13, GPIOA::OSPEEDR::OSPEEDR13, GPIOA::PUPDR::PUPDR13, GPIOA::IDR::IDR13, GPIOA::ODR::ODR13, GPIOA::BSRR::BS13, GPIOA::BRR::BR13, GPIOA::AFRH::AFSEL13> PA13;
constexpr static GPIOPin<RCC::IOPENR::GPIOAEN, GPIOA::MODER::MODER14, GPIOA::OTYPER::OT14, GPIOA::OSPEEDR::OSPEEDR14, GPIOA::PUPDR::PUPDR14, GPIOA::IDR::IDR14, GPIOA::ODR::ODR14, GPIOA::BSRR::BS14, GPIOA::BRR::BR14, GPIOA::AFRH::AFSEL14> PA14;
constexpr static GPIOPin<RCC::IOPENR::GPIOAEN, GPIOA::MODER::MODER15, GPIOA::OTYPER::OT15, GPIOA::OSPEEDR::OSPEEDR15, GPIOA::PUPDR::PUPDR15, GPIOA::IDR::IDR15, GPIOA::ODR::ODR15, GPIOA::BSRR::BS15, GPIOA::BRR::BR15, GPIOA::AFRH::AFSEL15> PA15;

constexpr static GPIOPin<RCC::IOPENR::GPIOBEN, GPIOB::MODER::MODER0, GPIOB::OTYPER::OT0, GPIOB::OSPEEDR::OSPEEDR0, GPIOB::PUPDR::PUPDR0, GPIOB::IDR::IDR0, GPIOB::ODR::ODR0, GPIOB::BSRR::BS0, GPIOB::BRR::BR0, GPIOB::AFRL::AFSEL0> PB0;
constexpr static GPIOPin<RCC::IOPENR::GPIOBEN, GPIOB::MODER::MODER1, GPIOB::OTYPER::OT1, GPIOB::OSPEEDR::OSPEEDR1, GPIOB::PUPDR::PUPDR1, GPIOB::IDR::IDR1, GPIOB::ODR::ODR1, GPIOB::BSRR::BS1, GPIOB::BRR::BR1, GPIOB::AFRL::AFSEL1> PB1;
constexpr static GPIOPin<RCC::IOPENR::GPIOBEN, GPIOB::MODER::MODER2, GPIOB::OTYPER::OT2, GPIOB::OSPEEDR::OSPEEDR2, GPIOB::PUPDR::PUPDR2, GPIOB::IDR::IDR2, GPIOB::ODR::ODR2, GPIOB::BSRR::BS2, GPIOB::BRR::BR2, GPIOB::AFRL::AFSEL2> PB2;
constexpr static GPIOPin<RCC::IOPENR::GPIOBEN, GPIOB::MODER::MODER3, GPIOB::OTYPER::OT3, GPIOB::OSPEEDR::OSPEEDR3, GPIOB::PUPDR::PUPDR3, GPIOB::IDR::IDR3, GPIOB::ODR::ODR3, GPIOB::BSRR::BS3, GPIOB::BRR::BR3, GPIOB::AFRL::AFSEL3> PB3;
constexpr static GPIOPin<RCC::IOPENR::GPIOBEN, GPIOB::MODER::MODER4, GPIOB::OTYPER::OT4, GPIOB::OSPEEDR::OSPEEDR4, GPIOB::PUPDR::PUPDR4, GPIOB::IDR::IDR4, GPIOB::ODR::ODR4, GPIOB::BSRR::BS4, GPIOB::BRR::BR4, GPIOB::AFRL::AFSEL4> PB4;
constexpr static GPIOPin<RCC::IOPENR::GPIOBEN, GPIOB::MODER::MODER5, GPIOB::OTYPER::OT5, GPIOB::OSPEEDR::OSPEEDR5, GPIOB::PUPDR::PUPDR5, GPIOB::IDR::IDR5, GPIOB::ODR::ODR5, GPIOB::BSRR::BS5, GPIOB::BRR::BR5, GPIOB::AFRL::AFSEL5> PB5;
constexpr static GPIOPin<RCC::IOPENR::GPIOBEN, GPIOB::MODER::MODER6, GPIOB::OTYPER::OT6, GPIOB::OSPEEDR::OSPEEDR6, GPIOB::PUPDR::PUPDR6, GPIOB::IDR::IDR6, GPIOB::ODR::ODR6, GPIOB::BSRR::BS6, GPIOB::BRR::BR6, GPIOB::AFRL::AFSEL6> PB6;
constexpr static GPIOPin<RCC::IOPENR::GPIOBEN, GPIOB::MODER::MODER7, GPIOB::OTYPER::OT7, GPIOB::OSPEEDR::OSPEEDR7, GPIOB::PUPDR::PUPDR7, GPIOB::IDR::IDR7, GPIOB::ODR::ODR7, GPIOB::BSRR::BS7, GPIOB::BRR::BR7, GPIOB::AFRL::AFSEL7> PB7;
constexpr static GPIOPin<RCC::IOPENR::GPIOBEN, GPIOB::MODER::MODER8, GPIOB::OTYPER::OT8, GPIOB::OSPEEDR::OSPEEDR8, GPIOB::PUPDR::PUPDR8, GPIOB::IDR::IDR8, GPIOB::ODR::ODR8, GPIOB::BSRR::BS8, GPIOB::BRR::BR8, GPIOB::AFRH::AFSEL8> PB8;
constexpr static GPIOPin<RCC::IOPENR::GPIOBEN, GPIOB::MODER::MODER9, GPIOB::OTYPER::OT9, GPIOB::OSPEEDR::OSPEEDR9, GPIOB::PUPDR::PUPDR9, GPIOB::IDR::IDR9, GPIOB::ODR::ODR9, GPIOB::BSRR::BS9, GPIOB::BRR::BR9, GPIOB::AFRH::AFSEL9> PB9;
constexpr static GPIOPin<RCC::IOPENR::GPIOBEN, GPIOB::MODER::MODER10, GPIOB::OTYPER::OT10, GPIOB::OSPEEDR::OSPEEDR10, GPIOB::PUPDR::PUPDR10, GPIOB::IDR::IDR10, GPIOB::ODR::ODR10, GPIOB::BSRR::BS10, GPIOB::BRR::BR10, GPIOB::AFRH::AFSEL10> PB10;
constexpr static GPIOPin<RCC::IOPENR::GPIOBEN, GPIOB::MODER::MODER11, GPIOB::OTYPER::OT11, GPIOB::OSPEEDR::OSPEEDR11, GPIOB::PUPDR::PUPDR11, GPIOB::IDR::IDR11, GPIOB::ODR::ODR11, GPIOB::BSRR::BS11, GPIOB::BRR::BR11, GPIOB::AFRH::AFSEL11> PB11;
constexpr static GPIOPin<RCC::IOPENR::GPIOBEN, GPIOB::MODER::MODER12, GPIOB::OTYPER::OT12, GPIOB::OSPEEDR::OSPEEDR12, GPIOB::PUPDR::PUPDR12, GPIOB::IDR::IDR12, GPIOB::ODR::ODR12, GPIOB::BSRR::BS12, GPIOB::BRR::BR12, GPIOB::AFRH::AFSEL12> PB12;
constexpr static GPIOPin<RCC::IOPENR::GPIOBEN, GPIOB::MODER::MODER13, GPIOB::OTYPER::OT13, GPIOB::OSPEEDR::OSPEEDR13, GPIOB::PUPDR::PUPDR13, GPIOB::IDR::IDR13, GPIOB::ODR::ODR13, GPIOB::BSRR::BS13, GPIOB::BRR::BR13, GPIOB::AFRH::AFSEL13> PB13;
constexpr static GPIOPin<RCC::IOPENR::GPIOBEN, GPIOB::MODER::MODER14, GPIOB::OTYPER::OT14, GPIOB::OSPEEDR::OSPEEDR14, GPIOB::PUPDR::PUPDR14, GPIOB::IDR::IDR14, GPIOB::ODR::ODR14, GPIOB::BSRR::BS14, GPIOB::BRR::BR14, GPIOB::AFRH::AFSEL14> PB14;
constexpr static GPIOPin<RCC::IOPENR::GPIOBEN, GPIOB::MODER::MODER15, GPIOB::OTYPER::OT15, GPIOB::OSPEEDR::OSPEEDR15, GPIOB::PUPDR::PUPDR15, GPIOB::IDR::IDR15, GPIOB::ODR::ODR15, GPIOB::BSRR::BS15, GPIOB::BRR::BR15, GPIOB::AFRH::AFSEL15> PB15;

constexpr static GPIOPin<RCC::IOPENR::GPIOCEN, GPIOC::MODER::MODER0, GPIOC::OTYPER::OT0, GPIOC::OSPEEDR::OSPEEDR0, GPIOC::PUPDR::PUPDR0, GPIOC::IDR::IDR0, GPIOC::ODR::ODR0, GPIOC::BSRR::BS0, GPIOC::BRR::BR0, GPIOC::AFRL::AFSEL0> PC0;
constexpr static GPIOPin<RCC::IOPENR::GPIOCEN, GPIOC::MODER::MODER1, GPIOC::OTYPER::OT1, GPIOC::OSPEEDR::OSPEEDR1, GPIOC::PUPDR::PUPDR1, GPIOC::IDR::IDR1, GPIOC::ODR::ODR1, GPIOC::BSRR::BS1, GPIOC::BRR::BR1, GPIOC::AFRL::AFSEL1> PC1;
constexpr static GPIOPin<RCC::IOPENR::GPIOCEN, GPIOC::MODER::MODER2, GPIOC::OTYPER::OT2, GPIOC::OSPEEDR::OSPEEDR2, GPIOC::PUPDR::PUPDR2, GPIOC::IDR::IDR2, GPIOC::ODR::ODR2, GPIOC::BSRR::BS2, GPIOC::BRR::BR2, GPIOC::AFRL::AFSEL2> PC2;
constexpr static GPIOPin<RCC::IOPENR::GPIOCEN, GPIOC::MODER::MODER3, GPIOC::OTYPER::OT3, GPIOC::OSPEEDR::OSPEEDR3, GPIOC::PUPDR::PUPDR3, GPIOC::IDR::IDR3, GPIOC::ODR::ODR3, GPIOC::BSRR::BS3, GPIOC::BRR::BR3, GPIOC::AFRL::AFSEL3> PC3;
constexpr static GPIOPin<RCC::IOPENR::GPIOCEN, GPIOC::MODER::MODER4, GPIOC::OTYPER::OT4, GPIOC::OSPEEDR::OSPEEDR4, GPIOC::PUPDR::PUPDR4, GPIOC::IDR::IDR4, GPIOC::ODR::ODR4, GPIOC::BSRR::BS4, GPIOC::BRR::BR4, GPIOC::AFRL::AFSEL4> PC4;
constexpr static GPIOPin<RCC::IOPENR::GPIOCEN, GPIOC::MODER::MODER5, GPIOC::OTYPER::OT5, GPIOC::OSPEEDR::OSPEEDR5, GPIOC::PUPDR::PUPDR5, GPIOC::IDR::IDR5, GPIOC::ODR::ODR5, GPIOC::BSRR::BS5, GPIOC::BRR::BR5, GPIOC::AFRL::AFSEL5> PC5;
constexpr static GPIOPin<RCC::IOPENR::GPIOCEN, GPIOC::MODER::MODER6, GPIOC::OTYPER::OT6, GPIOC::OSPEEDR::OSPEEDR6, GPIOC::PUPDR::PUPDR6, GPIOC::IDR::IDR6, GPIOC::ODR::ODR6, GPIOC::BSRR::BS6, GPIOC::BRR::BR6, GPIOC::AFRL::AFSEL6> PC6;
constexpr static GPIOPin<RCC::IOPENR::GPIOCEN, GPIOC::MODER::MODER7, GPIOC::OTYPER::OT7, GPIOC::OSPEEDR::OSPEEDR7, GPIOC::PUPDR::PUPDR7, GPIOC::IDR::IDR7, GPIOC::ODR::ODR7, GPIOC::BSRR::BS7, GPIOC::BRR::BR7, GPIOC::AFRL::AFSEL7> PC7;
constexpr static GPIOPin<RCC::IOPENR::GPIOCEN, GPIOC::MODER::MODER8, GPIOC::OTYPER::OT8, GPIOC::OSPEEDR::OSPEEDR8, GPIOC::PUPDR::PUPDR8, GPIOC::IDR::IDR8, GPIOC::ODR::ODR8, GPIOC::BSRR::BS8, GPIOC::BRR::BR8, GPIOC::AFRH::AFSEL8> PC8;
constexpr static GPIOPin<RCC::IOPENR::GPIOCEN, GPIOC::MODER::MODER9, GPIOC::OTYPER::OT9, GPIOC::OSPEEDR::OSPEEDR9, GPIOC::PUPDR::PUPDR9, GPIOC::IDR::IDR9, GPIOC::ODR::ODR9, GPIOC::BSRR::BS9, GPIOC::BRR::BR9, GPIOC::AFRH::AFSEL9> PC9;
constexpr static GPIOPin<RCC::IOPENR::GPIOCEN, GPIOC::MODER::MODER10, GPIOC::OTYPER::OT10, GPIOC::OSPEEDR::OSPEEDR10, GPIOC::PUPDR::PUPDR10, GPIOC::IDR::IDR10, GPIOC::ODR::ODR10, GPIOC::BSRR::BS10, GPIOC::BRR::BR10, GPIOC::AFRH::AFSEL10> PC10;
constexpr static GPIOPin<RCC::IOPENR::GPIOCEN, GPIOC::MODER::MODER11, GPIOC::OTYPER::OT11, GPIOC::OSPEEDR::OSPEEDR11, GPIOC::PUPDR::PUPDR11, GPIOC::IDR::IDR11, GPIOC::ODR::ODR11, GPIOC::BSRR::BS11, GPIOC::BRR::BR11, GPIOC::AFRH::AFSEL11> PC11;
constexpr static GPIOPin<RCC::IOPENR::GPIOCEN, GPIOC::MODER::MODER12, GPIOC::OTYPER::OT12, GPIOC::OSPEEDR::OSPEEDR12, GPIOC::PUPDR::PUPDR12, GPIOC::IDR::IDR12, GPIOC::ODR::ODR12, GPIOC::BSRR::BS12, GPIOC::BRR::BR12, GPIOC::AFRH::AFSEL12> PC12;
constexpr static GPIOPin<RCC::IOPENR::GPIOCEN, GPIOC::MODER::MODER13, GPIOC::OTYPER::OT13, GPIOC::OSPEEDR::OSPEEDR13, GPIOC::PUPDR::PUPDR13, GPIOC::IDR::IDR13, GPIOC::ODR::ODR13, GPIOC::BSRR::BS13, GPIOC::BRR::BR13, GPIOC::AFRH::AFSEL13> PC13;
constexpr static GPIOPin<RCC::IOPENR::GPIOCEN, GPIOC::MODER::MODER14, GPIOC::OTYPER::OT14, GPIOC::OSPEEDR::OSPEEDR14, GPIOC::PUPDR::PUPDR14, GPIOC::IDR::IDR14, GPIOC::ODR::ODR14, GPIOC::BSRR::BS14, GPIOC::BRR::BR14, GPIOC::AFRH::AFSEL14> PC14;
constexpr static GPIOPin<RCC::IOPENR::GPIOCEN, GPIOC::MODER::MODER15, GPIOC::OTYPER::OT15, GPIOC::OSPEEDR::OSPEEDR15, GPIOC::PUPDR::PUPDR15, GPIOC::IDR::IDR15, GPIOC::ODR::ODR15, GPIOC::BSRR::BS15, GPIOC::BRR::BR15, GPIOC::AFRH::AFSEL15> PC15;

constexpr static GPIOPin<RCC::IOPENR::GPIODEN, GPIOD::MODER::MODER0, GPIOD::OTYPER::OT0, GPIOD::OSPEEDR::OSPEEDR0, GPIOD::PUPDR::PUPDR0, GPIOD::IDR::IDR0, GPIOD::ODR::ODR0, GPIOD::BSRR::BS0, GPIOD::BRR::BR0, GPIOD::AFRL::AFSEL0> PD0;
constexpr static GPIOPin<RCC::IOPENR::GPIODEN, GPIOD::MODER::MODER1, GPIOD::OTYPER::OT1, GPIOD::OSPEEDR::OSPEEDR1, GPIOD::PUPDR::PUPDR1, GPIOD::IDR::IDR1, GPIOD::ODR::ODR1, GPIOD::BSRR::BS1, GPIOD::BRR::BR1, GPIOD::AFRL::AFSEL1> PD1;
constexpr static GPIOPin<RCC::IOPENR::GPIODEN, GPIOD::MODER::MODER2, GPIOD::OTYPER::OT2, GPIOD::OSPEEDR::OSPEEDR2, GPIOD::PUPDR::PUPDR2, GPIOD::IDR::IDR2, GPIOD::ODR::ODR2, GPIOD::BSRR::BS2, GPIOD::BRR::BR2, GPIOD::AFRL::AFSEL2> PD2;
constexpr static GPIOPin<RCC::IOPENR::GPIODEN, GPIOD::MODER::MODER3, GPIOD::OTYPER::OT3, GPIOD::OSPEEDR::OSPEEDR3, GPIOD::PUPDR::PUPDR3, GPIOD::IDR::IDR3, GPIOD::ODR::ODR3, GPIOD::BSRR::BS3, GPIOD::BRR::BR3, GPIOD::AFRL::AFSEL3> PD3;
constexpr static GPIOPin<RCC::IOPENR::GPIODEN, GPIOD::MODER::MODER4, GPIOD::OTYPER::OT4, GPIOD::OSPEEDR::OSPEEDR4, GPIOD::PUPDR::PUPDR4, GPIOD::IDR::IDR4, GPIOD::ODR::ODR4, GPIOD::BSRR::BS4, GPIOD::BRR::BR4, GPIOD::AFRL::AFSEL4> PD4;
constexpr static GPIOPin<RCC::IOPENR::GPIODEN, GPIOD::MODER::MODER5, GPIOD::OTYPER::OT5, GPIOD::OSPEEDR::OSPEEDR5, GPIOD::PUPDR::PUPDR5, GPIOD::IDR::IDR5, GPIOD::ODR::ODR5, GPIOD::BSRR::BS5, GPIOD::BRR::BR5, GPIOD::AFRL::AFSEL5> PD5;
constexpr static GPIOPin<RCC::IOPENR::GPIODEN, GPIOD::MODER::MODER6, GPIOD::OTYPER::OT6, GPIOD::OSPEEDR::OSPEEDR6, GPIOD::PUPDR::PUPDR6, GPIOD::IDR::IDR6, GPIOD::ODR::ODR6, GPIOD::BSRR::BS6, GPIOD::BRR::BR6, GPIOD::AFRL::AFSEL6> PD6;
constexpr static GPIOPin<RCC::IOPENR::GPIODEN, GPIOD::MODER::MODER7, GPIOD::OTYPER::OT7, GPIOD::OSPEEDR::OSPEEDR7, GPIOD::PUPDR::PUPDR7, GPIOD::IDR::IDR7, GPIOD::ODR::ODR7, GPIOD::BSRR::BS7, GPIOD::BRR::BR7, GPIOD::AFRL::AFSEL7> PD7;
constexpr static GPIOPin<RCC::IOPENR::GPIODEN, GPIOD::MODER::MODER8, GPIOD::OTYPER::OT8, GPIOD::OSPEEDR::OSPEEDR8, GPIOD::PUPDR::PUPDR8, GPIOD::IDR::IDR8, GPIOD::ODR::ODR8, GPIOD::BSRR::BS8, GPIOD::BRR::BR8, GPIOD::AFRH::AFSEL8> PD8;
constexpr static GPIOPin<RCC::IOPENR::GPIODEN, GPIOD::MODER::MODER9, GPIOD::OTYPER::OT9, GPIOD::OSPEEDR::OSPEEDR9, GPIOD::PUPDR::PUPDR9, GPIOD::IDR::IDR9, GPIOD::ODR::ODR9, GPIOD::BSRR::BS9, GPIOD::BRR::BR9, GPIOD::AFRH::AFSEL9> PD9;
constexpr static GPIOPin<RCC::IOPENR::GPIODEN, GPIOD::MODER::MODER10, GPIOD::OTYPER::OT10, GPIOD::OSPEEDR::OSPEEDR10, GPIOD::PUPDR::PUPDR10, GPIOD::IDR::IDR10, GPIOD::ODR::ODR10, GPIOD::BSRR::BS10, GPIOD::BRR::BR10, GPIOD::AFRH::AFSEL10> PD10;
constexpr static GPIOPin<RCC::IOPENR::GPIODEN, GPIOD::MODER::MODER11, GPIOD::OTYPER::OT11, GPIOD::OSPEEDR::OSPEEDR11, GPIOD::PUPDR::PUPDR11, GPIOD::IDR::IDR11, GPIOD::ODR::ODR11, GPIOD::BSRR::BS11, GPIOD::BRR::BR11, GPIOD::AFRH::AFSEL11> PD11;
constexpr static GPIOPin<RCC::IOPENR::GPIODEN, GPIOD::MODER::MODER12, GPIOD::OTYPER::OT12, GPIOD::OSPEEDR::OSPEEDR12, GPIOD::PUPDR::PUPDR12, GPIOD::IDR::IDR12, GPIOD::ODR::ODR12, GPIOD::BSRR::BS12, GPIOD::BRR::BR12, GPIOD::AFRH::AFSEL12> PD12;
constexpr static GPIOPin<RCC::IOPENR::GPIODEN, GPIOD::MODER::MODER13, GPIOD::OTYPER::OT13, GPIOD::OSPEEDR::OSPEEDR13, GPIOD::PUPDR::PUPDR13, GPIOD::IDR::IDR13, GPIOD::ODR::ODR13, GPIOD::BSRR::BS13, GPIOD::BRR::BR13, GPIOD::AFRH::AFSEL13> PD13;
constexpr static GPIOPin<RCC::IOPENR::GPIODEN, GPIOD::MODER::MODER14, GPIOD::OTYPER::OT14, GPIOD::OSPEEDR::OSPEEDR14, GPIOD::PUPDR::PUPDR14, GPIOD::IDR::IDR14, GPIOD::ODR::ODR14, GPIOD::BSRR::BS14, GPIOD::BRR::BR14, GPIOD::AFRH::AFSEL14> PD14;
constexpr static GPIOPin<RCC::IOPENR::GPIODEN, GPIOD::MODER::MODER15, GPIOD::OTYPER::OT15, GPIOD::OSPEEDR::OSPEEDR15, GPIOD::PUPDR::PUPDR15, GPIOD::IDR::IDR15, GPIOD::ODR::ODR15, GPIOD::BSRR::BS15, GPIOD::BRR::BR15, GPIOD::AFRH::AFSEL15> PD15;

constexpr static GPIOPin<RCC::IOPENR::GPIOFEN, GPIOF::MODER::MODER0, GPIOF::OTYPER::OT0, GPIOF::OSPEEDR::OSPEEDR0, GPIOF::PUPDR::PUPDR0, GPIOF::IDR::IDR0, GPIOF::ODR::ODR0, GPIOF::BSRR::BS0, GPIOF::BRR::BR0, GPIOF::AFRL::AFSEL0> PF0;
constexpr static GPIOPin<RCC::IOPENR::GPIOFEN, GPIOF::MODER::MODER1, GPIOF::OTYPER::OT1, GPIOF::OSPEEDR::OSPEEDR1, GPIOF::PUPDR::PUPDR1, GPIOF::IDR::IDR1, GPIOF::ODR::ODR1, GPIOF::BSRR::BS1, GPIOF::BRR::BR1, GPIOF::AFRL::AFSEL1> PF1;
constexpr static GPIOPin<RCC::IOPENR::GPIOFEN, GPIOF::MODER::MODER2, GPIOF::OTYPER::OT2, GPIOF::OSPEEDR::OSPEEDR2, GPIOF::PUPDR::PUPDR2, GPIOF::IDR::IDR2, GPIOF::ODR::ODR2, GPIOF::BSRR::BS2, GPIOF::BRR::BR2, GPIOF::AFRL::AFSEL2> PF2;
constexpr static GPIOPin<RCC::IOPENR::GPIOFEN, GPIOF::MODER::MODER3, GPIOF::OTYPER::OT3, GPIOF::OSPEEDR::OSPEEDR3, GPIOF::PUPDR::PUPDR3, GPIOF::IDR::IDR3, GPIOF::ODR::ODR3, GPIOF::BSRR::BS3, GPIOF::BRR::BR3, GPIOF::AFRL::AFSEL3> PF3;
constexpr static GPIOPin<RCC::IOPENR::GPIOFEN, GPIOF::MODER::MODER4, GPIOF::OTYPER::OT4, GPIOF::OSPEEDR::OSPEEDR4, GPIOF::PUPDR::PUPDR4, GPIOF::IDR::IDR4, GPIOF::ODR::ODR4, GPIOF::BSRR::BS4, GPIOF::BRR::BR4, GPIOF::AFRL::AFSEL4> PF4;
constexpr static GPIOPin<RCC::IOPENR::GPIOFEN, GPIOF::MODER::MODER5, GPIOF::OTYPER::OT5, GPIOF::OSPEEDR::OSPEEDR5, GPIOF::PUPDR::PUPDR5, GPIOF::IDR::IDR5, GPIOF::ODR::ODR5, GPIOF::BSRR::BS5, GPIOF::BRR::BR5, GPIOF::AFRL::AFSEL5> PF5;
constexpr static GPIOPin<RCC::IOPENR::GPIOFEN, GPIOF::MODER::MODER6, GPIOF::OTYPER::OT6, GPIOF::OSPEEDR::OSPEEDR6, GPIOF::PUPDR::PUPDR6, GPIOF::IDR::IDR6, GPIOF::ODR::ODR6, GPIOF::BSRR::BS6, GPIOF::BRR::BR6, GPIOF::AFRL::AFSEL6> PF6;
constexpr static GPIOPin<RCC::IOPENR::GPIOFEN, GPIOF::MODER::MODER7, GPIOF::OTYPER::OT7, GPIOF::OSPEEDR::OSPEEDR7, GPIOF::PUPDR::PUPDR7, GPIOF::IDR::IDR7, GPIOF::ODR::ODR7, GPIOF::BSRR::BS7, GPIOF::BRR::BR7, GPIOF::AFRL::AFSEL7> PF7;
constexpr static GPIOPin<RCC::IOPENR::GPIOFEN, GPIOF::MODER::MODER8, GPIOF::OTYPER::OT8, GPIOF::OSPEEDR::OSPEEDR8, GPIOF::PUPDR::PUPDR8, GPIOF::IDR::IDR8, GPIOF::ODR::ODR8, GPIOF::BSRR::BS8, GPIOF::BRR::BR8, GPIOF::AFRH::AFSEL8> PF8;
constexpr static GPIOPin<RCC::IOPENR::GPIOFEN, GPIOF::MODER::MODER9, GPIOF::OTYPER::OT9, GPIOF::OSPEEDR::OSPEEDR9, GPIOF::PUPDR::PUPDR9, GPIOF::IDR::IDR9, GPIOF::ODR::ODR9, GPIOF::BSRR::BS9, GPIOF::BRR::BR9, GPIOF::AFRH::AFSEL9> PF9;
constexpr static GPIOPin<RCC::IOPENR::GPIOFEN, GPIOF::MODER::MODER10, GPIOF::OTYPER::OT10, GPIOF::OSPEEDR::OSPEEDR10, GPIOF::PUPDR::PUPDR10, GPIOF::IDR::IDR10, GPIOF::ODR::ODR10, GPIOF::BSRR::BS10, GPIOF::BRR::BR10, GPIOF::AFRH::AFSEL10> PF10;
constexpr static GPIOPin<RCC::IOPENR::GPIOFEN, GPIOF::MODER::MODER11, GPIOF::OTYPER::OT11, GPIOF::OSPEEDR::OSPEEDR11, GPIOF::PUPDR::PUPDR11, GPIOF::IDR::IDR11, GPIOF::ODR::ODR11, GPIOF::BSRR::BS11, GPIOF::BRR::BR11, GPIOF::AFRH::AFSEL11> PF11;
constexpr static GPIOPin<RCC::IOPENR::GPIOFEN, GPIOF::MODER::MODER12, GPIOF::OTYPER::OT12, GPIOF::OSPEEDR::OSPEEDR12, GPIOF::PUPDR::PUPDR12, GPIOF::IDR::IDR12, GPIOF::ODR::ODR12, GPIOF::BSRR::BS12, GPIOF::BRR::BR12, GPIOF::AFRH::AFSEL12> PF12;
constexpr static GPIOPin<RCC::IOPENR::GPIOFEN, GPIOF::MODER::MODER13, GPIOF::OTYPER::OT13, GPIOF::OSPEEDR::OSPEEDR13, GPIOF::PUPDR::PUPDR13, GPIOF::IDR::IDR13, GPIOF::ODR::ODR13, GPIOF::BSRR::BS13, GPIOF::BRR::BR13, GPIOF::AFRH::AFSEL13> PF13;
constexpr static GPIOPin<RCC::IOPENR::GPIOFEN, GPIOF::MODER::MODER14, GPIOF::OTYPER::OT14, GPIOF::OSPEEDR::OSPEEDR14, GPIOF::PUPDR::PUPDR14, GPIOF::IDR::IDR14, GPIOF::ODR::ODR14, GPIOF::BSRR::BS14, GPIOF::BRR::BR14, GPIOF::AFRH::AFSEL14> PF14;
constexpr static GPIOPin<RCC::IOPENR::GPIOFEN, GPIOF::MODER::MODER15, GPIOF::OTYPER::OT15, GPIOF::OSPEEDR::OSPEEDR15, GPIOF::PUPDR::PUPDR15, GPIOF::IDR::IDR15, GPIOF::ODR::ODR15, GPIOF::BSRR::BS15, GPIOF::BRR::BR15, GPIOF::AFRH::AFSEL15> PF15;

template<RegisterField RCCENR, typename _I2C>
struct I2CDevice {
    using I2C = _I2C;

    enum class Speed {
        Standard100KHz,
        Fast400KHz,
        Fast1MHz,
    };

    I2CDevice(bool master_or_slave, u8 address, Speed speed, bool stretch = true) {
        RCCENR = true;
        I2C::CR1::PE = false; // Disable I2C Peripheral
        I2C::TIMINGR::SDADEL = 0x00; // tHOLD = 0 ns
        if (speed == Speed::Standard100KHz) {
            // I2CCLK@64MHz, PRESC=1 -> 1 tick = 31.25 ns
            I2C::TIMINGR::PRESC = 0x01;
            I2C::TIMINGR::SCLDEL = 0x08; // tSETUP = 250 ns
            I2C::TIMINGR::SCLH = 0x9F; // tSCL_HIGH = 5000 ns
            I2C::TIMINGR::SCLL = 0x9F; // tSCL_LOW = 5000 ns
            I2C::CR1::ANFOFF = 0x00; // Analog Filter ON
        } else if (speed == Speed::Fast400KHz) {
            // I2CCLK@64MHz, PRESC=0 -> 1 tick = 15.625 ns
            I2C::TIMINGR::PRESC = 0x00;
            I2C::TIMINGR::SCLDEL = 0x07; // tSETUP = 109.375 ns
            I2C::TIMINGR::SCLH = 0x3F; // tSCL_HIGH = 1000 ns
            I2C::TIMINGR::SCLL = 0x5F; // tSCL_LOW = 1500 ns
            I2C::CR1::ANFOFF = 0x01; // Analog Filter OFF
        } else if (speed == Speed::Fast1MHz) {
            // I2CCLK@64MHz, PRESC=0 -> 1 tick = 15.625 ns
            RCC::APBENR2::SYSCFGEN = true;
            SYSCFG::CFGR1::I2C2_FMP = true;
            I2C::TIMINGR::PRESC = 0x00;
            I2C::TIMINGR::SCLDEL = 0x04; // tSETUP = 62.5 ns
            I2C::TIMINGR::SCLH = 0x1F; // tSCL_HIGH = 500 ns
            I2C::TIMINGR::SCLL = 0x1F; // tSCL_LOW = 500 ns
            I2C::CR1::ANFOFF = 0x01; // Analog Filter OFF
        }
        I2C::CR1::NOSTRETCH = !stretch; // Stretching Clock by default
        if (!master_or_slave) {
            I2C::OAR1::OA1EN = true;
            I2C::OAR1::OA1MODE = 0x00;
            I2C::OAR1::OA1_0 = address & 0x03;
            I2C::OAR1::OA1_7_1 = (address & 0xFC) >> 2;
        }
        // Enable I2C Peripheral
        I2C::CR1::PE = true;
    }

    void Send(u8 addr, const u8* bytes, u8 len) const {
        I2C::CR2::ADD10 = 0x00; // 7bit address
        I2C::CR2::SADD = addr << 1; // 7bit address in SADD[7:1]
        I2C::CR2::RD_WRN = 0x00; // Master Transfer
        I2C::CR2::NBYTES = len;
        I2C::CR2::AUTOEND = 0x01; // Automatic end mode
        I2C::CR2::START = 0x01; // Generate START condition
        for (u8 i = 0; i < len; i++) {
            while (I2C::ISR::TXIS != true) {}
            I2C::TXDR::TXDATA = bytes[i];
        }
        while (I2C::ISR::STOPF != true) {}
        I2C::ICR::STOPCF = 0x01; // Clear STOPF
    }

    void Recv(u8 addr, u8* bytes, u8 len) const {
        I2C::CR2::ADD10 = 0x00; // 7bit address
        I2C::CR2::SADD = addr << 1; // 7bit address in SADD[7:1]
        I2C::CR2::RD_WRN = 0x01; // Master Transfer (Read)
        I2C::CR2::NBYTES = len;
        I2C::CR2::AUTOEND = 0x01; // Automatic end mode
        I2C::CR2::START = 0x01; // Generate START condition
        for (u8 i = 0; i < len; i++) {
            while (I2C::ISR::RXNE != true) {}
            bytes[i] = static_cast<u8>(I2C::RXDR::RXDATA);
        }
        while (I2C::ISR::STOPF != true) {}
        I2C::ICR::STOPCF = 0x01; // Clear STOPF
    }
};

using I2CDevice1 = I2CDevice<RCC::APBENR1::I2C1EN, I2C1>;
using I2CDevice2 = I2CDevice<RCC::APBENR1::I2C2EN, I2C2>;

template<RegisterField RCCENR, typename _SPI>
struct SPIDevice {
    SPIDevice() {
        RCCENR = true;
    }
};

template<RegisterField RCCENR, typename _ADC>
struct ADCSampler {
    using ADC = _ADC;

    enum class SampleTime {
        CYCLES_1_5,
        CYCLES_3_5,
        CYCLES_7_5,
        CYCLES_12_5,
        CYCLES_19_5,
        CYCLES_39_5,
        CYCLES_79_5,
        CYCLES_160_5,
    };

    enum class Resolution {
        BITS12,
        BITS10,
        BITS8,
        BITS6,
    };

    ADCSampler(Resolution resolution, SampleTime timing) : result_{}, ch_msk_(0) {
        RCCENR = true;
        // ADC Calibration
        ADC::ADC_CFGR2::CKMODE = 0x02; // PCLK/4 16MHz
        ADC::ADC_CR::ADVREGEN = true;
        timer_sleep(20); // From STM32G030C8T6 Datasheet
        ADC::ADC_CR::ADCAL = true;
        while (ADC::ADC_ISR::EOCAL != true) {} // Wait for Calibration
        ADC::ADC_CFGR1::RES = static_cast<u32>(resolution);
        ADC::ADC_SMPR::SMP1 = static_cast<u32>(timing); // All convertion using SMP1
        ADC::ADC_CFGR1::CONT = 0x00; // No continuous
        ADC::ADC_CFGR1::DISCEN = 0x00; // Convert all channel by a ADSTART calling
        ADC::ADC_CFGR1::OVRMOD = 0x01; // Ignore OVR
        ADC::ADC_ISR::ADRDY = true; // Clear ADCRDY bit
        ADC::ADC_CR::ADEN = true;
        while (ADC::ADC_ISR::ADRDY != true) {} // Wait for ADC ready
    }

    template<u32 CHANNEL>
    u16& CreateSampler() {
        static_assert(CHANNEL <= 18);
        if constexpr (CHANNEL == 0) {
            ADC::ADC_SMPR::SMPSEL0 = 0x00;
            ADC::ADC_CHSELR_0::CHSEL0 = 0x01;
        } else if (CHANNEL == 1) {
            ADC::ADC_SMPR::SMPSEL1 = 0x00;
            ADC::ADC_CHSELR_0::CHSEL1 = 0x01;
        } else if (CHANNEL == 2) {
            ADC::ADC_SMPR::SMPSEL2 = 0x00;
            ADC::ADC_CHSELR_0::CHSEL2 = 0x01;
        } else if (CHANNEL == 3) {
            ADC::ADC_SMPR::SMPSEL3 = 0x00;
            ADC::ADC_CHSELR_0::CHSEL3 = 0x01;
        } else if (CHANNEL == 4) {
            ADC::ADC_SMPR::SMPSEL4 = 0x00;
            ADC::ADC_CHSELR_0::CHSEL4 = 0x01;
        } else if (CHANNEL == 5) {
            ADC::ADC_SMPR::SMPSEL5 = 0x00;
            ADC::ADC_CHSELR_0::CHSEL5 = 0x01;
        } else if (CHANNEL == 6) {
            ADC::ADC_SMPR::SMPSEL6 = 0x00;
            ADC::ADC_CHSELR_0::CHSEL6 = 0x01;
        } else if (CHANNEL == 7) {
            ADC::ADC_SMPR::SMPSEL7 = 0x00;
            ADC::ADC_CHSELR_0::CHSEL7 = 0x01;
        } else if (CHANNEL == 8) {
            ADC::ADC_SMPR::SMPSEL8 = 0x00;
            ADC::ADC_CHSELR_0::CHSEL8 = 0x01;
        } else if (CHANNEL == 9) {
            ADC::ADC_SMPR::SMPSEL9 = 0x00;
            ADC::ADC_CHSELR_0::CHSEL9 = 0x01;
        } else if (CHANNEL == 10) {
            ADC::ADC_SMPR::SMPSEL10 = 0x00;
            ADC::ADC_CHSELR_0::CHSEL10 = 0x01;
        } else if (CHANNEL == 11) {
            ADC::ADC_SMPR::SMPSEL11 = 0x00;
            ADC::ADC_CHSELR_0::CHSEL11 = 0x01;
        } else if (CHANNEL == 12) {
            ADC::ADC_SMPR::SMPSEL12 = 0x00;
            ADC::ADC_CHSELR_0::CHSEL12 = 0x01;
        } else if (CHANNEL == 13) {
            ADC::ADC_SMPR::SMPSEL13 = 0x00;
            ADC::ADC_CHSELR_0::CHSEL13 = 0x01;
        } else if (CHANNEL == 14) {
            ADC::ADC_SMPR::SMPSEL14 = 0x00;
            ADC::ADC_CHSELR_0::CHSEL14 = 0x01;
        } else if (CHANNEL == 15) {
            ADC::ADC_SMPR::SMPSEL15 = 0x00;
            ADC::ADC_CHSELR_0::CHSEL15 = 0x01;
        } else if (CHANNEL == 16) {
            ADC::ADC_SMPR::SMPSEL16 = 0x00;
            ADC::ADC_CHSELR_0::CHSEL16 = 0x01;
        } else if (CHANNEL == 17) {
            ADC::ADC_SMPR::SMPSEL17 = 0x00;
            ADC::ADC_CHSELR_0::CHSEL17 = 0x01;
        } else if (CHANNEL == 18) {
            ADC::ADC_SMPR::SMPSEL18 = 0x00;
            ADC::ADC_CHSELR_0::CHSEL18 = 0x01;
        }
        SelelctBit(CHANNEL);
        while (ADC::ADC_ISR::CCRDY != 1) {}
        ADC::ADC_ISR::CCRDY = 1;
        return result_[CHANNEL];
    }

    static float ToVoltage(u16 value) {
        return (static_cast<float>(value) / 4096.0f) * 3.3f;
    }

    void Sample() {
        ADC::ADC_CR::ADSTART = true;
        for (u32 i = 0; i < count_of(result_); ++i) {
            if (ValidateBit(i)) {
                while (!ADC::ADC_ISR::EOC) {}
                result_[i] = ADC::ADC_DR::DATA;
            }
        }
        while (!ADC::ADC_ISR::EOS) {}
        ADC::ADC_ISR::EOS = 1;
    }

private:
    u16 result_[19];
    u32 ch_msk_;

    void SelelctBit(u32 N) {
        ch_msk_ |= 1 << N;
    }

    bool ValidateBit(u32 N) const {
        return (ch_msk_ & 1 << N) >> N;
    }
};

using ADCSampler1 = ADCSampler<RCC::APBENR2::ADCEN, ADC>;

template<RegisterField RCCENR, typename _TIM>
struct PWMGenerator {
    using TIM = _TIM;

    PWMGenerator(u32 freq) {
        RCCENR = true;
        u32 pclk = clk_cfg.base_freq * clk_cfg.mp_factor;
        u32 div = pclk / freq;
        u32 psc = 0;
        while (div / (psc + 1) > 0xFFFF) ++psc;
        TIM::PSC::PSCV = psc;
        TIM::ARR::ARRV = div / (psc + 1) - 1;
        arr_ = TIM::ARR::ARRV;
        TIM::CR1::CEN = true;
        if constexpr (std::is_same_v<TIM, TIM1>) {
            TIM1::BDTR::MOE = true;
        }
    }

    template<u32 N>
    void EnableChannel() {
        static_assert(N != 0);
        if constexpr (N == 1) {
            TIM::CCMR1_Output::CC1S = 0x00; // Output
            TIM::CCMR1_Output::OC1M = 0x06; // PWM Mode 1
            TIM::CCER::CC1E = true;
            TIM::CCER::CC1P = 0x00; // Positive duty
        } else if (N == 2) {
            TIM::CCMR1_Output::CC2S = 0x00;
            TIM::CCMR1_Output::OC2M = 0x06;
            TIM::CCER::CC2E = true;
            TIM::CCER::CC2P = 0x00;
        } else if (N == 3) {
            TIM::CCMR2_Output::CC3S = 0x00;
            TIM::CCMR2_Output::OC3M = 0x06;
            TIM::CCER::CC3E = true;
            TIM::CCER::CC3P = 0x00;
        } else if (N == 4) {
            TIM::CCMR2_Output::CC4S = 0x00;
            TIM::CCMR2_Output::OC4M = 0x06;
            TIM::CCER::CC4E = true;
            TIM::CCER::CC4P = 0x00; 
        }
    }

    template<u32 N>
    void SetDuty(u32 duty) {
        static_assert(N != 0);
        if (duty > 100) duty = 100;
        if constexpr (N == 1) {
            TIM::CCR1::CCR1V = (arr_ + 1) * duty / 100;
        } else if (N == 2) {
            TIM::CCR2::CCR2V = (arr_ + 1) * duty / 100;
        } else if (N == 3) {
            TIM::CCR3::CCR3V = (arr_ + 1) * duty / 100;
        } else if (N == 4) {
            TIM::CCR4::CCR4V = (arr_ + 1) * duty / 100;
        }
    }

    template<u32 N>
    void SetDutyF(float duty) {
        static_assert(N != 0);
        if (duty <= 0.0f) duty = 0.0f;
        if (duty > 100.0f) duty = 100.0f;
        if constexpr (N == 1) {
            TIM::CCR1::CCR1V = static_cast<u16>((arr_ + 1) * duty / 100.0f);
        } else if (N == 2) {
            TIM::CCR2::CCR2V = static_cast<u16>((arr_ + 1) * duty / 100.0f);
        } else if (N == 3) {
            TIM::CCR3::CCR3V = static_cast<u16>((arr_ + 1) * duty / 100.0f);
        } else if (N == 4) {
            TIM::CCR4::CCR4V = static_cast<u16>((arr_ + 1) * duty / 100.0f);
        }
    }
private:
    u32 arr_;
};

using PWMGenerator1 = PWMGenerator<RCC::APBENR2::TIM1EN, TIM1>;