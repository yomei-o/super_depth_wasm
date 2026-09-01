/* 1000:04ba */

void __cdecl16near FUN_1000_04ba(void)

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
  pcVar6 = (char *)0xef;
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
  iVar4 = FUN_1000_bc6f(0x20c8);
  if (iVar4 != 0) {
    FUN_1000_ee72(0xf9);
    FUN_1000_ee72(0x119);
    FUN_1000_82c8();
    *(undefined2 *)0x1842 = 0;
  }
  FUN_1000_beea(0x11,0x1c,0x21,0x13e);
  out(0x62,0x6b);
  *(undefined1 *)*(undefined2 *)0x1db0 = 0;
  pcVar6 = (char *)0x14b;
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
  iVar4 = FUN_1000_c8e0(0x20c8,0);
  *(int *)0x1d42 = iVar4;
  if (iVar4 == -1) {
    FUN_1000_ee72(0x155);
    FUN_1000_ee72(0x175);
    FUN_1000_82c8();
    *(undefined2 *)0x1842 = 0;
  }
  *(undefined1 *)*(undefined2 *)0x1db0 = 0;
  pcVar6 = (char *)0x19a;
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
  iVar4 = FUN_1000_c8e0(0x20c8,0);
  *(int *)0x1d46 = iVar4;
  if (iVar4 == -1) {
    FUN_1000_ee72(0x1a4);
    FUN_1000_ee72(0x1c4);
    FUN_1000_82c8();
    *(undefined2 *)0x1842 = 0;
  }
  *(undefined1 *)*(undefined2 *)0x1db0 = 0;
  pcVar6 = (char *)0x1e9;
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
  iVar4 = FUN_1000_c8e0(0x20c8,0);
  *(int *)0x1dac = iVar4;
  if (iVar4 == -1) {
    FUN_1000_ee72(499);
    FUN_1000_ee72(0x213);
    FUN_1000_82c8();
    *(undefined2 *)0x1842 = 0;
  }
  *(undefined1 *)*(undefined2 *)0x1db0 = 0;
  pcVar6 = (char *)0x238;
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
  iVar4 = FUN_1000_c8e0(0x20c8,0);
  if (iVar4 == -1) {
    FUN_1000_ee72(0x242);
    FUN_1000_ee72(0x262);
    FUN_1000_82c8();
    *(undefined2 *)0x1842 = 0;
  }
  *(undefined1 *)*(undefined2 *)0x1db0 = 0;
  pcVar6 = (char *)0x287;
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
  iVar4 = FUN_1000_d2f8(0x20c8);
  if (iVar4 != 0) {
    FUN_1000_ee72(0x291);
    FUN_1000_82c8();
    *(undefined2 *)0x1842 = 0;
  }
  return;
}


