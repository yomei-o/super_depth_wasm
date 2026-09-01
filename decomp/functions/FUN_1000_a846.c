/* 1000:a846 */

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


