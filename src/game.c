/* The parts of Super Depth that every stage type shares: the entity arrays,
 * the score, the items, the HUD, the palette animation, the fades, and the way
 * a stage is entered and left.  The stages themselves are src/stage_*.c; see
 * src/gameint.h for why they are separate.
 *
 * All the numbers are the original's.  Where behaviour has not been read yet it
 * is left out rather than guessed at.
 */
#include "gameint.h"
#include "pal.h"
#include "tables.h"
#include <string.h>

/* The HUD's grey band, repainted every frame by FUN_1000_8292:
 *   FUN_1000_b854(4, 0x160, 0x4b, 399, 0xd)     the grey strip
 *   FUN_1000_b854(0x1e, 0x161, 0x31, 0x18e, 8)  the black panel inside it
 * The panel is a radar; see sd_radar. */
#define BAND_Y    0x160
#define BAND_COL  13
#define PANEL_COL 8

/* The player's limits, the same in every stage type:
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

/* The original's rand(), FUN_1000_efc8, is the Microsoft C 6.0 library's. */
int sd_rand(Game *g)
{
    g->rnd = g->rnd * 214013u + 2531011u;
    return (int)((g->rnd >> 16) & 0x7fff);
}

int sd_sgn(int v) { return v > 0 ? 1 : (v < 0 ? -1 : 0); }

/* The original writes this as `if (a == b) 0; else if (-a == -b || -a + b < 0)
 * -1; else 1`, i.e. the direction from x toward the middle of the field. */
int sd_toward_middle(int x) { return sd_sgn(0x140 - x); }

int game_frame_ms(const Game *g)
{
    /* Types 3 and 4 wait for one VSYNC less than the others. */
    int ticks = (g->type >= 3) ? g->wait - 1 : g->wait;

    if (ticks < 1)
        ticks = 1;
    return (int)(ticks * 1000.0 / VSYNC_HZ + 0.5);
}

const Stage *stage_for(int type)
{
    switch (type) {
    case 2: return stage_sky();
    case 3: return stage_space();
    case 4: return stage_boss();
    default: return stage_sea();
    }
}

/* ---------------------------------------------------------------- the HUD */

/* Row 22 carries the labels, row 24 the numbers, and rows 22..24 columns
 * 30..49 are a box drawn out of the font's frame characters (codes 1..14). */
void sd_hud_score(Game *g)              /* FUN_1000_a25a */
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
    sd_hud_score(g);
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

void sd_stage_banner(Game *g)           /* FUN_1000_a196 */
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

/* -------------------------------------------------------------- the sound */

/* FUN_1000_cff4.  The numbers are the original's call sites:
 *   1 dropping a charge   2 an enemy firing   3 an enemy destroyed
 *   4 the ship hit, and the flush bomb        6 picking an item up */
void sd_sfx(Game *g, int n)
{
    if (g->snd)
        snd_effect(g->snd, n);
}

/* FUN_1000_cf6a(type + 2) + FUN_1000_cf44 + FUN_1000_d046 at the top of every
 * stage: SEA, SKY, SPACE and BOSS are songs 3, 4, 5 and 6. */
void sd_music(Game *g, int song, int loop)
{
    if (!g->snd)
        return;
    g->snd->loop = loop;
    snd_play(g->snd, song);
}

void game_sound(Game *g, Snd *snd)
{
    g->snd = snd;
    sd_music(g, g->type + 2, 1);
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
    memcpy(g->pal, SD_PAL_GAME, sizeof g->pal);
    txt_init(&g->txt, font);
    /* FUN_1000_8960 sets the defaults: 3 lives, start at stage 1, 9 entities,
     * 5 VSYNC ticks a frame, speed 4 and 4 charges. */
    g->lives = 3;
    g->nent = 9;
    g->wait = 5;
    g->speed = 4;
    g->shot_max = 4;
    g->last_stage = 1;
    g->nstar = STAR_VIEW;
    /* The title does not run a stage, but draw_all goes through stage_ops, so
     * give it something before anything can ask. */
    g->stage_ops = stage_for(1);
    scr_palette(scr, g->pal);
    title_start(g);
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
    }
}

/* The stage's kill quota.  SEA is
 *   local_28 = ((ship & power) * 2 + stage / 4 + 3) * 5
 * and SKY drops the doubling and counts in tens instead of fives. */
void sd_quota(Game *g, int per, int shipmul)
{
    g->quota = (((g->ship & g->power) * shipmul) + (g->stage >> 2) + 3) * per;
}

