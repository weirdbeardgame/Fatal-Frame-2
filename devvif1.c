// STATUS: NOT STARTED

#include "devvif1.h"

sceDevVif1Reset() {
  REG_VIF1_FBRST = 1;
  REG_VIF1_ERR = 6;
  return;
}

sceDevVif1Pause() {
  long lVar1;
  undefined4 uVar2;
  
  lVar1 = sceDevVif1Sync();
  if ((lVar1 == 0) || (lVar1 == 1)) {
    uVar2 = 0;
  }
  else {
    if (param_1 == 0) {
      uVar2 = 2;
    }
    else {
      if (param_1 != 1) {
        return 1;
      }
      uVar2 = 4;
    }
    REG_VIF1_FBRST = uVar2;
    uVar2 = 1;
  }
  return uVar2;
}

sceDevVif1Continue() {
  long lVar1;
  
  lVar1 = sceDevVif1Sync();
  if (lVar1 == 1) {
    REG_VIF1_FBRST = 8;
  }
  return lVar1 == 1;
}

sceDevVif1PutErr() {
  REG_VIF1_ERR = param_1 | param_2 << 1 | param_3 << 2;
  return;
}

sceDevVif1GetErr() {
  undefined4 uVar1;
  
  uVar1 = REG_VIF1_ERR;
  return uVar1;
}

static sceDevVif1Sync() {
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = REG_VIF1_STAT;
  if ((uVar1 & 3) == 0) {
    return 0;
  }
  if ((uVar1 & 0x700) != 0) {
    return 1;
  }
  if ((uVar1 & 0xc) != 0) {
    return 2;
  }
  uVar2 = 3;
  if ((uVar1 & 0x3000) == 0) {
    uVar2 = 4;
  }
  return uVar2;
}

sceDevVif1GetCnd() {
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ulong uVar8;
  
  uVar3 = REG_VIF1_CYCLE;
  uVar8 = sceDevVif1Sync();
  if (uVar8 < 2) {
    uVar1 = REG_VIF1_ROW0;
    *param_1 = uVar1;
    uVar1 = REG_VIF1_ROW1;
    param_1[1] = uVar1;
    uVar1 = REG_VIF1_ROW2;
    param_1[2] = uVar1;
    uVar1 = REG_VIF1_ROW3;
    param_1[3] = uVar1;
    uVar1 = REG_VIF1_COL0;
    param_1[4] = uVar1;
    uVar1 = REG_VIF1_COL1;
    param_1[5] = uVar1;
    uVar1 = REG_VIF1_COL2;
    param_1[6] = uVar1;
    uVar1 = REG_VIF1_COL3;
    param_1[7] = uVar1;
    uVar1 = REG_VIF1_MASK;
    param_1[8] = uVar1;
    uVar1 = REG_VIF1_CODE;
    param_1[9] = uVar1;
    uVar1 = REG_VIF1_STAT;
    param_1[10] = uVar1;
    uVar6 = REG_VIF1_ITOP;
    uVar1 = REG_VIF1_ITOPS;
    uVar2 = REG_VIF1_BASE;
    uVar4 = REG_VIF1_OFST;
    uVar7 = REG_VIF1_TOP;
    uVar5 = REG_VIF1_TOPS;
    *(short *)(param_1 + 0xb) = (short)uVar6;
    *(short *)((int)param_1 + 0x2e) = (short)uVar1;
    *(short *)(param_1 + 0xc) = (short)uVar2;
    *(short *)((int)param_1 + 0x32) = (short)uVar4;
    *(short *)(param_1 + 0xd) = (short)uVar7;
    *(short *)((int)param_1 + 0x36) = (short)uVar5;
    uVar2 = REG_VIF1_MARK;
    uVar4 = REG_VIF1_NUM;
    uVar1 = REG_VIF1_ERR;
    *(char *)((int)param_1 + 0x3e) = (char)((uint)uVar3 >> 8);
    *(char *)(param_1 + 0xf) = (char)uVar1;
    *(char *)((int)param_1 + 0x3d) = (char)uVar3;
    *(short *)(param_1 + 0xe) = (short)uVar2;
    uVar3 = REG_VIF1_MODE;
    *(short *)((int)param_1 + 0x3a) = (short)uVar4;
    *(char *)((int)param_1 + 0x3f) = (char)uVar3;
  }
  return uVar8 < 2;
}

sceDevVif1PutFifo() {
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 0;
  iVar5 = (int)param_2 + -1;
  if (param_2 != 0) {
    do {
      uVar4 = REG_VIF1_STAT;
      if ((uVar4 & 0x10000000) != 0) {
        return iVar6;
      }
      uVar3 = *param_1;
      puVar1 = param_1 + 1;
      puVar2 = (undefined4 *)((int)param_1 + 0xc);
      iVar6 = iVar6 + 1;
      param_1 = param_1 + 2;
      iVar5 = iVar5 + -1;
      REG_VIF1_FIFO = (int)uVar3;
      DAT_10005004 = (int)((ulong)uVar3 >> 0x20);
      DAT_10005008 = *(undefined4 *)puVar1;
      DAT_1000500c = *puVar2;
    } while (iVar5 != -1);
  }
  return iVar6;
}

sceDevVif1GetFifo() {
  uint uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 0;
  iVar5 = (int)param_2 + -1;
  if (param_2 != 0) {
    do {
      uVar1 = REG_VIF1_STAT;
      if ((uVar1 & 0x1f000000) == 0) {
        return iVar6;
      }
      uVar2 = REG_VIF1_FIFO;
      uVar3 = DAT_10005008;
      uVar4 = DAT_1000500c;
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + -1;
      *param_1 = (int)uVar2;
      param_1[1] = (int)((ulong)uVar2 >> 0x20);
      param_1[2] = uVar3;
      param_1[3] = uVar4;
      param_1 = param_1 + 4;
    } while (iVar5 != -1);
  }
  return iVar6;
}
