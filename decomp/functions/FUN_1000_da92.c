/* 1000:da92 */

undefined2 __cdecl16near FUN_1000_da92(void)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 unaff_DS;
  
  iVar3 = *(int *)0x18ae * 8;
  if (*(int *)*(undefined4 *)(iVar3 + 0x18b4) == 0) {
    uVar1 = *(undefined2 *)(iVar3 + 0x18ba);
    *(undefined2 *)(iVar3 + 0x18b4) = *(undefined2 *)(iVar3 + 0x18b8);
    *(undefined2 *)(iVar3 + 0x18b6) = uVar1;
    return 1;
  }
  puVar2 = (undefined2 *)*(undefined2 *)(iVar3 + 0x18b4);
  uVar1 = *(undefined2 *)(iVar3 + 0x18b6);
  *(int *)(iVar3 + 0x18b4) = *(int *)(iVar3 + 0x18b4) + 2;
  FUN_1000_daf2(*puVar2);
  return 0;
}


