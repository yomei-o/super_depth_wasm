/* 1000:f83a */

void __cdecl16near FUN_1000_f83a(void)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined2 unaff_DS;
  undefined4 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  
  pcVar2 = (char *)FUN_1000_fb88(0x1284);
  if ((pcVar2 != (char *)0x0) && (*pcVar2 != '\0')) {
    FUN_1000_fb60(*(undefined2 *)0x1296,pcVar2,3);
    uVar6 = 0;
    uVar5 = 0xe10;
    pcVar2 = pcVar2 + 3;
    uVar4 = thunk_FUN_1000_f63e(pcVar2,0xe10,0);
    uVar4 = FUN_1000_f0b0(uVar4,uVar5,uVar6);
    *(undefined2 *)0x1290 = (int)uVar4;
    *(undefined2 *)0x1292 = (int)((ulong)uVar4 >> 0x10);
    iVar3 = 0;
    while (pcVar2[iVar3] != '\0') {
      cVar1 = pcVar2[iVar3];
      if ((((*(byte *)(cVar1 + 0x12d7) & 4) == 0) && (cVar1 != '-')) ||
         (iVar3 = iVar3 + 1, 2 < iVar3)) break;
    }
    if (pcVar2[iVar3] == '\0') {
      *(undefined1 *)*(undefined2 *)0x1298 = 0;
    }
    else {
      FUN_1000_fb60(*(undefined2 *)0x1298,pcVar2 + iVar3,3);
    }
    *(uint *)0x1294 = (uint)(*(char *)*(undefined2 *)0x1298 != '\0');
  }
  return;
}


