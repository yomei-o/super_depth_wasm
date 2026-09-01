#!/bin/sh
# Build the WASM front end with emscripten, at low priority (tools/lowpri.sh).
#
# Output lands in the repository root because GitHub Pages serves main:/ .
# The BFNT files are baked in with --embed-file so pat_load keeps using fopen()
# exactly as the native build does.
set -e
cd "$(dirname "$0")/.."
EMSDK="${EMSDK:-/c/prog/emsdk/emsdk}"
EMCC="$EMSDK/upstream/emscripten/emcc.exe"
[ -f "$EMCC" ] || { echo "emcc not found at $EMCC" >&2; exit 1; }

EXPORTS=_main,_sd_init,_sd_tick,_sd_width,_sd_height,_sd_framebuffer
EXPORTS=$EXPORTS,_sd_patterns,_sd_stage,_sd_set_stage,_sd_score,_sd_lives
EXPORTS=$EXPORTS,_sd_frame_ms,_sd_audio,_sd_audio_rate,_sd_audio_max

sh tools/lowpri.sh "$EMCC" -O2 -Wall -Wextra -Isrc \
   -o superdepth.js \
   src/main_wasm.c src/game.c src/video.c src/text.c src/bfnt.c src/sound.c \
   --embed-file orig/DEPTH.C32@/orig/DEPTH.C32 \
   --embed-file orig/DEPTH.C16@/orig/DEPTH.C16 \
   --embed-file orig/DEPTH.C08@/orig/DEPTH.C08 \
   --embed-file orig/DEPTH.BOS@/orig/DEPTH.BOS \
   --embed-file orig/DEPTH.FNT@/orig/DEPTH.FNT \
   --embed-file orig/DEPTH.BGM@/orig/DEPTH.BGM \
   --embed-file orig/DEPTH.EFS@/orig/DEPTH.EFS \
   -s MODULARIZE=0 -s EXPORTED_RUNTIME_METHODS=HEAPU8 \
   -s ALLOW_MEMORY_GROWTH=1 -s ENVIRONMENT=web,node \
   -s EXPORTED_FUNCTIONS="$EXPORTS"
echo "built superdepth.js + superdepth.wasm"