void game_stage_start(Game *g, int stage)
{
    int retry;

    if (stage < 1 || stage > SD_STAGES)
        stage = 1;
    g->stage = stage;
    g->type = ((stage - 1) % 4) + 1;
    g->stage_ops = stage_for(g->type);
    g->frame = 0;
    g->page = 0;
    g->lives_at_start = g->lives;

    /* FUN_1000_06f6 checks DS:0x1818 against DS:0x1dae - the stage played last
     * time round the main loop.  Equal means this is a retry after dying (or
     * the very first stage), which resets the power-ups and says "Ready"
     * instead of announcing the stage. */
    retry = (g->stage == g->last_stage);

    g->pvx = 0;
    g->pvy = 0;
    g->pstate = 10;
    g->trig = 1;
    memcpy(g->pal, SD_PAL_GAME, sizeof g->pal);
    if (retry) {
        g->speed = 4;
        g->shot_max = 4;
        g->ship = 0;
        g->power = 0;
    }
    g->shots_live = g->bullets_live = g->missiles_live = g->alive = 0;
    g->kills = 0;
    g->boss_hits = g->boss_phase = g->boss_timer = g->boss_blasts = 0;
    g->died = 0;
    g->pal_a = g->pal_b = g->pal_c = 0;
    g->item_kind = g->item_x = g->item_y = g->item_vx = g->item_vy = 0;
    g->item_timer = 0;

    load_roster(g);
    g->stage_ops->start(g);

    txt_clear(&g->txt);
    hud_setup(g);
    if (retry)
        msg_ready(g);
    else
        sd_stage_banner(g);

    /* FUN_1000_82d7(0x2b8): sixteen steps of two VSYNC ticks, fading up from
     * black into the in-game palette.  Types 2, 3 and 4 do NOT fade when they
     * are entered fresh - they play an animation instead (src/cut.c), and only
     * fade when the stage is being retried after a death. */
    g->fade_step = 0;
    g->fade_ticks = 0;
    if (!retry && g->type > 1) {
        /* The original runs the animation before the stage announces itself,
         * so the banner this just put up comes down again until it ends. */
        msg_clear(g);
        sd_music(g, g->type + 2, 1);
        cut_start(g, g->type - 1);
        return;
    }
    g->state = GS_FADE_IN;
    scr_palette_fade(g->scr, g->pal, 0);
    sd_music(g, g->type + 2, 1);
}

/* ------------------------------------------------------------------ player */

/* Returns 0 once the ship's dying animation has run out, which ends the
 * stage. */
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
    g->stage_ops->move(g);

    if (g->pad & PAD_A)
        g->stage_ops->fire(g, 0);
    if (g->pad & PAD_B)
        g->stage_ops->fire(g, 1);
    if (!(g->pad & (PAD_A | PAD_B)))
        g->trig = 1;
    return 1;
}

/* SEA and SKY: the ship slides along the surface at `speed`.
 *   right while  speed + x < 0x210,  left while  0x2f < x - speed  */
void sd_move_side(Game *g)
{
    g->pvx = 0;
    if ((g->pad & PAD_RIGHT) && g->speed + g->px < PX_MAX)
        g->pvx = g->speed;
    if ((g->pad & PAD_LEFT) && PX_MIN - 1 < g->px - g->speed)
        g->pvx = -g->speed;
}

void sd_hit_player(Game *g)
{
    if (g->pstate == 10 && !g->invuln) {
        g->pstate = 9;
        sd_sfx(g, SFX_HIT);
    }
}

/* FUN_1000_824a - award the kill and start the dying animation. */
void sd_kill_enemy(Game *g, int idx)
{
    Ent *e = &g->ent[idx];

    e->state = 9;
    g->score += SD_SCORE[g->type][e->kind < 10 ? e->kind : 0];
    e->vy = 0;
    e->vx = 0;
    g->kills++;
    sd_hud_score(g);
    sd_sfx(g, SFX_KILL);
}

/* ------------------------------------------------------------------- items */

/* FUN_1000_9d84 - roll for what a kind-9 wreck leaves behind, then talk
 * yourself out of most of it.  The adjustments are all the original's, in its
 * order: a Flush Bomb is worthless with nothing else, the two weapon upgrades
 * collapse into one when you already have both, a spare ship is withheld while
 * you still have plenty, and being short of speed or of charges overrides
 * everything except Full Power. */
void sd_item_roll(Game *g)
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
void sd_item_apply(Game *g)
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

        if (e->state == 10 && e->y != g->ent_off &&
            e->x > g->stage_ops->flush_x0 && e->x < g->stage_ops->flush_x1)
            sd_kill_enemy(g, i);
    }
    g->stage_ops->clear_shots(g);
    sd_sfx(g, SFX_HIT);          /* the original reuses effect 4 for the bomb */
    g->state = GS_FLASH_UP;
    g->fade_step = 0;
    g->fade_ticks = 0;
}

