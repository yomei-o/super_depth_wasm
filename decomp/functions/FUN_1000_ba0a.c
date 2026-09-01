/* 1000:ba0a */

undefined1 __cdecl16near FUN_1000_ba0a(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x18);
  (*pcVar1)();
  out(0x6a,0);
  return 0;
}


