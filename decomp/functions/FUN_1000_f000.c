/* 1000:f000 */

undefined2 __cdecl16near FUN_1000_f000(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return 0;
}


