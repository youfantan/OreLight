#pragma once

#include <base.h>

inline float ln(float x) {
    if (x <= 0.0f) return -1.0e30f;
    union { float f; u32 i; } v = { x };
    i32 e = (i32)((v.i >> 23) & 0xFFu) - 127;
    v.i = (v.i & 0x007FFFFFu) | 0x3F800000u;
    float m = v.f;
    float t = (m - 1.0f) / (m + 1.0f);
    float t2 = t * t;
    float lnm = 2.0f * t * (1.0f + t2 * (0.33333333f + t2 * (0.2f + t2 * 0.14285714f)));
    return (float)e * 0.69314718f + lnm;
}

inline float log2(float x) {
    return ln(x) * 1.44269504f;
}

inline float log10(float x) {
    return ln(x) * 0.43429448f;
}

inline float exp(float x) {
    if (x >  88.0f) return 3.4e38f;
    if (x < -88.0f) return 0.0f;
    float k = x * 1.44269504f;
    i32 n = (i32)(k >= 0.0f ? k + 0.5f : k - 0.5f);
    float r = k - (float)n;
    float u = r * 0.69314718f;
    float p = 1.0f + u * (1.0f + u * (0.5f + u * (0.16666667f + u * (0.04166667f + u * (0.00833333f + u * 0.00138889f)))));
    union { float f; i32 i; } s = { 1.0f };
    s.i += n << 23;
    return p * s.f;
}

inline float exp2(float p) {
    return exp(p * 0.69314718f);
}

inline float sqrt(float x) {
    if (x <= 0.0f) return 0.0f;
    union { float f; u32 i; } v = { x };
    i32 e = (i32)((v.i >> 23) & 0xFFu) - 127;
    v.i = (v.i & 0x007FFFFFu) | 0x3F800000u;
    float m = v.f;
    i32 h = e >> 1;
    float s = 1.0f + (m - 1.0f) * 0.5f;
    s = 0.5f * (s + m / s);
    s = 0.5f * (s + m / s);
    union { float f; i32 i; } r;
    r.f = (e & 1) ? s * 1.41421356f : s;
    if (r.f >= 2.0f) { r.f *= 0.5f; ++h; }
    r.i += h << 23;
    return r.f;
}

inline float fpow(float b, float p) {
    return exp(p * ln(b));
}