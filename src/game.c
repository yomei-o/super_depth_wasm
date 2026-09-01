/* Super Depth's game logic, as far as it has been read out of DEPTH.EXE.
 *
 * All the numbers are the original's.  The type-1 (SEA) stage lives at
 * 0x06f6..0x1fa9 in the code segment - Ghidra splits it into FUN_1000_06f6,
 * _1122, _1288, _13e0 and _1faa, but every edge between those is a `jmp`, not a
 * `call`: it is one routine.  Entering at the top of _13e0, one frame runs:
 *
 *   the stage's exit test -> the charges -> the enemies' bullets -> their
 *   missiles -> the item -> apply all the motion and flip the page -> draw ->
 *   wait for VSYNC and animate the palette -> read the stick -> the enemy loop
 *
 * and the back edge from the end of the enemy loop returns to the exit test.
 * Line references below use Ghidra's names since that is what the decompilation
 * is filed under.
 *
 * Two things about reading that decompilation, both of which cost time:
 *
 *   - the BP offsets in _1122/_1288/_13e0 are 2 higher than the same variables
 *     in _06f6, because Ghidra treats a jump target as a function and assumes a
 *     pushed return address that is not there.  _06f6's names are the ones used
 *     here: the quota is its local_28, the kills local_2c, the live count
 *     local_2a.
 *   - FUN_1000_c8e0 returns the NUMBER of patterns it loaded, not their base.
 *     depth.c32 is loaded first and has 64, so DS:0x1d42 is 64 - which is the
 *     base of depth.c16.  Every `0x1d42 + n` in the decompilation is therefore
 *     a 16x16 pattern, and a bare number is a 32x32 one.
 *
 * Where behaviour has not been read yet it is left out rather than guessed at.
 */
#include "game.h"
#include "pal.h"
#include "tables.h"
#include <string.h>

/* Screen bands.
 *
 * The sky is a filled box redrawn every frame, one pixel taller on half of the
 * palette cycle, which is what makes the waterline move:
 *   FUN_1000_b854(4, 0, 0x4b, 0x29 - (3 < DS:0x193c), 5)
 *
 * The sea floor is two rows of 16x16 patterns laid across all 40 columns at
 * stage start (FUN_1000_c25e, which is an opaque blit and not the flat fill it
 * first looked like - it drives the GRCG through the same five passes the
 * sprite path does), and below them FUN_1000_8292 repaints the HUD's grey band
 * every frame:
 *   FUN_1000_b854(4, 0x160, 0x4b, 399, 0xd)     the grey strip
 *   FUN_1000_b854(0x1e, 0x161, 0x31, 0x18e, 8)  the black panel inside it
 */
#define SKY_H     0x28
#define SKY_COL   5
#define FLOOR_Y   0x140
#define BAND_Y    0x160
#define BAND_COL  13
#define PANEL_COL 8

/* The player's limits, from the movement test:
 *   right while  speed + x < 0x210,  left while  0x2f < x - speed  */
#define PX_MIN 0x30
#define PX_MAX 0x210

/* The item lottery, DS:0x0524, drawn with rnd % 0x10 (FUN_1000_9d84). */
static const unsigned char SD_ITEM_ROLL[16] = {
    1, 1, 1, 1, 2, 2, 2, 2, 3, 3, 4, 4, 5, 5, 6, 7
};

/* The dying animation's frame, indexed by the countdown at DS:0x1faa[i].
 * DS:0x04ec; kinds 3 and 9 draw `frame + 0x20` as one 32x32 pattern
 * (FUN_1000_8562), the rest draw `(frame + 8) * 2` and `frame * 2 + 0x11` side
 * by side (FUN_1000_85b8). */
static const unsigned char SD_EXPLODE[10] = { 0, 0, 1, 1, 2, 2, 1, 1, 0, 0 };

/* How far a missile's sprite leans, indexed by its horizontal speed -8..8.
 * DS:0x0510 read from 0x0500; the drawn pattern is base_c16 + 0xc + lean. */
static const signed char SD_MISSILE_LEAN[17] = {
    -3, -3, -2, -2, -2, -1, -1, 0, 0, 0, 1, 1, 2, 2, 2, 3, 3
};

/* The original's rand(), FUN_1000_efc8, is the Microsoft C 6.0 library's. */
static int sd_rand(Game *g)
{
    g->rnd = g->rnd * 214013u + 2531011u;
    return (int)((g->rnd >> 16) & 0x7fff);
}

static int sgn(int v) { return v > 0 ? 1 : (v < 0 ? -1 : 0); }

/* The original writes this as `if (a == b) 0; else if (-a == -b || -a + b < 0)
 * -1; else 1`, i.e. the direction from x toward the middle of the field. */
static int toward_middle(int x) { return sgn(0x140 - x); }

int game_frame_ms(const Game *g)
{
    /* Types 3 and 4 wait for one VSYNC less than the others. */
    int ticks = (g->type >= 3) ? g->wait - 1 : g->wait;

    if (ticks < 1)
        ticks = 1;
    return (int)(ticks * 1000.0 / VSYNC_HZ + 0.5);
}

/* ---------------------------------------------------------------- the HUD */

/* Row 22 carries the labels, row 24 the numbers, and rows 22..24 columns
 * 30..49 are a box drawn out of the font's frame characters (codes 1..14). */
