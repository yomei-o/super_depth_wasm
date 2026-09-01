/* 1000:d4f2 */

/* WARNING: Instruction at (ram,0x00016ed8) overlaps instruction at (ram,0x00016ed7)
    */
/* WARNING: Removing unreachable block (ram,0x00017e1e) */

int __cdecl16near FUN_1000_d4f2(int *param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  char *pcVar3;
  byte *pbVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int in_CX;
  int *piVar9;
  uint uVar10;
  undefined1 *unaff_DI;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar11;
  int aiStack_480 [100];
  int iStack_3b8;
  int iStack_3b6;
  int aiStack_3b4 [16];
  int iStack_394;
  int aiStack_392 [16];
  int iStack_372;
  int *piStack_370;
  int aiStack_36e [16];
  int *piStack_34e;
  int *piStack_34c;
  int iStack_34a;
  int aiStack_346 [116];
  int iStack_25e;
  int aiStack_25c [16];
  int aiStack_23c [4];
  int iStack_234;
  int aiStack_232 [16];
  int iStack_212;
  int iStack_210;
  int aiStack_20e [16];
  int iStack_1ee;
  uint auStack_1e4 [16];
  int aiStack_1c4 [47];
  uint uStack_166;
  uint uStack_164;
  uint uStack_162;
  uint uStack_160;
  uint uStack_15e;
  int aiStack_15c [16];
  int aiStack_13c [16];
  int iStack_11c;
  int aiStack_11a [5];
  int iStack_110;
  int iStack_10e;
  int iStack_10c;
  int aiStack_10a [7];
  uint auStack_fc [9];
  undefined2 auStack_ea [7];
  int aiStack_dc [2];
  int *piStack_d8;
  int *piStack_d6;
  int iStack_d4;
  int aiStack_d2 [12];
  int aiStack_ba [3];
  int *piStack_b4;
  int aiStack_b2 [12];
  int iStack_9a;
  int aiStack_98 [3];
  int *piStack_92;
  int iStack_90;
  int aiStack_8e [8];
  int aiStack_7e [5];
  int iStack_74;
  int iStack_72;
  int iStack_70;
  int aiStack_6e [16];
  undefined2 uStack_4e;
  int aiStack_4c [5];
  int aiStack_42 [11];
  int iStack_2c;
  int iStack_2a;
  int iStack_28;
  int iStack_26;
  int aiStack_24 [8];
  undefined2 uStack_14;
  undefined2 uStack_12;
  int *piStack_10;
  int *piStack_e;
  int *piStack_c;
  int local_6;
  int local_4;
  
  local_6 = 0;
LAB_1000_d4fe:
  pcVar3 = *(char **)param_1;
  if (*pcVar3 == '\0') {
    return local_6;
  }
  *(char *)(param_1 + 4) = *pcVar3;
  *param_1 = *param_1 + 1;
  iVar7 = (int)(char)param_1[4];
  if (iVar7 == 0x4f) {
    pbVar4 = *(byte **)param_1;
    if ((0x30 < *pbVar4) && (*pbVar4 < 0x39)) {
      param_1[5] = *pbVar4 - 0x30;
      *param_1 = *param_1 + 1;
    }
    goto LAB_1000_d79a;
  }
  uVar8 = iVar7 - 0x3c;
  if ((uVar8 & 1) == 0) {
    bVar11 = uVar8 == 0x18;
    switch(iVar7) {
    case 0x3c:
      if (1 < param_1[5]) {
        param_1[5] = param_1[5] + -1;
      }
      break;
    case 0x3d:
      goto switchD_1000_d77b_caseD_3d;
    case 0x3e:
      if (param_1[5] < 8) {
        param_1[5] = param_1[5] + 1;
      }
      break;
    case 0x3f:
      piStack_e = (int *)*(undefined2 *)0xb8b;
      piStack_c = (int *)*(undefined2 *)0xb8d;
      piVar9 = &iStack_2c;
      iVar7 = -1;
      goto code_r0x0001aaf3;
    default:
      goto switchD_1000_d77b_caseD_40;
    case 0x41:
    case 0x43:
    case 0x45:
    case 0x47:
    case 0x49:
    case 0x4f:
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    case 0x4b:
      bVar11 = SBORROW2((int)param_1 + -1,-0x79c7) !=
               SBORROW2((int)(param_1 + 0x3ce3),(uint)(uVar8 < 0x18));
      iVar7 = (int)(param_1 + 0x3ce3) - (uint)(uVar8 < 0x18);
      goto code_r0x00016edc;
    case 0x4c:
      local_4 = 0;
      while ((pbVar4 = *(byte **)param_1, 0x2f < *pbVar4 && (*pbVar4 < 0x3a))) {
        in_CX = local_4 * 10;
        local_4 = (uint)*pbVar4 + in_CX + -0x30;
        *param_1 = *param_1 + 1;
      }
      if ((0 < local_4) && (local_4 < 0x21)) {
        param_1[7] = local_4;
      }
      break;
    case 0x4d:
      goto switchD_1000_d77b_caseD_4d;
    case 0x4e:
      if (**(char **)param_1 == '1') {
        param_1[10] = 1;
      }
      else {
        param_1[10] = 0;
      }
      break;
    case 0x51:
      goto switchD_1000_d77b_caseD_51;
    case 0x52:
      local_4 = 0;
      while ((pbVar4 = *(byte **)param_1, 0x2f < *pbVar4 && (*pbVar4 < 0x3a))) {
        in_CX = local_4 * 10;
        local_4 = (uint)*pbVar4 + in_CX + -0x30;
        *param_1 = *param_1 + 1;
      }
      param_1[6] = local_4;
      if ((local_4 < 1) || (0x20 < local_4)) {
        param_1[6] = param_1[7];
      }
      param_1[8] = *(int *)(param_1[6] * 4 + 0xfae);
      if (**(char **)param_1 == '.') {
        param_1[8] = param_1[8] * 3;
        param_1[8] = param_1[8] >> 1;
        *param_1 = *param_1 + 1;
      }
      *(undefined1 *)(param_1 + 4) = 0x48;
      goto LAB_1000_d6a1;
    case 0x53:
      piStack_b4 = (int *)(0x28 - *(int *)0x1d48 << ((byte)in_CX & 0x1f));
      if (*(int *)0x181e == 1) {
        iVar7 = *(int *)0x181e * 3;
      }
      else {
        iVar7 = *(int *)0x20c6 * 6;
      }
      piStack_d8 = (int *)(iVar7 + *(int *)0x1d42);
      for (piStack_92 = (int *)0x0; (int)piStack_92 < *(int *)0x1d48;
          piStack_92 = (int *)((int)piStack_92 + 1)) {
        if (aiStack_10a[(int)piStack_92] < 0x130) {
          piStack_c = (int *)aiStack_10a[(int)piStack_92];
          piStack_e = (int *)aiStack_d2[(int)piStack_92 + -1];
          piStack_10 = (int *)0x1d3d;
          FUN_1000_bfd6();
        }
        else {
          piStack_c = (int *)0x6;
          piStack_e = piStack_b4;
          piStack_10 = (int *)0x1d6a;
          FUN_1000_bfd6();
          piStack_b4 = piStack_b4 + 8;
        }
      }
      piStack_d8 = (int *)(*(int *)0x1d42 + *(int *)0x1846 + 0x19);
      piStack_92 = (int *)0x0;
      do {
        if (0x20 < aiStack_6e[(int)piStack_92]) {
          piStack_c = (int *)aiStack_6e[(int)piStack_92];
          piStack_e = (int *)aiStack_4c[(int)piStack_92];
          piStack_10 = (int *)0x1da1;
          FUN_1000_bfd6();
        }
        piStack_92 = (int *)((int)piStack_92 + 1);
      } while ((int)piStack_92 < 0x10);
      piStack_d8 = (int *)(*(int *)0x1d42 + 0xc);
      for (piStack_92 = (int *)0x0; (int)piStack_92 < 8; piStack_92 = (int *)((int)piStack_92 + 1))
      {
        if (-0x10 < aiStack_8e[(int)piStack_92]) {
          if (aiStack_8e[(int)piStack_92] < 0) {
            piStack_c = (int *)aiStack_8e[(int)piStack_92];
            piStack_e = (int *)aiStack_7e[(int)piStack_92];
            piStack_10 = (int *)0x1e1c;
            FUN_1000_c322();
          }
          else {
            piStack_c = (int *)aiStack_8e[(int)piStack_92];
            piStack_e = (int *)aiStack_7e[(int)piStack_92];
            piStack_10 = (int *)0x1de1;
            FUN_1000_bfd6();
          }
        }
      }
      if (*(int *)0x1faa < 10) {
        piStack_c = (int *)0x1e2b;
        FUN_1000_85b8();
      }
      else {
        piStack_c = (int *)((uint)(*(int *)0x193c < 4) + *(int *)0x1fca);
        piStack_e = (int *)*(undefined2 *)0x1f8a;
        piStack_10 = (int *)0x1e4f;
        FUN_1000_bfd6();
        piStack_c = (int *)((uint)(*(int *)0x193c < 4) + *(int *)0x1fca);
        piStack_e = (int *)(*(int *)0x1f8a + 0x20);
        piStack_10 = (int *)0x1e74;
        FUN_1000_bfd6();
      }
      if ((*(int *)0x1dc0 != 0) &&
         (((0xf < *(int *)0x1d44 || (*(int *)0x1d44 < 1)) || (*(int *)0x1844 != 0)))) {
        if ((*(int *)0x193c < 4) && (0 < *(int *)0x1d44)) {
          iStack_110 = 1;
        }
        else {
          iStack_110 = 0;
        }
        piStack_c = (int *)((uint)(iStack_110 != 0) + *(int *)0x1d40);
        piStack_e = (int *)*(int *)0x193e;
        piStack_10 = (int *)0x1ecf;
        FUN_1000_bfd6();
      }
      FUN_1000_8292();
      for (piStack_92 = (int *)*(int *)0x17f4; 0 < (int)piStack_92;
          piStack_92 = (int *)((int)piStack_92 + -1)) {
        if (0xf < *(int *)((int)piStack_92 * 2 + 0x1fca)) {
          iVar7 = *(int *)((int)piStack_92 * 2 + 0x17f6);
          if ((iVar7 == 1) || (iVar7 == 2)) {
LAB_1000_1ee1:
            piStack_c = (int *)0x7;
          }
          else {
            if (iVar7 != 3) {
              if (iVar7 == 4) goto LAB_1000_1ee1;
              if (iVar7 != 9) goto LAB_1000_1ef0;
            }
            piStack_c = (int *)0x3;
          }
          piStack_e = piStack_92;
          piStack_10 = (int *)0x1eed;
          FUN_1000_890a();
        }
LAB_1000_1ef0:
      }
      piStack_c = (int *)0x7;
      piStack_e = (int *)0x0;
      piStack_10 = (int *)0x1f5e;
      FUN_1000_890a();
      while (iVar7 = FUN_1000_bf8e(), iVar7 != 0) {
        FUN_1000_bf98();
      }
      piStack_c = (int *)0x1f75;
      FUN_1000_e538();
      do {
        uVar8 = FUN_1000_bb38();
      } while (uVar8 < *(uint *)0x1820);
      *(undefined2 *)0xdd0 = 0;
      out(0xa4,(byte)*(undefined2 *)0x1844);
      out(0xa6,(byte)*(undefined2 *)0x1844 ^ 1);
      piStack_c = (int *)0x13f;
      piStack_e = (int *)0x4b;
      piStack_10 = (int *)0x0;
      uStack_12 = 4;
      uStack_14 = 0x1fa3;
      FUN_1000_b854();
      FUN_1000_8184();
      piStack_c = (int *)0x99d;
      aiStack_dc[1] = FUN_1000_e3c8();
      if (((aiStack_dc[1] != 0) || (*(int *)0x213e != 0)) && (FUN_1000_9e70(), *(int *)0x184c == 0))
      {
        iVar7 = FUN_1000_1faa();
        return iVar7;
      }
      *(undefined2 *)0x1d6a = 0;
      if (*(int *)0x1faa < 10) {
        iStack_10e = *(int *)0x1faa;
        *(int *)0x1faa = *(int *)0x1faa + -1;
        if (iStack_10e < 1) {
          uStack_4e = 1;
          *(int *)0x1842 = *(int *)0x1842 + -1;
          iVar7 = FUN_1000_1faa();
          return iVar7;
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
           ((iStack_90 < *(int *)0x1d48 && (piStack_d6 != (int *)0x0)))) {
          for (piStack_92 = (int *)0x0; (int)piStack_92 < *(int *)0x1d48;
              piStack_92 = (int *)((int)piStack_92 + 1)) {
            if (0x12f < aiStack_10a[(int)piStack_92]) {
              piStack_b4 = piStack_92;
              break;
            }
          }
          piVar9 = piStack_b4;
          aiStack_10a[(int)piStack_b4] = *(int *)0x1fca;
          iVar7 = *(int *)0x1f8a;
          aiStack_d2[(int)piVar9 + -1] = iVar7 + -0x10;
          aiStack_b2[(int)piVar9] = iVar7 + -0x10;
          aiStack_24[(int)piVar9] = *(int *)0x20c6 * -7;
          iStack_90 = iStack_90 + 1;
          piStack_d6 = (int *)0x0;
          piStack_c = (int *)0xab5;
          FUN_1000_cff4();
        }
        if ((*(int *)0x213a == 0) || (*(int *)0x212c != 0)) {
          if (*(int *)0x2138 != 0) {
            bVar11 = *(int *)0x212c == 0;
switchD_1000_d77b_caseD_4d:
            if (!bVar11) goto LAB_1000_0ad7;
          }
        }
        else {
LAB_1000_0ad7:
          if ((iStack_90 < *(int *)0x1d48) && (piStack_d6 != (int *)0x0)) {
            for (piStack_92 = (int *)0x0; (int)piStack_92 < *(int *)0x1d48;
                piStack_92 = (int *)((int)piStack_92 + 1)) {
              if (0x12f < aiStack_10a[(int)piStack_92]) {
                piStack_b4 = piStack_92;
                break;
              }
            }
            piVar9 = piStack_b4;
            aiStack_10a[(int)piStack_b4] = *(int *)0x1fca;
            iVar7 = *(int *)0x1f8a;
            aiStack_d2[(int)piVar9 + -1] = iVar7 + 0x40;
            aiStack_b2[(int)piVar9] = iVar7 + 0x40;
            aiStack_24[(int)piVar9] = *(int *)0x20c6 * 7;
            iStack_90 = iStack_90 + 1;
            piStack_d6 = (int *)0x0;
            piStack_c = (int *)0xb51;
            FUN_1000_cff4();
          }
        }
        if ((*(int *)0x2138 == 0) && (*(int *)0x213a == 0)) {
          piStack_d6 = (int *)0x1;
        }
      }
      iStack_2a = 0;
      piStack_92 = (int *)0x1;
      do {
        if (*(int *)0x17f4 < (int)piStack_92) {
          iVar7 = FUN_1000_13e0();
          return iVar7;
        }
        if (*(int *)((int)piStack_92 * 2 + 0x1fca) != 0) {
          iStack_2a = iStack_2a + 1;
        }
        iVar7 = (int)piStack_92 * 2;
        if (*(int *)(iVar7 + 0x1faa) < 10) {
          piVar1 = (int *)(iVar7 + 0x1faa);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            *(undefined2 *)(iVar7 + 0x1fca) = 0;
            *(undefined2 *)(iVar7 + 0x1d8a) = 0;
            *(undefined2 *)(iVar7 + 0x1faa) = 10;
          }
        }
        else {
          iVar7 = *(int *)((int)piStack_92 * 2 + 0x17f6);
          if (iVar7 == 1) {
            iVar7 = FUN_1000_efc8();
            if (((iVar7 % 0xf == 0) && (iVar7 = (int)piStack_92 * 2, *(int *)(iVar7 + 0x1fca) == 0))
               && (iStack_2c < iStack_28)) {
              iVar6 = FUN_1000_efc8();
              *(int *)(iVar7 + 0x1fca) = (iVar6 % 7 + 2) * 0x20;
              iVar6 = FUN_1000_efc8();
              iVar6 = (iVar6 % 2) * 0x4c0 + -0x140;
              *(int *)(iVar7 + 0x1f8a) = iVar6;
              if (iVar6 == 0x140) {
                iStack_10e = 0;
              }
              else if (-*(int *)(iVar7 + 0x1f8a) == -0x140 || -*(int *)(iVar7 + 0x1f8a) + 0x140 < 0)
              {
                iStack_10e = -1;
              }
              else {
                iStack_10e = 1;
              }
              iVar7 = FUN_1000_efc8();
              *(int *)((int)piStack_92 * 2 + 0x1d6a) = (iVar7 % 4 + 2) * iStack_10e;
              *(undefined2 *)((int)piStack_92 * 2 + 0x1d8a) = 0;
            }
            if (iStack_28 <= iStack_2c) {
              iVar7 = *(int *)((int)piStack_92 * 2 + 0x1d6a);
              if (iVar7 == 0) {
                iStack_10e = 0;
              }
              else if (iVar7 < 1) {
                iStack_10e = -1;
              }
              else {
                iStack_10e = 1;
              }
              *(int *)((int)piStack_92 * 2 + 0x1d6a) = iStack_10e << 3;
            }
            iVar7 = *(int *)((int)piStack_92 * 2 + 0x1f8a) + *(int *)((int)piStack_92 * 2 + 0x1d6a);
            if ((iVar7 < -0x13f) || (0x37f < iVar7)) {
              *(undefined2 *)((int)piStack_92 * 2 + 0x1fca) = 0;
            }
            if (*(int *)((int)piStack_92 * 2 + 0x1fca) != 0) {
              iVar7 = FUN_1000_efc8();
              piVar9 = (int *)(iVar7 % (*(int *)0x181e * -0x28 + 100));
              if (((piVar9 == (int *)0x0) && (local_4 < 0x10)) &&
                 ((0 < *(int *)((int)piStack_92 * 2 + 0x1f8a) &&
                  (*(int *)((int)piStack_92 * 2 + 0x1f8a) < 0x240)))) {
                piStack_b4 = piVar9;
                do {
                  if (aiStack_6e[(int)piStack_b4] < 0x21) {
                    piStack_d8 = piStack_b4;
                  }
                  piStack_b4 = (int *)((int)piStack_b4 + 1);
                } while ((int)piStack_b4 < 0x10);
                aiStack_6e[(int)piStack_d8] = *(int *)((int)piStack_92 * 2 + 0x1fca) + 0xc;
                iVar7 = *(int *)((int)piStack_92 * 2 + 0x1f8a) + 0x18;
LAB_1000_0d5a:
                aiStack_4c[(int)piStack_d8] = iVar7;
                local_4 = local_4 + 1;
              }
            }
          }
          else if (iVar7 == 2) {
            iVar7 = FUN_1000_efc8();
            if (((iVar7 % 0x28 == 0) && (iVar7 = (int)piStack_92 * 2, *(int *)(iVar7 + 0x1fca) == 0)
                ) && (iStack_2c < iStack_28)) {
              iVar6 = FUN_1000_efc8();
              *(int *)(iVar7 + 0x1fca) = (iVar6 % 2 + 7) * 0x20;
              iVar6 = FUN_1000_efc8();
              iVar6 = (iVar6 % 2) * 0x4c0 + -0x140;
              *(int *)(iVar7 + 0x1f8a) = iVar6;
              if (iVar6 == 0x140) {
                iStack_10e = 0;
              }
              else if (-*(int *)(iVar7 + 0x1f8a) == -0x140 || -*(int *)(iVar7 + 0x1f8a) + 0x140 < 0)
              {
                iStack_10e = -1;
              }
              else {
                iStack_10e = 1;
              }
              iVar7 = FUN_1000_efc8();
              *(int *)((int)piStack_92 * 2 + 0x1d6a) = (iVar7 % 3 + 7) * iStack_10e;
              *(undefined2 *)((int)piStack_92 * 2 + 0x1d8a) = 0;
            }
            iVar7 = *(int *)((int)piStack_92 * 2 + 0x1f8a) + *(int *)((int)piStack_92 * 2 + 0x1d6a);
            if ((iVar7 < -0x13f) || (0x37f < iVar7)) {
              *(undefined2 *)((int)piStack_92 * 2 + 0x1fca) = 0;
            }
            if (*(int *)((int)piStack_92 * 2 + 0x1fca) != 0) {
              iVar7 = FUN_1000_efc8();
              piVar9 = (int *)(iVar7 % (((*(int *)0x181e * -2 + 5) - *(int *)0x20c6) * 10));
              if (((piVar9 == (int *)0x0) && (iStack_26 < 8)) &&
                 ((0 < *(int *)((int)piStack_92 * 2 + 0x1f8a) &&
                  (*(int *)((int)piStack_92 * 2 + 0x1f8a) < 0x241)))) {
                piStack_b4 = piVar9;
                do {
                  if (aiStack_8e[(int)piStack_b4] < -0xf) {
                    piStack_d8 = piStack_b4;
                  }
                  piStack_b4 = (int *)((int)piStack_b4 + 1);
                } while ((int)piStack_b4 < 8);
                aiStack_8e[(int)piStack_d8] = *(int *)((int)piStack_92 * 2 + 0x1fca) + 0xc;
                aiStack_7e[(int)piStack_d8] = *(int *)((int)piStack_92 * 2 + 0x1f8a) + 0x18;
                auStack_ea[(int)piStack_d8] = 0;
                iStack_26 = iStack_26 + 1;
                piStack_c = (int *)0xeca;
                FUN_1000_cff4();
              }
            }
          }
          else if (iVar7 == 3) {
            iVar7 = FUN_1000_efc8();
            if (((iVar7 % (((3 - *(int *)0x181e) * 2 - *(int *)0x20c6) * 10) == 0) &&
                (iVar7 = (int)piStack_92 * 2, *(int *)(iVar7 + 0x1fca) == 0)) &&
               (iStack_2c < iStack_28)) {
              iVar6 = FUN_1000_efc8();
              *(int *)(iVar7 + 0x1fca) = (iVar6 % 2 + 2) * 0x20;
              iVar6 = FUN_1000_efc8();
              iVar6 = (iVar6 % 2) * 0x4e0 + -0x140;
              *(int *)(iVar7 + 0x1f8a) = iVar6;
              if (iVar6 == 0x140) {
                iStack_10e = 0;
              }
              else if (-*(int *)(iVar7 + 0x1f8a) == -0x140 || -*(int *)(iVar7 + 0x1f8a) + 0x140 < 0)
              {
                iStack_10e = -1;
              }
              else {
                iStack_10e = 1;
              }
              iVar7 = FUN_1000_efc8();
              *(int *)((int)piStack_92 * 2 + 0x1d6a) = (iVar7 % 4 + 0x10) * iStack_10e;
              *(undefined2 *)((int)piStack_92 * 2 + 0x1d8a) = 0;
            }
            if (iStack_28 <= iStack_2c) {
              iVar7 = *(int *)((int)piStack_92 * 2 + 0x1d6a);
              if (iVar7 == 0) {
                iStack_10e = 0;
              }
              else if (iVar7 < 1) {
                iStack_10e = -1;
              }
              else {
                iStack_10e = 1;
              }
              *(int *)((int)piStack_92 * 2 + 0x1d6a) = iStack_10e << 3;
            }
            iVar7 = *(int *)((int)piStack_92 * 2 + 0x1f8a) + *(int *)((int)piStack_92 * 2 + 0x1d6a);
            if ((iVar7 < -0x13f) || (0x37f < iVar7)) {
              *(undefined2 *)((int)piStack_92 * 2 + 0x1fca) = 0;
            }
            if (*(int *)((int)piStack_92 * 2 + 0x1fca) != 0) {
              iVar7 = FUN_1000_efc8();
              piVar9 = (int *)(iVar7 % (((4 - *(int *)0x20c6) - *(int *)0x181e) * 5));
              if (((piVar9 == (int *)0x0) && (local_4 < 0x10)) &&
                 ((0 < *(int *)((int)piStack_92 * 2 + 0x1f8a) &&
                  (*(int *)((int)piStack_92 * 2 + 0x1f8a) < 0x240)))) {
                piStack_b4 = piVar9;
                do {
                  if (aiStack_6e[(int)piStack_b4] < 0x21) {
                    piStack_d8 = piStack_b4;
                  }
                  piStack_b4 = (int *)((int)piStack_b4 + 1);
                } while ((int)piStack_b4 < 0x10);
                aiStack_6e[(int)piStack_d8] = *(int *)((int)piStack_92 * 2 + 0x1fca) + 0x10;
                iVar7 = *(int *)((int)piStack_92 * 2 + 0x1f8a) + 0x10;
                goto LAB_1000_0d5a;
              }
            }
          }
          else if (iVar7 == 4) {
            iVar7 = FUN_1000_efc8();
            if (((iVar7 % 0x1e == 0) && (iVar7 = (int)piStack_92 * 2, *(int *)(iVar7 + 0x1fca) == 0)
                ) && (iStack_2c < iStack_28)) {
              *(undefined2 *)(iVar7 + 0x1fca) = 0x120;
              iVar6 = FUN_1000_efc8();
              iVar6 = (iVar6 % 2) * 0x4c0 + -0x140;
              *(int *)(iVar7 + 0x1f8a) = iVar6;
              if (iVar6 == 0x140) {
                iStack_10e = 0;
              }
              else if (-*(int *)(iVar7 + 0x1f8a) == -0x140 || -*(int *)(iVar7 + 0x1f8a) + 0x140 < 0)
              {
                iStack_10e = -1;
              }
              else {
                iStack_10e = 1;
              }
              iVar7 = FUN_1000_efc8();
              iVar6 = (int)piStack_92 * 2;
              *(int *)(iVar6 + 0x1d6a) = (iVar7 % 4 + 5) * iStack_10e;
              *(undefined2 *)(iVar6 + 0x1d8a) = 0;
              *(undefined2 *)(iVar6 + 0x1822) = 0;
            }
            iVar7 = (int)piStack_92 * 2;
            if ((*(int *)(iVar7 + 0x1d6a) == 0) && (*(int *)(iVar7 + 0x1822) < 4)) {
              *(int *)(iVar7 + 0x1822) = *(int *)(iVar7 + 0x1822) + 1;
            }
            iVar7 = (int)piStack_92 * 2;
            if ((*(int *)(iVar7 + 0x1d6a) != 0) && (0 < *(int *)(iVar7 + 0x1822))) {
              *(int *)(iVar7 + 0x1822) = *(int *)(iVar7 + 0x1822) + -1;
            }
            iVar6 = (int)piStack_92 * 2;
            iVar7 = *(int *)(iVar6 + 0x1f8a) + *(int *)(iVar6 + 0x1d6a);
            if (((0x1f < iVar7) && (iVar7 < 0x221)) &&
               (iVar7 = FUN_1000_efc8(),
               iVar7 % (((3 - *(int *)0x181e) * 2 - *(int *)0x20c6) * 10) == 0)) {
              *(undefined2 *)(iVar6 + 0x1d6a) = 0;
            }
            iVar7 = *(int *)((int)piStack_92 * 2 + 0x1f8a) + *(int *)((int)piStack_92 * 2 + 0x1d6a);
            if ((iVar7 < -0x13f) || (0x37f < iVar7)) {
              *(undefined2 *)((int)piStack_92 * 2 + 0x1fca) = 0;
            }
            if (*(int *)((int)piStack_92 * 2 + 0x1fca) != 0) {
              iVar7 = (int)piStack_92 * 2;
              if (((*(int *)(iVar7 + 0x1822) == 4) && (iStack_26 < 4)) &&
                 ((0 < *(int *)(iVar7 + 0x1f8a) && (*(int *)(iVar7 + 0x1f8a) < 0x241)))) {
                for (iStack_10c = 0; iStack_10c < 4; iStack_10c = iStack_10c + 1) {
                  for (piStack_b4 = (int *)0x0; (int)piStack_b4 < 8;
                      piStack_b4 = (int *)((int)piStack_b4 + 1)) {
                    if (aiStack_8e[(int)piStack_b4] < -0xf) {
                      piStack_d8 = piStack_b4;
                      break;
                    }
                  }
                  aiStack_8e[(int)piStack_d8] = *(int *)((int)piStack_92 * 2 + 0x1fca) + 8;
                  aiStack_7e[(int)piStack_d8] =
                       iStack_10c * 0x10 + *(int *)((int)piStack_92 * 2 + 0x1f8a);
                  auStack_ea[(int)piStack_d8] = 0;
                }
                iStack_26 = iStack_26 + 4;
                piStack_c = (int *)0x1231;
                FUN_1000_cff4();
              }
              iVar7 = (int)piStack_92 * 2;
              if (*(int *)(iVar7 + 0x1822) == 4) {
                if (*(int *)(iVar7 + 0x1f8a) == 0x140) {
                  iStack_10e = 0;
                }
                else if (-*(int *)(iVar7 + 0x1f8a) == -0x140 ||
                         -*(int *)(iVar7 + 0x1f8a) + 0x140 < 0) {
                  iStack_10e = -1;
                }
                else {
                  iStack_10e = 1;
                }
                iVar7 = FUN_1000_efc8();
                *(int *)((int)piStack_92 * 2 + 0x1d6a) = (iVar7 % 4 + 5) * iStack_10e;
              }
            }
          }
          else if (iVar7 == 9) {
            iVar7 = FUN_1000_1288();
            return iVar7;
          }
        }
        piStack_92 = (int *)((int)piStack_92 + 1);
      } while( true );
    case 0x54:
      local_4 = 0;
      while ((pbVar4 = *(byte **)param_1, 0x2f < *pbVar4 && (*pbVar4 < 0x3a))) {
        in_CX = local_4 * 10;
        local_4 = (uint)*pbVar4 + in_CX + -0x30;
        *param_1 = *param_1 + 1;
      }
      if ((0x1d < local_4) && (local_4 < 0xf1)) {
        *(int *)0x1852 = local_4;
      }
    }
  }
  else {
switchD_1000_d77b_caseD_40:
    if (('@' < (char)param_1[4]) && ((char)param_1[4] < 'H')) {
      if ((**(char **)param_1 == '+') || (**(char **)param_1 == '#')) {
        *(char *)(param_1 + 4) = (char)param_1[4] + '\b';
        *param_1 = *param_1 + 1;
      }
      if (**(char **)param_1 == '-') {
        *(char *)(param_1 + 4) = (char)param_1[4] + '\x10';
        *param_1 = *param_1 + 1;
      }
      local_4 = 0;
      while ((pbVar4 = *(byte **)param_1, 0x2f < *pbVar4 && (*pbVar4 < 0x3a))) {
        in_CX = local_4 * 10;
        local_4 = (uint)*pbVar4 + in_CX + -0x30;
        *param_1 = *param_1 + 1;
      }
      param_1[6] = local_4;
      if ((local_4 < 1) || (0x20 < local_4)) {
        param_1[6] = param_1[7];
      }
      param_1[8] = *(int *)(param_1[6] * 4 + 0xfae);
      if (**(char **)param_1 == '.') {
        param_1[8] = param_1[8] * 3;
        param_1[8] = param_1[8] >> 1;
        *param_1 = *param_1 + 1;
      }
LAB_1000_d6a1:
      local_6 = 1;
    }
  }
