/* 1000:ba6a */

undefined2 __cdecl16near FUN_1000_ba6a(undefined1 *param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined2 unaff_DS;
  
  iVar3 = 0x10;
  iVar4 = 0;
  do {
    out(0xa8,(char)iVar4);
    uVar2 = (uint)iVar4 >> 8;
    out(0xac,*param_1);
    puVar1 = param_1 + 2;
    out(0xaa,param_1[1]);
    param_1 = param_1 + 3;
    out(0xae,*puVar1);
    iVar3 = iVar3 + -1;
    iVar4 = iVar4 + 1;
  } while (iVar3 != 0);
  return CONCAT11((char)uVar2,*puVar1);
}


