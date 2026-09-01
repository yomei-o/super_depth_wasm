/* 1000:1288 */

void FUN_1000_1288(void)

{
  int *piVar1;
  int iVar2;
  undefined2 uVar3;
  int iVar4;
  int unaff_BP;
  int iVar5;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  iVar4 = FUN_1000_efc8();
  if (((iVar4 % 0xf == 0) && (iVar4 = *(int *)(unaff_BP + -0x90) * 2, *(int *)(iVar4 + 0x1fca) == 0)
      ) && (*(int *)(unaff_BP + -0x2a) < *(int *)(unaff_BP + -0x26))) {
    iVar5 = FUN_1000_efc8();
    *(int *)(iVar4 + 0x1822) = (iVar5 % 5 + 3) * 0x20;
    iVar5 = FUN_1000_efc8();
    *(int *)(iVar4 + 0x1fca) = (iVar5 % 2) * 0x40 + *(int *)(iVar4 + 0x1822) + -0x20;
    iVar5 = FUN_1000_efc8();
    iVar5 = (iVar5 % 2) * 0x4e0 + -0x140;
    *(int *)(iVar4 + 0x1f8a) = iVar5;
    if (iVar5 == 0x140) {
      uVar3 = 0;
    }
    else if (-*(int *)(iVar4 + 0x1f8a) == -0x140 || -*(int *)(iVar4 + 0x1f8a) + 0x140 < 0) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = 1;
    }
    *(undefined2 *)(unaff_BP + -0x10c) = uVar3;
    iVar4 = FUN_1000_efc8();
    iVar5 = *(int *)(unaff_BP + -0x90) * 2;
    *(int *)(iVar5 + 0x1d6a) = (iVar4 % 5 + 5) * *(int *)(unaff_BP + -0x10c);
    *(undefined2 *)(iVar5 + 0x1d8a) = 0;
  }
  if (*(int *)(unaff_BP + -0x26) <= *(int *)(unaff_BP + -0x2a)) {
    iVar4 = *(int *)(*(int *)(unaff_BP + -0x90) * 2 + 0x1d6a);
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else if (iVar4 < 1) {
      iVar4 = -1;
    }
    else {
      iVar4 = 1;
    }
    *(int *)(unaff_BP + -0x10c) = iVar4;
    *(int *)(*(int *)(unaff_BP + -0x90) * 2 + 0x1d6a) = iVar4 * 10;
  }
  iVar4 = *(int *)(unaff_BP + -0x90) * 2;
  iVar4 = *(int *)(iVar4 + 0x1f8a) + *(int *)(iVar4 + 0x1d6a);
  if ((iVar4 < -0x13f) || (0x39f < iVar4)) {
    iVar4 = *(int *)(unaff_BP + -0x90) * 2;
    *(undefined2 *)(iVar4 + 0x1fca) = 0;
    *(undefined2 *)(iVar4 + 0x1d8a) = 0;
  }
  if (*(int *)(*(int *)(unaff_BP + -0x90) * 2 + 0x1fca) != 0) {
    iVar5 = *(int *)(unaff_BP + -0x90) * 2;
    iVar4 = *(int *)(iVar5 + 0x1fca);
    if (*(int *)(iVar5 + 0x1822) != iVar4) {
      iVar2 = *(int *)(iVar5 + 0x1822);
      *(int *)(unaff_BP + -0x10c) = iVar5;
      if (-(iVar4 - iVar2) < 1) {
        iVar4 = -1;
      }
      else {
        iVar4 = 1;
      }
      *(int *)(iVar5 + 0x1d8a) = *(int *)(iVar5 + 0x1d8a) + iVar4;
    }
  }
