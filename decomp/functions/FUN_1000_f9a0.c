/* 1000:f9a0 */

long __cdecl16near
FUN_1000_f9a0(int param_1,int param_2,int param_3,uint param_4,uint param_5,uint param_6)

{
  int iVar1;
  uint uVar2;
  undefined2 unaff_DS;
  long lVar3;
  undefined4 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined1 local_14 [4];
  uint local_10;
  int local_c;
  int local_a;
  int local_6;
  
  uVar2 = (int)(param_1 + 3U) >> 0xf;
  iVar1 = ((int)((param_1 + 3U ^ uVar2) - uVar2) >> 2 ^ uVar2) - uVar2;
  lVar3 = FUN_1000_f0b0(iVar1,iVar1 >> 0xf,0x5180,1);
  iVar1 = *(int *)(param_2 * 2 + 0x13f0);
  if ((param_1 % 4 == 0) && (2 < param_2)) {
    iVar1 = iVar1 + 1;
  }
  local_6 = param_3 + iVar1;
  FUN_1000_f82a();
  uVar8 = 0;
  uVar7 = 0x3c;
  uVar6 = 0;
  uVar5 = 0x3c;
  uVar2 = param_1 * 0x16d + param_3 + iVar1;
  uVar4 = FUN_1000_f0b0(uVar2 + 0xe44,((int)uVar2 >> 0xf) + (uint)(0xf1bb < uVar2),0x18,0);
  uVar4 = FUN_1000_f0b0(param_4 + (uint)uVar4,
                        ((int)param_4 >> 0xf) + (int)((ulong)uVar4 >> 0x10) +
                        (uint)CARRY2(param_4,(uint)uVar4),uVar5,uVar6);
  uVar4 = FUN_1000_f0b0(param_5 + (uint)uVar4,
                        ((int)param_5 >> 0xf) + (int)((ulong)uVar4 >> 0x10) +
                        (uint)CARRY2(param_5,(uint)uVar4),uVar7,uVar8);
  uVar2 = param_6 + (uint)uVar4;
  lVar3 = lVar3 + CONCAT22(((int)param_6 >> 0xf) + (int)((ulong)uVar4 >> 0x10) +
                           (uint)CARRY2(param_6,(uint)uVar4) + *(int *)0x1292 +
                           (uint)CARRY2(uVar2,*(uint *)0x1290),uVar2 + *(uint *)0x1290);
  local_a = param_1 + 0x50;
  local_c = param_2 + -1;
  local_10 = param_4;
  if (*(int *)0x1294 != 0) {
    iVar1 = FUN_1000_f8d6(local_14);
    if (iVar1 != 0) {
      lVar3 = CONCAT22((int)((ulong)lVar3 >> 0x10) - (uint)((uint)lVar3 < 0xe10),(uint)lVar3 - 0xe10
                      );
    }
  }
  return lVar3;
}


