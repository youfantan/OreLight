#include <device_spec.h>
#include <oled_ssd1315/ssd1315.h>

#include "signal.h"
#include "string.h"
#include "utils.h"
#include "ds18b20/ds18b20.h"
#include "ina219/ina219.h"

#include <concepts>

#define CAPTION "Orelight V0.1 Beta"

const u8 font_SourceHanSans_data[1941] = {30, 18, 48, 16, 24, 12, 12, 0, 4, 12, 24, 24, 60, 36, 36, 102, 126, 66, 67, 195, 31, 35, 35, 35, 63, 99, 67, 67, 99, 63, 120, 76, 6, 2, 2, 2, 2, 6, 204, 120, 31, 51, 99, 67, 67, 67, 67, 99, 51, 31, 63, 3, 3, 3, 31, 3, 3, 3, 3, 63, 63, 3, 3, 3, 31, 3, 3, 3, 3, 3, 120, 204, 6, 2, 2, 226, 130, 134, 204, 120, 67, 67, 67, 67, 127, 67, 67, 67, 67, 67, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 48, 48, 48, 48, 48, 48, 48, 48, 18, 30, 99, 51, 27, 11, 15, 31, 51, 51, 99, 67, 3, 3, 3, 3, 3, 3, 3, 3, 3, 63, 131, 0, 195, 0, 199, 0, 231, 0, 167, 0, 171, 0, 187, 0, 155, 0, 147, 0, 131, 0, 67, 67, 71, 79, 75, 91, 83, 115, 99, 99, 120, 0, 204, 0, 134, 1, 130, 1, 130, 1, 130, 1, 130, 1, 134, 0, 204, 0, 120, 0, 31, 35, 99, 99, 51, 31, 3, 3, 3, 3, 120, 0, 204, 0, 134, 0, 130, 1, 130, 1, 130, 1, 130, 1, 134, 0, 204, 0, 120, 0, 32, 0, 192, 1, 0, 0, 63, 35, 99, 99, 35, 31, 27, 51, 35, 99, 60, 102, 2, 6, 28, 112, 96, 64, 102, 60, 127, 24, 24, 24, 24, 24, 24, 24, 24, 24, 67, 67, 67, 67, 67, 67, 67, 67, 102, 60, 67, 67, 98, 98, 38, 36, 52, 20, 28, 24, 99, 4, 99, 6, 114, 6, 82, 2, 82, 2, 214, 2, 158, 2, 140, 3, 140, 1, 140, 1, 98, 38, 52, 28, 24, 24, 20, 54, 98, 67, 198, 68, 100, 44, 56, 24, 16, 16, 16, 16, 126, 96, 32, 48, 24, 8, 12, 4, 6, 126, 28, 34, 32, 60, 34, 50, 62, 0, 0, 3, 3, 3, 31, 51, 35, 35, 35, 51, 31, 0, 60, 6, 2, 2, 2, 38, 60, 0, 64, 64, 64, 124, 102, 66, 66, 66, 102, 92, 0, 60, 38, 98, 126, 2, 6, 60, 28, 6, 6, 15, 6, 6, 6, 6, 6, 6, 124, 54, 34, 54, 30, 2, 126, 66, 98, 62, 0, 3, 3, 3, 31, 51, 51, 35, 35, 35, 35, 6, 2, 0, 6, 6, 6, 6, 6, 6, 6, 12, 4, 0, 12, 12, 12, 12, 12, 12, 12, 12, 4, 7, 0, 1, 1, 1, 17, 25, 13, 15, 27, 17, 49, 1, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 221, 1, 115, 3, 51, 2, 51, 2, 51, 2, 51, 2, 51, 2, 29, 51, 51, 35, 35, 35, 35, 60, 102, 66, 66, 66, 102, 60, 29, 51, 35, 35, 35, 51, 31, 3, 3, 3, 124, 102, 66, 66, 66, 102, 124, 64, 64, 64, 13, 3, 3, 3, 3, 3, 3, 30, 2, 6, 28, 48, 48, 30, 0, 6, 6, 31, 6, 6, 6, 6, 6, 28, 49, 49, 49, 49, 49, 51, 46, 99, 34, 50, 22, 20, 28, 12, 51, 2, 50, 3, 114, 3, 86, 1, 78, 1, 204, 1, 204, 0, 50, 22, 28, 12, 28, 18, 35, 99, 34, 50, 22, 20, 28, 8, 8, 12, 7, 62, 16, 24, 12, 4, 2, 63, 28, 54, 34, 98, 98, 98, 98, 34, 54, 28, 14, 14, 12, 12, 12, 12, 12, 12, 12, 31, 28, 50, 32, 32, 48, 16, 24, 12, 6, 127, 30, 50, 32, 48, 28, 48, 32, 96, 51, 30, 48, 56, 56, 52, 54, 50, 127, 48, 48, 48, 62, 6, 2, 30, 50, 32, 96, 32, 51, 30, 56, 36, 2, 2, 62, 38, 98, 98, 38, 60, 126, 32, 48, 16, 24, 8, 8, 8, 8, 12, 28, 38, 34, 38, 28, 62, 34, 98, 34, 60, 28, 50, 34, 34, 98, 126, 32, 32, 50, 30, 2, 6, 14, 1, 154, 0, 147, 0, 83, 0, 82, 7, 174, 4, 160, 12, 144, 12, 144, 4, 8, 7, 14, 0, 2, 6, 2, 4, 2, 240, 15, 0, 2, 102, 2, 76, 2, 12, 2, 12, 2, 140, 3, 30, 0, 242, 15, 0, 0, 0, 0, 230, 15, 12, 0, 0, 0, 240, 15, 199, 0, 68, 2, 68, 4, 36, 4, 228, 15, 12, 8, 30, 0, 226, 15, 0, 0, 8, 0, 204, 15, 6, 0, 18, 0, 8, 0, 236, 31, 14, 6, 15, 6, 12, 6, 12, 6, 12, 6, 12, 6, 140, 3, 0, 0, 32, 0, 32, 0, 254, 3, 34, 2, 34, 2, 254, 3, 34, 2, 34, 2, 254, 3, 34, 0, 32, 12, 32, 4, 224, 7, 254, 31, 6, 0, 134, 0, 134, 0, 134, 0, 250, 15, 130, 0, 130, 6, 130, 4, 130, 0, 255, 15, 0, 0, 130, 0, 4, 1, 248, 15, 64, 2, 98, 4, 246, 15, 0, 8, 160, 4, 168, 4, 172, 4, 164, 4, 182, 20, 18, 12, 0, 1, 62, 1, 12, 1, 236, 15, 140, 9, 140, 9, 140, 9, 140, 8, 188, 8, 206, 8, 64, 8, 96, 12, 16, 7, 0, 0, 0, 0, 64, 0, 254, 15, 96, 0, 166, 5, 252, 6, 192, 0, 188, 7, 242, 13, 64, 0, 254, 15, 64, 0, 64, 0, 64, 0, 16, 0, 16, 0, 16, 0, 240, 3, 16, 0, 16, 0, 255, 1, 1, 1, 1, 1, 1, 1, 1, 1, 255, 1, 1, 1, 64, 0, 64, 0, 254, 15, 2, 8, 18, 11, 12, 6, 6, 8, 252, 7, 64, 0, 64, 0, 64, 0, 254, 15, 66, 0, 66, 0, 66, 0, 66, 6, 222, 3, 194, 0, 66, 0, 66, 0, 66, 0, 66, 4, 82, 4, 95, 4, 195, 7, 0, 0, 12, 12, 204, 7, 108, 0, 126, 0, 108, 0, 236, 15, 252, 12, 190, 5, 46, 5, 47, 3, 44, 3, 188, 13, 92, 8, 0, 0, 64, 0, 96, 0, 96, 0, 96, 0, 96, 0, 224, 15, 96, 0, 96, 0, 96, 0, 96, 0, 96, 0, 254, 15, 252, 7, 4, 4, 4, 5, 148, 4, 164, 4, 228, 4, 196, 4, 228, 4, 180, 5, 30, 21, 2, 28, 2, 8, 0, 0, 0, 0, 64, 0, 252, 7, 4, 4, 4, 4, 252, 7, 4, 0, 252, 15, 68, 9, 86, 10, 102, 12, 122, 15, 66, 8, 98, 6, 8, 0, 200, 31, 8, 2, 42, 2, 26, 2, 26, 2, 8, 2, 8, 2, 12, 2, 28, 2, 52, 2, 6, 2, 130, 3, 0, 0, 0, 1, 94, 1, 68, 1, 228, 15, 36, 1, 62, 1, 228, 31, 132, 3, 132, 7, 92, 5, 110, 9, 48, 25, 0, 1, 0, 0, 236, 7, 40, 4, 224, 7, 34, 4, 228, 7, 0, 0, 240, 15, 88, 10, 84, 10, 84, 10, 86, 10, 250, 31, 0, 0, 192, 0, 252, 15, 36, 2, 36, 2, 252, 15, 38, 2, 230, 3, 6, 0, 254, 7, 34, 6, 194, 3, 242, 7, 26, 14, 254, 15, 4, 1, 228, 15, 102, 9, 254, 15, 118, 9, 247, 15, 22, 1, 86, 1, 158, 1, 198, 7, 32, 12, 8, 1, 104, 1, 44, 1, 228, 15, 54, 1, 23, 1, 4, 1, 244, 15, 4, 1, 4, 1, 4, 1, 4, 1, 4, 1, 16, 0, 24, 0, 255, 1, 1, 1, 1, 1, 255, 1, 1, 1, 1, 1, 255, 1, 1, 1, 1, 1, 255, 1, 1, 1, 0, 0, 4, 1, 132, 3, 94, 6, 100, 12, 252, 15, 12, 0, 62, 9, 38, 5, 71, 5, 68, 5, 4, 2, 244, 15, 4, 0, 2, 8, 252, 9, 16, 11, 80, 11, 82, 11, 86, 11, 80, 11, 80, 11, 84, 11, 52, 10, 102, 8, 178, 8, 2, 13, 64, 0, 64, 0, 254, 15, 240, 1, 88, 3, 78, 14, 250, 11, 8, 2, 248, 3, 8, 2, 248, 3, 0, 0, 254, 15, 254, 15, 20, 8, 62, 8, 50, 8, 178, 15, 182, 8, 182, 0, 162, 0, 190, 0, 162, 24, 190, 24, 130, 15, 252, 15, 182, 9, 254, 15, 64, 0, 254, 15, 96, 0, 252, 7, 252, 7, 12, 6, 252, 7, 252, 7, 12, 6, 254, 15, 32, 0, 32, 0, 32, 0, 255, 7, 33, 4, 33, 4, 33, 4, 255, 7, 33, 4, 32, 0, 32, 0, 32, 0, 32, 0, 64, 0, 64, 0, 254, 15, 2, 8, 250, 11, 0, 0, 0, 0, 254, 15, 144, 1, 144, 1, 152, 9, 140, 9, 6, 15, 0, 0, 128, 2, 128, 4, 252, 15, 132, 0, 132, 4, 188, 5, 164, 5, 38, 7, 38, 3, 38, 3, 186, 27, 194, 10, 98, 12, 0, 0, 132, 4, 132, 4, 254, 15, 130, 4, 158, 4, 232, 31, 8, 0, 222, 15, 72, 8, 200, 15, 92, 8, 220, 15, 68, 8, 0, 0, 230, 15, 108, 8, 96, 8, 231, 15, 4, 0, 228, 15, 4, 1, 228, 31, 132, 3, 156, 2, 108, 12, 32, 8, 254, 15, 192, 0, 64, 0, 96, 0, 112, 3, 88, 6, 78, 12, 66, 8, 64, 0, 64, 0, 64, 0, 64, 0, 252, 7, 4, 4, 4, 4, 252, 7, 64, 0, 72, 0, 72, 0, 204, 15, 76, 0, 92, 0, 118, 0, 194, 15, 0, 0, 16, 0, 248, 1, 136, 1, 132, 0, 254, 7, 12, 4, 76, 4, 76, 4, 76, 4, 108, 4, 176, 1, 24, 7, 6, 12, 16, 1, 126, 13, 16, 1, 254, 15, 8, 1, 254, 13, 4, 5, 20, 7, 126, 7, 16, 2, 254, 19, 158, 15, 144, 12, 0, 0, 8, 2, 24, 3, 16, 1, 252, 15, 64, 0, 64, 0, 64, 0, 254, 15, 224, 0, 160, 1, 48, 3, 12, 14, 6, 12, 8, 6, 171, 3, 221, 0, 73, 0, 127, 0, 201, 15, 93, 2, 109, 2, 75, 2, 73, 2, 73, 2, 127, 2, 32, 2, 0, 0, 254, 15, 64, 0, 64, 0, 64, 0, 76, 0, 204, 15, 76, 0, 76, 0, 76, 0, 76, 0, 254, 15, 64, 0, 64, 0, 252, 7, 64, 0, 64, 0, 64, 0, 254, 15, 224, 0, 80, 1, 88, 3, 76, 6, 66, 8, 64, 0, 0, 8, 254, 9, 40, 9, 100, 9, 126, 9, 0, 9, 16, 9, 126, 9, 16, 9, 16, 9, 240, 8, 62, 8, 2, 14, 252, 7, 4, 4, 252, 7, 4, 8, 4, 8, 252, 7, 0, 0, 8, 3, 254, 15, 8, 3, 12, 3, 2, 3, 0, 0, 34, 2, 36, 1, 255, 7, 1, 4, 253, 5, 4, 1, 252, 1, 32, 0, 254, 3, 34, 2, 34, 2, 162, 3, 32, 0, 128, 1, 8, 1, 8, 1, 236, 15, 6, 0, 70, 4, 70, 4, 68, 6, 68, 2, 196, 2, 4, 2, 244, 15, 4, 0, 188, 7, 164, 4, 164, 4, 188, 7, 32, 3, 254, 15, 24, 3, 14, 6, 190, 15, 164, 12, 164, 4, 188, 7, 0, 0, 0, 0, 239, 7, 41, 6, 37, 6, 229, 7, 37, 6, 41, 6, 41, 6, 233, 7, 47, 6, 33, 6, 249, 15, 1, 0, 4, 1, 4, 1, 126, 1, 130, 15, 191, 9, 238, 5, 98, 5, 127, 5, 42, 6, 42, 2, 126, 7, 160, 13, 152, 8, 14, 7, 138, 13, 202, 0, 78, 0, 96, 0, 96, 0, 96, 0, 96, 0, 64, 0, 192, 9, 0, 7};
const CharacterHeader font_SourceHanSans_header[115] = {
    {63, 0, 6, 10, 6, 0, 10}, // U+63 @ '?'
    {32, 10, 0, 0, 3, 0, 0}, // U+32 @ ' '
    {65, 10, 8, 10, 8, 0, 10}, // U+65 @ 'A'
    {66, 20, 7, 10, 9, 1, 10}, // U+66 @ 'B'
    {67, 30, 8, 10, 8, 0, 10}, // U+67 @ 'C'
    {68, 40, 8, 10, 9, 1, 10}, // U+68 @ 'D'
    {69, 50, 6, 10, 8, 1, 10}, // U+69 @ 'E'
    {70, 60, 6, 10, 7, 1, 10}, // U+70 @ 'F'
    {71, 70, 8, 10, 9, 0, 10}, // U+71 @ 'G'
    {72, 80, 8, 10, 9, 1, 10}, // U+72 @ 'H'
    {73, 90, 2, 10, 4, 1, 10}, // U+73 @ 'I'
    {74, 100, 6, 10, 7, 0, 10}, // U+74 @ 'J'
    {75, 110, 8, 10, 8, 1, 10}, // U+75 @ 'K'
    {76, 120, 6, 10, 7, 1, 10}, // U+76 @ 'L'
    {77, 130, 9, 10, 11, 1, 10}, // U+77 @ 'M'
    {78, 150, 8, 10, 9, 1, 10}, // U+78 @ 'N'
    {79, 160, 9, 10, 10, 0, 10}, // U+79 @ 'O'
    {80, 180, 7, 10, 8, 1, 10}, // U+80 @ 'P'
    {81, 190, 10, 13, 10, 0, 10}, // U+81 @ 'Q'
    {82, 216, 7, 10, 8, 1, 10}, // U+82 @ 'R'
    {83, 226, 8, 10, 8, 0, 10}, // U+83 @ 'S'
    {84, 236, 8, 10, 8, 0, 10}, // U+84 @ 'T'
    {85, 246, 8, 10, 9, 1, 10}, // U+85 @ 'U'
    {86, 256, 8, 10, 7, 0, 10}, // U+86 @ 'V'
    {87, 266, 12, 10, 11, 0, 10}, // U+87 @ 'W'
    {88, 286, 8, 10, 7, 0, 10}, // U+88 @ 'X'
    {89, 296, 8, 10, 7, -1, 10}, // U+89 @ 'Y'
    {90, 306, 8, 10, 8, 0, 10}, // U+90 @ 'Z'
    {97, 316, 7, 8, 7, 0, 7}, // U+97 @ 'a'
    {98, 324, 7, 12, 8, 1, 11}, // U+98 @ 'b'
    {99, 336, 7, 7, 7, 0, 7}, // U+99 @ 'c'
    {100, 343, 7, 12, 8, 0, 11}, // U+100 @ 'd'
    {101, 355, 7, 7, 7, 0, 7}, // U+101 @ 'e'
    {102, 362, 5, 10, 4, 0, 10}, // U+102 @ 'f'
    {103, 372, 8, 10, 7, 0, 7}, // U+103 @ 'g'
    {104, 382, 6, 11, 8, 1, 11}, // U+104 @ 'h'
    {105, 393, 3, 10, 4, 0, 10}, // U+105 @ 'i'
    {106, 403, 4, 13, 4, -1, 10}, // U+106 @ 'j'
    {107, 416, 7, 11, 7, 1, 11}, // U+107 @ 'k'
    {108, 427, 3, 11, 4, 1, 11}, // U+108 @ 'l'
    {109, 438, 10, 7, 12, 1, 7}, // U+109 @ 'm'
    {110, 452, 6, 7, 8, 1, 7}, // U+110 @ 'n'
    {111, 459, 8, 7, 8, 0, 7}, // U+111 @ 'o'
    {112, 466, 7, 10, 8, 1, 7}, // U+112 @ 'p'
    {113, 476, 7, 10, 8, 0, 7}, // U+113 @ 'q'
    {114, 486, 5, 7, 5, 1, 7}, // U+114 @ 'r'
    {115, 493, 6, 7, 6, 0, 7}, // U+115 @ 's'
    {116, 500, 5, 10, 5, 0, 10}, // U+116 @ 't'
    {117, 510, 6, 7, 8, 1, 7}, // U+117 @ 'u'
    {118, 517, 7, 7, 7, 0, 7}, // U+118 @ 'v'
    {119, 524, 11, 7, 10, 0, 7}, // U+119 @ 'w'
    {120, 538, 7, 7, 6, 0, 7}, // U+120 @ 'x'
    {121, 545, 7, 10, 7, 0, 7}, // U+121 @ 'y'
    {122, 555, 6, 7, 6, 0, 7}, // U+122 @ 'z'
    {48, 562, 7, 10, 7, 0, 10}, // U+48 @ '0'
    {49, 572, 6, 10, 7, 1, 10}, // U+49 @ '1'
    {50, 582, 7, 10, 7, 0, 10}, // U+50 @ '2'
    {51, 592, 7, 10, 7, 0, 10}, // U+51 @ '3'
    {52, 602, 7, 10, 7, 0, 10}, // U+52 @ '4'
    {53, 612, 7, 10, 7, 0, 10}, // U+53 @ '5'
    {54, 622, 7, 10, 7, 0, 10}, // U+54 @ '6'
    {55, 632, 7, 10, 7, 0, 10}, // U+55 @ '7'
    {56, 642, 7, 10, 7, 0, 10}, // U+56 @ '8'
    {57, 652, 7, 10, 7, 0, 10}, // U+57 @ '9'
    {46, 662, 3, 2, 4, 0, 2}, // U+46 @ '.'
    {37, 664, 12, 10, 12, 0, 10}, // U+37 @ '%'
    {45, 684, 4, 1, 5, 0, 4}, // U+45 @ '-'
    {36807, 685, 13, 13, 13, 0, 11}, // U+36807 @ '过'
    {36816, 711, 13, 14, 13, 0, 11}, // U+36816 @ '运'
    {34892, 739, 13, 14, 13, 0, 11}, // U+34892 @ '行'
    {30005, 767, 12, 13, 13, 1, 11}, // U+30005 @ '电'
    {21387, 793, 13, 12, 13, 0, 10}, // U+21387 @ '压'
    {27969, 817, 13, 13, 13, 0, 11}, // U+27969 @ '流'
    {21151, 843, 13, 14, 13, 0, 11}, // U+21151 @ '功'
    {29575, 871, 13, 14, 13, 0, 12}, // U+29575 @ '率'
    {21344, 899, 11, 13, 13, 2, 11}, // U+21344 @ '占'
    {31354, 925, 13, 12, 13, 0, 11}, // U+31354 @ '空'
    {27604, 949, 12, 14, 13, 1, 11}, // U+27604 @ '比'
    {26495, 977, 13, 14, 13, 0, 11}, // U+26495 @ '板'
    {19978, 1005, 13, 12, 13, 0, 11}, // U+19978 @ '上'
    {39118, 1029, 13, 13, 13, 0, 10}, // U+39118 @ '风'
    {25159, 1055, 12, 14, 13, 0, 12}, // U+25159 @ '扇'
    {28783, 1083, 13, 14, 13, 0, 11}, // U+28783 @ '灯'
    {29664, 1111, 13, 13, 13, 0, 11}, // U+29664 @ '珠'
    {28201, 1137, 13, 13, 13, 0, 11}, // U+28201 @ '温'
    {24230, 1163, 13, 14, 13, 0, 12}, // U+24230 @ '度'
    {30828, 1191, 13, 12, 13, 0, 10}, // U+30828 @ '硬'
    {20214, 1215, 13, 13, 13, 0, 11}, // U+20214 @ '件'
    {33258, 1241, 10, 13, 13, 2, 11}, // U+33258 @ '自'
    {26816, 1267, 13, 14, 13, 0, 12}, // U+26816 @ '检'
    {27979, 1295, 13, 13, 13, 0, 11}, // U+27979 @ '测'
    {26597, 1321, 13, 13, 13, 0, 11}, // U+26597 @ '查'
    {37197, 1347, 13, 12, 13, 0, 10}, // U+37197 @ '配'
    {32622, 1371, 13, 13, 13, 0, 11}, // U+32622 @ '置'
    {20013, 1397, 11, 13, 13, 1, 11}, // U+20013 @ '中'
    {23436, 1423, 13, 14, 13, 0, 11}, // U+23436 @ '完'
    {25104, 1451, 13, 14, 13, 0, 11}, // U+25104 @ '成'
    {38169, 1479, 13, 13, 13, 0, 11}, // U+38169 @ '错'
    {35823, 1505, 13, 13, 13, 0, 11}, // U+35823 @ '误'
    {19981, 1531, 13, 12, 13, 0, 10}, // U+19981 @ '不'
    {36275, 1555, 13, 13, 13, 0, 10}, // U+36275 @ '足'
    {36127, 1581, 12, 13, 13, 0, 11}, // U+36127 @ '负'
    {36733, 1607, 13, 14, 13, 0, 11}, // U+36733 @ '载'
    {20851, 1635, 13, 13, 13, 0, 11}, // U+20851 @ '关'
    {26029, 1661, 12, 14, 13, 1, 11}, // U+26029 @ '断'
    {27491, 1689, 13, 11, 13, 0, 10}, // U+27491 @ '正'
    {26410, 1711, 13, 13, 13, 0, 11}, // U+26410 @ '未'
    {21040, 1737, 12, 13, 13, 0, 11}, // U+21040 @ '到'
    {24322, 1763, 13, 13, 13, 0, 10}, // U+24322 @ '异'
    {24120, 1789, 11, 13, 13, 1, 11}, // U+24120 @ '常'
    {20301, 1815, 13, 13, 13, 0, 11}, // U+20301 @ '位'
    {22120, 1841, 13, 13, 13, 0, 10}, // U+22120 @ '器'
    {38459, 1867, 12, 13, 13, 1, 11}, // U+38459 @ '阻'
    {25935, 1893, 13, 13, 13, 0, 11}, // U+25935 @ '敏'
    {8451, 1919, 13, 11, 13, 0, 10} // U+8451 @ '℃'
};