LAB_1000_d79a:
  if (local_6 != 0) {
    return local_6;
  }
  goto LAB_1000_d4fe;
switchD_1000_d77b_caseD_51:
  do {
    if (*(int *)0x1844 == 0) goto LAB_1000_271f;
    do {
      iVar7 = FUN_1000_efc8();
      uVar8 = aiStack_6e[0] * 2;
      if (iVar7 % 0x20 + *(int *)0x1f8a != *(int *)(uVar8 + 0x1f8a)) {
        iVar7 = FUN_1000_efc8();
        uStack_162 = uVar8;
        if ((iVar7 % 0x20 - *(int *)(uVar8 + 0x1f8a)) + *(int *)0x1f8a < 1) {
          iVar7 = -1;
        }
        else {
          iVar7 = 1;
        }
        *(int *)(uVar8 + 0x1d6a) = *(int *)(uVar8 + 0x1d6a) + iVar7;
      }
LAB_1000_271f:
      uVar10 = aiStack_6e[0] * 2;
      uVar8 = *(uint *)(uVar10 + 0x1d6a);
      if ((0x14 < (int)((uVar8 ^ (int)uVar8 >> 0xf) - ((int)uVar8 >> 0xf))) && (uVar8 != 0)) {
        uStack_162 = uVar10;
        if ((int)uVar8 < 1) {
          iVar7 = -1;
        }
        else {
          iVar7 = 1;
        }
        *(int *)(uVar10 + 0x1d6a) = *(int *)(uVar10 + 0x1d6a) - iVar7;
      }
      iVar7 = aiStack_6e[0] * 2;
      if (*(int *)(iVar7 + 0x1822) < *(int *)(iVar7 + 0x1fca)) {
        *(int *)(iVar7 + 0x1d8a) = *(int *)(iVar7 + 0x1d8a) + -1;
      }
      if (*(int *)(aiStack_6e[0] * 2 + 0x1fca) < 0x1e) {
        piVar1 = (int *)(aiStack_6e[0] * 2 + 0x1d8a);
        *piVar1 = *piVar1 + 1;
      }
LAB_1000_25b9:
      do {
        aiStack_6e[0] = aiStack_6e[0] + 1;
        while (*(int *)0x17f4 < aiStack_6e[0]) {
          if (((aiStack_4c[3] == 0) && (aiStack_4c[4] <= aiStack_4c[2])) && (*(int *)0x1dc0 == 0)) {
LAB_1000_380a:
            FUN_1000_cf2c();
            FUN_1000_a23c();
            if ((aiStack_6e[2] == 1) && (*(int *)0x1842 == 0)) {
              FUN_1000_a29e();
            }
            iVar7 = *(int *)0x1844;
            out(0xa6,(char)iVar7);
            if ((aiStack_6e[2] == 1) || (*(int *)0x1842 == 0)) {
              iVar7 = FUN_1000_84ae();
            }
            return iVar7;
          }
          for (aiStack_6e[0] = 0; iVar7 = aiStack_6e[0], aiStack_6e[0] < *(int *)0x1d48;
              aiStack_6e[0] = aiStack_6e[0] + 1) {
            if (-0x10 < aiStack_15c[aiStack_6e[0]]) {
              iVar6 = *(int *)0x181e;
              aiStack_15c[aiStack_6e[0]] = aiStack_15c[aiStack_6e[0]] + (iVar6 + 2) * -6;
              aiStack_11a[iVar7] = aiStack_11a[iVar7] + aiStack_13c[iVar7] * (iVar6 + 2) * 2;
              for (iStack_72 = 1; iVar7 = aiStack_6e[0], iStack_72 <= *(int *)0x17f4;
                  iStack_72 = iStack_72 + 1) {
                if ((9 < *(int *)(iStack_72 * 2 + 0x1faa)) &&
                   (-0x20 < *(int *)(iStack_72 * 2 + 0x1fca))) {
                  uVar8 = *(uint *)(iStack_72 * 2 + 0x17f6);
                  if (uVar8 == 9) {
                    iVar6 = *(int *)(iStack_72 * 2 + 0x1f8a);
                    if (((iVar6 + -8 <= aiStack_11a[aiStack_6e[0]]) &&
                        (aiStack_11a[aiStack_6e[0]] <= iVar6 + 0x18)) &&
                       ((iVar6 = *(int *)(iStack_72 * 2 + 0x1fca),
                        iVar6 + -0xc <= aiStack_15c[aiStack_6e[0]] &&
                        (aiStack_15c[aiStack_6e[0]] <= iVar6 + 0x18)))) {
                      piStack_c = (int *)0x2f1f;
                      FUN_1000_824a();
                      if (*(int *)0x181e == 0) {
                        aiStack_15c[iVar7] = -0x10;
                      }
                      aiStack_4c[2] = aiStack_4c[2] + 1;
                      if (((*(int *)0x1dc0 == 0) &&
                          (iVar7 = iStack_72 * 2, 0x1f < *(int *)(iVar7 + 0x1f8a))) &&
                         (*(int *)(iVar7 + 0x1f8a) < 0x241)) {
                        FUN_1000_9d84();
                        *(int *)0x193e = *(int *)(iVar7 + 0x1f8a) + 8;
                        *(int *)0x1d40 = *(int *)(iVar7 + 0x1fca) + 8;
                        *(undefined2 *)0x1db2 = 0;
                        *(undefined2 *)0x1db4 = 8;
                        *(undefined2 *)0x1d44 = 0xffff;
                      }
                    }
                  }
                  else if (uVar8 < 10) {
                    cVar5 = (char)uVar8;
                    if (cVar5 == '\x01') {
                      iVar6 = *(int *)(iStack_72 * 2 + 0x1f8a);
                      if (iVar6 + -8 <= aiStack_11a[aiStack_6e[0]]) {
                        iVar6 = iVar6 + 0x18;
LAB_1000_2e40:
                        if (((aiStack_11a[aiStack_6e[0]] <= iVar6) &&
                            (iVar6 = *(int *)(iStack_72 * 2 + 0x1fca),
                            iVar6 + -0xc <= aiStack_15c[aiStack_6e[0]])) &&
                           (aiStack_15c[aiStack_6e[0]] <= iVar6 + 0x18)) {
                          piStack_c = (int *)0x2e64;
                          FUN_1000_824a();
                          aiStack_4c[2] = aiStack_4c[2] + 1;
                          if (*(int *)0x181e == 0) {
                            aiStack_15c[iVar7] = -0x10;
                          }
                        }
                      }
                    }
                    else if ((('\0' < (char)(cVar5 + -1)) && ((char)(cVar5 + -2) < '\x03')) &&
                            (iVar6 = *(int *)(iStack_72 * 2 + 0x1f8a),
                            iVar6 + -8 <= aiStack_11a[aiStack_6e[0]])) {
                      iVar6 = iVar6 + 0x38;
                      goto LAB_1000_2e40;
                    }
                  }
                }
              }
              if ((aiStack_11a[aiStack_6e[0]] < 0x10) || (0x260 < aiStack_11a[aiStack_6e[0]])) {
                aiStack_15c[aiStack_6e[0]] = -0x10;
              }
              if (aiStack_15c[aiStack_6e[0]] < -0xf) {
                aiStack_7e[3] = aiStack_7e[3] + -1;
              }
            }
          }
          aiStack_6e[0] = 0;
          do {
            iVar7 = aiStack_6e[0];
            if ((int)auStack_fc[aiStack_6e[0] + 1] < 0x160) {
              if (aiStack_6e[aiStack_6e[0] + 3] < 0x10) {
                aiStack_6e[aiStack_6e[0] + 3] = aiStack_6e[aiStack_6e[0] + 3] + 1;
              }
              auStack_fc[aiStack_6e[0] + 1] =
                   auStack_fc[aiStack_6e[0] + 1] + aiStack_6e[aiStack_6e[0] + 3];
              if ((((*(int *)0x1faa == 10) && (*(int *)0x1f8a + -4 <= aiStack_dc[iVar7 + 1])) &&
                  (aiStack_dc[iVar7 + 1] <= *(int *)0x1f8a + 0x34)) &&
                 ((*(int *)0x1fca <= (int)auStack_fc[iVar7 + 1] &&
                  ((int)auStack_fc[iVar7 + 1] <= *(int *)0x1fca + 0x18)))) {
                *(undefined2 *)0x1faa = 9;
                auStack_fc[iVar7 + 1] = 0x160;
                piStack_c = (int *)0x3066;
                FUN_1000_cff4();
              }
              if (0x15f < (int)auStack_fc[aiStack_6e[0] + 1]) {
                iStack_70 = iStack_70 + -1;
              }
            }
            aiStack_6e[0] = aiStack_6e[0] + 1;
          } while (aiStack_6e[0] < 0x10);
          for (aiStack_6e[0] = 0; iVar7 = aiStack_6e[0], aiStack_6e[0] < 0x10;
              aiStack_6e[0] = aiStack_6e[0] + 1) {
            if (aiStack_ba[aiStack_6e[0]] < 0x160) {
              aiStack_ba[aiStack_6e[0]] = aiStack_ba[aiStack_6e[0]] + aiStack_42[aiStack_6e[0]];
              aiStack_98[iVar7] = aiStack_98[iVar7] + aiStack_24[iVar7 + 1];
              if ((aiStack_98[iVar7] < 0x1c) || (0x260 < aiStack_98[iVar7])) {
                aiStack_ba[aiStack_6e[0]] = 0x160;
              }
              else {
                if ((((*(int *)0x1faa == 10) && (*(int *)0x1f8a + -2 <= aiStack_98[aiStack_6e[0]]))
                    && (aiStack_98[aiStack_6e[0]] <= *(int *)0x1f8a + 0x3a)) &&
                   ((*(int *)0x1fca + 6 <= aiStack_ba[aiStack_6e[0]] &&
                    (aiStack_ba[aiStack_6e[0]] <= *(int *)0x1fca + 0x1a)))) {
                  *(undefined2 *)0x1faa = 9;
                  aiStack_ba[aiStack_6e[0]] = 0x160;
                  piStack_c = (int *)0x30da;
                  FUN_1000_cff4();
                }
                if ((aiStack_ba[aiStack_6e[0]] < 0x160) && (-1 < aiStack_ba[aiStack_6e[0]]))
                goto LAB_1000_30f4;
              }
              aiStack_6e[1] = aiStack_6e[1] + -1;
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
            if ((((*(int *)0x1f8a + -4 <= *(int *)0x193e) &&
                 (*(int *)0x193e <= *(int *)0x1f8a + 0x34)) &&
                (*(int *)0x1fca + 8 <= *(int *)0x1d40)) && (*(int *)0x1d40 <= *(int *)0x1fca + 0x20)
               ) {
              if (*(int *)0x1dc0 == 4) {
                piStack_c = (int *)0x31ab;
                FUN_1000_83b5();
                aiStack_6e[0] = 1;
                do {
                  iVar7 = aiStack_6e[0] * 2;
                  if (((*(int *)(iVar7 + 0x1faa) == 10) && (*(int *)(iVar7 + 0x1fca) != -0x20)) &&
                     ((-0x20 < *(int *)(iVar7 + 0x1f8a) && (*(int *)(iVar7 + 0x1f8a) < 0x260)))) {
                    aiStack_4c[2] = aiStack_4c[2] + 1;
                    piStack_c = (int *)0x31de;
                    FUN_1000_824a();
                  }
                  aiStack_6e[0] = aiStack_6e[0] + 1;
                } while (aiStack_6e[0] < 0x10);
                for (aiStack_6e[0] = 0; aiStack_6e[0] < *(int *)0x1d48;
                    aiStack_6e[0] = aiStack_6e[0] + 1) {
                  aiStack_15c[aiStack_6e[0]] = -0x10;
                }
                aiStack_7e[3] = 0;
                iStack_70 = 0;
                aiStack_6e[1] = 0;
                for (aiStack_6e[0] = 0; iVar7 = aiStack_6e[0], aiStack_6e[0] < 0x10;
                    aiStack_6e[0] = aiStack_6e[0] + 1) {
                  auStack_fc[aiStack_6e[0] + 1] = 0x160;
                  aiStack_ba[iVar7] = 0x160;
                }
                piStack_c = (int *)0x3238;
                FUN_1000_cff4();
                piStack_c = (int *)0x3242;
                FUN_1000_8425();
                FUN_1000_a25a();
              }
              else {
                FUN_1000_80f0();
              }
              FUN_1000_a0d8();
              *(undefined2 *)0x1dc0 = 0;
              piStack_c = (int *)0x3258;
              FUN_1000_cff4();
            }
            if ((*(int *)0x1d44 < 0) && (0x12f < *(int *)0x1d40)) {
              *(undefined2 *)0x1d40 = 0x130;
              *(undefined2 *)0x1d44 = 0x32;
            }
            if (*(int *)0x1d44 == 0) {
              *(undefined2 *)0x1dc0 = 0;
            }
          }
          for (aiStack_6e[0] = *(int *)0x17f4; 0 < aiStack_6e[0]; aiStack_6e[0] = aiStack_6e[0] + -1
              ) {
            iVar7 = aiStack_6e[0] * 2;
            *(int *)(iVar7 + 0x1f8a) = *(int *)(iVar7 + 0x1f8a) + *(int *)(iVar7 + 0x1d6a);
            *(int *)(iVar7 + 0x1fca) = *(int *)(iVar7 + 0x1fca) + *(int *)(iVar7 + 0x1d8a);
          }
          *(int *)0x1f8a = *(int *)0x1f8a + *(int *)0x1d6a;
          *(byte *)0x1844 = *(byte *)0x1844 ^ 1;
          piStack_c = (int *)(0x139 - (uint)(3 < *(int *)0x193c));
          piStack_e = (int *)0x4b;
          piStack_10 = (int *)0x0;
          uStack_12 = 4;
          uStack_14 = 0x32e0;
          FUN_1000_b854();
          for (aiStack_6e[0] = *(int *)0x17f4; 0 < aiStack_6e[0]; aiStack_6e[0] = aiStack_6e[0] + -1
              ) {
            if (-0x20 < *(int *)(aiStack_6e[0] * 2 + 0x1fca)) {
              uStack_164 = aiStack_6e[0] * 2;
              uVar8 = -(uint)(*(int *)(uStack_164 + 0x17f6) == 2) & 0x20;
              if ((-*(int *)(uStack_164 + 0x1f8a) == uVar8 ||
                   (int)-uVar8 < *(int *)(uStack_164 + 0x1f8a)) &&
                 (*(int *)(uStack_164 + 0x1f8a) < 0x260)) {
                if (*(int *)(aiStack_6e[0] * 2 + 0x1faa) < 10) {
                  uVar8 = *(uint *)(aiStack_6e[0] * 2 + 0x17f6);
                  if (uVar8 == 9) {
LAB_1000_335a:
                    piStack_c = (int *)0x3360;
                    FUN_1000_8562();
                  }
                  else if (uVar8 < 10) {
                    cVar5 = (char)uVar8;
                    if (cVar5 == '\x01') goto LAB_1000_335a;
                    if (('\0' < (char)(cVar5 + -1)) &&
                       (cVar5 == '\x04' || (char)(cVar5 + -2) < '\x02')) {
                      piStack_c = (int *)0x336c;
                      FUN_1000_85b8();
                    }
                  }
                }
                else {
                  iVar7 = *(int *)(aiStack_6e[0] * 2 + 0x17f6);
                  if (iVar7 == 1) {
                    uStack_162 = aiStack_6e[0] * 2;
                    if (*(int *)(uStack_162 + 0x1fca) < 0) {
                      uStack_164 = *(uint *)(uStack_162 + 0x1d6a);
                      uStack_160 = -(uint)(2 < *(int *)(uStack_162 + 0x1d6a)) & 2;
                      uStack_15e = -(uint)((int)uStack_164 < -2) & 2;
                      uStack_166 = -(uint)((int)uStack_164 < -7) & 2;
                      piStack_c = (int *)*(undefined2 *)(uStack_162 + 0x1fca);
                      piStack_e = (int *)*(int *)(uStack_162 + 0x1f8a);
                      piStack_10 = (int *)0x343e;
                      FUN_1000_c322();
                    }
                    else {
                      uStack_164 = aiStack_6e[0] * 2;
                      uStack_166 = *(uint *)(uStack_164 + 0x1d6a);
                      uStack_162 = -(uint)(2 < *(int *)(uStack_164 + 0x1d6a)) & 2;
                      uStack_160 = -(uint)((int)uStack_166 < -2) & 2;
                      uStack_15e = -(uint)((int)uStack_166 < -7) & 2;
LAB_1000_34d4:
                      piStack_c = (int *)*(undefined2 *)(aiStack_6e[0] * 2 + 0x1fca);
                      piStack_e = (int *)*(int *)(aiStack_6e[0] * 2 + 0x1f8a);
                      piStack_10 = (int *)0x34e0;
                      FUN_1000_bfd6();
                    }
                  }
                  else {
                    if (iVar7 == 2) {
                      piStack_c = (int *)((-(uint)(0 < *(int *)(aiStack_6e[0] * 2 + 0x1d6a)) & 2) +
                                         0x24);
LAB_1000_350e:
                      uStack_166 = aiStack_6e[0] * 2;
                      uVar8 = uStack_166;
                    }
                    else {
                      if (iVar7 != 3) {
                        if (iVar7 != 4) {
                          if (iVar7 == 9) {
                            uStack_166 = aiStack_6e[0] * 2;
                            goto LAB_1000_34d4;
                          }
                          goto LAB_1000_3307;
                        }
                        piStack_c = (int *)((-(uint)(0 < *(int *)(aiStack_6e[0] * 2 + 0x1d6a)) & 2)
                                           + 0x34);
                        goto LAB_1000_350e;
                      }
                      piStack_c = (int *)((*(int *)0x1844 + 6) * 2);
                      uVar8 = aiStack_6e[0] << 1;
                    }
                    piStack_e = (int *)*(int *)(uVar8 + 0x1fca);
                    piStack_10 = (int *)*(undefined2 *)(uVar8 + 0x1f8a);
                    uStack_12 = 0x351e;
                    FUN_1000_88a2();
                  }
                }
              }
            }
LAB_1000_3307:
          }
          iStack_72 = *(int *)0x181e * 0x10 + *(int *)0x1d42 + 0x11;
          for (aiStack_6e[0] = 0; aiStack_6e[0] < *(int *)0x1d48; aiStack_6e[0] = aiStack_6e[0] + 1)
          {
            if (-0x10 < aiStack_15c[aiStack_6e[0]]) {
              if (aiStack_15c[aiStack_6e[0]] < 0) {
                piStack_c = (int *)aiStack_15c[aiStack_6e[0]];
                piStack_e = (int *)aiStack_11a[aiStack_6e[0]];
                piStack_10 = (int *)0x35f2;
                FUN_1000_c322();
              }
              else {
                piStack_c = (int *)aiStack_15c[aiStack_6e[0]];
                piStack_e = (int *)aiStack_11a[aiStack_6e[0]];
                piStack_10 = (int *)0x35be;
                FUN_1000_bfd6();
              }
            }
          }
          iStack_72 = *(int *)0x1d42 + *(int *)0x184a + 0x1c;
          for (aiStack_6e[0] = 0; aiStack_6e[0] < 0x10; aiStack_6e[0] = aiStack_6e[0] + 1) {
            if ((int)auStack_fc[aiStack_6e[0] + 1] < 0x160) {
              if ((int)auStack_fc[aiStack_6e[0] + 1] < 0) {
                piStack_c = (int *)auStack_fc[aiStack_6e[0] + 1];
                piStack_e = (int *)aiStack_dc[aiStack_6e[0] + 1];
                piStack_10 = (int *)0x3649;
                FUN_1000_c322();
              }
              else {
                piStack_c = (int *)auStack_fc[aiStack_6e[0] + 1];
                piStack_e = (int *)aiStack_dc[aiStack_6e[0] + 1];
                piStack_10 = (int *)0x361b;
                FUN_1000_bfd6();
              }
            }
          }
          iStack_72 = *(int *)0x1844 + *(int *)0x1d46 + *(int *)0x1d42;
          aiStack_6e[0] = 0;
          do {
            if ((aiStack_ba[aiStack_6e[0]] < 0x160) && (-1 < aiStack_ba[aiStack_6e[0]])) {
              piStack_c = (int *)aiStack_ba[aiStack_6e[0]];
              piStack_e = (int *)aiStack_98[aiStack_6e[0]];
              piStack_10 = (int *)0x3681;
              FUN_1000_bfd6();
            }
            aiStack_6e[0] = aiStack_6e[0] + 1;
          } while (aiStack_6e[0] < 0x10);
          if (*(int *)0x1faa < 10) {
            piStack_c = (int *)0x369a;
            FUN_1000_85b8();
          }
          else {
            piStack_c = (int *)((uint)(*(int *)0x193c < 4) + *(int *)0x1fca);
            piStack_e = (int *)*(undefined2 *)0x1f8a;
            piStack_10 = (int *)0x36c4;
            FUN_1000_bfd6();
            piStack_c = (int *)((uint)(*(int *)0x193c < 4) + *(int *)0x1fca);
            piStack_e = (int *)(*(int *)0x1f8a + 0x20);
            piStack_10 = (int *)0x36ef;
            FUN_1000_bfd6();
          }
          if ((*(int *)0x1dc0 != 0) &&
             (((0xf < *(int *)0x1d44 || (*(int *)0x1d44 < 1)) || (*(int *)0x1844 != 0)))) {
            if ((*(int *)0x193c < 4) && (0 < *(int *)0x1d44)) {
              uStack_166 = 1;
            }
            else {
              uStack_166 = 0;
            }
            piStack_c = (int *)((uint)(uStack_166 != 0) + *(int *)0x1d40);
            piStack_e = (int *)*(int *)0x193e;
            piStack_10 = (int *)0x3749;
            FUN_1000_bfd6();
          }
          FUN_1000_8292();
          for (aiStack_6e[0] = *(int *)0x17f4; 0 < aiStack_6e[0]; aiStack_6e[0] = aiStack_6e[0] + -1
              ) {
            if (-1 < *(int *)(aiStack_6e[0] * 2 + 0x1fca)) {
              iVar7 = *(int *)(aiStack_6e[0] * 2 + 0x17f6);
              if (iVar7 == 1) {
LAB_1000_375b:
                piStack_c = (int *)0x3;
              }
              else {
                if (((iVar7 != 2) && (iVar7 != 3)) && (iVar7 != 4)) {
                  if (iVar7 != 9) goto LAB_1000_3769;
                  goto LAB_1000_375b;
                }
                piStack_c = (int *)0x7;
              }
              piStack_e = (int *)aiStack_6e[0];
              piStack_10 = (int *)0x3766;
              FUN_1000_890a();
            }
LAB_1000_3769:
          }
          piStack_c = (int *)0x7;
          piStack_e = (int *)0x0;
          piStack_10 = (int *)0x37d2;
          FUN_1000_890a();
          while (iVar7 = FUN_1000_bf8e(), iVar7 != 0) {
            FUN_1000_bf98();
          }
          piStack_c = (int *)0x37e9;
          FUN_1000_e538();
          do {
            uVar8 = FUN_1000_bb38();
          } while (uVar8 < *(uint *)0x1820);
          *(undefined2 *)0xdd0 = 0;
          out(0xa4,(byte)*(undefined2 *)0x1844);
          out(0xa6,(byte)*(undefined2 *)0x1844 ^ 1);
          FUN_1000_b4ee();
          FUN_1000_8184();
          piStack_c = (int *)0x2170;
          aiStack_7e[4] = FUN_1000_e3c8();
          if (((aiStack_7e[4] != 0) || (*(int *)0x213e != 0)) &&
             (FUN_1000_9e70(), *(int *)0x184c == 0)) goto LAB_1000_380a;
          *(undefined2 *)0x1d6a = 0;
          if (*(int *)0x1faa < 10) {
            uStack_15e = *(uint *)0x1faa;
            *(int *)0x1faa = *(int *)0x1faa + -1;
            if ((int)uStack_15e < 1) {
              aiStack_6e[2] = 1;
              *(int *)0x1842 = *(int *)0x1842 + -1;
              goto LAB_1000_380a;
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
               ((iVar7 = *(int *)0x20c6 * 2 - *(int *)0x1d48,
                -aiStack_7e[3] != iVar7 && aiStack_7e[3] <= -iVar7 && (iStack_11c != 0)))) {
              for (aiStack_6e[0] = 0; aiStack_6e[0] < *(int *)0x1d48;
                  aiStack_6e[0] = aiStack_6e[0] + 1) {
                if (aiStack_15c[aiStack_6e[0]] < -0xf) {
                  iStack_72 = aiStack_6e[0];
                  break;
                }
              }
              iVar7 = iStack_72;
              aiStack_15c[iStack_72] = *(int *)0x1fca + 0x10;
              aiStack_11a[iVar7] = *(int *)0x1f8a + 5;
              aiStack_7e[3] = aiStack_7e[3] + 1;
              aiStack_13c[iVar7] = 0;
              iStack_11c = 0;
              if (*(int *)0x20c6 == 1) {
                for (aiStack_6e[0] = 0; aiStack_6e[0] < *(int *)0x1d48;
                    aiStack_6e[0] = aiStack_6e[0] + 1) {
                  if (aiStack_15c[aiStack_6e[0]] < -0xf) {
                    iStack_72 = aiStack_6e[0];
                    break;
                  }
                }
                iVar7 = iStack_72;
                aiStack_15c[iStack_72] = *(int *)0x1fca + 0x10;
                aiStack_11a[iVar7] = *(int *)0x1f8a + 5;
                aiStack_13c[iVar7] = -1;
                for (aiStack_6e[0] = 0; aiStack_6e[0] < *(int *)0x1d48;
                    aiStack_6e[0] = aiStack_6e[0] + 1) {
                  if (aiStack_15c[aiStack_6e[0]] < -0xf) {
                    iStack_72 = aiStack_6e[0];
                    break;
                  }
                }
                iVar7 = iStack_72;
                aiStack_15c[iStack_72] = *(int *)0x1fca + 0x10;
                aiStack_11a[iVar7] = *(int *)0x1f8a + 5;
                aiStack_13c[iVar7] = 1;
                aiStack_7e[3] = aiStack_7e[3] + 2;
              }
              piStack_c = (int *)0x230f;
              FUN_1000_cff4();
            }
            if ((((*(int *)0x213a != 0) && (*(int *)0x212c == 0)) ||
                ((*(int *)0x2138 != 0 && (*(int *)0x212c != 0)))) &&
               ((iVar7 = *(int *)0x20c6 * 2 - *(int *)0x1d48,
                -aiStack_7e[3] != iVar7 && aiStack_7e[3] <= -iVar7 && (iStack_11c != 0)))) {
              for (aiStack_6e[0] = 0; aiStack_6e[0] < *(int *)0x1d48;
                  aiStack_6e[0] = aiStack_6e[0] + 1) {
                if (aiStack_15c[aiStack_6e[0]] < -0xf) {
                  iStack_72 = aiStack_6e[0];
                  break;
                }
              }
              iVar7 = iStack_72;
              aiStack_15c[iStack_72] = *(int *)0x1fca + 0x10;
              aiStack_11a[iVar7] = *(int *)0x1f8a + 0x2c;
              aiStack_7e[3] = aiStack_7e[3] + 1;
              aiStack_13c[iVar7] = 0;
              iStack_11c = 0;
              if (*(int *)0x20c6 == 1) {
                for (aiStack_6e[0] = 0; aiStack_6e[0] < *(int *)0x1d48;
                    aiStack_6e[0] = aiStack_6e[0] + 1) {
                  if (aiStack_15c[aiStack_6e[0]] < -0xf) {
                    iStack_72 = aiStack_6e[0];
                    break;
                  }
                }
                iVar7 = iStack_72;
                aiStack_15c[iStack_72] = *(int *)0x1fca + 0x10;
                aiStack_11a[iVar7] = *(int *)0x1f8a + 0x2c;
                aiStack_13c[iVar7] = -1;
                for (aiStack_6e[0] = 0; aiStack_6e[0] < *(int *)0x1d48;
                    aiStack_6e[0] = aiStack_6e[0] + 1) {
                  if (aiStack_15c[aiStack_6e[0]] < -0xf) {
                    iStack_72 = aiStack_6e[0];
                    break;
                  }
                }
                iVar7 = iStack_72;
                aiStack_15c[iStack_72] = *(int *)0x1fca + 0x10;
                aiStack_11a[iVar7] = *(int *)0x1f8a + 0x2c;
                aiStack_13c[iVar7] = 1;
                aiStack_7e[3] = aiStack_7e[3] + 2;
              }
              piStack_c = (int *)0x2435;
              FUN_1000_cff4();
            }
            if ((*(int *)0x2138 == 0) && (*(int *)0x213a == 0)) {
              iStack_11c = 1;
            }
          }
          aiStack_4c[3] = 0;
          aiStack_6e[0] = 1;
        }
        if (-0x20 < *(int *)(aiStack_6e[0] * 2 + 0x1fca)) {
          aiStack_4c[3] = aiStack_4c[3] + 1;
        }
        iVar7 = aiStack_6e[0] * 2;
        if (*(int *)(iVar7 + 0x1faa) < 10) {
          piVar1 = (int *)(iVar7 + 0x1faa);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            *(undefined2 *)(iVar7 + 0x1fca) = 0xffe0;
            *(undefined2 *)(iVar7 + 0x1faa) = 10;
          }
          goto LAB_1000_25b9;
        }
        iVar7 = *(int *)(aiStack_6e[0] * 2 + 0x17f6);
        if (iVar7 != 1) {
          if (iVar7 == 2) {
            iVar7 = FUN_1000_efc8();
            if (((iVar7 % 10 == 0) && (iVar7 = aiStack_6e[0] * 2, *(int *)(iVar7 + 0x1fca) < -0x1f))
               && (aiStack_4c[2] < aiStack_4c[4])) {
              iVar6 = FUN_1000_efc8();
              *(int *)(iVar7 + 0x1fca) = (iVar6 % 3 + 1) * 0x20;
              iVar6 = FUN_1000_efc8();
              iVar6 = (iVar6 % 2) * 0x4c0 + -0x140;
              *(int *)(iVar7 + 0x1f8a) = iVar6;
              if (iVar6 == 0x140) {
                uStack_162 = 0;
              }
              else if (-*(int *)(iVar7 + 0x1f8a) == -0x140 || -*(int *)(iVar7 + 0x1f8a) + 0x140 < 0)
              {
                uStack_162 = 0xffff;
              }
              else {
                uStack_162 = 1;
              }
              iVar7 = FUN_1000_efc8();
              *(int *)(aiStack_6e[0] * 2 + 0x1d6a) = (iVar7 % 4 + 0xc) * uStack_162;
              *(undefined2 *)(aiStack_6e[0] * 2 + 0x1d8a) = 0;
            }
            iVar7 = *(int *)(aiStack_6e[0] * 2 + 0x1f8a) + *(int *)(aiStack_6e[0] * 2 + 0x1d6a);
            if ((iVar7 < -0x13f) || (0x37f < iVar7)) {
              *(undefined2 *)(aiStack_6e[0] * 2 + 0x1fca) = 0xffe0;
            }
            if (-0x20 < *(int *)(aiStack_6e[0] * 2 + 0x1fca)) {
              iVar7 = FUN_1000_efc8();
              iVar7 = iVar7 % ((3 - *(int *)0x20c6) * 10 + *(int *)0x181e * -0xd);
              if ((((iVar7 == 0) && (iStack_70 < 0x10)) &&
                  (0 < *(int *)(aiStack_6e[0] * 2 + 0x1f8a))) &&
                 (*(int *)(aiStack_6e[0] * 2 + 0x1f8a) < 0x241)) {
                iStack_72 = iVar7;
                do {
                  if (0x15f < (int)auStack_fc[iStack_72 + 1]) {
                    iStack_74 = iStack_72;
                  }
                  iVar7 = iStack_74;
                  iStack_72 = iStack_72 + 1;
                } while (iStack_72 < 0x10);
                iVar6 = aiStack_6e[0] * 2;
                auStack_fc[iStack_74 + 1] = *(int *)(iVar6 + 0x1fca) + 0x14;
                aiStack_dc[iVar7 + 1] = *(int *)(iVar6 + 0x1f8a) + 0x10;
                aiStack_6e[iVar7 + 3] = 0;
                iStack_70 = iStack_70 + 1;
              }
            }
          }
          else if (iVar7 == 3) {
            iVar7 = FUN_1000_efc8();
            if (((iVar7 % ((7 - *(int *)0x20c6) * 0x14 + *(int *)0x181e * -0x1e) == 0) &&
                (iVar7 = aiStack_6e[0] * 2, *(int *)(iVar7 + 0x1fca) < -0x1f)) &&
               (aiStack_4c[2] < aiStack_4c[4])) {
              *(undefined2 *)(iVar7 + 0x1fca) = 0xffe1;
              iVar6 = FUN_1000_efc8();
              iVar6 = iVar6 % 0x200 + 0x20;
              *(int *)(iVar7 + 0x1f8a) = iVar6;
              if (iVar6 == 0x140) {
                uStack_162 = 0;
              }
              else if (-iVar6 == -0x140 || -iVar6 + 0x140 < 0) {
                uStack_162 = 0xffff;
              }
              else {
                uStack_162 = 1;
              }
              iVar7 = FUN_1000_efc8();
              iVar6 = aiStack_6e[0] * 2;
              *(int *)(iVar6 + 0x1d6a) = (int)(iVar7 * uStack_162) % 8;
              iVar7 = FUN_1000_efc8();
              *(int *)(iVar6 + 0x1d8a) = iVar7 % 8 + 8;
            }
            if (-0x20 < *(int *)(aiStack_6e[0] * 2 + 0x1fca)) {
              if (0x32 < *(int *)(aiStack_6e[0] * 2 + 0x1fca)) {
                piVar1 = (int *)(aiStack_6e[0] * 2 + 0x1d8a);
                *piVar1 = *piVar1 + -1;
              }
              iVar7 = FUN_1000_efc8();
              iVar7 = iVar7 % ((3 - *(int *)0x20c6) * 10 + *(int *)0x181e * -0xd);
              if ((iVar7 == 0) && (aiStack_6e[1] < 0x10)) {
                iStack_72 = iVar7;
                do {
                  if (0x15f < aiStack_ba[iStack_72]) {
                    iStack_74 = iStack_72;
                  }
                  iVar7 = iStack_74;
                  iStack_72 = iStack_72 + 1;
                } while (iStack_72 < 0x10);
                iVar6 = aiStack_6e[0] * 2;
                aiStack_ba[iStack_74] = *(int *)(iVar6 + 0x1fca) + 0x18;
                iVar6 = *(int *)(iVar6 + 0x1f8a) + 0x20;
                aiStack_98[iVar7] = iVar6;
                uVar8 = 0x20 - (iVar6 - *(int *)0x1f8a);
                uVar10 = (int)uVar8 >> 0xf;
                if ((int)((uVar8 ^ uVar10) - uVar10) < 0x21) {
                  iVar6 = FUN_1000_efc8();
                  iVar7 = iStack_74;
                  aiStack_42[iStack_74] = iVar6 % 6 + 8;
                  iVar6 = FUN_1000_efc8();
                  aiStack_24[iVar7 + 1] = iVar6 % 5 + -2;
                }
                else {
                  iVar6 = FUN_1000_efc8();
                  aiStack_42[iVar7] = iVar6 % 6 + 8;
                  iVar6 = *(int *)0x1f8a;
                  if (aiStack_98[iVar7] == iVar6) {
                    uStack_162 = 0;
                  }
                  else if (iVar6 == aiStack_98[iVar7] || iVar6 - aiStack_98[iVar7] < 0) {
                    uStack_162 = 0xffff;
                  }
                  else {
                    uStack_162 = 1;
                  }
                  iVar7 = FUN_1000_efc8();
                  aiStack_24[iStack_74 + 1] = (iVar7 % 6 + 2) * uStack_162;
                }
                aiStack_6e[1] = aiStack_6e[1] + 1;
              }
            }
          }
          else if (iVar7 == 4) {
            iVar7 = FUN_1000_efc8();
            if (((iVar7 % 0x14 == 0) &&
                (iVar7 = aiStack_6e[0] * 2, *(int *)(iVar7 + 0x1fca) < -0x1f)) &&
               (aiStack_4c[2] < aiStack_4c[4])) {
              iVar6 = FUN_1000_efc8();
              *(int *)(iVar7 + 0x1fca) = (iVar6 % 5 + 1) * 0x20;
              iVar6 = FUN_1000_efc8();
              iVar6 = (iVar6 % 2) * 0x4c0 + -0x140;
              *(int *)(iVar7 + 0x1f8a) = iVar6;
              if (iVar6 == 0x140) {
                uStack_162 = 0;
              }
              else if (-*(int *)(iVar7 + 0x1f8a) == -0x140 || -*(int *)(iVar7 + 0x1f8a) + 0x140 < 0)
              {
                uStack_162 = 0xffff;
              }
              else {
                uStack_162 = 1;
              }
              iVar6 = aiStack_6e[0] * 2;
              *(int *)(iVar6 + 0x1d6a) = uStack_162 * 0x14;
              *(undefined2 *)(iVar6 + 0x1d8a) = 0;
              iVar7 = FUN_1000_efc8();
              *(int *)(iVar6 + 0x1822) = iVar7 % 0x240 + 0x20;
            }
            iVar7 = *(int *)(aiStack_6e[0] * 2 + 0x1f8a) + *(int *)(aiStack_6e[0] * 2 + 0x1d6a);
            if ((iVar7 < -0x13f) || (0x37f < iVar7)) {
              *(undefined2 *)(aiStack_6e[0] * 2 + 0x1fca) = 0xffe0;
            }
            if (-0x20 < *(int *)(aiStack_6e[0] * 2 + 0x1fca)) {
              uStack_15e = aiStack_6e[0] * 2;
              uStack_162 = *(uint *)(uStack_15e + 0x1822);
              uStack_160 = *(uint *)(uStack_15e + 0x1f8a);
              uStack_164 = (uint)(*(int *)(uStack_15e + 0x1f8a) < (int)uStack_162);
              if ((int)(*(uint *)(uStack_15e + 0x1f8a) + *(int *)(uStack_15e + 0x1d6a)) <
                  (int)uStack_162 != uStack_164) {
                for (iStack_9a = 0; iStack_9a < 5; iStack_9a = iStack_9a + 1) {
                  iStack_72 = 0;
                  do {
                    if (0x15f < aiStack_ba[iStack_72]) {
                      iStack_74 = iStack_72;
                    }
                    iVar7 = iStack_74;
                    iStack_72 = iStack_72 + 1;
                  } while (iStack_72 < 0x10);
                  iVar6 = aiStack_6e[0] * 2;
                  aiStack_ba[iStack_74] = *(int *)(iVar6 + 0x1fca) + 0xe;
                  iVar6 = *(int *)(iVar6 + 0x1f8a) + 0xe;
                  aiStack_98[iVar7] = iVar6;
                  uVar8 = 0x20 - (iVar6 - *(int *)0x1f8a);
                  uVar10 = (int)uVar8 >> 0xf;
                  if ((int)((uVar8 ^ uVar10) - uVar10) < 0x21) {
                    iVar6 = FUN_1000_efc8();
                    iVar7 = iStack_74;
                    aiStack_42[iStack_74] = iVar6 % 6 + 8;
                    iVar6 = FUN_1000_efc8();
                    aiStack_24[iVar7 + 1] = iVar6 % 5 + -2;
                  }
                  else {
                    iVar6 = FUN_1000_efc8();
                    aiStack_42[iVar7] = iVar6 % 6 + 8;
                    iVar6 = *(int *)0x1f8a;
                    if (aiStack_98[iVar7] == iVar6) {
                      uStack_164 = 0;
                    }
                    else if (iVar6 == aiStack_98[iVar7] || iVar6 - aiStack_98[iVar7] < 0) {
                      uStack_164 = 0xffff;
                    }
                    else {
                      uStack_164 = 1;
                    }
                    iVar7 = FUN_1000_efc8();
                    aiStack_24[iStack_74 + 1] = (iVar7 % 6 + 2) * uStack_164;
                  }
                  aiStack_6e[1] = aiStack_6e[1] + 1;
                }
                iVar7 = aiStack_6e[0] * 2;
                *(undefined2 *)(iVar7 + 0x1faa) = 9;
                *(undefined2 *)(iVar7 + 0x1d6a) = 0;
                *(undefined2 *)(iVar7 + 0x1d8a) = 0;
              }
            }
          }
          else if (iVar7 == 9) {
            iVar7 = FUN_1000_efc8();
            if (((iVar7 % 0xf == 0) && (iVar7 = aiStack_6e[0] * 2, *(int *)(iVar7 + 0x1fca) < -0x1f)
                ) && (aiStack_4c[2] < aiStack_4c[4])) {
              iVar6 = FUN_1000_efc8();
              *(int *)(iVar7 + 0x1822) = (iVar6 % 3 + 3) * 0x20;
              iVar6 = FUN_1000_efc8();
              *(int *)(iVar7 + 0x1fca) = (iVar6 % 2) * 0x40 + *(int *)(iVar7 + 0x1822) + -0x20;
              iVar6 = FUN_1000_efc8();
              iVar6 = (iVar6 % 2) * 0x4e0 + -0x140;
              *(int *)(iVar7 + 0x1f8a) = iVar6;
              if (iVar6 == 0x140) {
                uStack_164 = 0;
              }
              else if (-*(int *)(iVar7 + 0x1f8a) == -0x140 || -*(int *)(iVar7 + 0x1f8a) + 0x140 < 0)
              {
                uStack_164 = 0xffff;
              }
              else {
                uStack_164 = 1;
              }
              iVar7 = FUN_1000_efc8();
              *(int *)(aiStack_6e[0] * 2 + 0x1d6a) = (iVar7 % 5 + 5) * uStack_164;
              *(undefined2 *)(aiStack_6e[0] * 2 + 0x1d8a) = 0;
            }
            if (aiStack_4c[4] <= aiStack_4c[2]) {
              iVar7 = *(int *)(aiStack_6e[0] * 2 + 0x1d6a);
              if (iVar7 == 0) {
                uStack_164 = 0;
              }
              else if (iVar7 < 1) {
                uStack_164 = 0xffff;
              }
              else {
                uStack_164 = 1;
              }
              *(int *)(aiStack_6e[0] * 2 + 0x1d6a) = uStack_164 * 10;
            }
            iVar7 = *(int *)(aiStack_6e[0] * 2 + 0x1f8a) + *(int *)(aiStack_6e[0] * 2 + 0x1d6a);
            if ((iVar7 < -0x13f) || (0x39f < iVar7)) {
              *(undefined2 *)(aiStack_6e[0] * 2 + 0x1fca) = 0xffe0;
              *(undefined2 *)(aiStack_6e[0] * 2 + 0x1d8a) = 0;
            }
            if (-0x20 < *(int *)(aiStack_6e[0] * 2 + 0x1fca)) {
              uVar8 = aiStack_6e[0] * 2;
              if (*(int *)(uVar8 + 0x1822) != *(int *)(uVar8 + 0x1fca)) {
                uStack_164 = uVar8;
                if (-(*(int *)(uVar8 + 0x1fca) - *(int *)(uVar8 + 0x1822)) < 1) {
                  iVar7 = -1;
                }
                else {
                  iVar7 = 1;
                }
                *(int *)(uVar8 + 0x1d8a) = *(int *)(uVar8 + 0x1d8a) + iVar7;
              }
            }
          }
          goto LAB_1000_25b9;
        }
        iVar7 = FUN_1000_efc8();
        if (((iVar7 % 0x14 == 0) && (iVar7 = aiStack_6e[0] * 2, *(int *)(iVar7 + 0x1fca) < -0x1f))
           && (aiStack_4c[2] < aiStack_4c[4])) {
          iVar6 = FUN_1000_efc8();
          *(int *)(iVar7 + 0x1fca) = iVar6 % 100 + 0x3c;
          iVar6 = FUN_1000_efc8();
          iVar6 = (iVar6 % 2) * 0x4e0 + -0x140;
          *(int *)(iVar7 + 0x1f8a) = iVar6;
          if (iVar6 == 0x140) {
            uStack_15e = 0;
          }
          else if (-*(int *)(iVar7 + 0x1f8a) == -0x140 || -*(int *)(iVar7 + 0x1f8a) + 0x140 < 0) {
            uStack_15e = 0xffff;
          }
          else {
            uStack_15e = 1;
          }
          iVar7 = FUN_1000_efc8();
          iVar6 = aiStack_6e[0] * 2;
          *(int *)(iVar6 + 0x1d6a) = (iVar7 % 3 + 1) * uStack_15e;
          iVar7 = FUN_1000_efc8();
          *(int *)(iVar6 + 0x1d8a) = iVar7 % 7 + 3;
          iVar7 = FUN_1000_efc8();
          *(int *)(iVar6 + 0x1822) = iVar7 % 0x32 + (0x32 - *(int *)(iVar6 + 0x1d8a)) * 3;
        }
        if (aiStack_4c[4] <= aiStack_4c[2]) {
          *(undefined2 *)(aiStack_6e[0] * 2 + 0x1d8a) = 0xfff8;
        }
        iVar7 = *(int *)(aiStack_6e[0] * 2 + 0x1f8a) + *(int *)(aiStack_6e[0] * 2 + 0x1d6a);
        if ((iVar7 < -0x13f) || (0x39f < iVar7)) {
          uVar8 = aiStack_6e[0] * 2;
          *(undefined2 *)(uVar8 + 0x1fca) = 0xffe0;
          iVar7 = FUN_1000_efc8();
          if (iVar7 % 0x20 + *(int *)0x1f8a != *(int *)(uVar8 + 0x1f8a)) {
            iVar7 = FUN_1000_efc8();
            uStack_15e = uVar8;
            if ((iVar7 % 0x20 - *(int *)(uVar8 + 0x1f8a)) + *(int *)0x1f8a < 1) {
              iVar7 = -1;
            }
            else {
              iVar7 = 1;
            }
            *(int *)(uVar8 + 0x1d6a) = *(int *)(uVar8 + 0x1d6a) + iVar7;
          }
        }
      } while (*(int *)(aiStack_6e[0] * 2 + 0x1fca) < -0x1f);
      iVar7 = FUN_1000_efc8();
      iVar7 = iVar7 % (*(int *)0x181e * -0x14 + *(int *)0x20c6 * -0xf + 0x32);
      if ((((iVar7 == 0) && (iStack_70 < 0x10)) && (0 < *(int *)(aiStack_6e[0] * 2 + 0x1f8a))) &&
         (*(int *)(aiStack_6e[0] * 2 + 0x1f8a) < 0x261)) {
        iStack_72 = iVar7;
        do {
          if (0x15f < (int)auStack_fc[iStack_72 + 1]) {
            iStack_74 = iStack_72;
          }
          iVar7 = iStack_74;
          iStack_72 = iStack_72 + 1;
        } while (iStack_72 < 0x10);
        iVar6 = aiStack_6e[0] * 2;
        auStack_fc[iStack_74 + 1] = *(int *)(iVar6 + 0x1fca) + 0xc;
        aiStack_dc[iVar7 + 1] = *(int *)(iVar6 + 0x1f8a) + 8;
        aiStack_6e[iVar7 + 3] = 0;
        iStack_70 = iStack_70 + 1;
      }
      iVar7 = *(int *)(aiStack_6e[0] * 2 + 0x1d6a);
      if (iVar7 == 0) {
        uStack_15e = 0;
      }
      else if (iVar7 < 1) {
        uStack_15e = 0xffff;
      }
      else {
        uStack_15e = 1;
      }
      uStack_162 = *(int *)0x1f8a - *(int *)(aiStack_6e[0] * 2 + 0x1f8a);
      if (uStack_162 == 0xfff0) {
        uVar8 = 0;
      }
      else if (uStack_162 == 0xfff0 || (int)(uStack_162 + 0x10) < 0) {
        uVar8 = 0xffff;
      }
      else {
        uVar8 = 1;
      }
    } while (uVar8 != uStack_15e);
  } while( true );
