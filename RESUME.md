# RESUME — Super Depth (PC-98, 1991) を C に戻して native -> WASM

WinDepth の移植（https://github.com/yomei-o/windepth_wasm）と同じ手順で、
その原型である PC-98 版を扱う。まだ解析段階。

## 対象

Bio_100% "Super Depth" ver 1.00 (`DEPTH.EXE`, 70,731 bytes, 1991)。
配布アーカイブ `orig/DEPTH100.LZH` を `orig/` に展開して使う。

## アーカイブ（`tools/lzh.py`）

lha も 7z も入っていないので LZH 展開を書いた。`-lh5-` は LHA の
「ブロックごとに静的ハフマン表を持つ LZSS」で、1 ブロックに

* リテラル/長さの表（NC = 510 シンボル）
* マッチ距離の表（`-lh5-` は 14 エントリ）
* 上の 1 番目の符号長を符号化する表（NT = 19）

の 3 つが入る。符号割り当ては canonical（DEFLATE と同じ）なので、
LHA の `make_table` を再現せずに標準的な canonical デコーダで読める。
全 11 ファイルが CRC-16/ARC 一致。

**レベル 1 ヘッダの罠**: `packed size` フィールドは
「圧縮データ + 拡張ヘッダの合計」なので、拡張ヘッダを辿って本体の位置と
実サイズを出し直す必要がある。

## DEPTH.EXE の素性（実測）

| | |
|---|---|
| 形式 | DOS MZ、16bit リアルモード。ページ 139、最終ページ 75 → イメージ 70,219 バイト |
| ヘッダ | `e_cparhdr` 32（= 512 バイト）、`e_crlc` 7、`cs:ip = 0000:e64a`、`ss:sp = 11ec:1000` |
| 素性 | **Microsoft C 6.0**。`MS Run-Time Library - Copyright (c) 1990, Microsoft Corp`、`R6000 - stack overflow` などの文字列 |
| 構成 | コードセグメント 1 本（0 〜 約 0xfd40 = 64,832 バイト）+ DGROUP（0xfd40 以降） |
| Ghidra | `x86:LE:16:Real Mode` で **239 関数、失敗 0**、`all.c` 19,958 行 |

**圧縮されていない。** 最初にエントロピー（6.5〜6.8 bit/byte）とファイル名文字列が
見つからないことから「パックされている」と誤判定した。実際はファイル名が
**小文字** (`depth.c32`) で DGROUP 側にあっただけ。バイト列を直接
検索すれば一発で分かる話だった。エントロピーだけで packer を判定してはいけない。

エントリ `0000:e64a` の中身は MSC のスタートアップそのもの:

```
mov ah,0x30 / int 0x21 / cmp al,2 / jae ...   ; DOS 2.0 以上か
mov di,0x0fd4                                 ; DGROUP
mov si,[0x0002]                               ; PSP の top-of-memory
sub si,di / cmp si,0x1000 / ...               ; スタック確保
mov ah,0x4a / int 0x21                        ; SetBlock でメモリ縮小
mov ax,0x4cff / int 0x21                      ; 異常時 exit(255)
```

### 静的リンクされている外部ライブラリ

| 文字列 | 役割 |
|---|---|
| `Superimpose Library  Version 0.10  Copyrignt (C) Kazumi, Taka, STUDIO FEMY 1990-1991.` | スプライト描画 |
| `BGM Library ver1.06  use TIMER interrupt  Copyright(C)1989-91 Fumitake Yodo and STUDIO FEMY` | 音楽（8253 タイマ割り込み） |

WinDepth の WinGL と同じ扱いにする。中は読まず、仕様（BFNT のスプライトを
透明色つきで 640×400 16 色面に置く／MML を 1 音のビープで鳴らす）だけ合わせて
自前に置き換える。

### 大きい関数

