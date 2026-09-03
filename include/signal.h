#pragma once

#include <base.h>

template<typename T, u32 N>
class AvgFilter {
    T buffer_[N];
    u32 index_;
public:
    AvgFilter() : buffer_{}, index_(0) {

    }

    T Input(T in) {
        buffer_[index_] = in;
        T total = 0;
        for (auto v : buffer_) {
            total += v;
        }
        total = total / N;
        ++index_;
        if (index_ == N) {
            index_ = 0;
        }
        return total;
    }
};