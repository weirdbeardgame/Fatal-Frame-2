// STATUS: NOT STARTED

#include "print.h"

static chaGifPkOpenGifTag2() {
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *puVar1 = param_2;
  param_1[3] = (int)puVar1;
  puVar1[1] = param_3;
  *param_1 = (int)(puVar1 + 2);
  return;
}

static sceDevFontRefDirectImage() {
  ulong uVar1;
  int iVar2;
  
  if (param_5 != 0) {
    param_2 = param_2 - (ulong)(param_3 * 0x10000 + 0x40000);
    iVar2 = 7;
    uVar1 = param_5 & 0xff;
    do {
      param_2 = param_2 + (ulong)(uint)(param_3 * 0x10000);
      param_5 = param_5 >> 8;
      if (uVar1 != 0) {
        chaGifPkOpenGifTag2(param_1,0xc400000000008000,*(undefined8 *)(fontMask + (int)uVar1 * 8));
        sceGifPkAddGsData(param_1,(ulong)(param_6 << 0x20) >> 0x17 | 0xc2);
        sceGifPkAddGsData(param_1,param_4);
        sceGifPkAddGsData(param_1,param_2);
        sceGifPkAddGsData(param_1,param_2 + 0x10);
        sceGifPkAddGsData(param_1,param_2 + 0x20);
        sceGifPkAddGsData(param_1,param_2 + 0x30);
        sceGifPkAddGsData(param_1,param_2 + 0x40);
        sceGifPkAddGsData(param_1,param_2 + 0x50);
        sceGifPkAddGsData(param_1,param_2 + 0x60);
        sceGifPkAddGsData(param_1,param_2 + 0x70);
        sceGifPkAddGsData(param_1,param_2 + 0x80);
        sceGifPkAddGsData(param_1,param_2 + 0x90);
        sceGifPkCloseGifTag(param_1);
      }
      iVar2 = iVar2 + -1;
      uVar1 = param_5 & 0xff;
    } while (iVar2 != -1);
  }
  return;
}

static sceDevFontRefStrN() {
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  int iVar8;
  
  iVar8 = 0;
  param_5 = param_5 & 0xff;
  param_6 = param_6 + -1;
  iVar1 = param_2[4];
  iVar2 = param_2[2];
  iVar3 = param_2[3];
  iVar4 = param_2[1];
  uVar7 = *param_2 + param_3 * iVar2;
  sceGifPkCnt(param_1,0,0,0);
  iVar5 = 0;
  if ((param_6 != -1) && (param_5 != 0)) {
    do {
      uVar6 = (ulong)uVar7;
      uVar7 = uVar7 + iVar2;
      iVar8 = iVar8 + 1;
      param_6 = param_6 + -1;
      sceDevFontRefDirectImage
                ((int)param_1,
                 uVar6 | (ulong)((long)(iVar4 + param_4 * iVar3) << 0x20) >> 0x10 |
                 0xffffffff00000000,iVar1,param_2[0xf],*(undefined8 *)(sceFont8 + param_5 * 8),
                 param_2[5]);
      if (param_6 == -1) {
        return iVar8;
      }
      iVar5 = iVar8;
    } while (param_5 != 0);
  }
  return iVar5;
}

sceExcepConsOpen() {
  if (param_3 < 0x51) {
    DAT_004c2ca8 = (undefined4)param_3;
  }
  else {
    DAT_004c2ca8 = 0x50;
  }
  if (param_4 < 0x29) {
    DAT_004c2cac = (undefined4)param_4;
  }
  else {
    DAT_004c2cac = 0x28;
  }
  DAT_004c2cd4 = 0x80;
  DAT_004c2cd0 = 0x80;
  DAT_004c2cd8 = 0x10;
  DAT_004c2ce4 = 0x3c;
  DAT_004c2ce8 = 0x80000000;
  DAT_004c2cec = 0x80ff0000;
  DAT_004c2cf0 = 0x800000ff;
  DAT_004c2cf4 = 0x80ff00ff;
  DAT_004c2cf8 = 0x8000ff00;
  DAT_004c2cfc = 0x80ffff00;
  DAT_004c2d00 = 0x8000ffff;
  DAT_004c2d04 = 0x80ffffff;
  DAT_004c2cb0 = 0;
  DAT_004c2cb4 = 0;
  DAT_004c2cdc = 0;
  DAT_004c2ce0 = 0;
  gCons = param_1;
  DAT_004c2ca4 = param_2;
  DAT_004c2cc8 = param_1;
  DAT_004c2ccc = param_2;
  sceGifPkInit(0x4c2cb8,0x204c2900);
  sceGifPkReset(0x4c2cb8);
  return;
}

sceExcepConsLocate() {
  DAT_004c2cb0 = param_1;
  if (DAT_004c2ca8 <= param_1) {
    DAT_004c2cb0 = DAT_004c2ca8 - 1;
  }
  if (param_2 < DAT_004c2cac) {
    DAT_004c2cb4 = param_2;
    return;
  }
  DAT_004c2cb4 = DAT_004c2cac - 1;
  return;
}

sceExcepConsClose() {
  DAT_004c2cb4 = 0;
  DAT_004c2ca8 = 0;
  DAT_004c2cac = 0;
  DAT_004c2cb0 = 0;
  return;
}

sceExcepConsPrintf() {
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  char local_4c0 [1024];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  pcVar4 = local_4c0;
  local_38 = param_2;
  local_30 = param_3;
  local_28 = param_4;
  local_20 = param_5;
  local_18 = param_6;
  local_10 = param_7;
  local_8 = param_8;
  iVar2 = vsprintf(local_4c0,param_1,&local_38);
  while (local_4c0[0] != '\0') {
    sceGifPkReset(0x4c2cb8);
    if (DAT_004c2ca8 <= DAT_004c2cb0) {
      DAT_004c2cb0 = 0;
      DAT_004c2cb4 = DAT_004c2cb4 + 1;
    }
    uVar1 = DAT_004c2cb0;
    if (DAT_004c2cac <= DAT_004c2cb4) {
      DAT_004c2cb4 = 0;
    }
    if (*pcVar4 == '\n') {
      DAT_004c2cb0 = 0;
      DAT_004c2cb4 = DAT_004c2cb4 + 1;
    }
    else if ((byte)(*pcVar4 - 0x20U) < 0x5f) {
      DAT_004c2cb0 = DAT_004c2cb0 + 1;
      sceDevFontRefStrN(0x4c2cb8,0x4c2cc8,uVar1,DAT_004c2cb4,*pcVar4,1);
    }
    else {
      DAT_004c2cb0 = DAT_004c2cb0 + 1;
      sceDevFontRefStrN(0x4c2cb8,0x4c2cc8,uVar1,DAT_004c2cb4,0x20,1);
    }
    pcVar4 = pcVar4 + 1;
    sceGifPkEnd(0x4c2cb8,0,0,0);
    sceGifPkTerminate(0x4c2cb8);
    uVar3 = sceDmaGetChan(2);
    sceDmaSend(uVar3,DAT_004c2cbc & 0x8fffffff);
    iVar2 = sceGsSyncPath(0,0);
    local_4c0[0] = *pcVar4;
  }
  return iVar2;
}
