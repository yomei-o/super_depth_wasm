/* 1000:c788 */

void __cdecl16near FUN_1000_c788(int param_1,int param_2,int param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  byte bVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  undefined2 uVar12;
  undefined2 unaff_DS;
  int local_20;
  int local_1c;
  int local_1a;
  int local_18;
  int local_12;
  int local_10;
  int local_e;
  int local_6;
  
  iVar5 = *(int *)(param_4 * 2 + 0x1512);
  local_20 = iVar5 * 8;
  iVar7 = local_20 * iVar5;
  if (0 < local_20) {
    local_18 = param_2;
    local_1a = param_2 + param_3 + -1;
    local_1c = 0;
    do {
      local_e = 0;
      if (0 < iVar5) {
        local_10 = param_1 + param_3 + -1;
        local_12 = param_1;
        do {
          uVar6 = *(undefined4 *)(param_4 * 4 + 0x1940);
          uVar12 = (undefined2)((ulong)uVar6 >> 0x10);
          iVar10 = (int)uVar6 + local_1c + local_e;
          bVar1 = *(byte *)(iVar10 + iVar7);
          bVar2 = *(byte *)(iVar10 + iVar7 * 2);
          bVar3 = *(byte *)(iVar10 + iVar7 * 3);
          bVar4 = *(byte *)(iVar7 * 4 + iVar10);
          local_6 = local_10;
          iVar10 = 7;
          iVar11 = local_12;
          do {
            bVar8 = (byte)iVar10;
            cVar9 = (((bVar4 >> (bVar8 & 0x1f) & 1) * '\x02' + (bVar3 >> (bVar8 & 0x1f) & 1)) *
                     '\x02' + (bVar2 >> (bVar8 & 0x1f) & 1)) * '\x02' +
                    (bVar1 >> (bVar8 & 0x1f) & 1);
            if (cVar9 != '\0') {
              FUN_1000_b766(iVar11,local_18,local_6,local_1a,cVar9);
            }
            iVar11 = iVar11 + param_3;
            local_6 = local_6 + param_3;
            iVar10 = iVar10 + -1;
          } while (-1 < iVar10);
          local_10 = local_10 + param_3 * 8;
          local_12 = local_12 + param_3 * 8;
          local_e = local_e + 1;
        } while (local_e < iVar5);
      }
      local_18 = local_18 + param_3;
      local_1a = local_1a + param_3;
      local_1c = local_1c + iVar5;
      local_20 = local_20 + -1;
    } while (local_20 != 0);
  }
  return;
}


