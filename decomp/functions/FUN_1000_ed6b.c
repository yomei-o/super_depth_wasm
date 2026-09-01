/* 1000:ed6b */

void __cdecl16near FUN_1000_ed6b(uint param_1)

{
  undefined4 *puVar1;
  undefined2 extraout_DX;
  undefined2 extraout_DX_00;
  undefined2 uVar2;
  int in_BX;
  uint uVar3;
  code *pcVar4;
  undefined2 unaff_DS;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  
  if (param_1 < 0xffe9) {
    bVar7 = false;
    if (*(int *)0x1264 != 0) {
      pcVar4 = (code *)0xf480;
      while( true ) {
        uVar3 = *(uint *)0x126c;
        uVar5 = (uint)((ulong)*(undefined4 *)0x1266 >> 0x10);
        in_BX = (int)*(undefined4 *)0x1266;
        uVar6 = uVar5;
        do {
          do {
            (*pcVar4)();
            if (!bVar7) {
              uVar2 = extraout_DX;
              if (pcVar4 != (code *)0xf480) goto LAB_1000_edd2;
              goto LAB_1000_edd5;
            }
            puVar1 = (undefined4 *)(in_BX + 0xc);
            in_BX = (int)*puVar1;
            bVar7 = uVar5 < uVar3;
            bVar8 = uVar5 != uVar3;
            uVar5 = (uint)((ulong)*puVar1 >> 0x10);
          } while (bVar8);
          uVar3 = *(uint *)((int)*(undefined4 *)0x1266 + 0x12);
          uVar5 = (uint)((ulong)*(undefined4 *)0x1262 >> 0x10);
          in_BX = (int)*(undefined4 *)0x1262;
          bVar7 = uVar5 < uVar6;
          bVar8 = uVar5 != uVar6;
          uVar6 = uVar5;
        } while (bVar8);
        bVar7 = pcVar4 < (code *)0xf4fc;
        if (pcVar4 == (code *)0xf4fc) break;
        pcVar4 = (code *)0xf4fc;
      }
    }
    FUN_1000_f5fa();
    if (!bVar7) {
LAB_1000_edd2:
      FUN_1000_f480();
      uVar2 = extraout_DX_00;
LAB_1000_edd5:
      *(undefined2 *)0x1268 = uVar2;
      *(int *)0x1266 = in_BX;
    }
  }
  return;
}


