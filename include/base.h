#pragma once

extern "C" {
// global defination

typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed char i8;
typedef signed short i16;
typedef signed int i32;

// exported types

typedef struct {
    u32 fsysclk;
    u32 fpclk;
    u32 fqclk;
} system_profile;

typedef struct {
    u32 block_size;
    u32 slots;
} slab_profile;

typedef struct {
    u32 tick_high;
    u32 tick_low;
} tick;

enum oscillator_type {
    external_crystal_oscillator,
    internal_rc_oscillator
};

typedef struct {
    oscillator_type osc_type;
    u32 base_freq;
    u32 mp_factor;
    u32 pll_p;
    u32 pll_q;
} clock_profile;

typedef void* handle;

// exported functions

void slab_initialize();
void* slab_alloc(u32 size);
void slab_free(void* ptr);

void sched_initialize();

/*
 * Create process by a function pointer and process profile.
 * Sched will create a process context associated with the function pointer. process will be scheduled in many time slices until sched_destroy_process() is called.
 */
handle sched_create_process();

/*
 * Destroy process by handle.
 * A process should call this function at the end of the control flow. Sched will recycle all resources associated with this process.
 */
void sched_destroy_process(handle proc_handle);

/*
 * Disable processes schedule and switch.
 * Used in precision sequences control flow like software-implemented high speed bus.
 * When called, sched stop working, util sched_recovery_switching() is called; meanwhile SysTick context is also paused and stored, precision timer could only be used in this status.
 */
void sched_block_switching();

/*
 * Recovery process schedule and switch.
 * When called, sched continue working; SysTick will be reconfigured using stored context.
 */
void sched_recovery_switching();

void exception_initialize();
void exception_throw();

void timer_initialize();
void timer_sleep(u32 us);

void cron_init();
tick cron_ticks();

inline tick tick_add(tick a, tick b) {
    u32 lo = a.tick_low + b.tick_low;
    u32 carry = (lo < a.tick_low) ? 1 : 0;
    tick r = { a.tick_high + b.tick_high + carry, lo };
    return r;
}

inline tick tick_sub(tick a, tick b) {
    u32 lo = a.tick_low - b.tick_low;
    u32 borrow = (a.tick_low < b.tick_low) ? 1 : 0;
    tick r = { a.tick_high - b.tick_high - borrow, lo };
    return r;
}

}

enum access_type : u8 {
    RW = 0,
    R,
    W,
    R_WOnce,
    WOnce,
};

typedef struct {
    u8 off;
    u8 len;
    u8 access;
} RegisterFieldDescriptor;


inline void WriteRegisterField(u32 addr, u8 offset, u8 length, u32 value) {
    const u32 mask = (0xFFFFFFFF >> (32 - length)) << offset;
    *(volatile u32*)(addr) = (*(volatile u32*)(addr) & ~mask) | ((value << offset) & mask);
}

inline u32 ReadRegisterField(u32 addr, u8 offset, u8 length) {
    const u32 mask = (0xFFFFFFFF >> (32 - length)) << offset;
    return (*reinterpret_cast<volatile u32*>(addr) & mask) >> offset;
}

#ifdef __cplusplus

template<u32 ADDR, u8 OFFSET, u8 LENGTH>
inline void WriteRegisterField(u32 value) {
    constexpr static u32 mask = (0xFFFFFFFF >> (32 - LENGTH)) << OFFSET;
    *reinterpret_cast<volatile u32*>(ADDR) = (*reinterpret_cast<volatile u32*>(ADDR) & ~mask) | ((value << OFFSET) & mask);
}

template<u32 ADDR, u8 OFFSET, u8 LENGTH>
inline u32 ReadRegisterField() {
    constexpr static u32 mask = (0xFFFFFFFF >> (32 - LENGTH)) << OFFSET;
    return (*reinterpret_cast<volatile u32*>(ADDR) & mask) >> OFFSET;
}


template<u32 _ADDR, RegisterFieldDescriptor _RFD>
struct RegisterField {
    constexpr static u32 ADDR = _ADDR;
    constexpr static RegisterFieldDescriptor RFD = _RFD;

    const RegisterField& operator=(u32 value) const {
        Set(value);
        return *this;
    }

    operator u32() const {
        return Get();
    }

    void Set(u32 value) const {
        *reinterpret_cast<volatile u32*>(ADDR) = (*reinterpret_cast<volatile u32*>(ADDR) & ~mask) | ((value << RFD.off) & mask);
    }

    u32 Get() const {
        return (*reinterpret_cast<volatile u32*>(ADDR) & mask) >> RFD.off;
    }
private:
    constexpr static u32 mask = (0xFFFFFFFF >> (32 - RFD.len)) << RFD.off;
};

#define DECL_REGISTER(Base) \
template<RegisterFieldDescriptor RFD> \
using RegisterField = RegisterField<Base, RFD>

#endif

struct CharacterHeader {
    u32 unicode;
    u16 offset;
    u8 width;
    u8 height;
    u8 advance;
    i8 bearing_x;
    i8 bearing_y;
};

struct CharactersSet {
    const u8* data;
    u32 data_size;
    const CharacterHeader* headers;
    u32 headers_size;
};

inline void memzero(void* ptr, u32 size) {
    for (u32 i = 0; i < size; ++i) {
        ((char*)ptr)[i] = 0;
    }
}

inline u32 strlen(const char* str) {
    u32 l = 0;
    while (str[l] != 0) {
        ++l;
    }
    return l;
}

