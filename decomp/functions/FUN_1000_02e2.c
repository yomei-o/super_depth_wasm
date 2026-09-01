/* 1000:02e2 */

void __cdecl16near FUN_1000_02e2(void)

{
  char *pcVar1;
  char *pcVar2;
  undefined2 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined2 *puVar7;
  char *pcVar8;
  char *pcVar9;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 local_88a [1027];
  undefined1 local_84 [5];
  char local_7f;
  char local_7e;
  undefined1 local_7d [2];
  undefined1 local_7b;
  char local_7a [8];
  char local_72;
  char local_71 [8];
  undefined1 local_69;
  undefined2 *local_4;
  
  *(undefined1 *)*(undefined2 *)0x1db0 = 0;
  pcVar8 = (char *)0x42;
  uVar4 = 0xffff;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar1 = pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (*pcVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar8 = pcVar8 + -uVar4;
  pcVar9 = (char *)0x20c8;
  iVar5 = -1;
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar1 = pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (*pcVar1 != '\0');
  pcVar9 = pcVar9 + -1;
  for (uVar6 = uVar4 >> 1; uVar6 != 0; uVar6 = uVar6 - 1) {
    pcVar2 = pcVar9;
    pcVar9 = pcVar9 + 2;
    pcVar1 = pcVar8;
    pcVar8 = pcVar8 + 2;
    *(undefined2 *)pcVar2 = *(undefined2 *)pcVar1;
  }
  for (uVar4 = (uint)((uVar4 & 1) != 0); uVar4 != 0; uVar4 = uVar4 - 1) {
    pcVar2 = pcVar9;
    pcVar9 = pcVar9 + 1;
    pcVar1 = pcVar8;
    pcVar8 = pcVar8 + 1;
    *pcVar2 = *pcVar1;
  }
  iVar5 = FUN_1000_e1ee(0x20c8,local_88a);
  if (iVar5 == -1) {
    FUN_1000_ee72(0x4c);
    FUN_1000_9fbc(0x32);
    puVar7 = (undefined2 *)0x1fea;
    do {
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[2] = *(undefined2 *)0x68;
      puVar7[3] = *(undefined2 *)0x6a;
      puVar7[4] = *(undefined2 *)0x6c;
      puVar7[5] = *(undefined2 *)0x6e;
      *(undefined1 *)(puVar7 + 6) = *(undefined1 *)0x70;
      *(undefined2 *)((int)puVar7 + 0xd) = *(undefined2 *)0x71;
      *(undefined2 *)((int)puVar7 + 0xf) = *(undefined2 *)0x73;
      *(undefined2 *)((int)puVar7 + 0x11) = *(undefined2 *)0x75;
      *(undefined2 *)((int)puVar7 + 0x13) = *(undefined2 *)0x77;
      *(undefined1 *)((int)puVar7 + 0x15) = *(undefined1 *)0x79;
      puVar7 = puVar7 + 0xb;
    } while (puVar7 < (undefined2 *)0x20c6);
    return;
  }
  local_4 = (undefined2 *)0x1fea;
  do {
    FUN_1000_e266(local_84,0x80,local_88a);
    if (((local_7f != '0') || (local_7e != ' ')) || (local_72 != ' ')) {
      FUN_1000_ee72(0x7a);
      FUN_1000_e8d2(local_88a[0]);
      *(undefined2 *)0x1842 = 0;
      return;
    }
    local_7f = '\0';
    local_7b = 0;
    local_72 = '\0';
    local_69 = 0;
    uVar3 = thunk_FUN_1000_f63e(local_84);
    *local_4 = uVar3;
    uVar3 = thunk_FUN_1000_f63e(local_7d);
    local_4[1] = uVar3;
    pcVar8 = local_7a;
    pcVar9 = (char *)(local_4 + 2);
    uVar4 = 0xffff;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar1 = pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (*pcVar1 != '\0');
    uVar4 = ~uVar4;
    pcVar8 = pcVar8 + -uVar4;
    for (uVar6 = uVar4 >> 1; uVar6 != 0; uVar6 = uVar6 - 1) {
      pcVar2 = pcVar9;
      pcVar9 = pcVar9 + 2;
      pcVar1 = pcVar8;
      pcVar8 = pcVar8 + 2;
      *(undefined2 *)pcVar2 = *(undefined2 *)pcVar1;
    }
    for (uVar4 = (uint)((uVar4 & 1) != 0); uVar4 != 0; uVar4 = uVar4 - 1) {
      pcVar2 = pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar1 = pcVar8;
      pcVar8 = pcVar8 + 1;
      *pcVar2 = *pcVar1;
    }
    pcVar8 = local_71;
    pcVar9 = (char *)((int)local_4 + 0xd);
    uVar4 = 0xffff;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar1 = pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (*pcVar1 != '\0');
    uVar4 = ~uVar4;
    pcVar8 = pcVar8 + -uVar4;
    for (uVar6 = uVar4 >> 1; uVar6 != 0; uVar6 = uVar6 - 1) {
      pcVar2 = pcVar9;
      pcVar9 = pcVar9 + 2;
      pcVar1 = pcVar8;
      pcVar8 = pcVar8 + 2;
      *(undefined2 *)pcVar2 = *(undefined2 *)pcVar1;
    }
    for (uVar4 = (uint)((uVar4 & 1) != 0); uVar4 != 0; uVar4 = uVar4 - 1) {
      pcVar2 = pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar1 = pcVar8;
      pcVar8 = pcVar8 + 1;
      *pcVar2 = *pcVar1;
    }
    local_4 = local_4 + 0xb;
    if ((undefined2 *)0x20c5 < local_4) {
      FUN_1000_e8d2(local_88a[0]);
      return;
    }
  } while( true );
}


