/* 1000:d48e */

void __cdecl16near FUN_1000_d48e(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined2 unaff_DS;
  
  puVar2 = (undefined4 *)0x17b6;
  do {
    iVar1 = 0;
    if (0 < *(int *)0x1860) {
      do {
        *(undefined1 *)(iVar1 + (int)*puVar2) = 0;
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)0x1860);
    }
    puVar2 = (undefined4 *)((int)puVar2 + 0x16);
  } while (puVar2 < (undefined4 *)0x17f8);
  return;
}


