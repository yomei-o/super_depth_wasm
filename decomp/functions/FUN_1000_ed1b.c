/* 1000:ed1b */

void FUN_1000_ed1b(void)

{
  code *pcVar1;
  int unaff_BP;
  undefined2 unaff_SS;
  
  if (*(int *)(unaff_BP + 8) != 0) {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    FUN_1000_f3e3();
    return;
  }
  FUN_1000_f3e3();
  return;
}