static void hud_score(Game *g)          /* FUN_1000_a25a */
{
    /* The score is shown times ten: five digits and then a fixed '0'. */
    txt_putc(&g->txt, 0x18, 0x14, 0xe1, '0');
    txt_num5(&g->txt, 0x18, 10, 0xe1, g->score);
}

static void hud_lives(Game *g)          /* FUN_1000_a286 */
{
    txt_num2(&g->txt, 0x18, 0x3e, 0xe1, g->lives - 1);
}

static void hud_frame(Game *g)          /* FUN_1000_a428 */
{
    txt_puts(&g->txt, 0x16, 0x1e, 0xe1,
             "\x01\x05\x0b\x09\x09\x09\x09\x0c\x05\x02");
    txt_puts(&g->txt, 0x17, 0x1e, 0xe1, "\x07        \x08");
    txt_puts(&g->txt, 0x18, 0x1e, 0xe1,
             "\x03\x06\x0e\x0a\x0a\x0a\x0a\x0d\x06\x04");
}

static void hud_margins(Game *g)        /* FUN_1000_a3f8 */
{
    int row;

    /* The graphics only cover byte columns 4..75; these black out the rest. */
    for (row = 0; row < TXT_ROWS; row++) {
        txt_puts(&g->txt, row, 0, 5, "  ");
        txt_puts(&g->txt, row, 0x4c, 5, "  ");
    }
}

static void hud_setup(Game *g)          /* FUN_1000_a2ca */
{
    txt_puts(&g->txt, 0x16, 10, 0x41, "Score");
    hud_score(g);
    txt_puts(&g->txt, 0x16, 0x3c, 0x41, "Left");
    hud_lives(g);
    hud_frame(g);
    hud_margins(g);
}

static void msg_clear(Game *g)          /* FUN_1000_a23c */
{
    g->msg_timer = 0;
    txt_puts(&g->txt, 10, 8, 0xe1, "                                ");
}

static void msg_stage(Game *g)          /* FUN_1000_a196 */
{
    txt_puts(&g->txt, 10, 0x20, 0x41, "Stage");
    txt_num2(&g->txt, 10, 0x2c, 0xe1, g->stage);
    g->msg_timer = 0x78;
}

static void msg_ready(Game *g)          /* FUN_1000_a072 */
{
    txt_puts(&g->txt, 10, 0x24, 0x41, "Ready");
    g->msg_timer = 0x78;
}

static void msg_item(Game *g)           /* FUN_1000_a0d8 */
{
    msg_clear(g);
    switch (g->item_kind) {
    case 1:
        txt_puts(&g->txt, 10, 0x20, g->type == 1 ? 0xa1 : 0x21, "Speed Up!");
        break;
    case 2: txt_puts(&g->txt, 10, 0x1c, 0x41, "Shot Max Up!");   break;
    case 3: txt_puts(&g->txt, 10, 0x1a, 0x81, "Shot Power Up!"); break;
    case 4: txt_puts(&g->txt, 10, 0x1e, 0xc1, "Flush Bomb!");    break;
    case 5: txt_puts(&g->txt, 10, 0x1c, 0x61, "Shot Special!");  break;
    case 6:
        txt_puts(&g->txt, 10, 0x1e, g->type == 2 ? 0x01 : 0xe1, "Full Power!");
        break;
    case 7:
        /* The original leaves the timer alone for this one, so it stays up
         * until something else replaces it. */
        txt_puts(&g->txt, 10, 0x20, 0xc5, "Ship 1up!");
        hud_lives(g);
        return;
    default:
        return;
    }
    g->msg_timer = 0x78;
}

/* ---------------------------------------------------------------- start-up */

void game_init(Game *g, Screen *scr, const PatBank *bank, const TextFont *font,
               int base_c32, int base_c16, int base_c08, int base_bos)
{
    memset(g, 0, sizeof *g);
    g->scr = scr;
    g->bank = bank;
    g->base_c32 = base_c32;
    g->base_c16 = base_c16;
    g->base_c08 = base_c08;
    g->base_bos = base_bos;
    g->rnd = 1;
    txt_init(&g->txt, font);
    /* FUN_1000_8960 sets the defaults: 3 lives, start at stage 1, 9 entities,
     * 5 VSYNC ticks a frame, speed 4 and 4 charges. */
    g->lives = 3;
    g->nent = 9;
    g->wait = 5;
    g->speed = 4;
    g->shot_max = 4;
    g->last_stage = 1;
    scr_palette(scr, SD_PAL_GAME);
    game_stage_start(g, 1);
}

/* FUN_1000_8098 - fill the entity slots from the stage's roster. */
static void load_roster(Game *g)
{
    int i;

    for (i = 1; i < MAX_ENT; i++) {
        Ent *e = &g->ent[i];

        memset(e, 0, sizeof *e);
        e->state = 10;
        e->kind = (i <= SD_SLOTS) ? SD_ROSTER[g->stage][i - 1] : 0;
        /* Slots start off screen; the non-SEA stages start them above it. */
        e->y = (g->type != 1) ? -0x20 : 0;
    }
}

