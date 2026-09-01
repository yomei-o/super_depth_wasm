#!/bin/sh
# Build the native Win32 build.  tools/cc.sh finds a compiler and runs it at
# low priority (tools/lowpri.sh).
set -e
cd "$(dirname "$0")/.."
sh tools/cc.sh -O2 -Wall -Wextra -mwindows -Isrc \
   -o depth.exe src/main_win32.c src/game.c src/stage_sea.c src/stage_sky.c src/stage_space.c src/stage_boss.c src/title.c src/record.c src/cut.c src/name.c src/ending.c src/video.c src/text.c src/bfnt.c src/sound.c \
   -lgdi32 -luser32 -lwinmm
echo "built depth.exe"
