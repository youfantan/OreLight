#include <cstddef>
#include <format>
#include <ft2build.h>
#include <functional>
#include <iostream>
#include <vector>

#include FT_FREETYPE_H

template<typename T>
uint32_t RoundBits(T t) {
   return t % 8 == 0 ? t / 8 : t / 8 + 1;
}

constexpr uint32_t Q1_THRESHOLD = 96;

bool Q1Sample(FT_Bitmap* bmp, uint32_t x, uint32_t y) {
    const uint8_t* row = bmp->buffer + static_cast<ptrdiff_t>(y) * bmp->pitch;
    if (bmp->pixel_mode == FT_PIXEL_MODE_MONO) {
        return ((row[x >> 3] >> (7 - (x & 7))) & 1) != 0;
    }
    return row[x] >= Q1_THRESHOLD;
}

auto Q1SampleH(FT_Bitmap* bmp) {
    uint32_t width = RoundBits(bmp->width);
    uint32_t height = bmp->rows;
    std::vector<uint8_t> data(width * height);
    for (uint32_t j = 0; j < height; ++j) {
        for (uint32_t k = 0; k < static_cast<uint32_t>(bmp->width); ++k) {
            if (Q1Sample(bmp, k, j)) {
                data[j * width + k / 8] |= uint8_t(1) << (k % 8);
            }
        }
    }
    return data;
}

auto Q1SampleV(FT_Bitmap* bmp) {
    uint32_t width = bmp->width;
    uint32_t height = RoundBits(bmp->rows);
    std::vector<uint8_t> data(width * height);
    for (uint32_t j = 0; j < width; ++j) {
        for (uint32_t k = 0; k < static_cast<uint32_t>(bmp->rows); ++k) {
            if (Q1Sample(bmp, j, k)) {
                data[(k / 8) * width + j] |= uint8_t(1) << (k % 8);
            }
        }
    }
    return data;
}

struct CharacterSample {
    uint32_t unicode;
    std::vector<uint8_t> data;
    uint32_t width;
    uint32_t height;
    uint32_t advance;
    int32_t bearing_x;
    int32_t bearing_y;
};

struct CharacterHeader {
    uint32_t unicode;
    uint16_t offset;
    uint8_t width;
    uint8_t height;
    uint8_t advance;
    int8_t bearing_x;
    int8_t bearing_y;
};

std::vector<CharacterSample> FaceSample(std::function<std::vector<uint8_t>(FT_Bitmap*)> sampler, const std::string& face_path, uint32_t size, const std::u32string& chset, FT_Library& lib) {
    std::vector<CharacterSample> result;
    FT_Face face;
    if (FT_New_Face(lib, face_path.c_str(), 0, &face)) {
        std::cout << "Cannot load font face: " << face_path << std::endl;
        exit(EXIT_FAILURE);
    }
    FT_Set_Pixel_Sizes(face, 0, size);
    for (int i = 0; i < chset.size(); ++i) {
        FT_UInt glyph_index = FT_Get_Char_Index(face, chset[i]);
        if (glyph_index == 0) {
            std::cout << std::format("Glyph(u+{}) not exists", static_cast<uint32_t>(chset[i])) << std::endl;
            exit(EXIT_FAILURE);
        }
        if (FT_Load_Glyph(face, glyph_index, FT_LOAD_RENDER)) {
            std::cout << std::format("Glyph(u+{}) cannot be rendered", static_cast<uint32_t>(chset[i])) << std::endl;
            exit(EXIT_FAILURE);
        }
        FT_Bitmap* bmp = &face->glyph->bitmap;
        CharacterSample sample;
        sample.unicode = static_cast<uint32_t>(chset[i]);
        sample.data = sampler(bmp);
        sample.width = face->glyph->bitmap.width;
        sample.height = face->glyph->bitmap.rows;
        sample.advance = face->glyph->advance.x >> 6;
        sample.bearing_x = face->glyph->bitmap_left;
        sample.bearing_y = face->glyph->bitmap_top;
        result.push_back(sample);
    }
    return result;
}

std::string U32ToUtf8(char32_t c) {
    std::string s;
    if (c <= 0x7F) {
        s += static_cast<char>(c);
    } else if (c <= 0x7FF) {
        s += static_cast<char>(0xC0 | (c >> 6));
        s += static_cast<char>(0x80 | (c & 0x3F));
    } else if (c <= 0xFFFF) {
        if (c >= 0xD800 && c <= 0xDFFF) {
            return "\xEF\xBF\xBD";  // 孤立代理项 → U+FFFD
        }
        s += static_cast<char>(0xE0 | (c >> 12));
        s += static_cast<char>(0x80 | ((c >> 6) & 0x3F));
        s += static_cast<char>(0x80 | (c & 0x3F));
    } else if (c <= 0x10FFFF) {
        s += static_cast<char>(0xF0 | (c >> 18));
        s += static_cast<char>(0x80 | ((c >> 12) & 0x3F));
        s += static_cast<char>(0x80 | ((c >> 6) & 0x3F));
        s += static_cast<char>(0x80 | (c & 0x3F));
    } else {
        return "\xEF\xBF\xBD";  // 越界 → U+FFFD
    }
    return s;
}

void ConsoleOut(const std::string& name, std::vector<CharacterSample>& samples) {

    size_t data_size = 0;
    for (const auto& s : samples) {
        data_size += s.data.size();
    }

    std::cout << std::format("const u8 font_{}_data[{}] = {{", name, data_size);
    bool first_byte = true;
    for (const auto& s : samples) {
        for (uint8_t b : s.data) {
            if (!first_byte) {
                std::cout << ", ";
            }
            std::cout << static_cast<unsigned>(b);
            first_byte = false;
        }
    }
    std::cout << "};\n";

    std::cout << std::format("const CharacterHeader font_{}_header[{}] = {{\n", name, samples.size());
    size_t offset = 0;
    for (size_t i = 0; i < samples.size(); ++i) {
        const auto& s = samples[i];
        std::cout << std::format("    {{{}, {}, {}, {}, {}, {}, {}}}", s.unicode, offset, s.width, s.height, s.advance, s.bearing_x, s.bearing_y);
        if (i + 1 < samples.size()) {
            std::cout << ",";
        }
        std::cout << std::format(" // U+{} @ '{}'", static_cast<uint32_t>(s.unicode), U32ToUtf8(static_cast<char32_t>(s.unicode)));
        std::cout << "\n";
        offset += s.data.size();
    }
    std::cout << "};\n";
}

int main() {
    FT_Library lib;
    if (FT_Init_FreeType(&lib)) {
        std::cout << "Cannot initialize freetype library" << std::endl;
        exit(EXIT_FAILURE);
    }
    const std::string face_path = "sourcehans.otf";
    std::u32string chset = U"? ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789.%-过运行电压流功率占空比板上风扇灯珠温度硬件自检测查配置中完成错误不足负载关断正未到异常位器阻敏℃";
    auto samples = FaceSample(Q1SampleH, face_path, 13, chset, lib);
    FT_Done_FreeType(lib);
    ConsoleOut("SourceHanSans", samples);
    return 0;
}