| アドレス | サイズ | 見当 |
|---|---|---|
| `1000:5818` | 10,278 | 毎フレーム処理か（WinDepth の `FUN_00404860` に相当） |
| `1000:383a` | 8,067 | |
| `1000:1fdc` | 6,180 | |
| `1000:13e0` | 2,953 | |
| `1000:06f6` | 2,586 | |
| `1000:95a4` | 1,976 | |

### 16bit 逆コンパイル特有の読みにくさ

* `unaff_SS` / `unaff_DS` が変数として出る。セグメントレジスタが暗黙の引数に
  なるため。遠いデータへのアクセスがこの形で化ける
* 構造体配列が `int local_480[100]` のように潰れる。要素サイズを実測して
  復元する（WinDepth でも同じ作業をした）

## BFNT（グラフィック）— 解読済み（`tools/bfnt.py`）

```
0x00  char   magic[4]   "BFNT"
0x04  uint8  0x1a       TYPE 用の EOF
0x05  uint8  flags      0x03 = 16 色, 0x00 = モノクロ
0x06  uint16 ?          0
0x08  uint16 width      8 / 16 / 32
0x0a  uint16 height     8 / 16 / 32
0x0c  uint16 ?          0
0x0e  uint16 last       最終キャラクタコード
0x10..0x1f            0
0x20             画素データ
```

**画素は packed 4bpp（1 バイト 2 画素、上位ニブルが左）。**
PC-98 のプレーナ VRAM（A800/B000/B800/E000 に B,R,G,I）ではない。

**嵌りどころ 1: planar と packed はサイズが同じなので、サイズ検算では区別できない。**
32×32 なら planar (4 プレーン × 4 バイト × 32 行) も packed (16 バイト × 32 行) も
512 バイト。planar で読むと細かい色付きの砂嵐になるだけで、それらしく壊れるので
判断を誤る。4 通り（plane-major / row-interleaved / packed / plane-per-file）を
全部 PNG に出して並べたら packed だけ絵になった。**見るのが一番早い。**

サイズ検算（全ファイル一致）:
`(バイト数 - 32) == (last + 1) * height * (16 色なら width/2, モノクロなら width/8)`

| ファイル | w×h | 枚数 |
|---|---|---|
| `DEPTH.C08` | 8×8 | 6 |
| `DEPTH.C16` | 16×16 | 112 |
| `DEPTH.C32` | 32×32 | 64 |
| `DEPTH.BOS` | 32×32 | 56 |
| `DEPTH.FNT` | 16×16 モノクロ | 256 |

**パレットは未特定。** PC-98 は 16 色をアナログ（各 4bit）でプログラムするので、
EXE のデータ側にテーブルがあるはず。`docs/sprites_*.png` は PC-98 の初期パレットで
出しているので色は本来のものではない。

## 音 — 形式は判明、実装は未着手

`DEPTH.BGM` は BGMLIB 用の MML テキスト。1 曲が `,` 区切りの 3 パート、曲間は `*`。

```
T140O6L16N1R2C<BAGBAGFGFEDCDEG>C1     ,O6L16N1R2RRC<BAG...     ,O6L16N1R2RRRC<BAG...
```

`T` テンポ / `O` オクターブ / `L` 音長 / `N` ? / `R` 休符 / `<` `>` オクターブ移動。
PC-98 内蔵ビープ 1 音を高速に切り替えて 3 声に聞かせる方式なので、
**矩形波 1 音で正確に再現できる**（WinDepth の GM MIDI より簡単）。

収録曲: `Bio_100%` / `THEME OF SUPER DEPTH` / `SEA` / `SKY` / `SPACE` / `BOSS` /
`GAME OVER` / `NAME INN` / `SEA CLEAR` / `SKY CLEAR` / `BOSS CLEAR1..3` /
`ENDING` / `BOSS ALARM`

`DEPTH.EFS` は効果音で、`;` コメントと周波数の並びだけ:

```
;=============
; sound No.1
;=============
1000
900
1000
...
```

