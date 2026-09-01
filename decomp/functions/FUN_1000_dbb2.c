/* 1000:dbb2 */

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