void game_stage_start(Game *g, int stage)
{
    int i, retry;

    if (stage < 1 || stage > SD_STAGES)
        stage = 1;
    g->stage = stage;
    g->type = ((stage - 1) % 4) + 1;
    g->frame = 0;
    g->page = 0;
    g->lives_at_start = g->lives;

    /* FUN_1000_06f6 checks DS:0x1818 against DS:0x1dae - the stage played last
     * time round the main loop.  Equal means this is a retry after dying (or
     * the very first stage), which resets the power-ups and says "Ready"
     * instead of announcing the stage. */
    retry = (g->stage == g->last_stage);

    g->px = 0x120;
    g->py = 0x10;
    g->pvx = 0;
    g->pstate = 10;
    g->trig = 1;
    if (retry) {
        g->speed = 4;
        g->shot_max = 4;
        g->ship = 0;
        g->power = 0;
    }
    g->shots_live = g->bullets_live = g->missiles_live = g->alive = 0;
    g->kills = 0;
    g->died = 0;
    g->pal_a = g->pal_b = g->pal_c = 0;
    g->item_kind = g->item_x = g->item_y = g->item_vx = g->item_vy = 0;
    g->item_timer = 0;
    /* The stage's kill quota, from
     *   local_28 = ((0x181e & 0x20c6) * 2 + (stage >> 2) + 3) * 5
     * i.e. ((ship & power) * 2 + stage / 4 + 3) * 5 - 15 on stage 1, 20 from
     * stage 5, 25 from stage 9.  Once it is met the survivors run for the edge
     * and no more spawn. */
    g->quota = (((g->ship & g->power) * 2) + (stage >> 2) + 3) * 5;

    for (i = 0; i < MAX_SHOT; i++) {
        g->shot[i].y = 0x130;
        g->shot[i].x = g->shot[i].target = g->shot[i].vx = 0;
    }
    for (i = 0; i < MAX_BULLET; i++) {
        g->bullet[i].y = 0x20;
        g->bullet[i].x = 0;
    }
    for (i = 0; i < MAX_MISSILE; i++) {
        g->missile[i].y = -0x10;
        g->missile[i].x = g->missile[i].vx = 0;
    }
    load_roster(g);

    txt_clear(&g->txt);
    hud_setup(g);
    if (retry)
        msg_ready(g);
    else
        msg_stage(g);

    /* FUN_1000_82d7(0x2b8): sixteen steps of two VSYNC ticks, fading up from
     * black into the in-game palette. */
    g->state = GS_FADE_IN;
    g->fade_step = 0;
    g->fade_ticks = 0;
    scr_palette_fade(g->scr, SD_PAL_GAME, 0);
}

/* ------------------------------------------------------------------ player */

static void fire(Game *g, int dx, int spread)
{
    int i, slot = -1;

    if (g->shots_live >= g->shot_max || !g->trig)
        return;
    for (i = 0; i < g->shot_max && i < MAX_SHOT; i++)
        if (g->shot[i].y > 0x12f) {
            slot = i;
            break;
        }
    if (slot < 0)
        return;
    g->shot[slot].y = g->py;
    g->shot[slot].x = g->shot[slot].target = g->px + dx;
    g->shot[slot].vx = g->power * spread;
    g->shots_live++;
    g->trig = 0;
}

/* Returns 0 once the ship's dying animation has run out, which ends the stage. */
static int update_player(Game *g)
{
    if (g->pstate < 10) {
        int was = g->pstate;

        g->pstate--;
        if (was < 1) {
            g->lives--;
            g->died = 1;
            return 0;
        }
        return 1;
    }
    g->pvx = 0;
    if ((g->pad & PAD_RIGHT) && g->speed + g->px < PX_MAX)
        g->pvx = g->speed;
    if ((g->pad & PAD_LEFT) && PX_MIN - 1 < g->px - g->speed)
        g->pvx = -g->speed;

    if (g->pad & PAD_A)
        fire(g, -0x10, -7);
    if (g->pad & PAD_B)
        fire(g, 0x40, 7);
    if (!(g->pad & (PAD_A | PAD_B)))
        g->trig = 1;
    return 1;
}

/* ----------------------------------------------------------------- enemies */

static int ent_free_bullet(Game *g)
{
    int i, slot = -1;

    for (i = 0; i < MAX_BULLET; i++)
        if (g->bullet[i].y < 0x21)
            slot = i;
    return slot;
}

static int ent_free_missile(Game *g)
{
    int i;

    for (i = 0; i < MAX_MISSILE; i++)
        if (g->missile[i].y < -0xf)
            return i;
    return -1;
}

/* Spawn one enemy off the side of the field.  `ymod`/`ybase` give the depth
 * band and `span` the horizontal launch offset, all straight from the original's
 * per-kind spawn blocks. */
static void spawn(Game *g, Ent *e, int ymod, int ybase, int span,
                  int vmod, int vbase)
{
    int dir;

    e->y = (sd_rand(g) % ymod + ybase) * 0x20;
    e->x = (sd_rand(g) % 2) * span + FIELD_LO;
    dir = toward_middle(e->x);
    e->vx = (sd_rand(g) % vmod + vbase) * dir;
    e->vy = 0;
    e->aux = 0;
}

