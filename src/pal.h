/* PC-98 palettes lifted out of DEPTH.EXE.
 *
 * The hardware takes 4 bits per channel through ports 0xa8 (index), 0xac (red),
 * 0xaa (green), 0xae (blue).
 *
 * SD_PAL_GAME is the one that matters.  Every stage fades into it with
 * FUN_1000_82d7(0x2b8), which ramps a counter 0..15 and clamps each channel
 * against it - a fade from black - so the table at DS:0x02b8 is the palette the
 * game is actually played in.  All eight call sites pass the same table.
 *
 * Note what it is made of: index 0 is the dark blue of the sea and doubles as
 * the sprites' transparent colour, 1..7 are the accent colours, and 8..15 are a
 * black-to-white ramp, which is what the grey warship sprites are drawn in.
 *
 * On top of this, FUN_1000_8184 (called once per frame) rewrites entries 2, 3, 4
 * and 6 every frame from small counters, so those four cycle while playing.
 *
 * Finding these needed tools/callsites.py: Ghidra's 16-bit output turns the
 * pushed return address into a local, so a constant sitting next to a call in
 * the decompilation is not necessarily its argument.
 */
#ifndef PAL_H
#define PAL_H

/* DS:0x02b8 in DEPTH.EXE (image offset 0xfff8).  the in-game palette */
static const unsigned char SD_PAL_GAME[16][3] = {
    { 0x0, 0x0, 0x7 },   /*  0  #000077 */
    { 0x0, 0x0, 0xf },   /*  1  #0000ff */
    { 0xf, 0x0, 0x0 },   /*  2  #ff0000 */
    { 0x8, 0x0, 0xf },   /*  3  #8800ff */
    { 0x0, 0xf, 0x8 },   /*  4  #00ff88 */
    { 0x0, 0xb, 0xd },   /*  5  #00bbdd */
    { 0xf, 0xb, 0x0 },   /*  6  #ffbb00 */
    { 0xd, 0xd, 0xd },   /*  7  #dddddd */
    { 0x0, 0x0, 0x0 },   /*  8  #000000 */
    { 0x3, 0x3, 0x3 },   /*  9  #333333 */
    { 0x4, 0x4, 0x4 },   /* 10  #444444 */
    { 0x5, 0x5, 0x5 },   /* 11  #555555 */
    { 0x7, 0x7, 0x7 },   /* 12  #777777 */
    { 0x9, 0x9, 0x9 },   /* 13  #999999 */
    { 0xd, 0xd, 0xd },   /* 14  #dddddd */
    { 0xf, 0xf, 0xf },   /* 15  #ffffff */
};

/* DS:0x103e in DEPTH.EXE (image offset 0x10d7e).  the startup/logo palette */
static const unsigned char SD_PAL_BOOT[16][3] = {
    { 0xf, 0xf, 0xf },   /*  0  #ffffff */
    { 0xf, 0x5, 0x0 },   /*  1  #ff5500 */
    { 0xf, 0xf, 0xf },   /*  2  #ffffff */
    { 0xf, 0x5, 0x0 },   /*  3  #ff5500 */
    { 0x0, 0xf, 0x0 },   /*  4  #00ff00 */
    { 0x0, 0xf, 0xf },   /*  5  #00ffff */
    { 0xf, 0xf, 0x0 },   /*  6  #ffff00 */
    { 0xf, 0xf, 0xf },   /*  7  #ffffff */
    { 0x0, 0x0, 0x0 },   /*  8  #000000 */
    { 0xf, 0x5, 0x0 },   /*  9  #ff5500 */
    { 0xf, 0xf, 0xf },   /* 10  #ffffff */
    { 0xf, 0x5, 0x0 },   /* 11  #ff5500 */
    { 0x0, 0xf, 0x0 },   /* 12  #00ff00 */
    { 0x0, 0xf, 0xf },   /* 13  #00ffff */
    { 0xf, 0xf, 0x0 },   /* 14  #ffff00 */
    { 0x0, 0x0, 0x0 },   /* 15  #000000 */
};

/* DS:0x0da0 in DEPTH.EXE (image offset 0x10ae0).  the 8-colour default, restored on exit */
static const unsigned char SD_PAL_RESET[16][3] = {
    { 0x0, 0x0, 0x0 },   /*  0  #000000 */
    { 0x0, 0x0, 0xf },   /*  1  #0000ff */
    { 0xf, 0x0, 0x0 },   /*  2  #ff0000 */
    { 0xf, 0x0, 0xf },   /*  3  #ff00ff */
    { 0x0, 0xf, 0x0 },   /*  4  #00ff00 */
    { 0x0, 0xf, 0xf },   /*  5  #00ffff */
    { 0xf, 0xf, 0x0 },   /*  6  #ffff00 */
    { 0xf, 0xf, 0xf },   /*  7  #ffffff */
    { 0x0, 0x0, 0x0 },   /*  8  #000000 */
    { 0x0, 0x0, 0xf },   /*  9  #0000ff */
    { 0xf, 0x0, 0x0 },   /* 10  #ff0000 */
    { 0xf, 0x0, 0xf },   /* 11  #ff00ff */
    { 0x0, 0xf, 0x0 },   /* 12  #00ff00 */
    { 0x0, 0xf, 0xf },   /* 13  #00ffff */
    { 0xf, 0xf, 0x0 },   /* 14  #ffff00 */
    { 0xf, 0xf, 0xf },   /* 15  #ffffff */
};
/* Expand a 4-bit-per-channel PC-98 entry to 8 bits. */
#define PAL8(v) ((unsigned char)((v) * 17))

#endif
