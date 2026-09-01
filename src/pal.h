/* PC-98 palettes lifted out of DEPTH.EXE.
 *
 * The hardware takes 4 bits per channel through ports 0xa8 (index), 0xac (red),
 * 0xaa (green), 0xae (blue).  FUN_1000_ba6a walks a table of 16 R,G,B triplets;
 * the only call with a real argument is FUN_1000_dbb2's, which passes DS:0x103e
 * (the constant Ghidra shows in that function is the pushed return address, not
 * the argument - it had to be read out of the machine code, tools/callsites.py).
 *
 * The stages do NOT use a table: they program individual entries with
 * FUN_1000_ba8c(index, r, g, b) and animate some of them every frame, so the
 * in-game colours have to come out of the code rather than out of the data.
 */
#ifndef PAL_H
#define PAL_H

/* DS:0x103e in DEPTH.EXE (image offset 0x10d7e). */
static const unsigned char SD_PAL_BOOT[16][3] = {
    { 0xf, 0xf, 0xf },   /*  0 */
    { 0xf, 0x5, 0x0 },   /*  1 */
    { 0xf, 0xf, 0xf },   /*  2 */
    { 0xf, 0x5, 0x0 },   /*  3 */
    { 0x0, 0xf, 0x0 },   /*  4 */
    { 0x0, 0xf, 0xf },   /*  5 */
    { 0xf, 0xf, 0x0 },   /*  6 */
    { 0xf, 0xf, 0xf },   /*  7 */
    { 0x0, 0x0, 0x0 },   /*  8 */
    { 0xf, 0x5, 0x0 },   /*  9 */
    { 0xf, 0xf, 0xf },   /* 10 */
    { 0xf, 0x5, 0x0 },   /* 11 */
    { 0x0, 0xf, 0x0 },   /* 12 */
    { 0x0, 0xf, 0xf },   /* 13 */
    { 0xf, 0xf, 0x0 },   /* 14 */
    { 0x0, 0x0, 0x0 },   /* 15 */
};

/* DS:0x0da0 in DEPTH.EXE (image offset 0x10ae0). */
static const unsigned char SD_PAL_RESET[16][3] = {
    { 0x0, 0x0, 0x0 },   /*  0 */
    { 0x0, 0x0, 0xf },   /*  1 */
    { 0xf, 0x0, 0x0 },   /*  2 */
    { 0xf, 0x0, 0xf },   /*  3 */
    { 0x0, 0xf, 0x0 },   /*  4 */
    { 0x0, 0xf, 0xf },   /*  5 */
    { 0xf, 0xf, 0x0 },   /*  6 */
    { 0xf, 0xf, 0xf },   /*  7 */
    { 0x0, 0x0, 0x0 },   /*  8 */
    { 0x0, 0x0, 0xf },   /*  9 */
    { 0xf, 0x0, 0x0 },   /* 10 */
    { 0xf, 0x0, 0xf },   /* 11 */
    { 0x0, 0xf, 0x0 },   /* 12 */
    { 0x0, 0xf, 0xf },   /* 13 */
    { 0xf, 0xf, 0x0 },   /* 14 */
    { 0xf, 0xf, 0xf },   /* 15 */
};

/* Expand a 4-bit-per-channel PC-98 entry to 8 bits. */
#define PAL8(v) ((unsigned char)((v) * 17))

#endif
