// STATUS: NOT STARTED

#include "mpeg.h"

sceMpegInit() {
  uint uVar1;
  int iVar2;
  
  iVar2 = DIntr();
  uVar1 = REG_DMAC_ENABLER;
  REG_DMAC_ENABLEW = uVar1 | 0x10000;
  uVar1 = REG_DMAC_3_IPU_FROM_CHCR;
  REG_DMAC_3_IPU_FROM_CHCR = uVar1 & 0xfffffeff;
  uVar1 = REG_DMAC_4_IPU_TO_CHCR;
  REG_DMAC_4_IPU_TO_CHCR = uVar1 & 0xfffffeff;
  uVar1 = REG_DMAC_ENABLER;
  REG_DMAC_ENABLEW = uVar1 & 0xfffeffff;
  if (iVar2 != 0) {
    EIntr();
  }
  REG_DMAC_3_IPU_FROM_QWC = 0;
  REG_DMAC_4_IPU_TO_QWC = 0;
  sceIpuInit();
  return 1;
}

sceMpegCreate() {
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  memset(param_2,0,param_3);
  uVar4 = (int)param_2 + 3U & 0xfffffffc;
  uVar2 = (int)param_3 - (uVar4 - (int)param_2);
  if (0x10bf < uVar2) {
    iVar3 = uVar4 + 0x120;
    puVar5 = (undefined4 *)param_1;
    puVar5[0x10] = uVar4;
    _alalcInit(iVar3,uVar4 + 0x10c0,uVar2 - 0x10c0);
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    *(undefined8 *)(puVar5 + 4) = 0xffffffffffffffff;
    *(undefined8 *)(puVar5 + 6) = 0xffffffffffffffff;
    *(undefined8 *)(puVar5 + 8) = 0;
    *(undefined8 *)(puVar5 + 10) = 0xffffffffffffffff;
    *(undefined8 *)(puVar5 + 0xc) = 0xffffffffffffffff;
    *(undefined8 *)(puVar5 + 0xe) = 0;
    *(undefined4 *)(uVar4 + 0xcc) = 0;
    *(undefined4 *)(uVar4 + 0xd0) = 0;
    *(undefined4 *)(uVar4 + 0xd4) = 0;
    *(undefined4 *)(uVar4 + 0xd8) = 0;
    *(undefined4 *)(uVar4 + 0xdc) = 0;
    *(undefined4 *)(uVar4 + 0xe0) = 0;
    *(undefined4 *)(uVar4 + 0xe4) = 0;
    *(undefined4 *)(uVar4 + 0xe8) = 0;
    *(undefined4 *)(uVar4 + 0xec) = 0;
    *(undefined4 *)(uVar4 + 0xf0) = 0;
    *(undefined4 *)(uVar4 + 0xf4) = 0;
    *(undefined4 *)(uVar4 + 0xf8) = 0;
    *(undefined4 *)(uVar4 + 0xfc) = 0;
    *(undefined4 *)(uVar4 + 0x100) = 0;
    *(undefined4 *)(uVar4 + 0x110) = 0;
    *(undefined4 *)(uVar4 + 0xc) = 0;
    *(undefined4 *)(uVar4 + 0x18) = 0;
    *(undefined4 *)(uVar4 + 0x3c) = 0;
    *(undefined4 *)(uVar4 + 0x48) = 0;
    *(undefined4 *)(uVar4 + 0x54) = 0;
    *(undefined8 *)(uVar4 + 0x108) = 0xffffffffffffffff;
    *(code **)(uVar4 + 0x24) = _defStopDMA;
    *(code **)(uVar4 + 0x30) = _defRestartDMA;
    uVar1 = _alalcAlloc(uVar4,iVar3,0x800,8);
    *(undefined4 *)(uVar4 + 100) = 0;
    *(undefined4 *)(uVar4 + 0x114) = 0;
    *(undefined4 *)(uVar4 + 0x118) = 0;
    *(undefined4 *)(uVar4 + 0x11c) = 0;
    *(undefined4 *)(uVar4 + 0x8c) = 0;
    *(undefined8 *)(uVar4 + 0x90) = 0;
    *(undefined4 *)(uVar4 + 0x98) = 0xffffffff;
    *(undefined8 *)(uVar4 + 0xa0) = 0;
    *(undefined4 *)(uVar4 + 0xa8) = 0;
    *(undefined4 *)(uVar4 + 0xc4) = 0;
    *(undefined4 *)(uVar4 + 0xac) = 0xffffffff;
    *(undefined4 *)(uVar4 + 0xb0) = 0xffffffff;
    *(undefined4 *)(uVar4 + 0xb4) = 0xffffffff;
    *(undefined4 **)(uVar4 + 0x870) = puVar5;
    *(undefined4 *)(uVar4 + 0x60) = uVar1;
    *(undefined4 *)(uVar4 + 200) = 1;
    _clearOnce(uVar4);
    sceMpegReset(param_1);
    sceMpegClearRefBuff(param_1);
    *(uint *)(uVar4 + 0x1d0) = uVar4 + 0x200;
    *(uint *)(uVar4 + 0x1d4) = uVar4 + 0x268;
    *(uint *)(uVar4 + 0x1dc) = uVar4 + 0x2d0;
    *(uint *)(uVar4 + 0x1e0) = uVar4 + 0x338;
    *(uint *)(uVar4 + 0x1e4) = uVar4 + 0x3a0;
    *(uint *)(uVar4 + 0x1ec) = uVar4 + 0x408;
    *(uint *)(uVar4 + 0x1f0) = uVar4 + 0x470;
    *(uint *)(uVar4 + 500) = uVar4 + 0x4d8;
    *(uint *)(uVar4 + 0x1fc) = uVar4 + 0x540;
    _alalcSetDynamic(iVar3);
    *(undefined4 *)(uVar4 + 0x868) = 0xffffffff;
    *(undefined4 *)(uVar4 + 0x86c) = 0;
    *(undefined **)(uVar4 + 0x834) = &DAT_70003600;
    *(undefined4 *)(uVar4 + 0x864) = 0;
  }
  else {
    _Error(uVar4,0x3eaa60);
  }
  return 0x10bf < uVar2;
}

