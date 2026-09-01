/* 1000:f1a2 */

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


