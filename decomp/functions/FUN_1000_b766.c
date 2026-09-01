/* 1000:b766 */

undefined2 __cdecl16near
FUN_1000_b766(uint param_1,uint param_2,uint param_3,uint param_4,byte param_5)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  undefined2 in_AX;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  undefined2 unaff_DS;
  
  if ((int)param_2 < 400) {
    if (399 < param_2) {
      param_2 = 0;
    }
    if ((int)param_2 <= (int)param_4) {
      if (399 < param_4) {
        param_4 = 399;
      }
      iVar4 = (param_4 - param_2) + 1;
      if ((int)param_1 < 0x280) {
        if (0x27f < param_1) {
          param_1 = 0;
        }
        if ((int)param_1 <= (int)param_3) {
          if (0x27f < param_3) {
            param_3 = 0x27f;
          }
          out(0x7c,0xc0);
          out(0x7e,-(param_5 & 1));
          out(0x7e,-(param_5 >> 1 & 1));
          out(0x7e,-(param_5 >> 2 & 1));
          out(0x7e,-(param_5 >> 3 & 1));
          puVar7 = (uint *)(param_2 * 0x50 + (param_1 >> 4) * 2);
          uVar2 = *(uint *)((param_1 & 0xf) * 2 + 0xdf2);
          uVar3 = *(uint *)((param_3 & 0xf) * 2 + 0xe12);
          iVar5 = (param_3 >> 4) - (param_1 >> 4);
          if (iVar5 == 0) {
            do {
              *puVar7 = uVar2 & uVar3;
              puVar7 = puVar7 + 0x28;
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
            out(0x7c,0);
            return 0;
          }
          iVar5 = iVar5 + -1;
          do {
            *puVar7 = uVar2;
            for (iVar6 = iVar5; puVar1 = puVar7 + 1, iVar6 != 0; iVar6 = iVar6 + -1) {
              *puVar1 = 0xffff;
              puVar7 = puVar1;
            }
            *puVar1 = uVar3;
            puVar7 = puVar7 + (0x28 - iVar5);
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
          out(0x7c,0);
          return 0;
        }
      }
    }
  }
  return in_AX;
}