constexpr u16 k3950ntc_lut[151] = {
    3156, 3118, 3078, 3038, 2997, 2955, 2913, 2870,
    2826, 2782, 2738, 2693, 2648, 2602, 2556, 2510,
    2464, 2417, 2371, 2324, 2278, 2231, 2185, 2139,
    2093, 2048, 2002, 1957, 1913, 1868, 1825, 1781,
    1739, 1697, 1655, 1614, 1574, 1534, 1495, 1456,
    1419, 1382, 1346, 1310, 1275, 1241, 1208, 1175,
    1143, 1112, 1081, 1052, 1023, 994, 967, 940,
    914, 888, 863, 839, 815, 792, 770, 748,
    727, 707, 687, 668, 649, 631, 613, 596,
    579, 563, 547, 532, 517, 502, 488, 475,
    462, 449, 436, 424, 413, 401, 390, 380,
    369, 359, 350, 340, 331, 322, 314, 305,
    297, 289, 282, 274, 267, 260, 253, 247,
    240, 234, 228, 222, 217, 211, 206, 201,
    196, 191, 186, 181, 177, 173, 168, 164,
    160, 156, 153, 149, 145, 142, 138, 135,
    132, 129, 126, 123, 120, 117, 115, 112,
    110, 107, 105, 102, 100, 98, 96, 93,
    91, 89, 87, 86, 84, 82, 80
};

