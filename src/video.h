/* The PC-98 screen Super Depth draws into.
 *
 * 640x400, 16 colours, and the hardware has two pages that the game flips by
 * writing the page number to ports 0xa4 (displayed) and 0xa6 (drawn) - the
 * variable at DS:0x1844 holds which page is which, and every stage loop toggles
 * it.  Here that is one surface plus a flag, since there is no reason to
 * emulate the split.
 *
 * One byte per pixel holding a palette index 0..15, rather than the four
 * separate bit planes the real VRAM has.  Nothing in the game reads VRAM back
 * per plane, so the layout is free.
 *
 * The palette carries eight entries past the graphics sixteen.  The PC-98's
 * text plane is a separate overlay with its own eight fixed digital colours,
 * unaffected by the graphics palette the game animates every frame, so the HUD
 * (src/text.c) draws in indices SCR_TEXT..SCR_TEXT+7 rather than borrowing a
 * graphics colour that is about to change underneath it.
 */
#ifndef VIDEO_H
#define VIDEO_H

#include "bfnt.h"

#define SCR_W 640
#define SCR_H 400

#define SCR_TEXT   16              /* first of the eight text-plane colours */
#define SCR_COLOURS 24             /* 16 graphics + 8 text */

typedef struct {
    unsigned char px[SCR_W * SCR_H];
    unsigned char pal[SCR_COLOURS][3];  /* 8 bits per channel, ready for a display */
    const PatBank *bank;
} Screen;

void scr_init(Screen *s, const PatBank *bank);
void scr_clear(Screen *s, unsigned char index);

/* Load all 16 entries from a PC-98 table of 4-bit R,G,B triplets
 * (FUN_1000_ba6a) or set one entry (FUN_1000_ba8c). */
void scr_palette(Screen *s, const unsigned char table[16][3]);
void scr_colour(Screen *s, int index, int r, int g, int b);

/* Fade in from black (FUN_1000_82d7), flash out to white (FUN_1000_83b5) and
 * back (FUN_1000_8425).  `level` runs 0..15; each clamps every channel of the
 * table against it, from below for the fade and from above for the flash. */
void scr_palette_fade(Screen *s, const unsigned char table[16][3], int level);
void scr_palette_flash(Screen *s, const unsigned char table[16][3], int level);

/* Draw pattern `id` with its top-left at (x,y), clipped, treating index 0 as
 * transparent - the sprite path (FUN_1000_c788). */
void scr_pat(Screen *s, int x, int y, int id);
/* As scr_pat but every pixel becomes a scale x scale block - FUN_1000_c788's
 * third argument. */
void scr_pat_scale(Screen *s, int x, int y, int id, int scale);
/* As scr_pat but index 0 is written too, for backgrounds. */
void scr_pat_opaque(Screen *s, int x, int y, int id);

#endif
