/* 1000:b9f6 */

void __cdecl16near FUN_1000_b9f6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x18);
  (*pcVar1)();
  out(0x6a,0x41);
  out(0x6a,1);
  pcVar1 = (code *)swi(0x18);
  (*pcVar1)();
  return;
}


