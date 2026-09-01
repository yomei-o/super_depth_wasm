/* 1000:e64a */

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


