// STATUS: NOT STARTED

#include "init.h"

_initSeqAgain() {
  *(undefined4 *)(param_1 + 0x860) = 0;
  _ipuSetMPEG1(1);
  return;
}

_lastFrame() {
  int iVar1;
  
  iVar1 = (int)param_1;
  if (*(int *)(iVar1 + 0x138) == 0) {
    if (*(int *)(iVar1 + 0x18c) == 3) {
      _dispRefImage(param_1,*(undefined4 *)(iVar1 + 0x1d4),*(int *)(iVar1 + 0x130) + -1);
      *(undefined4 *)(iVar1 + 0x138) = 0;
    }
    else {
      _dispRefImageField(param_1,*(undefined4 *)(iVar1 + 0x1e4),*(undefined4 *)(iVar1 + 500),
                         *(int *)(iVar1 + 0x130) + -1);
      *(undefined4 *)(iVar1 + 0x138) = 0;
    }
  }
  else {
    _Error(param_1,0x3eab68);
    *(undefined4 *)(iVar1 + 0x138) = 0;
  }
  return;
}

_clearOnce() {
  _ipuSetMPEG1(1);
  *(undefined4 *)(param_1 + 0x5a8) = 0x70000000;
  *(undefined **)(param_1 + 0x5ac) = &DAT_70001800;
  *(undefined **)(param_1 + 0x6e8) = &DAT_70001b00;
  *(undefined **)(param_1 + 0x6ec) = &DAT_70003300;
  *(undefined4 *)(param_1 + 0x828) = 0;
  return;
}

_clearEach() {
  uint uVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0x830) = 1;
  *(undefined4 *)(param_1 + 0x1c8) = 0;
  iVar2 = DIntr();
  uVar1 = REG_DMAC_ENABLER;
  REG_DMAC_ENABLEW = uVar1 | 0x10000;
  REG_DMAC_3_IPU_FROM_CHCR = 0;
  REG_DMAC_4_IPU_TO_CHCR = 0;
  REG_DMAC_9_SPR_TO_CHCR = 0;
  uVar1 = REG_DMAC_ENABLER;
  REG_DMAC_ENABLEW = uVar1 & 0xfffeffff;
  if (iVar2 != 0) {
    EIntr();
  }
  REG_DMAC_3_IPU_FROM_QWC = 0;
  REG_DMAC_4_IPU_TO_QWC = 0;
  REG_DMAC_9_SPR_TO_QWC = 0;
  REG_IPU_CTRL = 0x40000000;
  sceIpuSync(0,0);
  return;
}

_ErrMessage() {
  scePrintf("[MPEG ERROR]%s\n");
  return;
}

_Error1() {
  char acStack_120 [256];
  
  sprintf(acStack_120,param_2);
  _Error(param_1,acStack_120);
  return;
}

_Error() {
  int iVar1;
  undefined4 local_20;
  undefined4 local_1c;
  
  iVar1 = *(int *)((int)param_1 + 0x870);
  if (((iVar1 == 0) || (param_1 == 0)) || (*(int *)((int)param_1 + 0xc) == 0)) {
    _ErrMessage(param_2);
  }
  else {
    local_1c = (undefined4)param_2;
    local_20 = 0;
    _dispatchMpegCallback(iVar1,&local_20);
  }
  return;
}

_sendDataToIPU() {
  int iVar1;
  int iVar2;
  long lVar3;
  ulong *puVar4;
  
  puVar4 = (ulong *)(param_1 + 0x88fU & 0xfffffff0);
  if (0 < param_3) {
    do {
      iVar2 = 0xfff40;
      if (param_3 < 0xfff41) {
        iVar2 = param_3;
      }
      param_3 = param_3 - iVar2;
      iVar1 = iVar2 + 0x1e;
      if (-1 < iVar2 + 0xf) {
        iVar1 = iVar2 + 0xf;
      }
      lVar3 = 0;
      if (param_3 != 0) {
        lVar3 = 3;
      }
      *puVar4 = (ulong)(param_2 & 0xfffffff) << 0x20 | lVar3 << 0x1c | (ulong)(uint)(iVar1 >> 4);
      SYNC(0);
      param_2 = param_2 + iVar2;
      puVar4 = puVar4 + 2;
    } while (0 < param_3);
  }
  FlushCache(0);
  iVar2 = DIntr();
  REG_DMAC_4_IPU_TO_TADR = param_1 + 0x88fU & 0xffffff0;
  REG_DMAC_4_IPU_TO_QWC = 0;
  REG_DMAC_4_IPU_TO_CHCR = 0x105;
  if (iVar2 != 0) {
    iVar2 = EIntr();
    return iVar2;
  }
  return iVar2;
}

