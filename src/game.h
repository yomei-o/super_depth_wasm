/* Super Depth's game state.
 *
 * Work in progress: what is here has been read out of the original, and what has
 * not been read yet is absent rather than invented.  Reconstructed so far:
 *
 *   - the screen furniture of a type-1 (SEA) stage: the sky band, the sea, the
 *     sea-floor tile row, and the player's ship
 *   - the player: position, speed, movement limits, and the two shot launchers
 *   - the shot array
 *
 * Still to come: the enemies, the items, the four stage variants' behaviour, the
 * bosses, the title screen and the name entry.
 *
 * The original keeps its entities as parallel arrays of int16 at consecutive
 * DGROUP offsets with the player at index 0 - x[] at DS:0x1f8a, state[] at
 * 0x1faa, y[] at 0x1fca, kind[] at 0x17f6 - so 16 entities in all.  The shots
 * live on the stage function's own stack, which is why they are locals there and
 * fields here.
 */
#ifndef GAME_H
#define GAME_H

#include "video.h"

#define MAX_ENT  16
#define MAX_SHOT 16

/* pad bits; the original reads them as separate ints at DS:0x2134.. */
#define PAD_LEFT  0x01
#define PAD_RIGHT 0x02
#define PAD_A     0x04
#define PAD_B     0x08
#define PAD_ESC   0x80

typedef struct {
    int y;                /* >= 0x130 means the slot is free */
    int x, oldx;
    int vx;
} Shot;

typedef struct {
    Screen *scr;
    const PatBank *bank;

    int stage;            /* DS:0x1818, 1..12 */
    int type;             /* ((stage - 1) % 4) + 1 */
    int lives;            /* DS:0x1842 */
    int frame;            /* DS:0x0dd0, the timer tick the game clocks off */

    int px, py;           /* DS:0x1f8a[0], DS:0x1fca[0] */
    int pvx;              /* DS:0x1d6a */
    int speed;            /* DS:0x1d4a, 4 at stage start; the Speed Up! item */
    int shot_max;         /* DS:0x1d48, 4 at stage start; Shot Max Up! */
    int power;            /* DS:0x20c6, spreads the shots */
    int ship;             /* DS:0x181e, picks the ship sprite (3 patterns apart) */

    int trig;             /* the original's local_d6: buttons must be released */
    int shots_live;
    Shot shot[MAX_SHOT];

    unsigned pad, padprev;
    int base_c32, base_c16, base_c08, base_bos;
} Game;

void game_init(Game *g, Screen *scr, const PatBank *bank,
               int base_c32, int base_c16, int base_c08, int base_bos);
void game_stage_start(Game *g, int stage);
void game_tick(Game *g);

#endif