sceMpegDelete() {
  return 1;
}

sceMpegAddBs() {
  int iVar1;
  
  iVar1 = param_3 + 0x22;
  if (-1 < param_3 + 0x13) {
    iVar1 = param_3 + 0x13;
  }
  _sendDataToIPU(*(undefined4 *)(param_1 + 0x40),param_2,(iVar1 >> 4) << 4);
  return 1;
}

sceMpegGetPicture() {
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x40);
  *(undefined4 *)(iVar1 + 200) = 1;
  *(uint *)(iVar1 + 0xf0) = param_2 & 0xfffffff | 0x20000000;
  *(undefined4 *)(iVar1 + 0xfc) = param_3;
  *(undefined4 *)(iVar1 + 0xf4) = 0;
  *(undefined4 *)(iVar1 + 0xf8) = 0;
  _getpic();
  return;
}

sceMpegGetPictureRAW8() {
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x40);
  *(undefined4 *)(iVar1 + 0xfc) = param_3;
  *(uint *)(iVar1 + 0xf0) = param_2 & 0xfffffff | 0x20000000;
  *(undefined4 *)(iVar1 + 0xf4) = 0;
  *(undefined4 *)(iVar1 + 200) = 0;
  *(undefined4 *)(iVar1 + 0xf8) = 0;
  _getpic();
  return;
}

sceMpegGetPictureRAW8xy() {
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x40);
  *(int *)(iVar1 + 0xf8) = param_4 << 4;
  *(uint *)(iVar1 + 0xf0) = param_2 & 0xfffffff | 0x20000000;
  *(int *)(iVar1 + 0xfc) = param_3 * param_4;
  *(int *)(iVar1 + 0xf4) = param_3 << 4;
  *(undefined4 *)(iVar1 + 200) = 0;
  _getpic();
  return;
}

sceMpegGetPictureAbort() {
  *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x10a0) = 1;
  return;
}

