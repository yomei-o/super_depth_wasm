/* 1000:9d84 */

int __cdecl16near FUN_1000_9d84(void)

{
  int iVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  iVar1 = FUN_1000_efc8();
  iVar1 = *(int *)((iVar1 % 0x10) * 2 + 0x524);
  *(int *)0x1dc0 = iVar1;
  if (iVar1 == 6) {
    iVar1 = FUN_1000_efc8();
  }
  if (((*(int *)0x181e == 0) && (*(int *)0x20c6 == 0)) && (*(int *)0x1dc0 == 4)) {
    iVar2 = FUN_1000_efc8();
    iVar1 = iVar2 / 2;
    *(int *)0x1dc0 = (iVar2 % 2) * 2 + 3;
  }
  if (((*(int *)0x1dc0 == 3) || (*(int *)0x1dc0 == 5)) &&
     ((*(int *)0x181e == 1 && (*(int *)0x20c6 == 1)))) {
    *(undefined2 *)0x1dc0 = 4;
  }
  if ((*(int *)0x1dc0 == 3) && (*(int *)0x181e == 1)) {
    *(undefined2 *)0x1dc0 = 5;
  }
  if ((*(int *)0x1dc0 == 5) && (*(int *)0x20c6 == 1)) {
    *(undefined2 *)0x1dc0 = 3;
  }
  if ((2 < *(int *)0x1842) && (*(int *)0x1dc0 == 7)) {
    *(undefined2 *)0x1dc0 = 4;
  }
  if ((((*(int *)0x1d4a < 8) && (*(int *)0x1dc0 != 6)) && (*(int *)0x1dc0 != 3)) &&
     (*(int *)0x1dc0 != 5)) {
    *(undefined2 *)0x1dc0 = 1;
  }
  if ((*(int *)0x1d48 < 6) && (*(int *)0x1dc0 != 6)) {
    *(undefined2 *)0x1dc0 = 2;
  }
  if ((*(int *)0x1d4a < 6) && (*(int *)0x1dc0 != 6)) {
    *(undefined2 *)0x1dc0 = 1;
  }
  return iVar1;
}


