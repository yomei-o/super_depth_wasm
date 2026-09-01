/* 1000:e8b0 */

void __cdecl16near FUN_1000_e8b0(void)

{
  int *unaff_SI;
  int *unaff_DI;
  undefined2 unaff_DS;
  
  while (unaff_SI < unaff_DI) {
    unaff_DI = unaff_DI + -1;
    if ((code *)*unaff_DI != (code *)0x0) {
      (*(code *)*unaff_DI)();
    }
  }
  return;
}