static void update_enemy(Game *g, int idx)
{
    Ent *e = &g->ent[idx];

    /* The dying wind down here and free their slot.  The live count above them
     * has already seen them, which is why a stage cannot end mid-explosion. */
    if (e->state < 10) {
        if (--e->state == 0) {
            e->y = 0;
            e->vy = 0;
            e->state = 10;
        }
        return;
    }

    switch (e->kind) {
    case 1:
        if (sd_rand(g) % 0xf == 0 && e->y == 0 && g->kills < g->quota)
            spawn(g, e, 7, 2, 0x4c0, 4, 2);
        break;
    case 2:
        if (sd_rand(g) % 0x28 == 0 && e->y == 0 && g->kills < g->quota)
            spawn(g, e, 2, 7, 0x4c0, 3, 7);
        break;
    case 3: {
        int period = ((3 - g->ship) * 2 - g->power) * 10;

        if (period > 0 && sd_rand(g) % period == 0 && e->y == 0 &&
            g->kills < g->quota)
            spawn(g, e, 2, 2, 0x4e0, 4, 2);
        break;
    }
    case 4:
        if (sd_rand(g) % 0x1e == 0 && e->y == 0 && g->kills < g->quota) {
            e->y = 0x120;
            e->x = (sd_rand(g) % 2) * 0x4c0 + FIELD_LO;
            e->vx = (sd_rand(g) % 4 + 5) * toward_middle(e->x);
            e->vy = 0;
            e->aux = 0;
        }
        /* Kind 4 stops to fire: aux counts up while still, down while moving. */
        if (e->vx == 0 && e->aux < 4)
            e->aux++;
        if (e->vx != 0 && e->aux > 0)
            e->aux--;
        if (e->x + e->vx > 0x1f && e->x + e->vx < 0x221) {
            int period = ((3 - g->ship) * 2 - g->power) * 10;

            if (period > 0 && sd_rand(g) % period == 0)
                e->vx = 0;
        }
        break;
    case 9:
        if (sd_rand(g) % 0xf == 0 && e->y == 0 && g->kills < g->quota)
            spawn(g, e, 7, 2, 0x4c0, 4, 2);
        break;
    default:
        return;
    }

    if (e->y == 0)
        return;

    /* Quota met: the survivors turn and run.  The original recomputes this
     * every frame as sign(vx) << 3, so it is a flat +-8. */
    if (g->quota <= g->kills)
        e->vx = sgn(e->vx) * 8;

    if (e->x + e->vx < FIELD_LO + 1 || e->x + e->vx > FIELD_HI - 1) {
        e->y = 0;
        return;
    }

    /* Firing.  Each kind has its own period, and only while on screen. */
    if (e->x > 0 && e->x < 0x240) {
        int period;

        switch (e->kind) {
        case 1:
        case 9:
            period = g->ship * -0x28 + 100;
            if (period > 0 && sd_rand(g) % period == 0 &&
                g->bullets_live < 0x10) {
                int s = ent_free_bullet(g);

                if (s >= 0) {
                    g->bullet[s].y = e->y + 0xc;
                    g->bullet[s].x = e->x + 0x18;
                    g->bullets_live++;
                }
            }
            break;
        case 2:
            period = ((g->ship * -2 + 5) - g->power) * 10;
            if (period > 0 && sd_rand(g) % period == 0 &&
                g->missiles_live < 8) {
                int s = ent_free_missile(g);

                if (s >= 0) {
                    g->missile[s].y = e->y + 0xc;
                    g->missile[s].x = e->x + 0x18;
                    g->missile[s].vx = 0;
                    g->missiles_live++;
                }
            }
            break;
        case 3:
            period = ((4 - g->power) - g->ship) * 5;
            if (period > 0 && sd_rand(g) % period == 0 &&
                g->bullets_live < 0x10) {
                int s = ent_free_bullet(g);

                if (s >= 0) {
                    g->bullet[s].y = e->y + 0x10;
                    g->bullet[s].x = e->x + 0x10;
                    g->bullets_live++;
                }
            }
            break;
        case 4:
            /* A four-shot salvo, once aux has wound up to 4. */
            if (e->aux == 4 && g->missiles_live < 4) {
                int k;

                for (k = 0; k < 4; k++) {
                    int s = ent_free_missile(g);

                    if (s < 0)
                        break;
                    g->missile[s].y = e->y + 8;
                    g->missile[s].x = e->x + k * 0x10;
                    g->missile[s].vx = 0;
                    g->missiles_live++;
                }
                e->vx = (sd_rand(g) % 4 + 5) * toward_middle(e->x);
            }
            break;
        default:
            break;
        }
    }
}

/* FUN_1000_824a - award the kill and start the dying animation. */
static void kill_enemy(Game *g, int idx)
{
    Ent *e = &g->ent[idx];

    e->state = 9;
    g->score += SD_SCORE[g->type][e->kind < 10 ? e->kind : 0];
    e->vy = 0;
    e->vx = 0;
    g->kills++;
    hud_score(g);
}

/* -------------------------------------------------------------------- items */

/* FUN_1000_9d84 - roll for what a kind-9 wreck leaves behind, then talk
 * yourself out of most of it.  The adjustments are all the original's, in its
 * order: a Flush Bomb is worthless with nothing else, the two weapon upgrades
 * collapse into one when you already have both, a spare ship is withheld while
 * you still have plenty, and being short of speed or of charges overrides
 * everything except Full Power. */
