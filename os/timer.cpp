#include <base.h>
#include <cortexm0_spec.h>
#include <sys_conf.h>

void timer_initialize() {
    u32 period = clk_cfg.base_freq * clk_cfg.mp_factor / 1000000; // 1us per period
    SysTick::CSR::CLKSOURCE = 0x01; // SysTick source reference to system clock
    SysTick::CSR::TICKINT = 0x00; // Disable interrupt
    SysTick::RVR::RELOAD = period - 1; // SysTick period is RELOAD + 1 cycles
}

void timer_sleep(u32 us) {
    if (us == 0) {
        return;
    }
    SysTick::CVR::CURRENT = 0;
    SysTick::CSR::ENABLE = true;
    while (us != 0) {
        while (SysTick::CSR::COUNTFLAG != 1) {}
        --us;
    }
    SysTick::CSR::ENABLE = false;
}