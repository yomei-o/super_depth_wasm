/* 1000:8ae2 */

void __cdecl16near FUN_1000_8ae2(void)

{
  int *piVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  char acStack_85 [51];
  undefined2 uStack_52;
  undefined2 uStack_50;
  int iStack_4e;
  int local_40;
  char local_3e;
  char acStack_3d [35];
  undefined1 local_1a;
  int local_16;
  int local_14;
  int local_12;
  int local_10;
  int local_e;
  int local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  int local_4;
  
  local_a = 0x909;
  local_8 = 0x916;
  local_6 = 0x923;
  for (local_e = 0; local_e <= *(int *)0x17f4; local_e = local_e + 1) {
    *(undefined2 *)(local_e * 2 + 0x1d6a) = 0;
    *(undefined2 *)(local_e * 2 + 0x1fca) = 0;
  }
  *(undefined2 *)0x1f8a = 0x120;
  *(undefined2 *)0x1fca = 0x10;
  *(undefined2 *)0x1844 = 0;
  *(undefined2 *)0x193c = 0;
  local_c = 0;
  local_14 = 0;
  local_10 = 0;
  local_40 = 0;
  FUN_1000_bfa2();
  FUN_1000_c762();
  FUN_1000_82c8();
  local_4 = 1;
  for (local_e = 1; -1 < local_e; local_e = local_e + -1) {
    out(0xa6,(char)local_e);
    iStack_4e = 0;
    uStack_50 = 4;
    uStack_52 = 0x8b71;
    FUN_1000_b854();
  }
  out(0xa4,1);
  iStack_4e = 0x8b90;
  FUN_1000_bfd6();
  iStack_4e = 0x8ba5;
  FUN_1000_bfd6();
  for (local_e = 0; local_e < 0x28; local_e = local_e + 1) {
    for (local_12 = 0; local_12 < 2; local_12 = local_12 + 1) {
      out(0xa6,(char)local_12);
      iStack_4e = 0x8bd6;
      FUN_1000_c25e();
      iStack_4e = 0x8be8;
      FUN_1000_c25e();
      iStack_4e = 0x8bfa;
      FUN_1000_c25e();
      iStack_4e = 0x8c0c;
      FUN_1000_c25e();
      iStack_4e = 0x8c1e;
      FUN_1000_c25e();
    }
  }
  FUN_1000_a3f8();
  *(undefined2 *)0x1844 = 1;
  FUN_1000_82d7();
  FUN_1000_a302();
  local_e = 1;
  do {
    iStack_4e = local_e * 2 + 0xd;
    uStack_50 = 0x8c68;
    FUN_1000_beea();
    local_e = local_e + 1;
  } while (local_e < 3);
  iStack_4e = 0xd;
  uStack_50 = 0x8c86;
  FUN_1000_beea();
  FUN_1000_cf6a();
  FUN_1000_cf44();
  FUN_1000_d046();
  *(undefined2 *)0xdd0 = 0;
  while( true ) {
    FUN_1000_8184();
    local_16 = FUN_1000_e3c8();
    if ((local_16 != 0) || (*(int *)0x213e != 0)) goto LAB_1000_8cb9;
    if ((*(int *)0x2138 != 0) || (*(int *)0x213a != 0)) break;
    if ((*(int *)0x2130 != 0) && (local_4 != 0)) {
      iVar4 = local_c + -1;
      local_14 = local_c;
      local_c = iVar4;
      if (iVar4 == -1) {
        local_c = 2;
      }
      local_4 = 0;
    }
    if ((*(int *)0x2132 != 0) && (local_4 != 0)) {
      iVar4 = local_c + 1;
      local_14 = local_c;
      local_c = iVar4;
      if (iVar4 == 3) {
        local_c = 0;
      }
      local_4 = 0;
    }
    if ((*(int *)0x2130 == 0) && (*(int *)0x2132 == 0)) {
      local_4 = 1;
    }
    local_16 = 0;
    for (local_e = 1; local_e <= *(int *)0x17f4; local_e = local_e + 1) {
      iVar4 = FUN_1000_efc8();
      if ((iVar4 % 10 == 0) && (iVar4 = local_e * 2, *(int *)(iVar4 + 0x1fca) == 0)) {
        iVar5 = FUN_1000_efc8();
        *(int *)(iVar4 + 0x1fca) = (iVar5 % 7 + 2) * 0x20;
        iVar5 = FUN_1000_efc8();
        iVar5 = (iVar5 % 2) * 0x280 + -0x20;
        *(int *)(iVar4 + 0x1f8a) = iVar5;
        if (iVar5 == 0x140) {
          iVar4 = 0;
        }
        else if (-*(int *)(iVar4 + 0x1f8a) == -0x140 || -*(int *)(iVar4 + 0x1f8a) + 0x140 < 0) {
          iVar4 = -1;
        }
        else {
          iVar4 = 1;
        }
        iVar5 = FUN_1000_efc8();
        *(int *)(local_e * 2 + 0x1d6a) = (iVar5 % 8 + 1) * iVar4;
      }
      iVar4 = *(int *)(local_e * 2 + 0x1f8a) + *(int *)(local_e * 2 + 0x1d6a);
      if ((iVar4 < -0x1f) || (0x25f < iVar4)) {
        *(undefined2 *)(local_e * 2 + 0x1fca) = 0;
      }
    }
    *(byte *)0x1844 = *(byte *)0x1844 ^ 1;
    iStack_4e = 0;
    uStack_50 = 4;
    uStack_52 = 0x8e40;
    FUN_1000_b854();
    for (local_e = *(int *)0x17f4; 0 < local_e; local_e = local_e + -1) {
      if (99 < *(int *)(local_e * 2 + 0x1fca)) {
        iStack_4e = *(int *)(local_e * 2 + 0x1f8a) + *(int *)(local_e * 2 + 0x1d6a);
        uStack_50 = 0x8e70;
        FUN_1000_88a2();
      }
    }
    iStack_4e = 0x8ec7;
    FUN_1000_bfd6();
    iStack_4e = 0x8ef0;
    FUN_1000_bfd6();
    while (iVar4 = FUN_1000_bf8e(), iVar4 != 0) {
      FUN_1000_bf98();
    }
    FUN_1000_e538();
    do {
      uVar6 = FUN_1000_bb38();
    } while (uVar6 < *(int *)0x1820 - 1U);
    *(undefined2 *)0xdd0 = 0;
    out(0xa4,(byte)*(undefined2 *)0x1844);
    out(0xa6,(byte)*(undefined2 *)0x1844 ^ 1);
    iStack_4e = 0;
    uStack_50 = 4;
    uStack_52 = 0x8f38;
    FUN_1000_b854();
    for (local_e = *(int *)0x17f4; 0 < local_e; local_e = local_e + -1) {
      piVar1 = (int *)(local_e * 2 + 0x1f8a);
      *piVar1 = *piVar1 + *(int *)(local_e * 2 + 0x1d6a);
    }
    if (local_14 != local_c) {
      iStack_4e = local_c * 2 + 0xd;
      uStack_50 = 0x8f78;
      FUN_1000_beea();
      iStack_4e = local_14 * 2 + 0xd;
      uStack_50 = 0x8f92;
      FUN_1000_beea();
      local_14 = local_c;
    }
    pcVar8 = (char *)(local_10 * 0x25 + 0x5d0);
    pcVar9 = &local_3e;
    uVar6 = 0xffff;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar2 = pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (*pcVar2 != '\0');
    uVar6 = ~uVar6;
    pcVar8 = pcVar8 + -uVar6;
    for (uVar7 = uVar6 >> 1; uVar7 != 0; uVar7 = uVar7 - 1) {
      pcVar3 = pcVar9;
      pcVar9 = pcVar9 + 2;
      pcVar2 = pcVar8;
      pcVar8 = pcVar8 + 2;
      *(undefined2 *)pcVar3 = *(undefined2 *)pcVar2;
    }
    for (uVar6 = (uint)((uVar6 & 1) != 0); uVar6 != 0; uVar6 = uVar6 - 1) {
      pcVar3 = pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar2 = pcVar8;
      pcVar8 = pcVar8 + 1;
      *pcVar3 = *pcVar2;
    }
    local_1a = 0;
    if (local_40 < 0x24) {
      acStack_3d[local_40] = '\0';
      iStack_4e = 0x17;
      uStack_50 = 0x8fe9;
      FUN_1000_beea();
    }
    else if (local_40 < 0x48) {
      iStack_4e = 0x17;
      uStack_50 = 0x900b;
      FUN_1000_beea();
    }
    if ((0x47 < local_40) && (local_40 < 0x6c)) {
      pcVar9 = acStack_85 + local_40;
      iVar4 = -1;
      do {
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pcVar2 = pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (*pcVar2 != '\0');
      iStack_4e = 0x17;
      uStack_50 = 0x9044;
      FUN_1000_bf46();
      iStack_4e = 0x17;
      uStack_50 = 0x9057;
      FUN_1000_beea();
    }
    if (0x6b < local_40) {
      local_40 = -1;
      local_10 = local_10 + 1;
      if (7 < local_10) {
        local_10 = 0;
      }
    }
    local_40 = local_40 + 1;
  }
  if (local_c == 0) {
    *(undefined2 *)0x184c = 1;
  }
  if (local_c == 1) {
    *(undefined2 *)0x184c = 2;
  }
  if (local_c != 2) goto LAB_1000_907a;
LAB_1000_8cb9:
  *(undefined2 *)0x184c = 0;
LAB_1000_907a:
  out(0xa6,(char)*(undefined2 *)0x1844);
  FUN_1000_84ae();
  FUN_1000_cf2c();
  return;
}


