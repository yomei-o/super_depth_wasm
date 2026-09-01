/* 1000:f692 */

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


