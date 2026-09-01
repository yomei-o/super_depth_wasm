/* 1000:d04e */

undefined2 __cdecl16near FUN_1000_d04e(undefined2 param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  int local_81a;
  undefined4 local_818;
  undefined2 local_814 [1027];
  undefined2 local_e;
  int aiStack_c [3];
  int local_6;
  uint local_4;
  
  iVar4 = FUN_1000_e1ee(param_1,local_814);
  if (iVar4 == -1) {
    return 1;
  }
  do {
    local_6 = 0;
    do {
      aiStack_c[local_6] = 0;
      local_6 = local_6 + 1;
    } while (local_6 < 3);
    local_6 = 0;
    do {
      cVar3 = FUN_1000_e228(local_814);
      iVar4 = local_6;
      local_4 = (uint)cVar3;
      if ((local_4 == 0xffff) || (local_4 == 0x2a)) break;
      if (local_4 == 0x3b) {
LAB_1000_d0d8:
        do {
          cVar3 = FUN_1000_e228(local_814);
          local_4 = (uint)cVar3;
          if (local_4 == 0xffff) break;
        } while (local_4 != 0xd);
      }
      else if (local_4 < 0x3c) {
        if (cVar3 == '#') goto LAB_1000_d0d8;
        if (cVar3 < '$') {
          if (cVar3 == '\r') {
            local_6 = 0;
          }
          else {
            if (cVar3 != '\"') goto LAB_1000_d166;
            while( true ) {
              cVar3 = FUN_1000_e228(local_814);
              local_4 = (uint)cVar3;
              if (((local_4 == 0xffff) || (local_4 == 0xd)) || (local_4 == 0x22)) break;
              if (param_3 == 1) {
                FUN_1000_ee94(local_4);
              }
            }
            if (param_3 == 1) {
              FUN_1000_ee94(0xd);
              FUN_1000_ee94(10);
            }
          }
        }
        else {
          if ((cVar3 != ',') && (cVar3 != ':')) goto LAB_1000_d166;
          local_6 = local_6 + 1;
          if (local_6 == 3) {
            local_6 = 2;
          }
        }
      }
      else {
LAB_1000_d166:
        if ((local_4 != 0x20) && (local_4 != 9)) {
          if (aiStack_c[local_6] + *(int *)0x1862 < *(int *)0x1860) {
            puVar1 = (undefined4 *)(local_6 * 0x16 + 0x17b6);
            uVar2 = *puVar1;
            *(char *)((int)uVar2 + aiStack_c[local_6] + *(int *)0x1862) = cVar3;
            aiStack_c[local_6] = aiStack_c[local_6] + 1;
            uVar2 = *puVar1;
            *(undefined1 *)((int)uVar2 + aiStack_c[iVar4] + *(int *)0x1862) = 0;
          }
        }
      }
    } while (local_4 != 0xffff);
    local_81a = 0;
    for (local_6 = 0; local_6 < 3; local_6 = local_6 + 1) {
      if (local_81a < aiStack_c[local_6]) {
        local_81a = aiStack_c[local_6];
      }
      local_818 = (char *)CONCAT22(*(undefined2 *)(local_6 * 0x16 + 0x17b8),
                                   (char *)(*(int *)(local_6 * 0x16 + 0x17b6) + *(int *)0x1862));
      while (*local_818 != '\0') {
        if (('`' < *local_818) && (*local_818 < '{')) {
          *local_818 = *local_818 + -0x20;
        }
        local_818 = (char *)CONCAT22(local_818._2_2_,(char *)local_818 + 1);
      }
    }
    *(int *)0x1864 = *(int *)0x1864 + 1;
    if (0x10 < *(int *)0x1864) {
      local_e = 4;
      goto LAB_1000_d2e5;
    }
    if (local_81a + *(int *)0x1862 == *(int *)0x1860) {
      local_e = 3;
      goto LAB_1000_d2e5;
    }
    *(undefined2 *)(*(int *)0x1864 * 2 + 0x1866) = *(undefined2 *)0x1862;
    *(int *)0x1862 = *(int *)0x1862 + local_81a + 1;
    local_6 = 0;
    do {
      iVar4 = local_6 * 0x16;
      FUN_1000_d4b4(iVar4 + 0x17b2);
      *(uint *)(iVar4 + 0x17c4) = (uint)((1 << ((byte)local_6 & 0x1f) & *(uint *)0x1888) != 0);
      local_6 = local_6 + 1;
    } while (local_6 < 3);
    iVar4 = FUN_1000_d4f2(0x17b2);
    if (iVar4 == 0) {
      local_e = 2;
      goto LAB_1000_d2e5;
    }
    FUN_1000_d4f2(0x17c8);
    FUN_1000_d4f2(0x17de);
    if ((0x1d < param_2) && (param_2 < 0xf1)) {
      *(int *)0x1852 = param_2;
      *(int *)(*(int *)0x1864 * 2 + 0x1888) = param_2;
    }
  } while (local_4 != 0xffff);
  local_e = 0;
LAB_1000_d2e5:
  FUN_1000_e8d2(local_814[0]);
  return local_e;
}


