/* Super Depth's game state.
 *
 * Work in progress: what is here has been read out of the original, and what has
 * not been read yet is absent rather than invented.  Reconstructed so far:
 *
 *   - the screen furniture of a type-1 (SEA) stage, including the sea floor
 *   - the player: position, speed, limits, the two launchers, the depth charges
 *   - the enemies: the per-stage roster, spawning, movement and firing for
 *     kinds 1, 2, 3, 4 and 9, all their sprites, and the dying animation
 *   - the enemies' two weapons (the missiles home), the collisions both ways
 *   - the items: the lottery, all seven effects, the flush bomb, the messages
 *   - the HUD: score, lives, the frame, the stage banner - the text plane
 *   - the per-frame palette animation and the fades
 *   - the frame rate: VSYNC / DS:0x1820, i.e. 56.4Hz / 5
 *   - the music and the sound effects (src/sound.c)
 *
 * Still to come: the other three stage types, the bosses, the title screen,
 * the name entry and the ranking, and all of the sound.
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
#include "text.h"
#include "sound.h"

#define MAX_ENT   16     /* slot 0 is the player; DS:0x17f4 caps the rest at 9 */
#define MAX_SHOT  16     /* the player's depth charges */
#define MAX_BULLET 16    /* the enemies' rising shots */
#define MAX_MISSILE 8    /* the faster weapon kinds 2 and 4 use */

/* pad bits; the original reads them as separate ints at DS:0x2130..0x213a.
 * Only SPACE uses up and down - the ship is on the surface in SEA and SKY. */
#define PAD_LEFT  0x01
#define PAD_RIGHT 0x02
#define PAD_A     0x04
#define PAD_B     0x08
#define PAD_UP    0x10
#define PAD_DOWN  0x20

/* The playfield is wider than the screen: enemies live 320px off each edge and
 * are dropped once past -0x140 / 0x380. */
#define FIELD_LO (-0x140)
#define FIELD_HI 0x380

typedef struct {
    int y;                /* >= 0x130 means free */
    int x, target;        /* the charge drifts back toward `target` */
    int vx;
} Shot;

/* The weapon slots.  The stage types disagree about which way things travel
 * and which value in `y` means the slot is free, so each of src/stage_*.c
 * says so for itself; the extra fields are the ones only some of them use. */
typedef struct { int y, x, v; } Bullet;
typedef struct { int y, x, vx, vy, t; } Missile;   /* t: BOSS homes while it lasts */

/* SPACE's starfield: 70 of them in three parallax layers, scrolled by the
 * ship's horizontal speed. */
#define MAX_STAR 70
typedef struct { int x, y, layer, colour; } Star;

typedef struct {
    int kind;             /* DS:0x17f6 */
    int x, y;             /* DS:0x1f8a, DS:0x1fca; y == 0 means not on screen */
    int vx, vy;           /* DS:0x1d6a, DS:0x1d8a */
    int state;            /* DS:0x1faa, 10 = alive, then counts down while dying */
    int aux;              /* DS:0x1822 */
    int speed;            /* DS:0x1d4a[i], the same array the ship's speed is
                           * slot 0 of; only SPACE gives the enemies one */
} Ent;

/* What the stage loop is doing.  The original blocks inside its fade routines
 * (FUN_1000_82d7 and friends), which call FUN_1000_9fbc to wait; a tick-driven
 * port has to make those states instead. */
typedef enum {
    GS_TITLE,        /* FUN_1000_8ae2, src/title.c */
    GS_FADE_IN,      /* FUN_1000_82d7(0x2b8), 16 steps of 2 VSYNC ticks */
    GS_PLAY,
    GS_FLASH_UP,     /* FUN_1000_83b5(0x2b8), the flush bomb going off */
    GS_FLASH_DOWN,   /* FUN_1000_8425(0x2b8) */
    GS_FADE_OUT,     /* FUN_1000_84ae, on death */
    GS_OVER          /* FUN_1000_a29e; the original goes to the name entry here */
} GameState;

typedef struct Stage Stage;

