/* 1000:b004 */

void __cdecl16near FUN_1000_b004(undefined2 param_1)

{
  code *pcVar1;
  undefined2 unaff_DS;
  
  if (*(int *)0xbc0 != 0) {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    *(undefined2 *)0xbc0 = 0;
  }
  return;
}