void sd_item_taken(Game *g)
{
    if (g->item_kind == 4)
        item_flush(g);
    else
        sd_item_apply(g);
    msg_item(g);
    sd_sfx(g, SFX_ITEM);
    g->item_kind = 0;
}

/* Movement is applied together, after everything has decided what to do - the
 * original does exactly this, walking the slots down from DS:0x17f4 and adding
 * vx/vy, then the player, then flipping the page. */
void sd_motion(Game *g)
{
    int i;

    for (i = g->nent; i >= 1; i--) {
        g->ent[i].x += g->ent[i].vx;
        g->ent[i].y += g->ent[i].vy;
    }
    g->px += g->pvx;
    g->py += g->pvy;
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

void sd_fill(Game *g, int col0, int y0, int col1, int y1, int colour)
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

/* FUN_1000_88a2: the left half is skipped once the sprite has walked off the
 * left edge, the right half once it is off the right. */
void sd_pat_pair(Game *g, int x, int y, int left, int right)
{
    if (x > 0)
        scr_pat(g->scr, x, y, left);
    if (x < 0x260)
        scr_pat(g->scr, x + 0x20, y, right);
}

/* FUN_1000_85b8 and FUN_1000_8562. */
void sd_explosion(Game *g, int x, int y, int state, int narrow)
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
        sd_pat_pair(g, x, y, g->base_c32 + (f + 8) * 2,
                    g->base_c32 + f * 2 + 0x11);
}

/* FUN_1000_890a - one blip on the radar.  The black panel in the middle of the
 * HUD is the whole playfield at one eighth: (x/8 + 0x118, y/8 + 0x162) to
 * (+ width, + 3). */
void sd_radar(Game *g, int x, int y, int w, int colour)
{
    int px = x / 8 + 0x118, py = y / 8 + 0x162, i, j;

    for (j = py; j <= py + 3; j++) {
        if (j < 0 || j >= SCR_H)
            continue;
        for (i = px; i <= px + w; i++) {
            if (i < 0 || i >= SCR_W)
                continue;
            g->scr->px[(long)j * SCR_W + i] = (unsigned char)colour;
        }
    }
}

/* FUN_1000_8292 - the grey strip the HUD sits on, with its black panel. */
static void draw_band(Game *g)
{
    sd_fill(g, 4, BAND_Y, 0x4b, 399, BAND_COL);
    sd_fill(g, 0x1e, BAND_Y + 1, 0x31, 0x18e, PANEL_COL);
}

static void draw_all(Game *g)
{
    g->stage_ops->draw(g);
    draw_band(g);
    g->stage_ops->radar(g);
    txt_draw(&g->txt, g->scr);
}

/* ------------------------------------------------------------- transitions */

/* FUN_1000_1faa: the stage is over, one way or the other.  A death with no
 * lives left puts "Game Over" up; a death of any kind fades out.  The main loop
 * then repeats the stage if a life was lost and advances if it was not. */
static void leave_stage(Game *g)
{
    msg_clear(g);
    if (g->snd)
        snd_stop(g->snd);                /* FUN_1000_cf2c */
    if (g->died && g->lives == 0) {
        txt_puts(&g->txt, 10, 0x1e, 0x41, "Game Over");
        sd_music(g, SND_GAMEOVER, 0);    /* FUN_1000_a29e; it does not loop */
        g->state = GS_OVER;
        return;
    }
    if (g->died) {
        g->state = GS_FADE_OUT;
        g->fade_step = 15;
        g->fade_ticks = 0;
        return;
    }
    /* FUN_1000_5818 ends with FUN_1000_95a4 when a boss has just gone down. */
    if (g->stage_ops && g->stage_ops->type == 4) {
        ending_start(g);
        return;
    }
    g->last_stage = g->stage;
    game_stage_start(g, g->stage < SD_STAGES ? g->stage + 1 : 1);
}

/* FUN_1000_9e70, reached from the top of every stage loop when ESC or Q is
 * down.  The screen is left exactly as it was; only the two lines of text and
 * the music change.
 *
 * Q ends the run and the program (DS:0x1842 and DS:0x184c both go to 0, and
 * FUN_1000_0011 returns).  A port has nothing to return to, so the state
 * machine goes back to the title and raises g->quit; what that means is the
 * front end's business - depth.exe closes its window, the page ignores it.
 */