typedef struct Game {
    Screen *scr;
    const PatBank *bank;
    Snd *snd;              /* optional; nothing here needs it to be there */
    TextPlane txt;

    GameState state;
    int fade_step, fade_ticks;

    int stage;            /* DS:0x1818, 1..12 */
    int type;             /* DS:0x1816, ((stage - 1) % 4) + 1 */
    int last_stage;       /* DS:0x1dae, the stage played before this one */
    int lives;            /* DS:0x1842 */
    int lives_at_start;   /* DS:0x1510, so a death repeats the stage */
    long score;           /* DS:0x1db6 */
    int frame;            /* game frames since the stage started */
    int page;             /* DS:0x1844, flips every frame */
    int nent;             /* DS:0x17f4, 9 by default, 15 with -E */
    int wait;             /* DS:0x1820, VSYNC ticks per frame; 5 by default */

    int px, py, pvx, pvy; /* slot 0 of the arrays, plus DS:0x1d6a/0x1d8a[0] */
    int speed;            /* DS:0x1d4a, 4 at stage start; Speed Up! */
    int shot_max;         /* DS:0x1d48, 4 at stage start; Shot Max Up! */
    int power;            /* DS:0x20c6, Shot Special!: the charges spread */
    int ship;             /* DS:0x181e, Shot Power Up!: faster, heavier charges */
    int pstate;           /* DS:0x1faa[0], 10 alive, 9.. dying */

    int trig;             /* buttons have to be released between charges */
    int shots_live, bullets_live, missiles_live, alive;
    int kills, quota;     /* the stage's local_2c and local_28 */

    /* BOSS: the boss is not an entity with a kind, it is a body made of
     * entity slots whose `kind` field holds a pattern number.  These are its
     * counters - twenty hits kill it, and the phase then runs the death. */
    int boss_hits, boss_phase, boss_timer, boss_blasts;

    /* The title screen: which menu item is lit, the release latch the stick
     * needs, and where the credit line has got to. */
    int menu_sel, menu_trig, credit, credit_step;
    int died;             /* local_4e; set when the last life ran out this stage */

    /* The item, DS:0x1dc0 / 0x193e / 0x1d40 / 0x1db2 / 0x1db4 / 0x1d44.
     * `timer` is -1 while it is still rising and counts down once it has
     * reached the surface. */
    int item_kind, item_x, item_y, item_vx, item_vy, item_timer;
    int msg_timer;        /* DS:0x181c, in VSYNC ticks; 0x78 when a message goes up */

    /* FUN_1000_8184's three counters, which drive the animated palette, the
     * bobbing waterline, the charge sprite and the bullet sprite. */
    int pal_a, pal_b, pal_c;   /* DS:0x1846 (0..2), DS:0x184a (0..3), DS:0x193c (0..7) */

    /* The in-game palette.  It is SD_PAL_GAME to start with, but SPACE blacks
     * out entry 0 for the sky - the original patches DS:0x02ba the same way. */
    unsigned char pal[16][3];

    Star star[MAX_STAR];

    Ent ent[MAX_ENT];
    Shot shot[MAX_SHOT];
    Bullet bullet[MAX_BULLET];
    Missile missile[MAX_MISSILE];

    const Stage *stage_ops;   /* which of src/stage_*.c is running */
    int ent_off;              /* the y an entity has while off the field:
                               * 0 in SEA, -0x20 where they come in from above */

    unsigned pad;
    unsigned rnd;
    int invuln;           /* test hook: tests/frames.exe --god, so a long run
                           * can reach a stage clear without playing well */
    int boss_weak;        /* DS:0x181a, the original's own -B switch: the boss
                           * starts one hit from death */
    int base_c32, base_c16, base_c08, base_bos;
} Game;

void game_init(Game *g, Screen *scr, const PatBank *bank, const TextFont *font,
               int base_c32, int base_c16, int base_c08, int base_bos);
/* Give the game a synth to talk to.  Call it before game_stage_start so the
 * first stage gets its music. */
void game_sound(Game *g, Snd *snd);

/* The title screen (src/title.c).  game_init starts here; picking "Game Start"
 * calls game_stage_start. */
void title_start(Game *g);
void title_tick(Game *g);
void game_stage_start(Game *g, int stage);
void game_tick(Game *g);

/* How long one game frame lasts.  The original waits for DS:0x1820 VSYNC
 * interrupts (DS:0x0dd0, incremented by the handler at 1000:bb44) and the
 * 640x400 mode runs at about 56.4Hz, so the default of 5 is roughly 11 frames
 * a second - which is what a 286/10MHz could manage and what makes the 0x78
 * message timer come out as the two seconds it plainly wants to be. */
#define VSYNC_HZ 56.42
int game_frame_ms(const Game *g);

#endif
