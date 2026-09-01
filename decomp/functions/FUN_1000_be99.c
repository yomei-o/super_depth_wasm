/* 1000:be99 */

void __cdecl16near FUN_1000_be99(int param_1,int param_2,undefined2 param_3,uint param_4)

{
  undefined2 *puVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  undefined2 *puVar5;
  
  puVar5 = (undefined2 *)((param_1 * 0x50 + param_2) * 2);
  cVar2 = (char)(param_4 / 10);
  cVar3 = (char)(param_4 % 10);
  *puVar5 = CONCAT11(cVar2 + '0',0x56);
  puVar5[1] = CONCAT11(cVar2 + -0x50,0x56);
  puVar5[2] = CONCAT11(cVar3 + '0',0x56);
  puVar5[3] = CONCAT11(cVar3 + -0x50,0x56);
  puVar5 = puVar5 + 0x1000;
  for (iVar4 = 4; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar1 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar1 = param_3;
  }
  return;
}


