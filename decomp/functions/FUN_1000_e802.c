/* 1000:e802 */

void __cdecl16near FUN_1000_e802(void)

{
  code *pcVar1;
  undefined2 unaff_DS;
  
  FUN_1000_e8b0();
  FUN_1000_e8b0();
  if (*(int *)0x140e == -0x292a) {
    (*(code *)*(undefined2 *)0x1414)();
  }
  FUN_1000_e8b0();
  FUN_1000_e8bf();
  FUN_1000_f180();
  FUN_1000_e883();
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return;
}


