/* 1000:afd2 */

void __cdecl16near FUN_1000_afd2(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  code *pcVar1;
  undefined2 in_BX;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  
  if (*(int *)0xbc0 != 0) {
    return;
  }
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  *(undefined2 *)0xbb8 = in_BX;
  *(undefined2 *)0xbba = unaff_ES;
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  *(undefined2 *)0xbc0 = 1;
  return;
}


