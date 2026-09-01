/* 1000:c57a */

void FUN_1000_c57a(void)

{
  int *piVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  int unaff_BP;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  do {
    iVar4 = *(int *)(unaff_BP + -0x90) * 2;
    iVar3 = *(int *)(iVar4 + 0x1f8a) + *(int *)(iVar4 + 0x1d6a);
    if (((0x1f < iVar3) && (iVar3 < 0x221)) &&
       (iVar3 = FUN_1000_efc8(), iVar3 % (((3 - *(int *)0x181e) * 2 - *(int *)0x20c6) * 10) == 0)) {
      *(undefined2 *)(iVar4 + 0x1d6a) = 0;
    }
    iVar3 = *(int *)(unaff_BP + -0x90) * 2;
    iVar3 = *(int *)(iVar3 + 0x1f8a) + *(int *)(iVar3 + 0x1d6a);
    if ((iVar3 < -0x13f) || (0x37f < iVar3)) {
      *(undefined2 *)(*(int *)(unaff_BP + -0x90) * 2 + 0x1fca) = 0;
    }
    if (*(int *)(*(int *)(unaff_BP + -0x90) * 2 + 0x1fca) != 0) {
      iVar3 = *(int *)(unaff_BP + -0x90) * 2;
      if (((*(int *)(iVar3 + 0x1822) == 4) && (*(int *)(unaff_BP + -0x24) < 4)) &&
         ((0 < *(int *)(iVar3 + 0x1f8a) && (*(int *)(iVar3 + 0x1f8a) < 0x241)))) {
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
          iVar3 = *(int *)(unaff_BP + -0x90) * 2;
          iVar4 = *(int *)(unaff_BP + -0xd6) * 2;
          *(int *)(unaff_BP + iVar4 + -0x8c) = *(int *)(iVar3 + 0x1fca) + 8;
          *(int *)(unaff_BP + iVar4 + -0x7c) =
               *(int *)(unaff_BP + -0x10a) * 0x10 + *(int *)(iVar3 + 0x1f8a);
          *(undefined2 *)(unaff_BP + iVar4 + -0xe8) = 0;
          *(int *)(unaff_BP + -0x10a) = *(int *)(unaff_BP + -0x10a) + 1;
        }
        *(int *)(unaff_BP + -0x24) = *(int *)(unaff_BP + -0x24) + 4;
        FUN_1000_cff4(2);
      }
      iVar3 = *(int *)(unaff_BP + -0x90) * 2;
      if (*(int *)(iVar3 + 0x1822) == 4) {
        if (*(int *)(iVar3 + 0x1f8a) == 0x140) {
          uVar2 = 0;
        }
        else if (-*(int *)(iVar3 + 0x1f8a) == -0x140 || -*(int *)(iVar3 + 0x1f8a) + 0x140 < 0) {
          uVar2 = 0xffff;
        }
        else {
          uVar2 = 1;
        }
        *(undefined2 *)(unaff_BP + -0x10c) = uVar2;
        iVar3 = FUN_1000_efc8();
        *(int *)(*(int *)(unaff_BP + -0x90) * 2 + 0x1d6a) =
             (iVar3 % 4 + 5) * *(int *)(unaff_BP + -0x10c);
      }
    }
LAB_1000_0c9b:
    while( true ) {
      while( true ) {
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
            iVar3 = *(int *)(unaff_BP + -0x90) * 2;
            if (9 < *(int *)(iVar3 + 0x1faa)) break;
            piVar1 = (int *)(iVar3 + 0x1faa);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              *(undefined2 *)(iVar3 + 0x1fca) = 0;
              *(undefined2 *)(iVar3 + 0x1d8a) = 0;
              *(undefined2 *)(iVar3 + 0x1faa) = 10;
            }
          }
          iVar3 = *(int *)(*(int *)(unaff_BP + -0x90) * 2 + 0x17f6);
          if (iVar3 == 1) goto LAB_1000_0ba0;
          if (iVar3 != 2) break;
          iVar3 = FUN_1000_efc8();
          if (((iVar3 % 0x28 == 0) &&
              (iVar3 = *(int *)(unaff_BP + -0x90) * 2, *(int *)(iVar3 + 0x1fca) == 0)) &&
             (*(int *)(unaff_BP + -0x2a) < *(int *)(unaff_BP + -0x26))) {
            iVar4 = FUN_1000_efc8();
            *(int *)(iVar3 + 0x1fca) = (iVar4 % 2 + 7) * 0x20;
            iVar4 = FUN_1000_efc8();
            iVar4 = (iVar4 % 2) * 0x4c0 + -0x140;
            *(int *)(iVar3 + 0x1f8a) = iVar4;
            if (iVar4 == 0x140) {
              uVar2 = 0;
            }
            else if (-*(int *)(iVar3 + 0x1f8a) == -0x140 || -*(int *)(iVar3 + 0x1f8a) + 0x140 < 0) {
              uVar2 = 0xffff;
            }
            else {
              uVar2 = 1;
            }
            *(undefined2 *)(unaff_BP + -0x10c) = uVar2;
            iVar3 = FUN_1000_efc8();
            iVar4 = *(int *)(unaff_BP + -0x90) * 2;
            *(int *)(iVar4 + 0x1d6a) = (iVar3 % 3 + 7) * *(int *)(unaff_BP + -0x10c);
            *(undefined2 *)(iVar4 + 0x1d8a) = 0;
          }
          iVar3 = *(int *)(unaff_BP + -0x90) * 2;
          iVar3 = *(int *)(iVar3 + 0x1f8a) + *(int *)(iVar3 + 0x1d6a);
          if ((iVar3 < -0x13f) || (0x37f < iVar3)) {
            *(undefined2 *)(*(int *)(unaff_BP + -0x90) * 2 + 0x1fca) = 0;
          }
          if (((*(int *)(*(int *)(unaff_BP + -0x90) * 2 + 0x1fca) != 0) &&
              (iVar3 = FUN_1000_efc8(),
              iVar3 % (((*(int *)0x181e * -2 + 5) - *(int *)0x20c6) * 10) == 0)) &&
             ((*(int *)(unaff_BP + -0x24) < 8 &&
              ((iVar3 = *(int *)(unaff_BP + -0x90) * 2, 0 < *(int *)(iVar3 + 0x1f8a) &&
               (*(int *)(iVar3 + 0x1f8a) < 0x241)))))) {
            *(undefined2 *)(unaff_BP + -0xb2) = 0;
            do {
              if (*(int *)(unaff_BP + *(int *)(unaff_BP + -0xb2) * 2 + -0x8c) < -0xf) {
                *(undefined2 *)(unaff_BP + -0xd6) = *(undefined2 *)(unaff_BP + -0xb2);
              }
              *(int *)(unaff_BP + -0xb2) = *(int *)(unaff_BP + -0xb2) + 1;
            } while (*(int *)(unaff_BP + -0xb2) < 8);
            iVar3 = *(int *)(unaff_BP + -0x90) * 2;
            iVar4 = *(int *)(unaff_BP + -0xd6) * 2;
            *(int *)(unaff_BP + iVar4 + -0x8c) = *(int *)(iVar3 + 0x1fca) + 0xc;
            *(int *)(unaff_BP + iVar4 + -0x7c) = *(int *)(iVar3 + 0x1f8a) + 0x18;
            *(undefined2 *)(unaff_BP + iVar4 + -0xe8) = 0;
            *(int *)(unaff_BP + -0x24) = *(int *)(unaff_BP + -0x24) + 1;
            FUN_1000_cff4(2);
          }
        }
        if (iVar3 != 3) break;
        iVar3 = FUN_1000_efc8();
        if (((iVar3 % (((3 - *(int *)0x181e) * 2 - *(int *)0x20c6) * 10) == 0) &&
            (iVar3 = *(int *)(unaff_BP + -0x90) * 2, *(int *)(iVar3 + 0x1fca) == 0)) &&
           (*(int *)(unaff_BP + -0x2a) < *(int *)(unaff_BP + -0x26))) {
          iVar4 = FUN_1000_efc8();
          *(int *)(iVar3 + 0x1fca) = (iVar4 % 2 + 2) * 0x20;
          iVar4 = FUN_1000_efc8();
          iVar4 = (iVar4 % 2) * 0x4e0 + -0x140;
          *(int *)(iVar3 + 0x1f8a) = iVar4;
          if (iVar4 == 0x140) {
            uVar2 = 0;
          }
          else if (-*(int *)(iVar3 + 0x1f8a) == -0x140 || -*(int *)(iVar3 + 0x1f8a) + 0x140 < 0) {
            uVar2 = 0xffff;
          }
          else {
            uVar2 = 1;
          }
          *(undefined2 *)(unaff_BP + -0x10c) = uVar2;
          iVar3 = FUN_1000_efc8();
          iVar4 = *(int *)(unaff_BP + -0x90) * 2;
          *(int *)(iVar4 + 0x1d6a) = (iVar3 % 4 + 0x10) * *(int *)(unaff_BP + -0x10c);
          *(undefined2 *)(iVar4 + 0x1d8a) = 0;
        }
        if (*(int *)(unaff_BP + -0x26) <= *(int *)(unaff_BP + -0x2a)) {
          iVar3 = *(int *)(*(int *)(unaff_BP + -0x90) * 2 + 0x1d6a);
          if (iVar3 == 0) {
            iVar3 = 0;
          }
          else if (iVar3 < 1) {
            iVar3 = -1;
          }
          else {
            iVar3 = 1;
          }
          *(int *)(unaff_BP + -0x10c) = iVar3;
          *(int *)(*(int *)(unaff_BP + -0x90) * 2 + 0x1d6a) = iVar3 << 3;
        }
        iVar3 = *(int *)(unaff_BP + -0x90) * 2;
        iVar3 = *(int *)(iVar3 + 0x1f8a) + *(int *)(iVar3 + 0x1d6a);
        if ((iVar3 < -0x13f) || (0x37f < iVar3)) {
          *(undefined2 *)(*(int *)(unaff_BP + -0x90) * 2 + 0x1fca) = 0;
        }
        if (((*(int *)(*(int *)(unaff_BP + -0x90) * 2 + 0x1fca) != 0) &&
            (iVar3 = FUN_1000_efc8(), iVar3 % (((4 - *(int *)0x20c6) - *(int *)0x181e) * 5) == 0))
           && ((*(int *)(unaff_BP + -2) < 0x10 &&
               ((iVar3 = *(int *)(unaff_BP + -0x90) * 2, 0 < *(int *)(iVar3 + 0x1f8a) &&
                (*(int *)(iVar3 + 0x1f8a) < 0x240)))))) {
          *(undefined2 *)(unaff_BP + -0xb2) = 0;
          do {
            if (*(int *)(unaff_BP + *(int *)(unaff_BP + -0xb2) * 2 + -0x6c) < 0x21) {
              *(undefined2 *)(unaff_BP + -0xd6) = *(undefined2 *)(unaff_BP + -0xb2);
            }
            *(int *)(unaff_BP + -0xb2) = *(int *)(unaff_BP + -0xb2) + 1;
          } while (*(int *)(unaff_BP + -0xb2) < 0x10);
          iVar3 = *(int *)(unaff_BP + -0x90) * 2;
          iVar4 = *(int *)(unaff_BP + -0xd6) * 2;
          *(int *)(unaff_BP + iVar4 + -0x6c) = *(int *)(iVar3 + 0x1fca) + 0x10;
          iVar3 = *(int *)(iVar3 + 0x1f8a) + 0x10;
          goto LAB_1000_0d5a;
        }
      }
      if (iVar3 == 4) break;
      if (iVar3 == 9) {
        FUN_1000_1288();
        return;
      }
    }
    iVar3 = FUN_1000_efc8();
    if (((iVar3 % 0x1e == 0) &&
        (iVar3 = *(int *)(unaff_BP + -0x90) * 2, *(int *)(iVar3 + 0x1fca) == 0)) &&
       (*(int *)(unaff_BP + -0x2a) < *(int *)(unaff_BP + -0x26))) {
      *(undefined2 *)(iVar3 + 0x1fca) = 0x120;
      iVar4 = FUN_1000_efc8();
      iVar4 = (iVar4 % 2) * 0x4c0 + -0x140;
      *(int *)(iVar3 + 0x1f8a) = iVar4;
      if (iVar4 == 0x140) {
        uVar2 = 0;
      }
      else if (-*(int *)(iVar3 + 0x1f8a) == -0x140 || -*(int *)(iVar3 + 0x1f8a) + 0x140 < 0) {
        uVar2 = 0xffff;
      }
      else {
        uVar2 = 1;
      }
      *(undefined2 *)(unaff_BP + -0x10c) = uVar2;
      iVar3 = FUN_1000_efc8();
      iVar4 = *(int *)(unaff_BP + -0x90) * 2;
      *(int *)(iVar4 + 0x1d6a) = (iVar3 % 4 + 5) * *(int *)(unaff_BP + -0x10c);
      *(undefined2 *)(iVar4 + 0x1d8a) = 0;
      *(undefined2 *)(iVar4 + 0x1822) = 0;
    }
    iVar3 = *(int *)(unaff_BP + -0x90) * 2;
    if ((*(int *)(iVar3 + 0x1d6a) == 0) && (*(int *)(iVar3 + 0x1822) < 4)) {
      *(int *)(iVar3 + 0x1822) = *(int *)(iVar3 + 0x1822) + 1;
    }
    iVar3 = *(int *)(unaff_BP + -0x90) * 2;
    if ((*(int *)(iVar3 + 0x1d6a) != 0) && (0 < *(int *)(iVar3 + 0x1822))) {
      *(int *)(iVar3 + 0x1822) = *(int *)(iVar3 + 0x1822) + -1;
    }
  } while( true );
