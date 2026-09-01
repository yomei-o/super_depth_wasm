/* 1000:be0e */

undefined4 __cdecl16near FUN_1000_be0e(void)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 in_DX;
  int iVar4;
  undefined2 *unaff_SI;
  undefined2 unaff_DS;
  
  out(0xa1,(char)in_DX);
  out(0xa3,(char)((uint)in_DX >> 8));
  iVar4 = 0;
  iVar3 = 0x10;
  do {
    puVar1 = unaff_SI;
    unaff_SI = unaff_SI + 1;
    uVar2 = *puVar1;
    out(0xa5,(char)iVar4 + ' ');
    out(0xa9,(char)((uint)uVar2 >> 8));
    out(0xa5,(char)iVar4);
    out(0xa9,(char)uVar2);
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return CONCAT22(iVar4,uVar2);
}


