#pragma once

#include <base.h>

constexpr static u32 SYSTICK_BASE = 0xE000E010;
constexpr static u32 SYSTICK_CSR_BASE = SYSTICK_BASE + 0x00;
constexpr static RegisterFieldDescriptor SYSTICK_CSR_ENABLE { 0, 1, RW };
constexpr static RegisterFieldDescriptor SYSTICK_CSR_TICKINT { 1, 1, RW };
constexpr static RegisterFieldDescriptor SYSTICK_CSR_CLKSOURCE { 2, 1, RW };
constexpr static RegisterFieldDescriptor SYSTICK_CSR_COUNTFLAG { 16, 1, R };

constexpr static u32 SYSTICK_RVR_BASE = SYSTICK_BASE + 0x04;
constexpr static RegisterFieldDescriptor SYSTICK_RVR_RELOAD { 0, 24, RW };

constexpr static u32 SYSTICK_CVR_BASE = SYSTICK_BASE + 0x08;
constexpr static RegisterFieldDescriptor SYSTICK_CVR_CURRENT { 0, 24, R_WOnce };

constexpr static u32 SYSTICK_CALIB_BASE = SYSTICK_BASE + 0x0C;
constexpr static RegisterFieldDescriptor SYSTICK_CALIB_TENMS { 0, 24, R };
constexpr static RegisterFieldDescriptor SYSTICK_CALIB_SKEW { 30, 1, R };
constexpr static RegisterFieldDescriptor SYSTICK_CALIB_NOREF { 31, 1, R };

struct SysTick {
    struct CSR {
        DECL_REGISTER(SYSTICK_CSR_BASE);
        constexpr static RegisterField<SYSTICK_CSR_ENABLE> ENABLE {};
        constexpr static RegisterField<SYSTICK_CSR_TICKINT> TICKINT {};
        constexpr static RegisterField<SYSTICK_CSR_CLKSOURCE> CLKSOURCE {};
        constexpr static RegisterField<SYSTICK_CSR_COUNTFLAG> COUNTFLAG {};
    };

    struct RVR {
        DECL_REGISTER(SYSTICK_RVR_BASE);
        constexpr static RegisterField<SYSTICK_RVR_RELOAD> RELOAD {};
    };

    struct CVR {
        DECL_REGISTER(SYSTICK_CVR_BASE);
        constexpr static RegisterField<SYSTICK_CVR_CURRENT> CURRENT {};
    };

    struct CALIB {
        DECL_REGISTER(SYSTICK_CALIB_BASE);
        constexpr static RegisterField<SYSTICK_CALIB_TENMS> TENMS {};
        constexpr static RegisterField<SYSTICK_CALIB_SKEW> SKEW {};
        constexpr static RegisterField<SYSTICK_CALIB_NOREF> NOREF {};
    };
};