static void item_roll(Game *g)
{
    int k = SD_ITEM_ROLL[sd_rand(g) % 0x10];

    if (k == 6)
        sd_rand(g);                       /* the original burns one here */
    if (g->ship == 0 && g->power == 0 && k == 4)
        k = (sd_rand(g) % 2) * 2 + 3;     /* 3 or 5 */
    if ((k == 3 || k == 5) && g->ship == 1 && g->power == 1)
        k = 4;
    if (k == 3 && g->ship == 1)
        k = 5;
    if (k == 5 && g->power == 1)
        k = 3;
    if (g->lives > 2 && k == 7)
        k = 4;
    if (g->speed < 8 && k != 6 && k != 3 && k != 5)
        k = 1;
    if (g->shot_max < 6 && k != 6)
        k = 2;
    if (g->speed < 6 && k != 6)
        k = 1;
    g->item_kind = k;
}

/* FUN_1000_80f0 - what picking one up does.  Kind 4, the flush bomb, is not
 * here: the stage loop handles it inline because it has to clear the field. */
static void item_apply(Game *g)
{
    switch (g->item_kind) {
    case 1:
        if (g->speed < 0x10)
            g->speed += 2;
        break;
    case 2:
        g->shot_max += (g->type != 1) * g->power + 2;
        if (g->shot_max > 0x10)
            g->shot_max = 0x10;
        break;
    case 3:
        g->ship = 1;
        break;
    case 5:
        g->power = 1;
        if (g->shot_max < 0xf && g->type != 1)
            g->shot_max += 2;
        break;
    case 6:
        g->power = 1;
        g->ship = 1;
        g->shot_max = 0x10;
        g->speed = 10;
        break;
    case 7:
        g->lives++;
        g->lives_at_start++;
        break;
    default:
        break;
    }
}

/* The flush bomb: everything on screen dies and every shot in the air is
 * cleared, wrapped in a white flash. */
static void item_flush(Game *g)
{
    int i;

    for (i = 1; i < MAX_ENT; i++) {
        Ent *e = &g->ent[i];

        if (e->state == 10 && e->y != 0 && e->x > 0 && e->x < 0x240)
            kill_enemy(g, i);
    }
    for (i = 0; i < MAX_SHOT; i++)
        g->shot[i].y = 0x130;
    g->shots_live = 0;
    for (i = 0; i < MAX_BULLET; i++)
        g->bullet[i].y = 0x20;
    g->bullets_live = 0;
    for (i = 0; i < MAX_MISSILE; i++)
        g->missile[i].y = -0x10;
    g->missiles_live = 0;
    g->state = GS_FLASH_UP;
    g->fade_step = 0;
    g->fade_ticks = 0;
}

static void update_item(Game *g)
{
    if (g->item_kind == 0)
        return;
    if (g->item_timer < 0)
        g->item_y += g->item_vy;      /* still rising */
    else
        g->item_timer--;              /* sitting on the surface */

    if (g->px - 4 <= g->item_x && g->item_x <= g->px + 0x34 &&
        g->py <= g->item_y && g->item_y <= g->py + 0x1a) {
        if (g->item_kind == 4)
            item_flush(g);
        else
            item_apply(g);
        msg_item(g);
        g->item_kind = 0;
        return;
    }
    if (g->item_timer < 0 && g->item_y < 0x21) {
        g->item_y = 0x20;             /* it stops at the surface... */
        g->item_timer = 0x32;         /* ...and waits fifty frames */
    }
    if (g->item_timer == 0)
        g->item_kind = 0;
}

/* ------------------------------------------------------- shots and weapons */

/* The charge sinks at 2 pixels a frame, 6 with Shot Power Up.  With Shot
 * Special the launch gives it a sideways speed that then accelerates back
 * toward the column it was dropped in, so a spread charge curves in again. */
static void update_shots(Game *g)
{
    int i, j;

    for (i = 0; i < g->shot_max && i < MAX_SHOT; i++) {
        Shot *s = &g->shot[i];

        if (s->y > 0x12f)
            continue;
        s->y += g->ship * 4 + 2;
        if (g->power == 1) {
            s->x += s->vx;
            if (s->x != s->target)
                s->vx += (s->target < s->x) ? -1 : 1;
        }
        for (j = 1; j < MAX_ENT; j++) {
            Ent *e = &g->ent[j];
            int x0, x1, y0, y1;

            if (e->state < 10 || e->y == 0)
                continue;
            switch (e->kind) {
            case 1: case 2: case 4:
                x0 = e->x - 8; x1 = e->x + 0x38;
                y0 = e->y - 0xc; y1 = e->y + 0x18;
                break;
            case 3: case 9:
                x0 = e->x - 8; x1 = e->x + 0x18;
                y0 = e->y - 6; y1 = e->y + 0x18;
                break;
            default:
                continue;
            }
            if (x0 <= s->x && s->x <= x1 && y0 <= s->y && s->y <= y1) {
                int kind = e->kind, ex = e->x, ey = e->y;

                kill_enemy(g, j);
                s->y = 0x130;
                /* Only a kind 9 leaves anything, only while nothing else is on
                 * the field, and only if it died on screen. */
                if (kind == 9 && g->item_kind == 0 && ex > 0x1f && ex < 0x241) {
                    item_roll(g);
                    g->item_x = ex + 8;
                    g->item_y = ey + 8;
                    g->item_vx = 0;
                    g->item_vy = -4;
                    g->item_timer = -1;
                }
                break;
            }
        }
        if (s->y > 0x12f)
            s->y = 0x130;
    }
    g->shots_live = 0;
    for (i = 0; i < g->shot_max && i < MAX_SHOT; i++)
        if (g->shot[i].y <= 0x12f)
            g->shots_live++;
}

