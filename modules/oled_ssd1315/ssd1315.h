#pragma once

#include <base.h>
#include <string.h>
#include <algorithm>

template<typename Device>
class SSD1315 {
    constexpr static u8 WIDTH = 128;
    constexpr static u8 HEIGHT = 64;
    constexpr static u8 INIT_CMDS[] = {
        0x00,
        0xAE,
        0xD5, 0x80,
        0xA8, 0x3F,
        0xD3, 0x00,
        0x40,
        0x8D, 0x14,
        0x20, 0x00,
        0xA1,
        0xC8,
        0xDA, 0x12,
        0x81, 0xCF,
        0xD9, 0xF1,
        0xDB, 0x40,
        0xA4,
        0xA6,
        0xAF,
    };
    constexpr static u8 ADDR = 0x3C;

    u8 frame_buffer_[WIDTH * HEIGHT / 8];
    Device& device_;

    bool DrawCharacters(u8 x, u8 y, const u32* str, u32 len, const CharactersSet& font) {
        if (str == nullptr || len == 0 || font.data == nullptr || font.headers == nullptr) {
            return false;
        }
        i32 max_bearing = 0;
        for (u32 i = 0; i < font.headers_size; i++) {
            if (font.headers[i].bearing_y > max_bearing) {
                max_bearing = font.headers[i].bearing_y;
            }
        }
        const i32 baseline = static_cast<i32>(y) + max_bearing;
        i32 begin_x = x;
        for (u32 i = 0; i < len; i++) {
            const CharacterHeader* h = nullptr;
            for (u32 j = 0; j < font.headers_size; j++) {
                if (font.headers[j].unicode == str[i]) {
                    h = &font.headers[j];
                    break;
                }
            }
            if (h == nullptr) {
                for (u32 j = 0; j < font.headers_size; j++) {
                    if (font.headers[j].unicode == 63) {
                        h = &font.headers[j];
                        break;
                    }
                }
            }
            if (h == nullptr) {
                continue;
            }
            const u32 bpr = (h->width + 7) / 8;
            const i32 gx = begin_x + h->bearing_x;
            const i32 gy = baseline - h->bearing_y;
            for (u32 r = 0; r < h->height; r++) {
                const i32 row = gy + static_cast<i32>(r);
                if (row < 0 || row >= static_cast<i32>(HEIGHT)) {
                    continue;
                }
                i32 c0 = gx;
                if (c0 < 0) {
                    c0 = 0;
                }
                i32 c1 = gx + static_cast<i32>(h->width);
                if (c1 > static_cast<i32>(WIDTH)) {
                    c1 = WIDTH;
                }
                if (c1 <= c0) {
                    continue;
                }
                const u8* src = font.data + h->offset + r * bpr;
                u8* dst = frame_buffer_ + row * (WIDTH / 8);
                for (i32 c = c0; c < c1; c++) {
                    const i32 rel = c - gx;
                    const u8 fb_bit = static_cast<u8>(1u << (c & 7));
                    if (src[rel >> 3] & static_cast<u8>(1u << (rel & 7))) {
                        dst[c >> 3] |= fb_bit;
                    } else {
                        dst[c >> 3] &= static_cast<u8>(~fb_bit);
                    }
                }
            }
            begin_x += h->advance;
        }
        return true;
    }
public:
    SSD1315(Device& dev) : device_(dev) {
        memzero(frame_buffer_, sizeof(frame_buffer_));
        device_.Send(ADDR, INIT_CMDS, sizeof(INIT_CMDS));
    }

    template<typename... Drawables>
    bool DrawText(u8 x, u8 y, CharactersSet& font, Drawables&&... drawables) {
        u32 total = 0;
        ((total += drawables.Length()), ...);
        if (total == 0) {
            return false;
        }
        u32* buf = static_cast<u32*>(slab_alloc(sizeof(u32) * total));
        if (buf == nullptr) {
            return false;
        }
        u32* p = buf;
        ((drawables.Fill(p), p += drawables.Length()), ...);
        const bool r = DrawCharacters(x, y, buf, total, font);
        slab_free(buf);
        return r;
    }

    bool DrawPixel(u8 x, u8 y, u8 pix) {
        if (x >= WIDTH || y >= HEIGHT) {
            return false;
        }
        u16 idx = y * (WIDTH / 8) + (x / 8);
        if (pix) {
            frame_buffer_[idx] |= 1u << (x % 8);
        } else {
            frame_buffer_[idx] &= ~(1u << (x % 8));
        }
        return true;
    }