static _RefImageInit() {
  *(int *)(param_1 + 0xc) = param_2 >> 4;
  *(int *)(param_1 + 0x10) = param_3 >> 4;
  *(int *)(param_1 + 4) = param_2;
  *(int *)(param_1 + 8) = param_3;
  return 1;
}

_sequenceHeader() {
  uint uVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  
  iVar4 = (int)param_1;
  *(undefined4 *)(iVar4 + 0xec) = 0;
  uVar1 = _nextBit(param_1,0x20);
  uVar2 = uVar1 >> 8 & 0xfff;
  *(uint *)(iVar4 + 0x13c) = uVar1 >> 0x14;
  *(uint *)(iVar4 + 0x140) = uVar2;
  if (0xaf0 < uVar2) {
    _Error(param_1,0x3eab98);
  }
  uVar1 = _nextBit(param_1,0x1e);
  *(uint *)(iVar4 + 0x14c) = uVar1 >> 0xc;
  *(uint *)(iVar4 + 0x150) = uVar1 >> 1 & 0x3ff;
  lVar3 = _nextBit(param_1,1);
  *(int *)(iVar4 + 0x858) = (int)lVar3;
  if (lVar3 == 0) {
    _setDefaultQM(param_1,0x50000000,0x369340);
  }
  else {
    _waitIpuIdle(param_1);
    _sendIpuCommand(param_1,0x50000000);
    _waitIpuIdle(param_1);
  }
  lVar3 = _nextBit(param_1,1);
  *(int *)(iVar4 + 0x85c) = (int)lVar3;
  if (lVar3 == 0) {
    _setDefaultQM(param_1,0x58000000,0x369380);
  }
  else {
    _waitIpuIdle(param_1);
    _sendIpuCommand(param_1,0x58000000);
    _waitIpuIdle(param_1);
  }
  _extensionAndUserData(param_1);
  _initSeq(*(undefined4 *)(iVar4 + 0x870));
  return;
}

_initSeq() {
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar1 = param_1[0x10];
  if (*(int *)(iVar1 + 0x860) == 0) {
    *(undefined4 *)(iVar1 + 0x18c) = 3;
    *(undefined4 *)(iVar1 + 0x194) = 1;
    *(undefined4 *)(iVar1 + 0x15c) = 5;
    *(undefined4 *)(iVar1 + 0x154) = 1;
    *(undefined4 *)(iVar1 + 0x158) = 1;
    *(undefined4 *)(iVar1 + 0x1a0) = 1;
    iVar2 = *(int *)(iVar1 + 0x13c);
  }
  else {
    iVar2 = *(int *)(iVar1 + 0x13c);
  }
  *(int *)(iVar1 + 0x144) = iVar2 + 0xf >> 4;
  if (*(int *)(iVar1 + 0x860) == 0) {
    iVar2 = *(int *)(iVar1 + 0x140);
  }
  else {
    iVar2 = *(int *)(iVar1 + 0x140);
    if (*(int *)(iVar1 + 0x154) == 0) {
      iVar2 = (iVar2 + 0x1f >> 5) << 1;
      goto LAB_00291138;
    }
  }
  iVar2 = iVar2 + 0xf >> 4;
LAB_00291138:
  *(int *)(iVar1 + 0x148) = iVar2;
  iVar7 = iVar2 * 0x10;
  iVar8 = *(int *)(iVar1 + 0x144) * 0x10;
  if ((iVar8 == *param_1) && (iVar7 == param_1[1])) {
    return;
  }
  param_1[1] = iVar7;
  *param_1 = iVar8;
  iVar5 = iVar1 + 0x120;
  iVar6 = iVar7 >> 1;
  uVar4 = (uint)(iVar8 * iVar2 * 0x1800) >> 8;
  _alalcFree(iVar5);
  uVar3 = _alalcAlloc(iVar1,iVar5,uVar4,0x40);
  *(undefined4 *)(iVar1 + 0x114) = uVar3;
  uVar3 = _alalcAlloc(iVar1,iVar5,uVar4,0x40);
  *(undefined4 *)(iVar1 + 0x118) = uVar3;
  uVar3 = _alalcAlloc(iVar1,iVar5,uVar4,0x40);
  *(undefined4 *)(iVar1 + 0x11c) = uVar3;
  _initRefImages(iVar1 + 0x200,iVar1 + 0x268,iVar1 + 0x2d0,iVar1 + 0x338,iVar1 + 0x3a0,iVar1 + 0x408
                 ,iVar1 + 0x470,iVar1 + 0x4d8);
  _RefImageInit(iVar1 + 0x200,iVar8,iVar7);
  _RefImageInit(iVar1 + 0x268,iVar8,iVar7);
  _RefImageInit(iVar1 + 0x2d0,iVar8,iVar7);
  _RefImageInit(iVar1 + 0x338,iVar8,iVar6);
  _RefImageInit(iVar1 + 0x3a0,iVar8,iVar6);
  _RefImageInit(iVar1 + 0x408,iVar8,iVar6);
  _RefImageInit(iVar1 + 0x470,iVar8,iVar6);
  _RefImageInit(iVar1 + 0x4d8,iVar8,iVar6);
  _RefImageInit(iVar1 + 0x540,iVar8,iVar6);
  return;
}