sceMpegSetDecodeMode() {
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x40);
  *(undefined4 *)(iVar1 + 0xb4) = param_4;
  *(undefined4 *)(iVar1 + 0xac) = param_2;
  *(undefined4 *)(iVar1 + 0xb0) = param_3;
  return;
}

sceMpegGetDecodeMode() {
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x40);
  *param_2 = *(undefined4 *)(iVar1 + 0xac);
  *param_3 = *(undefined4 *)(iVar1 + 0xb0);
  *param_4 = *(undefined4 *)(iVar1 + 0xb4);
  return;
}

sceMpegIsEnd() {
  return **(undefined4 **)(param_1 + 0x40);
}

sceMpegIsRefBuffEmpty() {
  return *(int *)(*(int *)(param_1 + 0x40) + 4) == 0;
}

sceMpegReset() {
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0x40);
  puVar1[0x428] = 0;
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  puVar1[0x31] = 0;
  puVar1[0x26] = 0xffffffff;
  _clearEach(puVar1);
  puVar1[0x4c] = 0;
  _initSeqAgain(puVar1);
  return 1;
}

sceMpegClearRefBuff() {
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x40);
  if (*(int *)(iVar1 + 0x1d0) != 0) {
    *(undefined4 *)(*(int *)(iVar1 + 0x1d0) + 0x28) = 0;
  }
  if (*(int *)(iVar1 + 0x1e0) != 0) {
    *(undefined4 *)(*(int *)(iVar1 + 0x1e0) + 0x28) = 0;
  }
  if (*(int *)(iVar1 + 0x1f0) != 0) {
    *(undefined4 *)(*(int *)(iVar1 + 0x1f0) + 0x28) = 0;
  }
  if (*(int *)(iVar1 + 0x1d4) != 0) {
    *(undefined4 *)(*(int *)(iVar1 + 0x1d4) + 0x28) = 0;
  }
  if (*(int *)(iVar1 + 0x1e4) != 0) {
    *(undefined4 *)(*(int *)(iVar1 + 0x1e4) + 0x28) = 0;
  }
  if (*(int *)(iVar1 + 500) != 0) {
    *(undefined4 *)(*(int *)(iVar1 + 500) + 0x28) = 0;
  }
  return 1;
}

sceMpegAddCallback() {
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar2 = (undefined4 *)(*(int *)(param_1 + 0x40) + 0xc + param_2 * 0xc);
  iVar3 = *(int *)(param_1 + 0x40) + param_2 * 0xc;
  uVar1 = *puVar2;
  *puVar2 = param_3;
  *(undefined4 *)(iVar3 + 0x10) = param_4;
  *(undefined4 *)(iVar3 + 0x14) = 0x3f57f0;
  return uVar1;
}

_dispatchMpegCallback() {
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  if (((param_1 != 0) && (iVar1 = *(int *)((int)param_1 + 0x40), iVar1 != 0)) &&
     (pcVar2 = *(code **)(iVar1 + *param_2 * 0xc + 0xc), pcVar2 != (code *)0x0)) {
    uVar3 = (*pcVar2)((int)param_1,param_2,*(undefined4 *)(*param_2 * 0xc + iVar1 + 0x10));
  }
  return uVar3;
}

_dispatchMpegCbNodata() {
  undefined4 local_30 [8];
  
  local_30[0] = 1;
  _dispatchMpegCallback(param_1,local_30);
  return 1;
}

sceMpegSetDefaultPtsGap() {
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x40);
  *(undefined8 *)(iVar1 + 0x90) = param_2;
  *(undefined4 *)(iVar1 + 0x8c) = 1;
  return 1;
}

sceMpegResetDefaultPtsGap() {
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x40);
  *(undefined8 *)(iVar1 + 0x90) = 0;
  *(undefined4 *)(iVar1 + 0x8c) = 0;
  return 1;
}

sceMpegSetImageBuff() {
  *(undefined4 *)(*(int *)(param_1 + 0x40) + 0xf0) = param_2;
  return 1;
}

