/* 1000:e266 */

int __cdecl16near FUN_1000_e266(int param_1,int param_2,undefined2 param_3)

{
  char cVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  iVar2 = 0;
  do {
    if (param_2 + -1 <= iVar2) {
LAB_1000_e2ab:
      *(undefined1 *)(param_1 + iVar2) = 0;
      return param_1;
    }
    cVar1 = FUN_1000_e228(param_3);
    if (cVar1 == -1) {
      if (iVar2 == 0) {
        return 0;
      }
      goto LAB_1000_e2ab;
    }
    if (cVar1 == '\r') {
      *(undefined1 *)(param_1 + iVar2) = 10;
      iVar2 = iVar2 + 1;
      FUN_1000_e228(param_3);
      goto LAB_1000_e2ab;
    }
    *(char *)(param_1 + iVar2) = cVar1;
    iVar2 = iVar2 + 1;
  } while( true );
}


