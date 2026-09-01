/* 1000:91fe */

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


