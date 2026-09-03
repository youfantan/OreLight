#include <base.h>
#include <device_spec.h>

static volatile tick ticks;

extern "C" void TIM17_IRQHandler() {
    if (ticks.tick_low == 0xFFFFFFFF) {
        ticks.tick_low = 0;
        ticks.tick_high = ticks.tick_high + 1;
    } else {
        ticks.tick_low = ticks.tick_low + 1;
    }
    TIM17::SR::UIF = 0x00;
}

void cron_init() {
    u32 pclk = clk_cfg.base_freq * clk_cfg.mp_factor;
    u32 div = pclk / 1000;
    u16 psc = 0;
    while (div / (psc + 1) > 0xFFFF) ++psc;

    RCC::APBENR2::TIM17EN = true;
    TIM17::CR1::CEN = false;
    TIM17::PSC::PSCV = psc;
    TIM17::ARR::ARRV = div / (psc + 1) - 1;
    TIM17::EGR::UG = 0x01;
    TIM17::SR::UIF = 0x00;
    TIM17::DIER::UIE = true;
    *reinterpret_cast<volatile u32*>(0xE000E100) |= 1u << 22;
    TIM17::CR1::CEN = true;
}

tick cron_ticks() {
    tick t;
    do {
        t.tick_high = ticks.tick_high;
        t.tick_low = ticks.tick_low;
    } while (t.tick_high != ticks.tick_high);
    return t;
}