code_r0x00016edc:
  piVar9 = piStack_34c;
  if (bVar11 == iVar7 < 0) {
    if (0 < iStack_34a) {
      for (piStack_34c = (int *)0x0; (int)piStack_34c < 0x10;
          piStack_34c = (int *)((int)piStack_34c + 1)) {
        if (aiStack_3b4[(int)piStack_34c] < 0) {
          aiStack_3b4[(int)piStack_34c] = 0x160;
        }
        piVar9 = piStack_34c;
        if (aiStack_3b4[(int)piStack_34c] < 0x160) {
          if (0 < aiStack_346[(int)piStack_34c]) {
            aiStack_346[(int)piStack_34c] = aiStack_346[(int)piStack_34c] + -1;
            iVar7 = *(int *)0x1f8a - aiStack_392[(int)piStack_34c];
            if (iVar7 == -0x20) {
              iVar7 = 0;
            }
            else if (iVar7 == -0x20 || iVar7 + 0x20 < 0) {
              iVar7 = -1;
            }
            else {
              iVar7 = 1;
            }
            auStack_fc[(int)piStack_34c] = auStack_fc[(int)piStack_34c] + *(int *)0x1844 * iVar7;
            iVar7 = *(int *)0x1fca - aiStack_3b4[(int)piStack_34c];
            if (iVar7 == -0x10) {
              iVar7 = 0;
            }
            else if (iVar7 == -0x10 || iVar7 + 0x10 < 0) {
              iVar7 = -1;
            }
            else {
              iVar7 = 1;
            }
            auStack_1e4[(int)piStack_34c] = auStack_1e4[(int)piStack_34c] + *(int *)0x1844 * iVar7;
            uVar8 = auStack_fc[(int)piStack_34c];
            if (8 < (int)((uVar8 ^ (int)uVar8 >> 0xf) - ((int)uVar8 >> 0xf))) {
              if (uVar8 == 0) {
                iVar7 = 0;
              }
              else if ((int)uVar8 < 1) {
                iVar7 = -1;
              }
              else {
                iVar7 = 1;
              }
              auStack_fc[(int)piStack_34c] = iVar7 << 3;
            }
            uVar8 = auStack_1e4[(int)piStack_34c];
            if (8 < (int)((uVar8 ^ (int)uVar8 >> 0xf) - ((int)uVar8 >> 0xf))) {
              if (uVar8 == 0) {
                iVar7 = 0;
              }
              else if ((int)uVar8 < 1) {
                iVar7 = -1;
              }
              else {
                iVar7 = 1;
              }
              auStack_1e4[(int)piStack_34c] = iVar7 << 3;
            }
          }
          aiStack_392[(int)piStack_34c] =
               aiStack_392[(int)piStack_34c] + auStack_fc[(int)piStack_34c];
          piVar1 = aiStack_3b4 + (int)piVar9;
          *piVar1 = *piVar1 + auStack_1e4[(int)piVar9];
          if (((*piVar1 < 0) || (aiStack_392[(int)piVar9] < 0)) ||
             (0x277 < aiStack_392[(int)piVar9])) {
            aiStack_3b4[(int)piStack_34c] = 0x160;
          }
          else {
            if (((*(int *)0x1faa == 10) && (*(int *)0x1f8a <= aiStack_392[(int)piStack_34c])) &&
               ((aiStack_392[(int)piStack_34c] <= *(int *)0x1f8a + 0x3a &&
                ((*(int *)0x1fca + 6 <= aiStack_3b4[(int)piStack_34c] &&
                 (aiStack_3b4[(int)piStack_34c] <= *(int *)0x1fca + 0x1a)))))) {
              *(undefined2 *)0x1faa = 9;
              aiStack_3b4[(int)piStack_34c] = 0x160;
              piStack_c = (int *)0x72ee;
              FUN_1000_cff4();
            }
            if ((aiStack_3b4[(int)piStack_34c] < 0x160) && (-1 < aiStack_3b4[(int)piStack_34c]))
            goto LAB_1000_7241;
          }
          iStack_34a = iStack_34a + -1;
        }
LAB_1000_7241:
      }
    }
    if (iStack_3b6 == 1) {
      if (0 < iStack_3b8) {
        for (piStack_34c = (int *)0x0; (int)piStack_34c < 4;
            piStack_34c = (int *)((int)piStack_34c + 1)) {
          if (aiStack_dc[(int)piStack_34c] < 0x160) {
            piVar1 = (int *)(&stack0xfff6 + (int)piStack_34c * 2);
            *piVar1 = *piVar1 + aiStack_23c[(int)piStack_34c];
            if ((*piVar1 < 0) || (0x25f < *(int *)(&stack0xfff6 + (int)piStack_34c * 2))) {
              aiStack_dc[(int)piStack_34c] = 0x160;
              iStack_3b8 = iStack_3b8 + -1;
            }
            else if ((((*(int *)0x1faa == 10) &&
                      (*(int *)0x1f8a + -0x14 <= *(int *)(&stack0xfff6 + (int)piStack_34c * 2))) &&
                     (*(int *)(&stack0xfff6 + (int)piStack_34c * 2) <= *(int *)0x1f8a + 0x34)) &&
                    ((*(int *)0x1fca + 6 <= aiStack_dc[(int)piStack_34c] &&
                     (aiStack_dc[(int)piStack_34c] <= *(int *)0x1fca + 0x1a)))) {
              *(undefined2 *)0x1faa = 9;
              piStack_c = (int *)0x7394;
              FUN_1000_cff4();
            }
          }
        }
      }
    }
    else if (iStack_3b6 == 2) {
      if (0 < iStack_3b8) {
        for (piStack_34c = (int *)0x0; (int)piStack_34c < 4;
            piStack_34c = (int *)((int)piStack_34c + 1)) {
          if (aiStack_dc[(int)piStack_34c] < 0x160) {
            piVar1 = (int *)(&stack0xfff6 + (int)piStack_34c * 2);
            *piVar1 = *piVar1 + aiStack_23c[(int)piStack_34c];
            if ((*piVar1 < 0) || (0x25f < *(int *)(&stack0xfff6 + (int)piStack_34c * 2))) {
              aiStack_dc[(int)piStack_34c] = 0x160;
              iStack_3b8 = iStack_3b8 + -1;
            }
            else if ((((*(int *)0x1faa == 10) &&
                      (*(int *)0x1f8a + -0x14 <= *(int *)(&stack0xfff6 + (int)piStack_34c * 2))) &&
                     (*(int *)(&stack0xfff6 + (int)piStack_34c * 2) <= *(int *)0x1f8a + 0x34)) &&
                    ((*(int *)0x1fca + 6 <= aiStack_dc[(int)piStack_34c] &&
                     (aiStack_dc[(int)piStack_34c] <= *(int *)0x1fca + 0x1a)))) {
              *(undefined2 *)0x1faa = 9;
              piStack_c = (int *)0x7432;
              FUN_1000_cff4();
            }
          }
        }
      }
    }
    else if ((iStack_3b6 == 3) && (0 < iStack_3b8)) {
      for (piStack_34c = (int *)0x0; (int)piStack_34c < 3;
          piStack_34c = (int *)((int)piStack_34c + 2)) {
        if (aiStack_dc[(int)piStack_34c] < 0x160) {
          iVar7 = (int)piStack_34c * 2;
          *(int *)(&stack0xfff6 + iVar7) =
               *(int *)(&stack0xfff6 + iVar7) + aiStack_23c[(int)piStack_34c];
          if ((0xa0 < *(int *)(&stack0xfff8 + iVar7) - *(int *)(&stack0xfff6 + iVar7)) ||
             (*(int *)(&stack0xfff6 + iVar7) < 0xa0)) {
            *(int *)(&stack0xfff8 + (int)piStack_34c * 2) =
                 *(int *)(&stack0xfff8 + (int)piStack_34c * 2) + aiStack_23c[(int)piStack_34c];
          }
          if (*(int *)(&stack0xfff8 + (int)piStack_34c * 2) < 0x10) {
            aiStack_dc[(int)piStack_34c] = 0x160;
            iStack_3b8 = iStack_3b8 + -1;
          }
          else {
            if (*(int *)(&stack0xfff6 + (int)piStack_34c * 2) < 0x10) {
              *(undefined2 *)(&stack0xfff6 + (int)piStack_34c * 2) = 0;
            }
            if ((((*(int *)0x1faa == 10) &&
                 (*(int *)0x1f8a + -4 <= *(int *)(&stack0xfff8 + (int)piStack_34c * 2))) &&
                (*(int *)(&stack0xfff6 + (int)piStack_34c * 2) <= *(int *)0x1f8a + 0x34)) &&
               ((*(int *)0x1fca + 6 <= aiStack_dc[(int)piStack_34c] &&
                (aiStack_dc[(int)piStack_34c] <= *(int *)0x1fca + 0x1a)))) {
              *(undefined2 *)0x1faa = 9;
              piStack_c = (int *)0x74e5;
              FUN_1000_cff4();
            }
          }
        }
      }
    }
    if (iStack_3b6 == 1) {
      if ((((*(int *)0x1f8c + -0x30 < *(int *)0x1f8a) && (*(int *)0x1f8a < *(int *)0x1f8c + 0x70))
          && (*(int *)0x1fcc + -0x14 < *(int *)0x1fca)) &&
         ((*(int *)0x1fca < *(int *)0x1fcc + 0x54 && (9 < *(int *)0x1faa)))) {
        *(undefined2 *)0x1faa = 9;
        piStack_c = (int *)0x7590;
        FUN_1000_cff4();
      }
    }
    else if (iStack_3b6 == 2) {
      if ((((*(int *)0x1f8c + -0x30 < *(int *)0x1f8a) && (*(int *)0x1f8a < *(int *)0x1f8c + 0x30))
          && (*(int *)0x1fcc + -0x14 < *(int *)0x1fca)) &&
         ((*(int *)0x1fca < *(int *)0x1fcc + 0x34 && (9 < *(int *)0x1faa)))) {
        *(undefined2 *)0x1faa = 9;
        piStack_c = (int *)0x75f4;
        FUN_1000_cff4();
      }
      for (piStack_34c = (int *)0x3; (int)piStack_34c < 0xf;
          piStack_34c = (int *)((int)piStack_34c + 1)) {
        iVar7 = *(int *)((int)piStack_34c * 2 + 0x1f8a);
        if (((iVar7 + -0x30 <= *(int *)0x1f8a) && (*(int *)0x1f8a <= iVar7 + 0x10)) &&
           ((iVar7 = *(int *)((int)piStack_34c * 2 + 0x1fca), iVar7 + -0x14 <= *(int *)0x1fca &&
            ((*(int *)0x1fca <= iVar7 + 0x14 && (9 < *(int *)0x1faa)))))) {
          *(undefined2 *)0x1faa = 9;
          piStack_c = (int *)0x7655;
          FUN_1000_cff4();
        }
      }
    }
    else if (iStack_3b6 == 3) {
      if (((*(int *)0x1f94 + -0x30 < *(int *)0x1f8a) && (*(int *)0x1f8a < *(int *)0x1f94 + 0x30)) &&
         ((*(int *)0x1fd4 + -0x14 < *(int *)0x1fca &&
          ((*(int *)0x1fca < *(int *)0x1fd4 + 0x74 && (9 < *(int *)0x1faa)))))) {
        *(undefined2 *)0x1faa = 9;
        piStack_c = (int *)0x769e;
        FUN_1000_cff4();
      }
      if ((((*(int *)0x1f8c + -0x30 <= *(int *)0x1f8a) && (*(int *)0x1f8a <= *(int *)0x1f8c + 0x10))
          && (*(int *)0x1fcc + -0x14 <= *(int *)0x1fca)) &&
         ((*(int *)0x1fca <= *(int *)0x1fcc + 0x34 && (9 < *(int *)0x1faa)))) {
        *(undefined2 *)0x1faa = 9;
        piStack_c = (int *)0x76e5;
        FUN_1000_cff4();
      }
      for (piStack_34c = (int *)0x3; (int)piStack_34c < 5;
          piStack_34c = (int *)((int)piStack_34c + 1)) {
        iVar7 = *(int *)((int)piStack_34c * 2 + 0x1f8a);
        if (((iVar7 + -0x30 < *(int *)0x1f8a) && (*(int *)0x1f8a < iVar7 + 0x30)) &&
           ((iVar7 = *(int *)((int)piStack_34c * 2 + 0x1fca), iVar7 + -0x14 < *(int *)0x1fca &&
            ((*(int *)0x1fca < iVar7 + 0x14 && (9 < *(int *)0x1faa)))))) {
          *(undefined2 *)0x1faa = 9;
          piStack_c = (int *)0x7748;
          FUN_1000_cff4();
        }
      }
    }
    *(int *)0x1f8a = *(int *)0x1f8a + *(int *)0x1d6a;
    *(int *)0x1fca = *(int *)0x1fca + *(int *)0x1d8a;
    *(byte *)0x1844 = *(byte *)0x1844 ^ 1;
    for (piStack_34c = (int *)0x0; (int)piStack_34c < 100;
        piStack_34c = (int *)((int)piStack_34c + 1)) {
      aiStack_1c4[(int)piStack_34c] = aiStack_1c4[(int)piStack_34c] + 5;
      if (0x160 < aiStack_1c4[(int)piStack_34c]) {
        aiStack_1c4[(int)piStack_34c] = aiStack_1c4[(int)piStack_34c] + -0x160;
      }
      if (aiStack_d2[(int)piStack_34c] < 0) {
        aiStack_d2[(int)piStack_34c] = aiStack_d2[(int)piStack_34c] + 0x280;
      }
      if (0x27f < aiStack_d2[(int)piStack_34c]) {
        aiStack_d2[(int)piStack_34c] = aiStack_d2[(int)piStack_34c] + -0x280;
      }
      piStack_c = (int *)aiStack_1c4[(int)piStack_34c];
      piStack_e = (int *)(((int)*(char *)(aiStack_1c4[(int)piStack_34c] + 0xbd6) *
                           aiStack_480[(int)piStack_34c] >> 2) + aiStack_d2[(int)piStack_34c]);
      piStack_10 = (int *)0x77c5;
      FUN_1000_b50e();
    }
    if (iStack_3b6 == 1) {
      piStack_34c = (int *)0x0;
      do {
        piVar9 = piStack_34c;
        iVar7 = (int)piStack_34c * 2;
        if (aiStack_dc[(int)piStack_34c] < 0x160) {
          piStack_c = (int *)aiStack_dc[(int)piStack_34c];
          piStack_e = *(int **)(&stack0xfff6 + iVar7);
          piStack_10 = (int *)0x7805;
          FUN_1000_bfd6();
          piStack_c = (int *)aiStack_dc[(int)piVar9];
          piStack_e = (int *)(*(int *)(&stack0xfff6 + iVar7) + 0x10);
          piStack_10 = (int *)0x781d;
          FUN_1000_bfd6();
        }
        piStack_34c = (int *)((int)piStack_34c + 1);
      } while ((int)piStack_34c < 4);
      if (iStack_234 < 0x28) {
        for (piStack_34c = (int *)0x1; (int)piStack_34c < 7;
            piStack_34c = (int *)((int)piStack_34c + 1)) {
          iVar7 = (int)piStack_34c * 2;
          *(int *)(iVar7 + 0x1f8a) = *(int *)(iVar7 + 0x1f8a) + *(int *)0x1d6c;
          *(int *)(iVar7 + 0x1fca) = *(int *)(iVar7 + 0x1fca) + *(int *)0x1d8c;
          if (((-0x20 < *(int *)(iVar7 + 0x1fca)) && (*(int *)(iVar7 + 0x1fca) < 0x160)) &&
             ((-0x21 < *(int *)((int)piStack_34c * 2 + 0x1f8a) &&
              (*(int *)((int)piStack_34c * 2 + 0x1f8a) < 0x260)))) {
            piStack_c = (int *)0x7887;
            FUN_1000_8518();
          }
        }
      }
      for (piStack_34c = (int *)0x7; (int)piStack_34c < 0x10;
          piStack_34c = (int *)((int)piStack_34c + 1)) {
        iVar7 = (int)piStack_34c * 2;
        if (*(int *)(iVar7 + 0x1faa) < 10) {
          *(int *)(iVar7 + 0x1f8a) = *(int *)(iVar7 + 0x1f8a) + *(int *)0x1d6c;
          *(int *)(iVar7 + 0x1fca) = *(int *)(iVar7 + 0x1fca) + *(int *)0x1d8c;
          if (iStack_234 < 0x28) {
            piStack_c = (int *)0x78d5;
            FUN_1000_8562();
          }
          else {
            piStack_c = (int *)0x789b;
            FUN_1000_85b8();
          }
        }
      }
    }
    else if (iStack_3b6 == 2) {
      for (piStack_34c = (int *)0x0; piVar9 = piStack_34c, (int)piStack_34c < 4;
          piStack_34c = (int *)((int)piStack_34c + 1)) {
        iVar7 = (int)piStack_34c * 2;
        if (aiStack_dc[(int)piStack_34c] < 0x160) {
          piStack_c = (int *)aiStack_dc[(int)piStack_34c];
          piStack_e = *(int **)(&stack0xfff6 + iVar7);
          piStack_10 = (int *)0x7901;
          FUN_1000_bfd6();
          piStack_c = (int *)aiStack_dc[(int)piVar9];
          piStack_e = (int *)(*(int *)(&stack0xfff6 + iVar7) + 0x10);
          piStack_10 = (int *)0x791a;
          FUN_1000_bfd6();
        }
      }
      if (iStack_210 < 0x14) {
        piStack_34c = (int *)0xe;
        do {
          iVar7 = (int)piStack_34c * 2;
          *(undefined2 *)(iVar7 + 0x1f8a) = *(undefined2 *)(iVar7 + 0x1f88);
          *(undefined2 *)(iVar7 + 0x1fca) = *(undefined2 *)(iVar7 + 0x1fc8);
          piStack_34c = (int *)((int)piStack_34c + -1);
        } while (3 < (int)piStack_34c);
        *(int *)0x1f90 = *(int *)0x1d6c + *(int *)0x1f8c + 0x10;
        *(int *)0x1fd0 = *(int *)0x1d8c + *(int *)0x1fcc + 0x14;
        for (piStack_34c = (int *)0xe; 3 < (int)piStack_34c;
            piStack_34c = (int *)((int)piStack_34c + -1)) {
          if (((-0x20 < *(int *)((int)piStack_34c * 2 + 0x1fca)) &&
              (*(int *)((int)piStack_34c * 2 + 0x1fca) < 0x160)) &&
             ((-1 < *(int *)((int)piStack_34c * 2 + 0x1f8a) &&
              (*(int *)((int)piStack_34c * 2 + 0x1f8a) < 0x260)))) {
            piStack_c = (int *)0x79d9;
            FUN_1000_84d6();
          }
        }
        for (piStack_34c = (int *)0x1; (int)piStack_34c < 3;
            piStack_34c = (int *)((int)piStack_34c + 1)) {
          iVar7 = (int)piStack_34c * 2;
          *(int *)(iVar7 + 0x1f8a) = *(int *)(iVar7 + 0x1f8a) + *(int *)0x1d6c;
          *(int *)(iVar7 + 0x1fca) = *(int *)(iVar7 + 0x1fca) + *(int *)0x1d8c;
          if ((((-0x20 < *(int *)(iVar7 + 0x1fca)) && (*(int *)(iVar7 + 0x1fca) < 0x160)) &&
              (-0x21 < *(int *)((int)piStack_34c * 2 + 0x1f8a))) &&
             (*(int *)((int)piStack_34c * 2 + 0x1f8a) < 0x260)) {
            piStack_c = piStack_34c;
            piStack_e = (int *)0x7a4d;
            FUN_1000_8622();
          }
        }
      }
      else {
        for (piStack_34c = (int *)0xe; 3 < (int)piStack_34c;
            piStack_34c = (int *)((int)piStack_34c + -1)) {
          if (((-0x20 < *(int *)((int)piStack_34c * 2 + 0x1fca)) &&
              (*(int *)((int)piStack_34c * 2 + 0x1fca) < 0x160)) &&
             ((-1 < *(int *)((int)piStack_34c * 2 + 0x1f8a) &&
              (*(int *)((int)piStack_34c * 2 + 0x1f8a) < 0x260)))) {
            if (*(int *)((int)piStack_34c * 2 + 0x1faa) < 10) {
              if (0 < *(int *)((int)piStack_34c * 2 + 0x1faa)) {
                piStack_c = (int *)0x7ac0;
                FUN_1000_8562();
              }
            }
            else {
              piStack_c = (int *)0x7aa6;
              FUN_1000_84d6();
            }
          }
        }
        for (piStack_34c = (int *)0x1; (int)piStack_34c < 3;
            piStack_34c = (int *)((int)piStack_34c + 1)) {
          if (((-0x20 < *(int *)((int)piStack_34c * 2 + 0x1fca)) &&
              (*(int *)((int)piStack_34c * 2 + 0x1fca) < 0x160)) &&
             ((-0x21 < *(int *)((int)piStack_34c * 2 + 0x1f8a) &&
              (*(int *)((int)piStack_34c * 2 + 0x1f8a) < 0x260)))) {
            if (*(int *)((int)piStack_34c * 2 + 0x1faa) < 10) {
              if (0 < *(int *)((int)piStack_34c * 2 + 0x1faa)) {
                piStack_c = (int *)0x7b48;
                FUN_1000_85b8();
              }
            }
            else {
              piStack_c = piStack_34c;
              piStack_e = (int *)0x7b2f;
              FUN_1000_8622();
            }
          }
        }
      }
      if (*(int *)0x1fc8 < 10) {
        *(int *)0x1fa8 = *(int *)0x1fa8 + *(int *)0x1d6c;
        *(int *)0x1fe8 = *(int *)0x1fe8 + *(int *)0x1d8c;
        if ((((-0x20 < *(int *)0x1fe8) && (*(int *)0x1fe8 < 0x160)) && (0 < *(int *)0x1fa8)) &&
           (*(int *)0x1fa8 < 0x260)) {
          piStack_c = (int *)0x7b88;
          FUN_1000_8562();
        }
      }
    }
    else if (iStack_3b6 == 3) {
      for (piStack_34c = (int *)0x0; piVar9 = piStack_34c, (int)piStack_34c < 3;
          piStack_34c = (int *)((int)piStack_34c + 2)) {
        iVar7 = (int)piStack_34c * 2;
        if (aiStack_dc[(int)piStack_34c] < 0x160) {
          piStack_c = (int *)aiStack_dc[(int)piStack_34c];
          piStack_e = *(int **)(&stack0xfff6 + iVar7);
          piStack_10 = (int *)0x7c00;
          FUN_1000_bfd6();
          piStack_c = (int *)aiStack_dc[(int)piVar9 + 1];
          piStack_e = *(int **)(&stack0xfff8 + iVar7);
          piStack_10 = (int *)0x7c14;
          FUN_1000_bfd6();
          for (piStack_34e = (int *)(*(int *)(&stack0xfff6 + iVar7) + 0x10);
              (int)piStack_34e < *(int *)(&stack0xfff8 + (int)piStack_34c * 2);
              piStack_34e = piStack_34e + 8) {
            piStack_c = (int *)aiStack_dc[(int)piStack_34c];
            piStack_e = piStack_34e;
            piStack_10 = (int *)0x7bbe;
            FUN_1000_bfd6();
          }
        }
      }
      if (iStack_234 < 0x28) {
        for (piStack_34c = (int *)0x1; (int)piStack_34c < 3;
            piStack_34c = (int *)((int)piStack_34c + 1)) {
          iVar7 = (int)piStack_34c * 2;
          *(int *)(iVar7 + 0x1f8a) = *(int *)(iVar7 + 0x1f8a) + *(int *)0x1d6c;
          *(int *)(iVar7 + 0x1fca) = *(int *)(iVar7 + 0x1fca) + *(int *)0x1d8c;
          if ((((-0x20 < *(int *)(iVar7 + 0x1fca)) && (*(int *)(iVar7 + 0x1fca) < 0x160)) &&
              (-1 < *(int *)((int)piStack_34c * 2 + 0x1f8a))) &&
             (*(int *)((int)piStack_34c * 2 + 0x1f8a) < 0x260)) {
            piStack_c = (int *)0x7c83;
            FUN_1000_84d6();
          }
        }
        for (piStack_34c = (int *)0x3; (int)piStack_34c < 9;
            piStack_34c = (int *)((int)piStack_34c + 1)) {
          iVar7 = (int)piStack_34c * 2;
          *(int *)(iVar7 + 0x1f8a) = *(int *)(iVar7 + 0x1f8a) + *(int *)0x1d6c;
          *(int *)(iVar7 + 0x1fca) = *(int *)(iVar7 + 0x1fca) + *(int *)0x1d8c;
          if (((-0x20 < *(int *)(iVar7 + 0x1fca)) && (*(int *)(iVar7 + 0x1fca) < 0x160)) &&
             ((-0x21 < *(int *)((int)piStack_34c * 2 + 0x1f8a) &&
              (*(int *)((int)piStack_34c * 2 + 0x1f8a) < 0x260)))) {
            piStack_c = (int *)0x7cdd;
            FUN_1000_8518();
          }
        }
      }
      for (piStack_34c = (int *)0x9; (int)piStack_34c < 0x10;
          piStack_34c = (int *)((int)piStack_34c + 1)) {
        iVar7 = (int)piStack_34c * 2;
        if (*(int *)(iVar7 + 0x1faa) < 10) {
          *(int *)(iVar7 + 0x1f8a) = *(int *)(iVar7 + 0x1f8a) + *(int *)0x1d6c;
          *(int *)(iVar7 + 0x1fca) = *(int *)(iVar7 + 0x1fca) + *(int *)0x1d8c;
          if (iStack_234 < 0x28) {
            piStack_c = (int *)0x7d2b;
            FUN_1000_8562();
          }
          else {
            piStack_c = (int *)0x7cf1;
            FUN_1000_85b8();
          }
        }
      }
    }
    piStack_34e = (int *)(*(int *)0x181e * 0x10 + *(int *)0x1d42 + 0x14);
    for (piStack_34c = (int *)0x0; (int)piStack_34c < *(int *)0x1d48;
        piStack_34c = (int *)((int)piStack_34c + 1)) {
      if (-0x10 < aiStack_232[(int)piStack_34c]) {
        if (aiStack_232[(int)piStack_34c] < 0) {
          piStack_c = (int *)aiStack_232[(int)piStack_34c];
          piStack_e = (int *)aiStack_20e[(int)piStack_34c];
          piStack_10 = (int *)0x7d4d;
          FUN_1000_c322();
        }
        else {
          piStack_c = (int *)aiStack_232[(int)piStack_34c];
          piStack_e = (int *)aiStack_20e[(int)piStack_34c];
          piStack_10 = (int *)0x7d85;
          FUN_1000_bfd6();
        }
      }
    }
    if (0 < iStack_34a) {
      piStack_34e = (int *)((iStack_3b6 + -1) * 2 + *(int *)0x1844 + *(int *)0x1d46 + *(int *)0x1d42
                           );
      for (piStack_34c = (int *)0x0; (int)piStack_34c < 0x10;
          piStack_34c = (int *)((int)piStack_34c + 1)) {
        if ((aiStack_3b4[(int)piStack_34c] < 0x160) && (-1 < aiStack_3b4[(int)piStack_34c])) {
          piStack_c = (int *)aiStack_3b4[(int)piStack_34c];
          piStack_e = (int *)aiStack_392[(int)piStack_34c];
          piStack_10 = (int *)0x7df9;
          FUN_1000_bfd6();
        }
      }
    }
    if (*(int *)0x1faa < 10) {
      piStack_c = (int *)*(undefined2 *)0x1fca;
      piStack_e = (int *)*(undefined2 *)0x1f8a;
      piStack_10 = (int *)0x7e52;
      FUN_1000_bfd6();
    }
    else {
      piStack_c = (int *)*(undefined2 *)0x1fca;
      piStack_e = (int *)*(undefined2 *)0x1f8a;
      piStack_10 = (int *)0x7e75;
      FUN_1000_bfd6();
    }
    piStack_c = (int *)*(undefined2 *)0x1fca;
    piStack_e = (int *)(*(int *)0x1f8a + 0x20);
    piStack_10 = (int *)0x7e8a;
    FUN_1000_bfd6();
    FUN_1000_8292();
    if (iStack_3b6 == 1) {
      for (piStack_34c = (int *)0x1; (int)piStack_34c < 6; piStack_34c = piStack_34c + 1) {
        if ((-1 < *(int *)((int)piStack_34c * 2 + 0x1fca)) &&
           (*(int *)((int)piStack_34c * 2 + 0x1fca) < 0x161)) {
          piStack_c = (int *)0xf;
          piStack_e = piStack_34c;
          piStack_10 = (int *)0x7edf;
          FUN_1000_890a();
        }
      }
    }
    else if (iStack_3b6 == 2) {
      if ((-1 < *(int *)0x1fcc) && (*(int *)0x1fcc < 0x161)) {
        piStack_c = (int *)0x7;
        piStack_e = (int *)0x1;
        piStack_10 = (int *)0x7f02;
        FUN_1000_890a();
      }
      if ((-1 < *(int *)0x1fce) && (*(int *)0x1fce < 0x161)) {
        piStack_c = (int *)0x7;
        piStack_e = (int *)0x2;
        piStack_10 = (int *)0x7f23;
        FUN_1000_890a();
      }
      for (piStack_34c = (int *)0x3; (int)piStack_34c < 0xf;
          piStack_34c = (int *)((int)piStack_34c + 1)) {
        if ((-1 < *(int *)((int)piStack_34c * 2 + 0x1fca)) &&
           (*(int *)((int)piStack_34c * 2 + 0x1fca) < 0x161)) {
          piStack_c = (int *)0x3;
          piStack_e = piStack_34c;
          piStack_10 = (int *)0x7f60;
          FUN_1000_890a();
        }
      }
    }
    else if (iStack_3b6 == 3) {
      if ((-1 < *(int *)0x1fcc) && (*(int *)0x1fcc < 0x161)) {
        piStack_c = (int *)0xb;
        piStack_e = (int *)0x1;
        piStack_10 = (int *)0x7f84;
        FUN_1000_890a();
      }
      if ((-1 < *(int *)0x1fce) && (*(int *)0x1fce < 0x161)) {
        piStack_c = (int *)0xb;
        piStack_e = (int *)0x2;
        piStack_10 = (int *)0x7fa5;
        FUN_1000_890a();
      }
      piStack_34c = (int *)0x3;
      do {
        if ((-1 < *(int *)((int)piStack_34c * 2 + 0x1fca)) &&
           (*(int *)((int)piStack_34c * 2 + 0x1fca) < 0x161)) {
          piStack_c = (int *)0x7;
          piStack_e = piStack_34c;
          piStack_10 = (int *)0x7fd2;
          FUN_1000_890a();
        }
        piStack_34c = (int *)((int)piStack_34c + 1);
      } while ((int)piStack_34c < 6);
      if ((-1 < *(int *)0x1fda) && (*(int *)0x1fda < 0x161)) {
        piStack_c = (int *)0x7;
        piStack_e = (int *)0x8;
        piStack_10 = (int *)0x7ffe;
        FUN_1000_890a();
      }
    }
    piStack_c = (int *)0x7;
    piStack_e = (int *)0x0;
    piStack_10 = (int *)0x800f;
    FUN_1000_890a();
    while (iVar7 = FUN_1000_bf8e(), iVar7 != 0) {
      FUN_1000_bf98();
    }
    piStack_c = (int *)0x8025;
    FUN_1000_e538();
    do {
      uVar8 = FUN_1000_bb38();
    } while (uVar8 < *(int *)0x1820 - 1U);
    *(undefined2 *)0xdd0 = 0;
    out(0xa4,(byte)*(undefined2 *)0x1844);
    out(0xa6,(byte)*(undefined2 *)0x1844 ^ 1);
    FUN_1000_b4ee();
    FUN_1000_8184();
    piStack_c = (int *)0x5c89;
    iStack_372 = FUN_1000_e3c8();
    if (((iStack_372 != 0) || (*(int *)0x213e != 0)) && (FUN_1000_9e70(), *(int *)0x184c == 0))
    goto LAB_1000_804a;
    *(undefined2 *)0x1d8a = 0;
    *(undefined2 *)0x1d6a = 0;
    if (*(int *)0x1faa < 10) {
      iVar7 = *(int *)0x1faa;
      *(int *)0x1faa = *(int *)0x1faa + -1;
      if (iVar7 < 1) {
        iStack_1ee = 1;
        *(int *)0x1842 = *(int *)0x1842 + -1;
LAB_1000_804a:
        FUN_1000_cf2c();
        FUN_1000_a23c();
        if ((iStack_1ee != 1) && (*(int *)0x1842 != 0)) {
          piStack_c = aiStack_480;
          piStack_e = aiStack_1c4;
          piStack_10 = aiStack_d2;
          uStack_12 = 0x8075;
          FUN_1000_95a4();
        }
        if ((iStack_1ee == 1) && (*(int *)0x1842 == 0)) {
          FUN_1000_a29e();
        }
        out(0xa6,(char)*(undefined2 *)0x1844);
        iVar7 = FUN_1000_84ae();
        return iVar7;
      }
    }
    else {
      if ((*(int *)0x2132 != 0) && (*(int *)0x1d4a + *(int *)0x1fca < 0x140)) {
        *(undefined2 *)0x1d8a = *(undefined2 *)0x1d4a;
      }
      if ((*(int *)0x2130 != 0) && (-1 < *(int *)0x1fca - *(int *)0x1d4a)) {
        *(int *)0x1d8a = -*(int *)0x1d4a;
      }
      if ((*(int *)0x2136 != 0) && (*(int *)0x1d4a + *(int *)0x1f8a < 0x210)) {
        *(undefined2 *)0x1d6a = *(undefined2 *)0x1d4a;
      }
      if ((*(int *)0x2134 != 0) && (0x2f < *(int *)0x1f8a - *(int *)0x1d4a)) {
        *(int *)0x1d6a = -*(int *)0x1d4a;
      }
      if ((((*(int *)0x2138 != 0) && (*(int *)0x212c == 0)) ||
          ((*(int *)0x213a != 0 && (*(int *)0x212c != 0)))) &&
         ((iVar7 = *(int *)0x20c6 * 2 - *(int *)0x1d48, -iStack_d4 != iVar7 && iStack_d4 <= -iVar7
          && (iStack_212 != 0)))) {
        for (piStack_34c = (int *)0x0; (int)piStack_34c < *(int *)0x1d48;
            piStack_34c = (int *)((int)piStack_34c + 1)) {
          if (aiStack_232[(int)piStack_34c] < -0xf) {
            piStack_34e = piStack_34c;
            break;
          }
        }
        piVar9 = piStack_34e;
        aiStack_232[(int)piStack_34e] = *(int *)0x1fca + 0xc;
        aiStack_20e[(int)piStack_34e] = *(int *)0x1f8a + 5;
        aiStack_36e[(int)piStack_34e] = (-2 - *(int *)0x181e) * 6;
        iStack_d4 = iStack_d4 + 1;
        aiStack_25c[(int)piVar9] = 0;
        iStack_212 = 0;
        if (*(int *)0x20c6 == 1) {
          for (piStack_34c = (int *)0x0; (int)piStack_34c < *(int *)0x1d48;
              piStack_34c = (int *)((int)piStack_34c + 1)) {
            if (aiStack_232[(int)piStack_34c] < -0xf) {
              piStack_34e = piStack_34c;
              break;
            }
          }
          aiStack_232[(int)piStack_34e] = *(int *)0x1fca + 0xc;
          aiStack_20e[(int)piStack_34e] = *(int *)0x1f8a + 5;
          aiStack_36e[(int)piStack_34e] = (-2 - *(int *)0x181e) * 6;
          aiStack_25c[(int)piStack_34c] = -1;
          for (piStack_34c = (int *)0x0; (int)piStack_34c < *(int *)0x1d48;
              piStack_34c = (int *)((int)piStack_34c + 1)) {
            if (aiStack_232[(int)piStack_34c] < -0xf) {
              piStack_34e = piStack_34c;
              break;
            }
          }
          aiStack_232[(int)piStack_34e] = *(int *)0x1fca + 0xc;
          aiStack_20e[(int)piStack_34e] = *(int *)0x1f8a + 5;
          aiStack_36e[(int)piStack_34e] = (-2 - *(int *)0x181e) * 6;
          aiStack_25c[(int)piStack_34c] = 1;
          iStack_d4 = iStack_d4 + 2;
        }
        piStack_c = (int *)0x5ebb;
        FUN_1000_cff4();
      }
      if ((((*(int *)0x213a != 0) && (*(int *)0x212c == 0)) ||
          ((*(int *)0x2138 != 0 && (*(int *)0x212c != 0)))) &&
         ((iVar7 = *(int *)0x20c6 * 2 - *(int *)0x1d48, -iStack_d4 != iVar7 && iStack_d4 <= -iVar7
          && (iStack_212 != 0)))) {
        for (piStack_34c = (int *)0x0; piVar9 = piStack_34e, (int)piStack_34c < *(int *)0x1d48;
            piStack_34c = (int *)((int)piStack_34c + 1)) {
          if (aiStack_232[(int)piStack_34c] < -0xf) {
            piStack_34e = piStack_34c;
          }
        }
        aiStack_232[(int)piStack_34e] = *(int *)0x1fca + 0xb;
        aiStack_20e[(int)piStack_34e] = *(int *)0x1f8a + 0x2c;
        aiStack_36e[(int)piStack_34e] = (*(int *)0x181e + 2) * 6;
        iStack_d4 = iStack_d4 + 1;
        aiStack_25c[(int)piVar9] = 0;
        iStack_212 = 0;
        if (*(int *)0x20c6 == 1) {
          for (piStack_34c = (int *)0x0; (int)piStack_34c < *(int *)0x1d48;
              piStack_34c = (int *)((int)piStack_34c + 1)) {
            if (aiStack_232[(int)piStack_34c] < -0xf) {
              piStack_34e = piStack_34c;
              break;
            }
          }
          aiStack_232[(int)piStack_34e] = *(int *)0x1fca + 0xb;
          aiStack_20e[(int)piStack_34e] = *(int *)0x1f8a + 0x2c;
          aiStack_36e[(int)piStack_34e] = (*(int *)0x181e + 2) * 6;
          aiStack_25c[(int)piStack_34c] = -1;
          for (piStack_34c = (int *)0x0; (int)piStack_34c < *(int *)0x1d48;
              piStack_34c = (int *)((int)piStack_34c + 1)) {
            if (aiStack_232[(int)piStack_34c] < -0xf) {
              piStack_34e = piStack_34c;
              break;
            }
          }
          aiStack_232[(int)piStack_34e] = *(int *)0x1fca + 0xb;
          aiStack_20e[(int)piStack_34e] = *(int *)0x1f8a + 0x2c;
          aiStack_36e[(int)piStack_34e] = (*(int *)0x181e + 2) * 6;
          aiStack_25c[(int)piStack_34c] = 1;
          iStack_d4 = iStack_d4 + 2;
        }
        piStack_c = (int *)0x6039;
        FUN_1000_cff4();
      }
      if ((*(int *)0x2138 == 0) && (*(int *)0x213a == 0)) {
        iStack_212 = 1;
      }
    }
    if (iStack_3b6 == 1) {
      if (iStack_210 < 0x14) {
        iStack_25e = iStack_25e + 1;
        if (*(int *)0x1fb8 < 10) {
          piVar1 = (int *)0x1fb8;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            *(undefined2 *)0x1fb8 = 10;
          }
        }
        if (iStack_210 < 0xc) {
          if (((iStack_234 == 0) && (100 < iStack_25e)) && (iStack_3b8 == 0)) {
            if (*(int *)0x1f8c == 0x1d2) {
              iVar7 = 0;
            }
            else if (-*(int *)0x1f8c == -0x1d2 || -*(int *)0x1f8c + 0x1d2 < 0) {
              iVar7 = -1;
            }
            else {
              iVar7 = 1;
            }
            *(int *)0x1d6c = iVar7 * 0xe;
            if (*(int *)0x1d8c != 0) {
              if (*(int *)0x1d8c < 1) {
                iVar7 = -1;
              }
              else {
                iVar7 = 1;
              }
              *(int *)0x1d8c = *(int *)0x1d8c - iVar7;
            }
            uVar8 = (*(int *)0x1d6c + *(int *)0x1f8c) - 0x1d2;
            uVar10 = (int)uVar8 >> 0xf;
            if ((int)((uVar8 ^ uVar10) - uVar10) < 9) {
              iStack_234 = 1;
              iVar7 = FUN_1000_efc8();
              *(int *)0x1d8c = (iVar7 % 2) * 0x10 + -8;
              iStack_25e = 0;
              *(undefined2 *)0x1d6c = 0;
            }
          }
          if (((iStack_234 == 1) && (100 < iStack_25e)) && (iStack_3b8 == 0)) {
            if (*(int *)0x1f8c == 0x2e) {
              iVar7 = 0;
            }
            else if (-*(int *)0x1f8c == -0x2e || -*(int *)0x1f8c + 0x2e < 0) {
              iVar7 = -1;
            }
            else {
              iVar7 = 1;
            }
            *(int *)0x1d6c = iVar7 * 0xe;
            if (*(int *)0x1d8c != 0) {
              if (*(int *)0x1d8c < 1) {
                iVar7 = -1;
              }
              else {
                iVar7 = 1;
              }
              *(int *)0x1d8c = *(int *)0x1d8c - iVar7;
            }
            uVar8 = (*(int *)0x1d6c + *(int *)0x1f8c) - 0x2e;
            uVar10 = (int)uVar8 >> 0xf;
            if ((int)((uVar8 ^ uVar10) - uVar10) < 9) {
              iVar7 = FUN_1000_efc8();
              *(int *)0x1d8c = (iVar7 % 2) * 0x10 + -8;
              iStack_234 = 0;
              iStack_25e = 0;
              *(undefined2 *)0x1d6c = 0;
            }
          }
          if (iStack_25e < 0x65) {
            *(undefined2 *)0x1d6c = 0;
            iVar7 = FUN_1000_efc8();
            if ((iVar7 % 10 == 0) && (iStack_3b8 == 0)) {
              if (iStack_234 == 0) {
                iStack_394 = 0;
                do {
                  aiStack_23c[iStack_394] = 0x10;
                  iStack_394 = iStack_394 + 1;
                } while (iStack_394 < 4);
              }
              else {
                for (iStack_394 = iVar7 % 10; iStack_394 < 4; iStack_394 = iStack_394 + 1) {
                  aiStack_23c[iStack_394] = -0x10;
                }
              }
              aiStack_dc[0] = *(int *)0x1fcc + 6;
              aiStack_dc[1] = *(int *)0x1fcc + 0x18;
              piStack_d8 = (int *)(*(int *)0x1fcc + 0x39);
              piStack_d6 = (int *)(*(int *)0x1fcc + 0x4b);
              iStack_3b8 = 4;
            }
          }
          if ((*(int *)0x1d8c + *(int *)0x1fcc < 1) || (0xff < *(int *)0x1d8c + *(int *)0x1fcc)) {
            *(int *)0x1d8c = -*(int *)0x1d8c;
          }
        }
        else {
          uVar8 = (*(int *)0x1f8a - *(int *)0x1f8c) + 0x20;
          if (0x32 < (int)((uVar8 ^ (int)uVar8 >> 0xf) - ((int)uVar8 >> 0xf))) {
            if (*(int *)0x1f8a - *(int *)0x1f8c == -0x20) {
              iVar7 = 0;
            }
            else if ((int)uVar8 < 1) {
              iVar7 = -1;
            }
            else {
              iVar7 = 1;
            }
            *(int *)0x1d6c = *(int *)0x1d6c + iVar7 * *(int *)0x1844;
          }
          uVar8 = (*(int *)0x1fca - *(int *)0x1fcc) + 0x20;
          if (0x32 < (int)((uVar8 ^ (int)uVar8 >> 0xf) - ((int)uVar8 >> 0xf))) {
            if (*(int *)0x1fca - *(int *)0x1fcc == -0x20) {
              iVar7 = 0;
            }
            else if ((int)uVar8 < 1) {
              iVar7 = -1;
            }
            else {
              iVar7 = 1;
            }
            *(int *)0x1d8c = *(int *)0x1d8c + iVar7 * *(int *)0x1844;
          }
          if ((*(int *)0x1f8c < 0x21) || (0x1df < *(int *)0x1f8c)) {
            if (*(int *)0x1f8c == 0x100) {
              iVar7 = 0;
            }
            else if (-*(int *)0x1f8c == -0x100 || -*(int *)0x1f8c + 0x100 < 0) {
              iVar7 = -1;
            }
            else {
              iVar7 = 1;
            }
            *(int *)0x1d6c = *(int *)0x1d6c + iVar7 * 2;
          }
          if ((*(int *)0x1fcc < 1) || (0xff < *(int *)0x1fcc)) {
            if (*(int *)0x1fcc == 0x80) {
              iVar7 = 0;
            }
            else if (-*(int *)0x1fcc == -0x80 || -*(int *)0x1fcc + 0x80 < 0) {
              iVar7 = -1;
            }
            else {
              iVar7 = 1;
            }
            *(int *)0x1d8c = *(int *)0x1d8c + iVar7 * 2;
          }
          uVar8 = (int)*(uint *)0x1d6c >> 0xf;
          if (8 < (int)((*(uint *)0x1d6c ^ uVar8) - uVar8)) {
            if (*(int *)0x1d6c == 0) {
              iVar7 = 0;
            }
            else if (*(int *)0x1d6c < 1) {
              iVar7 = -1;
            }
            else {
              iVar7 = 1;
            }
            *(int *)0x1d6c = iVar7 << 3;
          }
          uVar8 = (int)*(uint *)0x1d8c >> 0xf;
          if (8 < (int)((*(uint *)0x1d8c ^ uVar8) - uVar8)) {
            if (*(int *)0x1d8c == 0) {
              iVar7 = 0;
            }
            else if (*(int *)0x1d8c < 1) {
              iVar7 = -1;
            }
            else {
              iVar7 = 1;
            }
            *(int *)0x1d8c = iVar7 << 3;
          }
          if (*(int *)0x193c == 0) {
            iVar7 = FUN_1000_efc8();
            if (((((int *)(iVar7 % 2) == (int *)0x0) && (iStack_34a < 0x10)) && (0 < *(int *)0x1f8c)
                ) && (*(int *)0x1f8c < 0x201)) {
              piStack_34e = (int *)(iVar7 % 2);
              do {
                if (0x15f < aiStack_3b4[(int)piStack_34e]) {
                  piStack_370 = piStack_34e;
                }
                piStack_34e = (int *)((int)piStack_34e + 1);
              } while ((int)piStack_34e < 0x10);
              iVar7 = FUN_1000_efc8();
              piVar9 = piStack_370;
              aiStack_3b4[(int)piStack_370] = (iVar7 % 2) * 0x18 + *(int *)0x1fcc + 0x20;
              iVar7 = FUN_1000_efc8();
              aiStack_392[(int)piVar9] = (iVar7 % 2) * 0x38 + *(int *)0x1f8c + 0x20;
              uVar8 = (*(int *)0x1f8a - aiStack_392[(int)piVar9]) + 0x20;
              uVar10 = (int)uVar8 >> 0xf;
              if ((int)((uVar8 ^ uVar10) - uVar10) < 0x33) {
                iVar7 = FUN_1000_efc8();
                auStack_fc[(int)piStack_370] = iVar7 % 5 - 2;
              }
              else {
                if (aiStack_392[(int)piVar9] == *(int *)0x1f8a) {
                  iVar7 = 0;
                }
                else if (*(int *)0x1f8a - aiStack_392[(int)piVar9] < 1) {
                  iVar7 = -1;
                }
                else {
                  iVar7 = 1;
                }
                iVar6 = FUN_1000_efc8();
                auStack_fc[(int)piStack_370] = (iVar6 % 5 + 6) * iVar7;
              }
              uVar8 = *(int *)0x1fca - aiStack_3b4[(int)piStack_370];
              uVar10 = (int)(uVar8 + 0x10) >> 0xf;
              if ((int)((uVar8 + 0x10 ^ uVar10) - uVar10) < 0x33) goto LAB_1000_6a86;
              if (aiStack_3b4[(int)piStack_370] == *(int *)0x1fca) goto LAB_1000_6a62;
LAB_1000_6a58:
              if ((int)uVar8 < 1) {
                iVar7 = -1;
              }
              else {
                iVar7 = 1;
              }
LAB_1000_6a64:
              iVar6 = FUN_1000_efc8();
              auStack_1e4[(int)piStack_370] = (iVar6 % 5 + 6) * iVar7;
              goto LAB_1000_6a9b;
            }
          }
        }
      }
      else {
        iStack_234 = iStack_234 + 1;
        if (iStack_234 == 2) {
          FUN_1000_cf2c();
        }
        *(undefined2 *)0x1d8c = 0;
        *(undefined2 *)0x1d6c = 0;
        for (piStack_34c = (int *)0x7; (int)piStack_34c < 0x10;
            piStack_34c = (int *)((int)piStack_34c + 1)) {
          iVar7 = (int)piStack_34c * 2;
          if (*(int *)(iVar7 + 0x1faa) < 10) {
            piVar1 = (int *)((int)piStack_34c * 2 + 0x1faa);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              *(undefined2 *)((int)piStack_34c * 2 + 0x1faa) = 10;
            }
          }
          else if (iStack_234 < 0x28) {
            iVar6 = FUN_1000_efc8();
            *(int *)(iVar7 + 0x1faa) = -(iVar6 % 3 + -9);
            iVar6 = FUN_1000_efc8();
            *(int *)(iVar7 + 0x1f8a) = iVar6 % 0x80 + *(int *)0x1f8c + -0x10;
            iVar6 = FUN_1000_efc8();
            *(int *)(iVar7 + 0x1fca) = iVar6 % 0x60 + *(int *)0x1fcc + -0x10;
            *(undefined2 *)(iVar7 + 0x1d6a) = 0;
            *(undefined2 *)(iVar7 + 0x1d8a) = 0;
            piStack_c = (int *)0x610c;
            FUN_1000_cff4();
          }
        }
        if (iStack_234 == 0x28) {
          *(undefined1 *)0x2ba = 0;
          piStack_c = (int *)0x6125;
          FUN_1000_83b5();
          piStack_34c = (int *)0x1;
          do {
            iVar7 = (int)piStack_34c * 2;
            *(undefined2 *)(iVar7 + 0x1f96) = *(undefined2 *)(iVar7 + 0x1f8a);
            *(undefined2 *)(iVar7 + 0x1fd6) = *(undefined2 *)(iVar7 + 0x1fca);
            *(undefined2 *)(iVar7 + 0x1fb6) = 9;
            piStack_34c = (int *)((int)piStack_34c + 1);
          } while ((int)piStack_34c < 7);
          iVar7 = *(int *)(*(int *)0x1816 * 0x14 + 0x2ec);
LAB_1000_6162:
          *(int *)0x1db6 = *(int *)0x1db6 + iVar7;
          FUN_1000_a25a();
          piStack_c = (int *)0x6170;
          FUN_1000_cff4();
          piStack_c = (int *)0x617a;
          FUN_1000_8425();
          *(undefined1 *)0x2ba = 7;
        }
      }
    }
    else if (iStack_3b6 == 2) {
      if (*(int *)0x1fc8 < 10) {
        piVar1 = (int *)0x1fc8;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          *(undefined2 *)0x1fc8 = 10;
        }
      }
      if (iStack_210 < 0x14) {
        if (iStack_210 < 0xe) {
          uVar8 = 0x120 - *(int *)0x1f8c;
          if ((200 < (int)((uVar8 ^ (int)uVar8 >> 0xf) - ((int)uVar8 >> 0xf))) &&
             (*(int *)0x1f8c != 0x120)) {
            if ((int)uVar8 < 1) {
              iVar7 = -1;
            }
            else {
              iVar7 = 1;
            }
            *(int *)0x1d6c = *(int *)0x1d6c + iVar7;
          }
          uVar8 = 0x90 - *(int *)0x1fcc;
          if (100 < (int)((uVar8 ^ (int)uVar8 >> 0xf) - ((int)uVar8 >> 0xf))) {
            if (*(int *)0x1fcc == 0x90) {
              iVar7 = 0;
            }
            else if ((int)uVar8 < 1) {
              iVar7 = -1;
            }
            else {
              iVar7 = 1;
            }
            *(int *)0x1d8c = *(int *)0x1d8c + iVar7 * 2;
          }
          uVar8 = (int)*(uint *)0x1d6c >> 0xf;
          if (6 < (int)((*(uint *)0x1d6c ^ uVar8) - uVar8)) {
            if (*(int *)0x1d6c == 0) {
              iVar7 = 0;
            }
            else if (*(int *)0x1d6c < 1) {
              iVar7 = -1;
            }
            else {
              iVar7 = 1;
            }
            *(int *)0x1d6c = iVar7 * 6;
          }
          uVar8 = (int)*(uint *)0x1d8c >> 0xf;
          if (0x14 < (int)((*(uint *)0x1d8c ^ uVar8) - uVar8)) {
            if (*(int *)0x1d8c == 0) {
              iVar7 = 0;
            }
            else if (*(int *)0x1d8c < 1) {
              iVar7 = -1;
            }
            else {
              iVar7 = 1;
            }
            *(int *)0x1d8c = iVar7 * 0x14;
          }
          if ((((*(int *)0x1844 + *(int *)0x1846 == 0) && (iStack_3b8 < 4)) && (0 < *(int *)0x1f8c))
             && (((*(int *)0x1f8c < 0x201 && (0 < *(int *)0x1fcc)) && (*(int *)0x1fcc < 0x160)))) {
            piStack_34e = (int *)0x0;
            do {
              if (0x15f < aiStack_dc[(int)piStack_34e]) {
                piStack_370 = piStack_34e;
              }
              piStack_34e = (int *)((int)piStack_34e + 1);
            } while ((int)piStack_34e < 4);
            aiStack_dc[(int)piStack_370] = *(int *)0x1fcc + 0x1c;
            *(int *)(&stack0xfff6 + (int)piStack_370 * 2) = *(int *)0x1f8c + 0x10;
            aiStack_23c[(int)piStack_370] = (-(uint)(0 < *(int *)0x1d6c) & 0x28) - 0x14;
            iStack_3b8 = iStack_3b8 + 1;
          }
        }
        else {
          uVar8 = 0x120 - *(int *)0x1f8c;
          if ((int)((uVar8 ^ (int)uVar8 >> 0xf) - ((int)uVar8 >> 0xf)) < 0x187) {
            *(int *)0x1d6c = (-(uint)(0 < *(int *)0x1d6c) & 0x2c) - 0x16;
          }
          else {
            if (*(int *)0x1f8c == 0x120) {
              iVar7 = 0;
            }
            else if ((int)uVar8 < 1) {
              iVar7 = -1;
            }
            else {
              iVar7 = 1;
            }
            *(int *)0x1d6c = *(int *)0x1d6c + iVar7 * 2;
            *(undefined2 *)0x1d8c = 0;
            iVar7 = FUN_1000_efc8();
            *(int *)0x1824 = iVar7 % 0x160 + -0x20;
          }
          if (*(int *)0x1824 == *(int *)0x1fcc) {
            iVar7 = 0;
          }
          else if (*(int *)0x1824 == *(int *)0x1fcc || *(int *)0x1824 - *(int *)0x1fcc < 0) {
            iVar7 = -1;
          }
          else {
            iVar7 = 1;
          }
          *(int *)0x1d8c = *(int *)0x1d8c + iVar7 * 2;
          uVar8 = (int)*(uint *)0x1d8c >> 0xf;
          if (4 < (int)((*(uint *)0x1d8c ^ uVar8) - uVar8)) {
            if (*(int *)0x1d8c == 0) {
              iVar7 = 0;
            }
            else if (*(int *)0x1d8c < 1) {
              iVar7 = -1;
            }
            else {
              iVar7 = 1;
            }
            *(int *)0x1d8c = iVar7 << 2;
          }
          if (((*(int *)0x1844 + *(int *)0x1846 == 0) && (iStack_34a < 0x10)) &&
             ((0 < *(int *)0x1f8c && (*(int *)0x1f8c < 0x201)))) {
            piStack_34e = (int *)0x0;
            do {
              if (0x15f < aiStack_3b4[(int)piStack_34e]) {
                piStack_370 = piStack_34e;
              }
              piVar9 = piStack_370;
              piStack_34e = (int *)((int)piStack_34e + 1);
            } while ((int)piStack_34e < 0x10);
            aiStack_3b4[(int)piStack_370] = *(int *)0x1fcc + 0x1c;
            iVar7 = *(int *)0x1f8c;
            aiStack_392[(int)piVar9] = iVar7 + 0x10;
            iVar7 = (iVar7 + 0x10) - *(int *)0x1f8a;
            uVar8 = 0x20 - iVar7;
            if ((int)((uVar8 ^ (int)uVar8 >> 0xf) - ((int)uVar8 >> 0xf)) < 0x33) {
              iVar7 = FUN_1000_efc8();
              auStack_fc[(int)piStack_370] = iVar7 % 5 - 2;
            }
            else {
              if (iVar7 == 0x20) {
                iVar7 = 0;
              }
              else if ((int)uVar8 < 1) {
                iVar7 = -1;
              }
              else {
                iVar7 = 1;
              }
              iVar6 = FUN_1000_efc8();
              auStack_fc[(int)piStack_370] = (iVar6 % 5 + 6) * iVar7;
            }
            uVar8 = (*(int *)0x1fca - aiStack_3b4[(int)piStack_370]) + 0x10;
            if (0x32 < (int)((uVar8 ^ (int)uVar8 >> 0xf) - ((int)uVar8 >> 0xf))) {
              if (*(int *)0x1fca - aiStack_3b4[(int)piStack_370] != -0x10) goto LAB_1000_6a58;
LAB_1000_6a62:
              iVar7 = 0;
              goto LAB_1000_6a64;
            }
LAB_1000_6a86:
            iVar7 = FUN_1000_efc8();
            auStack_1e4[(int)piStack_370] = iVar7 % 5 - 2;
LAB_1000_6a9b:
            iStack_34a = iStack_34a + 1;
          }
        }
      }
      else {
        if (*(int *)0x1d6c != 0) {
          *(undefined2 *)0x1d6e = *(undefined2 *)0x1d6c;
        }
        *(undefined2 *)0x1d8c = 0;
        *(undefined2 *)0x1d6c = 0;
        piStack_34c = (int *)0x1;
        do {
          iVar7 = (int)piStack_34c * 2;
          if ((*(int *)(iVar7 + 0x1faa) < 10) &&
             (*(int *)(iVar7 + 0x1faa) = *(int *)(iVar7 + 0x1faa) + -1, *(int *)(iVar7 + 0x1faa) < 1
             )) {
            *(undefined2 *)(iVar7 + 0x1faa) = 0;
          }
          piStack_34c = (int *)((int)piStack_34c + 1);
        } while ((int)piStack_34c < 0xf);
        iStack_234 = iStack_234 + (uint)(*(int *)0x1844 == 0);
        if ((*(int *)0x1844 == 0) && (iStack_234 < 0xd)) {
          *(undefined2 *)(iStack_234 * -2 + 0x1fc8) = 9;
          piStack_c = (int *)0x66d0;
          FUN_1000_cff4();
        }
        if (iStack_234 == 0xc) {
          *(undefined1 *)0x2ba = 0;
          piStack_c = (int *)0x66e9;
          FUN_1000_83b5();
          *(undefined2 *)0x1fae = 9;
          *(undefined2 *)0x1fac = 9;
          *(int *)0x1db6 = *(int *)0x1db6 + *(int *)(*(int *)0x1816 * 0x14 + 0x2f0);
          FUN_1000_a25a();
          FUN_1000_cf2c();
          piStack_c = (int *)0x6713;
          FUN_1000_cff4();
          piStack_c = (int *)0x671d;
          FUN_1000_8425();
          *(undefined1 *)0x2ba = 7;
          iStack_234 = 0x30;
        }
      }
    }
    else if (iStack_3b6 == 3) {
      if (iStack_210 < 0x14) {
        if (*(int *)0x1fbc < 10) {
          piVar1 = (int *)0x1fbc;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            *(undefined2 *)0x1fbc = 10;
          }
        }
        if (iStack_234 == 0) {
          if (*(int *)0x1f8c == 0x1f2) {
            iVar7 = 0;
          }
          else if (-*(int *)0x1f8c == -0x1f2 || -*(int *)0x1f8c + 0x1f2 < 0) {
            iVar7 = -1;
          }
          else {
            iVar7 = 1;
          }
          *(int *)0x1d6c = iVar7 * 10;
          if (*(int *)0x1d8c != 0) {
            if (*(int *)0x1d8c < 1) {
              iVar7 = -1;
            }
            else {
              iVar7 = 1;
            }
            *(int *)0x1d8c = *(int *)0x1d8c - iVar7;
          }
          uVar8 = (*(int *)0x1d6c + *(int *)0x1f8c) - 0x1d2;
          uVar10 = (int)uVar8 >> 0xf;
          if ((int)((uVar8 ^ uVar10) - uVar10) < 9) {
            iStack_234 = 1;
            *(undefined2 *)0x1d8c = 0xfffe;
            *(undefined2 *)0x1d6c = 0;
          }
        }
        else {
          if (iStack_25e < 0xa2) {
            iStack_25e = iStack_25e + 1;
          }
          if (iStack_25e == 0xa2) {
            iStack_25e = 0;
            *(undefined2 *)0x1d4c = 2;
          }
          if (iStack_25e < 0x31) {
            if (iStack_25e == 0x10) {
              *(undefined2 *)0x1d4c = 0;
              *(undefined2 *)0x1d8c = 0;
              if (iStack_3b8 == 0) {
                aiStack_dc[1] = *(int *)0x1fd0 + 8;
                aiStack_dc[0] = *(int *)0x1fd0 + 8;
                piStack_d6 = (int *)(*(int *)0x1fd2 + 8);
                piStack_d8 = (int *)(*(int *)0x1fd2 + 8);
                iStack_394 = 0;
                do {
                  aiStack_23c[iStack_394] = -0x10;
                  iStack_394 = iStack_394 + 1;
                } while (iStack_394 < 4);
                iStack_3b8 = 2;
              }
            }
            if (iStack_25e == 0x20) {
              *(undefined2 *)0x1d4c = 0xfffe;
              iVar7 = FUN_1000_efc8();
              *(int *)0x1d8c = (iVar7 % 2) * 4 + -2;
              if (9 < iStack_210) {
                iStack_25e = 0xa4;
                *(undefined2 *)0x1d4c = 0;
                *(int *)0x1d8c = *(int *)0x1d8c << 2;
              }
            }
            if (iStack_25e == 0x30) {
              *(undefined2 *)0x1d4c = 0;
            }
            iVar7 = *(int *)0x1d4c;
            *(int *)0x1fd0 = *(int *)0x1fd0 - iVar7;
            *(int *)0x1fd2 = *(int *)0x1fd2 + iVar7;
          }
        }
        if ((*(int *)0x1d8c + *(int *)0x1fcc < 0x21) || (0xff < *(int *)0x1d8c + *(int *)0x1fcc)) {
          *(int *)0x1d8c = -*(int *)0x1d8c;
        }
        if ((*(int *)0x1844 + *(int *)0x1846 == 0) && (iStack_34a < 0x10)) {
          bVar11 = iStack_25e == 0xa4;
          iVar7 = FUN_1000_efc8();
          piVar9 = (int *)(iVar7 % (int)(4 - (uint)bVar11));
          if ((piVar9 == (int *)0x0) && ((0 < *(int *)0x1f8c && (*(int *)0x1f8c < 0x201)))) {
            piStack_34e = piVar9;
            do {
              if (0x15f < aiStack_3b4[(int)piStack_34e]) {
                piStack_370 = piStack_34e;
              }
              piVar9 = piStack_370;
              piStack_34e = (int *)((int)piStack_34e + 1);
            } while ((int)piStack_34e < 0x10);
            aiStack_3b4[(int)piStack_370] = *(int *)0x1fcc + 0x1c;
            aiStack_392[(int)piVar9] = *(int *)0x1f8c + 0x10;
            aiStack_346[(int)piVar9] = (-(uint)(iStack_25e == 0xa4) & 0x1e) + 0x1e;
            auStack_1e4[(int)piVar9] = 0;
            auStack_fc[(int)piVar9] = 0;
            goto LAB_1000_6a9b;
          }
        }
      }
      else {
        iStack_234 = iStack_234 + 1;
        if (iStack_234 == 2) {
          FUN_1000_cf2c();
        }
        *(undefined2 *)0x1d8c = 0;
        *(undefined2 *)0x1d6c = 0;
        for (piStack_34c = (int *)0x9; (int)piStack_34c < 0x10;
            piStack_34c = (int *)((int)piStack_34c + 1)) {
          iVar7 = (int)piStack_34c * 2;
          if (*(int *)(iVar7 + 0x1faa) < 10) {
            piVar1 = (int *)((int)piStack_34c * 2 + 0x1faa);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              *(undefined2 *)((int)piStack_34c * 2 + 0x1faa) = 10;
            }
          }
          else if (iStack_234 < 0x28) {
            iVar6 = FUN_1000_efc8();
            *(int *)(iVar7 + 0x1faa) = -(iVar6 % 3 + -9);
            iVar6 = FUN_1000_efc8();
            *(int *)(iVar7 + 0x1f8a) = iVar6 % 0x60 + *(int *)0x1f90 + 0x10;
            iVar6 = FUN_1000_efc8();
            *(int *)(iVar7 + 0x1fca) = iVar6 % 0x80 + *(int *)0x1fd0 + -0x10;
            *(undefined2 *)(iVar7 + 0x1d6a) = 0;
            *(undefined2 *)(iVar7 + 0x1d8a) = 0;
            piStack_c = (int *)0x6b48;
            FUN_1000_cff4();
          }
        }
        if (iStack_234 == 0x28) {
          *(undefined1 *)0x2ba = 0;
          piStack_c = (int *)0x6b64;
          FUN_1000_83b5();
          piStack_34c = (int *)0x1;
          do {
            iVar7 = (int)piStack_34c * 2;
            *(undefined2 *)(iVar7 + 0x1f9a) = *(undefined2 *)(iVar7 + 0x1f8a);
            *(undefined2 *)(iVar7 + 0x1fda) = *(undefined2 *)(iVar7 + 0x1fca);
            *(undefined2 *)(iVar7 + 0x1fba) = 9;
            piStack_34c = (int *)((int)piStack_34c + 1);
          } while ((int)piStack_34c < 6);
          *(undefined2 *)0x1fa6 = *(undefined2 *)0x1f9a;
          *(undefined2 *)0x1fe6 = *(undefined2 *)0x1fda;
          *(undefined2 *)0x1fc6 = 9;
          iVar7 = *(int *)(*(int *)0x1816 * 0x14 + 0x2f4);
          goto LAB_1000_6162;
        }
      }
    }
    if (0x32 < iStack_234) goto LAB_1000_804a;
    piStack_34c = (int *)0x0;
  }
  else {
    if (-0x10 < aiStack_232[(int)piStack_34c]) {
      aiStack_20e[(int)piStack_34c] = aiStack_20e[(int)piStack_34c] + aiStack_36e[(int)piStack_34c];
      aiStack_232[(int)piStack_34c] =
           aiStack_232[(int)piStack_34c] + aiStack_25c[(int)piStack_34c] * (*(int *)0x181e + 2) * 2;
      if (iStack_3b6 == 1) {
        if (((*(int *)0x1f8c <= aiStack_20e[(int)piStack_34c]) &&
            (aiStack_20e[(int)piStack_34c] <= *(int *)0x1f8c + 0x70)) &&
           ((*(int *)0x1fcc + -8 <= aiStack_232[(int)piStack_34c] &&
            (aiStack_232[(int)piStack_34c] <= *(int *)0x1fcc + 0x58)))) {
          if ((*(int *)0x1fcc + 0x1c <= aiStack_232[(int)piStack_34c]) &&
             (aiStack_232[(int)piStack_34c] <= *(int *)0x1fcc + 0x34)) {
            piStack_c = (int *)0x6e56;
            FUN_1000_cff4();
            *(undefined2 *)0x1fb8 = 9;
            *(int *)0x1fd8 = aiStack_232[(int)piVar9] + -8;
            *(int *)0x1f98 = aiStack_20e[(int)piVar9] + -8;
            iStack_210 = iStack_210 + 1;
            *(int *)0x1db6 = *(int *)0x1db6 + *(int *)(*(int *)0x1816 * 0x14 + 0x2ea);
            FUN_1000_a25a();
          }
          iVar7 = (int)piStack_34c << 1;
LAB_1000_6e91:
          *(undefined2 *)((int)aiStack_232 + iVar7) = 0xfff0;
        }
      }
      else if (iStack_3b6 == 2) {
        if ((((*(int *)0x1f8c + -6 <= aiStack_20e[(int)piStack_34c]) &&
             (aiStack_20e[(int)piStack_34c] <= *(int *)0x1f8c + 0x36)) &&
            (*(int *)0x1fcc + 2 <= aiStack_232[(int)piStack_34c])) &&
           (aiStack_232[(int)piStack_34c] <= *(int *)0x1fcc + 0x2e)) {
          piStack_c = (int *)0x6f62;
          FUN_1000_cff4();
          *(undefined2 *)0x1fc8 = 9;
          *(int *)0x1fe8 = aiStack_232[(int)piVar9] + -8;
          *(int *)0x1fa8 = aiStack_20e[(int)piVar9] + -8;
          iStack_210 = iStack_210 + 1;
          *(int *)0x1db6 = *(int *)0x1db6 + *(int *)(*(int *)0x1816 * 0x14 + 0x2ee);
          FUN_1000_a25a();
          aiStack_232[(int)piVar9] = -0x10;
        }
        for (piStack_34e = (int *)0x3; (int)piStack_34e < 0xf;
            piStack_34e = (int *)((int)piStack_34e + 1)) {
          iVar7 = *(int *)((int)piStack_34e * 2 + 0x1f8a);
          if (((iVar7 + -0xc <= aiStack_20e[(int)piStack_34c]) &&
              (aiStack_20e[(int)piStack_34c] <= iVar7 + 0x1c)) &&
             ((iVar7 = *(int *)((int)piStack_34e * 2 + 0x1fca),
              iVar7 + -4 <= aiStack_232[(int)piStack_34c] &&
              (aiStack_232[(int)piStack_34c] <= iVar7 + 0x1c)))) {
            aiStack_232[(int)piStack_34c] = -0x10;
          }
        }
      }
      else if (iStack_3b6 == 3) {
        if (((*(int *)0x1f8c + 10 <= aiStack_20e[(int)piStack_34c]) &&
            (aiStack_20e[(int)piStack_34c] <= *(int *)0x1f8c + 0x16)) &&
           ((*(int *)0x1fcc + -8 <= aiStack_232[(int)piStack_34c] &&
            (aiStack_232[(int)piStack_34c] <= *(int *)0x1fcc + 0x38)))) {
          if ((*(int *)0x1fcc + 0xe <= aiStack_232[(int)piStack_34c]) &&
             (aiStack_232[(int)piStack_34c] <= *(int *)0x1fcc + 0x22)) {
            piStack_c = (int *)0x7050;
            FUN_1000_cff4();
            *(undefined2 *)0x1fbc = 9;
            *(int *)0x1fdc = aiStack_232[(int)piVar9] + -8;
            *(int *)0x1f9c = aiStack_20e[(int)piVar9] + -8;
            iStack_210 = iStack_210 + 1;
            *(int *)0x1db6 = *(int *)0x1db6 + *(int *)(*(int *)0x1816 * 0x14 + 0x2f2);
            FUN_1000_a25a();
          }
          aiStack_232[(int)piStack_34c] = -0x10;
        }
        iVar7 = (int)piStack_34c * 2;
        if ((((*(int *)0x1f94 + -8 <= aiStack_20e[(int)piStack_34c]) &&
             (aiStack_20e[(int)piStack_34c] <= *(int *)0x1f94 + 0x46)) &&
            (*(int *)0x1fd4 + -8 <= aiStack_232[(int)piStack_34c])) &&
           (aiStack_232[(int)piStack_34c] <= *(int *)0x1fd4 + 0x78)) goto LAB_1000_6e91;
        piStack_34e = (int *)0x3;
        do {
          iVar7 = *(int *)((int)piStack_34e * 2 + 0x1f8a);
          if (((iVar7 + -6 <= aiStack_20e[(int)piStack_34c]) &&
              (aiStack_20e[(int)piStack_34c] <= iVar7 + 0x38)) &&
             ((iVar7 = *(int *)((int)piStack_34e * 2 + 0x1fca),
              iVar7 + -8 <= aiStack_232[(int)piStack_34c] &&
              (aiStack_232[(int)piStack_34c] <= iVar7 + 0x18)))) {
            aiStack_232[(int)piStack_34c] = -0x10;
          }
          piStack_34e = (int *)((int)piStack_34e + 1);
        } while ((int)piStack_34e < 5);
      }
      if (((aiStack_20e[(int)piStack_34c] < 0) || (0x26f < aiStack_20e[(int)piStack_34c])) ||
         (0x15f < aiStack_232[(int)piStack_34c])) {
        aiStack_232[(int)piStack_34c] = -0x10;
      }
      if (aiStack_232[(int)piStack_34c] < -0xf) {
        iStack_d4 = iStack_d4 + -1;
      }
    }
    piStack_34c = (int *)((int)piStack_34c + 1);
  }
  bVar11 = SBORROW2((int)piStack_34c,*(int *)0x1d48);
  iVar7 = (int)piStack_34c - *(int *)0x1d48;
  goto code_r0x00016edc;