LAB_1000_0ba0:
  iVar3 = FUN_1000_efc8();
  if (((iVar3 % 0xf == 0) && (iVar3 = *(int *)(unaff_BP + -0x90) * 2, *(int *)(iVar3 + 0x1fca) == 0)
      ) && (*(int *)(unaff_BP + -0x2a) < *(int *)(unaff_BP + -0x26))) {
    iVar4 = FUN_1000_efc8();
    *(int *)(iVar3 + 0x1fca) = (iVar4 % 7 + 2) * 0x20;
    iVar4 = FUN_1000_efc8();
    iVar4 = (iVar4 % 2) * 0x4c0 + -0x140;
    *(int *)(iVar3 + 0x1f8a) = iVar4;
    if (iVar4 == 0x140) {
      uVar2 = 0;
    }
    else if (-*(int *)(iVar3 + 0x1f8a) == -0x140 || -*(int *)(iVar3 + 0x1f8a) + 0x140 < 0) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = 1;
    }
    *(undefined2 *)(unaff_BP + -0x10c) = uVar2;
    iVar3 = FUN_1000_efc8();
    iVar4 = *(int *)(unaff_BP + -0x90) * 2;
    *(int *)(iVar4 + 0x1d6a) = (iVar3 % 4 + 2) * *(int *)(unaff_BP + -0x10c);
    *(undefined2 *)(iVar4 + 0x1d8a) = 0;
  }
  if (*(int *)(unaff_BP + -0x26) <= *(int *)(unaff_BP + -0x2a)) {
    iVar3 = *(int *)(*(int *)(unaff_BP + -0x90) * 2 + 0x1d6a);
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else if (iVar3 < 1) {
      iVar3 = -1;
    }
    else {
      iVar3 = 1;
    }
    *(int *)(unaff_BP + -0x10c) = iVar3;
    *(int *)(*(int *)(unaff_BP + -0x90) * 2 + 0x1d6a) = iVar3 << 3;
  }
  iVar3 = *(int *)(unaff_BP + -0x90) * 2;
  iVar3 = *(int *)(iVar3 + 0x1f8a) + *(int *)(iVar3 + 0x1d6a);
  if ((iVar3 < -0x13f) || (0x37f < iVar3)) {
    *(undefined2 *)(*(int *)(unaff_BP + -0x90) * 2 + 0x1fca) = 0;
  }
  if (((*(int *)(*(int *)(unaff_BP + -0x90) * 2 + 0x1fca) != 0) &&
      (iVar3 = FUN_1000_efc8(), iVar3 % (*(int *)0x181e * -0x28 + 100) == 0)) &&
     ((*(int *)(unaff_BP + -2) < 0x10 &&
      ((iVar3 = *(int *)(unaff_BP + -0x90) * 2, 0 < *(int *)(iVar3 + 0x1f8a) &&
       (*(int *)(iVar3 + 0x1f8a) < 0x240)))))) {
    *(undefined2 *)(unaff_BP + -0xb2) = 0;
    do {
      if (*(int *)(unaff_BP + *(int *)(unaff_BP + -0xb2) * 2 + -0x6c) < 0x21) {
        *(undefined2 *)(unaff_BP + -0xd6) = *(undefined2 *)(unaff_BP + -0xb2);
      }
      *(int *)(unaff_BP + -0xb2) = *(int *)(unaff_BP + -0xb2) + 1;
    } while (*(int *)(unaff_BP + -0xb2) < 0x10);
    iVar3 = *(int *)(unaff_BP + -0x90) * 2;
    iVar4 = *(int *)(unaff_BP + -0xd6) * 2;
    *(int *)(unaff_BP + iVar4 + -0x6c) = *(int *)(iVar3 + 0x1fca) + 0xc;
    iVar3 = *(int *)(iVar3 + 0x1f8a) + 0x18;
LAB_1000_0d5a:
    *(int *)(unaff_BP + iVar4 + -0x4a) = iVar3;
    *(int *)(unaff_BP + -2) = *(int *)(unaff_BP + -2) + 1;
  }
  goto LAB_1000_0c9b;
}


