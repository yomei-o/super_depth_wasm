/* 1000:e883 */

void __cdecl16near FUN_1000_e883(undefined2 param_1)

{
  code *pcVar1;
  undefined2 unaff_DS;
  
  if (*(int *)0x1420 != 0) {
    (*(code *)*(undefined2 *)0x141e)(0x1000);
  }
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  if (*(char *)0x1238 != '\0') {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
  }
  return;
}