static void hit_player(Game *g)
{
    if (g->pstate == 10 && !g->invuln)
        g->pstate = 9;
}

static void update_bullets(Game *g)
{
    int i;

    for (i = 0; i < MAX_BULLET; i++) {
        Bullet *b = &g->bullet[i];

        if (b->y <= 0x20)
            continue;
        b->y -= 2;
        /* Clear of the ship, or high up: give a pixel back, so a bullet under
         * the hull closes faster than one off to the side. */
        if (b->x <= g->px - 6 ||
            (g->px + 0x36 <= b->x && (b->y < 0x31 || sd_rand(g) % 4 == 0)))
            b->y += 1;
        b->x -= g->page * 2 - 1;        /* a one-pixel wobble, tied to the flip */
        if (g->pstate == 10 && g->px - 6 <= b->x && b->x <= g->px + 0x36 &&
            g->py - 0xc <= b->y && b->y <= g->py + 0x18) {
            hit_player(g);
            b->y = 0;
        }
    }
    g->bullets_live = 0;
    for (i = 0; i < MAX_BULLET; i++)
        if (g->bullet[i].y > 0x20)
            g->bullets_live++;
}

/* The missiles steer.  While one is below the guidance ceiling - which rises
 * with the power-ups, so an upgraded ship is chased for less of the climb - it
 * randomly nudges its horizontal speed toward the player each frame; above it
 * the drift decays back to straight.  The speed is capped at +-8 and picks the
 * sprite's lean out of DS:0x0510. */
static void update_missiles(Game *g)
{
    int i;

    for (i = 0; i < MAX_MISSILE; i++) {
        Missile *m = &g->missile[i];
        int ceiling;

        if (m->y < -0xf)
            continue;
        m->y -= 8;
        ceiling = (g->ship + g->power) * -0x1e + 0xa0;
        if (m->y > ceiling) {
            int d = g->px - m->x;
            int dir = (d == -0x18) ? 0 : ((d + 0x18 < 0) ? -1 : 1);

            m->vx += (sd_rand(g) * dir) % 2;
        } else {
            m->vx -= g->page * sgn(m->vx);
        }
        if (m->vx > 8 || m->vx < -8)
            m->vx = sgn(m->vx) * 8;
        m->x += m->vx;
        if (g->pstate == 10 && g->px - 4 <= m->x && m->x <= g->px + 0x34 &&
            g->py - 0xc <= m->y && m->y <= g->py + 0x18) {
            hit_player(g);
            m->y = -0x10;
            continue;
        }
        if (m->x < 0x10 || m->x > 0x26f)
            m->y = -0x10;
    }
    g->missiles_live = 0;
    for (i = 0; i < MAX_MISSILE; i++)
        if (g->missile[i].y >= -0xf)
            g->missiles_live++;
}

/* Movement is applied together, after everything has decided what to do - the
 * original does exactly this, walking the slots down from DS:0x17f4 and adding
 * vx/vy, then the player, then flipping the page. */
static void apply_motion(Game *g)
{
    int i;

    for (i = g->nent; i >= 1; i--) {
        g->ent[i].x += g->ent[i].vx;
        g->ent[i].y += g->ent[i].vy;
    }
    g->px += g->pvx;
    g->page ^= 1;
}

/* FUN_1000_8184, once a frame: four of the sixteen colours are rewritten from
 * the page flag and two small counters, so the water and the highlights are
 * never still.  The counters are read by the drawing code as well - 0x193c
 * moves the waterline and the ship, 0x184a picks the charge frame, 0x1846 the
 * bullet frame. */
static void pal_tick(Game *g)
{
    scr_colour(g->scr, 2, g->page * 2 + 0xd, 0, 0);
    scr_colour(g->scr, 3, g->page * 2 + 0xd, 0, g->pal_c + 8);
    scr_colour(g->scr, 4, 0, g->page * 4 + 0xb, g->page << 3);
    scr_colour(g->scr, 6, g->pal_b + 0xc, g->pal_b + 9, 0);
    if (++g->pal_a > 2)
        g->pal_a = 0;
    if (++g->pal_b > 3)
        g->pal_b = 0;
    if (++g->pal_c > 7)
        g->pal_c = 0;
    if (g->msg_timer > 0) {
        g->msg_timer -= g->wait;      /* FUN_1000_a22a, in VSYNC ticks */
        if (g->msg_timer < 1)
            msg_clear(g);
    }
}

/* -------------------------------------------------------------------- draw */

static void fill(Game *g, int col0, int y0, int col1, int y1, int colour)
{
    int y;

    if (y0 < 0)
        y0 = 0;
    if (y1 > SCR_H - 1)
        y1 = SCR_H - 1;
    for (y = y0; y <= y1; y++)
        memset(g->scr->px + (long)y * SCR_W + col0 * 8, colour,
               (size_t)((col1 - col0 + 1) * 8));
}

