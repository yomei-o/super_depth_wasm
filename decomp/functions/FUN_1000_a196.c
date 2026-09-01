/* 1000:a196 */

void __cdecl16near FUN_1000_a196(void)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  char local_a [4];
  char local_6 [4];
  
  FUN_1000_ee2a(*(undefined2 *)0x1818,local_6,10);
  pcVar5 = (char *)0xa62;
  pcVar6 = local_a;
  uVar3 = 0xffff;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar1 = pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (*pcVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar5 = pcVar5 + -uVar3;
  for (uVar4 = uVar3 >> 1; uVar4 != 0; uVar4 = uVar4 - 1) {
    pcVar2 = pcVar6;
    pcVar6 = pcVar6 + 2;
    pcVar1 = pcVar5;
    pcVar5 = pcVar5 + 2;
    *(undefined2 *)pcVar2 = *(undefined2 *)pcVar1;
  }
  for (uVar3 = (uint)((uVar3 & 1) != 0); uVar3 != 0; uVar3 = uVar3 - 1) {
    pcVar2 = pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar1 = pcVar5;
    pcVar5 = pcVar5 + 1;
    *pcVar2 = *pcVar1;
  }
  pcVar6 = local_6;
  uVar3 = 0xffff;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar1 = pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (*pcVar1 != '\0');
  if (1 < ~uVar3 - 1) {
    local_a[0] = local_6[0];
  }
  FUN_1000_beea(10,0x20,0x41,0xa65);
  FUN_1000_beea(10,0x2c,0xe1,local_a);
  *(undefined2 *)0x181c = 0x78;
  return;
}