u32 K3950NTCLutSearch(u16 raw) {
    if (raw >= k3950ntc_lut[0])
        return 0;
    if (raw <= k3950ntc_lut[count_of(k3950ntc_lut) - 1])
        return 0;
    for (u32 i = 1; i < count_of(k3950ntc_lut); ++i) {
        u32 hi = k3950ntc_lut[i - 1];
        u32 lo = k3950ntc_lut[i];
        if (raw <= hi && raw >= lo) {
            return (raw - lo) <= (hi - raw) ? i : i - 1;
        }
    }
    return 0;
}

constexpr u32 DANGER_TEMPERATURE = 45;
constexpr u32 SAFE_TEMPERATURE = 35;
constexpr float SAFE_CURRENT = 2.0f;
constexpr float SAFE_POWER = 45.0f;
constexpr float MAX_POWER = 30.0f;

void TemperFeedback(u32 board_temper, u32 led_temper) {
    u32 fan_duty = 40;
    u32 max = led_temper;
    if (board_temper > led_temper) max = board_temper;
    if (max <= SAFE_TEMPERATURE) {
        PB3.SetOutputLow();
    }
    if (max >= DANGER_TEMPERATURE) {
        PB3.SetOutputHigh();
    }
}

float PowerTracking(float target, float now) {
    constexpr float Kp = 4.0f;
    constexpr float Ki = 1.5f;
    constexpr float Kd = 0.05f;
    constexpr float INTEGRAL_LIMIT = 40.0f;

    static float integral = 0.0f;
    static float prev_power = 0.0f;
    static float duty = 0.0f;
    static tick last_tick = cron_ticks();
    static bool first = true;

    if (target <= 0.0f) {
        integral = 0.0f;
        prev_power = now;
        duty = 0.0f;
        last_tick = cron_ticks();
        first = false;
        return 0.0f;
    }

    tick cur = cron_ticks();
    float dt = 0.001f * static_cast<float>(tick_sub(cur, last_tick).tick_low);
    last_tick = cur;
    if (dt <= 0.0f) dt = 0.001f;
    else if (dt > 1.0f) dt = 1.0f;

    float error = target - now;

    bool saturated = (duty >= 100.0f && error > 0.0f) ||
                     (duty <= 0.0f && error < 0.0f);
    if (!saturated) {
        integral += error * dt;
        if (integral > INTEGRAL_LIMIT) integral = INTEGRAL_LIMIT;
        else if (integral < -INTEGRAL_LIMIT) integral = -INTEGRAL_LIMIT;
    }

    float derivative = first ? 0.0f : -(now - prev_power) / dt;
    first = false;
    prev_power = now;

    duty = Kp * error + Ki * integral + Kd * derivative;
    if (duty > 100.0f) duty = 100.0f;
    else if (duty < 0.0f) duty = 0.0f;
    return duty;
}

