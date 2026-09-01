/* 1000:0011 */

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


