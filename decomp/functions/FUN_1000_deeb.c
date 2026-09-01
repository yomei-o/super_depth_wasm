/* 1000:deeb */

void __cdecl16near FUN_1000_deeb(void)

{
  code *pcVar1;
  
  out(0x68,9);
  pcVar1 = (code *)swi(0x18);
  (*pcVar1)();
  return;
}