switchD_1000_d77b_caseD_3d:
  for (; in_CX != 0; in_CX = in_CX + -1) {
    puVar2 = unaff_DI;
    unaff_DI = unaff_DI + 1;
    *puVar2 = (char)param_1;
  }
  if ((code *)*(int *)0x140c != (code *)0x0) {
    (*(code *)*(int *)0x140c)();
  }
  FUN_1000_0010();
  FUN_1000_f1a2();
  FUN_1000_e734();
  piStack_c = (int *)*(undefined2 *)0x122b;
  piStack_e = (int *)0xe6fd;
  piStack_e = (int *)FUN_1000_0011();
  piStack_10 = (int *)0xe701;
  iVar7 = FUN_1000_e802();
  return iVar7;
  while( true ) {
    iVar7 = iVar7 + -1;
    piVar1 = piVar9;
    piVar9 = (int *)((int)piVar9 + 1);
    if ((char)*piVar1 == '\0') break;
code_r0x0001aaf3:
    if (iVar7 == 0) break;
  }
  if (iVar7 != -2) {
    uVar8 = 0;
    do {
      piVar9 = &iStack_2c;
      uVar10 = 0xffff;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        piVar1 = piVar9;
        piVar9 = (int *)((int)piVar9 + 1);
      } while ((char)*piVar1 != '\0');
      (&stack0xfff7)[uVar8 - (~uVar10 - 1)] = *(undefined1 *)((int)&iStack_2c + uVar8);
      piVar9 = &iStack_2c;
      uVar10 = 0xffff;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        piVar1 = piVar9;
        piVar9 = (int *)((int)piVar9 + 1);
      } while ((char)*piVar1 != '\0');
      uVar8 = uVar8 + 1;
    } while (uVar8 < ~uVar10 - 1);
  }
  piStack_c = (int *)0xab3b;
  FUN_1000_beea();
  piStack_c = (int *)0xab51;
  FUN_1000_beea();
  FUN_1000_9ff0();
  FUN_1000_af50();
  iVar7 = FUN_1000_8493();
  return iVar7;
}


