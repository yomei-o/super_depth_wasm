/* Ghidra decompilation of DEPTH.EXE - machine output, not the original source. */

/* 1000:0010  FUN_1000_0010  1 bytes, 1 callers */

void __cdecl16near FUN_1000_0010(void)

{
  return;
}



/* 1000:0011  FUN_1000_0011  674 bytes, 1 callers */

void __cdecl16near FUN_1000_0011(int param_1,int *param_2)

{
  char *pcVar1;
  char *pcVar2;
  bool bVar3;
  uint uVar4;
  undefined2 uVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  undefined2 unaff_DS;
  int local_6;
  
  bVar3 = false;
  FUN_1000_8960();
  iVar7 = 2;
  for (local_6 = 1; local_6 < param_1; local_6 = local_6 + 1) {
    FUN_1000_ef98(*(undefined2 *)((int)param_2 + iVar7));
    uVar4 = thunk_FUN_1000_f63e(*(int *)((int)param_2 + iVar7) + 2);
    pcVar8 = (char *)*(undefined2 *)((int)param_2 + iVar7);
    if ((*pcVar8 == '-') || (*pcVar8 == '/')) {
      switch(pcVar8[1]) {
      case 'B':
        if (bVar3) {
          *(undefined2 *)0x181a = 1;
        }
        break;
      case 'E':
        if ((bVar3) && (*(uint *)0x17f4 = uVar4, 0xf < (int)uVar4)) {
          *(undefined2 *)0x17f4 = 0xf;
        }
        break;
      case 'G':
        *(undefined2 *)0x1848 = 1;
        break;
      case 'H':
        if ((bVar3) && (*(uint *)0x212e = uVar4, (int)uVar4 < 0)) {
          *(undefined2 *)0x212e = 1;
        }
        break;
      case 'P':
        if (uVar4 == 0x32a) {
          bVar3 = true;
        }
        break;
      case 'S':
        if ((bVar3) && (*(uint *)0x2150 = uVar4, (int)uVar4 < 0)) {
          *(undefined2 *)0x2150 = 1;
        }
        break;
      case 'W':
        if ((bVar3) && (*(uint *)0x1820 = uVar4, 9 < uVar4)) {
          *(undefined2 *)0x1820 = 9;
        }
        break;
      case 'X':
        *(undefined2 *)0x212c = 1;
      }
    }
    iVar7 = iVar7 + 2;
  }
  uVar5 = FUN_1000_ef6c(*param_2,0x5c);
  *(undefined2 *)0x1db0 = uVar5;
  uVar5 = FUN_1000_ef6c(*param_2,0x2f);
  *(undefined2 *)0x1daa = uVar5;
  if (*(uint *)0x1db0 < *(uint *)0x1daa) {
    *(undefined2 *)0x1db0 = *(undefined2 *)0x1daa;
  }
  *(int *)0x1db0 = *(int *)0x1db0 + (0x20c9 - *param_2);
  pcVar8 = (char *)*param_2;
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
  FUN_1000_8a12();
  *(undefined2 *)0x1842 = 3;
  FUN_1000_045a();
  FUN_1000_02e2();
  if (*(int *)0x1842 != 3) {
    FUN_1000_9ff0(1000);
    FUN_1000_8a98();
    FUN_1000_e802(1);
  }
  out(0x62,0xc);
  FUN_1000_cf6a(1);
  FUN_1000_cf44();
  FUN_1000_d03e();
  FUN_1000_dbb2();
  FUN_1000_04ba();
  if (*(int *)0x1842 != 3) {
    FUN_1000_8493();
    FUN_1000_9ff0(1000);
    FUN_1000_8a98();
    FUN_1000_e802(1);
  }
  do {
    uVar4 = FUN_1000_bb38();
  } while (uVar4 < 0x14);
  FUN_1000_ba8c(0xd,0,0,0);
  out(0x62,0xc);
  FUN_1000_af50(0xd,0x12);
  FUN_1000_8493();
  FUN_1000_deeb();
  FUN_1000_82c8();
  out(0x62,0x6b);
  do {
    while( true ) {
      FUN_1000_8ae2();
      if (*(int *)0x184c == 0) goto LAB_1000_0236;
      if (*(int *)0x184c == 2) break;
      *(undefined2 *)0x1842 = *(undefined2 *)0x212e;
      iVar7 = *(int *)0x2150;
      *(int *)0x1dae = iVar7;
      *(int *)0x1818 = iVar7;
      *(undefined2 *)0x1db6 = 0;
      if (1 < iVar7) {
        FUN_1000_c762();
      }
      while (0 < *(int *)0x1842) {
        *(undefined2 *)0x1510 = *(undefined2 *)0x1842;
        *(undefined2 *)0x1816 = *(undefined2 *)0x1818;
        while (4 < *(int *)0x1816) {
          *(int *)0x1816 = *(int *)0x1816 + -4;
        }
        iVar7 = *(int *)0x1816;
        if (iVar7 == 1) {
          FUN_1000_06f6();
        }
        else if (iVar7 == 2) {
          FUN_1000_1fdc();
        }
        else if (iVar7 == 3) {
          FUN_1000_383a();
        }
        else if (iVar7 == 4) {
          FUN_1000_5818();
        }
        *(undefined2 *)0x1dae = *(undefined2 *)0x1818;
        if (*(int *)0x1510 <= *(int *)0x1842) {
          *(int *)0x1818 = *(int *)0x1818 + 1;
        }
        if (0xc < *(int *)0x1818) {
          *(undefined2 *)0x1818 = 1;
        }
      }
      if (*(int *)0x184c == 0) goto LAB_1000_0236;
      FUN_1000_aa92();
    }
    FUN_1000_aa44();
  } while (*(int *)0x184c != 0);
LAB_1000_0236:
  FUN_1000_8a98();
  while (iVar7 = FUN_1000_bf8e(), iVar7 != 0) {
    FUN_1000_bf98();
  }
  return;
}



/* 1000:02e2  FUN_1000_02e2  374 bytes, 1 callers */

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



/* 1000:045a  FUN_1000_045a  96 bytes, 1 callers */

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



/* 1000:04ba  FUN_1000_04ba  571 bytes, 1 callers */

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



/* 1000:06f6  FUN_1000_06f6  2586 bytes, 1 callers */

void FUN_1000_06f6(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  int iStack_10c;
  int aiStack_10a [16];
  undefined2 auStack_ea [8];
  int local_da;
  int local_d8;
  int local_d6;
  int aiStack_d4 [16];
  int local_b4;
  int aiStack_b2 [16];
  int local_92;
  int local_90;
  int aiStack_8e [8];
  int aiStack_7e [8];
  int aiStack_6e [16];
  undefined2 local_4e;
  int aiStack_4c [16];
  int local_2c;
  int local_2a;
  int local_28;
  int local_26;
  int aiStack_24 [16];
  int local_4;
  
  FUN_1000_8098();
  local_92 = 0;
  do {
    iVar2 = local_92;
    aiStack_10a[local_92] = 0x130;
    aiStack_24[iVar2] = 0;
    local_92 = local_92 + 1;
  } while (local_92 < 0x10);
  local_92 = 0;
  do {
    aiStack_6e[local_92] = 0x20;
    local_92 = local_92 + 1;
  } while (local_92 < 0x10);
  local_92 = 0;
  do {
    aiStack_8e[local_92] = -0x10;
    auStack_ea[local_92] = 0;
    local_92 = local_92 + 1;
  } while (local_92 < 8);
  *(undefined2 *)0x1f8a = 0x120;
  *(undefined2 *)0x1fca = 0x10;
  *(undefined2 *)0x1db4 = 0;
  *(undefined2 *)0x1db2 = 0;
  *(undefined2 *)0x1d40 = 0;
  *(undefined2 *)0x193e = 0;
  *(undefined2 *)0x1dc0 = 0;
  local_26 = 0;
  local_4 = 0;
  local_90 = 0;
  *(undefined2 *)0x17f6 = 0;
  *(undefined2 *)0x193c = 0;
  *(undefined2 *)0x184a = 0;
  *(undefined2 *)0x1846 = 0;
  *(undefined2 *)0x1844 = 0;
  local_2a = 0;
  local_2c = 0;
  local_4e = 0;
  FUN_1000_bfa2(0x2b2);
  FUN_1000_c762();
  FUN_1000_82c8();
  out(0xa6,1);
  FUN_1000_b854(4,0,0x4b,0x28,5);
  out(0xa6,0);
  FUN_1000_b854(4,0,0x4b,0x28,5);
  FUN_1000_bfd6(*(undefined2 *)0x1f8a,*(undefined2 *)0x1fca,0);
  local_d6 = 1;
  FUN_1000_bfd6(*(int *)0x1f8a + 0x20,*(undefined2 *)0x1fca,1);
  if (*(int *)0x1818 == *(int *)0x1dae) {
    *(undefined2 *)0x1d48 = 4;
    *(undefined2 *)0x181e = 0;
  }
  local_b4 = (0x28 - *(int *)0x1d48) * 8;
  for (local_92 = 0; local_92 < *(int *)0x1d48; local_92 = local_92 + 1) {
    FUN_1000_bfd6(local_b4,6,*(int *)0x181e * 3 + *(int *)0x1d42);
    local_b4 = local_b4 + 0x10;
  }
  out(0xa4,1);
  for (local_b4 = 0; local_b4 < 2; local_b4 = local_b4 + 1) {
    for (local_92 = 0; local_92 < 0x28; local_92 = local_92 + 1) {
      out(0xa6,(char)local_b4);
      iVar2 = local_92 << 4;
      FUN_1000_c25e(iVar2,0x150,(-(uint)(1 < *(int *)0x1818) & 2) + *(int *)0x1d42 + 0x41);
      FUN_1000_c25e(iVar2,0x140,(-(uint)(1 < *(int *)0x1818) & 2) + *(int *)0x1d42 + 0x40);
      FUN_1000_8292();
    }
  }
  *(undefined2 *)0x1844 = 1;
  FUN_1000_cf6a(3);
  FUN_1000_cf44();
  FUN_1000_d046();
  if (*(int *)0x1818 == *(int *)0x1dae) {
    *(undefined2 *)0x1d4a = 4;
    *(undefined2 *)0x1d48 = 4;
    *(undefined2 *)0x181e = 0;
    *(undefined2 *)0x20c6 = 0;
    FUN_1000_a2ca();
    *(undefined2 *)0x1faa = 10;
    FUN_1000_82d7(0x2b8);
    FUN_1000_a072();
  }
  else {
    FUN_1000_a2ca();
    *(undefined2 *)0x1faa = 10;
    FUN_1000_82d7(0x2b8);
    FUN_1000_a196();
  }
  uVar4 = (int)*(uint *)0x1818 >> 0xf;
  local_28 = ((*(uint *)0x181e & *(uint *)0x20c6) * 2 +
              (((int)((*(uint *)0x1818 ^ uVar4) - uVar4) >> 2 ^ uVar4) - uVar4) + 3) * 5;
  *(undefined2 *)0xdd0 = 0;
  FUN_1000_8184();
  local_da = FUN_1000_e3c8(0x2130);
  if (((local_da != 0) || (*(int *)0x213e != 0)) && (FUN_1000_9e70(), *(int *)0x184c == 0)) {
    FUN_1000_1faa();
    return;
  }
  *(undefined2 *)0x1d6a = 0;
  if (*(int *)0x1faa < 10) {
    iVar2 = *(int *)0x1faa;
    *(int *)0x1faa = *(int *)0x1faa + -1;
    if (iVar2 < 1) {
      local_4e = 1;
      *(int *)0x1842 = *(int *)0x1842 + -1;
      FUN_1000_1faa(iVar2);
      return;
    }
  }
  else {
    if ((*(int *)0x2136 != 0) && (*(int *)0x1d4a + *(int *)0x1f8a < 0x210)) {
      *(undefined2 *)0x1d6a = *(undefined2 *)0x1d4a;
    }
    if ((*(int *)0x2134 != 0) && (0x2f < *(int *)0x1f8a - *(int *)0x1d4a)) {
      *(int *)0x1d6a = -*(int *)0x1d4a;
    }
    if ((((*(int *)0x2138 != 0) && (*(int *)0x212c == 0)) ||
        ((*(int *)0x213a != 0 && (*(int *)0x212c != 0)))) &&
       ((local_90 < *(int *)0x1d48 && (local_d6 != 0)))) {
      for (local_92 = 0; local_92 < *(int *)0x1d48; local_92 = local_92 + 1) {
        if (0x12f < aiStack_10a[local_92]) {
          local_b4 = local_92;
          break;
        }
      }
      iVar3 = local_b4;
      aiStack_10a[local_b4] = *(int *)0x1fca;
      iVar2 = *(int *)0x1f8a;
      aiStack_d4[iVar3] = iVar2 + -0x10;
      aiStack_b2[iVar3] = iVar2 + -0x10;
      aiStack_24[iVar3] = *(int *)0x20c6 * -7;
      local_90 = local_90 + 1;
      local_d6 = 0;
      FUN_1000_cff4(1);
    }
    if ((((*(int *)0x213a != 0) && (*(int *)0x212c == 0)) ||
        ((*(int *)0x2138 != 0 && (*(int *)0x212c != 0)))) &&
       ((local_90 < *(int *)0x1d48 && (local_d6 != 0)))) {
      for (local_92 = 0; local_92 < *(int *)0x1d48; local_92 = local_92 + 1) {
        if (0x12f < aiStack_10a[local_92]) {
          local_b4 = local_92;
          break;
        }
      }
      iVar3 = local_b4;
      aiStack_10a[local_b4] = *(int *)0x1fca;
      iVar2 = *(int *)0x1f8a;
      aiStack_d4[iVar3] = iVar2 + 0x40;
      aiStack_b2[iVar3] = iVar2 + 0x40;
      aiStack_24[iVar3] = *(int *)0x20c6 * 7;
      local_90 = local_90 + 1;
      local_d6 = 0;
      FUN_1000_cff4(1);
    }
    if ((*(int *)0x2138 == 0) && (*(int *)0x213a == 0)) {
      local_d6 = 1;
    }
  }
  local_2a = 0;
  local_92 = 1;
  do {
    if (*(int *)0x17f4 < local_92) {
      FUN_1000_13e0();
      return;
    }
    if (*(int *)(local_92 * 2 + 0x1fca) != 0) {
      local_2a = local_2a + 1;
    }
    iVar2 = local_92 * 2;
    if (*(int *)(iVar2 + 0x1faa) < 10) {
      piVar1 = (int *)(iVar2 + 0x1faa);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        *(undefined2 *)(iVar2 + 0x1fca) = 0;
        *(undefined2 *)(iVar2 + 0x1d8a) = 0;
        *(undefined2 *)(iVar2 + 0x1faa) = 10;
      }
    }
    else {
      iVar2 = *(int *)(local_92 * 2 + 0x17f6);
      if (iVar2 == 1) {
        iVar2 = FUN_1000_efc8();
        if (((iVar2 % 0xf == 0) && (iVar2 = local_92 * 2, *(int *)(iVar2 + 0x1fca) == 0)) &&
           (local_2c < local_28)) {
          iVar3 = FUN_1000_efc8();
          *(int *)(iVar2 + 0x1fca) = (iVar3 % 7 + 2) * 0x20;
          iVar3 = FUN_1000_efc8();
          iVar3 = (iVar3 % 2) * 0x4c0 + -0x140;
          *(int *)(iVar2 + 0x1f8a) = iVar3;
          if (iVar3 == 0x140) {
            iVar2 = 0;
          }
          else if (-*(int *)(iVar2 + 0x1f8a) == -0x140 || -*(int *)(iVar2 + 0x1f8a) + 0x140 < 0) {
            iVar2 = -1;
          }
          else {
            iVar2 = 1;
          }
          iVar3 = FUN_1000_efc8();
          *(int *)(local_92 * 2 + 0x1d6a) = (iVar3 % 4 + 2) * iVar2;
          *(undefined2 *)(local_92 * 2 + 0x1d8a) = 0;
        }
        if (local_28 <= local_2c) {
          iVar2 = *(int *)(local_92 * 2 + 0x1d6a);
          if (iVar2 == 0) {
            iVar2 = 0;
          }
          else if (iVar2 < 1) {
            iVar2 = -1;
          }
          else {
            iVar2 = 1;
          }
          *(int *)(local_92 * 2 + 0x1d6a) = iVar2 << 3;
        }
        iVar2 = *(int *)(local_92 * 2 + 0x1f8a) + *(int *)(local_92 * 2 + 0x1d6a);
        if ((iVar2 < -0x13f) || (0x37f < iVar2)) {
          *(undefined2 *)(local_92 * 2 + 0x1fca) = 0;
        }
        if (*(int *)(local_92 * 2 + 0x1fca) != 0) {
          iVar2 = FUN_1000_efc8();
          iVar2 = iVar2 % (*(int *)0x181e * -0x28 + 100);
          if (((iVar2 == 0) && (local_4 < 0x10)) &&
             ((0 < *(int *)(local_92 * 2 + 0x1f8a) && (*(int *)(local_92 * 2 + 0x1f8a) < 0x240)))) {
            local_b4 = iVar2;
            do {
              if (aiStack_6e[local_b4] < 0x21) {
                local_d8 = local_b4;
              }
              local_b4 = local_b4 + 1;
            } while (local_b4 < 0x10);
            aiStack_6e[local_d8] = *(int *)(local_92 * 2 + 0x1fca) + 0xc;
            iVar2 = *(int *)(local_92 * 2 + 0x1f8a) + 0x18;
LAB_1000_0d5a:
            aiStack_4c[local_d8] = iVar2;
            local_4 = local_4 + 1;
          }
        }
      }
      else if (iVar2 == 2) {
        iVar2 = FUN_1000_efc8();
        if (((iVar2 % 0x28 == 0) && (iVar2 = local_92 * 2, *(int *)(iVar2 + 0x1fca) == 0)) &&
           (local_2c < local_28)) {
          iVar3 = FUN_1000_efc8();
          *(int *)(iVar2 + 0x1fca) = (iVar3 % 2 + 7) * 0x20;
          iVar3 = FUN_1000_efc8();
          iVar3 = (iVar3 % 2) * 0x4c0 + -0x140;
          *(int *)(iVar2 + 0x1f8a) = iVar3;
          if (iVar3 == 0x140) {
            iVar2 = 0;
          }
          else if (-*(int *)(iVar2 + 0x1f8a) == -0x140 || -*(int *)(iVar2 + 0x1f8a) + 0x140 < 0) {
            iVar2 = -1;
          }
          else {
            iVar2 = 1;
          }
          iVar3 = FUN_1000_efc8();
          *(int *)(local_92 * 2 + 0x1d6a) = (iVar3 % 3 + 7) * iVar2;
          *(undefined2 *)(local_92 * 2 + 0x1d8a) = 0;
        }
        iVar2 = *(int *)(local_92 * 2 + 0x1f8a) + *(int *)(local_92 * 2 + 0x1d6a);
        if ((iVar2 < -0x13f) || (0x37f < iVar2)) {
          *(undefined2 *)(local_92 * 2 + 0x1fca) = 0;
        }
        if (*(int *)(local_92 * 2 + 0x1fca) != 0) {
          iVar2 = FUN_1000_efc8();
          iVar2 = iVar2 % (((*(int *)0x181e * -2 + 5) - *(int *)0x20c6) * 10);
          if (((iVar2 == 0) && (local_26 < 8)) &&
             ((0 < *(int *)(local_92 * 2 + 0x1f8a) && (*(int *)(local_92 * 2 + 0x1f8a) < 0x241)))) {
            local_b4 = iVar2;
            do {
              if (aiStack_8e[local_b4] < -0xf) {
                local_d8 = local_b4;
              }
              local_b4 = local_b4 + 1;
            } while (local_b4 < 8);
            aiStack_8e[local_d8] = *(int *)(local_92 * 2 + 0x1fca) + 0xc;
            aiStack_7e[local_d8] = *(int *)(local_92 * 2 + 0x1f8a) + 0x18;
            auStack_ea[local_d8] = 0;
            local_26 = local_26 + 1;
            FUN_1000_cff4(2);
          }
        }
      }
      else if (iVar2 == 3) {
        iVar2 = FUN_1000_efc8();
        if (((iVar2 % (((3 - *(int *)0x181e) * 2 - *(int *)0x20c6) * 10) == 0) &&
            (iVar2 = local_92 * 2, *(int *)(iVar2 + 0x1fca) == 0)) && (local_2c < local_28)) {
          iVar3 = FUN_1000_efc8();
          *(int *)(iVar2 + 0x1fca) = (iVar3 % 2 + 2) * 0x20;
          iVar3 = FUN_1000_efc8();
          iVar3 = (iVar3 % 2) * 0x4e0 + -0x140;
          *(int *)(iVar2 + 0x1f8a) = iVar3;
          if (iVar3 == 0x140) {
            iVar2 = 0;
          }
          else if (-*(int *)(iVar2 + 0x1f8a) == -0x140 || -*(int *)(iVar2 + 0x1f8a) + 0x140 < 0) {
            iVar2 = -1;
          }
          else {
            iVar2 = 1;
          }
          iVar3 = FUN_1000_efc8();
          *(int *)(local_92 * 2 + 0x1d6a) = (iVar3 % 4 + 0x10) * iVar2;
          *(undefined2 *)(local_92 * 2 + 0x1d8a) = 0;
        }
        if (local_28 <= local_2c) {
          iVar2 = *(int *)(local_92 * 2 + 0x1d6a);
          if (iVar2 == 0) {
            iVar2 = 0;
          }
          else if (iVar2 < 1) {
            iVar2 = -1;
          }
          else {
            iVar2 = 1;
          }
          *(int *)(local_92 * 2 + 0x1d6a) = iVar2 << 3;
        }
        iVar2 = *(int *)(local_92 * 2 + 0x1f8a) + *(int *)(local_92 * 2 + 0x1d6a);
        if ((iVar2 < -0x13f) || (0x37f < iVar2)) {
          *(undefined2 *)(local_92 * 2 + 0x1fca) = 0;
        }
        if (*(int *)(local_92 * 2 + 0x1fca) != 0) {
          iVar2 = FUN_1000_efc8();
          iVar2 = iVar2 % (((4 - *(int *)0x20c6) - *(int *)0x181e) * 5);
          if (((iVar2 == 0) && (local_4 < 0x10)) &&
             ((0 < *(int *)(local_92 * 2 + 0x1f8a) && (*(int *)(local_92 * 2 + 0x1f8a) < 0x240)))) {
            local_b4 = iVar2;
            do {
              if (aiStack_6e[local_b4] < 0x21) {
                local_d8 = local_b4;
              }
              local_b4 = local_b4 + 1;
            } while (local_b4 < 0x10);
            aiStack_6e[local_d8] = *(int *)(local_92 * 2 + 0x1fca) + 0x10;
            iVar2 = *(int *)(local_92 * 2 + 0x1f8a) + 0x10;
            goto LAB_1000_0d5a;
          }
        }
      }
      else if (iVar2 == 4) {
        iVar2 = FUN_1000_efc8();
        if (((iVar2 % 0x1e == 0) && (iVar2 = local_92 * 2, *(int *)(iVar2 + 0x1fca) == 0)) &&
           (local_2c < local_28)) {
          *(undefined2 *)(iVar2 + 0x1fca) = 0x120;
          iVar3 = FUN_1000_efc8();
          iVar3 = (iVar3 % 2) * 0x4c0 + -0x140;
          *(int *)(iVar2 + 0x1f8a) = iVar3;
          if (iVar3 == 0x140) {
            iVar2 = 0;
          }
          else if (-*(int *)(iVar2 + 0x1f8a) == -0x140 || -*(int *)(iVar2 + 0x1f8a) + 0x140 < 0) {
            iVar2 = -1;
          }
          else {
            iVar2 = 1;
          }
          iVar3 = FUN_1000_efc8();
          iVar5 = local_92 * 2;
          *(int *)(iVar5 + 0x1d6a) = (iVar3 % 4 + 5) * iVar2;
          *(undefined2 *)(iVar5 + 0x1d8a) = 0;
          *(undefined2 *)(iVar5 + 0x1822) = 0;
        }
        iVar2 = local_92 * 2;
        if ((*(int *)(iVar2 + 0x1d6a) == 0) && (*(int *)(iVar2 + 0x1822) < 4)) {
          *(int *)(iVar2 + 0x1822) = *(int *)(iVar2 + 0x1822) + 1;
        }
        iVar2 = local_92 * 2;
        if ((*(int *)(iVar2 + 0x1d6a) != 0) && (0 < *(int *)(iVar2 + 0x1822))) {
          *(int *)(iVar2 + 0x1822) = *(int *)(iVar2 + 0x1822) + -1;
        }
        iVar3 = local_92 * 2;
        iVar2 = *(int *)(iVar3 + 0x1f8a) + *(int *)(iVar3 + 0x1d6a);
        if (((0x1f < iVar2) && (iVar2 < 0x221)) &&
           (iVar2 = FUN_1000_efc8(), iVar2 % (((3 - *(int *)0x181e) * 2 - *(int *)0x20c6) * 10) == 0
           )) {
          *(undefined2 *)(iVar3 + 0x1d6a) = 0;
        }
        iVar2 = *(int *)(local_92 * 2 + 0x1f8a) + *(int *)(local_92 * 2 + 0x1d6a);
        if ((iVar2 < -0x13f) || (0x37f < iVar2)) {
          *(undefined2 *)(local_92 * 2 + 0x1fca) = 0;
        }
        if (*(int *)(local_92 * 2 + 0x1fca) != 0) {
          iVar2 = local_92 * 2;
          if (((*(int *)(iVar2 + 0x1822) == 4) && (local_26 < 4)) &&
             ((0 < *(int *)(iVar2 + 0x1f8a) && (*(int *)(iVar2 + 0x1f8a) < 0x241)))) {
            for (iStack_10c = 0; iStack_10c < 4; iStack_10c = iStack_10c + 1) {
              for (local_b4 = 0; local_b4 < 8; local_b4 = local_b4 + 1) {
                if (aiStack_8e[local_b4] < -0xf) {
                  local_d8 = local_b4;
                  break;
                }
              }
              aiStack_8e[local_d8] = *(int *)(local_92 * 2 + 0x1fca) + 8;
              aiStack_7e[local_d8] = iStack_10c * 0x10 + *(int *)(local_92 * 2 + 0x1f8a);
              auStack_ea[local_d8] = 0;
            }
            local_26 = local_26 + 4;
            FUN_1000_cff4(2);
          }
          iVar2 = local_92 * 2;
          if (*(int *)(iVar2 + 0x1822) == 4) {
            if (*(int *)(iVar2 + 0x1f8a) == 0x140) {
              iVar2 = 0;
            }
            else if (-*(int *)(iVar2 + 0x1f8a) == -0x140 || -*(int *)(iVar2 + 0x1f8a) + 0x140 < 0) {
              iVar2 = -1;
            }
            else {
              iVar2 = 1;
            }
            iVar3 = FUN_1000_efc8();
            *(int *)(local_92 * 2 + 0x1d6a) = (iVar3 % 4 + 5) * iVar2;
          }
        }
      }
      else if (iVar2 == 9) {
        FUN_1000_1288();
        return;
      }
    }
    local_92 = local_92 + 1;
  } while( true );
}



/* 1000:1122  FUN_1000_1122  354 bytes, 1 callers */

void FUN_1000_1122(void)

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



/* 1000:1288  FUN_1000_1288  339 bytes, 1 callers */

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



/* 1000:13e0  FUN_1000_13e0  2953 bytes, 1 callers */

void FUN_1000_13e0(void)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  undefined2 uVar5;
  uint uVar6;
  char cVar7;
  int unaff_BP;
  int iVar8;
  int iVar9;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  if (((*(int *)(unaff_BP + -0x28) == 0) &&
      (*(int *)(unaff_BP + -0x26) <= *(int *)(unaff_BP + -0x2a))) && (*(int *)0x1dc0 == 0)) {
    FUN_1000_1faa();
    return;
  }
  *(undefined2 *)(unaff_BP + -0x90) = 0;
  while (*(int *)(unaff_BP + -0x90) < *(int *)0x1d48) {
    if (*(int *)(unaff_BP + *(int *)(unaff_BP + -0x90) * 2 + -0x108) < 0x130) {
      iVar8 = *(int *)(unaff_BP + -0x90) * 2;
      piVar1 = (int *)(unaff_BP + iVar8 + -0x108);
      *piVar1 = *piVar1 + *(int *)0x181e * 4 + 2;
      if (*(int *)0x20c6 == 1) {
        iVar4 = *(int *)(unaff_BP + iVar8 + -0xb0);
        piVar1 = (int *)(unaff_BP + iVar8 + -0xd2);
        *piVar1 = *piVar1 + *(int *)(unaff_BP + iVar8 + -0x22);
        if (*(int *)(unaff_BP + iVar8 + -0xd2) != iVar4) {
          iVar9 = *(int *)(unaff_BP + iVar8 + -0xd2);
          *(int *)(unaff_BP + -0x10c) = iVar8;
          if (iVar4 == iVar9 || iVar4 - iVar9 < 0) {
            iVar4 = -1;
          }
          else {
            iVar4 = 1;
          }
          piVar1 = (int *)(unaff_BP + iVar8 + -0x22);
          *piVar1 = *piVar1 + iVar4;
        }
      }
      *(undefined2 *)(unaff_BP + -0xb2) = 1;
      while (*(int *)(unaff_BP + -0xb2) <= *(int *)0x17f4) {
        iVar8 = *(int *)(unaff_BP + -0xb2) * 2;
        if ((9 < *(int *)(iVar8 + 0x1faa)) && (*(int *)(iVar8 + 0x1fca) != 0)) {
          switch(*(undefined2 *)(*(int *)(unaff_BP + -0xb2) * 2 + 0x17f6)) {
          case 1:
          case 2:
          case 4:
            iVar4 = *(int *)(unaff_BP + -0xb2) * 2;
            iVar8 = *(int *)(iVar4 + 0x1f8a);
            iVar9 = *(int *)(unaff_BP + -0x90) * 2;
            if ((iVar8 + -8 <= *(int *)(unaff_BP + iVar9 + -0xd2)) &&
               (*(int *)(unaff_BP + iVar9 + -0xd2) <= iVar8 + 0x38)) {
              iVar8 = *(int *)(iVar4 + 0x1fca);
              iVar4 = iVar8 + -0xc;
LAB_1000_1453:
              if ((iVar4 <= *(int *)(unaff_BP + iVar9 + -0x108)) &&
                 (*(int *)(unaff_BP + iVar9 + -0x108) <= iVar8 + 0x18)) {
                FUN_1000_824a(*(undefined2 *)(unaff_BP + -0xb2));
                *(int *)(unaff_BP + -0x2a) = *(int *)(unaff_BP + -0x2a) + 1;
                *(undefined2 *)(unaff_BP + iVar9 + -0x108) = 0x130;
              }
            }
            break;
          case 3:
            iVar4 = *(int *)(unaff_BP + -0xb2) * 2;
            iVar8 = *(int *)(iVar4 + 0x1f8a);
            iVar9 = *(int *)(unaff_BP + -0x90) * 2;
            if ((iVar8 + -8 <= *(int *)(unaff_BP + iVar9 + -0xd2)) &&
               (*(int *)(unaff_BP + iVar9 + -0xd2) <= iVar8 + 0x18)) {
              iVar8 = *(int *)(iVar4 + 0x1fca);
              iVar4 = iVar8 + -6;
              goto LAB_1000_1453;
            }
            break;
          case 9:
            iVar8 = *(int *)(unaff_BP + -0xb2) * 2;
            iVar4 = *(int *)(unaff_BP + -0x90) * 2;
            if (((*(int *)(iVar8 + 0x1f8a) + -8 <= *(int *)(unaff_BP + iVar4 + -0xd2)) &&
                (*(int *)(unaff_BP + iVar4 + -0xd2) <= *(int *)(iVar8 + 0x1f8a) + 0x18)) &&
               ((*(int *)(iVar8 + 0x1fca) + -6 <= *(int *)(unaff_BP + iVar4 + -0x108) &&
                (*(int *)(unaff_BP + iVar4 + -0x108) <= *(int *)(iVar8 + 0x1fca) + 0x18)))) {
              FUN_1000_824a(*(undefined2 *)(unaff_BP + -0xb2));
              *(undefined2 *)(unaff_BP + iVar4 + -0x108) = 0x130;
              *(int *)(unaff_BP + -0x2a) = *(int *)(unaff_BP + -0x2a) + 1;
              if (((*(int *)0x1dc0 == 0) && (0x1f < *(int *)(iVar8 + 0x1f8a))) &&
                 (*(int *)(iVar8 + 0x1f8a) < 0x241)) {
                FUN_1000_9d84();
                *(int *)0x193e = *(int *)(iVar8 + 0x1f8a) + 8;
                *(int *)0x1d40 = *(int *)(iVar8 + 0x1fca) + 8;
                *(undefined2 *)0x1db2 = 0;
                *(undefined2 *)0x1db4 = 0xfffc;
                *(undefined2 *)0x1d44 = 0xffff;
              }
            }
          }
        }
        *(int *)(unaff_BP + -0xb2) = *(int *)(unaff_BP + -0xb2) + 1;
      }
      if (0x12f < *(int *)(unaff_BP + *(int *)(unaff_BP + -0x90) * 2 + -0x108)) {
        *(int *)(unaff_BP + -0x8e) = *(int *)(unaff_BP + -0x8e) + -1;
      }
    }
    *(int *)(unaff_BP + -0x90) = *(int *)(unaff_BP + -0x90) + 1;
  }
  *(undefined2 *)(unaff_BP + -0x90) = 0;
  do {
    if (0x20 < *(int *)(unaff_BP + *(int *)(unaff_BP + -0x90) * 2 + -0x6c)) {
      iVar8 = *(int *)(unaff_BP + -0x90) * 2;
      piVar1 = (int *)(unaff_BP + iVar8 + -0x6c);
      *piVar1 = *piVar1 + -2;
      if ((*(int *)(unaff_BP + iVar8 + -0x4a) <= *(int *)0x1f8a + -6) ||
         ((*(int *)0x1f8a + 0x36 <= *(int *)(unaff_BP + iVar8 + -0x4a) &&
          ((*(int *)(unaff_BP + iVar8 + -0x6c) < 0x31 || (iVar8 = FUN_1000_efc8(), iVar8 % 4 == 0)))
          ))) {
        piVar1 = (int *)(unaff_BP + *(int *)(unaff_BP + -0x90) * 2 + -0x6c);
        *piVar1 = *piVar1 + 1;
      }
      iVar8 = *(int *)(unaff_BP + -0x90) * 2;
      piVar1 = (int *)(unaff_BP + iVar8 + -0x4a);
      *piVar1 = *piVar1 - (*(int *)0x1844 * 2 + -1);
      if ((((*(int *)0x1faa == 10) && (*(int *)0x1f8a + -6 <= *(int *)(unaff_BP + iVar8 + -0x4a)))
          && (*(int *)(unaff_BP + iVar8 + -0x4a) <= *(int *)0x1f8a + 0x36)) &&
         ((*(int *)0x1fca + -0xc <= *(int *)(unaff_BP + iVar8 + -0x6c) &&
          (*(int *)(unaff_BP + iVar8 + -0x6c) <= *(int *)0x1fca + 0x18)))) {
        *(undefined2 *)0x1faa = 9;
        *(undefined2 *)(unaff_BP + iVar8 + -0x6c) = 0;
        FUN_1000_cff4(4);
      }
      if (*(int *)(unaff_BP + *(int *)(unaff_BP + -0x90) * 2 + -0x6c) < 0x21) {
        *(int *)(unaff_BP + -2) = *(int *)(unaff_BP + -2) + -1;
      }
    }
    *(int *)(unaff_BP + -0x90) = *(int *)(unaff_BP + -0x90) + 1;
  } while (*(int *)(unaff_BP + -0x90) < 0x10);
  *(undefined2 *)(unaff_BP + -0x90) = 0;
  while (*(int *)(unaff_BP + -0x90) < 8) {
    if (-0x10 < *(int *)(unaff_BP + *(int *)(unaff_BP + -0x90) * 2 + -0x8c)) {
      iVar8 = *(int *)0x181e;
      iVar4 = *(int *)0x20c6;
      iVar9 = *(int *)(unaff_BP + -0x90) * 2;
      piVar1 = (int *)(unaff_BP + iVar9 + -0x8c);
      *piVar1 = *piVar1 + -8;
      if ((iVar8 + iVar4) * -0x1e + 0xa0 < *(int *)(unaff_BP + iVar9 + -0x8c)) {
        iVar8 = *(int *)0x1f8a - *(int *)(unaff_BP + iVar9 + -0x7c);
        *(int *)(unaff_BP + -0x10e) = iVar8;
        if (iVar8 == -0x18) {
          uVar5 = 0;
        }
        else if (iVar8 == -0x18 || iVar8 + 0x18 < 0) {
          uVar5 = 0xffff;
        }
        else {
          uVar5 = 1;
        }
        *(undefined2 *)(unaff_BP + -0x10c) = uVar5;
        iVar8 = FUN_1000_efc8();
        piVar1 = (int *)(unaff_BP + *(int *)(unaff_BP + -0x90) * 2 + -0xe8);
        *piVar1 = *piVar1 + (iVar8 * *(int *)(unaff_BP + -0x10c)) % 2;
      }
      else {
        iVar8 = *(int *)(unaff_BP + *(int *)(unaff_BP + -0x90) * 2 + -0xe8);
        if (iVar8 == 0) {
          uVar5 = 0;
        }
        else if (iVar8 < 1) {
          uVar5 = 0xffff;
        }
        else {
          uVar5 = 1;
        }
        *(undefined2 *)(unaff_BP + -0x10e) = uVar5;
        piVar1 = (int *)(unaff_BP + *(int *)(unaff_BP + -0x90) * 2 + -0xe8);
        *piVar1 = *piVar1 - *(int *)0x1844 * *(int *)(unaff_BP + -0x10e);
      }
      uVar6 = *(uint *)(unaff_BP + *(int *)(unaff_BP + -0x90) * 2 + -0xe8);
      if (8 < (int)((uVar6 ^ (int)uVar6 >> 0xf) - ((int)uVar6 >> 0xf))) {
        *(uint *)(unaff_BP + -0x10c) = uVar6;
        if (uVar6 == 0) {
          iVar8 = 0;
        }
        else if ((int)uVar6 < 1) {
          iVar8 = -1;
        }
        else {
          iVar8 = 1;
        }
        *(int *)(unaff_BP + -0x10e) = iVar8;
        *(int *)(unaff_BP + *(int *)(unaff_BP + -0x90) * 2 + -0xe8) = iVar8 << 3;
      }
      iVar8 = *(int *)(unaff_BP + -0x90) * 2;
      piVar1 = (int *)(unaff_BP + iVar8 + -0x7c);
      *piVar1 = *piVar1 + *(int *)(unaff_BP + iVar8 + -0xe8);
      if (((*(int *)0x1faa == 10) && (*(int *)0x1f8a + -4 <= *(int *)(unaff_BP + iVar8 + -0x7c))) &&
         ((*(int *)(unaff_BP + iVar8 + -0x7c) <= *(int *)0x1f8a + 0x34 &&
          ((*(int *)0x1fca + -0xc <= *(int *)(unaff_BP + iVar8 + -0x8c) &&
           (*(int *)(unaff_BP + iVar8 + -0x8c) <= *(int *)0x1fca + 0x18)))))) {
        *(undefined2 *)0x1faa = 9;
        *(undefined2 *)(unaff_BP + iVar8 + -0x8c) = 0xfff0;
        FUN_1000_cff4(4);
      }
      iVar8 = *(int *)(unaff_BP + -0x90) * 2;
      if ((*(int *)(unaff_BP + iVar8 + -0x7c) < 0x10) ||
         (0x26f < *(int *)(unaff_BP + iVar8 + -0x7c))) {
        *(undefined2 *)(unaff_BP + *(int *)(unaff_BP + -0x90) * 2 + -0x8c) = 0xfff0;
      }
      if (*(int *)(unaff_BP + *(int *)(unaff_BP + -0x90) * 2 + -0x8c) < -0xf) {
        *(int *)(unaff_BP + -0x24) = *(int *)(unaff_BP + -0x24) + -1;
      }
    }
    *(int *)(unaff_BP + -0x90) = *(int *)(unaff_BP + -0x90) + 1;
  }
  if (*(int *)0x1dc0 != 0) {
    if (*(int *)0x1d44 < 0) {
      *(int *)0x1d40 = *(int *)0x1d40 + *(int *)0x1db4;
    }
    else {
      *(int *)0x1d44 = *(int *)0x1d44 + -1;
    }
    if ((((*(int *)0x1f8a + -4 <= *(int *)0x193e) && (*(int *)0x193e <= *(int *)0x1f8a + 0x34)) &&
        (*(int *)0x1fca <= *(int *)0x1d40)) && (*(int *)0x1d40 <= *(int *)0x1fca + 0x1a)) {
      if (*(int *)0x1dc0 == 4) {
        FUN_1000_83b5(0x2b8);
        *(undefined2 *)(unaff_BP + -0x90) = 1;
        do {
          iVar8 = *(int *)(unaff_BP + -0x90) * 2;
          if (((*(int *)(iVar8 + 0x1faa) == 10) && (*(int *)(iVar8 + 0x1fca) != 0)) &&
             ((0 < *(int *)(iVar8 + 0x1f8a) && (*(int *)(iVar8 + 0x1f8a) < 0x240)))) {
            *(int *)(unaff_BP + -0x2a) = *(int *)(unaff_BP + -0x2a) + 1;
            FUN_1000_824a(*(undefined2 *)(unaff_BP + -0x90));
          }
          *(int *)(unaff_BP + -0x90) = *(int *)(unaff_BP + -0x90) + 1;
        } while (*(int *)(unaff_BP + -0x90) < 0x10);
        *(undefined2 *)(unaff_BP + -0x90) = 0;
        while (*(int *)(unaff_BP + -0x90) < *(int *)0x1d48) {
          *(undefined2 *)(unaff_BP + *(int *)(unaff_BP + -0x90) * 2 + -0x108) = 0x130;
          *(int *)(unaff_BP + -0x90) = *(int *)(unaff_BP + -0x90) + 1;
        }
        *(undefined2 *)(unaff_BP + -0x8e) = 0;
        *(undefined2 *)(unaff_BP + -0x90) = 0;
        while (*(int *)(unaff_BP + -0x90) < 0x10) {
          *(undefined2 *)(unaff_BP + *(int *)(unaff_BP + -0x90) * 2 + -0x6c) = 0x20;
          *(int *)(unaff_BP + -0x90) = *(int *)(unaff_BP + -0x90) + 1;
        }
        *(undefined2 *)(unaff_BP + -2) = 0;
        *(undefined2 *)(unaff_BP + -0x90) = 0;
        while (*(int *)(unaff_BP + -0x90) < 8) {
          *(undefined2 *)(unaff_BP + *(int *)(unaff_BP + -0x90) * 2 + -0x8c) = 0xfff0;
          *(int *)(unaff_BP + -0x90) = *(int *)(unaff_BP + -0x90) + 1;
        }
        *(undefined2 *)(unaff_BP + -0x24) = 0;
        FUN_1000_cff4(4);
        FUN_1000_8425(0x2b8);
        FUN_1000_a25a();
      }
      else {
        FUN_1000_80f0();
      }
      FUN_1000_a0d8();
      *(undefined2 *)0x1dc0 = 0;
      FUN_1000_cff4(6);
    }
    if ((*(int *)0x1d44 < 0) && (*(int *)0x1d40 < 0x21)) {
      *(undefined2 *)0x1d40 = 0x20;
      *(undefined2 *)0x1d44 = 0x32;
    }
    if (*(int *)0x1d44 == 0) {
      *(undefined2 *)0x1dc0 = 0;
    }
  }
  *(undefined2 *)(unaff_BP + -0x90) = *(undefined2 *)0x17f4;
  while (0 < *(int *)(unaff_BP + -0x90)) {
    iVar8 = *(int *)(unaff_BP + -0x90) * 2;
    *(int *)(iVar8 + 0x1f8a) = *(int *)(iVar8 + 0x1f8a) + *(int *)(iVar8 + 0x1d6a);
    *(int *)(iVar8 + 0x1fca) = *(int *)(iVar8 + 0x1fca) + *(int *)(iVar8 + 0x1d8a);
    *(int *)(unaff_BP + -0x90) = *(int *)(unaff_BP + -0x90) + -1;
  }
  *(int *)0x1f8a = *(int *)0x1f8a + *(int *)0x1d6a;
  *(byte *)0x1844 = *(byte *)0x1844 ^ 1;
  FUN_1000_b854(4,0,0x4b,0x29 - (uint)(3 < *(int *)0x193c),5);
  *(undefined2 *)(unaff_BP + -0x90) = *(undefined2 *)0x17f4;
  while (0 < *(int *)(unaff_BP + -0x90)) {
    if (0xf < *(int *)(*(int *)(unaff_BP + -0x90) * 2 + 0x1fca)) {
      iVar8 = *(int *)(unaff_BP + -0x90) * 2;
      if ((*(int *)(iVar8 + 0x17f6) == 3) || (*(int *)(iVar8 + 0x17f6) == 9)) {
        *(undefined2 *)(unaff_BP + -0x10e) = 1;
      }
      else {
        *(undefined2 *)(unaff_BP + -0x10e) = 0;
      }
      iVar8 = *(int *)(unaff_BP + -0x90) * 2;
      if (((int)((-(uint)(*(int *)(unaff_BP + -0x10e) != 0) & 0x20) - 0x20) <=
           *(int *)(iVar8 + 0x1f8a)) && (*(int *)(iVar8 + 0x1f8a) < 0x260)) {
        iVar8 = *(int *)(unaff_BP + -0x90) * 2;
        if (*(int *)(iVar8 + 0x1faa) < 10) {
          switch(*(undefined2 *)(iVar8 + 0x17f6)) {
          case 1:
          case 2:
          case 4:
            FUN_1000_85b8(*(undefined2 *)(unaff_BP + -0x90));
            break;
          case 3:
          case 9:
            FUN_1000_8562(*(undefined2 *)(unaff_BP + -0x90));
          }
        }
        else {
          iVar8 = *(int *)(*(int *)(unaff_BP + -0x90) * 2 + 0x17f6);
          if (iVar8 == 1) {
            iVar8 = *(int *)(unaff_BP + -0x90) * 2;
            *(int *)(unaff_BP + -0x10e) = iVar8;
            bVar2 = -(0 < *(int *)(iVar8 + 0x1d6a)) & 2;
            cVar3 = bVar2 + 5;
            cVar7 = bVar2 + 4;
          }
          else {
            if (iVar8 != 2) {
              if (iVar8 == 3) {
                iVar8 = *(int *)(unaff_BP + -0x90) * 2;
                *(int *)(unaff_BP + -0x10e) = iVar8;
                iVar8 = 0x31 - (uint)(*(int *)(iVar8 + 0x1d6a) < 1);
LAB_1000_1b85:
                iVar4 = *(int *)(*(int *)(unaff_BP + -0x10e) + 0x1fca);
                iVar9 = *(int *)(*(int *)(unaff_BP + -0x10e) + 0x1f8a);
LAB_1000_1ca6:
                FUN_1000_bfd6(iVar9,iVar4,iVar8);
              }
              else if (iVar8 == 4) {
                iVar8 = *(int *)(unaff_BP + -0x90) * 2;
                if (0 < *(int *)(iVar8 + 0x1f8a)) {
                  FUN_1000_bfd6(*(undefined2 *)(iVar8 + 0x1f8a),*(undefined2 *)(iVar8 + 0x1fca),
                                (*(int *)(iVar8 + 0x1822) + 0x12) * 4 + *(int *)0x1d42);
                  FUN_1000_bfd6(*(int *)(iVar8 + 0x1f8a) + 0x10,*(undefined2 *)(iVar8 + 0x1fca),
                                *(int *)(iVar8 + 0x1822) * 4 + *(int *)0x1d42 + 0x49);
                  FUN_1000_bfd6(*(undefined2 *)(iVar8 + 0x1f8a),*(int *)(iVar8 + 0x1fca) + 0x10,
                                *(int *)0x1d42 + 0x44);
                  FUN_1000_bfd6(*(int *)(iVar8 + 0x1f8a) + 0x10,*(int *)(iVar8 + 0x1fca) + 0x10,
                                *(int *)0x1d42 + 0x45);
                }
                iVar9 = *(int *)(unaff_BP + -0x90) * 2;
                if (*(int *)(iVar9 + 0x1f8a) < 0x260) {
                  FUN_1000_bfd6(*(int *)(iVar9 + 0x1f8a) + 0x20,*(undefined2 *)(iVar9 + 0x1fca),
                                *(int *)(iVar9 + 0x1822) * 4 + *(int *)0x1d42 + 0x4a);
                  FUN_1000_bfd6(*(int *)(iVar9 + 0x1f8a) + 0x30,*(undefined2 *)(iVar9 + 0x1fca),
                                *(int *)(iVar9 + 0x1822) * 4 + *(int *)0x1d42 + 0x4b);
                  FUN_1000_bfd6(*(int *)(iVar9 + 0x1f8a) + 0x20,*(int *)(iVar9 + 0x1fca) + 0x10,
                                *(int *)0x1d42 + 0x46);
                  iVar8 = *(int *)0x1d42 + 0x47;
                  iVar4 = *(int *)(iVar9 + 0x1fca) + 0x10;
                  iVar9 = *(int *)(iVar9 + 0x1f8a) + 0x30;
                  goto LAB_1000_1ca6;
                }
              }
              else if (iVar8 == 9) {
                iVar8 = *(int *)(unaff_BP + -0x90) * 2;
                *(int *)(unaff_BP + -0x10e) = iVar8;
                iVar8 = 0x2f - (uint)(*(int *)(iVar8 + 0x1d6a) < 1);
                goto LAB_1000_1b85;
              }
              goto switchD_1000_1abd_caseD_5;
            }
            iVar8 = *(int *)(unaff_BP + -0x90) * 2;
            *(int *)(unaff_BP + -0x10e) = iVar8;
            bVar2 = -(0 < *(int *)(iVar8 + 0x1d6a)) & 2;
            cVar3 = bVar2 + 9;
            cVar7 = bVar2 + 8;
          }
          FUN_1000_88a2(*(undefined2 *)(*(int *)(unaff_BP + -0x10e) + 0x1f8a),
                        *(undefined2 *)(*(int *)(unaff_BP + -0x10e) + 0x1fca),cVar7,cVar3);
        }
      }
    }
switchD_1000_1abd_caseD_5:
    *(int *)(unaff_BP + -0x90) = *(int *)(unaff_BP + -0x90) + -1;
  }
  *(int *)(unaff_BP + -0xb2) = (0x28 - *(int *)0x1d48) * 8;
  if (*(int *)0x181e == 1) {
    iVar8 = *(int *)0x181e * 3;
  }
  else {
    iVar8 = *(int *)0x20c6 * 6;
  }
  *(int *)(unaff_BP + -0xd6) = iVar8 + *(int *)0x1d42;
  *(undefined2 *)(unaff_BP + -0x90) = 0;
  while (*(int *)(unaff_BP + -0x90) < *(int *)0x1d48) {
    if (*(int *)(unaff_BP + *(int *)(unaff_BP + -0x90) * 2 + -0x108) < 0x130) {
      iVar8 = *(int *)(unaff_BP + -0x90) * 2;
      FUN_1000_bfd6(*(undefined2 *)(unaff_BP + iVar8 + -0xd2),
                    *(undefined2 *)(unaff_BP + iVar8 + -0x108),
                    (*(int *)(unaff_BP + -0xd6) - (uint)(*(int *)0x184a < 2)) + 2);
    }
    else {
      FUN_1000_bfd6(*(undefined2 *)(unaff_BP + -0xb2),6,*(undefined2 *)(unaff_BP + -0xd6));
      *(int *)(unaff_BP + -0xb2) = *(int *)(unaff_BP + -0xb2) + 0x10;
    }
    *(int *)(unaff_BP + -0x90) = *(int *)(unaff_BP + -0x90) + 1;
  }
  *(int *)(unaff_BP + -0xd6) = *(int *)0x1d42 + *(int *)0x1846 + 0x19;
  *(undefined2 *)(unaff_BP + -0x90) = 0;
  do {
    iVar8 = *(int *)(unaff_BP + -0x90) * 2;
    if (0x20 < *(int *)(unaff_BP + iVar8 + -0x6c)) {
      FUN_1000_bfd6(*(undefined2 *)(unaff_BP + iVar8 + -0x4a),
                    *(undefined2 *)(unaff_BP + iVar8 + -0x6c),*(undefined2 *)(unaff_BP + -0xd6));
    }
    *(int *)(unaff_BP + -0x90) = *(int *)(unaff_BP + -0x90) + 1;
  } while (*(int *)(unaff_BP + -0x90) < 0x10);
  *(int *)(unaff_BP + -0xd6) = *(int *)0x1d42 + 0xc;
  *(undefined2 *)(unaff_BP + -0x90) = 0;
  while (*(int *)(unaff_BP + -0x90) < 8) {
    iVar8 = *(int *)(unaff_BP + -0x90) * 2;
    if (-0x10 < *(int *)(unaff_BP + iVar8 + -0x8c)) {
      if (*(int *)(unaff_BP + iVar8 + -0x8c) < 0) {
        FUN_1000_c322(*(undefined2 *)(unaff_BP + iVar8 + -0x7c),
                      *(undefined2 *)(unaff_BP + iVar8 + -0x8c),
                      *(int *)(*(int *)(unaff_BP + iVar8 + -0xe8) * 2 + 0x510) +
                      *(int *)(unaff_BP + -0xd6));
      }
      else {
        iVar8 = *(int *)(unaff_BP + -0x90) * 2;
        FUN_1000_bfd6(*(undefined2 *)(unaff_BP + iVar8 + -0x7c),
                      *(undefined2 *)(unaff_BP + iVar8 + -0x8c),
                      *(int *)(*(int *)(unaff_BP + iVar8 + -0xe8) * 2 + 0x510) +
                      *(int *)(unaff_BP + -0xd6));
      }
    }
    *(int *)(unaff_BP + -0x90) = *(int *)(unaff_BP + -0x90) + 1;
  }
  if (*(int *)0x1faa < 10) {
    FUN_1000_85b8(0);
  }
  else {
    FUN_1000_bfd6(*(undefined2 *)0x1f8a,(uint)(*(int *)0x193c < 4) + *(int *)0x1fca,0);
    FUN_1000_bfd6(*(int *)0x1f8a + 0x20,(uint)(*(int *)0x193c < 4) + *(int *)0x1fca,1);
  }
  if ((*(int *)0x1dc0 != 0) &&
     (((0xf < *(int *)0x1d44 || (*(int *)0x1d44 < 1)) || (*(int *)0x1844 != 0)))) {
    if ((*(int *)0x193c < 4) && (0 < *(int *)0x1d44)) {
      *(undefined2 *)(unaff_BP + -0x10e) = 1;
    }
    else {
      *(undefined2 *)(unaff_BP + -0x10e) = 0;
    }
    FUN_1000_bfd6(*(undefined2 *)0x193e,(uint)(*(int *)(unaff_BP + -0x10e) != 0) + *(int *)0x1d40,
                  *(int *)0x1dc0 + *(int *)0x1d42 + 0x28);
  }
  FUN_1000_8292();
  *(undefined2 *)(unaff_BP + -0x90) = *(undefined2 *)0x17f4;
  while (0 < *(int *)(unaff_BP + -0x90)) {
    if (0xf < *(int *)(*(int *)(unaff_BP + -0x90) * 2 + 0x1fca)) {
      iVar8 = *(int *)(*(int *)(unaff_BP + -0x90) * 2 + 0x17f6);
      if (iVar8 == 1) {
        iVar8 = 6;
LAB_1000_1ee1:
        uVar5 = 7;
      }
      else {
        if (iVar8 == 2) {
          iVar8 = 2;
          goto LAB_1000_1ee1;
        }
        if (iVar8 == 3) {
          iVar8 = 4;
        }
        else {
          if (iVar8 == 4) {
            iVar8 = 3;
            goto LAB_1000_1ee1;
          }
          if (iVar8 != 9) goto LAB_1000_1ef0;
          iVar8 = -(*(int *)0x1844 * 7 + -0xf);
        }
        uVar5 = 3;
      }
      FUN_1000_890a(*(undefined2 *)(unaff_BP + -0x90),uVar5,iVar8);
    }
LAB_1000_1ef0:
    *(int *)(unaff_BP + -0x90) = *(int *)(unaff_BP + -0x90) + -1;
  }
  FUN_1000_890a(0,7,0xf);
  while (iVar8 = FUN_1000_bf8e(), iVar8 != 0) {
    FUN_1000_bf98();
  }
  FUN_1000_e538(0x2130);
  do {
    uVar6 = FUN_1000_bb38();
  } while (uVar6 < *(uint *)0x1820);
  *(undefined2 *)0xdd0 = 0;
  out(0xa4,(byte)*(undefined2 *)0x1844);
  out(0xa6,(byte)*(undefined2 *)0x1844 ^ 1);
  FUN_1000_b854(4,0,0x4b,0x13f,0);
  FUN_1000_8184();
  iVar8 = FUN_1000_e3c8(0x2130);
  *(int *)(unaff_BP + -0xd8) = iVar8;
  if (((iVar8 != 0) || (*(int *)0x213e != 0)) && (FUN_1000_9e70(), *(int *)0x184c == 0)) {
    FUN_1000_1faa();
    return;
  }
  *(undefined2 *)0x1d6a = 0;
  if (*(int *)0x1faa < 10) {
    iVar8 = *(int *)0x1faa;
    *(int *)(unaff_BP + -0x10c) = iVar8;
    *(int *)0x1faa = *(int *)0x1faa + -1;
    if (iVar8 < 1) {
      *(undefined2 *)(unaff_BP + -0x4c) = 1;
      *(int *)0x1842 = *(int *)0x1842 + -1;
      FUN_1000_1faa();
      return;
    }
  }
  else {
    if ((*(int *)0x2136 != 0) && (*(int *)0x1d4a + *(int *)0x1f8a < 0x210)) {
      *(undefined2 *)0x1d6a = *(undefined2 *)0x1d4a;
    }
    if ((*(int *)0x2134 != 0) && (0x2f < *(int *)0x1f8a - *(int *)0x1d4a)) {
      *(int *)0x1d6a = -*(int *)0x1d4a;
    }
    if ((((*(int *)0x2138 != 0) && (*(int *)0x212c == 0)) ||
        ((*(int *)0x213a != 0 && (*(int *)0x212c != 0)))) &&
       ((*(int *)(unaff_BP + -0x8e) < *(int *)0x1d48 && (*(int *)(unaff_BP + -0xd4) != 0)))) {
      *(undefined2 *)(unaff_BP + -0x90) = 0;
      while (*(int *)(unaff_BP + -0x90) < *(int *)0x1d48) {
        if (0x12f < *(int *)(unaff_BP + *(int *)(unaff_BP + -0x90) * 2 + -0x108)) {
          *(undefined2 *)(unaff_BP + -0xb2) = *(undefined2 *)(unaff_BP + -0x90);
          break;
        }
        *(int *)(unaff_BP + -0x90) = *(int *)(unaff_BP + -0x90) + 1;
      }
      iVar4 = *(int *)(unaff_BP + -0xb2) * 2;
      *(undefined2 *)(unaff_BP + iVar4 + -0x108) = *(undefined2 *)0x1fca;
      iVar8 = *(int *)0x1f8a;
      *(int *)(unaff_BP + iVar4 + -0xd2) = iVar8 + -0x10;
      *(int *)(unaff_BP + iVar4 + -0xb0) = iVar8 + -0x10;
      *(int *)(unaff_BP + iVar4 + -0x22) = *(int *)0x20c6 * -7;
      *(int *)(unaff_BP + -0x8e) = *(int *)(unaff_BP + -0x8e) + 1;
      *(undefined2 *)(unaff_BP + -0xd4) = 0;
      FUN_1000_cff4(1);
    }
    if ((((*(int *)0x213a != 0) && (*(int *)0x212c == 0)) ||
        ((*(int *)0x2138 != 0 && (*(int *)0x212c != 0)))) &&
       ((*(int *)(unaff_BP + -0x8e) < *(int *)0x1d48 && (*(int *)(unaff_BP + -0xd4) != 0)))) {
      *(undefined2 *)(unaff_BP + -0x90) = 0;
      while (*(int *)(unaff_BP + -0x90) < *(int *)0x1d48) {
        if (0x12f < *(int *)(unaff_BP + *(int *)(unaff_BP + -0x90) * 2 + -0x108)) {
          *(undefined2 *)(unaff_BP + -0xb2) = *(undefined2 *)(unaff_BP + -0x90);
          break;
        }
        *(int *)(unaff_BP + -0x90) = *(int *)(unaff_BP + -0x90) + 1;
      }
      iVar4 = *(int *)(unaff_BP + -0xb2) * 2;
      *(undefined2 *)(unaff_BP + iVar4 + -0x108) = *(undefined2 *)0x1fca;
      iVar8 = *(int *)0x1f8a;
      *(int *)(unaff_BP + iVar4 + -0xd2) = iVar8 + 0x40;
      *(int *)(unaff_BP + iVar4 + -0xb0) = iVar8 + 0x40;
      *(int *)(unaff_BP + iVar4 + -0x22) = *(int *)0x20c6 * 7;
      *(int *)(unaff_BP + -0x8e) = *(int *)(unaff_BP + -0x8e) + 1;
      *(undefined2 *)(unaff_BP + -0xd4) = 0;
      FUN_1000_cff4(1);
    }
    if ((*(int *)0x2138 == 0) && (*(int *)0x213a == 0)) {
      *(undefined2 *)(unaff_BP + -0xd4) = 1;
    }
  }
  *(undefined2 *)(unaff_BP + -0x28) = 0;
  *(undefined2 *)(unaff_BP + -0x90) = 1;
  do {
    if (*(int *)0x17f4 < *(int *)(unaff_BP + -0x90)) {
      FUN_1000_13e0();
      return;
    }
    if (*(int *)(*(int *)(unaff_BP + -0x90) * 2 + 0x1fca) != 0) {
      *(int *)(unaff_BP + -0x28) = *(int *)(unaff_BP + -0x28) + 1;
    }
    iVar8 = *(int *)(unaff_BP + -0x90) * 2;
    if (*(int *)(iVar8 + 0x1faa) < 10) {
      piVar1 = (int *)(iVar8 + 0x1faa);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        *(undefined2 *)(iVar8 + 0x1fca) = 0;
        *(undefined2 *)(iVar8 + 0x1d8a) = 0;
        *(undefined2 *)(iVar8 + 0x1faa) = 10;
      }
    }
    else {
      iVar8 = *(int *)(*(int *)(unaff_BP + -0x90) * 2 + 0x17f6);
      if (iVar8 == 1) {
        iVar8 = FUN_1000_efc8();
        if (((iVar8 % 0xf == 0) &&
            (iVar8 = *(int *)(unaff_BP + -0x90) * 2, *(int *)(iVar8 + 0x1fca) == 0)) &&
           (*(int *)(unaff_BP + -0x2a) < *(int *)(unaff_BP + -0x26))) {
          iVar4 = FUN_1000_efc8();
          *(int *)(iVar8 + 0x1fca) = (iVar4 % 7 + 2) * 0x20;
          iVar4 = FUN_1000_efc8();
          iVar4 = (iVar4 % 2) * 0x4c0 + -0x140;
          *(int *)(iVar8 + 0x1f8a) = iVar4;
          if (iVar4 == 0x140) {
            uVar5 = 0;
          }
          else if (-*(int *)(iVar8 + 0x1f8a) == -0x140 || -*(int *)(iVar8 + 0x1f8a) + 0x140 < 0) {
            uVar5 = 0xffff;
          }
          else {
            uVar5 = 1;
          }
          *(undefined2 *)(unaff_BP + -0x10c) = uVar5;
          iVar8 = FUN_1000_efc8();
          iVar4 = *(int *)(unaff_BP + -0x90) * 2;
          *(int *)(iVar4 + 0x1d6a) = (iVar8 % 4 + 2) * *(int *)(unaff_BP + -0x10c);
          *(undefined2 *)(iVar4 + 0x1d8a) = 0;
        }
        if (*(int *)(unaff_BP + -0x26) <= *(int *)(unaff_BP + -0x2a)) {
          iVar8 = *(int *)(*(int *)(unaff_BP + -0x90) * 2 + 0x1d6a);
          if (iVar8 == 0) {
            iVar8 = 0;
          }
          else if (iVar8 < 1) {
            iVar8 = -1;
          }
          else {
            iVar8 = 1;
          }
          *(int *)(unaff_BP + -0x10c) = iVar8;
          *(int *)(*(int *)(unaff_BP + -0x90) * 2 + 0x1d6a) = iVar8 << 3;
        }
        iVar8 = *(int *)(unaff_BP + -0x90) * 2;
        iVar8 = *(int *)(iVar8 + 0x1f8a) + *(int *)(iVar8 + 0x1d6a);
        if ((iVar8 < -0x13f) || (0x37f < iVar8)) {
          *(undefined2 *)(*(int *)(unaff_BP + -0x90) * 2 + 0x1fca) = 0;
        }
        if (((*(int *)(*(int *)(unaff_BP + -0x90) * 2 + 0x1fca) != 0) &&
            (iVar8 = FUN_1000_efc8(), iVar8 % (*(int *)0x181e * -0x28 + 100) == 0)) &&
           ((*(int *)(unaff_BP + -2) < 0x10 &&
            ((iVar8 = *(int *)(unaff_BP + -0x90) * 2, 0 < *(int *)(iVar8 + 0x1f8a) &&
             (*(int *)(iVar8 + 0x1f8a) < 0x240)))))) {
          *(undefined2 *)(unaff_BP + -0xb2) = 0;
          do {
            if (*(int *)(unaff_BP + *(int *)(unaff_BP + -0xb2) * 2 + -0x6c) < 0x21) {
              *(undefined2 *)(unaff_BP + -0xd6) = *(undefined2 *)(unaff_BP + -0xb2);
            }
            *(int *)(unaff_BP + -0xb2) = *(int *)(unaff_BP + -0xb2) + 1;
          } while (*(int *)(unaff_BP + -0xb2) < 0x10);
          iVar8 = *(int *)(unaff_BP + -0x90) * 2;
          iVar4 = *(int *)(unaff_BP + -0xd6) * 2;
          *(int *)(unaff_BP + iVar4 + -0x6c) = *(int *)(iVar8 + 0x1fca) + 0xc;
          iVar8 = *(int *)(iVar8 + 0x1f8a) + 0x18;
LAB_1000_0d5a:
          *(int *)(unaff_BP + iVar4 + -0x4a) = iVar8;
          *(int *)(unaff_BP + -2) = *(int *)(unaff_BP + -2) + 1;
        }
      }
      else if (iVar8 == 2) {
        iVar8 = FUN_1000_efc8();
        if (((iVar8 % 0x28 == 0) &&
            (iVar8 = *(int *)(unaff_BP + -0x90) * 2, *(int *)(iVar8 + 0x1fca) == 0)) &&
           (*(int *)(unaff_BP + -0x2a) < *(int *)(unaff_BP + -0x26))) {
          iVar4 = FUN_1000_efc8();
          *(int *)(iVar8 + 0x1fca) = (iVar4 % 2 + 7) * 0x20;
          iVar4 = FUN_1000_efc8();
          iVar4 = (iVar4 % 2) * 0x4c0 + -0x140;
          *(int *)(iVar8 + 0x1f8a) = iVar4;
          if (iVar4 == 0x140) {
            uVar5 = 0;
          }
          else if (-*(int *)(iVar8 + 0x1f8a) == -0x140 || -*(int *)(iVar8 + 0x1f8a) + 0x140 < 0) {
            uVar5 = 0xffff;
          }
          else {
            uVar5 = 1;
          }
          *(undefined2 *)(unaff_BP + -0x10c) = uVar5;
          iVar8 = FUN_1000_efc8();
          iVar4 = *(int *)(unaff_BP + -0x90) * 2;
          *(int *)(iVar4 + 0x1d6a) = (iVar8 % 3 + 7) * *(int *)(unaff_BP + -0x10c);
          *(undefined2 *)(iVar4 + 0x1d8a) = 0;
        }
        iVar8 = *(int *)(unaff_BP + -0x90) * 2;
        iVar8 = *(int *)(iVar8 + 0x1f8a) + *(int *)(iVar8 + 0x1d6a);
        if ((iVar8 < -0x13f) || (0x37f < iVar8)) {
          *(undefined2 *)(*(int *)(unaff_BP + -0x90) * 2 + 0x1fca) = 0;
        }
        if (((*(int *)(*(int *)(unaff_BP + -0x90) * 2 + 0x1fca) != 0) &&
            (iVar8 = FUN_1000_efc8(),
            iVar8 % (((*(int *)0x181e * -2 + 5) - *(int *)0x20c6) * 10) == 0)) &&
           ((*(int *)(unaff_BP + -0x24) < 8 &&
            ((iVar8 = *(int *)(unaff_BP + -0x90) * 2, 0 < *(int *)(iVar8 + 0x1f8a) &&
             (*(int *)(iVar8 + 0x1f8a) < 0x241)))))) {
          *(undefined2 *)(unaff_BP + -0xb2) = 0;
          do {
            if (*(int *)(unaff_BP + *(int *)(unaff_BP + -0xb2) * 2 + -0x8c) < -0xf) {
              *(undefined2 *)(unaff_BP + -0xd6) = *(undefined2 *)(unaff_BP + -0xb2);
            }
            *(int *)(unaff_BP + -0xb2) = *(int *)(unaff_BP + -0xb2) + 1;
          } while (*(int *)(unaff_BP + -0xb2) < 8);
          iVar8 = *(int *)(unaff_BP + -0x90) * 2;
          iVar4 = *(int *)(unaff_BP + -0xd6) * 2;
          *(int *)(unaff_BP + iVar4 + -0x8c) = *(int *)(iVar8 + 0x1fca) + 0xc;
          *(int *)(unaff_BP + iVar4 + -0x7c) = *(int *)(iVar8 + 0x1f8a) + 0x18;
          *(undefined2 *)(unaff_BP + iVar4 + -0xe8) = 0;
          *(int *)(unaff_BP + -0x24) = *(int *)(unaff_BP + -0x24) + 1;
          FUN_1000_cff4(2);
        }
      }
      else if (iVar8 == 3) {
        iVar8 = FUN_1000_efc8();
        if (((iVar8 % (((3 - *(int *)0x181e) * 2 - *(int *)0x20c6) * 10) == 0) &&
            (iVar8 = *(int *)(unaff_BP + -0x90) * 2, *(int *)(iVar8 + 0x1fca) == 0)) &&
           (*(int *)(unaff_BP + -0x2a) < *(int *)(unaff_BP + -0x26))) {
          iVar4 = FUN_1000_efc8();
          *(int *)(iVar8 + 0x1fca) = (iVar4 % 2 + 2) * 0x20;
          iVar4 = FUN_1000_efc8();
          iVar4 = (iVar4 % 2) * 0x4e0 + -0x140;
          *(int *)(iVar8 + 0x1f8a) = iVar4;
          if (iVar4 == 0x140) {
            uVar5 = 0;
          }
          else if (-*(int *)(iVar8 + 0x1f8a) == -0x140 || -*(int *)(iVar8 + 0x1f8a) + 0x140 < 0) {
            uVar5 = 0xffff;
          }
          else {
            uVar5 = 1;
          }
          *(undefined2 *)(unaff_BP + -0x10c) = uVar5;
          iVar8 = FUN_1000_efc8();
          iVar4 = *(int *)(unaff_BP + -0x90) * 2;
          *(int *)(iVar4 + 0x1d6a) = (iVar8 % 4 + 0x10) * *(int *)(unaff_BP + -0x10c);
          *(undefined2 *)(iVar4 + 0x1d8a) = 0;
        }
        if (*(int *)(unaff_BP + -0x26) <= *(int *)(unaff_BP + -0x2a)) {
          iVar8 = *(int *)(*(int *)(unaff_BP + -0x90) * 2 + 0x1d6a);
          if (iVar8 == 0) {
            iVar8 = 0;
          }
          else if (iVar8 < 1) {
            iVar8 = -1;
          }
          else {
            iVar8 = 1;
          }
          *(int *)(unaff_BP + -0x10c) = iVar8;
          *(int *)(*(int *)(unaff_BP + -0x90) * 2 + 0x1d6a) = iVar8 << 3;
        }
        iVar8 = *(int *)(unaff_BP + -0x90) * 2;
        iVar8 = *(int *)(iVar8 + 0x1f8a) + *(int *)(iVar8 + 0x1d6a);
        if ((iVar8 < -0x13f) || (0x37f < iVar8)) {
          *(undefined2 *)(*(int *)(unaff_BP + -0x90) * 2 + 0x1fca) = 0;
        }
        if (((*(int *)(*(int *)(unaff_BP + -0x90) * 2 + 0x1fca) != 0) &&
            (iVar8 = FUN_1000_efc8(), iVar8 % (((4 - *(int *)0x20c6) - *(int *)0x181e) * 5) == 0))
           && ((*(int *)(unaff_BP + -2) < 0x10 &&
               ((iVar8 = *(int *)(unaff_BP + -0x90) * 2, 0 < *(int *)(iVar8 + 0x1f8a) &&
                (*(int *)(iVar8 + 0x1f8a) < 0x240)))))) {
          *(undefined2 *)(unaff_BP + -0xb2) = 0;
          do {
            if (*(int *)(unaff_BP + *(int *)(unaff_BP + -0xb2) * 2 + -0x6c) < 0x21) {
              *(undefined2 *)(unaff_BP + -0xd6) = *(undefined2 *)(unaff_BP + -0xb2);
            }
            *(int *)(unaff_BP + -0xb2) = *(int *)(unaff_BP + -0xb2) + 1;
          } while (*(int *)(unaff_BP + -0xb2) < 0x10);
          iVar8 = *(int *)(unaff_BP + -0x90) * 2;
          iVar4 = *(int *)(unaff_BP + -0xd6) * 2;
          *(int *)(unaff_BP + iVar4 + -0x6c) = *(int *)(iVar8 + 0x1fca) + 0x10;
          iVar8 = *(int *)(iVar8 + 0x1f8a) + 0x10;
          goto LAB_1000_0d5a;
        }
      }
      else if (iVar8 == 4) {
        iVar8 = FUN_1000_efc8();
        if (((iVar8 % 0x1e == 0) &&
            (iVar8 = *(int *)(unaff_BP + -0x90) * 2, *(int *)(iVar8 + 0x1fca) == 0)) &&
           (*(int *)(unaff_BP + -0x2a) < *(int *)(unaff_BP + -0x26))) {
          *(undefined2 *)(iVar8 + 0x1fca) = 0x120;
          iVar4 = FUN_1000_efc8();
          iVar4 = (iVar4 % 2) * 0x4c0 + -0x140;
          *(int *)(iVar8 + 0x1f8a) = iVar4;
          if (iVar4 == 0x140) {
            uVar5 = 0;
          }
          else if (-*(int *)(iVar8 + 0x1f8a) == -0x140 || -*(int *)(iVar8 + 0x1f8a) + 0x140 < 0) {
            uVar5 = 0xffff;
          }
          else {
            uVar5 = 1;
          }
          *(undefined2 *)(unaff_BP + -0x10c) = uVar5;
          iVar8 = FUN_1000_efc8();
          iVar4 = *(int *)(unaff_BP + -0x90) * 2;
          *(int *)(iVar4 + 0x1d6a) = (iVar8 % 4 + 5) * *(int *)(unaff_BP + -0x10c);
          *(undefined2 *)(iVar4 + 0x1d8a) = 0;
          *(undefined2 *)(iVar4 + 0x1822) = 0;
        }
        iVar8 = *(int *)(unaff_BP + -0x90) * 2;
        if ((*(int *)(iVar8 + 0x1d6a) == 0) && (*(int *)(iVar8 + 0x1822) < 4)) {
          *(int *)(iVar8 + 0x1822) = *(int *)(iVar8 + 0x1822) + 1;
        }
        iVar8 = *(int *)(unaff_BP + -0x90) * 2;
        if ((*(int *)(iVar8 + 0x1d6a) != 0) && (0 < *(int *)(iVar8 + 0x1822))) {
          *(int *)(iVar8 + 0x1822) = *(int *)(iVar8 + 0x1822) + -1;
        }
        iVar4 = *(int *)(unaff_BP + -0x90) * 2;
        iVar8 = *(int *)(iVar4 + 0x1f8a) + *(int *)(iVar4 + 0x1d6a);
        if (((0x1f < iVar8) && (iVar8 < 0x221)) &&
           (iVar8 = FUN_1000_efc8(), iVar8 % (((3 - *(int *)0x181e) * 2 - *(int *)0x20c6) * 10) == 0
           )) {
          *(undefined2 *)(iVar4 + 0x1d6a) = 0;
        }
        iVar8 = *(int *)(unaff_BP + -0x90) * 2;
        iVar8 = *(int *)(iVar8 + 0x1f8a) + *(int *)(iVar8 + 0x1d6a);
        if ((iVar8 < -0x13f) || (0x37f < iVar8)) {
          *(undefined2 *)(*(int *)(unaff_BP + -0x90) * 2 + 0x1fca) = 0;
        }
        if (*(int *)(*(int *)(unaff_BP + -0x90) * 2 + 0x1fca) != 0) {
          iVar8 = *(int *)(unaff_BP + -0x90) * 2;
          if (((*(int *)(iVar8 + 0x1822) == 4) && (*(int *)(unaff_BP + -0x24) < 4)) &&
             ((0 < *(int *)(iVar8 + 0x1f8a) && (*(int *)(iVar8 + 0x1f8a) < 0x241)))) {
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
              iVar8 = *(int *)(unaff_BP + -0x90) * 2;
              iVar4 = *(int *)(unaff_BP + -0xd6) * 2;
              *(int *)(unaff_BP + iVar4 + -0x8c) = *(int *)(iVar8 + 0x1fca) + 8;
              *(int *)(unaff_BP + iVar4 + -0x7c) =
                   *(int *)(unaff_BP + -0x10a) * 0x10 + *(int *)(iVar8 + 0x1f8a);
              *(undefined2 *)(unaff_BP + iVar4 + -0xe8) = 0;
              *(int *)(unaff_BP + -0x10a) = *(int *)(unaff_BP + -0x10a) + 1;
            }
            *(int *)(unaff_BP + -0x24) = *(int *)(unaff_BP + -0x24) + 4;
            FUN_1000_cff4(2);
          }
          iVar8 = *(int *)(unaff_BP + -0x90) * 2;
          if (*(int *)(iVar8 + 0x1822) == 4) {
            if (*(int *)(iVar8 + 0x1f8a) == 0x140) {
              uVar5 = 0;
            }
            else if (-*(int *)(iVar8 + 0x1f8a) == -0x140 || -*(int *)(iVar8 + 0x1f8a) + 0x140 < 0) {
              uVar5 = 0xffff;
            }
            else {
              uVar5 = 1;
            }
            *(undefined2 *)(unaff_BP + -0x10c) = uVar5;
            iVar8 = FUN_1000_efc8();
            *(int *)(*(int *)(unaff_BP + -0x90) * 2 + 0x1d6a) =
                 (iVar8 % 4 + 5) * *(int *)(unaff_BP + -0x10c);
          }
        }
      }
      else if (iVar8 == 9) {
        FUN_1000_1288();
        return;
      }
    }
    *(int *)(unaff_BP + -0x90) = *(int *)(unaff_BP + -0x90) + 1;
  } while( true );
}



/* 1000:1faa  FUN_1000_1faa  49 bytes, 2 callers */

undefined2 __cdecl16near FUN_1000_1faa(void)

{
  undefined2 uVar1;
  int unaff_BP;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  FUN_1000_a23c();
  FUN_1000_cf2c();
  if ((*(int *)(unaff_BP + -0x4c) == 1) && (*(int *)0x1842 == 0)) {
    FUN_1000_a29e();
  }
  uVar1 = *(undefined2 *)0x1844;
  out(0xa6,(char)uVar1);
  if ((*(int *)(unaff_BP + -0x4c) == 1) || (*(int *)0x1842 == 0)) {
    uVar1 = FUN_1000_84ae();
  }
  return uVar1;
}



/* 1000:1fdc  FUN_1000_1fdc  6180 bytes, 1 callers */

undefined2 FUN_1000_1fdc(void)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  undefined2 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  int local_166;
  int aiStack_15c [16];
  int aiStack_13c [16];
  int local_11c;
  int aiStack_11a [16];
  int aiStack_fa [16];
  int aiStack_da [16];
  int aiStack_ba [16];
  int local_9a;
  int aiStack_98 [16];
  int local_78;
  int local_76;
  int local_74;
  int local_72;
  int local_70;
  int local_6e;
  int local_6c;
  int local_6a;
  int aiStack_68 [16];
  int local_48;
  int local_46;
  int local_44;
  int aiStack_42 [16];
  int aiStack_22 [16];
  
  if (*(int *)0x1818 != *(int *)0x1dae) {
    FUN_1000_908c();
  }
  FUN_1000_8098();
  local_6e = 0;
  do {
    aiStack_15c[local_6e] = -0x10;
    local_6e = local_6e + 1;
  } while (local_6e < 0x10);
  local_6e = 0;
  do {
    aiStack_fa[local_6e] = 0x160;
    local_6e = local_6e + 1;
  } while (local_6e < 0x10);
  local_6e = 0;
  do {
    iVar9 = local_6e;
    aiStack_ba[local_6e] = 0x160;
    aiStack_22[iVar9] = 0;
    aiStack_42[iVar9] = 0;
    local_6e = local_6e + 1;
  } while (local_6e < 0x10);
  local_11c = 1;
  *(undefined2 *)0x1fca = 0x120;
  *(undefined2 *)0x1db4 = 0;
  *(undefined2 *)0x1db2 = 0;
  *(undefined2 *)0x1d40 = 0;
  *(undefined2 *)0x193e = 0;
  *(undefined2 *)0x1dc0 = 0;
  local_6c = 0;
  local_70 = 0;
  local_78 = 0;
  *(undefined2 *)0x193c = 0;
  *(undefined2 *)0x184a = 0;
  local_46 = 0;
  local_48 = 0;
  local_6a = 0;
  out(0xa6,(byte)*(undefined2 *)0x1844 ^ 1);
  FUN_1000_b4ee();
  FUN_1000_b854(4,0,0x4b,0x138,5);
  FUN_1000_8292();
  out(0xa6,(byte)*(undefined2 *)0x1844);
  out(0xa4,(byte)*(undefined2 *)0x1844 ^ 1);
  FUN_1000_b4ee();
  FUN_1000_b854(4,0,0x4b,0x138,5);
  FUN_1000_8292();
  FUN_1000_bfd6(*(undefined2 *)0x1f8a,*(undefined2 *)0x1fca,2);
  FUN_1000_bfd6(*(int *)0x1f8a + 0x20,*(undefined2 *)0x1fca,3);
  out(0xa4,(byte)*(undefined2 *)0x1844);
  out(0xa6,(byte)*(undefined2 *)0x1844 ^ 1);
  FUN_1000_cf6a(4);
  FUN_1000_cf44();
  FUN_1000_d046();
  if (*(int *)0x1818 == *(int *)0x1dae) {
    *(undefined2 *)0x1d4a = 4;
    *(undefined2 *)0x1d48 = 4;
    *(undefined2 *)0x181e = 0;
    *(undefined2 *)0x20c6 = 0;
    FUN_1000_a2ca();
    *(undefined2 *)0x1faa = 10;
    FUN_1000_82d7(0x2b8);
    FUN_1000_a072();
  }
  else {
    FUN_1000_a196();
  }
  uVar6 = (int)*(uint *)0x1818 >> 0xf;
  local_44 = ((*(uint *)0x181e & *(uint *)0x20c6) +
              (((int)((*(uint *)0x1818 ^ uVar6) - uVar6) >> 2 ^ uVar6) - uVar6) + 3) * 10;
  *(undefined2 *)0xdd0 = 0;
  do {
    FUN_1000_8184();
    local_76 = FUN_1000_e3c8(0x2130);
    if (((local_76 != 0) || (*(int *)0x213e != 0)) && (FUN_1000_9e70(), *(int *)0x184c == 0))
    goto LAB_1000_380a;
    *(undefined2 *)0x1d6a = 0;
    if (*(int *)0x1faa < 10) {
      iVar9 = *(int *)0x1faa;
      *(int *)0x1faa = *(int *)0x1faa + -1;
      if (iVar9 < 1) {
        local_6a = 1;
        *(int *)0x1842 = *(int *)0x1842 + -1;
LAB_1000_380a:
        FUN_1000_cf2c();
        FUN_1000_a23c();
        if ((local_6a == 1) && (*(int *)0x1842 == 0)) {
          FUN_1000_a29e();
        }
        uVar4 = *(undefined2 *)0x1844;
        out(0xa6,(char)uVar4);
        if ((local_6a == 1) || (*(int *)0x1842 == 0)) {
          uVar4 = FUN_1000_84ae();
        }
        return uVar4;
      }
    }
    else {
      if ((*(int *)0x2136 != 0) && (*(int *)0x1d4a + *(int *)0x1f8a < 0x210)) {
        *(undefined2 *)0x1d6a = *(undefined2 *)0x1d4a;
      }
      if ((*(int *)0x2134 != 0) && (0x2f < *(int *)0x1f8a - *(int *)0x1d4a)) {
        *(int *)0x1d6a = -*(int *)0x1d4a;
      }
      if ((((*(int *)0x2138 != 0) && (*(int *)0x212c == 0)) ||
          ((*(int *)0x213a != 0 && (*(int *)0x212c != 0)))) &&
         ((iVar9 = *(int *)0x20c6 * 2 - *(int *)0x1d48, -local_78 != iVar9 && local_78 <= -iVar9 &&
          (local_11c != 0)))) {
        for (local_6e = 0; local_6e < *(int *)0x1d48; local_6e = local_6e + 1) {
          if (aiStack_15c[local_6e] < -0xf) {
            local_72 = local_6e;
            break;
          }
        }
        iVar9 = local_72;
        aiStack_15c[local_72] = *(int *)0x1fca + 0x10;
        aiStack_11a[iVar9] = *(int *)0x1f8a + 5;
        local_78 = local_78 + 1;
        aiStack_13c[iVar9] = 0;
        local_11c = 0;
        if (*(int *)0x20c6 == 1) {
          for (local_6e = 0; local_6e < *(int *)0x1d48; local_6e = local_6e + 1) {
            if (aiStack_15c[local_6e] < -0xf) {
              local_72 = local_6e;
              break;
            }
          }
          iVar9 = local_72;
          aiStack_15c[local_72] = *(int *)0x1fca + 0x10;
          aiStack_11a[iVar9] = *(int *)0x1f8a + 5;
          aiStack_13c[iVar9] = -1;
          for (local_6e = 0; local_6e < *(int *)0x1d48; local_6e = local_6e + 1) {
            if (aiStack_15c[local_6e] < -0xf) {
              local_72 = local_6e;
              break;
            }
          }
          iVar9 = local_72;
          aiStack_15c[local_72] = *(int *)0x1fca + 0x10;
          aiStack_11a[iVar9] = *(int *)0x1f8a + 5;
          aiStack_13c[iVar9] = 1;
          local_78 = local_78 + 2;
        }
        FUN_1000_cff4(1);
      }
      if ((((*(int *)0x213a != 0) && (*(int *)0x212c == 0)) ||
          ((*(int *)0x2138 != 0 && (*(int *)0x212c != 0)))) &&
         ((iVar9 = *(int *)0x20c6 * 2 - *(int *)0x1d48, -local_78 != iVar9 && local_78 <= -iVar9 &&
          (local_11c != 0)))) {
        for (local_6e = 0; local_6e < *(int *)0x1d48; local_6e = local_6e + 1) {
          if (aiStack_15c[local_6e] < -0xf) {
            local_72 = local_6e;
            break;
          }
        }
        iVar9 = local_72;
        aiStack_15c[local_72] = *(int *)0x1fca + 0x10;
        aiStack_11a[iVar9] = *(int *)0x1f8a + 0x2c;
        local_78 = local_78 + 1;
        aiStack_13c[iVar9] = 0;
        local_11c = 0;
        if (*(int *)0x20c6 == 1) {
          for (local_6e = 0; local_6e < *(int *)0x1d48; local_6e = local_6e + 1) {
            if (aiStack_15c[local_6e] < -0xf) {
              local_72 = local_6e;
              break;
            }
          }
          iVar9 = local_72;
          aiStack_15c[local_72] = *(int *)0x1fca + 0x10;
          aiStack_11a[iVar9] = *(int *)0x1f8a + 0x2c;
          aiStack_13c[iVar9] = -1;
          for (local_6e = 0; local_6e < *(int *)0x1d48; local_6e = local_6e + 1) {
            if (aiStack_15c[local_6e] < -0xf) {
              local_72 = local_6e;
              break;
            }
          }
          iVar9 = local_72;
          aiStack_15c[local_72] = *(int *)0x1fca + 0x10;
          aiStack_11a[iVar9] = *(int *)0x1f8a + 0x2c;
          aiStack_13c[iVar9] = 1;
          local_78 = local_78 + 2;
        }
        FUN_1000_cff4(1);
      }
      if ((*(int *)0x2138 == 0) && (*(int *)0x213a == 0)) {
        local_11c = 1;
      }
    }
    local_46 = 0;
    for (local_6e = 1; local_6e <= *(int *)0x17f4; local_6e = local_6e + 1) {
      if (-0x20 < *(int *)(local_6e * 2 + 0x1fca)) {
        local_46 = local_46 + 1;
      }
      iVar9 = local_6e * 2;
      if (*(int *)(iVar9 + 0x1faa) < 10) {
        piVar1 = (int *)(iVar9 + 0x1faa);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          *(undefined2 *)(iVar9 + 0x1fca) = 0xffe0;
          *(undefined2 *)(iVar9 + 0x1faa) = 10;
        }
      }
      else {
        iVar9 = *(int *)(local_6e * 2 + 0x17f6);
        if (iVar9 == 1) {
          iVar9 = FUN_1000_efc8();
          if (((iVar9 % 0x14 == 0) && (iVar9 = local_6e * 2, *(int *)(iVar9 + 0x1fca) < -0x1f)) &&
             (local_48 < local_44)) {
            iVar5 = FUN_1000_efc8();
            *(int *)(iVar9 + 0x1fca) = iVar5 % 100 + 0x3c;
            iVar5 = FUN_1000_efc8();
            iVar5 = (iVar5 % 2) * 0x4e0 + -0x140;
            *(int *)(iVar9 + 0x1f8a) = iVar5;
            if (iVar5 == 0x140) {
              iVar9 = 0;
            }
            else if (-*(int *)(iVar9 + 0x1f8a) == -0x140 || -*(int *)(iVar9 + 0x1f8a) + 0x140 < 0) {
              iVar9 = -1;
            }
            else {
              iVar9 = 1;
            }
            iVar5 = FUN_1000_efc8();
            iVar8 = local_6e * 2;
            *(int *)(iVar8 + 0x1d6a) = (iVar5 % 3 + 1) * iVar9;
            iVar9 = FUN_1000_efc8();
            *(int *)(iVar8 + 0x1d8a) = iVar9 % 7 + 3;
            iVar9 = FUN_1000_efc8();
            *(int *)(iVar8 + 0x1822) = iVar9 % 0x32 + (0x32 - *(int *)(iVar8 + 0x1d8a)) * 3;
          }
          if (local_44 <= local_48) {
            *(undefined2 *)(local_6e * 2 + 0x1d8a) = 0xfff8;
          }
          iVar9 = *(int *)(local_6e * 2 + 0x1f8a) + *(int *)(local_6e * 2 + 0x1d6a);
          if ((iVar9 < -0x13f) || (0x39f < iVar9)) {
            iVar5 = local_6e * 2;
            *(undefined2 *)(iVar5 + 0x1fca) = 0xffe0;
            iVar9 = FUN_1000_efc8();
            if (iVar9 % 0x20 + *(int *)0x1f8a != *(int *)(iVar5 + 0x1f8a)) {
              iVar9 = FUN_1000_efc8();
              if ((iVar9 % 0x20 - *(int *)(iVar5 + 0x1f8a)) + *(int *)0x1f8a < 1) {
                iVar9 = -1;
              }
              else {
                iVar9 = 1;
              }
              *(int *)(iVar5 + 0x1d6a) = *(int *)(iVar5 + 0x1d6a) + iVar9;
            }
          }
          if (-0x20 < *(int *)(local_6e * 2 + 0x1fca)) {
            iVar9 = FUN_1000_efc8();
            iVar9 = iVar9 % (*(int *)0x181e * -0x14 + *(int *)0x20c6 * -0xf + 0x32);
            if (((iVar9 == 0) && (local_70 < 0x10)) &&
               ((0 < *(int *)(local_6e * 2 + 0x1f8a) && (*(int *)(local_6e * 2 + 0x1f8a) < 0x261))))
            {
              local_72 = iVar9;
              do {
                if (0x15f < aiStack_fa[local_72]) {
                  local_74 = local_72;
                }
                iVar9 = local_74;
                local_72 = local_72 + 1;
              } while (local_72 < 0x10);
              iVar5 = local_6e * 2;
              aiStack_fa[local_74] = *(int *)(iVar5 + 0x1fca) + 0xc;
              aiStack_da[iVar9] = *(int *)(iVar5 + 0x1f8a) + 8;
              aiStack_68[iVar9] = 0;
              local_70 = local_70 + 1;
            }
            iVar9 = *(int *)(local_6e * 2 + 0x1d6a);
            if (iVar9 == 0) {
              iVar9 = 0;
            }
            else if (iVar9 < 1) {
              iVar9 = -1;
            }
            else {
              iVar9 = 1;
            }
            iVar5 = *(int *)0x1f8a - *(int *)(local_6e * 2 + 0x1f8a);
            if (iVar5 == -0x10) {
              iVar5 = 0;
            }
            else if (iVar5 == -0x10 || iVar5 + 0x10 < 0) {
              iVar5 = -1;
            }
            else {
              iVar5 = 1;
            }
            if ((iVar5 != iVar9) || (*(int *)0x1844 != 0)) {
              iVar9 = FUN_1000_efc8();
              iVar5 = local_6e * 2;
              if (iVar9 % 0x20 + *(int *)0x1f8a != *(int *)(iVar5 + 0x1f8a)) {
                iVar9 = FUN_1000_efc8();
                if ((iVar9 % 0x20 - *(int *)(iVar5 + 0x1f8a)) + *(int *)0x1f8a < 1) {
                  iVar9 = -1;
                }
                else {
                  iVar9 = 1;
                }
                *(int *)(iVar5 + 0x1d6a) = *(int *)(iVar5 + 0x1d6a) + iVar9;
              }
            }
            uVar6 = *(uint *)(local_6e * 2 + 0x1d6a);
            if ((0x14 < (int)((uVar6 ^ (int)uVar6 >> 0xf) - ((int)uVar6 >> 0xf))) && (uVar6 != 0)) {
              if ((int)uVar6 < 1) {
                iVar9 = -1;
              }
              else {
                iVar9 = 1;
              }
              piVar1 = (int *)(local_6e * 2 + 0x1d6a);
              *piVar1 = *piVar1 - iVar9;
            }
            iVar9 = local_6e * 2;
            if (*(int *)(iVar9 + 0x1822) < *(int *)(iVar9 + 0x1fca)) {
              *(int *)(iVar9 + 0x1d8a) = *(int *)(iVar9 + 0x1d8a) + -1;
            }
            if (*(int *)(local_6e * 2 + 0x1fca) < 0x1e) {
              piVar1 = (int *)(local_6e * 2 + 0x1d8a);
              *piVar1 = *piVar1 + 1;
            }
          }
        }
        else if (iVar9 == 2) {
          iVar9 = FUN_1000_efc8();
          if (((iVar9 % 10 == 0) && (iVar9 = local_6e * 2, *(int *)(iVar9 + 0x1fca) < -0x1f)) &&
             (local_48 < local_44)) {
            iVar5 = FUN_1000_efc8();
            *(int *)(iVar9 + 0x1fca) = (iVar5 % 3 + 1) * 0x20;
            iVar5 = FUN_1000_efc8();
            iVar5 = (iVar5 % 2) * 0x4c0 + -0x140;
            *(int *)(iVar9 + 0x1f8a) = iVar5;
            if (iVar5 == 0x140) {
              iVar9 = 0;
            }
            else if (-*(int *)(iVar9 + 0x1f8a) == -0x140 || -*(int *)(iVar9 + 0x1f8a) + 0x140 < 0) {
              iVar9 = -1;
            }
            else {
              iVar9 = 1;
            }
            iVar5 = FUN_1000_efc8();
            *(int *)(local_6e * 2 + 0x1d6a) = (iVar5 % 4 + 0xc) * iVar9;
            *(undefined2 *)(local_6e * 2 + 0x1d8a) = 0;
          }
          iVar9 = *(int *)(local_6e * 2 + 0x1f8a) + *(int *)(local_6e * 2 + 0x1d6a);
          if ((iVar9 < -0x13f) || (0x37f < iVar9)) {
            *(undefined2 *)(local_6e * 2 + 0x1fca) = 0xffe0;
          }
          if (-0x20 < *(int *)(local_6e * 2 + 0x1fca)) {
            iVar9 = FUN_1000_efc8();
            iVar9 = iVar9 % ((3 - *(int *)0x20c6) * 10 + *(int *)0x181e * -0xd);
            if ((((iVar9 == 0) && (local_70 < 0x10)) && (0 < *(int *)(local_6e * 2 + 0x1f8a))) &&
               (*(int *)(local_6e * 2 + 0x1f8a) < 0x241)) {
              local_72 = iVar9;
              do {
                if (0x15f < aiStack_fa[local_72]) {
                  local_74 = local_72;
                }
                iVar9 = local_74;
                local_72 = local_72 + 1;
              } while (local_72 < 0x10);
              iVar5 = local_6e * 2;
              aiStack_fa[local_74] = *(int *)(iVar5 + 0x1fca) + 0x14;
              aiStack_da[iVar9] = *(int *)(iVar5 + 0x1f8a) + 0x10;
              aiStack_68[iVar9] = 0;
              local_70 = local_70 + 1;
            }
          }
        }
        else if (iVar9 == 3) {
          iVar9 = FUN_1000_efc8();
          if (((iVar9 % ((7 - *(int *)0x20c6) * 0x14 + *(int *)0x181e * -0x1e) == 0) &&
              (iVar9 = local_6e * 2, *(int *)(iVar9 + 0x1fca) < -0x1f)) && (local_48 < local_44)) {
            *(undefined2 *)(iVar9 + 0x1fca) = 0xffe1;
            iVar5 = FUN_1000_efc8();
            iVar5 = iVar5 % 0x200 + 0x20;
            *(int *)(iVar9 + 0x1f8a) = iVar5;
            if (iVar5 == 0x140) {
              iVar9 = 0;
            }
            else if (-iVar5 == -0x140 || -iVar5 + 0x140 < 0) {
              iVar9 = -1;
            }
            else {
              iVar9 = 1;
            }
            iVar5 = FUN_1000_efc8();
            iVar8 = local_6e * 2;
            *(int *)(iVar8 + 0x1d6a) = (iVar5 * iVar9) % 8;
            iVar9 = FUN_1000_efc8();
            *(int *)(iVar8 + 0x1d8a) = iVar9 % 8 + 8;
          }
          if (-0x20 < *(int *)(local_6e * 2 + 0x1fca)) {
            if (0x32 < *(int *)(local_6e * 2 + 0x1fca)) {
              piVar1 = (int *)(local_6e * 2 + 0x1d8a);
              *piVar1 = *piVar1 + -1;
            }
            iVar9 = FUN_1000_efc8();
            iVar9 = iVar9 % ((3 - *(int *)0x20c6) * 10 + *(int *)0x181e * -0xd);
            if ((iVar9 == 0) && (local_6c < 0x10)) {
              local_72 = iVar9;
              do {
                if (0x15f < aiStack_ba[local_72]) {
                  local_74 = local_72;
                }
                iVar9 = local_74;
                local_72 = local_72 + 1;
              } while (local_72 < 0x10);
              iVar5 = local_6e * 2;
              aiStack_ba[local_74] = *(int *)(iVar5 + 0x1fca) + 0x18;
              iVar5 = *(int *)(iVar5 + 0x1f8a) + 0x20;
              aiStack_98[iVar9] = iVar5;
              uVar6 = 0x20 - (iVar5 - *(int *)0x1f8a);
              uVar7 = (int)uVar6 >> 0xf;
              if ((int)((uVar6 ^ uVar7) - uVar7) < 0x21) {
                iVar5 = FUN_1000_efc8();
                iVar9 = local_74;
                aiStack_42[local_74] = iVar5 % 6 + 8;
                iVar5 = FUN_1000_efc8();
                aiStack_22[iVar9] = iVar5 % 5 + -2;
              }
              else {
                iVar5 = FUN_1000_efc8();
                aiStack_42[iVar9] = iVar5 % 6 + 8;
                iVar5 = *(int *)0x1f8a;
                if (aiStack_98[iVar9] == iVar5) {
                  iVar9 = 0;
                }
                else if (iVar5 == aiStack_98[iVar9] || iVar5 - aiStack_98[iVar9] < 0) {
                  iVar9 = -1;
                }
                else {
                  iVar9 = 1;
                }
                iVar5 = FUN_1000_efc8();
                aiStack_22[local_74] = (iVar5 % 6 + 2) * iVar9;
              }
              local_6c = local_6c + 1;
            }
          }
        }
        else if (iVar9 == 4) {
          iVar9 = FUN_1000_efc8();
          if (((iVar9 % 0x14 == 0) && (iVar9 = local_6e * 2, *(int *)(iVar9 + 0x1fca) < -0x1f)) &&
             (local_48 < local_44)) {
            iVar5 = FUN_1000_efc8();
            *(int *)(iVar9 + 0x1fca) = (iVar5 % 5 + 1) * 0x20;
            iVar5 = FUN_1000_efc8();
            iVar5 = (iVar5 % 2) * 0x4c0 + -0x140;
            *(int *)(iVar9 + 0x1f8a) = iVar5;
            if (iVar5 == 0x140) {
              iVar9 = 0;
            }
            else if (-*(int *)(iVar9 + 0x1f8a) == -0x140 || -*(int *)(iVar9 + 0x1f8a) + 0x140 < 0) {
              iVar9 = -1;
            }
            else {
              iVar9 = 1;
            }
            iVar5 = local_6e * 2;
            *(int *)(iVar5 + 0x1d6a) = iVar9 * 0x14;
            *(undefined2 *)(iVar5 + 0x1d8a) = 0;
            iVar9 = FUN_1000_efc8();
            *(int *)(iVar5 + 0x1822) = iVar9 % 0x240 + 0x20;
          }
          iVar9 = *(int *)(local_6e * 2 + 0x1f8a) + *(int *)(local_6e * 2 + 0x1d6a);
          if ((iVar9 < -0x13f) || (0x37f < iVar9)) {
            *(undefined2 *)(local_6e * 2 + 0x1fca) = 0xffe0;
          }
          if ((-0x20 < *(int *)(local_6e * 2 + 0x1fca)) &&
             (iVar9 = local_6e * 2,
             *(int *)(iVar9 + 0x1f8a) + *(int *)(iVar9 + 0x1d6a) < *(int *)(iVar9 + 0x1822) !=
             *(int *)(iVar9 + 0x1f8a) < *(int *)(iVar9 + 0x1822))) {
            for (local_9a = 0; local_9a < 5; local_9a = local_9a + 1) {
              local_72 = 0;
              do {
                if (0x15f < aiStack_ba[local_72]) {
                  local_74 = local_72;
                }
                iVar9 = local_74;
                local_72 = local_72 + 1;
              } while (local_72 < 0x10);
              iVar5 = local_6e * 2;
              aiStack_ba[local_74] = *(int *)(iVar5 + 0x1fca) + 0xe;
              iVar5 = *(int *)(iVar5 + 0x1f8a) + 0xe;
              aiStack_98[iVar9] = iVar5;
              uVar6 = 0x20 - (iVar5 - *(int *)0x1f8a);
              uVar7 = (int)uVar6 >> 0xf;
              if ((int)((uVar6 ^ uVar7) - uVar7) < 0x21) {
                iVar5 = FUN_1000_efc8();
                iVar9 = local_74;
                aiStack_42[local_74] = iVar5 % 6 + 8;
                iVar5 = FUN_1000_efc8();
                aiStack_22[iVar9] = iVar5 % 5 + -2;
              }
              else {
                iVar5 = FUN_1000_efc8();
                aiStack_42[iVar9] = iVar5 % 6 + 8;
                iVar5 = *(int *)0x1f8a;
                if (aiStack_98[iVar9] == iVar5) {
                  iVar9 = 0;
                }
                else if (iVar5 == aiStack_98[iVar9] || iVar5 - aiStack_98[iVar9] < 0) {
                  iVar9 = -1;
                }
                else {
                  iVar9 = 1;
                }
                iVar5 = FUN_1000_efc8();
                aiStack_22[local_74] = (iVar5 % 6 + 2) * iVar9;
              }
              local_6c = local_6c + 1;
            }
            iVar9 = local_6e * 2;
            *(undefined2 *)(iVar9 + 0x1faa) = 9;
            *(undefined2 *)(iVar9 + 0x1d6a) = 0;
            *(undefined2 *)(iVar9 + 0x1d8a) = 0;
          }
        }
        else if (iVar9 == 9) {
          iVar9 = FUN_1000_efc8();
          if (((iVar9 % 0xf == 0) && (iVar9 = local_6e * 2, *(int *)(iVar9 + 0x1fca) < -0x1f)) &&
             (local_48 < local_44)) {
            iVar5 = FUN_1000_efc8();
            *(int *)(iVar9 + 0x1822) = (iVar5 % 3 + 3) * 0x20;
            iVar5 = FUN_1000_efc8();
            *(int *)(iVar9 + 0x1fca) = (iVar5 % 2) * 0x40 + *(int *)(iVar9 + 0x1822) + -0x20;
            iVar5 = FUN_1000_efc8();
            iVar5 = (iVar5 % 2) * 0x4e0 + -0x140;
            *(int *)(iVar9 + 0x1f8a) = iVar5;
            if (iVar5 == 0x140) {
              iVar9 = 0;
            }
            else if (-*(int *)(iVar9 + 0x1f8a) == -0x140 || -*(int *)(iVar9 + 0x1f8a) + 0x140 < 0) {
              iVar9 = -1;
            }
            else {
              iVar9 = 1;
            }
            iVar5 = FUN_1000_efc8();
            *(int *)(local_6e * 2 + 0x1d6a) = (iVar5 % 5 + 5) * iVar9;
            *(undefined2 *)(local_6e * 2 + 0x1d8a) = 0;
          }
          if (local_44 <= local_48) {
            iVar9 = *(int *)(local_6e * 2 + 0x1d6a);
            if (iVar9 == 0) {
              iVar9 = 0;
            }
            else if (iVar9 < 1) {
              iVar9 = -1;
            }
            else {
              iVar9 = 1;
            }
            *(int *)(local_6e * 2 + 0x1d6a) = iVar9 * 10;
          }
          iVar9 = *(int *)(local_6e * 2 + 0x1f8a) + *(int *)(local_6e * 2 + 0x1d6a);
          if ((iVar9 < -0x13f) || (0x39f < iVar9)) {
            *(undefined2 *)(local_6e * 2 + 0x1fca) = 0xffe0;
            *(undefined2 *)(local_6e * 2 + 0x1d8a) = 0;
          }
          if (-0x20 < *(int *)(local_6e * 2 + 0x1fca)) {
            iVar9 = local_6e * 2;
            if (*(int *)(iVar9 + 0x1822) != *(int *)(iVar9 + 0x1fca)) {
              if (-(*(int *)(iVar9 + 0x1fca) - *(int *)(iVar9 + 0x1822)) < 1) {
                iVar5 = -1;
              }
              else {
                iVar5 = 1;
              }
              *(int *)(iVar9 + 0x1d8a) = *(int *)(iVar9 + 0x1d8a) + iVar5;
            }
          }
        }
      }
    }
    if (((local_46 == 0) && (local_44 <= local_48)) && (*(int *)0x1dc0 == 0)) goto LAB_1000_380a;
    for (local_6e = 0; iVar9 = local_6e, local_6e < *(int *)0x1d48; local_6e = local_6e + 1) {
      if (-0x10 < aiStack_15c[local_6e]) {
        iVar5 = *(int *)0x181e;
        aiStack_15c[local_6e] = aiStack_15c[local_6e] + (iVar5 + 2) * -6;
        aiStack_11a[iVar9] = aiStack_11a[iVar9] + aiStack_13c[iVar9] * (iVar5 + 2) * 2;
        for (local_72 = 1; iVar9 = local_6e, local_72 <= *(int *)0x17f4; local_72 = local_72 + 1) {
          if ((9 < *(int *)(local_72 * 2 + 0x1faa)) && (-0x20 < *(int *)(local_72 * 2 + 0x1fca))) {
            uVar6 = *(uint *)(local_72 * 2 + 0x17f6);
            if (uVar6 == 9) {
              iVar5 = *(int *)(local_72 * 2 + 0x1f8a);
              if ((((iVar5 + -8 <= aiStack_11a[local_6e]) && (aiStack_11a[local_6e] <= iVar5 + 0x18)
                   ) && (iVar5 = *(int *)(local_72 * 2 + 0x1fca),
                        iVar5 + -0xc <= aiStack_15c[local_6e])) &&
                 (aiStack_15c[local_6e] <= iVar5 + 0x18)) {
                FUN_1000_824a(local_72);
                if (*(int *)0x181e == 0) {
                  aiStack_15c[iVar9] = -0x10;
                }
                local_48 = local_48 + 1;
                if (((*(int *)0x1dc0 == 0) &&
                    (iVar9 = local_72 * 2, 0x1f < *(int *)(iVar9 + 0x1f8a))) &&
                   (*(int *)(iVar9 + 0x1f8a) < 0x241)) {
                  FUN_1000_9d84();
                  *(int *)0x193e = *(int *)(iVar9 + 0x1f8a) + 8;
                  *(int *)0x1d40 = *(int *)(iVar9 + 0x1fca) + 8;
                  *(undefined2 *)0x1db2 = 0;
                  *(undefined2 *)0x1db4 = 8;
                  *(undefined2 *)0x1d44 = 0xffff;
                }
              }
            }
            else if (uVar6 < 10) {
              cVar3 = (char)uVar6;
              if (cVar3 == '\x01') {
                iVar5 = *(int *)(local_72 * 2 + 0x1f8a);
                if (iVar5 + -8 <= aiStack_11a[local_6e]) {
                  iVar5 = iVar5 + 0x18;
LAB_1000_2e40:
                  if (((aiStack_11a[local_6e] <= iVar5) &&
                      (iVar5 = *(int *)(local_72 * 2 + 0x1fca),
                      iVar5 + -0xc <= aiStack_15c[local_6e])) &&
                     (aiStack_15c[local_6e] <= iVar5 + 0x18)) {
                    FUN_1000_824a(local_72);
                    local_48 = local_48 + 1;
                    if (*(int *)0x181e == 0) {
                      aiStack_15c[iVar9] = -0x10;
                    }
                  }
                }
              }
              else if ((('\0' < (char)(cVar3 + -1)) && ((char)(cVar3 + -2) < '\x03')) &&
                      (iVar5 = *(int *)(local_72 * 2 + 0x1f8a), iVar5 + -8 <= aiStack_11a[local_6e])
                      ) {
                iVar5 = iVar5 + 0x38;
                goto LAB_1000_2e40;
              }
            }
          }
        }
        if ((aiStack_11a[local_6e] < 0x10) || (0x260 < aiStack_11a[local_6e])) {
          aiStack_15c[local_6e] = -0x10;
        }
        if (aiStack_15c[local_6e] < -0xf) {
          local_78 = local_78 + -1;
        }
      }
    }
    local_6e = 0;
    do {
      iVar9 = local_6e;
      if (aiStack_fa[local_6e] < 0x160) {
        if (aiStack_68[local_6e] < 0x10) {
          aiStack_68[local_6e] = aiStack_68[local_6e] + 1;
        }
        aiStack_fa[local_6e] = aiStack_fa[local_6e] + aiStack_68[local_6e];
        if (((*(int *)0x1faa == 10) && (*(int *)0x1f8a + -4 <= aiStack_da[iVar9])) &&
           ((aiStack_da[iVar9] <= *(int *)0x1f8a + 0x34 &&
            ((*(int *)0x1fca <= aiStack_fa[iVar9] && (aiStack_fa[iVar9] <= *(int *)0x1fca + 0x18))))
           )) {
          *(undefined2 *)0x1faa = 9;
          aiStack_fa[iVar9] = 0x160;
          FUN_1000_cff4(4);
        }
        if (0x15f < aiStack_fa[local_6e]) {
          local_70 = local_70 + -1;
        }
      }
      local_6e = local_6e + 1;
    } while (local_6e < 0x10);
    for (local_6e = 0; iVar9 = local_6e, local_6e < 0x10; local_6e = local_6e + 1) {
      if (aiStack_ba[local_6e] < 0x160) {
        aiStack_ba[local_6e] = aiStack_ba[local_6e] + aiStack_42[local_6e];
        aiStack_98[iVar9] = aiStack_98[iVar9] + aiStack_22[iVar9];
        if ((aiStack_98[iVar9] < 0x1c) || (0x260 < aiStack_98[iVar9])) {
          aiStack_ba[local_6e] = 0x160;
        }
        else {
          if ((((*(int *)0x1faa == 10) && (*(int *)0x1f8a + -2 <= aiStack_98[local_6e])) &&
              (aiStack_98[local_6e] <= *(int *)0x1f8a + 0x3a)) &&
             ((*(int *)0x1fca + 6 <= aiStack_ba[local_6e] &&
              (aiStack_ba[local_6e] <= *(int *)0x1fca + 0x1a)))) {
            *(undefined2 *)0x1faa = 9;
            aiStack_ba[local_6e] = 0x160;
            FUN_1000_cff4(4);
          }
          if ((aiStack_ba[local_6e] < 0x160) && (-1 < aiStack_ba[local_6e])) goto LAB_1000_30f4;
        }
        local_6c = local_6c + -1;
      }
LAB_1000_30f4:
    }
    if (*(int *)0x1dc0 != 0) {
      if (*(int *)0x1d44 < 0) {
        *(int *)0x1d40 = *(int *)0x1d40 + *(int *)0x1db4;
      }
      else {
        *(int *)0x1d44 = *(int *)0x1d44 + -1;
      }
      if ((((*(int *)0x1f8a + -4 <= *(int *)0x193e) && (*(int *)0x193e <= *(int *)0x1f8a + 0x34)) &&
          (*(int *)0x1fca + 8 <= *(int *)0x1d40)) && (*(int *)0x1d40 <= *(int *)0x1fca + 0x20)) {
        if (*(int *)0x1dc0 == 4) {
          FUN_1000_83b5(0x2b8);
          local_6e = 1;
          do {
            iVar9 = local_6e * 2;
            if (((*(int *)(iVar9 + 0x1faa) == 10) && (*(int *)(iVar9 + 0x1fca) != -0x20)) &&
               ((-0x20 < *(int *)(iVar9 + 0x1f8a) && (*(int *)(iVar9 + 0x1f8a) < 0x260)))) {
              local_48 = local_48 + 1;
              FUN_1000_824a(local_6e);
            }
            local_6e = local_6e + 1;
          } while (local_6e < 0x10);
          for (local_6e = 0; local_6e < *(int *)0x1d48; local_6e = local_6e + 1) {
            aiStack_15c[local_6e] = -0x10;
          }
          local_78 = 0;
          local_70 = 0;
          local_6c = 0;
          for (local_6e = 0; iVar9 = local_6e, local_6e < 0x10; local_6e = local_6e + 1) {
            aiStack_fa[local_6e] = 0x160;
            aiStack_ba[iVar9] = 0x160;
          }
          FUN_1000_cff4(4);
          FUN_1000_8425(0x2b8);
          FUN_1000_a25a();
        }
        else {
          FUN_1000_80f0();
        }
        FUN_1000_a0d8();
        *(undefined2 *)0x1dc0 = 0;
        FUN_1000_cff4(6);
      }
      if ((*(int *)0x1d44 < 0) && (0x12f < *(int *)0x1d40)) {
        *(undefined2 *)0x1d40 = 0x130;
        *(undefined2 *)0x1d44 = 0x32;
      }
      if (*(int *)0x1d44 == 0) {
        *(undefined2 *)0x1dc0 = 0;
      }
    }
    for (local_6e = *(int *)0x17f4; 0 < local_6e; local_6e = local_6e + -1) {
      iVar9 = local_6e * 2;
      *(int *)(iVar9 + 0x1f8a) = *(int *)(iVar9 + 0x1f8a) + *(int *)(iVar9 + 0x1d6a);
      *(int *)(iVar9 + 0x1fca) = *(int *)(iVar9 + 0x1fca) + *(int *)(iVar9 + 0x1d8a);
    }
    *(int *)0x1f8a = *(int *)0x1f8a + *(int *)0x1d6a;
    *(byte *)0x1844 = *(byte *)0x1844 ^ 1;
    FUN_1000_b854(4,0,0x4b,0x139 - (uint)(3 < *(int *)0x193c),5);
    for (local_6e = *(int *)0x17f4; 0 < local_6e; local_6e = local_6e + -1) {
      if (((-0x20 < *(int *)(local_6e * 2 + 0x1fca)) &&
          (iVar9 = local_6e * 2, uVar6 = -(uint)(*(int *)(iVar9 + 0x17f6) == 2) & 0x20,
          -*(int *)(iVar9 + 0x1f8a) == uVar6 || (int)-uVar6 < *(int *)(iVar9 + 0x1f8a))) &&
         (*(int *)(iVar9 + 0x1f8a) < 0x260)) {
        if (*(int *)(local_6e * 2 + 0x1faa) < 10) {
          uVar6 = *(uint *)(local_6e * 2 + 0x17f6);
          if (uVar6 == 9) {
LAB_1000_335a:
            FUN_1000_8562(local_6e);
          }
          else if (uVar6 < 10) {
            cVar3 = (char)uVar6;
            if (cVar3 == '\x01') goto LAB_1000_335a;
            if (('\0' < (char)(cVar3 + -1)) && (cVar3 == '\x04' || (char)(cVar3 + -2) < '\x02')) {
              FUN_1000_85b8(local_6e);
            }
          }
        }
        else {
          iVar9 = *(int *)(local_6e * 2 + 0x17f6);
          if (iVar9 == 1) {
            iVar9 = local_6e * 2;
            if (*(int *)(iVar9 + 0x1fca) < 0) {
              iVar5 = *(int *)(iVar9 + 0x1d6a);
              FUN_1000_c322(*(undefined2 *)(iVar9 + 0x1f8a),*(undefined2 *)(iVar9 + 0x1fca),
                            (((-(uint)(7 < iVar5) & 2) - (-(uint)(iVar5 < -7) & 2)) -
                            (-(uint)(iVar5 < -2) & 2)) + (-(uint)(2 < *(int *)(iVar9 + 0x1d6a)) & 2)
                            + *(int *)0x1844 + 0x1a);
            }
            else {
              iVar9 = *(int *)(local_6e * 2 + 0x1d6a);
              iVar9 = (((-(uint)(7 < iVar9) & 2) - (-(uint)(iVar9 < -7) & 2)) -
                      (-(uint)(iVar9 < -2) & 2)) +
                      (-(uint)(2 < *(int *)(local_6e * 2 + 0x1d6a)) & 2) + *(int *)0x1844 + 0x1a;
LAB_1000_34d4:
              FUN_1000_bfd6(*(undefined2 *)(local_6e * 2 + 0x1f8a),
                            *(undefined2 *)(local_6e * 2 + 0x1fca),iVar9);
            }
          }
          else {
            if (iVar9 == 2) {
              uVar6 = -(uint)(0 < *(int *)(local_6e * 2 + 0x1d6a)) & 2;
              iVar9 = uVar6 + 0x25;
              iVar5 = uVar6 + 0x24;
LAB_1000_350e:
              local_166 = local_6e * 2;
            }
            else {
              if (iVar9 != 3) {
                if (iVar9 != 4) {
                  if (iVar9 == 9) {
                    iVar9 = 0x2f - (uint)(*(int *)(local_6e * 2 + 0x1d6a) < 1);
                    goto LAB_1000_34d4;
                  }
                  goto LAB_1000_3307;
                }
                uVar6 = -(uint)(0 < *(int *)(local_6e * 2 + 0x1d6a)) & 2;
                iVar9 = uVar6 + 0x35;
                iVar5 = uVar6 + 0x34;
                goto LAB_1000_350e;
              }
              iVar9 = *(int *)0x1844 * 2 + 0xd;
              iVar5 = (*(int *)0x1844 + 6) * 2;
              local_166 = local_6e << 1;
            }
            FUN_1000_88a2(*(undefined2 *)(local_166 + 0x1f8a),*(undefined2 *)(local_166 + 0x1fca),
                          iVar5,iVar9);
          }
        }
      }
LAB_1000_3307:
    }
    local_72 = *(int *)0x181e * 0x10 + *(int *)0x1d42 + 0x11;
    for (local_6e = 0; local_6e < *(int *)0x1d48; local_6e = local_6e + 1) {
      if (-0x10 < aiStack_15c[local_6e]) {
        if (aiStack_15c[local_6e] < 0) {
          FUN_1000_c322(aiStack_11a[local_6e],aiStack_15c[local_6e],aiStack_13c[local_6e] + local_72
                       );
        }
        else {
          FUN_1000_bfd6(aiStack_11a[local_6e],aiStack_15c[local_6e],aiStack_13c[local_6e] + local_72
                       );
        }
      }
    }
    local_72 = *(int *)0x1d42 + *(int *)0x184a + 0x1c;
    for (local_6e = 0; local_6e < 0x10; local_6e = local_6e + 1) {
      if (aiStack_fa[local_6e] < 0x160) {
        if (aiStack_fa[local_6e] < 0) {
          FUN_1000_c322(aiStack_da[local_6e],aiStack_fa[local_6e],local_72);
        }
        else {
          FUN_1000_bfd6(aiStack_da[local_6e],aiStack_fa[local_6e],local_72);
        }
      }
    }
    local_72 = *(int *)0x1844 + *(int *)0x1d46 + *(int *)0x1d42;
    local_6e = 0;
    do {
      if ((aiStack_ba[local_6e] < 0x160) && (-1 < aiStack_ba[local_6e])) {
        FUN_1000_bfd6(aiStack_98[local_6e],aiStack_ba[local_6e],local_72);
      }
      local_6e = local_6e + 1;
    } while (local_6e < 0x10);
    if (*(int *)0x1faa < 10) {
      FUN_1000_85b8(0);
    }
    else {
      FUN_1000_bfd6(*(undefined2 *)0x1f8a,(uint)(*(int *)0x193c < 4) + *(int *)0x1fca,2);
      FUN_1000_bfd6(*(int *)0x1f8a + 0x20,(uint)(*(int *)0x193c < 4) + *(int *)0x1fca,3);
    }
    if ((*(int *)0x1dc0 != 0) &&
       (((0xf < *(int *)0x1d44 || (*(int *)0x1d44 < 1)) || (*(int *)0x1844 != 0)))) {
      if ((*(int *)0x193c < 4) && (0 < *(int *)0x1d44)) {
        bVar2 = 1;
      }
      else {
        bVar2 = 0;
      }
      FUN_1000_bfd6(*(undefined2 *)0x193e,(uint)bVar2 + *(int *)0x1d40,
                    *(int *)0x1dc0 + *(int *)0x1d42 + 0x28);
    }
    FUN_1000_8292();
    for (local_6e = *(int *)0x17f4; 0 < local_6e; local_6e = local_6e + -1) {
      if (-1 < *(int *)(local_6e * 2 + 0x1fca)) {
        iVar9 = *(int *)(local_6e * 2 + 0x17f6);
        if (iVar9 == 1) {
          iVar9 = 6;
LAB_1000_375b:
          uVar4 = 3;
        }
        else {
          if (iVar9 == 2) {
            iVar9 = 2;
          }
          else if (iVar9 == 3) {
            iVar9 = 4;
          }
          else {
            if (iVar9 != 4) {
              if (iVar9 != 9) goto LAB_1000_3769;
              iVar9 = -(*(int *)0x1844 * 7 + -0xf);
              goto LAB_1000_375b;
            }
            iVar9 = 3;
          }
          uVar4 = 7;
        }
        FUN_1000_890a(local_6e,uVar4,iVar9);
      }
LAB_1000_3769:
    }
    FUN_1000_890a(0,7,0xf);
    while (iVar9 = FUN_1000_bf8e(), iVar9 != 0) {
      FUN_1000_bf98();
    }
    FUN_1000_e538(0x2130);
    do {
      uVar6 = FUN_1000_bb38();
    } while (uVar6 < *(uint *)0x1820);
    *(undefined2 *)0xdd0 = 0;
    out(0xa4,(byte)*(undefined2 *)0x1844);
    out(0xa6,(byte)*(undefined2 *)0x1844 ^ 1);
    FUN_1000_b4ee();
  } while( true );
}



/* 1000:383a  FUN_1000_383a  8067 bytes, 1 callers */

/* WARNING: Removing unreachable block (ram,0x000156a8) */

undefined2 FUN_1000_383a(void)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined2 uVar6;
  uint uVar7;
  uint uVar8;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  int local_34a [70];
  int aiStack_2be [16];
  int local_29e;
  int aiStack_29c [16];
  int local_27c;
  int local_27a;
  int aiStack_278 [16];
  int local_258;
  int local_256;
  int local_254;
  int local_252 [70];
  int aiStack_1c6 [16];
  int aiStack_1a6 [16];
  int local_186;
  int aiStack_184 [16];
  int local_164;
  int local_162;
  int local_160;
  int local_15e;
  int aiStack_15c [16];
  int local_13c [70];
  int aiStack_b0 [16];
  int local_90;
  int local_8e [70];
  
  local_256 = 0;
  do {
    iVar3 = FUN_1000_efc8();
    iVar5 = local_256;
    local_8e[local_256] = iVar3 % 0x280;
    iVar3 = FUN_1000_efc8();
    local_13c[iVar5] = iVar3 % 0x160;
    iVar3 = FUN_1000_efc8();
    iVar4 = FUN_1000_efc8();
    local_252[iVar5] = iVar3 % 4 + (iVar4 % 2) * 10 + 2;
    iVar3 = FUN_1000_efc8();
    local_34a[iVar5] = iVar3 % 3 + 1;
    local_256 = local_256 + 1;
  } while (local_256 < 0x46);
  if (*(int *)0x1818 != *(int *)0x1dae) {
    FUN_1000_91fe(local_8e,local_13c,local_34a,local_252);
  }
  FUN_1000_ba8c(0,0,0,0);
  FUN_1000_8098();
  local_256 = 0;
  do {
    iVar5 = local_256;
    aiStack_1a6[local_256] = -0x20;
    aiStack_278[local_256] = 0x10;
    aiStack_1c6[iVar5] = 0;
    local_256 = local_256 + 1;
  } while (local_256 < 0x10);
  local_256 = 0;
  do {
    iVar5 = local_256;
    aiStack_2be[local_256] = 0x160;
    aiStack_b0[iVar5] = 0;
    aiStack_15c[iVar5] = 0;
    local_256 = local_256 + 1;
  } while (local_256 < 0x10);
  local_186 = 1;
  *(undefined2 *)0x1f8a = 0x120;
  *(undefined2 *)0x1fca = 0x120;
  *(undefined2 *)0x1db4 = 0;
  *(undefined2 *)0x1db2 = 0;
  *(undefined2 *)0x1d40 = 0;
  *(undefined2 *)0x193e = 0;
  *(undefined2 *)0x1dc0 = 0;
  local_254 = 0;
  local_90 = 0;
  *(undefined2 *)0x1d6a = 0;
  *(undefined2 *)0x1d8a = 0;
  *(undefined2 *)0x184a = 0;
  *(undefined2 *)0x193c = 0;
  local_164 = 0;
  local_162 = 0;
  local_160 = 0;
  out(0xa6,(byte)*(undefined2 *)0x1844 ^ 1);
  FUN_1000_b4ee();
  FUN_1000_8292();
  local_256 = 0;
  do {
    FUN_1000_b50e(local_8e[local_256],local_13c[local_256],local_252[local_256]);
    local_256 = local_256 + 1;
  } while (local_256 < 0x46);
  do {
    bVar2 = in(0x60);
  } while ((bVar2 & 0x20) != 0);
  do {
    bVar2 = in(0x60);
  } while ((bVar2 & 0x20) == 0);
  out(0xa6,(byte)*(undefined2 *)0x1844);
  out(0xa4,(byte)*(undefined2 *)0x1844 ^ 1);
  FUN_1000_b4ee();
  FUN_1000_8292();
  local_256 = 0;
  do {
    FUN_1000_b50e(local_8e[local_256],local_13c[local_256],local_252[local_256]);
    local_256 = local_256 + 1;
  } while (local_256 < 0x46);
  FUN_1000_bfd6(*(undefined2 *)0x1f8a,*(undefined2 *)0x1fca,0x28);
  FUN_1000_bfd6(*(int *)0x1f8a + 0x20,*(undefined2 *)0x1fca,0x29);
  out(0xa4,(byte)*(undefined2 *)0x1844);
  out(0xa6,(byte)*(undefined2 *)0x1844 ^ 1);
  FUN_1000_cf6a(5);
  FUN_1000_cf44();
  FUN_1000_d046();
  if (*(int *)0x1818 == *(int *)0x1dae) {
    *(undefined2 *)0x1d4a = 4;
    *(undefined2 *)0x1d48 = 4;
    *(undefined2 *)0x181e = 0;
    *(undefined2 *)0x20c6 = 0;
    FUN_1000_a2ca();
    *(undefined2 *)0x1faa = 10;
    *(undefined1 *)0x2ba = 0;
    FUN_1000_82d7(0x2b8);
    *(undefined1 *)0x2ba = 7;
    FUN_1000_a072();
  }
  else {
    FUN_1000_a196();
  }
  if (*(int *)0x1d4a < 6) {
    *(undefined2 *)0x1d4a = 6;
  }
  uVar7 = (int)*(uint *)0x1818 >> 0xf;
  local_15e = ((*(uint *)0x20c6 & *(uint *)0x181e) +
               (((int)((*(uint *)0x1818 ^ uVar7) - uVar7) >> 2 ^ uVar7) - uVar7) + 3) * 8;
  *(undefined2 *)0xdd0 = 0;
  do {
    FUN_1000_8184();
    local_27c = FUN_1000_e3c8(0x2130);
    if (((local_27c != 0) || (*(int *)0x213e != 0)) && (FUN_1000_9e70(), *(int *)0x184c == 0))
    goto LAB_1000_57e4;
    *(undefined2 *)0x1d8a = 0;
    if (*(int *)0x1faa < 10) {
      iVar5 = *(int *)0x1faa;
      *(int *)0x1faa = *(int *)0x1faa + -1;
      if (iVar5 < 1) {
        local_164 = 1;
        *(int *)0x1842 = *(int *)0x1842 + -1;
LAB_1000_57e4:
        FUN_1000_cf2c();
        FUN_1000_a23c();
        if ((local_164 == 1) && (*(int *)0x1842 == 0)) {
          FUN_1000_a29e();
        }
        uVar6 = *(undefined2 *)0x1844;
        out(0xa6,(char)uVar6);
        if ((local_164 == 1) || (*(int *)0x1842 == 0)) {
          uVar6 = FUN_1000_84ae();
        }
        return uVar6;
      }
    }
    else {
      if ((*(int *)0x2132 != 0) && (*(int *)0x1d4a + *(int *)0x1fca < 0x140)) {
        *(undefined2 *)0x1d8a = *(undefined2 *)0x1d4a;
      }
      if ((*(int *)0x2130 != 0) && (-1 < *(int *)0x1fca - *(int *)0x1d4a)) {
        *(int *)0x1d8a = -*(int *)0x1d4a;
      }
      if (*(int *)0x2136 != 0) {
        *(int *)0x1d6a = *(int *)0x1d6a + 2;
      }
      if (*(int *)0x2134 != 0) {
        *(int *)0x1d6a = *(int *)0x1d6a + -2;
      }
      uVar7 = (int)*(uint *)0x1d6a >> 0xf;
      if (8 < (int)((*(uint *)0x1d6a ^ uVar7) - uVar7)) {
        if (*(int *)0x1d6a == 0) {
          iVar5 = 0;
        }
        else if (*(int *)0x1d6a < 1) {
          iVar5 = -1;
        }
        else {
          iVar5 = 1;
        }
        *(int *)0x1d6a = iVar5 << 3;
      }
      if ((((*(int *)0x2138 != 0) && (*(int *)0x212c == 0)) ||
          ((*(int *)0x213a != 0 && (*(int *)0x212c != 0)))) &&
         ((iVar5 = *(int *)0x20c6 * 2 - *(int *)0x1d48, -local_90 != iVar5 && local_90 <= -iVar5 &&
          (local_186 != 0)))) {
        for (local_256 = 0; local_256 < *(int *)0x1d48; local_256 = local_256 + 1) {
          if (aiStack_1a6[local_256] < -0xf) {
            local_258 = local_256;
            break;
          }
        }
        iVar5 = local_258;
        aiStack_1a6[local_258] = *(int *)0x1fca + 0xc;
        aiStack_184[local_258] = *(int *)0x1f8a + 5;
        aiStack_278[local_258] = (-2 - *(int *)0x181e) * 6;
        local_90 = local_90 + 1;
        aiStack_1c6[iVar5] = 0;
        local_186 = 0;
        if (*(int *)0x20c6 == 1) {
          for (local_256 = 0; local_256 < *(int *)0x1d48; local_256 = local_256 + 1) {
            if (aiStack_1a6[local_256] < -0xf) {
              local_258 = local_256;
              break;
            }
          }
          aiStack_1a6[local_258] = *(int *)0x1fca + 0xc;
          aiStack_184[local_258] = *(int *)0x1f8a + 5;
          aiStack_278[local_258] = (-2 - *(int *)0x181e) * 6;
          aiStack_1c6[local_256] = -1;
          for (local_256 = 0; local_256 < *(int *)0x1d48; local_256 = local_256 + 1) {
            if (aiStack_1a6[local_256] < -0xf) {
              local_258 = local_256;
              break;
            }
          }
          aiStack_1a6[local_258] = *(int *)0x1fca + 0xc;
          aiStack_184[local_258] = *(int *)0x1f8a + 5;
          aiStack_278[local_258] = (-2 - *(int *)0x181e) * 6;
          aiStack_1c6[local_256] = 1;
          local_90 = local_90 + 2;
        }
        FUN_1000_cff4(5);
      }
      if ((((*(int *)0x213a != 0) && (*(int *)0x212c == 0)) ||
          ((*(int *)0x2138 != 0 && (*(int *)0x212c != 0)))) &&
         ((iVar5 = *(int *)0x20c6 * 2 - *(int *)0x1d48, -local_90 != iVar5 && local_90 <= -iVar5 &&
          (local_186 != 0)))) {
        for (local_256 = 0; iVar5 = local_258, local_256 < *(int *)0x1d48; local_256 = local_256 + 1
            ) {
          if (aiStack_1a6[local_256] < -0xf) {
            local_258 = local_256;
          }
        }
        aiStack_1a6[local_258] = *(int *)0x1fca + 0xb;
        aiStack_184[local_258] = *(int *)0x1f8a + 0x2c;
        aiStack_278[local_258] = (*(int *)0x181e + 2) * 6;
        local_90 = local_90 + 1;
        aiStack_1c6[iVar5] = 0;
        local_186 = 0;
        if (*(int *)0x20c6 == 1) {
          for (local_256 = 0; local_256 < *(int *)0x1d48; local_256 = local_256 + 1) {
            if (aiStack_1a6[local_256] < -0xf) {
              local_258 = local_256;
              break;
            }
          }
          aiStack_1a6[local_258] = *(int *)0x1fca + 0xb;
          aiStack_184[local_258] = *(int *)0x1f8a + 0x2c;
          aiStack_278[local_258] = (*(int *)0x181e + 2) * 6;
          aiStack_1c6[local_256] = -1;
          for (local_256 = 0; local_256 < *(int *)0x1d48; local_256 = local_256 + 1) {
            if (aiStack_1a6[local_256] < -0xf) {
              local_258 = local_256;
              break;
            }
          }
          aiStack_1a6[local_258] = *(int *)0x1fca + 0xb;
          aiStack_184[local_258] = *(int *)0x1f8a + 0x2c;
          aiStack_278[local_258] = (*(int *)0x181e + 2) * 6;
          aiStack_1c6[local_256] = 1;
          local_90 = local_90 + 2;
        }
        FUN_1000_cff4(5);
      }
      if ((*(int *)0x2138 == 0) && (*(int *)0x213a == 0)) {
        local_186 = 1;
      }
    }
    local_160 = 0;
    for (local_256 = 1; local_256 <= *(int *)0x17f4; local_256 = local_256 + 1) {
      if ((*(int *)(local_256 * 2 + 0x1fca) < -0x1f) || (0x15f < *(int *)(local_256 * 2 + 0x1fca)))
      {
        *(undefined2 *)(local_256 * 2 + 0x1d8a) = 0;
      }
      else {
        local_160 = local_160 + 1;
      }
      iVar5 = local_256 * 2;
      if (*(int *)(iVar5 + 0x1faa) < 10) {
        piVar1 = (int *)(iVar5 + 0x1faa);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          *(undefined2 *)(iVar5 + 0x1fca) = 0xffe0;
          *(undefined2 *)(iVar5 + 0x1faa) = 10;
        }
      }
      else {
        iVar5 = *(int *)(local_256 * 2 + 0x17f6);
        if (iVar5 == 1) {
          iVar5 = FUN_1000_efc8();
          if ((iVar5 % 0xf == 0) &&
             (((*(int *)(local_256 * 2 + 0x1fca) < -0x1f ||
               (0x15f < *(int *)(local_256 * 2 + 0x1fca))) && (local_162 < local_15e)))) {
            iVar5 = FUN_1000_efc8();
            iVar3 = local_256 * 2;
            *(int *)(iVar3 + 0x1fca) = (iVar5 % 2) * 0x17e + -0x1f;
            iVar5 = FUN_1000_efc8();
            if (iVar5 % 2 == 0) {
              iVar5 = FUN_1000_efc8();
              *(int *)(iVar3 + 0x1f8a) = iVar5 % 0x160 + -0x140;
            }
            else {
              iVar5 = FUN_1000_efc8();
              *(int *)(local_256 * 2 + 0x1f8a) = iVar5 % 0x140 + 0x260;
            }
            if (*(int *)(local_256 * 2 + 0x1f8a) == 0x140) {
              iVar5 = 0;
            }
            else {
              iVar5 = -*(int *)(local_256 * 2 + 0x1f8a);
              if (iVar5 == -0x140 || iVar5 + 0x140 < 0) {
                iVar5 = -1;
              }
              else {
                iVar5 = 1;
              }
            }
            iVar3 = FUN_1000_efc8();
            iVar4 = local_256 * 2;
            *(int *)(iVar4 + 0x1d6a) = (iVar3 % 3 + 1) * iVar5;
            if (*(int *)(iVar4 + 0x1fca) == 100) {
              iVar5 = 0;
            }
            else if (-*(int *)(iVar4 + 0x1fca) == -100 || -*(int *)(iVar4 + 0x1fca) + 100 < 0) {
              iVar5 = -1;
            }
            else {
              iVar5 = 1;
            }
            iVar3 = FUN_1000_efc8();
            iVar4 = local_256 * 2;
            *(int *)(iVar4 + 0x1d8a) = (iVar3 % 3 + 1) * iVar5;
            iVar5 = FUN_1000_efc8();
            *(int *)(iVar4 + 0x1d4a) = iVar5 % 3 + 2;
            iVar5 = FUN_1000_efc8();
            *(int *)(iVar4 + 0x1822) = iVar5 % 0x32 + (0x32 - *(int *)(iVar4 + 0x1d8a)) * 3;
          }
          iVar5 = (*(int *)(local_256 * 2 + 0x1f8a) + *(int *)(local_256 * 2 + 0x1d6a)) -
                  *(int *)0x1d6a;
          if ((iVar5 < -0x13f) || (0x39f < iVar5)) {
            *(undefined2 *)(local_256 * 2 + 0x1fca) = 0xffe0;
            *(undefined2 *)(local_256 * 2 + 0x1d8a) = 0;
          }
          if ((-0x20 < *(int *)(local_256 * 2 + 0x1fca)) &&
             (*(int *)(local_256 * 2 + 0x1fca) < 0x160)) {
            iVar5 = *(int *)(local_256 * 2 + 0x1f8a);
            uVar7 = iVar5 - *(int *)0x1f8a >> 0xf;
            if ((0x32 < (int)((iVar5 - *(int *)0x1f8a ^ uVar7) - uVar7)) &&
               (iVar5 != *(int *)0x1f8a)) {
              if (-(iVar5 - *(int *)0x1f8a) < 1) {
                iVar5 = -1;
              }
              else {
                iVar5 = 1;
              }
              piVar1 = (int *)(local_256 * 2 + 0x1d6a);
              *piVar1 = *piVar1 + iVar5;
            }
            iVar5 = *(int *)0x1fca;
            if (*(int *)(local_256 * 2 + 0x1fca) == iVar5) {
              iVar5 = 0;
            }
            else {
              iVar3 = *(int *)(local_256 * 2 + 0x1fca);
              if (iVar5 == iVar3 || iVar5 - iVar3 < 0) {
                iVar5 = -1;
              }
              else {
                iVar5 = 1;
              }
            }
            iVar3 = local_256 * 2;
            *(int *)(iVar3 + 0x1d8a) = *(int *)(iVar3 + 0x1d8a) + *(int *)0x1844 * iVar5;
            uVar7 = *(uint *)(iVar3 + 0x1d6a);
            if (*(int *)(iVar3 + 0x1d4a) + 2 <
                (int)((uVar7 ^ (int)uVar7 >> 0xf) - ((int)uVar7 >> 0xf))) {
              if (uVar7 == 0) {
                iVar5 = 0;
              }
              else if ((int)uVar7 < 1) {
                iVar5 = -1;
              }
              else {
                iVar5 = 1;
              }
              *(int *)(local_256 * 2 + 0x1d6a) = (*(int *)(local_256 * 2 + 0x1d4a) + 2) * iVar5;
            }
            uVar7 = *(uint *)(local_256 * 2 + 0x1d8a);
            if (*(int *)(local_256 * 2 + 0x1d4a) <
                (int)((uVar7 ^ (int)uVar7 >> 0xf) - ((int)uVar7 >> 0xf))) {
              if (uVar7 == 0) {
                iVar5 = 0;
              }
              else if ((int)uVar7 < 1) {
                iVar5 = -1;
              }
              else {
                iVar5 = 1;
              }
              *(int *)(local_256 * 2 + 0x1d8a) = *(int *)(local_256 * 2 + 0x1d4a) * iVar5;
            }
            if (local_15e <= local_162) {
              iVar5 = *(int *)(local_256 * 2 + 0x1d8a);
              if (iVar5 == 0) {
                iVar5 = 0;
              }
              else if (iVar5 < 1) {
                iVar5 = -1;
              }
              else {
                iVar5 = 1;
              }
              iVar5 = iVar5 << 3;
              iVar3 = local_256 << 1;
              goto LAB_1000_41c0;
            }
          }
        }
        else if (iVar5 == 2) {
          iVar5 = FUN_1000_efc8();
          if (((iVar5 % 0xf == 0) && (iVar5 = local_256 * 2, *(int *)(iVar5 + 0x1fca) < -0x1f)) &&
             (local_162 < local_15e)) {
            iVar3 = FUN_1000_efc8();
            *(int *)(iVar5 + 0x1fca) = iVar3 % 0xb << 5;
            iVar3 = FUN_1000_efc8();
            iVar3 = (iVar3 % 2) * 0x4c0 + -0x140;
            *(int *)(iVar5 + 0x1f8a) = iVar3;
            if (iVar3 == 0x140) {
              iVar5 = 0;
            }
            else if (-*(int *)(iVar5 + 0x1f8a) == -0x140 || -*(int *)(iVar5 + 0x1f8a) + 0x140 < 0) {
              iVar5 = -1;
            }
            else {
              iVar5 = 1;
            }
            iVar3 = FUN_1000_efc8();
            *(int *)(local_256 * 2 + 0x1d6a) = (iVar3 % 5 + 8) * iVar5;
            *(undefined2 *)(local_256 * 2 + 0x1d8a) = 0;
          }
          iVar5 = (*(int *)(local_256 * 2 + 0x1f8a) + *(int *)(local_256 * 2 + 0x1d6a)) -
                  *(int *)0x1d6a;
          if ((iVar5 < -0x13f) || (0x37f < iVar5)) {
            *(undefined2 *)(local_256 * 2 + 0x1fca) = 0xffe0;
            *(undefined2 *)(local_256 * 2 + 0x1d8a) = 0;
          }
          if (((((-0x20 < *(int *)(local_256 * 2 + 0x1fca)) &&
                (iVar5 = FUN_1000_efc8(),
                iVar5 % (((3 - *(int *)0x20c6) - *(int *)0x181e) * 10) == 0)) && (local_254 < 0x10))
              && ((iVar5 = local_256 * 2, 0 < *(int *)(iVar5 + 0x1f8a) &&
                  (*(int *)(iVar5 + 0x1f8a) < 0x241)))) &&
             (uVar7 = *(int *)(iVar5 + 0x1f8a) - *(int *)0x1f8a, uVar8 = (int)uVar7 >> 0xf,
             0x78 < (int)((uVar7 ^ uVar8) - uVar8))) {
            local_258 = 0;
            do {
              if (0x15f < aiStack_2be[local_258]) {
                local_27a = local_258;
              }
              iVar5 = local_27a;
              local_258 = local_258 + 1;
            } while (local_258 < 0x10);
            iVar3 = local_256 * 2;
            aiStack_2be[local_27a] = *(int *)(iVar3 + 0x1fca) + 0x10;
            iVar3 = *(int *)(iVar3 + 0x1f8a) + 0x10;
            aiStack_29c[iVar5] = iVar3;
            uVar7 = -(iVar3 - *(int *)0x1f8a) + 0x20;
            uVar8 = (int)uVar7 >> 0xf;
            if ((int)((uVar7 ^ uVar8) - uVar8) < 0x21) {
              iVar5 = FUN_1000_efc8();
              aiStack_b0[local_27a] = iVar5 % 5 + *(int *)0x1d6a + -2;
            }
            else {
              if (iVar3 == *(int *)0x1f8a) {
                iVar5 = 0;
              }
              else if (-(iVar3 - *(int *)0x1f8a) < 1) {
                iVar5 = -1;
              }
              else {
                iVar5 = 1;
              }
              iVar3 = FUN_1000_efc8();
              aiStack_b0[local_27a] = (iVar3 % 4 + 4) * iVar5 + *(int *)0x1d6a;
            }
            uVar7 = (*(int *)0x1fca - aiStack_2be[local_27a]) + 0x10;
            uVar8 = (int)uVar7 >> 0xf;
            if ((int)((uVar7 ^ uVar8) - uVar8) < 0x21) {
              iVar5 = FUN_1000_efc8();
              aiStack_15c[local_27a] = iVar5 % 5 + -2;
            }
            else {
              if (aiStack_2be[local_27a] == *(int *)0x1fca) {
                iVar5 = 0;
              }
              else if (*(int *)0x1fca - aiStack_2be[local_27a] < 1) {
                iVar5 = -1;
              }
              else {
                iVar5 = 1;
              }
              iVar3 = FUN_1000_efc8();
              aiStack_15c[local_27a] = (iVar3 % 4 + 4) * iVar5;
            }
            local_254 = local_254 + 1;
          }
        }
        else if (iVar5 == 3) {
          iVar5 = FUN_1000_efc8();
          if (((iVar5 % (((6 - *(int *)0x20c6) - *(int *)0x181e) * 0x14) == 0) &&
              ((*(int *)(local_256 * 2 + 0x1fca) < -0x1f ||
               (0x15f < *(int *)(local_256 * 2 + 0x1fca))))) && (local_162 < local_15e)) {
            iVar5 = FUN_1000_efc8();
            iVar3 = local_256 * 2;
            *(int *)(iVar3 + 0x1fca) = (iVar5 % 2) * 0x16e + -0xf;
            iVar5 = FUN_1000_efc8();
            iVar5 = iVar5 % 0x230 + 0x20;
            *(int *)(iVar3 + 0x1f8a) = iVar5;
            if (iVar5 == 0x140) {
              iVar5 = 0;
            }
            else if (-iVar5 == -0x140 || -iVar5 + 0x140 < 0) {
              iVar5 = -1;
            }
            else {
              iVar5 = 1;
            }
            iVar3 = FUN_1000_efc8();
            iVar4 = local_256 * 2;
            *(int *)(iVar4 + 0x1d6a) = (iVar3 % 3 + 1) * iVar5 + *(int *)0x1d6a;
            if (*(int *)(iVar4 + 0x1fca) == 100) {
              iVar5 = 0;
            }
            else if (-*(int *)(iVar4 + 0x1fca) == -100 || -*(int *)(iVar4 + 0x1fca) + 100 < 0) {
              iVar5 = -1;
            }
            else {
              iVar5 = 1;
            }
            iVar3 = FUN_1000_efc8();
            iVar4 = local_256 * 2;
            *(int *)(iVar4 + 0x1d8a) = (iVar3 % 3 + 3) * iVar5;
            iVar5 = FUN_1000_efc8();
            *(int *)(iVar4 + 0x1822) = iVar5 % 300 + 0x1a;
          }
          iVar5 = (*(int *)(local_256 * 2 + 0x1f8a) + *(int *)(local_256 * 2 + 0x1d6a)) -
                  *(int *)0x1d6a;
          if ((iVar5 < -0x13f) || (0x3af < iVar5)) {
            *(undefined2 *)(local_256 * 2 + 0x1fca) = 0xffe0;
            *(undefined2 *)(local_256 * 2 + 0x1d8a) = 0;
          }
          if ((-0x20 < *(int *)(local_256 * 2 + 0x1fca)) &&
             (iVar5 = local_256 * 2,
             *(int *)(iVar5 + 0x1fca) + *(int *)(iVar5 + 0x1d8a) < *(int *)(iVar5 + 0x1822) !=
             *(int *)(iVar5 + 0x1fca) < *(int *)(iVar5 + 0x1822))) {
            for (local_29e = 0; local_29e < 4; local_29e = local_29e + 1) {
              if (((local_254 < 0x10) && (0x10 < *(int *)(local_256 * 2 + 0x1f8a))) &&
                 (*(int *)(local_256 * 2 + 0x1f8a) < 0x261)) {
                local_258 = 0;
                do {
                  if (0x15f < aiStack_2be[local_258]) {
                    local_27a = local_258;
                  }
                  iVar5 = local_27a;
                  local_258 = local_258 + 1;
                } while (local_258 < 0x10);
                iVar3 = local_256 * 2;
                aiStack_2be[local_27a] = *(int *)(iVar3 + 0x1fca) + 0xc;
                iVar3 = *(int *)(iVar3 + 0x1f8a) + 0xc;
                aiStack_29c[iVar5] = iVar3;
                uVar7 = -(iVar3 - *(int *)0x1f8a) + 0x20;
                uVar8 = (int)uVar7 >> 0xf;
                if ((int)((uVar7 ^ uVar8) - uVar8) < 0x21) {
                  iVar5 = FUN_1000_efc8();
                  aiStack_b0[local_27a] = iVar5 % 5 + *(int *)0x1d6a + -2;
                }
                else {
                  if (iVar3 == *(int *)0x1f8a) {
                    iVar5 = 0;
                  }
                  else if (-(iVar3 - *(int *)0x1f8a) < 1) {
                    iVar5 = -1;
                  }
                  else {
                    iVar5 = 1;
                  }
                  iVar3 = FUN_1000_efc8();
                  aiStack_b0[local_27a] = (iVar3 % 4 + 4) * iVar5 + *(int *)0x1d6a;
                }
                uVar7 = (*(int *)0x1fca - aiStack_2be[local_27a]) + 0x10;
                uVar8 = (int)uVar7 >> 0xf;
                if ((int)((uVar7 ^ uVar8) - uVar8) < 0x21) {
                  iVar5 = FUN_1000_efc8();
                  aiStack_15c[local_27a] = iVar5 % 5 + -2;
                }
                else {
                  if (aiStack_2be[local_27a] == *(int *)0x1fca) {
                    iVar5 = 0;
                  }
                  else if (*(int *)0x1fca - aiStack_2be[local_27a] < 1) {
                    iVar5 = -1;
                  }
                  else {
                    iVar5 = 1;
                  }
                  iVar3 = FUN_1000_efc8();
                  aiStack_15c[local_27a] = (iVar3 % 4 + 4) * iVar5;
                }
                local_254 = local_254 + 1;
              }
            }
            iVar3 = local_256 * 2;
            *(undefined2 *)(iVar3 + 0x1faa) = 9;
            iVar5 = 0;
            *(undefined2 *)(iVar3 + 0x1d6a) = 0;
LAB_1000_41c0:
            *(int *)(iVar3 + 0x1d8a) = iVar5;
          }
        }
        else if (iVar5 == 4) {
          iVar5 = FUN_1000_efc8();
          if ((iVar5 % (((4 - *(int *)0x20c6) - *(int *)0x181e) * 0x28) == 0) &&
             (((*(int *)(local_256 * 2 + 0x1fca) < -0x1f ||
               (0x15f < *(int *)(local_256 * 2 + 0x1fca))) && (local_162 < local_15e)))) {
            iVar5 = FUN_1000_efc8();
            iVar3 = local_256 * 2;
            *(int *)(iVar3 + 0x1fca) = iVar5 % 0xb << 5;
            iVar5 = FUN_1000_efc8();
            iVar5 = (iVar5 % 2) * 0x4c0 + -0x140;
            *(int *)(iVar3 + 0x1f8a) = iVar5;
            if (iVar5 == 0x140) {
              iVar5 = 0;
            }
            else if (-*(int *)(iVar3 + 0x1f8a) == -0x140 || -*(int *)(iVar3 + 0x1f8a) + 0x140 < 0) {
              iVar5 = -1;
            }
            else {
              iVar5 = 1;
            }
            iVar3 = FUN_1000_efc8();
            iVar4 = local_256 * 2;
            *(int *)(iVar4 + 0x1d6a) = (iVar3 % 5 + 8) * iVar5;
            *(undefined2 *)(iVar4 + 0x1d8a) = 0;
            iVar5 = FUN_1000_efc8();
            *(int *)(iVar4 + 0x1d4a) = iVar5 % 2 + 0xc;
          }
          iVar5 = (*(int *)(local_256 * 2 + 0x1f8a) + *(int *)(local_256 * 2 + 0x1d6a)) -
                  *(int *)0x1d6a;
          if ((iVar5 < -0x13f) || (0x37f < iVar5)) {
            *(undefined2 *)(local_256 * 2 + 0x1fca) = 0xffe0;
            *(undefined2 *)(local_256 * 2 + 0x1d8a) = 0;
          }
          if ((-0x20 < *(int *)(local_256 * 2 + 0x1fca)) &&
             (*(int *)(local_256 * 2 + 0x1fca) < 0x160)) {
            iVar5 = FUN_1000_efc8();
            iVar5 = iVar5 % ((*(int *)0x20c6 + *(int *)0x181e) * -0xc + 0x1e);
            if ((iVar5 == 0) &&
               (((local_254 < 0x10 && (0 < *(int *)(local_256 * 2 + 0x1f8a))) &&
                (*(int *)(local_256 * 2 + 0x1f8a) < 0x241)))) {
              local_258 = iVar5;
              do {
                if (0x15f < aiStack_2be[local_258]) {
                  local_27a = local_258;
                }
                iVar5 = local_27a;
                local_258 = local_258 + 1;
              } while (local_258 < 0x10);
              iVar3 = local_256 * 2;
              aiStack_2be[local_27a] = *(int *)(iVar3 + 0x1fca) + 0x10;
              iVar3 = *(int *)(iVar3 + 0x1f8a) + 0x10;
              aiStack_29c[iVar5] = iVar3;
              uVar7 = -(iVar3 - *(int *)0x1f8a) + 0x20;
              uVar8 = (int)uVar7 >> 0xf;
              if ((int)((uVar7 ^ uVar8) - uVar8) < 0x21) {
                iVar5 = FUN_1000_efc8();
                aiStack_b0[local_27a] = iVar5 % 5 + *(int *)0x1d6a + -2;
              }
              else {
                if (iVar3 == *(int *)0x1f8a) {
                  iVar5 = 0;
                }
                else if (-(iVar3 - *(int *)0x1f8a) < 1) {
                  iVar5 = -1;
                }
                else {
                  iVar5 = 1;
                }
                iVar3 = FUN_1000_efc8();
                aiStack_b0[local_27a] = (iVar3 % 4 + 4) * iVar5 + *(int *)0x1d6a;
              }
              uVar7 = (*(int *)0x1fca - aiStack_2be[local_27a]) + 0x10;
              uVar8 = (int)uVar7 >> 0xf;
              if ((int)((uVar7 ^ uVar8) - uVar8) < 0x21) {
                iVar5 = FUN_1000_efc8();
                aiStack_15c[local_27a] = iVar5 % 5 + -2;
              }
              else {
                if (aiStack_2be[local_27a] == *(int *)0x1fca) {
                  iVar5 = 0;
                }
                else if (*(int *)0x1fca - aiStack_2be[local_27a] < 1) {
                  iVar5 = -1;
                }
                else {
                  iVar5 = 1;
                }
                iVar3 = FUN_1000_efc8();
                aiStack_15c[local_27a] = (iVar3 % 4 + 4) * iVar5;
              }
              local_254 = local_254 + 1;
            }
            iVar5 = *(int *)(local_256 * 2 + 0x1f8a);
            uVar7 = iVar5 - *(int *)0x1f8a >> 0xf;
            if ((100 < (int)((iVar5 - *(int *)0x1f8a ^ uVar7) - uVar7)) && (iVar5 != *(int *)0x1f8a)
               ) {
              if (-(iVar5 - *(int *)0x1f8a) < 1) {
                iVar5 = -1;
              }
              else {
                iVar5 = 1;
              }
              piVar1 = (int *)(local_256 * 2 + 0x1d6a);
              *piVar1 = *piVar1 + iVar5;
            }
            iVar5 = *(int *)0x1fca;
            iVar3 = local_256 * 2;
            if (*(int *)(iVar3 + 0x1fca) != iVar5) {
              if (iVar5 == *(int *)(iVar3 + 0x1fca) || iVar5 - *(int *)(iVar3 + 0x1fca) < 0) {
                iVar5 = -1;
              }
              else {
                iVar5 = 1;
              }
              *(int *)(iVar3 + 0x1d8a) = *(int *)(iVar3 + 0x1d8a) + iVar5;
            }
            uVar7 = *(uint *)(local_256 * 2 + 0x1d6a);
            if (*(int *)(local_256 * 2 + 0x1d4a) <
                (int)((uVar7 ^ (int)uVar7 >> 0xf) - ((int)uVar7 >> 0xf))) {
              if (uVar7 == 0) {
                iVar5 = 0;
              }
              else if ((int)uVar7 < 1) {
                iVar5 = -1;
              }
              else {
                iVar5 = 1;
              }
              *(int *)(local_256 * 2 + 0x1d6a) = *(int *)(local_256 * 2 + 0x1d4a) * iVar5;
            }
            uVar7 = *(uint *)(local_256 * 2 + 0x1d8a);
            if (*(int *)(local_256 * 2 + 0x1d4a) <
                (int)((uVar7 ^ (int)uVar7 >> 0xf) - ((int)uVar7 >> 0xf))) {
              if (uVar7 == 0) {
                iVar5 = 0;
              }
              else if ((int)uVar7 < 1) {
                iVar5 = -1;
              }
              else {
                iVar5 = 1;
              }
              iVar3 = local_256 * 2;
              iVar5 = *(int *)(iVar3 + 0x1d4a) * iVar5;
              goto LAB_1000_41c0;
            }
          }
        }
        else if (iVar5 == 9) {
          iVar5 = FUN_1000_efc8();
          if ((iVar5 % 10 == 0) &&
             (((*(int *)(local_256 * 2 + 0x1fca) < -0x1f ||
               (0x15f < *(int *)(local_256 * 2 + 0x1fca))) && (local_162 < local_15e)))) {
            iVar5 = FUN_1000_efc8();
            iVar3 = local_256 * 2;
            *(int *)(iVar3 + 0x1822) = (iVar5 % 9 + 1) * 0x20;
            iVar5 = FUN_1000_efc8();
            *(int *)(iVar3 + 0x1fca) = (iVar5 % 2) * 0x40 + *(int *)(iVar3 + 0x1822) + -0x20;
            iVar5 = FUN_1000_efc8();
            iVar5 = (iVar5 % 2) * 0x4e0 + -0x140;
            *(int *)(iVar3 + 0x1f8a) = iVar5;
            if (iVar5 == 0x140) {
              iVar5 = 0;
            }
            else if (-*(int *)(iVar3 + 0x1f8a) == -0x140 || -*(int *)(iVar3 + 0x1f8a) + 0x140 < 0) {
              iVar5 = -1;
            }
            else {
              iVar5 = 1;
            }
            iVar3 = FUN_1000_efc8();
            *(int *)(local_256 * 2 + 0x1d6a) = (iVar3 % 5 + 5) * iVar5;
            *(undefined2 *)(local_256 * 2 + 0x1d8a) = 0;
          }
          if (local_15e <= local_162) {
            iVar5 = *(int *)(local_256 * 2 + 0x1d6a);
            if (iVar5 == 0) {
              iVar5 = 0;
            }
            else if (iVar5 < 1) {
              iVar5 = -1;
            }
            else {
              iVar5 = 1;
            }
            *(int *)(local_256 * 2 + 0x1d6a) = iVar5 * 10;
          }
          iVar5 = (*(int *)(local_256 * 2 + 0x1f8a) + *(int *)(local_256 * 2 + 0x1d6a)) -
                  *(int *)0x1d6a;
          if ((iVar5 < -0x13f) || (0x39f < iVar5)) {
            *(undefined2 *)(local_256 * 2 + 0x1fca) = 0xffe0;
            *(undefined2 *)(local_256 * 2 + 0x1d8a) = 0;
          }
          if ((-0x20 < *(int *)(local_256 * 2 + 0x1fca)) &&
             (*(int *)(local_256 * 2 + 0x1fca) < 0x160)) {
            iVar3 = local_256 * 2;
            iVar5 = *(int *)(iVar3 + 0x1822);
            if (*(int *)(iVar3 + 0x1fca) != iVar5) {
              if (iVar5 == *(int *)(iVar3 + 0x1fca) || iVar5 - *(int *)(iVar3 + 0x1fca) < 0) {
                iVar5 = -1;
              }
              else {
                iVar5 = 1;
              }
              *(int *)(iVar3 + 0x1d8a) = *(int *)(iVar3 + 0x1d8a) + iVar5;
            }
          }
        }
      }
    }
    if (((local_160 == 0) && (local_15e <= local_162)) && (*(int *)0x1dc0 == 0)) goto LAB_1000_57e4;
    for (local_256 = 0; local_256 < *(int *)0x1d48; local_256 = local_256 + 1) {
      if (-0x10 < aiStack_1a6[local_256]) {
        aiStack_184[local_256] = aiStack_184[local_256] + aiStack_278[local_256];
        aiStack_1a6[local_256] =
             aiStack_1a6[local_256] + aiStack_1c6[local_256] * (*(int *)0x181e + 2) * 2;
        for (local_258 = 1; iVar5 = local_256, local_258 <= *(int *)0x17f4;
            local_258 = local_258 + 1) {
          iVar3 = local_258 * 2;
          if (((9 < *(int *)(iVar3 + 0x1faa)) && (-0x20 < *(int *)(iVar3 + 0x1fca))) &&
             (*(int *)(iVar3 + 0x1fca) < 0x160)) {
            iVar3 = *(int *)(local_258 * 2 + 0x17f6);
            if (iVar3 == 1) {
              iVar3 = *(int *)(local_258 * 2 + 0x1f8a);
              if ((iVar3 + -8 <= aiStack_184[local_256]) && (aiStack_184[local_256] <= iVar3 + 0x18)
                 ) {
                iVar3 = *(int *)(local_258 * 2 + 0x1fca);
                iVar4 = iVar3 + -8;
LAB_1000_4c9d:
                if (iVar4 <= aiStack_1a6[local_256]) {
                  iVar3 = iVar3 + 0x18;
LAB_1000_4ca6:
                  if (aiStack_1a6[local_256] <= iVar3) {
                    FUN_1000_824a(local_258);
                    local_162 = local_162 + 1;
                    if (*(int *)0x181e == 0) {
                      aiStack_1a6[iVar5] = -0x10;
                    }
                  }
                }
              }
            }
            else if (iVar3 == 2) {
LAB_1000_4d50:
              iVar3 = *(int *)(local_258 * 2 + 0x1f8a);
              if ((iVar3 + -8 <= aiStack_184[local_256]) && (aiStack_184[local_256] <= iVar3 + 0x38)
                 ) {
                iVar3 = *(int *)(local_258 * 2 + 0x1fca);
                iVar4 = iVar3 + -0xc;
                goto LAB_1000_4c9d;
              }
            }
            else if (iVar3 == 3) {
              iVar3 = *(int *)(local_258 * 2 + 0x1f8a);
              if (((iVar3 + -0xc <= aiStack_184[local_256]) &&
                  (aiStack_184[local_256] <= iVar3 + 0xc)) &&
                 (iVar3 = *(int *)(local_258 * 2 + 0x1fca), iVar3 + -10 <= aiStack_1a6[local_256]))
              {
                iVar3 = iVar3 + 10;
                goto LAB_1000_4ca6;
              }
            }
            else {
              if (iVar3 == 4) goto LAB_1000_4d50;
              if (iVar3 == 9) {
                iVar3 = *(int *)(local_258 * 2 + 0x1f8a);
                if ((((iVar3 + -8 <= aiStack_184[local_256]) &&
                     (aiStack_184[local_256] <= iVar3 + 0x18)) &&
                    (iVar3 = *(int *)(local_258 * 2 + 0x1fca), iVar3 + -8 <= aiStack_1a6[local_256])
                    ) && (aiStack_1a6[local_256] <= iVar3 + 0x18)) {
                  FUN_1000_824a(local_258);
                  local_162 = local_162 + 1;
                  if (*(int *)0x181e == 0) {
                    aiStack_1a6[iVar5] = -0x10;
                  }
                  if (*(int *)0x1dc0 == 0) {
                    FUN_1000_9d84();
                    iVar5 = *(int *)(local_258 * 2 + 0x1f8a) + 8;
                    *(int *)0x193e = iVar5;
                    *(int *)0x1d40 = *(int *)(local_258 * 2 + 0x1fca) + 8;
                    uVar7 = -(iVar5 - *(int *)0x1f8a) + 0x20;
                    uVar8 = (int)uVar7 >> 0xf;
                    if ((int)((uVar7 ^ uVar8) - uVar8) < 0x21) {
                      iVar5 = FUN_1000_efc8();
                      *(int *)0x1db2 = iVar5 % 3 + *(int *)0x1d6a / 2 + -2;
                    }
                    else {
                      if (iVar5 == *(int *)0x1f8a) {
                        iVar5 = 0;
                      }
                      else if (-(iVar5 - *(int *)0x1f8a) < 1) {
                        iVar5 = -1;
                      }
                      else {
                        iVar5 = 1;
                      }
                      iVar3 = FUN_1000_efc8();
                      uVar7 = (int)*(uint *)0x1d6a >> 0xf;
                      *(int *)0x1db2 =
                           (((int)((*(uint *)0x1d6a ^ uVar7) - uVar7) >> 1 ^ uVar7) - uVar7) +
                           (iVar3 % 2 + 1) * iVar5;
                    }
                    uVar7 = (*(int *)0x1fca - *(int *)0x1d40) + 0x10;
                    uVar8 = (int)uVar7 >> 0xf;
                    if ((int)((uVar7 ^ uVar8) - uVar8) < 0x21) {
                      iVar5 = FUN_1000_efc8();
                      *(int *)0x1db4 = (iVar5 % 2) * 4 + -2;
                    }
                    else {
                      if (*(int *)0x1d40 == *(int *)0x1fca) {
                        iVar5 = 0;
                      }
                      else if (*(int *)0x1fca - *(int *)0x1d40 < 1) {
                        iVar5 = -1;
                      }
                      else {
                        iVar5 = 1;
                      }
                      iVar3 = FUN_1000_efc8();
                      *(int *)0x1db4 = (iVar3 % 3 + 2) * iVar5;
                    }
                  }
                }
              }
            }
          }
        }
        if (((aiStack_184[local_256] < 0) || (0x26f < aiStack_184[local_256])) ||
           (0x15f < aiStack_1a6[local_256])) {
          aiStack_1a6[local_256] = -0x10;
        }
        if (aiStack_1a6[local_256] < -0xf) {
          local_90 = local_90 + -1;
        }
      }
    }
    for (local_256 = 0; local_256 < 0x10; local_256 = local_256 + 1) {
      if (aiStack_2be[local_256] < 0) {
        aiStack_2be[local_256] = 0x160;
      }
      iVar5 = local_256;
      if (aiStack_2be[local_256] < 0x160) {
        aiStack_29c[local_256] = aiStack_29c[local_256] + (aiStack_b0[local_256] - *(int *)0x1d6a);
        piVar1 = aiStack_2be + iVar5;
        *piVar1 = *piVar1 + aiStack_15c[iVar5];
        if (((*piVar1 < 0) || (aiStack_29c[iVar5] < 0)) || (0x277 < aiStack_29c[iVar5])) {
          aiStack_2be[local_256] = 0x160;
        }
        else {
          if (*(int *)0x1faa == 10) {
            if (((*(int *)0x1f8a <= aiStack_29c[local_256]) &&
                (aiStack_29c[local_256] <= *(int *)0x1f8a + 0x3a)) &&
               ((*(int *)0x1fca + 6 <= aiStack_2be[local_256] &&
                (aiStack_2be[local_256] <= *(int *)0x1fca + 0x1a)))) {
              *(undefined2 *)0x1faa = 9;
              aiStack_2be[local_256] = 0x160;
              FUN_1000_cff4(4);
            }
          }
          if ((aiStack_2be[local_256] < 0x160) && (-1 < aiStack_2be[local_256])) goto LAB_1000_4fec;
        }
        local_254 = local_254 + -1;
      }
LAB_1000_4fec:
    }
    for (local_256 = 1; local_256 <= *(int *)0x17f4; local_256 = local_256 + 1) {
      iVar5 = local_256 * 2;
      if (((9 < *(int *)(iVar5 + 0x1faa)) && (-0x20 < *(int *)(iVar5 + 0x1fca))) &&
         (*(int *)(iVar5 + 0x1fca) < 0x160)) {
        iVar5 = *(int *)(local_256 * 2 + 0x17f6);
        if (iVar5 == 1) {
LAB_1000_505c:
          iVar5 = *(int *)(local_256 * 2 + 0x1f8a);
          if ((iVar5 + -0x30 <= *(int *)0x1f8a) && (*(int *)0x1f8a <= iVar5 + 0x10)) {
            iVar5 = *(int *)(local_256 * 2 + 0x1fca);
            iVar3 = iVar5 + -0x10;
LAB_1000_5083:
            if (iVar3 <= *(int *)0x1fca) {
              iVar5 = iVar5 + 0x14;
LAB_1000_508c:
              if ((*(int *)0x1fca <= iVar5) && (9 < *(int *)0x1faa)) {
                *(undefined2 *)0x1faa = 9;
                FUN_1000_cff4(4);
              }
            }
          }
        }
        else if (iVar5 == 2) {
LAB_1000_50f6:
          iVar5 = *(int *)(local_256 * 2 + 0x1f8a);
          if ((iVar5 + -0x30 <= *(int *)0x1f8a) && (*(int *)0x1f8a <= iVar5 + 0x30)) {
            iVar5 = *(int *)(local_256 * 2 + 0x1fca);
            iVar3 = iVar5 + -0x14;
            goto LAB_1000_5083;
          }
        }
        else if (iVar5 == 3) {
          iVar5 = *(int *)(local_256 * 2 + 0x1f8a);
          if (((iVar5 + -0x30 <= *(int *)0x1f8a) && (*(int *)0x1f8a <= iVar5)) &&
             (iVar5 = *(int *)(local_256 * 2 + 0x1fca), iVar5 + -0x14 <= *(int *)0x1fca)) {
            iVar5 = iVar5 + 4;
            goto LAB_1000_508c;
          }
        }
        else {
          if (iVar5 == 4) goto LAB_1000_50f6;
          if (iVar5 == 9) goto LAB_1000_505c;
        }
      }
    }
    if (*(int *)0x1dc0 != 0) {
      *(int *)0x1d40 = *(int *)0x1d40 + *(int *)0x1db4;
      iVar5 = *(int *)0x1f8a;
      *(int *)0x193e = *(int *)0x193e + (*(int *)0x1db2 - *(int *)0x1d6a);
      if ((((iVar5 + -4 <= *(int *)0x193e) && (*(int *)0x193e <= *(int *)0x1f8a + 0x34)) &&
          (*(int *)0x1fca <= *(int *)0x1d40)) && (*(int *)0x1d40 <= *(int *)0x1fca + 0x18)) {
        if (*(int *)0x1dc0 == 4) {
          *(undefined1 *)0x2ba = 0;
          FUN_1000_83b5(0x2b8);
          local_256 = 1;
          do {
            iVar5 = local_256 * 2;
            if (((*(int *)(iVar5 + 0x1faa) == 10) && (*(int *)(iVar5 + 0x1fca) != -0x20)) &&
               ((-0x20 < *(int *)(iVar5 + 0x1f8a) && (*(int *)(iVar5 + 0x1f8a) < 0x260)))) {
              local_162 = local_162 + 1;
              FUN_1000_824a(local_256);
            }
            local_256 = local_256 + 1;
          } while (local_256 < 0x10);
          for (local_256 = 0; local_256 < *(int *)0x1d48; local_256 = local_256 + 1) {
            aiStack_1a6[local_256] = -0x10;
          }
          local_90 = 0;
          local_254 = 0;
          for (local_256 = 0; local_256 < 0x10; local_256 = local_256 + 1) {
            aiStack_2be[local_256] = 0x160;
          }
          FUN_1000_cff4(4);
          FUN_1000_8425(0x2b8);
          *(undefined1 *)0x2ba = 7;
          FUN_1000_a25a();
        }
        else {
          FUN_1000_80f0();
        }
        FUN_1000_a0d8();
        *(undefined2 *)0x1dc0 = 0;
        FUN_1000_cff4(6);
      }
      if (((*(int *)0x1d40 < -0xf) || (0x15f < *(int *)0x1d40)) ||
         ((*(int *)0x193e < 0x11 || (0x25f < *(int *)0x193e)))) {
        *(undefined2 *)0x1dc0 = 0;
      }
    }
    *(byte *)0x1844 = *(byte *)0x1844 ^ 1;
    for (local_256 = *(int *)0x17f4; 0 < local_256; local_256 = local_256 + -1) {
      iVar5 = local_256 * 2;
      *(int *)(iVar5 + 0x1f8a) =
           *(int *)(iVar5 + 0x1f8a) + (*(int *)(iVar5 + 0x1d6a) - *(int *)0x1d6a);
      *(int *)(iVar5 + 0x1fca) = *(int *)(iVar5 + 0x1fca) + *(int *)(iVar5 + 0x1d8a);
    }
    *(int *)0x1fca = *(int *)0x1fca + *(int *)0x1d8a;
    local_256 = 0;
    do {
      piVar1 = local_8e + local_256;
      *piVar1 = *piVar1 - local_34a[local_256] * *(int *)0x1d6a;
      if (*piVar1 < 0) {
        local_8e[local_256] = local_8e[local_256] + 0x280;
      }
      if (0x27f < local_8e[local_256]) {
        local_8e[local_256] = local_8e[local_256] + -0x280;
      }
      FUN_1000_b50e(local_8e[local_256],local_13c[local_256],local_252[local_256]);
      local_256 = local_256 + 1;
    } while (local_256 < 0x46);
    for (local_256 = *(int *)0x17f4; 0 < local_256; local_256 = local_256 + -1) {
      if ((-0x20 < *(int *)(local_256 * 2 + 0x1fca)) && (*(int *)(local_256 * 2 + 0x1fca) < 0x160))
      {
        if ((*(int *)(local_256 * 2 + 0x17f6) == 2) || (*(int *)(local_256 * 2 + 0x17f6) == 4)) {
          bVar2 = 1;
        }
        else {
          bVar2 = 0;
        }
        iVar5 = *(int *)(local_256 * 2 + 0x1f8a);
        if ((-iVar5 == (-(uint)bVar2 & 0x20) || (int)-(-(uint)bVar2 & 0x20) < iVar5) &&
           (*(int *)(local_256 * 2 + 0x1f8a) < 0x260)) {
          if (*(int *)(local_256 * 2 + 0x1faa) < 10) {
            iVar5 = *(int *)(local_256 * 2 + 0x17f6);
            if (iVar5 == 1) {
LAB_1000_53d2:
              FUN_1000_8562(local_256);
            }
            else {
              if (iVar5 != 2) {
                if (iVar5 == 3) {
                  iVar4 = local_256 * 2;
                  iVar3 = *(int *)(iVar4 + 0x1fca) + -8;
                  if (-1 < iVar3) {
                    iVar3 = local_256 * 2;
                    iVar5 = *(int *)(*(int *)(iVar3 + 0x1faa) * 2 + 0x4ec) + 0x20;
                    iVar4 = *(int *)(iVar3 + 0x1fca) + -8;
                    iVar3 = *(int *)(iVar3 + 0x1f8a) + -8;
                    goto LAB_1000_5484;
                  }
                  iVar5 = *(int *)(*(int *)(iVar4 + 0x1faa) * 2 + 0x4ec) + 0x20;
                  iVar4 = *(int *)(iVar4 + 0x1f8a) + -8;
                  goto LAB_1000_540e;
                }
                if (iVar5 != 4) {
                  if (iVar5 != 9) goto LAB_1000_538b;
                  goto LAB_1000_53d2;
                }
              }
              FUN_1000_85b8(local_256);
            }
          }
          else {
            iVar5 = *(int *)(local_256 * 2 + 0x17f6);
            if (iVar5 == 1) {
              if (*(int *)(local_256 * 2 + 0x1fca) < 0) {
                iVar5 = 0x23;
LAB_1000_54d5:
                iVar3 = *(int *)(local_256 * 2 + 0x1fca);
                iVar4 = *(int *)(local_256 * 2 + 0x1f8a);
LAB_1000_540e:
                FUN_1000_c322(iVar4,iVar3,iVar5);
              }
              else {
                iVar5 = 0x23;
LAB_1000_5475:
                iVar3 = local_256 << 1;
LAB_1000_547c:
                iVar4 = *(int *)(iVar3 + 0x1fca);
                iVar3 = *(int *)(iVar3 + 0x1f8a);
LAB_1000_5484:
                FUN_1000_bfd6(iVar3,iVar4,iVar5);
              }
            }
            else if (iVar5 == 2) {
              uVar7 = -(uint)(0 < *(int *)(local_256 * 2 + 0x1d6a)) & 2;
              iVar5 = uVar7 + 0x2b;
              iVar3 = uVar7 + 0x2a;
LAB_1000_5575:
              FUN_1000_88a2(*(undefined2 *)(local_256 * 2 + 0x1f8a),
                            *(undefined2 *)(local_256 * 2 + 0x1fca),iVar3,iVar5);
            }
            else {
              if (iVar5 == 3) {
                if (-1 < *(int *)(local_256 * 2 + 0x1fca)) {
                  iVar5 = *(int *)0x1844 + *(int *)0x1d42 + 0x38;
                  goto LAB_1000_5475;
                }
                iVar5 = *(int *)0x1844 + *(int *)0x1d42 + 0x38;
                goto LAB_1000_54d5;
              }
              if (iVar5 == 4) {
                iVar5 = local_256 * 2;
                if (-1 < *(int *)(iVar5 + 0x1fca)) {
                  uVar7 = -(uint)(0 < *(int *)(local_256 * 2 + 0x1d6a)) & 4;
                  iVar5 = *(int *)0x1844 * 2 + uVar7 + 0x39;
                  iVar3 = uVar7 + (*(int *)0x1844 + 0x1c) * 2;
                  goto LAB_1000_5575;
                }
                uVar7 = -(uint)(0 < *(int *)(iVar5 + 0x1d6a)) & 4;
                FUN_1000_88d6(*(undefined2 *)(iVar5 + 0x1f8a),*(undefined2 *)(iVar5 + 0x1fca),
                              uVar7 + (*(int *)0x1844 + 0x1c) * 2,*(int *)0x1844 * 2 + uVar7 + 0x39)
                ;
              }
              else if (iVar5 == 9) {
                iVar3 = local_256 * 2;
                iVar5 = 0x2f - (uint)(*(int *)(iVar3 + 0x1d6a) < 1);
                goto LAB_1000_547c;
              }
            }
          }
        }
      }
LAB_1000_538b:
    }
    local_258 = *(int *)0x181e * 0x10 + *(int *)0x1d42 + 0x14;
    for (local_256 = 0; local_256 < *(int *)0x1d48; local_256 = local_256 + 1) {
      if (-0x10 < aiStack_1a6[local_256]) {
        if (aiStack_1a6[local_256] < 0) {
          FUN_1000_c322(aiStack_184[local_256],aiStack_1a6[local_256],
                        (-(uint)(0 < aiStack_278[local_256]) & 3) + aiStack_1c6[local_256] +
                        local_258);
        }
        else {
          FUN_1000_bfd6(aiStack_184[local_256],aiStack_1a6[local_256],
                        (-(uint)(0 < aiStack_278[local_256]) & 3) + aiStack_1c6[local_256] +
                        local_258);
        }
      }
    }
    local_258 = *(int *)0x1844 + *(int *)0x1d46 + *(int *)0x1d42;
    for (local_256 = 0; local_256 < 0x10; local_256 = local_256 + 1) {
      if ((aiStack_2be[local_256] < 0x160) && (-1 < aiStack_2be[local_256])) {
        FUN_1000_bfd6(aiStack_29c[local_256],aiStack_2be[local_256],local_258);
      }
    }
    if (*(int *)0x1faa < 10) {
      FUN_1000_85b8(0);
    }
    else {
      FUN_1000_bfd6(*(undefined2 *)0x1f8a,*(undefined2 *)0x1fca,0x28);
      FUN_1000_bfd6(*(int *)0x1f8a + 0x20,*(undefined2 *)0x1fca,0x29);
    }
    if (*(int *)0x1dc0 != 0) {
      FUN_1000_bfd6(*(undefined2 *)0x193e,*(undefined2 *)0x1d40,
                    *(int *)0x1dc0 + *(int *)0x1d42 + 0x28);
    }
    FUN_1000_8292();
    for (local_256 = *(int *)0x17f4; 0 < local_256; local_256 = local_256 + -1) {
      if ((-1 < *(int *)(local_256 * 2 + 0x1fca)) && (*(int *)(local_256 * 2 + 0x1fca) < 0x161)) {
        iVar5 = *(int *)(local_256 * 2 + 0x17f6);
        if (iVar5 == 1) {
          iVar5 = 6;
LAB_1000_5723:
          uVar6 = 3;
        }
        else {
          if (iVar5 == 2) {
            iVar5 = 2;
          }
          else {
            if (iVar5 == 3) {
              uVar6 = 3;
              iVar5 = 3;
              goto LAB_1000_5727;
            }
            if (iVar5 != 4) {
              if (iVar5 != 9) goto LAB_1000_5732;
              iVar5 = -(*(int *)0x1844 * 7 + -0xf);
              goto LAB_1000_5723;
            }
            iVar5 = 4;
          }
          uVar6 = 7;
        }
LAB_1000_5727:
        FUN_1000_890a(local_256,uVar6,iVar5);
      }
LAB_1000_5732:
    }
    FUN_1000_890a(0,7,0xf);
    while (iVar5 = FUN_1000_bf8e(), iVar5 != 0) {
      FUN_1000_bf98();
    }
    FUN_1000_e538(0x2130);
    do {
      uVar7 = FUN_1000_bb38();
    } while (uVar7 < *(int *)0x1820 - 1U);
    *(undefined2 *)0xdd0 = 0;
    out(0xa4,(byte)*(undefined2 *)0x1844);
    out(0xa6,(byte)*(undefined2 *)0x1844 ^ 1);
    FUN_1000_b4ee();
  } while( true );
}



/* 1000:5818  FUN_1000_5818  10278 bytes, 1 callers */

/* WARNING: Removing unreachable block (ram,0x00017e1e) */

void FUN_1000_5818(void)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar7;
  int local_480 [100];
  int local_3b8;
  int local_3b6;
  int aiStack_3b4 [16];
  int local_394;
  int aiStack_392 [16];
  int local_372;
  int local_370;
  int aiStack_36e [16];
  int local_34e;
  int local_34c;
  int local_34a;
  undefined2 local_348;
  int aiStack_346 [16];
  int local_326 [100];
  int local_25e;
  int aiStack_25c [16];
  int aiStack_23c [4];
  int local_234;
  int aiStack_232 [16];
  int local_212;
  int local_210;
  int aiStack_20e [16];
  int local_1ee;
  int local_1ec;
  undefined2 local_1ea;
  undefined2 local_1e8;
  int local_1e6;
  uint auStack_1e4 [16];
  int local_1c4 [100];
  uint auStack_fc [16];
  int local_dc [4];
  int local_d4;
  int local_d2 [100];
  int local_a [4];
  
  local_34c = 0;
  do {
    iVar3 = FUN_1000_efc8();
    iVar4 = local_34c;
    local_dc[local_34c + 5] = iVar3 % 0x280;
    iVar3 = FUN_1000_efc8();
    local_1c4[iVar4] = iVar3 % 0x160;
    iVar3 = FUN_1000_efc8();
    local_326[iVar4] = iVar3 % 4 + 0xc;
    iVar3 = FUN_1000_efc8();
    local_480[iVar4] = iVar3 % 3 + 1;
    local_34c = local_34c + 1;
  } while (local_34c < 100);
  if (*(int *)0x1818 != *(int *)0x1dae) {
    FUN_1000_9568();
  }
  FUN_1000_ba8c(0,0,0,0);
  FUN_1000_8098();
  local_1ec = *(int *)0x1dac + *(int *)0x1d46 + *(int *)0x1d42;
  uVar5 = (int)*(uint *)0x1818 >> 0xf;
  local_3b6 = ((int)((*(uint *)0x1818 ^ uVar5) - uVar5) >> 2 ^ uVar5) - uVar5;
  if (local_3b6 == 1) {
    local_25e = 100;
    *(undefined2 *)0x1f94 = 800;
    *(undefined2 *)0x1f90 = 800;
    *(undefined2 *)0x1f8c = 800;
    *(undefined2 *)0x1f96 = 0x360;
    *(undefined2 *)0x1f92 = 0x360;
    *(undefined2 *)0x1f8e = 0x360;
    local_348 = 0;
    local_234 = 0;
    local_210 = 0;
    *(undefined2 *)0x1fce = 0;
    *(undefined2 *)0x1fcc = 0;
    *(undefined2 *)0x1fd2 = 0x20;
    *(undefined2 *)0x1fd0 = 0x20;
    *(undefined2 *)0x1fd6 = 0x40;
    *(undefined2 *)0x1fd4 = 0x40;
    *(undefined2 *)0x1d6c = 0xffec;
    *(undefined2 *)0x1d8c = 0x14;
    *(int *)0x17f8 = local_1ec;
    *(int *)0x17fa = local_1ec + 2;
    *(int *)0x17fc = local_1ec + 8;
    *(int *)0x17fe = local_1ec + 10;
    *(int *)0x1800 = local_1ec + 0x10;
    *(int *)0x1802 = local_1ec + 0x12;
  }
  else if (local_3b6 == 2) {
    local_348 = 0;
    local_25e = 0;
    local_234 = 0;
    local_210 = 0;
    local_34c = 1;
    do {
      *(undefined2 *)(local_34c * 2 + 0x1f8a) = 0xff38;
      *(undefined2 *)(local_34c * 2 + 0x1fca) = 0xffea;
      local_34c = local_34c + 1;
    } while (local_34c < 0x10);
    *(undefined2 *)0x1824 = 200;
    *(int *)0x17f8 = local_1ec + 0xc;
    *(int *)0x17fa = local_1ec + 0x14;
    *(undefined2 *)0x1fce = 10;
    iVar4 = local_1ec + 5;
    *(int *)0x180c = iVar4;
    *(int *)0x180a = iVar4;
    *(int *)0x1808 = iVar4;
    *(int *)0x17fc = iVar4;
    iVar4 = local_1ec + 4;
    *(int *)0x1806 = iVar4;
    *(int *)0x1804 = iVar4;
    *(int *)0x1802 = iVar4;
    *(int *)0x1800 = iVar4;
    *(int *)0x17fe = iVar4;
    iVar4 = local_1ec + 6;
    *(int *)0x1812 = iVar4;
    *(int *)0x1810 = iVar4;
    *(int *)0x180e = iVar4;
  }
  else if (local_3b6 == 3) {
    *(undefined2 *)0x1f8e = 0xfef4;
    *(undefined2 *)0x1f8c = 0xfef4;
    *(undefined2 *)0x1fd6 = 0x84;
    *(undefined2 *)0x1fd0 = 0x84;
    *(undefined2 *)0x1fcc = 0x84;
    *(int *)0x17f8 = local_1ec + 0x21;
    *(undefined2 *)0x1d6c = 0x10;
    local_348 = 0;
    local_234 = 0;
    local_210 = 0;
    *(undefined2 *)0x1824 = 0;
    *(undefined2 *)0x1d4c = 0;
    *(undefined2 *)0x1d8c = 0;
    *(undefined2 *)0x1fd8 = 0xa4;
    *(undefined2 *)0x1fd2 = 0xa4;
    *(undefined2 *)0x1fce = 0xa4;
    *(int *)0x17fa = local_1ec + 0x29;
    *(undefined2 *)0x1f92 = 0xfed4;
    *(undefined2 *)0x1f90 = 0xfed4;
    local_25e = 100;
    *(undefined2 *)0x1fd4 = 100;
    *(int *)0x17fc = local_1ec + 0x18;
    *(undefined2 *)0x1fda = 0xc4;
    *(int *)0x17fe = local_1ec + 0x30;
    *(undefined2 *)0x1f9a = 0xff14;
    *(undefined2 *)0x1f98 = 0xff14;
    *(undefined2 *)0x1f96 = 0xff14;
    *(undefined2 *)0x1f94 = 0xff14;
    *(int *)0x1800 = local_1ec + 0x1a;
    *(int *)0x1802 = local_1ec + 0x22;
    *(int *)0x1804 = local_1ec + 0x2a;
    *(int *)0x1806 = local_1ec + 0x32;
  }
  for (local_34c = 0; iVar4 = local_34c, local_34c < 0x10; local_34c = local_34c + 1) {
    aiStack_232[local_34c] = -0x20;
    aiStack_36e[local_34c] = 0x10;
    aiStack_25c[iVar4] = 0;
  }
  local_34c = 0;
  do {
    local_dc[local_34c] = 0x160;
    aiStack_23c[local_34c] = 0;
    local_34c = local_34c + 1;
  } while (local_34c < 4);
  local_34c = 0;
  do {
    iVar4 = local_34c;
    aiStack_3b4[local_34c] = 0x160;
    aiStack_346[iVar4] = 0;
    auStack_fc[iVar4] = 0;
    auStack_1e4[iVar4] = 0;
    local_34c = local_34c + 1;
  } while (local_34c < 0x10);
  local_212 = 1;
  *(undefined2 *)0x1f8a = 0x120;
  *(undefined2 *)0x1db4 = 0;
  *(undefined2 *)0x1db2 = 0;
  *(undefined2 *)0x1d40 = 0;
  *(undefined2 *)0x193e = 0;
  *(undefined2 *)0x1dc0 = 0;
  local_1e8 = 0;
  local_1ea = 0;
  local_1ee = 0;
  *(undefined2 *)0x193c = 0;
  *(undefined2 *)0x184a = 0;
  *(undefined2 *)0x1846 = 0;
  *(undefined2 *)0x1d8a = 0;
  *(undefined2 *)0x1d6a = 0;
  local_3b8 = 0;
  local_34a = 0;
  local_d4 = 0;
  local_1e6 = (*(int *)0x1818 / 3 + 2) * 5;
  out(0xa6,(byte)*(undefined2 *)0x1844 ^ 1);
  FUN_1000_b4ee();
  FUN_1000_8292();
  local_34c = 0;
  do {
    FUN_1000_b50e(local_dc[local_34c + 5],local_1c4[local_34c],local_326[local_34c]);
    local_34c = local_34c + 1;
  } while (local_34c < 100);
  do {
    bVar2 = in(0x60);
  } while ((bVar2 & 0x20) != 0);
  do {
    bVar2 = in(0x60);
  } while ((bVar2 & 0x20) == 0);
  out(0xa6,(byte)*(undefined2 *)0x1844);
  out(0xa4,(byte)*(undefined2 *)0x1844 ^ 1);
  FUN_1000_b4ee();
  FUN_1000_8292();
  local_34c = 0;
  do {
    FUN_1000_b50e(local_dc[local_34c + 5],local_1c4[local_34c],local_326[local_34c]);
    local_34c = local_34c + 1;
  } while (local_34c < 100);
  FUN_1000_bfd6(*(undefined2 *)0x1f8a,*(undefined2 *)0x1fca,0x28);
  FUN_1000_bfd6(*(int *)0x1f8a + 0x20,*(undefined2 *)0x1fca,0x29);
  out(0xa4,(byte)*(undefined2 *)0x1844);
  out(0xa6,(byte)*(undefined2 *)0x1844 ^ 1);
  FUN_1000_cf6a(6);
  FUN_1000_cf44();
  FUN_1000_d046();
  if (*(int *)0x1818 == *(int *)0x1dae) {
    *(undefined2 *)0x1d48 = 4;
    *(undefined2 *)0x181e = 0;
    *(undefined2 *)0x20c6 = 0;
    FUN_1000_a2ca();
    *(undefined2 *)0x1faa = 10;
    *(undefined1 *)0x2ba = 0;
    FUN_1000_82d7(0x2b8);
    *(undefined1 *)0x2ba = 7;
    FUN_1000_a072();
  }
  else {
    FUN_1000_a196();
  }
  if (*(int *)0x1d4a < 6) {
    *(undefined2 *)0x1d4a = 6;
  }
  if (*(int *)0x181a == 1) {
    local_210 = 0x13;
  }
  *(undefined2 *)0xdd0 = 0;
  do {
    FUN_1000_8184();
    local_372 = FUN_1000_e3c8(0x2130);
    if (((local_372 != 0) || (*(int *)0x213e != 0)) && (FUN_1000_9e70(), *(int *)0x184c == 0))
    goto LAB_1000_804a;
    *(undefined2 *)0x1d8a = 0;
    *(undefined2 *)0x1d6a = 0;
    if (*(int *)0x1faa < 10) {
      iVar4 = *(int *)0x1faa;
      *(int *)0x1faa = *(int *)0x1faa + -1;
      if (iVar4 < 1) {
        local_1ee = 1;
        *(int *)0x1842 = *(int *)0x1842 + -1;
LAB_1000_804a:
        FUN_1000_cf2c();
        FUN_1000_a23c();
        if ((local_1ee != 1) && (*(int *)0x1842 != 0)) {
          FUN_1000_95a4(local_dc + 5,local_1c4,local_480,local_326);
        }
        if ((local_1ee == 1) && (*(int *)0x1842 == 0)) {
          FUN_1000_a29e();
        }
        out(0xa6,(char)*(undefined2 *)0x1844);
        FUN_1000_84ae();
        return;
      }
    }
    else {
      if ((*(int *)0x2132 != 0) && (*(int *)0x1d4a + *(int *)0x1fca < 0x140)) {
        *(undefined2 *)0x1d8a = *(undefined2 *)0x1d4a;
      }
      if ((*(int *)0x2130 != 0) && (-1 < *(int *)0x1fca - *(int *)0x1d4a)) {
        *(int *)0x1d8a = -*(int *)0x1d4a;
      }
      if ((*(int *)0x2136 != 0) && (*(int *)0x1d4a + *(int *)0x1f8a < 0x210)) {
        *(undefined2 *)0x1d6a = *(undefined2 *)0x1d4a;
      }
      if ((*(int *)0x2134 != 0) && (0x2f < *(int *)0x1f8a - *(int *)0x1d4a)) {
        *(int *)0x1d6a = -*(int *)0x1d4a;
      }
      if ((((*(int *)0x2138 != 0) && (*(int *)0x212c == 0)) ||
          ((*(int *)0x213a != 0 && (*(int *)0x212c != 0)))) &&
         ((iVar4 = *(int *)0x20c6 * 2 - *(int *)0x1d48, -local_d4 != iVar4 && local_d4 <= -iVar4 &&
          (local_212 != 0)))) {
        for (local_34c = 0; local_34c < *(int *)0x1d48; local_34c = local_34c + 1) {
          if (aiStack_232[local_34c] < -0xf) {
            local_34e = local_34c;
            break;
          }
        }
        iVar4 = local_34e;
        aiStack_232[local_34e] = *(int *)0x1fca + 0xc;
        aiStack_20e[local_34e] = *(int *)0x1f8a + 5;
        aiStack_36e[local_34e] = (-2 - *(int *)0x181e) * 6;
        local_d4 = local_d4 + 1;
        aiStack_25c[iVar4] = 0;
        local_212 = 0;
        if (*(int *)0x20c6 == 1) {
          for (local_34c = 0; local_34c < *(int *)0x1d48; local_34c = local_34c + 1) {
            if (aiStack_232[local_34c] < -0xf) {
              local_34e = local_34c;
              break;
            }
          }
          aiStack_232[local_34e] = *(int *)0x1fca + 0xc;
          aiStack_20e[local_34e] = *(int *)0x1f8a + 5;
          aiStack_36e[local_34e] = (-2 - *(int *)0x181e) * 6;
          aiStack_25c[local_34c] = -1;
          for (local_34c = 0; local_34c < *(int *)0x1d48; local_34c = local_34c + 1) {
            if (aiStack_232[local_34c] < -0xf) {
              local_34e = local_34c;
              break;
            }
          }
          aiStack_232[local_34e] = *(int *)0x1fca + 0xc;
          aiStack_20e[local_34e] = *(int *)0x1f8a + 5;
          aiStack_36e[local_34e] = (-2 - *(int *)0x181e) * 6;
          aiStack_25c[local_34c] = 1;
          local_d4 = local_d4 + 2;
        }
        FUN_1000_cff4(5);
      }
      if ((((*(int *)0x213a != 0) && (*(int *)0x212c == 0)) ||
          ((*(int *)0x2138 != 0 && (*(int *)0x212c != 0)))) &&
         ((iVar4 = *(int *)0x20c6 * 2 - *(int *)0x1d48, -local_d4 != iVar4 && local_d4 <= -iVar4 &&
          (local_212 != 0)))) {
        for (local_34c = 0; iVar4 = local_34e, local_34c < *(int *)0x1d48; local_34c = local_34c + 1
            ) {
          if (aiStack_232[local_34c] < -0xf) {
            local_34e = local_34c;
          }
        }
        aiStack_232[local_34e] = *(int *)0x1fca + 0xb;
        aiStack_20e[local_34e] = *(int *)0x1f8a + 0x2c;
        aiStack_36e[local_34e] = (*(int *)0x181e + 2) * 6;
        local_d4 = local_d4 + 1;
        aiStack_25c[iVar4] = 0;
        local_212 = 0;
        if (*(int *)0x20c6 == 1) {
          for (local_34c = 0; local_34c < *(int *)0x1d48; local_34c = local_34c + 1) {
            if (aiStack_232[local_34c] < -0xf) {
              local_34e = local_34c;
              break;
            }
          }
          aiStack_232[local_34e] = *(int *)0x1fca + 0xb;
          aiStack_20e[local_34e] = *(int *)0x1f8a + 0x2c;
          aiStack_36e[local_34e] = (*(int *)0x181e + 2) * 6;
          aiStack_25c[local_34c] = -1;
          for (local_34c = 0; local_34c < *(int *)0x1d48; local_34c = local_34c + 1) {
            if (aiStack_232[local_34c] < -0xf) {
              local_34e = local_34c;
              break;
            }
          }
          aiStack_232[local_34e] = *(int *)0x1fca + 0xb;
          aiStack_20e[local_34e] = *(int *)0x1f8a + 0x2c;
          aiStack_36e[local_34e] = (*(int *)0x181e + 2) * 6;
          aiStack_25c[local_34c] = 1;
          local_d4 = local_d4 + 2;
        }
        FUN_1000_cff4(5);
      }
      if ((*(int *)0x2138 == 0) && (*(int *)0x213a == 0)) {
        local_212 = 1;
      }
    }
    if (local_3b6 == 1) {
      if (local_210 < 0x14) {
        local_25e = local_25e + 1;
        if (*(int *)0x1fb8 < 10) {
          piVar1 = (int *)0x1fb8;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            *(undefined2 *)0x1fb8 = 10;
          }
        }
        if (local_210 < 0xc) {
          if (((local_234 == 0) && (100 < local_25e)) && (local_3b8 == 0)) {
            if (*(int *)0x1f8c == 0x1d2) {
              iVar4 = 0;
            }
            else if (-*(int *)0x1f8c == -0x1d2 || -*(int *)0x1f8c + 0x1d2 < 0) {
              iVar4 = -1;
            }
            else {
              iVar4 = 1;
            }
            *(int *)0x1d6c = iVar4 * 0xe;
            if (*(int *)0x1d8c != 0) {
              if (*(int *)0x1d8c < 1) {
                iVar4 = -1;
              }
              else {
                iVar4 = 1;
              }
              *(int *)0x1d8c = *(int *)0x1d8c - iVar4;
            }
            uVar5 = (*(int *)0x1d6c + *(int *)0x1f8c) - 0x1d2;
            uVar6 = (int)uVar5 >> 0xf;
            if ((int)((uVar5 ^ uVar6) - uVar6) < 9) {
              local_234 = 1;
              iVar4 = FUN_1000_efc8();
              *(int *)0x1d8c = (iVar4 % 2) * 0x10 + -8;
              local_25e = 0;
              *(undefined2 *)0x1d6c = 0;
            }
          }
          if (((local_234 == 1) && (100 < local_25e)) && (local_3b8 == 0)) {
            if (*(int *)0x1f8c == 0x2e) {
              iVar4 = 0;
            }
            else if (-*(int *)0x1f8c == -0x2e || -*(int *)0x1f8c + 0x2e < 0) {
              iVar4 = -1;
            }
            else {
              iVar4 = 1;
            }
            *(int *)0x1d6c = iVar4 * 0xe;
            if (*(int *)0x1d8c != 0) {
              if (*(int *)0x1d8c < 1) {
                iVar4 = -1;
              }
              else {
                iVar4 = 1;
              }
              *(int *)0x1d8c = *(int *)0x1d8c - iVar4;
            }
            uVar5 = (*(int *)0x1d6c + *(int *)0x1f8c) - 0x2e;
            uVar6 = (int)uVar5 >> 0xf;
            if ((int)((uVar5 ^ uVar6) - uVar6) < 9) {
              iVar4 = FUN_1000_efc8();
              *(int *)0x1d8c = (iVar4 % 2) * 0x10 + -8;
              local_234 = 0;
              local_25e = 0;
              *(undefined2 *)0x1d6c = 0;
            }
          }
          if (local_25e < 0x65) {
            *(undefined2 *)0x1d6c = 0;
            iVar4 = FUN_1000_efc8();
            if ((iVar4 % 10 == 0) && (local_3b8 == 0)) {
              if (local_234 == 0) {
                local_a[3] = *(int *)0x1f8c + 0x50;
                local_a[0] = *(int *)0x1f8c + 0x50;
                local_a[2] = *(int *)0x1f8c + 0x68;
                local_a[1] = *(int *)0x1f8c + 0x68;
                local_394 = 0;
                do {
                  aiStack_23c[local_394] = 0x10;
                  local_394 = local_394 + 1;
                } while (local_394 < 4);
              }
              else {
                local_a[3] = *(int *)0x1f8c + 0x10;
                local_a[0] = *(int *)0x1f8c + 0x10;
                local_a[2] = *(int *)0x1f8c + -8;
                local_a[1] = *(int *)0x1f8c + -8;
                for (local_394 = iVar4 % 10; local_394 < 4; local_394 = local_394 + 1) {
                  aiStack_23c[local_394] = -0x10;
                }
              }
              local_dc[0] = *(int *)0x1fcc + 6;
              local_dc[1] = *(int *)0x1fcc + 0x18;
              local_dc[2] = *(int *)0x1fcc + 0x39;
              local_dc[3] = *(int *)0x1fcc + 0x4b;
              local_3b8 = 4;
            }
          }
          if ((*(int *)0x1d8c + *(int *)0x1fcc < 1) || (0xff < *(int *)0x1d8c + *(int *)0x1fcc)) {
            *(int *)0x1d8c = -*(int *)0x1d8c;
          }
        }
        else {
          uVar5 = (*(int *)0x1f8a - *(int *)0x1f8c) + 0x20;
          if (0x32 < (int)((uVar5 ^ (int)uVar5 >> 0xf) - ((int)uVar5 >> 0xf))) {
            if (*(int *)0x1f8a - *(int *)0x1f8c == -0x20) {
              iVar4 = 0;
            }
            else if ((int)uVar5 < 1) {
              iVar4 = -1;
            }
            else {
              iVar4 = 1;
            }
            *(int *)0x1d6c = *(int *)0x1d6c + iVar4 * *(int *)0x1844;
          }
          uVar5 = (*(int *)0x1fca - *(int *)0x1fcc) + 0x20;
          if (0x32 < (int)((uVar5 ^ (int)uVar5 >> 0xf) - ((int)uVar5 >> 0xf))) {
            if (*(int *)0x1fca - *(int *)0x1fcc == -0x20) {
              iVar4 = 0;
            }
            else if ((int)uVar5 < 1) {
              iVar4 = -1;
            }
            else {
              iVar4 = 1;
            }
            *(int *)0x1d8c = *(int *)0x1d8c + iVar4 * *(int *)0x1844;
          }
          if ((*(int *)0x1f8c < 0x21) || (0x1df < *(int *)0x1f8c)) {
            if (*(int *)0x1f8c == 0x100) {
              iVar4 = 0;
            }
            else if (-*(int *)0x1f8c == -0x100 || -*(int *)0x1f8c + 0x100 < 0) {
              iVar4 = -1;
            }
            else {
              iVar4 = 1;
            }
            *(int *)0x1d6c = *(int *)0x1d6c + iVar4 * 2;
          }
          if ((*(int *)0x1fcc < 1) || (0xff < *(int *)0x1fcc)) {
            if (*(int *)0x1fcc == 0x80) {
              iVar4 = 0;
            }
            else if (-*(int *)0x1fcc == -0x80 || -*(int *)0x1fcc + 0x80 < 0) {
              iVar4 = -1;
            }
            else {
              iVar4 = 1;
            }
            *(int *)0x1d8c = *(int *)0x1d8c + iVar4 * 2;
          }
          uVar5 = (int)*(uint *)0x1d6c >> 0xf;
          if (8 < (int)((*(uint *)0x1d6c ^ uVar5) - uVar5)) {
            if (*(int *)0x1d6c == 0) {
              iVar4 = 0;
            }
            else if (*(int *)0x1d6c < 1) {
              iVar4 = -1;
            }
            else {
              iVar4 = 1;
            }
            *(int *)0x1d6c = iVar4 << 3;
          }
          uVar5 = (int)*(uint *)0x1d8c >> 0xf;
          if (8 < (int)((*(uint *)0x1d8c ^ uVar5) - uVar5)) {
            if (*(int *)0x1d8c == 0) {
              iVar4 = 0;
            }
            else if (*(int *)0x1d8c < 1) {
              iVar4 = -1;
            }
            else {
              iVar4 = 1;
            }
            *(int *)0x1d8c = iVar4 << 3;
          }
          if (*(int *)0x193c == 0) {
            iVar4 = FUN_1000_efc8();
            if ((((iVar4 % 2 == 0) && (local_34a < 0x10)) && (0 < *(int *)0x1f8c)) &&
               (*(int *)0x1f8c < 0x201)) {
              local_34e = iVar4 % 2;
              do {
                if (0x15f < aiStack_3b4[local_34e]) {
                  local_370 = local_34e;
                }
                local_34e = local_34e + 1;
              } while (local_34e < 0x10);
              iVar3 = FUN_1000_efc8();
              iVar4 = local_370;
              aiStack_3b4[local_370] = (iVar3 % 2) * 0x18 + *(int *)0x1fcc + 0x20;
              iVar3 = FUN_1000_efc8();
              aiStack_392[iVar4] = (iVar3 % 2) * 0x38 + *(int *)0x1f8c + 0x20;
              uVar5 = (*(int *)0x1f8a - aiStack_392[iVar4]) + 0x20;
              uVar6 = (int)uVar5 >> 0xf;
              if ((int)((uVar5 ^ uVar6) - uVar6) < 0x33) {
                iVar4 = FUN_1000_efc8();
                auStack_fc[local_370] = iVar4 % 5 - 2;
              }
              else {
                if (aiStack_392[iVar4] == *(int *)0x1f8a) {
                  iVar4 = 0;
                }
                else if (*(int *)0x1f8a - aiStack_392[iVar4] < 1) {
                  iVar4 = -1;
                }
                else {
                  iVar4 = 1;
                }
                iVar3 = FUN_1000_efc8();
                auStack_fc[local_370] = (iVar3 % 5 + 6) * iVar4;
              }
              uVar5 = *(int *)0x1fca - aiStack_3b4[local_370];
              uVar6 = (int)(uVar5 + 0x10) >> 0xf;
              if (0x32 < (int)((uVar5 + 0x10 ^ uVar6) - uVar6)) {
                if (aiStack_3b4[local_370] != *(int *)0x1fca) goto LAB_1000_6a58;
LAB_1000_6a62:
                iVar4 = 0;
                goto LAB_1000_6a64;
              }
LAB_1000_6a86:
              iVar4 = FUN_1000_efc8();
              auStack_1e4[local_370] = iVar4 % 5 - 2;
              goto LAB_1000_6a9b;
            }
          }
        }
      }
      else {
        local_234 = local_234 + 1;
        if (local_234 == 2) {
          FUN_1000_cf2c();
        }
        *(undefined2 *)0x1d8c = 0;
        *(undefined2 *)0x1d6c = 0;
        for (local_34c = 7; local_34c < 0x10; local_34c = local_34c + 1) {
          iVar4 = local_34c * 2;
          if (*(int *)(iVar4 + 0x1faa) < 10) {
            piVar1 = (int *)(local_34c * 2 + 0x1faa);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              *(undefined2 *)(local_34c * 2 + 0x1faa) = 10;
            }
          }
          else if (local_234 < 0x28) {
            iVar3 = FUN_1000_efc8();
            *(int *)(iVar4 + 0x1faa) = -(iVar3 % 3 + -9);
            iVar3 = FUN_1000_efc8();
            *(int *)(iVar4 + 0x1f8a) = iVar3 % 0x80 + *(int *)0x1f8c + -0x10;
            iVar3 = FUN_1000_efc8();
            *(int *)(iVar4 + 0x1fca) = iVar3 % 0x60 + *(int *)0x1fcc + -0x10;
            *(undefined2 *)(iVar4 + 0x1d6a) = 0;
            *(undefined2 *)(iVar4 + 0x1d8a) = 0;
            FUN_1000_cff4(4);
          }
        }
        if (local_234 == 0x28) {
          *(undefined1 *)0x2ba = 0;
          FUN_1000_83b5(0x2b8);
          local_34c = 1;
          do {
            iVar4 = local_34c * 2;
            *(undefined2 *)(iVar4 + 0x1f96) = *(undefined2 *)(iVar4 + 0x1f8a);
            *(undefined2 *)(iVar4 + 0x1fd6) = *(undefined2 *)(iVar4 + 0x1fca);
            *(undefined2 *)(iVar4 + 0x1fb6) = 9;
            local_34c = local_34c + 1;
          } while (local_34c < 7);
          iVar4 = *(int *)(*(int *)0x1816 * 0x14 + 0x2ec);
LAB_1000_6162:
          *(int *)0x1db6 = *(int *)0x1db6 + iVar4;
          FUN_1000_a25a();
          FUN_1000_cff4(4);
          FUN_1000_8425(0x2b8);
          *(undefined1 *)0x2ba = 7;
        }
      }
    }
    else if (local_3b6 == 2) {
      if (*(int *)0x1fc8 < 10) {
        piVar1 = (int *)0x1fc8;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          *(undefined2 *)0x1fc8 = 10;
        }
      }
      if (local_210 < 0x14) {
        if (local_210 < 0xe) {
          uVar5 = 0x120 - *(int *)0x1f8c;
          if ((200 < (int)((uVar5 ^ (int)uVar5 >> 0xf) - ((int)uVar5 >> 0xf))) &&
             (*(int *)0x1f8c != 0x120)) {
            if ((int)uVar5 < 1) {
              iVar4 = -1;
            }
            else {
              iVar4 = 1;
            }
            *(int *)0x1d6c = *(int *)0x1d6c + iVar4;
          }
          uVar5 = 0x90 - *(int *)0x1fcc;
          if (100 < (int)((uVar5 ^ (int)uVar5 >> 0xf) - ((int)uVar5 >> 0xf))) {
            if (*(int *)0x1fcc == 0x90) {
              iVar4 = 0;
            }
            else if ((int)uVar5 < 1) {
              iVar4 = -1;
            }
            else {
              iVar4 = 1;
            }
            *(int *)0x1d8c = *(int *)0x1d8c + iVar4 * 2;
          }
          uVar5 = (int)*(uint *)0x1d6c >> 0xf;
          if (6 < (int)((*(uint *)0x1d6c ^ uVar5) - uVar5)) {
            if (*(int *)0x1d6c == 0) {
              iVar4 = 0;
            }
            else if (*(int *)0x1d6c < 1) {
              iVar4 = -1;
            }
            else {
              iVar4 = 1;
            }
            *(int *)0x1d6c = iVar4 * 6;
          }
          uVar5 = (int)*(uint *)0x1d8c >> 0xf;
          if (0x14 < (int)((*(uint *)0x1d8c ^ uVar5) - uVar5)) {
            if (*(int *)0x1d8c == 0) {
              iVar4 = 0;
            }
            else if (*(int *)0x1d8c < 1) {
              iVar4 = -1;
            }
            else {
              iVar4 = 1;
            }
            *(int *)0x1d8c = iVar4 * 0x14;
          }
          if ((((*(int *)0x1844 + *(int *)0x1846 == 0) && (local_3b8 < 4)) && (0 < *(int *)0x1f8c))
             && (((*(int *)0x1f8c < 0x201 && (0 < *(int *)0x1fcc)) && (*(int *)0x1fcc < 0x160)))) {
            local_34e = 0;
            do {
              if (0x15f < local_dc[local_34e]) {
                local_370 = local_34e;
              }
              local_34e = local_34e + 1;
            } while (local_34e < 4);
            local_dc[local_370] = *(int *)0x1fcc + 0x1c;
            local_a[local_370] = *(int *)0x1f8c + 0x10;
            aiStack_23c[local_370] = (-(uint)(0 < *(int *)0x1d6c) & 0x28) - 0x14;
            local_3b8 = local_3b8 + 1;
          }
        }
        else {
          uVar5 = 0x120 - *(int *)0x1f8c;
          if ((int)((uVar5 ^ (int)uVar5 >> 0xf) - ((int)uVar5 >> 0xf)) < 0x187) {
            *(int *)0x1d6c = (-(uint)(0 < *(int *)0x1d6c) & 0x2c) - 0x16;
          }
          else {
            if (*(int *)0x1f8c == 0x120) {
              iVar4 = 0;
            }
            else if ((int)uVar5 < 1) {
              iVar4 = -1;
            }
            else {
              iVar4 = 1;
            }
            *(int *)0x1d6c = *(int *)0x1d6c + iVar4 * 2;
            *(undefined2 *)0x1d8c = 0;
            iVar4 = FUN_1000_efc8();
            *(int *)0x1824 = iVar4 % 0x160 + -0x20;
          }
          if (*(int *)0x1824 == *(int *)0x1fcc) {
            iVar4 = 0;
          }
          else if (*(int *)0x1824 == *(int *)0x1fcc || *(int *)0x1824 - *(int *)0x1fcc < 0) {
            iVar4 = -1;
          }
          else {
            iVar4 = 1;
          }
          *(int *)0x1d8c = *(int *)0x1d8c + iVar4 * 2;
          uVar5 = (int)*(uint *)0x1d8c >> 0xf;
          if (4 < (int)((*(uint *)0x1d8c ^ uVar5) - uVar5)) {
            if (*(int *)0x1d8c == 0) {
              iVar4 = 0;
            }
            else if (*(int *)0x1d8c < 1) {
              iVar4 = -1;
            }
            else {
              iVar4 = 1;
            }
            *(int *)0x1d8c = iVar4 << 2;
          }
          if (((*(int *)0x1844 + *(int *)0x1846 == 0) && (local_34a < 0x10)) &&
             ((0 < *(int *)0x1f8c && (*(int *)0x1f8c < 0x201)))) {
            local_34e = 0;
            do {
              if (0x15f < aiStack_3b4[local_34e]) {
                local_370 = local_34e;
              }
              iVar4 = local_370;
              local_34e = local_34e + 1;
            } while (local_34e < 0x10);
            aiStack_3b4[local_370] = *(int *)0x1fcc + 0x1c;
            iVar3 = *(int *)0x1f8c;
            aiStack_392[iVar4] = iVar3 + 0x10;
            iVar4 = (iVar3 + 0x10) - *(int *)0x1f8a;
            uVar5 = 0x20 - iVar4;
            if ((int)((uVar5 ^ (int)uVar5 >> 0xf) - ((int)uVar5 >> 0xf)) < 0x33) {
              iVar4 = FUN_1000_efc8();
              auStack_fc[local_370] = iVar4 % 5 - 2;
            }
            else {
              if (iVar4 == 0x20) {
                iVar4 = 0;
              }
              else if ((int)uVar5 < 1) {
                iVar4 = -1;
              }
              else {
                iVar4 = 1;
              }
              iVar3 = FUN_1000_efc8();
              auStack_fc[local_370] = (iVar3 % 5 + 6) * iVar4;
            }
            uVar5 = (*(int *)0x1fca - aiStack_3b4[local_370]) + 0x10;
            if ((int)((uVar5 ^ (int)uVar5 >> 0xf) - ((int)uVar5 >> 0xf)) < 0x33) goto LAB_1000_6a86;
            if (*(int *)0x1fca - aiStack_3b4[local_370] == -0x10) goto LAB_1000_6a62;
LAB_1000_6a58:
            if ((int)uVar5 < 1) {
              iVar4 = -1;
            }
            else {
              iVar4 = 1;
            }
LAB_1000_6a64:
            iVar3 = FUN_1000_efc8();
            auStack_1e4[local_370] = (iVar3 % 5 + 6) * iVar4;
LAB_1000_6a9b:
            local_34a = local_34a + 1;
          }
        }
      }
      else {
        if (*(int *)0x1d6c != 0) {
          *(undefined2 *)0x1d6e = *(undefined2 *)0x1d6c;
        }
        *(undefined2 *)0x1d8c = 0;
        *(undefined2 *)0x1d6c = 0;
        local_34c = 1;
        do {
          iVar4 = local_34c * 2;
          if ((*(int *)(iVar4 + 0x1faa) < 10) &&
             (*(int *)(iVar4 + 0x1faa) = *(int *)(iVar4 + 0x1faa) + -1, *(int *)(iVar4 + 0x1faa) < 1
             )) {
            *(undefined2 *)(iVar4 + 0x1faa) = 0;
          }
          local_34c = local_34c + 1;
        } while (local_34c < 0xf);
        local_234 = local_234 + (uint)(*(int *)0x1844 == 0);
        if ((*(int *)0x1844 == 0) && (local_234 < 0xd)) {
          *(undefined2 *)(local_234 * -2 + 0x1fc8) = 9;
          FUN_1000_cff4(4);
        }
        if (local_234 == 0xc) {
          *(undefined1 *)0x2ba = 0;
          FUN_1000_83b5(0x2b8);
          *(undefined2 *)0x1fae = 9;
          *(undefined2 *)0x1fac = 9;
          *(int *)0x1db6 = *(int *)0x1db6 + *(int *)(*(int *)0x1816 * 0x14 + 0x2f0);
          FUN_1000_a25a();
          FUN_1000_cf2c();
          FUN_1000_cff4(4);
          FUN_1000_8425(0x2b8);
          *(undefined1 *)0x2ba = 7;
          local_234 = 0x30;
        }
      }
    }
    else if (local_3b6 == 3) {
      if (local_210 < 0x14) {
        if (*(int *)0x1fbc < 10) {
          piVar1 = (int *)0x1fbc;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            *(undefined2 *)0x1fbc = 10;
          }
        }
        if (local_234 == 0) {
          if (*(int *)0x1f8c == 0x1f2) {
            iVar4 = 0;
          }
          else if (-*(int *)0x1f8c == -0x1f2 || -*(int *)0x1f8c + 0x1f2 < 0) {
            iVar4 = -1;
          }
          else {
            iVar4 = 1;
          }
          *(int *)0x1d6c = iVar4 * 10;
          if (*(int *)0x1d8c != 0) {
            if (*(int *)0x1d8c < 1) {
              iVar4 = -1;
            }
            else {
              iVar4 = 1;
            }
            *(int *)0x1d8c = *(int *)0x1d8c - iVar4;
          }
          uVar5 = (*(int *)0x1d6c + *(int *)0x1f8c) - 0x1d2;
          uVar6 = (int)uVar5 >> 0xf;
          if ((int)((uVar5 ^ uVar6) - uVar6) < 9) {
            local_234 = 1;
            *(undefined2 *)0x1d8c = 0xfffe;
            *(undefined2 *)0x1d6c = 0;
          }
        }
        else {
          if (local_25e < 0xa2) {
            local_25e = local_25e + 1;
          }
          if (local_25e == 0xa2) {
            local_25e = 0;
            *(undefined2 *)0x1d4c = 2;
          }
          if (local_25e < 0x31) {
            if (local_25e == 0x10) {
              *(undefined2 *)0x1d4c = 0;
              *(undefined2 *)0x1d8c = 0;
              if (local_3b8 == 0) {
                local_a[2] = *(int *)0x1f90;
                local_a[0] = local_a[2];
                local_a[3] = local_a[2] + 0x20;
                local_a[1] = local_a[2] + 0x20;
                local_dc[1] = *(int *)0x1fd0 + 8;
                local_dc[0] = *(int *)0x1fd0 + 8;
                local_dc[3] = *(int *)0x1fd2 + 8;
                local_dc[2] = *(int *)0x1fd2 + 8;
                local_394 = 0;
                do {
                  aiStack_23c[local_394] = -0x10;
                  local_394 = local_394 + 1;
                } while (local_394 < 4);
                local_3b8 = 2;
              }
            }
            if (local_25e == 0x20) {
              *(undefined2 *)0x1d4c = 0xfffe;
              iVar4 = FUN_1000_efc8();
              *(int *)0x1d8c = (iVar4 % 2) * 4 + -2;
              if (9 < local_210) {
                local_25e = 0xa4;
                *(undefined2 *)0x1d4c = 0;
                *(int *)0x1d8c = *(int *)0x1d8c << 2;
              }
            }
            if (local_25e == 0x30) {
              *(undefined2 *)0x1d4c = 0;
            }
            iVar4 = *(int *)0x1d4c;
            *(int *)0x1fd0 = *(int *)0x1fd0 - iVar4;
            *(int *)0x1fd2 = *(int *)0x1fd2 + iVar4;
          }
        }
        if ((*(int *)0x1d8c + *(int *)0x1fcc < 0x21) || (0xff < *(int *)0x1d8c + *(int *)0x1fcc)) {
          *(int *)0x1d8c = -*(int *)0x1d8c;
        }
        if ((*(int *)0x1844 + *(int *)0x1846 == 0) && (local_34a < 0x10)) {
          bVar7 = local_25e == 0xa4;
          iVar4 = FUN_1000_efc8();
          iVar4 = iVar4 % (int)(4 - (uint)bVar7);
          if ((iVar4 == 0) && ((0 < *(int *)0x1f8c && (*(int *)0x1f8c < 0x201)))) {
            local_34e = iVar4;
            do {
              if (0x15f < aiStack_3b4[local_34e]) {
                local_370 = local_34e;
              }
              iVar4 = local_370;
              local_34e = local_34e + 1;
            } while (local_34e < 0x10);
            aiStack_3b4[local_370] = *(int *)0x1fcc + 0x1c;
            aiStack_392[iVar4] = *(int *)0x1f8c + 0x10;
            aiStack_346[iVar4] = (-(uint)(local_25e == 0xa4) & 0x1e) + 0x1e;
            auStack_1e4[iVar4] = 0;
            auStack_fc[iVar4] = 0;
            goto LAB_1000_6a9b;
          }
        }
      }
      else {
        local_234 = local_234 + 1;
        if (local_234 == 2) {
          FUN_1000_cf2c();
        }
        *(undefined2 *)0x1d8c = 0;
        *(undefined2 *)0x1d6c = 0;
        for (local_34c = 9; local_34c < 0x10; local_34c = local_34c + 1) {
          iVar4 = local_34c * 2;
          if (*(int *)(iVar4 + 0x1faa) < 10) {
            piVar1 = (int *)(local_34c * 2 + 0x1faa);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              *(undefined2 *)(local_34c * 2 + 0x1faa) = 10;
            }
          }
          else if (local_234 < 0x28) {
            iVar3 = FUN_1000_efc8();
            *(int *)(iVar4 + 0x1faa) = -(iVar3 % 3 + -9);
            iVar3 = FUN_1000_efc8();
            *(int *)(iVar4 + 0x1f8a) = iVar3 % 0x60 + *(int *)0x1f90 + 0x10;
            iVar3 = FUN_1000_efc8();
            *(int *)(iVar4 + 0x1fca) = iVar3 % 0x80 + *(int *)0x1fd0 + -0x10;
            *(undefined2 *)(iVar4 + 0x1d6a) = 0;
            *(undefined2 *)(iVar4 + 0x1d8a) = 0;
            FUN_1000_cff4(4);
          }
        }
        if (local_234 == 0x28) {
          *(undefined1 *)0x2ba = 0;
          FUN_1000_83b5(0x2b8);
          local_34c = 1;
          do {
            iVar4 = local_34c * 2;
            *(undefined2 *)(iVar4 + 0x1f9a) = *(undefined2 *)(iVar4 + 0x1f8a);
            *(undefined2 *)(iVar4 + 0x1fda) = *(undefined2 *)(iVar4 + 0x1fca);
            *(undefined2 *)(iVar4 + 0x1fba) = 9;
            local_34c = local_34c + 1;
          } while (local_34c < 6);
          *(undefined2 *)0x1fa6 = *(undefined2 *)0x1f9a;
          *(undefined2 *)0x1fe6 = *(undefined2 *)0x1fda;
          *(undefined2 *)0x1fc6 = 9;
          iVar4 = *(int *)(*(int *)0x1816 * 0x14 + 0x2f4);
          goto LAB_1000_6162;
        }
      }
    }
    if (0x32 < local_234) goto LAB_1000_804a;
    for (local_34c = 0; iVar4 = local_34c, local_34c < *(int *)0x1d48; local_34c = local_34c + 1) {
      if (-0x10 < aiStack_232[local_34c]) {
        aiStack_20e[local_34c] = aiStack_20e[local_34c] + aiStack_36e[local_34c];
        aiStack_232[local_34c] =
             aiStack_232[local_34c] + aiStack_25c[local_34c] * (*(int *)0x181e + 2) * 2;
        if (local_3b6 == 1) {
          if (((*(int *)0x1f8c <= aiStack_20e[local_34c]) &&
              (aiStack_20e[local_34c] <= *(int *)0x1f8c + 0x70)) &&
             ((*(int *)0x1fcc + -8 <= aiStack_232[local_34c] &&
              (aiStack_232[local_34c] <= *(int *)0x1fcc + 0x58)))) {
            if ((*(int *)0x1fcc + 0x1c <= aiStack_232[local_34c]) &&
               (aiStack_232[local_34c] <= *(int *)0x1fcc + 0x34)) {
              FUN_1000_cff4(3);
              *(undefined2 *)0x1fb8 = 9;
              *(int *)0x1fd8 = aiStack_232[iVar4] + -8;
              *(int *)0x1f98 = aiStack_20e[iVar4] + -8;
              local_210 = local_210 + 1;
              *(int *)0x1db6 = *(int *)0x1db6 + *(int *)(*(int *)0x1816 * 0x14 + 0x2ea);
              FUN_1000_a25a();
            }
            iVar4 = local_34c << 1;
LAB_1000_6e91:
            *(undefined2 *)((int)aiStack_232 + iVar4) = 0xfff0;
          }
        }
        else if (local_3b6 == 2) {
          if ((((*(int *)0x1f8c + -6 <= aiStack_20e[local_34c]) &&
               (aiStack_20e[local_34c] <= *(int *)0x1f8c + 0x36)) &&
              (*(int *)0x1fcc + 2 <= aiStack_232[local_34c])) &&
             (aiStack_232[local_34c] <= *(int *)0x1fcc + 0x2e)) {
            FUN_1000_cff4(3);
            *(undefined2 *)0x1fc8 = 9;
            *(int *)0x1fe8 = aiStack_232[iVar4] + -8;
            *(int *)0x1fa8 = aiStack_20e[iVar4] + -8;
            local_210 = local_210 + 1;
            *(int *)0x1db6 = *(int *)0x1db6 + *(int *)(*(int *)0x1816 * 0x14 + 0x2ee);
            FUN_1000_a25a();
            aiStack_232[iVar4] = -0x10;
          }
          for (local_34e = 3; local_34e < 0xf; local_34e = local_34e + 1) {
            iVar4 = *(int *)(local_34e * 2 + 0x1f8a);
            if (((iVar4 + -0xc <= aiStack_20e[local_34c]) &&
                (aiStack_20e[local_34c] <= iVar4 + 0x1c)) &&
               ((iVar4 = *(int *)(local_34e * 2 + 0x1fca), iVar4 + -4 <= aiStack_232[local_34c] &&
                (aiStack_232[local_34c] <= iVar4 + 0x1c)))) {
              aiStack_232[local_34c] = -0x10;
            }
          }
        }
        else if (local_3b6 == 3) {
          if (((*(int *)0x1f8c + 10 <= aiStack_20e[local_34c]) &&
              (aiStack_20e[local_34c] <= *(int *)0x1f8c + 0x16)) &&
             ((*(int *)0x1fcc + -8 <= aiStack_232[local_34c] &&
              (aiStack_232[local_34c] <= *(int *)0x1fcc + 0x38)))) {
            if ((*(int *)0x1fcc + 0xe <= aiStack_232[local_34c]) &&
               (aiStack_232[local_34c] <= *(int *)0x1fcc + 0x22)) {
              FUN_1000_cff4(3);
              *(undefined2 *)0x1fbc = 9;
              *(int *)0x1fdc = aiStack_232[iVar4] + -8;
              *(int *)0x1f9c = aiStack_20e[iVar4] + -8;
              local_210 = local_210 + 1;
              *(int *)0x1db6 = *(int *)0x1db6 + *(int *)(*(int *)0x1816 * 0x14 + 0x2f2);
              FUN_1000_a25a();
            }
            aiStack_232[local_34c] = -0x10;
          }
          iVar4 = local_34c * 2;
          if ((((*(int *)0x1f94 + -8 <= aiStack_20e[local_34c]) &&
               (aiStack_20e[local_34c] <= *(int *)0x1f94 + 0x46)) &&
              (*(int *)0x1fd4 + -8 <= aiStack_232[local_34c])) &&
             (aiStack_232[local_34c] <= *(int *)0x1fd4 + 0x78)) goto LAB_1000_6e91;
          local_34e = 3;
          do {
            iVar4 = *(int *)(local_34e * 2 + 0x1f8a);
            if (((iVar4 + -6 <= aiStack_20e[local_34c]) && (aiStack_20e[local_34c] <= iVar4 + 0x38))
               && ((iVar4 = *(int *)(local_34e * 2 + 0x1fca), iVar4 + -8 <= aiStack_232[local_34c]
                   && (aiStack_232[local_34c] <= iVar4 + 0x18)))) {
              aiStack_232[local_34c] = -0x10;
            }
            local_34e = local_34e + 1;
          } while (local_34e < 5);
        }
        if (((aiStack_20e[local_34c] < 0) || (0x26f < aiStack_20e[local_34c])) ||
           (0x15f < aiStack_232[local_34c])) {
          aiStack_232[local_34c] = -0x10;
        }
        if (aiStack_232[local_34c] < -0xf) {
          local_d4 = local_d4 + -1;
        }
      }
    }
    if (0 < local_34a) {
      for (local_34c = 0; local_34c < 0x10; local_34c = local_34c + 1) {
        if (aiStack_3b4[local_34c] < 0) {
          aiStack_3b4[local_34c] = 0x160;
        }
        iVar4 = local_34c;
        if (aiStack_3b4[local_34c] < 0x160) {
          if (0 < aiStack_346[local_34c]) {
            aiStack_346[local_34c] = aiStack_346[local_34c] + -1;
            iVar3 = *(int *)0x1f8a - aiStack_392[local_34c];
            if (iVar3 == -0x20) {
              iVar3 = 0;
            }
            else if (iVar3 == -0x20 || iVar3 + 0x20 < 0) {
              iVar3 = -1;
            }
            else {
              iVar3 = 1;
            }
            auStack_fc[local_34c] = auStack_fc[local_34c] + *(int *)0x1844 * iVar3;
            iVar3 = *(int *)0x1fca - aiStack_3b4[local_34c];
            if (iVar3 == -0x10) {
              iVar3 = 0;
            }
            else if (iVar3 == -0x10 || iVar3 + 0x10 < 0) {
              iVar3 = -1;
            }
            else {
              iVar3 = 1;
            }
            auStack_1e4[local_34c] = auStack_1e4[local_34c] + *(int *)0x1844 * iVar3;
            uVar5 = auStack_fc[local_34c];
            if (8 < (int)((uVar5 ^ (int)uVar5 >> 0xf) - ((int)uVar5 >> 0xf))) {
              if (uVar5 == 0) {
                iVar3 = 0;
              }
              else if ((int)uVar5 < 1) {
                iVar3 = -1;
              }
              else {
                iVar3 = 1;
              }
              auStack_fc[local_34c] = iVar3 << 3;
            }
            uVar5 = auStack_1e4[local_34c];
            if (8 < (int)((uVar5 ^ (int)uVar5 >> 0xf) - ((int)uVar5 >> 0xf))) {
              if (uVar5 == 0) {
                iVar3 = 0;
              }
              else if ((int)uVar5 < 1) {
                iVar3 = -1;
              }
              else {
                iVar3 = 1;
              }
              auStack_1e4[local_34c] = iVar3 << 3;
            }
          }
          aiStack_392[local_34c] = aiStack_392[local_34c] + auStack_fc[local_34c];
          piVar1 = aiStack_3b4 + iVar4;
          *piVar1 = *piVar1 + auStack_1e4[iVar4];
          if (((*piVar1 < 0) || (aiStack_392[iVar4] < 0)) || (0x277 < aiStack_392[iVar4])) {
            aiStack_3b4[local_34c] = 0x160;
          }
          else {
            if (*(int *)0x1faa == 10) {
              if (((*(int *)0x1f8a <= aiStack_392[local_34c]) &&
                  (aiStack_392[local_34c] <= *(int *)0x1f8a + 0x3a)) &&
                 ((*(int *)0x1fca + 6 <= aiStack_3b4[local_34c] &&
                  (aiStack_3b4[local_34c] <= *(int *)0x1fca + 0x1a)))) {
                *(undefined2 *)0x1faa = 9;
                aiStack_3b4[local_34c] = 0x160;
                FUN_1000_cff4(4);
              }
            }
            if ((aiStack_3b4[local_34c] < 0x160) && (-1 < aiStack_3b4[local_34c]))
            goto LAB_1000_7241;
          }
          local_34a = local_34a + -1;
        }
LAB_1000_7241:
      }
    }
    if (local_3b6 == 1) {
      if (0 < local_3b8) {
        for (local_34c = 0; local_34c < 4; local_34c = local_34c + 1) {
          if (local_dc[local_34c] < 0x160) {
            piVar1 = local_a + local_34c;
            *piVar1 = *piVar1 + aiStack_23c[local_34c];
            if ((*piVar1 < 0) || (0x25f < local_a[local_34c])) {
              local_dc[local_34c] = 0x160;
              local_3b8 = local_3b8 + -1;
            }
            else if ((((*(int *)0x1faa == 10) && (*(int *)0x1f8a + -0x14 <= local_a[local_34c])) &&
                     (local_a[local_34c] <= *(int *)0x1f8a + 0x34)) &&
                    ((*(int *)0x1fca + 6 <= local_dc[local_34c] &&
                     (local_dc[local_34c] <= *(int *)0x1fca + 0x1a)))) {
              *(undefined2 *)0x1faa = 9;
              FUN_1000_cff4(4);
            }
          }
        }
      }
    }
    else if (local_3b6 == 2) {
      if (0 < local_3b8) {
        for (local_34c = 0; local_34c < 4; local_34c = local_34c + 1) {
          if (local_dc[local_34c] < 0x160) {
            piVar1 = local_a + local_34c;
            *piVar1 = *piVar1 + aiStack_23c[local_34c];
            if ((*piVar1 < 0) || (0x25f < local_a[local_34c])) {
              local_dc[local_34c] = 0x160;
              local_3b8 = local_3b8 + -1;
            }
            else if ((((*(int *)0x1faa == 10) && (*(int *)0x1f8a + -0x14 <= local_a[local_34c])) &&
                     (local_a[local_34c] <= *(int *)0x1f8a + 0x34)) &&
                    ((*(int *)0x1fca + 6 <= local_dc[local_34c] &&
                     (local_dc[local_34c] <= *(int *)0x1fca + 0x1a)))) {
              *(undefined2 *)0x1faa = 9;
              FUN_1000_cff4(4);
            }
          }
        }
      }
    }
    else if ((local_3b6 == 3) && (0 < local_3b8)) {
      for (local_34c = 0; local_34c < 3; local_34c = local_34c + 2) {
        if (local_dc[local_34c] < 0x160) {
          local_a[local_34c] = local_a[local_34c] + aiStack_23c[local_34c];
          if ((0xa0 < local_a[local_34c + 1] - local_a[local_34c]) || (local_a[local_34c] < 0xa0)) {
            local_a[local_34c + 1] = local_a[local_34c + 1] + aiStack_23c[local_34c];
          }
          if (local_a[local_34c + 1] < 0x10) {
            local_dc[local_34c] = 0x160;
            local_3b8 = local_3b8 + -1;
          }
          else {
            if (local_a[local_34c] < 0x10) {
              local_a[local_34c] = 0;
            }
            if ((((*(int *)0x1faa == 10) && (*(int *)0x1f8a + -4 <= local_a[local_34c + 1])) &&
                (local_a[local_34c] <= *(int *)0x1f8a + 0x34)) &&
               ((*(int *)0x1fca + 6 <= local_dc[local_34c] &&
                (local_dc[local_34c] <= *(int *)0x1fca + 0x1a)))) {
              *(undefined2 *)0x1faa = 9;
              FUN_1000_cff4(4);
            }
          }
        }
      }
    }
    if (local_3b6 == 1) {
      if ((((*(int *)0x1f8c + -0x30 < *(int *)0x1f8a) && (*(int *)0x1f8a < *(int *)0x1f8c + 0x70))
          && (*(int *)0x1fcc + -0x14 < *(int *)0x1fca)) &&
         ((*(int *)0x1fca < *(int *)0x1fcc + 0x54 && (9 < *(int *)0x1faa)))) {
        *(undefined2 *)0x1faa = 9;
        FUN_1000_cff4(4);
      }
    }
    else if (local_3b6 == 2) {
      if ((((*(int *)0x1f8c + -0x30 < *(int *)0x1f8a) && (*(int *)0x1f8a < *(int *)0x1f8c + 0x30))
          && (*(int *)0x1fcc + -0x14 < *(int *)0x1fca)) &&
         ((*(int *)0x1fca < *(int *)0x1fcc + 0x34 && (9 < *(int *)0x1faa)))) {
        *(undefined2 *)0x1faa = 9;
        FUN_1000_cff4(4);
      }
      for (local_34c = 3; local_34c < 0xf; local_34c = local_34c + 1) {
        iVar4 = *(int *)(local_34c * 2 + 0x1f8a);
        if (((iVar4 + -0x30 <= *(int *)0x1f8a) && (*(int *)0x1f8a <= iVar4 + 0x10)) &&
           ((iVar4 = *(int *)(local_34c * 2 + 0x1fca), iVar4 + -0x14 <= *(int *)0x1fca &&
            ((*(int *)0x1fca <= iVar4 + 0x14 && (9 < *(int *)0x1faa)))))) {
          *(undefined2 *)0x1faa = 9;
          FUN_1000_cff4(4);
        }
      }
    }
    else if (local_3b6 == 3) {
      if (((*(int *)0x1f94 + -0x30 < *(int *)0x1f8a) && (*(int *)0x1f8a < *(int *)0x1f94 + 0x30)) &&
         ((*(int *)0x1fd4 + -0x14 < *(int *)0x1fca &&
          ((*(int *)0x1fca < *(int *)0x1fd4 + 0x74 && (9 < *(int *)0x1faa)))))) {
        *(undefined2 *)0x1faa = 9;
        FUN_1000_cff4(4);
      }
      if ((((*(int *)0x1f8c + -0x30 <= *(int *)0x1f8a) && (*(int *)0x1f8a <= *(int *)0x1f8c + 0x10))
          && (*(int *)0x1fcc + -0x14 <= *(int *)0x1fca)) &&
         ((*(int *)0x1fca <= *(int *)0x1fcc + 0x34 && (9 < *(int *)0x1faa)))) {
        *(undefined2 *)0x1faa = 9;
        FUN_1000_cff4(4);
      }
      for (local_34c = 3; local_34c < 5; local_34c = local_34c + 1) {
        iVar4 = *(int *)(local_34c * 2 + 0x1f8a);
        if (((iVar4 + -0x30 < *(int *)0x1f8a) && (*(int *)0x1f8a < iVar4 + 0x30)) &&
           ((iVar4 = *(int *)(local_34c * 2 + 0x1fca), iVar4 + -0x14 < *(int *)0x1fca &&
            ((*(int *)0x1fca < iVar4 + 0x14 && (9 < *(int *)0x1faa)))))) {
          *(undefined2 *)0x1faa = 9;
          FUN_1000_cff4(4);
        }
      }
    }
    *(int *)0x1f8a = *(int *)0x1f8a + *(int *)0x1d6a;
    *(int *)0x1fca = *(int *)0x1fca + *(int *)0x1d8a;
    *(byte *)0x1844 = *(byte *)0x1844 ^ 1;
    for (local_34c = 0; local_34c < 100; local_34c = local_34c + 1) {
      local_1c4[local_34c] = local_1c4[local_34c] + 5;
      if (0x160 < local_1c4[local_34c]) {
        local_1c4[local_34c] = local_1c4[local_34c] + -0x160;
      }
      if (local_dc[local_34c + 5] < 0) {
        local_dc[local_34c + 5] = local_dc[local_34c + 5] + 0x280;
      }
      if (0x27f < local_dc[local_34c + 5]) {
        local_dc[local_34c + 5] = local_dc[local_34c + 5] + -0x280;
      }
      FUN_1000_b50e(((int)*(char *)(local_1c4[local_34c] + 0xbd6) * local_480[local_34c] >> 2) +
                    local_dc[local_34c + 5],local_1c4[local_34c],local_326[local_34c]);
    }
    if (local_3b6 == 1) {
      local_34c = 0;
      do {
        iVar4 = local_34c;
        if (local_dc[local_34c] < 0x160) {
          FUN_1000_bfd6(local_a[local_34c],local_dc[local_34c],*(int *)0x1d42 + 0x34);
          FUN_1000_bfd6(local_a[iVar4] + 0x10,local_dc[iVar4],*(int *)0x1d42 + 0x35);
        }
        local_34c = local_34c + 1;
      } while (local_34c < 4);
      if (local_234 < 0x28) {
        for (local_34c = 1; local_34c < 7; local_34c = local_34c + 1) {
          iVar4 = local_34c * 2;
          *(int *)(iVar4 + 0x1f8a) = *(int *)(iVar4 + 0x1f8a) + *(int *)0x1d6c;
          *(int *)(iVar4 + 0x1fca) = *(int *)(iVar4 + 0x1fca) + *(int *)0x1d8c;
          if (((-0x20 < *(int *)(iVar4 + 0x1fca)) && (*(int *)(iVar4 + 0x1fca) < 0x160)) &&
             ((-0x21 < *(int *)(local_34c * 2 + 0x1f8a) &&
              (*(int *)(local_34c * 2 + 0x1f8a) < 0x260)))) {
            FUN_1000_8518(local_34c);
          }
        }
      }
      for (local_34c = 7; local_34c < 0x10; local_34c = local_34c + 1) {
        iVar4 = local_34c * 2;
        if (*(int *)(iVar4 + 0x1faa) < 10) {
          *(int *)(iVar4 + 0x1f8a) = *(int *)(iVar4 + 0x1f8a) + *(int *)0x1d6c;
          *(int *)(iVar4 + 0x1fca) = *(int *)(iVar4 + 0x1fca) + *(int *)0x1d8c;
          if (local_234 < 0x28) {
            FUN_1000_8562(local_34c);
          }
          else {
            FUN_1000_85b8(local_34c);
          }
        }
      }
    }
    else if (local_3b6 == 2) {
      for (local_34c = 0; iVar4 = local_34c, local_34c < 4; local_34c = local_34c + 1) {
        if (local_dc[local_34c] < 0x160) {
          uVar5 = -(uint)(0 < aiStack_23c[local_34c]) & 2;
          FUN_1000_bfd6(local_a[local_34c],local_dc[local_34c],uVar5 + *(int *)0x1d42 + 0x30);
          FUN_1000_bfd6(local_a[iVar4] + 0x10,local_dc[iVar4],uVar5 + *(int *)0x1d42 + 0x31);
        }
      }
      if (local_210 < 0x14) {
        local_34c = 0xe;
        do {
          iVar4 = local_34c * 2;
          *(undefined2 *)(iVar4 + 0x1f8a) = *(undefined2 *)(iVar4 + 0x1f88);
          *(undefined2 *)(iVar4 + 0x1fca) = *(undefined2 *)(iVar4 + 0x1fc8);
          local_34c = local_34c + -1;
        } while (3 < local_34c);
        *(int *)0x1f90 = *(int *)0x1d6c + *(int *)0x1f8c + 0x10;
        *(int *)0x1fd0 = *(int *)0x1d8c + *(int *)0x1fcc + 0x14;
        for (local_34c = 0xe; 3 < local_34c; local_34c = local_34c + -1) {
          if (((-0x20 < *(int *)(local_34c * 2 + 0x1fca)) &&
              (*(int *)(local_34c * 2 + 0x1fca) < 0x160)) &&
             ((-1 < *(int *)(local_34c * 2 + 0x1f8a) && (*(int *)(local_34c * 2 + 0x1f8a) < 0x260)))
             ) {
            FUN_1000_84d6(local_34c);
          }
        }
        for (local_34c = 1; local_34c < 3; local_34c = local_34c + 1) {
          iVar4 = local_34c * 2;
          *(int *)(iVar4 + 0x1f8a) = *(int *)(iVar4 + 0x1f8a) + *(int *)0x1d6c;
          *(int *)(iVar4 + 0x1fca) = *(int *)(iVar4 + 0x1fca) + *(int *)0x1d8c;
          if ((((-0x20 < *(int *)(iVar4 + 0x1fca)) && (*(int *)(iVar4 + 0x1fca) < 0x160)) &&
              (-0x21 < *(int *)(local_34c * 2 + 0x1f8a))) &&
             (*(int *)(local_34c * 2 + 0x1f8a) < 0x260)) {
            FUN_1000_8622(local_34c,-(0 < *(int *)0x1d6c) & 2);
          }
        }
      }
      else {
        for (local_34c = 0xe; 3 < local_34c; local_34c = local_34c + -1) {
          if (((-0x20 < *(int *)(local_34c * 2 + 0x1fca)) &&
              (*(int *)(local_34c * 2 + 0x1fca) < 0x160)) &&
             ((-1 < *(int *)(local_34c * 2 + 0x1f8a) && (*(int *)(local_34c * 2 + 0x1f8a) < 0x260)))
             ) {
            if (*(int *)(local_34c * 2 + 0x1faa) < 10) {
              if (0 < *(int *)(local_34c * 2 + 0x1faa)) {
                FUN_1000_8562(local_34c);
              }
            }
            else {
              FUN_1000_84d6(local_34c);
            }
          }
        }
        for (local_34c = 1; local_34c < 3; local_34c = local_34c + 1) {
          if (((-0x20 < *(int *)(local_34c * 2 + 0x1fca)) &&
              (*(int *)(local_34c * 2 + 0x1fca) < 0x160)) &&
             ((-0x21 < *(int *)(local_34c * 2 + 0x1f8a) &&
              (*(int *)(local_34c * 2 + 0x1f8a) < 0x260)))) {
            if (*(int *)(local_34c * 2 + 0x1faa) < 10) {
              if (0 < *(int *)(local_34c * 2 + 0x1faa)) {
                FUN_1000_85b8(local_34c);
              }
            }
            else {
              FUN_1000_8622(local_34c,-(0 < *(int *)0x1d6e) & 2);
            }
          }
        }
      }
      if (*(int *)0x1fc8 < 10) {
        *(int *)0x1fa8 = *(int *)0x1fa8 + *(int *)0x1d6c;
        *(int *)0x1fe8 = *(int *)0x1fe8 + *(int *)0x1d8c;
        if ((((-0x20 < *(int *)0x1fe8) && (*(int *)0x1fe8 < 0x160)) && (0 < *(int *)0x1fa8)) &&
           (*(int *)0x1fa8 < 0x260)) {
          FUN_1000_8562(0xf);
        }
      }
    }
    else if (local_3b6 == 3) {
      for (local_34c = 0; iVar4 = local_34c, local_34c < 3; local_34c = local_34c + 2) {
        if (local_dc[local_34c] < 0x160) {
          FUN_1000_bfd6(local_a[local_34c],local_dc[local_34c],*(int *)0x1d42 + 0x36);
          FUN_1000_bfd6(local_a[iVar4 + 1],local_dc[iVar4 + 1],*(int *)0x1d42 + 0x37);
          for (local_34e = local_a[iVar4] + 0x10; local_34e < local_a[local_34c + 1];
              local_34e = local_34e + 0x10) {
            FUN_1000_bfd6(local_34e,local_dc[local_34c],*(int *)0x1d42 + 0x5c);
          }
        }
      }
      if (local_234 < 0x28) {
        for (local_34c = 1; local_34c < 3; local_34c = local_34c + 1) {
          iVar4 = local_34c * 2;
          *(int *)(iVar4 + 0x1f8a) = *(int *)(iVar4 + 0x1f8a) + *(int *)0x1d6c;
          *(int *)(iVar4 + 0x1fca) = *(int *)(iVar4 + 0x1fca) + *(int *)0x1d8c;
          if ((((-0x20 < *(int *)(iVar4 + 0x1fca)) && (*(int *)(iVar4 + 0x1fca) < 0x160)) &&
              (-1 < *(int *)(local_34c * 2 + 0x1f8a))) && (*(int *)(local_34c * 2 + 0x1f8a) < 0x260)
             ) {
            FUN_1000_84d6(local_34c);
          }
        }
        for (local_34c = 3; local_34c < 9; local_34c = local_34c + 1) {
          iVar4 = local_34c * 2;
          *(int *)(iVar4 + 0x1f8a) = *(int *)(iVar4 + 0x1f8a) + *(int *)0x1d6c;
          *(int *)(iVar4 + 0x1fca) = *(int *)(iVar4 + 0x1fca) + *(int *)0x1d8c;
          if (((-0x20 < *(int *)(iVar4 + 0x1fca)) && (*(int *)(iVar4 + 0x1fca) < 0x160)) &&
             ((-0x21 < *(int *)(local_34c * 2 + 0x1f8a) &&
              (*(int *)(local_34c * 2 + 0x1f8a) < 0x260)))) {
            FUN_1000_8518(local_34c);
          }
        }
      }
      for (local_34c = 9; local_34c < 0x10; local_34c = local_34c + 1) {
        iVar4 = local_34c * 2;
        if (*(int *)(iVar4 + 0x1faa) < 10) {
          *(int *)(iVar4 + 0x1f8a) = *(int *)(iVar4 + 0x1f8a) + *(int *)0x1d6c;
          *(int *)(iVar4 + 0x1fca) = *(int *)(iVar4 + 0x1fca) + *(int *)0x1d8c;
          if (local_234 < 0x28) {
            FUN_1000_8562(local_34c);
          }
          else {
            FUN_1000_85b8(local_34c);
          }
        }
      }
    }
    local_34e = *(int *)0x181e * 0x10 + *(int *)0x1d42 + 0x14;
    for (local_34c = 0; local_34c < *(int *)0x1d48; local_34c = local_34c + 1) {
      if (-0x10 < aiStack_232[local_34c]) {
        if (aiStack_232[local_34c] < 0) {
          FUN_1000_c322(aiStack_20e[local_34c],aiStack_232[local_34c],
                        (-(uint)(0 < aiStack_36e[local_34c]) & 3) + aiStack_25c[local_34c] +
                        local_34e);
        }
        else {
          FUN_1000_bfd6(aiStack_20e[local_34c],aiStack_232[local_34c],
                        (-(uint)(0 < aiStack_36e[local_34c]) & 3) + aiStack_25c[local_34c] +
                        local_34e);
        }
      }
    }
    if (0 < local_34a) {
      local_34e = (local_3b6 + -1) * 2 + *(int *)0x1844 + *(int *)0x1d46 + *(int *)0x1d42;
      for (local_34c = 0; local_34c < 0x10; local_34c = local_34c + 1) {
        if ((aiStack_3b4[local_34c] < 0x160) && (-1 < aiStack_3b4[local_34c])) {
          FUN_1000_bfd6(aiStack_392[local_34c],aiStack_3b4[local_34c],local_34e);
        }
      }
    }
    if (*(int *)0x1faa < 10) {
      FUN_1000_bfd6(*(undefined2 *)0x1f8a,*(undefined2 *)0x1fca,
                    (*(int *)(*(int *)0x1faa * 2 + 0x4ec) + 8) * 2);
      iVar4 = *(int *)(*(int *)0x1faa * 2 + 0x4ec) * 2 + 0x11;
    }
    else {
      FUN_1000_bfd6(*(undefined2 *)0x1f8a,*(undefined2 *)0x1fca,0x28);
      iVar4 = 0x29;
    }
    FUN_1000_bfd6(*(int *)0x1f8a + 0x20,*(undefined2 *)0x1fca,iVar4);
    FUN_1000_8292();
    if (local_3b6 == 1) {
      for (local_34c = 1; local_34c < 6; local_34c = local_34c + 2) {
        if ((-1 < *(int *)(local_34c * 2 + 0x1fca)) && (*(int *)(local_34c * 2 + 0x1fca) < 0x161)) {
          FUN_1000_890a(local_34c,0xf,2);
        }
      }
    }
    else if (local_3b6 == 2) {
      if ((-1 < *(int *)0x1fcc) && (*(int *)0x1fcc < 0x161)) {
        FUN_1000_890a(1,7,6);
      }
      if ((-1 < *(int *)0x1fce) && (*(int *)0x1fce < 0x161)) {
        FUN_1000_890a(2,7,6);
      }
      for (local_34c = 3; local_34c < 0xf; local_34c = local_34c + 1) {
        if ((-1 < *(int *)(local_34c * 2 + 0x1fca)) && (*(int *)(local_34c * 2 + 0x1fca) < 0x161)) {
          FUN_1000_890a(local_34c,3,6);
        }
      }
    }
    else if (local_3b6 == 3) {
      if ((-1 < *(int *)0x1fcc) && (*(int *)0x1fcc < 0x161)) {
        FUN_1000_890a(1,0xb,5);
      }
      if ((-1 < *(int *)0x1fce) && (*(int *)0x1fce < 0x161)) {
        FUN_1000_890a(2,0xb,5);
      }
      local_34c = 3;
      do {
        if ((-1 < *(int *)(local_34c * 2 + 0x1fca)) && (*(int *)(local_34c * 2 + 0x1fca) < 0x161)) {
          FUN_1000_890a(local_34c,7,5);
        }
        local_34c = local_34c + 1;
      } while (local_34c < 6);
      if ((-1 < *(int *)0x1fda) && (*(int *)0x1fda < 0x161)) {
        FUN_1000_890a(8,7,5);
      }
    }
    FUN_1000_890a(0,7,0xf);
    while (iVar4 = FUN_1000_bf8e(), iVar4 != 0) {
      FUN_1000_bf98();
    }
    FUN_1000_e538(0x2130);
    do {
      uVar5 = FUN_1000_bb38();
    } while (uVar5 < *(int *)0x1820 - 1U);
    *(undefined2 *)0xdd0 = 0;
    out(0xa4,(byte)*(undefined2 *)0x1844);
    out(0xa6,(byte)*(undefined2 *)0x1844 ^ 1);
    FUN_1000_b4ee();
  } while( true );
}



/* 1000:8098  FUN_1000_8098  88 bytes, 4 callers */

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



/* 1000:80f0  FUN_1000_80f0  145 bytes, 3 callers */

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



/* 1000:8184  FUN_1000_8184  198 bytes, 5 callers */

void __cdecl16near FUN_1000_8184(void)

{
  int iVar1;
  undefined2 unaff_DS;
  
  FUN_1000_ba8c(2,*(int *)0x1844 * 2 + 0xd,0,0);
  FUN_1000_ba8c(3,*(int *)0x1844 * 2 + 0xd,0,*(int *)0x193c + 8);
  FUN_1000_ba8c(4,0,*(int *)0x1844 * 4 + 0xb,*(int *)0x1844 << 3);
  FUN_1000_ba8c(6,*(int *)0x184a + 0xc,*(int *)0x184a + 9,0);
  *(int *)0x1846 = *(int *)0x1846 + 1;
  if (2 < *(int *)0x1846) {
    *(undefined2 *)0x1846 = 0;
  }
  *(int *)0x184a = *(int *)0x184a + 1;
  if (3 < *(int *)0x184a) {
    *(undefined2 *)0x184a = 0;
  }
  *(int *)0x193c = *(int *)0x193c + 1;
  if (7 < *(int *)0x193c) {
    *(undefined2 *)0x193c = 0;
  }
  if (0 < *(int *)0x181c) {
    FUN_1000_a22a();
  }
  iVar1 = FUN_1000_bf8e();
  while (iVar1 != 0) {
    FUN_1000_bf98();
    iVar1 = FUN_1000_bf8e();
  }
  return;
}



/* 1000:824a  FUN_1000_824a  71 bytes, 3 callers */

void __cdecl16near FUN_1000_824a(int param_1)

{
  undefined2 unaff_DS;
  
  param_1 = param_1 * 2;
  *(undefined2 *)(param_1 + 0x1faa) = 9;
  *(int *)0x1db6 =
       *(int *)0x1db6 + *(int *)((*(int *)0x1816 * 10 + *(int *)(param_1 + 0x17f6)) * 2 + 0x2e8);
  FUN_1000_a25a();
  *(undefined2 *)(param_1 + 0x1d8a) = 0;
  *(undefined2 *)(param_1 + 0x1d6a) = 0;
  FUN_1000_cff4(3);
  return;
}



/* 1000:8292  FUN_1000_8292  53 bytes, 8 callers */

void __cdecl16near FUN_1000_8292(void)

{
  FUN_1000_b854(4,0x160,0x4b,399,0xd);
  FUN_1000_b854(0x1e,0x161,0x31,0x18e,8);
  return;
}



/* 1000:82c8  FUN_1000_82c8  15 bytes, 7 callers */

void FUN_1000_82c8(void)

{
  out(0xa6,1);
  FUN_1000_b4ee();
  out(0xa6,0);
  FUN_1000_b4ee();
  return;
}



/* 1000:82d7  FUN_1000_82d7  112 bytes, 7 callers */

void __cdecl16near FUN_1000_82d7(int param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  undefined2 unaff_DS;
  int local_c;
  int local_a;
  int local_6;
  
  iVar3 = 0;
  do {
    FUN_1000_9fbc(2);
    pcVar1 = (char *)(param_1 + 2);
    for (local_6 = 0; local_6 < 0x10; local_6 = local_6 + 1) {
      local_c = iVar3;
      if (*pcVar1 < iVar3) {
        local_c = (int)*pcVar1;
      }
      iVar2 = iVar3;
      if (pcVar1[-2] < iVar3) {
        iVar2 = (int)pcVar1[-2];
      }
      local_a = iVar3;
      if (pcVar1[-1] < iVar3) {
        local_a = (int)pcVar1[-1];
      }
      FUN_1000_ba8c(local_6,iVar2,local_a,local_c);
      pcVar1 = pcVar1 + 3;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x10);
  return;
}



/* 1000:8347  FUN_1000_8347  110 bytes, 1 callers */

void __cdecl16near FUN_1000_8347(int param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  undefined2 unaff_DS;
  int local_c;
  int local_a;
  int local_6;
  
  iVar3 = 0xf;
  do {
    FUN_1000_9fbc(2);
    pcVar1 = (char *)(param_1 + 2);
    for (local_6 = 0; local_6 < 0x10; local_6 = local_6 + 1) {
      local_c = iVar3;
      if (*pcVar1 < iVar3) {
        local_c = (int)*pcVar1;
      }
      iVar2 = iVar3;
      if (pcVar1[-2] < iVar3) {
        iVar2 = (int)pcVar1[-2];
      }
      local_a = iVar3;
      if (pcVar1[-1] < iVar3) {
        local_a = (int)pcVar1[-1];
      }
      FUN_1000_ba8c(local_6,iVar2,local_a,local_c);
      pcVar1 = pcVar1 + 3;
    }
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  return;
}



/* 1000:83b5  FUN_1000_83b5  112 bytes, 4 callers */

void __cdecl16near FUN_1000_83b5(int param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  undefined2 unaff_DS;
  int local_c;
  int local_a;
  int local_6;
  
  iVar3 = 0;
  do {
    FUN_1000_9fbc(1);
    pcVar1 = (char *)(param_1 + 2);
    for (local_6 = 0; local_6 < 0x10; local_6 = local_6 + 1) {
      local_c = iVar3;
      if (iVar3 < *pcVar1) {
        local_c = (int)*pcVar1;
      }
      iVar2 = iVar3;
      if (iVar3 < pcVar1[-2]) {
        iVar2 = (int)pcVar1[-2];
      }
      local_a = iVar3;
      if (iVar3 < pcVar1[-1]) {
        local_a = (int)pcVar1[-1];
      }
      FUN_1000_ba8c(local_6,iVar2,local_a,local_c);
      pcVar1 = pcVar1 + 3;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x10);
  return;
}



/* 1000:8425  FUN_1000_8425  110 bytes, 5 callers */

void __cdecl16near FUN_1000_8425(int param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  undefined2 unaff_DS;
  int local_c;
  int local_a;
  int local_6;
  
  iVar3 = 0xf;
  do {
    FUN_1000_9fbc(1);
    pcVar1 = (char *)(param_1 + 2);
    for (local_6 = 0; local_6 < 0x10; local_6 = local_6 + 1) {
      local_c = iVar3;
      if (iVar3 < *pcVar1) {
        local_c = (int)*pcVar1;
      }
      iVar2 = iVar3;
      if (iVar3 < pcVar1[-2]) {
        iVar2 = (int)pcVar1[-2];
      }
      local_a = iVar3;
      if (iVar3 < pcVar1[-1]) {
        local_a = (int)pcVar1[-1];
      }
      FUN_1000_ba8c(local_6,iVar2,local_a,local_c);
      pcVar1 = pcVar1 + 3;
    }
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  return;
}



/* 1000:8493  FUN_1000_8493  27 bytes, 7 callers */

void __cdecl16near FUN_1000_8493(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  do {
    iVar2 = iVar1 + 1;
    FUN_1000_ba8c(iVar1,0,0,0);
    iVar1 = iVar2;
  } while (iVar2 < 0x10);
  return;
}



/* 1000:84ae  FUN_1000_84ae  40 bytes, 6 callers */

void FUN_1000_84ae(void)

{
  FUN_1000_af50(0xd,0x10);
  FUN_1000_ba8c(0,0,0,0);
  FUN_1000_af50(0,0x12);
  FUN_1000_8493();
  return;
}



/* 1000:84d6  FUN_1000_84d6  64 bytes, 1 callers */

void __cdecl16near FUN_1000_84d6(int param_1)

{
  undefined2 unaff_DS;
  
  param_1 = param_1 * 2;
  if (*(int *)(param_1 + 0x1fca) < 0) {
    FUN_1000_c322(*(undefined2 *)(param_1 + 0x1f8a),*(undefined2 *)(param_1 + 0x1fca),
                  *(undefined2 *)(param_1 + 0x17f6));
  }
  else {
    FUN_1000_bfd6(*(undefined2 *)(param_1 + 0x1f8a),*(undefined2 *)(param_1 + 0x1fca),
                  *(undefined2 *)(param_1 + 0x17f6));
  }
  return;
}



/* 1000:8518  FUN_1000_8518  74 bytes, 1 callers */

void __cdecl16near FUN_1000_8518(int param_1)

{
  undefined2 unaff_DS;
  
  param_1 = param_1 * 2;
  if (*(int *)(param_1 + 0x1fca) < 0) {
    FUN_1000_88d6(*(undefined2 *)(param_1 + 0x1f8a),*(undefined2 *)(param_1 + 0x1fca),
                  *(int *)(param_1 + 0x17f6),*(int *)(param_1 + 0x17f6) + 1);
  }
  else {
    FUN_1000_88a2(*(undefined2 *)(param_1 + 0x1f8a),*(undefined2 *)(param_1 + 0x1fca),
                  *(int *)(param_1 + 0x17f6),*(int *)(param_1 + 0x17f6) + 1);
  }
  return;
}



/* 1000:8562  FUN_1000_8562  86 bytes, 4 callers */

void __cdecl16near FUN_1000_8562(int param_1)

{
  undefined2 unaff_DS;
  
  param_1 = param_1 * 2;
  if (*(int *)(param_1 + 0x1fca) < 0) {
    FUN_1000_c322(*(undefined2 *)(param_1 + 0x1f8a),*(undefined2 *)(param_1 + 0x1fca),
                  *(int *)(*(int *)(param_1 + 0x1faa) * 2 + 0x4ec) + 0x20);
  }
  else {
    FUN_1000_bfd6(*(undefined2 *)(param_1 + 0x1f8a),*(undefined2 *)(param_1 + 0x1fca),
                  *(int *)(*(int *)(param_1 + 0x1faa) * 2 + 0x4ec) + 0x20);
  }
  return;
}



/* 1000:85b8  FUN_1000_85b8  106 bytes, 4 callers */

void __cdecl16near FUN_1000_85b8(int param_1)

{
  int iVar1;
  undefined2 unaff_DS;
  
  param_1 = param_1 * 2;
  if (*(int *)(param_1 + 0x1fca) < 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x1faa) * 2 + 0x4ec);
    FUN_1000_88d6(*(undefined2 *)(param_1 + 0x1f8a),*(undefined2 *)(param_1 + 0x1fca),
                  (iVar1 + 8) * 2,iVar1 * 2 + 0x11);
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0x1faa) * 2 + 0x4ec);
    FUN_1000_88a2(*(undefined2 *)(param_1 + 0x1f8a),*(undefined2 *)(param_1 + 0x1fca),
                  (iVar1 + 8) * 2,iVar1 * 2 + 0x11);
  }
  return;
}



/* 1000:8622  FUN_1000_8622  82 bytes, 1 callers */

void __cdecl16near FUN_1000_8622(int param_1,int param_2)

{
  undefined2 unaff_DS;
  
  param_1 = param_1 * 2;
  if (*(int *)(param_1 + 0x1fca) < 0) {
    param_2 = param_2 + *(int *)(param_1 + 0x17f6);
    FUN_1000_88d6(*(undefined2 *)(param_1 + 0x1f8a),*(undefined2 *)(param_1 + 0x1fca),param_2,
                  param_2 + 1);
  }
  else {
    param_2 = param_2 + *(int *)(param_1 + 0x17f6);
    FUN_1000_88a2(*(undefined2 *)(param_1 + 0x1f8a),*(undefined2 *)(param_1 + 0x1fca),param_2,
                  param_2 + 1);
  }
  return;
}



/* 1000:8674  FUN_1000_8674  557 bytes, 1 callers */

void __cdecl16near FUN_1000_8674(void)

{
  int iVar1;
  undefined2 unaff_DS;
  
  FUN_1000_b766(0,0,0x27f,399,8);
  FUN_1000_b766(0x50,0,0x22f,0x170,0xd);
  FUN_1000_c25e(0x40,0,*(int *)0x1d42 + 0x60);
  FUN_1000_c25e(0x40,0x20,*(int *)0x1d42 + 0x66);
  FUN_1000_c25e(0x40,0x30,*(int *)0x1d42 + 0x60);
  FUN_1000_c25e(0x40,0x110,*(int *)0x1d42 + 0x66);
  FUN_1000_c25e(0x40,0x120,*(int *)0x1d42 + 0x60);
  FUN_1000_c25e(0x40,0x170,*(int *)0x1d42 + 0x66);
  iVar1 = 0x50;
  do {
    FUN_1000_c25e(iVar1,0,*(int *)0x1d42 + 0x61);
    FUN_1000_c25e(iVar1,0x20,*(int *)0x1d42 + 0x67);
    FUN_1000_c25e(iVar1,0x30,*(int *)0x1d42 + 0x61);
    FUN_1000_c25e(iVar1,0x110,*(int *)0x1d42 + 0x67);
    FUN_1000_c25e(iVar1,0x120,*(int *)0x1d42 + 0x61);
    FUN_1000_c25e(iVar1,0x170,*(int *)0x1d42 + 0x67);
    iVar1 = iVar1 + 0x10;
  } while (iVar1 < 0x230);
  FUN_1000_c25e(0x230,0,*(int *)0x1d42 + 0x62);
  FUN_1000_c25e(0x230,0x20,*(int *)0x1d42 + 0x68);
  FUN_1000_c25e(0x230,0x30,*(int *)0x1d42 + 0x62);
  FUN_1000_c25e(0x230,0x110,*(int *)0x1d42 + 0x68);
  FUN_1000_c25e(0x230,0x120,*(int *)0x1d42 + 0x62);
  FUN_1000_c25e(0x230,0x170,*(int *)0x1d42 + 0x68);
  FUN_1000_c25e(0x40,0x10,*(int *)0x1d42 + 99);
  FUN_1000_c25e(0x230,0x10,*(int *)0x1d42 + 0x65);
  iVar1 = 0x40;
  do {
    FUN_1000_c25e(0x40,iVar1,*(int *)0x1d42 + 99);
    FUN_1000_c25e(0x230,iVar1,*(int *)0x1d42 + 0x65);
    iVar1 = iVar1 + 0x10;
  } while (iVar1 < 0x110);
  iVar1 = 0x130;
  do {
    FUN_1000_c25e(0x40,iVar1,*(int *)0x1d42 + 99);
    FUN_1000_c25e(0x230,iVar1,*(int *)0x1d42 + 0x65);
    iVar1 = iVar1 + 0x10;
  } while (iVar1 < 0x170);
  return;
}



/* 1000:88a2  FUN_1000_88a2  51 bytes, 7 callers */

void __cdecl16near
FUN_1000_88a2(int param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  if (0 < param_1) {
    FUN_1000_bfd6(param_1,param_2,param_3);
  }
  if (param_1 < 0x260) {
    FUN_1000_bfd6(param_1 + 0x20,param_2,param_4);
  }
  return;
}



/* 1000:88d6  FUN_1000_88d6  51 bytes, 4 callers */

void __cdecl16near
FUN_1000_88d6(int param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  if (0 < param_1) {
    FUN_1000_c322(param_1,param_2,param_3);
  }
  if (param_1 < 0x260) {
    FUN_1000_c322(param_1 + 0x20,param_2,param_4);
  }
  return;
}



/* 1000:890a  FUN_1000_890a  86 bytes, 5 callers */

void __cdecl16near FUN_1000_890a(int param_1,int param_2,undefined2 param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined2 unaff_DS;
  
  uVar1 = *(uint *)(param_1 * 2 + 0x1fca);
  uVar4 = (int)uVar1 >> 0xf;
  iVar2 = ((int)((uVar1 ^ uVar4) - uVar4) >> 3 ^ uVar4) - uVar4;
  uVar1 = *(uint *)(param_1 * 2 + 0x1f8a);
  uVar4 = (int)uVar1 >> 0xf;
  iVar3 = ((int)((uVar1 ^ uVar4) - uVar4) >> 3 ^ uVar4) - uVar4;
  FUN_1000_b766(iVar3 + 0x118,iVar2 + 0x162,iVar3 + param_2 + 0x118,iVar2 + 0x165,param_3);
  return;
}



/* 1000:8960  FUN_1000_8960  178 bytes, 1 callers */

void __cdecl16near FUN_1000_8960(void)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  undefined2 *puVar5;
  char *pcVar6;
  char *pcVar7;
  undefined2 unaff_DS;
  char *local_6;
  int local_4;
  
  *(undefined1 *)0x5a5 = 0x14;
  *(undefined1 *)0x5a7 = 0x22;
  *(undefined1 *)0x5ce = 0x1d;
  *(undefined1 *)0x5cc = 0x1c;
  *(undefined1 *)0x5ca = 0x1b;
  *(undefined2 *)0x184c = 1;
  local_6 = (char *)0x740;
  puVar5 = (undefined2 *)0x1e22;
  *(undefined2 *)0x1844 = 0;
  local_4 = 0;
  do {
    *puVar5 = *(undefined2 *)(local_4 + 0x71c);
    puVar5[1] = *(undefined2 *)(local_4 + 0x6f8);
    pcVar7 = (char *)(puVar5 + 2);
    uVar3 = 0xffff;
    pcVar6 = local_6;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar1 = pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (*pcVar1 != '\0');
    uVar3 = ~uVar3;
    pcVar6 = pcVar6 + -uVar3;
    for (uVar4 = uVar3 >> 1; uVar4 != 0; uVar4 = uVar4 - 1) {
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
    local_6 = local_6 + 0x10;
    puVar5 = puVar5 + 10;
    local_4 = local_4 + 2;
    if (0x23 < local_4) {
      *(undefined2 *)0x2150 = 1;
      *(undefined2 *)0x212e = 3;
      *(undefined2 *)0x1820 = 5;
      *(undefined2 *)0x17f4 = 9;
      *(undefined2 *)0x1d4a = 4;
      *(undefined2 *)0x1d48 = 4;
      *(undefined2 *)0x212c = 0;
      *(undefined2 *)0x1848 = 0;
      *(undefined2 *)0x181a = 0;
      *(undefined2 *)0x181e = 0;
      *(undefined2 *)0x20c6 = 0;
      return;
    }
  } while( true );
}



/* 1000:8a12  FUN_1000_8a12  134 bytes, 1 callers */

void FUN_1000_8a12(void)

{
  byte bVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 unaff_DS;
  
  uVar2 = FUN_1000_ef1a(0);
  FUN_1000_efb6(uVar2);
  FUN_1000_afb4();
  FUN_1000_bb72();
  FUN_1000_b940();
  FUN_1000_bfa2(0x860);
  FUN_1000_afd2();
  FUN_1000_baac();
  FUN_1000_ba14();
  bVar1 = in(0x31);
  if ((bVar1 & 0x80) == 0) {
    *(undefined1 *)0xbb6 = 0x40;
  }
  if (*(int *)0x1848 != 0) {
    *(undefined1 *)0xbb6 = 0;
  }
  out(0xa6,1);
  FUN_1000_b4ee();
  FUN_1000_8493();
  FUN_1000_e374(0);
  iVar3 = FUN_1000_cd9e(0x1800);
  if (iVar3 != 0) {
    FUN_1000_ee72(0x866);
    FUN_1000_e802(1);
  }
  FUN_1000_bfa2(0x87e);
  FUN_1000_c762();
  return;
}



/* 1000:8a98  FUN_1000_8a98  73 bytes, 1 callers */

void __cdecl16near FUN_1000_8a98(void)

{
  FUN_1000_8493();
  FUN_1000_bfa2(0x884);
  FUN_1000_bfa2(0x88a);
  FUN_1000_c762();
  FUN_1000_b004();
  FUN_1000_bbf2();
  FUN_1000_afc6();
  FUN_1000_bdbf();
  FUN_1000_b99c();
  FUN_1000_82c8();
  FUN_1000_b490();
  FUN_1000_ba34();
  FUN_1000_bafc();
  FUN_1000_cd3e();
  FUN_1000_ee72();
  return;
}



/* 1000:8ae2  FUN_1000_8ae2  1436 bytes, 1 callers */

void __cdecl16near FUN_1000_8ae2(void)

{
  int *piVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  char acStack_85 [51];
  undefined2 uStack_52;
  undefined2 uStack_50;
  int iStack_4e;
  int local_40;
  char local_3e;
  char acStack_3d [35];
  undefined1 local_1a;
  int local_16;
  int local_14;
  int local_12;
  int local_10;
  int local_e;
  int local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  int local_4;
  
  local_a = 0x909;
  local_8 = 0x916;
  local_6 = 0x923;
  for (local_e = 0; local_e <= *(int *)0x17f4; local_e = local_e + 1) {
    *(undefined2 *)(local_e * 2 + 0x1d6a) = 0;
    *(undefined2 *)(local_e * 2 + 0x1fca) = 0;
  }
  *(undefined2 *)0x1f8a = 0x120;
  *(undefined2 *)0x1fca = 0x10;
  *(undefined2 *)0x1844 = 0;
  *(undefined2 *)0x193c = 0;
  local_c = 0;
  local_14 = 0;
  local_10 = 0;
  local_40 = 0;
  FUN_1000_bfa2();
  FUN_1000_c762();
  FUN_1000_82c8();
  local_4 = 1;
  for (local_e = 1; -1 < local_e; local_e = local_e + -1) {
    out(0xa6,(char)local_e);
    iStack_4e = 0;
    uStack_50 = 4;
    uStack_52 = 0x8b71;
    FUN_1000_b854();
  }
  out(0xa4,1);
  iStack_4e = 0x8b90;
  FUN_1000_bfd6();
  iStack_4e = 0x8ba5;
  FUN_1000_bfd6();
  for (local_e = 0; local_e < 0x28; local_e = local_e + 1) {
    for (local_12 = 0; local_12 < 2; local_12 = local_12 + 1) {
      out(0xa6,(char)local_12);
      iStack_4e = 0x8bd6;
      FUN_1000_c25e();
      iStack_4e = 0x8be8;
      FUN_1000_c25e();
      iStack_4e = 0x8bfa;
      FUN_1000_c25e();
      iStack_4e = 0x8c0c;
      FUN_1000_c25e();
      iStack_4e = 0x8c1e;
      FUN_1000_c25e();
    }
  }
  FUN_1000_a3f8();
  *(undefined2 *)0x1844 = 1;
  FUN_1000_82d7();
  FUN_1000_a302();
  local_e = 1;
  do {
    iStack_4e = local_e * 2 + 0xd;
    uStack_50 = 0x8c68;
    FUN_1000_beea();
    local_e = local_e + 1;
  } while (local_e < 3);
  iStack_4e = 0xd;
  uStack_50 = 0x8c86;
  FUN_1000_beea();
  FUN_1000_cf6a();
  FUN_1000_cf44();
  FUN_1000_d046();
  *(undefined2 *)0xdd0 = 0;
  while( true ) {
    FUN_1000_8184();
    local_16 = FUN_1000_e3c8();
    if ((local_16 != 0) || (*(int *)0x213e != 0)) goto LAB_1000_8cb9;
    if ((*(int *)0x2138 != 0) || (*(int *)0x213a != 0)) break;
    if ((*(int *)0x2130 != 0) && (local_4 != 0)) {
      iVar4 = local_c + -1;
      local_14 = local_c;
      local_c = iVar4;
      if (iVar4 == -1) {
        local_c = 2;
      }
      local_4 = 0;
    }
    if ((*(int *)0x2132 != 0) && (local_4 != 0)) {
      iVar4 = local_c + 1;
      local_14 = local_c;
      local_c = iVar4;
      if (iVar4 == 3) {
        local_c = 0;
      }
      local_4 = 0;
    }
    if ((*(int *)0x2130 == 0) && (*(int *)0x2132 == 0)) {
      local_4 = 1;
    }
    local_16 = 0;
    for (local_e = 1; local_e <= *(int *)0x17f4; local_e = local_e + 1) {
      iVar4 = FUN_1000_efc8();
      if ((iVar4 % 10 == 0) && (iVar4 = local_e * 2, *(int *)(iVar4 + 0x1fca) == 0)) {
        iVar5 = FUN_1000_efc8();
        *(int *)(iVar4 + 0x1fca) = (iVar5 % 7 + 2) * 0x20;
        iVar5 = FUN_1000_efc8();
        iVar5 = (iVar5 % 2) * 0x280 + -0x20;
        *(int *)(iVar4 + 0x1f8a) = iVar5;
        if (iVar5 == 0x140) {
          iVar4 = 0;
        }
        else if (-*(int *)(iVar4 + 0x1f8a) == -0x140 || -*(int *)(iVar4 + 0x1f8a) + 0x140 < 0) {
          iVar4 = -1;
        }
        else {
          iVar4 = 1;
        }
        iVar5 = FUN_1000_efc8();
        *(int *)(local_e * 2 + 0x1d6a) = (iVar5 % 8 + 1) * iVar4;
      }
      iVar4 = *(int *)(local_e * 2 + 0x1f8a) + *(int *)(local_e * 2 + 0x1d6a);
      if ((iVar4 < -0x1f) || (0x25f < iVar4)) {
        *(undefined2 *)(local_e * 2 + 0x1fca) = 0;
      }
    }
    *(byte *)0x1844 = *(byte *)0x1844 ^ 1;
    iStack_4e = 0;
    uStack_50 = 4;
    uStack_52 = 0x8e40;
    FUN_1000_b854();
    for (local_e = *(int *)0x17f4; 0 < local_e; local_e = local_e + -1) {
      if (99 < *(int *)(local_e * 2 + 0x1fca)) {
        iStack_4e = *(int *)(local_e * 2 + 0x1f8a) + *(int *)(local_e * 2 + 0x1d6a);
        uStack_50 = 0x8e70;
        FUN_1000_88a2();
      }
    }
    iStack_4e = 0x8ec7;
    FUN_1000_bfd6();
    iStack_4e = 0x8ef0;
    FUN_1000_bfd6();
    while (iVar4 = FUN_1000_bf8e(), iVar4 != 0) {
      FUN_1000_bf98();
    }
    FUN_1000_e538();
    do {
      uVar6 = FUN_1000_bb38();
    } while (uVar6 < *(int *)0x1820 - 1U);
    *(undefined2 *)0xdd0 = 0;
    out(0xa4,(byte)*(undefined2 *)0x1844);
    out(0xa6,(byte)*(undefined2 *)0x1844 ^ 1);
    iStack_4e = 0;
    uStack_50 = 4;
    uStack_52 = 0x8f38;
    FUN_1000_b854();
    for (local_e = *(int *)0x17f4; 0 < local_e; local_e = local_e + -1) {
      piVar1 = (int *)(local_e * 2 + 0x1f8a);
      *piVar1 = *piVar1 + *(int *)(local_e * 2 + 0x1d6a);
    }
    if (local_14 != local_c) {
      iStack_4e = local_c * 2 + 0xd;
      uStack_50 = 0x8f78;
      FUN_1000_beea();
      iStack_4e = local_14 * 2 + 0xd;
      uStack_50 = 0x8f92;
      FUN_1000_beea();
      local_14 = local_c;
    }
    pcVar8 = (char *)(local_10 * 0x25 + 0x5d0);
    pcVar9 = &local_3e;
    uVar6 = 0xffff;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar2 = pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (*pcVar2 != '\0');
    uVar6 = ~uVar6;
    pcVar8 = pcVar8 + -uVar6;
    for (uVar7 = uVar6 >> 1; uVar7 != 0; uVar7 = uVar7 - 1) {
      pcVar3 = pcVar9;
      pcVar9 = pcVar9 + 2;
      pcVar2 = pcVar8;
      pcVar8 = pcVar8 + 2;
      *(undefined2 *)pcVar3 = *(undefined2 *)pcVar2;
    }
    for (uVar6 = (uint)((uVar6 & 1) != 0); uVar6 != 0; uVar6 = uVar6 - 1) {
      pcVar3 = pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar2 = pcVar8;
      pcVar8 = pcVar8 + 1;
      *pcVar3 = *pcVar2;
    }
    local_1a = 0;
    if (local_40 < 0x24) {
      acStack_3d[local_40] = '\0';
      iStack_4e = 0x17;
      uStack_50 = 0x8fe9;
      FUN_1000_beea();
    }
    else if (local_40 < 0x48) {
      iStack_4e = 0x17;
      uStack_50 = 0x900b;
      FUN_1000_beea();
    }
    if ((0x47 < local_40) && (local_40 < 0x6c)) {
      pcVar9 = acStack_85 + local_40;
      iVar4 = -1;
      do {
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pcVar2 = pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (*pcVar2 != '\0');
      iStack_4e = 0x17;
      uStack_50 = 0x9044;
      FUN_1000_bf46();
      iStack_4e = 0x17;
      uStack_50 = 0x9057;
      FUN_1000_beea();
    }
    if (0x6b < local_40) {
      local_40 = -1;
      local_10 = local_10 + 1;
      if (7 < local_10) {
        local_10 = 0;
      }
    }
    local_40 = local_40 + 1;
  }
  if (local_c == 0) {
    *(undefined2 *)0x184c = 1;
  }
  if (local_c == 1) {
    *(undefined2 *)0x184c = 2;
  }
  if (local_c != 2) goto LAB_1000_907a;
LAB_1000_8cb9:
  *(undefined2 *)0x184c = 0;
LAB_1000_907a:
  out(0xa6,(char)*(undefined2 *)0x1844);
  FUN_1000_84ae();
  FUN_1000_cf2c();
  return;
}



/* 1000:908c  FUN_1000_908c  369 bytes, 1 callers */

void __cdecl16near FUN_1000_908c(void)

{
  byte bVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  FUN_1000_cf6a(9);
  FUN_1000_cf44();
  FUN_1000_d03e();
  out(0xa6,(char)*(undefined2 *)0x1844);
  FUN_1000_b854(4,0,0x4b,0x13f,0);
  FUN_1000_b854(4,0,0x4b,0x28,5);
  FUN_1000_8292();
  FUN_1000_bfd6(*(undefined2 *)0x1f8a,0x10,0);
  FUN_1000_bfd6(*(int *)0x1f8a + 0x20,0x10,1);
  out(0xa4,(char)*(undefined2 *)0x1844);
  *(byte *)0x1844 = *(byte *)0x1844 ^ 1;
  FUN_1000_a090();
  FUN_1000_9fbc(0x32);
  iVar2 = 399;
  do {
    FUN_1000_b766(0,iVar2,0x27f,iVar2 + 3,5);
    FUN_1000_b766(0,iVar2 + -0x30,0x27f,iVar2 + -0x2d,0xd);
    FUN_1000_b766(0xf0,iVar2 + -0x2e,399,iVar2 + -0x2b,8);
    FUN_1000_b030(0xf0,iVar2 + -1,399,iVar2 + -1,0xd);
    FUN_1000_b490(iVar2);
    do {
      bVar1 = in(0x60);
    } while ((bVar1 & 0x20) != 0);
    do {
      bVar1 = in(0x60);
    } while ((bVar1 & 0x20) == 0);
    iVar2 = iVar2 + -4;
  } while (0x7f < iVar2);
  out(0xa6,(char)*(undefined2 *)0x1844);
  FUN_1000_b4ee();
  FUN_1000_b854(4,0,0x4b,0x138,5);
  FUN_1000_bfd6(*(undefined2 *)0x1f8a,0x120,2);
  FUN_1000_bfd6(*(int *)0x1f8a + 0x20,0x120,3);
  FUN_1000_8292();
  do {
    bVar1 = in(0x60);
  } while ((bVar1 & 0x20) != 0);
  do {
    bVar1 = in(0x60);
  } while ((bVar1 & 0x20) == 0);
  FUN_1000_b490(0);
  out(0xa4,(char)*(undefined2 *)0x1844);
  FUN_1000_cf08();
  FUN_1000_a23c();
  return;
}



/* 1000:91fe  FUN_1000_91fe  869 bytes, 1 callers */

void __cdecl16near
FUN_1000_91fe(undefined2 *param_1,int *param_2,undefined2 param_3,undefined2 *param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined2 unaff_DS;
  int local_a;
  undefined2 *local_4;
  
  out(0xa6,(char)*(undefined2 *)0x1844);
  FUN_1000_b854(4,0,0x4b,0x138,5);
  FUN_1000_8292();
  out(0xa4,(char)*(undefined2 *)0x1844);
  *(byte *)0x1844 = *(byte *)0x1844 ^ 1;
  out(0xa6,(char)*(undefined2 *)0x1844);
  FUN_1000_b854(4,0,0x4b,0x138,5);
  FUN_1000_8292();
  FUN_1000_bfd6(*(undefined2 *)0x1f8a,0x120,2);
  FUN_1000_bfd6(*(int *)0x1f8a + 0x20,0x120,3);
  out(0xa4,(char)*(undefined2 *)0x1844);
  FUN_1000_a090();
  FUN_1000_cf6a(10);
  FUN_1000_cf44();
  FUN_1000_d03e();
  iVar5 = 0;
  do {
    *(byte *)0x1844 = *(byte *)0x1844 ^ 1;
    out(0xa6,(char)*(undefined2 *)0x1844);
    FUN_1000_b854(4,0,0x4b,0x15f,8);
    if (iVar5 < 0x160) {
      FUN_1000_b854(4,0,0x4b,iVar5 + -1,1);
      FUN_1000_b854(4,iVar5,0x4b,0x15f,5);
      iVar3 = 0x20;
      iVar2 = iVar5 + -0x10;
      do {
        if (iVar2 < 0) {
          FUN_1000_c650(iVar3,iVar2,*(int *)0x1d42 + 0x69);
        }
        else {
          FUN_1000_c25e(iVar3,iVar2,*(int *)0x1d42 + 0x69);
        }
        iVar3 = iVar3 + 0x10;
      } while (iVar3 < 0x260);
    }
    if (iVar5 + 0x139 < 0x160) {
      FUN_1000_b854(4,iVar5 + 0x139,0x4b,0x15f,0);
    }
    if ((0x15f < iVar5) && (iVar5 < 0x2c0)) {
      FUN_1000_b854(4,iVar5 + -0x160,0x4b,0x15f,1);
      iVar3 = 0x20;
      iVar2 = iVar5 + -0x170;
      do {
        if (iVar2 < 0) {
          FUN_1000_c650(iVar3,iVar2,*(int *)0x1d42 + 0x6a);
        }
        else {
          FUN_1000_c25e(iVar3,iVar2,*(int *)0x1d42 + 0x6a);
        }
        iVar3 = iVar3 + 0x10;
      } while (iVar3 < 0x260);
    }
    if ((0x2bf < iVar5) && (iVar5 < 0x420)) {
      local_4 = param_4;
      local_a = 0x46;
      piVar4 = param_2;
      puVar6 = param_1;
      do {
        if (0x420 - iVar5 < *piVar4) {
          FUN_1000_b50e(*puVar6,iVar5 + *piVar4 + -0x420,*local_4);
        }
        puVar6 = puVar6 + 1;
        local_4 = local_4 + 1;
        piVar4 = piVar4 + 1;
        local_a = local_a + -1;
      } while (local_a != 0);
    }
    FUN_1000_bfd6(*(undefined2 *)0x1f8a,0x120,0);
    FUN_1000_bfd6(*(int *)0x1f8a + 0x20,0x120,1);
    FUN_1000_bfd6(*(int *)0x1f8a + 8,0x13c,*(int *)0x1844 + *(int *)0x1d42 + 0x3a);
    FUN_1000_bfd6(*(int *)0x1f8a + 0x28,0x13c,*(int *)0x1844 + *(int *)0x1d42 + 0x3a);
    out(0xa4,(char)*(undefined2 *)0x1844);
    if ((0x11c < *(int *)0x1f8a) && (*(int *)0x1f8a < 0x124)) {
      *(undefined2 *)0x1f8a = 0x120;
    }
    if (*(int *)0x1f8a == 0x120) {
      iVar2 = 0;
    }
    else if (-*(int *)0x1f8a == -0x120 || -*(int *)0x1f8a + 0x120 < 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = 1;
    }
    *(int *)0x1f8a = *(int *)0x1f8a + iVar2 * 4;
    do {
      bVar1 = in(0x60);
    } while ((bVar1 & 0x20) != 0);
    do {
      bVar1 = in(0x60);
    } while ((bVar1 & 0x20) == 0);
    iVar5 = iVar5 + 0x10;
  } while (iVar5 < 0x420);
  *(byte *)0x1844 = *(byte *)0x1844 ^ 1;
  out(0xa6,(char)*(undefined2 *)0x1844);
  FUN_1000_b4ee();
  FUN_1000_b854(4,0,0x4b,0x15f,8);
  local_4 = param_4;
  local_a = 0x46;
  do {
    FUN_1000_b50e(*param_1,*param_2,*local_4);
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
    local_4 = local_4 + 1;
    local_a = local_a + -1;
  } while (local_a != 0);
  FUN_1000_bfd6(*(undefined2 *)0x1f8a,0x120,0x28);
  FUN_1000_bfd6(*(int *)0x1f8a + 0x20,0x120,0x29);
  FUN_1000_8292();
  do {
    bVar1 = in(0x60);
  } while ((bVar1 & 0x20) != 0);
  do {
    bVar1 = in(0x60);
  } while ((bVar1 & 0x20) == 0);
  out(0xa4,(char)*(undefined2 *)0x1844);
  FUN_1000_cf08();
  FUN_1000_a23c();
  return;
}



/* 1000:9568  FUN_1000_9568  60 bytes, 1 callers */

void __cdecl16near FUN_1000_9568(void)

{
  int iVar1;
  undefined2 unaff_DS;
  
  FUN_1000_a0a8();
  *(undefined1 *)0x2ba = 0;
  FUN_1000_cf6a(0xf);
  iVar1 = 4;
  do {
    FUN_1000_cf44();
    FUN_1000_d03e();
    FUN_1000_8425(0x2b8);
    FUN_1000_cf08();
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  *(undefined1 *)0x2ba = 7;
  FUN_1000_a23c();
  return;
}



/* 1000:95a4  FUN_1000_95a4  1976 bytes, 1 callers */

void __cdecl16near FUN_1000_95a4(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined2 unaff_DS;
  undefined2 uVar8;
  uint local_e;
  int local_c;
  int local_a;
  int local_8;
  int local_6;
  
  FUN_1000_a0c0();
  if (*(int *)0x1818 < 7) {
    uVar4 = 0xb;
  }
  else if (*(int *)0x1818 < 0xb) {
    uVar4 = 0xc;
  }
  else {
    uVar4 = 0xd;
  }
  FUN_1000_cf6a(uVar4);
  FUN_1000_cf44();
  FUN_1000_d03e();
  FUN_1000_cf08();
  FUN_1000_a23c();
  if (10 < *(int *)0x1818) {
    FUN_1000_cf6a(0xe);
    FUN_1000_cf44();
    FUN_1000_d03e();
    local_e = 0xfefc;
    iVar6 = *(int *)0x1dac;
    iVar1 = *(int *)0x1d46;
    iVar2 = *(int *)0x1d42;
    *(undefined2 *)0xdd0 = 0;
    local_8 = 1;
    do {
      FUN_1000_ba8c(local_8,0,(local_8 + 1) * 2,local_8 << 1);
      local_8 = local_8 + 1;
    } while (local_8 < 6);
    FUN_1000_ba8c(6,0,0xe,0xe);
    FUN_1000_ba8c(7,0,0xf,0xf);
    for (local_6 = 0; local_6 < 200; local_6 = local_6 + 1) {
      *(byte *)0x1844 = *(byte *)0x1844 ^ 1;
      if (*(int *)0x1f8a == 400) {
        iVar5 = 0;
      }
      else if (-*(int *)0x1f8a == -400 || -*(int *)0x1f8a + 400 < 0) {
        iVar5 = -1;
      }
      else {
        iVar5 = 1;
      }
      *(int *)0x1f8a = *(int *)0x1f8a + iVar5 * 2;
      if (*(int *)0x1fca != 0xa4) {
        if (-*(int *)0x1fca == -0xa4 || -*(int *)0x1fca + 0xa4 < 0) {
          iVar5 = -1;
        }
        else {
          iVar5 = 1;
        }
        *(int *)0x1fca = *(int *)0x1fca + iVar5;
      }
      local_e = local_e + 2;
      local_8 = 0;
      do {
        iVar5 = local_8 * 2;
        *(int *)(iVar5 + param_1) = *(int *)(iVar5 + param_1) + *(int *)(iVar5 + param_3) * 2;
        if (0x27f < *(int *)(iVar5 + param_1)) {
          *(int *)(iVar5 + param_1) = *(int *)(iVar5 + param_1) + -0x280;
        }
        iVar5 = local_8 * 2;
        FUN_1000_b50e(*(undefined2 *)(iVar5 + param_1),*(undefined2 *)(iVar5 + param_2),
                      *(undefined2 *)(iVar5 + param_4));
        local_8 = local_8 + 1;
      } while (local_8 < 0x46);
      FUN_1000_bfd6(*(undefined2 *)0x1f8a,*(undefined2 *)0x1fca,0);
      FUN_1000_bfd6(*(int *)0x1f8a + 0x20,*(undefined2 *)0x1fca,1);
      local_c = 0;
      do {
        if (-local_e == local_c * 0x20 || local_c * -0x20 < (int)local_e) {
          local_a = 0;
          do {
            FUN_1000_bfd6(local_c * 0x20 + local_e,local_a * 0x20 + 0x70,
                          local_a * 8 + local_c + iVar6 + iVar1 + iVar2 + 0x1c);
            local_a = local_a + 1;
          } while (local_a < 4);
        }
        local_c = local_c + 1;
      } while (local_c < 4);
      FUN_1000_8292();
      FUN_1000_890a(0,7,0xf);
      uVar7 = (int)local_e >> 0xf;
      FUN_1000_b5b0((((int)((local_e ^ uVar7) - uVar7) >> 3 ^ uVar7) - uVar7) + 0x120,0x178,7,7);
      do {
        uVar7 = FUN_1000_bb38();
      } while (uVar7 < 3);
      *(undefined2 *)0xdd0 = 0;
      out(0xa4,(byte)*(undefined2 *)0x1844);
      out(0xa6,(byte)*(undefined2 *)0x1844 ^ 1);
      FUN_1000_b4ee();
    }
    FUN_1000_beea(4,0x18,0x41,0x936);
    FUN_1000_beea(0x12,0xc,0xa1,0x947);
    FUN_1000_9fbc(300);
    out(0xa6,(char)*(undefined2 *)0x1844);
    FUN_1000_84ae();
    *(undefined2 *)0x1844 = 0;
    *(undefined1 *)0x2ba = 0;
    FUN_1000_c762();
    FUN_1000_8493();
    FUN_1000_82c8();
    FUN_1000_beea(2,0x24,0xe1,0x964);
    for (local_8 = 0; local_8 < 0x12; local_8 = local_8 + 1) {
      out(0xa6,0);
      out(0xa4,0);
      switch(*(undefined2 *)(local_8 * 0x14 + 0x1e24)) {
      case 1:
        FUN_1000_c788(0x130,0xb8,2,*(int *)0x1d42 + 0x38);
        out(0xa6,1);
        iVar6 = *(int *)0x1d42 + 0x39;
        uVar8 = 0xb8;
        uVar4 = 0x130;
        goto LAB_1000_9874;
      case 2:
        iVar6 = *(int *)(local_8 * 0x14 + 0x1e22);
        goto LAB_1000_988a;
      case 3:
        FUN_1000_c788(0x120,0xa8,2,*(undefined2 *)(local_8 * 0x14 + 0x1e22));
        out(0xa6,1);
        iVar6 = *(int *)(local_8 * 0x14 + 0x1e22) + 1;
LAB_1000_988a:
        uVar8 = 0xa8;
        uVar4 = 0x120;
        goto LAB_1000_9874;
      case 4:
        FUN_1000_c788(0x100,0xa8,2,*(undefined2 *)(local_8 * 0x14 + 0x1e22));
        iVar6 = *(int *)(local_8 * 0x14 + 0x1e22) + 1;
        goto LAB_1000_98eb;
      case 5:
        iVar6 = local_8 * 0x14;
        FUN_1000_c788(0x100,0xa8,2,*(undefined2 *)(iVar6 + 0x1e22));
        FUN_1000_c788(0x140,0xa8,2,*(int *)(iVar6 + 0x1e22) + 1);
        out(0xa6,1);
        FUN_1000_c788(0x100,0xa8,2,*(int *)(iVar6 + 0x1e22) + 2);
        iVar6 = *(int *)(iVar6 + 0x1e22) + 3;
LAB_1000_98eb:
        uVar8 = 0xa8;
        uVar4 = 0x140;
        goto LAB_1000_9874;
      case 7:
        for (local_a = 0; local_a < 4; local_a = local_a + 1) {
          out(0xa6,0);
          iVar6 = (local_a + 8) * 0x20;
          FUN_1000_c788(iVar6,0xa8,2,local_a + *(int *)0x1d42 + 0x4c);
          FUN_1000_c788(iVar6,200,2,local_a + *(int *)0x1d42 + 0x44);
          out(0xa6,1);
          FUN_1000_c788(iVar6,0xa8,2,local_a + *(int *)0x1d42 + 0x50);
          FUN_1000_c788(iVar6,200,2,local_a + *(int *)0x1d42 + 0x44);
        }
        break;
      case 8:
        for (local_a = 0; local_a < 4; local_a = local_a + 1) {
          for (local_c = 0; local_c < 3; local_c = local_c + 1) {
            FUN_1000_c788((local_a + 3) * 0x40,local_c * 0x40 + 0x68,2,
                          local_c * 8 + local_a + *(int *)0x1dac + *(int *)0x1d46 + *(int *)0x1d42);
          }
        }
        break;
      case 10:
        for (local_a = 3; local_a < 0xf; local_a = local_a + 1) {
          FUN_1000_c788(local_a * 0x1e + 0x5f,
                        -((*(char *)(local_a * 0x19 + 0xc21) * 0x3c + 1 >> 7) + -0x78),2,
                        ((uint)(0xb < local_a) - (uint)(local_a < 9)) + (uint)(local_a == 3) +
                        *(int *)0x1dac + *(int *)0x1d46 + *(int *)0x1d42 + 5);
        }
        FUN_1000_c788(0x50,0x1e,2,*(int *)0x1dac + *(int *)0x1d46 + *(int *)0x1d42 + 0xc);
        FUN_1000_c788(0x90,0x1e,2,*(int *)0x1dac + *(int *)0x1d46 + *(int *)0x1d42 + 0xd);
        FUN_1000_c788(0x50,0x5e,2,*(int *)0x1dac + *(int *)0x1d46 + *(int *)0x1d42 + 0x14);
        iVar6 = *(int *)0x1dac + *(int *)0x1d46 + *(int *)0x1d42 + 0x15;
        uVar8 = 0x5e;
        uVar4 = 0x90;
LAB_1000_9874:
        FUN_1000_c788(uVar4,uVar8,2,iVar6);
        break;
      case 0xc:
        for (local_a = 0; local_a < 4; local_a = local_a + 1) {
          for (local_c = 0; local_c < 4; local_c = local_c + 1) {
            FUN_1000_c788((local_a + 3) * 0x40,local_c * 0x40 + 0x38,2,
                          (local_c + 3) * 8 + local_a + *(int *)0x1dac + *(int *)0x1d46 +
                          *(int *)0x1d42);
          }
        }
      }
      FUN_1000_82d7(0x2b8);
      FUN_1000_beea(0x14,0x18,0xe1,local_8 * 0x14 + 0x1e26);
      for (local_a = 0; local_a < 0x19; local_a = local_a + 1) {
        *(byte *)0x1844 = *(byte *)0x1844 ^ 1;
        if ((*(byte *)(local_8 * 0x14 + 0x1e24) & 1) == 1) {
          out(0xa4,(char)*(undefined2 *)0x1844);
        }
        for (local_c = 0; local_c < 5; local_c = local_c + 1) {
          do {
            bVar3 = in(0x60);
          } while ((bVar3 & 0x20) != 0);
          do {
            bVar3 = in(0x60);
          } while ((bVar3 & 0x20) == 0);
        }
        FUN_1000_ba8c(2,*(int *)0x1844 * 2 + 0xd,0,0);
        FUN_1000_ba8c(6,*(int *)0x1844 + 0xc,*(int *)0x1844 + 9,0);
        FUN_1000_ba8c(4,0,0xf,*(int *)0x1844 << 3);
      }
      FUN_1000_beea(0x14,0x18,0xe1,0x969);
      FUN_1000_8347(0x2b8);
      FUN_1000_82c8();
    }
    FUN_1000_c762();
    local_8 = 8;
    do {
      FUN_1000_beea(local_8,4,0xe1,((local_8 + -8) / 3) * 0x25 + 0x5d0);
      local_8 = local_8 + 3;
    } while (local_8 < 0x17);
    FUN_1000_beea(1,4,0xc1,0x689);
    FUN_1000_beea(4,4,0x41,0x6ae);
    FUN_1000_beea(0x18,4,0xc1,0x6d3);
    FUN_1000_9fbc(200);
    FUN_1000_cf08();
    FUN_1000_9fbc(0x32);
    FUN_1000_c762();
    *(undefined1 *)0x2ba = 7;
  }
  return;
}



/* 1000:9d84  FUN_1000_9d84  236 bytes, 3 callers */

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



/* 1000:9e70  FUN_1000_9e70  330 bytes, 4 callers */

void __cdecl16near FUN_1000_9e70(void)

{
  bool bVar1;
  bool bVar2;
  undefined2 uVar3;
  int iVar4;
  undefined2 unaff_DS;
  undefined2 uVar5;
  
  bVar1 = false;
  bVar2 = false;
  if (*(int *)0x1816 == 2) {
    uVar5 = 0x97c;
    uVar3 = 1;
  }
  else {
    uVar5 = 0x982;
    uVar3 = 0xe1;
  }
  FUN_1000_beea(8,0x24,uVar3,uVar5);
  FUN_1000_beea(0xf,0x18,0xc3,0x988);
  FUN_1000_cf2c();
  iVar4 = FUN_1000_bf8e();
  while (iVar4 != 0) {
    FUN_1000_bf98();
    iVar4 = FUN_1000_bf8e();
  }
  FUN_1000_cff4(1);
  FUN_1000_cfde();
  while( true ) {
    iVar4 = FUN_1000_bf8e();
    while (iVar4 != 0) {
      FUN_1000_bf98();
      iVar4 = FUN_1000_bf8e();
    }
    FUN_1000_9fbc(10);
    iVar4 = FUN_1000_e3c8(0x2130);
    if ((*(int *)0x213e != 0) && (bVar2)) break;
    if ((((((*(int *)0x2136 != 0) || (*(int *)0x2134 != 0)) || (*(int *)0x2130 != 0)) ||
         ((*(int *)0x2132 != 0 || (*(int *)0x2138 != 0)))) ||
        ((*(int *)0x213a != 0 || (*(int *)0x213c != 0)))) || ((iVar4 != 0 && (bVar1)))) {
      FUN_1000_cf44();
      FUN_1000_d046();
LAB_1000_9f6e:
      FUN_1000_beea(8,0x24,0xc1,0x999);
      FUN_1000_beea(0xf,0x18,0xc1,0x99f);
      FUN_1000_9fbc(10);
      iVar4 = FUN_1000_bf8e();
      while (iVar4 != 0) {
        FUN_1000_bf98();
        iVar4 = FUN_1000_bf8e();
      }
      return;
    }
    if (iVar4 == 0) {
      bVar1 = true;
    }
    if (*(int *)0x213e == 0) {
      bVar2 = true;
    }
  }
  *(undefined2 *)0x1842 = 0;
  *(undefined2 *)0x184c = 0;
  goto LAB_1000_9f6e;
}



/* 1000:9fbc  FUN_1000_9fbc  52 bytes, 8 callers */

void __cdecl16near FUN_1000_9fbc(int param_1)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = FUN_1000_bf8e();
  while (iVar2 != 0) {
    FUN_1000_bf98();
    iVar2 = FUN_1000_bf8e();
  }
  if (0 < param_1) {
    do {
      do {
        bVar1 = in(0x60);
      } while ((bVar1 & 0x20) != 0);
      do {
        bVar1 = in(0x60);
      } while ((bVar1 & 0x20) == 0);
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return;
}



/* 1000:9ff0  FUN_1000_9ff0  128 bytes, 4 callers */

void __cdecl16near FUN_1000_9ff0(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined2 unaff_DS;
  
  iVar2 = FUN_1000_bf8e();
  while (iVar2 != 0) {
    FUN_1000_bf98();
    iVar2 = FUN_1000_bf8e();
  }
  iVar2 = 0;
  if (0 < param_1) {
    while( true ) {
      do {
        bVar1 = in(0x60);
      } while ((bVar1 & 0x20) != 0);
      do {
        bVar1 = in(0x60);
      } while ((bVar1 & 0x20) == 0);
      iVar3 = FUN_1000_bf8e();
      while (iVar3 != 0) {
        FUN_1000_bf98();
        iVar3 = FUN_1000_bf8e();
      }
      iVar3 = FUN_1000_e3c8(0x2130);
      if ((iVar3 != 0) || (*(int *)0x213e != 0)) break;
      if (*(int *)0x2138 != 0) {
        return;
      }
      if (*(int *)0x213a != 0) {
        return;
      }
      iVar2 = iVar2 + 1;
      if (param_1 <= iVar2) {
        return;
      }
    }
    if (*(int *)0x184c == 2) {
      *(undefined2 *)0x1842 = 0;
      *(undefined2 *)0x184c = 0;
    }
  }
  return;
}



/* 1000:a072  FUN_1000_a072  29 bytes, 4 callers */

void __cdecl16near FUN_1000_a072(void)

{
  undefined2 unaff_DS;
  
  FUN_1000_beea(10,0x24,0x41,0x9d3);
  *(undefined2 *)0x181c = 0x78;
  return;
}



/* 1000:a090  FUN_1000_a090  23 bytes, 2 callers */

void __cdecl16near FUN_1000_a090(void)

{
  FUN_1000_beea(10,0x22,0xc1,0x9d9);
  return;
}



/* 1000:a0a8  FUN_1000_a0a8  23 bytes, 1 callers */

void __cdecl16near FUN_1000_a0a8(void)

{
  FUN_1000_beea(10,0x1e,0x43,0x9e0);
  return;
}



/* 1000:a0c0  FUN_1000_a0c0  23 bytes, 1 callers */

void __cdecl16near FUN_1000_a0c0(void)

{
  FUN_1000_beea(10,0x1e,0xa1,0x9eb);
  return;
}



/* 1000:a0d8  FUN_1000_a0d8  168 bytes, 3 callers */

void __cdecl16near FUN_1000_a0d8(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  undefined2 uVar3;
  
  FUN_1000_a23c();
  switch(*(undefined2 *)0x1dc0) {
  case 1:
    if (*(int *)0x1816 == 1) {
      uVar3 = 0x9f6;
      uVar2 = 0xa1;
    }
    else {
      uVar3 = 0xa00;
      uVar2 = 0x21;
    }
    uVar1 = 0x20;
    break;
  case 2:
    uVar3 = 0xa0a;
    uVar2 = 0x41;
    goto LAB_1000_a12f;
  case 3:
    uVar3 = 0xa17;
    uVar2 = 0x81;
    uVar1 = 0x1a;
    break;
  case 4:
    uVar3 = 0xa26;
    uVar2 = 0xc1;
    goto LAB_1000_a14b;
  case 5:
    uVar3 = 0xa32;
    uVar2 = 0x61;
LAB_1000_a12f:
    uVar1 = 0x1c;
    break;
  case 6:
    if (*(int *)0x1816 == 2) {
      uVar3 = 0xa40;
      uVar2 = 1;
    }
    else {
      uVar3 = 0xa4c;
      uVar2 = 0xe1;
    }
LAB_1000_a14b:
    uVar1 = 0x1e;
    break;
  case 7:
    FUN_1000_beea(10,0x20,0xc5,0xa58);
    FUN_1000_a286();
  default:
    goto switchD_1000_a0ea_default;
  }
  FUN_1000_beea(10,uVar1,uVar2,uVar3);
switchD_1000_a0ea_default:
  *(undefined2 *)0x181c = 0x78;
  return;
}



/* 1000:a196  FUN_1000_a196  148 bytes, 4 callers */

void __cdecl16near FUN_1000_a196(void)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  char local_a [4];
  char local_6 [4];
  
  FUN_1000_ee2a(*(undefined2 *)0x1818,local_6,10);
  pcVar5 = (char *)0xa62;
  pcVar6 = local_a;
  uVar3 = 0xffff;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar1 = pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (*pcVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar5 = pcVar5 + -uVar3;
  for (uVar4 = uVar3 >> 1; uVar4 != 0; uVar4 = uVar4 - 1) {
    pcVar2 = pcVar6;
    pcVar6 = pcVar6 + 2;
    pcVar1 = pcVar5;
    pcVar5 = pcVar5 + 2;
    *(undefined2 *)pcVar2 = *(undefined2 *)pcVar1;
  }
  for (uVar3 = (uint)((uVar3 & 1) != 0); uVar3 != 0; uVar3 = uVar3 - 1) {
    pcVar2 = pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar1 = pcVar5;
    pcVar5 = pcVar5 + 1;
    *pcVar2 = *pcVar1;
  }
  pcVar6 = local_6;
  uVar3 = 0xffff;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar1 = pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (*pcVar1 != '\0');
  if (1 < ~uVar3 - 1) {
    local_a[0] = local_6[0];
  }
  FUN_1000_beea(10,0x20,0x41,0xa65);
  FUN_1000_beea(10,0x2c,0xe1,local_a);
  *(undefined2 *)0x181c = 0x78;
  return;
}



/* 1000:a22a  FUN_1000_a22a  18 bytes, 1 callers */

void __cdecl16near FUN_1000_a22a(void)

{
  undefined2 unaff_DS;
  
  *(int *)0x181c = *(int *)0x181c - *(int *)0x1820;
  if (*(int *)0x181c < 1) {
    FUN_1000_a23c();
  }
  return;
}



/* 1000:a23c  FUN_1000_a23c  29 bytes, 11 callers */

void __cdecl16near FUN_1000_a23c(void)

{
  undefined2 unaff_DS;
  
  *(undefined2 *)0x181c = 0;
  FUN_1000_beea(10,8,0xe1,0xa6b);
  return;
}



/* 1000:a25a  FUN_1000_a25a  44 bytes, 6 callers */

void __cdecl16near FUN_1000_a25a(void)

{
  undefined2 unaff_DS;
  
  FUN_1000_bf46(0x18,0x14,0xe1,0x30);
  FUN_1000_be36(0x18,10,0xe1,*(undefined2 *)0x1db6);
  return;
}



/* 1000:a286  FUN_1000_a286  24 bytes, 2 callers */

void __cdecl16near FUN_1000_a286(void)

{
  undefined2 unaff_DS;
  
  FUN_1000_be99(0x18,0x3e,0xe1,*(int *)0x1842 + -1);
  return;
}



/* 1000:a29e  FUN_1000_a29e  44 bytes, 4 callers */

void FUN_1000_a29e(void)

{
  FUN_1000_cf6a(7);
  FUN_1000_cf44();
  FUN_1000_d03e();
  FUN_1000_a23c();
  FUN_1000_beea(10,0x1e,0x41,0xa8c);
  FUN_1000_cf08();
  return;
}



/* 1000:a2ca  FUN_1000_a2ca  56 bytes, 4 callers */

void FUN_1000_a2ca(void)

{
  FUN_1000_beea(0x16,10,0x41,0xa96);
  FUN_1000_a25a();
  FUN_1000_beea(0x16,0x3c,0x41,0xa9c);
  FUN_1000_a286();
  FUN_1000_a428();
  FUN_1000_a3f8();
  return;
}



/* 1000:a302  FUN_1000_a302  246 bytes, 1 callers */

void __cdecl16near FUN_1000_a302(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0x16;
  do {
    iVar2 = 4;
    do {
      FUN_1000_bf46(iVar2,iVar3,0xe1,
                    CONCAT11((char)((uint)iVar2 >> 8),(char)iVar2 * '\x10' + (char)(iVar3 / 2) + 'E'
                            ));
      iVar2 = iVar2 + 1;
    } while (iVar2 < 9);
    iVar3 = iVar3 + 2;
  } while (iVar3 < 0x36);
  iVar3 = 4;
  do {
    iVar2 = 0x36;
    do {
      cVar1 = (char)(iVar2 / 2) + (char)iVar3 * '\x10';
      FUN_1000_bf46(iVar3,iVar2,0xe1,CONCAT11((char)((uint)(iVar2 / 2) >> 8),cVar1 + -0x7b));
      FUN_1000_bf46(iVar3 + 2,iVar2,0xe1,cVar1 + -0x77);
      FUN_1000_bf46(iVar3 + 3,iVar2,0xe1,cVar1 + -0x6f);
      FUN_1000_bf46(iVar3 + 5,iVar2 + -0x10,0xe1,cVar1 + -0x73);
      iVar2 = iVar2 + 2;
    } while (iVar2 < 0x3e);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 6);
  iVar2 = 0;
  iVar3 = 0x12;
  do {
    FUN_1000_bf46(2,iVar3,0x41,CONCAT11((char)((uint)iVar2 >> 8),(char)iVar2 + -0x7a));
    FUN_1000_bf46(3,iVar3,0x41,(char)iVar2 + -0x75);
    iVar2 = iVar2 + 1;
    iVar3 = iVar3 + 2;
  } while (iVar3 < 0x1c);
  return;
}



/* 1000:a3f8  FUN_1000_a3f8  48 bytes, 3 callers */

void __cdecl16near FUN_1000_a3f8(void)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    FUN_1000_beea(iVar1,0,5,0xaa1);
    FUN_1000_beea(iVar1,0x4c,5,0xaa4);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x19);
  return;
}



/* 1000:a428  FUN_1000_a428  67 bytes, 1 callers */

void __cdecl16near FUN_1000_a428(void)

{
  FUN_1000_beea(0x16,0x1e,0xe1,0x9b0);
  FUN_1000_beea(0x17,0x1e,0xe1,0x9bc);
  FUN_1000_beea(0x18,0x1e,0xe1,0x9c8);
  return;
}



/* 1000:a46c  FUN_1000_a46c  938 bytes, 1 callers */

int __cdecl16near FUN_1000_a46c(void)

{
  undefined2 *puVar1;
  char *pcVar2;
  char *pcVar3;
  undefined2 *puVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  char *pcVar12;
  char *pcVar13;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined4 uVar14;
  undefined1 local_868 [2054];
  undefined2 local_62 [2];
  char acStack_5d [4];
  char acStack_59 [10];
  undefined1 local_4f [31];
  char local_30 [10];
  undefined2 local_26;
  undefined2 uStack_24;
  undefined2 uStack_22;
  undefined2 uStack_20;
  char local_1e [12];
  int local_12;
  int local_10;
  undefined4 local_e;
  int *local_a;
  char *local_8;
  undefined2 local_6;
  int local_4;
  
  local_12 = 0;
  local_a = (int *)0x1fea;
  do {
    if (*local_a < *(int *)0x1db6) {
      local_6 = 9;
      if (local_a < (int *)0x20b0) {
        puVar9 = (undefined2 *)0x20b0;
        local_4 = 9 - local_12;
        do {
          puVar10 = puVar9 + -0xb;
          puVar11 = puVar9;
          for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
            puVar4 = puVar11;
            puVar11 = puVar11 + 1;
            puVar1 = puVar10;
            puVar10 = puVar10 + 1;
            *puVar4 = *puVar1;
          }
          puVar9 = puVar9 + -0xb;
          local_4 = local_4 + -1;
        } while (local_4 != 0);
      }
      *local_a = *(int *)0x1db6;
      local_a[1] = *(int *)0x1818;
      local_a[2] = *(int *)0xaa7;
      local_a[3] = *(int *)0xaa9;
      local_a[4] = *(int *)0xaab;
      local_a[5] = *(int *)0xaad;
      *(undefined1 *)(local_a + 6) = *(undefined1 *)0xaaf;
      uVar14 = FUN_1000_ef1a(0);
      local_e = uVar14;
      local_8 = (char *)FUN_1000_eeb2(&local_e);
      local_26 = *(undefined2 *)0xab0;
      uStack_24 = *(undefined2 *)0xab2;
      uStack_22 = *(undefined2 *)0xab4;
      uStack_20 = *(undefined2 *)0xab6;
      local_1e[0] = *(char *)0xab8;
      FUN_1000_ee2a(*(undefined2 *)((int)local_8 + 10),local_1e + 2,10);
      local_6 = 0;
      pcVar12 = local_1e + 2;
      iVar8 = -1;
      do {
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        pcVar2 = pcVar12;
        pcVar12 = pcVar12 + 1;
      } while (*pcVar2 != '\0');
      if (iVar8 != -2) {
        uVar6 = 0;
        do {
          pcVar12 = local_1e + 2;
          uVar7 = 0xffff;
          do {
            if (uVar7 == 0) break;
            uVar7 = uVar7 - 1;
            pcVar2 = pcVar12;
            pcVar12 = pcVar12 + 1;
          } while (*pcVar2 != '\0');
          *(char *)((int)&uStack_24 + (uVar6 - (~uVar7 - 1))) = local_1e[uVar6 + 2];
          pcVar12 = local_1e + 2;
          uVar7 = 0xffff;
          do {
            if (uVar7 == 0) break;
            uVar7 = uVar7 - 1;
            pcVar2 = pcVar12;
            pcVar12 = pcVar12 + 1;
          } while (*pcVar2 != '\0');
          uVar6 = uVar6 + 1;
        } while (uVar6 < ~uVar7 - 1);
      }
      FUN_1000_ee2a(*(int *)((int)local_8 + 8) + 1,local_1e + 2,10);
      local_6 = 0;
      pcVar12 = local_1e + 2;
      iVar8 = -1;
      do {
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        pcVar2 = pcVar12;
        pcVar12 = pcVar12 + 1;
      } while (*pcVar2 != '\0');
      if (iVar8 != -2) {
        uVar6 = 0;
        do {
          pcVar12 = local_1e + 2;
          uVar7 = 0xffff;
          do {
            if (uVar7 == 0) break;
            uVar7 = uVar7 - 1;
            pcVar2 = pcVar12;
            pcVar12 = pcVar12 + 1;
          } while (*pcVar2 != '\0');
          *(char *)((int)&uStack_22 + (uVar6 - (~uVar7 - 1)) + 1) = local_1e[uVar6 + 2];
          pcVar12 = local_1e + 2;
          uVar7 = 0xffff;
          do {
            if (uVar7 == 0) break;
            uVar7 = uVar7 - 1;
            pcVar2 = pcVar12;
            pcVar12 = pcVar12 + 1;
          } while (*pcVar2 != '\0');
          uVar6 = uVar6 + 1;
        } while (uVar6 < ~uVar7 - 1);
      }
      FUN_1000_ee2a(*(undefined2 *)((int)local_8 + 6),local_1e + 2,10);
      uVar6 = 0;
      pcVar12 = local_1e + 2;
      iVar8 = -1;
      do {
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        pcVar2 = pcVar12;
        pcVar12 = pcVar12 + 1;
      } while (*pcVar2 != '\0');
      if (iVar8 != -2) {
        do {
          pcVar12 = local_1e + 2;
          uVar7 = 0xffff;
          do {
            if (uVar7 == 0) break;
            uVar7 = uVar7 - 1;
            pcVar2 = pcVar12;
            pcVar12 = pcVar12 + 1;
          } while (*pcVar2 != '\0');
          local_1e[uVar6 - (~uVar7 - 1)] = local_1e[uVar6 + 2];
          pcVar12 = local_1e + 2;
          uVar7 = 0xffff;
          do {
            if (uVar7 == 0) break;
            uVar7 = uVar7 - 1;
            pcVar2 = pcVar12;
            pcVar12 = pcVar12 + 1;
          } while (*pcVar2 != '\0');
          uVar6 = uVar6 + 1;
        } while (uVar6 < ~uVar7 - 1);
      }
      pcVar12 = (char *)&local_26;
      pcVar13 = (char *)((int)local_a + 0xd);
      uVar6 = 0xffff;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar2 = pcVar12;
        pcVar12 = pcVar12 + 1;
      } while (*pcVar2 != '\0');
      uVar6 = ~uVar6;
      pcVar12 = pcVar12 + -uVar6;
      for (uVar7 = uVar6 >> 1; uVar7 != 0; uVar7 = uVar7 - 1) {
        pcVar3 = pcVar13;
        pcVar13 = pcVar13 + 2;
        pcVar2 = pcVar12;
        pcVar12 = pcVar12 + 2;
        *(undefined2 *)pcVar3 = *(undefined2 *)pcVar2;
      }
      for (uVar6 = (uint)((uVar6 & 1) != 0); uVar6 != 0; uVar6 = uVar6 - 1) {
        pcVar3 = pcVar13;
        pcVar13 = pcVar13 + 1;
        pcVar2 = pcVar12;
        pcVar12 = pcVar12 + 1;
        *pcVar3 = *pcVar2;
      }
      local_10 = local_12;
      *(undefined2 *)0x1db6 = 0;
    }
    local_12 = local_12 + 1;
    local_a = local_a + 0xb;
  } while (local_a < (int *)0x20c6);
  FUN_1000_a816(local_10);
  FUN_1000_ab76(local_10,local_30);
  pcVar12 = local_30;
  pcVar13 = (char *)(local_10 * 0x16 + 0x1fee);
  uVar6 = 0xffff;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar2 = pcVar12;
    pcVar12 = pcVar12 + 1;
  } while (*pcVar2 != '\0');
  uVar6 = ~uVar6;
  pcVar12 = pcVar12 + -uVar6;
  for (uVar7 = uVar6 >> 1; uVar7 != 0; uVar7 = uVar7 - 1) {
    pcVar3 = pcVar13;
    pcVar13 = pcVar13 + 2;
    pcVar2 = pcVar12;
    pcVar12 = pcVar12 + 2;
    *(undefined2 *)pcVar3 = *(undefined2 *)pcVar2;
  }
  for (uVar6 = (uint)((uVar6 & 1) != 0); uVar6 != 0; uVar6 = uVar6 - 1) {
    pcVar3 = pcVar13;
    pcVar13 = pcVar13 + 1;
    pcVar2 = pcVar12;
    pcVar12 = pcVar12 + 1;
    *pcVar3 = *pcVar2;
  }
  FUN_1000_a846(local_10);
  *(undefined1 *)*(undefined2 *)0x1db0 = 0;
  pcVar12 = (char *)0xab9;
  uVar6 = 0xffff;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar2 = pcVar12;
    pcVar12 = pcVar12 + 1;
  } while (*pcVar2 != '\0');
  uVar6 = ~uVar6;
  pcVar12 = pcVar12 + -uVar6;
  pcVar13 = (char *)0x20c8;
  iVar8 = -1;
  do {
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    pcVar2 = pcVar13;
    pcVar13 = pcVar13 + 1;
  } while (*pcVar2 != '\0');
  pcVar13 = pcVar13 + -1;
  for (uVar7 = uVar6 >> 1; uVar7 != 0; uVar7 = uVar7 - 1) {
    pcVar3 = pcVar13;
    pcVar13 = pcVar13 + 2;
    pcVar2 = pcVar12;
    pcVar12 = pcVar12 + 2;
    *(undefined2 *)pcVar3 = *(undefined2 *)pcVar2;
  }
  for (uVar6 = (uint)((uVar6 & 1) != 0); uVar6 != 0; uVar6 = uVar6 - 1) {
    pcVar3 = pcVar13;
    pcVar13 = pcVar13 + 1;
    pcVar2 = pcVar12;
    pcVar12 = pcVar12 + 1;
    *pcVar3 = *pcVar2;
  }
  FUN_1000_e182(0x20c8,local_868);
  local_a = (int *)0x0;
  local_8 = (char *)0x1fee;
  do {
    puVar9 = local_62;
    puVar10 = (undefined2 *)0xac3;
    for (iVar8 = 0xe; iVar8 != 0; iVar8 = iVar8 + -1) {
      puVar4 = puVar9;
      puVar9 = puVar9 + 1;
      puVar1 = puVar10;
      puVar10 = puVar10 + 1;
      *puVar4 = *puVar1;
    }
    *(undefined1 *)puVar9 = *(undefined1 *)puVar10;
    FUN_1000_ee2a(*(undefined2 *)(local_8 + -4),local_1e + 2,10);
    local_6 = 0;
    pcVar12 = local_1e + 2;
    iVar8 = -1;
    do {
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      pcVar2 = pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (*pcVar2 != '\0');
    if (iVar8 != -2) {
      uVar6 = 0;
      do {
        pcVar12 = local_1e + 2;
        uVar7 = 0xffff;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          pcVar2 = pcVar12;
          pcVar12 = pcVar12 + 1;
        } while (*pcVar2 != '\0');
        acStack_5d[uVar6 - (~uVar7 - 1)] = local_1e[uVar6 + 2];
        pcVar12 = local_1e + 2;
        uVar7 = 0xffff;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          pcVar2 = pcVar12;
          pcVar12 = pcVar12 + 1;
        } while (*pcVar2 != '\0');
        uVar6 = uVar6 + 1;
      } while (uVar6 < ~uVar7 - 1);
    }
    FUN_1000_ee2a(*(undefined2 *)(local_8 + -2),local_1e + 2,10);
    local_6 = 0;
    pcVar12 = local_1e + 2;
    iVar8 = -1;
    do {
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      pcVar2 = pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (*pcVar2 != '\0');
    if (iVar8 != -2) {
      uVar6 = 0;
      do {
        pcVar12 = local_1e + 2;
        uVar7 = 0xffff;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          pcVar2 = pcVar12;
          pcVar12 = pcVar12 + 1;
        } while (*pcVar2 != '\0');
        acStack_59[uVar6 - (~uVar7 - 1)] = local_1e[uVar6 + 2];
        pcVar12 = local_1e + 2;
        uVar7 = 0xffff;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          pcVar2 = pcVar12;
          pcVar12 = pcVar12 + 1;
        } while (*pcVar2 != '\0');
        uVar6 = uVar6 + 1;
      } while (uVar6 < ~uVar7 - 1);
    }
    piVar5 = local_a;
    uVar6 = 0;
    iVar8 = -1;
    pcVar12 = local_8;
    do {
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      pcVar2 = pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (*pcVar2 != '\0');
    if (iVar8 != -2) {
      do {
        acStack_59[uVar6 + 1] = *(char *)((int)piVar5 + uVar6 + 0x1fee);
        uVar7 = 0xffff;
        pcVar12 = local_8;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          pcVar2 = pcVar12;
          pcVar12 = pcVar12 + 1;
        } while (*pcVar2 != '\0');
        uVar6 = uVar6 + 1;
      } while (uVar6 < ~uVar7 - 1);
    }
    piVar5 = local_a;
    uVar6 = 0;
    do {
      local_4f[uVar6] = *(undefined1 *)((int)piVar5 + uVar6 + 0x1ff7);
      uVar6 = uVar6 + 1;
    } while (uVar6 < 8);
    FUN_1000_e2ee(local_62,local_868);
    local_a = (int *)((int)local_a + 0x16);
    local_8 = local_8 + 0x16;
    if ((char *)0x20c9 < local_8) {
      FUN_1000_e156(local_868);
      FUN_1000_9ff0(200);
      return local_10;
    }
  } while( true );
}



/* 1000:a816  FUN_1000_a816  47 bytes, 3 callers */

void __cdecl16near FUN_1000_a816(undefined2 param_1)

{
  undefined2 unaff_DS;
  
  FUN_1000_bfa2(0xae0);
  FUN_1000_c762();
  FUN_1000_82c8();
  out(0xa6,(char)*(undefined2 *)0x1844);
  out(0xa4,(char)*(undefined2 *)0x1844);
  FUN_1000_8674();
  FUN_1000_82d7(0x2b8);
  FUN_1000_a846(param_1);
  return;
}



/* 1000:a846  FUN_1000_a846  509 bytes, 2 callers */

void __cdecl16near FUN_1000_a846(int param_1)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  char *pcVar8;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  char local_38 [10];
  undefined1 local_2e;
  undefined1 local_2d;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined2 local_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined1 uStack_e;
  uint local_c;
  undefined2 local_a;
  undefined2 *local_8;
  int local_6;
  undefined2 local_4;
  
  FUN_1000_beea(1,8,1,0xae6);
  FUN_1000_a3f8();
  pcVar8 = local_38;
  pcVar6 = (char *)0xb07;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    pcVar2 = pcVar8;
    pcVar8 = pcVar8 + 2;
    pcVar1 = pcVar6;
    pcVar6 = pcVar6 + 2;
    *(undefined2 *)pcVar2 = *(undefined2 *)pcVar1;
  }
  *pcVar8 = *pcVar6;
  local_38[1] = 0x15;
  local_38[2] = 0x16;
  local_2e = 0x17;
  local_2d = 0x18;
  local_2c = 0x19;
  local_2b = 0x1a;
  FUN_1000_beea(4,8,0xe1,local_38);
  FUN_1000_beea(5,8,0xe1,0xb28);
  FUN_1000_beea(0x10,8,0xe1,0xb49);
  local_6 = 0;
  local_8 = (undefined2 *)0x1fea;
  local_c = 0x546;
  do {
    *(byte *)0x1844 = *(byte *)0x1844 ^ 1;
    if (local_6 == param_1) {
      local_a = 0xc1;
    }
    else {
      local_a = 0xe1;
    }
    iVar3 = local_6 + 6;
    FUN_1000_beea(iVar3,10,local_a,local_c);
    FUN_1000_ee2a(*local_8,local_38,10);
    local_14 = *(undefined2 *)0xb6a;
    uStack_12 = *(undefined2 *)0xb6c;
    uStack_10 = *(undefined2 *)0xb6e;
    uStack_e = *(undefined1 *)0xb70;
    local_4 = 0;
    pcVar8 = local_38;
    iVar4 = -1;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar1 = pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (*pcVar1 != '\0');
    if (iVar4 != -2) {
      uVar7 = 0;
      do {
        pcVar8 = local_38;
        uVar5 = 0xffff;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          pcVar1 = pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (*pcVar1 != '\0');
        *(char *)((int)&uStack_10 + (uVar7 - (~uVar5 - 1)) + 1) = local_38[uVar7];
        pcVar8 = local_38;
        uVar5 = 0xffff;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          pcVar1 = pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (*pcVar1 != '\0');
        uVar7 = uVar7 + 1;
      } while (uVar7 < ~uVar5 - 1);
    }
    FUN_1000_beea(iVar3,0x10,local_a,&local_14);
    FUN_1000_ee2a(local_8[1],local_38,10);
    local_14 = *(undefined2 *)0xb71;
    uStack_12 = CONCAT11(uStack_12._1_1_,*(undefined1 *)0xb73);
    local_4 = 0;
    pcVar8 = local_38;
    iVar4 = -1;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar1 = pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (*pcVar1 != '\0');
    if (iVar4 != -2) {
      uVar7 = 0;
      do {
        pcVar8 = local_38;
        uVar5 = 0xffff;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          pcVar1 = pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (*pcVar1 != '\0');
        *(char *)((int)&uStack_12 + (uVar7 - (~uVar5 - 1))) = local_38[uVar7];
        pcVar8 = local_38;
        uVar5 = 0xffff;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          pcVar1 = pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (*pcVar1 != '\0');
        uVar7 = uVar7 + 1;
      } while (uVar7 < ~uVar5 - 1);
    }
    FUN_1000_beea(iVar3,0x1e,local_a,&local_14);
    FUN_1000_beea(iVar3,0x24,local_a,local_8 + 2);
    FUN_1000_beea(iVar3,0x36,local_a,(int)local_8 + 0xd);
    local_8 = local_8 + 0xb;
    local_6 = local_6 + 1;
    local_c = local_c + 3;
    if (0x563 < local_c) {
      return;
    }
  } while( true );
}



/* 1000:aa44  FUN_1000_aa44  78 bytes, 1 callers */

void FUN_1000_aa44(void)

{
  FUN_1000_a816(0xffff);
  FUN_1000_beea(0x14,0x12,0xc3,0xb74);
  FUN_1000_cf6a(8);
  FUN_1000_cf44();
  FUN_1000_d046();
  FUN_1000_9ff0(5000);
  FUN_1000_af50(8,0x12);
  FUN_1000_cf2c();
  FUN_1000_8493();
  return;
}



/* 1000:aa92  FUN_1000_aa92  227 bytes, 1 callers */

void __cdecl16near FUN_1000_aa92(void)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  char local_2c [30];
  undefined2 local_e;
  undefined2 uStack_c;
  undefined2 uStack_a;
  undefined1 uStack_8;
  undefined2 local_4;
  
  if (*(int *)0x20b0 < *(int *)0x1db6) {
    FUN_1000_cf6a(8);
    FUN_1000_cf44();
    FUN_1000_d046();
    FUN_1000_a46c();
    FUN_1000_cf2c();
  }
  else {
    FUN_1000_a816(0xffff);
    FUN_1000_ee2a(*(undefined2 *)0x1db6,local_2c,10);
    local_e = *(undefined2 *)0xb8b;
    uStack_c = *(undefined2 *)0xb8d;
    uStack_a = *(undefined2 *)0xb8f;
    uStack_8 = *(undefined1 *)0xb91;
    local_4 = 0;
    pcVar5 = local_2c;
    iVar2 = -1;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      pcVar1 = pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (*pcVar1 != '\0');
    if (iVar2 != -2) {
      uVar4 = 0;
      do {
        pcVar5 = local_2c;
        uVar3 = 0xffff;
        do {
          if (uVar3 == 0) break;
          uVar3 = uVar3 - 1;
          pcVar1 = pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (*pcVar1 != '\0');
        *(char *)((int)&uStack_a + (uVar4 - (~uVar3 - 1)) + 1) = local_2c[uVar4];
        pcVar5 = local_2c;
        uVar3 = 0xffff;
        do {
          if (uVar3 == 0) break;
          uVar3 = uVar3 - 1;
          pcVar1 = pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (*pcVar1 != '\0');
        uVar4 = uVar4 + 1;
      } while (uVar4 < ~uVar3 - 1);
    }
    FUN_1000_beea(0x14,0x10,0xc1,0xb92);
    FUN_1000_beea(0x14,0x2c,0xe1,&local_e);
    FUN_1000_9ff0(300);
  }
  FUN_1000_af50(8,0x12);
  FUN_1000_8493();
  return;
}



/* 1000:ab76  FUN_1000_ab76  983 bytes, 1 callers */

void __cdecl16near FUN_1000_ab76(int param_1,undefined2 *param_2)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined2 unaff_DS;
  int local_10;
  int local_c;
  int local_a;
  int local_8;
  int local_4;
  
  *param_2 = *(undefined2 *)0xbac;
  param_2[1] = *(undefined2 *)0xbae;
  param_2[2] = *(undefined2 *)0xbb0;
  param_2[3] = *(undefined2 *)0xbb2;
  *(undefined1 *)(param_2 + 4) = *(undefined1 *)0xbb4;
  local_10 = 0;
  local_8 = 0;
  local_c = 0;
  uVar5 = 0x564;
  iVar7 = 0;
  do {
    FUN_1000_beea(iVar7 + 0x13,0xe,0xe1,uVar5);
    iVar7 = iVar7 + 1;
    uVar5 = uVar5 + 0x1b;
  } while (uVar5 < 0x5d0);
  FUN_1000_ba8c(6,0xf,0xf,0);
  *(undefined2 *)0xdd0 = 0;
  do {
    iVar4 = local_8;
    iVar7 = local_c;
    *(byte *)0x1844 = *(byte *)0x1844 ^ 1;
    iVar2 = FUN_1000_bf8e();
    while (iVar2 != 0) {
      FUN_1000_bf98();
      iVar2 = FUN_1000_bf8e();
    }
    local_4 = FUN_1000_e3c8(0x2130);
    iVar2 = local_c;
    if (*(int *)0x2130 != 0) {
      iVar2 = local_c + -1;
    }
    if (*(int *)0x2132 != 0) {
      iVar2 = iVar2 + 1;
    }
    if (iVar2 < 0) {
      iVar2 = 3;
    }
    if (3 < iVar2) {
      iVar2 = 0;
    }
    if (*(int *)0x2136 != 0) {
      local_8 = local_8 + 2;
    }
    if ((iVar2 == 3) && (local_8 == 0x30)) {
      local_8 = 0x32;
    }
    if ((iVar2 == 3) && (local_8 == 0x2c)) {
      local_8 = 0x2e;
    }
    if (((iVar2 == 3) && (0x20 < local_8)) && (local_8 < 0x2a)) {
      local_8 = 0x2a;
    }
    if (*(int *)0x2134 != 0) {
      local_8 = local_8 + -2;
      if ((iVar2 == 3) && (local_8 == 0x30)) {
        local_8 = 0x2e;
      }
      if ((iVar2 == 3) && (local_8 == 0x2c)) {
        local_8 = 0x2a;
      }
      if (((iVar2 == 3) && (0x20 < local_8)) && (local_8 < 0x2a)) {
        local_8 = 0x20;
      }
    }
    if (local_8 < 0) {
      local_8 = 0x32;
    }
    if (0x32 < local_8) {
      local_8 = 0;
    }
    iVar6 = local_10;
    if (((*(int *)0x2138 != 0) || (*(int *)0x213a != 0)) && (local_a != 0)) {
      local_a = 0;
      cVar1 = *(char *)(iVar4 / 2 + local_c * 0x1b + 0x564);
      local_c = iVar2;
      if (cVar1 == '\x1b') {
        if (0 < local_10) {
          iVar6 = local_10 + -2;
        }
      }
      else if (cVar1 == '\x1c') {
        if (local_10 < 0xe) {
LAB_1000_ad06:
          iVar6 = local_10 + 2;
        }
      }
      else if (cVar1 == '\x1d') {
        local_4 = 1;
      }
      else {
        *(char *)(local_10 / 2 + (int)param_2) = cVar1;
        if (local_10 < 0xe) goto LAB_1000_ad06;
        local_c = 3;
        local_8 = 0x32;
      }
      FUN_1000_cff4(5);
      iVar2 = local_c;
    }
    local_c = iVar2;
    if ((*(int *)0x2138 == 0) && (*(int *)0x213a == 0)) {
      local_a = 1;
    }
    if ((local_4 != 0) || (*(int *)0x213e != 0)) {
      FUN_1000_b766((iVar6 + 0x24) * 8,(param_1 + 6) * 0x10,iVar6 * 8 + 0x12f,param_1 * 0x10 + 0x6f,
                    0xd);
      return;
    }
    FUN_1000_bf46(iVar7 + 0x13,iVar4 + 0xe,0xe1,
                  CONCAT11((char)((uint)(iVar7 * 0x1b) >> 8),
                           *(undefined1 *)(iVar4 / 2 + iVar7 * 0x1b + 0x564)));
    FUN_1000_b766((iVar4 + 0xe) * 8,(iVar7 + 0x13) * 0x10,iVar4 * 8 + 0x7f,iVar7 * 0x10 + 0x13f,0xd)
    ;
    FUN_1000_bf46(local_c + 0x13,local_8 + 0xe,5,
                  CONCAT11((char)((uint)(local_8 / 2) >> 8),
                           *(undefined1 *)(local_c * 0x1b + local_8 / 2 + 0x564)));
    FUN_1000_b766((local_8 + 0xe) * 8,(local_c + 0x13) * 0x10,local_8 * 8 + 0x7f,
                  local_c * 0x10 + 0x13f,6);
    iVar4 = param_1 + 6;
    FUN_1000_bf46(iVar4,local_10 + 0x24,0xc1,
                  CONCAT11((char)((uint)(local_10 / 2) >> 8),
                           *(undefined1 *)(local_10 / 2 + (int)param_2)));
    iVar7 = param_1 * 0x10 + 0x6f;
    FUN_1000_b766((local_10 + 0x24) * 8,iVar4 * 0x10,local_10 * 8 + 0x12f,iVar7,0xd);
    if (*(int *)0x1844 == 0) {
      FUN_1000_bf46(iVar4,iVar6 + 0x24,0xc1,
                    CONCAT11((char)((uint)(iVar6 / 2) >> 8),
                             *(undefined1 *)(iVar6 / 2 + (int)param_2)));
      uVar3 = 0xd;
    }
    else {
      FUN_1000_bf46(iVar4,iVar6 + 0x24,5,
                    CONCAT11((char)((uint)(iVar6 / 2) >> 8),
                             *(undefined1 *)(iVar6 / 2 + (int)param_2)));
      uVar3 = 6;
    }
    FUN_1000_b766((iVar6 + 0x24) * 8,iVar4 * 0x10,iVar6 * 8 + 0x12f,iVar7,uVar3);
    do {
      uVar5 = FUN_1000_bb38();
    } while (uVar5 < *(int *)0x1820 + 1U);
    *(undefined2 *)0xdd0 = 0;
    local_10 = iVar6;
  } while( true );
}



/* 1000:af50  FUN_1000_af50  99 bytes, 4 callers */

void __cdecl16near FUN_1000_af50(byte param_1,uint param_2)

{
  int iVar1;
  undefined1 *puVar2;
  
  puVar2 = (undefined1 *)0x0;
  iVar1 = -0x8000;
  cRam0001af91 = -(param_1 & 1);
                    /* WARNING: Read-only address (ram,0x0001af91) is written */
  cRam0001af99 = -((char)param_1 >> 1 & 1U);
                    /* WARNING: Read-only address (ram,0x0001af99) is written */
  cRam0001afa1 = -((char)param_1 >> 2 & 1U);
                    /* WARNING: Read-only address (ram,0x0001afa1) is written */
  cRam0001afa9 = -((char)param_1 >> 3 & 1U);
                    /* WARNING: Read-only address (ram,0x0001afa9) is written */
  do {
    puVar2 = (undefined1 *)((uint)puVar2 & 0x7fff);
    *puVar2 = 0;
    *puVar2 = 0;
    *puVar2 = 0;
    *puVar2 = 0;
    puVar2 = puVar2 + (param_2 | 1);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}



/* 1000:afb4  FUN_1000_afb4  18 bytes, 1 callers */

void __cdecl16near FUN_1000_afb4(void)

{
  undefined2 unaff_DS;
  
  *(byte *)0xbb7 = bRam00000500;
  bRam00000500 = bRam00000500 | 0x20;
  return;
}



/* 1000:afc6  FUN_1000_afc6  12 bytes, 1 callers */

void __cdecl16near FUN_1000_afc6(void)

{
  undefined2 unaff_DS;
  
  uRam00000290 = *(undefined1 *)0xbb7;
  return;
}



/* 1000:afd2  FUN_1000_afd2  47 bytes, 1 callers */

void __cdecl16near FUN_1000_afd2(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  code *pcVar1;
  undefined2 in_BX;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  
  if (*(int *)0xbc0 != 0) {
    return;
  }
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  *(undefined2 *)0xbb8 = in_BX;
  *(undefined2 *)0xbba = unaff_ES;
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  *(undefined2 *)0xbc0 = 1;
  return;
}



/* 1000:b004  FUN_1000_b004  32 bytes, 1 callers */

void __cdecl16near FUN_1000_b004(undefined2 param_1)

{
  code *pcVar1;
  undefined2 unaff_DS;
  
  if (*(int *)0xbc0 != 0) {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    *(undefined2 *)0xbc0 = 0;
  }
  return;
}



/* 1000:b030  FUN_1000_b030  446 bytes, 1 callers */

int __cdecl16near FUN_1000_b030(uint param_1,uint param_2,uint param_3,uint param_4)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  byte extraout_AL;
  byte extraout_AL_00;
  byte bVar4;
  byte extraout_AL_01;
  byte extraout_AL_02;
  int in_AX;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined1 extraout_AH;
  undefined1 extraout_AH_00;
  undefined1 uVar8;
  undefined1 extraout_AH_01;
  undefined1 extraout_AH_02;
  uint uVar9;
  uint uVar10;
  int iVar11;
  char cVar12;
  uint uVar13;
  uint uVar14;
  byte *pbVar15;
  bool bVar16;
  byte bVar17;
  
  if (param_2 == param_4) {
    iVar5 = FUN_1000_b2c8();
    return iVar5;
  }
  bVar4 = 0;
  if ((int)param_1 < 0) {
    bVar4 = 1;
  }
  else if (0x27f < (int)param_1) {
    bVar4 = 2;
  }
  if ((int)param_2 < 0) {
    bVar4 = bVar4 | 8;
  }
  else if (399 < (int)param_2) {
    bVar4 = bVar4 | 4;
  }
  uVar10 = (uint)bVar4 << 8;
  if ((int)param_3 < 0) {
    uVar10 = CONCAT11(bVar4,1);
  }
  else if (0x27f < (int)param_3) {
    uVar10 = CONCAT11(bVar4,2);
  }
  if ((int)param_4 < 0) {
    uVar10 = uVar10 | 8;
  }
  else if (399 < (int)param_4) {
    uVar10 = uVar10 | 4;
  }
  bVar4 = (byte)(uVar10 >> 8);
  if (((byte)uVar10 & bVar4) == 0) {
    uVar14 = param_4;
    if (uVar10 == 0) {
LAB_1000_b0f2:
      FUN_1000_b472();
      uVar10 = param_1 - param_3;
      uVar7 = param_2;
      if (param_1 < param_3 || uVar10 == 0) {
        uVar10 = -uVar10;
        uVar7 = uVar14;
        param_3 = param_1;
        uVar14 = param_2;
      }
      uVar9 = uVar7 - uVar14;
      uVar6 = uVar9;
      if (uVar7 < uVar14 || uVar9 == 0) {
        uVar6 = -uVar9;
      }
      pbVar15 = (byte *)(uVar14 * 0x50);
      uVar14 = 0x8000;
      if (uVar10 < uVar6) {
        uVar10 = (uint)(((ulong)uVar10 << 0x10) / (ulong)uVar6);
        if ((uVar9 & 0x8000) == 0) {
          FUN_1000_b216();
          iVar11 = 0x4f;
          iVar5 = uVar9 + 1;
          bVar4 = extraout_AL_02;
          uVar8 = extraout_AH_02;
        }
        else {
          FUN_1000_b216();
          iVar11 = -0x51;
          iVar5 = 1 - uVar9;
          bVar4 = extraout_AL_01;
          uVar8 = extraout_AH_01;
        }
        do {
          while( true ) {
            *pbVar15 = bVar4;
            bVar16 = CARRY2(uVar14,uVar10);
            uVar14 = uVar14 + uVar10;
            if (!bVar16) break;
            bVar17 = bVar4 & 1;
            bVar4 = bVar4 >> 1 | bVar4 << 7;
            pbVar15 = pbVar15 + (uint)bVar17 + iVar11 + 1;
            iVar5 = iVar5 + -1;
            if (iVar5 == 0) {
              out(0x7c,uVar8);
              return CONCAT11(uVar8,uVar8);
            }
          }
          pbVar15 = pbVar15 + iVar11 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      else {
        if (uVar6 != uVar10) {
          uVar7 = (uint)(((ulong)uVar6 << 0x10) / (ulong)uVar10);
          if ((int)uVar9 < 0) {
            uVar6 = FUN_1000_b22e();
            iVar5 = -0x52;
          }
          else {
            uVar6 = FUN_1000_b22e();
            iVar5 = 0x4e;
          }
          do {
            bVar16 = CARRY2(uVar14,uVar7);
            uVar14 = uVar14 + uVar7;
            if (bVar16) {
              *(uint *)pbVar15 = CONCAT11((char)uVar6,(char)(uVar6 >> 8));
              uVar6 = 0;
              pbVar15 = pbVar15 + iVar5 + 2;
              bVar16 = (param_3 & 1) != 0;
              param_3 = param_3 >> 1 | (uint)bVar16 << 0xf;
              uVar9 = param_3;
              if (bVar16) goto LAB_1000_b178;
            }
            else {
              bVar16 = (param_3 & 1) != 0;
              param_3 = param_3 >> 1 | (uint)bVar16 << 0xf;
              if (bVar16) {
LAB_1000_b178:
                pbVar1 = pbVar15;
                pbVar15 = pbVar15 + 2;
                *(uint *)pbVar1 = CONCAT11((char)uVar6,(char)(uVar6 >> 8));
                uVar9 = param_3;
              }
              else {
                uVar9 = uVar6 | param_3;
              }
            }
            uVar6 = uVar9;
            uVar10 = uVar10 - 1;
            if (uVar10 == 0) {
              *(uint *)pbVar15 = CONCAT11((char)uVar6,(char)(uVar6 >> 8));
              out(0x7c,0);
              return uVar6 << 8;
            }
          } while( true );
        }
        if ((uVar9 & 0x8000) == 0) {
          FUN_1000_b216();
          iVar5 = uVar9 + 1;
          iVar11 = 0x4f;
          bVar4 = extraout_AL_00;
          uVar8 = extraout_AH_00;
        }
        else {
          FUN_1000_b216();
          iVar11 = -0x51;
          iVar5 = 1 - uVar9;
          bVar4 = extraout_AL;
          uVar8 = extraout_AH;
        }
        do {
          *pbVar15 = bVar4;
          bVar17 = bVar4 & 1;
          bVar4 = bVar4 >> 1 | bVar4 << 7;
          pbVar15 = pbVar15 + (uint)bVar17 + iVar11 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      out(0x7c,uVar8);
      return CONCAT11(uVar8,uVar8);
    }
    uVar7 = param_3;
    if (bVar4 != 0) {
      in_AX = FUN_1000_b24c();
      if ((byte)((byte)uVar10 & (byte)(uVar10 >> 8)) != 0) {
        return in_AX;
      }
      uVar7 = param_3;
      if (uVar10 == 0) goto LAB_1000_b0f2;
    }
    uVar6 = uVar7;
    uVar9 = param_4;
    uVar13 = param_1;
    if ((char)uVar10 != '\0') {
      uVar10 = CONCAT11((char)uVar10,(char)(uVar10 >> 8));
      in_AX = FUN_1000_b24c();
      if ((byte)((byte)uVar10 & (byte)(uVar10 >> 8)) != 0) {
        return in_AX;
      }
      param_3 = param_1;
      uVar6 = param_1;
      uVar14 = param_2;
      uVar9 = param_2;
      param_1 = uVar7;
      uVar13 = uVar7;
      param_2 = param_4;
      if (uVar10 == 0) goto LAB_1000_b0f2;
    }
    uVar14 = param_2;
    param_3 = uVar13;
    cVar12 = (char)(uVar10 >> 8);
    uVar7 = uVar6;
    uVar13 = uVar9;
    uVar2 = param_3;
    uVar3 = uVar14;
    if (cVar12 != '\0') {
      uVar10 = CONCAT11((char)uVar10,cVar12);
      in_AX = FUN_1000_b24c();
      if ((byte)((byte)uVar10 & (byte)(uVar10 >> 8)) != 0) {
        return in_AX;
      }
      uVar7 = param_3;
      uVar13 = uVar14;
      param_1 = uVar6;
      uVar2 = uVar6;
      param_2 = uVar9;
      uVar3 = uVar9;
      if (uVar10 == 0) goto LAB_1000_b0f2;
    }
    uVar14 = uVar3;
    param_3 = uVar2;
    if ((char)uVar10 != '\0') {
      iVar5 = CONCAT11((char)uVar10,(char)(uVar10 >> 8));
      in_AX = FUN_1000_b24c();
      if (((byte)((byte)iVar5 & (byte)((uint)iVar5 >> 8)) == 0) &&
         (param_1 = uVar7, param_2 = uVar13, iVar5 == 0)) goto LAB_1000_b0f2;
    }
  }
  return in_AX;
}



/* 1000:b216  FUN_1000_b216  23 bytes, 1 callers */

undefined2 __cdecl16near FUN_1000_b216(void)

{
  uint in_BX;
  
  return *(undefined2 *)((in_BX & 7) * 2 + -0x4dfa);
}



/* 1000:b22e  FUN_1000_b22e  29 bytes, 1 callers */

undefined2 __cdecl16near FUN_1000_b22e(void)

{
  uint in_BX;
  
  return *(undefined2 *)((in_BX & 0xf) * 2 + -0x4e0a);
}



/* 1000:b24c  FUN_1000_b24c  122 bytes, 1 callers */

void __cdecl16near FUN_1000_b24c(void)

{
  int iVar1;
  int in_CX;
  byte in_BH;
  int unaff_BP;
  int unaff_SI;
  int unaff_DI;
  
  if ((in_BH & 8) == 0) {
    if ((in_BH & 4) == 0) {
      if ((in_BH & 1) == 0) {
        if ((in_BH & 2) == 0) {
          return;
        }
        iVar1 = 0x27f;
      }
      else {
        iVar1 = 0;
      }
      if (-1 < unaff_DI +
               (int)(((long)(iVar1 - unaff_SI) * (long)(unaff_BP - unaff_DI)) /
                    (long)-(unaff_SI - in_CX))) {
        return;
      }
      return;
    }
    iVar1 = 399;
  }
  else {
    iVar1 = 0;
  }
  iVar1 = unaff_SI +
          (int)(((long)(iVar1 - unaff_DI) * (long)(in_CX - unaff_SI)) / (long)-(unaff_DI - unaff_BP)
               );
  if (iVar1 < 0) {
    return;
  }
  if (iVar1 < 0x280) {
    return;
  }
  return;
}



/* 1000:b2c8  FUN_1000_b2c8  170 bytes, 1 callers */

uint __cdecl16near FUN_1000_b2c8(void)

{
  uint uVar1;
  uint in_CX;
  uint uVar2;
  uint uVar3;
  int unaff_BP;
  uint unaff_SI;
  uint uVar4;
  int unaff_DI;
  uint *puVar5;
  
  uVar1 = unaff_SI;
  if ((int)in_CX < (int)unaff_SI) {
    uVar1 = in_CX;
    in_CX = unaff_SI;
  }
  if ((0x27f < (int)uVar1) || ((int)in_CX < 0)) {
    return uVar1;
  }
  if ((unaff_DI < 400) && (-1 < unaff_DI)) {
    if ((int)uVar1 < 0) {
      uVar1 = 0;
    }
    if (0x27f < (int)in_CX) {
      in_CX = 0x27f;
    }
    uVar4 = ~*(uint *)((byte)(((byte)in_CX & 0xf) << 1) + 0xb452);
    uVar3 = *(uint *)((byte)(((byte)uVar1 & 0xf) << 1) + 0xb450);
    uVar2 = (in_CX >> 4) * 2 + (uVar1 >> 4) * -2;
    puVar5 = (uint *)((uVar1 >> 4) * 2 + unaff_BP * 0x50);
    FUN_1000_b472();
    if (uVar2 == 0) {
      *puVar5 = uVar3 & uVar4;
      out(0x7c,0);
      return uVar3 & uVar4 & 0xff00;
    }
    *puVar5 = uVar3;
    uVar2 = uVar2 >> 1;
    while( true ) {
      puVar5 = puVar5 + 1;
      uVar2 = uVar2 - 1;
      if (uVar2 == 0) break;
      *puVar5 = 0xffff;
    }
    *puVar5 = uVar4;
    uVar1 = uVar4 & 0xff00;
    out(0x7c,0);
  }
  return uVar1;
}



/* 1000:b472  FUN_1000_b472  28 bytes, 2 callers */

undefined4 __cdecl16near FUN_1000_b472(void)

{
  char cVar1;
  byte in_AH;
  
  out(0x7c,0xc0);
  out(0x7e,-(in_AH & 1));
  out(0x7e,-(in_AH >> 1 & 1));
  out(0x7e,-(in_AH >> 2 & 1));
  cVar1 = -(in_AH >> 3 & 1);
  out(0x7e,cVar1);
  return CONCAT22(0x7e,CONCAT11(in_AH >> 4,cVar1));
}



/* 1000:b490  FUN_1000_b490  94 bytes, 2 callers */

undefined2 __cdecl16near FUN_1000_b490(uint param_1)

{
  char cVar1;
  undefined2 unaff_DS;
  
  out(0xa2,0x70);
  out(0xa0,(char)(param_1 * 0x28));
  out(0xa0,(char)(param_1 * 0x28 >> 8));
  out(0xa0,(char)param_1 * -0x10);
  out(0xa0,(char)(400 - param_1 >> 4) + *(char *)0xbb6);
  out(0xa0,0);
  out(0xa0,0);
  out(0xa0,(char)param_1 << 4);
  cVar1 = (char)(param_1 >> 4) + *(char *)0xbb6;
  out(0xa0,cVar1);
  return CONCAT11((byte)(param_1 >> 0xc),cVar1);
}



/* 1000:b4ee  FUN_1000_b4ee  32 bytes, 11 callers */

void __cdecl16near FUN_1000_b4ee(void)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 *puVar3;
  
  out(0x7c,0x80);
  puVar3 = (undefined2 *)0x0;
  out(0x7e,0);
  out(0x7e,0);
  out(0x7e,0);
  out(0x7e,0);
  for (iVar2 = 16000; iVar2 != 0; iVar2 = iVar2 + -1) {
    puVar1 = puVar3;
    puVar3 = puVar3 + 1;
    *puVar1 = 0;
  }
  out(0x7c,0);
  return;
}



/* 1000:b50e  FUN_1000_b50e  89 bytes, 4 callers */

undefined4 __cdecl16near FUN_1000_b50e(uint param_1,int param_2,byte param_3)

{
  undefined2 unaff_DS;
  
  out(0x7c,0xc0);
  out(0x7e,-(param_3 & 1));
  out(0x7e,-(param_3 >> 1 & 1));
  out(0x7e,-(param_3 >> 2 & 1));
  out(0x7e,-(param_3 >> 3 & 1));
  *(undefined1 *)((param_1 >> 3) + param_2 * 0x50) = *(undefined1 *)((param_1 & 7) + 0xbc2);
  out(0x7c,0);
  return 0x7e0000;
}



/* 1000:b5b0  FUN_1000_b5b0  428 bytes, 1 callers */

undefined2 __cdecl16near FUN_1000_b5b0(undefined2 param_1,int param_2,uint param_3,byte param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  undefined2 unaff_DS;
  
  out(0x7c,0xc0);
  out(0x7e,-(param_4 & 1));
  out(0x7e,-(param_4 >> 1 & 1));
  out(0x7e,-(param_4 >> 2 & 1));
  out(0x7e,-(param_4 >> 3 & 1));
  *(undefined2 *)0xbca = param_1;
  param_2 = param_2 * 0x50;
  *(int *)0xbd0 = param_2;
  *(int *)0xbd2 = param_2;
  param_2 = param_2 + param_3 * -0x50;
  *(int *)0xbce = param_2;
  *(int *)0xbd4 = param_2 + param_3 * 0xa0;
  *(uint *)0xbcc = param_3 >> 1;
  uVar8 = 0;
  while( true ) {
    uVar7 = uVar8;
    uVar4 = *(int *)0xbca - param_3;
    uVar5 = uVar4 >> 4;
    uVar8 = *(uint *)((uVar4 & 0xf) * 2 + 0xdf2);
    uVar4 = uVar4 + param_3 * 2;
    uVar1 = *(uint *)((uVar4 & 0xf) * 2 + 0xe12);
    iVar2 = (uVar4 >> 4) - uVar5;
    if (iVar2 == 0) {
      *(uint *)(*(int *)0xbd0 + uVar5 * 2) = uVar8 & uVar1;
      *(uint *)(*(int *)0xbd2 + uVar5 * 2) = uVar8 & uVar1;
    }
    else {
      puVar9 = (uint *)(*(int *)0xbd0 + uVar5 * 2);
      *puVar9 = uVar8;
      iVar2 = iVar2 + -1;
      for (iVar3 = iVar2; puVar9 = puVar9 + 1, iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar9 = 0xffff;
      }
      *puVar9 = uVar1;
      puVar9 = (uint *)(*(int *)0xbd2 + uVar5 * 2);
      *puVar9 = uVar8;
      for (; puVar9 = puVar9 + 1, iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar9 = 0xffff;
      }
      *puVar9 = uVar1;
    }
    *(int *)0xbd0 = *(int *)0xbd0 + -0x50;
    *(int *)0xbd2 = *(int *)0xbd2 + 0x50;
    if (param_3 < uVar7) break;
    uVar1 = *(uint *)0xbcc;
    uVar8 = uVar7 + 1;
    iVar2 = uVar1 - uVar8;
    *(int *)0xbcc = iVar2;
    if (uVar1 < uVar8) {
      *(int *)0xbcc = iVar2 + param_3;
      uVar5 = *(int *)0xbca - uVar7;
      uVar6 = uVar5 >> 4;
      uVar1 = *(uint *)((uVar5 & 0xf) * 2 + 0xdf2);
      uVar5 = uVar5 + uVar7 * 2;
      uVar4 = *(uint *)((uVar5 & 0xf) * 2 + 0xe12);
      iVar2 = (uVar5 >> 4) - uVar6;
      if (iVar2 == 0) {
        *(uint *)(*(int *)0xbce + uVar6 * 2) = uVar1 & uVar4;
        *(uint *)(*(int *)0xbd4 + uVar6 * 2) = uVar1 & uVar4;
      }
      else {
        puVar9 = (uint *)(*(int *)0xbce + uVar6 * 2);
        *puVar9 = uVar1;
        iVar2 = iVar2 + -1;
        for (iVar3 = iVar2; puVar9 = puVar9 + 1, iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar9 = 0xffff;
        }
        *puVar9 = uVar4;
        puVar9 = (uint *)(*(int *)0xbd4 + uVar6 * 2);
        *puVar9 = uVar1;
        for (; puVar9 = puVar9 + 1, iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar9 = 0xffff;
        }
        *puVar9 = uVar4;
      }
      *(int *)0xbce = *(int *)0xbce + 0x50;
      *(int *)0xbd4 = *(int *)0xbd4 + -0x50;
      param_3 = param_3 - 1;
    }
  }
  out(0x7c,0);
  return 0;
}



/* 1000:b766  FUN_1000_b766  236 bytes, 5 callers */

undefined2 __cdecl16near
FUN_1000_b766(uint param_1,uint param_2,uint param_3,uint param_4,byte param_5)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  undefined2 in_AX;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  undefined2 unaff_DS;
  
  if ((int)param_2 < 400) {
    if (399 < param_2) {
      param_2 = 0;
    }
    if ((int)param_2 <= (int)param_4) {
      if (399 < param_4) {
        param_4 = 399;
      }
      iVar4 = (param_4 - param_2) + 1;
      if ((int)param_1 < 0x280) {
        if (0x27f < param_1) {
          param_1 = 0;
        }
        if ((int)param_1 <= (int)param_3) {
          if (0x27f < param_3) {
            param_3 = 0x27f;
          }
          out(0x7c,0xc0);
          out(0x7e,-(param_5 & 1));
          out(0x7e,-(param_5 >> 1 & 1));
          out(0x7e,-(param_5 >> 2 & 1));
          out(0x7e,-(param_5 >> 3 & 1));
          puVar7 = (uint *)(param_2 * 0x50 + (param_1 >> 4) * 2);
          uVar2 = *(uint *)((param_1 & 0xf) * 2 + 0xdf2);
          uVar3 = *(uint *)((param_3 & 0xf) * 2 + 0xe12);
          iVar5 = (param_3 >> 4) - (param_1 >> 4);
          if (iVar5 == 0) {
            do {
              *puVar7 = uVar2 & uVar3;
              puVar7 = puVar7 + 0x28;
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
            out(0x7c,0);
            return 0;
          }
          iVar5 = iVar5 + -1;
          do {
            *puVar7 = uVar2;
            for (iVar6 = iVar5; puVar1 = puVar7 + 1, iVar6 != 0; iVar6 = iVar6 + -1) {
              *puVar1 = 0xffff;
              puVar7 = puVar1;
            }
            *puVar1 = uVar3;
            puVar7 = puVar7 + (0x28 - iVar5);
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
          out(0x7c,0);
          return 0;
        }
      }
    }
  }
  return in_AX;
}



/* 1000:b854  FUN_1000_b854  223 bytes, 7 callers */

undefined2 __cdecl16near
FUN_1000_b854(uint param_1,uint param_2,uint param_3,uint param_4,byte param_5)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 in_AX;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined2 *puVar7;
  
  if ((int)param_2 < 0) {
    param_2 = 0;
  }
  if ((param_2 < 400) && ((int)param_2 <= (int)param_4)) {
    if (399 < param_4) {
      param_4 = 399;
    }
    iVar4 = (param_4 - param_2) + 1;
    if ((int)param_1 < 0) {
      param_1 = 0;
    }
    if ((param_1 < 0x50) && ((int)param_1 <= (int)param_3)) {
      if (0x4f < param_3) {
        param_3 = 0x4f;
      }
      out(0x7c,0x80);
      out(0x7e,-(param_5 & 1));
      out(0x7e,-(param_5 >> 1 & 1));
      out(0x7e,-(param_5 >> 2 & 1));
      out(0x7e,-(param_5 >> 3 & 1));
      puVar7 = (undefined2 *)(param_2 * 0x50 + param_1);
      uVar5 = (param_3 - param_1) + 1;
      iVar3 = -uVar5;
      if ((uVar5 & 1) == 0) {
        uVar5 = uVar5 >> 1;
        uVar6 = uVar5;
        if (((uint)puVar7 & 1) == 0) {
          do {
            for (; uVar6 != 0; uVar6 = uVar6 - 1) {
              puVar2 = puVar7;
              puVar7 = puVar7 + 1;
              *puVar2 = 0xffff;
            }
            puVar7 = (undefined2 *)((int)puVar7 + iVar3 + 0x50);
            iVar4 = iVar4 + -1;
            uVar6 = uVar5;
          } while (iVar4 != 0);
        }
        else {
          do {
            puVar1 = (undefined2 *)((int)puVar7 + 1);
            *(undefined1 *)puVar7 = 0xff;
            uVar6 = uVar5;
            while (uVar6 = uVar6 - 1, uVar6 != 0) {
              puVar2 = puVar1;
              puVar1 = puVar1 + 1;
              *puVar2 = 0xffff;
            }
            *(undefined1 *)puVar1 = 0xff;
            puVar7 = (undefined2 *)((int)puVar1 + iVar3 + 0x51);
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
      }
      else {
        uVar5 = uVar5 >> 1;
        uVar6 = uVar5;
        if (((uint)puVar7 & 1) == 0) {
          do {
            for (; uVar6 != 0; uVar6 = uVar6 - 1) {
              puVar2 = puVar7;
              puVar7 = puVar7 + 1;
              *puVar2 = 0xffff;
            }
            *(undefined1 *)puVar7 = 0xff;
            puVar7 = (undefined2 *)((int)puVar7 + iVar3 + 0x51);
            iVar4 = iVar4 + -1;
            uVar6 = uVar5;
          } while (iVar4 != 0);
        }
        else {
          do {
            puVar1 = (undefined2 *)((int)puVar7 + 1);
            *(undefined1 *)puVar7 = 0xff;
            for (uVar6 = uVar5; uVar6 != 0; uVar6 = uVar6 - 1) {
              puVar2 = puVar1;
              puVar1 = puVar1 + 1;
              *puVar2 = 0xffff;
            }
            puVar7 = (undefined2 *)((int)puVar1 + iVar3 + 0x50);
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
      }
      out(0x7c,0);
      return 0;
    }
  }
  return in_AX;
}



/* 1000:b940  FUN_1000_b940  91 bytes, 1 callers */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __cdecl16near FUN_1000_b940(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  code *pcVar3;
  undefined2 uVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined2 unaff_DS;
  bool bVar8;
  
  bVar8 = false;
  if (*(int *)0xd9a != 0) {
    return 0;
  }
  pcVar3 = (code *)swi(0x21);
  uVar4 = (*pcVar3)();
  if (bVar8) {
    uVar4 = 1;
  }
  else {
    *(undefined2 *)0xd9a = uVar4;
    puVar6 = (undefined2 *)0x0;
    puVar7 = (undefined2 *)0x0;
    for (iVar5 = 2000; iVar5 != 0; iVar5 = iVar5 + -1) {
      puVar2 = puVar7;
      puVar7 = puVar7 + 1;
      puVar1 = puVar6;
      puVar6 = puVar6 + 1;
      *puVar2 = *puVar1;
    }
    puVar6 = (undefined2 *)0x0;
    for (iVar5 = 2000; iVar5 != 0; iVar5 = iVar5 + -1) {
      puVar2 = puVar7;
      puVar7 = puVar7 + 1;
      puVar1 = puVar6;
      puVar6 = puVar6 + 1;
      *puVar2 = *puVar1;
    }
    *(undefined2 *)0xd9c = _DAT_0000_0710;
    *(undefined2 *)0xd9e = _DAT_0000_0711;
    uVar4 = 0;
  }
  return uVar4;
}



/* 1000:b99c  FUN_1000_b99c  90 bytes, 1 callers */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_1000_b99c(void)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  code *pcVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined2 unaff_DS;
  
  iVar1 = *(int *)0xd9a;
  if (iVar1 != 0) {
    puVar6 = (undefined2 *)0x0;
    puVar7 = (undefined2 *)0x0;
    for (iVar5 = 2000; iVar5 != 0; iVar5 = iVar5 + -1) {
      puVar3 = puVar7;
      puVar7 = puVar7 + 1;
      puVar2 = puVar6;
      puVar6 = puVar6 + 1;
      *puVar3 = *puVar2;
    }
    puVar7 = (undefined2 *)0x0;
    for (iVar5 = 2000; iVar5 != 0; iVar5 = iVar5 + -1) {
      puVar3 = puVar7;
      puVar7 = puVar7 + 1;
      puVar2 = puVar6;
      puVar6 = puVar6 + 1;
      *puVar3 = *puVar2;
    }
    pcVar4 = (code *)swi(0x21);
    (*pcVar4)();
    _DAT_0000_0710 = CONCAT21(*(undefined2 *)0xd9e,(char)*(undefined2 *)0xd9c);
    out(0x62,0x4b);
    out(0x60,0x8f);
  }
  *(undefined2 *)0xd9a = 0;
  return;
}



/* 1000:b9f6  FUN_1000_b9f6  19 bytes, 1 callers */

void __cdecl16near FUN_1000_b9f6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x18);
  (*pcVar1)();
  out(0x6a,0x41);
  out(0x6a,1);
  pcVar1 = (code *)swi(0x18);
  (*pcVar1)();
  return;
}



/* 1000:ba0a  FUN_1000_ba0a  9 bytes, 1 callers */

undefined1 __cdecl16near FUN_1000_ba0a(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x18);
  (*pcVar1)();
  out(0x6a,0);
  return 0;
}



/* 1000:ba14  FUN_1000_ba14  31 bytes, 1 callers */

void FUN_1000_ba14(void)

{
  out(0xa6,0);
  out(0xa4,0);
  out(0x6a,1);
  FUN_1000_b4ee();
  FUN_1000_ba6a(0xda0);
  FUN_1000_b9f6();
  return;
}



/* 1000:ba34  FUN_1000_ba34  53 bytes, 1 callers */

undefined2 __cdecl16near FUN_1000_ba34(void)

{
  undefined1 extraout_AH;
  
  FUN_1000_ba0a();
  out(0x6a,1);
  out(0xa6,0);
  out(0xa4,0);
  FUN_1000_b4ee();
  FUN_1000_ba6a(0xda0);
  out(0x6a,0);
  out(0xae,4);
  out(0xaa,0x15);
  out(0xac,0x26);
  out(0xa8,0x37);
  return CONCAT11(extraout_AH,0x37);
}



/* 1000:ba6a  FUN_1000_ba6a  33 bytes, 3 callers */

undefined2 __cdecl16near FUN_1000_ba6a(undefined1 *param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined2 unaff_DS;
  
  iVar3 = 0x10;
  iVar4 = 0;
  do {
    out(0xa8,(char)iVar4);
    uVar2 = (uint)iVar4 >> 8;
    out(0xac,*param_1);
    puVar1 = param_1 + 2;
    out(0xaa,param_1[1]);
    param_1 = param_1 + 3;
    out(0xae,*puVar1);
    iVar3 = iVar3 + -1;
    iVar4 = iVar4 + 1;
  } while (iVar3 != 0);
  return CONCAT11((char)uVar2,*puVar1);
}



/* 1000:ba8c  FUN_1000_ba8c  27 bytes, 14 callers */

undefined2 __cdecl16near
FUN_1000_ba8c(undefined1 param_1,undefined1 param_2,undefined1 param_3,undefined2 param_4)

{
  out(0xa8,param_1);
  out(0xac,param_2);
  out(0xaa,param_3);
  out(0xae,(char)param_4);
  return param_4;
}



/* 1000:baac  FUN_1000_baac  84 bytes, 1 callers */

undefined2 __cdecl16near FUN_1000_baac(void)

{
  undefined2 uVar1;
  byte bVar2;
  undefined2 unaff_DS;
  
  uVar1 = uRam00000028;
  if ((*(int *)0xdd6 == 0) && (*(int *)0xdd4 == 0)) {
    LOCK();
    uRam00000028 = 0xbb42;
    UNLOCK();
    DAT_1000_bb40 = unaff_DS;
    *(undefined2 *)0xdd4 = uVar1;
    uVar1 = uRam0000002a;
    LOCK();
    uRam0000002a = 0x1000;
    UNLOCK();
    *(undefined2 *)0xdd6 = uVar1;
    DAT_1000_bb66 = uRam00000062;
    DAT_1000_bb64 = uRam00000060;
    LOCK();
    uRam00000060 = 0xbb68;
    UNLOCK();
    LOCK();
    uRam00000062 = 0x1000;
    UNLOCK();
    bVar2 = in(2);
    out(2,bVar2 & 0xfb);
    out(100,bVar2 & 0xfb);
    return 0;
  }
  return 1;
}



/* 1000:bafc  FUN_1000_bafc  60 bytes, 1 callers */

undefined2 __cdecl16near FUN_1000_bafc(void)

{
  byte bVar1;
  undefined2 unaff_DS;
  
  if ((*(int *)0xdd6 == 0) && (*(int *)0xdd4 == 0)) {
    return 1;
  }
  uRam00000028 = *(undefined2 *)0xdd4;
  uRam0000002a = *(undefined2 *)0xdd6;
  uRam00000060 = DAT_1000_bb64;
  uRam00000062 = DAT_1000_bb66;
  bVar1 = in(2);
  out(2,bVar1 | 4);
  return 0;
}



/* 1000:bb38  FUN_1000_bb38  4 bytes, 8 callers */

undefined2 __cdecl16near FUN_1000_bb38(void)

{
  undefined2 unaff_DS;
  
  return *(undefined2 *)0xdd0;
}



/* 1000:bb72  FUN_1000_bb72  93 bytes, 1 callers */

undefined1 __cdecl16near FUN_1000_bb72(void)

{
  undefined1 uVar1;
  undefined2 uVar2;
  int unaff_SI;
  undefined2 unaff_DS;
  
  if (*(int *)0xdd8 != 0) goto LAB_1000_bbc0;
  out(0xa6,1);
  uVar2 = FUN_1000_bbd0();
  if (unaff_SI != 0) {
    *(undefined2 *)0xdd8 = uVar2;
    uVar2 = FUN_1000_bbd0();
    if (unaff_SI != 0) {
      *(undefined2 *)0xdda = uVar2;
      uVar2 = FUN_1000_bbd0();
      if (unaff_SI != 0) {
        *(undefined2 *)0xddc = uVar2;
        if ((DAT_0000_054c & 4) != 0) {
          uVar2 = FUN_1000_bbd0();
          if (unaff_SI == 0) goto LAB_1000_bbc7;
          *(undefined2 *)0xdde = uVar2;
        }
LAB_1000_bbc0:
        uVar1 = 0;
        goto LAB_1000_bbc2;
      }
    }
  }
LAB_1000_bbc7:
  uVar1 = 1;
  *(undefined1 *)0xde0 = 1;
LAB_1000_bbc2:
  out(0xa6,uVar1);
  return uVar1;
}



/* 1000:bbd0  FUN_1000_bbd0  33 bytes, 1 callers */

void __cdecl16near FUN_1000_bbd0(undefined2 param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  code *pcVar3;
  undefined2 uVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined1 in_CF;
  
  pcVar3 = (code *)swi(0x21);
  uVar4 = (*pcVar3)();
  if ((bool)in_CF) {
    return;
  }
  puVar6 = (undefined2 *)0x0;
  puVar7 = (undefined2 *)0x0;
  for (iVar5 = 16000; iVar5 != 0; iVar5 = iVar5 + -1) {
    puVar2 = puVar7;
    puVar7 = puVar7 + 1;
    puVar1 = puVar6;
    puVar6 = puVar6 + 1;
    *puVar2 = *puVar1;
  }
  return;
}



/* 1000:bbf2  FUN_1000_bbf2  77 bytes, 1 callers */

undefined2 __cdecl16near FUN_1000_bbf2(void)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  
  uVar1 = 0;
  if (*(int *)0xdd8 != 0) {
    out(0xa6,1);
    FUN_1000_bc40();
    *(undefined2 *)0xdd8 = 0;
    FUN_1000_bc40();
    FUN_1000_bc40();
    if (*(int *)0xdde != 0) {
      FUN_1000_bc40();
      *(undefined2 *)0xdde = 0;
    }
    out(0xa6,0);
    uVar1 = 1;
  }
  return uVar1;
}



/* 1000:bc40  FUN_1000_bc40  24 bytes, 1 callers */

void __cdecl16near FUN_1000_bc40(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  code *pcVar3;
  undefined2 in_AX;
  int iVar4;
  undefined2 in_BX;
  undefined2 *puVar5;
  undefined2 *puVar6;
  
  puVar5 = (undefined2 *)0x0;
  puVar6 = (undefined2 *)0x0;
  for (iVar4 = 16000; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = puVar6;
    puVar6 = puVar6 + 1;
    puVar1 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar2 = *puVar1;
  }
  pcVar3 = (code *)swi(0x21);
  (*pcVar3)();
  return;
}



/* 1000:bc6f  FUN_1000_bc6f  208 bytes, 1 callers */

undefined2 __cdecl16near FUN_1000_bc6f(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined2 unaff_DS;
  bool bVar7;
  char acStack_22 [4];
  int iStack_1e;
  uint uStack_1c;
  
  bVar7 = false;
  if (*(int *)0xde2 == 0) {
    iVar2 = FUN_1000_bd5d();
    bVar7 = iVar2 == 0;
    if (iVar2 == 1) {
      return 1;
    }
  }
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  if (bVar7) {
    return 0xffff;
  }
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  iVar4 = 0xe;
  iVar2 = 0;
  do {
    iVar6 = iVar2;
    if (*(char *)(iVar6 + 0xde4) != acStack_22[iVar6]) goto LAB_1000_bc5f;
    iVar4 = iVar4 + -1;
    iVar2 = iVar6 + 1;
  } while (iVar4 != 0);
  if (acStack_22[iVar6 + 2] == '\0') {
    uVar3 = (uint)(byte)acStack_22[iVar6 + 1];
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    out(0x68,0xb);
    if (uVar3 < 0x80) {
      iVar2 = 0x5600;
      uVar5 = 0;
      do {
        acStack_22[2] = -0x1b;
        acStack_22[3] = -0x44;
        iStack_1e = iVar2;
        uStack_1c = uVar5;
        FUN_1000_bd2a();
        uVar5 = uStack_1c + 1;
        iVar2 = iStack_1e + 1;
      } while (uVar5 <= uVar3);
    }
    else {
      iStack_1e = 0x5600;
      uStack_1c = 0x80;
      do {
        acStack_22[2] = -5;
        acStack_22[3] = -0x44;
        FUN_1000_bd2a();
        iStack_1e = iStack_1e + 1;
        uStack_1c = uStack_1c + -1;
      } while (uStack_1c != 0);
      iVar2 = 0x5700;
      uVar5 = 0x80;
      do {
        acStack_22[2] = '\v';
        acStack_22[3] = -0x43;
        iStack_1e = iVar2;
        uStack_1c = uVar5;
        FUN_1000_bd2a();
        uVar5 = uStack_1c + 1;
        iVar2 = iStack_1e + 1;
      } while (uVar5 <= uVar3);
    }
    out(0x68,10);
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    out(0x68,1);
    return 0;
  }
LAB_1000_bc5f:
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return 0xfffe;
}



/* 1000:bd2a  FUN_1000_bd2a  51 bytes, 1 callers */

undefined4 __cdecl16near FUN_1000_bd2a(void)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  undefined2 in_DX;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *unaff_BP;
  undefined2 unaff_DS;
  
  out(0xa1,(char)in_DX);
  out(0xa3,(char)((uint)in_DX >> 8));
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  iVar4 = 0;
  iVar3 = 0x10;
  do {
    out(0xa5,(char)iVar4 + ' ');
    puVar5 = unaff_BP + 1;
    out(0xa9,*unaff_BP);
    out(0xa5,(char)iVar4);
    uVar2 = (uint)iVar4 >> 8;
    unaff_BP = unaff_BP + 2;
    out(0xa9,*puVar5);
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return CONCAT22(iVar4,CONCAT11((char)uVar2,*puVar5));
}



/* 1000:bd5d  FUN_1000_bd5d  64 bytes, 1 callers */

undefined2 __cdecl16near FUN_1000_bd5d(void)

{
  code *pcVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 unaff_DS;
  undefined1 in_CF;
  
  pcVar1 = (code *)swi(0x21);
  uVar2 = (*pcVar1)();
  if ((bool)in_CF) {
    return 1;
  }
  *(undefined2 *)0xde2 = uVar2;
  out(0x68,0xb);
  iVar3 = 0x80;
  do {
    FUN_1000_bd9d();
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  iVar3 = 0x80;
  do {
    FUN_1000_bd9d();
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  out(0x68,10);
  return 0xffff;
}



/* 1000:bd9d  FUN_1000_bd9d  34 bytes, 1 callers */

void __cdecl16near FUN_1000_bd9d(void)

{
  undefined2 *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  char cVar5;
  undefined2 in_DX;
  undefined2 *unaff_DI;
  undefined2 unaff_ES;
  
  out(0xa1,(char)in_DX);
  out(0xa3,(char)((uint)in_DX >> 8));
  cVar5 = '\0';
  iVar4 = 0x10;
  do {
    out(0xa5,cVar5 + ' ');
    uVar2 = in(0xa9);
    out(0xa5,cVar5);
    uVar3 = in(0xa9);
    puVar1 = unaff_DI;
    unaff_DI = unaff_DI + 1;
    *puVar1 = CONCAT11(uVar2,uVar3);
    cVar5 = cVar5 + '\x01';
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return;
}



/* 1000:bdbf  FUN_1000_bdbf  79 bytes, 1 callers */

void __cdecl16near FUN_1000_bdbf(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined2 unaff_DS;
  
  if (*(int *)0xde2 == 0) {
    return;
  }
  out(0x68,0xb);
  iVar2 = 0x80;
  iVar3 = 0x5600;
  do {
    FUN_1000_be0e(iVar3);
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  iVar2 = 0x80;
  iVar3 = 0x5700;
  do {
    FUN_1000_be0e(iVar3);
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  out(0x68,10);
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  out(0x68,0);
  *(undefined2 *)0xde2 = 0;
  return;
}



/* 1000:be0e  FUN_1000_be0e  40 bytes, 1 callers */

undefined4 __cdecl16near FUN_1000_be0e(void)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 in_DX;
  int iVar4;
  undefined2 *unaff_SI;
  undefined2 unaff_DS;
  
  out(0xa1,(char)in_DX);
  out(0xa3,(char)((uint)in_DX >> 8));
  iVar4 = 0;
  iVar3 = 0x10;
  do {
    puVar1 = unaff_SI;
    unaff_SI = unaff_SI + 1;
    uVar2 = *puVar1;
    out(0xa5,(char)iVar4 + ' ');
    out(0xa9,(char)((uint)uVar2 >> 8));
    out(0xa5,(char)iVar4);
    out(0xa9,(char)uVar2);
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return CONCAT22(iVar4,uVar2);
}



/* 1000:be36  FUN_1000_be36  99 bytes, 1 callers */

void __cdecl16near FUN_1000_be36(int param_1,int param_2,undefined2 param_3,uint param_4)

{
  undefined2 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined2 *puVar4;
  int iVar5;
  char cVar6;
  undefined2 *puVar7;
  
  iVar5 = 4;
  puVar4 = (undefined2 *)((param_1 * 0x50 + param_2 + 8) * 2);
  do {
    puVar7 = puVar4;
    uVar2 = (ulong)param_4;
    uVar3 = uVar2 / 10;
    param_4 = (uint)uVar3;
    cVar6 = (char)(uVar2 % 10);
    *puVar7 = CONCAT11(cVar6 + '0',0x56);
    puVar7[1] = CONCAT11(cVar6 + -0x50,0x56);
    iVar5 = iVar5 + -1;
    puVar4 = puVar7 + -2;
  } while (iVar5 != 0);
  cVar6 = (char)uVar3;
  puVar7[-2] = CONCAT11(cVar6 + '0',0x56);
  puVar7[-1] = CONCAT11(cVar6 + -0x50,0x56);
  puVar7 = puVar7 + 0xffe;
  for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
    puVar1 = puVar7;
    puVar7 = puVar7 + 1;
    *puVar1 = param_3;
  }
  return;
}



/* 1000:be99  FUN_1000_be99  81 bytes, 1 callers */

void __cdecl16near FUN_1000_be99(int param_1,int param_2,undefined2 param_3,uint param_4)

{
  undefined2 *puVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  undefined2 *puVar5;
  
  puVar5 = (undefined2 *)((param_1 * 0x50 + param_2) * 2);
  cVar2 = (char)(param_4 / 10);
  cVar3 = (char)(param_4 % 10);
  *puVar5 = CONCAT11(cVar2 + '0',0x56);
  puVar5[1] = CONCAT11(cVar2 + -0x50,0x56);
  puVar5[2] = CONCAT11(cVar3 + '0',0x56);
  puVar5[3] = CONCAT11(cVar3 + -0x50,0x56);
  puVar5 = puVar5 + 0x1000;
  for (iVar4 = 4; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar1 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar1 = param_3;
  }
  return;
}



/* 1000:beea  FUN_1000_beea  91 bytes, 19 callers */

void __cdecl16near FUN_1000_beea(int param_1,int param_2,undefined2 param_3,int param_4)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  byte bVar3;
  undefined2 uVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined2 unaff_DS;
  
  puVar6 = (undefined2 *)((param_1 * 0x50 + param_2) * 2);
  puVar7 = puVar6;
  for (iVar5 = 0; bVar3 = *(byte *)(param_4 + iVar5), bVar3 != 0; iVar5 = iVar5 + 1) {
    if (bVar3 < 0x80) {
      uVar4 = CONCAT11(bVar3,0x56);
      *puVar7 = uVar4;
    }
    else {
      uVar4 = CONCAT11(bVar3 + 0x80,0x57);
      *puVar7 = uVar4;
    }
    puVar2 = puVar7 + 1;
    puVar7 = puVar7 + 2;
    *puVar2 = CONCAT11((char)((uint)uVar4 >> 8) + -0x80,(char)uVar4);
  }
  puVar6 = puVar6 + 0x1000;
  for (iVar5 = iVar5 << 1; iVar5 != 0; iVar5 = iVar5 + -1) {
    puVar1 = puVar6;
    puVar6 = puVar6 + 1;
    *puVar1 = param_3;
  }
  return;
}



/* 1000:bf46  FUN_1000_bf46  70 bytes, 4 callers */

void __cdecl16near FUN_1000_bf46(int param_1,int param_2,undefined2 param_3,byte param_4)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  
  puVar2 = (undefined2 *)((param_1 * 0x50 + param_2) * 2);
  if (param_4 < 0x80) {
    uVar1 = CONCAT11(param_4,0x56);
    *puVar2 = uVar1;
  }
  else {
    uVar1 = CONCAT11(param_4 + 0x80,0x57);
    *puVar2 = uVar1;
  }
  puVar2[1] = CONCAT11((char)((uint)uVar1 >> 8) + -0x80,(char)uVar1);
  puVar2[0x1000] = param_3;
  puVar2[0x1001] = param_3;
  return;
}



/* 1000:bf8e  FUN_1000_bf8e  9 bytes, 11 callers */

undefined1 __cdecl16near FUN_1000_bf8e(void)

{
  code *pcVar1;
  undefined1 in_BH;
  
  pcVar1 = (code *)swi(0x18);
  (*pcVar1)();
  return in_BH;
}



/* 1000:bf98  FUN_1000_bf98  9 bytes, 11 callers */

undefined1 __cdecl16near FUN_1000_bf98(void)

{
  code *pcVar1;
  undefined1 extraout_AH;
  
  pcVar1 = (code *)swi(0x18);
  (*pcVar1)();
  return extraout_AH;
}



/* 1000:bfa2  FUN_1000_bfa2  38 bytes, 5 callers */

void __cdecl16near FUN_1000_bfa2(char *param_1)

{
  char *pcVar1;
  code *pcVar2;
  int iVar3;
  undefined2 unaff_DS;
  
  iVar3 = -1;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar1 = param_1;
    param_1 = param_1 + 1;
  } while (*pcVar1 != '\0');
  param_1[-1] = '$';
  pcVar2 = (code *)swi(0xdc);
  (*pcVar2)();
  param_1[-1] = '\0';
  return;
}



/* 1000:bfd6  FUN_1000_bfd6  435 bytes, 12 callers */

uint __cdecl16near FUN_1000_bfd6(uint param_1,undefined2 param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  undefined2 unaff_DS;
  
  uVar2 = *(uint *)(param_3 * 2 + 0x1512);
  iVar4 = (param_1 & 7) * 2;
  cVar3 = (char)uVar2;
  cVar1 = (char)((uVar2 & 0xff) >> 1);
  if ((param_1 >> 3 & 1) == 0) {
    if ((uVar2 & 1) == 0) {
      DAT_1000_c19e = *(undefined2 *)(iVar4 + 0xe32);
      DAT_1000_c1a5 = (undefined1)*(undefined2 *)(iVar4 + 0xe42);
      DAT_1000_c193 = uVar2 << 3;
      DAT_1000_c1b3 = 'P' - cVar3;
      uRam0001c18d = 0xc192;
      DAT_1000_c1b5 = cVar1;
    }
    else {
      DAT_1000_c1ca = *(undefined2 *)(iVar4 + 0xe32);
      DAT_1000_c1d1 = (undefined1)*(undefined2 *)(iVar4 + 0xe42);
      DAT_1000_c1bb = uVar2 << 3;
      DAT_1000_c1e5 = 'P' - cVar3;
      uRam0001c18d = 0xc1ba;
      DAT_1000_c1e7 = cVar1;
    }
  }
  else if ((uVar2 & 1) == 0) {
    DAT_1000_c206 = *(undefined2 *)(iVar4 + 0xe32);
    DAT_1000_c20d = (undefined1)*(undefined2 *)(iVar4 + 0xe42);
    DAT_1000_c222 = cVar1 + -1;
    DAT_1000_c1ed = uVar2 << 3;
    DAT_1000_c220 = 'N' - cVar3;
    uRam0001c18d = 0xc1ec;
  }
  else {
    DAT_1000_c242 = *(undefined2 *)(iVar4 + 0xe32);
    DAT_1000_c249 = (undefined1)*(undefined2 *)(iVar4 + 0xe42);
    DAT_1000_c229 = uVar2 << 3;
    DAT_1000_c257 = 'O' - cVar3;
    uRam0001c18d = 0xc228;
    DAT_1000_c259 = cVar1;
  }
  out(0x7c,0xc0);
  out(0x7e,0);
  out(0x7e,0);
  out(0x7e,0);
  out(0x7e,0);
  thunk_FUN_1000_1122();
  out(0x7c,0xce);
  out(0x7e,0xff);
  out(0x7e,0xff);
  out(0x7e,0xff);
  out(0x7e,0xff);
  thunk_FUN_1000_1122();
  out(0x7c,0xcd);
  thunk_FUN_1000_1122();
  out(0x7c,0xcb);
  thunk_FUN_1000_1122();
  out(0x7c,199);
  uVar2 = thunk_FUN_1000_1122();
  out(0x7c,0);
  return uVar2 & 0xff00;
}



/* 1000:c18c  thunk_FUN_1000_1122  5 bytes, 1 callers */

void thunk_FUN_1000_1122(void)

{
  FUN_1000_1122();
  return;
}



/* 1000:c25e  FUN_1000_c25e  180 bytes, 4 callers */

uint __cdecl16near FUN_1000_c25e(uint param_1,int param_2,int param_3)

{
  uint uVar1;
  undefined2 unaff_DS;
  
  iRam0001c313 = param_2 * 0x50 + (param_1 >> 3);
  cRam0001c319 = 'P' - (char)*(undefined2 *)(param_3 * 2 + 0x1512);
  out(0x7c,0xc0);
  out(0x7e,0);
  out(0x7e,0);
  out(0x7e,0);
  out(0x7e,0);
  FUN_1000_c312();
  out(0x7c,0xce);
  out(0x7e,0xff);
  out(0x7e,0xff);
  out(0x7e,0xff);
  out(0x7e,0xff);
  FUN_1000_c312();
  out(0x7c,0xcd);
  FUN_1000_c312();
  out(0x7c,0xcb);
  FUN_1000_c312();
  out(0x7c,199);
  uVar1 = FUN_1000_c312();
  out(0x7c,0);
  return uVar1 & 0xff00;
}



/* 1000:c312  FUN_1000_c312  15 bytes, 1 callers */

void __cdecl16near FUN_1000_c312(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int in_CX;
  char in_DH;
  int in_BX;
  undefined1 *unaff_SI;
  undefined1 *puVar3;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  
  puVar3 = (undefined1 *)0x1111;
  do {
    for (; in_CX != 0; in_CX = in_CX + -1) {
      puVar2 = puVar3;
      puVar3 = puVar3 + 1;
      puVar1 = unaff_SI;
      unaff_SI = unaff_SI + 1;
      *puVar2 = *puVar1;
    }
    puVar3 = puVar3 + 0x50;
    in_DH = in_DH + -1;
    in_CX = in_BX;
  } while (in_DH != '\0');
  return;
}



/* 1000:c322  FUN_1000_c322  596 bytes, 7 callers */

uint __cdecl16near FUN_1000_c322(uint param_1,int param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined2 unaff_DS;
  
  uVar8 = param_2 * 0x50 + (param_1 >> 3);
  uVar3 = *(uint *)(param_3 * 2 + 0x1512);
  iVar7 = (param_1 & 7) * 2;
  cVar4 = (char)uVar3;
  cVar2 = (char)((uVar3 & 0xff) >> 1);
  iRam0001c57b = 0;
                    /* WARNING: Read-only address (ram,0x0001c52f) is written */
                    /* WARNING: Read-only address (ram,0x0001c548) is written */
                    /* WARNING: Read-only address (ram,0x0001c556) is written */
                    /* WARNING: Read-only address (ram,0x0001c564) is written */
  iRam0001c564 = 0;
  if ((uVar8 & 0x8000) == 0) {
    if (399 < param_2) {
      iRam0001c52f = 0;
      iRam0001c548 = 0;
      iRam0001c556 = 0;
      iRam0001c564 = 0;
      iRam0001c57b = 0;
      return param_3 << 2;
    }
    param_2 = uVar3 * 8 + param_2;
    iVar5 = param_2 + -400;
    if (iVar5 == 0 || param_2 < 400) {
      iVar5 = 0;
    }
    else {
      iRam0001c564 = 0;
      iVar6 = iVar5;
      do {
        iRam0001c564 = iRam0001c564 + uVar3;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  else {
    iVar5 = uVar3 * 8 + param_2;
    if (iVar5 == 0 || SCARRY2(uVar3 * 8,param_2) != iVar5 < 0) {
      iRam0001c52f = 0;
      iRam0001c548 = 0;
      iRam0001c556 = 0;
      iRam0001c564 = 0;
      iRam0001c57b = 0;
      return param_3 << 2;
    }
    iVar5 = 0;
    iRam0001c57b = 0;
    uVar9 = uVar8;
    do {
      iVar5 = iVar5 + 1;
      iRam0001c57b = iRam0001c57b + uVar3;
      uVar8 = uVar9 + 0x50;
      bVar1 = (int)uVar9 < -0x50;
      uVar9 = uVar8;
    } while (bVar1);
  }
  if ((uVar8 & 1) == 0) {
    if ((uVar3 & 1) == 0) {
      DAT_1000_c590 = *(undefined2 *)(iVar7 + 0xe52);
      DAT_1000_c597 = (undefined1)*(undefined2 *)(iVar7 + 0xe62);
      DAT_1000_c585 = uVar3 * 8 - iVar5;
      DAT_1000_c5a5 = 'P' - cVar4;
      uRam0001c580 = 0xc584;
      DAT_1000_c5a7 = cVar2;
    }
    else {
      DAT_1000_c5bc = *(undefined2 *)(iVar7 + 0xe52);
      DAT_1000_c5c3 = (undefined1)*(undefined2 *)(iVar7 + 0xe62);
      DAT_1000_c5ad = uVar3 * 8 - iVar5;
      DAT_1000_c5d7 = 'P' - cVar4;
      uRam0001c580 = 0xc5ac;
      DAT_1000_c5d9 = cVar2;
    }
  }
  else if ((uVar3 & 1) == 0) {
    DAT_1000_c5f8 = *(undefined2 *)(iVar7 + 0xe52);
    DAT_1000_c5ff = (undefined1)*(undefined2 *)(iVar7 + 0xe62);
    DAT_1000_c614 = cVar2 + -1;
    DAT_1000_c5df = uVar3 * 8 - iVar5;
    DAT_1000_c612 = 'N' - cVar4;
    uRam0001c580 = 0xc5de;
  }
  else {
    DAT_1000_c634 = *(undefined2 *)(iVar7 + 0xe52);
    DAT_1000_c63b = (undefined1)*(undefined2 *)(iVar7 + 0xe62);
    DAT_1000_c61b = uVar3 * 8 - iVar5;
    DAT_1000_c649 = 'O' - cVar4;
    uRam0001c580 = 0xc61a;
    DAT_1000_c64b = cVar2;
  }
  out(0x7c,0xc0);
  out(0x7e,0);
  out(0x7e,0);
  out(0x7e,0);
  out(0x7e,0);
  iRam0001c52f = iRam0001c564;
  iRam0001c548 = iRam0001c564;
  iRam0001c556 = iRam0001c564;
  FUN_1000_c57a();
  out(0x7c,0xce);
  out(0x7e,0xff);
  out(0x7e,0xff);
  out(0x7e,0xff);
  out(0x7e,0xff);
  FUN_1000_c57a();
  out(0x7c,0xcd);
  FUN_1000_c57a();
  out(0x7c,0xcb);
  FUN_1000_c57a();
  out(0x7c,199);
  uVar3 = FUN_1000_c57a();
  out(0x7c,0);
                    /* WARNING: Read-only address (ram,0x0001c52f) is written */
                    /* WARNING: Read-only address (ram,0x0001c548) is written */
                    /* WARNING: Read-only address (ram,0x0001c556) is written */
                    /* WARNING: Read-only address (ram,0x0001c564) is written */
  return uVar3 & 0xff00;
}



/* 1000:c57a  FUN_1000_c57a  10 bytes, 1 callers */

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



/* 1000:c650  FUN_1000_c650  250 bytes, 1 callers */

uint __cdecl16near FUN_1000_c650(uint param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined2 unaff_DS;
  
  uRam0001c74d = param_2 * 0x50 + (param_1 >> 3);
  iVar1 = *(int *)(param_3 * 2 + 0x1512);
  uRam0001c755 = (undefined1)(0x50U - iVar1);
                    /* WARNING: Read-only address (ram,0x0001c755) is written */
  if ((param_2 & 0x8000) == 0) {
    iRam0001c75e = 0;
    if (399 < (int)param_2) {
      uRam0001c74d = 0x1111;
      iRam0001c75e = 0x1111;
      return 0;
    }
    if (399 < (int)(param_2 + iVar1)) {
      iVar3 = 400 - (param_2 + iVar1);
      iRam0001c75e = 0;
      do {
        iRam0001c75e = iRam0001c75e + iVar1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  else {
    iVar3 = iVar1 * 8 + param_2;
    if (iVar3 == 0 || SCARRY2(iVar1 * 8,param_2) != iVar3 < 0) {
      uRam0001c74d = 0x1111;
      iRam0001c75e = 0x1111;
      return 0x50U - iVar1;
    }
    iVar1 = -param_2;
    do {
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    iRam0001c75e = 0;
    uRam0001c74d = param_1 >> 3;
  }
                    /* WARNING: Read-only address (ram,0x0001c75e) is written */
                    /* WARNING: Read-only address (ram,0x0001c74d) is written */
  out(0x7c,0xc0);
  out(0x7e,0);
  out(0x7e,0);
  out(0x7e,0);
  out(0x7e,0);
  FUN_1000_c74c();
  out(0x7c,0xce);
  out(0x7e,0xff);
  out(0x7e,0xff);
  out(0x7e,0xff);
  out(0x7e,0xff);
  FUN_1000_c74c();
  out(0x7c,0xcd);
  FUN_1000_c74c();
  out(0x7c,0xcb);
  FUN_1000_c74c();
  out(0x7c,199);
  uVar2 = FUN_1000_c74c();
  out(0x7c,0);
  return uVar2 & 0xff00;
}



/* 1000:c74c  FUN_1000_c74c  21 bytes, 1 callers */

void __cdecl16near FUN_1000_c74c(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int in_CX;
  char in_DH;
  int in_BX;
  int unaff_BP;
  int unaff_SI;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  
  puVar4 = (undefined1 *)0x1111;
  puVar3 = (undefined1 *)(unaff_SI + unaff_BP);
  do {
    for (; in_CX != 0; in_CX = in_CX + -1) {
      puVar2 = puVar4;
      puVar4 = puVar4 + 1;
      puVar1 = puVar3;
      puVar3 = puVar3 + 1;
      *puVar2 = *puVar1;
    }
    puVar4 = puVar4 + 0x50;
    in_DH = in_DH + -1;
    in_CX = in_BX;
  } while (in_DH != '\0');
  return;
}



/* 1000:c762  FUN_1000_c762  37 bytes, 7 callers */

void __cdecl16near FUN_1000_c762(void)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 *puVar3;
  
  puVar3 = (undefined2 *)0x0;
  for (iVar2 = 0x800; iVar2 != 0; iVar2 = iVar2 + -1) {
    puVar1 = puVar3;
    puVar3 = puVar3 + 1;
    *puVar1 = 0;
  }
  puVar3 = (undefined2 *)0x0;
  for (iVar2 = 0x800; iVar2 != 0; iVar2 = iVar2 + -1) {
    puVar1 = puVar3;
    puVar3 = puVar3 + 1;
    *puVar1 = 0x100;
  }
  return;
}



/* 1000:c788  FUN_1000_c788  343 bytes, 1 callers */

void __cdecl16near FUN_1000_c788(int param_1,int param_2,int param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  byte bVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  undefined2 uVar12;
  undefined2 unaff_DS;
  int local_20;
  int local_1c;
  int local_1a;
  int local_18;
  int local_12;
  int local_10;
  int local_e;
  int local_6;
  
  iVar5 = *(int *)(param_4 * 2 + 0x1512);
  local_20 = iVar5 * 8;
  iVar7 = local_20 * iVar5;
  if (0 < local_20) {
    local_18 = param_2;
    local_1a = param_2 + param_3 + -1;
    local_1c = 0;
    do {
      local_e = 0;
      if (0 < iVar5) {
        local_10 = param_1 + param_3 + -1;
        local_12 = param_1;
        do {
          uVar6 = *(undefined4 *)(param_4 * 4 + 0x1940);
          uVar12 = (undefined2)((ulong)uVar6 >> 0x10);
          iVar10 = (int)uVar6 + local_1c + local_e;
          bVar1 = *(byte *)(iVar10 + iVar7);
          bVar2 = *(byte *)(iVar10 + iVar7 * 2);
          bVar3 = *(byte *)(iVar10 + iVar7 * 3);
          bVar4 = *(byte *)(iVar7 * 4 + iVar10);
          local_6 = local_10;
          iVar10 = 7;
          iVar11 = local_12;
          do {
            bVar8 = (byte)iVar10;
            cVar9 = (((bVar4 >> (bVar8 & 0x1f) & 1) * '\x02' + (bVar3 >> (bVar8 & 0x1f) & 1)) *
                     '\x02' + (bVar2 >> (bVar8 & 0x1f) & 1)) * '\x02' +
                    (bVar1 >> (bVar8 & 0x1f) & 1);
            if (cVar9 != '\0') {
              FUN_1000_b766(iVar11,local_18,local_6,local_1a,cVar9);
            }
            iVar11 = iVar11 + param_3;
            local_6 = local_6 + param_3;
            iVar10 = iVar10 + -1;
          } while (-1 < iVar10);
          local_10 = local_10 + param_3 * 8;
          local_12 = local_12 + param_3 * 8;
          local_e = local_e + 1;
        } while (local_e < iVar5);
      }
      local_18 = local_18 + param_3;
      local_1a = local_1a + param_3;
      local_1c = local_1c + iVar5;
      local_20 = local_20 + -1;
    } while (local_20 != 0);
  }
  return;
}



/* 1000:c8e0  FUN_1000_c8e0  774 bytes, 1 callers */

int __cdecl16near FUN_1000_c8e0(undefined2 param_1,int param_2)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  undefined2 unaff_DS;
  bool bVar9;
  undefined2 local_830 [1027];
  undefined2 local_2a;
  undefined1 local_28 [6];
  uint local_22;
  uint local_20;
  uint local_1e;
  undefined2 local_1c;
  uint local_1a;
  uint local_18;
  uint local_16;
  uint local_14;
  byte *local_12;
  uint local_10;
  byte local_e;
  char local_d;
  undefined2 local_c;
  byte *local_a;
  byte *local_8;
  byte *local_6;
  undefined2 local_4;
  
  iVar4 = FUN_1000_e1ee(param_1,local_830);
  if (iVar4 != -1) {
    FUN_1000_e266(local_28,6,local_830);
    iVar4 = FUN_1000_ede8(local_28,0xe72,4);
    if (iVar4 == 0) {
      local_e = FUN_1000_e228(local_830);
      FUN_1000_e228(local_830);
      FUN_1000_e228(local_830);
      uVar5 = FUN_1000_e2b8(local_830);
      local_1a = FUN_1000_e2b8(local_830);
      local_20 = FUN_1000_e2b8(local_830);
      local_18 = FUN_1000_e2b8(local_830);
      FUN_1000_e1ae(local_830,0x10);
      if ((local_1a == uVar5) && ((uVar5 & 7) == 0)) {
        local_a = (byte *)(1 << ((local_e & 0x7f) + 1 & 0x1f));
        local_8 = (byte *)((int)local_a >> 0xf);
        if ((local_e & 0x80) != 0) {
          local_4 = (byte *)0x0;
          local_6 = (byte *)0x0;
          uVar6 = uVar5;
          if (((int)local_a < 0) || (local_a != (byte *)0x0)) {
            do {
              local_14 = uVar6;
              cVar1 = FUN_1000_e228(local_830);
              local_c._1_1_ = cVar1 >> 4;
              cVar1 = FUN_1000_e228(local_830);
              local_c = (byte *)CONCAT11(local_c._1_1_,cVar1 >> 4);
              local_d = FUN_1000_e228(local_830);
              local_d = local_d >> 4;
              if (param_2 == 1) {
                out(0xa8,local_6._0_1_);
                out(0xaa,local_d);
                out(0xac,(undefined1)local_c);
                out(0xae,local_c._1_1_);
              }
              bVar9 = (byte *)0xfffe < local_6;
              local_6 = local_6 + 1;
              local_4 = local_4 + bVar9;
              uVar6 = local_14;
            } while ((local_4 < local_8) || ((local_4 <= local_8 && (local_6 < local_a))));
          }
        }
        uVar6 = (uint)local_e;
        local_22 = (uVar6 + 1) * (uVar5 >> 3) * local_1a;
        local_12 = (byte *)thunk_FUN_1000_f457(local_22);
        if (local_12 != (byte *)0x0) {
          local_1e = local_20;
          uVar7 = local_22;
          pbVar8 = local_12;
          local_14 = uVar5;
          if (local_20 <= local_18) {
            do {
              for (; uVar7 != 0; uVar7 = uVar7 - 1) {
                *pbVar8 = 0;
                pbVar8 = pbVar8 + 1;
              }
              local_c = local_12;
              uVar5 = local_22 / (uVar6 + 1);
              local_8 = local_12 + uVar5;
              local_6 = local_8 + uVar5;
              local_a = local_6 + uVar5;
              local_2a = 0;
              if (local_1a != 0) {
                local_16 = local_1a;
                do {
                  local_1c = 0;
                  if ((local_14 & 0xfff8) != 0) {
                    local_10 = local_14 >> 3;
                    pbVar8 = local_c;
                    do {
                      uVar5 = 0x80;
                      local_c = pbVar8;
                      do {
                        bVar2 = FUN_1000_e228(local_830);
                        local_4 = (byte *)CONCAT11(bVar2,(undefined1)local_4);
                        bVar3 = (byte)uVar5;
                        if (((bVar2 & 0x80) != 0) && (2 < local_e)) {
                          *local_a = *local_a | bVar3;
                        }
                        if ((bVar2 & 0x40) != 0) {
                          *local_6 = *local_6 | bVar3;
                        }
                        if ((bVar2 & 0x20) != 0) {
                          *local_8 = *local_8 | bVar3;
                        }
                        if ((bVar2 & 0x10) != 0) {
                          *pbVar8 = *pbVar8 | bVar3;
                        }
                        bVar3 = (byte)(uVar5 >> 1);
                        if (((bVar2 & 8) != 0) && (2 < local_e)) {
                          *local_a = *local_a | bVar3;
                        }
                        if ((bVar2 & 4) != 0) {
                          *local_6 = *local_6 | bVar3;
                        }
                        if ((bVar2 & 2) != 0) {
                          *local_8 = *local_8 | bVar3;
                        }
                        if ((bVar2 & 1) != 0) {
                          *pbVar8 = *pbVar8 | bVar3;
                        }
                        uVar5 = uVar5 >> 2;
                      } while (uVar5 != 0);
                      pbVar8 = pbVar8 + 1;
                      local_8 = local_8 + 1;
                      local_6 = local_6 + 1;
                      local_a = local_a + 1;
                      local_10 = local_10 - 1;
                    } while (local_10 != 0);
                    local_10 = 0;
                    local_c = pbVar8;
                  }
                  local_16 = local_16 - 1;
                } while (local_16 != 0);
              }
              iVar4 = FUN_1000_cbe6(local_14 >> 3,local_12);
              if (iVar4 == -1) {
                thunk_FUN_1000_f436(local_12);
                goto LAB_1000_cbd3;
              }
              local_1e = local_1e + 1;
              uVar7 = local_22;
              pbVar8 = local_12;
            } while (local_1e <= local_18);
          }
          thunk_FUN_1000_f436(local_12);
          FUN_1000_e8d2(local_830[0]);
          return (local_18 - local_20) + 1;
        }
      }
    }
LAB_1000_cbd3:
    FUN_1000_e8d2(local_830[0]);
  }
  return -1;
}



/* 1000:cbe6  FUN_1000_cbe6  321 bytes, 1 callers */

undefined4 __cdecl16near FUN_1000_cbe6(uint param_1,byte *param_2)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  int in_DX;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 unaff_DS;
  undefined4 uVar7;
  byte *pbVar8;
  byte *local_16;
  int local_10;
  int local_a;
  byte *local_6;
  
  if (*(int *)0xed0 != 0x100) {
    if (*(int *)0xed0 == 0) {
      uVar7 = FUN_1000_ed6b(0x8800);
      in_DX = (int)((ulong)uVar7 >> 0x10);
      *(undefined2 *)0x1dbc = (int)uVar7;
      *(int *)0x1dbe = in_DX;
      if (in_DX == 0 && *(int *)0x1dbc == 0) goto LAB_1000_cbf6;
    }
    iVar2 = param_1 * param_1;
    pbVar8 = (byte *)FUN_1000_ed6b(iVar2 * 0x28);
    uVar5 = (undefined2)((ulong)pbVar8 >> 0x10);
    pbVar3 = (byte *)pbVar8;
    in_DX = 0;
    if (pbVar8 != (byte *)0x0) {
      FUN_1000_cd2a(uVar5,pbVar3,0,iVar2 * 0x28);
      iVar1 = *(int *)0xed0;
      *(undefined2 *)(iVar1 * 4 + 0x1940) = pbVar3;
      *(undefined2 *)(iVar1 * 4 + 0x1942) = uVar5;
      *(uint *)(*(int *)0xed0 * 2 + 0x1512) = param_1;
      local_6 = param_2;
      local_10 = 4;
      do {
        if (0 < (int)(param_1 << 3)) {
          local_a = param_1 << 3;
          local_16 = pbVar3;
          do {
            uVar4 = param_1;
            if (0 < (int)param_1) {
              do {
                *local_16 = *local_16 | *local_6;
                local_6 = local_6 + 1;
                local_16 = local_16 + 1;
                uVar4 = uVar4 - 1;
              } while (uVar4 != 0);
            }
            local_a = local_a + -1;
          } while (local_a != 0);
        }
        local_10 = local_10 + -1;
      } while (local_10 != 0);
      local_16 = pbVar3 + iVar2 * 8;
      uVar6 = uVar5;
      if (0 < iVar2 * 0x20) {
        uVar6 = (undefined2)((ulong)param_1 * (ulong)param_1 >> 0x10);
        iVar2 = (int)((ulong)param_1 * (ulong)param_1) << 5;
        do {
          *local_16 = *param_2;
          param_2 = param_2 + 1;
          local_16 = local_16 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      uVar5 = *(undefined2 *)0xed0;
      *(int *)0xed0 = *(int *)0xed0 + 1;
      return CONCAT22(uVar6,uVar5);
    }
  }
LAB_1000_cbf6:
  return CONCAT22(in_DX,0xffff);
}



/* 1000:cd2a  FUN_1000_cd2a  20 bytes, 1 callers */

void __cdecl16near
FUN_1000_cd2a(undefined2 param_1,undefined1 *param_2,undefined1 param_3,int param_4)

{
  undefined1 *puVar1;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    puVar1 = param_2;
    param_2 = param_2 + 1;
    *puVar1 = param_3;
  }
  return;
}



/* 1000:cd3e  FUN_1000_cd3e  96 bytes, 1 callers */

void __cdecl16near FUN_1000_cd3e(void)

{
  int *piVar1;
  undefined2 unaff_DS;
  
  if (*(int *)0x18b8 != 0) {
    FUN_1000_cf2c();
    FUN_1000_d7ac();
    FUN_1000_d7c4();
  }
  piVar1 = (int *)0x17b6;
  do {
    if (piVar1[1] != 0 || *piVar1 != 0) {
      FUN_1000_ed58(*piVar1,piVar1[1]);
    }
    piVar1 = piVar1 + 0xb;
  } while (piVar1 < (int *)0x17f8);
  piVar1 = (int *)0x18c0;
  do {
    if (piVar1[1] != 0 || *piVar1 != 0) {
      FUN_1000_ed58(*piVar1,piVar1[1]);
    }
    piVar1 = piVar1 + 4;
  } while (piVar1 < (int *)0x1940);
  return;
}



/* 1000:cd9e  FUN_1000_cd9e  358 bytes, 1 callers */

undefined2 __cdecl16near FUN_1000_cd9e(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined2 unaff_DS;
  undefined4 uVar4;
  undefined2 local_6;
  undefined2 local_4;
  
  if (*(int *)0x18b8 == 0) {
    local_4 = param_1;
    if (param_1 < 1) {
      local_4 = 0x1000;
    }
    *(int *)0x1860 = local_4;
    for (local_6 = 0; local_6 < 3; local_6 = local_6 + 1) {
      uVar4 = FUN_1000_ed6b(local_4);
      iVar3 = (int)((ulong)uVar4 >> 0x10);
      iVar2 = local_6 * 0x16;
      *(undefined2 *)(iVar2 + 0x17b6) = (int)uVar4;
      *(int *)(iVar2 + 0x17b8) = iVar3;
      if (iVar3 == 0 && *(int *)(iVar2 + 0x17b6) == 0) goto LAB_1000_cdfe;
    }
    for (local_6 = 0; local_6 < 0x10; local_6 = local_6 + 1) {
      uVar4 = FUN_1000_ed6b(0x101);
      iVar2 = (int)((ulong)uVar4 >> 0x10);
      iVar3 = local_6 * 8;
      *(undefined2 *)(iVar3 + 0x18c0) = (int)uVar4;
      *(int *)(iVar3 + 0x18c2) = iVar2;
      if (iVar2 == 0 && *(int *)(iVar3 + 0x18c0) == 0) {
LAB_1000_cdfe:
        *(undefined2 *)0x18b8 = 0;
        return 3;
      }
    }
    *(undefined2 *)0x1856 = 3;
    *(undefined2 *)0x185c = 1;
    bVar1 = in(0x42);
    *(uint *)0x1850 = (-(uint)((bVar1 & 0x20) == 0) & 0x1cd) + 0x7cd & 0xfffe;
    *(undefined2 *)0x1852 = 0x78;
    *(undefined2 *)0x1854 = 0;
    *(undefined2 *)0x1864 = 0;
    *(undefined2 *)0x1866 = 0;
    *(undefined2 *)0x1858 = 0;
    *(undefined2 *)0x185a = 0;
    *(undefined2 *)0x185e = 0;
    *(undefined2 *)0x1862 = 0;
    for (local_6 = 0; local_6 < 0x10; local_6 = local_6 + 1) {
      *(undefined2 *)(local_6 * 2 + 0x188a) = 0x78;
    }
    *(undefined2 *)0x18b2 = 1;
    *(undefined2 *)0x18b4 = 1;
    *(undefined2 *)0x18b6 = 1;
    *(undefined2 *)0x18ba = 0x10;
    *(undefined2 *)0x18aa = 0;
    *(undefined2 *)0x18ac = 0;
    *(undefined2 *)0x18ae = 0;
    *(undefined2 *)0x18b0 = 0;
    for (local_6 = 0; local_6 < 0x10; local_6 = local_6 + 1) {
      iVar2 = local_6 * 6;
      *(undefined2 *)(iVar2 + 0x1dc2) = 0;
      *(undefined2 *)(iVar2 + 0x1dc4) = 0;
      *(undefined2 *)(iVar2 + 0x1dc6) = 0;
    }
    FUN_1000_d48e();
    FUN_1000_d7de();
    bVar1 = in(0x42);
    FUN_1000_d442(3,(-(uint)((bVar1 & 0x20) == 0) & 0xe7) + 0x3e6);
    *(undefined2 *)0x18b8 = 1;
  }
  return 0;
}



/* 1000:cf08  FUN_1000_cf08  35 bytes, 5 callers */

undefined2 __cdecl16near FUN_1000_cf08(void)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  
  if (*(int *)0x1854 == 0) {
    return 6;
  }
  uVar1 = *(undefined2 *)0x185c;
  *(undefined2 *)0x185c = 0;
  do {
  } while (*(int *)0x1854 == 1);
  *(undefined2 *)0x185c = uVar1;
  return 0;
}



/* 1000:cf2c  FUN_1000_cf2c  23 bytes, 9 callers */

undefined2 __cdecl16near FUN_1000_cf2c(void)

{
  undefined2 unaff_DS;
  
  if (*(int *)0x1854 == 1) {
    *(undefined2 *)0x1854 = 0;
    FUN_1000_d468();
    return 0;
  }
  return 6;
}



/* 1000:cf44  FUN_1000_cf44  37 bytes, 14 callers */

int __cdecl16near FUN_1000_cf44(void)

{
  int iVar1;
  undefined2 unaff_DS;
  
  iVar1 = FUN_1000_cf6a(*(undefined2 *)0x1866);
  if ((iVar1 == 0) && (*(int *)0x18b2 == 1)) {
    *(undefined2 *)0x185c = 1;
    *(undefined2 *)0x1854 = 1;
  }
  return iVar1;
}



/* 1000:cf6a  FUN_1000_cf6a  115 bytes, 14 callers */

undefined2 __cdecl16near FUN_1000_cf6a(int param_1)

{
  uint uVar1;
  byte bVar2;
  undefined2 unaff_DS;
  
  if ((0 < param_1) && (param_1 <= *(int *)0x1864)) {
    FUN_1000_d468();
    *(undefined2 *)0x1854 = 0;
    *(int *)0x1866 = param_1;
    *(undefined2 *)0x1852 = *(undefined2 *)(param_1 * 2 + 0x1888);
    bVar2 = 0;
    uVar1 = 0x17b2;
    do {
      FUN_1000_d4b4(uVar1);
      *(uint *)(uVar1 + 0x12) = (uint)((1 << (bVar2 & 0x1f) & *(uint *)0x1888) != 0);
      FUN_1000_d4f2(uVar1);
      bVar2 = bVar2 + 1;
      uVar1 = uVar1 + 0x16;
    } while (uVar1 < 0x17f4);
    return 0;
  }
  return 5;
}



/* 1000:cfde  FUN_1000_cfde  21 bytes, 1 callers */

undefined2 __cdecl16near FUN_1000_cfde(void)

{
  undefined2 unaff_DS;
  
  if (*(int *)0x18aa == 0) {
    return 6;
  }
  do {
  } while (*(int *)0x18aa == 1);
  return 0;
}



/* 1000:cff4  FUN_1000_cff4  73 bytes, 9 callers */

undefined2 __cdecl16near FUN_1000_cff4(int param_1)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  
  if ((0 < param_1) && (param_1 <= *(int *)0x18ac)) {
    if (*(int *)0x18b4 == 1) {
      FUN_1000_d468();
      *(int *)0x18ae = param_1;
      param_1 = param_1 * 8;
      uVar1 = *(undefined2 *)(param_1 + 0x18ba);
      *(undefined2 *)(param_1 + 0x18b4) = *(undefined2 *)(param_1 + 0x18b8);
      *(undefined2 *)(param_1 + 0x18b6) = uVar1;
      *(undefined2 *)0x18aa = 1;
    }
    return 0;
  }
  return 5;
}



/* 1000:d03e  FUN_1000_d03e  7 bytes, 6 callers */

void __cdecl16near FUN_1000_d03e(void)

{
  undefined2 unaff_DS;
  
  *(undefined2 *)0x185c = 0;
  return;
}



/* 1000:d046  FUN_1000_d046  7 bytes, 8 callers */

void __cdecl16near FUN_1000_d046(void)

{
  undefined2 unaff_DS;
  
  *(undefined2 *)0x185c = 1;
  return;
}



/* 1000:d04e  FUN_1000_d04e  673 bytes, 1 callers */

undefined2 __cdecl16near FUN_1000_d04e(undefined2 param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  int local_81a;
  undefined4 local_818;
  undefined2 local_814 [1027];
  undefined2 local_e;
  int aiStack_c [3];
  int local_6;
  uint local_4;
  
  iVar4 = FUN_1000_e1ee(param_1,local_814);
  if (iVar4 == -1) {
    return 1;
  }
  do {
    local_6 = 0;
    do {
      aiStack_c[local_6] = 0;
      local_6 = local_6 + 1;
    } while (local_6 < 3);
    local_6 = 0;
    do {
      cVar3 = FUN_1000_e228(local_814);
      iVar4 = local_6;
      local_4 = (uint)cVar3;
      if ((local_4 == 0xffff) || (local_4 == 0x2a)) break;
      if (local_4 == 0x3b) {
LAB_1000_d0d8:
        do {
          cVar3 = FUN_1000_e228(local_814);
          local_4 = (uint)cVar3;
          if (local_4 == 0xffff) break;
        } while (local_4 != 0xd);
      }
      else if (local_4 < 0x3c) {
        if (cVar3 == '#') goto LAB_1000_d0d8;
        if (cVar3 < '$') {
          if (cVar3 == '\r') {
            local_6 = 0;
          }
          else {
            if (cVar3 != '\"') goto LAB_1000_d166;
            while( true ) {
              cVar3 = FUN_1000_e228(local_814);
              local_4 = (uint)cVar3;
              if (((local_4 == 0xffff) || (local_4 == 0xd)) || (local_4 == 0x22)) break;
              if (param_3 == 1) {
                FUN_1000_ee94(local_4);
              }
            }
            if (param_3 == 1) {
              FUN_1000_ee94(0xd);
              FUN_1000_ee94(10);
            }
          }
        }
        else {
          if ((cVar3 != ',') && (cVar3 != ':')) goto LAB_1000_d166;
          local_6 = local_6 + 1;
          if (local_6 == 3) {
            local_6 = 2;
          }
        }
      }
      else {
LAB_1000_d166:
        if ((local_4 != 0x20) && (local_4 != 9)) {
          if (aiStack_c[local_6] + *(int *)0x1862 < *(int *)0x1860) {
            puVar1 = (undefined4 *)(local_6 * 0x16 + 0x17b6);
            uVar2 = *puVar1;
            *(char *)((int)uVar2 + aiStack_c[local_6] + *(int *)0x1862) = cVar3;
            aiStack_c[local_6] = aiStack_c[local_6] + 1;
            uVar2 = *puVar1;
            *(undefined1 *)((int)uVar2 + aiStack_c[iVar4] + *(int *)0x1862) = 0;
          }
        }
      }
    } while (local_4 != 0xffff);
    local_81a = 0;
    for (local_6 = 0; local_6 < 3; local_6 = local_6 + 1) {
      if (local_81a < aiStack_c[local_6]) {
        local_81a = aiStack_c[local_6];
      }
      local_818 = (char *)CONCAT22(*(undefined2 *)(local_6 * 0x16 + 0x17b8),
                                   (char *)(*(int *)(local_6 * 0x16 + 0x17b6) + *(int *)0x1862));
      while (*local_818 != '\0') {
        if (('`' < *local_818) && (*local_818 < '{')) {
          *local_818 = *local_818 + -0x20;
        }
        local_818 = (char *)CONCAT22(local_818._2_2_,(char *)local_818 + 1);
      }
    }
    *(int *)0x1864 = *(int *)0x1864 + 1;
    if (0x10 < *(int *)0x1864) {
      local_e = 4;
      goto LAB_1000_d2e5;
    }
    if (local_81a + *(int *)0x1862 == *(int *)0x1860) {
      local_e = 3;
      goto LAB_1000_d2e5;
    }
    *(undefined2 *)(*(int *)0x1864 * 2 + 0x1866) = *(undefined2 *)0x1862;
    *(int *)0x1862 = *(int *)0x1862 + local_81a + 1;
    local_6 = 0;
    do {
      iVar4 = local_6 * 0x16;
      FUN_1000_d4b4(iVar4 + 0x17b2);
      *(uint *)(iVar4 + 0x17c4) = (uint)((1 << ((byte)local_6 & 0x1f) & *(uint *)0x1888) != 0);
      local_6 = local_6 + 1;
    } while (local_6 < 3);
    iVar4 = FUN_1000_d4f2(0x17b2);
    if (iVar4 == 0) {
      local_e = 2;
      goto LAB_1000_d2e5;
    }
    FUN_1000_d4f2(0x17c8);
    FUN_1000_d4f2(0x17de);
    if ((0x1d < param_2) && (param_2 < 0xf1)) {
      *(int *)0x1852 = param_2;
      *(int *)(*(int *)0x1864 * 2 + 0x1888) = param_2;
    }
  } while (local_4 != 0xffff);
  local_e = 0;
LAB_1000_d2e5:
  FUN_1000_e8d2(local_814[0]);
  return local_e;
}



/* 1000:d2f8  FUN_1000_d2f8  328 bytes, 1 callers */

undefined2 __cdecl16near FUN_1000_d2f8(undefined2 param_1)

{
  int *piVar1;
  undefined2 uVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined2 unaff_DS;
  undefined2 local_80e [1027];
  int local_8;
  int local_6;
  int local_4;
  
  iVar4 = FUN_1000_e1ee(param_1,local_80e);
  if (iVar4 == -1) {
    return 1;
  }
  local_6 = 0;
  local_8 = *(int *)0x18ac;
  iVar4 = local_8 * 8;
  uVar2 = *(undefined2 *)(iVar4 + 0x18c2);
  *(undefined2 *)(iVar4 + 0x18bc) = *(undefined2 *)(iVar4 + 0x18c0);
  *(undefined2 *)(iVar4 + 0x18be) = uVar2;
  do {
    do {
      cVar3 = FUN_1000_e228(local_80e);
      iVar4 = (int)cVar3;
      if (iVar4 == 0x3b) {
        do {
          cVar3 = FUN_1000_e228(local_80e);
          iVar4 = (int)cVar3;
          if (iVar4 == -1) break;
        } while (iVar4 != 0xd);
      }
    } while (((iVar4 < 0x30) || (0x39 < iVar4)) && (iVar4 != -1));
    iVar6 = 0;
    while (((0x2f < iVar4 && (iVar4 < 0x3a)) && (iVar4 != -1))) {
      iVar6 = iVar6 * 10 + iVar4 + -0x30;
      cVar3 = FUN_1000_e228(local_80e);
      iVar4 = (int)cVar3;
    }
    local_4 = iVar6;
    if (iVar4 != -1) {
      *(int *)*(undefined4 *)(*(int *)0x18ac * 8 + 0x18bc) = iVar6;
      piVar5 = (int *)(*(int *)0x18ac * 8 + 0x18bc);
      piVar1 = piVar5;
      *piVar1 = *piVar1 + 2;
      if ((iVar6 == 0) || (local_6 = local_6 + 1, local_6 == 0x100)) {
        **(undefined2 **)piVar5 = 0;
        local_6 = 0;
        *(int *)0x18ac = *(int *)0x18ac + 1;
        if (*(int *)0x18ac == 0x10) break;
        iVar6 = *(int *)0x18ac * 8;
        uVar2 = *(undefined2 *)(iVar6 + 0x18c2);
        *(undefined2 *)(iVar6 + 0x18bc) = *(undefined2 *)(iVar6 + 0x18c0);
        *(undefined2 *)(iVar6 + 0x18be) = uVar2;
      }
    }
  } while (iVar4 != -1);
  FUN_1000_e8d2(local_80e[0]);
  if (local_8 == *(int *)0x18ac) {
    return 2;
  }
  return 0;
}



/* 1000:d442  FUN_1000_d442  37 bytes, 1 callers */

undefined4 __cdecl16near FUN_1000_d442(byte param_1,undefined2 param_2)

{
  byte bVar1;
  
  out(0x3fdf,(param_1 & 3 | 0x38) << 1);
  out(0x3fdb,(char)param_2);
  bVar1 = (byte)((uint)param_2 >> 8);
  out(0x3fdb,bVar1);
  return CONCAT22(0x3fdb,(uint)bVar1);
}



/* 1000:d468  FUN_1000_d468  37 bytes, 4 callers */

undefined4 __cdecl16near FUN_1000_d468(void)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = in(0x42);
  iVar2 = (-(uint)((bVar1 & 0x20) == 0) & 0xe7) + 0x3e6;
  out(0x3fdb,(char)iVar2);
  out(0x3fdb,(char)((uint)iVar2 >> 8));
  out(0x37,7);
  return 0x3fdb0007;
}



/* 1000:d48e  FUN_1000_d48e  38 bytes, 1 callers */

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



/* 1000:d4b4  FUN_1000_d4b4  61 bytes, 3 callers */

void __cdecl16near FUN_1000_d4b4(int *param_1)

{
  int iVar1;
  undefined2 unaff_DS;
  
  iVar1 = param_1[3];
  *param_1 = *(int *)(*(int *)0x1866 * 2 + 0x1866) + param_1[2];
  param_1[1] = iVar1;
  param_1[5] = 4;
  *(undefined1 *)(param_1 + 4) = 0x48;
  param_1[7] = 4;
  param_1[6] = 4;
  param_1[8] = 8;
  param_1[10] = 0;
  return;
}



/* 1000:d4f2  FUN_1000_d4f2  663 bytes, 3 callers */

/* WARNING: Instruction at (ram,0x00016ed8) overlaps instruction at (ram,0x00016ed7)
    */
/* WARNING: Removing unreachable block (ram,0x00017e1e) */

int __cdecl16near FUN_1000_d4f2(int *param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  char *pcVar3;
  byte *pbVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int in_CX;
  int *piVar9;
  uint uVar10;
  undefined1 *unaff_DI;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar11;
  int aiStack_480 [100];
  int iStack_3b8;
  int iStack_3b6;
  int aiStack_3b4 [16];
  int iStack_394;
  int aiStack_392 [16];
  int iStack_372;
  int *piStack_370;
  int aiStack_36e [16];
  int *piStack_34e;
  int *piStack_34c;
  int iStack_34a;
  int aiStack_346 [116];
  int iStack_25e;
  int aiStack_25c [16];
  int aiStack_23c [4];
  int iStack_234;
  int aiStack_232 [16];
  int iStack_212;
  int iStack_210;
  int aiStack_20e [16];
  int iStack_1ee;
  uint auStack_1e4 [16];
  int aiStack_1c4 [47];
  uint uStack_166;
  uint uStack_164;
  uint uStack_162;
  uint uStack_160;
  uint uStack_15e;
  int aiStack_15c [16];
  int aiStack_13c [16];
  int iStack_11c;
  int aiStack_11a [5];
  int iStack_110;
  int iStack_10e;
  int iStack_10c;
  int aiStack_10a [7];
  uint auStack_fc [9];
  undefined2 auStack_ea [7];
  int aiStack_dc [2];
  int *piStack_d8;
  int *piStack_d6;
  int iStack_d4;
  int aiStack_d2 [12];
  int aiStack_ba [3];
  int *piStack_b4;
  int aiStack_b2 [12];
  int iStack_9a;
  int aiStack_98 [3];
  int *piStack_92;
  int iStack_90;
  int aiStack_8e [8];
  int aiStack_7e [5];
  int iStack_74;
  int iStack_72;
  int iStack_70;
  int aiStack_6e [16];
  undefined2 uStack_4e;
  int aiStack_4c [5];
  int aiStack_42 [11];
  int iStack_2c;
  int iStack_2a;
  int iStack_28;
  int iStack_26;
  int aiStack_24 [8];
  undefined2 uStack_14;
  undefined2 uStack_12;
  int *piStack_10;
  int *piStack_e;
  int *piStack_c;
  int local_6;
  int local_4;
  
  local_6 = 0;
LAB_1000_d4fe:
  pcVar3 = *(char **)param_1;
  if (*pcVar3 == '\0') {
    return local_6;
  }
  *(char *)(param_1 + 4) = *pcVar3;
  *param_1 = *param_1 + 1;
  iVar7 = (int)(char)param_1[4];
  if (iVar7 == 0x4f) {
    pbVar4 = *(byte **)param_1;
    if ((0x30 < *pbVar4) && (*pbVar4 < 0x39)) {
      param_1[5] = *pbVar4 - 0x30;
      *param_1 = *param_1 + 1;
    }
    goto LAB_1000_d79a;
  }
  uVar8 = iVar7 - 0x3c;
  if ((uVar8 & 1) == 0) {
    bVar11 = uVar8 == 0x18;
    switch(iVar7) {
    case 0x3c:
      if (1 < param_1[5]) {
        param_1[5] = param_1[5] + -1;
      }
      break;
    case 0x3d:
      goto switchD_1000_d77b_caseD_3d;
    case 0x3e:
      if (param_1[5] < 8) {
        param_1[5] = param_1[5] + 1;
      }
      break;
    case 0x3f:
      piStack_e = (int *)*(undefined2 *)0xb8b;
      piStack_c = (int *)*(undefined2 *)0xb8d;
      piVar9 = &iStack_2c;
      iVar7 = -1;
      goto code_r0x0001aaf3;
    default:
      goto switchD_1000_d77b_caseD_40;
    case 0x41:
    case 0x43:
    case 0x45:
    case 0x47:
    case 0x49:
    case 0x4f:
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    case 0x4b:
      bVar11 = SBORROW2((int)param_1 + -1,-0x79c7) !=
               SBORROW2((int)(param_1 + 0x3ce3),(uint)(uVar8 < 0x18));
      iVar7 = (int)(param_1 + 0x3ce3) - (uint)(uVar8 < 0x18);
      goto code_r0x00016edc;
    case 0x4c:
      local_4 = 0;
      while ((pbVar4 = *(byte **)param_1, 0x2f < *pbVar4 && (*pbVar4 < 0x3a))) {
        in_CX = local_4 * 10;
        local_4 = (uint)*pbVar4 + in_CX + -0x30;
        *param_1 = *param_1 + 1;
      }
      if ((0 < local_4) && (local_4 < 0x21)) {
        param_1[7] = local_4;
      }
      break;
    case 0x4d:
      goto switchD_1000_d77b_caseD_4d;
    case 0x4e:
      if (**(char **)param_1 == '1') {
        param_1[10] = 1;
      }
      else {
        param_1[10] = 0;
      }
      break;
    case 0x51:
      goto switchD_1000_d77b_caseD_51;
    case 0x52:
      local_4 = 0;
      while ((pbVar4 = *(byte **)param_1, 0x2f < *pbVar4 && (*pbVar4 < 0x3a))) {
        in_CX = local_4 * 10;
        local_4 = (uint)*pbVar4 + in_CX + -0x30;
        *param_1 = *param_1 + 1;
      }
      param_1[6] = local_4;
      if ((local_4 < 1) || (0x20 < local_4)) {
        param_1[6] = param_1[7];
      }
      param_1[8] = *(int *)(param_1[6] * 4 + 0xfae);
      if (**(char **)param_1 == '.') {
        param_1[8] = param_1[8] * 3;
        param_1[8] = param_1[8] >> 1;
        *param_1 = *param_1 + 1;
      }
      *(undefined1 *)(param_1 + 4) = 0x48;
      goto LAB_1000_d6a1;
    case 0x53:
      piStack_b4 = (int *)(0x28 - *(int *)0x1d48 << ((byte)in_CX & 0x1f));
      if (*(int *)0x181e == 1) {
        iVar7 = *(int *)0x181e * 3;
      }
      else {
        iVar7 = *(int *)0x20c6 * 6;
      }
      piStack_d8 = (int *)(iVar7 + *(int *)0x1d42);
      for (piStack_92 = (int *)0x0; (int)piStack_92 < *(int *)0x1d48;
          piStack_92 = (int *)((int)piStack_92 + 1)) {
        if (aiStack_10a[(int)piStack_92] < 0x130) {
          piStack_c = (int *)aiStack_10a[(int)piStack_92];
          piStack_e = (int *)aiStack_d2[(int)piStack_92 + -1];
          piStack_10 = (int *)0x1d3d;
          FUN_1000_bfd6();
        }
        else {
          piStack_c = (int *)0x6;
          piStack_e = piStack_b4;
          piStack_10 = (int *)0x1d6a;
          FUN_1000_bfd6();
          piStack_b4 = piStack_b4 + 8;
        }
      }
      piStack_d8 = (int *)(*(int *)0x1d42 + *(int *)0x1846 + 0x19);
      piStack_92 = (int *)0x0;
      do {
        if (0x20 < aiStack_6e[(int)piStack_92]) {
          piStack_c = (int *)aiStack_6e[(int)piStack_92];
          piStack_e = (int *)aiStack_4c[(int)piStack_92];
          piStack_10 = (int *)0x1da1;
          FUN_1000_bfd6();
        }
        piStack_92 = (int *)((int)piStack_92 + 1);
      } while ((int)piStack_92 < 0x10);
      piStack_d8 = (int *)(*(int *)0x1d42 + 0xc);
      for (piStack_92 = (int *)0x0; (int)piStack_92 < 8; piStack_92 = (int *)((int)piStack_92 + 1))
      {
        if (-0x10 < aiStack_8e[(int)piStack_92]) {
          if (aiStack_8e[(int)piStack_92] < 0) {
            piStack_c = (int *)aiStack_8e[(int)piStack_92];
            piStack_e = (int *)aiStack_7e[(int)piStack_92];
            piStack_10 = (int *)0x1e1c;
            FUN_1000_c322();
          }
          else {
            piStack_c = (int *)aiStack_8e[(int)piStack_92];
            piStack_e = (int *)aiStack_7e[(int)piStack_92];
            piStack_10 = (int *)0x1de1;
            FUN_1000_bfd6();
          }
        }
      }
      if (*(int *)0x1faa < 10) {
        piStack_c = (int *)0x1e2b;
        FUN_1000_85b8();
      }
      else {
        piStack_c = (int *)((uint)(*(int *)0x193c < 4) + *(int *)0x1fca);
        piStack_e = (int *)*(undefined2 *)0x1f8a;
        piStack_10 = (int *)0x1e4f;
        FUN_1000_bfd6();
        piStack_c = (int *)((uint)(*(int *)0x193c < 4) + *(int *)0x1fca);
        piStack_e = (int *)(*(int *)0x1f8a + 0x20);
        piStack_10 = (int *)0x1e74;
        FUN_1000_bfd6();
      }
      if ((*(int *)0x1dc0 != 0) &&
         (((0xf < *(int *)0x1d44 || (*(int *)0x1d44 < 1)) || (*(int *)0x1844 != 0)))) {
        if ((*(int *)0x193c < 4) && (0 < *(int *)0x1d44)) {
          iStack_110 = 1;
        }
        else {
          iStack_110 = 0;
        }
        piStack_c = (int *)((uint)(iStack_110 != 0) + *(int *)0x1d40);
        piStack_e = (int *)*(int *)0x193e;
        piStack_10 = (int *)0x1ecf;
        FUN_1000_bfd6();
      }
      FUN_1000_8292();
      for (piStack_92 = (int *)*(int *)0x17f4; 0 < (int)piStack_92;
          piStack_92 = (int *)((int)piStack_92 + -1)) {
        if (0xf < *(int *)((int)piStack_92 * 2 + 0x1fca)) {
          iVar7 = *(int *)((int)piStack_92 * 2 + 0x17f6);
          if ((iVar7 == 1) || (iVar7 == 2)) {
LAB_1000_1ee1:
            piStack_c = (int *)0x7;
          }
          else {
            if (iVar7 != 3) {
              if (iVar7 == 4) goto LAB_1000_1ee1;
              if (iVar7 != 9) goto LAB_1000_1ef0;
            }
            piStack_c = (int *)0x3;
          }
          piStack_e = piStack_92;
          piStack_10 = (int *)0x1eed;
          FUN_1000_890a();
        }
LAB_1000_1ef0:
      }
      piStack_c = (int *)0x7;
      piStack_e = (int *)0x0;
      piStack_10 = (int *)0x1f5e;
      FUN_1000_890a();
      while (iVar7 = FUN_1000_bf8e(), iVar7 != 0) {
        FUN_1000_bf98();
      }
      piStack_c = (int *)0x1f75;
      FUN_1000_e538();
      do {
        uVar8 = FUN_1000_bb38();
      } while (uVar8 < *(uint *)0x1820);
      *(undefined2 *)0xdd0 = 0;
      out(0xa4,(byte)*(undefined2 *)0x1844);
      out(0xa6,(byte)*(undefined2 *)0x1844 ^ 1);
      piStack_c = (int *)0x13f;
      piStack_e = (int *)0x4b;
      piStack_10 = (int *)0x0;
      uStack_12 = 4;
      uStack_14 = 0x1fa3;
      FUN_1000_b854();
      FUN_1000_8184();
      piStack_c = (int *)0x99d;
      aiStack_dc[1] = FUN_1000_e3c8();
      if (((aiStack_dc[1] != 0) || (*(int *)0x213e != 0)) && (FUN_1000_9e70(), *(int *)0x184c == 0))
      {
        iVar7 = FUN_1000_1faa();
        return iVar7;
      }
      *(undefined2 *)0x1d6a = 0;
      if (*(int *)0x1faa < 10) {
        iStack_10e = *(int *)0x1faa;
        *(int *)0x1faa = *(int *)0x1faa + -1;
        if (iStack_10e < 1) {
          uStack_4e = 1;
          *(int *)0x1842 = *(int *)0x1842 + -1;
          iVar7 = FUN_1000_1faa();
          return iVar7;
        }
      }
      else {
        if ((*(int *)0x2136 != 0) && (*(int *)0x1d4a + *(int *)0x1f8a < 0x210)) {
          *(undefined2 *)0x1d6a = *(undefined2 *)0x1d4a;
        }
        if ((*(int *)0x2134 != 0) && (0x2f < *(int *)0x1f8a - *(int *)0x1d4a)) {
          *(int *)0x1d6a = -*(int *)0x1d4a;
        }
        if ((((*(int *)0x2138 != 0) && (*(int *)0x212c == 0)) ||
            ((*(int *)0x213a != 0 && (*(int *)0x212c != 0)))) &&
           ((iStack_90 < *(int *)0x1d48 && (piStack_d6 != (int *)0x0)))) {
          for (piStack_92 = (int *)0x0; (int)piStack_92 < *(int *)0x1d48;
              piStack_92 = (int *)((int)piStack_92 + 1)) {
            if (0x12f < aiStack_10a[(int)piStack_92]) {
              piStack_b4 = piStack_92;
              break;
            }
          }
          piVar9 = piStack_b4;
          aiStack_10a[(int)piStack_b4] = *(int *)0x1fca;
          iVar7 = *(int *)0x1f8a;
          aiStack_d2[(int)piVar9 + -1] = iVar7 + -0x10;
          aiStack_b2[(int)piVar9] = iVar7 + -0x10;
          aiStack_24[(int)piVar9] = *(int *)0x20c6 * -7;
          iStack_90 = iStack_90 + 1;
          piStack_d6 = (int *)0x0;
          piStack_c = (int *)0xab5;
          FUN_1000_cff4();
        }
        if ((*(int *)0x213a == 0) || (*(int *)0x212c != 0)) {
          if (*(int *)0x2138 != 0) {
            bVar11 = *(int *)0x212c == 0;
switchD_1000_d77b_caseD_4d:
            if (!bVar11) goto LAB_1000_0ad7;
          }
        }
        else {
LAB_1000_0ad7:
          if ((iStack_90 < *(int *)0x1d48) && (piStack_d6 != (int *)0x0)) {
            for (piStack_92 = (int *)0x0; (int)piStack_92 < *(int *)0x1d48;
                piStack_92 = (int *)((int)piStack_92 + 1)) {
              if (0x12f < aiStack_10a[(int)piStack_92]) {
                piStack_b4 = piStack_92;
                break;
              }
            }
            piVar9 = piStack_b4;
            aiStack_10a[(int)piStack_b4] = *(int *)0x1fca;
            iVar7 = *(int *)0x1f8a;
            aiStack_d2[(int)piVar9 + -1] = iVar7 + 0x40;
            aiStack_b2[(int)piVar9] = iVar7 + 0x40;
            aiStack_24[(int)piVar9] = *(int *)0x20c6 * 7;
            iStack_90 = iStack_90 + 1;
            piStack_d6 = (int *)0x0;
            piStack_c = (int *)0xb51;
            FUN_1000_cff4();
          }
        }
        if ((*(int *)0x2138 == 0) && (*(int *)0x213a == 0)) {
          piStack_d6 = (int *)0x1;
        }
      }
      iStack_2a = 0;
      piStack_92 = (int *)0x1;
      do {
        if (*(int *)0x17f4 < (int)piStack_92) {
          iVar7 = FUN_1000_13e0();
          return iVar7;
        }
        if (*(int *)((int)piStack_92 * 2 + 0x1fca) != 0) {
          iStack_2a = iStack_2a + 1;
        }
        iVar7 = (int)piStack_92 * 2;
        if (*(int *)(iVar7 + 0x1faa) < 10) {
          piVar1 = (int *)(iVar7 + 0x1faa);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            *(undefined2 *)(iVar7 + 0x1fca) = 0;
            *(undefined2 *)(iVar7 + 0x1d8a) = 0;
            *(undefined2 *)(iVar7 + 0x1faa) = 10;
          }
        }
        else {
          iVar7 = *(int *)((int)piStack_92 * 2 + 0x17f6);
          if (iVar7 == 1) {
            iVar7 = FUN_1000_efc8();
            if (((iVar7 % 0xf == 0) && (iVar7 = (int)piStack_92 * 2, *(int *)(iVar7 + 0x1fca) == 0))
               && (iStack_2c < iStack_28)) {
              iVar6 = FUN_1000_efc8();
              *(int *)(iVar7 + 0x1fca) = (iVar6 % 7 + 2) * 0x20;
              iVar6 = FUN_1000_efc8();
              iVar6 = (iVar6 % 2) * 0x4c0 + -0x140;
              *(int *)(iVar7 + 0x1f8a) = iVar6;
              if (iVar6 == 0x140) {
                iStack_10e = 0;
              }
              else if (-*(int *)(iVar7 + 0x1f8a) == -0x140 || -*(int *)(iVar7 + 0x1f8a) + 0x140 < 0)
              {
                iStack_10e = -1;
              }
              else {
                iStack_10e = 1;
              }
              iVar7 = FUN_1000_efc8();
              *(int *)((int)piStack_92 * 2 + 0x1d6a) = (iVar7 % 4 + 2) * iStack_10e;
              *(undefined2 *)((int)piStack_92 * 2 + 0x1d8a) = 0;
            }
            if (iStack_28 <= iStack_2c) {
              iVar7 = *(int *)((int)piStack_92 * 2 + 0x1d6a);
              if (iVar7 == 0) {
                iStack_10e = 0;
              }
              else if (iVar7 < 1) {
                iStack_10e = -1;
              }
              else {
                iStack_10e = 1;
              }
              *(int *)((int)piStack_92 * 2 + 0x1d6a) = iStack_10e << 3;
            }
            iVar7 = *(int *)((int)piStack_92 * 2 + 0x1f8a) + *(int *)((int)piStack_92 * 2 + 0x1d6a);
            if ((iVar7 < -0x13f) || (0x37f < iVar7)) {
              *(undefined2 *)((int)piStack_92 * 2 + 0x1fca) = 0;
            }
            if (*(int *)((int)piStack_92 * 2 + 0x1fca) != 0) {
              iVar7 = FUN_1000_efc8();
              piVar9 = (int *)(iVar7 % (*(int *)0x181e * -0x28 + 100));
              if (((piVar9 == (int *)0x0) && (local_4 < 0x10)) &&
                 ((0 < *(int *)((int)piStack_92 * 2 + 0x1f8a) &&
                  (*(int *)((int)piStack_92 * 2 + 0x1f8a) < 0x240)))) {
                piStack_b4 = piVar9;
                do {
                  if (aiStack_6e[(int)piStack_b4] < 0x21) {
                    piStack_d8 = piStack_b4;
                  }
                  piStack_b4 = (int *)((int)piStack_b4 + 1);
                } while ((int)piStack_b4 < 0x10);
                aiStack_6e[(int)piStack_d8] = *(int *)((int)piStack_92 * 2 + 0x1fca) + 0xc;
                iVar7 = *(int *)((int)piStack_92 * 2 + 0x1f8a) + 0x18;
LAB_1000_0d5a:
                aiStack_4c[(int)piStack_d8] = iVar7;
                local_4 = local_4 + 1;
              }
            }
          }
          else if (iVar7 == 2) {
            iVar7 = FUN_1000_efc8();
            if (((iVar7 % 0x28 == 0) && (iVar7 = (int)piStack_92 * 2, *(int *)(iVar7 + 0x1fca) == 0)
                ) && (iStack_2c < iStack_28)) {
              iVar6 = FUN_1000_efc8();
              *(int *)(iVar7 + 0x1fca) = (iVar6 % 2 + 7) * 0x20;
              iVar6 = FUN_1000_efc8();
              iVar6 = (iVar6 % 2) * 0x4c0 + -0x140;
              *(int *)(iVar7 + 0x1f8a) = iVar6;
              if (iVar6 == 0x140) {
                iStack_10e = 0;
              }
              else if (-*(int *)(iVar7 + 0x1f8a) == -0x140 || -*(int *)(iVar7 + 0x1f8a) + 0x140 < 0)
              {
                iStack_10e = -1;
              }
              else {
                iStack_10e = 1;
              }
              iVar7 = FUN_1000_efc8();
              *(int *)((int)piStack_92 * 2 + 0x1d6a) = (iVar7 % 3 + 7) * iStack_10e;
              *(undefined2 *)((int)piStack_92 * 2 + 0x1d8a) = 0;
            }
            iVar7 = *(int *)((int)piStack_92 * 2 + 0x1f8a) + *(int *)((int)piStack_92 * 2 + 0x1d6a);
            if ((iVar7 < -0x13f) || (0x37f < iVar7)) {
              *(undefined2 *)((int)piStack_92 * 2 + 0x1fca) = 0;
            }
            if (*(int *)((int)piStack_92 * 2 + 0x1fca) != 0) {
              iVar7 = FUN_1000_efc8();
              piVar9 = (int *)(iVar7 % (((*(int *)0x181e * -2 + 5) - *(int *)0x20c6) * 10));
              if (((piVar9 == (int *)0x0) && (iStack_26 < 8)) &&
                 ((0 < *(int *)((int)piStack_92 * 2 + 0x1f8a) &&
                  (*(int *)((int)piStack_92 * 2 + 0x1f8a) < 0x241)))) {
                piStack_b4 = piVar9;
                do {
                  if (aiStack_8e[(int)piStack_b4] < -0xf) {
                    piStack_d8 = piStack_b4;
                  }
                  piStack_b4 = (int *)((int)piStack_b4 + 1);
                } while ((int)piStack_b4 < 8);
                aiStack_8e[(int)piStack_d8] = *(int *)((int)piStack_92 * 2 + 0x1fca) + 0xc;
                aiStack_7e[(int)piStack_d8] = *(int *)((int)piStack_92 * 2 + 0x1f8a) + 0x18;
                auStack_ea[(int)piStack_d8] = 0;
                iStack_26 = iStack_26 + 1;
                piStack_c = (int *)0xeca;
                FUN_1000_cff4();
              }
            }
          }
          else if (iVar7 == 3) {
            iVar7 = FUN_1000_efc8();
            if (((iVar7 % (((3 - *(int *)0x181e) * 2 - *(int *)0x20c6) * 10) == 0) &&
                (iVar7 = (int)piStack_92 * 2, *(int *)(iVar7 + 0x1fca) == 0)) &&
               (iStack_2c < iStack_28)) {
              iVar6 = FUN_1000_efc8();
              *(int *)(iVar7 + 0x1fca) = (iVar6 % 2 + 2) * 0x20;
              iVar6 = FUN_1000_efc8();
              iVar6 = (iVar6 % 2) * 0x4e0 + -0x140;
              *(int *)(iVar7 + 0x1f8a) = iVar6;
              if (iVar6 == 0x140) {
                iStack_10e = 0;
              }
              else if (-*(int *)(iVar7 + 0x1f8a) == -0x140 || -*(int *)(iVar7 + 0x1f8a) + 0x140 < 0)
              {
                iStack_10e = -1;
              }
              else {
                iStack_10e = 1;
              }
              iVar7 = FUN_1000_efc8();
              *(int *)((int)piStack_92 * 2 + 0x1d6a) = (iVar7 % 4 + 0x10) * iStack_10e;
              *(undefined2 *)((int)piStack_92 * 2 + 0x1d8a) = 0;
            }
            if (iStack_28 <= iStack_2c) {
              iVar7 = *(int *)((int)piStack_92 * 2 + 0x1d6a);
              if (iVar7 == 0) {
                iStack_10e = 0;
              }
              else if (iVar7 < 1) {
                iStack_10e = -1;
              }
              else {
                iStack_10e = 1;
              }
              *(int *)((int)piStack_92 * 2 + 0x1d6a) = iStack_10e << 3;
            }
            iVar7 = *(int *)((int)piStack_92 * 2 + 0x1f8a) + *(int *)((int)piStack_92 * 2 + 0x1d6a);
            if ((iVar7 < -0x13f) || (0x37f < iVar7)) {
              *(undefined2 *)((int)piStack_92 * 2 + 0x1fca) = 0;
            }
            if (*(int *)((int)piStack_92 * 2 + 0x1fca) != 0) {
              iVar7 = FUN_1000_efc8();
              piVar9 = (int *)(iVar7 % (((4 - *(int *)0x20c6) - *(int *)0x181e) * 5));
              if (((piVar9 == (int *)0x0) && (local_4 < 0x10)) &&
                 ((0 < *(int *)((int)piStack_92 * 2 + 0x1f8a) &&
                  (*(int *)((int)piStack_92 * 2 + 0x1f8a) < 0x240)))) {
                piStack_b4 = piVar9;
                do {
                  if (aiStack_6e[(int)piStack_b4] < 0x21) {
                    piStack_d8 = piStack_b4;
                  }
                  piStack_b4 = (int *)((int)piStack_b4 + 1);
                } while ((int)piStack_b4 < 0x10);
                aiStack_6e[(int)piStack_d8] = *(int *)((int)piStack_92 * 2 + 0x1fca) + 0x10;
                iVar7 = *(int *)((int)piStack_92 * 2 + 0x1f8a) + 0x10;
                goto LAB_1000_0d5a;
              }
            }
          }
          else if (iVar7 == 4) {
            iVar7 = FUN_1000_efc8();
            if (((iVar7 % 0x1e == 0) && (iVar7 = (int)piStack_92 * 2, *(int *)(iVar7 + 0x1fca) == 0)
                ) && (iStack_2c < iStack_28)) {
              *(undefined2 *)(iVar7 + 0x1fca) = 0x120;
              iVar6 = FUN_1000_efc8();
              iVar6 = (iVar6 % 2) * 0x4c0 + -0x140;
              *(int *)(iVar7 + 0x1f8a) = iVar6;
              if (iVar6 == 0x140) {
                iStack_10e = 0;
              }
              else if (-*(int *)(iVar7 + 0x1f8a) == -0x140 || -*(int *)(iVar7 + 0x1f8a) + 0x140 < 0)
              {
                iStack_10e = -1;
              }
              else {
                iStack_10e = 1;
              }
              iVar7 = FUN_1000_efc8();
              iVar6 = (int)piStack_92 * 2;
              *(int *)(iVar6 + 0x1d6a) = (iVar7 % 4 + 5) * iStack_10e;
              *(undefined2 *)(iVar6 + 0x1d8a) = 0;
              *(undefined2 *)(iVar6 + 0x1822) = 0;
            }
            iVar7 = (int)piStack_92 * 2;
            if ((*(int *)(iVar7 + 0x1d6a) == 0) && (*(int *)(iVar7 + 0x1822) < 4)) {
              *(int *)(iVar7 + 0x1822) = *(int *)(iVar7 + 0x1822) + 1;
            }
            iVar7 = (int)piStack_92 * 2;
            if ((*(int *)(iVar7 + 0x1d6a) != 0) && (0 < *(int *)(iVar7 + 0x1822))) {
              *(int *)(iVar7 + 0x1822) = *(int *)(iVar7 + 0x1822) + -1;
            }
            iVar6 = (int)piStack_92 * 2;
            iVar7 = *(int *)(iVar6 + 0x1f8a) + *(int *)(iVar6 + 0x1d6a);
            if (((0x1f < iVar7) && (iVar7 < 0x221)) &&
               (iVar7 = FUN_1000_efc8(),
               iVar7 % (((3 - *(int *)0x181e) * 2 - *(int *)0x20c6) * 10) == 0)) {
              *(undefined2 *)(iVar6 + 0x1d6a) = 0;
            }
            iVar7 = *(int *)((int)piStack_92 * 2 + 0x1f8a) + *(int *)((int)piStack_92 * 2 + 0x1d6a);
            if ((iVar7 < -0x13f) || (0x37f < iVar7)) {
              *(undefined2 *)((int)piStack_92 * 2 + 0x1fca) = 0;
            }
            if (*(int *)((int)piStack_92 * 2 + 0x1fca) != 0) {
              iVar7 = (int)piStack_92 * 2;
              if (((*(int *)(iVar7 + 0x1822) == 4) && (iStack_26 < 4)) &&
                 ((0 < *(int *)(iVar7 + 0x1f8a) && (*(int *)(iVar7 + 0x1f8a) < 0x241)))) {
                for (iStack_10c = 0; iStack_10c < 4; iStack_10c = iStack_10c + 1) {
                  for (piStack_b4 = (int *)0x0; (int)piStack_b4 < 8;
                      piStack_b4 = (int *)((int)piStack_b4 + 1)) {
                    if (aiStack_8e[(int)piStack_b4] < -0xf) {
                      piStack_d8 = piStack_b4;
                      break;
                    }
                  }
                  aiStack_8e[(int)piStack_d8] = *(int *)((int)piStack_92 * 2 + 0x1fca) + 8;
                  aiStack_7e[(int)piStack_d8] =
                       iStack_10c * 0x10 + *(int *)((int)piStack_92 * 2 + 0x1f8a);
                  auStack_ea[(int)piStack_d8] = 0;
                }
                iStack_26 = iStack_26 + 4;
                piStack_c = (int *)0x1231;
                FUN_1000_cff4();
              }
              iVar7 = (int)piStack_92 * 2;
              if (*(int *)(iVar7 + 0x1822) == 4) {
                if (*(int *)(iVar7 + 0x1f8a) == 0x140) {
                  iStack_10e = 0;
                }
                else if (-*(int *)(iVar7 + 0x1f8a) == -0x140 ||
                         -*(int *)(iVar7 + 0x1f8a) + 0x140 < 0) {
                  iStack_10e = -1;
                }
                else {
                  iStack_10e = 1;
                }
                iVar7 = FUN_1000_efc8();
                *(int *)((int)piStack_92 * 2 + 0x1d6a) = (iVar7 % 4 + 5) * iStack_10e;
              }
            }
          }
          else if (iVar7 == 9) {
            iVar7 = FUN_1000_1288();
            return iVar7;
          }
        }
        piStack_92 = (int *)((int)piStack_92 + 1);
      } while( true );
    case 0x54:
      local_4 = 0;
      while ((pbVar4 = *(byte **)param_1, 0x2f < *pbVar4 && (*pbVar4 < 0x3a))) {
        in_CX = local_4 * 10;
        local_4 = (uint)*pbVar4 + in_CX + -0x30;
        *param_1 = *param_1 + 1;
      }
      if ((0x1d < local_4) && (local_4 < 0xf1)) {
        *(int *)0x1852 = local_4;
      }
    }
  }
  else {
switchD_1000_d77b_caseD_40:
    if (('@' < (char)param_1[4]) && ((char)param_1[4] < 'H')) {
      if ((**(char **)param_1 == '+') || (**(char **)param_1 == '#')) {
        *(char *)(param_1 + 4) = (char)param_1[4] + '\b';
        *param_1 = *param_1 + 1;
      }
      if (**(char **)param_1 == '-') {
        *(char *)(param_1 + 4) = (char)param_1[4] + '\x10';
        *param_1 = *param_1 + 1;
      }
      local_4 = 0;
      while ((pbVar4 = *(byte **)param_1, 0x2f < *pbVar4 && (*pbVar4 < 0x3a))) {
        in_CX = local_4 * 10;
        local_4 = (uint)*pbVar4 + in_CX + -0x30;
        *param_1 = *param_1 + 1;
      }
      param_1[6] = local_4;
      if ((local_4 < 1) || (0x20 < local_4)) {
        param_1[6] = param_1[7];
      }
      param_1[8] = *(int *)(param_1[6] * 4 + 0xfae);
      if (**(char **)param_1 == '.') {
        param_1[8] = param_1[8] * 3;
        param_1[8] = param_1[8] >> 1;
        *param_1 = *param_1 + 1;
      }
LAB_1000_d6a1:
      local_6 = 1;
    }
  }
LAB_1000_d79a:
  if (local_6 != 0) {
    return local_6;
  }
  goto LAB_1000_d4fe;
switchD_1000_d77b_caseD_51:
  do {
    if (*(int *)0x1844 == 0) goto LAB_1000_271f;
    do {
      iVar7 = FUN_1000_efc8();
      uVar8 = aiStack_6e[0] * 2;
      if (iVar7 % 0x20 + *(int *)0x1f8a != *(int *)(uVar8 + 0x1f8a)) {
        iVar7 = FUN_1000_efc8();
        uStack_162 = uVar8;
        if ((iVar7 % 0x20 - *(int *)(uVar8 + 0x1f8a)) + *(int *)0x1f8a < 1) {
          iVar7 = -1;
        }
        else {
          iVar7 = 1;
        }
        *(int *)(uVar8 + 0x1d6a) = *(int *)(uVar8 + 0x1d6a) + iVar7;
      }
LAB_1000_271f:
      uVar10 = aiStack_6e[0] * 2;
      uVar8 = *(uint *)(uVar10 + 0x1d6a);
      if ((0x14 < (int)((uVar8 ^ (int)uVar8 >> 0xf) - ((int)uVar8 >> 0xf))) && (uVar8 != 0)) {
        uStack_162 = uVar10;
        if ((int)uVar8 < 1) {
          iVar7 = -1;
        }
        else {
          iVar7 = 1;
        }
        *(int *)(uVar10 + 0x1d6a) = *(int *)(uVar10 + 0x1d6a) - iVar7;
      }
      iVar7 = aiStack_6e[0] * 2;
      if (*(int *)(iVar7 + 0x1822) < *(int *)(iVar7 + 0x1fca)) {
        *(int *)(iVar7 + 0x1d8a) = *(int *)(iVar7 + 0x1d8a) + -1;
      }
      if (*(int *)(aiStack_6e[0] * 2 + 0x1fca) < 0x1e) {
        piVar1 = (int *)(aiStack_6e[0] * 2 + 0x1d8a);
        *piVar1 = *piVar1 + 1;
      }
LAB_1000_25b9:
      do {
        aiStack_6e[0] = aiStack_6e[0] + 1;
        while (*(int *)0x17f4 < aiStack_6e[0]) {
          if (((aiStack_4c[3] == 0) && (aiStack_4c[4] <= aiStack_4c[2])) && (*(int *)0x1dc0 == 0)) {
LAB_1000_380a:
            FUN_1000_cf2c();
            FUN_1000_a23c();
            if ((aiStack_6e[2] == 1) && (*(int *)0x1842 == 0)) {
              FUN_1000_a29e();
            }
            iVar7 = *(int *)0x1844;
            out(0xa6,(char)iVar7);
            if ((aiStack_6e[2] == 1) || (*(int *)0x1842 == 0)) {
              iVar7 = FUN_1000_84ae();
            }
            return iVar7;
          }
          for (aiStack_6e[0] = 0; iVar7 = aiStack_6e[0], aiStack_6e[0] < *(int *)0x1d48;
              aiStack_6e[0] = aiStack_6e[0] + 1) {
            if (-0x10 < aiStack_15c[aiStack_6e[0]]) {
              iVar6 = *(int *)0x181e;
              aiStack_15c[aiStack_6e[0]] = aiStack_15c[aiStack_6e[0]] + (iVar6 + 2) * -6;
              aiStack_11a[iVar7] = aiStack_11a[iVar7] + aiStack_13c[iVar7] * (iVar6 + 2) * 2;
              for (iStack_72 = 1; iVar7 = aiStack_6e[0], iStack_72 <= *(int *)0x17f4;
                  iStack_72 = iStack_72 + 1) {
                if ((9 < *(int *)(iStack_72 * 2 + 0x1faa)) &&
                   (-0x20 < *(int *)(iStack_72 * 2 + 0x1fca))) {
                  uVar8 = *(uint *)(iStack_72 * 2 + 0x17f6);
                  if (uVar8 == 9) {
                    iVar6 = *(int *)(iStack_72 * 2 + 0x1f8a);
                    if (((iVar6 + -8 <= aiStack_11a[aiStack_6e[0]]) &&
                        (aiStack_11a[aiStack_6e[0]] <= iVar6 + 0x18)) &&
                       ((iVar6 = *(int *)(iStack_72 * 2 + 0x1fca),
                        iVar6 + -0xc <= aiStack_15c[aiStack_6e[0]] &&
                        (aiStack_15c[aiStack_6e[0]] <= iVar6 + 0x18)))) {
                      piStack_c = (int *)0x2f1f;
                      FUN_1000_824a();
                      if (*(int *)0x181e == 0) {
                        aiStack_15c[iVar7] = -0x10;
                      }
                      aiStack_4c[2] = aiStack_4c[2] + 1;
                      if (((*(int *)0x1dc0 == 0) &&
                          (iVar7 = iStack_72 * 2, 0x1f < *(int *)(iVar7 + 0x1f8a))) &&
                         (*(int *)(iVar7 + 0x1f8a) < 0x241)) {
                        FUN_1000_9d84();
                        *(int *)0x193e = *(int *)(iVar7 + 0x1f8a) + 8;
                        *(int *)0x1d40 = *(int *)(iVar7 + 0x1fca) + 8;
                        *(undefined2 *)0x1db2 = 0;
                        *(undefined2 *)0x1db4 = 8;
                        *(undefined2 *)0x1d44 = 0xffff;
                      }
                    }
                  }
                  else if (uVar8 < 10) {
                    cVar5 = (char)uVar8;
                    if (cVar5 == '\x01') {
                      iVar6 = *(int *)(iStack_72 * 2 + 0x1f8a);
                      if (iVar6 + -8 <= aiStack_11a[aiStack_6e[0]]) {
                        iVar6 = iVar6 + 0x18;
LAB_1000_2e40:
                        if (((aiStack_11a[aiStack_6e[0]] <= iVar6) &&
                            (iVar6 = *(int *)(iStack_72 * 2 + 0x1fca),
                            iVar6 + -0xc <= aiStack_15c[aiStack_6e[0]])) &&
                           (aiStack_15c[aiStack_6e[0]] <= iVar6 + 0x18)) {
                          piStack_c = (int *)0x2e64;
                          FUN_1000_824a();
                          aiStack_4c[2] = aiStack_4c[2] + 1;
                          if (*(int *)0x181e == 0) {
                            aiStack_15c[iVar7] = -0x10;
                          }
                        }
                      }
                    }
                    else if ((('\0' < (char)(cVar5 + -1)) && ((char)(cVar5 + -2) < '\x03')) &&
                            (iVar6 = *(int *)(iStack_72 * 2 + 0x1f8a),
                            iVar6 + -8 <= aiStack_11a[aiStack_6e[0]])) {
                      iVar6 = iVar6 + 0x38;
                      goto LAB_1000_2e40;
                    }
                  }
                }
              }
              if ((aiStack_11a[aiStack_6e[0]] < 0x10) || (0x260 < aiStack_11a[aiStack_6e[0]])) {
                aiStack_15c[aiStack_6e[0]] = -0x10;
              }
              if (aiStack_15c[aiStack_6e[0]] < -0xf) {
                aiStack_7e[3] = aiStack_7e[3] + -1;
              }
            }
          }
          aiStack_6e[0] = 0;
          do {
            iVar7 = aiStack_6e[0];
            if ((int)auStack_fc[aiStack_6e[0] + 1] < 0x160) {
              if (aiStack_6e[aiStack_6e[0] + 3] < 0x10) {
                aiStack_6e[aiStack_6e[0] + 3] = aiStack_6e[aiStack_6e[0] + 3] + 1;
              }
              auStack_fc[aiStack_6e[0] + 1] =
                   auStack_fc[aiStack_6e[0] + 1] + aiStack_6e[aiStack_6e[0] + 3];
              if ((((*(int *)0x1faa == 10) && (*(int *)0x1f8a + -4 <= aiStack_dc[iVar7 + 1])) &&
                  (aiStack_dc[iVar7 + 1] <= *(int *)0x1f8a + 0x34)) &&
                 ((*(int *)0x1fca <= (int)auStack_fc[iVar7 + 1] &&
                  ((int)auStack_fc[iVar7 + 1] <= *(int *)0x1fca + 0x18)))) {
                *(undefined2 *)0x1faa = 9;
                auStack_fc[iVar7 + 1] = 0x160;
                piStack_c = (int *)0x3066;
                FUN_1000_cff4();
              }
              if (0x15f < (int)auStack_fc[aiStack_6e[0] + 1]) {
                iStack_70 = iStack_70 + -1;
              }
            }
            aiStack_6e[0] = aiStack_6e[0] + 1;
          } while (aiStack_6e[0] < 0x10);
          for (aiStack_6e[0] = 0; iVar7 = aiStack_6e[0], aiStack_6e[0] < 0x10;
              aiStack_6e[0] = aiStack_6e[0] + 1) {
            if (aiStack_ba[aiStack_6e[0]] < 0x160) {
              aiStack_ba[aiStack_6e[0]] = aiStack_ba[aiStack_6e[0]] + aiStack_42[aiStack_6e[0]];
              aiStack_98[iVar7] = aiStack_98[iVar7] + aiStack_24[iVar7 + 1];
              if ((aiStack_98[iVar7] < 0x1c) || (0x260 < aiStack_98[iVar7])) {
                aiStack_ba[aiStack_6e[0]] = 0x160;
              }
              else {
                if ((((*(int *)0x1faa == 10) && (*(int *)0x1f8a + -2 <= aiStack_98[aiStack_6e[0]]))
                    && (aiStack_98[aiStack_6e[0]] <= *(int *)0x1f8a + 0x3a)) &&
                   ((*(int *)0x1fca + 6 <= aiStack_ba[aiStack_6e[0]] &&
                    (aiStack_ba[aiStack_6e[0]] <= *(int *)0x1fca + 0x1a)))) {
                  *(undefined2 *)0x1faa = 9;
                  aiStack_ba[aiStack_6e[0]] = 0x160;
                  piStack_c = (int *)0x30da;
                  FUN_1000_cff4();
                }
                if ((aiStack_ba[aiStack_6e[0]] < 0x160) && (-1 < aiStack_ba[aiStack_6e[0]]))
                goto LAB_1000_30f4;
              }
              aiStack_6e[1] = aiStack_6e[1] + -1;
            }
LAB_1000_30f4:
          }
          if (*(int *)0x1dc0 != 0) {
            if (*(int *)0x1d44 < 0) {
              *(int *)0x1d40 = *(int *)0x1d40 + *(int *)0x1db4;
            }
            else {
              *(int *)0x1d44 = *(int *)0x1d44 + -1;
            }
            if ((((*(int *)0x1f8a + -4 <= *(int *)0x193e) &&
                 (*(int *)0x193e <= *(int *)0x1f8a + 0x34)) &&
                (*(int *)0x1fca + 8 <= *(int *)0x1d40)) && (*(int *)0x1d40 <= *(int *)0x1fca + 0x20)
               ) {
              if (*(int *)0x1dc0 == 4) {
                piStack_c = (int *)0x31ab;
                FUN_1000_83b5();
                aiStack_6e[0] = 1;
                do {
                  iVar7 = aiStack_6e[0] * 2;
                  if (((*(int *)(iVar7 + 0x1faa) == 10) && (*(int *)(iVar7 + 0x1fca) != -0x20)) &&
                     ((-0x20 < *(int *)(iVar7 + 0x1f8a) && (*(int *)(iVar7 + 0x1f8a) < 0x260)))) {
                    aiStack_4c[2] = aiStack_4c[2] + 1;
                    piStack_c = (int *)0x31de;
                    FUN_1000_824a();
                  }
                  aiStack_6e[0] = aiStack_6e[0] + 1;
                } while (aiStack_6e[0] < 0x10);
                for (aiStack_6e[0] = 0; aiStack_6e[0] < *(int *)0x1d48;
                    aiStack_6e[0] = aiStack_6e[0] + 1) {
                  aiStack_15c[aiStack_6e[0]] = -0x10;
                }
                aiStack_7e[3] = 0;
                iStack_70 = 0;
                aiStack_6e[1] = 0;
                for (aiStack_6e[0] = 0; iVar7 = aiStack_6e[0], aiStack_6e[0] < 0x10;
                    aiStack_6e[0] = aiStack_6e[0] + 1) {
                  auStack_fc[aiStack_6e[0] + 1] = 0x160;
                  aiStack_ba[iVar7] = 0x160;
                }
                piStack_c = (int *)0x3238;
                FUN_1000_cff4();
                piStack_c = (int *)0x3242;
                FUN_1000_8425();
                FUN_1000_a25a();
              }
              else {
                FUN_1000_80f0();
              }
              FUN_1000_a0d8();
              *(undefined2 *)0x1dc0 = 0;
              piStack_c = (int *)0x3258;
              FUN_1000_cff4();
            }
            if ((*(int *)0x1d44 < 0) && (0x12f < *(int *)0x1d40)) {
              *(undefined2 *)0x1d40 = 0x130;
              *(undefined2 *)0x1d44 = 0x32;
            }
            if (*(int *)0x1d44 == 0) {
              *(undefined2 *)0x1dc0 = 0;
            }
          }
          for (aiStack_6e[0] = *(int *)0x17f4; 0 < aiStack_6e[0]; aiStack_6e[0] = aiStack_6e[0] + -1
              ) {
            iVar7 = aiStack_6e[0] * 2;
            *(int *)(iVar7 + 0x1f8a) = *(int *)(iVar7 + 0x1f8a) + *(int *)(iVar7 + 0x1d6a);
            *(int *)(iVar7 + 0x1fca) = *(int *)(iVar7 + 0x1fca) + *(int *)(iVar7 + 0x1d8a);
          }
          *(int *)0x1f8a = *(int *)0x1f8a + *(int *)0x1d6a;
          *(byte *)0x1844 = *(byte *)0x1844 ^ 1;
          piStack_c = (int *)(0x139 - (uint)(3 < *(int *)0x193c));
          piStack_e = (int *)0x4b;
          piStack_10 = (int *)0x0;
          uStack_12 = 4;
          uStack_14 = 0x32e0;
          FUN_1000_b854();
          for (aiStack_6e[0] = *(int *)0x17f4; 0 < aiStack_6e[0]; aiStack_6e[0] = aiStack_6e[0] + -1
              ) {
            if (-0x20 < *(int *)(aiStack_6e[0] * 2 + 0x1fca)) {
              uStack_164 = aiStack_6e[0] * 2;
              uVar8 = -(uint)(*(int *)(uStack_164 + 0x17f6) == 2) & 0x20;
              if ((-*(int *)(uStack_164 + 0x1f8a) == uVar8 ||
                   (int)-uVar8 < *(int *)(uStack_164 + 0x1f8a)) &&
                 (*(int *)(uStack_164 + 0x1f8a) < 0x260)) {
                if (*(int *)(aiStack_6e[0] * 2 + 0x1faa) < 10) {
                  uVar8 = *(uint *)(aiStack_6e[0] * 2 + 0x17f6);
                  if (uVar8 == 9) {
LAB_1000_335a:
                    piStack_c = (int *)0x3360;
                    FUN_1000_8562();
                  }
                  else if (uVar8 < 10) {
                    cVar5 = (char)uVar8;
                    if (cVar5 == '\x01') goto LAB_1000_335a;
                    if (('\0' < (char)(cVar5 + -1)) &&
                       (cVar5 == '\x04' || (char)(cVar5 + -2) < '\x02')) {
                      piStack_c = (int *)0x336c;
                      FUN_1000_85b8();
                    }
                  }
                }
                else {
                  iVar7 = *(int *)(aiStack_6e[0] * 2 + 0x17f6);
                  if (iVar7 == 1) {
                    uStack_162 = aiStack_6e[0] * 2;
                    if (*(int *)(uStack_162 + 0x1fca) < 0) {
                      uStack_164 = *(uint *)(uStack_162 + 0x1d6a);
                      uStack_160 = -(uint)(2 < *(int *)(uStack_162 + 0x1d6a)) & 2;
                      uStack_15e = -(uint)((int)uStack_164 < -2) & 2;
                      uStack_166 = -(uint)((int)uStack_164 < -7) & 2;
                      piStack_c = (int *)*(undefined2 *)(uStack_162 + 0x1fca);
                      piStack_e = (int *)*(int *)(uStack_162 + 0x1f8a);
                      piStack_10 = (int *)0x343e;
                      FUN_1000_c322();
                    }
                    else {
                      uStack_164 = aiStack_6e[0] * 2;
                      uStack_166 = *(uint *)(uStack_164 + 0x1d6a);
                      uStack_162 = -(uint)(2 < *(int *)(uStack_164 + 0x1d6a)) & 2;
                      uStack_160 = -(uint)((int)uStack_166 < -2) & 2;
                      uStack_15e = -(uint)((int)uStack_166 < -7) & 2;
LAB_1000_34d4:
                      piStack_c = (int *)*(undefined2 *)(aiStack_6e[0] * 2 + 0x1fca);
                      piStack_e = (int *)*(int *)(aiStack_6e[0] * 2 + 0x1f8a);
                      piStack_10 = (int *)0x34e0;
                      FUN_1000_bfd6();
                    }
                  }
                  else {
                    if (iVar7 == 2) {
                      piStack_c = (int *)((-(uint)(0 < *(int *)(aiStack_6e[0] * 2 + 0x1d6a)) & 2) +
                                         0x24);
LAB_1000_350e:
                      uStack_166 = aiStack_6e[0] * 2;
                      uVar8 = uStack_166;
                    }
                    else {
                      if (iVar7 != 3) {
                        if (iVar7 != 4) {
                          if (iVar7 == 9) {
                            uStack_166 = aiStack_6e[0] * 2;
                            goto LAB_1000_34d4;
                          }
                          goto LAB_1000_3307;
                        }
                        piStack_c = (int *)((-(uint)(0 < *(int *)(aiStack_6e[0] * 2 + 0x1d6a)) & 2)
                                           + 0x34);
                        goto LAB_1000_350e;
                      }
                      piStack_c = (int *)((*(int *)0x1844 + 6) * 2);
                      uVar8 = aiStack_6e[0] << 1;
                    }
                    piStack_e = (int *)*(int *)(uVar8 + 0x1fca);
                    piStack_10 = (int *)*(undefined2 *)(uVar8 + 0x1f8a);
                    uStack_12 = 0x351e;
                    FUN_1000_88a2();
                  }
                }
              }
            }
LAB_1000_3307:
          }
          iStack_72 = *(int *)0x181e * 0x10 + *(int *)0x1d42 + 0x11;
          for (aiStack_6e[0] = 0; aiStack_6e[0] < *(int *)0x1d48; aiStack_6e[0] = aiStack_6e[0] + 1)
          {
            if (-0x10 < aiStack_15c[aiStack_6e[0]]) {
              if (aiStack_15c[aiStack_6e[0]] < 0) {
                piStack_c = (int *)aiStack_15c[aiStack_6e[0]];
                piStack_e = (int *)aiStack_11a[aiStack_6e[0]];
                piStack_10 = (int *)0x35f2;
                FUN_1000_c322();
              }
              else {
                piStack_c = (int *)aiStack_15c[aiStack_6e[0]];
                piStack_e = (int *)aiStack_11a[aiStack_6e[0]];
                piStack_10 = (int *)0x35be;
                FUN_1000_bfd6();
              }
            }
          }
          iStack_72 = *(int *)0x1d42 + *(int *)0x184a + 0x1c;
          for (aiStack_6e[0] = 0; aiStack_6e[0] < 0x10; aiStack_6e[0] = aiStack_6e[0] + 1) {
            if ((int)auStack_fc[aiStack_6e[0] + 1] < 0x160) {
              if ((int)auStack_fc[aiStack_6e[0] + 1] < 0) {
                piStack_c = (int *)auStack_fc[aiStack_6e[0] + 1];
                piStack_e = (int *)aiStack_dc[aiStack_6e[0] + 1];
                piStack_10 = (int *)0x3649;
                FUN_1000_c322();
              }
              else {
                piStack_c = (int *)auStack_fc[aiStack_6e[0] + 1];
                piStack_e = (int *)aiStack_dc[aiStack_6e[0] + 1];
                piStack_10 = (int *)0x361b;
                FUN_1000_bfd6();
              }
            }
          }
          iStack_72 = *(int *)0x1844 + *(int *)0x1d46 + *(int *)0x1d42;
          aiStack_6e[0] = 0;
          do {
            if ((aiStack_ba[aiStack_6e[0]] < 0x160) && (-1 < aiStack_ba[aiStack_6e[0]])) {
              piStack_c = (int *)aiStack_ba[aiStack_6e[0]];
              piStack_e = (int *)aiStack_98[aiStack_6e[0]];
              piStack_10 = (int *)0x3681;
              FUN_1000_bfd6();
            }
            aiStack_6e[0] = aiStack_6e[0] + 1;
          } while (aiStack_6e[0] < 0x10);
          if (*(int *)0x1faa < 10) {
            piStack_c = (int *)0x369a;
            FUN_1000_85b8();
          }
          else {
            piStack_c = (int *)((uint)(*(int *)0x193c < 4) + *(int *)0x1fca);
            piStack_e = (int *)*(undefined2 *)0x1f8a;
            piStack_10 = (int *)0x36c4;
            FUN_1000_bfd6();
            piStack_c = (int *)((uint)(*(int *)0x193c < 4) + *(int *)0x1fca);
            piStack_e = (int *)(*(int *)0x1f8a + 0x20);
            piStack_10 = (int *)0x36ef;
            FUN_1000_bfd6();
          }
          if ((*(int *)0x1dc0 != 0) &&
             (((0xf < *(int *)0x1d44 || (*(int *)0x1d44 < 1)) || (*(int *)0x1844 != 0)))) {
            if ((*(int *)0x193c < 4) && (0 < *(int *)0x1d44)) {
              uStack_166 = 1;
            }
            else {
              uStack_166 = 0;
            }
            piStack_c = (int *)((uint)(uStack_166 != 0) + *(int *)0x1d40);
            piStack_e = (int *)*(int *)0x193e;
            piStack_10 = (int *)0x3749;
            FUN_1000_bfd6();
          }
          FUN_1000_8292();
          for (aiStack_6e[0] = *(int *)0x17f4; 0 < aiStack_6e[0]; aiStack_6e[0] = aiStack_6e[0] + -1
              ) {
            if (-1 < *(int *)(aiStack_6e[0] * 2 + 0x1fca)) {
              iVar7 = *(int *)(aiStack_6e[0] * 2 + 0x17f6);
              if (iVar7 == 1) {
LAB_1000_375b:
                piStack_c = (int *)0x3;
              }
              else {
                if (((iVar7 != 2) && (iVar7 != 3)) && (iVar7 != 4)) {
                  if (iVar7 != 9) goto LAB_1000_3769;
                  goto LAB_1000_375b;
                }
                piStack_c = (int *)0x7;
              }
              piStack_e = (int *)aiStack_6e[0];
              piStack_10 = (int *)0x3766;
              FUN_1000_890a();
            }
LAB_1000_3769:
          }
          piStack_c = (int *)0x7;
          piStack_e = (int *)0x0;
          piStack_10 = (int *)0x37d2;
          FUN_1000_890a();
          while (iVar7 = FUN_1000_bf8e(), iVar7 != 0) {
            FUN_1000_bf98();
          }
          piStack_c = (int *)0x37e9;
          FUN_1000_e538();
          do {
            uVar8 = FUN_1000_bb38();
          } while (uVar8 < *(uint *)0x1820);
          *(undefined2 *)0xdd0 = 0;
          out(0xa4,(byte)*(undefined2 *)0x1844);
          out(0xa6,(byte)*(undefined2 *)0x1844 ^ 1);
          FUN_1000_b4ee();
          FUN_1000_8184();
          piStack_c = (int *)0x2170;
          aiStack_7e[4] = FUN_1000_e3c8();
          if (((aiStack_7e[4] != 0) || (*(int *)0x213e != 0)) &&
             (FUN_1000_9e70(), *(int *)0x184c == 0)) goto LAB_1000_380a;
          *(undefined2 *)0x1d6a = 0;
          if (*(int *)0x1faa < 10) {
            uStack_15e = *(uint *)0x1faa;
            *(int *)0x1faa = *(int *)0x1faa + -1;
            if ((int)uStack_15e < 1) {
              aiStack_6e[2] = 1;
              *(int *)0x1842 = *(int *)0x1842 + -1;
              goto LAB_1000_380a;
            }
          }
          else {
            if ((*(int *)0x2136 != 0) && (*(int *)0x1d4a + *(int *)0x1f8a < 0x210)) {
              *(undefined2 *)0x1d6a = *(undefined2 *)0x1d4a;
            }
            if ((*(int *)0x2134 != 0) && (0x2f < *(int *)0x1f8a - *(int *)0x1d4a)) {
              *(int *)0x1d6a = -*(int *)0x1d4a;
            }
            if ((((*(int *)0x2138 != 0) && (*(int *)0x212c == 0)) ||
                ((*(int *)0x213a != 0 && (*(int *)0x212c != 0)))) &&
               ((iVar7 = *(int *)0x20c6 * 2 - *(int *)0x1d48,
                -aiStack_7e[3] != iVar7 && aiStack_7e[3] <= -iVar7 && (iStack_11c != 0)))) {
              for (aiStack_6e[0] = 0; aiStack_6e[0] < *(int *)0x1d48;
                  aiStack_6e[0] = aiStack_6e[0] + 1) {
                if (aiStack_15c[aiStack_6e[0]] < -0xf) {
                  iStack_72 = aiStack_6e[0];
                  break;
                }
              }
              iVar7 = iStack_72;
              aiStack_15c[iStack_72] = *(int *)0x1fca + 0x10;
              aiStack_11a[iVar7] = *(int *)0x1f8a + 5;
              aiStack_7e[3] = aiStack_7e[3] + 1;
              aiStack_13c[iVar7] = 0;
              iStack_11c = 0;
              if (*(int *)0x20c6 == 1) {
                for (aiStack_6e[0] = 0; aiStack_6e[0] < *(int *)0x1d48;
                    aiStack_6e[0] = aiStack_6e[0] + 1) {
                  if (aiStack_15c[aiStack_6e[0]] < -0xf) {
                    iStack_72 = aiStack_6e[0];
                    break;
                  }
                }
                iVar7 = iStack_72;
                aiStack_15c[iStack_72] = *(int *)0x1fca + 0x10;
                aiStack_11a[iVar7] = *(int *)0x1f8a + 5;
                aiStack_13c[iVar7] = -1;
                for (aiStack_6e[0] = 0; aiStack_6e[0] < *(int *)0x1d48;
                    aiStack_6e[0] = aiStack_6e[0] + 1) {
                  if (aiStack_15c[aiStack_6e[0]] < -0xf) {
                    iStack_72 = aiStack_6e[0];
                    break;
                  }
                }
                iVar7 = iStack_72;
                aiStack_15c[iStack_72] = *(int *)0x1fca + 0x10;
                aiStack_11a[iVar7] = *(int *)0x1f8a + 5;
                aiStack_13c[iVar7] = 1;
                aiStack_7e[3] = aiStack_7e[3] + 2;
              }
              piStack_c = (int *)0x230f;
              FUN_1000_cff4();
            }
            if ((((*(int *)0x213a != 0) && (*(int *)0x212c == 0)) ||
                ((*(int *)0x2138 != 0 && (*(int *)0x212c != 0)))) &&
               ((iVar7 = *(int *)0x20c6 * 2 - *(int *)0x1d48,
                -aiStack_7e[3] != iVar7 && aiStack_7e[3] <= -iVar7 && (iStack_11c != 0)))) {
              for (aiStack_6e[0] = 0; aiStack_6e[0] < *(int *)0x1d48;
                  aiStack_6e[0] = aiStack_6e[0] + 1) {
                if (aiStack_15c[aiStack_6e[0]] < -0xf) {
                  iStack_72 = aiStack_6e[0];
                  break;
                }
              }
              iVar7 = iStack_72;
              aiStack_15c[iStack_72] = *(int *)0x1fca + 0x10;
              aiStack_11a[iVar7] = *(int *)0x1f8a + 0x2c;
              aiStack_7e[3] = aiStack_7e[3] + 1;
              aiStack_13c[iVar7] = 0;
              iStack_11c = 0;
              if (*(int *)0x20c6 == 1) {
                for (aiStack_6e[0] = 0; aiStack_6e[0] < *(int *)0x1d48;
                    aiStack_6e[0] = aiStack_6e[0] + 1) {
                  if (aiStack_15c[aiStack_6e[0]] < -0xf) {
                    iStack_72 = aiStack_6e[0];
                    break;
                  }
                }
                iVar7 = iStack_72;
                aiStack_15c[iStack_72] = *(int *)0x1fca + 0x10;
                aiStack_11a[iVar7] = *(int *)0x1f8a + 0x2c;
                aiStack_13c[iVar7] = -1;
                for (aiStack_6e[0] = 0; aiStack_6e[0] < *(int *)0x1d48;
                    aiStack_6e[0] = aiStack_6e[0] + 1) {
                  if (aiStack_15c[aiStack_6e[0]] < -0xf) {
                    iStack_72 = aiStack_6e[0];
                    break;
                  }
                }
                iVar7 = iStack_72;
                aiStack_15c[iStack_72] = *(int *)0x1fca + 0x10;
                aiStack_11a[iVar7] = *(int *)0x1f8a + 0x2c;
                aiStack_13c[iVar7] = 1;
                aiStack_7e[3] = aiStack_7e[3] + 2;
              }
              piStack_c = (int *)0x2435;
              FUN_1000_cff4();
            }
            if ((*(int *)0x2138 == 0) && (*(int *)0x213a == 0)) {
              iStack_11c = 1;
            }
          }
          aiStack_4c[3] = 0;
          aiStack_6e[0] = 1;
        }
        if (-0x20 < *(int *)(aiStack_6e[0] * 2 + 0x1fca)) {
          aiStack_4c[3] = aiStack_4c[3] + 1;
        }
        iVar7 = aiStack_6e[0] * 2;
        if (*(int *)(iVar7 + 0x1faa) < 10) {
          piVar1 = (int *)(iVar7 + 0x1faa);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            *(undefined2 *)(iVar7 + 0x1fca) = 0xffe0;
            *(undefined2 *)(iVar7 + 0x1faa) = 10;
          }
          goto LAB_1000_25b9;
        }
        iVar7 = *(int *)(aiStack_6e[0] * 2 + 0x17f6);
        if (iVar7 != 1) {
          if (iVar7 == 2) {
            iVar7 = FUN_1000_efc8();
            if (((iVar7 % 10 == 0) && (iVar7 = aiStack_6e[0] * 2, *(int *)(iVar7 + 0x1fca) < -0x1f))
               && (aiStack_4c[2] < aiStack_4c[4])) {
              iVar6 = FUN_1000_efc8();
              *(int *)(iVar7 + 0x1fca) = (iVar6 % 3 + 1) * 0x20;
              iVar6 = FUN_1000_efc8();
              iVar6 = (iVar6 % 2) * 0x4c0 + -0x140;
              *(int *)(iVar7 + 0x1f8a) = iVar6;
              if (iVar6 == 0x140) {
                uStack_162 = 0;
              }
              else if (-*(int *)(iVar7 + 0x1f8a) == -0x140 || -*(int *)(iVar7 + 0x1f8a) + 0x140 < 0)
              {
                uStack_162 = 0xffff;
              }
              else {
                uStack_162 = 1;
              }
              iVar7 = FUN_1000_efc8();
              *(int *)(aiStack_6e[0] * 2 + 0x1d6a) = (iVar7 % 4 + 0xc) * uStack_162;
              *(undefined2 *)(aiStack_6e[0] * 2 + 0x1d8a) = 0;
            }
            iVar7 = *(int *)(aiStack_6e[0] * 2 + 0x1f8a) + *(int *)(aiStack_6e[0] * 2 + 0x1d6a);
            if ((iVar7 < -0x13f) || (0x37f < iVar7)) {
              *(undefined2 *)(aiStack_6e[0] * 2 + 0x1fca) = 0xffe0;
            }
            if (-0x20 < *(int *)(aiStack_6e[0] * 2 + 0x1fca)) {
              iVar7 = FUN_1000_efc8();
              iVar7 = iVar7 % ((3 - *(int *)0x20c6) * 10 + *(int *)0x181e * -0xd);
              if ((((iVar7 == 0) && (iStack_70 < 0x10)) &&
                  (0 < *(int *)(aiStack_6e[0] * 2 + 0x1f8a))) &&
                 (*(int *)(aiStack_6e[0] * 2 + 0x1f8a) < 0x241)) {
                iStack_72 = iVar7;
                do {
                  if (0x15f < (int)auStack_fc[iStack_72 + 1]) {
                    iStack_74 = iStack_72;
                  }
                  iVar7 = iStack_74;
                  iStack_72 = iStack_72 + 1;
                } while (iStack_72 < 0x10);
                iVar6 = aiStack_6e[0] * 2;
                auStack_fc[iStack_74 + 1] = *(int *)(iVar6 + 0x1fca) + 0x14;
                aiStack_dc[iVar7 + 1] = *(int *)(iVar6 + 0x1f8a) + 0x10;
                aiStack_6e[iVar7 + 3] = 0;
                iStack_70 = iStack_70 + 1;
              }
            }
          }
          else if (iVar7 == 3) {
            iVar7 = FUN_1000_efc8();
            if (((iVar7 % ((7 - *(int *)0x20c6) * 0x14 + *(int *)0x181e * -0x1e) == 0) &&
                (iVar7 = aiStack_6e[0] * 2, *(int *)(iVar7 + 0x1fca) < -0x1f)) &&
               (aiStack_4c[2] < aiStack_4c[4])) {
              *(undefined2 *)(iVar7 + 0x1fca) = 0xffe1;
              iVar6 = FUN_1000_efc8();
              iVar6 = iVar6 % 0x200 + 0x20;
              *(int *)(iVar7 + 0x1f8a) = iVar6;
              if (iVar6 == 0x140) {
                uStack_162 = 0;
              }
              else if (-iVar6 == -0x140 || -iVar6 + 0x140 < 0) {
                uStack_162 = 0xffff;
              }
              else {
                uStack_162 = 1;
              }
              iVar7 = FUN_1000_efc8();
              iVar6 = aiStack_6e[0] * 2;
              *(int *)(iVar6 + 0x1d6a) = (int)(iVar7 * uStack_162) % 8;
              iVar7 = FUN_1000_efc8();
              *(int *)(iVar6 + 0x1d8a) = iVar7 % 8 + 8;
            }
            if (-0x20 < *(int *)(aiStack_6e[0] * 2 + 0x1fca)) {
              if (0x32 < *(int *)(aiStack_6e[0] * 2 + 0x1fca)) {
                piVar1 = (int *)(aiStack_6e[0] * 2 + 0x1d8a);
                *piVar1 = *piVar1 + -1;
              }
              iVar7 = FUN_1000_efc8();
              iVar7 = iVar7 % ((3 - *(int *)0x20c6) * 10 + *(int *)0x181e * -0xd);
              if ((iVar7 == 0) && (aiStack_6e[1] < 0x10)) {
                iStack_72 = iVar7;
                do {
                  if (0x15f < aiStack_ba[iStack_72]) {
                    iStack_74 = iStack_72;
                  }
                  iVar7 = iStack_74;
                  iStack_72 = iStack_72 + 1;
                } while (iStack_72 < 0x10);
                iVar6 = aiStack_6e[0] * 2;
                aiStack_ba[iStack_74] = *(int *)(iVar6 + 0x1fca) + 0x18;
                iVar6 = *(int *)(iVar6 + 0x1f8a) + 0x20;
                aiStack_98[iVar7] = iVar6;
                uVar8 = 0x20 - (iVar6 - *(int *)0x1f8a);
                uVar10 = (int)uVar8 >> 0xf;
                if ((int)((uVar8 ^ uVar10) - uVar10) < 0x21) {
                  iVar6 = FUN_1000_efc8();
                  iVar7 = iStack_74;
                  aiStack_42[iStack_74] = iVar6 % 6 + 8;
                  iVar6 = FUN_1000_efc8();
                  aiStack_24[iVar7 + 1] = iVar6 % 5 + -2;
                }
                else {
                  iVar6 = FUN_1000_efc8();
                  aiStack_42[iVar7] = iVar6 % 6 + 8;
                  iVar6 = *(int *)0x1f8a;
                  if (aiStack_98[iVar7] == iVar6) {
                    uStack_162 = 0;
                  }
                  else if (iVar6 == aiStack_98[iVar7] || iVar6 - aiStack_98[iVar7] < 0) {
                    uStack_162 = 0xffff;
                  }
                  else {
                    uStack_162 = 1;
                  }
                  iVar7 = FUN_1000_efc8();
                  aiStack_24[iStack_74 + 1] = (iVar7 % 6 + 2) * uStack_162;
                }
                aiStack_6e[1] = aiStack_6e[1] + 1;
              }
            }
          }
          else if (iVar7 == 4) {
            iVar7 = FUN_1000_efc8();
            if (((iVar7 % 0x14 == 0) &&
                (iVar7 = aiStack_6e[0] * 2, *(int *)(iVar7 + 0x1fca) < -0x1f)) &&
               (aiStack_4c[2] < aiStack_4c[4])) {
              iVar6 = FUN_1000_efc8();
              *(int *)(iVar7 + 0x1fca) = (iVar6 % 5 + 1) * 0x20;
              iVar6 = FUN_1000_efc8();
              iVar6 = (iVar6 % 2) * 0x4c0 + -0x140;
              *(int *)(iVar7 + 0x1f8a) = iVar6;
              if (iVar6 == 0x140) {
                uStack_162 = 0;
              }
              else if (-*(int *)(iVar7 + 0x1f8a) == -0x140 || -*(int *)(iVar7 + 0x1f8a) + 0x140 < 0)
              {
                uStack_162 = 0xffff;
              }
              else {
                uStack_162 = 1;
              }
              iVar6 = aiStack_6e[0] * 2;
              *(int *)(iVar6 + 0x1d6a) = uStack_162 * 0x14;
              *(undefined2 *)(iVar6 + 0x1d8a) = 0;
              iVar7 = FUN_1000_efc8();
              *(int *)(iVar6 + 0x1822) = iVar7 % 0x240 + 0x20;
            }
            iVar7 = *(int *)(aiStack_6e[0] * 2 + 0x1f8a) + *(int *)(aiStack_6e[0] * 2 + 0x1d6a);
            if ((iVar7 < -0x13f) || (0x37f < iVar7)) {
              *(undefined2 *)(aiStack_6e[0] * 2 + 0x1fca) = 0xffe0;
            }
            if (-0x20 < *(int *)(aiStack_6e[0] * 2 + 0x1fca)) {
              uStack_15e = aiStack_6e[0] * 2;
              uStack_162 = *(uint *)(uStack_15e + 0x1822);
              uStack_160 = *(uint *)(uStack_15e + 0x1f8a);
              uStack_164 = (uint)(*(int *)(uStack_15e + 0x1f8a) < (int)uStack_162);
              if ((int)(*(uint *)(uStack_15e + 0x1f8a) + *(int *)(uStack_15e + 0x1d6a)) <
                  (int)uStack_162 != uStack_164) {
                for (iStack_9a = 0; iStack_9a < 5; iStack_9a = iStack_9a + 1) {
                  iStack_72 = 0;
                  do {
                    if (0x15f < aiStack_ba[iStack_72]) {
                      iStack_74 = iStack_72;
                    }
                    iVar7 = iStack_74;
                    iStack_72 = iStack_72 + 1;
                  } while (iStack_72 < 0x10);
                  iVar6 = aiStack_6e[0] * 2;
                  aiStack_ba[iStack_74] = *(int *)(iVar6 + 0x1fca) + 0xe;
                  iVar6 = *(int *)(iVar6 + 0x1f8a) + 0xe;
                  aiStack_98[iVar7] = iVar6;
                  uVar8 = 0x20 - (iVar6 - *(int *)0x1f8a);
                  uVar10 = (int)uVar8 >> 0xf;
                  if ((int)((uVar8 ^ uVar10) - uVar10) < 0x21) {
                    iVar6 = FUN_1000_efc8();
                    iVar7 = iStack_74;
                    aiStack_42[iStack_74] = iVar6 % 6 + 8;
                    iVar6 = FUN_1000_efc8();
                    aiStack_24[iVar7 + 1] = iVar6 % 5 + -2;
                  }
                  else {
                    iVar6 = FUN_1000_efc8();
                    aiStack_42[iVar7] = iVar6 % 6 + 8;
                    iVar6 = *(int *)0x1f8a;
                    if (aiStack_98[iVar7] == iVar6) {
                      uStack_164 = 0;
                    }
                    else if (iVar6 == aiStack_98[iVar7] || iVar6 - aiStack_98[iVar7] < 0) {
                      uStack_164 = 0xffff;
                    }
                    else {
                      uStack_164 = 1;
                    }
                    iVar7 = FUN_1000_efc8();
                    aiStack_24[iStack_74 + 1] = (iVar7 % 6 + 2) * uStack_164;
                  }
                  aiStack_6e[1] = aiStack_6e[1] + 1;
                }
                iVar7 = aiStack_6e[0] * 2;
                *(undefined2 *)(iVar7 + 0x1faa) = 9;
                *(undefined2 *)(iVar7 + 0x1d6a) = 0;
                *(undefined2 *)(iVar7 + 0x1d8a) = 0;
              }
            }
          }
          else if (iVar7 == 9) {
            iVar7 = FUN_1000_efc8();
            if (((iVar7 % 0xf == 0) && (iVar7 = aiStack_6e[0] * 2, *(int *)(iVar7 + 0x1fca) < -0x1f)
                ) && (aiStack_4c[2] < aiStack_4c[4])) {
              iVar6 = FUN_1000_efc8();
              *(int *)(iVar7 + 0x1822) = (iVar6 % 3 + 3) * 0x20;
              iVar6 = FUN_1000_efc8();
              *(int *)(iVar7 + 0x1fca) = (iVar6 % 2) * 0x40 + *(int *)(iVar7 + 0x1822) + -0x20;
              iVar6 = FUN_1000_efc8();
              iVar6 = (iVar6 % 2) * 0x4e0 + -0x140;
              *(int *)(iVar7 + 0x1f8a) = iVar6;
              if (iVar6 == 0x140) {
                uStack_164 = 0;
              }
              else if (-*(int *)(iVar7 + 0x1f8a) == -0x140 || -*(int *)(iVar7 + 0x1f8a) + 0x140 < 0)
              {
                uStack_164 = 0xffff;
              }
              else {
                uStack_164 = 1;
              }
              iVar7 = FUN_1000_efc8();
              *(int *)(aiStack_6e[0] * 2 + 0x1d6a) = (iVar7 % 5 + 5) * uStack_164;
              *(undefined2 *)(aiStack_6e[0] * 2 + 0x1d8a) = 0;
            }
            if (aiStack_4c[4] <= aiStack_4c[2]) {
              iVar7 = *(int *)(aiStack_6e[0] * 2 + 0x1d6a);
              if (iVar7 == 0) {
                uStack_164 = 0;
              }
              else if (iVar7 < 1) {
                uStack_164 = 0xffff;
              }
              else {
                uStack_164 = 1;
              }
              *(int *)(aiStack_6e[0] * 2 + 0x1d6a) = uStack_164 * 10;
            }
            iVar7 = *(int *)(aiStack_6e[0] * 2 + 0x1f8a) + *(int *)(aiStack_6e[0] * 2 + 0x1d6a);
            if ((iVar7 < -0x13f) || (0x39f < iVar7)) {
              *(undefined2 *)(aiStack_6e[0] * 2 + 0x1fca) = 0xffe0;
              *(undefined2 *)(aiStack_6e[0] * 2 + 0x1d8a) = 0;
            }
            if (-0x20 < *(int *)(aiStack_6e[0] * 2 + 0x1fca)) {
              uVar8 = aiStack_6e[0] * 2;
              if (*(int *)(uVar8 + 0x1822) != *(int *)(uVar8 + 0x1fca)) {
                uStack_164 = uVar8;
                if (-(*(int *)(uVar8 + 0x1fca) - *(int *)(uVar8 + 0x1822)) < 1) {
                  iVar7 = -1;
                }
                else {
                  iVar7 = 1;
                }
                *(int *)(uVar8 + 0x1d8a) = *(int *)(uVar8 + 0x1d8a) + iVar7;
              }
            }
          }
          goto LAB_1000_25b9;
        }
        iVar7 = FUN_1000_efc8();
        if (((iVar7 % 0x14 == 0) && (iVar7 = aiStack_6e[0] * 2, *(int *)(iVar7 + 0x1fca) < -0x1f))
           && (aiStack_4c[2] < aiStack_4c[4])) {
          iVar6 = FUN_1000_efc8();
          *(int *)(iVar7 + 0x1fca) = iVar6 % 100 + 0x3c;
          iVar6 = FUN_1000_efc8();
          iVar6 = (iVar6 % 2) * 0x4e0 + -0x140;
          *(int *)(iVar7 + 0x1f8a) = iVar6;
          if (iVar6 == 0x140) {
            uStack_15e = 0;
          }
          else if (-*(int *)(iVar7 + 0x1f8a) == -0x140 || -*(int *)(iVar7 + 0x1f8a) + 0x140 < 0) {
            uStack_15e = 0xffff;
          }
          else {
            uStack_15e = 1;
          }
          iVar7 = FUN_1000_efc8();
          iVar6 = aiStack_6e[0] * 2;
          *(int *)(iVar6 + 0x1d6a) = (iVar7 % 3 + 1) * uStack_15e;
          iVar7 = FUN_1000_efc8();
          *(int *)(iVar6 + 0x1d8a) = iVar7 % 7 + 3;
          iVar7 = FUN_1000_efc8();
          *(int *)(iVar6 + 0x1822) = iVar7 % 0x32 + (0x32 - *(int *)(iVar6 + 0x1d8a)) * 3;
        }
        if (aiStack_4c[4] <= aiStack_4c[2]) {
          *(undefined2 *)(aiStack_6e[0] * 2 + 0x1d8a) = 0xfff8;
        }
        iVar7 = *(int *)(aiStack_6e[0] * 2 + 0x1f8a) + *(int *)(aiStack_6e[0] * 2 + 0x1d6a);
        if ((iVar7 < -0x13f) || (0x39f < iVar7)) {
          uVar8 = aiStack_6e[0] * 2;
          *(undefined2 *)(uVar8 + 0x1fca) = 0xffe0;
          iVar7 = FUN_1000_efc8();
          if (iVar7 % 0x20 + *(int *)0x1f8a != *(int *)(uVar8 + 0x1f8a)) {
            iVar7 = FUN_1000_efc8();
            uStack_15e = uVar8;
            if ((iVar7 % 0x20 - *(int *)(uVar8 + 0x1f8a)) + *(int *)0x1f8a < 1) {
              iVar7 = -1;
            }
            else {
              iVar7 = 1;
            }
            *(int *)(uVar8 + 0x1d6a) = *(int *)(uVar8 + 0x1d6a) + iVar7;
          }
        }
      } while (*(int *)(aiStack_6e[0] * 2 + 0x1fca) < -0x1f);
      iVar7 = FUN_1000_efc8();
      iVar7 = iVar7 % (*(int *)0x181e * -0x14 + *(int *)0x20c6 * -0xf + 0x32);
      if ((((iVar7 == 0) && (iStack_70 < 0x10)) && (0 < *(int *)(aiStack_6e[0] * 2 + 0x1f8a))) &&
         (*(int *)(aiStack_6e[0] * 2 + 0x1f8a) < 0x261)) {
        iStack_72 = iVar7;
        do {
          if (0x15f < (int)auStack_fc[iStack_72 + 1]) {
            iStack_74 = iStack_72;
          }
          iVar7 = iStack_74;
          iStack_72 = iStack_72 + 1;
        } while (iStack_72 < 0x10);
        iVar6 = aiStack_6e[0] * 2;
        auStack_fc[iStack_74 + 1] = *(int *)(iVar6 + 0x1fca) + 0xc;
        aiStack_dc[iVar7 + 1] = *(int *)(iVar6 + 0x1f8a) + 8;
        aiStack_6e[iVar7 + 3] = 0;
        iStack_70 = iStack_70 + 1;
      }
      iVar7 = *(int *)(aiStack_6e[0] * 2 + 0x1d6a);
      if (iVar7 == 0) {
        uStack_15e = 0;
      }
      else if (iVar7 < 1) {
        uStack_15e = 0xffff;
      }
      else {
        uStack_15e = 1;
      }
      uStack_162 = *(int *)0x1f8a - *(int *)(aiStack_6e[0] * 2 + 0x1f8a);
      if (uStack_162 == 0xfff0) {
        uVar8 = 0;
      }
      else if (uStack_162 == 0xfff0 || (int)(uStack_162 + 0x10) < 0) {
        uVar8 = 0xffff;
      }
      else {
        uVar8 = 1;
      }
    } while (uVar8 != uStack_15e);
  } while( true );
code_r0x00016edc:
  piVar9 = piStack_34c;
  if (bVar11 == iVar7 < 0) {
    if (0 < iStack_34a) {
      for (piStack_34c = (int *)0x0; (int)piStack_34c < 0x10;
          piStack_34c = (int *)((int)piStack_34c + 1)) {
        if (aiStack_3b4[(int)piStack_34c] < 0) {
          aiStack_3b4[(int)piStack_34c] = 0x160;
        }
        piVar9 = piStack_34c;
        if (aiStack_3b4[(int)piStack_34c] < 0x160) {
          if (0 < aiStack_346[(int)piStack_34c]) {
            aiStack_346[(int)piStack_34c] = aiStack_346[(int)piStack_34c] + -1;
            iVar7 = *(int *)0x1f8a - aiStack_392[(int)piStack_34c];
            if (iVar7 == -0x20) {
              iVar7 = 0;
            }
            else if (iVar7 == -0x20 || iVar7 + 0x20 < 0) {
              iVar7 = -1;
            }
            else {
              iVar7 = 1;
            }
            auStack_fc[(int)piStack_34c] = auStack_fc[(int)piStack_34c] + *(int *)0x1844 * iVar7;
            iVar7 = *(int *)0x1fca - aiStack_3b4[(int)piStack_34c];
            if (iVar7 == -0x10) {
              iVar7 = 0;
            }
            else if (iVar7 == -0x10 || iVar7 + 0x10 < 0) {
              iVar7 = -1;
            }
            else {
              iVar7 = 1;
            }
            auStack_1e4[(int)piStack_34c] = auStack_1e4[(int)piStack_34c] + *(int *)0x1844 * iVar7;
            uVar8 = auStack_fc[(int)piStack_34c];
            if (8 < (int)((uVar8 ^ (int)uVar8 >> 0xf) - ((int)uVar8 >> 0xf))) {
              if (uVar8 == 0) {
                iVar7 = 0;
              }
              else if ((int)uVar8 < 1) {
                iVar7 = -1;
              }
              else {
                iVar7 = 1;
              }
              auStack_fc[(int)piStack_34c] = iVar7 << 3;
            }
            uVar8 = auStack_1e4[(int)piStack_34c];
            if (8 < (int)((uVar8 ^ (int)uVar8 >> 0xf) - ((int)uVar8 >> 0xf))) {
              if (uVar8 == 0) {
                iVar7 = 0;
              }
              else if ((int)uVar8 < 1) {
                iVar7 = -1;
              }
              else {
                iVar7 = 1;
              }
              auStack_1e4[(int)piStack_34c] = iVar7 << 3;
            }
          }
          aiStack_392[(int)piStack_34c] =
               aiStack_392[(int)piStack_34c] + auStack_fc[(int)piStack_34c];
          piVar1 = aiStack_3b4 + (int)piVar9;
          *piVar1 = *piVar1 + auStack_1e4[(int)piVar9];
          if (((*piVar1 < 0) || (aiStack_392[(int)piVar9] < 0)) ||
             (0x277 < aiStack_392[(int)piVar9])) {
            aiStack_3b4[(int)piStack_34c] = 0x160;
          }
          else {
            if (((*(int *)0x1faa == 10) && (*(int *)0x1f8a <= aiStack_392[(int)piStack_34c])) &&
               ((aiStack_392[(int)piStack_34c] <= *(int *)0x1f8a + 0x3a &&
                ((*(int *)0x1fca + 6 <= aiStack_3b4[(int)piStack_34c] &&
                 (aiStack_3b4[(int)piStack_34c] <= *(int *)0x1fca + 0x1a)))))) {
              *(undefined2 *)0x1faa = 9;
              aiStack_3b4[(int)piStack_34c] = 0x160;
              piStack_c = (int *)0x72ee;
              FUN_1000_cff4();
            }
            if ((aiStack_3b4[(int)piStack_34c] < 0x160) && (-1 < aiStack_3b4[(int)piStack_34c]))
            goto LAB_1000_7241;
          }
          iStack_34a = iStack_34a + -1;
        }
LAB_1000_7241:
      }
    }
    if (iStack_3b6 == 1) {
      if (0 < iStack_3b8) {
        for (piStack_34c = (int *)0x0; (int)piStack_34c < 4;
            piStack_34c = (int *)((int)piStack_34c + 1)) {
          if (aiStack_dc[(int)piStack_34c] < 0x160) {
            piVar1 = (int *)(&stack0xfff6 + (int)piStack_34c * 2);
            *piVar1 = *piVar1 + aiStack_23c[(int)piStack_34c];
            if ((*piVar1 < 0) || (0x25f < *(int *)(&stack0xfff6 + (int)piStack_34c * 2))) {
              aiStack_dc[(int)piStack_34c] = 0x160;
              iStack_3b8 = iStack_3b8 + -1;
            }
            else if ((((*(int *)0x1faa == 10) &&
                      (*(int *)0x1f8a + -0x14 <= *(int *)(&stack0xfff6 + (int)piStack_34c * 2))) &&
                     (*(int *)(&stack0xfff6 + (int)piStack_34c * 2) <= *(int *)0x1f8a + 0x34)) &&
                    ((*(int *)0x1fca + 6 <= aiStack_dc[(int)piStack_34c] &&
                     (aiStack_dc[(int)piStack_34c] <= *(int *)0x1fca + 0x1a)))) {
              *(undefined2 *)0x1faa = 9;
              piStack_c = (int *)0x7394;
              FUN_1000_cff4();
            }
          }
        }
      }
    }
    else if (iStack_3b6 == 2) {
      if (0 < iStack_3b8) {
        for (piStack_34c = (int *)0x0; (int)piStack_34c < 4;
            piStack_34c = (int *)((int)piStack_34c + 1)) {
          if (aiStack_dc[(int)piStack_34c] < 0x160) {
            piVar1 = (int *)(&stack0xfff6 + (int)piStack_34c * 2);
            *piVar1 = *piVar1 + aiStack_23c[(int)piStack_34c];
            if ((*piVar1 < 0) || (0x25f < *(int *)(&stack0xfff6 + (int)piStack_34c * 2))) {
              aiStack_dc[(int)piStack_34c] = 0x160;
              iStack_3b8 = iStack_3b8 + -1;
            }
            else if ((((*(int *)0x1faa == 10) &&
                      (*(int *)0x1f8a + -0x14 <= *(int *)(&stack0xfff6 + (int)piStack_34c * 2))) &&
                     (*(int *)(&stack0xfff6 + (int)piStack_34c * 2) <= *(int *)0x1f8a + 0x34)) &&
                    ((*(int *)0x1fca + 6 <= aiStack_dc[(int)piStack_34c] &&
                     (aiStack_dc[(int)piStack_34c] <= *(int *)0x1fca + 0x1a)))) {
              *(undefined2 *)0x1faa = 9;
              piStack_c = (int *)0x7432;
              FUN_1000_cff4();
            }
          }
        }
      }
    }
    else if ((iStack_3b6 == 3) && (0 < iStack_3b8)) {
      for (piStack_34c = (int *)0x0; (int)piStack_34c < 3;
          piStack_34c = (int *)((int)piStack_34c + 2)) {
        if (aiStack_dc[(int)piStack_34c] < 0x160) {
          iVar7 = (int)piStack_34c * 2;
          *(int *)(&stack0xfff6 + iVar7) =
               *(int *)(&stack0xfff6 + iVar7) + aiStack_23c[(int)piStack_34c];
          if ((0xa0 < *(int *)(&stack0xfff8 + iVar7) - *(int *)(&stack0xfff6 + iVar7)) ||
             (*(int *)(&stack0xfff6 + iVar7) < 0xa0)) {
            *(int *)(&stack0xfff8 + (int)piStack_34c * 2) =
                 *(int *)(&stack0xfff8 + (int)piStack_34c * 2) + aiStack_23c[(int)piStack_34c];
          }
          if (*(int *)(&stack0xfff8 + (int)piStack_34c * 2) < 0x10) {
            aiStack_dc[(int)piStack_34c] = 0x160;
            iStack_3b8 = iStack_3b8 + -1;
          }
          else {
            if (*(int *)(&stack0xfff6 + (int)piStack_34c * 2) < 0x10) {
              *(undefined2 *)(&stack0xfff6 + (int)piStack_34c * 2) = 0;
            }
            if ((((*(int *)0x1faa == 10) &&
                 (*(int *)0x1f8a + -4 <= *(int *)(&stack0xfff8 + (int)piStack_34c * 2))) &&
                (*(int *)(&stack0xfff6 + (int)piStack_34c * 2) <= *(int *)0x1f8a + 0x34)) &&
               ((*(int *)0x1fca + 6 <= aiStack_dc[(int)piStack_34c] &&
                (aiStack_dc[(int)piStack_34c] <= *(int *)0x1fca + 0x1a)))) {
              *(undefined2 *)0x1faa = 9;
              piStack_c = (int *)0x74e5;
              FUN_1000_cff4();
            }
          }
        }
      }
    }
    if (iStack_3b6 == 1) {
      if ((((*(int *)0x1f8c + -0x30 < *(int *)0x1f8a) && (*(int *)0x1f8a < *(int *)0x1f8c + 0x70))
          && (*(int *)0x1fcc + -0x14 < *(int *)0x1fca)) &&
         ((*(int *)0x1fca < *(int *)0x1fcc + 0x54 && (9 < *(int *)0x1faa)))) {
        *(undefined2 *)0x1faa = 9;
        piStack_c = (int *)0x7590;
        FUN_1000_cff4();
      }
    }
    else if (iStack_3b6 == 2) {
      if ((((*(int *)0x1f8c + -0x30 < *(int *)0x1f8a) && (*(int *)0x1f8a < *(int *)0x1f8c + 0x30))
          && (*(int *)0x1fcc + -0x14 < *(int *)0x1fca)) &&
         ((*(int *)0x1fca < *(int *)0x1fcc + 0x34 && (9 < *(int *)0x1faa)))) {
        *(undefined2 *)0x1faa = 9;
        piStack_c = (int *)0x75f4;
        FUN_1000_cff4();
      }
      for (piStack_34c = (int *)0x3; (int)piStack_34c < 0xf;
          piStack_34c = (int *)((int)piStack_34c + 1)) {
        iVar7 = *(int *)((int)piStack_34c * 2 + 0x1f8a);
        if (((iVar7 + -0x30 <= *(int *)0x1f8a) && (*(int *)0x1f8a <= iVar7 + 0x10)) &&
           ((iVar7 = *(int *)((int)piStack_34c * 2 + 0x1fca), iVar7 + -0x14 <= *(int *)0x1fca &&
            ((*(int *)0x1fca <= iVar7 + 0x14 && (9 < *(int *)0x1faa)))))) {
          *(undefined2 *)0x1faa = 9;
          piStack_c = (int *)0x7655;
          FUN_1000_cff4();
        }
      }
    }
    else if (iStack_3b6 == 3) {
      if (((*(int *)0x1f94 + -0x30 < *(int *)0x1f8a) && (*(int *)0x1f8a < *(int *)0x1f94 + 0x30)) &&
         ((*(int *)0x1fd4 + -0x14 < *(int *)0x1fca &&
          ((*(int *)0x1fca < *(int *)0x1fd4 + 0x74 && (9 < *(int *)0x1faa)))))) {
        *(undefined2 *)0x1faa = 9;
        piStack_c = (int *)0x769e;
        FUN_1000_cff4();
      }
      if ((((*(int *)0x1f8c + -0x30 <= *(int *)0x1f8a) && (*(int *)0x1f8a <= *(int *)0x1f8c + 0x10))
          && (*(int *)0x1fcc + -0x14 <= *(int *)0x1fca)) &&
         ((*(int *)0x1fca <= *(int *)0x1fcc + 0x34 && (9 < *(int *)0x1faa)))) {
        *(undefined2 *)0x1faa = 9;
        piStack_c = (int *)0x76e5;
        FUN_1000_cff4();
      }
      for (piStack_34c = (int *)0x3; (int)piStack_34c < 5;
          piStack_34c = (int *)((int)piStack_34c + 1)) {
        iVar7 = *(int *)((int)piStack_34c * 2 + 0x1f8a);
        if (((iVar7 + -0x30 < *(int *)0x1f8a) && (*(int *)0x1f8a < iVar7 + 0x30)) &&
           ((iVar7 = *(int *)((int)piStack_34c * 2 + 0x1fca), iVar7 + -0x14 < *(int *)0x1fca &&
            ((*(int *)0x1fca < iVar7 + 0x14 && (9 < *(int *)0x1faa)))))) {
          *(undefined2 *)0x1faa = 9;
          piStack_c = (int *)0x7748;
          FUN_1000_cff4();
        }
      }
    }
    *(int *)0x1f8a = *(int *)0x1f8a + *(int *)0x1d6a;
    *(int *)0x1fca = *(int *)0x1fca + *(int *)0x1d8a;
    *(byte *)0x1844 = *(byte *)0x1844 ^ 1;
    for (piStack_34c = (int *)0x0; (int)piStack_34c < 100;
        piStack_34c = (int *)((int)piStack_34c + 1)) {
      aiStack_1c4[(int)piStack_34c] = aiStack_1c4[(int)piStack_34c] + 5;
      if (0x160 < aiStack_1c4[(int)piStack_34c]) {
        aiStack_1c4[(int)piStack_34c] = aiStack_1c4[(int)piStack_34c] + -0x160;
      }
      if (aiStack_d2[(int)piStack_34c] < 0) {
        aiStack_d2[(int)piStack_34c] = aiStack_d2[(int)piStack_34c] + 0x280;
      }
      if (0x27f < aiStack_d2[(int)piStack_34c]) {
        aiStack_d2[(int)piStack_34c] = aiStack_d2[(int)piStack_34c] + -0x280;
      }
      piStack_c = (int *)aiStack_1c4[(int)piStack_34c];
      piStack_e = (int *)(((int)*(char *)(aiStack_1c4[(int)piStack_34c] + 0xbd6) *
                           aiStack_480[(int)piStack_34c] >> 2) + aiStack_d2[(int)piStack_34c]);
      piStack_10 = (int *)0x77c5;
      FUN_1000_b50e();
    }
    if (iStack_3b6 == 1) {
      piStack_34c = (int *)0x0;
      do {
        piVar9 = piStack_34c;
        iVar7 = (int)piStack_34c * 2;
        if (aiStack_dc[(int)piStack_34c] < 0x160) {
          piStack_c = (int *)aiStack_dc[(int)piStack_34c];
          piStack_e = *(int **)(&stack0xfff6 + iVar7);
          piStack_10 = (int *)0x7805;
          FUN_1000_bfd6();
          piStack_c = (int *)aiStack_dc[(int)piVar9];
          piStack_e = (int *)(*(int *)(&stack0xfff6 + iVar7) + 0x10);
          piStack_10 = (int *)0x781d;
          FUN_1000_bfd6();
        }
        piStack_34c = (int *)((int)piStack_34c + 1);
      } while ((int)piStack_34c < 4);
      if (iStack_234 < 0x28) {
        for (piStack_34c = (int *)0x1; (int)piStack_34c < 7;
            piStack_34c = (int *)((int)piStack_34c + 1)) {
          iVar7 = (int)piStack_34c * 2;
          *(int *)(iVar7 + 0x1f8a) = *(int *)(iVar7 + 0x1f8a) + *(int *)0x1d6c;
          *(int *)(iVar7 + 0x1fca) = *(int *)(iVar7 + 0x1fca) + *(int *)0x1d8c;
          if (((-0x20 < *(int *)(iVar7 + 0x1fca)) && (*(int *)(iVar7 + 0x1fca) < 0x160)) &&
             ((-0x21 < *(int *)((int)piStack_34c * 2 + 0x1f8a) &&
              (*(int *)((int)piStack_34c * 2 + 0x1f8a) < 0x260)))) {
            piStack_c = (int *)0x7887;
            FUN_1000_8518();
          }
        }
      }
      for (piStack_34c = (int *)0x7; (int)piStack_34c < 0x10;
          piStack_34c = (int *)((int)piStack_34c + 1)) {
        iVar7 = (int)piStack_34c * 2;
        if (*(int *)(iVar7 + 0x1faa) < 10) {
          *(int *)(iVar7 + 0x1f8a) = *(int *)(iVar7 + 0x1f8a) + *(int *)0x1d6c;
          *(int *)(iVar7 + 0x1fca) = *(int *)(iVar7 + 0x1fca) + *(int *)0x1d8c;
          if (iStack_234 < 0x28) {
            piStack_c = (int *)0x78d5;
            FUN_1000_8562();
          }
          else {
            piStack_c = (int *)0x789b;
            FUN_1000_85b8();
          }
        }
      }
    }
    else if (iStack_3b6 == 2) {
      for (piStack_34c = (int *)0x0; piVar9 = piStack_34c, (int)piStack_34c < 4;
          piStack_34c = (int *)((int)piStack_34c + 1)) {
        iVar7 = (int)piStack_34c * 2;
        if (aiStack_dc[(int)piStack_34c] < 0x160) {
          piStack_c = (int *)aiStack_dc[(int)piStack_34c];
          piStack_e = *(int **)(&stack0xfff6 + iVar7);
          piStack_10 = (int *)0x7901;
          FUN_1000_bfd6();
          piStack_c = (int *)aiStack_dc[(int)piVar9];
          piStack_e = (int *)(*(int *)(&stack0xfff6 + iVar7) + 0x10);
          piStack_10 = (int *)0x791a;
          FUN_1000_bfd6();
        }
      }
      if (iStack_210 < 0x14) {
        piStack_34c = (int *)0xe;
        do {
          iVar7 = (int)piStack_34c * 2;
          *(undefined2 *)(iVar7 + 0x1f8a) = *(undefined2 *)(iVar7 + 0x1f88);
          *(undefined2 *)(iVar7 + 0x1fca) = *(undefined2 *)(iVar7 + 0x1fc8);
          piStack_34c = (int *)((int)piStack_34c + -1);
        } while (3 < (int)piStack_34c);
        *(int *)0x1f90 = *(int *)0x1d6c + *(int *)0x1f8c + 0x10;
        *(int *)0x1fd0 = *(int *)0x1d8c + *(int *)0x1fcc + 0x14;
        for (piStack_34c = (int *)0xe; 3 < (int)piStack_34c;
            piStack_34c = (int *)((int)piStack_34c + -1)) {
          if (((-0x20 < *(int *)((int)piStack_34c * 2 + 0x1fca)) &&
              (*(int *)((int)piStack_34c * 2 + 0x1fca) < 0x160)) &&
             ((-1 < *(int *)((int)piStack_34c * 2 + 0x1f8a) &&
              (*(int *)((int)piStack_34c * 2 + 0x1f8a) < 0x260)))) {
            piStack_c = (int *)0x79d9;
            FUN_1000_84d6();
          }
        }
        for (piStack_34c = (int *)0x1; (int)piStack_34c < 3;
            piStack_34c = (int *)((int)piStack_34c + 1)) {
          iVar7 = (int)piStack_34c * 2;
          *(int *)(iVar7 + 0x1f8a) = *(int *)(iVar7 + 0x1f8a) + *(int *)0x1d6c;
          *(int *)(iVar7 + 0x1fca) = *(int *)(iVar7 + 0x1fca) + *(int *)0x1d8c;
          if ((((-0x20 < *(int *)(iVar7 + 0x1fca)) && (*(int *)(iVar7 + 0x1fca) < 0x160)) &&
              (-0x21 < *(int *)((int)piStack_34c * 2 + 0x1f8a))) &&
             (*(int *)((int)piStack_34c * 2 + 0x1f8a) < 0x260)) {
            piStack_c = piStack_34c;
            piStack_e = (int *)0x7a4d;
            FUN_1000_8622();
          }
        }
      }
      else {
        for (piStack_34c = (int *)0xe; 3 < (int)piStack_34c;
            piStack_34c = (int *)((int)piStack_34c + -1)) {
          if (((-0x20 < *(int *)((int)piStack_34c * 2 + 0x1fca)) &&
              (*(int *)((int)piStack_34c * 2 + 0x1fca) < 0x160)) &&
             ((-1 < *(int *)((int)piStack_34c * 2 + 0x1f8a) &&
              (*(int *)((int)piStack_34c * 2 + 0x1f8a) < 0x260)))) {
            if (*(int *)((int)piStack_34c * 2 + 0x1faa) < 10) {
              if (0 < *(int *)((int)piStack_34c * 2 + 0x1faa)) {
                piStack_c = (int *)0x7ac0;
                FUN_1000_8562();
              }
            }
            else {
              piStack_c = (int *)0x7aa6;
              FUN_1000_84d6();
            }
          }
        }
        for (piStack_34c = (int *)0x1; (int)piStack_34c < 3;
            piStack_34c = (int *)((int)piStack_34c + 1)) {
          if (((-0x20 < *(int *)((int)piStack_34c * 2 + 0x1fca)) &&
              (*(int *)((int)piStack_34c * 2 + 0x1fca) < 0x160)) &&
             ((-0x21 < *(int *)((int)piStack_34c * 2 + 0x1f8a) &&
              (*(int *)((int)piStack_34c * 2 + 0x1f8a) < 0x260)))) {
            if (*(int *)((int)piStack_34c * 2 + 0x1faa) < 10) {
              if (0 < *(int *)((int)piStack_34c * 2 + 0x1faa)) {
                piStack_c = (int *)0x7b48;
                FUN_1000_85b8();
              }
            }
            else {
              piStack_c = piStack_34c;
              piStack_e = (int *)0x7b2f;
              FUN_1000_8622();
            }
          }
        }
      }
      if (*(int *)0x1fc8 < 10) {
        *(int *)0x1fa8 = *(int *)0x1fa8 + *(int *)0x1d6c;
        *(int *)0x1fe8 = *(int *)0x1fe8 + *(int *)0x1d8c;
        if ((((-0x20 < *(int *)0x1fe8) && (*(int *)0x1fe8 < 0x160)) && (0 < *(int *)0x1fa8)) &&
           (*(int *)0x1fa8 < 0x260)) {
          piStack_c = (int *)0x7b88;
          FUN_1000_8562();
        }
      }
    }
    else if (iStack_3b6 == 3) {
      for (piStack_34c = (int *)0x0; piVar9 = piStack_34c, (int)piStack_34c < 3;
          piStack_34c = (int *)((int)piStack_34c + 2)) {
        iVar7 = (int)piStack_34c * 2;
        if (aiStack_dc[(int)piStack_34c] < 0x160) {
          piStack_c = (int *)aiStack_dc[(int)piStack_34c];
          piStack_e = *(int **)(&stack0xfff6 + iVar7);
          piStack_10 = (int *)0x7c00;
          FUN_1000_bfd6();
          piStack_c = (int *)aiStack_dc[(int)piVar9 + 1];
          piStack_e = *(int **)(&stack0xfff8 + iVar7);
          piStack_10 = (int *)0x7c14;
          FUN_1000_bfd6();
          for (piStack_34e = (int *)(*(int *)(&stack0xfff6 + iVar7) + 0x10);
              (int)piStack_34e < *(int *)(&stack0xfff8 + (int)piStack_34c * 2);
              piStack_34e = piStack_34e + 8) {
            piStack_c = (int *)aiStack_dc[(int)piStack_34c];
            piStack_e = piStack_34e;
            piStack_10 = (int *)0x7bbe;
            FUN_1000_bfd6();
          }
        }
      }
      if (iStack_234 < 0x28) {
        for (piStack_34c = (int *)0x1; (int)piStack_34c < 3;
            piStack_34c = (int *)((int)piStack_34c + 1)) {
          iVar7 = (int)piStack_34c * 2;
          *(int *)(iVar7 + 0x1f8a) = *(int *)(iVar7 + 0x1f8a) + *(int *)0x1d6c;
          *(int *)(iVar7 + 0x1fca) = *(int *)(iVar7 + 0x1fca) + *(int *)0x1d8c;
          if ((((-0x20 < *(int *)(iVar7 + 0x1fca)) && (*(int *)(iVar7 + 0x1fca) < 0x160)) &&
              (-1 < *(int *)((int)piStack_34c * 2 + 0x1f8a))) &&
             (*(int *)((int)piStack_34c * 2 + 0x1f8a) < 0x260)) {
            piStack_c = (int *)0x7c83;
            FUN_1000_84d6();
          }
        }
        for (piStack_34c = (int *)0x3; (int)piStack_34c < 9;
            piStack_34c = (int *)((int)piStack_34c + 1)) {
          iVar7 = (int)piStack_34c * 2;
          *(int *)(iVar7 + 0x1f8a) = *(int *)(iVar7 + 0x1f8a) + *(int *)0x1d6c;
          *(int *)(iVar7 + 0x1fca) = *(int *)(iVar7 + 0x1fca) + *(int *)0x1d8c;
          if (((-0x20 < *(int *)(iVar7 + 0x1fca)) && (*(int *)(iVar7 + 0x1fca) < 0x160)) &&
             ((-0x21 < *(int *)((int)piStack_34c * 2 + 0x1f8a) &&
              (*(int *)((int)piStack_34c * 2 + 0x1f8a) < 0x260)))) {
            piStack_c = (int *)0x7cdd;
            FUN_1000_8518();
          }
        }
      }
      for (piStack_34c = (int *)0x9; (int)piStack_34c < 0x10;
          piStack_34c = (int *)((int)piStack_34c + 1)) {
        iVar7 = (int)piStack_34c * 2;
        if (*(int *)(iVar7 + 0x1faa) < 10) {
          *(int *)(iVar7 + 0x1f8a) = *(int *)(iVar7 + 0x1f8a) + *(int *)0x1d6c;
          *(int *)(iVar7 + 0x1fca) = *(int *)(iVar7 + 0x1fca) + *(int *)0x1d8c;
          if (iStack_234 < 0x28) {
            piStack_c = (int *)0x7d2b;
            FUN_1000_8562();
          }
          else {
            piStack_c = (int *)0x7cf1;
            FUN_1000_85b8();
          }
        }
      }
    }
    piStack_34e = (int *)(*(int *)0x181e * 0x10 + *(int *)0x1d42 + 0x14);
    for (piStack_34c = (int *)0x0; (int)piStack_34c < *(int *)0x1d48;
        piStack_34c = (int *)((int)piStack_34c + 1)) {
      if (-0x10 < aiStack_232[(int)piStack_34c]) {
        if (aiStack_232[(int)piStack_34c] < 0) {
          piStack_c = (int *)aiStack_232[(int)piStack_34c];
          piStack_e = (int *)aiStack_20e[(int)piStack_34c];
          piStack_10 = (int *)0x7d4d;
          FUN_1000_c322();
        }
        else {
          piStack_c = (int *)aiStack_232[(int)piStack_34c];
          piStack_e = (int *)aiStack_20e[(int)piStack_34c];
          piStack_10 = (int *)0x7d85;
          FUN_1000_bfd6();
        }
      }
    }
    if (0 < iStack_34a) {
      piStack_34e = (int *)((iStack_3b6 + -1) * 2 + *(int *)0x1844 + *(int *)0x1d46 + *(int *)0x1d42
                           );
      for (piStack_34c = (int *)0x0; (int)piStack_34c < 0x10;
          piStack_34c = (int *)((int)piStack_34c + 1)) {
        if ((aiStack_3b4[(int)piStack_34c] < 0x160) && (-1 < aiStack_3b4[(int)piStack_34c])) {
          piStack_c = (int *)aiStack_3b4[(int)piStack_34c];
          piStack_e = (int *)aiStack_392[(int)piStack_34c];
          piStack_10 = (int *)0x7df9;
          FUN_1000_bfd6();
        }
      }
    }
    if (*(int *)0x1faa < 10) {
      piStack_c = (int *)*(undefined2 *)0x1fca;
      piStack_e = (int *)*(undefined2 *)0x1f8a;
      piStack_10 = (int *)0x7e52;
      FUN_1000_bfd6();
    }
    else {
      piStack_c = (int *)*(undefined2 *)0x1fca;
      piStack_e = (int *)*(undefined2 *)0x1f8a;
      piStack_10 = (int *)0x7e75;
      FUN_1000_bfd6();
    }
    piStack_c = (int *)*(undefined2 *)0x1fca;
    piStack_e = (int *)(*(int *)0x1f8a + 0x20);
    piStack_10 = (int *)0x7e8a;
    FUN_1000_bfd6();
    FUN_1000_8292();
    if (iStack_3b6 == 1) {
      for (piStack_34c = (int *)0x1; (int)piStack_34c < 6; piStack_34c = piStack_34c + 1) {
        if ((-1 < *(int *)((int)piStack_34c * 2 + 0x1fca)) &&
           (*(int *)((int)piStack_34c * 2 + 0x1fca) < 0x161)) {
          piStack_c = (int *)0xf;
          piStack_e = piStack_34c;
          piStack_10 = (int *)0x7edf;
          FUN_1000_890a();
        }
      }
    }
    else if (iStack_3b6 == 2) {
      if ((-1 < *(int *)0x1fcc) && (*(int *)0x1fcc < 0x161)) {
        piStack_c = (int *)0x7;
        piStack_e = (int *)0x1;
        piStack_10 = (int *)0x7f02;
        FUN_1000_890a();
      }
      if ((-1 < *(int *)0x1fce) && (*(int *)0x1fce < 0x161)) {
        piStack_c = (int *)0x7;
        piStack_e = (int *)0x2;
        piStack_10 = (int *)0x7f23;
        FUN_1000_890a();
      }
      for (piStack_34c = (int *)0x3; (int)piStack_34c < 0xf;
          piStack_34c = (int *)((int)piStack_34c + 1)) {
        if ((-1 < *(int *)((int)piStack_34c * 2 + 0x1fca)) &&
           (*(int *)((int)piStack_34c * 2 + 0x1fca) < 0x161)) {
          piStack_c = (int *)0x3;
          piStack_e = piStack_34c;
          piStack_10 = (int *)0x7f60;
          FUN_1000_890a();
        }
      }
    }
    else if (iStack_3b6 == 3) {
      if ((-1 < *(int *)0x1fcc) && (*(int *)0x1fcc < 0x161)) {
        piStack_c = (int *)0xb;
        piStack_e = (int *)0x1;
        piStack_10 = (int *)0x7f84;
        FUN_1000_890a();
      }
      if ((-1 < *(int *)0x1fce) && (*(int *)0x1fce < 0x161)) {
        piStack_c = (int *)0xb;
        piStack_e = (int *)0x2;
        piStack_10 = (int *)0x7fa5;
        FUN_1000_890a();
      }
      piStack_34c = (int *)0x3;
      do {
        if ((-1 < *(int *)((int)piStack_34c * 2 + 0x1fca)) &&
           (*(int *)((int)piStack_34c * 2 + 0x1fca) < 0x161)) {
          piStack_c = (int *)0x7;
          piStack_e = piStack_34c;
          piStack_10 = (int *)0x7fd2;
          FUN_1000_890a();
        }
        piStack_34c = (int *)((int)piStack_34c + 1);
      } while ((int)piStack_34c < 6);
      if ((-1 < *(int *)0x1fda) && (*(int *)0x1fda < 0x161)) {
        piStack_c = (int *)0x7;
        piStack_e = (int *)0x8;
        piStack_10 = (int *)0x7ffe;
        FUN_1000_890a();
      }
    }
    piStack_c = (int *)0x7;
    piStack_e = (int *)0x0;
    piStack_10 = (int *)0x800f;
    FUN_1000_890a();
    while (iVar7 = FUN_1000_bf8e(), iVar7 != 0) {
      FUN_1000_bf98();
    }
    piStack_c = (int *)0x8025;
    FUN_1000_e538();
    do {
      uVar8 = FUN_1000_bb38();
    } while (uVar8 < *(int *)0x1820 - 1U);
    *(undefined2 *)0xdd0 = 0;
    out(0xa4,(byte)*(undefined2 *)0x1844);
    out(0xa6,(byte)*(undefined2 *)0x1844 ^ 1);
    FUN_1000_b4ee();
    FUN_1000_8184();
    piStack_c = (int *)0x5c89;
    iStack_372 = FUN_1000_e3c8();
    if (((iStack_372 != 0) || (*(int *)0x213e != 0)) && (FUN_1000_9e70(), *(int *)0x184c == 0))
    goto LAB_1000_804a;
    *(undefined2 *)0x1d8a = 0;
    *(undefined2 *)0x1d6a = 0;
    if (*(int *)0x1faa < 10) {
      iVar7 = *(int *)0x1faa;
      *(int *)0x1faa = *(int *)0x1faa + -1;
      if (iVar7 < 1) {
        iStack_1ee = 1;
        *(int *)0x1842 = *(int *)0x1842 + -1;
LAB_1000_804a:
        FUN_1000_cf2c();
        FUN_1000_a23c();
        if ((iStack_1ee != 1) && (*(int *)0x1842 != 0)) {
          piStack_c = aiStack_480;
          piStack_e = aiStack_1c4;
          piStack_10 = aiStack_d2;
          uStack_12 = 0x8075;
          FUN_1000_95a4();
        }
        if ((iStack_1ee == 1) && (*(int *)0x1842 == 0)) {
          FUN_1000_a29e();
        }
        out(0xa6,(char)*(undefined2 *)0x1844);
        iVar7 = FUN_1000_84ae();
        return iVar7;
      }
    }
    else {
      if ((*(int *)0x2132 != 0) && (*(int *)0x1d4a + *(int *)0x1fca < 0x140)) {
        *(undefined2 *)0x1d8a = *(undefined2 *)0x1d4a;
      }
      if ((*(int *)0x2130 != 0) && (-1 < *(int *)0x1fca - *(int *)0x1d4a)) {
        *(int *)0x1d8a = -*(int *)0x1d4a;
      }
      if ((*(int *)0x2136 != 0) && (*(int *)0x1d4a + *(int *)0x1f8a < 0x210)) {
        *(undefined2 *)0x1d6a = *(undefined2 *)0x1d4a;
      }
      if ((*(int *)0x2134 != 0) && (0x2f < *(int *)0x1f8a - *(int *)0x1d4a)) {
        *(int *)0x1d6a = -*(int *)0x1d4a;
      }
      if ((((*(int *)0x2138 != 0) && (*(int *)0x212c == 0)) ||
          ((*(int *)0x213a != 0 && (*(int *)0x212c != 0)))) &&
         ((iVar7 = *(int *)0x20c6 * 2 - *(int *)0x1d48, -iStack_d4 != iVar7 && iStack_d4 <= -iVar7
          && (iStack_212 != 0)))) {
        for (piStack_34c = (int *)0x0; (int)piStack_34c < *(int *)0x1d48;
            piStack_34c = (int *)((int)piStack_34c + 1)) {
          if (aiStack_232[(int)piStack_34c] < -0xf) {
            piStack_34e = piStack_34c;
            break;
          }
        }
        piVar9 = piStack_34e;
        aiStack_232[(int)piStack_34e] = *(int *)0x1fca + 0xc;
        aiStack_20e[(int)piStack_34e] = *(int *)0x1f8a + 5;
        aiStack_36e[(int)piStack_34e] = (-2 - *(int *)0x181e) * 6;
        iStack_d4 = iStack_d4 + 1;
        aiStack_25c[(int)piVar9] = 0;
        iStack_212 = 0;
        if (*(int *)0x20c6 == 1) {
          for (piStack_34c = (int *)0x0; (int)piStack_34c < *(int *)0x1d48;
              piStack_34c = (int *)((int)piStack_34c + 1)) {
            if (aiStack_232[(int)piStack_34c] < -0xf) {
              piStack_34e = piStack_34c;
              break;
            }
          }
          aiStack_232[(int)piStack_34e] = *(int *)0x1fca + 0xc;
          aiStack_20e[(int)piStack_34e] = *(int *)0x1f8a + 5;
          aiStack_36e[(int)piStack_34e] = (-2 - *(int *)0x181e) * 6;
          aiStack_25c[(int)piStack_34c] = -1;
          for (piStack_34c = (int *)0x0; (int)piStack_34c < *(int *)0x1d48;
              piStack_34c = (int *)((int)piStack_34c + 1)) {
            if (aiStack_232[(int)piStack_34c] < -0xf) {
              piStack_34e = piStack_34c;
              break;
            }
          }
          aiStack_232[(int)piStack_34e] = *(int *)0x1fca + 0xc;
          aiStack_20e[(int)piStack_34e] = *(int *)0x1f8a + 5;
          aiStack_36e[(int)piStack_34e] = (-2 - *(int *)0x181e) * 6;
          aiStack_25c[(int)piStack_34c] = 1;
          iStack_d4 = iStack_d4 + 2;
        }
        piStack_c = (int *)0x5ebb;
        FUN_1000_cff4();
      }
      if ((((*(int *)0x213a != 0) && (*(int *)0x212c == 0)) ||
          ((*(int *)0x2138 != 0 && (*(int *)0x212c != 0)))) &&
         ((iVar7 = *(int *)0x20c6 * 2 - *(int *)0x1d48, -iStack_d4 != iVar7 && iStack_d4 <= -iVar7
          && (iStack_212 != 0)))) {
        for (piStack_34c = (int *)0x0; piVar9 = piStack_34e, (int)piStack_34c < *(int *)0x1d48;
            piStack_34c = (int *)((int)piStack_34c + 1)) {
          if (aiStack_232[(int)piStack_34c] < -0xf) {
            piStack_34e = piStack_34c;
          }
        }
        aiStack_232[(int)piStack_34e] = *(int *)0x1fca + 0xb;
        aiStack_20e[(int)piStack_34e] = *(int *)0x1f8a + 0x2c;
        aiStack_36e[(int)piStack_34e] = (*(int *)0x181e + 2) * 6;
        iStack_d4 = iStack_d4 + 1;
        aiStack_25c[(int)piVar9] = 0;
        iStack_212 = 0;
        if (*(int *)0x20c6 == 1) {
          for (piStack_34c = (int *)0x0; (int)piStack_34c < *(int *)0x1d48;
              piStack_34c = (int *)((int)piStack_34c + 1)) {
            if (aiStack_232[(int)piStack_34c] < -0xf) {
              piStack_34e = piStack_34c;
              break;
            }
          }
          aiStack_232[(int)piStack_34e] = *(int *)0x1fca + 0xb;
          aiStack_20e[(int)piStack_34e] = *(int *)0x1f8a + 0x2c;
          aiStack_36e[(int)piStack_34e] = (*(int *)0x181e + 2) * 6;
          aiStack_25c[(int)piStack_34c] = -1;
          for (piStack_34c = (int *)0x0; (int)piStack_34c < *(int *)0x1d48;
              piStack_34c = (int *)((int)piStack_34c + 1)) {
            if (aiStack_232[(int)piStack_34c] < -0xf) {
              piStack_34e = piStack_34c;
              break;
            }
          }
          aiStack_232[(int)piStack_34e] = *(int *)0x1fca + 0xb;
          aiStack_20e[(int)piStack_34e] = *(int *)0x1f8a + 0x2c;
          aiStack_36e[(int)piStack_34e] = (*(int *)0x181e + 2) * 6;
          aiStack_25c[(int)piStack_34c] = 1;
          iStack_d4 = iStack_d4 + 2;
        }
        piStack_c = (int *)0x6039;
        FUN_1000_cff4();
      }
      if ((*(int *)0x2138 == 0) && (*(int *)0x213a == 0)) {
        iStack_212 = 1;
      }
    }
    if (iStack_3b6 == 1) {
      if (iStack_210 < 0x14) {
        iStack_25e = iStack_25e + 1;
        if (*(int *)0x1fb8 < 10) {
          piVar1 = (int *)0x1fb8;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            *(undefined2 *)0x1fb8 = 10;
          }
        }
        if (iStack_210 < 0xc) {
          if (((iStack_234 == 0) && (100 < iStack_25e)) && (iStack_3b8 == 0)) {
            if (*(int *)0x1f8c == 0x1d2) {
              iVar7 = 0;
            }
            else if (-*(int *)0x1f8c == -0x1d2 || -*(int *)0x1f8c + 0x1d2 < 0) {
              iVar7 = -1;
            }
            else {
              iVar7 = 1;
            }
            *(int *)0x1d6c = iVar7 * 0xe;
            if (*(int *)0x1d8c != 0) {
              if (*(int *)0x1d8c < 1) {
                iVar7 = -1;
              }
              else {
                iVar7 = 1;
              }
              *(int *)0x1d8c = *(int *)0x1d8c - iVar7;
            }
            uVar8 = (*(int *)0x1d6c + *(int *)0x1f8c) - 0x1d2;
            uVar10 = (int)uVar8 >> 0xf;
            if ((int)((uVar8 ^ uVar10) - uVar10) < 9) {
              iStack_234 = 1;
              iVar7 = FUN_1000_efc8();
              *(int *)0x1d8c = (iVar7 % 2) * 0x10 + -8;
              iStack_25e = 0;
              *(undefined2 *)0x1d6c = 0;
            }
          }
          if (((iStack_234 == 1) && (100 < iStack_25e)) && (iStack_3b8 == 0)) {
            if (*(int *)0x1f8c == 0x2e) {
              iVar7 = 0;
            }
            else if (-*(int *)0x1f8c == -0x2e || -*(int *)0x1f8c + 0x2e < 0) {
              iVar7 = -1;
            }
            else {
              iVar7 = 1;
            }
            *(int *)0x1d6c = iVar7 * 0xe;
            if (*(int *)0x1d8c != 0) {
              if (*(int *)0x1d8c < 1) {
                iVar7 = -1;
              }
              else {
                iVar7 = 1;
              }
              *(int *)0x1d8c = *(int *)0x1d8c - iVar7;
            }
            uVar8 = (*(int *)0x1d6c + *(int *)0x1f8c) - 0x2e;
            uVar10 = (int)uVar8 >> 0xf;
            if ((int)((uVar8 ^ uVar10) - uVar10) < 9) {
              iVar7 = FUN_1000_efc8();
              *(int *)0x1d8c = (iVar7 % 2) * 0x10 + -8;
              iStack_234 = 0;
              iStack_25e = 0;
              *(undefined2 *)0x1d6c = 0;
            }
          }
          if (iStack_25e < 0x65) {
            *(undefined2 *)0x1d6c = 0;
            iVar7 = FUN_1000_efc8();
            if ((iVar7 % 10 == 0) && (iStack_3b8 == 0)) {
              if (iStack_234 == 0) {
                iStack_394 = 0;
                do {
                  aiStack_23c[iStack_394] = 0x10;
                  iStack_394 = iStack_394 + 1;
                } while (iStack_394 < 4);
              }
              else {
                for (iStack_394 = iVar7 % 10; iStack_394 < 4; iStack_394 = iStack_394 + 1) {
                  aiStack_23c[iStack_394] = -0x10;
                }
              }
              aiStack_dc[0] = *(int *)0x1fcc + 6;
              aiStack_dc[1] = *(int *)0x1fcc + 0x18;
              piStack_d8 = (int *)(*(int *)0x1fcc + 0x39);
              piStack_d6 = (int *)(*(int *)0x1fcc + 0x4b);
              iStack_3b8 = 4;
            }
          }
          if ((*(int *)0x1d8c + *(int *)0x1fcc < 1) || (0xff < *(int *)0x1d8c + *(int *)0x1fcc)) {
            *(int *)0x1d8c = -*(int *)0x1d8c;
          }
        }
        else {
          uVar8 = (*(int *)0x1f8a - *(int *)0x1f8c) + 0x20;
          if (0x32 < (int)((uVar8 ^ (int)uVar8 >> 0xf) - ((int)uVar8 >> 0xf))) {
            if (*(int *)0x1f8a - *(int *)0x1f8c == -0x20) {
              iVar7 = 0;
            }
            else if ((int)uVar8 < 1) {
              iVar7 = -1;
            }
            else {
              iVar7 = 1;
            }
            *(int *)0x1d6c = *(int *)0x1d6c + iVar7 * *(int *)0x1844;
          }
          uVar8 = (*(int *)0x1fca - *(int *)0x1fcc) + 0x20;
          if (0x32 < (int)((uVar8 ^ (int)uVar8 >> 0xf) - ((int)uVar8 >> 0xf))) {
            if (*(int *)0x1fca - *(int *)0x1fcc == -0x20) {
              iVar7 = 0;
            }
            else if ((int)uVar8 < 1) {
              iVar7 = -1;
            }
            else {
              iVar7 = 1;
            }
            *(int *)0x1d8c = *(int *)0x1d8c + iVar7 * *(int *)0x1844;
          }
          if ((*(int *)0x1f8c < 0x21) || (0x1df < *(int *)0x1f8c)) {
            if (*(int *)0x1f8c == 0x100) {
              iVar7 = 0;
            }
            else if (-*(int *)0x1f8c == -0x100 || -*(int *)0x1f8c + 0x100 < 0) {
              iVar7 = -1;
            }
            else {
              iVar7 = 1;
            }
            *(int *)0x1d6c = *(int *)0x1d6c + iVar7 * 2;
          }
          if ((*(int *)0x1fcc < 1) || (0xff < *(int *)0x1fcc)) {
            if (*(int *)0x1fcc == 0x80) {
              iVar7 = 0;
            }
            else if (-*(int *)0x1fcc == -0x80 || -*(int *)0x1fcc + 0x80 < 0) {
              iVar7 = -1;
            }
            else {
              iVar7 = 1;
            }
            *(int *)0x1d8c = *(int *)0x1d8c + iVar7 * 2;
          }
          uVar8 = (int)*(uint *)0x1d6c >> 0xf;
          if (8 < (int)((*(uint *)0x1d6c ^ uVar8) - uVar8)) {
            if (*(int *)0x1d6c == 0) {
              iVar7 = 0;
            }
            else if (*(int *)0x1d6c < 1) {
              iVar7 = -1;
            }
            else {
              iVar7 = 1;
            }
            *(int *)0x1d6c = iVar7 << 3;
          }
          uVar8 = (int)*(uint *)0x1d8c >> 0xf;
          if (8 < (int)((*(uint *)0x1d8c ^ uVar8) - uVar8)) {
            if (*(int *)0x1d8c == 0) {
              iVar7 = 0;
            }
            else if (*(int *)0x1d8c < 1) {
              iVar7 = -1;
            }
            else {
              iVar7 = 1;
            }
            *(int *)0x1d8c = iVar7 << 3;
          }
          if (*(int *)0x193c == 0) {
            iVar7 = FUN_1000_efc8();
            if (((((int *)(iVar7 % 2) == (int *)0x0) && (iStack_34a < 0x10)) && (0 < *(int *)0x1f8c)
                ) && (*(int *)0x1f8c < 0x201)) {
              piStack_34e = (int *)(iVar7 % 2);
              do {
                if (0x15f < aiStack_3b4[(int)piStack_34e]) {
                  piStack_370 = piStack_34e;
                }
                piStack_34e = (int *)((int)piStack_34e + 1);
              } while ((int)piStack_34e < 0x10);
              iVar7 = FUN_1000_efc8();
              piVar9 = piStack_370;
              aiStack_3b4[(int)piStack_370] = (iVar7 % 2) * 0x18 + *(int *)0x1fcc + 0x20;
              iVar7 = FUN_1000_efc8();
              aiStack_392[(int)piVar9] = (iVar7 % 2) * 0x38 + *(int *)0x1f8c + 0x20;
              uVar8 = (*(int *)0x1f8a - aiStack_392[(int)piVar9]) + 0x20;
              uVar10 = (int)uVar8 >> 0xf;
              if ((int)((uVar8 ^ uVar10) - uVar10) < 0x33) {
                iVar7 = FUN_1000_efc8();
                auStack_fc[(int)piStack_370] = iVar7 % 5 - 2;
              }
              else {
                if (aiStack_392[(int)piVar9] == *(int *)0x1f8a) {
                  iVar7 = 0;
                }
                else if (*(int *)0x1f8a - aiStack_392[(int)piVar9] < 1) {
                  iVar7 = -1;
                }
                else {
                  iVar7 = 1;
                }
                iVar6 = FUN_1000_efc8();
                auStack_fc[(int)piStack_370] = (iVar6 % 5 + 6) * iVar7;
              }
              uVar8 = *(int *)0x1fca - aiStack_3b4[(int)piStack_370];
              uVar10 = (int)(uVar8 + 0x10) >> 0xf;
              if ((int)((uVar8 + 0x10 ^ uVar10) - uVar10) < 0x33) goto LAB_1000_6a86;
              if (aiStack_3b4[(int)piStack_370] == *(int *)0x1fca) goto LAB_1000_6a62;
LAB_1000_6a58:
              if ((int)uVar8 < 1) {
                iVar7 = -1;
              }
              else {
                iVar7 = 1;
              }
LAB_1000_6a64:
              iVar6 = FUN_1000_efc8();
              auStack_1e4[(int)piStack_370] = (iVar6 % 5 + 6) * iVar7;
              goto LAB_1000_6a9b;
            }
          }
        }
      }
      else {
        iStack_234 = iStack_234 + 1;
        if (iStack_234 == 2) {
          FUN_1000_cf2c();
        }
        *(undefined2 *)0x1d8c = 0;
        *(undefined2 *)0x1d6c = 0;
        for (piStack_34c = (int *)0x7; (int)piStack_34c < 0x10;
            piStack_34c = (int *)((int)piStack_34c + 1)) {
          iVar7 = (int)piStack_34c * 2;
          if (*(int *)(iVar7 + 0x1faa) < 10) {
            piVar1 = (int *)((int)piStack_34c * 2 + 0x1faa);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              *(undefined2 *)((int)piStack_34c * 2 + 0x1faa) = 10;
            }
          }
          else if (iStack_234 < 0x28) {
            iVar6 = FUN_1000_efc8();
            *(int *)(iVar7 + 0x1faa) = -(iVar6 % 3 + -9);
            iVar6 = FUN_1000_efc8();
            *(int *)(iVar7 + 0x1f8a) = iVar6 % 0x80 + *(int *)0x1f8c + -0x10;
            iVar6 = FUN_1000_efc8();
            *(int *)(iVar7 + 0x1fca) = iVar6 % 0x60 + *(int *)0x1fcc + -0x10;
            *(undefined2 *)(iVar7 + 0x1d6a) = 0;
            *(undefined2 *)(iVar7 + 0x1d8a) = 0;
            piStack_c = (int *)0x610c;
            FUN_1000_cff4();
          }
        }
        if (iStack_234 == 0x28) {
          *(undefined1 *)0x2ba = 0;
          piStack_c = (int *)0x6125;
          FUN_1000_83b5();
          piStack_34c = (int *)0x1;
          do {
            iVar7 = (int)piStack_34c * 2;
            *(undefined2 *)(iVar7 + 0x1f96) = *(undefined2 *)(iVar7 + 0x1f8a);
            *(undefined2 *)(iVar7 + 0x1fd6) = *(undefined2 *)(iVar7 + 0x1fca);
            *(undefined2 *)(iVar7 + 0x1fb6) = 9;
            piStack_34c = (int *)((int)piStack_34c + 1);
          } while ((int)piStack_34c < 7);
          iVar7 = *(int *)(*(int *)0x1816 * 0x14 + 0x2ec);
LAB_1000_6162:
          *(int *)0x1db6 = *(int *)0x1db6 + iVar7;
          FUN_1000_a25a();
          piStack_c = (int *)0x6170;
          FUN_1000_cff4();
          piStack_c = (int *)0x617a;
          FUN_1000_8425();
          *(undefined1 *)0x2ba = 7;
        }
      }
    }
    else if (iStack_3b6 == 2) {
      if (*(int *)0x1fc8 < 10) {
        piVar1 = (int *)0x1fc8;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          *(undefined2 *)0x1fc8 = 10;
        }
      }
      if (iStack_210 < 0x14) {
        if (iStack_210 < 0xe) {
          uVar8 = 0x120 - *(int *)0x1f8c;
          if ((200 < (int)((uVar8 ^ (int)uVar8 >> 0xf) - ((int)uVar8 >> 0xf))) &&
             (*(int *)0x1f8c != 0x120)) {
            if ((int)uVar8 < 1) {
              iVar7 = -1;
            }
            else {
              iVar7 = 1;
            }
            *(int *)0x1d6c = *(int *)0x1d6c + iVar7;
          }
          uVar8 = 0x90 - *(int *)0x1fcc;
          if (100 < (int)((uVar8 ^ (int)uVar8 >> 0xf) - ((int)uVar8 >> 0xf))) {
            if (*(int *)0x1fcc == 0x90) {
              iVar7 = 0;
            }
            else if ((int)uVar8 < 1) {
              iVar7 = -1;
            }
            else {
              iVar7 = 1;
            }
            *(int *)0x1d8c = *(int *)0x1d8c + iVar7 * 2;
          }
          uVar8 = (int)*(uint *)0x1d6c >> 0xf;
          if (6 < (int)((*(uint *)0x1d6c ^ uVar8) - uVar8)) {
            if (*(int *)0x1d6c == 0) {
              iVar7 = 0;
            }
            else if (*(int *)0x1d6c < 1) {
              iVar7 = -1;
            }
            else {
              iVar7 = 1;
            }
            *(int *)0x1d6c = iVar7 * 6;
          }
          uVar8 = (int)*(uint *)0x1d8c >> 0xf;
          if (0x14 < (int)((*(uint *)0x1d8c ^ uVar8) - uVar8)) {
            if (*(int *)0x1d8c == 0) {
              iVar7 = 0;
            }
            else if (*(int *)0x1d8c < 1) {
              iVar7 = -1;
            }
            else {
              iVar7 = 1;
            }
            *(int *)0x1d8c = iVar7 * 0x14;
          }
          if ((((*(int *)0x1844 + *(int *)0x1846 == 0) && (iStack_3b8 < 4)) && (0 < *(int *)0x1f8c))
             && (((*(int *)0x1f8c < 0x201 && (0 < *(int *)0x1fcc)) && (*(int *)0x1fcc < 0x160)))) {
            piStack_34e = (int *)0x0;
            do {
              if (0x15f < aiStack_dc[(int)piStack_34e]) {
                piStack_370 = piStack_34e;
              }
              piStack_34e = (int *)((int)piStack_34e + 1);
            } while ((int)piStack_34e < 4);
            aiStack_dc[(int)piStack_370] = *(int *)0x1fcc + 0x1c;
            *(int *)(&stack0xfff6 + (int)piStack_370 * 2) = *(int *)0x1f8c + 0x10;
            aiStack_23c[(int)piStack_370] = (-(uint)(0 < *(int *)0x1d6c) & 0x28) - 0x14;
            iStack_3b8 = iStack_3b8 + 1;
          }
        }
        else {
          uVar8 = 0x120 - *(int *)0x1f8c;
          if ((int)((uVar8 ^ (int)uVar8 >> 0xf) - ((int)uVar8 >> 0xf)) < 0x187) {
            *(int *)0x1d6c = (-(uint)(0 < *(int *)0x1d6c) & 0x2c) - 0x16;
          }
          else {
            if (*(int *)0x1f8c == 0x120) {
              iVar7 = 0;
            }
            else if ((int)uVar8 < 1) {
              iVar7 = -1;
            }
            else {
              iVar7 = 1;
            }
            *(int *)0x1d6c = *(int *)0x1d6c + iVar7 * 2;
            *(undefined2 *)0x1d8c = 0;
            iVar7 = FUN_1000_efc8();
            *(int *)0x1824 = iVar7 % 0x160 + -0x20;
          }
          if (*(int *)0x1824 == *(int *)0x1fcc) {
            iVar7 = 0;
          }
          else if (*(int *)0x1824 == *(int *)0x1fcc || *(int *)0x1824 - *(int *)0x1fcc < 0) {
            iVar7 = -1;
          }
          else {
            iVar7 = 1;
          }
          *(int *)0x1d8c = *(int *)0x1d8c + iVar7 * 2;
          uVar8 = (int)*(uint *)0x1d8c >> 0xf;
          if (4 < (int)((*(uint *)0x1d8c ^ uVar8) - uVar8)) {
            if (*(int *)0x1d8c == 0) {
              iVar7 = 0;
            }
            else if (*(int *)0x1d8c < 1) {
              iVar7 = -1;
            }
            else {
              iVar7 = 1;
            }
            *(int *)0x1d8c = iVar7 << 2;
          }
          if (((*(int *)0x1844 + *(int *)0x1846 == 0) && (iStack_34a < 0x10)) &&
             ((0 < *(int *)0x1f8c && (*(int *)0x1f8c < 0x201)))) {
            piStack_34e = (int *)0x0;
            do {
              if (0x15f < aiStack_3b4[(int)piStack_34e]) {
                piStack_370 = piStack_34e;
              }
              piVar9 = piStack_370;
              piStack_34e = (int *)((int)piStack_34e + 1);
            } while ((int)piStack_34e < 0x10);
            aiStack_3b4[(int)piStack_370] = *(int *)0x1fcc + 0x1c;
            iVar7 = *(int *)0x1f8c;
            aiStack_392[(int)piVar9] = iVar7 + 0x10;
            iVar7 = (iVar7 + 0x10) - *(int *)0x1f8a;
            uVar8 = 0x20 - iVar7;
            if ((int)((uVar8 ^ (int)uVar8 >> 0xf) - ((int)uVar8 >> 0xf)) < 0x33) {
              iVar7 = FUN_1000_efc8();
              auStack_fc[(int)piStack_370] = iVar7 % 5 - 2;
            }
            else {
              if (iVar7 == 0x20) {
                iVar7 = 0;
              }
              else if ((int)uVar8 < 1) {
                iVar7 = -1;
              }
              else {
                iVar7 = 1;
              }
              iVar6 = FUN_1000_efc8();
              auStack_fc[(int)piStack_370] = (iVar6 % 5 + 6) * iVar7;
            }
            uVar8 = (*(int *)0x1fca - aiStack_3b4[(int)piStack_370]) + 0x10;
            if (0x32 < (int)((uVar8 ^ (int)uVar8 >> 0xf) - ((int)uVar8 >> 0xf))) {
              if (*(int *)0x1fca - aiStack_3b4[(int)piStack_370] != -0x10) goto LAB_1000_6a58;
LAB_1000_6a62:
              iVar7 = 0;
              goto LAB_1000_6a64;
            }
LAB_1000_6a86:
            iVar7 = FUN_1000_efc8();
            auStack_1e4[(int)piStack_370] = iVar7 % 5 - 2;
LAB_1000_6a9b:
            iStack_34a = iStack_34a + 1;
          }
        }
      }
      else {
        if (*(int *)0x1d6c != 0) {
          *(undefined2 *)0x1d6e = *(undefined2 *)0x1d6c;
        }
        *(undefined2 *)0x1d8c = 0;
        *(undefined2 *)0x1d6c = 0;
        piStack_34c = (int *)0x1;
        do {
          iVar7 = (int)piStack_34c * 2;
          if ((*(int *)(iVar7 + 0x1faa) < 10) &&
             (*(int *)(iVar7 + 0x1faa) = *(int *)(iVar7 + 0x1faa) + -1, *(int *)(iVar7 + 0x1faa) < 1
             )) {
            *(undefined2 *)(iVar7 + 0x1faa) = 0;
          }
          piStack_34c = (int *)((int)piStack_34c + 1);
        } while ((int)piStack_34c < 0xf);
        iStack_234 = iStack_234 + (uint)(*(int *)0x1844 == 0);
        if ((*(int *)0x1844 == 0) && (iStack_234 < 0xd)) {
          *(undefined2 *)(iStack_234 * -2 + 0x1fc8) = 9;
          piStack_c = (int *)0x66d0;
          FUN_1000_cff4();
        }
        if (iStack_234 == 0xc) {
          *(undefined1 *)0x2ba = 0;
          piStack_c = (int *)0x66e9;
          FUN_1000_83b5();
          *(undefined2 *)0x1fae = 9;
          *(undefined2 *)0x1fac = 9;
          *(int *)0x1db6 = *(int *)0x1db6 + *(int *)(*(int *)0x1816 * 0x14 + 0x2f0);
          FUN_1000_a25a();
          FUN_1000_cf2c();
          piStack_c = (int *)0x6713;
          FUN_1000_cff4();
          piStack_c = (int *)0x671d;
          FUN_1000_8425();
          *(undefined1 *)0x2ba = 7;
          iStack_234 = 0x30;
        }
      }
    }
    else if (iStack_3b6 == 3) {
      if (iStack_210 < 0x14) {
        if (*(int *)0x1fbc < 10) {
          piVar1 = (int *)0x1fbc;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            *(undefined2 *)0x1fbc = 10;
          }
        }
        if (iStack_234 == 0) {
          if (*(int *)0x1f8c == 0x1f2) {
            iVar7 = 0;
          }
          else if (-*(int *)0x1f8c == -0x1f2 || -*(int *)0x1f8c + 0x1f2 < 0) {
            iVar7 = -1;
          }
          else {
            iVar7 = 1;
          }
          *(int *)0x1d6c = iVar7 * 10;
          if (*(int *)0x1d8c != 0) {
            if (*(int *)0x1d8c < 1) {
              iVar7 = -1;
            }
            else {
              iVar7 = 1;
            }
            *(int *)0x1d8c = *(int *)0x1d8c - iVar7;
          }
          uVar8 = (*(int *)0x1d6c + *(int *)0x1f8c) - 0x1d2;
          uVar10 = (int)uVar8 >> 0xf;
          if ((int)((uVar8 ^ uVar10) - uVar10) < 9) {
            iStack_234 = 1;
            *(undefined2 *)0x1d8c = 0xfffe;
            *(undefined2 *)0x1d6c = 0;
          }
        }
        else {
          if (iStack_25e < 0xa2) {
            iStack_25e = iStack_25e + 1;
          }
          if (iStack_25e == 0xa2) {
            iStack_25e = 0;
            *(undefined2 *)0x1d4c = 2;
          }
          if (iStack_25e < 0x31) {
            if (iStack_25e == 0x10) {
              *(undefined2 *)0x1d4c = 0;
              *(undefined2 *)0x1d8c = 0;
              if (iStack_3b8 == 0) {
                aiStack_dc[1] = *(int *)0x1fd0 + 8;
                aiStack_dc[0] = *(int *)0x1fd0 + 8;
                piStack_d6 = (int *)(*(int *)0x1fd2 + 8);
                piStack_d8 = (int *)(*(int *)0x1fd2 + 8);
                iStack_394 = 0;
                do {
                  aiStack_23c[iStack_394] = -0x10;
                  iStack_394 = iStack_394 + 1;
                } while (iStack_394 < 4);
                iStack_3b8 = 2;
              }
            }
            if (iStack_25e == 0x20) {
              *(undefined2 *)0x1d4c = 0xfffe;
              iVar7 = FUN_1000_efc8();
              *(int *)0x1d8c = (iVar7 % 2) * 4 + -2;
              if (9 < iStack_210) {
                iStack_25e = 0xa4;
                *(undefined2 *)0x1d4c = 0;
                *(int *)0x1d8c = *(int *)0x1d8c << 2;
              }
            }
            if (iStack_25e == 0x30) {
              *(undefined2 *)0x1d4c = 0;
            }
            iVar7 = *(int *)0x1d4c;
            *(int *)0x1fd0 = *(int *)0x1fd0 - iVar7;
            *(int *)0x1fd2 = *(int *)0x1fd2 + iVar7;
          }
        }
        if ((*(int *)0x1d8c + *(int *)0x1fcc < 0x21) || (0xff < *(int *)0x1d8c + *(int *)0x1fcc)) {
          *(int *)0x1d8c = -*(int *)0x1d8c;
        }
        if ((*(int *)0x1844 + *(int *)0x1846 == 0) && (iStack_34a < 0x10)) {
          bVar11 = iStack_25e == 0xa4;
          iVar7 = FUN_1000_efc8();
          piVar9 = (int *)(iVar7 % (int)(4 - (uint)bVar11));
          if ((piVar9 == (int *)0x0) && ((0 < *(int *)0x1f8c && (*(int *)0x1f8c < 0x201)))) {
            piStack_34e = piVar9;
            do {
              if (0x15f < aiStack_3b4[(int)piStack_34e]) {
                piStack_370 = piStack_34e;
              }
              piVar9 = piStack_370;
              piStack_34e = (int *)((int)piStack_34e + 1);
            } while ((int)piStack_34e < 0x10);
            aiStack_3b4[(int)piStack_370] = *(int *)0x1fcc + 0x1c;
            aiStack_392[(int)piVar9] = *(int *)0x1f8c + 0x10;
            aiStack_346[(int)piVar9] = (-(uint)(iStack_25e == 0xa4) & 0x1e) + 0x1e;
            auStack_1e4[(int)piVar9] = 0;
            auStack_fc[(int)piVar9] = 0;
            goto LAB_1000_6a9b;
          }
        }
      }
      else {
        iStack_234 = iStack_234 + 1;
        if (iStack_234 == 2) {
          FUN_1000_cf2c();
        }
        *(undefined2 *)0x1d8c = 0;
        *(undefined2 *)0x1d6c = 0;
        for (piStack_34c = (int *)0x9; (int)piStack_34c < 0x10;
            piStack_34c = (int *)((int)piStack_34c + 1)) {
          iVar7 = (int)piStack_34c * 2;
          if (*(int *)(iVar7 + 0x1faa) < 10) {
            piVar1 = (int *)((int)piStack_34c * 2 + 0x1faa);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              *(undefined2 *)((int)piStack_34c * 2 + 0x1faa) = 10;
            }
          }
          else if (iStack_234 < 0x28) {
            iVar6 = FUN_1000_efc8();
            *(int *)(iVar7 + 0x1faa) = -(iVar6 % 3 + -9);
            iVar6 = FUN_1000_efc8();
            *(int *)(iVar7 + 0x1f8a) = iVar6 % 0x60 + *(int *)0x1f90 + 0x10;
            iVar6 = FUN_1000_efc8();
            *(int *)(iVar7 + 0x1fca) = iVar6 % 0x80 + *(int *)0x1fd0 + -0x10;
            *(undefined2 *)(iVar7 + 0x1d6a) = 0;
            *(undefined2 *)(iVar7 + 0x1d8a) = 0;
            piStack_c = (int *)0x6b48;
            FUN_1000_cff4();
          }
        }
        if (iStack_234 == 0x28) {
          *(undefined1 *)0x2ba = 0;
          piStack_c = (int *)0x6b64;
          FUN_1000_83b5();
          piStack_34c = (int *)0x1;
          do {
            iVar7 = (int)piStack_34c * 2;
            *(undefined2 *)(iVar7 + 0x1f9a) = *(undefined2 *)(iVar7 + 0x1f8a);
            *(undefined2 *)(iVar7 + 0x1fda) = *(undefined2 *)(iVar7 + 0x1fca);
            *(undefined2 *)(iVar7 + 0x1fba) = 9;
            piStack_34c = (int *)((int)piStack_34c + 1);
          } while ((int)piStack_34c < 6);
          *(undefined2 *)0x1fa6 = *(undefined2 *)0x1f9a;
          *(undefined2 *)0x1fe6 = *(undefined2 *)0x1fda;
          *(undefined2 *)0x1fc6 = 9;
          iVar7 = *(int *)(*(int *)0x1816 * 0x14 + 0x2f4);
          goto LAB_1000_6162;
        }
      }
    }
    if (0x32 < iStack_234) goto LAB_1000_804a;
    piStack_34c = (int *)0x0;
  }
  else {
    if (-0x10 < aiStack_232[(int)piStack_34c]) {
      aiStack_20e[(int)piStack_34c] = aiStack_20e[(int)piStack_34c] + aiStack_36e[(int)piStack_34c];
      aiStack_232[(int)piStack_34c] =
           aiStack_232[(int)piStack_34c] + aiStack_25c[(int)piStack_34c] * (*(int *)0x181e + 2) * 2;
      if (iStack_3b6 == 1) {
        if (((*(int *)0x1f8c <= aiStack_20e[(int)piStack_34c]) &&
            (aiStack_20e[(int)piStack_34c] <= *(int *)0x1f8c + 0x70)) &&
           ((*(int *)0x1fcc + -8 <= aiStack_232[(int)piStack_34c] &&
            (aiStack_232[(int)piStack_34c] <= *(int *)0x1fcc + 0x58)))) {
          if ((*(int *)0x1fcc + 0x1c <= aiStack_232[(int)piStack_34c]) &&
             (aiStack_232[(int)piStack_34c] <= *(int *)0x1fcc + 0x34)) {
            piStack_c = (int *)0x6e56;
            FUN_1000_cff4();
            *(undefined2 *)0x1fb8 = 9;
            *(int *)0x1fd8 = aiStack_232[(int)piVar9] + -8;
            *(int *)0x1f98 = aiStack_20e[(int)piVar9] + -8;
            iStack_210 = iStack_210 + 1;
            *(int *)0x1db6 = *(int *)0x1db6 + *(int *)(*(int *)0x1816 * 0x14 + 0x2ea);
            FUN_1000_a25a();
          }
          iVar7 = (int)piStack_34c << 1;
LAB_1000_6e91:
          *(undefined2 *)((int)aiStack_232 + iVar7) = 0xfff0;
        }
      }
      else if (iStack_3b6 == 2) {
        if ((((*(int *)0x1f8c + -6 <= aiStack_20e[(int)piStack_34c]) &&
             (aiStack_20e[(int)piStack_34c] <= *(int *)0x1f8c + 0x36)) &&
            (*(int *)0x1fcc + 2 <= aiStack_232[(int)piStack_34c])) &&
           (aiStack_232[(int)piStack_34c] <= *(int *)0x1fcc + 0x2e)) {
          piStack_c = (int *)0x6f62;
          FUN_1000_cff4();
          *(undefined2 *)0x1fc8 = 9;
          *(int *)0x1fe8 = aiStack_232[(int)piVar9] + -8;
          *(int *)0x1fa8 = aiStack_20e[(int)piVar9] + -8;
          iStack_210 = iStack_210 + 1;
          *(int *)0x1db6 = *(int *)0x1db6 + *(int *)(*(int *)0x1816 * 0x14 + 0x2ee);
          FUN_1000_a25a();
          aiStack_232[(int)piVar9] = -0x10;
        }
        for (piStack_34e = (int *)0x3; (int)piStack_34e < 0xf;
            piStack_34e = (int *)((int)piStack_34e + 1)) {
          iVar7 = *(int *)((int)piStack_34e * 2 + 0x1f8a);
          if (((iVar7 + -0xc <= aiStack_20e[(int)piStack_34c]) &&
              (aiStack_20e[(int)piStack_34c] <= iVar7 + 0x1c)) &&
             ((iVar7 = *(int *)((int)piStack_34e * 2 + 0x1fca),
              iVar7 + -4 <= aiStack_232[(int)piStack_34c] &&
              (aiStack_232[(int)piStack_34c] <= iVar7 + 0x1c)))) {
            aiStack_232[(int)piStack_34c] = -0x10;
          }
        }
      }
      else if (iStack_3b6 == 3) {
        if (((*(int *)0x1f8c + 10 <= aiStack_20e[(int)piStack_34c]) &&
            (aiStack_20e[(int)piStack_34c] <= *(int *)0x1f8c + 0x16)) &&
           ((*(int *)0x1fcc + -8 <= aiStack_232[(int)piStack_34c] &&
            (aiStack_232[(int)piStack_34c] <= *(int *)0x1fcc + 0x38)))) {
          if ((*(int *)0x1fcc + 0xe <= aiStack_232[(int)piStack_34c]) &&
             (aiStack_232[(int)piStack_34c] <= *(int *)0x1fcc + 0x22)) {
            piStack_c = (int *)0x7050;
            FUN_1000_cff4();
            *(undefined2 *)0x1fbc = 9;
            *(int *)0x1fdc = aiStack_232[(int)piVar9] + -8;
            *(int *)0x1f9c = aiStack_20e[(int)piVar9] + -8;
            iStack_210 = iStack_210 + 1;
            *(int *)0x1db6 = *(int *)0x1db6 + *(int *)(*(int *)0x1816 * 0x14 + 0x2f2);
            FUN_1000_a25a();
          }
          aiStack_232[(int)piStack_34c] = -0x10;
        }
        iVar7 = (int)piStack_34c * 2;
        if ((((*(int *)0x1f94 + -8 <= aiStack_20e[(int)piStack_34c]) &&
             (aiStack_20e[(int)piStack_34c] <= *(int *)0x1f94 + 0x46)) &&
            (*(int *)0x1fd4 + -8 <= aiStack_232[(int)piStack_34c])) &&
           (aiStack_232[(int)piStack_34c] <= *(int *)0x1fd4 + 0x78)) goto LAB_1000_6e91;
        piStack_34e = (int *)0x3;
        do {
          iVar7 = *(int *)((int)piStack_34e * 2 + 0x1f8a);
          if (((iVar7 + -6 <= aiStack_20e[(int)piStack_34c]) &&
              (aiStack_20e[(int)piStack_34c] <= iVar7 + 0x38)) &&
             ((iVar7 = *(int *)((int)piStack_34e * 2 + 0x1fca),
              iVar7 + -8 <= aiStack_232[(int)piStack_34c] &&
              (aiStack_232[(int)piStack_34c] <= iVar7 + 0x18)))) {
            aiStack_232[(int)piStack_34c] = -0x10;
          }
          piStack_34e = (int *)((int)piStack_34e + 1);
        } while ((int)piStack_34e < 5);
      }
      if (((aiStack_20e[(int)piStack_34c] < 0) || (0x26f < aiStack_20e[(int)piStack_34c])) ||
         (0x15f < aiStack_232[(int)piStack_34c])) {
        aiStack_232[(int)piStack_34c] = -0x10;
      }
      if (aiStack_232[(int)piStack_34c] < -0xf) {
        iStack_d4 = iStack_d4 + -1;
      }
    }
    piStack_34c = (int *)((int)piStack_34c + 1);
  }
  bVar11 = SBORROW2((int)piStack_34c,*(int *)0x1d48);
  iVar7 = (int)piStack_34c - *(int *)0x1d48;
  goto code_r0x00016edc;
switchD_1000_d77b_caseD_3d:
  for (; in_CX != 0; in_CX = in_CX + -1) {
    puVar2 = unaff_DI;
    unaff_DI = unaff_DI + 1;
    *puVar2 = (char)param_1;
  }
  if ((code *)*(int *)0x140c != (code *)0x0) {
    (*(code *)*(int *)0x140c)();
  }
  FUN_1000_0010();
  FUN_1000_f1a2();
  FUN_1000_e734();
  piStack_c = (int *)*(undefined2 *)0x122b;
  piStack_e = (int *)0xe6fd;
  piStack_e = (int *)FUN_1000_0011();
  piStack_10 = (int *)0xe701;
  iVar7 = FUN_1000_e802();
  return iVar7;
  while( true ) {
    iVar7 = iVar7 + -1;
    piVar1 = piVar9;
    piVar9 = (int *)((int)piVar9 + 1);
    if ((char)*piVar1 == '\0') break;
code_r0x0001aaf3:
    if (iVar7 == 0) break;
  }
  if (iVar7 != -2) {
    uVar8 = 0;
    do {
      piVar9 = &iStack_2c;
      uVar10 = 0xffff;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        piVar1 = piVar9;
        piVar9 = (int *)((int)piVar9 + 1);
      } while ((char)*piVar1 != '\0');
      (&stack0xfff7)[uVar8 - (~uVar10 - 1)] = *(undefined1 *)((int)&iStack_2c + uVar8);
      piVar9 = &iStack_2c;
      uVar10 = 0xffff;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        piVar1 = piVar9;
        piVar9 = (int *)((int)piVar9 + 1);
      } while ((char)*piVar1 != '\0');
      uVar8 = uVar8 + 1;
    } while (uVar8 < ~uVar10 - 1);
  }
  piStack_c = (int *)0xab3b;
  FUN_1000_beea();
  piStack_c = (int *)0xab51;
  FUN_1000_beea();
  FUN_1000_9ff0();
  FUN_1000_af50();
  iVar7 = FUN_1000_8493();
  return iVar7;
}



/* 1000:d7ac  FUN_1000_d7ac  23 bytes, 1 callers */

undefined2 __cdecl16near FUN_1000_d7ac(void)

{
  undefined2 unaff_DS;
  
  if (*(int *)0x18aa == 1) {
    *(undefined2 *)0x18aa = 0;
    FUN_1000_d468();
    return 0;
  }
  return 6;
}



/* 1000:d7c4  FUN_1000_d7c4  26 bytes, 1 callers */

undefined2 __cdecl16near FUN_1000_d7c4(void)

{
  undefined2 unaff_DS;
  
  FUN_1000_f000(8,*(undefined2 *)0x1db8,*(undefined2 *)0x1dba);
  out(2,(char)*(undefined2 *)0x184e);
  return *(undefined2 *)0x184e;
}



/* 1000:d7de  FUN_1000_d7de  60 bytes, 1 callers */

uint __cdecl16near FUN_1000_d7de(void)

{
  byte bVar1;
  undefined2 unaff_DS;
  undefined4 uVar2;
  
  uVar2 = FUN_1000_efee(8);
  *(undefined2 *)0x1db8 = (int)uVar2;
  *(undefined2 *)0x1dba = (int)((ulong)uVar2 >> 0x10);
  bVar1 = in(2);
  *(uint *)0x184e = (uint)bVar1;
  FUN_1000_f000(8,0xd81a,0x1000);
  out(0x77,0x36);
  FUN_1000_d884();
  out(2,(char)(*(uint *)0x184e & 0xfffe));
  return *(uint *)0x184e & 0xfffe;
}



/* 1000:d884  FUN_1000_d884  15 bytes, 1 callers */

undefined1 __cdecl16near FUN_1000_d884(void)

{
  undefined2 unaff_DS;
  
  out(0x71,*(undefined1 *)0x1850);
  out(0x71,*(undefined1 *)0x1851);
  return *(undefined1 *)0x1851;
}



/* 1000:d8dc  FUN_1000_d8dc  432 bytes, 0 callers */

undefined2 __cdecl16near FUN_1000_d8dc(int param_1,int param_2,undefined2 param_3)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  undefined2 unaff_DS;
  int local_4;
  
  iVar3 = *(int *)0x1858 * 0x16;
  if (((*(int *)(iVar3 + 0x17c2) == 1) && (*(int *)(iVar3 + 0x17c6) != 1)) &&
     (*(int *)(iVar3 + 0x17be) != 0x20)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  iVar3 = *(int *)0x1858 - param_1;
  if (*(int *)0x1858 == param_1) {
    if ((*(char *)(param_1 * 0x16 + 0x17ba) == 'H') || (bVar2)) {
      if ((*(char *)(param_1 * 0x16 + 0x17d0) != 'H') && (1 < *(int *)(param_1 * 0x16 + 0x17d8)))
      goto LAB_1000_d9ef;
      if ((*(char *)(param_1 * 0x16 + 0x17e6) != 'H') && (1 < *(int *)(param_1 * 0x16 + 0x17ee)))
      goto LAB_1000_da1c;
      iVar3 = param_1 * 0x16 + 0x17b2;
    }
    else {
      iVar3 = param_1 * 0x16 + 0x17b2;
    }
  }
  else {
    if (iVar3 == 1) {
      if ((*(char *)(param_1 * 0x16 + 0x17d0) != 'H') && (!bVar2)) {
LAB_1000_d9ef:
        iVar3 = param_1 * 0x16 + 0x17c8;
        goto LAB_1000_d97e;
      }
      iVar3 = param_1 * 0x16;
      if (((*(char *)(iVar3 + 0x17ba) != 'H') || (*(char *)(iVar3 + 0x17e6) == 'H')) ||
         (*(int *)(iVar3 + 0x17ee) < 2)) goto LAB_1000_d984;
    }
    else if (((iVar3 != 2) || (*(char *)(param_1 * 0x16 + 0x17e6) == 'H')) || (bVar2))
    goto LAB_1000_d984;
LAB_1000_da1c:
    iVar3 = param_1 * 0x16 + 0x17de;
  }
LAB_1000_d97e:
  FUN_1000_db32(iVar3);
LAB_1000_d984:
  iVar3 = *(int *)0x1858;
  piVar1 = (int *)(iVar3 * 0x16 + 0x17c2);
  *piVar1 = *piVar1 + -1;
  if ((*piVar1 == 0) && (iVar3 = FUN_1000_d4f2(iVar3 * 0x16 + 0x17b2), iVar3 == 0)) {
    *(uint *)0x185a = *(uint *)0x185a | 1 << (*(byte *)0x1858 & 0x1f);
  }
  *(int *)0x1858 = *(int *)0x1858 + 1;
  if ((*(int *)0x1858 == param_2) && (*(undefined2 *)0x1858 = param_3, *(int *)0x185a == 7)) {
    *(undefined2 *)0x185a = 0;
    for (local_4 = 0; local_4 < 3; local_4 = local_4 + 1) {
      iVar3 = local_4 * 0x16 + 0x17b2;
      FUN_1000_d4b4(iVar3);
      *(uint *)(local_4 * 0x16 + 0x17c4) =
           (uint)((1 << ((byte)local_4 & 0x1f) & *(uint *)0x1888) != 0);
      FUN_1000_d4f2(iVar3);
    }
    return 1;
  }
  return 0;
}



/* 1000:da92  FUN_1000_da92  95 bytes, 0 callers */

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



/* 1000:daf2  FUN_1000_daf2  63 bytes, 1 callers */

undefined4 __cdecl16near FUN_1000_daf2(undefined2 param_1)

{
  byte bVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined1 local_6;
  undefined1 uStack_5;
  
  bVar1 = in(0x42);
  if ((bVar1 & 0x20) == 0) {
    uVar2 = 0x8190;
    uVar3 = 0x25;
  }
  else {
    uVar2 = 0x78c8;
    uVar3 = 0x1e;
  }
  uVar2 = FUN_1000_f016(uVar2,uVar3,param_1,0);
  local_6 = (undefined1)uVar2;
  out(0x3fdb,local_6);
  uStack_5 = (undefined1)((uint)uVar2 >> 8);
  out(0x3fdb,uStack_5);
  out(0x37,6);
  return 0x3fdb0006;
}



/* 1000:db32  FUN_1000_db32  127 bytes, 1 callers */

void __cdecl16near FUN_1000_db32(int param_1)

{
  byte bVar1;
  undefined2 unaff_DS;
  undefined4 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 local_6;
  
  if (*(int *)(param_1 + 0x12) != 1) {
    if (*(int *)(param_1 + 10) == 1) {
      local_6 = *(int *)(*(char *)(param_1 + 8) * 2 + 0xeee) << 1;
    }
    else {
      local_6 = *(uint *)(*(char *)(param_1 + 8) * 2 + 0xeee) /
                *(uint *)(*(int *)(param_1 + 10) * 2 + 0xf9e);
    }
    bVar1 = in(0x42);
    if ((bVar1 & 0x20) != 0) {
      uVar4 = 0;
      uVar3 = 0x4cd;
      uVar2 = FUN_1000_f0b0(local_6,0,0x3e6,0);
      local_6 = FUN_1000_f0e2(uVar2,uVar3,uVar4);
    }
    out(0x3fdb,(undefined1)local_6);
    out(0x3fdb,local_6._1_1_);
    out(0x37,6);
  }
  return;
}



/* 1000:dbb2  FUN_1000_dbb2  600 bytes, 1 callers */

void __cdecl16near FUN_1000_dbb2(void)

{
  undefined2 *puVar1;
  int *piVar2;
  code *pcVar3;
  byte bVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  undefined2 *puVar8;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar9;
  int local_16;
  uint local_14;
  int local_12;
  int local_10;
  int *piStack_e;
  uint uStack_c;
  
  *(int **)0x118a = &local_16;
  pcVar3 = (code *)swi(0x18);
  (*pcVar3)();
  out(0x68,8);
  out(0x6a,1);
  out(0xa6,0);
  local_14 = 0xdbd3;
  FUN_1000_b4ee();
  out(0xa4,0);
  local_16 = 1;
  out(0xa6,1);
  local_14 = 0xdbe2;
  FUN_1000_b4ee();
  local_14 = 0xdbe5;
  FUN_1000_dec4();
  local_14 = 0x103e;
  local_16 = -0x2415;
  FUN_1000_ba6a();
  out(0x7c,0xce);
  out(0x7e,0xff);
  out(0x7e,0xff);
  out(0x7e,0xff);
  out(0x7e,0xff);
  local_10 = 6;
  piVar6 = &local_16;
  do {
    do {
      do {
        bVar4 = in(0x60);
      } while ((bVar4 & 0x20) == 0);
    } while (*(int *)0xdd0 < 2);
    out(0xa4,(char)*piVar6);
    iVar5 = 1 - *piVar6;
    out(0xa6,(char)iVar5);
    *piVar6 = iVar5;
    *(undefined2 *)0xdd0 = 0;
    out(0x7c,0);
    puVar8 = (undefined2 *)0x0;
    for (iVar5 = 8000; iVar5 != 0; iVar5 = iVar5 + -1) {
      puVar1 = puVar8;
      puVar8 = puVar8 + 1;
      *puVar1 = 0;
    }
    piVar6[2] = 0x106e;
    piVar6[1] = 7;
    do {
      piVar2 = (int *)piVar6[2];
      iVar5 = *piVar2;
      *(int *)0x1036 = (iVar5 / piVar6[3] - (iVar5 >> 7)) + 0x13f;
      iVar5 = piVar2[1];
      *(int *)0x103c = (iVar5 / piVar6[3] - (iVar5 >> 7)) + 0x13f;
      local_14 = 0xdc8e;
      FUN_1000_de0c();
      piStack_e = piStack_e + 4;
      local_10 = local_10 + -1;
      piVar6 = &local_12;
    } while (local_10 != 0);
    out(0x7c,0xce);
    piStack_e = (int *)0x10a6;
    local_10 = 6;
    do {
      local_14 = (piStack_e[3] / (int)uStack_c - (piStack_e[3] >> 7)) + 0x13f;
      local_16 = (piStack_e[2] / (int)uStack_c - (piStack_e[2] >> 7)) + 0x13f;
      FUN_1000_def6((piStack_e[4] / (int)uStack_c - (piStack_e[4] >> 7)) + 99,
                    (*piStack_e / (int)uStack_c - (*piStack_e >> 7)) + 0x13f,
                    (piStack_e[1] / (int)uStack_c - (piStack_e[1] >> 7)) + 0x13f,
                    (piStack_e[5] / (int)uStack_c - (piStack_e[5] >> 7)) + 99);
      piStack_e = piStack_e + 6;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
    uStack_c = uStack_c + 1;
    piVar6 = &local_12;
  } while (uStack_c < 0x41);
  do {
  } while (*(int *)0xdd0 < 2);
  out(0xa4,(char)local_12);
  out(0x7c,0xcd);
  out(0x7e,0xff);
  out(0x7e,0xff);
  out(0x7e,0xff);
  out(0x7e,0xff);
  piStack_e = (int *)0x10ee;
  local_10 = 9;
  do {
    *(int *)0x1036 = *piStack_e + 0x13f;
    *(int *)0x103c = piStack_e[1] + 0x13f;
    local_14 = 0xdd7c;
    FUN_1000_de0c();
    piStack_e = piStack_e + 4;
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  piStack_e = (int *)0x1136;
  local_10 = 7;
  do {
    local_14 = piStack_e[3] + 0x13f;
    local_16 = piStack_e[2] + 0x13f;
    FUN_1000_def6(piStack_e[4] + 99,*piStack_e + 0x13f,piStack_e[1] + 0x13f,piStack_e[5] + 99);
    piStack_e = piStack_e + 6;
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  out(0x7c,0);
  uVar7 = 0x3c;
  *(undefined2 *)0xdd0 = 0;
  local_10 = 0;
  do {
    local_14 = uVar7 >> 2;
    local_16 = (uVar7 >> 4) + 0xc;
    do {
    } while (*(int *)0xdd0 < 1);
    FUN_1000_ba8c(2,local_14);
    *(undefined2 *)0xdd0 = 0;
    bVar9 = uVar7 != 0;
    uVar7 = uVar7 - 1;
  } while (bVar9);
  return;
}



/* 1000:de0c  FUN_1000_de0c  184 bytes, 1 callers */

void __cdecl16near FUN_1000_de0c(void)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int unaff_SI;
  int iVar8;
  int unaff_DI;
  uint *puVar9;
  undefined2 unaff_DS;
  
  if (unaff_SI < 200) {
    if (unaff_SI < 0) {
      unaff_SI = 0;
    }
    if (unaff_SI <= unaff_DI) {
      if (199 < unaff_DI) {
        unaff_DI = 199;
      }
      iVar8 = 1 - (unaff_SI - unaff_DI);
      uVar7 = *(uint *)0x1036;
      if ((int)uVar7 < 0x280) {
        if ((int)uVar7 < 0) {
          uVar7 = 0;
        }
        uVar4 = *(uint *)0x103c;
        if ((int)uVar7 <= (int)uVar4) {
          if (0x27f < (int)uVar4) {
            uVar4 = 0x27f;
          }
          puVar9 = (uint *)(unaff_SI * 0x50 + (uVar7 >> 4) * 2);
          uVar2 = *(uint *)((uVar7 & 0xf) * 2 + 0xdf2);
          uVar3 = *(uint *)((uVar4 & 0xf) * 2 + 0xe12);
          iVar5 = (uVar4 >> 4) - (uVar7 >> 4);
          if (iVar5 == 0) {
            do {
              *puVar9 = uVar2 & uVar3;
              puVar9 = puVar9 + 0x28;
              iVar8 = iVar8 + -1;
            } while (iVar8 != 0);
            return;
          }
          iVar5 = iVar5 + -1;
          do {
            *puVar9 = uVar2;
            for (iVar6 = iVar5; puVar1 = puVar9 + 1, iVar6 != 0; iVar6 = iVar6 + -1) {
              *puVar1 = 0xffff;
              puVar9 = puVar1;
            }
            *puVar1 = uVar3;
            puVar9 = puVar9 + (0x28 - iVar5);
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
          return;
        }
      }
    }
  }
  return;
}



/* 1000:dec4  FUN_1000_dec4  39 bytes, 1 callers */

void __cdecl16near FUN_1000_dec4(void)

{
  int iVar1;
  undefined2 unaff_DS;
  
  iVar1 = 0;
  *(undefined2 *)0xdd0 = 0;
  do {
    do {
    } while (*(int *)0xdd0 < 2);
    iVar1 = FUN_1000_ba8c(0,iVar1,iVar1,iVar1);
    *(undefined2 *)0xdd0 = 0;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x10);
  return;
}



/* 1000:deeb  FUN_1000_deeb  11 bytes, 1 callers */

void __cdecl16near FUN_1000_deeb(void)

{
  code *pcVar1;
  
  out(0x68,9);
  pcVar1 = (code *)swi(0x18);
  (*pcVar1)();
  return;
}



/* 1000:def6  FUN_1000_def6  605 bytes, 1 callers */

undefined4 __cdecl16near
FUN_1000_def6(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  uint uVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint *puVar12;
  undefined2 unaff_DS;
  int iStack_8;
  
  uVar5 = param_2;
  uVar10 = param_5;
  uVar9 = param_4;
  uVar7 = param_6;
  uVar3 = param_3;
  if ((int)param_4 < (int)param_1) {
    uVar5 = param_5;
    uVar10 = param_2;
    uVar9 = param_1;
    param_1 = param_4;
    uVar7 = param_3;
    uVar3 = param_6;
  }
  uVar1 = uVar5;
  if ((int)uVar3 < (int)uVar5) {
    uVar1 = uVar3;
    uVar3 = uVar5;
  }
  uVar5 = uVar10;
  if ((int)uVar7 < (int)uVar10) {
    uVar5 = uVar7;
    uVar7 = uVar10;
  }
  if (((((int)uVar1 < 0x280) || ((int)uVar5 < 0x280)) && ((-1 < (int)uVar3 || (-1 < (int)uVar7))))
     && ((-1 < (int)uVar9 && ((int)param_1 < 200)))) {
    uVar10 = param_1;
    if ((int)param_1 < 0) {
      uVar10 = 0;
      uVar1 = (int)(((long)(int)-(uVar1 - uVar5) * (long)(int)uVar9) / (long)(int)(param_1 - uVar9))
              + uVar5;
    }
    uVar8 = uVar9;
    if (199 < (int)uVar9) {
      uVar8 = 199;
      uVar5 = (int)(((long)(int)-(uVar1 - uVar5) * (long)(int)(199 - uVar10)) /
                   (long)(int)(uVar9 - uVar10)) + uVar1;
    }
    *(uint *)0x118e = uVar1;
    *(uint *)0x1190 = uVar10;
    *(int *)0x1198 = uVar10 - uVar8;
    *(int *)0x1194 = (uVar10 - uVar8) * -2;
    iVar6 = uVar5 - uVar1;
    uVar2 = 0;
    if (iVar6 < 0) {
      iVar6 = -iVar6;
      uVar2 = 0xffff;
    }
    else if (iVar6 != 0) {
      uVar2 = 1;
    }
    *(undefined2 *)0x1196 = uVar2;
    *(int *)0x1192 = iVar6 << 1;
    iVar6 = 0x119a;
    if ((int)param_1 < 0) {
      iVar11 = param_1 - uVar9;
      param_1 = 0;
      uVar3 = (int)(((long)(int)-(uVar3 - uVar7) * (long)(int)uVar9) / (long)iVar11) + uVar7;
    }
    if (199 < (int)uVar9) {
      iVar11 = uVar9 - param_1;
      uVar9 = 199;
      uVar7 = (int)(((long)(int)-(uVar3 - uVar7) * (long)(int)(199 - param_1)) / (long)iVar11) +
              uVar3;
    }
    *(uint *)0x119c = uVar3;
    *(uint *)0x119e = param_1;
    *(int *)0x11a6 = param_1 - uVar9;
    *(int *)0x11a2 = (param_1 - uVar9) * -2;
    iVar11 = uVar7 - uVar3;
    uVar2 = 0;
    if (iVar11 < 0) {
      iVar11 = -iVar11;
      uVar2 = 0xffff;
    }
    else if (iVar11 != 0) {
      uVar2 = 1;
    }
    *(undefined2 *)0x11a4 = uVar2;
    *(int *)0x11a0 = iVar11 << 1;
    if (uVar9 != param_1) {
      iStack_8 = (uVar9 - param_1) + 1;
      iVar11 = param_1 * 0x50;
      iVar6 = 0x118c;
      goto LAB_1000_e048;
    }
    iStack_8 = (uVar9 - param_1) + 1;
    iVar11 = param_1 * 0x50;
    uVar5 = param_5;
    if ((int)param_5 < (int)param_2) {
      uVar5 = param_2;
      param_2 = param_5;
    }
    uVar9 = param_3;
    if ((int)param_6 < (int)param_3) {
      uVar9 = param_6;
      param_6 = param_3;
    }
    uVar1 = uVar9;
    if ((int)uVar9 < (int)param_2) {
      uVar1 = param_2;
      param_2 = uVar9;
    }
    uVar10 = uVar5;
    uVar9 = param_6;
    if ((int)uVar5 < (int)param_6) {
      uVar10 = param_6;
      uVar9 = uVar5;
    }
    while( true ) {
      if (((int)param_2 < 0x280) && (-1 < (int)uVar10)) {
        if ((int)param_2 < 0) {
          param_2 = 0;
        }
        if (0x27f < (int)uVar10) {
          uVar10 = 0x27f;
        }
        puVar12 = (uint *)(iVar11 + (param_2 >> 4) * 2);
        uVar9 = *(uint *)((param_2 & 0xf) * 2 + 0x11a8);
        uVar1 = ~*(uint *)(((uVar10 & 0xf) + 1) * 2 + 0x11a8);
        iVar4 = (uVar10 >> 4) - (param_2 >> 4);
        if (iVar4 == 0) {
          uVar1 = uVar9 & uVar1;
          *puVar12 = uVar1;
        }
        else {
          *puVar12 = uVar9;
          while( true ) {
            puVar12 = puVar12 + 1;
            iVar4 = iVar4 + -1;
            if (iVar4 == 0) break;
            *puVar12 = 0xffff;
          }
          *puVar12 = uVar1;
        }
      }
      iStack_8 = iStack_8 + -1;
      iVar11 = iVar11 + 0x50;
      if (iStack_8 == 0) break;
LAB_1000_e048:
      param_2 = *(uint *)(iVar6 + 2);
      uVar9 = param_2;
      for (iVar4 = *(int *)(iVar6 + 0xc) + *(int *)(iVar6 + 6); -1 < iVar4;
          iVar4 = iVar4 - *(int *)(iVar6 + 8)) {
        uVar9 = uVar9 + *(int *)(iVar6 + 10);
      }
      *(uint *)(iVar6 + 2) = uVar9;
      *(int *)(iVar6 + 0xc) = iVar4;
      uVar10 = *(uint *)(iVar6 + 0x10);
      uVar9 = uVar10;
      for (uVar1 = *(int *)(iVar6 + 0x1a) + *(int *)(iVar6 + 0x14); -1 < (int)uVar1;
          uVar1 = uVar1 - *(int *)(iVar6 + 0x16)) {
        uVar9 = uVar9 + *(int *)(iVar6 + 0x18);
      }
      *(uint *)(iVar6 + 0x10) = uVar9;
      *(uint *)(iVar6 + 0x1a) = uVar1;
    }
  }
  return CONCAT22(uVar9,uVar1);
}



/* 1000:e156  FUN_1000_e156  43 bytes, 1 callers */

undefined2 __cdecl16near FUN_1000_e156(undefined2 *param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  
  iVar1 = FUN_1000_ec12(*param_1,param_1 + 3,param_1[2]);
  if (iVar1 == param_1[2]) {
    uVar2 = FUN_1000_e8d2(*param_1);
  }
  else {
    uVar2 = 0xffff;
  }
  return uVar2;
}



/* 1000:e182  FUN_1000_e182  43 bytes, 1 callers */

int __cdecl16near FUN_1000_e182(undefined2 param_1,int *param_2)

{
  int iVar1;
  undefined2 unaff_DS;
  
  iVar1 = FUN_1000_e986(param_1,0x8301,0x80);
  *param_2 = iVar1;
  if (iVar1 != -1) {
    param_2[2] = 0;
    iVar1 = *param_2;
  }
  return iVar1;
}



/* 1000:e1ae  FUN_1000_e1ae  64 bytes, 1 callers */

undefined2 __cdecl16near FUN_1000_e1ae(undefined2 *param_1,int param_2)

{
  undefined2 unaff_DS;
  long lVar1;
  
  param_1[2] = param_1[2] + param_2;
  if ((int)param_1[1] <= (int)param_1[2]) {
    lVar1 = FUN_1000_e8f2(*param_1,param_1[2] - param_1[1],(int)(param_1[2] - param_1[1]) >> 0xf,1);
    if (lVar1 == -1) {
      return 0xffff;
    }
    param_1[2] = param_1[1];
  }
  return 0;
}



/* 1000:e1ee  FUN_1000_e1ee  57 bytes, 4 callers */

int __cdecl16near FUN_1000_e1ee(undefined2 param_1,int *param_2)

{
  int iVar1;
  undefined2 unaff_DS;
  
  iVar1 = FUN_1000_e986(param_1,0x8000);
  *param_2 = iVar1;
  if (iVar1 != -1) {
    iVar1 = FUN_1000_eb28(*param_2,param_2 + 3,0x800);
    param_2[1] = iVar1;
    param_2[2] = 0;
    iVar1 = *param_2;
  }
  return iVar1;
}



/* 1000:e228  FUN_1000_e228  61 bytes, 5 callers */

undefined1 __cdecl16near FUN_1000_e228(undefined2 *param_1)

{
  int iVar1;
  undefined2 unaff_DS;
  
  if ((int)param_1[1] <= (int)param_1[2]) {
    iVar1 = FUN_1000_eb28(*param_1,param_1 + 3,0x800);
    param_1[1] = iVar1;
    if (iVar1 == 0) {
      return 0xff;
    }
    param_1[2] = 0;
  }
  iVar1 = param_1[2];
  param_1[2] = param_1[2] + 1;
  return *(undefined1 *)((int)param_1 + iVar1 + 6);
}



/* 1000:e266  FUN_1000_e266  82 bytes, 2 callers */

int __cdecl16near FUN_1000_e266(int param_1,int param_2,undefined2 param_3)

{
  char cVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  iVar2 = 0;
  do {
    if (param_2 + -1 <= iVar2) {
LAB_1000_e2ab:
      *(undefined1 *)(param_1 + iVar2) = 0;
      return param_1;
    }
    cVar1 = FUN_1000_e228(param_3);
    if (cVar1 == -1) {
      if (iVar2 == 0) {
        return 0;
      }
      goto LAB_1000_e2ab;
    }
    if (cVar1 == '\r') {
      *(undefined1 *)(param_1 + iVar2) = 10;
      iVar2 = iVar2 + 1;
      FUN_1000_e228(param_3);
      goto LAB_1000_e2ab;
    }
    *(char *)(param_1 + iVar2) = cVar1;
    iVar2 = iVar2 + 1;
  } while( true );
}



/* 1000:e2b8  FUN_1000_e2b8  54 bytes, 1 callers */

undefined2 __cdecl16near FUN_1000_e2b8(undefined2 param_1)

{
  char cVar1;
  char cVar2;
  undefined2 local_4;
  
  cVar1 = FUN_1000_e228(param_1);
  if (cVar1 != -1) {
    cVar2 = FUN_1000_e228(param_1);
    local_4 = CONCAT11(cVar2,cVar1);
    if (cVar2 != -1) {
      return local_4;
    }
  }
  return 0xffff;
}



/* 1000:e2ee  FUN_1000_e2ee  64 bytes, 1 callers */

int __cdecl16near FUN_1000_e2ee(char *param_1,undefined2 param_2)

{
  undefined2 in_AX;
  undefined1 extraout_AH;
  undefined1 uVar1;
  undefined2 unaff_DS;
  int local_4;
  
  local_4 = 0;
  while( true ) {
    uVar1 = (undefined1)((uint)in_AX >> 8);
    if (*param_1 == '\0') break;
    if (*param_1 == '\n') {
      FUN_1000_e32e(CONCAT11(uVar1,0xd),param_2);
      uVar1 = extraout_AH;
    }
    in_AX = FUN_1000_e32e(CONCAT11(uVar1,*param_1),param_2);
    local_4 = local_4 + 1;
    param_1 = param_1 + 1;
  }
  return local_4;
}



/* 1000:e32e  FUN_1000_e32e  68 bytes, 1 callers */

undefined2 __cdecl16near FUN_1000_e32e(undefined1 param_1,undefined2 *param_2)

{
  int iVar1;
  undefined2 unaff_DS;
  
  *(undefined1 *)((int)param_2 + param_2[2] + 6) = param_1;
  param_2[2] = param_2[2] + 1;
  if (0x7ff < (int)param_2[2]) {
    iVar1 = FUN_1000_ec12(*param_2,param_2 + 3,0x800);
    if (iVar1 != 0x800) {
      return 0xffff;
    }
    param_2[2] = 0;
  }
  return 1;
}



/* 1000:e374  FUN_1000_e374  83 bytes, 1 callers */

undefined2 __cdecl16near FUN_1000_e374(void)

{
  char cVar1;
  undefined2 unaff_DS;
  
  out(0x188,0);
  out(0x18a,0x7b);
  cVar1 = in(0x18a);
  if (cVar1 == '{') {
    out(0x188,0);
    out(0x18a,0xc);
    cVar1 = in(0x18a);
    if (cVar1 == '\f') {
      FUN_1000_e60c();
      *(undefined1 *)0x11ca = 1;
      return 1;
    }
  }
  return 0;
}



/* 1000:e3c8  FUN_1000_e3c8  368 bytes, 8 callers */

uint __cdecl16near FUN_1000_e3c8(int *param_1)

{
  int *piVar1;
  byte bVar2;
  undefined2 uVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  undefined2 unaff_DS;
  
  piVar8 = param_1;
  for (iVar5 = 0x10; bVar2 = DAT_0000_0533, iVar5 != 0; iVar5 = iVar5 + -1) {
    piVar1 = piVar8;
    piVar8 = piVar8 + 1;
    *piVar1 = 0;
  }
  uVar6 = CONCAT11(DAT_0000_0531,DAT_0000_052e);
  uVar7 = CONCAT11(DAT_0000_0532,DAT_0000_0533);
  *param_1 = *param_1 + (uVar6 & 0x410) + (DAT_0000_0532 & 0x1c) * 0x100;
  param_1[1] = param_1[1] + (uVar6 & 0x2008) + (bVar2 & 0x1c);
  param_1[2] = param_1[2] + (uVar6 & 0x804) + (uVar7 & 0x4404);
  param_1[3] = param_1[3] + (uVar6 & 0x1020) + (uVar7 & 0x1011);
  param_1[4] = param_1[4] + (CONCAT11(DAT_0000_0530,DAT_0000_052f) & 0x1002);
  param_1[5] = param_1[5] + (CONCAT11(DAT_0000_052d,DAT_0000_052f) & 0x1004);
  param_1[6] = param_1[6] + (DAT_0000_0538 & 0xff01);
  param_1[7] = param_1[7] + (DAT_0000_052c & 0xff01);
  if (*(char *)0x11cd != '\0') {
    param_1[8] = param_1[8] + (DAT_0000_052c & 0xff04);
    param_1[9] = param_1[9] + (DAT_0000_052f & 0xff08);
    param_1[10] = param_1[10] + (DAT_0000_052d & 0xff40);
    param_1[0xb] = param_1[0xb] + (DAT_0000_052e & 0xff01);
    param_1[0xc] = param_1[0xc] + (DAT_0000_0538 & 0xff08);
    param_1[0xd] = param_1[0xd] + (DAT_0000_052d & 0xff80);
  }
  uVar4 = 0;
  if (*(char *)0x11ca != '\0') {
    FUN_1000_e60c();
    uVar3 = FUN_1000_e62c();
    uVar4 = (undefined1)((uint)uVar3 >> 8);
    bVar2 = ~(byte)uVar3;
    if (*(char *)0x11cc == '\0') {
      *param_1 = *param_1 + (uint)(bVar2 & 1);
      param_1[1] = param_1[1] + (uint)(bVar2 >> 1 & 1);
      param_1[2] = param_1[2] + (uint)(bVar2 >> 2 & 1);
      param_1[3] = param_1[3] + (uint)(bVar2 >> 3 & 1);
      param_1[4] = param_1[4] + (uint)(bVar2 >> 4 & 1);
      param_1[5] = param_1[5] + (uint)(bVar2 >> 5 & 1);
      FUN_1000_e60c();
      uVar3 = FUN_1000_e62c();
      uVar4 = (undefined1)((uint)uVar3 >> 8);
      bVar2 = ~(byte)uVar3;
    }
    param_1[8] = param_1[8] + (uint)(bVar2 & 1);
    param_1[9] = param_1[9] + (uint)(bVar2 >> 1 & 1);
    param_1[10] = param_1[10] + (uint)(bVar2 >> 2 & 1);
    param_1[0xb] = param_1[0xb] + (uint)(bVar2 >> 3 & 1);
    param_1[0xc] = param_1[0xc] + (uint)(bVar2 >> 4 & 1);
    param_1[0xd] = param_1[0xd] + (uint)(bVar2 >> 5 & 1);
  }
  return CONCAT11(uVar4,DAT_0000_052a) & 0xff01;
}



/* 1000:e538  FUN_1000_e538  212 bytes, 5 callers */

void __cdecl16near FUN_1000_e538(int *param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined2 unaff_DS;
  
  bVar1 = DAT_0000_0533;
  uVar2 = CONCAT11(DAT_0000_0531,DAT_0000_052e);
  uVar3 = CONCAT11(DAT_0000_0532,DAT_0000_0533);
  *param_1 = *param_1 + (uVar2 & 0x410) + (DAT_0000_0532 & 0x1c) * 0x100;
  param_1[1] = param_1[1] + (uVar2 & 0x2008) + (bVar1 & 0x1c);
  param_1[2] = param_1[2] + (uVar2 & 0x804) + (uVar3 & 0x4404);
  param_1[3] = param_1[3] + (uVar2 & 0x1020) + (uVar3 & 0x1011);
  param_1[4] = param_1[4] + (CONCAT11(DAT_0000_0530,DAT_0000_052f) & 0x1002);
  param_1[5] = param_1[5] + (CONCAT11(DAT_0000_052d,DAT_0000_052f) & 0x1004);
  param_1[6] = param_1[6] + (DAT_0000_0538 & 0xff01);
  param_1[7] = param_1[7] + (DAT_0000_052c & 0xff01);
  if (*(char *)0x11cd != '\0') {
    param_1[8] = param_1[8] + (DAT_0000_052c & 0xff04);
    param_1[9] = param_1[9] + (DAT_0000_052f & 0xff08);
    param_1[10] = param_1[10] + (DAT_0000_052d & 0xff40);
    param_1[0xb] = param_1[0xb] + (DAT_0000_052e & 0xff01);
    param_1[0xc] = param_1[0xc] + (DAT_0000_0538 & 0xff08);
    param_1[0xd] = param_1[0xd] + (DAT_0000_052d & 0xff80);
  }
  return;
}



/* 1000:e60c  FUN_1000_e60c  31 bytes, 2 callers */

void __cdecl16near FUN_1000_e60c(void)

{
  byte bVar1;
  undefined1 in_CL;
  undefined1 in_BL;
  
  do {
    bVar1 = in(0x188);
  } while ((bVar1 & 0x80) != 0);
  out(0x188,in_BL);
  do {
    bVar1 = in(0x188);
  } while ((bVar1 & 0x80) != 0);
  out(0x18a,in_CL);
  return;
}



/* 1000:e62c  FUN_1000_e62c  29 bytes, 1 callers */

undefined1 __cdecl16near FUN_1000_e62c(void)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 in_BL;
  
  do {
    bVar1 = in(0x188);
  } while ((bVar1 & 0x80) != 0);
  out(0x188,in_BL);
  do {
    bVar1 = in(0x188);
  } while ((bVar1 & 0x80) != 0);
  uVar2 = in(0x18a);
  return uVar2;
}



/* 1000:e64a  entry  184 bytes, 0 callers */

/* WARNING: Stack frame is not setup normally: Input value of stackpointer is not used */
/* WARNING: This function may have set the stack pointer */

void __cdecl16far entry(void)

{
  undefined1 *puVar1;
  code *pcVar2;
  code *pcVar3;
  byte bVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined2 *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  undefined1 *puVar13;
  undefined2 unaff_ES;
  undefined2 uVar14;
  undefined2 unaff_DS;
  
  puVar6 = (undefined1 *)0x1000;
  pcVar3 = (code *)swi(0x21);
  bVar4 = (*pcVar3)();
  if (bVar4 < 2) {
    *(undefined2 *)(puVar6 + -2) = unaff_ES;
    *(undefined2 *)(puVar6 + -4) = 0;
    return;
  }
  uVar12 = *(int *)0x2 + 0xe02c;
  if (0xfff < uVar12) {
    uVar12 = 0x1000;
  }
  puVar7 = puVar6 + 0x217e;
  puVar13 = puVar6 + 0x217e;
  if ((undefined1 *)0xde81 < puVar6) {
    *(undefined2 *)(puVar6 + 0x217c) = 0x1fd4;
    unaff_DS = *(undefined2 *)(puVar6 + 0x217c);
    *(undefined2 *)(puVar6 + 0x217c) = 59000;
    FUN_1000_f142();
    *(undefined2 *)(puVar6 + 0x217c) = 0;
    *(undefined2 *)(puVar6 + 0x217a) = 0xe67e;
    FUN_1000_f399();
    pcVar3 = (code *)swi(0x21);
    (*pcVar3)();
    puVar13 = puVar7;
  }
  DAT_1fd4_11d2 = uVar12 * 0x10 + -1;
  DAT_1fd4_11d4 = 0x1fd4;
  puVar8 = (undefined1 *)((uint)puVar13 & 0xfffe);
  DAT_1fd4_11de = puVar8 + -2;
  DAT_1fd4_11d8 = puVar8;
  *(undefined2 *)(puVar8 + -2) = 0xfffe;
  puVar9 = puVar8 + -4;
  DAT_1fd4_11da = puVar8 + -4;
  DAT_1fd4_11dc = puVar8 + -4;
  DAT_1fd4_11ce = puVar8 + -4;
  *(undefined2 *)(puVar8 + -4) = 1;
  *(int *)0x2 = uVar12 + 0x1fd4;
  pcVar3 = (code *)swi(0x21);
  (*pcVar3)();
  DAT_1fd4_120e = unaff_DS;
  *(undefined2 *)(puVar9 + -2) = 0x1fd4;
  uVar14 = *(undefined2 *)(puVar9 + -2);
  puVar13 = (undefined1 *)0x150c;
  for (iVar5 = 0xc74; iVar5 != 0; iVar5 = iVar5 + -1) {
    puVar1 = puVar13;
    puVar13 = puVar13 + 1;
    *puVar1 = 0;
  }
  *(undefined2 *)(puVar9 + -2) = 0x1fd4;
  pcVar2 = (code *)*(int *)0x140c;
  if (pcVar2 != (code *)0x0) {
    puVar10 = (undefined2 *)(puVar9 + -2);
    puVar9 = puVar9 + -2;
    *puVar10 = 0xe6e1;
    (*pcVar2)();
  }
  *(undefined2 *)(puVar9 + -2) = 0xe6e4;
  FUN_1000_0010();
  puVar11 = puVar9 + -2;
  *(undefined2 *)(puVar9 + -2) = 0xe6e7;
  FUN_1000_f1a2();
  *(undefined2 *)(puVar11 + -2) = 0xe6ec;
  FUN_1000_e734();
  *(undefined2 *)(puVar11 + -2) = 0x1fd4;
  uVar14 = *(undefined2 *)(puVar11 + -2);
  *(undefined2 *)(puVar11 + -2) = *(undefined2 *)0x122f;
  *(undefined2 *)(puVar11 + -4) = *(undefined2 *)0x122d;
  *(undefined2 *)(puVar11 + -6) = *(undefined2 *)0x122b;
  *(undefined2 *)(puVar11 + -8) = 0xe6fd;
  uVar14 = FUN_1000_0011();
  *(undefined2 *)(puVar11 + -8) = uVar14;
  *(undefined2 *)(puVar11 + -10) = 0xe701;
  FUN_1000_e802();
  return;
}



/* 1000:e712  FUN_1000_e712  33 bytes, 2 callers */

void FUN_1000_e712(void)

{
  char *pcVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  code *pcVar5;
  int iVar6;
  uint extraout_DX;
  int in_BX;
  int iVar7;
  int unaff_SI;
  byte *pbVar8;
  byte *pbVar9;
  undefined2 unaff_ES;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar10;
  
  FUN_1000_f142();
  FUN_1000_f399();
  if (*(int *)0x140e == -0x292a) {
    (*(code *)*(undefined2 *)0x1412)();
  }
  (*(code *)*(undefined2 *)0x11d0)(0xff);
  pcVar1 = (char *)(in_BX + unaff_SI + 0x3500);
  *pcVar1 = *pcVar1 + (char)((uint)in_BX >> 8);
  pcVar5 = (code *)swi(0x21);
  (*pcVar5)();
  *(int *)0x11fa = in_BX;
  *(undefined2 *)0x11fc = unaff_ES;
  pcVar5 = (code *)swi(0x21);
  (*pcVar5)();
  if (*(int *)0x141e != 0) {
    *(undefined2 *)0x1420 = 0x1000;
    *(undefined2 *)0x1428 = 0x1000;
    bVar10 = false;
    (*(code *)*(undefined2 *)0x141e)();
    if (bVar10) {
      FUN_1000_f162();
      return;
    }
    (*(code *)*(undefined2 *)0x141e)();
  }
  iVar7 = *(int *)0x2c;
  if (iVar7 != 0) {
    pbVar9 = (byte *)0x0;
    do {
      if (*pbVar9 == 0) break;
      iVar6 = 0xd;
      pbVar8 = (byte *)0x11ec;
      bVar10 = false;
      do {
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pbVar4 = pbVar9;
        pbVar9 = pbVar9 + 1;
        pbVar2 = pbVar8;
        pbVar8 = pbVar8 + 1;
        bVar10 = *pbVar2 == *pbVar4;
      } while (bVar10);
      if (bVar10) {
        pbVar8 = (byte *)0x1217;
        goto LAB_1000_e7bf;
      }
      iVar6 = 0x7fff;
      bVar10 = true;
      do {
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pbVar2 = pbVar9;
        pbVar9 = pbVar9 + 1;
        bVar10 = *pbVar2 == 0;
      } while (!bVar10);
    } while (bVar10);
  }
LAB_1000_e7d3:
  iVar7 = 4;
  do {
    bVar10 = false;
    *(byte *)(iVar7 + 0x1217) = *(byte *)(iVar7 + 0x1217) & 0xbf;
    pcVar5 = (code *)swi(0x21);
    (*pcVar5)();
    if ((!bVar10) && ((extraout_DX & 0x80) != 0)) {
      *(byte *)(iVar7 + 0x1217) = *(byte *)(iVar7 + 0x1217) | 0x40;
    }
    iVar7 = iVar7 + -1;
  } while (-1 < iVar7);
  FUN_1000_e8bf();
  FUN_1000_e8b0();
  return;
LAB_1000_e7bf:
  pbVar2 = pbVar9;
  pbVar3 = pbVar9 + 1;
  if (*pbVar2 < 0x41) goto LAB_1000_e7d3;
  pbVar9 = pbVar9 + 2;
  if (*pbVar3 < 0x41) goto LAB_1000_e7d3;
  pbVar4 = pbVar8;
  pbVar8 = pbVar8 + 1;
  *pbVar4 = *pbVar3 + 0xbf | (*pbVar2 + 0xbf) * '\x10';
  goto LAB_1000_e7bf;
}



/* 1000:e734  FUN_1000_e734  206 bytes, 1 callers */

void __cdecl16near FUN_1000_e734(void)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  code *pcVar4;
  int iVar5;
  uint extraout_DX;
  undefined2 in_BX;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined2 unaff_ES;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar9;
  
  pcVar4 = (code *)swi(0x21);
  (*pcVar4)();
  *(undefined2 *)0x11fa = in_BX;
  *(undefined2 *)0x11fc = unaff_ES;
  pcVar4 = (code *)swi(0x21);
  (*pcVar4)();
  if (*(int *)0x141e != 0) {
    *(undefined2 *)0x1420 = 0x1000;
    *(undefined2 *)0x1428 = 0x1000;
    bVar9 = false;
    (*(code *)*(undefined2 *)0x141e)();
    if (bVar9) {
      FUN_1000_f162();
      return;
    }
    (*(code *)*(undefined2 *)0x141e)();
  }
  iVar6 = *(int *)0x2c;
  if (iVar6 != 0) {
    pbVar8 = (byte *)0x0;
    do {
      if (*pbVar8 == 0) break;
      iVar5 = 0xd;
      pbVar7 = (byte *)0x11ec;
      bVar9 = false;
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pbVar3 = pbVar8;
        pbVar8 = pbVar8 + 1;
        pbVar1 = pbVar7;
        pbVar7 = pbVar7 + 1;
        bVar9 = *pbVar1 == *pbVar3;
      } while (bVar9);
      if (bVar9) {
        pbVar7 = (byte *)0x1217;
        goto LAB_1000_e7bf;
      }
      iVar5 = 0x7fff;
      bVar9 = true;
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pbVar1 = pbVar8;
        pbVar8 = pbVar8 + 1;
        bVar9 = *pbVar1 == 0;
      } while (!bVar9);
    } while (bVar9);
  }
LAB_1000_e7d3:
  iVar6 = 4;
  do {
    bVar9 = false;
    *(byte *)(iVar6 + 0x1217) = *(byte *)(iVar6 + 0x1217) & 0xbf;
    pcVar4 = (code *)swi(0x21);
    (*pcVar4)();
    if ((!bVar9) && ((extraout_DX & 0x80) != 0)) {
      *(byte *)(iVar6 + 0x1217) = *(byte *)(iVar6 + 0x1217) | 0x40;
    }
    iVar6 = iVar6 + -1;
  } while (-1 < iVar6);
  FUN_1000_e8bf();
  FUN_1000_e8b0();
  return;
LAB_1000_e7bf:
  pbVar1 = pbVar8;
  pbVar2 = pbVar8 + 1;
  if (*pbVar1 < 0x41) goto LAB_1000_e7d3;
  pbVar8 = pbVar8 + 2;
  if (*pbVar2 < 0x41) goto LAB_1000_e7d3;
  pbVar3 = pbVar7;
  pbVar7 = pbVar7 + 1;
  *pbVar3 = *pbVar2 + 0xbf | (*pbVar1 + 0xbf) * '\x10';
  goto LAB_1000_e7bf;
}



/* 1000:e802  FUN_1000_e802  103 bytes, 3 callers */

void __cdecl16near FUN_1000_e802(void)

{
  code *pcVar1;
  undefined2 unaff_DS;
  
  FUN_1000_e8b0();
  FUN_1000_e8b0();
  if (*(int *)0x140e == -0x292a) {
    (*(code *)*(undefined2 *)0x1414)();
  }
  FUN_1000_e8b0();
  FUN_1000_e8bf();
  FUN_1000_f180();
  FUN_1000_e883();
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return;
}



/* 1000:e883  FUN_1000_e883  45 bytes, 1 callers */

void __cdecl16near FUN_1000_e883(undefined2 param_1)

{
  code *pcVar1;
  undefined2 unaff_DS;
  
  if (*(int *)0x1420 != 0) {
    (*(code *)*(undefined2 *)0x141e)(0x1000);
  }
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  if (*(char *)0x1238 != '\0') {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
  }
  return;
}



/* 1000:e8b0  FUN_1000_e8b0  15 bytes, 2 callers */

void __cdecl16near FUN_1000_e8b0(void)

{
  int *unaff_SI;
  int *unaff_DI;
  undefined2 unaff_DS;
  
  while (unaff_SI < unaff_DI) {
    unaff_DI = unaff_DI + -1;
    if ((code *)*unaff_DI != (code *)0x0) {
      (*(code *)*unaff_DI)();
    }
  }
  return;
}



/* 1000:e8bf  FUN_1000_e8bf  19 bytes, 2 callers */

void __cdecl16near FUN_1000_e8bf(void)

{
  int *piVar1;
  int *unaff_SI;
  int *unaff_DI;
  int *piVar2;
  undefined2 unaff_DS;
  
  while (unaff_SI < unaff_DI) {
    piVar2 = unaff_DI + -2;
    piVar1 = unaff_DI + -1;
    unaff_DI = piVar2;
    if (*piVar2 != 0 || *piVar1 != 0) {
      (*(code *)*piVar2)(0x1000);
    }
  }
  return;
}



/* 1000:e8d2  FUN_1000_e8d2  32 bytes, 5 callers */

void FUN_1000_e8d2(uint param_1)

{
  code *pcVar1;
  undefined2 unaff_DS;
  bool bVar2;
  
  bVar2 = param_1 < *(uint *)0x1215;
  if (bVar2) {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    if (!bVar2) {
      *(undefined1 *)(param_1 + 0x1217) = 0;
    }
  }
  FUN_1000_f3ce();
  return;
}



/* 1000:e8f2  FUN_1000_e8f2  122 bytes, 1 callers */

void FUN_1000_e8f2(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  undefined2 unaff_DS;
  bool bVar5;
  undefined4 uVar6;
  
  if (*(uint *)0x1215 <= param_1) goto LAB_1000_e969;
  bVar5 = false;
  if ((param_3 & 0x8000) != 0) {
    if (param_4 == 0) goto LAB_1000_e969;
    bVar5 = false;
    pcVar2 = (code *)swi(0x21);
    uVar6 = (*pcVar2)();
    uVar3 = (uint)((ulong)uVar6 >> 0x10);
    if (bVar5) goto LAB_1000_e969;
    if ((param_4 & 2) == 0) {
      uVar1 = (uint)CARRY2((uint)uVar6,param_2);
      bVar5 = CARRY2(uVar3,param_3) || CARRY2(uVar3 + param_3,uVar1);
      if ((int)(uVar3 + param_3 + uVar1) < 0) goto LAB_1000_e969;
    }
    else {
      pcVar2 = (code *)swi(0x21);
      uVar6 = (*pcVar2)(uVar3);
      uVar4 = (uint)((ulong)uVar6 >> 0x10);
      uVar3 = (uint)CARRY2((uint)uVar6,param_2);
      uVar1 = uVar4 + param_3;
      bVar5 = CARRY2(uVar4,param_3) || CARRY2(uVar1,uVar3);
      if ((int)(uVar1 + uVar3) < 0) {
        pcVar2 = (code *)swi(0x21);
        (*pcVar2)();
        goto LAB_1000_e969;
      }
    }
  }
  pcVar2 = (code *)swi(0x21);
  (*pcVar2)();
  if (!bVar5) {
    *(byte *)(param_1 + 0x1217) = *(byte *)(param_1 + 0x1217) & 0xfd;
  }
LAB_1000_e969:
  FUN_1000_f3e3();
  return;
}



/* 1000:e986  FUN_1000_e986  401 bytes, 2 callers */

/* WARNING: Removing unreachable block (ram,0x0001ea7c) */

uint __cdecl16near FUN_1000_e986(undefined2 param_1,uint param_2,uint param_3)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  uint extraout_DX;
  undefined2 unaff_DS;
  bool bVar7;
  undefined1 uVar8;
  bool bVar9;
  byte local_6;
  char local_4;
  
  uVar4 = (uint)_local_4 >> 8;
  local_4 = '\0';
  local_6 = 0;
  if (((param_2 & 0x8000) == 0) && (((param_2 & 0x4000) != 0 || ((*(byte *)0x1261 & 0x80) == 0)))) {
    local_6 = 0x80;
  }
  bVar7 = false;
  pcVar1 = (code *)swi(0x21);
  uVar6 = param_2;
  uVar2 = (*pcVar1)();
  if (bVar7) {
    if ((uVar2 != 2) || ((uVar6 & 0x100) == 0)) goto LAB_1000_e9ca;
    bVar7 = false;
    local_4 = 's';
    FUN_1000_eb17();
    uVar8 = 0;
    uVar6 = 0;
LAB_1000_ea86:
    pcVar1 = (code *)swi(0x21);
    uVar2 = (*pcVar1)();
    if ((bool)uVar8) {
LAB_1000_ea8f:
      uVar4 = FUN_1000_f3e3();
      return uVar4;
    }
    if ((local_4 != '\0') || ((param_2 & 2) == 0)) {
      pcVar1 = (code *)swi(0x21);
      (*pcVar1)();
      bVar9 = false;
      pcVar1 = (code *)swi(0x21);
      uVar2 = (*pcVar1)();
      if (bVar9) goto LAB_1000_ea8f;
      if ((!bVar7) && ((param_3 & 1) != 0)) {
        bVar7 = false;
        uVar6 = (uint)(byte)((byte)uVar6 | 1);
        pcVar1 = (code *)swi(0x21);
        (*pcVar1)();
        if (bVar7) goto LAB_1000_ea8f;
      }
    }
  }
  else {
    if ((uVar6 & 0x500) == 0x500) {
      pcVar1 = (code *)swi(0x21);
      (*pcVar1)();
      goto LAB_1000_e9ca;
    }
    bVar7 = true;
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    if ((extraout_DX & 0x80) != 0) {
      local_6 = local_6 | 0x40;
    }
    if ((local_6 & 0x40) == 0) {
      if ((param_2 & 0x200) == 0) {
        if (((local_6 & 0x80) != 0) && ((param_2 & 2) != 0)) {
          pcVar1 = (code *)swi(0x21);
          (*pcVar1)();
          pcVar1 = (code *)swi(0x21);
          iVar3 = (*pcVar1)();
          if ((iVar3 != 0) && ((char)uVar4 == '\x1a')) {
            pcVar1 = (code *)swi(0x21);
            (*pcVar1)();
            pcVar1 = (code *)swi(0x21);
            (*pcVar1)();
          }
          uVar6 = 0;
          pcVar1 = (code *)swi(0x21);
          (*pcVar1)();
        }
      }
      else {
        uVar8 = 0;
        if ((param_2 & 3) == 0) {
          pcVar1 = (code *)swi(0x21);
          (*pcVar1)();
          pcVar1 = (code *)swi(0x21);
          (*pcVar1)();
          goto LAB_1000_ea86;
        }
        uVar6 = 0;
        pcVar1 = (code *)swi(0x21);
        (*pcVar1)();
      }
    }
  }
  if ((local_6 & 0x40) == 0) {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    bVar5 = 0;
    if ((uVar6 & 1) != 0) {
      bVar5 = 0x10;
    }
    if ((param_2 & 8) != 0) {
      bVar5 = bVar5 | 0x20;
    }
  }
  else {
    bVar5 = 0;
  }
  if (uVar2 < *(uint *)0x1215) {
    *(byte *)(uVar2 + 0x1217) = bVar5 | local_6 | 1;
    return uVar2;
  }
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
LAB_1000_e9ca:
  uVar4 = FUN_1000_f3e3();
  return uVar4;
}



/* 1000:eb17  FUN_1000_eb17  17 bytes, 1 callers */

void __cdecl16near FUN_1000_eb17(void)

{
  return;
}



/* 1000:eb28  FUN_1000_eb28  233 bytes, 2 callers */

/* WARNING: Removing unreachable block (ram,0x0001ec0f) */
/* WARNING: Removing unreachable block (ram,0x0001ec04) */

void FUN_1000_eb28(uint param_1,undefined2 param_2,int param_3)

{
  char *pcVar1;
  char cVar2;
  code *pcVar3;
  undefined2 uVar4;
  undefined1 extraout_AH;
  undefined1 extraout_AH_00;
  int iVar5;
  undefined1 extraout_AH_01;
  int iVar7;
  uint extraout_DX;
  char *pcVar8;
  char *pcVar9;
  undefined2 unaff_DS;
  undefined1 uVar10;
  bool bVar11;
  undefined4 uVar12;
  char cVar6;
  
  if (((*(uint *)0x1215 <= param_1) || (param_3 == 0)) || ((*(byte *)(param_1 + 0x1217) & 2) != 0))
  {
LAB_1000_eba5:
    FUN_1000_f3e3();
    return;
  }
  uVar10 = *(uint *)0x140e < 0xd6d6;
  if (*(uint *)0x140e == 0xd6d6) {
    (*(code *)*(undefined2 *)0x1410)();
  }
  pcVar3 = (code *)swi(0x21);
  uVar12 = (*pcVar3)();
  pcVar9 = (char *)((ulong)uVar12 >> 0x10);
  if ((((bool)uVar10) || ((*(byte *)(param_1 + 0x1217) & 0x80) == 0)) ||
     (*(byte *)(param_1 + 0x1217) = *(byte *)(param_1 + 0x1217) & 0xfb, (int)uVar12 == 0))
  goto LAB_1000_eba5;
  uVar4 = 0xd00;
  if (*pcVar9 == '\n') {
    *(byte *)(param_1 + 0x1217) = *(byte *)(param_1 + 0x1217) | 4;
  }
LAB_1000_eb8a:
  pcVar8 = (char *)((ulong)uVar12 >> 0x10);
  iVar7 = (int)uVar12;
  pcVar1 = pcVar8 + 1;
  cVar2 = *pcVar8;
  cVar6 = (char)((uint)uVar4 >> 8);
  uVar4 = CONCAT11(cVar6,cVar2);
  if (cVar2 == cVar6) {
    if (iVar7 != 1) {
      if (*pcVar1 != '\n') goto LAB_1000_eb9a;
      goto LAB_1000_eb9d;
    }
    bVar11 = false;
    if ((*(byte *)(param_1 + 0x1217) & 0x40) == 0) {
      pcVar3 = (code *)swi(0x21);
      iVar5 = (*pcVar3)();
      if (!bVar11) {
        uVar10 = 0;
        if (iVar5 != 0) {
          pcVar3 = (code *)swi(0x21);
          (*pcVar3)();
          iVar7 = 1;
          uVar10 = extraout_AH_01;
        }
        uVar4 = CONCAT11(uVar10,0xd);
        goto LAB_1000_eb9a;
      }
      goto LAB_1000_eba5;
    }
    pcVar3 = (code *)swi(0x21);
    (*pcVar3)();
    bVar11 = false;
    uVar10 = extraout_AH;
    if ((extraout_DX & 0x20) == 0) {
      pcVar3 = (code *)swi(0x21);
      (*pcVar3)();
      uVar10 = extraout_AH_00;
      if (bVar11) goto LAB_1000_eba5;
    }
    uVar4 = CONCAT11(uVar10,10);
  }
  else if (cVar2 == '\x1a') {
    *(byte *)(param_1 + 0x1217) = *(byte *)(param_1 + 0x1217) | 2;
    goto LAB_1000_eba5;
  }
LAB_1000_eb9a:
  *pcVar9 = (char)uVar4;
  pcVar9 = pcVar9 + 1;
LAB_1000_eb9d:
  uVar12 = CONCAT22(pcVar1,iVar7 + -1);
  if (iVar7 + -1 == 0) goto LAB_1000_eba5;
  goto LAB_1000_eb8a;
}



/* 1000:ec12  FUN_1000_ec12  177 bytes, 2 callers */

/* WARNING: Unable to track spacebase fully for stack */

undefined2 FUN_1000_ec12(uint param_1,char *param_2,int param_3)

{
  char *pcVar1;
  code *pcVar2;
  char cVar3;
  undefined2 uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar9;
  undefined4 uVar10;
  
  if (*(uint *)0x1215 <= param_1) {
LAB_1000_ec25:
    uVar4 = FUN_1000_f3e3();
    return uVar4;
  }
  if (*(int *)0x140e == -0x292a) {
    (*(code *)*(undefined2 *)0x1410)();
  }
  if ((*(byte *)(param_1 + 0x1217) & 0x20) != 0) {
    bVar9 = false;
    pcVar2 = (code *)swi(0x21);
    (*pcVar2)();
    if (bVar9) goto LAB_1000_ec25;
  }
  if ((*(byte *)(param_1 + 0x1217) & 0x80) != 0) {
    bVar9 = true;
    iVar6 = param_3;
    pcVar8 = param_2;
    if (param_3 != 0) {
      do {
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar1 = pcVar8;
        pcVar8 = pcVar8 + 1;
        bVar9 = *pcVar1 == '\n';
      } while (!bVar9);
      if (!bVar9) goto LAB_1000_ecbb;
      uVar5 = FUN_1000_f424();
      if (uVar5 < 0xa9) {
        uVar10 = FUN_1000_f168();
        pcVar7 = (char *)((ulong)uVar10 >> 0x10);
        bVar9 = pcVar8 < pcVar7;
        if (pcVar8 != pcVar7) {
          pcVar2 = (code *)swi(0x21);
          uVar5 = (*pcVar2)(iVar6);
          if ((bVar9) || (uVar5 < (uint)((int)pcVar8 - (int)pcVar7))) {
            uVar4 = FUN_1000_f3e3();
            return uVar4;
          }
        }
        return (int)uVar10;
      }
      pcVar7 = &stack0xfff2;
      pcVar8 = &stack0xfff2;
      do {
        pcVar1 = param_2;
        param_2 = param_2 + 1;
        cVar3 = *pcVar1;
        if (cVar3 == '\n') {
          cVar3 = '\r';
          if (pcVar8 == pcVar7) {
            cVar3 = FUN_1000_ecc3();
          }
          pcVar1 = pcVar8;
          pcVar8 = pcVar8 + 1;
          *pcVar1 = cVar3;
          cVar3 = '\n';
        }
        if (pcVar8 == pcVar7) {
          cVar3 = FUN_1000_ecc3();
        }
        pcVar1 = pcVar8;
        pcVar8 = pcVar8 + 1;
        *pcVar1 = cVar3;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
      FUN_1000_ecc3();
    }
    uVar4 = FUN_1000_ed0d();
    return uVar4;
  }
LAB_1000_ecbb:
  uVar4 = FUN_1000_ed1b();
  return uVar4;
}



/* 1000:ecc3  FUN_1000_ecc3  74 bytes, 1 callers */

/* WARNING: Unable to track spacebase fully for stack */

undefined2 __cdecl16near FUN_1000_ecc3(void)

{
  code *pcVar1;
  undefined2 in_AX;
  uint uVar2;
  undefined2 uVar3;
  uint in_DX;
  int unaff_BP;
  uint unaff_DI;
  undefined2 unaff_SS;
  bool bVar4;
  
  bVar4 = unaff_DI < in_DX;
  if (unaff_DI != in_DX) {
    pcVar1 = (code *)swi(0x21);
    uVar2 = (*pcVar1)();
    if ((bVar4) ||
       (*(int *)(unaff_BP + -2) = *(int *)(unaff_BP + -2) + uVar2, uVar2 < unaff_DI - in_DX)) {
      uVar3 = FUN_1000_f3e3();
      return uVar3;
    }
  }
  return in_AX;
}



/* 1000:ed0d  FUN_1000_ed0d  14 bytes, 1 callers */

/* WARNING: Stack frame is not setup normally: Input value of stackpointer is not used */

void FUN_1000_ed0d(void)

{
  FUN_1000_f3e3();
  return;
}



/* 1000:ed1b  FUN_1000_ed1b  52 bytes, 1 callers */

void FUN_1000_ed1b(void)

{
  code *pcVar1;
  int unaff_BP;
  undefined2 unaff_SS;
  
  if (*(int *)(unaff_BP + 8) != 0) {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    FUN_1000_f3e3();
    return;
  }
  FUN_1000_f3e3();
  return;
}



/* 1000:ed50  thunk_FUN_1000_f457  3 bytes, 1 callers */

void __cdecl16near thunk_FUN_1000_f457(uint param_1)

{
  bool bVar1;
  
  bVar1 = param_1 < 0xffe8;
  if (((param_1 < 0xffe9) && (FUN_1000_f480(), bVar1)) && (FUN_1000_f4fc(), !bVar1)) {
    FUN_1000_f480();
  }
  return;
}



/* 1000:ed54  thunk_FUN_1000_f436  3 bytes, 1 callers */

void __cdecl16near thunk_FUN_1000_f436(uint param_1)

{
  byte *pbVar1;
  undefined2 unaff_DS;
  
  if (*(uint *)0x11da < param_1) {
    pbVar1 = (byte *)(param_1 - 2);
    *pbVar1 = *pbVar1 | 1;
    if (pbVar1 < (byte *)*(undefined2 *)0x11dc) {
      *(undefined2 *)0x11dc = pbVar1;
    }
  }
  return;
}



/* 1000:ed58  FUN_1000_ed58  19 bytes, 1 callers */

void __cdecl16near FUN_1000_ed58(undefined4 param_1)

{
  byte *pbVar1;
  int iVar2;
  
  iVar2 = (int)((ulong)param_1 >> 0x10);
  if (iVar2 != 0) {
    pbVar1 = (byte *)((int)param_1 + -2);
    *pbVar1 = *pbVar1 | 1;
  }
  return;
}



/* 1000:ed6b  FUN_1000_ed6b  125 bytes, 2 callers */

void __cdecl16near FUN_1000_ed6b(uint param_1)

{
  undefined4 *puVar1;
  undefined2 extraout_DX;
  undefined2 extraout_DX_00;
  undefined2 uVar2;
  int in_BX;
  uint uVar3;
  code *pcVar4;
  undefined2 unaff_DS;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  
  if (param_1 < 0xffe9) {
    bVar7 = false;
    if (*(int *)0x1264 != 0) {
      pcVar4 = (code *)0xf480;
      while( true ) {
        uVar3 = *(uint *)0x126c;
        uVar5 = (uint)((ulong)*(undefined4 *)0x1266 >> 0x10);
        in_BX = (int)*(undefined4 *)0x1266;
        uVar6 = uVar5;
        do {
          do {
            (*pcVar4)();
            if (!bVar7) {
              uVar2 = extraout_DX;
              if (pcVar4 != (code *)0xf480) goto LAB_1000_edd2;
              goto LAB_1000_edd5;
            }
            puVar1 = (undefined4 *)(in_BX + 0xc);
            in_BX = (int)*puVar1;
            bVar7 = uVar5 < uVar3;
            bVar8 = uVar5 != uVar3;
            uVar5 = (uint)((ulong)*puVar1 >> 0x10);
          } while (bVar8);
          uVar3 = *(uint *)((int)*(undefined4 *)0x1266 + 0x12);
          uVar5 = (uint)((ulong)*(undefined4 *)0x1262 >> 0x10);
          in_BX = (int)*(undefined4 *)0x1262;
          bVar7 = uVar5 < uVar6;
          bVar8 = uVar5 != uVar6;
          uVar6 = uVar5;
        } while (bVar8);
        bVar7 = pcVar4 < (code *)0xf4fc;
        if (pcVar4 == (code *)0xf4fc) break;
        pcVar4 = (code *)0xf4fc;
      }
    }
    FUN_1000_f5fa();
    if (!bVar7) {
LAB_1000_edd2:
      FUN_1000_f480();
      uVar2 = extraout_DX_00;
LAB_1000_edd5:
      *(undefined2 *)0x1268 = uVar2;
      *(int *)0x1266 = in_BX;
    }
  }
  return;
}



/* 1000:ede8  FUN_1000_ede8  58 bytes, 2 callers */

uint __cdecl16near FUN_1000_ede8(char *param_1,char *param_2,int param_3)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  undefined2 unaff_DS;
  
  uVar4 = 0;
  iVar3 = param_3;
  pcVar5 = param_1;
  if (param_3 != 0) {
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar1 = pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (*pcVar1 != '\0');
    param_3 = param_3 - iVar3;
    do {
      if (param_3 == 0) break;
      param_3 = param_3 + -1;
      pcVar2 = param_1;
      param_1 = param_1 + 1;
      pcVar1 = param_2;
      param_2 = param_2 + 1;
    } while (*pcVar1 == *pcVar2);
    uVar4 = 0;
    if ((byte)param_2[-1] <= (byte)param_1[-1]) {
      if (param_2[-1] == param_1[-1]) {
        return 0;
      }
      uVar4 = 0xfffe;
    }
    uVar4 = ~uVar4;
  }
  return uVar4;
}



/* 1000:ee22  thunk_FUN_1000_f63e  3 bytes, 2 callers */

undefined4 __cdecl16near thunk_FUN_1000_f63e(byte *param_1)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined2 unaff_DS;
  bool bVar10;
  
  iVar5 = 0;
  iVar7 = 0;
  do {
    do {
      pbVar1 = param_1;
      param_1 = param_1 + 1;
      bVar2 = *pbVar1;
    } while (bVar2 == 0x20);
  } while (bVar2 == 9);
  if ((bVar2 != 0x2d) && (bVar4 = bVar2, bVar2 != 0x2b)) goto LAB_1000_f65e;
  while( true ) {
    pbVar1 = param_1;
    param_1 = param_1 + 1;
    bVar4 = *pbVar1;
LAB_1000_f65e:
    if ((0x39 < bVar4) || (bVar4 < 0x30)) break;
    uVar8 = iVar7 * 2;
    uVar6 = iVar5 << 1 | (uint)(iVar7 < 0);
    iVar5 = iVar7 << 2;
    uVar9 = iVar7 * 8;
    uVar3 = iVar7 * 10;
    iVar7 = uVar3 + (byte)(bVar4 - 0x30);
    iVar5 = ((uVar6 << 1 | (uint)((int)uVar8 < 0)) << 1 | (uint)(iVar5 < 0)) + uVar6 +
            (uint)CARRY2(uVar9,uVar8) + (uint)CARRY2(uVar3,(uint)(byte)(bVar4 - 0x30));
  }
  if (bVar2 == 0x2d) {
    bVar10 = iVar7 != 0;
    iVar7 = -iVar7;
    iVar5 = -(iVar5 + (uint)bVar10);
  }
  return CONCAT22(iVar5,iVar7);
}



/* 1000:ee26  thunk_FUN_1000_f63e  3 bytes, 2 callers */

undefined4 __cdecl16near thunk_FUN_1000_f63e(byte *param_1)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined2 unaff_DS;
  bool bVar10;
  
  iVar5 = 0;
  iVar7 = 0;
  do {
    do {
      pbVar1 = param_1;
      param_1 = param_1 + 1;
      bVar2 = *pbVar1;
    } while (bVar2 == 0x20);
  } while (bVar2 == 9);
  if ((bVar2 != 0x2d) && (bVar4 = bVar2, bVar2 != 0x2b)) goto LAB_1000_f65e;
  while( true ) {
    pbVar1 = param_1;
    param_1 = param_1 + 1;
    bVar4 = *pbVar1;
LAB_1000_f65e:
    if ((0x39 < bVar4) || (bVar4 < 0x30)) break;
    uVar8 = iVar7 * 2;
    uVar6 = iVar5 << 1 | (uint)(iVar7 < 0);
    iVar5 = iVar7 << 2;
    uVar9 = iVar7 * 8;
    uVar3 = iVar7 * 10;
    iVar7 = uVar3 + (byte)(bVar4 - 0x30);
    iVar5 = ((uVar6 << 1 | (uint)((int)uVar8 < 0)) << 1 | (uint)(iVar5 < 0)) + uVar6 +
            (uint)CARRY2(uVar9,uVar8) + (uint)CARRY2(uVar3,(uint)(byte)(bVar4 - 0x30));
  }
  if (bVar2 == 0x2d) {
    bVar10 = iVar7 != 0;
    iVar7 = -iVar7;
    iVar5 = -(iVar5 + (uint)bVar10);
  }
  return CONCAT22(iVar5,iVar7);
}



/* 1000:ee2a  FUN_1000_ee2a  27 bytes, 4 callers */

void FUN_1000_ee2a(void)

{
  FUN_1000_faa2();
  return;
}



/* 1000:ee72  FUN_1000_ee72  34 bytes, 5 callers */

undefined2 __cdecl16near FUN_1000_ee72(char *param_1)

{
  char *pcVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  do {
    pcVar1 = param_1;
    param_1 = param_1 + 1;
    if (*pcVar1 == '\0') {
      return 0;
    }
    iVar2 = FUN_1000_ee94(*pcVar1);
  } while (iVar2 != -1);
  return 0xffff;
}



/* 1000:ee94  FUN_1000_ee94  30 bytes, 2 callers */

ulong __cdecl16near FUN_1000_ee94(void)

{
  code *pcVar1;
  ulong uVar2;
  undefined2 unaff_DS;
  
  if (*(int *)0x140e == -0x292a) {
    (*(code *)*(undefined2 *)0x1410)();
  }
  pcVar1 = (code *)swi(0x21);
  uVar2 = (*pcVar1)();
  return uVar2 & 0xffff00ff;
}



/* 1000:eeb2  FUN_1000_eeb2  103 bytes, 1 callers */

int __cdecl16near FUN_1000_eeb2(uint *param_1)

{
  int iVar1;
  int iVar2;
  undefined2 unaff_DS;
  bool bVar3;
  uint local_6;
  int local_4;
  
  FUN_1000_f82a();
  local_6 = *param_1 - *(uint *)0x1290;
  local_4 = (param_1[1] - *(int *)0x1292) - (uint)(*param_1 < *(uint *)0x1290);
  iVar1 = FUN_1000_f692(&local_6);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else if ((*(int *)0x1294 != 0) && (iVar2 = FUN_1000_f8d6(iVar1), iVar2 != 0)) {
    bVar3 = 0xf1ef < local_6;
    local_6 = local_6 + 0xe10;
    local_4 = local_4 + (uint)bVar3;
    iVar1 = FUN_1000_f692(&local_6);
    *(undefined2 *)(iVar1 + 0x10) = 1;
  }
  return iVar1;
}



/* 1000:ef1a  FUN_1000_ef1a  81 bytes, 2 callers */

void __cdecl16near FUN_1000_ef1a(void)

{
  code *pcVar1;
  undefined2 *puVar2;
  uint in_CX;
  uint uVar3;
  uint uVar4;
  uint extraout_DX;
  byte extraout_DH;
  uint extraout_DX_00;
  uint uVar5;
  uint uVar6;
  undefined2 unaff_DS;
  undefined4 uVar7;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  uVar3 = in_CX;
  uVar6 = extraout_DX;
  (*pcVar1)();
  puVar2 = (undefined2 *)(uint)extraout_DH;
  pcVar1 = (code *)swi(0x21);
  uVar4 = uVar3;
  (*pcVar1)(uVar3 >> 8);
  uVar5 = extraout_DX_00;
  if ((uVar6 != extraout_DX_00) && (uVar5 = extraout_DX_00, (char)uVar3 == '\x17')) {
    uVar4 = in_CX;
    uVar5 = uVar6;
  }
  uVar7 = FUN_1000_f9a0(uVar4 - 0x7bc,uVar5 >> 8);
  if (puVar2 != (undefined2 *)0x0) {
    puVar2[1] = (int)((ulong)uVar7 >> 0x10);
    *puVar2 = (int)uVar7;
  }
  return;
}



/* 1000:ef6c  FUN_1000_ef6c  43 bytes, 1 callers */

char * __cdecl16near FUN_1000_ef6c(char *param_1,char param_2)

{
  char *pcVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  iVar2 = -1;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar1 = param_1;
    param_1 = param_1 + 1;
  } while (*pcVar1 != '\0');
  iVar2 = -(iVar2 + 1);
  param_1 = param_1 + -1;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar1 = param_1;
    param_1 = param_1 + -1;
  } while (param_2 != *pcVar1);
  param_1 = param_1 + 1;
  if (*param_1 != param_2) {
    param_1 = (char *)0x0;
  }
  return param_1;
}



/* 1000:ef98  FUN_1000_ef98  30 bytes, 1 callers */

char * __cdecl16near FUN_1000_ef98(char *param_1)

{
  char cVar1;
  int in_AX;
  byte bVar2;
  char *pcVar3;
  undefined2 unaff_DS;
  
  pcVar3 = param_1;
  while( true ) {
    cVar1 = *pcVar3;
    bVar2 = (byte)((uint)in_AX >> 8);
    if (cVar1 == '\0') break;
    if ((byte)(cVar1 + 0x9fU) < 0x1a) {
      *pcVar3 = cVar1 + -0x20;
    }
    in_AX = (uint)bVar2 << 8;
    pcVar3 = pcVar3 + 1;
  }
  return (char *)CONCAT22(CONCAT11(bVar2,cVar1),param_1);
}



/* 1000:efb6  FUN_1000_efb6  17 bytes, 1 callers */

void __cdecl16near FUN_1000_efb6(undefined2 param_1)

{
  undefined2 unaff_DS;
  
  *(undefined2 *)0x1240 = param_1;
  *(undefined2 *)0x1242 = 0;
  return;
}



/* 1000:efc8  FUN_1000_efc8  38 bytes, 9 callers */

uint __cdecl16near FUN_1000_efc8(void)

{
  uint uVar1;
  undefined2 unaff_DS;
  long lVar2;
  
  lVar2 = FUN_1000_f0b0(*(undefined2 *)0x1240,*(undefined2 *)0x1242,0x43fd,3);
  uVar1 = (uint)((ulong)(lVar2 + 0x269ec3) >> 0x10);
  *(undefined2 *)0x1240 = (int)(lVar2 + 0x269ec3);
  *(uint *)0x1242 = uVar1;
  return uVar1 & 0x7fff;
}



/* 1000:efee  FUN_1000_efee  18 bytes, 1 callers */

undefined2 __cdecl16near FUN_1000_efee(void)

{
  code *pcVar1;
  undefined2 in_BX;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return in_BX;
}



/* 1000:f000  FUN_1000_f000  21 bytes, 2 callers */

undefined2 __cdecl16near FUN_1000_f000(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return 0;
}



/* 1000:f016  FUN_1000_f016  154 bytes, 2 callers */

undefined4 FUN_1000_f016(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar10;
  char cVar11;
  uint uVar9;
  
  cVar11 = (int)param_2 < 0;
  if ((bool)cVar11) {
    bVar10 = param_1 != 0;
    param_1 = -param_1;
    param_2 = -(uint)bVar10 - param_2;
  }
  if ((int)param_4 < 0) {
    cVar11 = cVar11 + '\x01';
    bVar10 = param_3 != 0;
    param_3 = -param_3;
    param_4 = -(uint)bVar10 - param_4;
  }
  uVar7 = param_1;
  uVar3 = param_3;
  uVar5 = param_2;
  uVar9 = param_4;
  if (param_4 == 0) {
    uVar3 = param_2 / param_3;
    iVar4 = (int)(((ulong)param_2 % (ulong)param_3 << 0x10 | (ulong)param_1) / (ulong)param_3);
  }
  else {
    do {
      uVar8 = uVar9 >> 1;
      uVar3 = (uint)(CONCAT12((uVar9 & 1) != 0,uVar3) >> 1);
      uVar6 = uVar5 >> 1;
      uVar7 = (uint)(CONCAT12((uVar5 & 1) != 0,uVar7) >> 1);
      uVar5 = uVar6;
      uVar9 = uVar8;
    } while (uVar8 != 0);
    uVar1 = CONCAT22(uVar6,uVar7) / (ulong)uVar3;
    iVar4 = (int)uVar1;
    lVar2 = (ulong)param_3 * (uVar1 & 0xffff);
    uVar3 = (uint)((ulong)lVar2 >> 0x10);
    uVar7 = uVar3 + iVar4 * param_4;
    if (((CARRY2(uVar3,iVar4 * param_4)) || (param_2 < uVar7)) ||
       ((param_2 <= uVar7 && (param_1 < (uint)lVar2)))) {
      iVar4 = iVar4 + -1;
    }
    uVar3 = 0;
  }
  if (cVar11 == '\x01') {
    bVar10 = iVar4 != 0;
    iVar4 = -iVar4;
    uVar3 = -(uint)bVar10 - uVar3;
  }
  return CONCAT22(uVar3,iVar4);
}



/* 1000:f0b0  FUN_1000_f0b0  50 bytes, 5 callers */

long FUN_1000_f0b0(uint param_1,int param_2,uint param_3,int param_4)

{
  if (param_4 == 0 && param_2 == 0) {
    return (ulong)param_1 * (ulong)param_3;
  }
  return CONCAT22((int)((ulong)param_1 * (ulong)param_3 >> 0x10) +
                  param_2 * param_3 + param_1 * param_4,(int)((ulong)param_1 * (ulong)param_3));
}



/* 1000:f0e2  FUN_1000_f0e2  95 bytes, 2 callers */

undefined4 FUN_1000_f0e2(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar6;
  
  uVar9 = param_1;
  uVar6 = param_4;
  uVar7 = param_2;
  uVar3 = param_3;
  if (param_4 == 0) {
    uVar3 = param_2 / param_3;
    iVar4 = (int)(((ulong)param_2 % (ulong)param_3 << 0x10 | (ulong)param_1) / (ulong)param_3);
  }
  else {
    do {
      uVar5 = uVar6 >> 1;
      uVar3 = (uint)(CONCAT12((uVar6 & 1) != 0,uVar3) >> 1);
      uVar8 = uVar7 >> 1;
      uVar9 = (uint)(CONCAT12((uVar7 & 1) != 0,uVar9) >> 1);
      uVar6 = uVar5;
      uVar7 = uVar8;
    } while (uVar5 != 0);
    uVar1 = CONCAT22(uVar8,uVar9) / (ulong)uVar3;
    iVar4 = (int)uVar1;
    lVar2 = (ulong)param_3 * (uVar1 & 0xffff);
    uVar3 = (uint)((ulong)lVar2 >> 0x10);
    uVar9 = uVar3 + iVar4 * param_4;
    if (((CARRY2(uVar3,iVar4 * param_4)) || (param_2 < uVar9)) ||
       ((param_2 <= uVar9 && (param_1 < (uint)lVar2)))) {
      iVar4 = iVar4 + -1;
    }
    uVar3 = 0;
  }
  return CONCAT22(uVar3,iVar4);
}



/* 1000:f142  FUN_1000_f142  32 bytes, 3 callers */

void __cdecl16near FUN_1000_f142(void)

{
  undefined2 unaff_DS;
  
  FUN_1000_f399(0xfc);
  if (*(int *)0x1244 != 0) {
    (*(code *)*(undefined2 *)0x1244)();
  }
  FUN_1000_f399(0xff);
  return;
}



/* 1000:f162  FUN_1000_f162  6 bytes, 1 callers */

void FUN_1000_f162(void)

{
  FUN_1000_e712();
  return;
}



/* 1000:f168  FUN_1000_f168  23 bytes, 1 callers */

void FUN_1000_f168(void)

{
  undefined1 *in_AX;
  undefined2 unaff_DS;
  code *in_stack_00000000;
  
  if ((in_AX <= &stack0x0002) && ((undefined1 *)*(uint *)0x1248 <= &stack0x0002 + -(int)in_AX)) {
                    /* WARNING: Could not recover jumptable at 0x0001f177. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*in_stack_00000000)();
    return;
  }
  FUN_1000_e712();
  return;
}



/* 1000:f180  FUN_1000_f180  34 bytes, 1 callers */

uint __cdecl16near FUN_1000_f180(void)

{
  byte *pbVar1;
  byte bVar3;
  uint uVar2;
  int iVar4;
  byte *pbVar5;
  undefined2 unaff_DS;
  
  pbVar5 = (byte *)0x0;
  iVar4 = 0x42;
  bVar3 = 0;
  do {
    pbVar1 = pbVar5;
    pbVar5 = pbVar5 + 1;
    bVar3 = bVar3 ^ *pbVar1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  uVar2 = CONCAT11(bVar3,*pbVar1) ^ 0x5500;
  if (bVar3 != 0x55) {
    FUN_1000_f142();
    FUN_1000_f399(1);
    uVar2 = 1;
  }
  return uVar2;
}



/* 1000:f1a2  FUN_1000_f1a2  459 bytes, 1 callers */

/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_1000_f1a2(undefined2 param_1,undefined2 param_2)

{
  undefined2 uVar1;
  byte *pbVar2;
  byte *pbVar3;
  char *pcVar4;
  code *pcVar5;
  byte bVar6;
  undefined2 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined2 *puVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  char *pcVar15;
  char *pcVar16;
  int iVar17;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 in_stack_00000000;
  
  *(undefined2 *)0x124a = in_stack_00000000;
  pcVar5 = (code *)swi(0x21);
  uVar7 = (*pcVar5)();
  *(undefined2 *)0x1210 = uVar7;
  uVar10 = 1;
  if ((char)uVar7 != '\x02') {
    uVar7 = *(undefined2 *)0x2c;
    *(undefined2 *)0x1233 = uVar7;
    iVar8 = -0x8000;
    pcVar15 = (char *)0x0;
LAB_1000_f1c9:
    do {
      pcVar16 = pcVar15;
      if (iVar8 != 0) {
        iVar8 = iVar8 + -1;
        pcVar4 = pcVar15;
        pcVar15 = pcVar15 + 1;
        pcVar16 = pcVar15;
        if (*pcVar4 != '\0') goto LAB_1000_f1c9;
      }
      pcVar15 = pcVar16 + 1;
    } while (*pcVar16 != '\0');
    pcVar16 = pcVar16 + 3;
    *(undefined2 *)0x1231 = pcVar16;
    uVar10 = 0xffff;
    do {
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar4 = pcVar16;
      pcVar16 = pcVar16 + 1;
    } while (*pcVar4 != '\0');
    uVar10 = ~uVar10;
  }
  iVar8 = 1;
  pbVar12 = (byte *)0x81;
  uVar7 = *(undefined2 *)0x120e;
LAB_1000_f1e7:
  do {
    do {
      pbVar2 = pbVar12;
      pbVar12 = pbVar12 + 1;
      bVar6 = *pbVar2;
    } while (bVar6 == 0x20);
  } while (bVar6 == 9);
  if (bVar6 != 0xd) {
    iVar8 = iVar8 + 1;
    do {
      pbVar13 = pbVar12 + -1;
LAB_1000_f1f9:
      pbVar12 = pbVar13 + 1;
      bVar6 = *pbVar13;
      if ((bVar6 == 0x20) || (bVar6 == 9)) goto LAB_1000_f1e7;
      if (bVar6 == 0xd) break;
      if (bVar6 == 0x22) goto LAB_1000_f240;
      if (bVar6 != 0x5c) {
        if ((0x7f < bVar6) && ((bVar6 < 0xa0 || ((0xdf < bVar6 && (bVar6 < 0xfd)))))) {
          uVar10 = uVar10 + 1;
          pbVar12 = pbVar13 + 2;
        }
        uVar10 = uVar10 + 1;
        pbVar13 = pbVar12;
        goto LAB_1000_f1f9;
      }
      uVar9 = 0;
      do {
        uVar9 = uVar9 + 1;
        pbVar2 = pbVar12;
        pbVar12 = pbVar12 + 1;
      } while (*pbVar2 == 0x5c);
      if (*pbVar2 == 0x22) {
        uVar10 = uVar10 + (uVar9 >> 1) + (uint)((uVar9 & 1) != 0);
        while (pbVar13 = pbVar12, (uVar9 & 1) == 0) {
LAB_1000_f240:
          while( true ) {
            while( true ) {
              pbVar13 = pbVar12 + 1;
              bVar6 = *pbVar12;
              if (bVar6 == 0xd) goto LAB_1000_f27f;
              if (bVar6 == 0x22) goto LAB_1000_f1f9;
              if (bVar6 == 0x5c) break;
              if ((0x7f < bVar6) && ((bVar6 < 0xa0 || ((0xdf < bVar6 && (bVar6 < 0xfd)))))) {
                uVar10 = uVar10 + 1;
                pbVar13 = pbVar12 + 2;
              }
              pbVar12 = pbVar13;
              uVar10 = uVar10 + 1;
            }
            uVar9 = 0;
            do {
              pbVar12 = pbVar13;
              uVar9 = uVar9 + 1;
              pbVar13 = pbVar12 + 1;
            } while (*pbVar12 == 0x5c);
            if (*pbVar12 == 0x22) break;
            uVar10 = uVar10 + uVar9;
          }
          uVar10 = uVar10 + (uVar9 >> 1) + (uint)((uVar9 & 1) != 0);
          pbVar12 = pbVar12 + 1;
        }
        goto LAB_1000_f1f9;
      }
      uVar10 = uVar10 + uVar9;
    } while( true );
  }
LAB_1000_f27f:
  *(int *)0x122b = iVar8;
  iVar17 = (iVar8 + 1) * 2;
  iVar8 = -(uVar10 + iVar8 + iVar17 + 1 & 0xfffe);
  *(undefined1 **)0x122d = &stack0x0006 + iVar8;
  pbVar13 = &stack0x0006 + iVar17 + iVar8;
  *(undefined2 *)((int)&stack0x0004 + iVar8) = unaff_SS;
  uVar7 = *(undefined2 *)((int)&stack0x0004 + iVar8);
  *(byte **)(&stack0x0006 + iVar8) = pbVar13;
  puVar11 = (undefined2 *)(&stack0x0008 + iVar8);
  pbVar2 = (byte *)*(undefined4 *)0x1231;
  pbVar12 = (byte *)pbVar2;
  do {
    pbVar3 = pbVar12;
    pbVar12 = pbVar12 + 1;
    bVar6 = *pbVar3;
    pbVar3 = pbVar13;
    pbVar13 = pbVar13 + 1;
    *pbVar3 = bVar6;
  } while (bVar6 != 0);
  uVar1 = *(undefined2 *)0x120e;
  pbVar12 = (byte *)0x81;
LAB_1000_f2b9:
  do {
    do {
      pbVar14 = pbVar12 + 1;
      bVar6 = *pbVar12;
      pbVar12 = pbVar14;
    } while (bVar6 == 0x20);
  } while (bVar6 == 9);
  if (bVar6 == 0xd) {
LAB_1000_f363:
    *(undefined2 *)((int)&stack0x0004 + iVar8) = unaff_SS;
    uVar7 = *(undefined2 *)((int)&stack0x0004 + iVar8);
    *puVar11 = 0;
                    /* WARNING: Could not recover jumptable at 0x0001f369. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*(undefined2 *)0x124a)();
    return;
  }
  *puVar11 = pbVar13;
  puVar11 = puVar11 + 1;
  do {
    pbVar14 = pbVar14 + -1;
LAB_1000_f2cf:
    pbVar12 = pbVar14 + 1;
    bVar6 = *pbVar14;
    if ((bVar6 == 0x20) || (bVar6 == 9)) {
      pbVar2 = pbVar13;
      pbVar13 = pbVar13 + 1;
      *pbVar2 = 0;
      goto LAB_1000_f2b9;
    }
    if (bVar6 == 0xd) {
LAB_1000_f360:
      *pbVar13 = 0;
      goto LAB_1000_f363;
    }
    if (bVar6 == 0x22) {
LAB_1000_f31c:
      while( true ) {
        pbVar14 = pbVar12 + 1;
        bVar6 = *pbVar12;
        if (bVar6 == 0xd) goto LAB_1000_f360;
        if (bVar6 == 0x22) break;
        if (bVar6 == 0x5c) {
          uVar10 = 0;
          do {
            pbVar12 = pbVar14;
            uVar10 = uVar10 + 1;
            pbVar14 = pbVar12 + 1;
          } while (*pbVar12 == 0x5c);
          if (*pbVar12 == 0x22) {
            for (uVar9 = uVar10 >> 1; uVar9 != 0; uVar9 = uVar9 - 1) {
              pbVar2 = pbVar13;
              pbVar13 = pbVar13 + 1;
              *pbVar2 = 0x5c;
            }
            if ((uVar10 & 1) == 0) break;
            pbVar2 = pbVar13;
            pbVar13 = pbVar13 + 1;
            *pbVar2 = 0x22;
            pbVar12 = pbVar14;
          }
          else {
            for (; uVar10 != 0; uVar10 = uVar10 - 1) {
              pbVar2 = pbVar13;
              pbVar13 = pbVar13 + 1;
              *pbVar2 = 0x5c;
            }
          }
        }
        else {
          if ((0x7f < bVar6) && ((bVar6 < 0xa0 || ((0xdf < bVar6 && (bVar6 < 0xfd)))))) {
            pbVar2 = pbVar13;
            pbVar13 = pbVar13 + 1;
            *pbVar2 = bVar6;
            pbVar2 = pbVar14;
            pbVar14 = pbVar12 + 2;
            bVar6 = *pbVar2;
          }
          pbVar2 = pbVar13;
          pbVar13 = pbVar13 + 1;
          *pbVar2 = bVar6;
          pbVar12 = pbVar14;
        }
      }
      goto LAB_1000_f2cf;
    }
    if (bVar6 != 0x5c) {
      if ((0x7f < bVar6) && ((bVar6 < 0xa0 || ((0xdf < bVar6 && (bVar6 < 0xfd)))))) {
        pbVar2 = pbVar13;
        pbVar13 = pbVar13 + 1;
        *pbVar2 = bVar6;
        bVar6 = *pbVar12;
        pbVar12 = pbVar14 + 2;
      }
      pbVar14 = pbVar12;
      pbVar2 = pbVar13;
      pbVar13 = pbVar13 + 1;
      *pbVar2 = bVar6;
      goto LAB_1000_f2cf;
    }
    uVar10 = 0;
    pbVar14 = pbVar12;
    do {
      uVar10 = uVar10 + 1;
      pbVar2 = pbVar14;
      pbVar14 = pbVar14 + 1;
    } while (*pbVar2 == 0x5c);
    if (*pbVar2 == 0x22) {
      for (uVar9 = uVar10 >> 1; uVar9 != 0; uVar9 = uVar9 - 1) {
        pbVar2 = pbVar13;
        pbVar13 = pbVar13 + 1;
        *pbVar2 = 0x5c;
      }
      pbVar12 = pbVar14;
      if ((uVar10 & 1) == 0) goto LAB_1000_f31c;
      pbVar2 = pbVar13;
      pbVar13 = pbVar13 + 1;
      *pbVar2 = 0x22;
      goto LAB_1000_f2cf;
    }
    for (; uVar10 != 0; uVar10 = uVar10 - 1) {
      pbVar2 = pbVar13;
      pbVar13 = pbVar13 + 1;
      *pbVar2 = 0x5c;
    }
  } while( true );
}



/* 1000:f36e  FUN_1000_f36e  43 bytes, 1 callers */

int * FUN_1000_f36e(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined2 unaff_DS;
  
  piVar3 = (int *)0x1432;
  do {
    piVar1 = piVar3;
    piVar3 = piVar3 + 1;
    piVar4 = piVar3;
    if ((*piVar1 == param_1) || (piVar4 = (int *)0x0, *piVar1 == -1)) {
      return piVar4;
    }
    iVar2 = -1;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      piVar1 = piVar3;
      piVar3 = (int *)((int)piVar3 + 1);
    } while ((char)*piVar1 != '\0');
  } while( true );
}



/* 1000:f399  FUN_1000_f399  53 bytes, 4 callers */

void FUN_1000_f399(undefined2 param_1)

{
  char *pcVar1;
  code *pcVar2;
  char *pcVar3;
  int iVar4;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  
  pcVar3 = (char *)FUN_1000_f36e(param_1);
  if (pcVar3 != (char *)0x0) {
    iVar4 = -1;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar1 = pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (*pcVar1 != '\0');
    if (*(int *)0x140e == -0x292a) {
      (*(code *)*(undefined2 *)0x1410)();
    }
    pcVar2 = (code *)swi(0x21);
    (*pcVar2)();
  }
  return;
}



/* 1000:f3ce  FUN_1000_f3ce  8 bytes, 1 callers */

long __cdecl16near FUN_1000_f3ce(void)

{
  uint in_DX;
  bool in_CF;
  
  if (!in_CF) {
    return (ulong)in_DX << 0x10;
  }
  FUN_1000_f3f6();
  return -1;
}



/* 1000:f3e3  FUN_1000_f3e3  13 bytes, 6 callers */

void __cdecl16near FUN_1000_f3e3(void)

{
  bool in_CF;
  
  if (in_CF) {
    FUN_1000_f3f6();
  }
  return;
}



/* 1000:f3f6  FUN_1000_f3f6  45 bytes, 1 callers */

void __cdecl16near FUN_1000_f3f6(void)

{
  byte bVar1;
  char cVar2;
  uint in_AX;
  undefined2 unaff_DS;
  
  bVar1 = (byte)in_AX;
  *(byte *)0x1213 = bVar1;
  cVar2 = (char)(in_AX >> 8);
  if (cVar2 != '\0') goto LAB_1000_f41a;
  if (*(byte *)0x1210 < 3) {
LAB_1000_f410:
    if (0x13 < bVar1) {
LAB_1000_f414:
      in_AX = 0x13;
    }
  }
  else {
    if (0x21 < bVar1) goto LAB_1000_f414;
    if (bVar1 < 0x20) goto LAB_1000_f410;
    in_AX = 5;
  }
  cVar2 = *(char *)(ulong)((in_AX & 0xff) + 0x124c);
LAB_1000_f41a:
  *(int *)0x1208 = (int)cVar2;
  return;
}



/* 1000:f424  FUN_1000_f424  18 bytes, 1 callers */

void FUN_1000_f424(void)

{
  code *in_stack_00000000;
  
                    /* WARNING: Could not recover jumptable at 0x0001f430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*in_stack_00000000)();
  return;
}



/* 1000:f436  FUN_1000_f436  33 bytes, 0 callers */

void __cdecl16near FUN_1000_f436(uint param_1)

{
  byte *pbVar1;
  undefined2 unaff_DS;
  
  if (*(uint *)0x11da < param_1) {
    pbVar1 = (byte *)(param_1 - 2);
    *pbVar1 = *pbVar1 | 1;
    if (pbVar1 < (byte *)*(undefined2 *)0x11dc) {
      *(undefined2 *)0x11dc = pbVar1;
    }
  }
  return;
}



/* 1000:f457  FUN_1000_f457  40 bytes, 0 callers */

void __cdecl16near FUN_1000_f457(uint param_1)

{
  bool bVar1;
  
  bVar1 = param_1 < 0xffe8;
  if (((param_1 < 0xffe9) && (FUN_1000_f480(), bVar1)) && (FUN_1000_f4fc(), !bVar1)) {
    FUN_1000_f480();
  }
  return;
}



/* 1000:f480  FUN_1000_f480  123 bytes, 2 callers */

uint * __cdecl16near FUN_1000_f480(void)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int in_CX;
  uint uVar4;
  int in_BX;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  undefined2 unaff_DS;
  
  uVar4 = in_CX + 1U & 0xfffe;
  puVar7 = (uint *)*(undefined2 *)(in_BX + 8);
  puVar5 = (uint *)*(undefined2 *)(in_BX + 10);
  do {
    while( true ) {
      puVar1 = puVar7 + 1;
      uVar3 = *puVar7;
      puVar6 = puVar1;
      if ((uVar3 & 1) != 0) {
        while( true ) {
          uVar2 = uVar3 - 1;
          if (uVar4 <= uVar2) {
            *puVar7 = uVar4;
            puVar7 = puVar1;
            if (uVar2 != uVar4) {
              *(int *)((int)puVar1 + uVar4) = (uVar2 - uVar4) + -1;
              puVar7 = (uint *)((int)((int)puVar1 + uVar4) - uVar4);
            }
            *(int *)(in_BX + 8) = (int)puVar7 + uVar4;
            return puVar1;
          }
          if (CARRY2((uint)puVar1,uVar2)) goto LAB_1000_f4d9;
          puVar6 = (uint *)((int)puVar1 + uVar2) + 1;
          uVar3 = *(uint *)((int)puVar1 + uVar2);
          if ((uVar3 & 1) == 0) break;
          uVar3 = uVar3 + uVar2 + 2;
          *puVar7 = uVar3;
        }
      }
      if (puVar6 + -1 < puVar5) break;
      if (((uint)puVar5 & 1) != 0) goto LAB_1000_f4d9;
      puVar7 = (uint *)*(undefined2 *)(in_BX + 6);
      if ((uint *)*(undefined2 *)(in_BX + 8) == puVar7) goto LAB_1000_f4d9;
      puVar5 = (uint *)((int)*(undefined2 *)(in_BX + 8) + -1);
    }
    puVar7 = (uint *)((int)puVar6 + uVar3);
  } while (!CARRY2((uint)puVar6,uVar3));
LAB_1000_f4d9:
  puVar7 = (uint *)*(undefined2 *)(in_BX + 6);
  *(undefined2 *)(in_BX + 8) = puVar7;
  return puVar7;
}



/* 1000:f4fc  FUN_1000_f4fc  140 bytes, 2 callers */

void __cdecl16near FUN_1000_f4fc(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int in_CX;
  uint uVar4;
  int iVar5;
  int in_BX;
  uint *unaff_SI;
  undefined2 *puVar6;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar7;
  
  if ((*(byte *)(in_BX + 2) & 1) != 0) {
    FUN_1000_f5d9();
    if ((*unaff_SI & 1) != 0) {
      in_CX = (in_CX - *unaff_SI) + -1;
    }
    uVar3 = *(uint *)(in_BX + 4);
    if (uVar3 != 0) {
      if (!CARRY2(in_CX + 2U,uVar3)) {
        uVar3 = *(uint *)0x1270;
        if (uVar3 == 0x2000) goto LAB_1000_f549;
        uVar4 = 0x8000;
        while (uVar3 <= uVar4) {
          uVar4 = uVar4 >> 1;
          if (uVar4 == 0) goto LAB_1000_f562;
        }
        if (uVar4 < 8) goto LAB_1000_f562;
        uVar3 = uVar4 << 1;
        goto LAB_1000_f549;
      }
      uVar4 = 0xfff0;
      if (in_CX + 2U + uVar3 == 0) {
        while( true ) {
          bVar7 = false;
          iVar2 = FUN_1000_f588();
          if (!bVar7) break;
          if (uVar4 == 0xfff0) {
            return;
          }
LAB_1000_f562:
          uVar3 = 0x10;
LAB_1000_f549:
          uVar4 = ~(uVar3 - 1);
        }
        iVar5 = iVar2 - *(int *)(in_BX + 4);
        *(int *)(in_BX + 4) = iVar2;
        *(undefined2 *)(in_BX + 8) = unaff_SI;
        piVar1 = (int *)*(int *)(in_BX + 10);
        *piVar1 = iVar5 + -1;
        puVar6 = (undefined2 *)((int)piVar1 + iVar5);
        *puVar6 = 0xfffe;
        *(undefined2 *)(in_BX + 10) = puVar6;
      }
    }
  }
  return;
}



/* 1000:f588  FUN_1000_f588  80 bytes, 1 callers */

void __cdecl16near FUN_1000_f588(int param_1)

{
  code *pcVar1;
  uint in_AX;
  uint uVar2;
  int extraout_DX;
  int in_BX;
  int unaff_DS;
  bool bVar3;
  
  if ((((*(byte *)(in_BX + 2) & 4) == 0) || (in_AX - 1 < *(int *)(in_BX + 4) - 1U)) ||
     (*(uint *)(in_BX + -2) < in_AX - 1)) {
    uVar2 = in_AX >> 4;
    if (uVar2 == 0) {
      uVar2 = 0x1000;
    }
    bVar3 = false;
    if ((*(byte *)(in_BX + 2) & 4) != 0) {
      bVar3 = uVar2 + unaff_DS < *(uint *)0x120e;
    }
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    if ((!bVar3) && ((*(byte *)(param_1 + 2) & 4) != 0)) {
      *(int *)(param_1 + -2) = extraout_DX + -1;
    }
  }
  return;
}



/* 1000:f5d9  FUN_1000_f5d9  32 bytes, 1 callers */

void __cdecl16near FUN_1000_f5d9(void)

{
  int in_BX;
  uint *puVar1;
  undefined2 unaff_DS;
  
  puVar1 = (uint *)*(undefined2 *)(in_BX + 8);
  if (puVar1 == (uint *)*(undefined2 *)(in_BX + 10)) {
    puVar1 = (uint *)*(undefined2 *)(in_BX + 6);
  }
  while( true ) {
    if (*puVar1 == 0xfffe) break;
    puVar1 = (uint *)((int)puVar1 + (*puVar1 & 0xfffe) + 2);
  }
  return;
}



/* 1000:f5fa  FUN_1000_f5fa  67 bytes, 1 callers */

void __cdecl16near FUN_1000_f5fa(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_DI;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  bool bVar3;
  
  bVar3 = false;
  do {
    pcVar1 = (code *)swi(0x21);
    uVar2 = (*pcVar1)();
    if (bVar3) {
      return;
    }
    bVar3 = uVar2 < *(uint *)0x11ea;
  } while (uVar2 <= *(uint *)0x11ea);
  if (*(uint *)0x11e8 < uVar2) {
    *(uint *)0x11e8 = uVar2;
  }
  *(undefined2 *)0x2 = *(undefined2 *)(unaff_DI + 0xc);
  FUN_1000_faf6();
  FUN_1000_fb2a();
  return;
}



/* 1000:f63e  FUN_1000_f63e  84 bytes, 0 callers */

undefined4 __cdecl16near FUN_1000_f63e(byte *param_1)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined2 unaff_DS;
  bool bVar10;
  
  iVar5 = 0;
  iVar7 = 0;
  do {
    do {
      pbVar1 = param_1;
      param_1 = param_1 + 1;
      bVar2 = *pbVar1;
    } while (bVar2 == 0x20);
  } while (bVar2 == 9);
  if ((bVar2 != 0x2d) && (bVar4 = bVar2, bVar2 != 0x2b)) goto LAB_1000_f65e;
  while( true ) {
    pbVar1 = param_1;
    param_1 = param_1 + 1;
    bVar4 = *pbVar1;
LAB_1000_f65e:
    if ((0x39 < bVar4) || (bVar4 < 0x30)) break;
    uVar8 = iVar7 * 2;
    uVar6 = iVar5 << 1 | (uint)(iVar7 < 0);
    iVar5 = iVar7 << 2;
    uVar9 = iVar7 * 8;
    uVar3 = iVar7 * 10;
    iVar7 = uVar3 + (byte)(bVar4 - 0x30);
    iVar5 = ((uVar6 << 1 | (uint)((int)uVar8 < 0)) << 1 | (uint)(iVar5 < 0)) + uVar6 +
            (uint)CARRY2(uVar9,uVar8) + (uint)CARRY2(uVar3,(uint)(byte)(bVar4 - 0x30));
  }
  if (bVar2 == 0x2d) {
    bVar10 = iVar7 != 0;
    iVar7 = -iVar7;
    iVar5 = -(iVar5 + (uint)bVar10);
  }
  return CONCAT22(iVar5,iVar7);
}



/* 1000:f692  FUN_1000_f692  407 bytes, 1 callers */

undefined2 __cdecl16near FUN_1000_f692(uint *param_1)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  undefined2 unaff_DS;
  long lVar4;
  undefined4 uVar5;
  undefined2 uVar6;
  long local_8;
  int local_4;
  
  if ((param_1[1] < 0x12cf) && ((param_1[1] < 0x12ce || (*param_1 < 0xa600)))) {
    uVar1 = 0;
  }
  else {
    lVar4 = FUN_1000_fca2(*param_1,param_1[1],0x3380,0x1e1);
    uVar6 = 0xfffe;
    uVar1 = 0xae80;
    iVar2 = FUN_1000_f0e2(*param_1,param_1[1],0x3380,0x1e1);
    *(int *)0x127c = iVar2;
    uVar3 = (int)(iVar2 + 1U) >> 0xf;
    local_4 = ((int)((iVar2 + 1U ^ uVar3) - uVar3) >> 2 ^ uVar3) - uVar3;
    local_8 = FUN_1000_f0b0(local_4,0,uVar1,uVar6);
    local_8 = lVar4 + local_8;
    while (local_8 < 0) {
      lVar4 = local_8 + 0x1e13380;
      if ((*(int *)0x127c + 1) % 4 == 0) {
        local_4 = local_4 + -1;
        lVar4 = CONCAT22((int)((ulong)lVar4 >> 0x10) + 1 + (uint)(0xae7f < (uint)lVar4),
                         (int)local_8 + -0x7b00);
      }
      local_8 = lVar4;
      *(int *)0x127c = *(int *)0x127c + -1;
    }
    *(int *)0x127c = *(int *)0x127c + 0x7b2;
    if ((*(int *)0x127c % 4 == 0) && ((*(int *)0x127c % 100 != 0 || (*(int *)0x127c % 400 == 0)))) {
      iVar2 = 0x13d8;
    }
    else {
      iVar2 = 0x13f2;
    }
    *(int *)0x127c = *(int *)0x127c + -0x76c;
    uVar1 = FUN_1000_f016(local_8,0x5180,1);
    *(undefined2 *)0x1280 = uVar1;
    FUN_1000_fc82(&local_8,0x5180,1);
    *(undefined2 *)0x127a = 1;
    while (*(int *)(*(int *)0x127a * 2 + iVar2) < *(int *)0x1280) {
      *(int *)0x127a = *(int *)0x127a + 1;
    }
    *(int *)0x127a = *(int *)0x127a + -1;
    *(int *)0x1278 = *(int *)0x1280 - *(int *)(*(int *)0x127a * 2 + iVar2);
    uVar1 = FUN_1000_f016(local_8,0xe10,0);
    *(undefined2 *)0x1276 = uVar1;
    uVar6 = 0;
    uVar1 = 0x3c;
    uVar5 = FUN_1000_fc82(&local_8,0xe10,0);
    uVar1 = FUN_1000_f016(uVar5,uVar1,uVar6);
    *(undefined2 *)0x1274 = uVar1;
    uVar1 = FUN_1000_fbe2(uVar5,0x3c,0);
    *(undefined2 *)0x1272 = uVar1;
    *(uint *)0x127e = (*(int *)0x127c * 0x16d + *(int *)0x1280 + local_4 + 0x9c36U) % 7;
    *(undefined2 *)0x1282 = 0;
    uVar1 = 0x1272;
  }
  return uVar1;
}



/* 1000:f82a  FUN_1000_f82a  15 bytes, 2 callers */

void __cdecl16near FUN_1000_f82a(void)

{
  undefined2 unaff_DS;
  
  if (*(int *)0x150c == 0) {
    FUN_1000_f83a();
    *(int *)0x150c = *(int *)0x150c + 1;
  }
  return;
}



/* 1000:f83a  FUN_1000_f83a  154 bytes, 1 callers */

void __cdecl16near FUN_1000_f83a(void)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined2 unaff_DS;
  undefined4 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  
  pcVar2 = (char *)FUN_1000_fb88(0x1284);
  if ((pcVar2 != (char *)0x0) && (*pcVar2 != '\0')) {
    FUN_1000_fb60(*(undefined2 *)0x1296,pcVar2,3);
    uVar6 = 0;
    uVar5 = 0xe10;
    pcVar2 = pcVar2 + 3;
    uVar4 = thunk_FUN_1000_f63e(pcVar2,0xe10,0);
    uVar4 = FUN_1000_f0b0(uVar4,uVar5,uVar6);
    *(undefined2 *)0x1290 = (int)uVar4;
    *(undefined2 *)0x1292 = (int)((ulong)uVar4 >> 0x10);
    iVar3 = 0;
    while (pcVar2[iVar3] != '\0') {
      cVar1 = pcVar2[iVar3];
      if ((((*(byte *)(cVar1 + 0x12d7) & 4) == 0) && (cVar1 != '-')) ||
         (iVar3 = iVar3 + 1, 2 < iVar3)) break;
    }
    if (pcVar2[iVar3] == '\0') {
      *(undefined1 *)*(undefined2 *)0x1298 = 0;
    }
    else {
      FUN_1000_fb60(*(undefined2 *)0x1298,pcVar2 + iVar3,3);
    }
    *(uint *)0x1294 = (uint)(*(char *)*(undefined2 *)0x1298 != '\0');
  }
  return;
}



/* 1000:f8d6  FUN_1000_f8d6  198 bytes, 2 callers */

undefined2 __cdecl16near FUN_1000_f8d6(int param_1)

{
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined2 unaff_DS;
  int local_6;
  
  if ((*(int *)(param_1 + 8) < 3) || (9 < *(int *)(param_1 + 8))) goto LAB_1000_f997;
  if ((*(int *)(param_1 + 8) < 4) || (8 < *(int *)(param_1 + 8))) {
    uVar4 = *(int *)(param_1 + 10) + 0x76c;
    if (((int)uVar4 < 0x7c3) || (*(int *)(param_1 + 8) != 3)) {
      local_6 = *(int *)(*(int *)(param_1 + 8) * 2 + 0x13f4);
    }
    else {
      local_6 = *(int *)(*(int *)(param_1 + 8) * 2 + 0x13f2) + 7;
    }
    if ((uVar4 & 3) == 0) {
      local_6 = local_6 + 1;
    }
    uVar4 = *(int *)(param_1 + 10) - 0x45;
    uVar2 = (int)uVar4 >> 0xf;
    local_6 = (int)((((int)((uVar4 ^ uVar2) - uVar2) >> 2 ^ uVar2) - uVar2) +
                    (*(int *)(param_1 + 10) + -0x46) * 0x16d + local_6 + 4) % 7 - local_6;
    iVar3 = -local_6;
    if (*(int *)(param_1 + 8) == 3) {
      if ((iVar3 < *(int *)(param_1 + 0xe)) ||
         ((-*(int *)(param_1 + 0xe) == local_6 && (1 < *(int *)(param_1 + 4))))) goto LAB_1000_f983;
    }
    else if ((*(int *)(param_1 + 0xe) < iVar3) ||
            ((*(int *)(param_1 + 0xe) == iVar3 && (*(int *)(param_1 + 4) < 1)))) goto LAB_1000_f983;
LAB_1000_f997:
    uVar1 = 0;
  }
  else {
LAB_1000_f983:
    uVar1 = 1;
  }
  return uVar1;
}



/* 1000:f9a0  FUN_1000_f9a0  246 bytes, 1 callers */

long __cdecl16near
FUN_1000_f9a0(int param_1,int param_2,int param_3,uint param_4,uint param_5,uint param_6)

{
  int iVar1;
  uint uVar2;
  undefined2 unaff_DS;
  long lVar3;
  undefined4 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined1 local_14 [4];
  uint local_10;
  int local_c;
  int local_a;
  int local_6;
  
  uVar2 = (int)(param_1 + 3U) >> 0xf;
  iVar1 = ((int)((param_1 + 3U ^ uVar2) - uVar2) >> 2 ^ uVar2) - uVar2;
  lVar3 = FUN_1000_f0b0(iVar1,iVar1 >> 0xf,0x5180,1);
  iVar1 = *(int *)(param_2 * 2 + 0x13f0);
  if ((param_1 % 4 == 0) && (2 < param_2)) {
    iVar1 = iVar1 + 1;
  }
  local_6 = param_3 + iVar1;
  FUN_1000_f82a();
  uVar8 = 0;
  uVar7 = 0x3c;
  uVar6 = 0;
  uVar5 = 0x3c;
  uVar2 = param_1 * 0x16d + param_3 + iVar1;
  uVar4 = FUN_1000_f0b0(uVar2 + 0xe44,((int)uVar2 >> 0xf) + (uint)(0xf1bb < uVar2),0x18,0);
  uVar4 = FUN_1000_f0b0(param_4 + (uint)uVar4,
                        ((int)param_4 >> 0xf) + (int)((ulong)uVar4 >> 0x10) +
                        (uint)CARRY2(param_4,(uint)uVar4),uVar5,uVar6);
  uVar4 = FUN_1000_f0b0(param_5 + (uint)uVar4,
                        ((int)param_5 >> 0xf) + (int)((ulong)uVar4 >> 0x10) +
                        (uint)CARRY2(param_5,(uint)uVar4),uVar7,uVar8);
  uVar2 = param_6 + (uint)uVar4;
  lVar3 = lVar3 + CONCAT22(((int)param_6 >> 0xf) + (int)((ulong)uVar4 >> 0x10) +
                           (uint)CARRY2(param_6,(uint)uVar4) + *(int *)0x1292 +
                           (uint)CARRY2(uVar2,*(uint *)0x1290),uVar2 + *(uint *)0x1290);
  local_a = param_1 + 0x50;
  local_c = param_2 + -1;
  local_10 = param_4;
  if (*(int *)0x1294 != 0) {
    iVar1 = FUN_1000_f8d6(local_14);
    if (iVar1 != 0) {
      lVar3 = CONCAT22((int)((ulong)lVar3 >> 0x10) - (uint)((uint)lVar3 < 0xe10),(uint)lVar3 - 0xe10
                      );
    }
  }
  return lVar3;
}



/* 1000:faa2  FUN_1000_faa2  83 bytes, 1 callers */

byte * __cdecl16near FUN_1000_faa2(void)

{
  ulong uVar1;
  byte bVar2;
  int in_AX;
  uint uVar4;
  uint in_CX;
  uint in_DX;
  uint uVar5;
  char in_BL;
  byte *pbVar6;
  byte *unaff_DI;
  byte *pbVar7;
  byte *pbVar8;
  undefined2 unaff_DS;
  bool bVar9;
  char cVar3;
  
  pbVar7 = unaff_DI;
  pbVar6 = unaff_DI;
  if (((in_BL != '\0') && (in_CX == 10)) && ((int)in_DX < 0)) {
    pbVar7 = unaff_DI + 1;
    *unaff_DI = 0x2d;
    bVar9 = in_AX != 0;
    in_AX = -in_AX;
    in_DX = -(in_DX + bVar9);
    pbVar6 = pbVar7;
  }
  do {
    uVar5 = 0;
    uVar4 = in_DX;
    if (in_DX != 0) {
      uVar4 = in_DX / in_CX;
      uVar5 = in_DX % in_CX;
    }
    uVar1 = CONCAT22(uVar5,in_AX);
    in_AX = (int)(uVar1 / in_CX);
    cVar3 = (char)(uVar1 % (ulong)in_CX);
    bVar2 = cVar3 + 0x30;
    if (0x39 < bVar2) {
      bVar2 = cVar3 + 0x57;
    }
    pbVar8 = pbVar7 + 1;
    *pbVar7 = bVar2;
    in_DX = uVar4;
    pbVar7 = pbVar8;
  } while (uVar4 != 0 || in_AX != 0);
  *pbVar8 = 0;
  do {
    pbVar8 = pbVar8 + -1;
    LOCK();
    bVar2 = *pbVar8;
    *pbVar8 = *pbVar6;
    UNLOCK();
    *pbVar6 = bVar2;
    pbVar7 = pbVar6 + 2;
    pbVar6 = pbVar6 + 1;
  } while (pbVar7 < pbVar8);
  return unaff_DI;
}



/* 1000:faf6  FUN_1000_faf6  52 bytes, 1 callers */

void __cdecl16near FUN_1000_faf6(void)

{
  int *piVar1;
  int in_AX;
  undefined2 *in_BX;
  undefined2 *puVar2;
  undefined2 unaff_DS;
  
  in_BX[2] = in_AX + (int)in_BX;
  puVar2 = (undefined2 *)(in_AX + (int)in_BX + -2);
  piVar1 = in_BX + 10;
  *puVar2 = 0xfffe;
  in_BX[5] = puVar2;
  *piVar1 = in_AX + -0x17;
  *in_BX = unaff_DS;
  in_BX[3] = piVar1;
  in_BX[4] = piVar1;
  in_BX[6] = 0;
  in_BX[7] = 0;
  in_BX[8] = 0;
  in_BX[9] = 0;
  return;
}



/* 1000:fb2a  FUN_1000_fb2a  54 bytes, 1 callers */

void __cdecl16near FUN_1000_fb2a(void)

{
  int in_BX;
  int iVar1;
  int *unaff_DI;
  undefined2 unaff_ES;
  undefined2 uVar2;
  int unaff_DS;
  
  if (unaff_DI[1] == 0) {
    unaff_DI[1] = unaff_DS;
    *unaff_DI = in_BX;
  }
  else {
    uVar2 = (undefined2)((ulong)*(undefined4 *)(unaff_DI + 4) >> 0x10);
    iVar1 = (int)*(undefined4 *)(unaff_DI + 4);
    *(int *)(iVar1 + 0xe) = unaff_DS;
    *(int *)(iVar1 + 0xc) = in_BX;
    *(undefined2 *)(in_BX + 0x12) = uVar2;
    *(int *)(in_BX + 0x10) = iVar1;
  }
  unaff_DI[5] = unaff_DS;
  unaff_DI[4] = in_BX;
  unaff_DI[3] = unaff_DS;
  unaff_DI[2] = in_BX;
  return;
}



/* 1000:fb60  FUN_1000_fb60  40 bytes, 1 callers */

char * __cdecl16near FUN_1000_fb60(char *param_1,char *param_2,int param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  undefined2 unaff_DS;
  
  pcVar3 = param_1;
  if (param_3 != 0) {
    do {
      pcVar1 = param_2;
      param_2 = param_2 + 1;
      if (*pcVar1 == '\0') break;
      pcVar2 = pcVar3;
      pcVar3 = pcVar3 + 1;
      *pcVar2 = *pcVar1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
    for (; param_3 != 0; param_3 = param_3 + -1) {
      pcVar1 = pcVar3;
      pcVar3 = pcVar3 + 1;
      *pcVar1 = '\0';
    }
  }
  return param_1;
}



/* 1000:fb88  FUN_1000_fb88  88 bytes, 1 callers */

int __cdecl16near FUN_1000_fb88(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined2 unaff_DS;
  
  piVar3 = (int *)*(int *)0x122f;
  if ((piVar3 != (int *)0x0) && (param_1 != 0)) {
    iVar1 = FUN_1000_fd0c(param_1);
    for (; *piVar3 != 0; piVar3 = piVar3 + 1) {
      iVar2 = FUN_1000_fd0c(*piVar3);
      if (((iVar1 < iVar2) && (*(char *)(*piVar3 + iVar1) == '=')) &&
         (iVar2 = FUN_1000_ede8(*piVar3,param_1,iVar1), iVar2 == 0)) {
        return *piVar3 + iVar1 + 1;
      }
    }
  }
  return 0;
}



/* 1000:fbe2  FUN_1000_fbe2  160 bytes, 2 callers */

undefined4 FUN_1000_fbe2(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  bool bVar13;
  
  bVar13 = (int)param_2 < 0;
  if (bVar13) {
    bVar12 = param_1 != 0;
    param_1 = -param_1;
    param_2 = -(uint)bVar12 - param_2;
  }
  uVar11 = (uint)bVar13;
  if ((int)param_4 < 0) {
    bVar13 = param_3 != 0;
    param_3 = -param_3;
    param_4 = -(uint)bVar13 - param_4;
  }
  uVar4 = param_1;
  uVar3 = param_3;
  uVar8 = param_2;
  uVar9 = param_4;
  if (param_4 == 0) {
    iVar5 = (int)(((ulong)param_2 % (ulong)param_3 << 0x10 | (ulong)param_1) % (ulong)param_3);
    iVar6 = 0;
    if ((int)(uVar11 - 1) < 0) goto LAB_1000_fc7c;
  }
  else {
    do {
      uVar10 = uVar9 >> 1;
      uVar3 = (uint)(CONCAT12((uVar9 & 1) != 0,uVar3) >> 1);
      uVar7 = uVar8 >> 1;
      uVar4 = (uint)(CONCAT12((uVar8 & 1) != 0,uVar4) >> 1);
      uVar8 = uVar7;
      uVar9 = uVar10;
    } while (uVar10 != 0);
    uVar1 = CONCAT22(uVar7,uVar4) / (ulong)uVar3;
    uVar3 = (int)uVar1 * param_4;
    lVar2 = (uVar1 & 0xffff) * (ulong)param_3;
    uVar8 = (uint)((ulong)lVar2 >> 0x10);
    uVar4 = (uint)lVar2;
    uVar9 = uVar8 + uVar3;
    if (((CARRY2(uVar8,uVar3)) || (param_2 < uVar9)) || ((param_2 <= uVar9 && (param_1 < uVar4)))) {
      bVar13 = uVar4 < param_3;
      uVar4 = uVar4 - param_3;
      uVar9 = (uVar9 - param_4) - (uint)bVar13;
    }
    iVar5 = uVar4 - param_1;
    iVar6 = (uVar9 - param_2) - (uint)(uVar4 < param_1);
    if (-1 < (int)(uVar11 - 1)) goto LAB_1000_fc7c;
  }
  bVar13 = iVar5 != 0;
  iVar5 = -iVar5;
  iVar6 = -(uint)bVar13 - iVar6;
LAB_1000_fc7c:
  return CONCAT22(iVar6,iVar5);
}



/* 1000:fc82  FUN_1000_fc82  31 bytes, 1 callers */

void FUN_1000_fc82(undefined2 *param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 unaff_DS;
  undefined4 uVar1;
  
  uVar1 = FUN_1000_fbe2(*param_1,param_1[1],param_2,param_3);
  param_1[1] = (int)((ulong)uVar1 >> 0x10);
  *param_1 = (int)uVar1;
  return;
}



/* 1000:fca2  FUN_1000_fca2  106 bytes, 1 callers */

undefined4 FUN_1000_fca2(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  
  uVar4 = param_1;
  uVar9 = param_4;
  uVar10 = param_2;
  uVar3 = param_3;
  if (param_4 == 0) {
    iVar6 = (int)(((ulong)param_2 % (ulong)param_3 << 0x10 | (ulong)param_1) % (ulong)param_3);
    iVar7 = 0;
  }
  else {
    do {
      uVar5 = uVar9 >> 1;
      uVar3 = (uint)(CONCAT12((uVar9 & 1) != 0,uVar3) >> 1);
      uVar8 = uVar10 >> 1;
      uVar4 = (uint)(CONCAT12((uVar10 & 1) != 0,uVar4) >> 1);
      uVar9 = uVar5;
      uVar10 = uVar8;
    } while (uVar5 != 0);
    uVar1 = CONCAT22(uVar8,uVar4) / (ulong)uVar3;
    uVar3 = (int)uVar1 * param_4;
    lVar2 = (uVar1 & 0xffff) * (ulong)param_3;
    uVar9 = (uint)((ulong)lVar2 >> 0x10);
    uVar4 = (uint)lVar2;
    uVar10 = uVar9 + uVar3;
    if (((CARRY2(uVar9,uVar3)) || (param_2 < uVar10)) || ((param_2 <= uVar10 && (param_1 < uVar4))))
    {
      bVar11 = uVar4 < param_3;
      uVar4 = uVar4 - param_3;
      uVar10 = (uVar10 - param_4) - (uint)bVar11;
    }
    iVar6 = -(uVar4 - param_1);
    iVar7 = -(uint)(uVar4 - param_1 != 0) - ((uVar10 - param_2) - (uint)(uVar4 < param_1));
  }
  return CONCAT22(iVar7,iVar6);
}



/* 1000:fd0c  FUN_1000_fd0c  27 bytes, 1 callers */

int __cdecl16near FUN_1000_fd0c(char *param_1)

{
  char *pcVar1;
  uint uVar2;
  undefined2 unaff_DS;
  
  uVar2 = 0xffff;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar1 = param_1;
    param_1 = param_1 + 1;
  } while (*pcVar1 != '\0');
  return ~uVar2 - 1;
}


