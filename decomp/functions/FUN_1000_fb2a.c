/* 1000:fb2a */

void __cdecl16near FUN_1000_fb2a(void)

{
  int in_BX;
  int iVar1;
  int *unaff_DI;
  undefined2 unaff_ES;
  undefined2 uVar2;
  int unaff_DS;
  
  if (unaff_DI[1] == 0) {
    unaff_DI[1] = unaff_DS;
    *unaff_DI = in_BX;
  }
  else {
    uVar2 = (undefined2)((ulong)*(undefined4 *)(unaff_DI + 4) >> 0x10);
    iVar1 = (int)*(undefined4 *)(unaff_DI + 4);
    *(int *)(iVar1 + 0xe) = unaff_DS;
    *(int *)(iVar1 + 0xc) = in_BX;
    *(undefined2 *)(in_BX + 0x12) = uVar2;
    *(int *)(in_BX + 0x10) = iVar1;
  }
  unaff_DI[5] = unaff_DS;
  unaff_DI[4] = in_BX;
  unaff_DI[3] = unaff_DS;
  unaff_DI[2] = in_BX;
  return;
}


