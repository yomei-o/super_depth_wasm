/* 1000:045a */

void __cdecl16near FUN_1000_045a(void)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  undefined2 unaff_DS;
  
  *(undefined1 *)*(undefined2 *)0x1db0 = 0;
  pcVar6 = (char *)0xa0;
  uVar3 = 0xffff;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar1 = pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (*pcVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar6 = pcVar6 + -uVar3;
  pcVar7 = (char *)0x20c8;
  iVar4 = -1;
  do {
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar1 = pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (*pcVar1 != '\0');
  pcVar7 = pcVar7 + -1;
  for (uVar5 = uVar3 >> 1; uVar5 != 0; uVar5 = uVar5 - 1) {
    pcVar2 = pcVar7;
    pcVar7 = pcVar7 + 2;
    pcVar1 = pcVar6;
    pcVar6 = pcVar6 + 2;
    *(undefined2 *)pcVar2 = *(undefined2 *)pcVar1;
  }
  for (uVar3 = (uint)((uVar3 & 1) != 0); uVar3 != 0; uVar3 = uVar3 - 1) {
    pcVar2 = pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar1 = pcVar6;
    pcVar6 = pcVar6 + 1;
    *pcVar2 = *pcVar1;
  }
  iVar4 = FUN_1000_d04e(0x20c8,0x78,0);
  if (iVar4 != 0) {
    FUN_1000_ee72(0xaa);
    FUN_1000_ee72(0xca);
    *(undefined2 *)0x1842 = 0;
  }
  return;
}


