/* 1000:b854 */

undefined2 __cdecl16near
FUN_1000_b854(uint param_1,uint param_2,uint param_3,uint param_4,byte param_5)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 in_AX;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined2 *puVar7;
  
  if ((int)param_2 < 0) {
    param_2 = 0;
  }
  if ((param_2 < 400) && ((int)param_2 <= (int)param_4)) {
    if (399 < param_4) {
      param_4 = 399;
    }
    iVar4 = (param_4 - param_2) + 1;
    if ((int)param_1 < 0) {
      param_1 = 0;
    }
    if ((param_1 < 0x50) && ((int)param_1 <= (int)param_3)) {
      if (0x4f < param_3) {
        param_3 = 0x4f;
      }
      out(0x7c,0x80);
      out(0x7e,-(param_5 & 1));
      out(0x7e,-(param_5 >> 1 & 1));
      out(0x7e,-(param_5 >> 2 & 1));
      out(0x7e,-(param_5 >> 3 & 1));
      puVar7 = (undefined2 *)(param_2 * 0x50 + param_1);
      uVar5 = (param_3 - param_1) + 1;
      iVar3 = -uVar5;
      if ((uVar5 & 1) == 0) {
        uVar5 = uVar5 >> 1;
        uVar6 = uVar5;
        if (((uint)puVar7 & 1) == 0) {
          do {
            for (; uVar6 != 0; uVar6 = uVar6 - 1) {
              puVar2 = puVar7;
              puVar7 = puVar7 + 1;
              *puVar2 = 0xffff;
            }
            puVar7 = (undefined2 *)((int)puVar7 + iVar3 + 0x50);
            iVar4 = iVar4 + -1;
            uVar6 = uVar5;
          } while (iVar4 != 0);
        }
        else {
          do {
            puVar1 = (undefined2 *)((int)puVar7 + 1);
            *(undefined1 *)puVar7 = 0xff;
            uVar6 = uVar5;
            while (uVar6 = uVar6 - 1, uVar6 != 0) {
              puVar2 = puVar1;
              puVar1 = puVar1 + 1;
              *puVar2 = 0xffff;
            }
            *(undefined1 *)puVar1 = 0xff;
            puVar7 = (undefined2 *)((int)puVar1 + iVar3 + 0x51);
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
      }
      else {
        uVar5 = uVar5 >> 1;
        uVar6 = uVar5;
        if (((uint)puVar7 & 1) == 0) {
          do {
            for (; uVar6 != 0; uVar6 = uVar6 - 1) {
              puVar2 = puVar7;
              puVar7 = puVar7 + 1;
              *puVar2 = 0xffff;
            }
            *(undefined1 *)puVar7 = 0xff;
            puVar7 = (undefined2 *)((int)puVar7 + iVar3 + 0x51);
            iVar4 = iVar4 + -1;
            uVar6 = uVar5;
          } while (iVar4 != 0);
        }
        else {
          do {
            puVar1 = (undefined2 *)((int)puVar7 + 1);
            *(undefined1 *)puVar7 = 0xff;
            for (uVar6 = uVar5; uVar6 != 0; uVar6 = uVar6 - 1) {
              puVar2 = puVar1;
              puVar1 = puVar1 + 1;
              *puVar2 = 0xffff;
            }
            puVar7 = (undefined2 *)((int)puVar1 + iVar3 + 0x50);
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
      }
      out(0x7c,0);
      return 0;
    }
  }
  return in_AX;
}


