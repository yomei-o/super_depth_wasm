/* 1000:9fbc */

void __cdecl16near FUN_1000_9fbc(int param_1)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = FUN_1000_bf8e();
  while (iVar2 != 0) {
    FUN_1000_bf98();
    iVar2 = FUN_1000_bf8e();
  }
  if (0 < param_1) {
    do {
      do {
        bVar1 = in(0x60);
      } while ((bVar1 & 0x20) != 0);
      do {
        bVar1 = in(0x60);
      } while ((bVar1 & 0x20) == 0);
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return;
}


