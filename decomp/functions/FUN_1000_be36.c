/* 1000:be36 */

void __cdecl16near FUN_1000_be36(int param_1,int param_2,undefined2 param_3,uint param_4)

{
  undefined2 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined2 *puVar4;
  int iVar5;
  char cVar6;
  undefined2 *puVar7;
  
  iVar5 = 4;
  puVar4 = (undefined2 *)((param_1 * 0x50 + param_2 + 8) * 2);
  do {
    puVar7 = puVar4;
    uVar2 = (ulong)param_4;
    uVar3 = uVar2 / 10;
    param_4 = (uint)uVar3;
    cVar6 = (char)(uVar2 % 10);
    *puVar7 = CONCAT11(cVar6 + '0',0x56);
    puVar7[1] = CONCAT11(cVar6 + -0x50,0x56);
    iVar5 = iVar5 + -1;
    puVar4 = puVar7 + -2;
  } while (iVar5 != 0);
  cVar6 = (char)uVar3;
  puVar7[-2] = CONCAT11(cVar6 + '0',0x56);
  puVar7[-1] = CONCAT11(cVar6 + -0x50,0x56);
  puVar7 = puVar7 + 0xffe;
  for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
    puVar1 = puVar7;
    puVar7 = puVar7 + 1;
    *puVar1 = param_3;
  }
  return;
}


