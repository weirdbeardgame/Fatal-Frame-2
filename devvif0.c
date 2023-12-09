// STATUS: NOT STARTED

#include "devvif0.h"

sceDevVif0Reset() {
  REG_VIF0_FBRST = 1;
  REG_VIF0_ERR = 6;
  return;
}

sceDevVif0Pause() {
  long lVar1;
  undefined4 uVar2;
  
  lVar1 = sceDevVif0Sync();
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
    REG_VIF0_FBRST = uVar2;
    uVar2 = 1;
  }
  return uVar2;
}

sceDevVif0Continue() {
  long lVar1;
  
  lVar1 = sceDevVif0Sync();
  if (lVar1 == 1) {
    REG_VIF0_FBRST = 8;
  }
  return lVar1 == 1;
}

sceDevVif0PutErr() {
  REG_VIF0_ERR = param_1 | param_2 << 1 | param_3 << 2;
  return;
}

sceDevVif0GetErr() {
  undefined4 uVar1;
  
  uVar1 = REG_VIF0_ERR;
  return uVar1;
}

static sceDevVif0Sync() {
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = REG_VIF0_STAT;
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

sceDevVif0GetCnd() {
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulong uVar7;
  
  uVar3 = REG_VIF0_CYCLE;
  uVar7 = sceDevVif0Sync();
  if (uVar7 < 2) {
    uVar1 = REG_VIF0_ROW0;
    *param_1 = uVar1;
    uVar1 = REG_VIF0_ROW1;
    param_1[1] = uVar1;
    uVar1 = REG_VIF0_ROW2;
    param_1[2] = uVar1;
    uVar1 = REG_VIF0_ROW3;
    param_1[3] = uVar1;
    uVar1 = REG_VIF0_COL0;
    param_1[4] = uVar1;
    uVar1 = REG_VIF0_COL1;
    param_1[5] = uVar1;
    uVar1 = REG_VIF0_COL2;
    param_1[6] = uVar1;
    uVar1 = REG_VIF0_COL3;
    param_1[7] = uVar1;
    uVar1 = REG_VIF0_MASK;
    param_1[8] = uVar1;
    uVar1 = REG_VIF0_CODE;
    param_1[9] = uVar1;
    uVar1 = REG_VIF0_STAT;
    param_1[10] = uVar1;
    uVar6 = REG_VIF0_ITOP;
    uVar5 = REG_VIF0_ITOPS;
    uVar2 = REG_VIF0_MARK;
    uVar4 = REG_VIF0_NUM;
    uVar1 = REG_VIF0_ERR;
    *(short *)((int)param_1 + 0x2e) = (short)uVar5;
    *(short *)(param_1 + 0xb) = (short)uVar6;
    *(short *)(param_1 + 0xc) = (short)uVar2;
    *(short *)((int)param_1 + 0x32) = (short)uVar4;
    *(char *)(param_1 + 0xd) = (char)uVar1;
    *(char *)((int)param_1 + 0x35) = (char)uVar3;
    *(char *)((int)param_1 + 0x36) = (char)((uint)uVar3 >> 8);
    uVar3 = REG_VIF0_MODE;
    *(char *)((int)param_1 + 0x37) = (char)uVar3;
  }
  return uVar7 < 2;
}

sceDevVif0PutFifo() {
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
      uVar4 = REG_VIF0_STAT;
      if ((uVar4 & 0x10000000) != 0) {
        return iVar6;
      }
      uVar3 = *param_1;
      puVar1 = param_1 + 1;
      puVar2 = (undefined4 *)((int)param_1 + 0xc);
      iVar6 = iVar6 + 1;
      param_1 = param_1 + 2;
      iVar5 = iVar5 + -1;
      REG_VIF0_FIFO = (int)uVar3;
      DAT_10004004 = (int)((ulong)uVar3 >> 0x20);
      DAT_10004008 = *(undefined4 *)puVar1;
      DAT_1000400c = *puVar2;
    } while (iVar5 != -1);
  }
  return iVar6;
}
