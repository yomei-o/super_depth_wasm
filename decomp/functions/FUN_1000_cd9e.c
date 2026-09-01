/* 1000:cd9e */

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


