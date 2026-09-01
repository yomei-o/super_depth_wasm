/* 1000:80f0 */

void __cdecl16near FUN_1000_80f0(void)

{
  int iVar1;
  undefined2 unaff_DS;
  
  iVar1 = *(int *)0x1dc0;
  if (iVar1 == 1) {
    if (*(int *)0x1d4a < 0x10) {
      *(int *)0x1d4a = *(int *)0x1d4a + 2;
      return;
    }
  }
  else if (iVar1 == 2) {
    *(int *)0x1d48 = *(int *)0x1d48 + (uint)(*(int *)0x1816 != 1) * *(int *)0x20c6 + 2;
    if (0x10 < *(int *)0x1d48) {
      *(undefined2 *)0x1d48 = 0x10;
      return;
    }
  }
  else {
    if (iVar1 == 3) {
      *(undefined2 *)0x181e = 1;
      return;
    }
    if (iVar1 == 5) {
      *(undefined2 *)0x20c6 = 1;
      if ((*(int *)0x1d48 < 0xf) && (*(int *)0x1816 != 1)) {
        *(int *)0x1d48 = *(int *)0x1d48 + 2;
        return;
      }
    }
    else {
      if (iVar1 == 6) {
        *(undefined2 *)0x20c6 = 1;
        *(undefined2 *)0x181e = 1;
        *(undefined2 *)0x1d48 = 0x10;
        *(undefined2 *)0x1d4a = 10;
        return;
      }
      if (iVar1 == 7) {
        *(int *)0x1842 = *(int *)0x1842 + 1;
        *(int *)0x1510 = *(int *)0x1510 + 1;
      }
    }
  }
  return;
}


