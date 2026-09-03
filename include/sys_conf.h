#pragma once

#include <base.h>

constexpr static clock_profile clk_cfg {
    .osc_type = oscillator_type::external_crystal_oscillator,
    .base_freq = 8000000,
    .mp_factor = 8,
    .pll_p = 0,
    .pll_q = 0
};

constexpr slab_profile slab_prof[3] = {
    {
        .block_size = 32,
        .slots = 64
    },
    {
        .block_size = 64,
        .slots = 16
    },
    {
        .block_size = 256,
        .slots = 4
    }
};