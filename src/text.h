/* The PC-98 text plane, which is where Super Depth's HUD lives.
 *
 * None of the score, the lives, the frame around them or the "Speed Up!"
 * messages are graphics: they are characters in the 80x25 text plane that the
 * hardware composites over the 640x400 graphics screen.  DEPTH.FNT is a
 * 16x16 monochrome BFNT that the game uploads as PC-98 user-defined characters
 * (FUN_1000_bc6f), and then addresses with two-byte codes - which is why a
 * 16x16 font ships as its own file.
 *
 * A 16x16 character therefore covers TWO 8x16 cells, and every write in the
 * original puts the character code in the first cell and code-0x80 in the
 * second.  That is reproduced here as a glyph number plus a left/right half,
 * because the halves have to be able to be overwritten independently the way
 * the real plane can.
 *
 * The four writers below are the original's, and their odd signatures are its
 * too:
 *
 *   FUN_1000_beea(row, col, attr, str)     txt_puts
 *   FUN_1000_bf46(row, col, attr, ch)      txt_putc
 *   FUN_1000_be36(row, col, attr, value)   txt_num5   - see the note there
 *   FUN_1000_be99(row, col, attr, value)   txt_num2
 *
 * Attributes are the PC-98 byte: bit7 green, bit6 red, bit5 blue, bit4 vertical
 * line, bit3 blink, bit2 reverse, bit1 underline, bit0 display.  So 0xe1 is
 * plain white, 0x41 red, 0x05 a black block.
 */
#ifndef TEXT_H
#define TEXT_H

#include "video.h"

#define TXT_ROWS 25
#define TXT_COLS 80

#define TXT_ATTR_DISPLAY 0x01
#define TXT_ATTR_UNDER   0x02
#define TXT_ATTR_REVERSE 0x04
#define TXT_ATTR_BLINK   0x08
#define TXT_ATTR_VLINE   0x10

typedef struct {
    unsigned short row[256][16];   /* 256 glyphs, 16 rows of 16 bits, MSB left */
    int loaded;
} TextFont;

typedef struct {
    unsigned char glyph[TXT_ROWS][TXT_COLS];
    unsigned char half[TXT_ROWS][TXT_COLS];   /* 0 = left, 1 = right */
    unsigned char attr[TXT_ROWS][TXT_COLS];   /* 0 = the cell is empty */
    const TextFont *font;
} TextPlane;

/* Read DEPTH.FNT.  Mono BFNT, width == height == 16, 256 characters. */
int  txt_font_load(TextFont *f, const char *path);

void txt_init(TextPlane *t, const TextFont *f);
void txt_clear(TextPlane *t);

void txt_puts(TextPlane *t, int row, int col, int attr, const char *s);
void txt_putc(TextPlane *t, int row, int col, int attr, int ch);
/* FUN_1000_be36 writes five digits, but addresses the plane from the LAST pair
 * of cells: its cell index is (row * 80 + col + 8) and it walks backwards.  The
 * ten cells it ends up covering are columns col .. col+9, which is what this
 * takes. */
void txt_num5(TextPlane *t, int row, int col, int attr, long value);
void txt_num2(TextPlane *t, int row, int col, int attr, int value);

/* Composite the plane over the graphics screen.  Text uses the PC-98's eight
 * fixed digital colours, which live at SCR_TEXT..SCR_TEXT+7 in the palette. */
void txt_draw(const TextPlane *t, Screen *s);

#endif