static void pause_start(Game *g)
{
    g->state = GS_PAUSE;
    g->pause_esc = 0;
    g->pause_q = 0;
    /* White is invisible against the sky, so type 2 gets blue instead. */
    txt_puts(&g->txt, 8, 0x24, g->type == 2 ? 1 : 0xe1, "PAUSE");
    txt_puts(&g->txt, 0xf, 0x18, 0xc3, "Push 'Q' to Quit");
    txt_draw(&g->txt, g->scr);
    if (g->snd)
        snd_stop(g->snd);                /* FUN_1000_cf2c */
}

static void pause_clear(Game *g)
{
    txt_puts(&g->txt, 8, 0x24, 0xc1, "     ");
    txt_puts(&g->txt, 0xf, 0x18, 0xc1, "                ");
}

static void pause_tick(Game *g)
{
    unsigned other = g->pad & (PAD_LEFT | PAD_RIGHT | PAD_UP | PAD_DOWN |
                               PAD_A | PAD_B);

    /* Whichever key opened this has to be let go of before it counts again. */
    if (!(g->pad & PAD_PAUSE))
        g->pause_esc = 1;
    if (!(g->pad & PAD_QUIT))
        g->pause_q = 1;

    if ((g->pad & PAD_QUIT) && g->pause_q) {
        pause_clear(g);
        g->quit = 1;
        title_start(g);
        return;
    }
    if (other || ((g->pad & PAD_PAUSE) && g->pause_esc)) {
        pause_clear(g);
        g->state = GS_PLAY;
        if (g->snd)
            snd_resume(g->snd);          /* FUN_1000_cf44 */
    }
}

/* Advance a fade by one game frame's worth of VSYNC ticks.  Returns non-zero
 * once it has run out of steps. */
int sd_fade_advance(Game *g, int cost, int dir, int last)
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
    case GS_TITLE:
        title_tick(g);
        return;
    case GS_RECORD:
        record_tick(g);
        return;
    case GS_CUT:
        cut_tick(g);
        return;
    case GS_NAME:
        name_tick(g);
        return;
    case GS_END:
        ending_tick(g);
        return;
    case GS_PAUSE:
        pause_tick(g);
        return;
    case GS_FADE_IN:
        scr_palette_fade(g->scr, g->pal, g->fade_step);
        draw_all(g);
        if (sd_fade_advance(g, 2, 1, 15)) {
            g->state = GS_PLAY;
            scr_palette(g->scr, g->pal);
        }
        return;
    case GS_FLASH_UP:
        scr_palette_flash(g->scr, g->pal, g->fade_step);
        draw_all(g);
        if (sd_fade_advance(g, 1, 1, 15))
            g->state = GS_FLASH_DOWN;
        return;
    case GS_FLASH_DOWN:
        scr_palette_flash(g->scr, g->pal, g->fade_step);
        draw_all(g);
        if (sd_fade_advance(g, 1, -1, 0)) {
            g->state = GS_PLAY;
            scr_palette(g->scr, g->pal);
        }
        return;
    case GS_FADE_OUT:
        scr_palette_fade(g->scr, g->pal, g->fade_step);
        draw_all(g);
        if (sd_fade_advance(g, 2, -1, 0)) {
            /* A life was lost, so the same stage comes round again. */
            g->last_stage = g->stage;
            game_stage_start(g, g->stage);
        }
        return;
    case GS_OVER:
        draw_all(g);
        /* FUN_1000_aa92: a score better than tenth place goes to the name
         * entry, anything else just sees the table with its score under it. */
        if (g->pad & (PAD_A | PAD_B)) {
            int row = record_insert(g);

            if (row >= 0)
                name_start(g, row);
            else
                record_start_score(g);
        }
        return;
    case GS_PLAY:
        break;
    }

    /* FUN_1000_9e70's test, at the top of the stage loop. */
    if (g->pad & (PAD_PAUSE | PAD_QUIT)) {
        pause_start(g);
        return;
    }

    g->frame++;

    /* The exit test at the top of the frame: the quota is met, the field has
     * emptied, and there is no item still in the air. */
    if (g->alive == 0 && g->quota <= g->kills && g->item_kind == 0) {
        leave_stage(g);
        return;
    }

    g->stage_ops->shots(g);
    g->stage_ops->weapons(g);
    g->stage_ops->item(g);
    g->stage_ops->motion(g);
    g->page ^= 1;
    draw_all(g);
    pal_tick(g);
    if (!update_player(g)) {
        leave_stage(g);
        return;
    }

    /* The enemy loop, which also counts what is left on the field for the next
     * frame's exit test. */
    g->alive = 0;
    for (i = 1; i <= g->nent && i < MAX_ENT; i++)
        g->stage_ops->enemy(g, i);
}
