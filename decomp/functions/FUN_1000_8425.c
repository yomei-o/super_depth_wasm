/* 1000:8425 */

void __cdecl16near FUN_1000_8425(int param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  undefined2 unaff_DS;
  int local_c;
  int local_a;
  int local_6;
  
  iVar3 = 0xf;
  do {
    FUN_1000_9fbc(1);
    pcVar1 = (char *)(param_1 + 2);
    for (local_6 = 0; local_6 < 0x10; local_6 = local_6 + 1) {
      local_c = iVar3;
      if (iVar3 < *pcVar1) {
        local_c = (int)*pcVar1;
      }
      iVar2 = iVar3;
      if (iVar3 < pcVar1[-2]) {
        iVar2 = (int)pcVar1[-2];
      }
      local_a = iVar3;
      if (iVar3 < pcVar1[-1]) {
        local_a = (int)pcVar1[-1];
      }
      FUN_1000_ba8c(local_6,iVar2,local_a,local_c);
      pcVar1 = pcVar1 + 3;
    }
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  return;
}


