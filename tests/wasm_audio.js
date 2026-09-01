// Does the WASM build actually make a noise?  The sound check only ever went
// through tests/tune.exe, which is the native build - a WASM build with the
// synth left out, or with sd_audio not exported, would have passed it.
//
//   node tests/wasm_audio.js [frames]
//
// Ticks the game the way index.html does and pulls the same samples out of
// sd_audio, then reports the peak.  It says nothing about whether the page's
// WebAudio plumbing works - only that there is something for it to play.
const path = require('path');

const want = parseInt(process.argv[2] || '120', 10);

// Same as tests/wasm_check.js: under CommonJS the generated
// `var Module = typeof Module != "undefined" ...` sees its own hoisted local,
// so take the object the module exports and wait for the exports to land.
const Module = require(path.resolve(__dirname, '../superdepth.js'));

(async () => {
  for (let i = 0; i < 500 && !Module._sd_init; i++)
    await new Promise(r => setTimeout(r, 20));
  if (!Module._sd_init) {
    console.error('runtime never came up');
    process.exit(1);
  }
  if (Module._sd_init() !== 0) {
    console.error('sd_init failed');
    process.exit(1);
  }
  const rate = Module._sd_audio_rate(), max = Module._sd_audio_max();
  let peak = 0, nonzero = 0, total = 0;

  for (let f = 0; f < want; f++) {
    Module._sd_tick(0);
    const n = Math.min(Math.ceil(rate * Module._sd_frame_ms() / 1000), max);
    const p = Module._sd_audio(n);
    const pcm = new Int16Array(Module.HEAPU8.buffer, p, n);

    for (let i = 0; i < n; i++) {
      const v = Math.abs(pcm[i]);

      if (v) nonzero++;
      if (v > peak) peak = v;
    }
    total += n;
  }
  console.log(`${(total / rate).toFixed(2)}s of sound at ${rate}Hz, ` +
              `peak ${peak}, ${(100 * nonzero / total).toFixed(0)}% non-zero`);
  if (peak === 0) {
    console.error('the WASM build is silent');
    process.exit(1);
  }
  process.exit(0);
})();
