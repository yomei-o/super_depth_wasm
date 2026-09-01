/* 1000:beea */

void __cdecl16near FUN_1000_beea(int param_1,int param_2,undefined2 param_3,int param_4)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  byte bVar3;
  undefined2 uVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined2 unaff_DS;
  
  puVar6 = (undefined2 *)((param_1 * 0x50 + param_2) * 2);
  puVar7 = puVar6;
  for (iVar5 = 0; bVar3 = *(byte *)(param_4 + iVar5), bVar3 != 0; iVar5 = iVar5 + 1) {
    if (bVar3 < 0x80) {
      uVar4 = CONCAT11(bVar3,0x56);
      *puVar7 = uVar4;
    }
    else {
      uVar4 = CONCAT11(bVar3 + 0x80,0x57);
      *puVar7 = uVar4;
    }
    puVar2 = puVar7 + 1;
    puVar7 = puVar7 + 2;
    *puVar2 = CONCAT11((char)((uint)uVar4 >> 8) + -0x80,(char)uVar4);
  }
  puVar6 = puVar6 + 0x1000;
  for (iVar5 = iVar5 << 1; iVar5 != 0; iVar5 = iVar5 + -1) {
    puVar1 = puVar6;
    puVar6 = puVar6 + 1;
    *puVar1 = param_3;
  }
  return;
}