## DEPTH.SCR — スコアランキング（テキスト）

```
050000 10 alty     91/08/10
045000 09 tacox    91/08/10
...
```

`スコア(6) 面(2) 名前(8) 日付(8)` の固定長。WinDepth の `windepth.ini` と違って
ゲームがそのまま読み書きするテキスト。

## ゲーム内容（EXE の文字列から）

敵名 18 個: `Tiddler` `Asthmatic` `Coypu` `Wigwam` `Eyewash` `Spooky`
`Fratricide` `Scourge` `Mean` `Chirstie` `Poppy` `Rob` `Hoot`
`Strayed Brain` `Eerie Core` `Lunatic Noddle` `B.P.S.M.` `Yamaboku`

* `Yamaboku` は WinDepth の自機パターン名と同じ。系譜がそのまま見える
* `Strayed Brain` は WinDepth の `BRAIN1/2` に対応しそう

メッセージから読める要素: `Speed Up!` `Shot Max Up!` `Shot Power Up!`
`Flush Bomb!` `Shot Special!` `Full Power!` `Ship 1up!` — WinDepth では
削られたパワーアップが一通りある。ステージは `SEA` / `SKY` / `SPACE` の 3 系統。

## 手順（この順で）

1. ~~**アーカイブ展開**~~ 済 — `tools/lzh.py`
2. ~~**BFNT 解読**~~ 済 — `tools/bfnt.py`、全スプライトが絵になる
3. **パレット特定** — EXE の DGROUP から 16 色 × RGB 各 4bit のテーブルを探す。
   I/O ポート 0xa8〜0xae に書く箇所を Ghidra で辿るのが確実
4. **画面レイアウト** — 640×400 の何処に何を出しているか。Superimpose Library の
   呼び出し規約（引数の並び）を数か所読めば分かる
5. **ゲームロジック** — `1000:5818` から。WinDepth の構造（敵配列・弾・爆発・
   ボス・アイテム）が既に頭に入っているので当たりを付けやすい
6. **ネイティブ** — 640×400 8bpp（上位 4bit は未使用）のサーフェスに描いて
   Win32 の DIB で出す。WinDepth の `video.c` がほぼ流用できる
7. **WASM** — 同じく `putImageData` のみ。WebGL 不使用

## 環境

* Ghidra 12.1.3 + JDK 21 を `C:\prog\ghidra` に。再実行:
  ```sh
  JAVA_HOME=C:/prog/ghidra/jdk-21.0.12.1+1 \
  /c/prog/ghidra/ghidra_12.1.3_PUBLIC/support/analyzeHeadless.bat \
    C:/prog/claude2/super_depth_wasm/ghidra_proj sd \
    -import C:/prog/claude2/super_depth_wasm/orig/DEPTH.EXE \
    -scriptPath C:/prog/claude2/super_depth_wasm/tools/ghidra_scripts \
    -postScript DecompileAll.java C:/prog/claude2/super_depth_wasm/decomp
  ```
  プロジェクトディレクトリは事前に mkdir が要る。出力 `decomp/` は git 管理外
* Python は `C:\Python313\python.exe`、mingw は `C:\prog\w64devkit`、
  emsdk は `C:\prog\emsdk\emsdk`（`emcc.bat` は無く `emcc.exe`）
* ビルドは `tools/lowpri.sh` 経由で低優先度
* GitHub Pages は `main:/` を配信する設定

## 罠（環境側）

* **Bash ツールのヒアドキュメントはバックスラッシュを食う。** `\\n` が生の改行に
  なって C の文字列リテラルが壊れる、`\\` が `\` になってパスが壊れる、といった
  形で 3 回刺された。バックスラッシュを含む編集は Edit/Write ツールでやる
* **Windows は大文字小文字を区別しない。** `cp data/Windepth.mid data/windepth.mid`
  は同じファイルへのコピーになり、続く `rm` が原本を消す（WinDepth 側で一度やった）
