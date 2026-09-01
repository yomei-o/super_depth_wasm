/* 1000:e8d2 */

void FUN_1000_e8d2(uint param_1)

{
  code *pcVar1;
  undefined2 unaff_DS;
  bool bVar2;
  
  bVar2 = param_1 < *(uint *)0x1215;
  if (bVar2) {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    if (!bVar2) {
      *(undefined1 *)(param_1 + 0x1217) = 0;
    }
  }
  FUN_1000_f3ce();
  return;
}


