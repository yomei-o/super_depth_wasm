/* 1000:def6 */

undefined4 __cdecl16near
FUN_1000_def6(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  uint uVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint *puVar12;
  undefined2 unaff_DS;
  int iStack_8;
  
  uVar5 = param_2;
  uVar10 = param_5;
  uVar9 = param_4;
  uVar7 = param_6;
  uVar3 = param_3;
  if ((int)param_4 < (int)param_1) {
    uVar5 = param_5;
    uVar10 = param_2;
    uVar9 = param_1;
    param_1 = param_4;
    uVar7 = param_3;
    uVar3 = param_6;
  }
  uVar1 = uVar5;
  if ((int)uVar3 < (int)uVar5) {
    uVar1 = uVar3;
    uVar3 = uVar5;
  }
  uVar5 = uVar10;
  if ((int)uVar7 < (int)uVar10) {
    uVar5 = uVar7;
    uVar7 = uVar10;
  }
  if (((((int)uVar1 < 0x280) || ((int)uVar5 < 0x280)) && ((-1 < (int)uVar3 || (-1 < (int)uVar7))))
     && ((-1 < (int)uVar9 && ((int)param_1 < 200)))) {
    uVar10 = param_1;
    if ((int)param_1 < 0) {
      uVar10 = 0;
      uVar1 = (int)(((long)(int)-(uVar1 - uVar5) * (long)(int)uVar9) / (long)(int)(param_1 - uVar9))
              + uVar5;
    }
    uVar8 = uVar9;
    if (199 < (int)uVar9) {
      uVar8 = 199;
      uVar5 = (int)(((long)(int)-(uVar1 - uVar5) * (long)(int)(199 - uVar10)) /
                   (long)(int)(uVar9 - uVar10)) + uVar1;
    }
    *(uint *)0x118e = uVar1;
    *(uint *)0x1190 = uVar10;
    *(int *)0x1198 = uVar10 - uVar8;
    *(int *)0x1194 = (uVar10 - uVar8) * -2;
    iVar6 = uVar5 - uVar1;
    uVar2 = 0;
    if (iVar6 < 0) {
      iVar6 = -iVar6;
      uVar2 = 0xffff;
    }
    else if (iVar6 != 0) {
      uVar2 = 1;
    }
    *(undefined2 *)0x1196 = uVar2;
    *(int *)0x1192 = iVar6 << 1;
    iVar6 = 0x119a;
    if ((int)param_1 < 0) {
      iVar11 = param_1 - uVar9;
      param_1 = 0;
      uVar3 = (int)(((long)(int)-(uVar3 - uVar7) * (long)(int)uVar9) / (long)iVar11) + uVar7;
    }
    if (199 < (int)uVar9) {
      iVar11 = uVar9 - param_1;
      uVar9 = 199;
      uVar7 = (int)(((long)(int)-(uVar3 - uVar7) * (long)(int)(199 - param_1)) / (long)iVar11) +
              uVar3;
    }
    *(uint *)0x119c = uVar3;
    *(uint *)0x119e = param_1;
    *(int *)0x11a6 = param_1 - uVar9;
    *(int *)0x11a2 = (param_1 - uVar9) * -2;
    iVar11 = uVar7 - uVar3;
    uVar2 = 0;
    if (iVar11 < 0) {
      iVar11 = -iVar11;
      uVar2 = 0xffff;
    }
    else if (iVar11 != 0) {
      uVar2 = 1;
    }
    *(undefined2 *)0x11a4 = uVar2;
    *(int *)0x11a0 = iVar11 << 1;
    if (uVar9 != param_1) {
      iStack_8 = (uVar9 - param_1) + 1;
      iVar11 = param_1 * 0x50;
      iVar6 = 0x118c;
      goto LAB_1000_e048;
    }
    iStack_8 = (uVar9 - param_1) + 1;
    iVar11 = param_1 * 0x50;
    uVar5 = param_5;
    if ((int)param_5 < (int)param_2) {
      uVar5 = param_2;
      param_2 = param_5;
    }
    uVar9 = param_3;
    if ((int)param_6 < (int)param_3) {
      uVar9 = param_6;
      param_6 = param_3;
    }
    uVar1 = uVar9;
    if ((int)uVar9 < (int)param_2) {
      uVar1 = param_2;
      param_2 = uVar9;
    }
    uVar10 = uVar5;
    uVar9 = param_6;
    if ((int)uVar5 < (int)param_6) {
      uVar10 = param_6;
      uVar9 = uVar5;
    }
    while( true ) {
      if (((int)param_2 < 0x280) && (-1 < (int)uVar10)) {
        if ((int)param_2 < 0) {
          param_2 = 0;
        }
        if (0x27f < (int)uVar10) {
          uVar10 = 0x27f;
        }
        puVar12 = (uint *)(iVar11 + (param_2 >> 4) * 2);
        uVar9 = *(uint *)((param_2 & 0xf) * 2 + 0x11a8);
        uVar1 = ~*(uint *)(((uVar10 & 0xf) + 1) * 2 + 0x11a8);
        iVar4 = (uVar10 >> 4) - (param_2 >> 4);
        if (iVar4 == 0) {
          uVar1 = uVar9 & uVar1;
          *puVar12 = uVar1;
        }
        else {
          *puVar12 = uVar9;
          while( true ) {
            puVar12 = puVar12 + 1;
            iVar4 = iVar4 + -1;
            if (iVar4 == 0) break;
            *puVar12 = 0xffff;
          }
          *puVar12 = uVar1;
        }
      }
      iStack_8 = iStack_8 + -1;
      iVar11 = iVar11 + 0x50;
      if (iStack_8 == 0) break;
LAB_1000_e048:
      param_2 = *(uint *)(iVar6 + 2);
      uVar9 = param_2;
      for (iVar4 = *(int *)(iVar6 + 0xc) + *(int *)(iVar6 + 6); -1 < iVar4;
          iVar4 = iVar4 - *(int *)(iVar6 + 8)) {
        uVar9 = uVar9 + *(int *)(iVar6 + 10);
      }
      *(uint *)(iVar6 + 2) = uVar9;
      *(int *)(iVar6 + 0xc) = iVar4;
      uVar10 = *(uint *)(iVar6 + 0x10);
      uVar9 = uVar10;
      for (uVar1 = *(int *)(iVar6 + 0x1a) + *(int *)(iVar6 + 0x14); -1 < (int)uVar1;
          uVar1 = uVar1 - *(int *)(iVar6 + 0x16)) {
        uVar9 = uVar9 + *(int *)(iVar6 + 0x18);
      }
      *(uint *)(iVar6 + 0x10) = uVar9;
      *(uint *)(iVar6 + 0x1a) = uVar1;
    }
  }
  return CONCAT22(uVar9,uVar1);
}


