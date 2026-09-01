/* 1000:8960 */

void __cdecl16near FUN_1000_8960(void)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  undefined2 *puVar5;
  char *pcVar6;
  char *pcVar7;
  undefined2 unaff_DS;
  char *local_6;
  int local_4;
  
  *(undefined1 *)0x5a5 = 0x14;
  *(undefined1 *)0x5a7 = 0x22;
  *(undefined1 *)0x5ce = 0x1d;
  *(undefined1 *)0x5cc = 0x1c;
  *(undefined1 *)0x5ca = 0x1b;
  *(undefined2 *)0x184c = 1;
  local_6 = (char *)0x740;
  puVar5 = (undefined2 *)0x1e22;
  *(undefined2 *)0x1844 = 0;
  local_4 = 0;
  do {
    *puVar5 = *(undefined2 *)(local_4 + 0x71c);
    puVar5[1] = *(undefined2 *)(local_4 + 0x6f8);
    pcVar7 = (char *)(puVar5 + 2);
    uVar3 = 0xffff;
    pcVar6 = local_6;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar1 = pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (*pcVar1 != '\0');
    uVar3 = ~uVar3;
    pcVar6 = pcVar6 + -uVar3;
    for (uVar4 = uVar3 >> 1; uVar4 != 0; uVar4 = uVar4 - 1) {
      pcVar2 = pcVar7;
      pcVar7 = pcVar7 + 2;
      pcVar1 = pcVar6;
      pcVar6 = pcVar6 + 2;
      *(undefined2 *)pcVar2 = *(undefined2 *)pcVar1;
    }
    for (uVar3 = (uint)((uVar3 & 1) != 0); uVar3 != 0; uVar3 = uVar3 - 1) {
      pcVar2 = pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar1 = pcVar6;
      pcVar6 = pcVar6 + 1;
      *pcVar2 = *pcVar1;
    }
    local_6 = local_6 + 0x10;
    puVar5 = puVar5 + 10;
    local_4 = local_4 + 2;
    if (0x23 < local_4) {
      *(undefined2 *)0x2150 = 1;
      *(undefined2 *)0x212e = 3;
      *(undefined2 *)0x1820 = 5;
      *(undefined2 *)0x17f4 = 9;
      *(undefined2 *)0x1d4a = 4;
      *(undefined2 *)0x1d48 = 4;
      *(undefined2 *)0x212c = 0;
      *(undefined2 *)0x1848 = 0;
      *(undefined2 *)0x181a = 0;
      *(undefined2 *)0x181e = 0;
      *(undefined2 *)0x20c6 = 0;
      return;
    }
  } while( true );
}