static _initRefImages() {
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  param_13 = param_13 * param_14;
  iVar1 = param_13 + 0x1ff;
  if (-1 < param_13) {
    iVar1 = param_13;
  }
  iVar1 = iVar1 >> 9;
  uVar4 = param_10 & 0xfffffff | 0x20000000;
  *param_1 = uVar4;
  uVar3 = param_11 & 0xfffffff | 0x20000000;
  *param_2 = uVar3;
  uVar2 = param_12 & 0xfffffff | 0x20000000;
  *param_3 = uVar2;
  *param_4 = uVar4;
  *param_5 = uVar3;
  *param_6 = uVar2;
  *param_7 = iVar1 * 0x180 + param_10 & 0xfffffff | 0x20000000;
  *param_8 = iVar1 * 0x180 + param_11 & 0xfffffff | 0x20000000;
  *param_9 = iVar1 * 0x180 + param_12 & 0xfffffff | 0x20000000;
  return;
}

static _setDefaultQM() {
  int iVar1;
  undefined4 local_60 [8];
  
  local_60[0] = 2;
  _dispatchMpegCallback(*(undefined4 *)((int)param_1 + 0x870),local_60);
  _waitIpuIdle(param_1);
  REG_IPU_CMD = 0;
  _waitIpuIdle(param_1);
  iVar1 = DIntr();
  REG_DMAC_4_IPU_TO_MADR = param_3 & 0xfffffff;
  REG_DMAC_4_IPU_TO_QWC = 4;
  REG_DMAC_4_IPU_TO_CHCR = 0x101;
  if (iVar1 != 0) {
    EIntr();
  }
  _sendIpuCommand(param_1,param_2);
  _waitIpuIdle(param_1);
  local_60[0] = 3;
  _dispatchMpegCallback(*(undefined4 *)((int)param_1 + 0x870),local_60);
  return;
}

_sequenceExtension() {
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = (int)param_1;
  *(undefined4 *)(iVar4 + 0x860) = 1;
  _ipuSetMPEG1(0);
  uVar1 = _nextBit(param_1,0x1c);
  uVar2 = uVar1 >> 0x11 & 3;
  *(uint *)(iVar4 + 0x158) = uVar2;
  if (uVar2 != 1) {
    _Error(param_1,0x3eabb0);
  }
  *(uint *)(iVar4 + 0x154) = uVar1 >> 0x13 & 1;
  uVar3 = uVar1 >> 0x14;
  uVar2 = _nextBit(param_1,0x10);
  if (((uVar3 != 0x48) && (uVar3 != 0x58)) && (uVar3 != 0x44)) {
    _Error(param_1,0x3eabd8);
  }
  *(uint *)(iVar4 + 0x150) = *(int *)(iVar4 + 0x150) + (uVar2 >> 8) * 0x400;
  *(uint *)(iVar4 + 0x13c) = (uVar1 >> 0xf & 3) << 0xc | *(uint *)(iVar4 + 0x13c) & 0xfff;
  *(uint *)(iVar4 + 0x140) = (uVar1 >> 0xd & 3) << 0xc | *(uint *)(iVar4 + 0x140) & 0xfff;
  *(uint *)(iVar4 + 0x14c) = *(int *)(iVar4 + 0x14c) + (uVar1 >> 1 & 0xfff) * 0x40000;
  return;
}

_sequenceDisplayExtension() {
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  
  _nextBit(param_1,3);
  lVar1 = _nextBit(param_1,1);
  iVar3 = (int)param_1;
  if (lVar1 != 0) {
    _nextBit(param_1,8);
    _nextBit(param_1,8);
    uVar2 = _nextBit(param_1,8);
    *(undefined4 *)(iVar3 + 0x15c) = uVar2;
  }
  uVar2 = _nextBit(param_1,0xe);
  *(undefined4 *)(iVar3 + 0x160) = uVar2;
  _nextBit(param_1,1);
  uVar2 = _nextBit(param_1,0xe);
  *(undefined4 *)(iVar3 + 0x164) = uVar2;
  return;
}

_sequenceScalableExtension() {
  _Error(param_1,0x3eabf8);
  return;
}

_unknown_extension() {
  _Error(param_1,0x3eac28);
  return;
}

_pictureSpatialScalableExtension() {
  _Error(param_1,0x3eac40);
  return;
}

_pictureTemporalScalableExtension() {
  _Error(param_1,0x3eac78);
  return;
}
