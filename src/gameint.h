/* What the stage modules share with game.c.
 *
 * Super Depth is four stage loops, not one: DEPTH.EXE has a separate routine
 * per stage type, each with its own enemies, its own weapons and its own
 * screen, and they only agree on the furniture - the entity arrays, the score,
 * the items, the HUD, the palette animation and the way a stage is entered and
 * left.  That split is kept here: game.c is the furniture and the frame, and
 * src/stage_*.c is one stage type each.
 *
 *   type 1  SEA    FUN_1000_06f6   src/stage_sea.c
 *   type 2  SKY    FUN_1000_1fdc   src/stage_sky.c
 *   type 3  SPACE  FUN_1000_383a   not written yet
 *   type 4  BOSS   FUN_1000_5818   not written yet
 *
 * Nothing in here is part of the port's interface; front ends only need
 * game.h.
 */
#ifndef GAMEINT_H
#define GAMEINT_H

#include "game.h"

/* One stage type.  Every hook runs in the order the original's loop runs them,
 * which game_tick spells out. */
struct Stage {
    int type;
    /* The opening block: where the ship starts, what the background is, which
     * song plays, and the kill quota. */
    void (*start)(Game *g);
    /* One entity: count it if it is on the field, wind down its explosion, or
     * spawn / steer / fire it. */
    void (*enemy)(Game *g, int i);
    /* A launcher: 0 is the left button, 1 the right. */
    void (*fire)(Game *g, int which);
    /* The player's weapon: move, hit things, drop items. */
    void (*shots)(Game *g);
    /* The enemies' weapons: move, hit the ship. */
    void (*weapons)(Game *g);
    /* The item: drift, be picked up, time out. */
    void (*item)(Game *g);
    /* Everything the flush bomb clears besides the enemies. */
    void (*clear_shots)(Game *g);
    /* The background and every sprite; game.c adds the HUD on top. */
    void (*draw)(Game *g);
    /* The blips in the HUD's black panel, drawn after the band is painted. */
    void (*radar)(Game *g);
};

const Stage *stage_for(int type);
const Stage *stage_sea(void);
const Stage *stage_sky(void);

/* --- game.c, for the stage modules ------------------------------------- */

int  sd_rand(Game *g);
int  sd_sgn(int v);
int  sd_toward_middle(int x);        /* the direction from x to the middle */

void sd_sfx(Game *g, int n);         /* FUN_1000_cff4 */
void sd_music(Game *g, int song, int loop);
void sd_kill_enemy(Game *g, int idx);/* FUN_1000_824a */
void sd_hit_player(Game *g);
void sd_item_roll(Game *g);          /* FUN_1000_9d84 */
void sd_item_apply(Game *g);         /* FUN_1000_80f0 */
void sd_item_taken(Game *g);         /* the message, the sound, and the bomb */
void sd_hud_score(Game *g);
void sd_quota(Game *g, int per, int shipmul);

/* Drawing helpers.  `fill` takes byte columns and pixel rows, like
 * FUN_1000_b854; `pat_pair` is FUN_1000_88a2 and skips the half that has left
 * the screen; `explosion` is FUN_1000_85b8 / FUN_1000_8562. */
void sd_fill(Game *g, int col0, int y0, int col1, int y1, int colour);
void sd_pat_pair(Game *g, int x, int y, int left, int right);
void sd_explosion(Game *g, int x, int y, int state, int narrow);
/* FUN_1000_890a - one blip on the radar in the HUD's black panel. */
void sd_radar(Game *g, int x, int y, int w, int colour);

#endif
