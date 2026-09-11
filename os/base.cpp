#include <base.h>

extern "C" {

void* memset(void* dst, int val, u32 len) {
    u8* d = static_cast<u8*>(dst);
    for (u32 i = 0; i < len; ++i) {
        d[i] = static_cast<u8>(val);
    }
    return dst;
}

void* memcpy(void* dst, const void* src, u32 len) {
    const u8* s = static_cast<const u8*>(src);
    u8* d = static_cast<u8*>(dst);
    for (u32 i = 0; i < len; ++i) {
        d[i] = s[i];
    }
    return dst;
}

void* memmove(void* dst, const void* src, u32 len) {
    const u8* s = static_cast<const u8*>(src);
    u8* d = static_cast<u8*>(dst);
    if (d < s) {
        for (u32 i = 0; i < len; ++i) {
            d[i] = s[i];
        }
    } else if (d > s) {
        for (u32 i = len; i > 0; --i) {
            d[i - 1] = s[i - 1];
        }
    }
    return dst;
}

void memzero(void* ptr, u32 size) {
    for (u32 i = 0; i < size; ++i) {
        ((char*)ptr)[i] = 0;
    }
}

u32 strlen(const char* str) {
    if (str == nullptr) return 0;
    u32 l = 0;
    while (str[l] != 0) {
        ++l;
    }
    return l;
}


}