static void draw_background(Game *g)
{
    int col, tile = (g->stage > 1) ? 2 : 0;

    /* The frame head clears only the play area; the floor and the HUD band
     * below it are redrawn rather than cleared. */
    fill(g, 4, 0, 0x4b, 0x13f, 0);
    fill(g, 4, 0, 0x4b, SKY_H + (g->pal_c < 4 ? 1 : 0) - 1, SKY_COL);
    for (col = 0; col < 40; col++) {
        scr_pat_opaque(g->scr, col * 16, FLOOR_Y, g->base_c16 + 0x40 + tile);
        scr_pat_opaque(g->scr, col * 16, FLOOR_Y + 0x10,
                       g->base_c16 + 0x41 + tile);
    }
}

/* FUN_1000_8292 - the grey strip the HUD sits on, with its black panel. */
static void draw_band(Game *g)
{
    fill(g, 4, BAND_Y, 0x4b, 399, BAND_COL);
    fill(g, 0x1e, BAND_Y + 1, 0x31, 0x18e, PANEL_COL);
}

/* FUN_1000_88a2: the left half is skipped once the sprite has walked off the
 * left edge, the right half once it is off the right. */
static void pat_pair(Game *g, int x, int y, int left, int right)
{
    if (x > 0)
        scr_pat(g->scr, x, y, left);
    if (x < 0x260)
        scr_pat(g->scr, x + 0x20, y, right);
}

/* FUN_1000_85b8 and FUN_1000_8562. */
static void draw_explosion(Game *g, int x, int y, int state, int narrow)
{
    int f;

    if (state < 0)
        state = 0;
    if (state > 9)
        state = 9;
    f = SD_EXPLODE[state];
    if (narrow)
        scr_pat(g->scr, x, y, g->base_c32 + f + 0x20);
    else
        pat_pair(g, x, y, g->base_c32 + (f + 8) * 2, g->base_c32 + f * 2 + 0x11);
}

static void draw_player(Game *g)
{
    int y = g->py + (g->pal_c < 4 ? 1 : 0);

    if (g->pstate < 10) {
        draw_explosion(g, g->px, g->py, g->pstate, 0);
        return;
    }
    pat_pair(g, g->px, y, g->base_c32 + 0, g->base_c32 + 1);
}

static void draw_enemies(Game *g)
{
    int i;

    /* Descending, so the low slots end up on top - the original's order. */
    for (i = g->nent; i >= 1; i--) {
        Ent *e = &g->ent[i];
        int narrow, lo;

        if (e->y <= 0xf)
            continue;
        narrow = (e->kind == 3 || e->kind == 9);
        lo = narrow ? -0x20 : 0;
        if (e->x < lo || e->x >= 0x260)
            continue;
        if (e->state < 10) {
            draw_explosion(g, e->x, e->y, e->state, narrow);
            continue;
        }
        switch (e->kind) {
        case 1: {
            int b = (e->vx > 0) ? 2 : 0;

            pat_pair(g, e->x, e->y, g->base_c32 + 4 + b, g->base_c32 + 5 + b);
            break;
        }
        case 2: {
            int b = (e->vx > 0) ? 2 : 0;

            pat_pair(g, e->x, e->y, g->base_c32 + 8 + b, g->base_c32 + 9 + b);
            break;
        }
        case 3:
            scr_pat(g->scr, e->x, e->y,
                    g->base_c32 + 0x31 - (e->vx < 1 ? 1 : 0));
            break;
        case 4: {
            /* Eight 16x16 tiles in two rows; the top row animates with the
             * counter that also decides when it fires. */
            int top = g->base_c16 + 0x48 + e->aux * 4;
            int bot = g->base_c16 + 0x44;

            if (e->x > 0) {
                scr_pat(g->scr, e->x, e->y, top);
                scr_pat(g->scr, e->x + 0x10, e->y, top + 1);
                scr_pat(g->scr, e->x, e->y + 0x10, bot);
                scr_pat(g->scr, e->x + 0x10, e->y + 0x10, bot + 1);
            }
            if (e->x < 0x260) {
                scr_pat(g->scr, e->x + 0x20, e->y, top + 2);
                scr_pat(g->scr, e->x + 0x30, e->y, top + 3);
                scr_pat(g->scr, e->x + 0x20, e->y + 0x10, bot + 2);
                scr_pat(g->scr, e->x + 0x30, e->y + 0x10, bot + 3);
            }
            break;
        }
        case 9:
            scr_pat(g->scr, e->x, e->y,
                    g->base_c32 + 0x2f - (e->vx < 1 ? 1 : 0));
            break;
        default:
            break;
        }
    }
}

/* The charges in flight and, for every slot not in flight, one icon in the
 * top-right corner.  Both come out of the same base, which changes with the
 * two weapon power-ups. */
static void draw_charges(Game *g)
{
    int base = (g->ship == 1) ? g->base_c16 + 3 : g->base_c16 + g->power * 6;
    int icon_x = (0x28 - g->shot_max) * 8;
    int i;

    for (i = 0; i < g->shot_max && i < MAX_SHOT; i++) {
        if (g->shot[i].y < 0x130)
            scr_pat(g->scr, g->shot[i].x, g->shot[i].y,
                    base + 2 - (g->pal_b < 2 ? 1 : 0));
        else {
            scr_pat(g->scr, icon_x, 6, base);
            icon_x += 0x10;
        }
    }
}

