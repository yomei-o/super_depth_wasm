/* 1000:c8e0 */

int __cdecl16near FUN_1000_c8e0(undefined2 param_1,int param_2)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  undefined2 unaff_DS;
  bool bVar9;
  undefined2 local_830 [1027];
  undefined2 local_2a;
  undefined1 local_28 [6];
  uint local_22;
  uint local_20;
  uint local_1e;
  undefined2 local_1c;
  uint local_1a;
  uint local_18;
  uint local_16;
  uint local_14;
  byte *local_12;
  uint local_10;
  byte local_e;
  char local_d;
  undefined2 local_c;
  byte *local_a;
  byte *local_8;
  byte *local_6;
  undefined2 local_4;
  
  iVar4 = FUN_1000_e1ee(param_1,local_830);
  if (iVar4 != -1) {
    FUN_1000_e266(local_28,6,local_830);
    iVar4 = FUN_1000_ede8(local_28,0xe72,4);
    if (iVar4 == 0) {
      local_e = FUN_1000_e228(local_830);
      FUN_1000_e228(local_830);
      FUN_1000_e228(local_830);
      uVar5 = FUN_1000_e2b8(local_830);
      local_1a = FUN_1000_e2b8(local_830);
      local_20 = FUN_1000_e2b8(local_830);
      local_18 = FUN_1000_e2b8(local_830);
      FUN_1000_e1ae(local_830,0x10);
      if ((local_1a == uVar5) && ((uVar5 & 7) == 0)) {
        local_a = (byte *)(1 << ((local_e & 0x7f) + 1 & 0x1f));
        local_8 = (byte *)((int)local_a >> 0xf);
        if ((local_e & 0x80) != 0) {
          local_4 = (byte *)0x0;
          local_6 = (byte *)0x0;
          uVar6 = uVar5;
          if (((int)local_a < 0) || (local_a != (byte *)0x0)) {
            do {
              local_14 = uVar6;
              cVar1 = FUN_1000_e228(local_830);
              local_c._1_1_ = cVar1 >> 4;
              cVar1 = FUN_1000_e228(local_830);
              local_c = (byte *)CONCAT11(local_c._1_1_,cVar1 >> 4);
              local_d = FUN_1000_e228(local_830);
              local_d = local_d >> 4;
              if (param_2 == 1) {
                out(0xa8,local_6._0_1_);
                out(0xaa,local_d);
                out(0xac,(undefined1)local_c);
                out(0xae,local_c._1_1_);
              }
              bVar9 = (byte *)0xfffe < local_6;
              local_6 = local_6 + 1;
              local_4 = local_4 + bVar9;
              uVar6 = local_14;
            } while ((local_4 < local_8) || ((local_4 <= local_8 && (local_6 < local_a))));
          }
        }
        uVar6 = (uint)local_e;
        local_22 = (uVar6 + 1) * (uVar5 >> 3) * local_1a;
        local_12 = (byte *)thunk_FUN_1000_f457(local_22);
        if (local_12 != (byte *)0x0) {
          local_1e = local_20;
          uVar7 = local_22;
          pbVar8 = local_12;
          local_14 = uVar5;
          if (local_20 <= local_18) {
            do {
              for (; uVar7 != 0; uVar7 = uVar7 - 1) {
                *pbVar8 = 0;
                pbVar8 = pbVar8 + 1;
              }
              local_c = local_12;
              uVar5 = local_22 / (uVar6 + 1);
              local_8 = local_12 + uVar5;
              local_6 = local_8 + uVar5;
              local_a = local_6 + uVar5;
              local_2a = 0;
              if (local_1a != 0) {
                local_16 = local_1a;
                do {
                  local_1c = 0;
                  if ((local_14 & 0xfff8) != 0) {
                    local_10 = local_14 >> 3;
                    pbVar8 = local_c;
                    do {
                      uVar5 = 0x80;
                      local_c = pbVar8;
                      do {
                        bVar2 = FUN_1000_e228(local_830);
                        local_4 = (byte *)CONCAT11(bVar2,(undefined1)local_4);
                        bVar3 = (byte)uVar5;
                        if (((bVar2 & 0x80) != 0) && (2 < local_e)) {
                          *local_a = *local_a | bVar3;
                        }
                        if ((bVar2 & 0x40) != 0) {
                          *local_6 = *local_6 | bVar3;
                        }
                        if ((bVar2 & 0x20) != 0) {
                          *local_8 = *local_8 | bVar3;
                        }
                        if ((bVar2 & 0x10) != 0) {
                          *pbVar8 = *pbVar8 | bVar3;
                        }
                        bVar3 = (byte)(uVar5 >> 1);
                        if (((bVar2 & 8) != 0) && (2 < local_e)) {
                          *local_a = *local_a | bVar3;
                        }
                        if ((bVar2 & 4) != 0) {
                          *local_6 = *local_6 | bVar3;
                        }
                        if ((bVar2 & 2) != 0) {
                          *local_8 = *local_8 | bVar3;
                        }
                        if ((bVar2 & 1) != 0) {
                          *pbVar8 = *pbVar8 | bVar3;
                        }
                        uVar5 = uVar5 >> 2;
                      } while (uVar5 != 0);
                      pbVar8 = pbVar8 + 1;
                      local_8 = local_8 + 1;
                      local_6 = local_6 + 1;
                      local_a = local_a + 1;
                      local_10 = local_10 - 1;
                    } while (local_10 != 0);
                    local_10 = 0;
                    local_c = pbVar8;
                  }
                  local_16 = local_16 - 1;
                } while (local_16 != 0);
              }
              iVar4 = FUN_1000_cbe6(local_14 >> 3,local_12);
              if (iVar4 == -1) {
                thunk_FUN_1000_f436(local_12);
                goto LAB_1000_cbd3;
              }
              local_1e = local_1e + 1;
              uVar7 = local_22;
              pbVar8 = local_12;
            } while (local_1e <= local_18);
          }
          thunk_FUN_1000_f436(local_12);
          FUN_1000_e8d2(local_830[0]);
          return (local_18 - local_20) + 1;
        }
      }
    }
LAB_1000_cbd3:
    FUN_1000_e8d2(local_830[0]);
  }
  return -1;
}


