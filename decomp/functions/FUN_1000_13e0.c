/* 1000:13e0 */

void FUN_1000_13e0(void)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  undefined2 uVar5;
  uint uVar6;
  char cVar7;
  int unaff_BP;
  int iVar8;
  int iVar9;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  if (((*(int *)(unaff_BP + -0x28) == 0) &&
      (*(int *)(unaff_BP + -0x26) <= *(int *)(unaff_BP + -0x2a))) && (*(int *)0x1dc0 == 0)) {
    FUN_1000_1faa();
    return;
  }
  *(undefined2 *)(unaff_BP + -0x90) = 0;
  while (*(int *)(unaff_BP + -0x90) < *(int *)0x1d48) {
    if (*(int *)(unaff_BP + *(int *)(unaff_BP + -0x90) * 2 + -0x108) < 0x130) {
      iVar8 = *(int *)(unaff_BP + -0x90) * 2;
      piVar1 = (int *)(unaff_BP + iVar8 + -0x108);
      *piVar1 = *piVar1 + *(int *)0x181e * 4 + 2;
      if (*(int *)0x20c6 == 1) {
        iVar4 = *(int *)(unaff_BP + iVar8 + -0xb0);
        piVar1 = (int *)(unaff_BP + iVar8 + -0xd2);
        *piVar1 = *piVar1 + *(int *)(unaff_BP + iVar8 + -0x22);
        if (*(int *)(unaff_BP + iVar8 + -0xd2) != iVar4) {
          iVar9 = *(int *)(unaff_BP + iVar8 + -0xd2);
          *(int *)(unaff_BP + -0x10c) = iVar8;
          if (iVar4 == iVar9 || iVar4 - iVar9 < 0) {
            iVar4 = -1;
          }
          else {
            iVar4 = 1;
          }
          piVar1 = (int *)(unaff_BP + iVar8 + -0x22);
          *piVar1 = *piVar1 + iVar4;
        }
      }
      *(undefined2 *)(unaff_BP + -0xb2) = 1;
      while (*(int *)(unaff_BP + -0xb2) <= *(int *)0x17f4) {
        iVar8 = *(int *)(unaff_BP + -0xb2) * 2;
        if ((9 < *(int *)(iVar8 + 0x1faa)) && (*(int *)(iVar8 + 0x1fca) != 0)) {
          switch(*(undefined2 *)(*(int *)(unaff_BP + -0xb2) * 2 + 0x17f6)) {
          case 1:
          case 2:
          case 4:
            iVar4 = *(int *)(unaff_BP + -0xb2) * 2;
            iVar8 = *(int *)(iVar4 + 0x1f8a);
            iVar9 = *(int *)(unaff_BP + -0x90) * 2;
            if ((iVar8 + -8 <= *(int *)(unaff_BP + iVar9 + -0xd2)) &&
               (*(int *)(unaff_BP + iVar9 + -0xd2) <= iVar8 + 0x38)) {
              iVar8 = *(int *)(iVar4 + 0x1fca);
              iVar4 = iVar8 + -0xc;
LAB_1000_1453:
              if ((iVar4 <= *(int *)(unaff_BP + iVar9 + -0x108)) &&
                 (*(int *)(unaff_BP + iVar9 + -0x108) <= iVar8 + 0x18)) {
                FUN_1000_824a(*(undefined2 *)(unaff_BP + -0xb2));
                *(int *)(unaff_BP + -0x2a) = *(int *)(unaff_BP + -0x2a) + 1;
                *(undefined2 *)(unaff_BP + iVar9 + -0x108) = 0x130;
              }
            }
            break;
          case 3:
            iVar4 = *(int *)(unaff_BP + -0xb2) * 2;
            iVar8 = *(int *)(iVar4 + 0x1f8a);
            iVar9 = *(int *)(unaff_BP + -0x90) * 2;
            if ((iVar8 + -8 <= *(int *)(unaff_BP + iVar9 + -0xd2)) &&
               (*(int *)(unaff_BP + iVar9 + -0xd2) <= iVar8 + 0x18)) {
              iVar8 = *(int *)(iVar4 + 0x1fca);
              iVar4 = iVar8 + -6;
              goto LAB_1000_1453;
            }
            break;
          case 9:
            iVar8 = *(int *)(unaff_BP + -0xb2) * 2;
            iVar4 = *(int *)(unaff_BP + -0x90) * 2;
            if (((*(int *)(iVar8 + 0x1f8a) + -8 <= *(int *)(unaff_BP + iVar4 + -0xd2)) &&
                (*(int *)(unaff_BP + iVar4 + -0xd2) <= *(int *)(iVar8 + 0x1f8a) + 0x18)) &&
               ((*(int *)(iVar8 + 0x1fca) + -6 <= *(int *)(unaff_BP + iVar4 + -0x108) &&
                (*(int *)(unaff_BP + iVar4 + -0x108) <= *(int *)(iVar8 + 0x1fca) + 0x18)))) {
              FUN_1000_824a(*(undefined2 *)(unaff_BP + -0xb2));
              *(undefined2 *)(unaff_BP + iVar4 + -0x108) = 0x130;
              *(int *)(unaff_BP + -0x2a) = *(int *)(unaff_BP + -0x2a) + 1;
              if (((*(int *)0x1dc0 == 0) && (0x1f < *(int *)(iVar8 + 0x1f8a))) &&
                 (*(int *)(iVar8 + 0x1f8a) < 0x241)) {
                FUN_1000_9d84();
                *(int *)0x193e = *(int *)(iVar8 + 0x1f8a) + 8;
                *(int *)0x1d40 = *(int *)(iVar8 + 0x1fca) + 8;
                *(undefined2 *)0x1db2 = 0;
                *(undefined2 *)0x1db4 = 0xfffc;
                *(undefined2 *)0x1d44 = 0xffff;
              }
            }
          }
        }
        *(int *)(unaff_BP + -0xb2) = *(int *)(unaff_BP + -0xb2) + 1;
      }
      if (0x12f < *(int *)(unaff_BP + *(int *)(unaff_BP + -0x90) * 2 + -0x108)) {
        *(int *)(unaff_BP + -0x8e) = *(int *)(unaff_BP + -0x8e) + -1;
      }
    }
    *(int *)(unaff_BP + -0x90) = *(int *)(unaff_BP + -0x90) + 1;
  }
  *(undefined2 *)(unaff_BP + -0x90) = 0;
  do {
    if (0x20 < *(int *)(unaff_BP + *(int *)(unaff_BP + -0x90) * 2 + -0x6c)) {
      iVar8 = *(int *)(unaff_BP + -0x90) * 2;
      piVar1 = (int *)(unaff_BP + iVar8 + -0x6c);
      *piVar1 = *piVar1 + -2;
      if ((*(int *)(unaff_BP + iVar8 + -0x4a) <= *(int *)0x1f8a + -6) ||
         ((*(int *)0x1f8a + 0x36 <= *(int *)(unaff_BP + iVar8 + -0x4a) &&
          ((*(int *)(unaff_BP + iVar8 + -0x6c) < 0x31 || (iVar8 = FUN_1000_efc8(), iVar8 % 4 == 0)))
          ))) {
        piVar1 = (int *)(unaff_BP + *(int *)(unaff_BP + -0x90) * 2 + -0x6c);
        *piVar1 = *piVar1 + 1;
      }
      iVar8 = *(int *)(unaff_BP + -0x90) * 2;
      piVar1 = (int *)(unaff_BP + iVar8 + -0x4a);
      *piVar1 = *piVar1 - (*(int *)0x1844 * 2 + -1);
      if ((((*(int *)0x1faa == 10) && (*(int *)0x1f8a + -6 <= *(int *)(unaff_BP + iVar8 + -0x4a)))
          && (*(int *)(unaff_BP + iVar8 + -0x4a) <= *(int *)0x1f8a + 0x36)) &&
         ((*(int *)0x1fca + -0xc <= *(int *)(unaff_BP + iVar8 + -0x6c) &&
          (*(int *)(unaff_BP + iVar8 + -0x6c) <= *(int *)0x1fca + 0x18)))) {
        *(undefined2 *)0x1faa = 9;
        *(undefined2 *)(unaff_BP + iVar8 + -0x6c) = 0;
        FUN_1000_cff4(4);
      }
      if (*(int *)(unaff_BP + *(int *)(unaff_BP + -0x90) * 2 + -0x6c) < 0x21) {
        *(int *)(unaff_BP + -2) = *(int *)(unaff_BP + -2) + -1;
      }
    }
    *(int *)(unaff_BP + -0x90) = *(int *)(unaff_BP + -0x90) + 1;
  } while (*(int *)(unaff_BP + -0x90) < 0x10);
  *(undefined2 *)(unaff_BP + -0x90) = 0;
  while (*(int *)(unaff_BP + -0x90) < 8) {
    if (-0x10 < *(int *)(unaff_BP + *(int *)(unaff_BP + -0x90) * 2 + -0x8c)) {
      iVar8 = *(int *)0x181e;
      iVar4 = *(int *)0x20c6;
      iVar9 = *(int *)(unaff_BP + -0x90) * 2;
      piVar1 = (int *)(unaff_BP + iVar9 + -0x8c);
      *piVar1 = *piVar1 + -8;
      if ((iVar8 + iVar4) * -0x1e + 0xa0 < *(int *)(unaff_BP + iVar9 + -0x8c)) {
        iVar8 = *(int *)0x1f8a - *(int *)(unaff_BP + iVar9 + -0x7c);
        *(int *)(unaff_BP + -0x10e) = iVar8;
        if (iVar8 == -0x18) {
          uVar5 = 0;
        }
        else if (iVar8 == -0x18 || iVar8 + 0x18 < 0) {
          uVar5 = 0xffff;
        }
        else {
          uVar5 = 1;
        }
        *(undefined2 *)(unaff_BP + -0x10c) = uVar5;
        iVar8 = FUN_1000_efc8();
        piVar1 = (int *)(unaff_BP + *(int *)(unaff_BP + -0x90) * 2 + -0xe8);
        *piVar1 = *piVar1 + (iVar8 * *(int *)(unaff_BP + -0x10c)) % 2;
      }
      else {
        iVar8 = *(int *)(unaff_BP + *(int *)(unaff_BP + -0x90) * 2 + -0xe8);
        if (iVar8 == 0) {
          uVar5 = 0;
        }
        else if (iVar8 < 1) {
          uVar5 = 0xffff;
        }
        else {
          uVar5 = 1;
        }
        *(undefined2 *)(unaff_BP + -0x10e) = uVar5;
        piVar1 = (int *)(unaff_BP + *(int *)(unaff_BP + -0x90) * 2 + -0xe8);
        *piVar1 = *piVar1 - *(int *)0x1844 * *(int *)(unaff_BP + -0x10e);
      }
      uVar6 = *(uint *)(unaff_BP + *(int *)(unaff_BP + -0x90) * 2 + -0xe8);
      if (8 < (int)((uVar6 ^ (int)uVar6 >> 0xf) - ((int)uVar6 >> 0xf))) {
        *(uint *)(unaff_BP + -0x10c) = uVar6;
        if (uVar6 == 0) {
          iVar8 = 0;
        }
        else if ((int)uVar6 < 1) {
          iVar8 = -1;
        }
        else {
          iVar8 = 1;
        }
        *(int *)(unaff_BP + -0x10e) = iVar8;
        *(int *)(unaff_BP + *(int *)(unaff_BP + -0x90) * 2 + -0xe8) = iVar8 << 3;
      }
      iVar8 = *(int *)(unaff_BP + -0x90) * 2;
      piVar1 = (int *)(unaff_BP + iVar8 + -0x7c);
      *piVar1 = *piVar1 + *(int *)(unaff_BP + iVar8 + -0xe8);
      if (((*(int *)0x1faa == 10) && (*(int *)0x1f8a + -4 <= *(int *)(unaff_BP + iVar8 + -0x7c))) &&
         ((*(int *)(unaff_BP + iVar8 + -0x7c) <= *(int *)0x1f8a + 0x34 &&
          ((*(int *)0x1fca + -0xc <= *(int *)(unaff_BP + iVar8 + -0x8c) &&
           (*(int *)(unaff_BP + iVar8 + -0x8c) <= *(int *)0x1fca + 0x18)))))) {
        *(undefined2 *)0x1faa = 9;
        *(undefined2 *)(unaff_BP + iVar8 + -0x8c) = 0xfff0;
        FUN_1000_cff4(4);
      }
      iVar8 = *(int *)(unaff_BP + -0x90) * 2;
      if ((*(int *)(unaff_BP + iVar8 + -0x7c) < 0x10) ||
         (0x26f < *(int *)(unaff_BP + iVar8 + -0x7c))) {
        *(undefined2 *)(unaff_BP + *(int *)(unaff_BP + -0x90) * 2 + -0x8c) = 0xfff0;
      }
      if (*(int *)(unaff_BP + *(int *)(unaff_BP + -0x90) * 2 + -0x8c) < -0xf) {
        *(int *)(unaff_BP + -0x24) = *(int *)(unaff_BP + -0x24) + -1;
      }
    }
    *(int *)(unaff_BP + -0x90) = *(int *)(unaff_BP + -0x90) + 1;
  }
  if (*(int *)0x1dc0 != 0) {
    if (*(int *)0x1d44 < 0) {
      *(int *)0x1d40 = *(int *)0x1d40 + *(int *)0x1db4;
    }
    else {
      *(int *)0x1d44 = *(int *)0x1d44 + -1;
    }
    if ((((*(int *)0x1f8a + -4 <= *(int *)0x193e) && (*(int *)0x193e <= *(int *)0x1f8a + 0x34)) &&
        (*(int *)0x1fca <= *(int *)0x1d40)) && (*(int *)0x1d40 <= *(int *)0x1fca + 0x1a)) {
      if (*(int *)0x1dc0 == 4) {
        FUN_1000_83b5(0x2b8);
        *(undefined2 *)(unaff_BP + -0x90) = 1;
        do {
          iVar8 = *(int *)(unaff_BP + -0x90) * 2;
          if (((*(int *)(iVar8 + 0x1faa) == 10) && (*(int *)(iVar8 + 0x1fca) != 0)) &&
             ((0 < *(int *)(iVar8 + 0x1f8a) && (*(int *)(iVar8 + 0x1f8a) < 0x240)))) {
            *(int *)(unaff_BP + -0x2a) = *(int *)(unaff_BP + -0x2a) + 1;
            FUN_1000_824a(*(undefined2 *)(unaff_BP + -0x90));
          }
          *(int *)(unaff_BP + -0x90) = *(int *)(unaff_BP + -0x90) + 1;
        } while (*(int *)(unaff_BP + -0x90) < 0x10);
        *(undefined2 *)(unaff_BP + -0x90) = 0;
        while (*(int *)(unaff_BP + -0x90) < *(int *)0x1d48) {
          *(undefined2 *)(unaff_BP + *(int *)(unaff_BP + -0x90) * 2 + -0x108) = 0x130;
          *(int *)(unaff_BP + -0x90) = *(int *)(unaff_BP + -0x90) + 1;
        }
        *(undefined2 *)(unaff_BP + -0x8e) = 0;
        *(undefined2 *)(unaff_BP + -0x90) = 0;
        while (*(int *)(unaff_BP + -0x90) < 0x10) {
          *(undefined2 *)(unaff_BP + *(int *)(unaff_BP + -0x90) * 2 + -0x6c) = 0x20;
          *(int *)(unaff_BP + -0x90) = *(int *)(unaff_BP + -0x90) + 1;
        }
        *(undefined2 *)(unaff_BP + -2) = 0;
        *(undefined2 *)(unaff_BP + -0x90) = 0;
        while (*(int *)(unaff_BP + -0x90) < 8) {
          *(undefined2 *)(unaff_BP + *(int *)(unaff_BP + -0x90) * 2 + -0x8c) = 0xfff0;
          *(int *)(unaff_BP + -0x90) = *(int *)(unaff_BP + -0x90) + 1;
        }
        *(undefined2 *)(unaff_BP + -0x24) = 0;
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
    if ((*(int *)0x1d44 < 0) && (*(int *)0x1d40 < 0x21)) {
      *(undefined2 *)0x1d40 = 0x20;
      *(undefined2 *)0x1d44 = 0x32;
    }
    if (*(int *)0x1d44 == 0) {
      *(undefined2 *)0x1dc0 = 0;
    }
  }
  *(undefined2 *)(unaff_BP + -0x90) = *(undefined2 *)0x17f4;
  while (0 < *(int *)(unaff_BP + -0x90)) {
    iVar8 = *(int *)(unaff_BP + -0x90) * 2;
    *(int *)(iVar8 + 0x1f8a) = *(int *)(iVar8 + 0x1f8a) + *(int *)(iVar8 + 0x1d6a);
    *(int *)(iVar8 + 0x1fca) = *(int *)(iVar8 + 0x1fca) + *(int *)(iVar8 + 0x1d8a);
    *(int *)(unaff_BP + -0x90) = *(int *)(unaff_BP + -0x90) + -1;
  }
  *(int *)0x1f8a = *(int *)0x1f8a + *(int *)0x1d6a;
  *(byte *)0x1844 = *(byte *)0x1844 ^ 1;
  FUN_1000_b854(4,0,0x4b,0x29 - (uint)(3 < *(int *)0x193c),5);
  *(undefined2 *)(unaff_BP + -0x90) = *(undefined2 *)0x17f4;
  while (0 < *(int *)(unaff_BP + -0x90)) {
    if (0xf < *(int *)(*(int *)(unaff_BP + -0x90) * 2 + 0x1fca)) {
      iVar8 = *(int *)(unaff_BP + -0x90) * 2;
      if ((*(int *)(iVar8 + 0x17f6) == 3) || (*(int *)(iVar8 + 0x17f6) == 9)) {
        *(undefined2 *)(unaff_BP + -0x10e) = 1;
      }
      else {
        *(undefined2 *)(unaff_BP + -0x10e) = 0;
      }
      iVar8 = *(int *)(unaff_BP + -0x90) * 2;
      if (((int)((-(uint)(*(int *)(unaff_BP + -0x10e) != 0) & 0x20) - 0x20) <=
           *(int *)(iVar8 + 0x1f8a)) && (*(int *)(iVar8 + 0x1f8a) < 0x260)) {
        iVar8 = *(int *)(unaff_BP + -0x90) * 2;
        if (*(int *)(iVar8 + 0x1faa) < 10) {
          switch(*(undefined2 *)(iVar8 + 0x17f6)) {
          case 1:
          case 2:
          case 4:
            FUN_1000_85b8(*(undefined2 *)(unaff_BP + -0x90));
            break;
          case 3:
          case 9:
            FUN_1000_8562(*(undefined2 *)(unaff_BP + -0x90));
          }
        }
        else {
          iVar8 = *(int *)(*(int *)(unaff_BP + -0x90) * 2 + 0x17f6);
          if (iVar8 == 1) {
            iVar8 = *(int *)(unaff_BP + -0x90) * 2;
            *(int *)(unaff_BP + -0x10e) = iVar8;
            bVar2 = -(0 < *(int *)(iVar8 + 0x1d6a)) & 2;
            cVar3 = bVar2 + 5;
            cVar7 = bVar2 + 4;
          }
          else {
            if (iVar8 != 2) {
              if (iVar8 == 3) {
                iVar8 = *(int *)(unaff_BP + -0x90) * 2;
                *(int *)(unaff_BP + -0x10e) = iVar8;
                iVar8 = 0x31 - (uint)(*(int *)(iVar8 + 0x1d6a) < 1);
LAB_1000_1b85:
                iVar4 = *(int *)(*(int *)(unaff_BP + -0x10e) + 0x1fca);
                iVar9 = *(int *)(*(int *)(unaff_BP + -0x10e) + 0x1f8a);
LAB_1000_1ca6:
                FUN_1000_bfd6(iVar9,iVar4,iVar8);
              }
              else if (iVar8 == 4) {
                iVar8 = *(int *)(unaff_BP + -0x90) * 2;
                if (0 < *(int *)(iVar8 + 0x1f8a)) {
                  FUN_1000_bfd6(*(undefined2 *)(iVar8 + 0x1f8a),*(undefined2 *)(iVar8 + 0x1fca),
                                (*(int *)(iVar8 + 0x1822) + 0x12) * 4 + *(int *)0x1d42);
                  FUN_1000_bfd6(*(int *)(iVar8 + 0x1f8a) + 0x10,*(undefined2 *)(iVar8 + 0x1fca),
                                *(int *)(iVar8 + 0x1822) * 4 + *(int *)0x1d42 + 0x49);
                  FUN_1000_bfd6(*(undefined2 *)(iVar8 + 0x1f8a),*(int *)(iVar8 + 0x1fca) + 0x10,
                                *(int *)0x1d42 + 0x44);
                  FUN_1000_bfd6(*(int *)(iVar8 + 0x1f8a) + 0x10,*(int *)(iVar8 + 0x1fca) + 0x10,
                                *(int *)0x1d42 + 0x45);
                }
                iVar9 = *(int *)(unaff_BP + -0x90) * 2;
                if (*(int *)(iVar9 + 0x1f8a) < 0x260) {
                  FUN_1000_bfd6(*(int *)(iVar9 + 0x1f8a) + 0x20,*(undefined2 *)(iVar9 + 0x1fca),
                                *(int *)(iVar9 + 0x1822) * 4 + *(int *)0x1d42 + 0x4a);
                  FUN_1000_bfd6(*(int *)(iVar9 + 0x1f8a) + 0x30,*(undefined2 *)(iVar9 + 0x1fca),
                                *(int *)(iVar9 + 0x1822) * 4 + *(int *)0x1d42 + 0x4b);
                  FUN_1000_bfd6(*(int *)(iVar9 + 0x1f8a) + 0x20,*(int *)(iVar9 + 0x1fca) + 0x10,
                                *(int *)0x1d42 + 0x46);
                  iVar8 = *(int *)0x1d42 + 0x47;
                  iVar4 = *(int *)(iVar9 + 0x1fca) + 0x10;
                  iVar9 = *(int *)(iVar9 + 0x1f8a) + 0x30;
                  goto LAB_1000_1ca6;
                }
              }
              else if (iVar8 == 9) {
                iVar8 = *(int *)(unaff_BP + -0x90) * 2;
                *(int *)(unaff_BP + -0x10e) = iVar8;
                iVar8 = 0x2f - (uint)(*(int *)(iVar8 + 0x1d6a) < 1);
                goto LAB_1000_1b85;
              }
              goto switchD_1000_1abd_caseD_5;
            }
            iVar8 = *(int *)(unaff_BP + -0x90) * 2;
            *(int *)(unaff_BP + -0x10e) = iVar8;
            bVar2 = -(0 < *(int *)(iVar8 + 0x1d6a)) & 2;
            cVar3 = bVar2 + 9;
            cVar7 = bVar2 + 8;
          }
          FUN_1000_88a2(*(undefined2 *)(*(int *)(unaff_BP + -0x10e) + 0x1f8a),
                        *(undefined2 *)(*(int *)(unaff_BP + -0x10e) + 0x1fca),cVar7,cVar3);
        }
      }
    }
switchD_1000_1abd_caseD_5:
    *(int *)(unaff_BP + -0x90) = *(int *)(unaff_BP + -0x90) + -1;
  }
  *(int *)(unaff_BP + -0xb2) = (0x28 - *(int *)0x1d48) * 8;
  if (*(int *)0x181e == 1) {
    iVar8 = *(int *)0x181e * 3;
  }
  else {
    iVar8 = *(int *)0x20c6 * 6;
  }
  *(int *)(unaff_BP + -0xd6) = iVar8 + *(int *)0x1d42;
  *(undefined2 *)(unaff_BP + -0x90) = 0;
  while (*(int *)(unaff_BP + -0x90) < *(int *)0x1d48) {
    if (*(int *)(unaff_BP + *(int *)(unaff_BP + -0x90) * 2 + -0x108) < 0x130) {
      iVar8 = *(int *)(unaff_BP + -0x90) * 2;
      FUN_1000_bfd6(*(undefined2 *)(unaff_BP + iVar8 + -0xd2),
                    *(undefined2 *)(unaff_BP + iVar8 + -0x108),
                    (*(int *)(unaff_BP + -0xd6) - (uint)(*(int *)0x184a < 2)) + 2);
    }
    else {
      FUN_1000_bfd6(*(undefined2 *)(unaff_BP + -0xb2),6,*(undefined2 *)(unaff_BP + -0xd6));
      *(int *)(unaff_BP + -0xb2) = *(int *)(unaff_BP + -0xb2) + 0x10;
    }
    *(int *)(unaff_BP + -0x90) = *(int *)(unaff_BP + -0x90) + 1;
  }
  *(int *)(unaff_BP + -0xd6) = *(int *)0x1d42 + *(int *)0x1846 + 0x19;
  *(undefined2 *)(unaff_BP + -0x90) = 0;
  do {
    iVar8 = *(int *)(unaff_BP + -0x90) * 2;
    if (0x20 < *(int *)(unaff_BP + iVar8 + -0x6c)) {
      FUN_1000_bfd6(*(undefined2 *)(unaff_BP + iVar8 + -0x4a),
                    *(undefined2 *)(unaff_BP + iVar8 + -0x6c),*(undefined2 *)(unaff_BP + -0xd6));
    }
    *(int *)(unaff_BP + -0x90) = *(int *)(unaff_BP + -0x90) + 1;
  } while (*(int *)(unaff_BP + -0x90) < 0x10);
  *(int *)(unaff_BP + -0xd6) = *(int *)0x1d42 + 0xc;
  *(undefined2 *)(unaff_BP + -0x90) = 0;
  while (*(int *)(unaff_BP + -0x90) < 8) {
    iVar8 = *(int *)(unaff_BP + -0x90) * 2;
    if (-0x10 < *(int *)(unaff_BP + iVar8 + -0x8c)) {
      if (*(int *)(unaff_BP + iVar8 + -0x8c) < 0) {
        FUN_1000_c322(*(undefined2 *)(unaff_BP + iVar8 + -0x7c),
                      *(undefined2 *)(unaff_BP + iVar8 + -0x8c),
                      *(int *)(*(int *)(unaff_BP + iVar8 + -0xe8) * 2 + 0x510) +
                      *(int *)(unaff_BP + -0xd6));
      }
      else {
        iVar8 = *(int *)(unaff_BP + -0x90) * 2;
        FUN_1000_bfd6(*(undefined2 *)(unaff_BP + iVar8 + -0x7c),
                      *(undefined2 *)(unaff_BP + iVar8 + -0x8c),
                      *(int *)(*(int *)(unaff_BP + iVar8 + -0xe8) * 2 + 0x510) +
                      *(int *)(unaff_BP + -0xd6));
      }
    }
    *(int *)(unaff_BP + -0x90) = *(int *)(unaff_BP + -0x90) + 1;
  }
  if (*(int *)0x1faa < 10) {
    FUN_1000_85b8(0);
  }
  else {
    FUN_1000_bfd6(*(undefined2 *)0x1f8a,(uint)(*(int *)0x193c < 4) + *(int *)0x1fca,0);
    FUN_1000_bfd6(*(int *)0x1f8a + 0x20,(uint)(*(int *)0x193c < 4) + *(int *)0x1fca,1);
  }
  if ((*(int *)0x1dc0 != 0) &&
     (((0xf < *(int *)0x1d44 || (*(int *)0x1d44 < 1)) || (*(int *)0x1844 != 0)))) {
    if ((*(int *)0x193c < 4) && (0 < *(int *)0x1d44)) {
      *(undefined2 *)(unaff_BP + -0x10e) = 1;
    }
    else {
      *(undefined2 *)(unaff_BP + -0x10e) = 0;
    }
    FUN_1000_bfd6(*(undefined2 *)0x193e,(uint)(*(int *)(unaff_BP + -0x10e) != 0) + *(int *)0x1d40,
                  *(int *)0x1dc0 + *(int *)0x1d42 + 0x28);
  }
  FUN_1000_8292();
  *(undefined2 *)(unaff_BP + -0x90) = *(undefined2 *)0x17f4;
  while (0 < *(int *)(unaff_BP + -0x90)) {
    if (0xf < *(int *)(*(int *)(unaff_BP + -0x90) * 2 + 0x1fca)) {
      iVar8 = *(int *)(*(int *)(unaff_BP + -0x90) * 2 + 0x17f6);
      if (iVar8 == 1) {
        iVar8 = 6;
LAB_1000_1ee1:
        uVar5 = 7;
      }
      else {
        if (iVar8 == 2) {
          iVar8 = 2;
          goto LAB_1000_1ee1;
        }
        if (iVar8 == 3) {
          iVar8 = 4;
        }
        else {
          if (iVar8 == 4) {
            iVar8 = 3;
            goto LAB_1000_1ee1;
          }
          if (iVar8 != 9) goto LAB_1000_1ef0;
          iVar8 = -(*(int *)0x1844 * 7 + -0xf);
        }
        uVar5 = 3;
      }
      FUN_1000_890a(*(undefined2 *)(unaff_BP + -0x90),uVar5,iVar8);
    }
LAB_1000_1ef0:
    *(int *)(unaff_BP + -0x90) = *(int *)(unaff_BP + -0x90) + -1;
  }
  FUN_1000_890a(0,7,0xf);
  while (iVar8 = FUN_1000_bf8e(), iVar8 != 0) {
    FUN_1000_bf98();
  }
  FUN_1000_e538(0x2130);
  do {
    uVar6 = FUN_1000_bb38();
  } while (uVar6 < *(uint *)0x1820);
  *(undefined2 *)0xdd0 = 0;
  out(0xa4,(byte)*(undefined2 *)0x1844);
  out(0xa6,(byte)*(undefined2 *)0x1844 ^ 1);
  FUN_1000_b854(4,0,0x4b,0x13f,0);
  FUN_1000_8184();
  iVar8 = FUN_1000_e3c8(0x2130);
  *(int *)(unaff_BP + -0xd8) = iVar8;
  if (((iVar8 != 0) || (*(int *)0x213e != 0)) && (FUN_1000_9e70(), *(int *)0x184c == 0)) {
    FUN_1000_1faa();
    return;
  }
  *(undefined2 *)0x1d6a = 0;
  if (*(int *)0x1faa < 10) {
    iVar8 = *(int *)0x1faa;
    *(int *)(unaff_BP + -0x10c) = iVar8;
    *(int *)0x1faa = *(int *)0x1faa + -1;
    if (iVar8 < 1) {
      *(undefined2 *)(unaff_BP + -0x4c) = 1;
      *(int *)0x1842 = *(int *)0x1842 + -1;
      FUN_1000_1faa();
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
       ((*(int *)(unaff_BP + -0x8e) < *(int *)0x1d48 && (*(int *)(unaff_BP + -0xd4) != 0)))) {
      *(undefined2 *)(unaff_BP + -0x90) = 0;
      while (*(int *)(unaff_BP + -0x90) < *(int *)0x1d48) {
        if (0x12f < *(int *)(unaff_BP + *(int *)(unaff_BP + -0x90) * 2 + -0x108)) {
          *(undefined2 *)(unaff_BP + -0xb2) = *(undefined2 *)(unaff_BP + -0x90);
          break;
        }
        *(int *)(unaff_BP + -0x90) = *(int *)(unaff_BP + -0x90) + 1;
      }
      iVar4 = *(int *)(unaff_BP + -0xb2) * 2;
      *(undefined2 *)(unaff_BP + iVar4 + -0x108) = *(undefined2 *)0x1fca;
      iVar8 = *(int *)0x1f8a;
      *(int *)(unaff_BP + iVar4 + -0xd2) = iVar8 + -0x10;
      *(int *)(unaff_BP + iVar4 + -0xb0) = iVar8 + -0x10;
      *(int *)(unaff_BP + iVar4 + -0x22) = *(int *)0x20c6 * -7;
      *(int *)(unaff_BP + -0x8e) = *(int *)(unaff_BP + -0x8e) + 1;
      *(undefined2 *)(unaff_BP + -0xd4) = 0;
      FUN_1000_cff4(1);
    }
    if ((((*(int *)0x213a != 0) && (*(int *)0x212c == 0)) ||
        ((*(int *)0x2138 != 0 && (*(int *)0x212c != 0)))) &&
       ((*(int *)(unaff_BP + -0x8e) < *(int *)0x1d48 && (*(int *)(unaff_BP + -0xd4) != 0)))) {
      *(undefined2 *)(unaff_BP + -0x90) = 0;
      while (*(int *)(unaff_BP + -0x90) < *(int *)0x1d48) {
        if (0x12f < *(int *)(unaff_BP + *(int *)(unaff_BP + -0x90) * 2 + -0x108)) {
          *(undefined2 *)(unaff_BP + -0xb2) = *(undefined2 *)(unaff_BP + -0x90);
          break;
        }
        *(int *)(unaff_BP + -0x90) = *(int *)(unaff_BP + -0x90) + 1;
      }
      iVar4 = *(int *)(unaff_BP + -0xb2) * 2;
      *(undefined2 *)(unaff_BP + iVar4 + -0x108) = *(undefined2 *)0x1fca;
      iVar8 = *(int *)0x1f8a;
      *(int *)(unaff_BP + iVar4 + -0xd2) = iVar8 + 0x40;
      *(int *)(unaff_BP + iVar4 + -0xb0) = iVar8 + 0x40;
      *(int *)(unaff_BP + iVar4 + -0x22) = *(int *)0x20c6 * 7;
      *(int *)(unaff_BP + -0x8e) = *(int *)(unaff_BP + -0x8e) + 1;
      *(undefined2 *)(unaff_BP + -0xd4) = 0;
      FUN_1000_cff4(1);
    }
    if ((*(int *)0x2138 == 0) && (*(int *)0x213a == 0)) {
      *(undefined2 *)(unaff_BP + -0xd4) = 1;
    }
  }
  *(undefined2 *)(unaff_BP + -0x28) = 0;
  *(undefined2 *)(unaff_BP + -0x90) = 1;
  do {
    if (*(int *)0x17f4 < *(int *)(unaff_BP + -0x90)) {
      FUN_1000_13e0();
      return;
    }
    if (*(int *)(*(int *)(unaff_BP + -0x90) * 2 + 0x1fca) != 0) {
      *(int *)(unaff_BP + -0x28) = *(int *)(unaff_BP + -0x28) + 1;
    }
    iVar8 = *(int *)(unaff_BP + -0x90) * 2;
    if (*(int *)(iVar8 + 0x1faa) < 10) {
      piVar1 = (int *)(iVar8 + 0x1faa);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        *(undefined2 *)(iVar8 + 0x1fca) = 0;
        *(undefined2 *)(iVar8 + 0x1d8a) = 0;
        *(undefined2 *)(iVar8 + 0x1faa) = 10;
      }
    }
    else {
      iVar8 = *(int *)(*(int *)(unaff_BP + -0x90) * 2 + 0x17f6);
      if (iVar8 == 1) {
        iVar8 = FUN_1000_efc8();
        if (((iVar8 % 0xf == 0) &&
            (iVar8 = *(int *)(unaff_BP + -0x90) * 2, *(int *)(iVar8 + 0x1fca) == 0)) &&
           (*(int *)(unaff_BP + -0x2a) < *(int *)(unaff_BP + -0x26))) {
          iVar4 = FUN_1000_efc8();
          *(int *)(iVar8 + 0x1fca) = (iVar4 % 7 + 2) * 0x20;
          iVar4 = FUN_1000_efc8();
          iVar4 = (iVar4 % 2) * 0x4c0 + -0x140;
          *(int *)(iVar8 + 0x1f8a) = iVar4;
          if (iVar4 == 0x140) {
            uVar5 = 0;
          }
          else if (-*(int *)(iVar8 + 0x1f8a) == -0x140 || -*(int *)(iVar8 + 0x1f8a) + 0x140 < 0) {
            uVar5 = 0xffff;
          }
          else {
            uVar5 = 1;
          }
          *(undefined2 *)(unaff_BP + -0x10c) = uVar5;
          iVar8 = FUN_1000_efc8();
          iVar4 = *(int *)(unaff_BP + -0x90) * 2;
          *(int *)(iVar4 + 0x1d6a) = (iVar8 % 4 + 2) * *(int *)(unaff_BP + -0x10c);
          *(undefined2 *)(iVar4 + 0x1d8a) = 0;
        }
        if (*(int *)(unaff_BP + -0x26) <= *(int *)(unaff_BP + -0x2a)) {
          iVar8 = *(int *)(*(int *)(unaff_BP + -0x90) * 2 + 0x1d6a);
          if (iVar8 == 0) {
            iVar8 = 0;
          }
          else if (iVar8 < 1) {
            iVar8 = -1;
          }
          else {
            iVar8 = 1;
          }
          *(int *)(unaff_BP + -0x10c) = iVar8;
          *(int *)(*(int *)(unaff_BP + -0x90) * 2 + 0x1d6a) = iVar8 << 3;
        }
        iVar8 = *(int *)(unaff_BP + -0x90) * 2;
        iVar8 = *(int *)(iVar8 + 0x1f8a) + *(int *)(iVar8 + 0x1d6a);
        if ((iVar8 < -0x13f) || (0x37f < iVar8)) {
          *(undefined2 *)(*(int *)(unaff_BP + -0x90) * 2 + 0x1fca) = 0;
        }
        if (((*(int *)(*(int *)(unaff_BP + -0x90) * 2 + 0x1fca) != 0) &&
            (iVar8 = FUN_1000_efc8(), iVar8 % (*(int *)0x181e * -0x28 + 100) == 0)) &&
           ((*(int *)(unaff_BP + -2) < 0x10 &&
            ((iVar8 = *(int *)(unaff_BP + -0x90) * 2, 0 < *(int *)(iVar8 + 0x1f8a) &&
             (*(int *)(iVar8 + 0x1f8a) < 0x240)))))) {
          *(undefined2 *)(unaff_BP + -0xb2) = 0;
          do {
            if (*(int *)(unaff_BP + *(int *)(unaff_BP + -0xb2) * 2 + -0x6c) < 0x21) {
              *(undefined2 *)(unaff_BP + -0xd6) = *(undefined2 *)(unaff_BP + -0xb2);
            }
            *(int *)(unaff_BP + -0xb2) = *(int *)(unaff_BP + -0xb2) + 1;
          } while (*(int *)(unaff_BP + -0xb2) < 0x10);
          iVar8 = *(int *)(unaff_BP + -0x90) * 2;
          iVar4 = *(int *)(unaff_BP + -0xd6) * 2;
          *(int *)(unaff_BP + iVar4 + -0x6c) = *(int *)(iVar8 + 0x1fca) + 0xc;
          iVar8 = *(int *)(iVar8 + 0x1f8a) + 0x18;
LAB_1000_0d5a:
          *(int *)(unaff_BP + iVar4 + -0x4a) = iVar8;
          *(int *)(unaff_BP + -2) = *(int *)(unaff_BP + -2) + 1;
        }
      }
      else if (iVar8 == 2) {
        iVar8 = FUN_1000_efc8();
        if (((iVar8 % 0x28 == 0) &&
            (iVar8 = *(int *)(unaff_BP + -0x90) * 2, *(int *)(iVar8 + 0x1fca) == 0)) &&
           (*(int *)(unaff_BP + -0x2a) < *(int *)(unaff_BP + -0x26))) {
          iVar4 = FUN_1000_efc8();
          *(int *)(iVar8 + 0x1fca) = (iVar4 % 2 + 7) * 0x20;
          iVar4 = FUN_1000_efc8();
          iVar4 = (iVar4 % 2) * 0x4c0 + -0x140;
          *(int *)(iVar8 + 0x1f8a) = iVar4;
          if (iVar4 == 0x140) {
            uVar5 = 0;
          }
          else if (-*(int *)(iVar8 + 0x1f8a) == -0x140 || -*(int *)(iVar8 + 0x1f8a) + 0x140 < 0) {
            uVar5 = 0xffff;
          }
          else {
            uVar5 = 1;
          }
          *(undefined2 *)(unaff_BP + -0x10c) = uVar5;
          iVar8 = FUN_1000_efc8();
          iVar4 = *(int *)(unaff_BP + -0x90) * 2;
          *(int *)(iVar4 + 0x1d6a) = (iVar8 % 3 + 7) * *(int *)(unaff_BP + -0x10c);
          *(undefined2 *)(iVar4 + 0x1d8a) = 0;
        }
        iVar8 = *(int *)(unaff_BP + -0x90) * 2;
        iVar8 = *(int *)(iVar8 + 0x1f8a) + *(int *)(iVar8 + 0x1d6a);
        if ((iVar8 < -0x13f) || (0x37f < iVar8)) {
          *(undefined2 *)(*(int *)(unaff_BP + -0x90) * 2 + 0x1fca) = 0;
        }
        if (((*(int *)(*(int *)(unaff_BP + -0x90) * 2 + 0x1fca) != 0) &&
            (iVar8 = FUN_1000_efc8(),
            iVar8 % (((*(int *)0x181e * -2 + 5) - *(int *)0x20c6) * 10) == 0)) &&
           ((*(int *)(unaff_BP + -0x24) < 8 &&
            ((iVar8 = *(int *)(unaff_BP + -0x90) * 2, 0 < *(int *)(iVar8 + 0x1f8a) &&
             (*(int *)(iVar8 + 0x1f8a) < 0x241)))))) {
          *(undefined2 *)(unaff_BP + -0xb2) = 0;
          do {
            if (*(int *)(unaff_BP + *(int *)(unaff_BP + -0xb2) * 2 + -0x8c) < -0xf) {
              *(undefined2 *)(unaff_BP + -0xd6) = *(undefined2 *)(unaff_BP + -0xb2);
            }
            *(int *)(unaff_BP + -0xb2) = *(int *)(unaff_BP + -0xb2) + 1;
          } while (*(int *)(unaff_BP + -0xb2) < 8);
          iVar8 = *(int *)(unaff_BP + -0x90) * 2;
          iVar4 = *(int *)(unaff_BP + -0xd6) * 2;
          *(int *)(unaff_BP + iVar4 + -0x8c) = *(int *)(iVar8 + 0x1fca) + 0xc;
          *(int *)(unaff_BP + iVar4 + -0x7c) = *(int *)(iVar8 + 0x1f8a) + 0x18;
          *(undefined2 *)(unaff_BP + iVar4 + -0xe8) = 0;
          *(int *)(unaff_BP + -0x24) = *(int *)(unaff_BP + -0x24) + 1;
          FUN_1000_cff4(2);
        }
      }
      else if (iVar8 == 3) {
        iVar8 = FUN_1000_efc8();
        if (((iVar8 % (((3 - *(int *)0x181e) * 2 - *(int *)0x20c6) * 10) == 0) &&
            (iVar8 = *(int *)(unaff_BP + -0x90) * 2, *(int *)(iVar8 + 0x1fca) == 0)) &&
           (*(int *)(unaff_BP + -0x2a) < *(int *)(unaff_BP + -0x26))) {
          iVar4 = FUN_1000_efc8();
          *(int *)(iVar8 + 0x1fca) = (iVar4 % 2 + 2) * 0x20;
          iVar4 = FUN_1000_efc8();
          iVar4 = (iVar4 % 2) * 0x4e0 + -0x140;
          *(int *)(iVar8 + 0x1f8a) = iVar4;
          if (iVar4 == 0x140) {
            uVar5 = 0;
          }
          else if (-*(int *)(iVar8 + 0x1f8a) == -0x140 || -*(int *)(iVar8 + 0x1f8a) + 0x140 < 0) {
            uVar5 = 0xffff;
          }
          else {
            uVar5 = 1;
          }
          *(undefined2 *)(unaff_BP + -0x10c) = uVar5;
          iVar8 = FUN_1000_efc8();
          iVar4 = *(int *)(unaff_BP + -0x90) * 2;
          *(int *)(iVar4 + 0x1d6a) = (iVar8 % 4 + 0x10) * *(int *)(unaff_BP + -0x10c);
          *(undefined2 *)(iVar4 + 0x1d8a) = 0;
        }
        if (*(int *)(unaff_BP + -0x26) <= *(int *)(unaff_BP + -0x2a)) {
          iVar8 = *(int *)(*(int *)(unaff_BP + -0x90) * 2 + 0x1d6a);
          if (iVar8 == 0) {
            iVar8 = 0;
          }
          else if (iVar8 < 1) {
            iVar8 = -1;
          }
          else {
            iVar8 = 1;
          }
          *(int *)(unaff_BP + -0x10c) = iVar8;
          *(int *)(*(int *)(unaff_BP + -0x90) * 2 + 0x1d6a) = iVar8 << 3;
        }
        iVar8 = *(int *)(unaff_BP + -0x90) * 2;
        iVar8 = *(int *)(iVar8 + 0x1f8a) + *(int *)(iVar8 + 0x1d6a);
        if ((iVar8 < -0x13f) || (0x37f < iVar8)) {
          *(undefined2 *)(*(int *)(unaff_BP + -0x90) * 2 + 0x1fca) = 0;
        }
        if (((*(int *)(*(int *)(unaff_BP + -0x90) * 2 + 0x1fca) != 0) &&
            (iVar8 = FUN_1000_efc8(), iVar8 % (((4 - *(int *)0x20c6) - *(int *)0x181e) * 5) == 0))
           && ((*(int *)(unaff_BP + -2) < 0x10 &&
               ((iVar8 = *(int *)(unaff_BP + -0x90) * 2, 0 < *(int *)(iVar8 + 0x1f8a) &&
                (*(int *)(iVar8 + 0x1f8a) < 0x240)))))) {
          *(undefined2 *)(unaff_BP + -0xb2) = 0;
          do {
            if (*(int *)(unaff_BP + *(int *)(unaff_BP + -0xb2) * 2 + -0x6c) < 0x21) {
              *(undefined2 *)(unaff_BP + -0xd6) = *(undefined2 *)(unaff_BP + -0xb2);
            }
            *(int *)(unaff_BP + -0xb2) = *(int *)(unaff_BP + -0xb2) + 1;
          } while (*(int *)(unaff_BP + -0xb2) < 0x10);
          iVar8 = *(int *)(unaff_BP + -0x90) * 2;
          iVar4 = *(int *)(unaff_BP + -0xd6) * 2;
          *(int *)(unaff_BP + iVar4 + -0x6c) = *(int *)(iVar8 + 0x1fca) + 0x10;
          iVar8 = *(int *)(iVar8 + 0x1f8a) + 0x10;
          goto LAB_1000_0d5a;
        }
      }
      else if (iVar8 == 4) {
        iVar8 = FUN_1000_efc8();
        if (((iVar8 % 0x1e == 0) &&
            (iVar8 = *(int *)(unaff_BP + -0x90) * 2, *(int *)(iVar8 + 0x1fca) == 0)) &&
           (*(int *)(unaff_BP + -0x2a) < *(int *)(unaff_BP + -0x26))) {
          *(undefined2 *)(iVar8 + 0x1fca) = 0x120;
          iVar4 = FUN_1000_efc8();
          iVar4 = (iVar4 % 2) * 0x4c0 + -0x140;
          *(int *)(iVar8 + 0x1f8a) = iVar4;
          if (iVar4 == 0x140) {
            uVar5 = 0;
          }
          else if (-*(int *)(iVar8 + 0x1f8a) == -0x140 || -*(int *)(iVar8 + 0x1f8a) + 0x140 < 0) {
            uVar5 = 0xffff;
          }
          else {
            uVar5 = 1;
          }
          *(undefined2 *)(unaff_BP + -0x10c) = uVar5;
          iVar8 = FUN_1000_efc8();
          iVar4 = *(int *)(unaff_BP + -0x90) * 2;
          *(int *)(iVar4 + 0x1d6a) = (iVar8 % 4 + 5) * *(int *)(unaff_BP + -0x10c);
          *(undefined2 *)(iVar4 + 0x1d8a) = 0;
          *(undefined2 *)(iVar4 + 0x1822) = 0;
        }
        iVar8 = *(int *)(unaff_BP + -0x90) * 2;
        if ((*(int *)(iVar8 + 0x1d6a) == 0) && (*(int *)(iVar8 + 0x1822) < 4)) {
          *(int *)(iVar8 + 0x1822) = *(int *)(iVar8 + 0x1822) + 1;
        }
        iVar8 = *(int *)(unaff_BP + -0x90) * 2;
        if ((*(int *)(iVar8 + 0x1d6a) != 0) && (0 < *(int *)(iVar8 + 0x1822))) {
          *(int *)(iVar8 + 0x1822) = *(int *)(iVar8 + 0x1822) + -1;
        }
        iVar4 = *(int *)(unaff_BP + -0x90) * 2;
        iVar8 = *(int *)(iVar4 + 0x1f8a) + *(int *)(iVar4 + 0x1d6a);
        if (((0x1f < iVar8) && (iVar8 < 0x221)) &&
           (iVar8 = FUN_1000_efc8(), iVar8 % (((3 - *(int *)0x181e) * 2 - *(int *)0x20c6) * 10) == 0
           )) {
          *(undefined2 *)(iVar4 + 0x1d6a) = 0;
        }
        iVar8 = *(int *)(unaff_BP + -0x90) * 2;
        iVar8 = *(int *)(iVar8 + 0x1f8a) + *(int *)(iVar8 + 0x1d6a);
        if ((iVar8 < -0x13f) || (0x37f < iVar8)) {
          *(undefined2 *)(*(int *)(unaff_BP + -0x90) * 2 + 0x1fca) = 0;
        }
        if (*(int *)(*(int *)(unaff_BP + -0x90) * 2 + 0x1fca) != 0) {
          iVar8 = *(int *)(unaff_BP + -0x90) * 2;
          if (((*(int *)(iVar8 + 0x1822) == 4) && (*(int *)(unaff_BP + -0x24) < 4)) &&
             ((0 < *(int *)(iVar8 + 0x1f8a) && (*(int *)(iVar8 + 0x1f8a) < 0x241)))) {
            *(undefined2 *)(unaff_BP + -0x10a) = 0;
            while (*(int *)(unaff_BP + -0x10a) < 4) {
              *(undefined2 *)(unaff_BP + -0xb2) = 0;
              while (*(int *)(unaff_BP + -0xb2) < 8) {
                if (*(int *)(unaff_BP + *(int *)(unaff_BP + -0xb2) * 2 + -0x8c) < -0xf) {
                  *(undefined2 *)(unaff_BP + -0xd6) = *(undefined2 *)(unaff_BP + -0xb2);
                  break;
                }
                *(int *)(unaff_BP + -0xb2) = *(int *)(unaff_BP + -0xb2) + 1;
              }
              iVar8 = *(int *)(unaff_BP + -0x90) * 2;
              iVar4 = *(int *)(unaff_BP + -0xd6) * 2;
              *(int *)(unaff_BP + iVar4 + -0x8c) = *(int *)(iVar8 + 0x1fca) + 8;
              *(int *)(unaff_BP + iVar4 + -0x7c) =
                   *(int *)(unaff_BP + -0x10a) * 0x10 + *(int *)(iVar8 + 0x1f8a);
              *(undefined2 *)(unaff_BP + iVar4 + -0xe8) = 0;
              *(int *)(unaff_BP + -0x10a) = *(int *)(unaff_BP + -0x10a) + 1;
            }
            *(int *)(unaff_BP + -0x24) = *(int *)(unaff_BP + -0x24) + 4;
            FUN_1000_cff4(2);
          }
          iVar8 = *(int *)(unaff_BP + -0x90) * 2;
          if (*(int *)(iVar8 + 0x1822) == 4) {
            if (*(int *)(iVar8 + 0x1f8a) == 0x140) {
              uVar5 = 0;
            }
            else if (-*(int *)(iVar8 + 0x1f8a) == -0x140 || -*(int *)(iVar8 + 0x1f8a) + 0x140 < 0) {
              uVar5 = 0xffff;
            }
            else {
              uVar5 = 1;
            }
            *(undefined2 *)(unaff_BP + -0x10c) = uVar5;
            iVar8 = FUN_1000_efc8();
            *(int *)(*(int *)(unaff_BP + -0x90) * 2 + 0x1d6a) =
                 (iVar8 % 4 + 5) * *(int *)(unaff_BP + -0x10c);
          }
        }
      }
      else if (iVar8 == 9) {
        FUN_1000_1288();
        return;
      }
    }
    *(int *)(unaff_BP + -0x90) = *(int *)(unaff_BP + -0x90) + 1;
  } while( true );
}


