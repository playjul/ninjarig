#include <stdint.h>
#include <stddef.h>
#include "../../common/DLLExport.h"
#include "Defs.h"

int32_t blocks_refs_4_1_256[] = {
        2, 0, 1,
        3, 1, 1,
        4, 2, 1,
        5, 3, 1,
        6, 0, 1,
        7, 4, 1,
        8, 5, 1,
        9, 7, 1,
        10, 7, 1,
        11, 9, 1,
        12, 5, 1,
        13, 11, 1,
        14, 3, 1,
        15, 2, 1,
        16, 12, 1,
        17, 15, 1,
        18, 15, 1,
        19, 10, 1,
        20, 4, 1,
        21, 18, 1,
        22, 17, 1,
        23, 19, 1,
        24, 2, 1,
        25, 23, 1,
        26, 22, 1,
        27, 12, 1,
        28, 23, 1,
        29, 27, 1,
        30, 26, 1,
        31, 19, 1,
        32, 27, 1,
        33, 29, 1,
        34, 32, 1,
        35, 18, 1,
        36, 32, 1,
        37, 16, 1,
        38, 35, 1,
        39, 22, 1,
        40, 30, 1,
        41, 31, 1,
        42, 39, 1,
        43, 36, 1,
        44, 18, 1,
        45, 0, 1,
        46, 36, 1,
        47, 12, 1,
        48, 28, 1,
        49, 39, 1,
        50, 4, 1,
        51, 48, 1,
        52, 48, 1,
        53, 51, 1,
        54, 50, 1,
        55, 3, 1,
        56, 54, 1,
        57, 53, 1,
        58, 48, 1,
        59, 47, 1,
        60, 25, 1,
        61, 53, 1,
        62, 31, 1,
        63, 59, 1,
        64, 45, 1,
        65, 63, 1,
        66, 48, 1,
        67, 58, 1,
        68, 40, 1,
        69, 17, 1,
        70, 62, 1,
        71, 24, 1,
        72, 60, 1,
        73, 71, 1,
        74, 72, 1,
        75, 57, 1,
        76, 69, 1,
        77, 58, 1,
        78, 74, 1,
        79, 69, 1,
        80, 75, 1,
        81, 74, 1,
        82, 56, 1,
        83, 67, 1,
        84, 15, 1,
        85, 83, 1,
        86, 69, 1,
        87, 83, 1,
        88, 85, 1,
        89, 24, 1,
        90, 52, 1,
        91, 70, 1,
        92, 88, 1,
        93, 42, 1,
        94, 61, 1,
        95, 93, 1,
        96, 22, 1,
        97, 37, 1,
        98, 15, 1,
        99, 91, 1,
        100, 14, 1,
        101, 98, 1,
        102, 24, 1,
        103, 84, 1,
        104, 44, 1,
        105, 103, 1,
        106, 12, 1,
        107, 15, 1,
        108, 79, 1,
        109, 35, 1,
        110, 4, 1,
        111, 109, 1,
        112, 90, 1,
        113, 109, 1,
        114, 43, 1,
        115, 73, 1,
        116, 113, 1,
        117, 107, 1,
        118, 51, 1,
        119, 117, 1,
        120, 118, 1,
        121, 115, 1,
        122, 74, 1,
        123, 67, 1,
        124, 102, 1,
        125, 17, 1,
        126, 113, 1,
        127, 110, 1
};

int32_t segments_4_1_256[] = { // current_idx, previous_idx, seg_type 0=i 1=d
    2, 1, 0,
    64, 63, 0,
    128, 127, 1,
    192, 191, 1,
    0, 255, 1,
    64, 63, 1,
    128, 127, 1,
    192, 191, 1,
    0, 255, 1,
    64, 63, 1,
    128, 127, 1,
    192, 191, 1,
    0, 255, 1,
    64, 63, 1,
    128, 127, 1,
    192, 191, 1
};

DLLEXPORT Argon2Profile argon2profile_4_1_256 = {
    256,
    1,
    4,
    262144, //256 blocks of 1024 bytes
    blocks_refs_4_1_256,
    sizeof(blocks_refs_4_1_256) / (3 * sizeof(int32_t)),
    "4_1_256",
    segments_4_1_256,
    64,
    16,
    1,
    32,
    4
};