LAB_1000_0c9b:
  do {
    while( true ) {
      while( true ) {
        *(int *)(unaff_BP + -0x90) = *(int *)(unaff_BP + -0x90) + 1;
        if (*(int *)0x17f4 < *(int *)(unaff_BP + -0x90)) {
          FUN_1000_13e0();
          return;
        }
        if (*(int *)(*(int *)(unaff_BP + -0x90) * 2 + 0x1fca) != 0) {
          *(int *)(unaff_BP + -0x28) = *(int *)(unaff_BP + -0x28) + 1;
        }
        iVar4 = *(int *)(unaff_BP + -0x90) * 2;
        if (9 < *(int *)(iVar4 + 0x1faa)) break;
        piVar1 = (int *)(iVar4 + 0x1faa);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          *(undefined2 *)(iVar4 + 0x1fca) = 0;
          *(undefined2 *)(iVar4 + 0x1d8a) = 0;
          *(undefined2 *)(iVar4 + 0x1faa) = 10;
        }
      }
      iVar4 = *(int *)(*(int *)(unaff_BP + -0x90) * 2 + 0x17f6);
      if (iVar4 != 1) break;
      iVar4 = FUN_1000_efc8();
      if (((iVar4 % 0xf == 0) &&
          (iVar4 = *(int *)(unaff_BP + -0x90) * 2, *(int *)(iVar4 + 0x1fca) == 0)) &&
         (*(int *)(unaff_BP + -0x2a) < *(int *)(unaff_BP + -0x26))) {
        iVar5 = FUN_1000_efc8();
        *(int *)(iVar4 + 0x1fca) = (iVar5 % 7 + 2) * 0x20;
        iVar5 = FUN_1000_efc8();
        iVar5 = (iVar5 % 2) * 0x4c0 + -0x140;
        *(int *)(iVar4 + 0x1f8a) = iVar5;
        if (iVar5 == 0x140) {
          uVar3 = 0;
        }
        else if (-*(int *)(iVar4 + 0x1f8a) == -0x140 || -*(int *)(iVar4 + 0x1f8a) + 0x140 < 0) {
          uVar3 = 0xffff;
        }
        else {
          uVar3 = 1;
        }
        *(undefined2 *)(unaff_BP + -0x10c) = uVar3;
        iVar4 = FUN_1000_efc8();
        iVar5 = *(int *)(unaff_BP + -0x90) * 2;
        *(int *)(iVar5 + 0x1d6a) = (iVar4 % 4 + 2) * *(int *)(unaff_BP + -0x10c);
        *(undefined2 *)(iVar5 + 0x1d8a) = 0;
      }
      if (*(int *)(unaff_BP + -0x26) <= *(int *)(unaff_BP + -0x2a)) {
        iVar4 = *(int *)(*(int *)(unaff_BP + -0x90) * 2 + 0x1d6a);
        if (iVar4 == 0) {
          iVar4 = 0;
        }
        else if (iVar4 < 1) {
          iVar4 = -1;
        }
        else {
          iVar4 = 1;
        }
        *(int *)(unaff_BP + -0x10c) = iVar4;
        *(int *)(*(int *)(unaff_BP + -0x90) * 2 + 0x1d6a) = iVar4 << 3;
      }
      iVar4 = *(int *)(unaff_BP + -0x90) * 2;
      iVar4 = *(int *)(iVar4 + 0x1f8a) + *(int *)(iVar4 + 0x1d6a);
      if ((iVar4 < -0x13f) || (0x37f < iVar4)) {
        *(undefined2 *)(*(int *)(unaff_BP + -0x90) * 2 + 0x1fca) = 0;
      }
      if ((((*(int *)(*(int *)(unaff_BP + -0x90) * 2 + 0x1fca) != 0) &&
           (iVar4 = FUN_1000_efc8(), iVar4 % (*(int *)0x181e * -0x28 + 100) == 0)) &&
          (*(int *)(unaff_BP + -2) < 0x10)) &&
         ((iVar4 = *(int *)(unaff_BP + -0x90) * 2, 0 < *(int *)(iVar4 + 0x1f8a) &&
          (*(int *)(iVar4 + 0x1f8a) < 0x240)))) {
        *(undefined2 *)(unaff_BP + -0xb2) = 0;
        do {
          if (*(int *)(unaff_BP + *(int *)(unaff_BP + -0xb2) * 2 + -0x6c) < 0x21) {
            *(undefined2 *)(unaff_BP + -0xd6) = *(undefined2 *)(unaff_BP + -0xb2);
          }
          *(int *)(unaff_BP + -0xb2) = *(int *)(unaff_BP + -0xb2) + 1;
        } while (*(int *)(unaff_BP + -0xb2) < 0x10);
        iVar4 = *(int *)(unaff_BP + -0x90) * 2;
        iVar5 = *(int *)(unaff_BP + -0xd6) * 2;
        *(int *)(unaff_BP + iVar5 + -0x6c) = *(int *)(iVar4 + 0x1fca) + 0xc;
        iVar4 = *(int *)(iVar4 + 0x1f8a) + 0x18;
LAB_1000_0d5a:
        *(int *)(unaff_BP + iVar5 + -0x4a) = iVar4;
        *(int *)(unaff_BP + -2) = *(int *)(unaff_BP + -2) + 1;
      }
    }
    if (iVar4 == 2) {
      iVar4 = FUN_1000_efc8();
      if (((iVar4 % 0x28 == 0) &&
          (iVar4 = *(int *)(unaff_BP + -0x90) * 2, *(int *)(iVar4 + 0x1fca) == 0)) &&
         (*(int *)(unaff_BP + -0x2a) < *(int *)(unaff_BP + -0x26))) {
        iVar5 = FUN_1000_efc8();
        *(int *)(iVar4 + 0x1fca) = (iVar5 % 2 + 7) * 0x20;
        iVar5 = FUN_1000_efc8();
        iVar5 = (iVar5 % 2) * 0x4c0 + -0x140;
        *(int *)(iVar4 + 0x1f8a) = iVar5;
        if (iVar5 == 0x140) {
          uVar3 = 0;
        }
        else if (-*(int *)(iVar4 + 0x1f8a) == -0x140 || -*(int *)(iVar4 + 0x1f8a) + 0x140 < 0) {
          uVar3 = 0xffff;
        }
        else {
          uVar3 = 1;
        }
        *(undefined2 *)(unaff_BP + -0x10c) = uVar3;
        iVar4 = FUN_1000_efc8();
        iVar5 = *(int *)(unaff_BP + -0x90) * 2;
        *(int *)(iVar5 + 0x1d6a) = (iVar4 % 3 + 7) * *(int *)(unaff_BP + -0x10c);
        *(undefined2 *)(iVar5 + 0x1d8a) = 0;
      }
      iVar4 = *(int *)(unaff_BP + -0x90) * 2;
      iVar4 = *(int *)(iVar4 + 0x1f8a) + *(int *)(iVar4 + 0x1d6a);
      if ((iVar4 < -0x13f) || (0x37f < iVar4)) {
        *(undefined2 *)(*(int *)(unaff_BP + -0x90) * 2 + 0x1fca) = 0;
      }
      if (((*(int *)(*(int *)(unaff_BP + -0x90) * 2 + 0x1fca) != 0) &&
          (iVar4 = FUN_1000_efc8(), iVar4 % (((*(int *)0x181e * -2 + 5) - *(int *)0x20c6) * 10) == 0
          )) && ((*(int *)(unaff_BP + -0x24) < 8 &&
                 ((iVar4 = *(int *)(unaff_BP + -0x90) * 2, 0 < *(int *)(iVar4 + 0x1f8a) &&
                  (*(int *)(iVar4 + 0x1f8a) < 0x241)))))) {
        *(undefined2 *)(unaff_BP + -0xb2) = 0;
        do {
          if (*(int *)(unaff_BP + *(int *)(unaff_BP + -0xb2) * 2 + -0x8c) < -0xf) {
            *(undefined2 *)(unaff_BP + -0xd6) = *(undefined2 *)(unaff_BP + -0xb2);
          }
          *(int *)(unaff_BP + -0xb2) = *(int *)(unaff_BP + -0xb2) + 1;
        } while (*(int *)(unaff_BP + -0xb2) < 8);
        iVar4 = *(int *)(unaff_BP + -0x90) * 2;
        iVar5 = *(int *)(unaff_BP + -0xd6) * 2;
        *(int *)(unaff_BP + iVar5 + -0x8c) = *(int *)(iVar4 + 0x1fca) + 0xc;
        *(int *)(unaff_BP + iVar5 + -0x7c) = *(int *)(iVar4 + 0x1f8a) + 0x18;
        *(undefined2 *)(unaff_BP + iVar5 + -0xe8) = 0;
        *(int *)(unaff_BP + -0x24) = *(int *)(unaff_BP + -0x24) + 1;
        FUN_1000_cff4(2);
      }
      goto LAB_1000_0c9b;
    }
    if (iVar4 == 3) {
      iVar4 = FUN_1000_efc8();
      if (((iVar4 % (((3 - *(int *)0x181e) * 2 - *(int *)0x20c6) * 10) == 0) &&
          (iVar4 = *(int *)(unaff_BP + -0x90) * 2, *(int *)(iVar4 + 0x1fca) == 0)) &&
         (*(int *)(unaff_BP + -0x2a) < *(int *)(unaff_BP + -0x26))) {
        iVar5 = FUN_1000_efc8();
        *(int *)(iVar4 + 0x1fca) = (iVar5 % 2 + 2) * 0x20;
        iVar5 = FUN_1000_efc8();
        iVar5 = (iVar5 % 2) * 0x4e0 + -0x140;
        *(int *)(iVar4 + 0x1f8a) = iVar5;
        if (iVar5 == 0x140) {
          uVar3 = 0;
        }
        else if (-*(int *)(iVar4 + 0x1f8a) == -0x140 || -*(int *)(iVar4 + 0x1f8a) + 0x140 < 0) {
          uVar3 = 0xffff;
        }
        else {
          uVar3 = 1;
        }
        *(undefined2 *)(unaff_BP + -0x10c) = uVar3;
        iVar4 = FUN_1000_efc8();
        iVar5 = *(int *)(unaff_BP + -0x90) * 2;
        *(int *)(iVar5 + 0x1d6a) = (iVar4 % 4 + 0x10) * *(int *)(unaff_BP + -0x10c);
        *(undefined2 *)(iVar5 + 0x1d8a) = 0;
      }
      if (*(int *)(unaff_BP + -0x26) <= *(int *)(unaff_BP + -0x2a)) {
        iVar4 = *(int *)(*(int *)(unaff_BP + -0x90) * 2 + 0x1d6a);
        if (iVar4 == 0) {
          iVar4 = 0;
        }
        else if (iVar4 < 1) {
          iVar4 = -1;
        }
        else {
          iVar4 = 1;
        }
        *(int *)(unaff_BP + -0x10c) = iVar4;
        *(int *)(*(int *)(unaff_BP + -0x90) * 2 + 0x1d6a) = iVar4 << 3;
      }
      iVar4 = *(int *)(unaff_BP + -0x90) * 2;
      iVar4 = *(int *)(iVar4 + 0x1f8a) + *(int *)(iVar4 + 0x1d6a);
      if ((iVar4 < -0x13f) || (0x37f < iVar4)) {
        *(undefined2 *)(*(int *)(unaff_BP + -0x90) * 2 + 0x1fca) = 0;
      }
      if ((((*(int *)(*(int *)(unaff_BP + -0x90) * 2 + 0x1fca) != 0) &&
           (iVar4 = FUN_1000_efc8(), iVar4 % (((4 - *(int *)0x20c6) - *(int *)0x181e) * 5) == 0)) &&
          (*(int *)(unaff_BP + -2) < 0x10)) &&
         ((iVar4 = *(int *)(unaff_BP + -0x90) * 2, 0 < *(int *)(iVar4 + 0x1f8a) &&
          (*(int *)(iVar4 + 0x1f8a) < 0x240)))) {
        *(undefined2 *)(unaff_BP + -0xb2) = 0;
        do {
          if (*(int *)(unaff_BP + *(int *)(unaff_BP + -0xb2) * 2 + -0x6c) < 0x21) {
            *(undefined2 *)(unaff_BP + -0xd6) = *(undefined2 *)(unaff_BP + -0xb2);
          }
          *(int *)(unaff_BP + -0xb2) = *(int *)(unaff_BP + -0xb2) + 1;
        } while (*(int *)(unaff_BP + -0xb2) < 0x10);
        iVar4 = *(int *)(unaff_BP + -0x90) * 2;
        iVar5 = *(int *)(unaff_BP + -0xd6) * 2;
        *(int *)(unaff_BP + iVar5 + -0x6c) = *(int *)(iVar4 + 0x1fca) + 0x10;
        iVar4 = *(int *)(iVar4 + 0x1f8a) + 0x10;
        goto LAB_1000_0d5a;
      }
    }
    else if (iVar4 == 4) {
      iVar4 = FUN_1000_efc8();
      if (((iVar4 % 0x1e == 0) &&
          (iVar4 = *(int *)(unaff_BP + -0x90) * 2, *(int *)(iVar4 + 0x1fca) == 0)) &&
         (*(int *)(unaff_BP + -0x2a) < *(int *)(unaff_BP + -0x26))) {
        *(undefined2 *)(iVar4 + 0x1fca) = 0x120;
        iVar5 = FUN_1000_efc8();
        iVar5 = (iVar5 % 2) * 0x4c0 + -0x140;
        *(int *)(iVar4 + 0x1f8a) = iVar5;
        if (iVar5 == 0x140) {
          uVar3 = 0;
        }
        else if (-*(int *)(iVar4 + 0x1f8a) == -0x140 || -*(int *)(iVar4 + 0x1f8a) + 0x140 < 0) {
          uVar3 = 0xffff;
        }
        else {
          uVar3 = 1;
        }
        *(undefined2 *)(unaff_BP + -0x10c) = uVar3;
        iVar4 = FUN_1000_efc8();
        iVar5 = *(int *)(unaff_BP + -0x90) * 2;
        *(int *)(iVar5 + 0x1d6a) = (iVar4 % 4 + 5) * *(int *)(unaff_BP + -0x10c);
        *(undefined2 *)(iVar5 + 0x1d8a) = 0;
        *(undefined2 *)(iVar5 + 0x1822) = 0;
      }
      iVar4 = *(int *)(unaff_BP + -0x90) * 2;
      if ((*(int *)(iVar4 + 0x1d6a) == 0) && (*(int *)(iVar4 + 0x1822) < 4)) {
        *(int *)(iVar4 + 0x1822) = *(int *)(iVar4 + 0x1822) + 1;
      }
      iVar4 = *(int *)(unaff_BP + -0x90) * 2;
      if ((*(int *)(iVar4 + 0x1d6a) != 0) && (0 < *(int *)(iVar4 + 0x1822))) {
        *(int *)(iVar4 + 0x1822) = *(int *)(iVar4 + 0x1822) + -1;
      }
      iVar5 = *(int *)(unaff_BP + -0x90) * 2;
      iVar4 = *(int *)(iVar5 + 0x1f8a) + *(int *)(iVar5 + 0x1d6a);
      if (((0x1f < iVar4) && (iVar4 < 0x221)) &&
         (iVar4 = FUN_1000_efc8(), iVar4 % (((3 - *(int *)0x181e) * 2 - *(int *)0x20c6) * 10) == 0))
      {
        *(undefined2 *)(iVar5 + 0x1d6a) = 0;
      }
      iVar4 = *(int *)(unaff_BP + -0x90) * 2;
      iVar4 = *(int *)(iVar4 + 0x1f8a) + *(int *)(iVar4 + 0x1d6a);
      if ((iVar4 < -0x13f) || (0x37f < iVar4)) {
        *(undefined2 *)(*(int *)(unaff_BP + -0x90) * 2 + 0x1fca) = 0;
      }
      if (*(int *)(*(int *)(unaff_BP + -0x90) * 2 + 0x1fca) != 0) {
        iVar4 = *(int *)(unaff_BP + -0x90) * 2;
        if (((*(int *)(iVar4 + 0x1822) == 4) && (*(int *)(unaff_BP + -0x24) < 4)) &&
           ((0 < *(int *)(iVar4 + 0x1f8a) && (*(int *)(iVar4 + 0x1f8a) < 0x241)))) {
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
            iVar4 = *(int *)(unaff_BP + -0x90) * 2;
            iVar5 = *(int *)(unaff_BP + -0xd6) * 2;
            *(int *)(unaff_BP + iVar5 + -0x8c) = *(int *)(iVar4 + 0x1fca) + 8;
            *(int *)(unaff_BP + iVar5 + -0x7c) =
                 *(int *)(unaff_BP + -0x10a) * 0x10 + *(int *)(iVar4 + 0x1f8a);
            *(undefined2 *)(unaff_BP + iVar5 + -0xe8) = 0;
            *(int *)(unaff_BP + -0x10a) = *(int *)(unaff_BP + -0x10a) + 1;
          }
          *(int *)(unaff_BP + -0x24) = *(int *)(unaff_BP + -0x24) + 4;
          FUN_1000_cff4(2);
        }
        iVar4 = *(int *)(unaff_BP + -0x90) * 2;
        if (*(int *)(iVar4 + 0x1822) == 4) {
          if (*(int *)(iVar4 + 0x1f8a) == 0x140) {
            uVar3 = 0;
          }
          else if (-*(int *)(iVar4 + 0x1f8a) == -0x140 || -*(int *)(iVar4 + 0x1f8a) + 0x140 < 0) {
            uVar3 = 0xffff;
          }
          else {
            uVar3 = 1;
          }
          *(undefined2 *)(unaff_BP + -0x10c) = uVar3;
          iVar4 = FUN_1000_efc8();
          *(int *)(*(int *)(unaff_BP + -0x90) * 2 + 0x1d6a) =
               (iVar4 % 4 + 5) * *(int *)(unaff_BP + -0x10c);
        }
      }
    }
    else if (iVar4 == 9) {
      FUN_1000_1288();
      return;
    }
  } while( true );
}


