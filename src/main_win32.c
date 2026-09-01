/* Native Win32 front end.
 *
 * The PC-98 drew into 640x400 planar VRAM with two pages and an INT 18h BIOS for
 * the keyboard; none of that survives the move, so the screen becomes an 8bpp
 * DIB with the game's 16 colours as its colour table and the keyboard becomes
 * GetAsyncKeyState.
 *
 * The frame rate is the original's: DS:0x0dd0 is a VSYNC counter (the handler at
 * 1000:bb44 increments it and clears the interrupt through port 0x64), and the
 * stage loop waits for DS:0x1820 of them, which defaults to 5.  At the 640x400
 * mode's ~56.4Hz that is about eleven frames a second.
 */
#include <windows.h>
#include <stdio.h>
#include <string.h>

#include "bfnt.h"
#include "video.h"
#include "game.h"
#include "text.h"
#include "sound.h"

#define WD_TIMER_ID 1

static PatBank  g_bank;
static Screen   g_scr;
static Game     g_game;
static TextFont g_font;
static SndData  g_snddata;
static Snd      g_snd;

/* The beeper, through waveOut.  Eight short buffers are kept queued and the
 * frame timer tops them up; at eleven frames a second that is a refill every
 * 89ms against 372ms of queue, which is enough slack not to click. */
#define WAV_BUFS   8
#define WAV_FRAMES 1024
static HWAVEOUT g_wave;
static WAVEHDR  g_whdr[WAV_BUFS];
static short    g_wbuf[WAV_BUFS][WAV_FRAMES];

static void audio_open(void)
{
    WAVEFORMATEX fmt;
    int i;

    memset(&fmt, 0, sizeof fmt);
    fmt.wFormatTag = WAVE_FORMAT_PCM;
    fmt.nChannels = 1;
    fmt.nSamplesPerSec = SND_RATE;
    fmt.wBitsPerSample = 16;
    fmt.nBlockAlign = 2;
    fmt.nAvgBytesPerSec = SND_RATE * 2;
    if (waveOutOpen(&g_wave, WAVE_MAPPER, &fmt, 0, 0, CALLBACK_NULL) != MMSYSERR_NOERROR) {
        g_wave = NULL;
        return;
    }
    for (i = 0; i < WAV_BUFS; i++) {
        memset(&g_whdr[i], 0, sizeof g_whdr[i]);
        g_whdr[i].lpData = (LPSTR)g_wbuf[i];
        g_whdr[i].dwBufferLength = sizeof g_wbuf[i];
        waveOutPrepareHeader(g_wave, &g_whdr[i], sizeof g_whdr[i]);
        g_whdr[i].dwFlags |= WHDR_DONE;
    }
}

static void audio_pump(void)
{
    int i;

    if (!g_wave)
        return;
    for (i = 0; i < WAV_BUFS; i++)
        if (g_whdr[i].dwFlags & WHDR_DONE) {
            snd_render(&g_snd, g_wbuf[i], WAV_FRAMES);
            g_whdr[i].dwFlags &= ~WHDR_DONE;
            g_whdr[i].dwBufferLength = sizeof g_wbuf[i];
            waveOutWrite(g_wave, &g_whdr[i], sizeof g_whdr[i]);
        }
}

static void audio_close(void)
{
    int i;

    if (!g_wave)
        return;
    waveOutReset(g_wave);
    for (i = 0; i < WAV_BUFS; i++)
        waveOutUnprepareHeader(g_wave, &g_whdr[i], sizeof g_whdr[i]);
    waveOutClose(g_wave);
    g_wave = NULL;
}
static HWND    g_hwnd;
static BITMAPINFO *g_bmi;
static char    g_dir[MAX_PATH];

static const struct { unsigned mask; int vk; } g_keys[] = {
    { PAD_LEFT,  VK_LEFT },  { PAD_LEFT,  'H' },
    { PAD_RIGHT, VK_RIGHT }, { PAD_RIGHT, 'L' },
    { PAD_UP,    VK_UP },    { PAD_UP,    'K' },
    { PAD_DOWN,  VK_DOWN },  { PAD_DOWN,  'J' },
    { PAD_A,     'Z' },      { PAD_A,     VK_SPACE },
    { PAD_B,     'X' },      { PAD_B,     VK_RETURN },
    { 0, 0 }
};

static void build_bmi(void)
{
    g_bmi = (BITMAPINFO *)calloc(1, sizeof(BITMAPINFOHEADER) +
                                    256 * sizeof(RGBQUAD));
    g_bmi->bmiHeader.biSize = sizeof(BITMAPINFOHEADER);
    g_bmi->bmiHeader.biWidth = SCR_W;
    g_bmi->bmiHeader.biHeight = -SCR_H;      /* top-down */
    g_bmi->bmiHeader.biPlanes = 1;
    g_bmi->bmiHeader.biBitCount = 8;
    g_bmi->bmiHeader.biCompression = BI_RGB;
    g_bmi->bmiHeader.biClrUsed = 256;
}

static void sync_palette(void)
{
    int i;

    for (i = 0; i < SCR_COLOURS; i++) {
        g_bmi->bmiColors[i].rgbRed   = g_scr.pal[i][0];
        g_bmi->bmiColors[i].rgbGreen = g_scr.pal[i][1];
        g_bmi->bmiColors[i].rgbBlue  = g_scr.pal[i][2];
    }
}

static void present(HDC hdc)
{
    sync_palette();
    StretchDIBits(hdc, 0, 0, SCR_W, SCR_H, 0, 0, SCR_W, SCR_H,
                  g_scr.px, g_bmi, DIB_RGB_COLORS, SRCCOPY);
}