sceMpegDispWidth() {
  return *(undefined4 *)(*(int *)(param_1 + 0x40) + 0xe4);
}

sceMpegDispHeight() {
  return *(undefined4 *)(*(int *)(param_1 + 0x40) + 0xe8);
}

sceMpegDispCenterOffX() {
  return *(int *)(param_1 + 0x40) + 0xcc;
}

sceMpegDispCenterOffY() {
  return *(int *)(param_1 + 0x40) + 0xcc;
}

sceSetBrokenLink() {
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x100);
  *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x100) = param_2;
  return uVar1;
}

sceSetPtm() {
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x40);
  *(undefined4 *)(iVar1 + 0x110) = 1;
  *(undefined8 *)(iVar1 + 0x108) = param_2;
  return 1;
}

_alalcInit() {
  param_1[3] = param_2;
  param_1[1] = param_3;
  *param_1 = param_2;
  param_1[2] = param_2;
  return;
}

_alalcSetDynamic() {
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 8);
  return;
}

_alalcFree() {
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0xc);
  return;
}

_alalcAlloc() {
  int iVar1;
  
  iVar1 = (int)param_4;
  if (param_4 == 0) {
    trap(7);
  }
  iVar1 = ((param_2[2] + iVar1 + -1) / iVar1) * iVar1;
  if ((uint)(*param_2 + param_2[1]) < (uint)(iVar1 + param_3)) {
    _Error(param_1,0x3eaa88);
    iVar1 = 0;
  }
  else {
    param_2[2] = iVar1 + param_3;
  }
  return iVar1;
}

_alalcRest() {
  return (*param_1 + param_1[1]) - param_1[2];
}

