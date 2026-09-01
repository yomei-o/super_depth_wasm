/* 1000:9ff0 */

void __cdecl16near FUN_1000_9ff0(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined2 unaff_DS;
  
  iVar2 = FUN_1000_bf8e();
  while (iVar2 != 0) {
    FUN_1000_bf98();
    iVar2 = FUN_1000_bf8e();
  }
  iVar2 = 0;
  if (0 < param_1) {
    while( true ) {
      do {
        bVar1 = in(0x60);
      } while ((bVar1 & 0x20) != 0);
      do {
        bVar1 = in(0x60);
      } while ((bVar1 & 0x20) == 0);
      iVar3 = FUN_1000_bf8e();
      while (iVar3 != 0) {
        FUN_1000_bf98();
        iVar3 = FUN_1000_bf8e();
      }
      iVar3 = FUN_1000_e3c8(0x2130);
      if ((iVar3 != 0) || (*(int *)0x213e != 0)) break;
      if (*(int *)0x2138 != 0) {
        return;
      }
      if (*(int *)0x213a != 0) {
        return;
      }
      iVar2 = iVar2 + 1;
      if (param_1 <= iVar2) {
        return;
      }
    }
    if (*(int *)0x184c == 2) {
      *(undefined2 *)0x1842 = 0;
      *(undefined2 *)0x184c = 0;
    }
  }
  return;
}