static void read_input(void)
{
    unsigned pad = 0;
    int i;

    for (i = 0; g_keys[i].mask; i++)
        if (GetAsyncKeyState(g_keys[i].vk) & 0x8000)
            pad |= g_keys[i].mask;
    g_game.pad = pad;
}

static LRESULT CALLBACK wndproc(HWND h, UINT msg, WPARAM wp, LPARAM lp)
{
    switch (msg) {
    case WM_TIMER: {
        HDC hdc = GetDC(h);
        static int period;

        read_input();
        game_tick(&g_game);
        audio_pump();
        present(hdc);
        ReleaseDC(h, hdc);
        /* Types 3 and 4 run one VSYNC tick faster, so the timer follows. */
        if (period != game_frame_ms(&g_game)) {
            period = game_frame_ms(&g_game);
            SetTimer(h, WD_TIMER_ID, (UINT)period, NULL);
        }
        return 0;
    }
    case WM_PAINT: {
        PAINTSTRUCT ps;
        HDC hdc = BeginPaint(h, &ps);

        present(hdc);
        EndPaint(h, &ps);
        return 0;
    }
    case WM_KEYDOWN:
        if (wp == VK_ESCAPE)
            DestroyWindow(h);
        if (wp >= '1' && wp <= '9')
            game_stage_start(&g_game, (int)(wp - '0'));
        return 0;
    case WM_CLOSE:
        DestroyWindow(h);
        return 0;
    case WM_DESTROY:
        audio_close();
        KillTimer(h, WD_TIMER_ID);
        PostQuitMessage(0);
        return 0;
    }
    return DefWindowProcA(h, msg, wp, lp);
}

int WINAPI WinMain(HINSTANCE inst, HINSTANCE prev, LPSTR cmd, int show)
{
    static const char *files[4] = {
        "DEPTH.C32", "DEPTH.C16", "DEPTH.C08", "DEPTH.BOS"
    };
    WNDCLASSA wc;
    MSG msg;
    RECT rc;
    int base[4], i;
    char *p;

    (void)prev; (void)cmd;

    GetModuleFileNameA(NULL, g_dir, sizeof g_dir);
    p = strrchr(g_dir, '\\');
    if (p)
        *p = 0;
    strcat(g_dir, "\\orig");

    pat_init(&g_bank);
    for (i = 0; i < 4; i++) {
        char path[MAX_PATH];

        sprintf(path, "%s\\%s", g_dir, files[i]);
        base[i] = pat_load(&g_bank, path);
        if (base[i] < 0) {
            char m[MAX_PATH + 64];
            sprintf(m, "cannot read %s", path);
            MessageBoxA(NULL, m, "Super Depth", MB_ICONERROR);
            return 1;
        }
    }
    {
        char path[MAX_PATH];

        sprintf(path, "%s\\DEPTH.FNT", g_dir);
        if (txt_font_load(&g_font, path) < 0) {
            MessageBoxA(NULL, "cannot read DEPTH.FNT", "Super Depth",
                        MB_ICONERROR);
            return 1;
        }
    }
    build_bmi();
    scr_init(&g_scr, &g_bank);

    memset(&wc, 0, sizeof wc);
    wc.style = CS_HREDRAW | CS_VREDRAW;
    wc.lpfnWndProc = wndproc;
    wc.hInstance = inst;
    wc.hIcon = LoadIconA(NULL, IDI_APPLICATION);
    wc.hCursor = LoadCursorA(NULL, IDC_ARROW);
    wc.hbrBackground = (HBRUSH)GetStockObject(BLACK_BRUSH);
    wc.lpszClassName = "SuperDepth";
    if (!RegisterClassA(&wc))
        return 1;

    rc.left = 0; rc.top = 0; rc.right = SCR_W; rc.bottom = SCR_H;
    AdjustWindowRect(&rc, WS_OVERLAPPEDWINDOW & ~WS_THICKFRAME, FALSE);
    g_hwnd = CreateWindowExA(0, "SuperDepth", "Super Depth 1.00 (WIP)",
                             (WS_OVERLAPPEDWINDOW & ~WS_THICKFRAME) &
                             ~WS_MAXIMIZEBOX,
                             CW_USEDEFAULT, CW_USEDEFAULT,
                             rc.right - rc.left, rc.bottom - rc.top,
                             NULL, NULL, inst, NULL);
    if (!g_hwnd)
        return 1;

    game_init(&g_game, &g_scr, &g_bank, &g_font,
              base[0], base[1], base[2], base[3]);
    {
        char scr[MAX_PATH];

        sprintf(scr, "%s\\DEPTH.SCR", g_dir);
        record_load(&g_game, scr);
    }
    {
        char bgm[MAX_PATH], efs[MAX_PATH];

        sprintf(bgm, "%s\\DEPTH.BGM", g_dir);
        sprintf(efs, "%s\\DEPTH.EFS", g_dir);
        if (snd_load(&g_snddata, bgm, efs) == 0) {
            snd_init(&g_snd, &g_snddata);
            game_sound(&g_game, &g_snd);
            audio_open();
            audio_pump();
        }
    }
    SetTimer(g_hwnd, WD_TIMER_ID, (UINT)game_frame_ms(&g_game), NULL);
    ShowWindow(g_hwnd, show);
    UpdateWindow(g_hwnd);

    while (GetMessageA(&msg, NULL, 0, 0) > 0) {
        TranslateMessage(&msg);
        DispatchMessageA(&msg);
    }
    pat_free(&g_bank);
    return (int)msg.wParam;
}
