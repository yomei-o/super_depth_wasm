/* 1000:a0d8 */

void __cdecl16near FUN_1000_a0d8(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  undefined2 uVar3;
  
  FUN_1000_a23c();
  switch(*(undefined2 *)0x1dc0) {
  case 1:
    if (*(int *)0x1816 == 1) {
      uVar3 = 0x9f6;
      uVar2 = 0xa1;
    }
    else {
      uVar3 = 0xa00;
      uVar2 = 0x21;
    }
    uVar1 = 0x20;
    break;
  case 2:
    uVar3 = 0xa0a;
    uVar2 = 0x41;
    goto LAB_1000_a12f;
  case 3:
    uVar3 = 0xa17;
    uVar2 = 0x81;
    uVar1 = 0x1a;
    break;
  case 4:
    uVar3 = 0xa26;
    uVar2 = 0xc1;
    goto LAB_1000_a14b;
  case 5:
    uVar3 = 0xa32;
    uVar2 = 0x61;
LAB_1000_a12f:
    uVar1 = 0x1c;
    break;
  case 6:
    if (*(int *)0x1816 == 2) {
      uVar3 = 0xa40;
      uVar2 = 1;
    }
    else {
      uVar3 = 0xa4c;
      uVar2 = 0xe1;
    }
LAB_1000_a14b:
    uVar1 = 0x1e;
    break;
  case 7:
    FUN_1000_beea(10,0x20,0xc5,0xa58);
    FUN_1000_a286();
  default:
    goto switchD_1000_a0ea_default;
  }
  FUN_1000_beea(10,uVar1,uVar2,uVar3);
switchD_1000_a0ea_default:
  *(undefined2 *)0x181c = 0x78;
  return;
}


