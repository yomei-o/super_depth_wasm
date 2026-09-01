/* 1000:95a4 */

void __cdecl16near FUN_1000_95a4(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined2 unaff_DS;
  undefined2 uVar8;
  uint local_e;
  int local_c;
  int local_a;
  int local_8;
  int local_6;
  
  FUN_1000_a0c0();
  if (*(int *)0x1818 < 7) {
    uVar4 = 0xb;
  }
  else if (*(int *)0x1818 < 0xb) {
    uVar4 = 0xc;
  }
  else {
    uVar4 = 0xd;
  }
  FUN_1000_cf6a(uVar4);
  FUN_1000_cf44();
  FUN_1000_d03e();
  FUN_1000_cf08();
  FUN_1000_a23c();
  if (10 < *(int *)0x1818) {
    FUN_1000_cf6a(0xe);
    FUN_1000_cf44();
    FUN_1000_d03e();
    local_e = 0xfefc;
    iVar6 = *(int *)0x1dac;
    iVar1 = *(int *)0x1d46;
    iVar2 = *(int *)0x1d42;
    *(undefined2 *)0xdd0 = 0;
    local_8 = 1;
    do {
      FUN_1000_ba8c(local_8,0,(local_8 + 1) * 2,local_8 << 1);
      local_8 = local_8 + 1;
    } while (local_8 < 6);
    FUN_1000_ba8c(6,0,0xe,0xe);
    FUN_1000_ba8c(7,0,0xf,0xf);
    for (local_6 = 0; local_6 < 200; local_6 = local_6 + 1) {
      *(byte *)0x1844 = *(byte *)0x1844 ^ 1;
      if (*(int *)0x1f8a == 400) {
        iVar5 = 0;
      }
      else if (-*(int *)0x1f8a == -400 || -*(int *)0x1f8a + 400 < 0) {
        iVar5 = -1;
      }
      else {
        iVar5 = 1;
      }
      *(int *)0x1f8a = *(int *)0x1f8a + iVar5 * 2;
      if (*(int *)0x1fca != 0xa4) {
        if (-*(int *)0x1fca == -0xa4 || -*(int *)0x1fca + 0xa4 < 0) {
          iVar5 = -1;
        }
        else {
          iVar5 = 1;
        }
        *(int *)0x1fca = *(int *)0x1fca + iVar5;
      }
      local_e = local_e + 2;
      local_8 = 0;
      do {
        iVar5 = local_8 * 2;
        *(int *)(iVar5 + param_1) = *(int *)(iVar5 + param_1) + *(int *)(iVar5 + param_3) * 2;
        if (0x27f < *(int *)(iVar5 + param_1)) {
          *(int *)(iVar5 + param_1) = *(int *)(iVar5 + param_1) + -0x280;
        }
        iVar5 = local_8 * 2;
        FUN_1000_b50e(*(undefined2 *)(iVar5 + param_1),*(undefined2 *)(iVar5 + param_2),
                      *(undefined2 *)(iVar5 + param_4));
        local_8 = local_8 + 1;
      } while (local_8 < 0x46);
      FUN_1000_bfd6(*(undefined2 *)0x1f8a,*(undefined2 *)0x1fca,0);
      FUN_1000_bfd6(*(int *)0x1f8a + 0x20,*(undefined2 *)0x1fca,1);
      local_c = 0;
      do {
        if (-local_e == local_c * 0x20 || local_c * -0x20 < (int)local_e) {
          local_a = 0;
          do {
            FUN_1000_bfd6(local_c * 0x20 + local_e,local_a * 0x20 + 0x70,
                          local_a * 8 + local_c + iVar6 + iVar1 + iVar2 + 0x1c);
            local_a = local_a + 1;
          } while (local_a < 4);
        }
        local_c = local_c + 1;
      } while (local_c < 4);
      FUN_1000_8292();
      FUN_1000_890a(0,7,0xf);
      uVar7 = (int)local_e >> 0xf;
      FUN_1000_b5b0((((int)((local_e ^ uVar7) - uVar7) >> 3 ^ uVar7) - uVar7) + 0x120,0x178,7,7);
      do {
        uVar7 = FUN_1000_bb38();
      } while (uVar7 < 3);
      *(undefined2 *)0xdd0 = 0;
      out(0xa4,(byte)*(undefined2 *)0x1844);
      out(0xa6,(byte)*(undefined2 *)0x1844 ^ 1);
      FUN_1000_b4ee();
    }
    FUN_1000_beea(4,0x18,0x41,0x936);
    FUN_1000_beea(0x12,0xc,0xa1,0x947);
    FUN_1000_9fbc(300);
    out(0xa6,(char)*(undefined2 *)0x1844);
    FUN_1000_84ae();
    *(undefined2 *)0x1844 = 0;
    *(undefined1 *)0x2ba = 0;
    FUN_1000_c762();
    FUN_1000_8493();
    FUN_1000_82c8();
    FUN_1000_beea(2,0x24,0xe1,0x964);
    for (local_8 = 0; local_8 < 0x12; local_8 = local_8 + 1) {
      out(0xa6,0);
      out(0xa4,0);
      switch(*(undefined2 *)(local_8 * 0x14 + 0x1e24)) {
      case 1:
        FUN_1000_c788(0x130,0xb8,2,*(int *)0x1d42 + 0x38);
        out(0xa6,1);
        iVar6 = *(int *)0x1d42 + 0x39;
        uVar8 = 0xb8;
        uVar4 = 0x130;
        goto LAB_1000_9874;
      case 2:
        iVar6 = *(int *)(local_8 * 0x14 + 0x1e22);
        goto LAB_1000_988a;
      case 3:
        FUN_1000_c788(0x120,0xa8,2,*(undefined2 *)(local_8 * 0x14 + 0x1e22));
        out(0xa6,1);
        iVar6 = *(int *)(local_8 * 0x14 + 0x1e22) + 1;
LAB_1000_988a:
        uVar8 = 0xa8;
        uVar4 = 0x120;
        goto LAB_1000_9874;
      case 4:
        FUN_1000_c788(0x100,0xa8,2,*(undefined2 *)(local_8 * 0x14 + 0x1e22));
        iVar6 = *(int *)(local_8 * 0x14 + 0x1e22) + 1;
        goto LAB_1000_98eb;
      case 5:
        iVar6 = local_8 * 0x14;
        FUN_1000_c788(0x100,0xa8,2,*(undefined2 *)(iVar6 + 0x1e22));
        FUN_1000_c788(0x140,0xa8,2,*(int *)(iVar6 + 0x1e22) + 1);
        out(0xa6,1);
        FUN_1000_c788(0x100,0xa8,2,*(int *)(iVar6 + 0x1e22) + 2);
        iVar6 = *(int *)(iVar6 + 0x1e22) + 3;
LAB_1000_98eb:
        uVar8 = 0xa8;
        uVar4 = 0x140;
        goto LAB_1000_9874;
      case 7:
        for (local_a = 0; local_a < 4; local_a = local_a + 1) {
          out(0xa6,0);
          iVar6 = (local_a + 8) * 0x20;
          FUN_1000_c788(iVar6,0xa8,2,local_a + *(int *)0x1d42 + 0x4c);
          FUN_1000_c788(iVar6,200,2,local_a + *(int *)0x1d42 + 0x44);
          out(0xa6,1);
          FUN_1000_c788(iVar6,0xa8,2,local_a + *(int *)0x1d42 + 0x50);
          FUN_1000_c788(iVar6,200,2,local_a + *(int *)0x1d42 + 0x44);
        }
        break;
      case 8:
        for (local_a = 0; local_a < 4; local_a = local_a + 1) {
          for (local_c = 0; local_c < 3; local_c = local_c + 1) {
            FUN_1000_c788((local_a + 3) * 0x40,local_c * 0x40 + 0x68,2,
                          local_c * 8 + local_a + *(int *)0x1dac + *(int *)0x1d46 + *(int *)0x1d42);
          }
        }
        break;
      case 10:
        for (local_a = 3; local_a < 0xf; local_a = local_a + 1) {
          FUN_1000_c788(local_a * 0x1e + 0x5f,
                        -((*(char *)(local_a * 0x19 + 0xc21) * 0x3c + 1 >> 7) + -0x78),2,
                        ((uint)(0xb < local_a) - (uint)(local_a < 9)) + (uint)(local_a == 3) +
                        *(int *)0x1dac + *(int *)0x1d46 + *(int *)0x1d42 + 5);
        }
        FUN_1000_c788(0x50,0x1e,2,*(int *)0x1dac + *(int *)0x1d46 + *(int *)0x1d42 + 0xc);
        FUN_1000_c788(0x90,0x1e,2,*(int *)0x1dac + *(int *)0x1d46 + *(int *)0x1d42 + 0xd);
        FUN_1000_c788(0x50,0x5e,2,*(int *)0x1dac + *(int *)0x1d46 + *(int *)0x1d42 + 0x14);
        iVar6 = *(int *)0x1dac + *(int *)0x1d46 + *(int *)0x1d42 + 0x15;
        uVar8 = 0x5e;
        uVar4 = 0x90;
LAB_1000_9874:
        FUN_1000_c788(uVar4,uVar8,2,iVar6);
        break;
      case 0xc:
        for (local_a = 0; local_a < 4; local_a = local_a + 1) {
          for (local_c = 0; local_c < 4; local_c = local_c + 1) {
            FUN_1000_c788((local_a + 3) * 0x40,local_c * 0x40 + 0x38,2,
                          (local_c + 3) * 8 + local_a + *(int *)0x1dac + *(int *)0x1d46 +
                          *(int *)0x1d42);
          }
        }
      }
      FUN_1000_82d7(0x2b8);
      FUN_1000_beea(0x14,0x18,0xe1,local_8 * 0x14 + 0x1e26);
      for (local_a = 0; local_a < 0x19; local_a = local_a + 1) {
        *(byte *)0x1844 = *(byte *)0x1844 ^ 1;
        if ((*(byte *)(local_8 * 0x14 + 0x1e24) & 1) == 1) {
          out(0xa4,(char)*(undefined2 *)0x1844);
        }
        for (local_c = 0; local_c < 5; local_c = local_c + 1) {
          do {
            bVar3 = in(0x60);
          } while ((bVar3 & 0x20) != 0);
          do {
            bVar3 = in(0x60);
          } while ((bVar3 & 0x20) == 0);
        }
        FUN_1000_ba8c(2,*(int *)0x1844 * 2 + 0xd,0,0);
        FUN_1000_ba8c(6,*(int *)0x1844 + 0xc,*(int *)0x1844 + 9,0);
        FUN_1000_ba8c(4,0,0xf,*(int *)0x1844 << 3);
      }
      FUN_1000_beea(0x14,0x18,0xe1,0x969);
      FUN_1000_8347(0x2b8);
      FUN_1000_82c8();
    }
    FUN_1000_c762();
    local_8 = 8;
    do {
      FUN_1000_beea(local_8,4,0xe1,((local_8 + -8) / 3) * 0x25 + 0x5d0);
      local_8 = local_8 + 3;
    } while (local_8 < 0x17);
    FUN_1000_beea(1,4,0xc1,0x689);
    FUN_1000_beea(4,4,0x41,0x6ae);
    FUN_1000_beea(0x18,4,0xc1,0x6d3);
    FUN_1000_9fbc(200);
    FUN_1000_cf08();
    FUN_1000_9fbc(0x32);
    FUN_1000_c762();
    *(undefined1 *)0x2ba = 7;
  }
  return;
}


