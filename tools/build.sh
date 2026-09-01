#!/bin/sh
# Build the native Win32 build with mingw, at low priority (tools/lowpri.sh).
set -e
cd "$(dirname "$0")/.."
GCC="${GCC:-/c/prog/w64devkit/bin/gcc}"
sh tools/lowpri.sh "$GCC" -O2 -Wall -Wextra -mwindows -Isrc \
   -o depth.exe src/main_win32.c src/game.c src/video.c src/bfnt.c -lgdi32
echo "built depth.exe"
