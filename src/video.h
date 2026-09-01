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
 */
#ifndef VIDEO_H
#define VIDEO_H

#include "bfnt.h"

#define SCR_W 640
#define SCR_H 400

typedef struct {
    unsigned char px[SCR_W * SCR_H];
    unsigned char pal[16][3];      /* 8 bits per channel, ready for a display */
    const PatBank *bank;
} Screen;

void scr_init(Screen *s, const PatBank *bank);
void scr_clear(Screen *s, unsigned char index);

/* Load all 16 entries from a PC-98 table of 4-bit R,G,B triplets
 * (FUN_1000_ba6a) or set one entry (FUN_1000_ba8c). */
void scr_palette(Screen *s, const unsigned char table[16][3]);
void scr_colour(Screen *s, int index, int r, int g, int b);

/* Draw pattern `id` with its top-left at (x,y), clipped, treating index 0 as
 * transparent - the sprite path (FUN_1000_c788). */
void scr_pat(Screen *s, int x, int y, int id);
/* As scr_pat but index 0 is written too, for backgrounds. */
void scr_pat_opaque(Screen *s, int x, int y, int id);

#endif
