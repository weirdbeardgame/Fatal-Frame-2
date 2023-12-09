// STATUS: NOT STARTED

#include "csc.h"

static _doCSC() {
  uint uVar1;
  int iVar2;
  undefined4 local_70 [8];
  
  do {
    iVar2 = REG_IPU_CTRL;
  } while (iVar2 < 0);
  iVar2 = DIntr();
  REG_DMAC_3_IPU_FROM_MADR = param_2 & 0xfffffff;
  REG_DMAC_3_IPU_FROM_QWC = (int)param_3 << 6;
  REG_DMAC_3_IPU_FROM_CHCR = 0x100;
  if (iVar2 != 0) {
    EIntr();
  }
  _sendIpuCommand(param_1,param_3 | 0x70000000);
  local_70[0] = 4;
  _dispatchMpegCallback(*(undefined4 *)((int)param_1 + 0x870),local_70);
  do {
    uVar1 = REG_DMAC_3_IPU_FROM_CHCR;
  } while ((uVar1 >> 8 & 1) != 0);
  do {
    iVar2 = REG_IPU_CTRL;
  } while (iVar2 < 0);
  return;
}

static _ch3dmaCSC() {
  uint uVar1;
  int iVar2;
  
  REG_DMAC_STAT = 8;
  *param_2 = *param_2 + 1;
  iVar2 = REG_DMAC_3_IPU_FROM_QWC;
  if ((iVar2 == 0) && (uVar1 = REG_DMAC_3_IPU_FROM_CHCR, (uVar1 & 0x100) == 0)) {
    if (*param_2 < param_2[4] + -1) {
      REG_DMAC_3_IPU_FROM_MADR = param_2[3];
      REG_DMAC_3_IPU_FROM_QWC = 0xffc0;
      REG_DMAC_3_IPU_FROM_CHCR = 0x100;
      REG_IPU_CMD = 0x700003ff;
      param_2[3] = param_2[3] + 0xffc00U & 0xfffffff;
    }
    else if (*param_2 == param_2[4] + -1) {
      param_2[2] = param_2[2] + *param_2 * -0x3ff;
      REG_DMAC_3_IPU_FROM_MADR = param_2[3];
      REG_DMAC_3_IPU_FROM_QWC = param_2[2] << 6;
      REG_DMAC_3_IPU_FROM_CHCR = 0x100;
      REG_IPU_CMD = param_2[2] | 0x70000000;
    }
    SYNC(0);
    EI();
    return 0;
  }
  param_2[1] = 1;
  SYNC(0);
  EI();
  return 0;
}

static _doCSC2() {
  int iVar1;
  undefined8 uVar2;
  undefined4 local_80 [8];
  int local_60;
  int local_5c;
  int local_58;
  uint local_54;
  int local_50;
  
  local_54 = param_2 + 0xffc00 & 0xfffffff;
  local_5c = 0;
  local_60 = 0;
  local_50 = param_3 / 0x3ff + 1;
  do {
    iVar1 = REG_IPU_CTRL;
  } while (iVar1 < 0);
  local_58 = param_3;
  uVar2 = AddDmacHandler2(3,0x2968d0,0,&local_60);
  REG_DMAC_STAT = 8;
  EnableDmac(3);
  iVar1 = DIntr();
  REG_DMAC_3_IPU_FROM_MADR = param_2 & 0xfffffff;
  REG_DMAC_3_IPU_FROM_QWC = 0xffc0;
  REG_DMAC_3_IPU_FROM_CHCR = 0x100;
  if (iVar1 != 0) {
    EIntr();
  }
  REG_IPU_CMD = 0x700003ff;
  local_80[0] = 4;
  _dispatchMpegCallback(*(undefined4 *)((int)param_1 + 0x870),local_80);
  do {
  } while (local_60 < local_50);
  if (local_5c != 0) {
    _Error(param_1,0x3eaf78);
  }
  do {
    iVar1 = REG_IPU_CTRL;
  } while (iVar1 < 0);
  DisableDmac(3);
  RemoveDmacHandler(3,uVar2);
  return;
}

static _ch4dma() {
  REG_DMAC_STAT = 0x10;
  if (*param_2 == 0) {
    SYNC(0);
    EI();
    return 1;
  }
  if (*param_2 < 0x10000) {
    REG_DMAC_4_IPU_TO_MADR = param_2[1];
    REG_DMAC_4_IPU_TO_QWC = *param_2;
    REG_DMAC_4_IPU_TO_CHCR = 0x101;
    *param_2 = 0;
  }
  else {
    REG_DMAC_4_IPU_TO_MADR = param_2[1];
    REG_DMAC_4_IPU_TO_QWC = 0xffff;
    REG_DMAC_4_IPU_TO_CHCR = 0x101;
    *param_2 = *param_2 - 0xffff;
    param_2[1] = param_2[1] + 0xffff0 & 0xfffffff;
  }
  SYNC(0);
  EI();
  return 0;
}

_csc_storeRefImage() {
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 local_a0 [8];
  uint local_80;
  uint local_7c;
  
  iVar6 = (int)param_1;
  iVar1 = param_2[3] * param_2[4];
  local_a0[0] = 2;
  _dispatchMpegCallback(*(undefined4 *)(iVar6 + 0x870),local_a0);
  uVar2 = REG_IPU_CTRL;
  if ((uVar2 & 0x4000) != 0) {
    REG_IPU_CTRL = 0x40000000;
  }
  do {
    iVar3 = REG_IPU_CTRL;
  } while (iVar3 < 0);
  _sendIpuCommand(param_1,0);
  do {
    iVar3 = REG_IPU_CTRL;
  } while (iVar3 < 0);
  local_80 = iVar1 * 0x18;
  local_7c = *param_2 & 0xfffffff;
  if (local_80 < 0x10000) {
    iVar3 = DIntr();
    REG_DMAC_4_IPU_TO_MADR = *param_2 & 0xfffffff;
    REG_DMAC_4_IPU_TO_QWC = local_80;
    REG_DMAC_4_IPU_TO_CHCR = 0x101;
    if (iVar3 != 0) {
      EIntr();
    }
    local_80 = 0;
    if (0x3ff < iVar1) {
      _doCSC2(param_1,*(undefined4 *)(iVar6 + 0xf0),iVar1);
      uVar5 = *(undefined4 *)(iVar6 + 0x870);
    }
    else {
      _doCSC(param_1,*(undefined4 *)(iVar6 + 0xf0),iVar1);
      uVar5 = *(undefined4 *)(iVar6 + 0x870);
    }
  }
  else {
    uVar4 = AddDmacHandler2(4,0x296bd8,0,&local_80);
    REG_DMAC_STAT = 0x10;
    EnableDmac(4);
    iVar3 = DIntr();
    REG_DMAC_4_IPU_TO_MADR = local_7c;
    REG_DMAC_4_IPU_TO_QWC = 0xffff;
    REG_DMAC_4_IPU_TO_CHCR = 0x101;
    if (iVar3 != 0) {
      EIntr();
    }
    local_7c = local_7c + 0xffff0 & 0xfffffff;
    local_80 = local_80 - 0xffff;
    if (0x3ff < iVar1) {
      _doCSC2(param_1,*(undefined4 *)(iVar6 + 0xf0),iVar1);
    }
    else {
      _doCSC(param_1,*(undefined4 *)(iVar6 + 0xf0),iVar1);
    }
    DisableDmac(4);
    RemoveDmacHandler(4,uVar4);
    uVar5 = *(undefined4 *)(iVar6 + 0x870);
  }
  local_a0[0] = 3;
  _dispatchMpegCallback(uVar5,local_a0);
  return;
}
