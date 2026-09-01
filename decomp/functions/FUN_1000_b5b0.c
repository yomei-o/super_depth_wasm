/* 1000:b5b0 */

undefined2 __cdecl16near FUN_1000_b5b0(undefined2 param_1,int param_2,uint param_3,byte param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  undefined2 unaff_DS;
  
  out(0x7c,0xc0);
  out(0x7e,-(param_4 & 1));
  out(0x7e,-(param_4 >> 1 & 1));
  out(0x7e,-(param_4 >> 2 & 1));
  out(0x7e,-(param_4 >> 3 & 1));
  *(undefined2 *)0xbca = param_1;
  param_2 = param_2 * 0x50;
  *(int *)0xbd0 = param_2;
  *(int *)0xbd2 = param_2;
  param_2 = param_2 + param_3 * -0x50;
  *(int *)0xbce = param_2;
  *(int *)0xbd4 = param_2 + param_3 * 0xa0;
  *(uint *)0xbcc = param_3 >> 1;
  uVar8 = 0;
  while( true ) {
    uVar7 = uVar8;
    uVar4 = *(int *)0xbca - param_3;
    uVar5 = uVar4 >> 4;
    uVar8 = *(uint *)((uVar4 & 0xf) * 2 + 0xdf2);
    uVar4 = uVar4 + param_3 * 2;
    uVar1 = *(uint *)((uVar4 & 0xf) * 2 + 0xe12);
    iVar2 = (uVar4 >> 4) - uVar5;
    if (iVar2 == 0) {
      *(uint *)(*(int *)0xbd0 + uVar5 * 2) = uVar8 & uVar1;
      *(uint *)(*(int *)0xbd2 + uVar5 * 2) = uVar8 & uVar1;
    }
    else {
      puVar9 = (uint *)(*(int *)0xbd0 + uVar5 * 2);
      *puVar9 = uVar8;
      iVar2 = iVar2 + -1;
      for (iVar3 = iVar2; puVar9 = puVar9 + 1, iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar9 = 0xffff;
      }
      *puVar9 = uVar1;
      puVar9 = (uint *)(*(int *)0xbd2 + uVar5 * 2);
      *puVar9 = uVar8;
      for (; puVar9 = puVar9 + 1, iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar9 = 0xffff;
      }
      *puVar9 = uVar1;
    }
    *(int *)0xbd0 = *(int *)0xbd0 + -0x50;
    *(int *)0xbd2 = *(int *)0xbd2 + 0x50;
    if (param_3 < uVar7) break;
    uVar1 = *(uint *)0xbcc;
    uVar8 = uVar7 + 1;
    iVar2 = uVar1 - uVar8;
    *(int *)0xbcc = iVar2;
    if (uVar1 < uVar8) {
      *(int *)0xbcc = iVar2 + param_3;
      uVar5 = *(int *)0xbca - uVar7;
      uVar6 = uVar5 >> 4;
      uVar1 = *(uint *)((uVar5 & 0xf) * 2 + 0xdf2);
      uVar5 = uVar5 + uVar7 * 2;
      uVar4 = *(uint *)((uVar5 & 0xf) * 2 + 0xe12);
      iVar2 = (uVar5 >> 4) - uVar6;
      if (iVar2 == 0) {
        *(uint *)(*(int *)0xbce + uVar6 * 2) = uVar1 & uVar4;
        *(uint *)(*(int *)0xbd4 + uVar6 * 2) = uVar1 & uVar4;
      }
      else {
        puVar9 = (uint *)(*(int *)0xbce + uVar6 * 2);
        *puVar9 = uVar1;
        iVar2 = iVar2 + -1;
        for (iVar3 = iVar2; puVar9 = puVar9 + 1, iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar9 = 0xffff;
        }
        *puVar9 = uVar4;
        puVar9 = (uint *)(*(int *)0xbd4 + uVar6 * 2);
        *puVar9 = uVar1;
        for (; puVar9 = puVar9 + 1, iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar9 = 0xffff;
        }
        *puVar9 = uVar4;
      }
      *(int *)0xbce = *(int *)0xbce + 0x50;
      *(int *)0xbd4 = *(int *)0xbd4 + -0x50;
      param_3 = param_3 - 1;
    }
  }
  out(0x7c,0);
  return 0;
}