template<u32 N>
void RuntimeError(SSD1315<I2CDevice2>& ssd1315, CharactersSet& font, const char32_t(&msg)[N]) {
    PA15.SetOutputLow();
    ssd1315.DrawText(0, 0, font, SSD1315<I2CDevice2>::AsciiDrawable(CAPTION));
    ssd1315.DrawText(0, 16, font,
        SSD1315<I2CDevice2>::AsciiDrawable("ERROR "),
        SSD1315<I2CDevice2>::U32Drawable(U"运行错误")
    );
    ssd1315.DrawText(0, 32, font,
        SSD1315<I2CDevice2>::U32Drawable(msg)
    );
    ssd1315.Present();
}

template<typename F>
concept have_bool_ret = requires (F&& f)
{
    { f() } -> std::same_as<bool>;
};

template<typename F>
requires have_bool_ret<F>
bool SelfCheck(SSD1315<I2CDevice2>& ssd1315, CharactersSet& font, u32literal&& name,  F&& f) {
    ssd1315.DrawText(0, 0, font, SSD1315<I2CDevice2>::AsciiDrawable(CAPTION));
    ssd1315.DrawText(0, 16, font,
        SSD1315<I2CDevice2>::U32Drawable(std::move(name)),
        SSD1315<I2CDevice2>::U32Drawable(U"自检中")
    );
    ssd1315.Present();
    if (!f()) {
        PA15.SetOutputLow();
        ssd1315.DrawText(0, 0, font, SSD1315<I2CDevice2>::AsciiDrawable(CAPTION));
        ssd1315.DrawText(0, 16, font,
            SSD1315<I2CDevice2>::AsciiDrawable("ERROR "),
            SSD1315<I2CDevice2>::U32Drawable(U"自检错误")
        );
        ssd1315.DrawText(0, 32, font,
            SSD1315<I2CDevice2>::U32Drawable(std::move(name)),
            SSD1315<I2CDevice2>::U32Drawable(U"自检错误")
        );
        ssd1315.Present();
        timer_sleep(200000);
        return false;
    } else {
        ssd1315.DrawText(0, 0, font, SSD1315<I2CDevice2>::AsciiDrawable(CAPTION));
        ssd1315.DrawText(0, 16, font,
            SSD1315<I2CDevice2>::U32Drawable(std::move(name)),
            SSD1315<I2CDevice2>::U32Drawable(U"自检完成")
        );
        ssd1315.Present();
        timer_sleep(200000);
        return true;
    }
}

