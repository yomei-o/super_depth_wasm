/* 1000:e2b8 */

undefined2 __cdecl16near FUN_1000_e2b8(undefined2 param_1)

{
  char cVar1;
  char cVar2;
  undefined2 local_4;
  
  cVar1 = FUN_1000_e228(param_1);
  if (cVar1 != -1) {
    cVar2 = FUN_1000_e228(param_1);
    local_4 = CONCAT11(cVar2,cVar1);
    if (cVar2 != -1) {
      return local_4;
    }
  }
  return 0xffff;
}


