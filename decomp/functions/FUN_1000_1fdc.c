/* 1000:1fdc */

undefined2 FUN_1000_1fdc(void)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  undefined2 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  int local_166;
  int aiStack_15c [16];
  int aiStack_13c [16];
  int local_11c;
  int aiStack_11a [16];
  int aiStack_fa [16];
  int aiStack_da [16];
  int aiStack_ba [16];
  int local_9a;
  int aiStack_98 [16];
  int local_78;
  int local_76;
  int local_74;
  int local_72;
  int local_70;
  int local_6e;
  int local_6c;
  int local_6a;
  int aiStack_68 [16];
  int local_48;
  int local_46;
  int local_44;
  int aiStack_42 [16];
  int aiStack_22 [16];
  
  if (*(int *)0x1818 != *(int *)0x1dae) {
    FUN_1000_908c();
  }
  FUN_1000_8098();
  local_6e = 0;
  do {
    aiStack_15c[local_6e] = -0x10;
    local_6e = local_6e + 1;
  } while (local_6e < 0x10);
  local_6e = 0;
  do {
    aiStack_fa[local_6e] = 0x160;
    local_6e = local_6e + 1;
  } while (local_6e < 0x10);
  local_6e = 0;
  do {
    iVar9 = local_6e;
    aiStack_ba[local_6e] = 0x160;
    aiStack_22[iVar9] = 0;
    aiStack_42[iVar9] = 0;
    local_6e = local_6e + 1;
  } while (local_6e < 0x10);
  local_11c = 1;
  *(undefined2 *)0x1fca = 0x120;
  *(undefined2 *)0x1db4 = 0;
  *(undefined2 *)0x1db2 = 0;
  *(undefined2 *)0x1d40 = 0;
  *(undefined2 *)0x193e = 0;
  *(undefined2 *)0x1dc0 = 0;
  local_6c = 0;
  local_70 = 0;
  local_78 = 0;
  *(undefined2 *)0x193c = 0;
  *(undefined2 *)0x184a = 0;
  local_46 = 0;
  local_48 = 0;
  local_6a = 0;
  out(0xa6,(byte)*(undefined2 *)0x1844 ^ 1);
  FUN_1000_b4ee();
  FUN_1000_b854(4,0,0x4b,0x138,5);
  FUN_1000_8292();
  out(0xa6,(byte)*(undefined2 *)0x1844);
  out(0xa4,(byte)*(undefined2 *)0x1844 ^ 1);
  FUN_1000_b4ee();
  FUN_1000_b854(4,0,0x4b,0x138,5);
  FUN_1000_8292();
  FUN_1000_bfd6(*(undefined2 *)0x1f8a,*(undefined2 *)0x1fca,2);
  FUN_1000_bfd6(*(int *)0x1f8a + 0x20,*(undefined2 *)0x1fca,3);
  out(0xa4,(byte)*(undefined2 *)0x1844);
  out(0xa6,(byte)*(undefined2 *)0x1844 ^ 1);
  FUN_1000_cf6a(4);
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
    FUN_1000_a196();
  }
  uVar6 = (int)*(uint *)0x1818 >> 0xf;
  local_44 = ((*(uint *)0x181e & *(uint *)0x20c6) +
              (((int)((*(uint *)0x1818 ^ uVar6) - uVar6) >> 2 ^ uVar6) - uVar6) + 3) * 10;
  *(undefined2 *)0xdd0 = 0;
  do {
    FUN_1000_8184();
    local_76 = FUN_1000_e3c8(0x2130);
    if (((local_76 != 0) || (*(int *)0x213e != 0)) && (FUN_1000_9e70(), *(int *)0x184c == 0))
    goto LAB_1000_380a;
    *(undefined2 *)0x1d6a = 0;
    if (*(int *)0x1faa < 10) {
      iVar9 = *(int *)0x1faa;
      *(int *)0x1faa = *(int *)0x1faa + -1;
      if (iVar9 < 1) {
        local_6a = 1;
        *(int *)0x1842 = *(int *)0x1842 + -1;
LAB_1000_380a:
        FUN_1000_cf2c();
        FUN_1000_a23c();
        if ((local_6a == 1) && (*(int *)0x1842 == 0)) {
          FUN_1000_a29e();
        }
        uVar4 = *(undefined2 *)0x1844;
        out(0xa6,(char)uVar4);
        if ((local_6a == 1) || (*(int *)0x1842 == 0)) {
          uVar4 = FUN_1000_84ae();
        }
        return uVar4;
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
         ((iVar9 = *(int *)0x20c6 * 2 - *(int *)0x1d48, -local_78 != iVar9 && local_78 <= -iVar9 &&
          (local_11c != 0)))) {
        for (local_6e = 0; local_6e < *(int *)0x1d48; local_6e = local_6e + 1) {
          if (aiStack_15c[local_6e] < -0xf) {
            local_72 = local_6e;
            break;
          }
        }
        iVar9 = local_72;
        aiStack_15c[local_72] = *(int *)0x1fca + 0x10;
        aiStack_11a[iVar9] = *(int *)0x1f8a + 5;
        local_78 = local_78 + 1;
        aiStack_13c[iVar9] = 0;
        local_11c = 0;
        if (*(int *)0x20c6 == 1) {
          for (local_6e = 0; local_6e < *(int *)0x1d48; local_6e = local_6e + 1) {
            if (aiStack_15c[local_6e] < -0xf) {
              local_72 = local_6e;
              break;
            }
          }
          iVar9 = local_72;
          aiStack_15c[local_72] = *(int *)0x1fca + 0x10;
          aiStack_11a[iVar9] = *(int *)0x1f8a + 5;
          aiStack_13c[iVar9] = -1;
          for (local_6e = 0; local_6e < *(int *)0x1d48; local_6e = local_6e + 1) {
            if (aiStack_15c[local_6e] < -0xf) {
              local_72 = local_6e;
              break;
            }
          }
          iVar9 = local_72;
          aiStack_15c[local_72] = *(int *)0x1fca + 0x10;
          aiStack_11a[iVar9] = *(int *)0x1f8a + 5;
          aiStack_13c[iVar9] = 1;
          local_78 = local_78 + 2;
        }
        FUN_1000_cff4(1);
      }
      if ((((*(int *)0x213a != 0) && (*(int *)0x212c == 0)) ||
          ((*(int *)0x2138 != 0 && (*(int *)0x212c != 0)))) &&
         ((iVar9 = *(int *)0x20c6 * 2 - *(int *)0x1d48, -local_78 != iVar9 && local_78 <= -iVar9 &&
          (local_11c != 0)))) {
        for (local_6e = 0; local_6e < *(int *)0x1d48; local_6e = local_6e + 1) {
          if (aiStack_15c[local_6e] < -0xf) {
            local_72 = local_6e;
            break;
          }
        }
        iVar9 = local_72;
        aiStack_15c[local_72] = *(int *)0x1fca + 0x10;
        aiStack_11a[iVar9] = *(int *)0x1f8a + 0x2c;
        local_78 = local_78 + 1;
        aiStack_13c[iVar9] = 0;
        local_11c = 0;
        if (*(int *)0x20c6 == 1) {
          for (local_6e = 0; local_6e < *(int *)0x1d48; local_6e = local_6e + 1) {
            if (aiStack_15c[local_6e] < -0xf) {
              local_72 = local_6e;
              break;
            }
          }
          iVar9 = local_72;
          aiStack_15c[local_72] = *(int *)0x1fca + 0x10;
          aiStack_11a[iVar9] = *(int *)0x1f8a + 0x2c;
          aiStack_13c[iVar9] = -1;
          for (local_6e = 0; local_6e < *(int *)0x1d48; local_6e = local_6e + 1) {
            if (aiStack_15c[local_6e] < -0xf) {
              local_72 = local_6e;
              break;
            }
          }
          iVar9 = local_72;
          aiStack_15c[local_72] = *(int *)0x1fca + 0x10;
          aiStack_11a[iVar9] = *(int *)0x1f8a + 0x2c;
          aiStack_13c[iVar9] = 1;
          local_78 = local_78 + 2;
        }
        FUN_1000_cff4(1);
      }
      if ((*(int *)0x2138 == 0) && (*(int *)0x213a == 0)) {
        local_11c = 1;
      }
    }
    local_46 = 0;
    for (local_6e = 1; local_6e <= *(int *)0x17f4; local_6e = local_6e + 1) {
      if (-0x20 < *(int *)(local_6e * 2 + 0x1fca)) {
        local_46 = local_46 + 1;
      }
      iVar9 = local_6e * 2;
      if (*(int *)(iVar9 + 0x1faa) < 10) {
        piVar1 = (int *)(iVar9 + 0x1faa);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          *(undefined2 *)(iVar9 + 0x1fca) = 0xffe0;
          *(undefined2 *)(iVar9 + 0x1faa) = 10;
        }
      }
      else {
        iVar9 = *(int *)(local_6e * 2 + 0x17f6);
        if (iVar9 == 1) {
          iVar9 = FUN_1000_efc8();
          if (((iVar9 % 0x14 == 0) && (iVar9 = local_6e * 2, *(int *)(iVar9 + 0x1fca) < -0x1f)) &&
             (local_48 < local_44)) {
            iVar5 = FUN_1000_efc8();
            *(int *)(iVar9 + 0x1fca) = iVar5 % 100 + 0x3c;
            iVar5 = FUN_1000_efc8();
            iVar5 = (iVar5 % 2) * 0x4e0 + -0x140;
            *(int *)(iVar9 + 0x1f8a) = iVar5;
            if (iVar5 == 0x140) {
              iVar9 = 0;
            }
            else if (-*(int *)(iVar9 + 0x1f8a) == -0x140 || -*(int *)(iVar9 + 0x1f8a) + 0x140 < 0) {
              iVar9 = -1;
            }
            else {
              iVar9 = 1;
            }
            iVar5 = FUN_1000_efc8();
            iVar8 = local_6e * 2;
            *(int *)(iVar8 + 0x1d6a) = (iVar5 % 3 + 1) * iVar9;
            iVar9 = FUN_1000_efc8();
            *(int *)(iVar8 + 0x1d8a) = iVar9 % 7 + 3;
            iVar9 = FUN_1000_efc8();
            *(int *)(iVar8 + 0x1822) = iVar9 % 0x32 + (0x32 - *(int *)(iVar8 + 0x1d8a)) * 3;
          }
          if (local_44 <= local_48) {
            *(undefined2 *)(local_6e * 2 + 0x1d8a) = 0xfff8;
          }
          iVar9 = *(int *)(local_6e * 2 + 0x1f8a) + *(int *)(local_6e * 2 + 0x1d6a);
          if ((iVar9 < -0x13f) || (0x39f < iVar9)) {
            iVar5 = local_6e * 2;
            *(undefined2 *)(iVar5 + 0x1fca) = 0xffe0;
            iVar9 = FUN_1000_efc8();
            if (iVar9 % 0x20 + *(int *)0x1f8a != *(int *)(iVar5 + 0x1f8a)) {
              iVar9 = FUN_1000_efc8();
              if ((iVar9 % 0x20 - *(int *)(iVar5 + 0x1f8a)) + *(int *)0x1f8a < 1) {
                iVar9 = -1;
              }
              else {
                iVar9 = 1;
              }
              *(int *)(iVar5 + 0x1d6a) = *(int *)(iVar5 + 0x1d6a) + iVar9;
            }
          }
          if (-0x20 < *(int *)(local_6e * 2 + 0x1fca)) {
            iVar9 = FUN_1000_efc8();
            iVar9 = iVar9 % (*(int *)0x181e * -0x14 + *(int *)0x20c6 * -0xf + 0x32);
            if (((iVar9 == 0) && (local_70 < 0x10)) &&
               ((0 < *(int *)(local_6e * 2 + 0x1f8a) && (*(int *)(local_6e * 2 + 0x1f8a) < 0x261))))
            {
              local_72 = iVar9;
              do {
                if (0x15f < aiStack_fa[local_72]) {
                  local_74 = local_72;
                }
                iVar9 = local_74;
                local_72 = local_72 + 1;
              } while (local_72 < 0x10);
              iVar5 = local_6e * 2;
              aiStack_fa[local_74] = *(int *)(iVar5 + 0x1fca) + 0xc;
              aiStack_da[iVar9] = *(int *)(iVar5 + 0x1f8a) + 8;
              aiStack_68[iVar9] = 0;
              local_70 = local_70 + 1;
            }
            iVar9 = *(int *)(local_6e * 2 + 0x1d6a);
            if (iVar9 == 0) {
              iVar9 = 0;
            }
            else if (iVar9 < 1) {
              iVar9 = -1;
            }
            else {
              iVar9 = 1;
            }
            iVar5 = *(int *)0x1f8a - *(int *)(local_6e * 2 + 0x1f8a);
            if (iVar5 == -0x10) {
              iVar5 = 0;
            }
            else if (iVar5 == -0x10 || iVar5 + 0x10 < 0) {
              iVar5 = -1;
            }
            else {
              iVar5 = 1;
            }
            if ((iVar5 != iVar9) || (*(int *)0x1844 != 0)) {
              iVar9 = FUN_1000_efc8();
              iVar5 = local_6e * 2;
              if (iVar9 % 0x20 + *(int *)0x1f8a != *(int *)(iVar5 + 0x1f8a)) {
                iVar9 = FUN_1000_efc8();
                if ((iVar9 % 0x20 - *(int *)(iVar5 + 0x1f8a)) + *(int *)0x1f8a < 1) {
                  iVar9 = -1;
                }
                else {
                  iVar9 = 1;
                }
                *(int *)(iVar5 + 0x1d6a) = *(int *)(iVar5 + 0x1d6a) + iVar9;
              }
            }
            uVar6 = *(uint *)(local_6e * 2 + 0x1d6a);
            if ((0x14 < (int)((uVar6 ^ (int)uVar6 >> 0xf) - ((int)uVar6 >> 0xf))) && (uVar6 != 0)) {
              if ((int)uVar6 < 1) {
                iVar9 = -1;
              }
              else {
                iVar9 = 1;
              }
              piVar1 = (int *)(local_6e * 2 + 0x1d6a);
              *piVar1 = *piVar1 - iVar9;
            }
            iVar9 = local_6e * 2;
            if (*(int *)(iVar9 + 0x1822) < *(int *)(iVar9 + 0x1fca)) {
              *(int *)(iVar9 + 0x1d8a) = *(int *)(iVar9 + 0x1d8a) + -1;
            }
            if (*(int *)(local_6e * 2 + 0x1fca) < 0x1e) {
              piVar1 = (int *)(local_6e * 2 + 0x1d8a);
              *piVar1 = *piVar1 + 1;
            }
          }
        }
        else if (iVar9 == 2) {
          iVar9 = FUN_1000_efc8();
          if (((iVar9 % 10 == 0) && (iVar9 = local_6e * 2, *(int *)(iVar9 + 0x1fca) < -0x1f)) &&
             (local_48 < local_44)) {
            iVar5 = FUN_1000_efc8();
            *(int *)(iVar9 + 0x1fca) = (iVar5 % 3 + 1) * 0x20;
            iVar5 = FUN_1000_efc8();
            iVar5 = (iVar5 % 2) * 0x4c0 + -0x140;
            *(int *)(iVar9 + 0x1f8a) = iVar5;
            if (iVar5 == 0x140) {
              iVar9 = 0;
            }
            else if (-*(int *)(iVar9 + 0x1f8a) == -0x140 || -*(int *)(iVar9 + 0x1f8a) + 0x140 < 0) {
              iVar9 = -1;
            }
            else {
              iVar9 = 1;
            }
            iVar5 = FUN_1000_efc8();
            *(int *)(local_6e * 2 + 0x1d6a) = (iVar5 % 4 + 0xc) * iVar9;
            *(undefined2 *)(local_6e * 2 + 0x1d8a) = 0;
          }
          iVar9 = *(int *)(local_6e * 2 + 0x1f8a) + *(int *)(local_6e * 2 + 0x1d6a);
          if ((iVar9 < -0x13f) || (0x37f < iVar9)) {
            *(undefined2 *)(local_6e * 2 + 0x1fca) = 0xffe0;
          }
          if (-0x20 < *(int *)(local_6e * 2 + 0x1fca)) {
            iVar9 = FUN_1000_efc8();
            iVar9 = iVar9 % ((3 - *(int *)0x20c6) * 10 + *(int *)0x181e * -0xd);
            if ((((iVar9 == 0) && (local_70 < 0x10)) && (0 < *(int *)(local_6e * 2 + 0x1f8a))) &&
               (*(int *)(local_6e * 2 + 0x1f8a) < 0x241)) {
              local_72 = iVar9;
              do {
                if (0x15f < aiStack_fa[local_72]) {
                  local_74 = local_72;
                }
                iVar9 = local_74;
                local_72 = local_72 + 1;
              } while (local_72 < 0x10);
              iVar5 = local_6e * 2;
              aiStack_fa[local_74] = *(int *)(iVar5 + 0x1fca) + 0x14;
              aiStack_da[iVar9] = *(int *)(iVar5 + 0x1f8a) + 0x10;
              aiStack_68[iVar9] = 0;
              local_70 = local_70 + 1;
            }
          }
        }
        else if (iVar9 == 3) {
          iVar9 = FUN_1000_efc8();
          if (((iVar9 % ((7 - *(int *)0x20c6) * 0x14 + *(int *)0x181e * -0x1e) == 0) &&
              (iVar9 = local_6e * 2, *(int *)(iVar9 + 0x1fca) < -0x1f)) && (local_48 < local_44)) {
            *(undefined2 *)(iVar9 + 0x1fca) = 0xffe1;
            iVar5 = FUN_1000_efc8();
            iVar5 = iVar5 % 0x200 + 0x20;
            *(int *)(iVar9 + 0x1f8a) = iVar5;
            if (iVar5 == 0x140) {
              iVar9 = 0;
            }
            else if (-iVar5 == -0x140 || -iVar5 + 0x140 < 0) {
              iVar9 = -1;
            }
            else {
              iVar9 = 1;
            }
            iVar5 = FUN_1000_efc8();
            iVar8 = local_6e * 2;
            *(int *)(iVar8 + 0x1d6a) = (iVar5 * iVar9) % 8;
            iVar9 = FUN_1000_efc8();
            *(int *)(iVar8 + 0x1d8a) = iVar9 % 8 + 8;
          }
          if (-0x20 < *(int *)(local_6e * 2 + 0x1fca)) {
            if (0x32 < *(int *)(local_6e * 2 + 0x1fca)) {
              piVar1 = (int *)(local_6e * 2 + 0x1d8a);
              *piVar1 = *piVar1 + -1;
            }
            iVar9 = FUN_1000_efc8();
            iVar9 = iVar9 % ((3 - *(int *)0x20c6) * 10 + *(int *)0x181e * -0xd);
            if ((iVar9 == 0) && (local_6c < 0x10)) {
              local_72 = iVar9;
              do {
                if (0x15f < aiStack_ba[local_72]) {
                  local_74 = local_72;
                }
                iVar9 = local_74;
                local_72 = local_72 + 1;
              } while (local_72 < 0x10);
              iVar5 = local_6e * 2;
              aiStack_ba[local_74] = *(int *)(iVar5 + 0x1fca) + 0x18;
              iVar5 = *(int *)(iVar5 + 0x1f8a) + 0x20;
              aiStack_98[iVar9] = iVar5;
              uVar6 = 0x20 - (iVar5 - *(int *)0x1f8a);
              uVar7 = (int)uVar6 >> 0xf;
              if ((int)((uVar6 ^ uVar7) - uVar7) < 0x21) {
                iVar5 = FUN_1000_efc8();
                iVar9 = local_74;
                aiStack_42[local_74] = iVar5 % 6 + 8;
                iVar5 = FUN_1000_efc8();
                aiStack_22[iVar9] = iVar5 % 5 + -2;
              }
              else {
                iVar5 = FUN_1000_efc8();
                aiStack_42[iVar9] = iVar5 % 6 + 8;
                iVar5 = *(int *)0x1f8a;
                if (aiStack_98[iVar9] == iVar5) {
                  iVar9 = 0;
                }
                else if (iVar5 == aiStack_98[iVar9] || iVar5 - aiStack_98[iVar9] < 0) {
                  iVar9 = -1;
                }
                else {
                  iVar9 = 1;
                }
                iVar5 = FUN_1000_efc8();
                aiStack_22[local_74] = (iVar5 % 6 + 2) * iVar9;
              }
              local_6c = local_6c + 1;
            }
          }
        }
        else if (iVar9 == 4) {
          iVar9 = FUN_1000_efc8();
          if (((iVar9 % 0x14 == 0) && (iVar9 = local_6e * 2, *(int *)(iVar9 + 0x1fca) < -0x1f)) &&
             (local_48 < local_44)) {
            iVar5 = FUN_1000_efc8();
            *(int *)(iVar9 + 0x1fca) = (iVar5 % 5 + 1) * 0x20;
            iVar5 = FUN_1000_efc8();
            iVar5 = (iVar5 % 2) * 0x4c0 + -0x140;
            *(int *)(iVar9 + 0x1f8a) = iVar5;
            if (iVar5 == 0x140) {
              iVar9 = 0;
            }
            else if (-*(int *)(iVar9 + 0x1f8a) == -0x140 || -*(int *)(iVar9 + 0x1f8a) + 0x140 < 0) {
              iVar9 = -1;
            }
            else {
              iVar9 = 1;
            }
            iVar5 = local_6e * 2;
            *(int *)(iVar5 + 0x1d6a) = iVar9 * 0x14;
            *(undefined2 *)(iVar5 + 0x1d8a) = 0;
            iVar9 = FUN_1000_efc8();
            *(int *)(iVar5 + 0x1822) = iVar9 % 0x240 + 0x20;
          }
          iVar9 = *(int *)(local_6e * 2 + 0x1f8a) + *(int *)(local_6e * 2 + 0x1d6a);
          if ((iVar9 < -0x13f) || (0x37f < iVar9)) {
            *(undefined2 *)(local_6e * 2 + 0x1fca) = 0xffe0;
          }
          if ((-0x20 < *(int *)(local_6e * 2 + 0x1fca)) &&
             (iVar9 = local_6e * 2,
             *(int *)(iVar9 + 0x1f8a) + *(int *)(iVar9 + 0x1d6a) < *(int *)(iVar9 + 0x1822) !=
             *(int *)(iVar9 + 0x1f8a) < *(int *)(iVar9 + 0x1822))) {
            for (local_9a = 0; local_9a < 5; local_9a = local_9a + 1) {
              local_72 = 0;
              do {
                if (0x15f < aiStack_ba[local_72]) {
                  local_74 = local_72;
                }
                iVar9 = local_74;
                local_72 = local_72 + 1;
              } while (local_72 < 0x10);
              iVar5 = local_6e * 2;
              aiStack_ba[local_74] = *(int *)(iVar5 + 0x1fca) + 0xe;
              iVar5 = *(int *)(iVar5 + 0x1f8a) + 0xe;
              aiStack_98[iVar9] = iVar5;
              uVar6 = 0x20 - (iVar5 - *(int *)0x1f8a);
              uVar7 = (int)uVar6 >> 0xf;
              if ((int)((uVar6 ^ uVar7) - uVar7) < 0x21) {
                iVar5 = FUN_1000_efc8();
                iVar9 = local_74;
                aiStack_42[local_74] = iVar5 % 6 + 8;
                iVar5 = FUN_1000_efc8();
                aiStack_22[iVar9] = iVar5 % 5 + -2;
              }
              else {
                iVar5 = FUN_1000_efc8();
                aiStack_42[iVar9] = iVar5 % 6 + 8;
                iVar5 = *(int *)0x1f8a;
                if (aiStack_98[iVar9] == iVar5) {
                  iVar9 = 0;
                }
                else if (iVar5 == aiStack_98[iVar9] || iVar5 - aiStack_98[iVar9] < 0) {
                  iVar9 = -1;
                }
                else {
                  iVar9 = 1;
                }
                iVar5 = FUN_1000_efc8();
                aiStack_22[local_74] = (iVar5 % 6 + 2) * iVar9;
              }
              local_6c = local_6c + 1;
            }
            iVar9 = local_6e * 2;
            *(undefined2 *)(iVar9 + 0x1faa) = 9;
            *(undefined2 *)(iVar9 + 0x1d6a) = 0;
            *(undefined2 *)(iVar9 + 0x1d8a) = 0;
          }
        }
        else if (iVar9 == 9) {
          iVar9 = FUN_1000_efc8();
          if (((iVar9 % 0xf == 0) && (iVar9 = local_6e * 2, *(int *)(iVar9 + 0x1fca) < -0x1f)) &&
             (local_48 < local_44)) {
            iVar5 = FUN_1000_efc8();
            *(int *)(iVar9 + 0x1822) = (iVar5 % 3 + 3) * 0x20;
            iVar5 = FUN_1000_efc8();
            *(int *)(iVar9 + 0x1fca) = (iVar5 % 2) * 0x40 + *(int *)(iVar9 + 0x1822) + -0x20;
            iVar5 = FUN_1000_efc8();
            iVar5 = (iVar5 % 2) * 0x4e0 + -0x140;
            *(int *)(iVar9 + 0x1f8a) = iVar5;
            if (iVar5 == 0x140) {
              iVar9 = 0;
            }
            else if (-*(int *)(iVar9 + 0x1f8a) == -0x140 || -*(int *)(iVar9 + 0x1f8a) + 0x140 < 0) {
              iVar9 = -1;
            }
            else {
              iVar9 = 1;
            }
            iVar5 = FUN_1000_efc8();
            *(int *)(local_6e * 2 + 0x1d6a) = (iVar5 % 5 + 5) * iVar9;
            *(undefined2 *)(local_6e * 2 + 0x1d8a) = 0;
          }
          if (local_44 <= local_48) {
            iVar9 = *(int *)(local_6e * 2 + 0x1d6a);
            if (iVar9 == 0) {
              iVar9 = 0;
            }
            else if (iVar9 < 1) {
              iVar9 = -1;
            }
            else {
              iVar9 = 1;
            }
            *(int *)(local_6e * 2 + 0x1d6a) = iVar9 * 10;
          }
          iVar9 = *(int *)(local_6e * 2 + 0x1f8a) + *(int *)(local_6e * 2 + 0x1d6a);
          if ((iVar9 < -0x13f) || (0x39f < iVar9)) {
            *(undefined2 *)(local_6e * 2 + 0x1fca) = 0xffe0;
            *(undefined2 *)(local_6e * 2 + 0x1d8a) = 0;
          }
          if (-0x20 < *(int *)(local_6e * 2 + 0x1fca)) {
            iVar9 = local_6e * 2;
            if (*(int *)(iVar9 + 0x1822) != *(int *)(iVar9 + 0x1fca)) {
              if (-(*(int *)(iVar9 + 0x1fca) - *(int *)(iVar9 + 0x1822)) < 1) {
                iVar5 = -1;
              }
              else {
                iVar5 = 1;
              }
              *(int *)(iVar9 + 0x1d8a) = *(int *)(iVar9 + 0x1d8a) + iVar5;
            }
          }
        }
      }
    }
    if (((local_46 == 0) && (local_44 <= local_48)) && (*(int *)0x1dc0 == 0)) goto LAB_1000_380a;
    for (local_6e = 0; iVar9 = local_6e, local_6e < *(int *)0x1d48; local_6e = local_6e + 1) {
      if (-0x10 < aiStack_15c[local_6e]) {
        iVar5 = *(int *)0x181e;
        aiStack_15c[local_6e] = aiStack_15c[local_6e] + (iVar5 + 2) * -6;
        aiStack_11a[iVar9] = aiStack_11a[iVar9] + aiStack_13c[iVar9] * (iVar5 + 2) * 2;
        for (local_72 = 1; iVar9 = local_6e, local_72 <= *(int *)0x17f4; local_72 = local_72 + 1) {
          if ((9 < *(int *)(local_72 * 2 + 0x1faa)) && (-0x20 < *(int *)(local_72 * 2 + 0x1fca))) {
            uVar6 = *(uint *)(local_72 * 2 + 0x17f6);
            if (uVar6 == 9) {
              iVar5 = *(int *)(local_72 * 2 + 0x1f8a);
              if ((((iVar5 + -8 <= aiStack_11a[local_6e]) && (aiStack_11a[local_6e] <= iVar5 + 0x18)
                   ) && (iVar5 = *(int *)(local_72 * 2 + 0x1fca),
                        iVar5 + -0xc <= aiStack_15c[local_6e])) &&
                 (aiStack_15c[local_6e] <= iVar5 + 0x18)) {
                FUN_1000_824a(local_72);
                if (*(int *)0x181e == 0) {
                  aiStack_15c[iVar9] = -0x10;
                }
                local_48 = local_48 + 1;
                if (((*(int *)0x1dc0 == 0) &&
                    (iVar9 = local_72 * 2, 0x1f < *(int *)(iVar9 + 0x1f8a))) &&
                   (*(int *)(iVar9 + 0x1f8a) < 0x241)) {
                  FUN_1000_9d84();
                  *(int *)0x193e = *(int *)(iVar9 + 0x1f8a) + 8;
                  *(int *)0x1d40 = *(int *)(iVar9 + 0x1fca) + 8;
                  *(undefined2 *)0x1db2 = 0;
                  *(undefined2 *)0x1db4 = 8;
                  *(undefined2 *)0x1d44 = 0xffff;
                }
              }
            }
            else if (uVar6 < 10) {
              cVar3 = (char)uVar6;
              if (cVar3 == '\x01') {
                iVar5 = *(int *)(local_72 * 2 + 0x1f8a);
                if (iVar5 + -8 <= aiStack_11a[local_6e]) {
                  iVar5 = iVar5 + 0x18;
LAB_1000_2e40:
                  if (((aiStack_11a[local_6e] <= iVar5) &&
                      (iVar5 = *(int *)(local_72 * 2 + 0x1fca),
                      iVar5 + -0xc <= aiStack_15c[local_6e])) &&
                     (aiStack_15c[local_6e] <= iVar5 + 0x18)) {
                    FUN_1000_824a(local_72);
                    local_48 = local_48 + 1;
                    if (*(int *)0x181e == 0) {
                      aiStack_15c[iVar9] = -0x10;
                    }
                  }
                }
              }
              else if ((('\0' < (char)(cVar3 + -1)) && ((char)(cVar3 + -2) < '\x03')) &&
                      (iVar5 = *(int *)(local_72 * 2 + 0x1f8a), iVar5 + -8 <= aiStack_11a[local_6e])
                      ) {
                iVar5 = iVar5 + 0x38;
                goto LAB_1000_2e40;
              }
            }
          }
        }
        if ((aiStack_11a[local_6e] < 0x10) || (0x260 < aiStack_11a[local_6e])) {
          aiStack_15c[local_6e] = -0x10;
        }
        if (aiStack_15c[local_6e] < -0xf) {
          local_78 = local_78 + -1;
        }
      }
    }
    local_6e = 0;
    do {
      iVar9 = local_6e;
      if (aiStack_fa[local_6e] < 0x160) {
        if (aiStack_68[local_6e] < 0x10) {
          aiStack_68[local_6e] = aiStack_68[local_6e] + 1;
        }
        aiStack_fa[local_6e] = aiStack_fa[local_6e] + aiStack_68[local_6e];
        if (((*(int *)0x1faa == 10) && (*(int *)0x1f8a + -4 <= aiStack_da[iVar9])) &&
           ((aiStack_da[iVar9] <= *(int *)0x1f8a + 0x34 &&
            ((*(int *)0x1fca <= aiStack_fa[iVar9] && (aiStack_fa[iVar9] <= *(int *)0x1fca + 0x18))))
           )) {
          *(undefined2 *)0x1faa = 9;
          aiStack_fa[iVar9] = 0x160;
          FUN_1000_cff4(4);
        }
        if (0x15f < aiStack_fa[local_6e]) {
          local_70 = local_70 + -1;
        }
      }
      local_6e = local_6e + 1;
    } while (local_6e < 0x10);
    for (local_6e = 0; iVar9 = local_6e, local_6e < 0x10; local_6e = local_6e + 1) {
      if (aiStack_ba[local_6e] < 0x160) {
        aiStack_ba[local_6e] = aiStack_ba[local_6e] + aiStack_42[local_6e];
        aiStack_98[iVar9] = aiStack_98[iVar9] + aiStack_22[iVar9];
        if ((aiStack_98[iVar9] < 0x1c) || (0x260 < aiStack_98[iVar9])) {
          aiStack_ba[local_6e] = 0x160;
        }
        else {
          if ((((*(int *)0x1faa == 10) && (*(int *)0x1f8a + -2 <= aiStack_98[local_6e])) &&
              (aiStack_98[local_6e] <= *(int *)0x1f8a + 0x3a)) &&
             ((*(int *)0x1fca + 6 <= aiStack_ba[local_6e] &&
              (aiStack_ba[local_6e] <= *(int *)0x1fca + 0x1a)))) {
            *(undefined2 *)0x1faa = 9;
            aiStack_ba[local_6e] = 0x160;
            FUN_1000_cff4(4);
          }
          if ((aiStack_ba[local_6e] < 0x160) && (-1 < aiStack_ba[local_6e])) goto LAB_1000_30f4;
        }
        local_6c = local_6c + -1;
      }
LAB_1000_30f4:
    }
    if (*(int *)0x1dc0 != 0) {
      if (*(int *)0x1d44 < 0) {
        *(int *)0x1d40 = *(int *)0x1d40 + *(int *)0x1db4;
      }
      else {
        *(int *)0x1d44 = *(int *)0x1d44 + -1;
      }
      if ((((*(int *)0x1f8a + -4 <= *(int *)0x193e) && (*(int *)0x193e <= *(int *)0x1f8a + 0x34)) &&
          (*(int *)0x1fca + 8 <= *(int *)0x1d40)) && (*(int *)0x1d40 <= *(int *)0x1fca + 0x20)) {
        if (*(int *)0x1dc0 == 4) {
          FUN_1000_83b5(0x2b8);
          local_6e = 1;
          do {
            iVar9 = local_6e * 2;
            if (((*(int *)(iVar9 + 0x1faa) == 10) && (*(int *)(iVar9 + 0x1fca) != -0x20)) &&
               ((-0x20 < *(int *)(iVar9 + 0x1f8a) && (*(int *)(iVar9 + 0x1f8a) < 0x260)))) {
              local_48 = local_48 + 1;
              FUN_1000_824a(local_6e);
            }
            local_6e = local_6e + 1;
          } while (local_6e < 0x10);
          for (local_6e = 0; local_6e < *(int *)0x1d48; local_6e = local_6e + 1) {
            aiStack_15c[local_6e] = -0x10;
          }
          local_78 = 0;
          local_70 = 0;
          local_6c = 0;
          for (local_6e = 0; iVar9 = local_6e, local_6e < 0x10; local_6e = local_6e + 1) {
            aiStack_fa[local_6e] = 0x160;
            aiStack_ba[iVar9] = 0x160;
          }
          FUN_1000_cff4(4);
          FUN_1000_8425(0x2b8);
          FUN_1000_a25a();
        }
        else {
          FUN_1000_80f0();
        }
        FUN_1000_a0d8();
        *(undefined2 *)0x1dc0 = 0;
        FUN_1000_cff4(6);
      }
      if ((*(int *)0x1d44 < 0) && (0x12f < *(int *)0x1d40)) {
        *(undefined2 *)0x1d40 = 0x130;
        *(undefined2 *)0x1d44 = 0x32;
      }
      if (*(int *)0x1d44 == 0) {
        *(undefined2 *)0x1dc0 = 0;
      }
    }
    for (local_6e = *(int *)0x17f4; 0 < local_6e; local_6e = local_6e + -1) {
      iVar9 = local_6e * 2;
      *(int *)(iVar9 + 0x1f8a) = *(int *)(iVar9 + 0x1f8a) + *(int *)(iVar9 + 0x1d6a);
      *(int *)(iVar9 + 0x1fca) = *(int *)(iVar9 + 0x1fca) + *(int *)(iVar9 + 0x1d8a);
    }
    *(int *)0x1f8a = *(int *)0x1f8a + *(int *)0x1d6a;
    *(byte *)0x1844 = *(byte *)0x1844 ^ 1;
    FUN_1000_b854(4,0,0x4b,0x139 - (uint)(3 < *(int *)0x193c),5);
    for (local_6e = *(int *)0x17f4; 0 < local_6e; local_6e = local_6e + -1) {
      if (((-0x20 < *(int *)(local_6e * 2 + 0x1fca)) &&
          (iVar9 = local_6e * 2, uVar6 = -(uint)(*(int *)(iVar9 + 0x17f6) == 2) & 0x20,
          -*(int *)(iVar9 + 0x1f8a) == uVar6 || (int)-uVar6 < *(int *)(iVar9 + 0x1f8a))) &&
         (*(int *)(iVar9 + 0x1f8a) < 0x260)) {
        if (*(int *)(local_6e * 2 + 0x1faa) < 10) {
          uVar6 = *(uint *)(local_6e * 2 + 0x17f6);
          if (uVar6 == 9) {
LAB_1000_335a:
            FUN_1000_8562(local_6e);
          }
          else if (uVar6 < 10) {
            cVar3 = (char)uVar6;
            if (cVar3 == '\x01') goto LAB_1000_335a;
            if (('\0' < (char)(cVar3 + -1)) && (cVar3 == '\x04' || (char)(cVar3 + -2) < '\x02')) {
              FUN_1000_85b8(local_6e);
            }
          }
        }
        else {
          iVar9 = *(int *)(local_6e * 2 + 0x17f6);
          if (iVar9 == 1) {
            iVar9 = local_6e * 2;
            if (*(int *)(iVar9 + 0x1fca) < 0) {
              iVar5 = *(int *)(iVar9 + 0x1d6a);
              FUN_1000_c322(*(undefined2 *)(iVar9 + 0x1f8a),*(undefined2 *)(iVar9 + 0x1fca),
                            (((-(uint)(7 < iVar5) & 2) - (-(uint)(iVar5 < -7) & 2)) -
                            (-(uint)(iVar5 < -2) & 2)) + (-(uint)(2 < *(int *)(iVar9 + 0x1d6a)) & 2)
                            + *(int *)0x1844 + 0x1a);
            }
            else {
              iVar9 = *(int *)(local_6e * 2 + 0x1d6a);
              iVar9 = (((-(uint)(7 < iVar9) & 2) - (-(uint)(iVar9 < -7) & 2)) -
                      (-(uint)(iVar9 < -2) & 2)) +
                      (-(uint)(2 < *(int *)(local_6e * 2 + 0x1d6a)) & 2) + *(int *)0x1844 + 0x1a;
LAB_1000_34d4:
              FUN_1000_bfd6(*(undefined2 *)(local_6e * 2 + 0x1f8a),
                            *(undefined2 *)(local_6e * 2 + 0x1fca),iVar9);
            }
          }
          else {
            if (iVar9 == 2) {
              uVar6 = -(uint)(0 < *(int *)(local_6e * 2 + 0x1d6a)) & 2;
              iVar9 = uVar6 + 0x25;
              iVar5 = uVar6 + 0x24;
LAB_1000_350e:
              local_166 = local_6e * 2;
            }
            else {
              if (iVar9 != 3) {
                if (iVar9 != 4) {
                  if (iVar9 == 9) {
                    iVar9 = 0x2f - (uint)(*(int *)(local_6e * 2 + 0x1d6a) < 1);
                    goto LAB_1000_34d4;
                  }
                  goto LAB_1000_3307;
                }
                uVar6 = -(uint)(0 < *(int *)(local_6e * 2 + 0x1d6a)) & 2;
                iVar9 = uVar6 + 0x35;
                iVar5 = uVar6 + 0x34;
                goto LAB_1000_350e;
              }
              iVar9 = *(int *)0x1844 * 2 + 0xd;
              iVar5 = (*(int *)0x1844 + 6) * 2;
              local_166 = local_6e << 1;
            }
            FUN_1000_88a2(*(undefined2 *)(local_166 + 0x1f8a),*(undefined2 *)(local_166 + 0x1fca),
                          iVar5,iVar9);
          }
        }
      }
LAB_1000_3307:
    }
    local_72 = *(int *)0x181e * 0x10 + *(int *)0x1d42 + 0x11;
    for (local_6e = 0; local_6e < *(int *)0x1d48; local_6e = local_6e + 1) {
      if (-0x10 < aiStack_15c[local_6e]) {
        if (aiStack_15c[local_6e] < 0) {
          FUN_1000_c322(aiStack_11a[local_6e],aiStack_15c[local_6e],aiStack_13c[local_6e] + local_72
                       );
        }
        else {
          FUN_1000_bfd6(aiStack_11a[local_6e],aiStack_15c[local_6e],aiStack_13c[local_6e] + local_72
                       );
        }
      }
    }
    local_72 = *(int *)0x1d42 + *(int *)0x184a + 0x1c;
    for (local_6e = 0; local_6e < 0x10; local_6e = local_6e + 1) {
      if (aiStack_fa[local_6e] < 0x160) {
        if (aiStack_fa[local_6e] < 0) {
          FUN_1000_c322(aiStack_da[local_6e],aiStack_fa[local_6e],local_72);
        }
        else {
          FUN_1000_bfd6(aiStack_da[local_6e],aiStack_fa[local_6e],local_72);
        }
      }
    }
    local_72 = *(int *)0x1844 + *(int *)0x1d46 + *(int *)0x1d42;
    local_6e = 0;
    do {
      if ((aiStack_ba[local_6e] < 0x160) && (-1 < aiStack_ba[local_6e])) {
        FUN_1000_bfd6(aiStack_98[local_6e],aiStack_ba[local_6e],local_72);
      }
      local_6e = local_6e + 1;
    } while (local_6e < 0x10);
    if (*(int *)0x1faa < 10) {
      FUN_1000_85b8(0);
    }
    else {
      FUN_1000_bfd6(*(undefined2 *)0x1f8a,(uint)(*(int *)0x193c < 4) + *(int *)0x1fca,2);
      FUN_1000_bfd6(*(int *)0x1f8a + 0x20,(uint)(*(int *)0x193c < 4) + *(int *)0x1fca,3);
    }
    if ((*(int *)0x1dc0 != 0) &&
       (((0xf < *(int *)0x1d44 || (*(int *)0x1d44 < 1)) || (*(int *)0x1844 != 0)))) {
      if ((*(int *)0x193c < 4) && (0 < *(int *)0x1d44)) {
        bVar2 = 1;
      }
      else {
        bVar2 = 0;
      }
      FUN_1000_bfd6(*(undefined2 *)0x193e,(uint)bVar2 + *(int *)0x1d40,
                    *(int *)0x1dc0 + *(int *)0x1d42 + 0x28);
    }
    FUN_1000_8292();
    for (local_6e = *(int *)0x17f4; 0 < local_6e; local_6e = local_6e + -1) {
      if (-1 < *(int *)(local_6e * 2 + 0x1fca)) {
        iVar9 = *(int *)(local_6e * 2 + 0x17f6);
        if (iVar9 == 1) {
          iVar9 = 6;
LAB_1000_375b:
          uVar4 = 3;
        }
        else {
          if (iVar9 == 2) {
            iVar9 = 2;
          }
          else if (iVar9 == 3) {
            iVar9 = 4;
          }
          else {
            if (iVar9 != 4) {
              if (iVar9 != 9) goto LAB_1000_3769;
              iVar9 = -(*(int *)0x1844 * 7 + -0xf);
              goto LAB_1000_375b;
            }
            iVar9 = 3;
          }
          uVar4 = 7;
        }
        FUN_1000_890a(local_6e,uVar4,iVar9);
      }
LAB_1000_3769:
    }
    FUN_1000_890a(0,7,0xf);
    while (iVar9 = FUN_1000_bf8e(), iVar9 != 0) {
      FUN_1000_bf98();
    }
    FUN_1000_e538(0x2130);
    do {
      uVar6 = FUN_1000_bb38();
    } while (uVar6 < *(uint *)0x1820);
    *(undefined2 *)0xdd0 = 0;
    out(0xa4,(byte)*(undefined2 *)0x1844);
    out(0xa6,(byte)*(undefined2 *)0x1844 ^ 1);
    FUN_1000_b4ee();
  } while( true );
}


