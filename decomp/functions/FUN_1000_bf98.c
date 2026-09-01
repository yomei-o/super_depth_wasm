/* 1000:bf98 */

undefined1 __cdecl16near FUN_1000_bf98(void)

{
  code *pcVar1;
  undefined1 extraout_AH;
  
  pcVar1 = (code *)swi(0x18);
  (*pcVar1)();
  return extraout_AH;
}


