/* 1000:cbe6 */

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


