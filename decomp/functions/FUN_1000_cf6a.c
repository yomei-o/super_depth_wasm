/* 1000:cf6a */

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


