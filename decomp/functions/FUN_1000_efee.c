/* 1000:efee */

undefined2 __cdecl16near FUN_1000_efee(void)

{
  code *pcVar1;
  undefined2 in_BX;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return in_BX;
}


