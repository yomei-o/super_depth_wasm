/* 1000:bd2a */

undefined4 __cdecl16near FUN_1000_bd2a(void)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  undefined2 in_DX;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *unaff_BP;
  undefined2 unaff_DS;
  
  out(0xa1,(char)in_DX);
  out(0xa3,(char)((uint)in_DX >> 8));
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  iVar4 = 0;
  iVar3 = 0x10;
  do {
    out(0xa5,(char)iVar4 + ' ');
    puVar5 = unaff_BP + 1;
    out(0xa9,*unaff_BP);
    out(0xa5,(char)iVar4);
    uVar2 = (uint)iVar4 >> 8;
    unaff_BP = unaff_BP + 2;
    out(0xa9,*puVar5);
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return CONCAT22(iVar4,CONCAT11((char)uVar2,*puVar5));
}


