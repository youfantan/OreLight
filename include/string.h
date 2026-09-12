#pragma once
#include <base.h>

template<typename T>
class literal {
    u32 size_;
    u8* ptr_;
public:
    constexpr static u32 ELEMENT_SIZE = sizeof(T);
    template<u32 N>
    literal(const T(&literal)[N]) : size_(N * ELEMENT_SIZE) {
        ptr_ = static_cast<u8*>(slab_alloc(size_));
        if (ptr_ == nullptr) {

        }
        memzero(ptr_, size_);
        memcpy(ptr_, literal, size_);
    }

    literal(const T* ptr, u32 length) : size_(length * ELEMENT_SIZE) {
        ptr_ = static_cast<u8*>(slab_alloc(size_));
        if (ptr_ == nullptr) {

        }
        memcpy(ptr_, ptr, size_);
    }

    literal(const literal&) = delete;
    literal(literal&& lt) noexcept : ptr_(lt.ptr_), size_(lt.size_) {
        lt.ptr_ = nullptr;
        lt.size_ = 0;
    }

    u32 length() const {
        return size_;
    }

    const T* ptr() const {
        return reinterpret_cast<T*>(ptr_);
    }

    operator const T*() const {
        return ptr();
    }

    const T& operator[](u32 i) const {
        return *reinterpret_cast<const T*>(ptr_ + i * ELEMENT_SIZE);
    }

    ~literal() {
        if (ptr_ != nullptr) {
            slab_free(ptr_);
            ptr_ = nullptr;
        }
    }
};

using u8literal = literal<char>;
using u32literal = literal<char32_t>;