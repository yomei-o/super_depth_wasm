/* Native Win32 front end.
 *
 * The PC-98 drew into 640x400 planar VRAM with two pages and an INT 18h BIOS for
 * the keyboard; none of that survives the move, so the screen becomes an 8bpp
 * DIB with the game's 16 colours as its colour table and the keyboard becomes
 * GetAsyncKeyState.
 *
 * TODO: the original clocks off a timer-interrupt counter (DS:0x0dd0) whose rate
 * has not been pinned down - the PC-98's 8253 is usually programmed to either
 * ~100Hz or the 640x400 vertical sync at ~56Hz.  60Hz here until that is read.
 */
#include <windows.h>
#include <stdio.h>
#include <string.h>

#include "bfnt.h"
#include "video.h"
#include "game.h"

#define WD_TIMER_ID 1
#define WD_FRAME_MS 17

static PatBank g_bank;
static Screen  g_scr;
static Game    g_game;
static HWND    g_hwnd;
static BITMAPINFO *g_bmi;
static char    g_dir[MAX_PATH];

static const struct { unsigned mask; int vk; } g_keys[] = {
    { PAD_LEFT,  VK_LEFT },  { PAD_LEFT,  'H' },
    { PAD_RIGHT, VK_RIGHT }, { PAD_RIGHT, 'L' },
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

    for (i = 0; i < 16; i++) {
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

        read_input();
        game_tick(&g_game);
        present(hdc);
        ReleaseDC(h, hdc);
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

    game_init(&g_game, &g_scr, &g_bank, base[0], base[1], base[2], base[3]);
    SetTimer(g_hwnd, WD_TIMER_ID, WD_FRAME_MS, NULL);
    ShowWindow(g_hwnd, show);
    UpdateWindow(g_hwnd);

    while (GetMessageA(&msg, NULL, 0, 0) > 0) {
        TranslateMessage(&msg);
        DispatchMessageA(&msg);
    }
    pat_free(&g_bank);
    return (int)msg.wParam;
}