static void draw_weapons(Game *g)
{
    int i;

    for (i = 0; i < MAX_BULLET; i++)
        if (g->bullet[i].y > 0x20)
            scr_pat(g->scr, g->bullet[i].x, g->bullet[i].y,
                    g->base_c16 + 0x19 + g->pal_a);
    for (i = 0; i < MAX_MISSILE; i++)
        if (g->missile[i].y >= -0xf) {
            int v = g->missile[i].vx;

            if (v < -8)
                v = -8;
            if (v > 8)
                v = 8;
            scr_pat(g->scr, g->missile[i].x, g->missile[i].y,
                    g->base_c16 + 0xc + SD_MISSILE_LEAN[v + 8]);
        }
}

static void draw_item(Game *g)
{
    int y;

    if (g->item_kind == 0)
        return;
    /* Once it is sitting on the surface it blinks, on one half of the palette
     * cycle and one of the two pages. */
    if (!(g->item_timer > 0xf || g->item_timer < 1 || g->page != 0))
        return;
    y = g->item_y + ((g->pal_c < 4 && g->item_timer > 0) ? 1 : 0);
    scr_pat(g->scr, g->item_x, y, g->base_c16 + 0x28 + g->item_kind);
}

static void draw_all(Game *g)
{
    draw_background(g);
    draw_enemies(g);
    draw_charges(g);
    draw_weapons(g);
    draw_player(g);
    draw_item(g);
    draw_band(g);
    txt_draw(&g->txt, g->scr);
}

/* ------------------------------------------------------------- transitions */

/* FUN_1000_1faa: the stage is over, one way or the other.  A death with no
 * lives left puts "Game Over" up; a death of any kind fades out.  The main loop
 * then repeats the stage if a life was lost and advances if it was not. */
static void leave_stage(Game *g)
{
    msg_clear(g);
    if (g->died && g->lives == 0) {
        txt_puts(&g->txt, 10, 0x1e, 0x41, "Game Over");
        g->state = GS_OVER;
        return;
    }
    if (g->died) {
        g->state = GS_FADE_OUT;
        g->fade_step = 15;
        g->fade_ticks = 0;
        return;
    }
    g->last_stage = g->stage;
    game_stage_start(g, g->stage < SD_STAGES ? g->stage + 1 : 1);
}

/* Advance a fade by one game frame's worth of VSYNC ticks.  Returns non-zero
 * once it has run out of steps. */
static int fade_advance(Game *g, int cost, int dir, int last)
{
    g->fade_ticks += g->wait;
    while (g->fade_ticks >= cost) {
        g->fade_ticks -= cost;
        if (g->fade_step == last)
            return 1;
        g->fade_step += dir;
    }
    return 0;
}

void game_tick(Game *g)
{
    int i;

    switch (g->state) {
    case GS_FADE_IN:
        scr_palette_fade(g->scr, SD_PAL_GAME, g->fade_step);
        draw_all(g);
        if (fade_advance(g, 2, 1, 15)) {
            g->state = GS_PLAY;
            scr_palette(g->scr, SD_PAL_GAME);
        }
        return;
    case GS_FLASH_UP:
        scr_palette_flash(g->scr, SD_PAL_GAME, g->fade_step);
        draw_all(g);
        if (fade_advance(g, 1, 1, 15))
            g->state = GS_FLASH_DOWN;
        return;
    case GS_FLASH_DOWN:
        scr_palette_flash(g->scr, SD_PAL_GAME, g->fade_step);
        draw_all(g);
        if (fade_advance(g, 1, -1, 0)) {
            g->state = GS_PLAY;
            scr_palette(g->scr, SD_PAL_GAME);
        }
        return;
    case GS_FADE_OUT:
        scr_palette_fade(g->scr, SD_PAL_GAME, g->fade_step);
        draw_all(g);
        if (fade_advance(g, 2, -1, 0)) {
            /* A life was lost, so the same stage comes round again. */
            g->last_stage = g->stage;
            game_stage_start(g, g->stage);
        }
        return;
    case GS_OVER:
        draw_all(g);
        /* The original goes to the name entry and the ranking here, neither of
         * which is written yet; a button starts a new game instead. */
        if (g->pad & (PAD_A | PAD_B)) {
            g->lives = 3;
            g->score = 0;
            g->speed = 4;
            g->shot_max = 4;
            g->ship = g->power = 0;
            g->last_stage = 1;
            game_stage_start(g, 1);
        }
        return;
    case GS_PLAY:
        break;
    }

    g->frame++;

    /* The exit test at the top of FUN_1000_13e0: the quota is met, the field
     * has emptied, and there is no item still in the air. */
    if (g->alive == 0 && g->quota <= g->kills && g->item_kind == 0) {
        leave_stage(g);
        return;
    }

    update_shots(g);
    update_bullets(g);
    update_missiles(g);
    update_item(g);
    apply_motion(g);
    draw_all(g);
    pal_tick(g);
    if (!update_player(g)) {
        leave_stage(g);
        return;
    }

    /* The enemy loop, which also counts what is left on the field for the next
     * frame's exit test. */
    g->alive = 0;
    for (i = 1; i <= g->nent && i < MAX_ENT; i++) {
        if (g->ent[i].y != 0)
            g->alive++;
        update_enemy(g, i);
    }
}
