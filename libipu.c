// STATUS: NOT STARTED

#include "libipu.h"

static setD3_CHCR() {
  uint uVar1;
  int iVar2;
  
  iVar2 = DIntr();
  uVar1 = REG_DMAC_ENABLER;
  REG_DMAC_ENABLEW = uVar1 | 0x10000;
  REG_DMAC_3_IPU_FROM_CHCR = param_1;
  uVar1 = REG_DMAC_ENABLER;
  REG_DMAC_ENABLEW = uVar1 & 0xfffeffff;
  if (iVar2 != 0) {
    iVar2 = EIntr();
    return iVar2;
  }
  return iVar2;
}

static setD4_CHCR() {
  uint uVar1;
  int iVar2;
  
  iVar2 = DIntr();
  uVar1 = REG_DMAC_ENABLER;
  REG_DMAC_ENABLEW = uVar1 | 0x10000;
  REG_DMAC_4_IPU_TO_CHCR = param_1;
  uVar1 = REG_DMAC_ENABLER;
  REG_DMAC_ENABLEW = uVar1 & 0xfffeffff;
  if (iVar2 != 0) {
    iVar2 = EIntr();
    return iVar2;
  }
  return iVar2;
}

sceIpuStopDMA() {
  uint uVar1;
  undefined4 uVar2;
  
  setD4_CHCR(1);
  uVar2 = REG_DMAC_4_IPU_TO_MADR;
  *param_1 = uVar2;
  uVar2 = REG_DMAC_4_IPU_TO_TADR;
  param_1[1] = uVar2;
  uVar2 = REG_DMAC_4_IPU_TO_QWC;
  param_1[2] = uVar2;
  uVar2 = REG_DMAC_4_IPU_TO_CHCR;
  param_1[3] = uVar2;
  do {
    uVar1 = REG_IPU_CTRL;
  } while ((uVar1 & 0xf0) != 0);
  setD3_CHCR(0);
  uVar2 = REG_DMAC_3_IPU_FROM_MADR;
  param_1[4] = uVar2;
  uVar2 = REG_DMAC_3_IPU_FROM_QWC;
  param_1[5] = uVar2;
  uVar2 = REG_DMAC_3_IPU_FROM_CHCR;
  param_1[6] = uVar2;
  uVar2 = REG_IPU_BP;
  param_1[7] = uVar2;
  uVar2 = REG_IPU_CTRL;
  param_1[8] = uVar2;
  return;
}

sceIpuRestartDMA() {
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = param_1[7];
  iVar3 = (uVar1 >> 0x10 & 3) + (uVar1 >> 8 & 0xf);
  iVar4 = param_1[2] + iVar3;
  iVar3 = *param_1 + iVar3 * -0x10;
  if ((param_1[4] != 0) && (param_1[5] != 0)) {
    REG_DMAC_3_IPU_FROM_MADR = param_1[4];
    REG_DMAC_3_IPU_FROM_QWC = param_1[5];
    setD3_CHCR(param_1[6] | 0x100);
  }
  do {
    iVar2 = REG_IPU_CTRL;
  } while (iVar2 < 0);
  REG_IPU_CMD = uVar1 & 0x7f;
  do {
    iVar2 = REG_IPU_CTRL;
  } while (iVar2 < 0);
  if ((iVar3 != 0) && (iVar4 != 0)) {
    REG_DMAC_4_IPU_TO_MADR = iVar3;
    REG_DMAC_4_IPU_TO_TADR = param_1[1];
    REG_DMAC_4_IPU_TO_QWC = iVar4;
    setD4_CHCR(param_1[3] | 0x100);
    return;
  }
  return;
}

sceIpuSync() {
  int iVar1;
  uint uVar2;
  
  if (param_1 == 0) {
    do {
      iVar1 = REG_IPU_CTRL;
    } while (iVar1 < 0);
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    if (param_1 == 1) {
      uVar2 = REG_IPU_CTRL;
      uVar2 = uVar2 >> 0x1f;
    }
  }
  return uVar2;
}
