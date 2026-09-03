#pragma once
#include <base.h>

template<typename T, u32 N>
u32 count_of(T(&)[N]) {
    return N;
}

inline u32 round_up(float n) {
    if (n - static_cast<float>(static_cast<u32>(n)) >= 0.45f) {
        return static_cast<u32>(n) + 1;
    }
    return static_cast<u32>(n);
}