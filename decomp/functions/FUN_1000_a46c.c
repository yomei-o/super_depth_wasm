/* 1000:a46c */

int __cdecl16near FUN_1000_a46c(void)

{
  undefined2 *puVar1;
  char *pcVar2;
  char *pcVar3;
  undefined2 *puVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  char *pcVar12;
  char *pcVar13;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined4 uVar14;
  undefined1 local_868 [2054];
  undefined2 local_62 [2];
  char acStack_5d [4];
  char acStack_59 [10];
  undefined1 local_4f [31];
  char local_30 [10];
  undefined2 local_26;
  undefined2 uStack_24;
  undefined2 uStack_22;
  undefined2 uStack_20;
  char local_1e [12];
  int local_12;
  int local_10;
  undefined4 local_e;
  int *local_a;
  char *local_8;
  undefined2 local_6;
  int local_4;
  
  local_12 = 0;
  local_a = (int *)0x1fea;
  do {
    if (*local_a < *(int *)0x1db6) {
      local_6 = 9;
      if (local_a < (int *)0x20b0) {
        puVar9 = (undefined2 *)0x20b0;
        local_4 = 9 - local_12;
        do {
          puVar10 = puVar9 + -0xb;
          puVar11 = puVar9;
          for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
            puVar4 = puVar11;
            puVar11 = puVar11 + 1;
            puVar1 = puVar10;
            puVar10 = puVar10 + 1;
            *puVar4 = *puVar1;
          }
          puVar9 = puVar9 + -0xb;
          local_4 = local_4 + -1;
        } while (local_4 != 0);
      }
      *local_a = *(int *)0x1db6;
      local_a[1] = *(int *)0x1818;
      local_a[2] = *(int *)0xaa7;
      local_a[3] = *(int *)0xaa9;
      local_a[4] = *(int *)0xaab;
      local_a[5] = *(int *)0xaad;
      *(undefined1 *)(local_a + 6) = *(undefined1 *)0xaaf;
      uVar14 = FUN_1000_ef1a(0);
      local_e = uVar14;
      local_8 = (char *)FUN_1000_eeb2(&local_e);
      local_26 = *(undefined2 *)0xab0;
      uStack_24 = *(undefined2 *)0xab2;
      uStack_22 = *(undefined2 *)0xab4;
      uStack_20 = *(undefined2 *)0xab6;
      local_1e[0] = *(char *)0xab8;
      FUN_1000_ee2a(*(undefined2 *)((int)local_8 + 10),local_1e + 2,10);
      local_6 = 0;
      pcVar12 = local_1e + 2;
      iVar8 = -1;
      do {
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        pcVar2 = pcVar12;
        pcVar12 = pcVar12 + 1;
      } while (*pcVar2 != '\0');
      if (iVar8 != -2) {
        uVar6 = 0;
        do {
          pcVar12 = local_1e + 2;
          uVar7 = 0xffff;
          do {
            if (uVar7 == 0) break;
            uVar7 = uVar7 - 1;
            pcVar2 = pcVar12;
            pcVar12 = pcVar12 + 1;
          } while (*pcVar2 != '\0');
          *(char *)((int)&uStack_24 + (uVar6 - (~uVar7 - 1))) = local_1e[uVar6 + 2];
          pcVar12 = local_1e + 2;
          uVar7 = 0xffff;
          do {
            if (uVar7 == 0) break;
            uVar7 = uVar7 - 1;
            pcVar2 = pcVar12;
            pcVar12 = pcVar12 + 1;
          } while (*pcVar2 != '\0');
          uVar6 = uVar6 + 1;
        } while (uVar6 < ~uVar7 - 1);
      }
      FUN_1000_ee2a(*(int *)((int)local_8 + 8) + 1,local_1e + 2,10);
      local_6 = 0;
      pcVar12 = local_1e + 2;
      iVar8 = -1;
      do {
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        pcVar2 = pcVar12;
        pcVar12 = pcVar12 + 1;
      } while (*pcVar2 != '\0');
      if (iVar8 != -2) {
        uVar6 = 0;
        do {
          pcVar12 = local_1e + 2;
          uVar7 = 0xffff;
          do {
            if (uVar7 == 0) break;
            uVar7 = uVar7 - 1;
            pcVar2 = pcVar12;
            pcVar12 = pcVar12 + 1;
          } while (*pcVar2 != '\0');
          *(char *)((int)&uStack_22 + (uVar6 - (~uVar7 - 1)) + 1) = local_1e[uVar6 + 2];
          pcVar12 = local_1e + 2;
          uVar7 = 0xffff;
          do {
            if (uVar7 == 0) break;
            uVar7 = uVar7 - 1;
            pcVar2 = pcVar12;
            pcVar12 = pcVar12 + 1;
          } while (*pcVar2 != '\0');
          uVar6 = uVar6 + 1;
        } while (uVar6 < ~uVar7 - 1);
      }
      FUN_1000_ee2a(*(undefined2 *)((int)local_8 + 6),local_1e + 2,10);
      uVar6 = 0;
      pcVar12 = local_1e + 2;
      iVar8 = -1;
      do {
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        pcVar2 = pcVar12;
        pcVar12 = pcVar12 + 1;
      } while (*pcVar2 != '\0');
      if (iVar8 != -2) {
        do {
          pcVar12 = local_1e + 2;
          uVar7 = 0xffff;
          do {
            if (uVar7 == 0) break;
            uVar7 = uVar7 - 1;
            pcVar2 = pcVar12;
            pcVar12 = pcVar12 + 1;
          } while (*pcVar2 != '\0');
          local_1e[uVar6 - (~uVar7 - 1)] = local_1e[uVar6 + 2];
          pcVar12 = local_1e + 2;
          uVar7 = 0xffff;
          do {
            if (uVar7 == 0) break;
            uVar7 = uVar7 - 1;
            pcVar2 = pcVar12;
            pcVar12 = pcVar12 + 1;
          } while (*pcVar2 != '\0');
          uVar6 = uVar6 + 1;
        } while (uVar6 < ~uVar7 - 1);
      }
      pcVar12 = (char *)&local_26;
      pcVar13 = (char *)((int)local_a + 0xd);
      uVar6 = 0xffff;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar2 = pcVar12;
        pcVar12 = pcVar12 + 1;
      } while (*pcVar2 != '\0');
      uVar6 = ~uVar6;
      pcVar12 = pcVar12 + -uVar6;
      for (uVar7 = uVar6 >> 1; uVar7 != 0; uVar7 = uVar7 - 1) {
        pcVar3 = pcVar13;
        pcVar13 = pcVar13 + 2;
        pcVar2 = pcVar12;
        pcVar12 = pcVar12 + 2;
        *(undefined2 *)pcVar3 = *(undefined2 *)pcVar2;
      }
      for (uVar6 = (uint)((uVar6 & 1) != 0); uVar6 != 0; uVar6 = uVar6 - 1) {
        pcVar3 = pcVar13;
        pcVar13 = pcVar13 + 1;
        pcVar2 = pcVar12;
        pcVar12 = pcVar12 + 1;
        *pcVar3 = *pcVar2;
      }
      local_10 = local_12;
      *(undefined2 *)0x1db6 = 0;
    }
    local_12 = local_12 + 1;
    local_a = local_a + 0xb;
  } while (local_a < (int *)0x20c6);
  FUN_1000_a816(local_10);
  FUN_1000_ab76(local_10,local_30);
  pcVar12 = local_30;
  pcVar13 = (char *)(local_10 * 0x16 + 0x1fee);
  uVar6 = 0xffff;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar2 = pcVar12;
    pcVar12 = pcVar12 + 1;
  } while (*pcVar2 != '\0');
  uVar6 = ~uVar6;
  pcVar12 = pcVar12 + -uVar6;
  for (uVar7 = uVar6 >> 1; uVar7 != 0; uVar7 = uVar7 - 1) {
    pcVar3 = pcVar13;
    pcVar13 = pcVar13 + 2;
    pcVar2 = pcVar12;
    pcVar12 = pcVar12 + 2;
    *(undefined2 *)pcVar3 = *(undefined2 *)pcVar2;
  }
  for (uVar6 = (uint)((uVar6 & 1) != 0); uVar6 != 0; uVar6 = uVar6 - 1) {
    pcVar3 = pcVar13;
    pcVar13 = pcVar13 + 1;
    pcVar2 = pcVar12;
    pcVar12 = pcVar12 + 1;
    *pcVar3 = *pcVar2;
  }
  FUN_1000_a846(local_10);
  *(undefined1 *)*(undefined2 *)0x1db0 = 0;
  pcVar12 = (char *)0xab9;
  uVar6 = 0xffff;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar2 = pcVar12;
    pcVar12 = pcVar12 + 1;
  } while (*pcVar2 != '\0');
  uVar6 = ~uVar6;
  pcVar12 = pcVar12 + -uVar6;
  pcVar13 = (char *)0x20c8;
  iVar8 = -1;
  do {
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    pcVar2 = pcVar13;
    pcVar13 = pcVar13 + 1;
  } while (*pcVar2 != '\0');
  pcVar13 = pcVar13 + -1;
  for (uVar7 = uVar6 >> 1; uVar7 != 0; uVar7 = uVar7 - 1) {
    pcVar3 = pcVar13;
    pcVar13 = pcVar13 + 2;
    pcVar2 = pcVar12;
    pcVar12 = pcVar12 + 2;
    *(undefined2 *)pcVar3 = *(undefined2 *)pcVar2;
  }
  for (uVar6 = (uint)((uVar6 & 1) != 0); uVar6 != 0; uVar6 = uVar6 - 1) {
    pcVar3 = pcVar13;
    pcVar13 = pcVar13 + 1;
    pcVar2 = pcVar12;
    pcVar12 = pcVar12 + 1;
    *pcVar3 = *pcVar2;
  }
  FUN_1000_e182(0x20c8,local_868);
  local_a = (int *)0x0;
  local_8 = (char *)0x1fee;
  do {
    puVar9 = local_62;
    puVar10 = (undefined2 *)0xac3;
    for (iVar8 = 0xe; iVar8 != 0; iVar8 = iVar8 + -1) {
      puVar4 = puVar9;
      puVar9 = puVar9 + 1;
      puVar1 = puVar10;
      puVar10 = puVar10 + 1;
      *puVar4 = *puVar1;
    }
    *(undefined1 *)puVar9 = *(undefined1 *)puVar10;
    FUN_1000_ee2a(*(undefined2 *)(local_8 + -4),local_1e + 2,10);
    local_6 = 0;
    pcVar12 = local_1e + 2;
    iVar8 = -1;
    do {
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      pcVar2 = pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (*pcVar2 != '\0');
    if (iVar8 != -2) {
      uVar6 = 0;
      do {
        pcVar12 = local_1e + 2;
        uVar7 = 0xffff;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          pcVar2 = pcVar12;
          pcVar12 = pcVar12 + 1;
        } while (*pcVar2 != '\0');
        acStack_5d[uVar6 - (~uVar7 - 1)] = local_1e[uVar6 + 2];
        pcVar12 = local_1e + 2;
        uVar7 = 0xffff;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          pcVar2 = pcVar12;
          pcVar12 = pcVar12 + 1;
        } while (*pcVar2 != '\0');
        uVar6 = uVar6 + 1;
      } while (uVar6 < ~uVar7 - 1);
    }
    FUN_1000_ee2a(*(undefined2 *)(local_8 + -2),local_1e + 2,10);
    local_6 = 0;
    pcVar12 = local_1e + 2;
    iVar8 = -1;
    do {
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      pcVar2 = pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (*pcVar2 != '\0');
    if (iVar8 != -2) {
      uVar6 = 0;
      do {
        pcVar12 = local_1e + 2;
        uVar7 = 0xffff;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          pcVar2 = pcVar12;
          pcVar12 = pcVar12 + 1;
        } while (*pcVar2 != '\0');
        acStack_59[uVar6 - (~uVar7 - 1)] = local_1e[uVar6 + 2];
        pcVar12 = local_1e + 2;
        uVar7 = 0xffff;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          pcVar2 = pcVar12;
          pcVar12 = pcVar12 + 1;
        } while (*pcVar2 != '\0');
        uVar6 = uVar6 + 1;
      } while (uVar6 < ~uVar7 - 1);
    }
    piVar5 = local_a;
    uVar6 = 0;
    iVar8 = -1;
    pcVar12 = local_8;
    do {
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      pcVar2 = pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (*pcVar2 != '\0');
    if (iVar8 != -2) {
      do {
        acStack_59[uVar6 + 1] = *(char *)((int)piVar5 + uVar6 + 0x1fee);
        uVar7 = 0xffff;
        pcVar12 = local_8;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          pcVar2 = pcVar12;
          pcVar12 = pcVar12 + 1;
        } while (*pcVar2 != '\0');
        uVar6 = uVar6 + 1;
      } while (uVar6 < ~uVar7 - 1);
    }
    piVar5 = local_a;
    uVar6 = 0;
    do {
      local_4f[uVar6] = *(undefined1 *)((int)piVar5 + uVar6 + 0x1ff7);
      uVar6 = uVar6 + 1;
    } while (uVar6 < 8);
    FUN_1000_e2ee(local_62,local_868);
    local_a = (int *)((int)local_a + 0x16);
    local_8 = local_8 + 0x16;
    if ((char *)0x20c9 < local_8) {
      FUN_1000_e156(local_868);
      FUN_1000_9ff0(200);
      return local_10;
    }
  } while( true );
}


