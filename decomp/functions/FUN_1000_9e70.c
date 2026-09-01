/* 1000:9e70 */

void __cdecl16near FUN_1000_9e70(void)

{
  bool bVar1;
  bool bVar2;
  undefined2 uVar3;
  int iVar4;
  undefined2 unaff_DS;
  undefined2 uVar5;
  
  bVar1 = false;
  bVar2 = false;
  if (*(int *)0x1816 == 2) {
    uVar5 = 0x97c;
    uVar3 = 1;
  }
  else {
    uVar5 = 0x982;
    uVar3 = 0xe1;
  }
  FUN_1000_beea(8,0x24,uVar3,uVar5);
  FUN_1000_beea(0xf,0x18,0xc3,0x988);
  FUN_1000_cf2c();
  iVar4 = FUN_1000_bf8e();
  while (iVar4 != 0) {
    FUN_1000_bf98();
    iVar4 = FUN_1000_bf8e();
  }
  FUN_1000_cff4(1);
  FUN_1000_cfde();
  while( true ) {
    iVar4 = FUN_1000_bf8e();
    while (iVar4 != 0) {
      FUN_1000_bf98();
      iVar4 = FUN_1000_bf8e();
    }
    FUN_1000_9fbc(10);
    iVar4 = FUN_1000_e3c8(0x2130);
    if ((*(int *)0x213e != 0) && (bVar2)) break;
    if ((((((*(int *)0x2136 != 0) || (*(int *)0x2134 != 0)) || (*(int *)0x2130 != 0)) ||
         ((*(int *)0x2132 != 0 || (*(int *)0x2138 != 0)))) ||
        ((*(int *)0x213a != 0 || (*(int *)0x213c != 0)))) || ((iVar4 != 0 && (bVar1)))) {
      FUN_1000_cf44();
      FUN_1000_d046();
LAB_1000_9f6e:
      FUN_1000_beea(8,0x24,0xc1,0x999);
      FUN_1000_beea(0xf,0x18,0xc1,0x99f);
      FUN_1000_9fbc(10);
      iVar4 = FUN_1000_bf8e();
      while (iVar4 != 0) {
        FUN_1000_bf98();
        iVar4 = FUN_1000_bf8e();
      }
      return;
    }
    if (iVar4 == 0) {
      bVar1 = true;
    }
    if (*(int *)0x213e == 0) {
      bVar2 = true;
    }
  }
  *(undefined2 *)0x1842 = 0;
  *(undefined2 *)0x184c = 0;
  goto LAB_1000_9f6e;
}


