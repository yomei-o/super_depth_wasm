/* 1000:8098 */

void __cdecl16near FUN_1000_8098(void)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 unaff_DS;
  
  iVar1 = 2;
  puVar2 = (undefined2 *)(*(int *)0x1818 * 0x20 + 0x34e);
  do {
    *(undefined2 *)(iVar1 + 0x1d4a) = 10;
    *(undefined2 *)(iVar1 + 0x1d6a) = 0;
    *(undefined2 *)(iVar1 + 0x1d8a) = 0;
    *(undefined2 *)(iVar1 + 0x1fca) = 0;
    if (*(int *)0x1816 != 1) {
      *(undefined2 *)(iVar1 + 0x1fca) = 0xffe0;
    }
    *(undefined2 *)(iVar1 + 0x1822) = 0;
    *(undefined2 *)(iVar1 + 0x17f6) = *puVar2;
    *(undefined2 *)(iVar1 + 0x1faa) = 10;
    puVar2 = puVar2 + 1;
    iVar1 = iVar1 + 2;
  } while (iVar1 < 0x1f);
  return;
}


