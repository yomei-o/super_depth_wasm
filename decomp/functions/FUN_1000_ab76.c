/* 1000:ab76 */

void __cdecl16near FUN_1000_ab76(int param_1,undefined2 *param_2)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined2 unaff_DS;
  int local_10;
  int local_c;
  int local_a;
  int local_8;
  int local_4;
  
  *param_2 = *(undefined2 *)0xbac;
  param_2[1] = *(undefined2 *)0xbae;
  param_2[2] = *(undefined2 *)0xbb0;
  param_2[3] = *(undefined2 *)0xbb2;
  *(undefined1 *)(param_2 + 4) = *(undefined1 *)0xbb4;
  local_10 = 0;
  local_8 = 0;
  local_c = 0;
  uVar5 = 0x564;
  iVar7 = 0;
  do {
    FUN_1000_beea(iVar7 + 0x13,0xe,0xe1,uVar5);
    iVar7 = iVar7 + 1;
    uVar5 = uVar5 + 0x1b;
  } while (uVar5 < 0x5d0);
  FUN_1000_ba8c(6,0xf,0xf,0);
  *(undefined2 *)0xdd0 = 0;
  do {
    iVar4 = local_8;
    iVar7 = local_c;
    *(byte *)0x1844 = *(byte *)0x1844 ^ 1;
    iVar2 = FUN_1000_bf8e();
    while (iVar2 != 0) {
      FUN_1000_bf98();
      iVar2 = FUN_1000_bf8e();
    }
    local_4 = FUN_1000_e3c8(0x2130);
    iVar2 = local_c;
    if (*(int *)0x2130 != 0) {
      iVar2 = local_c + -1;
    }
    if (*(int *)0x2132 != 0) {
      iVar2 = iVar2 + 1;
    }
    if (iVar2 < 0) {
      iVar2 = 3;
    }
    if (3 < iVar2) {
      iVar2 = 0;
    }
    if (*(int *)0x2136 != 0) {
      local_8 = local_8 + 2;
    }
    if ((iVar2 == 3) && (local_8 == 0x30)) {
      local_8 = 0x32;
    }
    if ((iVar2 == 3) && (local_8 == 0x2c)) {
      local_8 = 0x2e;
    }
    if (((iVar2 == 3) && (0x20 < local_8)) && (local_8 < 0x2a)) {
      local_8 = 0x2a;
    }
    if (*(int *)0x2134 != 0) {
      local_8 = local_8 + -2;
      if ((iVar2 == 3) && (local_8 == 0x30)) {
        local_8 = 0x2e;
      }
      if ((iVar2 == 3) && (local_8 == 0x2c)) {
        local_8 = 0x2a;
      }
      if (((iVar2 == 3) && (0x20 < local_8)) && (local_8 < 0x2a)) {
        local_8 = 0x20;
      }
    }
    if (local_8 < 0) {
      local_8 = 0x32;
    }
    if (0x32 < local_8) {
      local_8 = 0;
    }
    iVar6 = local_10;
    if (((*(int *)0x2138 != 0) || (*(int *)0x213a != 0)) && (local_a != 0)) {
      local_a = 0;
      cVar1 = *(char *)(iVar4 / 2 + local_c * 0x1b + 0x564);
      local_c = iVar2;
      if (cVar1 == '\x1b') {
        if (0 < local_10) {
          iVar6 = local_10 + -2;
        }
      }
      else if (cVar1 == '\x1c') {
        if (local_10 < 0xe) {
LAB_1000_ad06:
          iVar6 = local_10 + 2;
        }
      }
      else if (cVar1 == '\x1d') {
        local_4 = 1;
      }
      else {
        *(char *)(local_10 / 2 + (int)param_2) = cVar1;
        if (local_10 < 0xe) goto LAB_1000_ad06;
        local_c = 3;
        local_8 = 0x32;
      }
      FUN_1000_cff4(5);
      iVar2 = local_c;
    }
    local_c = iVar2;
    if ((*(int *)0x2138 == 0) && (*(int *)0x213a == 0)) {
      local_a = 1;
    }
    if ((local_4 != 0) || (*(int *)0x213e != 0)) {
      FUN_1000_b766((iVar6 + 0x24) * 8,(param_1 + 6) * 0x10,iVar6 * 8 + 0x12f,param_1 * 0x10 + 0x6f,
                    0xd);
      return;
    }
    FUN_1000_bf46(iVar7 + 0x13,iVar4 + 0xe,0xe1,
                  CONCAT11((char)((uint)(iVar7 * 0x1b) >> 8),
                           *(undefined1 *)(iVar4 / 2 + iVar7 * 0x1b + 0x564)));
    FUN_1000_b766((iVar4 + 0xe) * 8,(iVar7 + 0x13) * 0x10,iVar4 * 8 + 0x7f,iVar7 * 0x10 + 0x13f,0xd)
    ;
    FUN_1000_bf46(local_c + 0x13,local_8 + 0xe,5,
                  CONCAT11((char)((uint)(local_8 / 2) >> 8),
                           *(undefined1 *)(local_c * 0x1b + local_8 / 2 + 0x564)));
    FUN_1000_b766((local_8 + 0xe) * 8,(local_c + 0x13) * 0x10,local_8 * 8 + 0x7f,
                  local_c * 0x10 + 0x13f,6);
    iVar4 = param_1 + 6;
    FUN_1000_bf46(iVar4,local_10 + 0x24,0xc1,
                  CONCAT11((char)((uint)(local_10 / 2) >> 8),
                           *(undefined1 *)(local_10 / 2 + (int)param_2)));
    iVar7 = param_1 * 0x10 + 0x6f;
    FUN_1000_b766((local_10 + 0x24) * 8,iVar4 * 0x10,local_10 * 8 + 0x12f,iVar7,0xd);
    if (*(int *)0x1844 == 0) {
      FUN_1000_bf46(iVar4,iVar6 + 0x24,0xc1,
                    CONCAT11((char)((uint)(iVar6 / 2) >> 8),
                             *(undefined1 *)(iVar6 / 2 + (int)param_2)));
      uVar3 = 0xd;
    }
    else {
      FUN_1000_bf46(iVar4,iVar6 + 0x24,5,
                    CONCAT11((char)((uint)(iVar6 / 2) >> 8),
                             *(undefined1 *)(iVar6 / 2 + (int)param_2)));
      uVar3 = 6;
    }
    FUN_1000_b766((iVar6 + 0x24) * 8,iVar4 * 0x10,iVar6 * 8 + 0x12f,iVar7,uVar3);
    do {
      uVar5 = FUN_1000_bb38();
    } while (uVar5 < *(int *)0x1820 + 1U);
    *(undefined2 *)0xdd0 = 0;
    local_10 = iVar6;
  } while( true );
}