//#define ORELIGHT_DBG 1

int main() {
    PA11.InitAsAFOutOD(6, decltype(PA11)::PuPd::Floating);
    PA12.InitAsAFOutOD(6, decltype(PA12)::PuPd::Floating);
    PB6.InitAsAFOutOD(6, decltype(PB6)::PuPd::Floating);
    PB7.InitAsAFOutOD(6, decltype(PB7)::PuPd::Floating);
    PC13.InitAsOutPP();
    PC14.InitAsOutPP();
    PC15.InitAsOutPP();
    PA15.InitAsOutPP();
    PA8.InitAsOutPP();
    PB3.InitAsOutPP();
    PA0.InitAsAnalog();
    PA1.InitAsAnalog();

    PA15.SetOutputHigh();
    I2CDevice2 i2c2(true, 0x00, I2CDevice2::Speed::Fast1MHz);
    SSD1315 ssd1315(i2c2);
    CharactersSet SourceHanSans(font_SourceHanSans_data, sizeof(font_SourceHanSans_data), font_SourceHanSans_header,
                                count_of(font_SourceHanSans_header));
    ssd1315.DrawText(0, 0, SourceHanSans, decltype(ssd1315)::AsciiDrawable(CAPTION));
    ssd1315.DrawText(0, 16, SourceHanSans, decltype(ssd1315)::U32Drawable(U"硬件自检中"));
    ssd1315.Present();

    // INA219 self test
    I2CDevice1 i2c1(true, 0x00, I2CDevice1::Speed::Fast400KHz);
    using INA219 = INA219<I2CDevice1>;
    INA219 ina219(i2c1, 0x40);
    if (!SelfCheck(ssd1315, SourceHanSans, U"INA219", [&]() {
        return ina219.Alive();
    })) {

    }
    ina219.Configure(INA219::PGAGain::Gain2, INA219::ADCResolution::BIT12, INA219::Mode::ShuntBusContinuous);
    ina219.Calibrate(10, 5000);
    // DS18B20 self test
    DS18B20<decltype(PB5)> board_temper_ds18b20(PB5);
    if (!SelfCheck(ssd1315, SourceHanSans, U"DS18B20", [&]() {
        return board_temper_ds18b20.Present();
    })) {

    }
    board_temper_ds18b20.StartConversion();

    ADCSampler1 adc1(ADCSampler1::Resolution::BITS12, ADCSampler1::SampleTime::CYCLES_160_5);
    auto& led_temper_sample = adc1.CreateSampler<0>();
    auto& varr_sample = adc1.CreateSampler<1>();
    adc1.Sample();
    // Potentiometer self test
    if (!SelfCheck(ssd1315, SourceHanSans, U"电位器", [&]() {
        return varr_sample >= 4000;
    })) {

    }
    // Thermistor self test
    if (!SelfCheck(ssd1315, SourceHanSans, U"温敏电阻", [&]() {
        return led_temper_sample >= 4000;
    })) {

    }

#ifndef ORELIGHT_DBG
    // PD configuration and self test
    PC15.SetOutputLow();
    PC14.SetOutputHigh();
    PC13.SetOutputHigh();
    timer_sleep(500000);
    if (!SelfCheck(ssd1315, SourceHanSans, U"PD", [&]() {
        ssd1315.DrawText(0, 48, SourceHanSans, decltype(ssd1315)::FloatDrawable(ina219.GetBusVoltage(), 2, 2));
        return ina219.GetBusVoltage() <= 19.0f;
    })) {

    }
    // Fan self test
    PB3.SetOutputHigh();
    timer_sleep(5000);
    if (!SelfCheck(ssd1315, SourceHanSans, U"风扇", [&]() {
        ssd1315.DrawText(0, 48, SourceHanSans, decltype(ssd1315)::FloatDrawable(ina219.GetCurrent(), 2, 2));
        bool r = ina219.GetCurrent() <= 0.10f;
        PB3.SetOutputLow();
        return r;
    })) {

    }
    // COB led self test
    PA8.SetOutputHigh();
    timer_sleep(5000);
    if (!SelfCheck(ssd1315, SourceHanSans, U"灯珠", [&]() {
        ssd1315.DrawText(0, 48, SourceHanSans, decltype(ssd1315)::FloatDrawable(ina219.GetCurrent(), 2, 2));
        bool r = ina219.GetCurrent() <= 0.20f;
        PA8.SetOutputLow();
        return r;
    })) {

    }
#endif

    // Finished self test, run normally
    PA8.InitAsAFOutPP(2);
    PWMGenerator1 pwm(400);
    pwm.EnableChannel<1>();
    AvgFilter<u16, 32> led_temper_filter;
    ina219.Configure(INA219::PGAGain::Gain2, INA219::ADCResolution::FILTERING_128, INA219::Mode::ShuntBusContinuous);
    ssd1315.DrawText(0, 0, SourceHanSans, decltype(ssd1315)::AsciiDrawable(CAPTION));
    ssd1315.DrawText(0, 16, SourceHanSans, decltype(ssd1315)::U32Drawable(U"硬件自检完成"));
    ssd1315.Present();
    timer_sleep(1000000);
    
    tick t;
    float volt = 0.0f;
    float current = 0.0f;
    float power = 0.0f;
    float board_temper = 0.0f;
    u32 led_temper = 0;

    while (true) {
        t = cron_ticks();
        volt = ina219.GetBusVoltage();
        current = ina219.GetCurrent();
        power = static_cast<u32>(volt * current);
        if (current >= SAFE_CURRENT) {
            pwm.SetDuty<1>(0);
            ssd1315.DrawText(0, 48, SourceHanSans, decltype(ssd1315)::FloatDrawable(ina219.GetCurrent(), 2, 2));
            RuntimeError(ssd1315, SourceHanSans, U"过流");
            return -1;
        }
        if (power >= SAFE_POWER) {
            pwm.SetDuty<1>(0);
            ssd1315.DrawText(0, 48, SourceHanSans, decltype(ssd1315)::FloatDrawable(power, 2, 2));
            RuntimeError(ssd1315, SourceHanSans, U"过功率");
            return -1;
        }
        board_temper_ds18b20.ReadTemper(board_temper);
        board_temper_ds18b20.StartConversion();
        adc1.Sample();
        u32 led_temper_filtered = led_temper_filter.Input(led_temper_sample);
        led_temper = K3950NTCLutSearch(led_temper_filtered);
        float led_duty = 0.0f;
        TemperFeedback(static_cast<u32>(board_temper), led_temper);
        if (volt <= 9.0) {
            pwm.SetDuty<1>(0);
            ssd1315.DrawText(0, 16, SourceHanSans,
                decltype(ssd1315)::U32Drawable(U"电压不足 负载关断")
            );
        }
        else {
            if (varr_sample <= 50) {
                varr_sample = 0;
            } else {
                if (varr_sample >= 1800) varr_sample = 1800;
            }
            float target_power = MAX_POWER * (static_cast<float>(varr_sample) / 1800.0f);
            led_duty = PowerTracking(target_power, power);
            pwm.SetDutyF<1>(led_duty);
            ssd1315.DrawText(0, 16, SourceHanSans,
                decltype(ssd1315)::U32Drawable(U"灯珠 "),
                decltype(ssd1315)::IntegerDrawable(static_cast<u32>(led_duty), 3),
                decltype(ssd1315)::AsciiDrawable("%")
            );
        }
        ssd1315.DrawText(0, 0, SourceHanSans,
            decltype(ssd1315)::FloatDrawable(volt, 2, 1),
            decltype(ssd1315)::AsciiDrawable("V ")
        );
        ssd1315.DrawText(50, 0, SourceHanSans,
            decltype(ssd1315)::FloatDrawable(current, 1, 2),
            decltype(ssd1315)::AsciiDrawable("A ")
        );
        ssd1315.DrawText(100, 0, SourceHanSans,
            decltype(ssd1315)::IntegerDrawable(static_cast<u32>(power), 2),
            decltype(ssd1315)::AsciiDrawable("W")
        );
        ssd1315.DrawText(0, 32, SourceHanSans,
            decltype(ssd1315)::U32Drawable(U"板上温度 "),
            decltype(ssd1315)::FloatDrawable(board_temper, 2, 2),
            decltype(ssd1315)::U32Drawable(U"℃ ")
        );
        ssd1315.DrawText(0, 48, SourceHanSans,
            decltype(ssd1315)::U32Drawable(U"灯珠温度 "),
            decltype(ssd1315)::IntegerDrawable(led_temper, 3),
            decltype(ssd1315)::U32Drawable(U"℃ ")
        );
        ssd1315.Present();
        auto during = tick_sub(cron_ticks(), t);
        u32 during_ms = during.tick_low;
        float fps = 1000.0f / during_ms;
        ssd1315.DrawText(100, 48, SourceHanSans,
            decltype(ssd1315)::IntegerDrawable(fps, 3)
        );
    }
}