static _getpic() {
  int *piVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  piVar1 = *(int **)(param_1 + 0x40);
  *piVar1 = 0;
  if ((piVar1[0x3c] & 0x3fU) == 0) {
    if (piVar1[0x428] == 0) {
      piVar1[0x20e] = 0;
      do {
        do {
          uVar3 = _nextHeader(piVar1);
          if ((long)uVar3 < 0) {
            return 0xffffffffffffffff;
          }
        } while (((uVar3 != 0) && (piVar1[99] != piVar1[0x3b])) && (piVar1[0x218] != 0));
        if (uVar3 < 5) {
                    /* WARNING: Could not recover jumptable at 0x002907d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar2 = (*(code *)(&PTR_LAB_003eab50)[(int)uVar3])();
          return uVar2;
        }
        if (piVar1[0x428] != 0) {
          scePrintf("sceMpegGetPicture is aborted\n");
          return 0xffffffffffffffff;
        }
        if (piVar1[0x20e] != 0) {
          return 1;
        }
      } while (*piVar1 == 0);
      uVar2 = 1;
    }
    else {
      scePrintf("Need to re-setup libipu since sceMpegGetPicture was aborted\n");
      uVar2 = 0xffffffffffffffff;
    }
  }
  else {
    _Error1(piVar1,0x3eaaa8);
    uVar2 = 0xffffffffffffffff;
  }
  return uVar2;
}

static _decodeOrSkipFrame() {
  int iVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  int iVar7;
  
  bVar2 = false;
  iVar7 = (int)param_1;
  iVar1 = *(int *)(iVar7 + 0x40);
  if ((param_3 == -1) || (param_2 < param_3)) {
    if (*(int *)(iVar1 + 8) == 0) {
      *(undefined4 *)(iVar7 + 8) = 0;
      *(undefined4 *)(iVar1 + 8) = 1;
    }
    lVar3 = _updateRefImage(iVar1,0);
    uVar6 = 0;
    if (lVar3 != 0) {
      lVar3 = _decPicture(iVar1);
      uVar6 = (ulong)(lVar3 != 0);
    }
  }
  else {
    uVar6 = _updateRefImage(iVar1,0);
    bVar2 = true;
    _dispatchMpegCbNodata(param_1);
  }
  uVar4 = 0;
  if (*(int *)(iVar1 + 0x10a0) == 0) {
    _outputFrame(iVar1,*(undefined4 *)(iVar1 + 0x130),*(undefined4 *)(iVar1 + 4));
    if (*(int *)(iVar1 + 0x18c) == 3) {
      iVar5 = *(int *)(iVar1 + 0xc4);
    }
    else if (bVar2) {
      iVar5 = *(int *)(iVar1 + 0xc4);
    }
    else {
      *(uint *)(iVar1 + 0x138) = (uint)(*(int *)(iVar1 + 0x138) == 0);
      iVar5 = *(int *)(iVar1 + 0xc4);
    }
    *(int *)(iVar7 + 8) = *(int *)(iVar1 + 0x130) - iVar5;
    uVar4 = uVar6;
    if (*(int *)(iVar1 + 0x138) == 0) {
      *(int *)(iVar1 + 0x130) = *(int *)(iVar1 + 0x130) + 1;
      *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
    }
  }
  return uVar4;
}

static _decodeOrSkip() {
  if (*(int *)(*(int *)((int)param_1 + 0x40) + 0x18c) == 3) {
    _decodeOrSkipFrame(param_1);
  }
  else {
    _decodeOrSkipField(param_1);
  }
  return;
}

static _decodeOrSkipField() {
  undefined4 *puVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  int iVar6;
  undefined4 uVar7;
  
  bVar2 = false;
  iVar6 = (int)param_1;
  puVar1 = *(undefined4 **)(iVar6 + 0x40);
  puVar1[0x4e] = 0;
  if ((param_3 == -1) || (param_2 < param_3)) {
    bVar2 = true;
    iVar3 = puVar1[2];
  }
  else {
    iVar3 = puVar1[2];
  }
  if (iVar3 == 0) {
    *(undefined4 *)(iVar6 + 8) = 0;
    puVar1[2] = 1;
  }
  lVar5 = _updateRefImage(puVar1,0);
  if (lVar5 == 0) {
    iVar3 = puVar1[0x428];
  }
  else if (bVar2) {
    _decPicture(puVar1);
    iVar3 = puVar1[0x428];
  }
  else {
    iVar3 = puVar1[0x428];
  }
  if (iVar3 != 0) {
    return 0;
  }
  puVar1[0x4e] = 1;
  lVar5 = _nextHeader(puVar1);
  if (lVar5 == 0) {
    _sceMpegFlush(param_1);
    *puVar1 = 1;
    return 0;
  }
  iVar3 = 2;
  if (puVar1[0x3b] != 1) {
    iVar3 = 1;
  }
  if (puVar1[99] != iVar3) {
    return 0xffffffff;
  }
  lVar5 = _updateRefImage(puVar1,1);
  uVar7 = 0;
  if (lVar5 != 0) {
    if (!bVar2) {
      iVar3 = puVar1[0x428];
      goto LAB_00290b18;
    }
    lVar5 = _decPicture(puVar1);
    if (lVar5 != 0) {
      uVar7 = 1;
    }
  }
  iVar3 = puVar1[0x428];
LAB_00290b18:
  uVar4 = 0;
  if (iVar3 == 0) {
    _outputFrame(puVar1,puVar1[0x4c],puVar1[1]);
    puVar1[0x4e] = 0;
    *(undefined4 *)(iVar6 + 8) = puVar1[0x4c] - puVar1[0x31];
    puVar1[0x4c] = puVar1[0x4c] + 1;
    puVar1[1] = puVar1[1] + 1;
    uVar4 = uVar7;
    if (!bVar2) {
      _dispatchMpegCbNodata(param_1);
    }
  }
  return uVar4;
}

_sceMpegFlush() {
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x40);
  uVar2 = 0;
  if ((*(int *)(iVar1 + 4) != 0) && (*(int *)(iVar1 + 8) != 0)) {
    _lastFrame(iVar1);
    uVar2 = 1;
    *(int *)(param_1 + 8) = *(int *)(iVar1 + 0x130) - *(int *)(iVar1 + 0xc4);
    *(undefined4 *)(iVar1 + 4) = 0;
  }
  return uVar2;
}
