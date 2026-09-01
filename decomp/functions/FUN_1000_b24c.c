/* 1000:b24c */

void __cdecl16near FUN_1000_b24c(void)

{
  int iVar1;
  int in_CX;
  byte in_BH;
  int unaff_BP;
  int unaff_SI;
  int unaff_DI;
  
  if ((in_BH & 8) == 0) {
    if ((in_BH & 4) == 0) {
      if ((in_BH & 1) == 0) {
        if ((in_BH & 2) == 0) {
          return;
        }
        iVar1 = 0x27f;
      }
      else {
        iVar1 = 0;
      }
      if (-1 < unaff_DI +
               (int)(((long)(iVar1 - unaff_SI) * (long)(unaff_BP - unaff_DI)) /
                    (long)-(unaff_SI - in_CX))) {
        return;
      }
      return;
    }
    iVar1 = 399;
  }
  else {
    iVar1 = 0;
  }
  iVar1 = unaff_SI +
          (int)(((long)(iVar1 - unaff_DI) * (long)(in_CX - unaff_SI)) / (long)-(unaff_DI - unaff_BP)
               );
  if (iVar1 < 0) {
    return;
  }
  if (iVar1 < 0x280) {
    return;
  }
  return;
}


