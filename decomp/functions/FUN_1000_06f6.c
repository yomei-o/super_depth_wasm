/* 1000:06f6 */

void FUN_1000_06f6(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  int iStack_10c;
  int aiStack_10a [16];
  undefined2 auStack_ea [8];
  int local_da;
  int local_d8;
  int local_d6;
  int aiStack_d4 [16];
  int local_b4;
  int aiStack_b2 [16];
  int local_92;
  int local_90;
  int aiStack_8e [8];
  int aiStack_7e [8];
  int aiStack_6e [16];
  undefined2 local_4e;
  int aiStack_4c [16];
  int local_2c;
  int local_2a;
  int local_28;
  int local_26;
  int aiStack_24 [16];
  int local_4;
  
  FUN_1000_8098();
  local_92 = 0;
  do {
    iVar2 = local_92;
    aiStack_10a[local_92] = 0x130;
    aiStack_24[iVar2] = 0;
    local_92 = local_92 + 1;
  } while (local_92 < 0x10);
  local_92 = 0;
  do {
    aiStack_6e[local_92] = 0x20;
    local_92 = local_92 + 1;
  } while (local_92 < 0x10);
  local_92 = 0;
  do {
    aiStack_8e[local_92] = -0x10;
    auStack_ea[local_92] = 0;
    local_92 = local_92 + 1;
  } while (local_92 < 8);
  *(undefined2 *)0x1f8a = 0x120;
  *(undefined2 *)0x1fca = 0x10;
  *(undefined2 *)0x1db4 = 0;
  *(undefined2 *)0x1db2 = 0;
  *(undefined2 *)0x1d40 = 0;
  *(undefined2 *)0x193e = 0;
  *(undefined2 *)0x1dc0 = 0;
  local_26 = 0;
  local_4 = 0;
  local_90 = 0;
  *(undefined2 *)0x17f6 = 0;
  *(undefined2 *)0x193c = 0;
  *(undefined2 *)0x184a = 0;
  *(undefined2 *)0x1846 = 0;
  *(undefined2 *)0x1844 = 0;
  local_2a = 0;
  local_2c = 0;
  local_4e = 0;
  FUN_1000_bfa2(0x2b2);
  FUN_1000_c762();
  FUN_1000_82c8();
  out(0xa6,1);
  FUN_1000_b854(4,0,0x4b,0x28,5);
  out(0xa6,0);
  FUN_1000_b854(4,0,0x4b,0x28,5);
  FUN_1000_bfd6(*(undefined2 *)0x1f8a,*(undefined2 *)0x1fca,0);
  local_d6 = 1;
  FUN_1000_bfd6(*(int *)0x1f8a + 0x20,*(undefined2 *)0x1fca,1);
  if (*(int *)0x1818 == *(int *)0x1dae) {
    *(undefined2 *)0x1d48 = 4;
    *(undefined2 *)0x181e = 0;
  }
  local_b4 = (0x28 - *(int *)0x1d48) * 8;
  for (local_92 = 0; local_92 < *(int *)0x1d48; local_92 = local_92 + 1) {
    FUN_1000_bfd6(local_b4,6,*(int *)0x181e * 3 + *(int *)0x1d42);
    local_b4 = local_b4 + 0x10;
  }
  out(0xa4,1);
  for (local_b4 = 0; local_b4 < 2; local_b4 = local_b4 + 1) {
    for (local_92 = 0; local_92 < 0x28; local_92 = local_92 + 1) {
      out(0xa6,(char)local_b4);
      iVar2 = local_92 << 4;
      FUN_1000_c25e(iVar2,0x150,(-(uint)(1 < *(int *)0x1818) & 2) + *(int *)0x1d42 + 0x41);
      FUN_1000_c25e(iVar2,0x140,(-(uint)(1 < *(int *)0x1818) & 2) + *(int *)0x1d42 + 0x40);
      FUN_1000_8292();
    }
  }
  *(undefined2 *)0x1844 = 1;
  FUN_1000_cf6a(3);
  FUN_1000_cf44();
  FUN_1000_d046();
  if (*(int *)0x1818 == *(int *)0x1dae) {
    *(undefined2 *)0x1d4a = 4;
    *(undefined2 *)0x1d48 = 4;
    *(undefined2 *)0x181e = 0;
    *(undefined2 *)0x20c6 = 0;
    FUN_1000_a2ca();
    *(undefined2 *)0x1faa = 10;
    FUN_1000_82d7(0x2b8);
    FUN_1000_a072();
  }
  else {
    FUN_1000_a2ca();
    *(undefined2 *)0x1faa = 10;
    FUN_1000_82d7(0x2b8);
    FUN_1000_a196();
  }
  uVar4 = (int)*(uint *)0x1818 >> 0xf;
  local_28 = ((*(uint *)0x181e & *(uint *)0x20c6) * 2 +
              (((int)((*(uint *)0x1818 ^ uVar4) - uVar4) >> 2 ^ uVar4) - uVar4) + 3) * 5;
  *(undefined2 *)0xdd0 = 0;
  FUN_1000_8184();
  local_da = FUN_1000_e3c8(0x2130);
  if (((local_da != 0) || (*(int *)0x213e != 0)) && (FUN_1000_9e70(), *(int *)0x184c == 0)) {
    FUN_1000_1faa();
    return;
  }
  *(undefined2 *)0x1d6a = 0;
  if (*(int *)0x1faa < 10) {
    iVar2 = *(int *)0x1faa;
    *(int *)0x1faa = *(int *)0x1faa + -1;
    if (iVar2 < 1) {
      local_4e = 1;
      *(int *)0x1842 = *(int *)0x1842 + -1;
      FUN_1000_1faa(iVar2);
      return;
    }
  }
  else {
    if ((*(int *)0x2136 != 0) && (*(int *)0x1d4a + *(int *)0x1f8a < 0x210)) {
      *(undefined2 *)0x1d6a = *(undefined2 *)0x1d4a;
    }
    if ((*(int *)0x2134 != 0) && (0x2f < *(int *)0x1f8a - *(int *)0x1d4a)) {
      *(int *)0x1d6a = -*(int *)0x1d4a;
    }
    if ((((*(int *)0x2138 != 0) && (*(int *)0x212c == 0)) ||
        ((*(int *)0x213a != 0 && (*(int *)0x212c != 0)))) &&
       ((local_90 < *(int *)0x1d48 && (local_d6 != 0)))) {
      for (local_92 = 0; local_92 < *(int *)0x1d48; local_92 = local_92 + 1) {
        if (0x12f < aiStack_10a[local_92]) {
          local_b4 = local_92;
          break;
        }
      }
      iVar3 = local_b4;
      aiStack_10a[local_b4] = *(int *)0x1fca;
      iVar2 = *(int *)0x1f8a;
      aiStack_d4[iVar3] = iVar2 + -0x10;
      aiStack_b2[iVar3] = iVar2 + -0x10;
      aiStack_24[iVar3] = *(int *)0x20c6 * -7;
      local_90 = local_90 + 1;
      local_d6 = 0;
      FUN_1000_cff4(1);
    }
    if ((((*(int *)0x213a != 0) && (*(int *)0x212c == 0)) ||
        ((*(int *)0x2138 != 0 && (*(int *)0x212c != 0)))) &&
       ((local_90 < *(int *)0x1d48 && (local_d6 != 0)))) {
      for (local_92 = 0; local_92 < *(int *)0x1d48; local_92 = local_92 + 1) {
        if (0x12f < aiStack_10a[local_92]) {
          local_b4 = local_92;
          break;
        }
      }
      iVar3 = local_b4;
      aiStack_10a[local_b4] = *(int *)0x1fca;
      iVar2 = *(int *)0x1f8a;
      aiStack_d4[iVar3] = iVar2 + 0x40;
      aiStack_b2[iVar3] = iVar2 + 0x40;
      aiStack_24[iVar3] = *(int *)0x20c6 * 7;
      local_90 = local_90 + 1;
      local_d6 = 0;
      FUN_1000_cff4(1);
    }
    if ((*(int *)0x2138 == 0) && (*(int *)0x213a == 0)) {
      local_d6 = 1;
    }
  }
  local_2a = 0;
  local_92 = 1;
  do {
    if (*(int *)0x17f4 < local_92) {
      FUN_1000_13e0();
      return;
    }
    if (*(int *)(local_92 * 2 + 0x1fca) != 0) {
      local_2a = local_2a + 1;
    }
    iVar2 = local_92 * 2;
    if (*(int *)(iVar2 + 0x1faa) < 10) {
      piVar1 = (int *)(iVar2 + 0x1faa);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        *(undefined2 *)(iVar2 + 0x1fca) = 0;
        *(undefined2 *)(iVar2 + 0x1d8a) = 0;
        *(undefined2 *)(iVar2 + 0x1faa) = 10;
      }
    }
    else {
      iVar2 = *(int *)(local_92 * 2 + 0x17f6);
      if (iVar2 == 1) {
        iVar2 = FUN_1000_efc8();
        if (((iVar2 % 0xf == 0) && (iVar2 = local_92 * 2, *(int *)(iVar2 + 0x1fca) == 0)) &&
           (local_2c < local_28)) {
          iVar3 = FUN_1000_efc8();
          *(int *)(iVar2 + 0x1fca) = (iVar3 % 7 + 2) * 0x20;
          iVar3 = FUN_1000_efc8();
          iVar3 = (iVar3 % 2) * 0x4c0 + -0x140;
          *(int *)(iVar2 + 0x1f8a) = iVar3;
          if (iVar3 == 0x140) {
            iVar2 = 0;
          }
          else if (-*(int *)(iVar2 + 0x1f8a) == -0x140 || -*(int *)(iVar2 + 0x1f8a) + 0x140 < 0) {
            iVar2 = -1;
          }
          else {
            iVar2 = 1;
          }
          iVar3 = FUN_1000_efc8();
          *(int *)(local_92 * 2 + 0x1d6a) = (iVar3 % 4 + 2) * iVar2;
          *(undefined2 *)(local_92 * 2 + 0x1d8a) = 0;
        }
        if (local_28 <= local_2c) {
          iVar2 = *(int *)(local_92 * 2 + 0x1d6a);
          if (iVar2 == 0) {
            iVar2 = 0;
          }
          else if (iVar2 < 1) {
            iVar2 = -1;
          }
          else {
            iVar2 = 1;
          }
          *(int *)(local_92 * 2 + 0x1d6a) = iVar2 << 3;
        }
        iVar2 = *(int *)(local_92 * 2 + 0x1f8a) + *(int *)(local_92 * 2 + 0x1d6a);
        if ((iVar2 < -0x13f) || (0x37f < iVar2)) {
          *(undefined2 *)(local_92 * 2 + 0x1fca) = 0;
        }
        if (*(int *)(local_92 * 2 + 0x1fca) != 0) {
          iVar2 = FUN_1000_efc8();
          iVar2 = iVar2 % (*(int *)0x181e * -0x28 + 100);
          if (((iVar2 == 0) && (local_4 < 0x10)) &&
             ((0 < *(int *)(local_92 * 2 + 0x1f8a) && (*(int *)(local_92 * 2 + 0x1f8a) < 0x240)))) {
            local_b4 = iVar2;
            do {
              if (aiStack_6e[local_b4] < 0x21) {
                local_d8 = local_b4;
              }
              local_b4 = local_b4 + 1;
            } while (local_b4 < 0x10);
            aiStack_6e[local_d8] = *(int *)(local_92 * 2 + 0x1fca) + 0xc;
            iVar2 = *(int *)(local_92 * 2 + 0x1f8a) + 0x18;
LAB_1000_0d5a:
            aiStack_4c[local_d8] = iVar2;
            local_4 = local_4 + 1;
          }
        }
      }
      else if (iVar2 == 2) {
        iVar2 = FUN_1000_efc8();
        if (((iVar2 % 0x28 == 0) && (iVar2 = local_92 * 2, *(int *)(iVar2 + 0x1fca) == 0)) &&
           (local_2c < local_28)) {
          iVar3 = FUN_1000_efc8();
          *(int *)(iVar2 + 0x1fca) = (iVar3 % 2 + 7) * 0x20;
          iVar3 = FUN_1000_efc8();
          iVar3 = (iVar3 % 2) * 0x4c0 + -0x140;
          *(int *)(iVar2 + 0x1f8a) = iVar3;
          if (iVar3 == 0x140) {
            iVar2 = 0;
          }
          else if (-*(int *)(iVar2 + 0x1f8a) == -0x140 || -*(int *)(iVar2 + 0x1f8a) + 0x140 < 0) {
            iVar2 = -1;
          }
          else {
            iVar2 = 1;
          }
          iVar3 = FUN_1000_efc8();
          *(int *)(local_92 * 2 + 0x1d6a) = (iVar3 % 3 + 7) * iVar2;
          *(undefined2 *)(local_92 * 2 + 0x1d8a) = 0;
        }
        iVar2 = *(int *)(local_92 * 2 + 0x1f8a) + *(int *)(local_92 * 2 + 0x1d6a);
        if ((iVar2 < -0x13f) || (0x37f < iVar2)) {
          *(undefined2 *)(local_92 * 2 + 0x1fca) = 0;
        }
        if (*(int *)(local_92 * 2 + 0x1fca) != 0) {
          iVar2 = FUN_1000_efc8();
          iVar2 = iVar2 % (((*(int *)0x181e * -2 + 5) - *(int *)0x20c6) * 10);
          if (((iVar2 == 0) && (local_26 < 8)) &&
             ((0 < *(int *)(local_92 * 2 + 0x1f8a) && (*(int *)(local_92 * 2 + 0x1f8a) < 0x241)))) {
            local_b4 = iVar2;
            do {
              if (aiStack_8e[local_b4] < -0xf) {
                local_d8 = local_b4;
              }
              local_b4 = local_b4 + 1;
            } while (local_b4 < 8);
            aiStack_8e[local_d8] = *(int *)(local_92 * 2 + 0x1fca) + 0xc;
            aiStack_7e[local_d8] = *(int *)(local_92 * 2 + 0x1f8a) + 0x18;
            auStack_ea[local_d8] = 0;
            local_26 = local_26 + 1;
            FUN_1000_cff4(2);
          }
        }
      }
      else if (iVar2 == 3) {
        iVar2 = FUN_1000_efc8();
        if (((iVar2 % (((3 - *(int *)0x181e) * 2 - *(int *)0x20c6) * 10) == 0) &&
            (iVar2 = local_92 * 2, *(int *)(iVar2 + 0x1fca) == 0)) && (local_2c < local_28)) {
          iVar3 = FUN_1000_efc8();
          *(int *)(iVar2 + 0x1fca) = (iVar3 % 2 + 2) * 0x20;
          iVar3 = FUN_1000_efc8();
          iVar3 = (iVar3 % 2) * 0x4e0 + -0x140;
          *(int *)(iVar2 + 0x1f8a) = iVar3;
          if (iVar3 == 0x140) {
            iVar2 = 0;
          }
          else if (-*(int *)(iVar2 + 0x1f8a) == -0x140 || -*(int *)(iVar2 + 0x1f8a) + 0x140 < 0) {
            iVar2 = -1;
          }
          else {
            iVar2 = 1;
          }
          iVar3 = FUN_1000_efc8();
          *(int *)(local_92 * 2 + 0x1d6a) = (iVar3 % 4 + 0x10) * iVar2;
          *(undefined2 *)(local_92 * 2 + 0x1d8a) = 0;
        }
        if (local_28 <= local_2c) {
          iVar2 = *(int *)(local_92 * 2 + 0x1d6a);
          if (iVar2 == 0) {
            iVar2 = 0;
          }
          else if (iVar2 < 1) {
            iVar2 = -1;
          }
          else {
            iVar2 = 1;
          }
          *(int *)(local_92 * 2 + 0x1d6a) = iVar2 << 3;
        }
        iVar2 = *(int *)(local_92 * 2 + 0x1f8a) + *(int *)(local_92 * 2 + 0x1d6a);
        if ((iVar2 < -0x13f) || (0x37f < iVar2)) {
          *(undefined2 *)(local_92 * 2 + 0x1fca) = 0;
        }
        if (*(int *)(local_92 * 2 + 0x1fca) != 0) {
          iVar2 = FUN_1000_efc8();
          iVar2 = iVar2 % (((4 - *(int *)0x20c6) - *(int *)0x181e) * 5);
          if (((iVar2 == 0) && (local_4 < 0x10)) &&
             ((0 < *(int *)(local_92 * 2 + 0x1f8a) && (*(int *)(local_92 * 2 + 0x1f8a) < 0x240)))) {
            local_b4 = iVar2;
            do {
              if (aiStack_6e[local_b4] < 0x21) {
                local_d8 = local_b4;
              }
              local_b4 = local_b4 + 1;
            } while (local_b4 < 0x10);
            aiStack_6e[local_d8] = *(int *)(local_92 * 2 + 0x1fca) + 0x10;
            iVar2 = *(int *)(local_92 * 2 + 0x1f8a) + 0x10;
            goto LAB_1000_0d5a;
          }
        }
      }
      else if (iVar2 == 4) {
        iVar2 = FUN_1000_efc8();
        if (((iVar2 % 0x1e == 0) && (iVar2 = local_92 * 2, *(int *)(iVar2 + 0x1fca) == 0)) &&
           (local_2c < local_28)) {
          *(undefined2 *)(iVar2 + 0x1fca) = 0x120;
          iVar3 = FUN_1000_efc8();
          iVar3 = (iVar3 % 2) * 0x4c0 + -0x140;
          *(int *)(iVar2 + 0x1f8a) = iVar3;
          if (iVar3 == 0x140) {
            iVar2 = 0;
          }
          else if (-*(int *)(iVar2 + 0x1f8a) == -0x140 || -*(int *)(iVar2 + 0x1f8a) + 0x140 < 0) {
            iVar2 = -1;
          }
          else {
            iVar2 = 1;
          }
          iVar3 = FUN_1000_efc8();
          iVar5 = local_92 * 2;
          *(int *)(iVar5 + 0x1d6a) = (iVar3 % 4 + 5) * iVar2;
          *(undefined2 *)(iVar5 + 0x1d8a) = 0;
          *(undefined2 *)(iVar5 + 0x1822) = 0;
        }
        iVar2 = local_92 * 2;
        if ((*(int *)(iVar2 + 0x1d6a) == 0) && (*(int *)(iVar2 + 0x1822) < 4)) {
          *(int *)(iVar2 + 0x1822) = *(int *)(iVar2 + 0x1822) + 1;
        }
        iVar2 = local_92 * 2;
        if ((*(int *)(iVar2 + 0x1d6a) != 0) && (0 < *(int *)(iVar2 + 0x1822))) {
          *(int *)(iVar2 + 0x1822) = *(int *)(iVar2 + 0x1822) + -1;
        }
        iVar3 = local_92 * 2;
        iVar2 = *(int *)(iVar3 + 0x1f8a) + *(int *)(iVar3 + 0x1d6a);
        if (((0x1f < iVar2) && (iVar2 < 0x221)) &&
           (iVar2 = FUN_1000_efc8(), iVar2 % (((3 - *(int *)0x181e) * 2 - *(int *)0x20c6) * 10) == 0
           )) {
          *(undefined2 *)(iVar3 + 0x1d6a) = 0;
        }
        iVar2 = *(int *)(local_92 * 2 + 0x1f8a) + *(int *)(local_92 * 2 + 0x1d6a);
        if ((iVar2 < -0x13f) || (0x37f < iVar2)) {
          *(undefined2 *)(local_92 * 2 + 0x1fca) = 0;
        }
        if (*(int *)(local_92 * 2 + 0x1fca) != 0) {
          iVar2 = local_92 * 2;
          if (((*(int *)(iVar2 + 0x1822) == 4) && (local_26 < 4)) &&
             ((0 < *(int *)(iVar2 + 0x1f8a) && (*(int *)(iVar2 + 0x1f8a) < 0x241)))) {
            for (iStack_10c = 0; iStack_10c < 4; iStack_10c = iStack_10c + 1) {
              for (local_b4 = 0; local_b4 < 8; local_b4 = local_b4 + 1) {
                if (aiStack_8e[local_b4] < -0xf) {
                  local_d8 = local_b4;
                  break;
                }
              }
              aiStack_8e[local_d8] = *(int *)(local_92 * 2 + 0x1fca) + 8;
              aiStack_7e[local_d8] = iStack_10c * 0x10 + *(int *)(local_92 * 2 + 0x1f8a);
              auStack_ea[local_d8] = 0;
            }
            local_26 = local_26 + 4;
            FUN_1000_cff4(2);
          }
          iVar2 = local_92 * 2;
          if (*(int *)(iVar2 + 0x1822) == 4) {
            if (*(int *)(iVar2 + 0x1f8a) == 0x140) {
              iVar2 = 0;
            }
            else if (-*(int *)(iVar2 + 0x1f8a) == -0x140 || -*(int *)(iVar2 + 0x1f8a) + 0x140 < 0) {
              iVar2 = -1;
            }
            else {
              iVar2 = 1;
            }
            iVar3 = FUN_1000_efc8();
            *(int *)(local_92 * 2 + 0x1d6a) = (iVar3 % 4 + 5) * iVar2;
          }
        }
      }
      else if (iVar2 == 9) {
        FUN_1000_1288();
        return;
      }
    }
    local_92 = local_92 + 1;
  } while( true );
}


