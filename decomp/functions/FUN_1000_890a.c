/* 1000:890a */

void __cdecl16near FUN_1000_890a(int param_1,int param_2,undefined2 param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined2 unaff_DS;
  
  uVar1 = *(uint *)(param_1 * 2 + 0x1fca);
  uVar4 = (int)uVar1 >> 0xf;
  iVar2 = ((int)((uVar1 ^ uVar4) - uVar4) >> 3 ^ uVar4) - uVar4;
  uVar1 = *(uint *)(param_1 * 2 + 0x1f8a);
  uVar4 = (int)uVar1 >> 0xf;
  iVar3 = ((int)((uVar1 ^ uVar4) - uVar4) >> 3 ^ uVar4) - uVar4;
  FUN_1000_b766(iVar3 + 0x118,iVar2 + 0x162,iVar3 + param_2 + 0x118,iVar2 + 0x165,param_3);
  return;
}


