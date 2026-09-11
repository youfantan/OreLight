#include <base.h>
#include <sys_conf.h>
#include <device_spec.h>
#include <cortexm0_spec.h>
#include <utils.h>

extern "C" {

void system_init() {
    ClockInitialize();
}

int kernel_init() {
    timer_initialize();
    cron_init();
    slab_initialize();
    return 0;
}

}