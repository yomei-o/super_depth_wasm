/* 1000:bf8e */

undefined1 __cdecl16near FUN_1000_bf8e(void)

{
  code *pcVar1;
  undefined1 in_BH;
  
  pcVar1 = (code *)swi(0x18);
  (*pcVar1)();
  return in_BH;
}


