/* 1000:cd3e */

void __cdecl16near FUN_1000_cd3e(void)

{
  int *piVar1;
  undefined2 unaff_DS;
  
  if (*(int *)0x18b8 != 0) {
    FUN_1000_cf2c();
    FUN_1000_d7ac();
    FUN_1000_d7c4();
  }
  piVar1 = (int *)0x17b6;
  do {
    if (piVar1[1] != 0 || *piVar1 != 0) {
      FUN_1000_ed58(*piVar1,piVar1[1]);
    }
    piVar1 = piVar1 + 0xb;
  } while (piVar1 < (int *)0x17f8);
  piVar1 = (int *)0x18c0;
  do {
    if (piVar1[1] != 0 || *piVar1 != 0) {
      FUN_1000_ed58(*piVar1,piVar1[1]);
    }
    piVar1 = piVar1 + 4;
  } while (piVar1 < (int *)0x1940);
  return;
}


