/* 1000:8184 */

void __cdecl16near FUN_1000_8184(void)

{
  int iVar1;
  undefined2 unaff_DS;
  
  FUN_1000_ba8c(2,*(int *)0x1844 * 2 + 0xd,0,0);
  FUN_1000_ba8c(3,*(int *)0x1844 * 2 + 0xd,0,*(int *)0x193c + 8);
  FUN_1000_ba8c(4,0,*(int *)0x1844 * 4 + 0xb,*(int *)0x1844 << 3);
  FUN_1000_ba8c(6,*(int *)0x184a + 0xc,*(int *)0x184a + 9,0);
  *(int *)0x1846 = *(int *)0x1846 + 1;
  if (2 < *(int *)0x1846) {
    *(undefined2 *)0x1846 = 0;
  }
  *(int *)0x184a = *(int *)0x184a + 1;
  if (3 < *(int *)0x184a) {
    *(undefined2 *)0x184a = 0;
  }
  *(int *)0x193c = *(int *)0x193c + 1;
  if (7 < *(int *)0x193c) {
    *(undefined2 *)0x193c = 0;
  }
  if (0 < *(int *)0x181c) {
    FUN_1000_a22a();
  }
  iVar1 = FUN_1000_bf8e();
  while (iVar1 != 0) {
    FUN_1000_bf98();
    iVar1 = FUN_1000_bf8e();
  }
  return;
}


