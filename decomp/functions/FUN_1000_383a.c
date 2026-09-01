/* 1000:383a */

/* WARNING: Removing unreachable block (ram,0x000156a8) */

undefined2 FUN_1000_383a(void)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined2 uVar6;
  uint uVar7;
  uint uVar8;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  int local_34a [70];
  int aiStack_2be [16];
  int local_29e;
  int aiStack_29c [16];
  int local_27c;
  int local_27a;
  int aiStack_278 [16];
  int local_258;
  int local_256;
  int local_254;
  int local_252 [70];
  int aiStack_1c6 [16];
  int aiStack_1a6 [16];
  int local_186;
  int aiStack_184 [16];
  int local_164;
  int local_162;
  int local_160;
  int local_15e;
  int aiStack_15c [16];
  int local_13c [70];
  int aiStack_b0 [16];
  int local_90;
  int local_8e [70];
  
  local_256 = 0;
  do {
    iVar3 = FUN_1000_efc8();
    iVar5 = local_256;
    local_8e[local_256] = iVar3 % 0x280;
    iVar3 = FUN_1000_efc8();
    local_13c[iVar5] = iVar3 % 0x160;
    iVar3 = FUN_1000_efc8();
    iVar4 = FUN_1000_efc8();
    local_252[iVar5] = iVar3 % 4 + (iVar4 % 2) * 10 + 2;
    iVar3 = FUN_1000_efc8();
    local_34a[iVar5] = iVar3 % 3 + 1;
    local_256 = local_256 + 1;
  } while (local_256 < 0x46);
  if (*(int *)0x1818 != *(int *)0x1dae) {
    FUN_1000_91fe(local_8e,local_13c,local_34a,local_252);
  }
  FUN_1000_ba8c(0,0,0,0);
  FUN_1000_8098();
  local_256 = 0;
  do {
    iVar5 = local_256;
    aiStack_1a6[local_256] = -0x20;
    aiStack_278[local_256] = 0x10;
    aiStack_1c6[iVar5] = 0;
    local_256 = local_256 + 1;
  } while (local_256 < 0x10);
  local_256 = 0;
  do {
    iVar5 = local_256;
    aiStack_2be[local_256] = 0x160;
    aiStack_b0[iVar5] = 0;
    aiStack_15c[iVar5] = 0;
    local_256 = local_256 + 1;
  } while (local_256 < 0x10);
  local_186 = 1;
  *(undefined2 *)0x1f8a = 0x120;
  *(undefined2 *)0x1fca = 0x120;
  *(undefined2 *)0x1db4 = 0;
  *(undefined2 *)0x1db2 = 0;
  *(undefined2 *)0x1d40 = 0;
  *(undefined2 *)0x193e = 0;
  *(undefined2 *)0x1dc0 = 0;
  local_254 = 0;
  local_90 = 0;
  *(undefined2 *)0x1d6a = 0;
  *(undefined2 *)0x1d8a = 0;
  *(undefined2 *)0x184a = 0;
  *(undefined2 *)0x193c = 0;
  local_164 = 0;
  local_162 = 0;
  local_160 = 0;
  out(0xa6,(byte)*(undefined2 *)0x1844 ^ 1);
  FUN_1000_b4ee();
  FUN_1000_8292();
  local_256 = 0;
  do {
    FUN_1000_b50e(local_8e[local_256],local_13c[local_256],local_252[local_256]);
    local_256 = local_256 + 1;
  } while (local_256 < 0x46);
  do {
    bVar2 = in(0x60);
  } while ((bVar2 & 0x20) != 0);
  do {
    bVar2 = in(0x60);
  } while ((bVar2 & 0x20) == 0);
  out(0xa6,(byte)*(undefined2 *)0x1844);
  out(0xa4,(byte)*(undefined2 *)0x1844 ^ 1);
  FUN_1000_b4ee();
  FUN_1000_8292();
  local_256 = 0;
  do {
    FUN_1000_b50e(local_8e[local_256],local_13c[local_256],local_252[local_256]);
    local_256 = local_256 + 1;
  } while (local_256 < 0x46);
  FUN_1000_bfd6(*(undefined2 *)0x1f8a,*(undefined2 *)0x1fca,0x28);
  FUN_1000_bfd6(*(int *)0x1f8a + 0x20,*(undefined2 *)0x1fca,0x29);
  out(0xa4,(byte)*(undefined2 *)0x1844);
  out(0xa6,(byte)*(undefined2 *)0x1844 ^ 1);
  FUN_1000_cf6a(5);
  FUN_1000_cf44();
  FUN_1000_d046();
  if (*(int *)0x1818 == *(int *)0x1dae) {
    *(undefined2 *)0x1d4a = 4;
    *(undefined2 *)0x1d48 = 4;
    *(undefined2 *)0x181e = 0;
    *(undefined2 *)0x20c6 = 0;
    FUN_1000_a2ca();
    *(undefined2 *)0x1faa = 10;
    *(undefined1 *)0x2ba = 0;
    FUN_1000_82d7(0x2b8);
    *(undefined1 *)0x2ba = 7;
    FUN_1000_a072();
  }
  else {
    FUN_1000_a196();
  }
  if (*(int *)0x1d4a < 6) {
    *(undefined2 *)0x1d4a = 6;
  }
  uVar7 = (int)*(uint *)0x1818 >> 0xf;
  local_15e = ((*(uint *)0x20c6 & *(uint *)0x181e) +
               (((int)((*(uint *)0x1818 ^ uVar7) - uVar7) >> 2 ^ uVar7) - uVar7) + 3) * 8;
  *(undefined2 *)0xdd0 = 0;
  do {
    FUN_1000_8184();
    local_27c = FUN_1000_e3c8(0x2130);
    if (((local_27c != 0) || (*(int *)0x213e != 0)) && (FUN_1000_9e70(), *(int *)0x184c == 0))
    goto LAB_1000_57e4;
    *(undefined2 *)0x1d8a = 0;
    if (*(int *)0x1faa < 10) {
      iVar5 = *(int *)0x1faa;
      *(int *)0x1faa = *(int *)0x1faa + -1;
      if (iVar5 < 1) {
        local_164 = 1;
        *(int *)0x1842 = *(int *)0x1842 + -1;
LAB_1000_57e4:
        FUN_1000_cf2c();
        FUN_1000_a23c();
        if ((local_164 == 1) && (*(int *)0x1842 == 0)) {
          FUN_1000_a29e();
        }
        uVar6 = *(undefined2 *)0x1844;
        out(0xa6,(char)uVar6);
        if ((local_164 == 1) || (*(int *)0x1842 == 0)) {
          uVar6 = FUN_1000_84ae();
        }
        return uVar6;
      }
    }
    else {
      if ((*(int *)0x2132 != 0) && (*(int *)0x1d4a + *(int *)0x1fca < 0x140)) {
        *(undefined2 *)0x1d8a = *(undefined2 *)0x1d4a;
      }
      if ((*(int *)0x2130 != 0) && (-1 < *(int *)0x1fca - *(int *)0x1d4a)) {
        *(int *)0x1d8a = -*(int *)0x1d4a;
      }
      if (*(int *)0x2136 != 0) {
        *(int *)0x1d6a = *(int *)0x1d6a + 2;
      }
      if (*(int *)0x2134 != 0) {
        *(int *)0x1d6a = *(int *)0x1d6a + -2;
      }
      uVar7 = (int)*(uint *)0x1d6a >> 0xf;
      if (8 < (int)((*(uint *)0x1d6a ^ uVar7) - uVar7)) {
        if (*(int *)0x1d6a == 0) {
          iVar5 = 0;
        }
        else if (*(int *)0x1d6a < 1) {
          iVar5 = -1;
        }
        else {
          iVar5 = 1;
        }
        *(int *)0x1d6a = iVar5 << 3;
      }
      if ((((*(int *)0x2138 != 0) && (*(int *)0x212c == 0)) ||
          ((*(int *)0x213a != 0 && (*(int *)0x212c != 0)))) &&
         ((iVar5 = *(int *)0x20c6 * 2 - *(int *)0x1d48, -local_90 != iVar5 && local_90 <= -iVar5 &&
          (local_186 != 0)))) {
        for (local_256 = 0; local_256 < *(int *)0x1d48; local_256 = local_256 + 1) {
          if (aiStack_1a6[local_256] < -0xf) {
            local_258 = local_256;
            break;
          }
        }
        iVar5 = local_258;
        aiStack_1a6[local_258] = *(int *)0x1fca + 0xc;
        aiStack_184[local_258] = *(int *)0x1f8a + 5;
        aiStack_278[local_258] = (-2 - *(int *)0x181e) * 6;
        local_90 = local_90 + 1;
        aiStack_1c6[iVar5] = 0;
        local_186 = 0;
        if (*(int *)0x20c6 == 1) {
          for (local_256 = 0; local_256 < *(int *)0x1d48; local_256 = local_256 + 1) {
            if (aiStack_1a6[local_256] < -0xf) {
              local_258 = local_256;
              break;
            }
          }
          aiStack_1a6[local_258] = *(int *)0x1fca + 0xc;
          aiStack_184[local_258] = *(int *)0x1f8a + 5;
          aiStack_278[local_258] = (-2 - *(int *)0x181e) * 6;
          aiStack_1c6[local_256] = -1;
          for (local_256 = 0; local_256 < *(int *)0x1d48; local_256 = local_256 + 1) {
            if (aiStack_1a6[local_256] < -0xf) {
              local_258 = local_256;
              break;
            }
          }
          aiStack_1a6[local_258] = *(int *)0x1fca + 0xc;
          aiStack_184[local_258] = *(int *)0x1f8a + 5;
          aiStack_278[local_258] = (-2 - *(int *)0x181e) * 6;
          aiStack_1c6[local_256] = 1;
          local_90 = local_90 + 2;
        }
        FUN_1000_cff4(5);
      }
      if ((((*(int *)0x213a != 0) && (*(int *)0x212c == 0)) ||
          ((*(int *)0x2138 != 0 && (*(int *)0x212c != 0)))) &&
         ((iVar5 = *(int *)0x20c6 * 2 - *(int *)0x1d48, -local_90 != iVar5 && local_90 <= -iVar5 &&
          (local_186 != 0)))) {
        for (local_256 = 0; iVar5 = local_258, local_256 < *(int *)0x1d48; local_256 = local_256 + 1
            ) {
          if (aiStack_1a6[local_256] < -0xf) {
            local_258 = local_256;
          }
        }
        aiStack_1a6[local_258] = *(int *)0x1fca + 0xb;
        aiStack_184[local_258] = *(int *)0x1f8a + 0x2c;
        aiStack_278[local_258] = (*(int *)0x181e + 2) * 6;
        local_90 = local_90 + 1;
        aiStack_1c6[iVar5] = 0;
        local_186 = 0;
        if (*(int *)0x20c6 == 1) {
          for (local_256 = 0; local_256 < *(int *)0x1d48; local_256 = local_256 + 1) {
            if (aiStack_1a6[local_256] < -0xf) {
              local_258 = local_256;
              break;
            }
          }
          aiStack_1a6[local_258] = *(int *)0x1fca + 0xb;
          aiStack_184[local_258] = *(int *)0x1f8a + 0x2c;
          aiStack_278[local_258] = (*(int *)0x181e + 2) * 6;
          aiStack_1c6[local_256] = -1;
          for (local_256 = 0; local_256 < *(int *)0x1d48; local_256 = local_256 + 1) {
            if (aiStack_1a6[local_256] < -0xf) {
              local_258 = local_256;
              break;
            }
          }
          aiStack_1a6[local_258] = *(int *)0x1fca + 0xb;
          aiStack_184[local_258] = *(int *)0x1f8a + 0x2c;
          aiStack_278[local_258] = (*(int *)0x181e + 2) * 6;
          aiStack_1c6[local_256] = 1;
          local_90 = local_90 + 2;
        }
        FUN_1000_cff4(5);
      }
      if ((*(int *)0x2138 == 0) && (*(int *)0x213a == 0)) {
        local_186 = 1;
      }
    }
    local_160 = 0;
    for (local_256 = 1; local_256 <= *(int *)0x17f4; local_256 = local_256 + 1) {
      if ((*(int *)(local_256 * 2 + 0x1fca) < -0x1f) || (0x15f < *(int *)(local_256 * 2 + 0x1fca)))
      {
        *(undefined2 *)(local_256 * 2 + 0x1d8a) = 0;
      }
      else {
        local_160 = local_160 + 1;
      }
      iVar5 = local_256 * 2;
      if (*(int *)(iVar5 + 0x1faa) < 10) {
        piVar1 = (int *)(iVar5 + 0x1faa);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          *(undefined2 *)(iVar5 + 0x1fca) = 0xffe0;
          *(undefined2 *)(iVar5 + 0x1faa) = 10;
        }
      }
      else {
        iVar5 = *(int *)(local_256 * 2 + 0x17f6);
        if (iVar5 == 1) {
          iVar5 = FUN_1000_efc8();
          if ((iVar5 % 0xf == 0) &&
             (((*(int *)(local_256 * 2 + 0x1fca) < -0x1f ||
               (0x15f < *(int *)(local_256 * 2 + 0x1fca))) && (local_162 < local_15e)))) {
            iVar5 = FUN_1000_efc8();
            iVar3 = local_256 * 2;
            *(int *)(iVar3 + 0x1fca) = (iVar5 % 2) * 0x17e + -0x1f;
            iVar5 = FUN_1000_efc8();
            if (iVar5 % 2 == 0) {
              iVar5 = FUN_1000_efc8();
              *(int *)(iVar3 + 0x1f8a) = iVar5 % 0x160 + -0x140;
            }
            else {
              iVar5 = FUN_1000_efc8();
              *(int *)(local_256 * 2 + 0x1f8a) = iVar5 % 0x140 + 0x260;
            }
            if (*(int *)(local_256 * 2 + 0x1f8a) == 0x140) {
              iVar5 = 0;
            }
            else {
              iVar5 = -*(int *)(local_256 * 2 + 0x1f8a);
              if (iVar5 == -0x140 || iVar5 + 0x140 < 0) {
                iVar5 = -1;
              }
              else {
                iVar5 = 1;
              }
            }
            iVar3 = FUN_1000_efc8();
            iVar4 = local_256 * 2;
            *(int *)(iVar4 + 0x1d6a) = (iVar3 % 3 + 1) * iVar5;
            if (*(int *)(iVar4 + 0x1fca) == 100) {
              iVar5 = 0;
            }
            else if (-*(int *)(iVar4 + 0x1fca) == -100 || -*(int *)(iVar4 + 0x1fca) + 100 < 0) {
              iVar5 = -1;
            }
            else {
              iVar5 = 1;
            }
            iVar3 = FUN_1000_efc8();
            iVar4 = local_256 * 2;
            *(int *)(iVar4 + 0x1d8a) = (iVar3 % 3 + 1) * iVar5;
            iVar5 = FUN_1000_efc8();
            *(int *)(iVar4 + 0x1d4a) = iVar5 % 3 + 2;
            iVar5 = FUN_1000_efc8();
            *(int *)(iVar4 + 0x1822) = iVar5 % 0x32 + (0x32 - *(int *)(iVar4 + 0x1d8a)) * 3;
          }
          iVar5 = (*(int *)(local_256 * 2 + 0x1f8a) + *(int *)(local_256 * 2 + 0x1d6a)) -
                  *(int *)0x1d6a;
          if ((iVar5 < -0x13f) || (0x39f < iVar5)) {
            *(undefined2 *)(local_256 * 2 + 0x1fca) = 0xffe0;
            *(undefined2 *)(local_256 * 2 + 0x1d8a) = 0;
          }
          if ((-0x20 < *(int *)(local_256 * 2 + 0x1fca)) &&
             (*(int *)(local_256 * 2 + 0x1fca) < 0x160)) {
            iVar5 = *(int *)(local_256 * 2 + 0x1f8a);
            uVar7 = iVar5 - *(int *)0x1f8a >> 0xf;
            if ((0x32 < (int)((iVar5 - *(int *)0x1f8a ^ uVar7) - uVar7)) &&
               (iVar5 != *(int *)0x1f8a)) {
              if (-(iVar5 - *(int *)0x1f8a) < 1) {
                iVar5 = -1;
              }
              else {
                iVar5 = 1;
              }
              piVar1 = (int *)(local_256 * 2 + 0x1d6a);
              *piVar1 = *piVar1 + iVar5;
            }
            iVar5 = *(int *)0x1fca;
            if (*(int *)(local_256 * 2 + 0x1fca) == iVar5) {
              iVar5 = 0;
            }
            else {
              iVar3 = *(int *)(local_256 * 2 + 0x1fca);
              if (iVar5 == iVar3 || iVar5 - iVar3 < 0) {
                iVar5 = -1;
              }
              else {
                iVar5 = 1;
              }
            }
            iVar3 = local_256 * 2;
            *(int *)(iVar3 + 0x1d8a) = *(int *)(iVar3 + 0x1d8a) + *(int *)0x1844 * iVar5;
            uVar7 = *(uint *)(iVar3 + 0x1d6a);
            if (*(int *)(iVar3 + 0x1d4a) + 2 <
                (int)((uVar7 ^ (int)uVar7 >> 0xf) - ((int)uVar7 >> 0xf))) {
              if (uVar7 == 0) {
                iVar5 = 0;
              }
              else if ((int)uVar7 < 1) {
                iVar5 = -1;
              }
              else {
                iVar5 = 1;
              }
              *(int *)(local_256 * 2 + 0x1d6a) = (*(int *)(local_256 * 2 + 0x1d4a) + 2) * iVar5;
            }
            uVar7 = *(uint *)(local_256 * 2 + 0x1d8a);
            if (*(int *)(local_256 * 2 + 0x1d4a) <
                (int)((uVar7 ^ (int)uVar7 >> 0xf) - ((int)uVar7 >> 0xf))) {
              if (uVar7 == 0) {
                iVar5 = 0;
              }
              else if ((int)uVar7 < 1) {
                iVar5 = -1;
              }
              else {
                iVar5 = 1;
              }
              *(int *)(local_256 * 2 + 0x1d8a) = *(int *)(local_256 * 2 + 0x1d4a) * iVar5;
            }
            if (local_15e <= local_162) {
              iVar5 = *(int *)(local_256 * 2 + 0x1d8a);
              if (iVar5 == 0) {
                iVar5 = 0;
              }
              else if (iVar5 < 1) {
                iVar5 = -1;
              }
              else {
                iVar5 = 1;
              }
              iVar5 = iVar5 << 3;
              iVar3 = local_256 << 1;
              goto LAB_1000_41c0;
            }
          }
        }
        else if (iVar5 == 2) {
          iVar5 = FUN_1000_efc8();
          if (((iVar5 % 0xf == 0) && (iVar5 = local_256 * 2, *(int *)(iVar5 + 0x1fca) < -0x1f)) &&
             (local_162 < local_15e)) {
            iVar3 = FUN_1000_efc8();
            *(int *)(iVar5 + 0x1fca) = iVar3 % 0xb << 5;
            iVar3 = FUN_1000_efc8();
            iVar3 = (iVar3 % 2) * 0x4c0 + -0x140;
            *(int *)(iVar5 + 0x1f8a) = iVar3;
            if (iVar3 == 0x140) {
              iVar5 = 0;
            }
            else if (-*(int *)(iVar5 + 0x1f8a) == -0x140 || -*(int *)(iVar5 + 0x1f8a) + 0x140 < 0) {
              iVar5 = -1;
            }
            else {
              iVar5 = 1;
            }
            iVar3 = FUN_1000_efc8();
            *(int *)(local_256 * 2 + 0x1d6a) = (iVar3 % 5 + 8) * iVar5;
            *(undefined2 *)(local_256 * 2 + 0x1d8a) = 0;
          }
          iVar5 = (*(int *)(local_256 * 2 + 0x1f8a) + *(int *)(local_256 * 2 + 0x1d6a)) -
                  *(int *)0x1d6a;
          if ((iVar5 < -0x13f) || (0x37f < iVar5)) {
            *(undefined2 *)(local_256 * 2 + 0x1fca) = 0xffe0;
            *(undefined2 *)(local_256 * 2 + 0x1d8a) = 0;
          }
          if (((((-0x20 < *(int *)(local_256 * 2 + 0x1fca)) &&
                (iVar5 = FUN_1000_efc8(),
                iVar5 % (((3 - *(int *)0x20c6) - *(int *)0x181e) * 10) == 0)) && (local_254 < 0x10))
              && ((iVar5 = local_256 * 2, 0 < *(int *)(iVar5 + 0x1f8a) &&
                  (*(int *)(iVar5 + 0x1f8a) < 0x241)))) &&
             (uVar7 = *(int *)(iVar5 + 0x1f8a) - *(int *)0x1f8a, uVar8 = (int)uVar7 >> 0xf,
             0x78 < (int)((uVar7 ^ uVar8) - uVar8))) {
            local_258 = 0;
            do {
              if (0x15f < aiStack_2be[local_258]) {
                local_27a = local_258;
              }
              iVar5 = local_27a;
              local_258 = local_258 + 1;
            } while (local_258 < 0x10);
            iVar3 = local_256 * 2;
            aiStack_2be[local_27a] = *(int *)(iVar3 + 0x1fca) + 0x10;
            iVar3 = *(int *)(iVar3 + 0x1f8a) + 0x10;
            aiStack_29c[iVar5] = iVar3;
            uVar7 = -(iVar3 - *(int *)0x1f8a) + 0x20;
            uVar8 = (int)uVar7 >> 0xf;
            if ((int)((uVar7 ^ uVar8) - uVar8) < 0x21) {
              iVar5 = FUN_1000_efc8();
              aiStack_b0[local_27a] = iVar5 % 5 + *(int *)0x1d6a + -2;
            }
            else {
              if (iVar3 == *(int *)0x1f8a) {
                iVar5 = 0;
              }
              else if (-(iVar3 - *(int *)0x1f8a) < 1) {
                iVar5 = -1;
              }
              else {
                iVar5 = 1;
              }
              iVar3 = FUN_1000_efc8();
              aiStack_b0[local_27a] = (iVar3 % 4 + 4) * iVar5 + *(int *)0x1d6a;
            }
            uVar7 = (*(int *)0x1fca - aiStack_2be[local_27a]) + 0x10;
            uVar8 = (int)uVar7 >> 0xf;
            if ((int)((uVar7 ^ uVar8) - uVar8) < 0x21) {
              iVar5 = FUN_1000_efc8();
              aiStack_15c[local_27a] = iVar5 % 5 + -2;
            }
            else {
              if (aiStack_2be[local_27a] == *(int *)0x1fca) {
                iVar5 = 0;
              }
              else if (*(int *)0x1fca - aiStack_2be[local_27a] < 1) {
                iVar5 = -1;
              }
              else {
                iVar5 = 1;
              }
              iVar3 = FUN_1000_efc8();
              aiStack_15c[local_27a] = (iVar3 % 4 + 4) * iVar5;
            }
            local_254 = local_254 + 1;
          }
        }
        else if (iVar5 == 3) {
          iVar5 = FUN_1000_efc8();
          if (((iVar5 % (((6 - *(int *)0x20c6) - *(int *)0x181e) * 0x14) == 0) &&
              ((*(int *)(local_256 * 2 + 0x1fca) < -0x1f ||
               (0x15f < *(int *)(local_256 * 2 + 0x1fca))))) && (local_162 < local_15e)) {
            iVar5 = FUN_1000_efc8();
            iVar3 = local_256 * 2;
            *(int *)(iVar3 + 0x1fca) = (iVar5 % 2) * 0x16e + -0xf;
            iVar5 = FUN_1000_efc8();
            iVar5 = iVar5 % 0x230 + 0x20;
            *(int *)(iVar3 + 0x1f8a) = iVar5;
            if (iVar5 == 0x140) {
              iVar5 = 0;
            }
            else if (-iVar5 == -0x140 || -iVar5 + 0x140 < 0) {
              iVar5 = -1;
            }
            else {
              iVar5 = 1;
            }
            iVar3 = FUN_1000_efc8();
            iVar4 = local_256 * 2;
            *(int *)(iVar4 + 0x1d6a) = (iVar3 % 3 + 1) * iVar5 + *(int *)0x1d6a;
            if (*(int *)(iVar4 + 0x1fca) == 100) {
              iVar5 = 0;
            }
            else if (-*(int *)(iVar4 + 0x1fca) == -100 || -*(int *)(iVar4 + 0x1fca) + 100 < 0) {
              iVar5 = -1;
            }
            else {
              iVar5 = 1;
            }
            iVar3 = FUN_1000_efc8();
            iVar4 = local_256 * 2;
            *(int *)(iVar4 + 0x1d8a) = (iVar3 % 3 + 3) * iVar5;
            iVar5 = FUN_1000_efc8();
            *(int *)(iVar4 + 0x1822) = iVar5 % 300 + 0x1a;
          }
          iVar5 = (*(int *)(local_256 * 2 + 0x1f8a) + *(int *)(local_256 * 2 + 0x1d6a)) -
                  *(int *)0x1d6a;
          if ((iVar5 < -0x13f) || (0x3af < iVar5)) {
            *(undefined2 *)(local_256 * 2 + 0x1fca) = 0xffe0;
            *(undefined2 *)(local_256 * 2 + 0x1d8a) = 0;
          }
          if ((-0x20 < *(int *)(local_256 * 2 + 0x1fca)) &&
             (iVar5 = local_256 * 2,
             *(int *)(iVar5 + 0x1fca) + *(int *)(iVar5 + 0x1d8a) < *(int *)(iVar5 + 0x1822) !=
             *(int *)(iVar5 + 0x1fca) < *(int *)(iVar5 + 0x1822))) {
            for (local_29e = 0; local_29e < 4; local_29e = local_29e + 1) {
              if (((local_254 < 0x10) && (0x10 < *(int *)(local_256 * 2 + 0x1f8a))) &&
                 (*(int *)(local_256 * 2 + 0x1f8a) < 0x261)) {
                local_258 = 0;
                do {
                  if (0x15f < aiStack_2be[local_258]) {
                    local_27a = local_258;
                  }
                  iVar5 = local_27a;
                  local_258 = local_258 + 1;
                } while (local_258 < 0x10);
                iVar3 = local_256 * 2;
                aiStack_2be[local_27a] = *(int *)(iVar3 + 0x1fca) + 0xc;
                iVar3 = *(int *)(iVar3 + 0x1f8a) + 0xc;
                aiStack_29c[iVar5] = iVar3;
                uVar7 = -(iVar3 - *(int *)0x1f8a) + 0x20;
                uVar8 = (int)uVar7 >> 0xf;
                if ((int)((uVar7 ^ uVar8) - uVar8) < 0x21) {
                  iVar5 = FUN_1000_efc8();
                  aiStack_b0[local_27a] = iVar5 % 5 + *(int *)0x1d6a + -2;
                }
                else {
                  if (iVar3 == *(int *)0x1f8a) {
                    iVar5 = 0;
                  }
                  else if (-(iVar3 - *(int *)0x1f8a) < 1) {
                    iVar5 = -1;
                  }
                  else {
                    iVar5 = 1;
                  }
                  iVar3 = FUN_1000_efc8();
                  aiStack_b0[local_27a] = (iVar3 % 4 + 4) * iVar5 + *(int *)0x1d6a;
                }
                uVar7 = (*(int *)0x1fca - aiStack_2be[local_27a]) + 0x10;
                uVar8 = (int)uVar7 >> 0xf;
                if ((int)((uVar7 ^ uVar8) - uVar8) < 0x21) {
                  iVar5 = FUN_1000_efc8();
                  aiStack_15c[local_27a] = iVar5 % 5 + -2;
                }
                else {
                  if (aiStack_2be[local_27a] == *(int *)0x1fca) {
                    iVar5 = 0;
                  }
                  else if (*(int *)0x1fca - aiStack_2be[local_27a] < 1) {
                    iVar5 = -1;
                  }
                  else {
                    iVar5 = 1;
                  }
                  iVar3 = FUN_1000_efc8();
                  aiStack_15c[local_27a] = (iVar3 % 4 + 4) * iVar5;
                }
                local_254 = local_254 + 1;
              }
            }
            iVar3 = local_256 * 2;
            *(undefined2 *)(iVar3 + 0x1faa) = 9;
            iVar5 = 0;
            *(undefined2 *)(iVar3 + 0x1d6a) = 0;
LAB_1000_41c0:
            *(int *)(iVar3 + 0x1d8a) = iVar5;
          }
        }
        else if (iVar5 == 4) {
          iVar5 = FUN_1000_efc8();
          if ((iVar5 % (((4 - *(int *)0x20c6) - *(int *)0x181e) * 0x28) == 0) &&
             (((*(int *)(local_256 * 2 + 0x1fca) < -0x1f ||
               (0x15f < *(int *)(local_256 * 2 + 0x1fca))) && (local_162 < local_15e)))) {
            iVar5 = FUN_1000_efc8();
            iVar3 = local_256 * 2;
            *(int *)(iVar3 + 0x1fca) = iVar5 % 0xb << 5;
            iVar5 = FUN_1000_efc8();
            iVar5 = (iVar5 % 2) * 0x4c0 + -0x140;
            *(int *)(iVar3 + 0x1f8a) = iVar5;
            if (iVar5 == 0x140) {
              iVar5 = 0;
            }
            else if (-*(int *)(iVar3 + 0x1f8a) == -0x140 || -*(int *)(iVar3 + 0x1f8a) + 0x140 < 0) {
              iVar5 = -1;
            }
            else {
              iVar5 = 1;
            }
            iVar3 = FUN_1000_efc8();
            iVar4 = local_256 * 2;
            *(int *)(iVar4 + 0x1d6a) = (iVar3 % 5 + 8) * iVar5;
            *(undefined2 *)(iVar4 + 0x1d8a) = 0;
            iVar5 = FUN_1000_efc8();
            *(int *)(iVar4 + 0x1d4a) = iVar5 % 2 + 0xc;
          }
          iVar5 = (*(int *)(local_256 * 2 + 0x1f8a) + *(int *)(local_256 * 2 + 0x1d6a)) -
                  *(int *)0x1d6a;
          if ((iVar5 < -0x13f) || (0x37f < iVar5)) {
            *(undefined2 *)(local_256 * 2 + 0x1fca) = 0xffe0;
            *(undefined2 *)(local_256 * 2 + 0x1d8a) = 0;
          }
          if ((-0x20 < *(int *)(local_256 * 2 + 0x1fca)) &&
             (*(int *)(local_256 * 2 + 0x1fca) < 0x160)) {
            iVar5 = FUN_1000_efc8();
            iVar5 = iVar5 % ((*(int *)0x20c6 + *(int *)0x181e) * -0xc + 0x1e);
            if ((iVar5 == 0) &&
               (((local_254 < 0x10 && (0 < *(int *)(local_256 * 2 + 0x1f8a))) &&
                (*(int *)(local_256 * 2 + 0x1f8a) < 0x241)))) {
              local_258 = iVar5;
              do {
                if (0x15f < aiStack_2be[local_258]) {
                  local_27a = local_258;
                }
                iVar5 = local_27a;
                local_258 = local_258 + 1;
              } while (local_258 < 0x10);
              iVar3 = local_256 * 2;
              aiStack_2be[local_27a] = *(int *)(iVar3 + 0x1fca) + 0x10;
              iVar3 = *(int *)(iVar3 + 0x1f8a) + 0x10;
              aiStack_29c[iVar5] = iVar3;
              uVar7 = -(iVar3 - *(int *)0x1f8a) + 0x20;
              uVar8 = (int)uVar7 >> 0xf;
              if ((int)((uVar7 ^ uVar8) - uVar8) < 0x21) {
                iVar5 = FUN_1000_efc8();
                aiStack_b0[local_27a] = iVar5 % 5 + *(int *)0x1d6a + -2;
              }
              else {
                if (iVar3 == *(int *)0x1f8a) {
                  iVar5 = 0;
                }
                else if (-(iVar3 - *(int *)0x1f8a) < 1) {
                  iVar5 = -1;
                }
                else {
                  iVar5 = 1;
                }
                iVar3 = FUN_1000_efc8();
                aiStack_b0[local_27a] = (iVar3 % 4 + 4) * iVar5 + *(int *)0x1d6a;
              }
              uVar7 = (*(int *)0x1fca - aiStack_2be[local_27a]) + 0x10;
              uVar8 = (int)uVar7 >> 0xf;
              if ((int)((uVar7 ^ uVar8) - uVar8) < 0x21) {
                iVar5 = FUN_1000_efc8();
                aiStack_15c[local_27a] = iVar5 % 5 + -2;
              }
              else {
                if (aiStack_2be[local_27a] == *(int *)0x1fca) {
                  iVar5 = 0;
                }
                else if (*(int *)0x1fca - aiStack_2be[local_27a] < 1) {
                  iVar5 = -1;
                }
                else {
                  iVar5 = 1;
                }
                iVar3 = FUN_1000_efc8();
                aiStack_15c[local_27a] = (iVar3 % 4 + 4) * iVar5;
              }
              local_254 = local_254 + 1;
            }
            iVar5 = *(int *)(local_256 * 2 + 0x1f8a);
            uVar7 = iVar5 - *(int *)0x1f8a >> 0xf;
            if ((100 < (int)((iVar5 - *(int *)0x1f8a ^ uVar7) - uVar7)) && (iVar5 != *(int *)0x1f8a)
               ) {
              if (-(iVar5 - *(int *)0x1f8a) < 1) {
                iVar5 = -1;
              }
              else {
                iVar5 = 1;
              }
              piVar1 = (int *)(local_256 * 2 + 0x1d6a);
              *piVar1 = *piVar1 + iVar5;
            }
            iVar5 = *(int *)0x1fca;
            iVar3 = local_256 * 2;
            if (*(int *)(iVar3 + 0x1fca) != iVar5) {
              if (iVar5 == *(int *)(iVar3 + 0x1fca) || iVar5 - *(int *)(iVar3 + 0x1fca) < 0) {
                iVar5 = -1;
              }
              else {
                iVar5 = 1;
              }
              *(int *)(iVar3 + 0x1d8a) = *(int *)(iVar3 + 0x1d8a) + iVar5;
            }
            uVar7 = *(uint *)(local_256 * 2 + 0x1d6a);
            if (*(int *)(local_256 * 2 + 0x1d4a) <
                (int)((uVar7 ^ (int)uVar7 >> 0xf) - ((int)uVar7 >> 0xf))) {
              if (uVar7 == 0) {
                iVar5 = 0;
              }
              else if ((int)uVar7 < 1) {
                iVar5 = -1;
              }
              else {
                iVar5 = 1;
              }
              *(int *)(local_256 * 2 + 0x1d6a) = *(int *)(local_256 * 2 + 0x1d4a) * iVar5;
            }
            uVar7 = *(uint *)(local_256 * 2 + 0x1d8a);
            if (*(int *)(local_256 * 2 + 0x1d4a) <
                (int)((uVar7 ^ (int)uVar7 >> 0xf) - ((int)uVar7 >> 0xf))) {
              if (uVar7 == 0) {
                iVar5 = 0;
              }
              else if ((int)uVar7 < 1) {
                iVar5 = -1;
              }
              else {
                iVar5 = 1;
              }
              iVar3 = local_256 * 2;
              iVar5 = *(int *)(iVar3 + 0x1d4a) * iVar5;
              goto LAB_1000_41c0;
            }
          }
        }
        else if (iVar5 == 9) {
          iVar5 = FUN_1000_efc8();
          if ((iVar5 % 10 == 0) &&
             (((*(int *)(local_256 * 2 + 0x1fca) < -0x1f ||
               (0x15f < *(int *)(local_256 * 2 + 0x1fca))) && (local_162 < local_15e)))) {
            iVar5 = FUN_1000_efc8();
            iVar3 = local_256 * 2;
            *(int *)(iVar3 + 0x1822) = (iVar5 % 9 + 1) * 0x20;
            iVar5 = FUN_1000_efc8();
            *(int *)(iVar3 + 0x1fca) = (iVar5 % 2) * 0x40 + *(int *)(iVar3 + 0x1822) + -0x20;
            iVar5 = FUN_1000_efc8();
            iVar5 = (iVar5 % 2) * 0x4e0 + -0x140;
            *(int *)(iVar3 + 0x1f8a) = iVar5;
            if (iVar5 == 0x140) {
              iVar5 = 0;
            }
            else if (-*(int *)(iVar3 + 0x1f8a) == -0x140 || -*(int *)(iVar3 + 0x1f8a) + 0x140 < 0) {
              iVar5 = -1;
            }
            else {
              iVar5 = 1;
            }
            iVar3 = FUN_1000_efc8();
            *(int *)(local_256 * 2 + 0x1d6a) = (iVar3 % 5 + 5) * iVar5;
            *(undefined2 *)(local_256 * 2 + 0x1d8a) = 0;
          }
          if (local_15e <= local_162) {
            iVar5 = *(int *)(local_256 * 2 + 0x1d6a);
            if (iVar5 == 0) {
              iVar5 = 0;
            }
            else if (iVar5 < 1) {
              iVar5 = -1;
            }
            else {
              iVar5 = 1;
            }
            *(int *)(local_256 * 2 + 0x1d6a) = iVar5 * 10;
          }
          iVar5 = (*(int *)(local_256 * 2 + 0x1f8a) + *(int *)(local_256 * 2 + 0x1d6a)) -
                  *(int *)0x1d6a;
          if ((iVar5 < -0x13f) || (0x39f < iVar5)) {
            *(undefined2 *)(local_256 * 2 + 0x1fca) = 0xffe0;
            *(undefined2 *)(local_256 * 2 + 0x1d8a) = 0;
          }
          if ((-0x20 < *(int *)(local_256 * 2 + 0x1fca)) &&
             (*(int *)(local_256 * 2 + 0x1fca) < 0x160)) {
            iVar3 = local_256 * 2;
            iVar5 = *(int *)(iVar3 + 0x1822);
            if (*(int *)(iVar3 + 0x1fca) != iVar5) {
              if (iVar5 == *(int *)(iVar3 + 0x1fca) || iVar5 - *(int *)(iVar3 + 0x1fca) < 0) {
                iVar5 = -1;
              }
              else {
                iVar5 = 1;
              }
              *(int *)(iVar3 + 0x1d8a) = *(int *)(iVar3 + 0x1d8a) + iVar5;
            }
          }
        }
      }
    }
    if (((local_160 == 0) && (local_15e <= local_162)) && (*(int *)0x1dc0 == 0)) goto LAB_1000_57e4;
    for (local_256 = 0; local_256 < *(int *)0x1d48; local_256 = local_256 + 1) {
      if (-0x10 < aiStack_1a6[local_256]) {
        aiStack_184[local_256] = aiStack_184[local_256] + aiStack_278[local_256];
        aiStack_1a6[local_256] =
             aiStack_1a6[local_256] + aiStack_1c6[local_256] * (*(int *)0x181e + 2) * 2;
        for (local_258 = 1; iVar5 = local_256, local_258 <= *(int *)0x17f4;
            local_258 = local_258 + 1) {
          iVar3 = local_258 * 2;
          if (((9 < *(int *)(iVar3 + 0x1faa)) && (-0x20 < *(int *)(iVar3 + 0x1fca))) &&
             (*(int *)(iVar3 + 0x1fca) < 0x160)) {
            iVar3 = *(int *)(local_258 * 2 + 0x17f6);
            if (iVar3 == 1) {
              iVar3 = *(int *)(local_258 * 2 + 0x1f8a);
              if ((iVar3 + -8 <= aiStack_184[local_256]) && (aiStack_184[local_256] <= iVar3 + 0x18)
                 ) {
                iVar3 = *(int *)(local_258 * 2 + 0x1fca);
                iVar4 = iVar3 + -8;
LAB_1000_4c9d:
                if (iVar4 <= aiStack_1a6[local_256]) {
                  iVar3 = iVar3 + 0x18;
LAB_1000_4ca6:
                  if (aiStack_1a6[local_256] <= iVar3) {
                    FUN_1000_824a(local_258);
                    local_162 = local_162 + 1;
                    if (*(int *)0x181e == 0) {
                      aiStack_1a6[iVar5] = -0x10;
                    }
                  }
                }
              }
            }
            else if (iVar3 == 2) {
LAB_1000_4d50:
              iVar3 = *(int *)(local_258 * 2 + 0x1f8a);
              if ((iVar3 + -8 <= aiStack_184[local_256]) && (aiStack_184[local_256] <= iVar3 + 0x38)
                 ) {
                iVar3 = *(int *)(local_258 * 2 + 0x1fca);
                iVar4 = iVar3 + -0xc;
                goto LAB_1000_4c9d;
              }
            }
            else if (iVar3 == 3) {
              iVar3 = *(int *)(local_258 * 2 + 0x1f8a);
              if (((iVar3 + -0xc <= aiStack_184[local_256]) &&
                  (aiStack_184[local_256] <= iVar3 + 0xc)) &&
                 (iVar3 = *(int *)(local_258 * 2 + 0x1fca), iVar3 + -10 <= aiStack_1a6[local_256]))
              {
                iVar3 = iVar3 + 10;
                goto LAB_1000_4ca6;
              }
            }
            else {
              if (iVar3 == 4) goto LAB_1000_4d50;
              if (iVar3 == 9) {
                iVar3 = *(int *)(local_258 * 2 + 0x1f8a);
                if ((((iVar3 + -8 <= aiStack_184[local_256]) &&
                     (aiStack_184[local_256] <= iVar3 + 0x18)) &&
                    (iVar3 = *(int *)(local_258 * 2 + 0x1fca), iVar3 + -8 <= aiStack_1a6[local_256])
                    ) && (aiStack_1a6[local_256] <= iVar3 + 0x18)) {
                  FUN_1000_824a(local_258);
                  local_162 = local_162 + 1;
                  if (*(int *)0x181e == 0) {
                    aiStack_1a6[iVar5] = -0x10;
                  }
                  if (*(int *)0x1dc0 == 0) {
                    FUN_1000_9d84();
                    iVar5 = *(int *)(local_258 * 2 + 0x1f8a) + 8;
                    *(int *)0x193e = iVar5;
                    *(int *)0x1d40 = *(int *)(local_258 * 2 + 0x1fca) + 8;
                    uVar7 = -(iVar5 - *(int *)0x1f8a) + 0x20;
                    uVar8 = (int)uVar7 >> 0xf;
                    if ((int)((uVar7 ^ uVar8) - uVar8) < 0x21) {
                      iVar5 = FUN_1000_efc8();
                      *(int *)0x1db2 = iVar5 % 3 + *(int *)0x1d6a / 2 + -2;
                    }
                    else {
                      if (iVar5 == *(int *)0x1f8a) {
                        iVar5 = 0;
                      }
                      else if (-(iVar5 - *(int *)0x1f8a) < 1) {
                        iVar5 = -1;
                      }
                      else {
                        iVar5 = 1;
                      }
                      iVar3 = FUN_1000_efc8();
                      uVar7 = (int)*(uint *)0x1d6a >> 0xf;
                      *(int *)0x1db2 =
                           (((int)((*(uint *)0x1d6a ^ uVar7) - uVar7) >> 1 ^ uVar7) - uVar7) +
                           (iVar3 % 2 + 1) * iVar5;
                    }
                    uVar7 = (*(int *)0x1fca - *(int *)0x1d40) + 0x10;
                    uVar8 = (int)uVar7 >> 0xf;
                    if ((int)((uVar7 ^ uVar8) - uVar8) < 0x21) {
                      iVar5 = FUN_1000_efc8();
                      *(int *)0x1db4 = (iVar5 % 2) * 4 + -2;
                    }
                    else {
                      if (*(int *)0x1d40 == *(int *)0x1fca) {
                        iVar5 = 0;
                      }
                      else if (*(int *)0x1fca - *(int *)0x1d40 < 1) {
                        iVar5 = -1;
                      }
                      else {
                        iVar5 = 1;
                      }
                      iVar3 = FUN_1000_efc8();
                      *(int *)0x1db4 = (iVar3 % 3 + 2) * iVar5;
                    }
                  }
                }
              }
            }
          }
        }
        if (((aiStack_184[local_256] < 0) || (0x26f < aiStack_184[local_256])) ||
           (0x15f < aiStack_1a6[local_256])) {
          aiStack_1a6[local_256] = -0x10;
        }
        if (aiStack_1a6[local_256] < -0xf) {
          local_90 = local_90 + -1;
        }
      }
    }
    for (local_256 = 0; local_256 < 0x10; local_256 = local_256 + 1) {
      if (aiStack_2be[local_256] < 0) {
        aiStack_2be[local_256] = 0x160;
      }
      iVar5 = local_256;
      if (aiStack_2be[local_256] < 0x160) {
        aiStack_29c[local_256] = aiStack_29c[local_256] + (aiStack_b0[local_256] - *(int *)0x1d6a);
        piVar1 = aiStack_2be + iVar5;
        *piVar1 = *piVar1 + aiStack_15c[iVar5];
        if (((*piVar1 < 0) || (aiStack_29c[iVar5] < 0)) || (0x277 < aiStack_29c[iVar5])) {
          aiStack_2be[local_256] = 0x160;
        }
        else {
          if (*(int *)0x1faa == 10) {
            if (((*(int *)0x1f8a <= aiStack_29c[local_256]) &&
                (aiStack_29c[local_256] <= *(int *)0x1f8a + 0x3a)) &&
               ((*(int *)0x1fca + 6 <= aiStack_2be[local_256] &&
                (aiStack_2be[local_256] <= *(int *)0x1fca + 0x1a)))) {
              *(undefined2 *)0x1faa = 9;
              aiStack_2be[local_256] = 0x160;
              FUN_1000_cff4(4);
            }
          }
          if ((aiStack_2be[local_256] < 0x160) && (-1 < aiStack_2be[local_256])) goto LAB_1000_4fec;
        }
        local_254 = local_254 + -1;
      }
LAB_1000_4fec:
    }
    for (local_256 = 1; local_256 <= *(int *)0x17f4; local_256 = local_256 + 1) {
      iVar5 = local_256 * 2;
      if (((9 < *(int *)(iVar5 + 0x1faa)) && (-0x20 < *(int *)(iVar5 + 0x1fca))) &&
         (*(int *)(iVar5 + 0x1fca) < 0x160)) {
        iVar5 = *(int *)(local_256 * 2 + 0x17f6);
        if (iVar5 == 1) {
LAB_1000_505c:
          iVar5 = *(int *)(local_256 * 2 + 0x1f8a);
          if ((iVar5 + -0x30 <= *(int *)0x1f8a) && (*(int *)0x1f8a <= iVar5 + 0x10)) {
            iVar5 = *(int *)(local_256 * 2 + 0x1fca);
            iVar3 = iVar5 + -0x10;
LAB_1000_5083:
            if (iVar3 <= *(int *)0x1fca) {
              iVar5 = iVar5 + 0x14;
LAB_1000_508c:
              if ((*(int *)0x1fca <= iVar5) && (9 < *(int *)0x1faa)) {
                *(undefined2 *)0x1faa = 9;
                FUN_1000_cff4(4);
              }
            }
          }
        }
        else if (iVar5 == 2) {
LAB_1000_50f6:
          iVar5 = *(int *)(local_256 * 2 + 0x1f8a);
          if ((iVar5 + -0x30 <= *(int *)0x1f8a) && (*(int *)0x1f8a <= iVar5 + 0x30)) {
            iVar5 = *(int *)(local_256 * 2 + 0x1fca);
            iVar3 = iVar5 + -0x14;
            goto LAB_1000_5083;
          }
        }
        else if (iVar5 == 3) {
          iVar5 = *(int *)(local_256 * 2 + 0x1f8a);
          if (((iVar5 + -0x30 <= *(int *)0x1f8a) && (*(int *)0x1f8a <= iVar5)) &&
             (iVar5 = *(int *)(local_256 * 2 + 0x1fca), iVar5 + -0x14 <= *(int *)0x1fca)) {
            iVar5 = iVar5 + 4;
            goto LAB_1000_508c;
          }
        }
        else {
          if (iVar5 == 4) goto LAB_1000_50f6;
          if (iVar5 == 9) goto LAB_1000_505c;
        }
      }
    }
    if (*(int *)0x1dc0 != 0) {
      *(int *)0x1d40 = *(int *)0x1d40 + *(int *)0x1db4;
      iVar5 = *(int *)0x1f8a;
      *(int *)0x193e = *(int *)0x193e + (*(int *)0x1db2 - *(int *)0x1d6a);
      if ((((iVar5 + -4 <= *(int *)0x193e) && (*(int *)0x193e <= *(int *)0x1f8a + 0x34)) &&
          (*(int *)0x1fca <= *(int *)0x1d40)) && (*(int *)0x1d40 <= *(int *)0x1fca + 0x18)) {
        if (*(int *)0x1dc0 == 4) {
          *(undefined1 *)0x2ba = 0;
          FUN_1000_83b5(0x2b8);
          local_256 = 1;
          do {
            iVar5 = local_256 * 2;
            if (((*(int *)(iVar5 + 0x1faa) == 10) && (*(int *)(iVar5 + 0x1fca) != -0x20)) &&
               ((-0x20 < *(int *)(iVar5 + 0x1f8a) && (*(int *)(iVar5 + 0x1f8a) < 0x260)))) {
              local_162 = local_162 + 1;
              FUN_1000_824a(local_256);
            }
            local_256 = local_256 + 1;
          } while (local_256 < 0x10);
          for (local_256 = 0; local_256 < *(int *)0x1d48; local_256 = local_256 + 1) {
            aiStack_1a6[local_256] = -0x10;
          }
          local_90 = 0;
          local_254 = 0;
          for (local_256 = 0; local_256 < 0x10; local_256 = local_256 + 1) {
            aiStack_2be[local_256] = 0x160;
          }
          FUN_1000_cff4(4);
          FUN_1000_8425(0x2b8);
          *(undefined1 *)0x2ba = 7;
          FUN_1000_a25a();
        }
        else {
          FUN_1000_80f0();
        }
        FUN_1000_a0d8();
        *(undefined2 *)0x1dc0 = 0;
        FUN_1000_cff4(6);
      }
      if (((*(int *)0x1d40 < -0xf) || (0x15f < *(int *)0x1d40)) ||
         ((*(int *)0x193e < 0x11 || (0x25f < *(int *)0x193e)))) {
        *(undefined2 *)0x1dc0 = 0;
      }
    }
    *(byte *)0x1844 = *(byte *)0x1844 ^ 1;
    for (local_256 = *(int *)0x17f4; 0 < local_256; local_256 = local_256 + -1) {
      iVar5 = local_256 * 2;
      *(int *)(iVar5 + 0x1f8a) =
           *(int *)(iVar5 + 0x1f8a) + (*(int *)(iVar5 + 0x1d6a) - *(int *)0x1d6a);
      *(int *)(iVar5 + 0x1fca) = *(int *)(iVar5 + 0x1fca) + *(int *)(iVar5 + 0x1d8a);
    }
    *(int *)0x1fca = *(int *)0x1fca + *(int *)0x1d8a;
    local_256 = 0;
    do {
      piVar1 = local_8e + local_256;
      *piVar1 = *piVar1 - local_34a[local_256] * *(int *)0x1d6a;
      if (*piVar1 < 0) {
        local_8e[local_256] = local_8e[local_256] + 0x280;
      }
      if (0x27f < local_8e[local_256]) {
        local_8e[local_256] = local_8e[local_256] + -0x280;
      }
      FUN_1000_b50e(local_8e[local_256],local_13c[local_256],local_252[local_256]);
      local_256 = local_256 + 1;
    } while (local_256 < 0x46);
    for (local_256 = *(int *)0x17f4; 0 < local_256; local_256 = local_256 + -1) {
      if ((-0x20 < *(int *)(local_256 * 2 + 0x1fca)) && (*(int *)(local_256 * 2 + 0x1fca) < 0x160))
      {
        if ((*(int *)(local_256 * 2 + 0x17f6) == 2) || (*(int *)(local_256 * 2 + 0x17f6) == 4)) {
          bVar2 = 1;
        }
        else {
          bVar2 = 0;
        }
        iVar5 = *(int *)(local_256 * 2 + 0x1f8a);
        if ((-iVar5 == (-(uint)bVar2 & 0x20) || (int)-(-(uint)bVar2 & 0x20) < iVar5) &&
           (*(int *)(local_256 * 2 + 0x1f8a) < 0x260)) {
          if (*(int *)(local_256 * 2 + 0x1faa) < 10) {
            iVar5 = *(int *)(local_256 * 2 + 0x17f6);
            if (iVar5 == 1) {
LAB_1000_53d2:
              FUN_1000_8562(local_256);
            }
            else {
              if (iVar5 != 2) {
                if (iVar5 == 3) {
                  iVar4 = local_256 * 2;
                  iVar3 = *(int *)(iVar4 + 0x1fca) + -8;
                  if (-1 < iVar3) {
                    iVar3 = local_256 * 2;
                    iVar5 = *(int *)(*(int *)(iVar3 + 0x1faa) * 2 + 0x4ec) + 0x20;
                    iVar4 = *(int *)(iVar3 + 0x1fca) + -8;
                    iVar3 = *(int *)(iVar3 + 0x1f8a) + -8;
                    goto LAB_1000_5484;
                  }
                  iVar5 = *(int *)(*(int *)(iVar4 + 0x1faa) * 2 + 0x4ec) + 0x20;
                  iVar4 = *(int *)(iVar4 + 0x1f8a) + -8;
                  goto LAB_1000_540e;
                }
                if (iVar5 != 4) {
                  if (iVar5 != 9) goto LAB_1000_538b;
                  goto LAB_1000_53d2;
                }
              }
              FUN_1000_85b8(local_256);
            }
          }
          else {
            iVar5 = *(int *)(local_256 * 2 + 0x17f6);
            if (iVar5 == 1) {
              if (*(int *)(local_256 * 2 + 0x1fca) < 0) {
                iVar5 = 0x23;
LAB_1000_54d5:
                iVar3 = *(int *)(local_256 * 2 + 0x1fca);
                iVar4 = *(int *)(local_256 * 2 + 0x1f8a);
LAB_1000_540e:
                FUN_1000_c322(iVar4,iVar3,iVar5);
              }
              else {
                iVar5 = 0x23;
LAB_1000_5475:
                iVar3 = local_256 << 1;
LAB_1000_547c:
                iVar4 = *(int *)(iVar3 + 0x1fca);
                iVar3 = *(int *)(iVar3 + 0x1f8a);
LAB_1000_5484:
                FUN_1000_bfd6(iVar3,iVar4,iVar5);
              }
            }
            else if (iVar5 == 2) {
              uVar7 = -(uint)(0 < *(int *)(local_256 * 2 + 0x1d6a)) & 2;
              iVar5 = uVar7 + 0x2b;
              iVar3 = uVar7 + 0x2a;
LAB_1000_5575:
              FUN_1000_88a2(*(undefined2 *)(local_256 * 2 + 0x1f8a),
                            *(undefined2 *)(local_256 * 2 + 0x1fca),iVar3,iVar5);
            }
            else {
              if (iVar5 == 3) {
                if (-1 < *(int *)(local_256 * 2 + 0x1fca)) {
                  iVar5 = *(int *)0x1844 + *(int *)0x1d42 + 0x38;
                  goto LAB_1000_5475;
                }
                iVar5 = *(int *)0x1844 + *(int *)0x1d42 + 0x38;
                goto LAB_1000_54d5;
              }
              if (iVar5 == 4) {
                iVar5 = local_256 * 2;
                if (-1 < *(int *)(iVar5 + 0x1fca)) {
                  uVar7 = -(uint)(0 < *(int *)(local_256 * 2 + 0x1d6a)) & 4;
                  iVar5 = *(int *)0x1844 * 2 + uVar7 + 0x39;
                  iVar3 = uVar7 + (*(int *)0x1844 + 0x1c) * 2;
                  goto LAB_1000_5575;
                }
                uVar7 = -(uint)(0 < *(int *)(iVar5 + 0x1d6a)) & 4;
                FUN_1000_88d6(*(undefined2 *)(iVar5 + 0x1f8a),*(undefined2 *)(iVar5 + 0x1fca),
                              uVar7 + (*(int *)0x1844 + 0x1c) * 2,*(int *)0x1844 * 2 + uVar7 + 0x39)
                ;
              }
              else if (iVar5 == 9) {
                iVar3 = local_256 * 2;
                iVar5 = 0x2f - (uint)(*(int *)(iVar3 + 0x1d6a) < 1);
                goto LAB_1000_547c;
              }
            }
          }
        }
      }
LAB_1000_538b:
    }
    local_258 = *(int *)0x181e * 0x10 + *(int *)0x1d42 + 0x14;
    for (local_256 = 0; local_256 < *(int *)0x1d48; local_256 = local_256 + 1) {
      if (-0x10 < aiStack_1a6[local_256]) {
        if (aiStack_1a6[local_256] < 0) {
          FUN_1000_c322(aiStack_184[local_256],aiStack_1a6[local_256],
                        (-(uint)(0 < aiStack_278[local_256]) & 3) + aiStack_1c6[local_256] +
                        local_258);
        }
        else {
          FUN_1000_bfd6(aiStack_184[local_256],aiStack_1a6[local_256],
                        (-(uint)(0 < aiStack_278[local_256]) & 3) + aiStack_1c6[local_256] +
                        local_258);
        }
      }
    }
    local_258 = *(int *)0x1844 + *(int *)0x1d46 + *(int *)0x1d42;
    for (local_256 = 0; local_256 < 0x10; local_256 = local_256 + 1) {
      if ((aiStack_2be[local_256] < 0x160) && (-1 < aiStack_2be[local_256])) {
        FUN_1000_bfd6(aiStack_29c[local_256],aiStack_2be[local_256],local_258);
      }
    }
    if (*(int *)0x1faa < 10) {
      FUN_1000_85b8(0);
    }
    else {
      FUN_1000_bfd6(*(undefined2 *)0x1f8a,*(undefined2 *)0x1fca,0x28);
      FUN_1000_bfd6(*(int *)0x1f8a + 0x20,*(undefined2 *)0x1fca,0x29);
    }
    if (*(int *)0x1dc0 != 0) {
      FUN_1000_bfd6(*(undefined2 *)0x193e,*(undefined2 *)0x1d40,
                    *(int *)0x1dc0 + *(int *)0x1d42 + 0x28);
    }
    FUN_1000_8292();
    for (local_256 = *(int *)0x17f4; 0 < local_256; local_256 = local_256 + -1) {
      if ((-1 < *(int *)(local_256 * 2 + 0x1fca)) && (*(int *)(local_256 * 2 + 0x1fca) < 0x161)) {
        iVar5 = *(int *)(local_256 * 2 + 0x17f6);
        if (iVar5 == 1) {
          iVar5 = 6;
LAB_1000_5723:
          uVar6 = 3;
        }
        else {
          if (iVar5 == 2) {
            iVar5 = 2;
          }
          else {
            if (iVar5 == 3) {
              uVar6 = 3;
              iVar5 = 3;
              goto LAB_1000_5727;
            }
            if (iVar5 != 4) {
              if (iVar5 != 9) goto LAB_1000_5732;
              iVar5 = -(*(int *)0x1844 * 7 + -0xf);
              goto LAB_1000_5723;
            }
            iVar5 = 4;
          }
          uVar6 = 7;
        }
LAB_1000_5727:
        FUN_1000_890a(local_256,uVar6,iVar5);
      }
LAB_1000_5732:
    }
    FUN_1000_890a(0,7,0xf);
    while (iVar5 = FUN_1000_bf8e(), iVar5 != 0) {
      FUN_1000_bf98();
    }
    FUN_1000_e538(0x2130);
    do {
      uVar7 = FUN_1000_bb38();
    } while (uVar7 < *(int *)0x1820 - 1U);
    *(undefined2 *)0xdd0 = 0;
    out(0xa4,(byte)*(undefined2 *)0x1844);
    out(0xa6,(byte)*(undefined2 *)0x1844 ^ 1);
    FUN_1000_b4ee();
  } while( true );
}