    void Present() {
        for (u8 page = 0; page < HEIGHT / 8; page++) {
            const u8 page_cmd[] = { 0x00, static_cast<u8>(0xB0 | page), 0x00, 0x10 };
            device_.Send(ADDR, page_cmd, sizeof(page_cmd));
            u8 data[1 + WIDTH];
            data[0] = 0x40;
            for (u8 col = 0; col < WIDTH; col++) {
                u8 byte = 0;
                for (u8 row = 0; row < 8; row++) {
                    const u16 idx = (page * 8 + row) * (WIDTH / 8) + (col / 8);
                    if (frame_buffer_[idx] & (1u << (col % 8))) {
                        byte |= 1u << row;
                    }
                }
                data[1 + col] = byte;
            }
            device_.Send(ADDR, data, 1 + WIDTH);
        }
        memzero(frame_buffer_, sizeof(frame_buffer_));
    }

    struct FloatDrawable {
        FloatDrawable(float f, u32 integer_digits, u32 float_digits) {
            str_ = nullptr;
            len_ = 0;
            if (integer_digits > 18) {
                integer_digits = 18;
            }
            if (float_digits > 18) {
                float_digits = 18;
            }
            const u32 need = 1 + integer_digits + (float_digits > 0 ? 1 + float_digits : 0);
            u8* buf = static_cast<u8*>(slab_alloc(need));
            if (buf == nullptr) {
                return;
            }
            str_ = buf;
            len_ = need;
            bool neg = f < 0.0f;
            if (neg) {
                f = -f;
            }
            unsigned long long ipow = 1;
            for (u32 i = 0; i < integer_digits; ++i) {
                ipow *= 10;
            }
            unsigned long long scale = 1;
            for (u32 i = 0; i < float_digits; ++i) {
                scale *= 10;
            }
            double scaled = static_cast<double>(f) * static_cast<double>(scale) + 0.5;
            if (scaled > 18446744073709550000.0) {
                scaled = 18446744073709550000.0;
            }
            unsigned long long v = static_cast<unsigned long long>(scaled);
            unsigned long long ip = v / scale;
            unsigned long long fp = v % scale;
            if (ip >= ipow) {
                ip = ipow - 1;
                fp = scale - 1;
            }
            u32 w = 0;
            buf[w++] = neg ? static_cast<u8>('-') : static_cast<u8>(' ');
            for (u32 i = integer_digits; i > 0; --i) {
                buf[w + i - 1] = static_cast<u8>('0' + ip % 10);
                ip /= 10;
            }
            w += integer_digits;
            if (float_digits > 0) {
                buf[w++] = '.';
                for (u32 i = float_digits; i > 0; --i) {
                    buf[w + i - 1] = static_cast<u8>('0' + fp % 10);
                    fp /= 10;
                }
                w += float_digits;
            }
        }

        u32 Length() {
            return len_;
        }

        void Fill(u32* ptr) {
            for (u32 i = 0; i < len_; ++i) {
                ptr[i] = str_[i];
            }
        }

        ~FloatDrawable() {
            if (str_ != nullptr) {
                slab_free(str_);
                str_ = nullptr;
            }
        }
    private:
        u32 len_;
        u8* str_;
    };

    struct IntegerDrawable {
        IntegerDrawable(u32 i, u32 digits) {
            len_ = 0;
            str_ = nullptr;
            if (digits == 0) {
                return;
            }
            u8* buf = static_cast<u8*>(slab_alloc(digits));
            if (buf == nullptr) {
                return;
            }
            str_ = buf;
            len_ = digits;
            for (u32 k = 0; k < digits; ++k) {
                buf[k] = '0';
            }
            for (u32 k = digits; k > 0 && i > 0; --k) {
                buf[k - 1] = static_cast<u8>('0' + i % 10);
                i /= 10;
            }
        }

        u32 Length() {
            return len_;
        }

        void Fill(u32* ptr) {
            for (u32 i = 0; i < len_; ++i) {
                ptr[i] = str_[i];
            }
        }

        ~IntegerDrawable() {
            if (str_ != nullptr) {
                slab_free(str_);
                str_ = nullptr;
            }
        }
    private:
        u32 len_;
        u8* str_;
    };

    struct U32Drawable : u32literal {
        using u32literal::u32literal;

        U32Drawable(u32literal&& lt) : u32literal(std::move(lt)) {

        }

        u32 Length() {
            return length();
        }

        void Fill(u32* ptr) {
            for (u32 i = 0; i < length(); ++i) {
                ptr[i] = this->operator[](i);
            }
        }
    };

    struct AsciiDrawable {
        AsciiDrawable(const char* str) {
            len_ = strlen(str);
            str_ = static_cast<u8*>(slab_alloc(len_));
            for (u32 i = 0; i < len_; ++i) {
                str_[i] = str[i];
            }
        }

        u32 Length() {
            return len_;
        }

        void Fill(u32* ptr) {
            for (u32 i = 0; i < len_; ++i) {
                ptr[i] = str_[i];
            }
        }

        ~AsciiDrawable() {
            if (str_ != nullptr) {
                slab_free(str_);
                str_ = nullptr;
            }
        }
    private:
        u32 len_;
        u8* str_;
    };
};
