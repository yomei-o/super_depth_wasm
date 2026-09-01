/* 1000:f168 */

void FUN_1000_f168(void)

{
  undefined1 *in_AX;
  undefined2 unaff_DS;
  code *in_stack_00000000;
  
  if ((in_AX <= &stack0x0002) && ((undefined1 *)*(uint *)0x1248 <= &stack0x0002 + -(int)in_AX)) {
                    /* WARNING: Could not recover jumptable at 0x0001f177. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*in_stack_00000000)();
    return;
  }
  FUN_1000_e712();
  return;
}


