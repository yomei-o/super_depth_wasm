/* Tables lifted straight out of DEPTH.EXE's DGROUP. */
#ifndef TABLES_H
#define TABLES_H

/* Score for killing an enemy, indexed [stage type 1..4][kind 0..9].
 * FUN_1000_824a: score += *(int *)((DS:0x1816 * 10 + kind) * 2 + 0x2e8),
 * where DS:0x1816 is the stage type.  Row 0 is unused padding. */
static const short SD_SCORE[5][10] = {
    { 0 },
    {     1,     5,    30,    20,    50,     0,     0,     0,     0,    10 },   /* type 1 */
    {     2,     5,    20,    30,    50,     0,     0,     0,     0,    10 },   /* type 2 */
    {     3,     5,    20,    30,    50,     0,     0,     0,     0,    10 },   /* type 3 */
    {     4,    10,   500,    20,   500,    20,  1000,     0,     0,     0 },   /* type 4 */
};

/* The enemy kind in each of the 15 entity slots, per stage.
 * FUN_1000_8098 walks DS:0x034e + stage * 0x20 and fills slots 1..15
 * (its loop runs iVar1 = 2, 4, .. 30).  The 16th word of each row is not
 * part of the roster - it reads back as stage + 1 - so it is left out.
 * Row 0 is unused; stages run 1..12. */
#define SD_STAGES 12
#define SD_SLOTS  15
static const unsigned char SD_ROSTER[SD_STAGES + 1][SD_SLOTS] = {
    { 0 },
    { 2, 3, 1, 1, 1, 1, 1, 9, 9, 1, 1, 1, 1, 1, 1 },   /* stage  1, type 1 */
    { 2, 2, 3, 1, 1, 1, 1, 1, 9, 1, 1, 1, 1, 1, 1 },   /* stage  2, type 2 */
    { 2, 2, 3, 1, 1, 1, 1, 1, 9, 1, 1, 1, 1, 1, 1 },   /* stage  3, type 3 */
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },   /* stage  4, type 4 */
    { 4, 3, 2, 2, 1, 1, 1, 9, 9, 1, 1, 1, 1, 1, 1 },   /* stage  5, type 1 */
    { 3, 3, 2, 2, 2, 1, 1, 1, 9, 1, 1, 1, 1, 1, 1 },   /* stage  6, type 2 */
    { 4, 3, 2, 2, 2, 1, 1, 1, 9, 1, 1, 1, 1, 1, 1 },   /* stage  7, type 3 */
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },   /* stage  8, type 4 */
    { 4, 4, 3, 3, 2, 2, 1, 9, 9, 1, 1, 1, 1, 1, 1 },   /* stage  9, type 1 */
    { 4, 3, 3, 3, 2, 2, 1, 9, 9, 1, 1, 1, 1, 1, 1 },   /* stage 10, type 2 */
    { 4, 4, 4, 3, 3, 2, 1, 9, 9, 1, 1, 1, 1, 1, 1 },   /* stage 11, type 3 */
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },   /* stage 12, type 4 */
};

#endif
