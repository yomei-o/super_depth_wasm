/* Super Depth's game state.
 *
 * Work in progress: what is here has been read out of the original, and what has
 * not been read yet is absent rather than invented.  Reconstructed so far:
 *
 *   - the screen furniture of a type-1 (SEA) stage
 *   - the player: position, speed, limits, the two launchers, the depth charges
 *   - the enemies: the per-stage roster, spawning, movement and firing for
 *     kinds 1, 2, 3, 4 and 9, and the sprites for 1, 3 and 9
 *   - the enemies' two weapons, the collisions both ways, the score table
 *
 * Still to come: the items, the dying animations, the other three stage types,
 * the bosses, the title screen, the name entry, and all of the sound.
 *
 * The original keeps its entities as parallel arrays of int16 at consecutive
 * DGROUP offsets with the PLAYER AT INDEX 0, which is why the fields below are
 * arrays with slot 0 given over to the ship:
 *
 *   DS:0x1f8a  x        DS:0x1fca  y (0 = slot free)   DS:0x1d6a  vx
 *   DS:0x1d8a  vy       DS:0x1faa  state (10 = alive)  DS:0x17f6  kind
 *   DS:0x1d4a  speed    DS:0x1822  aux counter
 *
 * The shots and the enemies' weapons live on the stage function's own stack, so
 * they are plain arrays here.
 */
#ifndef GAME_H
#define GAME_H

#include "video.h"

#define MAX_ENT   16     /* slot 0 is the player; DS:0x17f4 caps the rest at 9 */
#define MAX_SHOT  16     /* the player's depth charges */
#define MAX_BULLET 16    /* the enemies' rising shots */
#define MAX_MISSILE 8    /* the faster weapon kinds 2 and 4 use */

/* pad bits; the original reads them as separate ints at DS:0x2134.. */
#define PAD_LEFT  0x01
#define PAD_RIGHT 0x02
#define PAD_A     0x04
#define PAD_B     0x08

/* The playfield is wider than the screen: enemies live 320px off each edge and
 * are dropped once past -0x140 / 0x380. */
#define FIELD_LO (-0x140)
#define FIELD_HI 0x380

typedef struct {
    int y;                /* >= 0x130 means free */
    int x, target;        /* the charge drifts back toward `target` */
    int vx;
} Shot;

typedef struct { int y, x; } Bullet;        /* free when y < 0x21 */
typedef struct { int y, x, phase; } Missile;/* free when y < -0xf */

typedef struct {
    int kind;             /* DS:0x17f6 */
    int x, y;             /* DS:0x1f8a, DS:0x1fca; y == 0 means not on screen */
    int vx, vy;           /* DS:0x1d6a, DS:0x1d8a */
    int state;            /* DS:0x1faa, 10 = alive, then counts down while dying */
    int aux;              /* DS:0x1822 */
} Ent;

typedef struct {
    Screen *scr;
    const PatBank *bank;

    int stage;            /* DS:0x1818, 1..12 */
    int type;             /* DS:0x1816, ((stage - 1) % 4) + 1 */
    int lives;            /* DS:0x1842 */
    long score;           /* DS:0x1db6 */
    int frame;            /* DS:0x0dd0, the timer tick the game clocks off */
    int page;             /* DS:0x1844, flips every frame */
    int nent;             /* DS:0x17f4, 9 by default, 15 with -E */

    int px, py, pvx;      /* slot 0 of the arrays, plus DS:0x1d6a[0] */
    int speed;            /* DS:0x1d4a, 4 at stage start; Speed Up! */
    int shot_max;         /* DS:0x1d48, 4 at stage start; Shot Max Up! */
    int power;            /* DS:0x20c6, spreads the charges */
    int ship;             /* DS:0x181e, picks the charge colour */
    int pstate;           /* DS:0x1faa[0], 10 alive, 9.. dying */

    int trig;             /* buttons have to be released between charges */
    int shots_live, bullets_live, missiles_live, alive;
    int kills, quota;     /* the stage's local_2c and local_28 */
    int cleared;

    Ent ent[MAX_ENT];
    Shot shot[MAX_SHOT];
    Bullet bullet[MAX_BULLET];
    Missile missile[MAX_MISSILE];

    unsigned pad;
    unsigned rnd;
    int base_c32, base_c16, base_c08, base_bos;
} Game;

void game_init(Game *g, Screen *scr, const PatBank *bank,
               int base_c32, int base_c16, int base_c08, int base_bos);
void game_stage_start(Game *g, int stage);
void game_tick(Game *g);

#endif
