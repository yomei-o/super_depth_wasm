/* BFNT - the PC-98 character/sprite files Super Depth loads (depth.c32,
 * depth.c16, depth.c08, depth.bos and the depth.fnt text font).
 *
 * Header, verified against FUN_1000_c8e0 in DEPTH.EXE:
 *
 *   0x00  char   magic[4]  "BFNT"
 *   0x04  uint8  0x1a      end-of-text byte, so TYPEing the file stops here
 *   0x05  uint8  bpp - 1   3 for the 16-colour sprites, 0 for the mono font.
 *                          Bit 7 set would mean an embedded palette follows the
 *                          header; none of Super Depth's files set it.
 *   0x08  uint16 width     the loader requires width == height and width % 8 == 0
 *   0x0a  uint16 height
 *   0x0c  uint16 first     first character code stored
 *   0x0e  uint16 last      last character code stored
 *   0x20            pixel data, (last - first + 1) characters
 *
 * Pixels are PACKED, most significant bits leftmost: two pixels per byte at
 * 4bpp, eight at 1bpp.  The original loader reads a byte and scatters its bits
 * into four plane buffers - 0x80/0x40/0x20/0x10 for the left pixel and
 * 0x08/0x04/0x02/0x01 for the right - into planes 3,2,1,0 respectively.  Since
 * the PC-98 forms the palette index as (I<<3)|(G<<2)|(R<<1)|B and those planes
 * are I,G,R,B, the nibble is already the palette index; nothing needs swizzling.
 *
 * Reading the file as planar instead gives exactly the same byte count, so the
 * size arithmetic cannot tell the two apart - only looking at the result can.
 *
 * Index 0 is transparent when a pattern is drawn as a sprite.  BFNT carries no
 * mask, so there is nothing else it could be.
 */
#ifndef BFNT_H
#define BFNT_H

#define PAT_MAX 512

typedef struct {
    int w, h;
    const unsigned char *px;   /* w * h bytes, one palette index each */
} Pattern;

typedef struct {
    Pattern pat[PAT_MAX];
    int count;                 /* patterns registered so far */
    unsigned char *store;      /* one block holding every pattern's pixels */
    long store_used, store_cap;
} PatBank;

void pat_init(PatBank *b);
void pat_free(PatBank *b);

/* Load one BFNT file and append its characters to the bank, mirroring
 * FUN_1000_c8e0.  Returns the base pattern number, or -1 on failure - the same
 * contract the original has, and the reason the game keeps four base numbers
 * (DS:0x1d42 for c32, 0x1d46 for c16, 0x1dac for c08, and one more for bos) and
 * addresses sprites as base + tile. */
int  pat_load(PatBank *b, const char *path);

#endif
