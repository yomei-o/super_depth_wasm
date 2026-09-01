/* 1000:de0c */

void __cdecl16near FUN_1000_de0c(void)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int unaff_SI;
  int iVar8;
  int unaff_DI;
  uint *puVar9;
  undefined2 unaff_DS;
  
  if (unaff_SI < 200) {
    if (unaff_SI < 0) {
      unaff_SI = 0;
    }
    if (unaff_SI <= unaff_DI) {
      if (199 < unaff_DI) {
        unaff_DI = 199;
      }
      iVar8 = 1 - (unaff_SI - unaff_DI);
      uVar7 = *(uint *)0x1036;
      if ((int)uVar7 < 0x280) {
        if ((int)uVar7 < 0) {
          uVar7 = 0;
        }
        uVar4 = *(uint *)0x103c;
        if ((int)uVar7 <= (int)uVar4) {
          if (0x27f < (int)uVar4) {
            uVar4 = 0x27f;
          }
          puVar9 = (uint *)(unaff_SI * 0x50 + (uVar7 >> 4) * 2);
          uVar2 = *(uint *)((uVar7 & 0xf) * 2 + 0xdf2);
          uVar3 = *(uint *)((uVar4 & 0xf) * 2 + 0xe12);
          iVar5 = (uVar4 >> 4) - (uVar7 >> 4);
          if (iVar5 == 0) {
            do {
              *puVar9 = uVar2 & uVar3;
              puVar9 = puVar9 + 0x28;
              iVar8 = iVar8 + -1;
            } while (iVar8 != 0);
            return;
          }
          iVar5 = iVar5 + -1;
          do {
            *puVar9 = uVar2;
            for (iVar6 = iVar5; puVar1 = puVar9 + 1, iVar6 != 0; iVar6 = iVar6 + -1) {
              *puVar1 = 0xffff;
              puVar9 = puVar1;
            }
            *puVar1 = uVar3;
            puVar9 = puVar9 + (0x28 - iVar5);
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
          return;
        }
      }
    }
  }
  return;
}


