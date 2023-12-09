// STATUS: NOT STARTED

#include "mpc.h"

static _motionComp0() {
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  iVar5 = (int)param_1;
  iVar3 = *(int *)(iVar5 + 0x144);
  iVar1 = param_2 / iVar3;
  param_2 = param_2 % iVar3;
  if (iVar3 == 0) {
    trap(7);
  }
  if ((param_4 & 1) == 0) {
    if (2 < (int)param_5 - 1U) {
      _Error1(param_1,0x3eacb0,param_5);
      *(undefined4 *)(iVar5 + 0x134) = 1;
      return 0;
    }
    _getAllRefs(param_1,param_2 << 4,iVar1 << 4,param_4);
    do {
      uVar2 = REG_DMAC_9_SPR_TO_CHCR;
    } while ((uVar2 >> 8 & 1) != 0);
    dmaRefImage(param_1);
    *(undefined4 *)(*(int *)(iVar5 + 0x828) * 0x140 + iVar5 + 0x6e0) = 1;
  }
  else {
    do {
      uVar2 = REG_DMAC_9_SPR_TO_CHCR;
    } while ((uVar2 >> 8 & 1) != 0);
    *(undefined4 *)(*(int *)(iVar5 + 0x828) * 0x140 + iVar5 + 0x6e0) = 0;
  }
  if (param_3 == 1) {
    if ((param_4 & 2) != 0) {
      *(undefined4 *)(*(int *)(iVar5 + 0x828) * 0x140 + iVar5 + 0x6dc) = 1;
      goto LAB_002918d4;
    }
    iVar3 = *(int *)(iVar5 + 0x828);
  }
  else {
    iVar3 = *(int *)(iVar5 + 0x828);
  }
  *(undefined4 *)(iVar3 * 0x140 + iVar5 + 0x6dc) = 0;
LAB_002918d4:
  *(uint *)(*(int *)(iVar5 + 0x828) * 0x140 + iVar5 + 0x6d8) = (uint)param_4 & 1;
  if (*(int *)(iVar5 + 0x18c) == 3) {
    *(int *)(*(int *)(iVar5 + 0x828) * 0x140 + iVar5 + 0x6d0) =
         **(int **)(iVar5 + 0x1d8) + (param_2 * (*(int **)(iVar5 + 0x1d8))[4] + iVar1) * 0x180;
  }
  else {
    if (*(int *)(iVar5 + 0x18c) == 2) {
      piVar4 = *(int **)(iVar5 + 0x1f8);
    }
    else {
      piVar4 = *(int **)(iVar5 + 0x1e8);
    }
    *(int *)(*(int *)(iVar5 + 0x828) * 0x140 + iVar5 + 0x6d0) =
         *piVar4 + (param_2 * piVar4[4] + iVar1) * 0x180;
  }
  return 1;
}

_getAllRefs() {
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined local_d0 [16];
  undefined4 local_c0 [4];
  uint local_b0;
  
  iVar8 = (int)param_1;
  local_b0 = param_4;
  param_4 = param_4 & 8;
  *(undefined4 *)(*(int *)(iVar8 + 0x828) * 0x140 + iVar8 + 0x6d4) = 0;
  if ((param_4 == 0) && (*(int *)(iVar8 + 0x168) != 2)) goto LAB_00291e88;
  if (*(int *)(iVar8 + 0x18c) == 3) {
    if ((param_5 == 2) || (param_4 == 0)) {
      uVar6 = *(undefined4 *)(iVar8 + 0x1d0);
      uVar4 = 0;
      uVar5 = 0;
      uVar7 = 0x10;
    }
    else {
      if (param_5 == 1) {
        _getRef0(param_1,*(undefined4 *)(iVar8 + 0x1d0),*param_7,0,0,8,param_2,param_3);
        _getRef0(param_1,*(undefined4 *)(iVar8 + 0x1d0),param_7[2],1,0,8,param_2,param_3);
        goto LAB_00291e88;
      }
      if (param_5 != 3) {
        _Error1(param_1,0x3eacd8,param_5);
        goto LAB_00291e88;
      }
      _dualPrimeVector(param_1,local_d0,param_8,*param_6,(int)param_6[1] >> 1);
      _getRef0(param_1,*(undefined4 *)(iVar8 + 0x1d0),0,0,0,8,param_2,param_3);
      _getRef0(param_1,*(undefined4 *)(iVar8 + 0x1d0),1,0,0,8,param_2,param_3);
      _getRef0(param_1,*(undefined4 *)(iVar8 + 0x1d0),1,1,0,8,param_2,param_3);
      uVar6 = *(undefined4 *)(iVar8 + 0x1d0);
      uVar4 = 1;
      uVar5 = 0;
      uVar7 = 8;
    }
  }
  else {
    uVar10 = (uint)(*(int *)(iVar8 + 0x18c) == 2);
    uVar9 = 0;
    local_c0[0] = *(undefined4 *)(iVar8 + 0x1e0);
    local_c0[1] = *(undefined4 *)(iVar8 + 0x1f0);
    local_c0[2] = *(undefined4 *)(iVar8 + 0x1e4);
    local_c0[3] = *(undefined4 *)(iVar8 + 500);
    if ((*(int *)(iVar8 + 0x168) == 2) && (uVar9 = 0, *(int *)(iVar8 + 0x138) != 0)) {
      uVar9 = (uint)(uVar10 != *param_7);
    }
    if (param_5 == 1) {
      uVar10 = *param_7;
LAB_00291c98:
      uVar6 = local_c0[uVar9 * 2 + uVar10];
    }
    else {
      if (param_4 == 0) {
        uVar10 = *param_7;
        goto LAB_00291c98;
      }
      if (param_5 == 2) {
        _getRef0(param_1,local_c0[uVar9 * 2 + *param_7],0,0,0,8,param_2,param_3);
        uVar9 = 0;
        if (*(int *)(iVar8 + 0x168) == 2) {
          uVar2 = param_7[2];
          if (*(int *)(iVar8 + 0x138) != 0) {
            uVar9 = (uint)(uVar10 != uVar2);
          }
        }
        else {
          uVar2 = param_7[2];
        }
        uVar4 = 0;
        uVar6 = local_c0[uVar9 * 2 + uVar2];
        uVar5 = 8;
        uVar7 = 8;
        goto LAB_00291e60;
      }
      if (param_5 != 3) {
        _Error1(param_1,0x3eacf8,param_5);
        goto LAB_00291e88;
      }
      iVar1 = *(int *)(iVar8 + 0x138);
      _dualPrimeVector(param_1,local_d0,param_8,*param_6,param_6[1]);
      _getRef0(param_1,local_c0[uVar10],0,0,0,0x10,param_2,param_3);
      iVar3 = (uint)(iVar1 != 0) * 8;
      iVar1 = iVar3 + 4;
      if (uVar10 != 0) {
        iVar1 = iVar3;
      }
      uVar6 = *(undefined4 *)((int)local_c0 + iVar1);
    }
    uVar4 = 0;
    uVar5 = 0;
    uVar7 = 0x10;
  }
LAB_00291e60:
  _getRef0(param_1,uVar6,0,uVar4,uVar5,uVar7,param_2,param_3);
LAB_00291e88:
  if ((local_b0 & 4) != 0) {
    if (*(int *)(iVar8 + 0x18c) == 3) {
      if (param_5 != 2) {
        _getRef0(param_1,*(undefined4 *)(iVar8 + 0x1d4),param_7[1],0,0,8,param_2,param_3);
        uVar6 = 8;
        uVar9 = param_7[3];
      }
      else {
        uVar9 = 0;
        uVar6 = 0x10;
      }
      _getRef0(param_1,*(undefined4 *)(iVar8 + 0x1d4),uVar9,param_5 != 2,0,uVar6,param_2,param_3);
    }
    else if (param_5 == 1) {
      if (param_7[1] == 0) {
        uVar6 = *(undefined4 *)(iVar8 + 0x1e4);
      }
      else {
        uVar6 = *(undefined4 *)(iVar8 + 500);
      }
      _getRef0(param_1,uVar6,0,0,0,0x10,param_2,param_3);
    }
    else if (param_5 == 2) {
      if (param_7[1] == 0) {
        uVar6 = *(undefined4 *)(iVar8 + 0x1e4);
      }
      else {
        uVar6 = *(undefined4 *)(iVar8 + 500);
      }
      _getRef0(param_1,uVar6,0,0,0,8,param_2,param_3);
      if (param_7[3] == 0) {
        uVar6 = *(undefined4 *)(iVar8 + 0x1e4);
      }
      else {
        uVar6 = *(undefined4 *)(iVar8 + 500);
      }
      _getRef0(param_1,uVar6,0,0,8,8,param_2,param_3);
    }
    else {
      _Error1(param_1,0x3ead18,param_5);
    }
  }
  return;
}

_getRef0() {
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  
  iVar4 = *(int *)(param_1 + 0x834);
  iVar3 = *(int *)(param_1 + 0x828) * 0x140;
  iVar8 = ((int)param_9 >> 1) + param_7;
  iVar1 = *(int *)(param_1 + 0x6d4 + iVar3);
  iVar3 = param_1 + iVar3 + 0x5a8;
  piVar11 = (int *)(iVar3 + iVar1 * 0x1c + 0xb8);
  piVar10 = (int *)(iVar3 + iVar1 * 0x1c + 0x48);
  iVar3 = (int)param_10 >> 1;
  if (param_11 != 0) {
    iVar3 = iVar3 << 1;
  }
  iVar5 = iVar3 + param_8 + param_5 + param_3;
  iVar3 = param_2[4];
  iVar13 = iVar8 >> 4;
  iVar14 = iVar5 >> 4;
  piVar10[1] = iVar8 + iVar13 * -0x10;
  iVar3 = iVar13 * iVar3 + iVar14;
  iVar5 = iVar5 + iVar14 * -0x10;
  *piVar10 = iVar4 + (param_4 + param_5) * 0x20;
  if ((param_10 & 1) == 0) {
    if (iVar5 + (param_6 << (param_11 & 0x1f)) < 0x11) {
      piVar10[2] = param_6;
      goto LAB_0029222c;
    }
    iVar8 = (0x10 >> (param_11 & 0x1f)) - (iVar5 >> (param_11 & 0x1f));
    piVar10[2] = iVar8;
    piVar10[3] = param_6 - iVar8;
  }
  else if (iVar5 + (param_6 << (param_11 & 0x1f)) < 0x10) {
    piVar10[2] = param_6;
LAB_0029222c:
    piVar10[3] = 0;
  }
  else {
    iVar8 = ((0x10 >> (param_11 & 0x1f)) - (iVar5 >> (param_11 & 0x1f))) + -1;
    piVar10[2] = iVar8;
    piVar10[3] = param_6 - iVar8;
  }
  iVar12 = *(int *)(*(int *)(param_1 + 0x828) * 0x140 + param_1 + 0x5a8) + iVar1 * 0x600;
  param_5 = param_5 >> 1;
  piVar10[5] = iVar12 + iVar5 * 0x10;
  piVar10[4] = 0x10 << (param_11 & 0x1f);
  iVar9 = ((int)(param_9 - ((int)param_9 >> 0x1f)) >> 2) + (param_7 >> 1);
  piVar10[6] = iVar12 + iVar5 * 0x10 + 0x300;
  param_6 = param_6 >> 1;
  iVar8 = (int)(param_10 - ((int)param_10 >> 0x1f)) >> 2;
  if (param_11 == 0) {
    iVar8 = iVar8 + (param_8 >> 1) + param_5 + param_3;
  }
  else {
    iVar8 = iVar8 * 2 + (param_8 >> 1) + param_5 + param_3;
  }
  iVar6 = iVar9 >> 3;
  iVar5 = iVar8 + (iVar8 >> 3) * -8;
  uVar15 = (int)param_10 / 2 & 1;
  piVar11[1] = iVar9 + iVar6 * -8;
  *piVar11 = iVar4 + (param_4 + param_5) * 0x10 + 0x200;
  if (uVar15 == 0) {
    if (8 < iVar5 + (param_6 << (param_11 & 0x1f))) {
      iVar4 = (8 >> (param_11 & 0x1f)) - (iVar5 >> (param_11 & 0x1f));
      piVar11[2] = iVar4;
      piVar11[3] = param_6 - iVar4;
      goto LAB_002923ac;
    }
    piVar11[2] = param_6;
  }
  else {
    if (7 < iVar5 + (param_6 << (param_11 & 0x1f))) {
      iVar4 = ((8 >> (param_11 & 0x1f)) - (iVar5 >> (param_11 & 0x1f))) + -1;
      piVar11[2] = iVar4;
      piVar11[3] = param_6 - iVar4;
      goto LAB_002923ac;
    }
    piVar11[2] = param_6;
  }
  piVar11[3] = 0;
LAB_002923ac:
  piVar11[4] = 8 << (param_11 & 0x1f);
  iVar9 = *(int *)(param_1 + 0x828) * 0x140;
  iVar4 = param_2[4];
  iVar7 = iVar1 * 4 + iVar9;
  iVar12 = ((iVar6 - iVar13) * 2 + ((iVar8 >> 3) - iVar14)) * 0x180 + iVar12;
  *(undefined4 *)(param_1 + iVar7 + 0x5d0) =
       *(undefined4 *)(_rix + (param_12 << 2 | (param_9 & 1) << 1 | param_10 & 1) * 4);
  piVar10 = (int *)(param_1 + 0x6d4 + iVar9);
  iVar1 = *param_2;
  piVar11[5] = iVar12 + iVar5 * 8 + 0x100;
  piVar11[6] = iVar12 + iVar5 * 8 + 0x400;
  param_1 = param_1 + iVar7;
  iVar8 = *piVar10;
  uVar2 = *(undefined4 *)(_ri0 + (param_12 << 2 | ((int)param_9 / 2 & 1U) << 1 | uVar15) * 4);
  *(int *)(param_1 + 0x5b0) = iVar1 + iVar3 * 0x180;
  *(undefined4 *)(param_1 + 0x5e0) = uVar2;
  *(int *)(param_1 + 0x5c0) = (iVar3 + iVar4) * 0x180 + iVar1;
  *piVar10 = iVar8 + 1;
  return;
}

static _doMC() {
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_a8;
  
  iVar6 = (int)param_1;
  if ((*(int *)(iVar6 + param_2 * 0x140 + 0x6e0) != 0) &&
     (iVar7 = 0, 0 < *(int *)(iVar6 + 0x6d4 + param_2 * 0x140))) {
    do {
      iVar4 = iVar7 * 4;
      iVar1 = param_2 * 0x140;
      iVar2 = iVar7 * 0x1c;
      iVar7 = iVar7 + 1;
      iVar4 = iVar4 + iVar1;
      iVar5 = iVar6 + iVar1 + 0x5a8;
      (**(code **)(iVar6 + 0x5d0 + iVar4))(iVar5 + iVar2 + 0x48);
      (**(code **)(iVar6 + 0x5e0 + iVar4))(iVar5 + iVar2 + 0xb8);
    } while (iVar7 < *(int *)(iVar6 + 0x6d4 + iVar1));
  }
  local_a8 = iVar6 + 0x6d8;
  if ((*(int *)(local_a8 + param_2 * 0x140) != 0) &&
     (*(int *)(iVar6 + param_2 * 0x140 + 0x6e4) != 0)) {
    _Error(param_1,0x3ead38);
  }
  param_2 = param_2 * 0x140;
  if (*(int *)(local_a8 + param_2) == 0) {
    puVar3 = (undefined4 *)(iVar6 + 0x6d0 + param_2);
    if (*(int *)(iVar6 + param_2 + 0x6e4) == 0) {
      _copyAddRefImage(*puVar3,*(undefined4 *)(iVar6 + 0x834),
                       *(undefined4 *)(iVar6 + param_2 + 0x5ac));
      return;
    }
    _copyRefImage(*puVar3,*(undefined4 *)(iVar6 + 0x834));
    return;
  }
  _copyRefImage(*(undefined4 *)(iVar6 + 0x6d0 + param_2),*(undefined4 *)(iVar6 + param_2 + 0x5ac));
  return;
}

_rix_000() {
  int iVar1;
  undefined in_zero_qw [16];
  undefined (*pauVar2) [16];
  undefined (*pauVar3) [16];
  uint uVar4;
  undefined auVar5 [16];
  uint uVar6;
  undefined auVar7 [16];
  undefined4 *puVar8;
  uint uVar9;
  
  pauVar2 = (undefined (*) [16])param_1[5];
  pauVar3 = (undefined (*) [16])param_1[6];
  uVar4 = param_1[2];
  puVar8 = (undefined4 *)*param_1;
  iVar1 = param_1[4];
  uVar9 = 0xffffffff;
  do {
    do {
      auVar5 = *pauVar2;
      uVar4 = uVar4 - 1;
      pauVar2 = (undefined (*) [16])(*pauVar2 + iVar1);
      auVar7 = _qfsrv(*pauVar3,auVar5);
      auVar5 = _pextlb(0,auVar7._0_8_);
      auVar7 = _pextub(in_zero_qw,auVar7);
      *puVar8 = auVar5._0_4_;
      puVar8[1] = auVar5._4_4_;
      puVar8[2] = auVar5._8_4_;
      puVar8[3] = auVar5._12_4_;
      pauVar3 = (undefined (*) [16])(*pauVar3 + iVar1);
      puVar8[4] = auVar7._0_4_;
      puVar8[5] = auVar7._4_4_;
      puVar8[6] = auVar7._8_4_;
      puVar8[7] = auVar7._12_4_;
      puVar8 = (undefined4 *)((int)puVar8 + iVar1 * 2);
    } while (0 < (int)uVar4);
    pauVar2 = pauVar2[8];
    pauVar3 = pauVar3[8];
    uVar4 = param_1[3];
    uVar6 = uVar9 & uVar4;
    uVar9 = 0;
  } while (uVar6 != 0);
  return;
}

_ri0_000() {
  bool bVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined in_t0_qw [16];
  undefined auVar6 [16];
  undefined in_t1_qw [16];
  undefined auVar7 [16];
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  int iVar11;
  
  puVar3 = (undefined8 *)param_1[5];
  puVar4 = (undefined8 *)param_1[6];
  puVar9 = (undefined4 *)*param_1;
  iVar2 = param_1[4];
  iVar11 = -1;
  do {
    uVar5 = param_1[2];
    uVar10 = 0xffffffff;
    do {
      do {
        auVar6._8_8_ = in_t0_qw._8_8_;
        auVar6._0_8_ = *puVar3;
        auVar7._8_8_ = in_t1_qw._8_8_;
        auVar7._0_8_ = *puVar4;
        auVar6 = _pcpyld(auVar7,auVar6);
        in_t1_qw = _qfsrv(auVar6,auVar6);
        in_t0_qw = _pextlb(0,in_t1_qw._0_8_);
        *puVar9 = in_t0_qw._0_4_;
        puVar9[1] = in_t0_qw._4_4_;
        puVar9[2] = in_t0_qw._8_4_;
        puVar9[3] = in_t0_qw._12_4_;
        uVar5 = uVar5 - 1;
        puVar3 = (undefined8 *)((int)puVar3 + iVar2);
        puVar9 = (undefined4 *)((int)puVar9 + iVar2 * 2);
        puVar4 = (undefined8 *)((int)puVar4 + iVar2);
      } while (0 < (int)uVar5);
      puVar3 = puVar3 + 0x28;
      puVar4 = puVar4 + 0x28;
      uVar5 = param_1[3];
      uVar8 = uVar10 & uVar5;
      uVar10 = 0;
    } while (uVar8 != 0);
    puVar3 = (undefined8 *)(param_1[5] + 0x40);
    puVar4 = (undefined8 *)(param_1[6] + 0x40);
    puVar9 = (undefined4 *)(*param_1 + 0x80);
    bVar1 = iVar11 != 0;
    iVar11 = 0;
  } while (bVar1);
  return;
}

_rix_001() {
  int iVar1;
  undefined in_zero_qw [16];
  undefined auVar2 [16];
  undefined (*pauVar3) [16];
  undefined (*pauVar4) [16];
  uint uVar5;
  undefined auVar6 [16];
  uint uVar7;
  undefined auVar8 [16];
  undefined auVar9 [16];
  uint uVar10;
  undefined4 *puVar11;
  undefined auVar12 [16];
  
  auVar12 = _psrlh(~in_zero_qw,0xf);
  pauVar3 = (undefined (*) [16])param_1[5];
  pauVar4 = (undefined (*) [16])param_1[6];
  uVar5 = param_1[2];
  puVar11 = (undefined4 *)*param_1;
  iVar1 = param_1[4];
  auVar8 = _qfsrv(*pauVar4,*pauVar3);
  auVar6 = _pextlb(0,auVar8._0_8_);
  uVar10 = 0xffffffff;
  auVar8 = _pextub(in_zero_qw,auVar8);
  if (uVar5 == 0) goto LAB_0029288c;
  do {
    do {
      pauVar3 = (undefined (*) [16])(*pauVar3 + iVar1);
      pauVar4 = (undefined (*) [16])(*pauVar4 + iVar1);
      auVar2 = _qfsrv(*pauVar4,*pauVar3);
      auVar9 = _pextlb(0,auVar2._0_8_);
      uVar5 = uVar5 - 1;
      auVar2 = _pextub(in_zero_qw,auVar2);
      auVar6 = _paddh(auVar9,auVar6);
      auVar8 = _paddh(auVar2,auVar8);
      auVar6 = _paddh(auVar12,auVar6);
      auVar8 = _paddh(auVar12,auVar8);
      auVar6 = _psrlh(auVar6,1);
      auVar8 = _psrlh(auVar8,1);
      *puVar11 = auVar6._0_4_;
      puVar11[1] = auVar6._4_4_;
      puVar11[2] = auVar6._8_4_;
      puVar11[3] = auVar6._12_4_;
      puVar11[4] = auVar8._0_4_;
      puVar11[5] = auVar8._4_4_;
      puVar11[6] = auVar8._8_4_;
      puVar11[7] = auVar8._12_4_;
      puVar11 = (undefined4 *)((int)puVar11 + iVar1 * 2);
      auVar6 = auVar9;
      auVar8 = auVar2;
    } while (0 < (int)uVar5);
LAB_0029288c:
    pauVar3 = pauVar3[8];
    pauVar4 = pauVar4[8];
    uVar5 = param_1[3];
    uVar7 = uVar10 & uVar5;
    uVar10 = 0;
  } while (uVar7 != 0);
  return;
}

_ri0_001() {
  int iVar1;
  undefined auVar2 [16];
  uint uVar3;
  undefined in_zero_qw [16];
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined in_t0_qw [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined in_t1_qw [16];
  undefined auVar9 [16];
  uint uVar10;
  undefined8 in_t3_udw;
  undefined4 *puVar11;
  undefined auVar12 [16];
  
  auVar12 = _psrlh(~in_zero_qw,0xf);
  puVar4 = (undefined8 *)param_1[5];
  puVar5 = (undefined8 *)param_1[6];
  puVar11 = (undefined4 *)*param_1;
  iVar1 = param_1[4];
  uVar10 = 1;
  do {
    uVar6 = (ulong)param_1[2];
    auVar7._8_8_ = in_t0_qw._8_8_;
    auVar7._0_8_ = *puVar4;
    in_t1_qw._0_8_ = *puVar5;
    auVar7 = _pcpyld(in_t1_qw,auVar7);
    in_t0_qw = _qfsrv(auVar7,auVar7);
    uVar10 = uVar10 | 0x8000;
    auVar7 = _pextlb(0,in_t0_qw._0_8_);
    if (uVar6 == 0) goto LAB_00292934;
    do {
      do {
        puVar4 = (undefined8 *)((int)puVar4 + iVar1);
        puVar5 = (undefined8 *)((int)puVar5 + iVar1);
        auVar8._8_8_ = in_t0_qw._8_8_;
        auVar8._0_8_ = *puVar4;
        auVar9._8_8_ = in_t1_qw._8_8_;
        auVar9._0_8_ = *puVar5;
        auVar8 = _pcpyld(auVar9,auVar8);
        in_t0_qw = _qfsrv(auVar8,auVar8);
        auVar8 = _pextlb(0,in_t0_qw._0_8_);
        uVar6 = (ulong)((int)uVar6 + -1);
        in_t1_qw = _paddh(auVar7,auVar8);
        auVar7 = _paddh(auVar12,in_t1_qw);
        auVar7 = _psrlh(auVar7,1);
        *puVar11 = auVar7._0_4_;
        puVar11[1] = auVar7._4_4_;
        puVar11[2] = auVar7._8_4_;
        puVar11[3] = auVar7._12_4_;
        puVar11 = (undefined4 *)((int)puVar11 + iVar1 * 2);
        auVar7 = auVar8;
      } while (0 < (long)uVar6);
LAB_00292934:
      auVar2._4_4_ = 0;
      auVar2._0_4_ = uVar10;
      auVar2._8_8_ = in_t3_udw;
      auVar8 = _psrah(auVar2,0xf);
      puVar4 = puVar4 + 0x28;
      uVar6 = (ulong)param_1[3];
      puVar5 = puVar5 + 0x28;
      uVar3 = uVar10 & 0x7fff;
      uVar10 = uVar10 & 0x7fff;
    } while ((auVar8._0_8_ & uVar6) != 0);
    puVar4 = (undefined8 *)(param_1[5] + 0x40);
    puVar5 = (undefined8 *)(param_1[6] + 0x40);
    puVar11 = (undefined4 *)(*param_1 + 0x80);
    uVar10 = 0;
  } while (uVar3 != 0);
  return;
}

_rix_010() {
  int iVar1;
  undefined in_zero_qw [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined (*pauVar4) [16];
  undefined (*pauVar5) [16];
  uint uVar6;
  undefined auVar7 [16];
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined auVar11 [16];
  undefined auVar12 [16];
  
  auVar12 = _psrlh(~in_zero_qw,0xf);
  pauVar4 = (undefined (*) [16])param_1[5];
  pauVar5 = (undefined (*) [16])param_1[6];
  uVar6 = param_1[2];
  puVar10 = (undefined4 *)*param_1;
  iVar1 = param_1[4];
  uVar8 = 0xffffffff;
  do {
    do {
      auVar2 = _qfsrv(*pauVar5,*pauVar4);
      auVar3 = _qfsrv(*pauVar4,*pauVar5);
      auVar7 = _pextlb(0,auVar2._0_8_);
      uVar6 = uVar6 - 1;
      auVar11 = _pextub(in_zero_qw,auVar2);
      auVar3 = _qfsrv(auVar3,auVar2);
      auVar2 = _pextlb(0,auVar3._0_8_);
      auVar3 = _pextub(in_zero_qw,auVar3);
      auVar2 = _paddh(auVar2,auVar7);
      auVar3 = _paddh(auVar3,auVar11);
      auVar2 = _paddh(auVar12,auVar2);
      auVar3 = _paddh(auVar12,auVar3);
      auVar2 = _psrlh(auVar2,1);
      auVar3 = _psrlh(auVar3,1);
      *puVar10 = auVar2._0_4_;
      puVar10[1] = auVar2._4_4_;
      puVar10[2] = auVar2._8_4_;
      puVar10[3] = auVar2._12_4_;
      puVar10[4] = auVar3._0_4_;
      puVar10[5] = auVar3._4_4_;
      puVar10[6] = auVar3._8_4_;
      puVar10[7] = auVar3._12_4_;
      pauVar4 = (undefined (*) [16])(*pauVar4 + iVar1);
      pauVar5 = (undefined (*) [16])(*pauVar5 + iVar1);
      puVar10 = (undefined4 *)((int)puVar10 + iVar1 * 2);
    } while (0 < (int)uVar6);
    pauVar4 = pauVar4[8];
    pauVar5 = pauVar5[8];
    uVar6 = param_1[3];
    uVar9 = uVar8 & uVar6;
    uVar8 = 0;
  } while (uVar9 != 0);
  return;
}

_ri0_010() {
  bool bVar1;
  int iVar2;
  undefined in_zero_qw [16];
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined in_t0_qw [16];
  undefined auVar6 [16];
  undefined in_t1_qw [16];
  undefined auVar7 [16];
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined auVar12 [16];
  
  auVar12 = _psrlh(~in_zero_qw,0xf);
  puVar3 = (undefined8 *)param_1[5];
  puVar4 = (undefined8 *)param_1[6];
  puVar11 = (undefined4 *)*param_1;
  iVar10 = -1;
  iVar2 = param_1[4];
  do {
    uVar5 = param_1[2];
    uVar9 = 0xffffffff;
    do {
      do {
        auVar6._8_8_ = in_t0_qw._8_8_;
        auVar6._0_8_ = *puVar3;
        auVar7._8_8_ = in_t1_qw._8_8_;
        auVar7._0_8_ = *puVar4;
        auVar6 = _pcpyld(auVar7,auVar6);
        auVar6 = _qfsrv(auVar6,auVar6);
        in_t1_qw = _pextlb(0,auVar6._0_8_);
        uVar5 = uVar5 - 1;
        puVar3 = (undefined8 *)((int)puVar3 + iVar2);
        puVar4 = (undefined8 *)((int)puVar4 + iVar2);
        auVar6 = _qfsrv(in_zero_qw,auVar6);
        in_t0_qw = _pextlb(0,auVar6._0_8_);
        auVar6 = _paddh(in_t0_qw,in_t1_qw);
        auVar6 = _paddh(auVar12,auVar6);
        auVar6 = _psrlh(auVar6,1);
        *puVar11 = auVar6._0_4_;
        puVar11[1] = auVar6._4_4_;
        puVar11[2] = auVar6._8_4_;
        puVar11[3] = auVar6._12_4_;
        puVar11 = (undefined4 *)((int)puVar11 + iVar2 * 2);
      } while (0 < (int)uVar5);
      puVar3 = puVar3 + 0x28;
      puVar4 = puVar4 + 0x28;
      uVar5 = param_1[3];
      uVar8 = uVar9 & uVar5;
      uVar9 = 0;
    } while (uVar8 != 0);
    puVar3 = (undefined8 *)(param_1[5] + 0x40);
    puVar4 = (undefined8 *)(param_1[6] + 0x40);
    puVar11 = (undefined4 *)(*param_1 + 0x80);
    bVar1 = iVar10 != 0;
    iVar10 = 0;
  } while (bVar1);
  return;
}

_rix_011() {
  int iVar1;
  undefined in_zero_qw [16];
  undefined (*pauVar2) [16];
  undefined (*pauVar3) [16];
  uint uVar4;
  undefined auVar5 [16];
  uint uVar6;
  undefined auVar7 [16];
  undefined auVar8 [16];
  uint uVar9;
  undefined4 *puVar10;
  undefined auVar11 [16];
  undefined auVar12 [16];
  undefined auVar13 [16];
  undefined auVar14 [16];
  
  auVar13 = _psrlh(~in_zero_qw,0xf);
  auVar14 = _psllh(auVar13,1);
  pauVar2 = (undefined (*) [16])param_1[5];
  pauVar3 = (undefined (*) [16])param_1[6];
  uVar4 = param_1[2];
  puVar10 = (undefined4 *)*param_1;
  iVar1 = param_1[4];
  auVar7 = _qfsrv(*pauVar3,*pauVar2);
  auVar11 = _qfsrv(*pauVar2,*pauVar3);
  auVar13 = _pextlb(0,auVar7._0_8_);
  auVar5 = _pextub(in_zero_qw,auVar7);
  uVar9 = 0xffffffff;
  auVar11 = _qfsrv(auVar11,auVar7);
  auVar7 = _pextlb(0,auVar11._0_8_);
  auVar11 = _pextub(in_zero_qw,auVar11);
  auVar13 = _paddh(auVar7,auVar13);
  auVar5 = _paddh(auVar11,auVar5);
  if (uVar4 == 0) goto LAB_00292bc0;
  do {
    do {
      pauVar2 = (undefined (*) [16])(*pauVar2 + iVar1);
      pauVar3 = (undefined (*) [16])(*pauVar3 + iVar1);
      auVar7 = _qfsrv(*pauVar3,*pauVar2);
      auVar11 = _qfsrv(*pauVar2,*pauVar3);
      auVar8 = _pextlb(0,auVar7._0_8_);
      uVar4 = uVar4 - 1;
      auVar12 = _pextub(in_zero_qw,auVar7);
      auVar11 = _qfsrv(auVar11,auVar7);
      auVar7 = _pextlb(0,auVar11._0_8_);
      auVar11 = _pextub(in_zero_qw,auVar11);
      auVar7 = _paddh(auVar7,auVar8);
      auVar11 = _paddh(auVar11,auVar12);
      auVar13 = _paddh(auVar7,auVar13);
      auVar5 = _paddh(auVar11,auVar5);
      auVar13 = _paddh(auVar14,auVar13);
      auVar5 = _paddh(auVar14,auVar5);
      auVar13 = _psrlh(auVar13,2);
      auVar5 = _psrlh(auVar5,2);
      *puVar10 = auVar13._0_4_;
      puVar10[1] = auVar13._4_4_;
      puVar10[2] = auVar13._8_4_;
      puVar10[3] = auVar13._12_4_;
      puVar10[4] = auVar5._0_4_;
      puVar10[5] = auVar5._4_4_;
      puVar10[6] = auVar5._8_4_;
      puVar10[7] = auVar5._12_4_;
      puVar10 = (undefined4 *)((int)puVar10 + iVar1 * 2);
      auVar13 = auVar7;
      auVar5 = auVar11;
    } while (0 < (int)uVar4);
LAB_00292bc0:
    pauVar2 = pauVar2[8];
    pauVar3 = pauVar3[8];
    uVar4 = param_1[3];
    uVar6 = uVar9 & uVar4;
    uVar9 = 0;
  } while (uVar6 != 0);
  return;
}

_ri0_011() {
  int iVar1;
  undefined auVar2 [16];
  uint uVar3;
  undefined in_zero_qw [16];
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined in_t0_qw [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined in_t1_qw [16];
  undefined auVar9 [16];
  undefined auVar10 [16];
  uint uVar11;
  undefined8 in_t3_udw;
  undefined4 *puVar12;
  undefined auVar13 [16];
  
  auVar13 = _psrlh(~in_zero_qw,0xf);
  auVar13 = _psllh(auVar13,1);
  puVar4 = (undefined8 *)param_1[5];
  puVar5 = (undefined8 *)param_1[6];
  puVar12 = (undefined4 *)*param_1;
  iVar1 = param_1[4];
  uVar11 = 1;
  do {
    uVar6 = (ulong)param_1[2];
    auVar7._8_8_ = in_t0_qw._8_8_;
    auVar7._0_8_ = *puVar4;
    auVar8._8_8_ = in_t1_qw._8_8_;
    auVar8._0_8_ = *puVar5;
    auVar7 = _pcpyld(auVar8,auVar7);
    auVar7 = _qfsrv(auVar7,auVar7);
    in_t1_qw = _pextlb(0,auVar7._0_8_);
    puVar4 = (undefined8 *)((int)puVar4 + iVar1);
    uVar11 = uVar11 | 0x8000;
    auVar7 = _qfsrv(in_zero_qw,auVar7);
    in_t0_qw = _pextlb(0,auVar7._0_8_);
    auVar7 = _paddh(in_t0_qw,in_t1_qw);
    if (uVar6 == 0) goto LAB_00292c94;
    do {
      do {
        puVar5 = (undefined8 *)((int)puVar5 + iVar1);
        auVar10._8_8_ = in_t0_qw._8_8_;
        auVar10._0_8_ = *puVar4;
        auVar9._8_8_ = in_t1_qw._8_8_;
        auVar9._0_8_ = *puVar5;
        auVar8 = _pcpyld(auVar9,auVar10);
        auVar8 = _qfsrv(auVar8,auVar8);
        auVar10 = _pextlb(0,auVar8._0_8_);
        uVar6 = (ulong)((int)uVar6 + -1);
        puVar4 = (undefined8 *)((int)puVar4 + iVar1);
        auVar8 = _qfsrv(in_zero_qw,auVar8);
        auVar8 = _pextlb(0,auVar8._0_8_);
        auVar10 = _paddh(auVar8,auVar10);
        in_t1_qw = _paddh(auVar7,auVar10);
        auVar7 = _paddh(auVar13,in_t1_qw);
        in_t0_qw._8_8_ = auVar8._8_8_;
        in_t0_qw._0_8_ = (long)(iVar1 * 2);
        auVar7 = _psrlh(auVar7,2);
        *puVar12 = auVar7._0_4_;
        puVar12[1] = auVar7._4_4_;
        puVar12[2] = auVar7._8_4_;
        puVar12[3] = auVar7._12_4_;
        puVar12 = (undefined4 *)((int)puVar12 + iVar1 * 2);
        auVar7 = auVar10;
      } while (0 < (long)uVar6);
LAB_00292c94:
      auVar2._4_4_ = 0;
      auVar2._0_4_ = uVar11;
      auVar2._8_8_ = in_t3_udw;
      auVar8 = _psrah(auVar2,0xf);
      puVar4 = puVar4 + 0x28;
      uVar6 = (ulong)param_1[3];
      puVar5 = puVar5 + 0x28;
      uVar3 = uVar11 & 0x7fff;
      uVar11 = uVar11 & 0x7fff;
    } while ((auVar8._0_8_ & uVar6) != 0);
    puVar4 = (undefined8 *)(param_1[5] + 0x40);
    puVar5 = (undefined8 *)(param_1[6] + 0x40);
    puVar12 = (undefined4 *)(*param_1 + 0x80);
    uVar11 = 0;
  } while (uVar3 != 0);
  return;
}

_rix_100() {
  undefined (*pauVar1) [16];
  undefined in_zero_qw [16];
  undefined auVar2 [16];
  undefined (*pauVar3) [16];
  undefined (*pauVar4) [16];
  undefined (*pauVar5) [16];
  undefined auVar6 [16];
  uint uVar7;
  uint uVar8;
  undefined (*pauVar9) [16];
  undefined auVar10 [16];
  
  pauVar3 = param_1[5];
  pauVar4 = param_1[6];
  pauVar5 = param_1[2];
  pauVar9 = *param_1;
  pauVar1 = param_1[4];
  uVar7 = 0xffffffff;
  do {
    do {
      auVar2 = _qfsrv(*pauVar4,*pauVar3);
      auVar6 = _pextlb(0,auVar2._0_8_);
      auVar10 = _pextub(in_zero_qw,auVar2);
      auVar2 = _paddh(auVar6,*pauVar9);
      auVar6 = _paddh(auVar10,pauVar9[1]);
      auVar10 = _psrlh(~in_zero_qw,0xf);
      auVar2 = _paddh(auVar10,auVar2);
      auVar2 = _psrlh(auVar2,1);
      auVar6 = _paddh(auVar10,auVar6);
      auVar6 = _psrlh(auVar6,1);
      *(int *)*pauVar9 = auVar2._0_4_;
      *(int *)(*pauVar9 + 4) = auVar2._4_4_;
      *(int *)(*pauVar9 + 8) = auVar2._8_4_;
      *(int *)(*pauVar9 + 0xc) = auVar2._12_4_;
      *(int *)pauVar9[1] = auVar6._0_4_;
      *(int *)(pauVar9[1] + 4) = auVar6._4_4_;
      *(int *)(pauVar9[1] + 8) = auVar6._8_4_;
      *(int *)(pauVar9[1] + 0xc) = auVar6._12_4_;
      pauVar5 = (undefined (*) [16])(pauVar5[-1] + 0xf);
      pauVar3 = (undefined (*) [16])(*pauVar1 + (int)*pauVar3);
      pauVar9 = (undefined (*) [16])(*pauVar9 + (int)pauVar1 * 2);
      pauVar4 = (undefined (*) [16])(*pauVar1 + (int)*pauVar4);
    } while (0 < (int)pauVar5);
    pauVar3 = pauVar3[8];
    pauVar4 = pauVar4[8];
    pauVar5 = param_1[3];
    uVar8 = uVar7 & (uint)pauVar5;
    uVar7 = 0;
  } while (uVar8 != 0);
  return;
}

_ri0_100() {
  bool bVar1;
  undefined (*pauVar2) [16];
  undefined in_zero_qw [16];
  undefined (*pauVar3) [16];
  undefined (*pauVar4) [16];
  undefined (*pauVar5) [16];
  undefined in_t0_qw [16];
  undefined auVar6 [16];
  undefined in_t1_qw [16];
  uint uVar7;
  undefined auVar8 [16];
  uint uVar9;
  int iVar10;
  undefined (*pauVar11) [16];
  
  pauVar3 = param_1[5];
  pauVar4 = param_1[6];
  pauVar11 = *param_1;
  iVar10 = -1;
  pauVar2 = param_1[4];
  do {
    pauVar5 = param_1[2];
    uVar9 = 0xffffffff;
    do {
      do {
        auVar6._8_8_ = in_t0_qw._8_8_;
        auVar6._0_8_ = *(undefined8 *)*pauVar3;
        auVar8._8_8_ = in_t1_qw._8_8_;
        auVar8._0_8_ = *(undefined8 *)*pauVar4;
        auVar6 = _pcpyld(auVar8,auVar6);
        auVar6 = _qfsrv(auVar6,auVar6);
        auVar6 = _pextlb(0,auVar6._0_8_);
        pauVar5 = (undefined (*) [16])(pauVar5[-1] + 0xf);
        pauVar3 = (undefined (*) [16])(*pauVar2 + (int)*pauVar3);
        pauVar4 = (undefined (*) [16])(*pauVar2 + (int)*pauVar4);
        in_t0_qw = *pauVar11;
        auVar8 = _paddh(in_t0_qw,auVar6);
        auVar6 = _pcgth(auVar8,in_zero_qw);
        in_t1_qw = _psrlh(auVar6,0xf);
        auVar6 = _paddh(in_t1_qw,auVar8);
        auVar6 = _psrlh(auVar6,1);
        *(int *)*pauVar11 = auVar6._0_4_;
        *(int *)(*pauVar11 + 4) = auVar6._4_4_;
        *(int *)(*pauVar11 + 8) = auVar6._8_4_;
        *(int *)(*pauVar11 + 0xc) = auVar6._12_4_;
        pauVar11 = (undefined (*) [16])(*pauVar11 + (int)pauVar2 * 2);
      } while (0 < (int)pauVar5);
      pauVar3 = pauVar3[0x14];
      pauVar4 = pauVar4[0x14];
      pauVar5 = param_1[3];
      uVar7 = uVar9 & (uint)pauVar5;
      uVar9 = 0;
    } while (uVar7 != 0);
    pauVar3 = param_1[5][4];
    pauVar4 = param_1[6][4];
    pauVar11 = (*param_1)[8];
    bVar1 = iVar10 != 0;
    iVar10 = 0;
  } while (bVar1);
  return;
}

_rix_101() {
  undefined (*pauVar1) [16];
  undefined in_zero_qw [16];
  undefined auVar2 [16];
  undefined (*pauVar3) [16];
  undefined (*pauVar4) [16];
  undefined (*pauVar5) [16];
  undefined auVar6 [16];
  uint uVar7;
  undefined auVar8 [16];
  undefined auVar9 [16];
  uint uVar10;
  undefined (*pauVar11) [16];
  undefined auVar12 [16];
  undefined auVar13 [16];
  
  auVar13 = _psrlh(~in_zero_qw,0xf);
  pauVar3 = param_1[5];
  pauVar4 = param_1[6];
  pauVar5 = param_1[2];
  pauVar11 = *param_1;
  pauVar1 = param_1[4];
  auVar8 = _qfsrv(*pauVar4,*pauVar3);
  auVar6 = _pextlb(0,auVar8._0_8_);
  uVar10 = 0xffffffff;
  auVar8 = _pextub(in_zero_qw,auVar8);
  if (pauVar5 == (undefined (*) [16])0x0) goto LAB_00292eec;
  do {
    do {
      pauVar3 = (undefined (*) [16])(*pauVar1 + (int)*pauVar3);
      pauVar4 = (undefined (*) [16])(*pauVar1 + (int)*pauVar4);
      auVar2 = _qfsrv(*pauVar4,*pauVar3);
      auVar9 = _pextlb(0,auVar2._0_8_);
      pauVar5 = (undefined (*) [16])(pauVar5[-1] + 0xf);
      auVar12 = _pextub(in_zero_qw,auVar2);
      auVar6 = _paddh(auVar9,auVar6);
      auVar8 = _paddh(auVar12,auVar8);
      auVar6 = _paddh(auVar13,auVar6);
      auVar8 = _paddh(auVar13,auVar8);
      auVar6 = _psrlh(auVar6,1);
      auVar8 = _psrlh(auVar8,1);
      auVar6 = _paddh(*pauVar11,auVar6);
      auVar8 = _paddh(pauVar11[1],auVar8);
      auVar6 = _paddh(auVar13,auVar6);
      auVar6 = _psrlh(auVar6,1);
      auVar2 = _pcgth(auVar8,in_zero_qw);
      auVar2 = _psrlh(auVar2,0xf);
      auVar8 = _paddh(auVar2,auVar8);
      auVar8 = _psrlh(auVar8,1);
      *(int *)*pauVar11 = auVar6._0_4_;
      *(int *)(*pauVar11 + 4) = auVar6._4_4_;
      *(int *)(*pauVar11 + 8) = auVar6._8_4_;
      *(int *)(*pauVar11 + 0xc) = auVar6._12_4_;
      *(int *)pauVar11[1] = auVar8._0_4_;
      *(int *)(pauVar11[1] + 4) = auVar8._4_4_;
      *(int *)(pauVar11[1] + 8) = auVar8._8_4_;
      *(int *)(pauVar11[1] + 0xc) = auVar8._12_4_;
      pauVar11 = (undefined (*) [16])(*pauVar11 + (int)pauVar1 * 2);
      auVar6 = auVar9;
      auVar8 = auVar12;
    } while (0 < (int)pauVar5);
LAB_00292eec:
    pauVar3 = pauVar3[8];
    pauVar4 = pauVar4[8];
    pauVar5 = param_1[3];
    uVar7 = uVar10 & (uint)pauVar5;
    uVar10 = 0;
  } while (uVar7 != 0);
  return;
}

_ri0_101() {
  undefined (*pauVar1) [16];
  undefined auVar2 [16];
  uint uVar3;
  undefined in_zero_qw [16];
  undefined (*pauVar4) [16];
  undefined (*pauVar5) [16];
  ulong uVar6;
  undefined in_t0_qw [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined in_t1_qw [16];
  undefined auVar9 [16];
  uint uVar10;
  undefined8 in_t3_udw;
  undefined (*pauVar11) [16];
  undefined auVar12 [16];
  
  auVar12 = _psrlh(~in_zero_qw,0xf);
  pauVar4 = param_1[5];
  pauVar5 = param_1[6];
  pauVar11 = *param_1;
  pauVar1 = param_1[4];
  uVar10 = 1;
  do {
    uVar6 = (ulong)(int)param_1[2];
    auVar7._8_8_ = in_t0_qw._8_8_;
    auVar7._0_8_ = *(undefined8 *)*pauVar4;
    in_t1_qw._0_8_ = *(undefined8 *)*pauVar5;
    auVar7 = _pcpyld(in_t1_qw,auVar7);
    in_t0_qw = _qfsrv(auVar7,auVar7);
    uVar10 = uVar10 | 0x8000;
    auVar7 = _pextlb(0,in_t0_qw._0_8_);
    if (uVar6 == 0) goto LAB_00292fac;
    do {
      do {
        pauVar4 = (undefined (*) [16])(*pauVar1 + (int)*pauVar4);
        pauVar5 = (undefined (*) [16])(*pauVar1 + (int)*pauVar5);
        auVar8._8_8_ = in_t0_qw._8_8_;
        auVar8._0_8_ = *(undefined8 *)*pauVar4;
        auVar9._8_8_ = in_t1_qw._8_8_;
        auVar9._0_8_ = *(undefined8 *)*pauVar5;
        auVar8 = _pcpyld(auVar9,auVar8);
        auVar8 = _qfsrv(auVar8,auVar8);
        auVar8 = _pextlb(0,auVar8._0_8_);
        uVar6 = (ulong)((int)uVar6 + -1);
        auVar7 = _paddh(auVar7,auVar8);
        auVar7 = _paddh(auVar12,auVar7);
        auVar7 = _psrlh(auVar7,1);
        in_t0_qw = *pauVar11;
        auVar9 = _paddh(in_t0_qw,auVar7);
        auVar7 = _pcgth(auVar9,in_zero_qw);
        in_t1_qw = _psrlh(auVar7,0xf);
        auVar7 = _paddh(in_t1_qw,auVar9);
        auVar7 = _psrlh(auVar7,1);
        *(int *)*pauVar11 = auVar7._0_4_;
        *(int *)(*pauVar11 + 4) = auVar7._4_4_;
        *(int *)(*pauVar11 + 8) = auVar7._8_4_;
        *(int *)(*pauVar11 + 0xc) = auVar7._12_4_;
        pauVar11 = (undefined (*) [16])(*pauVar11 + (int)pauVar1 * 2);
        auVar7 = auVar8;
      } while (0 < (long)uVar6);
LAB_00292fac:
      auVar2._4_4_ = 0;
      auVar2._0_4_ = uVar10;
      auVar2._8_8_ = in_t3_udw;
      auVar8 = _psrah(auVar2,0xf);
      pauVar4 = pauVar4[0x14];
      uVar6 = (ulong)(int)param_1[3];
      pauVar5 = pauVar5[0x14];
      uVar3 = uVar10 & 0x7fff;
      uVar10 = uVar10 & 0x7fff;
    } while ((auVar8._0_8_ & uVar6) != 0);
    pauVar4 = param_1[5][4];
    pauVar5 = param_1[6][4];
    pauVar11 = (*param_1)[8];
    uVar10 = 0;
  } while (uVar3 != 0);
  return;
}

_rix_110() {
  undefined (*pauVar1) [16];
  undefined in_zero_qw [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined (*pauVar4) [16];
  undefined (*pauVar5) [16];
  undefined (*pauVar6) [16];
  undefined auVar7 [16];
  uint uVar8;
  uint uVar9;
  undefined (*pauVar10) [16];
  undefined auVar11 [16];
  undefined auVar12 [16];
  
  auVar12 = _psrlh(~in_zero_qw,0xf);
  pauVar4 = param_1[5];
  pauVar5 = param_1[6];
  pauVar6 = param_1[2];
  pauVar10 = *param_1;
  pauVar1 = param_1[4];
  uVar8 = 0xffffffff;
  do {
    do {
      auVar2 = _qfsrv(*pauVar5,*pauVar4);
      auVar3 = _qfsrv(*pauVar4,*pauVar5);
      auVar7 = _pextlb(0,auVar2._0_8_);
      pauVar6 = (undefined (*) [16])(pauVar6[-1] + 0xf);
      auVar11 = _pextub(in_zero_qw,auVar2);
      auVar3 = _qfsrv(auVar3,auVar2);
      auVar2 = _pextlb(0,auVar3._0_8_);
      auVar3 = _pextub(in_zero_qw,auVar3);
      auVar2 = _paddh(auVar2,auVar7);
      auVar3 = _paddh(auVar3,auVar11);
      auVar2 = _paddh(auVar12,auVar2);
      auVar3 = _paddh(auVar12,auVar3);
      auVar2 = _psrlh(auVar2,1);
      auVar3 = _psrlh(auVar3,1);
      auVar2 = _paddh(*pauVar10,auVar2);
      auVar3 = _paddh(pauVar10[1],auVar3);
      auVar2 = _paddh(auVar12,auVar2);
      auVar2 = _psrlh(auVar2,1);
      auVar7 = _pcgth(auVar3,in_zero_qw);
      auVar7 = _psrlh(auVar7,0xf);
      auVar3 = _paddh(auVar7,auVar3);
      auVar3 = _psrlh(auVar3,1);
      *(int *)*pauVar10 = auVar2._0_4_;
      *(int *)(*pauVar10 + 4) = auVar2._4_4_;
      *(int *)(*pauVar10 + 8) = auVar2._8_4_;
      *(int *)(*pauVar10 + 0xc) = auVar2._12_4_;
      *(int *)pauVar10[1] = auVar3._0_4_;
      *(int *)(pauVar10[1] + 4) = auVar3._4_4_;
      *(int *)(pauVar10[1] + 8) = auVar3._8_4_;
      *(int *)(pauVar10[1] + 0xc) = auVar3._12_4_;
      pauVar4 = (undefined (*) [16])(*pauVar1 + (int)*pauVar4);
      pauVar5 = (undefined (*) [16])(*pauVar1 + (int)*pauVar5);
      pauVar10 = (undefined (*) [16])(*pauVar10 + (int)pauVar1 * 2);
    } while (0 < (int)pauVar6);
    pauVar4 = pauVar4[8];
    pauVar5 = pauVar5[8];
    pauVar6 = param_1[3];
    uVar9 = uVar8 & (uint)pauVar6;
    uVar8 = 0;
  } while (uVar9 != 0);
  return;
}

_ri0_110() {
  bool bVar1;
  undefined (*pauVar2) [16];
  undefined in_zero_qw [16];
  undefined (*pauVar3) [16];
  undefined (*pauVar4) [16];
  undefined (*pauVar5) [16];
  undefined in_t0_qw [16];
  undefined auVar6 [16];
  undefined in_t1_qw [16];
  undefined auVar7 [16];
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined (*pauVar11) [16];
  undefined auVar12 [16];
  
  auVar12 = _psrlh(~in_zero_qw,0xf);
  pauVar3 = param_1[5];
  pauVar4 = param_1[6];
  pauVar11 = *param_1;
  iVar10 = -1;
  pauVar2 = param_1[4];
  do {
    pauVar5 = param_1[2];
    uVar9 = 0xffffffff;
    do {
      do {
        auVar6._8_8_ = in_t0_qw._8_8_;
        auVar6._0_8_ = *(undefined8 *)*pauVar3;
        auVar7._8_8_ = in_t1_qw._8_8_;
        auVar7._0_8_ = *(undefined8 *)*pauVar4;
        auVar6 = _pcpyld(auVar7,auVar6);
        auVar6 = _qfsrv(auVar6,auVar6);
        auVar7 = _pextlb(0,auVar6._0_8_);
        pauVar5 = (undefined (*) [16])(pauVar5[-1] + 0xf);
        pauVar3 = (undefined (*) [16])(*pauVar2 + (int)*pauVar3);
        pauVar4 = (undefined (*) [16])(*pauVar2 + (int)*pauVar4);
        auVar6 = _qfsrv(in_zero_qw,auVar6);
        auVar6 = _pextlb(0,auVar6._0_8_);
        auVar6 = _paddh(auVar6,auVar7);
        auVar6 = _paddh(auVar12,auVar6);
        auVar6 = _psrlh(auVar6,1);
        in_t0_qw = *pauVar11;
        auVar7 = _paddh(in_t0_qw,auVar6);
        auVar6 = _pcgth(auVar7,in_zero_qw);
        in_t1_qw = _psrlh(auVar6,0xf);
        auVar6 = _paddh(in_t1_qw,auVar7);
        auVar6 = _psrlh(auVar6,1);
        *(int *)*pauVar11 = auVar6._0_4_;
        *(int *)(*pauVar11 + 4) = auVar6._4_4_;
        *(int *)(*pauVar11 + 8) = auVar6._8_4_;
        *(int *)(*pauVar11 + 0xc) = auVar6._12_4_;
        pauVar11 = (undefined (*) [16])(*pauVar11 + (int)pauVar2 * 2);
      } while (0 < (int)pauVar5);
      pauVar3 = pauVar3[0x14];
      pauVar4 = pauVar4[0x14];
      pauVar5 = param_1[3];
      uVar8 = uVar9 & (uint)pauVar5;
      uVar9 = 0;
    } while (uVar8 != 0);
    pauVar3 = param_1[5][4];
    pauVar4 = param_1[6][4];
    pauVar11 = (*param_1)[8];
    bVar1 = iVar10 != 0;
    iVar10 = 0;
  } while (bVar1);
  return;
}

_rix_111() {
  undefined (*pauVar1) [16];
  undefined in_zero_qw [16];
  undefined (*pauVar2) [16];
  undefined (*pauVar3) [16];
  undefined (*pauVar4) [16];
  undefined auVar5 [16];
  uint uVar6;
  undefined auVar7 [16];
  undefined auVar8 [16];
  uint uVar9;
  undefined (*pauVar10) [16];
  undefined auVar11 [16];
  undefined auVar12 [16];
  undefined auVar13 [16];
  undefined auVar14 [16];
  
  auVar13 = _psrlh(~in_zero_qw,0xf);
  auVar14 = _psllh(auVar13,1);
  pauVar2 = param_1[5];
  pauVar3 = param_1[6];
  pauVar4 = param_1[2];
  pauVar10 = *param_1;
  pauVar1 = param_1[4];
  auVar7 = _qfsrv(*pauVar3,*pauVar2);
  auVar11 = _qfsrv(*pauVar2,*pauVar3);
  auVar13 = _pextlb(0,auVar7._0_8_);
  auVar5 = _pextub(in_zero_qw,auVar7);
  uVar9 = 0xffffffff;
  auVar11 = _qfsrv(auVar11,auVar7);
  auVar7 = _pextlb(0,auVar11._0_8_);
  auVar11 = _pextub(in_zero_qw,auVar11);
  auVar13 = _paddh(auVar7,auVar13);
  auVar5 = _paddh(auVar11,auVar5);
  if (pauVar4 == (undefined (*) [16])0x0) goto LAB_002932a0;
  do {
    do {
      pauVar2 = (undefined (*) [16])(*pauVar1 + (int)*pauVar2);
      pauVar3 = (undefined (*) [16])(*pauVar1 + (int)*pauVar3);
      auVar7 = _qfsrv(*pauVar3,*pauVar2);
      auVar11 = _qfsrv(*pauVar2,*pauVar3);
      auVar8 = _pextlb(0,auVar7._0_8_);
      pauVar4 = (undefined (*) [16])(pauVar4[-1] + 0xf);
      auVar12 = _pextub(in_zero_qw,auVar7);
      auVar11 = _qfsrv(auVar11,auVar7);
      auVar7 = _pextlb(0,auVar11._0_8_);
      auVar11 = _pextub(in_zero_qw,auVar11);
      auVar7 = _paddh(auVar7,auVar8);
      auVar11 = _paddh(auVar11,auVar12);
      auVar13 = _paddh(auVar7,auVar13);
      auVar5 = _paddh(auVar11,auVar5);
      auVar13 = _paddh(auVar14,auVar13);
      auVar5 = _paddh(auVar14,auVar5);
      auVar13 = _psrlh(auVar13,2);
      auVar5 = _psrlh(auVar5,2);
      auVar13 = _paddh(*pauVar10,auVar13);
      auVar5 = _paddh(pauVar10[1],auVar5);
      auVar14 = _psrlh(~in_zero_qw,0xf);
      auVar13 = _paddh(auVar14,auVar13);
      auVar13 = _psrlh(auVar13,1);
      auVar5 = _paddh(auVar14,auVar5);
      auVar5 = _psrlh(auVar5,1);
      *(int *)*pauVar10 = auVar13._0_4_;
      *(int *)(*pauVar10 + 4) = auVar13._4_4_;
      *(int *)(*pauVar10 + 8) = auVar13._8_4_;
      *(int *)(*pauVar10 + 0xc) = auVar13._12_4_;
      *(int *)pauVar10[1] = auVar5._0_4_;
      *(int *)(pauVar10[1] + 4) = auVar5._4_4_;
      *(int *)(pauVar10[1] + 8) = auVar5._8_4_;
      *(int *)(pauVar10[1] + 0xc) = auVar5._12_4_;
      pauVar10 = (undefined (*) [16])(*pauVar10 + (int)pauVar1 * 2);
      auVar13 = auVar7;
      auVar5 = auVar11;
    } while (0 < (int)pauVar4);
LAB_002932a0:
    pauVar2 = pauVar2[8];
    pauVar3 = pauVar3[8];
    pauVar4 = param_1[3];
    uVar6 = uVar9 & (uint)pauVar4;
    uVar9 = 0;
  } while (uVar6 != 0);
  return;
}

_ri0_111() {
  undefined (*pauVar1) [16];
  undefined auVar2 [16];
  uint uVar3;
  undefined in_zero_qw [16];
  undefined (*pauVar4) [16];
  undefined8 *puVar5;
  undefined (*pauVar6) [16];
  ulong uVar7;
  undefined in_t0_qw [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined in_t1_qw [16];
  undefined auVar10 [16];
  undefined auVar11 [16];
  uint uVar12;
  undefined8 in_t3_udw;
  undefined (*pauVar13) [16];
  undefined auVar14 [16];
  
  auVar14 = _psrlh(~in_zero_qw,0xf);
  auVar14 = _psllh(auVar14,1);
  pauVar4 = param_1[5];
  pauVar6 = param_1[6];
  pauVar13 = *param_1;
  pauVar1 = param_1[4];
  uVar12 = 1;
  do {
    uVar7 = (ulong)(int)param_1[2];
    auVar8._8_8_ = in_t0_qw._8_8_;
    auVar8._0_8_ = *(undefined8 *)*pauVar4;
    auVar9._8_8_ = in_t1_qw._8_8_;
    auVar9._0_8_ = *(undefined8 *)*pauVar6;
    auVar8 = _pcpyld(auVar9,auVar8);
    auVar8 = _qfsrv(auVar8,auVar8);
    in_t1_qw = _pextlb(0,auVar8._0_8_);
    puVar5 = (undefined8 *)(*pauVar1 + (int)*pauVar4);
    uVar12 = uVar12 | 0x8000;
    auVar8 = _qfsrv(in_zero_qw,auVar8);
    in_t0_qw = _pextlb(0,auVar8._0_8_);
    auVar8 = _paddh(in_t0_qw,in_t1_qw);
    if (uVar7 == 0) goto LAB_0029338c;
    do {
      do {
        pauVar6 = (undefined (*) [16])(*pauVar1 + (int)*pauVar6);
        auVar11._8_8_ = in_t0_qw._8_8_;
        auVar11._0_8_ = *puVar5;
        auVar10._8_8_ = in_t1_qw._8_8_;
        auVar10._0_8_ = *(undefined8 *)*pauVar6;
        auVar9 = _pcpyld(auVar10,auVar11);
        auVar9 = _qfsrv(auVar9,auVar9);
        auVar11 = _pextlb(0,auVar9._0_8_);
        uVar7 = (ulong)((int)uVar7 + -1);
        puVar5 = (undefined8 *)((int)puVar5 + (int)pauVar1);
        auVar9 = _qfsrv(in_zero_qw,auVar9);
        auVar9 = _pextlb(0,auVar9._0_8_);
        auVar9 = _paddh(auVar9,auVar11);
        auVar8 = _paddh(auVar8,auVar9);
        auVar8 = _paddh(auVar14,auVar8);
        auVar8 = _psrlh(auVar8,2);
        auVar11 = _paddh(*pauVar13,auVar8);
        auVar8 = _pcgth(auVar11,in_zero_qw);
        in_t1_qw = _psrlh(auVar8,0xf);
        auVar8 = _paddh(in_t1_qw,auVar11);
        in_t0_qw._8_8_ = SUB168(*pauVar13,8);
        in_t0_qw._0_8_ = (long)((int)pauVar1 * 2);
        auVar8 = _psrlh(auVar8,1);
        *(int *)*pauVar13 = auVar8._0_4_;
        *(int *)(*pauVar13 + 4) = auVar8._4_4_;
        *(int *)(*pauVar13 + 8) = auVar8._8_4_;
        *(int *)(*pauVar13 + 0xc) = auVar8._12_4_;
        pauVar13 = (undefined (*) [16])(*pauVar13 + (int)pauVar1 * 2);
        auVar8 = auVar9;
      } while (0 < (long)uVar7);
LAB_0029338c:
      auVar2._4_4_ = 0;
      auVar2._0_4_ = uVar12;
      auVar2._8_8_ = in_t3_udw;
      auVar9 = _psrah(auVar2,0xf);
      puVar5 = puVar5 + 0x28;
      uVar7 = (ulong)(int)param_1[3];
      pauVar6 = pauVar6[0x14];
      uVar3 = uVar12 & 0x7fff;
      uVar12 = uVar12 & 0x7fff;
    } while ((auVar9._0_8_ & uVar7) != 0);
    pauVar4 = param_1[5][4];
    pauVar6 = param_1[6][4];
    pauVar13 = (*param_1)[8];
    uVar12 = 0;
  } while (uVar3 != 0);
  return;
}

_copyAddRefImage() {
  undefined auVar1 [16];
  undefined in_zero_qw [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  int iVar4;
  
  auVar1 = auRam00293480;
  iVar4 = 0x18;
  do {
    iVar4 = iVar4 + -1;
    auVar2 = _paddh(*param_3,*param_2);
    auVar2 = _pminh(auVar2,auVar1);
    auVar3 = _paddh(param_3[1],param_2[1]);
    auVar2 = _pmaxh(auVar2,in_zero_qw);
    auVar3 = _pminh(auVar3,auVar1);
    param_2 = param_2[2];
    auVar3 = _pmaxh(auVar3,in_zero_qw);
    param_3 = param_3[2];
    auVar2 = _ppacb(auVar3,auVar2);
    *param_1 = auVar2._0_4_;
    param_1[1] = auVar2._4_4_;
    param_1[2] = auVar2._8_4_;
    param_1[3] = auVar2._12_4_;
    param_1 = param_1 + 4;
  } while (iVar4 != 0);
  return;
}

_copyRefImage() {
  undefined auVar1 [16];
  undefined in_zero_qw [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  int iVar4;
  
  auVar1 = auRam00293480;
  iVar4 = 0x18;
  do {
    iVar4 = iVar4 + -1;
    auVar2 = _pminh(*param_2,auVar1);
    auVar2 = _pmaxh(auVar2,in_zero_qw);
    auVar3 = _pminh(param_2[1],auVar1);
    param_2 = param_2[2];
    auVar3 = _pmaxh(auVar3,in_zero_qw);
    auVar2 = _ppacb(auVar3,auVar2);
    *param_1 = auVar2._0_4_;
    param_1[1] = auVar2._4_4_;
    param_1[2] = auVar2._8_4_;
    param_1[3] = auVar2._12_4_;
    param_1 = param_1 + 4;
  } while (iVar4 != 0);
  return;
}

_ipuSetMPEG1() {
  uint uVar1;
  
  uVar1 = REG_IPU_CTRL;
  REG_IPU_CTRL = uVar1 & 0xff7fffff | param_1 << 0x17;
  return;
}

_waitBdecOut() {
  uint uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  undefined4 local_f0 [8];
  undefined4 local_d0 [8];
  undefined4 local_b0;
  
  local_b0 = 1;
  _waitIpuIdle();
  iVar3 = REG_DMAC_3_IPU_FROM_QWC;
  iVar4 = (int)param_1;
  if (iVar3 != 0) {
    uVar1 = REG_IPU_CTRL;
    while ((uVar1 & 0x4000) == 0) {
      iVar3 = REG_DMAC_4_IPU_TO_QWC;
      if (iVar3 == 0) {
        uVar1 = REG_DMAC_4_IPU_TO_CHCR;
        if ((uVar1 & 0x100) == 0) {
          local_f0[0] = 1;
          _dispatchMpegCallback(*(undefined4 *)(iVar4 + 0x870),local_f0);
          iVar3 = *(int *)(iVar4 + 0x10a0);
        }
        else {
          iVar3 = *(int *)(iVar4 + 0x10a0);
        }
      }
      else {
        iVar3 = *(int *)(iVar4 + 0x10a0);
      }
      if (iVar3 != 0) {
        iVar3 = DIntr();
        uVar1 = REG_DMAC_ENABLER;
        REG_DMAC_ENABLEW = uVar1 | 0x10000;
        REG_DMAC_4_IPU_TO_CHCR = 0;
        REG_DMAC_3_IPU_FROM_CHCR = 0;
        uVar1 = REG_DMAC_ENABLER;
        REG_DMAC_ENABLEW = uVar1 & 0xfffeffff;
        if (iVar3 != 0) {
          EIntr();
        }
        REG_DMAC_3_IPU_FROM_QWC = 0;
        REG_DMAC_4_IPU_TO_QWC = 0;
        REG_IPU_CTRL = 0x40000000;
        return 0;
      }
      iVar3 = REG_DMAC_3_IPU_FROM_QWC;
      if (iVar3 == 0) break;
      uVar1 = REG_IPU_CTRL;
    }
  }
  lVar2 = REG_IPU_TOP;
  uVar1 = REG_IPU_BP;
  *(int *)(iVar4 + 0x850) = (int)lVar2;
  if (lVar2 < 0) {
    if ((uVar1 & 0x1f) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = 0x20 - (uVar1 & 0x1f);
    }
  }
  else {
    iVar3 = 0x20;
  }
  *(int *)(iVar4 + 0x854) = iVar3;
  uVar1 = REG_IPU_CTRL;
  if ((uVar1 & 0x4000) != 0) {
    _Error(param_1,0x3ead50);
    local_d0[0] = 2;
    _dispatchMpegCallback(*(undefined4 *)(iVar4 + 0x870),local_d0);
    REG_IPU_CTRL = 0x40000000;
    local_d0[0] = 3;
    _dispatchMpegCallback(*(undefined4 *)(iVar4 + 0x870),local_d0);
    iVar3 = DIntr();
    uVar1 = REG_DMAC_ENABLER;
    REG_DMAC_ENABLEW = uVar1 | 0x10000;
    REG_DMAC_3_IPU_FROM_CHCR = 0;
    uVar1 = REG_DMAC_ENABLER;
    REG_DMAC_ENABLEW = uVar1 & 0xfffeffff;
    if (iVar3 != 0) {
      EIntr();
    }
    local_b0 = 0;
    REG_DMAC_3_IPU_FROM_QWC = 0;
  }
  return local_b0;
}

_dmVector() {
  _ipuVdec(param_1,3);
  return;
}

_dualPrimeVector() {
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = (int)param_5;
  iVar1 = (int)param_4;
  iVar4 = iVar1 >> 1;
  iVar2 = iVar5 >> 1;
  if (*(int *)(param_1 + 0x18c) != 3) {
    if (0 < param_4) {
      iVar4 = iVar1 + 1 >> 1;
    }
    *param_2 = iVar4 + *param_3;
    if (0 < param_5) {
      iVar2 = iVar5 + 1 >> 1;
    }
    iVar2 = iVar2 + param_3[1];
    param_2[1] = iVar2;
    if (*(int *)(param_1 + 0x18c) != 1) {
      param_2[1] = iVar2 + 1;
      return;
    }
    param_2[1] = iVar2 + -1;
    return;
  }
  if (*(int *)(param_1 + 400) == 0) {
    iVar3 = iVar1 * 3;
    if (0 < param_4) {
      iVar3 = iVar3 + 1;
    }
    *param_2 = (iVar3 >> 1) + *param_3;
    iVar3 = iVar5 * 3;
    if (0 < param_5) {
      iVar3 = iVar3 + 1;
    }
    param_2[1] = (iVar3 >> 1) + param_3[1] + -1;
    if (0 < param_4) {
      iVar4 = iVar1 + 1 >> 1;
    }
    param_2[2] = iVar4 + *param_3;
    iVar1 = param_3[1];
    if (param_5 < 1) goto LAB_00293810;
    iVar5 = iVar5 + 1;
  }
  else {
    if (0 < param_4) {
      iVar4 = iVar1 + 1 >> 1;
    }
    *param_2 = iVar4 + *param_3;
    if (0 < param_5) {
      iVar2 = iVar5 + 1 >> 1;
    }
    param_2[1] = iVar2 + param_3[1] + -1;
    iVar1 = iVar1 * 3;
    if (0 < param_4) {
      iVar1 = iVar1 + 1;
    }
    param_2[2] = (iVar1 >> 1) + *param_3;
    iVar5 = iVar5 * 3;
    iVar1 = param_3[1];
    if (0 < param_5) {
      iVar5 = iVar5 + 1;
    }
  }
  iVar2 = iVar5 >> 1;
LAB_00293810:
  param_2[3] = iVar2 + iVar1 + 1;
  return;
}

_mbAddressIncrement() {
  bool bVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  
  iVar4 = 0;
  do {
    uVar2 = _ipuVdec(param_1,0);
    if (uVar2 == 0x22) {
LAB_002939b4:
      bVar1 = true;
    }
    else {
      if (uVar2 < 0x23) {
        if (uVar2 == 0) {
          lVar3 = _peepBit(param_1,0xb);
          if ((*(int *)((int)param_1 + 0x860) == 0) || (lVar3 != 0xf)) {
            _Error1(param_1,0x3ead70,0);
            *(undefined4 *)((int)param_1 + 0x134) = 1;
            return 1;
          }
          _flushBuf(param_1,0xb);
          goto LAB_002939b4;
        }
      }
      else if (uVar2 == 0x23) {
        bVar1 = true;
        iVar4 = iVar4 + 0x21;
        goto LAB_002939d8;
      }
      iVar4 = iVar4 + (int)uVar2;
      bVar1 = false;
    }
LAB_002939d8:
    if (!bVar1) {
      return iVar4;
    }
  } while( true );
}

_pictureData0() {
  uint uVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = (int)param_1;
  *(undefined4 *)(iVar5 + 0x828) = 0;
  iVar4 = *(int *)(iVar5 + 0x144) * *(int *)(iVar5 + 0x148);
  *(undefined4 *)(iVar5 + 0x82c) = 0;
  if (*(int *)(iVar5 + 0x18c) != 3) {
    iVar4 = iVar4 >> 1;
  }
  do {
    do {
      lVar2 = _slice0(param_1,iVar4);
    } while (lVar2 == 1);
  } while (lVar2 == 3);
  _waitIpuIdle(param_1);
  lVar3 = _waitBdecOut(param_1);
  if (lVar3 == 0) {
    if (*(int *)(iVar5 + 0x10a0) != 0) {
      return (bool)4;
    }
    lVar2 = 2;
  }
  do {
    uVar1 = REG_DMAC_9_SPR_TO_CHCR;
  } while ((uVar1 >> 8 & 1) != 0);
  if (lVar2 == 0) {
    _doMC(param_1,*(int *)(iVar5 + 0x828) == 0);
  }
  if ((int)lVar2 - 1U < 2) {
    _Error(param_1,0x3eada8);
  }
  return lVar2 == 0;
}

static _sliceA0() {
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  
  iVar5 = (int)param_1;
  *(undefined4 *)(iVar5 + 0x134) = 0;
  _nextStartCode();
  uVar4 = _peepBit(param_1,0x20);
  if ((uint)uVar4 - 0x101 < 0xaf) {
    _flushBuf(param_1,0x20);
    iVar2 = _sliceB(param_1);
    iVar3 = _mbAddressIncrement(param_1);
    *param_4 = iVar3;
    if (*(int *)(iVar5 + 0x134) == 0) {
      uVar1 = 0;
      *param_3 = (iVar2 * 0x80 + ((uint)uVar4 & 0xff) + -1) * *(int *)(iVar5 + 0x144) + iVar3 + -1;
      *param_4 = 1;
      *(undefined4 *)(iVar5 + 0x1c8) = 1;
      param_5[2] = 0;
      param_5[5] = 0;
      param_5[4] = 0;
      param_5[1] = 0;
      *param_5 = 0;
      param_5[7] = 0;
      param_5[6] = 0;
      param_5[3] = 0;
    }
    else {
      _Error(param_1,0x3eadf0);
      uVar1 = 1;
    }
  }
  else {
    _Error1(param_1,0x3eadc8,uVar4);
    uVar1 = 2;
  }
  return uVar1;
}

static _slice0() {
  uint uVar1;
  long lVar2;
  int iVar3;
  undefined auStack_b0 [32];
  undefined auStack_90 [16];
  undefined auStack_80 [16];
  int local_70;
  int local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined auStack_60 [16];
  
  local_70 = 0;
  local_6c = 0;
  lVar2 = _sliceA0(param_1,param_2,&local_70,&local_6c,auStack_b0);
  if (lVar2 == 0) {
    iVar3 = (int)param_1;
    *(undefined4 *)(iVar3 + 0x134) = 0;
    for (; local_70 < param_2; local_70 = local_70 + 1) {
      *(undefined4 *)(*(int *)(iVar3 + 0x828) * 0x140 + iVar3 + 0x6e4) = 0;
      lVar2 = _waitBdecOut(param_1);
      if (lVar2 == 0) {
        if (*(int *)(iVar3 + 0x10a0) != 0) {
          return 4;
        }
        return 2;
      }
      if (local_6c == 0) {
        lVar2 = _peepBit(param_1,0x17);
        if (lVar2 == 0) {
          *(undefined4 *)(iVar3 + 0x134) = 0;
          return 3;
        }
        if (*(int *)(iVar3 + 0x134) != 0) {
          *(undefined4 *)(iVar3 + 0x134) = 0;
          return 3;
        }
        local_6c = _mbAddressIncrement(param_1);
        if (*(int *)(iVar3 + 0x134) != 0) goto LAB_00293d94;
      }
      if (param_2 <= local_70) {
        _Error(param_1,0x3eae10);
        return 2;
      }
      if (local_6c == 1) {
        lVar2 = _decMB0(param_1,&local_68,&local_64,auStack_60,auStack_b0,auStack_90,auStack_80);
        if (lVar2 == 0) {
LAB_00293d94:
          *(undefined4 *)(iVar3 + 0x134) = 0;
          return 1;
        }
      }
      else {
        lVar2 = _skipMB0(param_1,auStack_b0,&local_64,auStack_90,&local_68);
        if (lVar2 == 0) goto LAB_00293dec;
      }
      lVar2 = _motionComp0(param_1,local_70,local_6c,local_68,local_64,auStack_b0,auStack_90,
                           auStack_80);
      if (lVar2 == 0) {
LAB_00293dec:
        *(undefined4 *)(iVar3 + 0x134) = 0;
        return 2;
      }
      if (local_70 == 0) {
        uVar1 = *(uint *)(iVar3 + 0x828);
        local_70 = 0;
      }
      else {
        _doMC(param_1,*(uint *)(iVar3 + 0x828) ^ 1);
        uVar1 = *(uint *)(iVar3 + 0x828);
      }
      local_6c = local_6c + -1;
      *(uint *)(iVar3 + 0x828) = uVar1 ^ 1;
    }
    lVar2 = 0;
  }
  return lVar2;
}

static _skipMB0() {
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (int)param_1;
  *(undefined4 *)(*(int *)(iVar4 + 0x828) * 0x140 + iVar4 + 0x6e4) = 1;
  *(undefined4 *)(iVar4 + 0x1c8) = 1;
  if (*(int *)(iVar4 + 0x168) == 2) {
    *param_2 = 0;
    param_2[5] = 0;
    param_2[4] = 0;
    param_2[1] = 0;
    iVar3 = *(int *)(iVar4 + 0x18c);
  }
  else {
    iVar3 = *(int *)(iVar4 + 0x18c);
  }
  if (iVar3 == 3) {
    *param_3 = 2;
  }
  else {
    *param_3 = 1;
    uVar2 = (uint)(*(int *)(iVar4 + 0x18c) == 2);
    *param_4 = uVar2;
    param_4[1] = uVar2;
  }
  bVar1 = *(int *)(iVar4 + 0x168) == 1;
  if (bVar1) {
    _Error(param_1,0x3eae30);
    uVar2 = *param_5;
  }
  else {
    uVar2 = *param_5;
  }
  *param_5 = uVar2 & 0xfffffffe;
  return !bVar1;
}

static _decMB0() {
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  bool bVar9;
  
  iVar6 = (int)param_1;
  uVar2 = REG_IPU_CTRL;
  REG_IPU_CTRL = uVar2 & 0xf8ffffff | *(int *)(iVar6 + 0x168) << 0x18;
  uVar5 = _ipuVdec(param_1,1);
  *param_2 = (uint)uVar5;
  if (uVar5 == 0) {
    _Error(param_1,0x3eae60);
    *(undefined4 *)(iVar6 + 0x134) = 1;
    return 0;
  }
  if ((uVar5 & 0xc) == 0) {
    if ((uVar5 & 1) != 0) {
      iVar3 = 1;
      if (*(int *)(iVar6 + 0x198) != 0) {
        if (*(int *)(iVar6 + 0x18c) == 3) {
          iVar3 = 2;
        }
        *param_3 = iVar3;
      }
      goto LAB_00294028;
    }
    iVar3 = *(int *)(iVar6 + 0x18c);
  }
  else {
    if ((*(int *)(iVar6 + 0x18c) == 3) && (*(int *)(iVar6 + 0x194) != 0)) {
      *param_3 = 2;
    }
    else {
      iVar3 = _nextBit(param_1,2);
      *param_3 = iVar3;
    }
LAB_00294028:
    iVar3 = *(int *)(iVar6 + 0x18c);
  }
  iVar1 = *param_3;
  if (iVar3 == 3) {
    uVar8 = 1;
    if (iVar1 == 1) {
      uVar8 = 2;
    }
    bVar9 = iVar1 == 2;
  }
  else {
    bVar9 = false;
    uVar8 = 1;
    if (iVar1 == 2) {
      uVar8 = 2;
    }
  }
  if (((iVar3 == 3) && (*(int *)(iVar6 + 0x194) == 0)) && ((*param_2 & 3) != 0)) {
    iVar3 = _nextBit(param_1,1);
  }
  else {
    iVar3 = 0;
  }
  *param_4 = iVar3;
  uVar2 = *param_2;
  if ((uVar2 & 0x10) != 0) {
    uVar4 = _nextBit(param_1,5);
    *(undefined4 *)(iVar6 + 0x1cc) = uVar4;
    uVar2 = *param_2;
  }
  if ((uVar2 & 8) == 0) {
    if ((uVar2 & 1) == 0) {
      iVar3 = *(int *)(iVar6 + 0x134);
    }
    else {
      if (*(int *)(iVar6 + 0x198) != 0) {
        iVar3 = *(int *)(iVar6 + 0x860);
        goto LAB_0029410c;
      }
      iVar3 = *(int *)(iVar6 + 0x134);
    }
  }
  else {
    iVar3 = *(int *)(iVar6 + 0x860);
LAB_0029410c:
    if (iVar3 == 0) {
      iVar3 = *(int *)(iVar6 + 0x170) + -1;
      _motionVector(param_1,param_5,param_7,iVar3,iVar3,0,0,*(undefined4 *)(iVar6 + 0x16c));
      iVar3 = *(int *)(iVar6 + 0x134);
    }
    else {
      _motionVectors(param_1,param_5,param_7,param_6,0,uVar8,bVar9,*(int *)(iVar6 + 0x17c) + -1);
      iVar3 = *(int *)(iVar6 + 0x134);
    }
  }
  if (iVar3 != 0) {
    return 0;
  }
  puVar7 = (undefined4 *)param_5;
  iVar3 = 0;
  if ((*param_2 & 4) != 0) {
    if (*(int *)(iVar6 + 0x860) == 0) {
      iVar3 = *(int *)(iVar6 + 0x178) + -1;
      _motionVector(param_1,puVar7 + 2,param_7,iVar3,iVar3,0,0,*(undefined4 *)(iVar6 + 0x174));
      iVar3 = *(int *)(iVar6 + 0x134);
    }
    else {
      _motionVectors(param_1,param_5,param_7,param_6,1,uVar8,bVar9,*(int *)(iVar6 + 0x184) + -1);
      iVar3 = *(int *)(iVar6 + 0x134);
    }
  }
  if (iVar3 != 0) {
    return 0;
  }
  uVar2 = *param_2;
  if (((uVar2 & 1) != 0) && (*(int *)(iVar6 + 0x198) != 0)) {
    _flushBuf(param_1,1);
    uVar2 = *param_2;
  }
  if ((uVar2 & 3) == 0) {
    *(undefined4 *)(*(int *)(iVar6 + 0x828) * 0x140 + iVar6 + 0x6e4) = 1;
    iVar3 = *(int *)(iVar6 + 0x134);
  }
  else {
    receiveDataFromIPU(*(undefined4 *)(*(int *)(iVar6 + 0x828) * 0x140 + iVar6 + 0x5ac),0x300);
    _waitIpuIdle(param_1);
    _sendIpuCommand(param_1,(*param_2 & 1) << 0x1b | *(int *)(iVar6 + 0x1cc) << 0x10 |
                            *(int *)(iVar6 + 0x1c8) << 0x1a | 0x20000000U | *param_4 << 0x19);
    iVar3 = *(int *)(iVar6 + 0x134);
  }
  *(undefined4 *)(iVar6 + 0x1c8) = 0;
  if (iVar3 != 0) {
    return 0;
  }
  if ((*param_2 & 1) == 0) {
    *(undefined4 *)(iVar6 + 0x1c8) = 1;
    if ((*param_2 & 1) == 0) {
      iVar3 = *(int *)(iVar6 + 0x168);
      goto LAB_00294330;
    }
    iVar3 = *(int *)(iVar6 + 0x198);
  }
  else {
    iVar3 = *(int *)(iVar6 + 0x198);
  }
  if (iVar3 == 0) {
    puVar7[5] = 0;
    puVar7[4] = 0;
    puVar7[1] = 0;
    *puVar7 = 0;
    puVar7[7] = 0;
    puVar7[6] = 0;
    puVar7[3] = 0;
    puVar7[2] = 0;
    iVar3 = *(int *)(iVar6 + 0x168);
  }
  else {
    iVar3 = *(int *)(iVar6 + 0x168);
  }
LAB_00294330:
  if ((iVar3 == 2) && ((*param_2 & 9) == 0)) {
    *puVar7 = 0;
    puVar7[5] = 0;
    puVar7[4] = 0;
    puVar7[1] = 0;
    if (*(int *)(iVar6 + 0x18c) == 3) {
      *param_3 = 2;
    }
    else {
      *param_3 = 1;
      *param_6 = (uint)(*(int *)(iVar6 + 0x18c) == 2);
    }
  }
  return 1;
}

static _decode_motion_vector() {
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0x10 << (param_2 & 0x1f);
  iVar2 = *param_1;
  if (param_5 != 0) {
    iVar2 = *param_1 >> 1;
  }
  if (param_3 < 1) {
    iVar1 = iVar2 << 1;
    if (-1 < param_3) goto LAB_0029443c;
    iVar2 = (iVar2 + -1) - ((~(uint)param_3 << (param_2 & 0x1f)) + param_4);
    if (iVar2 < -iVar3) {
      iVar2 = iVar2 + iVar3 * 2;
    }
  }
  else {
    iVar2 = iVar2 + 1 + ((uint)param_3 - 1 << (param_2 & 0x1f)) + param_4;
    iVar1 = iVar2 * 2;
    if (iVar2 < iVar3) goto LAB_0029443c;
    iVar2 = iVar2 + iVar3 * -2;
  }
  iVar1 = iVar2 << 1;
LAB_0029443c:
  if (param_5 == 0) {
    iVar1 = iVar2;
  }
  *param_1 = iVar1;
  return;
}

_motionVectors() {
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if (param_6 != 1) {
    uVar1 = _nextBit(param_1,1);
    puVar2 = (undefined4 *)(param_5 * 4 + param_4);
    *puVar2 = uVar1;
    _motionVector(param_1,param_2 + param_5 * 8,param_3,param_8,param_9,param_10,param_11,0);
    uVar1 = _nextBit(param_1,1);
    puVar2[2] = uVar1;
    _motionVector(param_1,param_2 + param_5 * 8 + 0x10,param_3,param_8,param_9,param_10,param_11,0);
    return;
  }
  if ((param_7 == 0) && (param_10 == 0)) {
    uVar1 = _nextBit(param_1,1);
    puVar2 = (undefined4 *)(param_5 * 4 + param_4);
    puVar2[2] = uVar1;
    *puVar2 = uVar1;
  }
  puVar2 = (undefined4 *)(param_2 + param_5 * 8);
  _motionVector(param_1,puVar2,param_3,param_8,param_9,param_10,param_11,0);
  puVar2[4] = *puVar2;
  puVar2[5] = puVar2[1];
  return;
}

_motionVector() {
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  
  lVar2 = _ipuVdec(param_1,2);
  if ((param_4 == 0) || (lVar2 == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = _nextBit(param_1,param_4);
  }
  _decode_motion_vector(param_2,param_4,lVar2,uVar3,param_8);
  if (param_6 != 0) {
    uVar1 = _dmVector(param_1);
    *param_3 = uVar1;
  }
  lVar2 = _ipuVdec(param_1,2);
  if ((param_5 == 0) || (lVar2 == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = _nextBit(param_1,param_5);
  }
  iVar4 = (int)param_2;
  if (param_7 != 0) {
    *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) >> 1;
  }
  _decode_motion_vector(iVar4 + 4,param_5,lVar2,uVar3,param_8);
  if (param_7 != 0) {
    *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) << 1;
  }
  if (param_6 != 0) {
    uVar1 = _dmVector(param_1);
    param_3[1] = uVar1;
  }
  return;
}

_sendIpuCommand() {
  REG_IPU_CMD = param_2;
  *(undefined4 *)(param_1 + 0x830) = *(undefined4 *)(_isDirty + (param_2 >> 0x1c) * 4);
  return;
}

_waitIpuIdle() {
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  uVar2 = REG_IPU_CTRL;
  if ((uVar2 & 0x80004000) == 0x80000000) {
    iVar3 = *(int *)(param_1 + 0x10a0);
    while (iVar3 == 0) {
      bVar1 = 5000 < iVar4;
      iVar4 = iVar4 + 1;
      if (bVar1) {
        _dispatchMpegCbNodata(*(undefined4 *)(param_1 + 0x870));
        iVar4 = 0;
      }
      uVar2 = REG_IPU_CTRL;
      if ((uVar2 & 0x80004000) != 0x80000000) {
        return;
      }
      iVar3 = *(int *)(param_1 + 0x10a0);
    }
    iVar4 = DIntr();
    uVar2 = REG_DMAC_ENABLER;
    REG_DMAC_ENABLEW = uVar2 | 0x10000;
    REG_DMAC_4_IPU_TO_CHCR = 0;
    REG_DMAC_3_IPU_FROM_CHCR = 0;
    uVar2 = REG_DMAC_ENABLER;
    REG_DMAC_ENABLEW = uVar2 & 0xfffeffff;
    if (iVar4 != 0) {
      EIntr();
    }
    REG_DMAC_3_IPU_FROM_QWC = 0;
    REG_DMAC_4_IPU_TO_QWC = 0;
    REG_IPU_CTRL = 0x40000000;
  }
  return;
}

_waitIpuIdle64() {
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  
  iVar4 = 0;
  lVar5 = REG_IPU_CMD;
  if ((lVar5 < 0) && (uVar2 = REG_IPU_CTRL, (uVar2 & 0x4000) == 0)) {
    iVar3 = *(int *)(param_1 + 0x10a0);
    while (iVar3 == 0) {
      bVar1 = 5000 < iVar4;
      iVar4 = iVar4 + 1;
      if (bVar1) {
        _dispatchMpegCbNodata(*(undefined4 *)(param_1 + 0x870));
        iVar4 = 0;
      }
      lVar5 = REG_IPU_CMD;
      if (-1 < lVar5) {
        return lVar5;
      }
      uVar2 = REG_IPU_CTRL;
      if ((uVar2 & 0x4000) != 0) {
        return lVar5;
      }
      iVar3 = *(int *)(param_1 + 0x10a0);
    }
    iVar4 = DIntr();
    uVar2 = REG_DMAC_ENABLER;
    REG_DMAC_ENABLEW = uVar2 | 0x10000;
    REG_DMAC_4_IPU_TO_CHCR = 0;
    REG_DMAC_3_IPU_FROM_CHCR = 0;
    uVar2 = REG_DMAC_ENABLER;
    REG_DMAC_ENABLEW = uVar2 & 0xfffeffff;
    if (iVar4 != 0) {
      EIntr();
    }
    REG_DMAC_3_IPU_FROM_QWC = 0;
    REG_DMAC_4_IPU_TO_QWC = 0;
    REG_IPU_CTRL = 0x40000000;
  }
  return lVar5;
}

_ipuVdec() {
  int iVar1;
  bool bVar2;
  long lVar3;
  undefined2 uVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  int iVar8;
  
  iVar5 = 0;
  iVar8 = 0;
  uVar6 = REG_IPU_CTRL;
  if ((uVar6 & 0x80004000) == 0x80000000) {
    iVar1 = *(int *)(param_1 + 0x10a0);
    while (iVar1 == 0) {
      bVar2 = 5000 < iVar8;
      iVar8 = iVar8 + 1;
      if (bVar2) {
        _dispatchMpegCbNodata(*(undefined4 *)(param_1 + 0x870));
        iVar8 = 0;
      }
      uVar6 = REG_IPU_CTRL;
      if ((uVar6 & 0x80004000) != 0x80000000) break;
      iVar1 = *(int *)(param_1 + 0x10a0);
    }
  }
  uVar6 = param_2 << 0x1a | 0x30000000;
  REG_IPU_CMD = uVar6;
  lVar7 = REG_IPU_CMD;
  *(undefined4 *)(param_1 + 0x830) = *(undefined4 *)(_isDirty + ((int)uVar6 >> 0x1c) * 4);
  if (lVar7 < 0) {
    iVar8 = *(int *)(param_1 + 0x10a0);
    while (iVar8 == 0) {
      bVar2 = 5000 < iVar5;
      iVar5 = iVar5 + 1;
      if (bVar2) {
        _dispatchMpegCbNodata(*(undefined4 *)(param_1 + 0x870));
        iVar5 = 0;
      }
      lVar7 = REG_IPU_CMD;
      if (-1 < lVar7) goto LAB_00294c3c;
      iVar8 = *(int *)(param_1 + 0x10a0);
    }
    iVar5 = DIntr();
    uVar6 = REG_DMAC_ENABLER;
    REG_DMAC_ENABLEW = uVar6 | 0x10000;
    REG_DMAC_4_IPU_TO_CHCR = 0;
    REG_DMAC_3_IPU_FROM_CHCR = 0;
    uVar6 = REG_DMAC_ENABLER;
    REG_DMAC_ENABLEW = uVar6 & 0xfffeffff;
    if (iVar5 != 0) {
      EIntr();
    }
    REG_DMAC_3_IPU_FROM_QWC = 0;
    REG_DMAC_4_IPU_TO_QWC = 0;
    uVar4 = 0;
    REG_IPU_CTRL = 0x40000000;
  }
  else {
LAB_00294c3c:
    lVar3 = REG_IPU_TOP;
    uVar6 = REG_IPU_BP;
    *(int *)(param_1 + 0x850) = (int)lVar3;
    if (lVar3 < 0) {
      uVar6 = -(uVar6 & 0x1f) & 0x1f;
    }
    else {
      uVar6 = 0x20;
    }
    *(uint *)(param_1 + 0x854) = uVar6;
    uVar4 = (undefined2)lVar7;
    *(uint *)(param_1 + 0x134) = (uint)((int)lVar7 == 0);
  }
  return uVar4;
}

_peepBit() {
  int iVar1;
  bool bVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = (int)param_1;
  if ((*(int *)(iVar6 + 0x830) == 0) && (param_2 <= *(int *)(iVar6 + 0x854))) {
    uVar4 = *(uint *)(iVar6 + 0x850);
  }
  else {
    uVar4 = REG_IPU_CTRL;
    iVar5 = 0;
    if ((uVar4 & 0x80004000) == 0x80000000) {
      iVar1 = *(int *)(iVar6 + 0x10a0);
      while (iVar1 == 0) {
        bVar2 = 5000 < iVar5;
        iVar5 = iVar5 + 1;
        if (bVar2) {
          _dispatchMpegCbNodata(*(undefined4 *)(iVar6 + 0x870));
          iVar5 = 0;
        }
        uVar4 = REG_IPU_CTRL;
        if ((uVar4 & 0x80004000) != 0x80000000) break;
        iVar1 = *(int *)(iVar6 + 0x10a0);
      }
    }
    REG_IPU_CMD = 0x40000000;
    *(undefined4 *)(iVar6 + 0x830) = _isDirty._16_4_;
    uVar3 = _waitIpuIdle64(param_1);
    *(undefined4 *)(iVar6 + 0x850) = uVar3;
    *(undefined4 *)(iVar6 + 0x854) = 0x20;
    uVar4 = *(uint *)(iVar6 + 0x850);
  }
  return uVar4 >> (-param_2 & 0x1fU);
}

_flushBuf() {
  int iVar1;
  bool bVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = 0;
  uVar3 = REG_IPU_CTRL;
  iVar6 = (int)param_1;
  if ((uVar3 & 0x80004000) == 0x80000000) {
    iVar1 = *(int *)(iVar6 + 0x10a0);
    while (iVar1 == 0) {
      bVar2 = 5000 < iVar5;
      iVar5 = iVar5 + 1;
      if (bVar2) {
        _dispatchMpegCbNodata(*(undefined4 *)(iVar6 + 0x870));
        iVar5 = 0;
      }
      uVar3 = REG_IPU_CTRL;
      if ((uVar3 & 0x80004000) != 0x80000000) break;
      iVar1 = *(int *)(iVar6 + 0x10a0);
    }
  }
  REG_IPU_CMD = param_2 | 0x40000000;
  *(undefined4 *)(iVar6 + 0x830) = *(undefined4 *)(_isDirty + ((param_2 | 0x40000000) >> 0x1c) * 4);
  uVar4 = _waitIpuIdle64(param_1);
  *(undefined4 *)(iVar6 + 0x854) = 0x20;
  *(undefined4 *)(iVar6 + 0x850) = uVar4;
  return;
}

_nextBit() {
  uint uVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  uVar1 = REG_IPU_CTRL;
  iVar5 = (int)param_1;
  if ((uVar1 & 0x80004000) == 0x80000000) {
    if (*(int *)(iVar5 + 0x10a0) == 0) {
      do {
        bVar2 = 5000 < iVar4;
        iVar4 = iVar4 + 1;
        if (bVar2) {
          _dispatchMpegCbNodata(*(undefined4 *)(iVar5 + 0x870));
          iVar4 = 0;
        }
        uVar1 = REG_IPU_CTRL;
        if ((uVar1 & 0x80004000) != 0x80000000) {
          iVar4 = *(int *)(iVar5 + 0x830);
          goto LAB_00294fac;
        }
      } while (*(int *)(iVar5 + 0x10a0) == 0);
      iVar4 = *(int *)(iVar5 + 0x830);
    }
    else {
      iVar4 = *(int *)(iVar5 + 0x830);
    }
  }
  else {
    iVar4 = *(int *)(iVar5 + 0x830);
  }
LAB_00294fac:
  if ((iVar4 != 0) || (*(int *)(iVar5 + 0x854) < (int)param_2)) {
    REG_IPU_CMD = 0x40000000;
    *(undefined4 *)(iVar5 + 0x830) = _isDirty._16_4_;
    uVar3 = _waitIpuIdle64(param_1);
    *(undefined4 *)(iVar5 + 0x850) = uVar3;
  }
  *(undefined4 *)(iVar5 + 0x854) = 0x20;
  uVar1 = *(uint *)(iVar5 + 0x850);
  REG_IPU_CMD = param_2 | 0x40000000;
  *(undefined4 *)(iVar5 + 0x830) = *(undefined4 *)(_isDirty + ((param_2 | 0x40000000) >> 0x1c) * 4);
  uVar3 = _waitIpuIdle64(param_1);
  *(undefined4 *)(iVar5 + 0x850) = uVar3;
  return uVar1 >> (0x20 - param_2 & 0x1f);
}

_nextStartCode() {
  uint uVar1;
  long lVar2;
  
  _waitIpuIdle();
  uVar1 = REG_IPU_BP;
  if ((-(uVar1 & 7) & 7) != 0) {
    _flushBuf(param_1);
  }
  while ((lVar2 = _peepBit(param_1,0x18), lVar2 != 1 && (*(int *)((int)param_1 + 0x10a0) == 0))) {
    _flushBuf(param_1,8);
  }
  return;
}

_sliceB() {
  undefined4 uVar1;
  long lVar2;
  
  uVar1 = _nextBit(param_1,5);
  *(undefined4 *)((int)param_1 + 0x1cc) = uVar1;
  lVar2 = _nextBit(param_1,1);
  if (lVar2 != 0) {
    _nextBit(param_1,1);
    _flushBuf(param_1,7);
    _extrainfo(param_1);
  }
  return 0;
}

_nextHeader() {
  int iVar1;
  ulong uVar2;
  int iVar3;
  undefined4 local_a0 [2];
  undefined8 local_98;
  undefined8 local_90;
  
  iVar3 = (int)param_1;
  iVar1 = *(int *)(iVar3 + 0x10a0);
  while( true ) {
    while( true ) {
      while( true ) {
        if (iVar1 != 0) {
          return 0xffffffff;
        }
        _nextStartCode(param_1);
        uVar2 = _nextBit(param_1,0x20);
        if (uVar2 != 0x1b3) break;
        _sequenceHeader(param_1);
        iVar1 = *(int *)(iVar3 + 0x10a0);
      }
      if (uVar2 < 0x1b4) break;
      if (uVar2 == 0x1b7) {
        return 0;
      }
      if (uVar2 == 0x1b8) {
        _groupOfPicturesHeader(param_1);
        iVar1 = *(int *)(iVar3 + 0x10a0);
      }
      else {
        iVar1 = *(int *)(iVar3 + 0x10a0);
      }
    }
    if (uVar2 == 0x100) break;
    iVar1 = *(int *)(iVar3 + 0x10a0);
  }
  _pictureHeader(param_1);
  local_a0[0] = 5;
  local_90 = 0xffffffffffffffff;
  local_98 = 0xffffffffffffffff;
  _dispatchMpegCallback(*(undefined4 *)(iVar3 + 0x870),local_a0);
  *(undefined8 *)(iVar3 + 0x848) = local_90;
  *(undefined8 *)(iVar3 + 0x840) = local_98;
  return *(undefined4 *)(iVar3 + 0x168);
}

_pictureHeader() {
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = _nextBit(param_1,10);
  uVar1 = _nextBit(param_1,3);
  iVar4 = (int)param_1;
  *(undefined4 *)(iVar4 + 0x168) = uVar1;
  _nextBit(param_1,0x10);
  iVar3 = *(int *)(iVar4 + 0x168);
  if (iVar3 - 2U < 2) {
    uVar1 = _nextBit(param_1,1);
    *(undefined4 *)(iVar4 + 0x16c) = uVar1;
    uVar1 = _nextBit(param_1,3);
    *(undefined4 *)(iVar4 + 0x170) = uVar1;
    iVar3 = *(int *)(iVar4 + 0x168);
  }
  if (iVar3 == 3) {
    uVar1 = _nextBit(param_1,1);
    *(undefined4 *)(iVar4 + 0x174) = uVar1;
    uVar1 = _nextBit(param_1,3);
    *(undefined4 *)(iVar4 + 0x178) = uVar1;
  }
  _extrainfo(param_1);
  _extensionAndUserData(param_1);
  _updateTempTackData(param_1,uVar2);
  return;
}

_extensionAndUserData() {
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined auStack_80 [8];
  undefined auStack_78 [8];
  undefined auStack_70 [8];
  undefined auStack_68 [8];
  undefined auStack_60 [8];
  undefined *local_58;
  
  puVar1 = auStack_80 + 7;
  uVar2 = (uint)puVar1 & 7;
  *(ulong *)(puVar1 + -uVar2) =
       *(ulong *)(puVar1 + -uVar2) & -1L << (uVar2 + 1) * 8 |
       _PTR__unknown_extension_003eae80 >> (7 - uVar2) * 8;
  auStack_80 = (undefined  [8])_PTR__unknown_extension_003eae80;
  puVar1 = auStack_78 + 7;
  uVar2 = (uint)puVar1 & 7;
  *(ulong *)(puVar1 + -uVar2) =
       *(ulong *)(puVar1 + -uVar2) & -1L << (uVar2 + 1) * 8 |
       _PTR__sequenceDisplayExtension_003eae88 >> (7 - uVar2) * 8;
  auStack_78 = (undefined  [8])_PTR__sequenceDisplayExtension_003eae88;
  puVar1 = auStack_70 + 7;
  uVar2 = (uint)puVar1 & 7;
  *(ulong *)(puVar1 + -uVar2) =
       *(ulong *)(puVar1 + -uVar2) & -1L << (uVar2 + 1) * 8 |
       _PTR__copyrightExtension_003eae90 >> (7 - uVar2) * 8;
  auStack_70 = (undefined  [8])_PTR__copyrightExtension_003eae90;
  puVar1 = auStack_68 + 7;
  uVar2 = (uint)puVar1 & 7;
  *(ulong *)(puVar1 + -uVar2) =
       *(ulong *)(puVar1 + -uVar2) & -1L << (uVar2 + 1) * 8 |
       _PTR__unknown_extension_003eae98 >> (7 - uVar2) * 8;
  auStack_68 = (undefined  [8])_PTR__unknown_extension_003eae98;
  puVar1 = auStack_60 + 7;
  uVar2 = (uint)puVar1 & 7;
  *(ulong *)(puVar1 + -uVar2) =
       *(ulong *)(puVar1 + -uVar2) & -1L << (uVar2 + 1) * 8 |
       _PTR__pictureCodingExtension_003eaea0 >> (7 - uVar2) * 8;
  auStack_60 = (undefined  [8])_PTR__pictureCodingExtension_003eaea0;
  local_58 = PTR__pictureTemporalScalableExtension_003eaea8;
  _nextStartCode();
  while( true ) {
    while (lVar4 = _peepBit(param_1,0x20), lVar4 == 0x1b5) {
      _flushBuf(param_1,0x20);
      uVar3 = _nextBit(param_1,4);
      if (10 < uVar3) {
        uVar3 = 0;
      }
      (**(code **)(auStack_80 + (int)uVar3 * 4))(param_1);
      _nextStartCode(param_1);
    }
    if (lVar4 != 0x1b2) break;
    _flushBuf(param_1,0x20);
    _nextStartCode(param_1);
  }
  return;
}

_pictureCodingExtension() {
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  
  uVar2 = _nextBit(param_1,4);
  iVar5 = (int)param_1;
  *(undefined4 *)(iVar5 + 0x17c) = uVar2;
  uVar2 = _nextBit(param_1,4);
  *(undefined4 *)(iVar5 + 0x180) = uVar2;
  uVar2 = _nextBit(param_1,4);
  *(undefined4 *)(iVar5 + 0x184) = uVar2;
  uVar2 = _nextBit(param_1,4);
  *(undefined4 *)(iVar5 + 0x188) = uVar2;
  iVar3 = _nextBit(param_1,2);
  uVar1 = REG_IPU_CTRL;
  REG_IPU_CTRL = uVar1 & 0xfffcffff | iVar3 << 0x10;
  uVar2 = _nextBit(param_1,2);
  *(undefined4 *)(iVar5 + 0x18c) = uVar2;
  if (*(int *)(iVar5 + 0xec) == 0) {
    *(undefined4 *)(iVar5 + 0xec) = uVar2;
  }
  uVar2 = _nextBit(param_1,1);
  *(undefined4 *)(iVar5 + 400) = uVar2;
  uVar2 = _nextBit(param_1,1);
  *(undefined4 *)(iVar5 + 0x194) = uVar2;
  uVar2 = _nextBit(param_1,1);
  *(undefined4 *)(iVar5 + 0x198) = uVar2;
  iVar3 = _nextBit(param_1,1);
  uVar1 = REG_IPU_CTRL;
  REG_IPU_CTRL = uVar1 & 0xffbfffff | iVar3 << 0x16;
  iVar3 = _nextBit(param_1,1);
  uVar1 = REG_IPU_CTRL;
  REG_IPU_CTRL = uVar1 & 0xffdfffff | iVar3 << 0x15;
  iVar3 = _nextBit(param_1,1);
  uVar1 = REG_IPU_CTRL;
  REG_IPU_CTRL = uVar1 & 0xffefffff | iVar3 << 0x14;
  uVar2 = _nextBit(param_1,1);
  *(undefined4 *)(iVar5 + 0x19c) = uVar2;
  _nextBit(param_1,1);
  uVar2 = _nextBit(param_1,1);
  *(undefined4 *)(iVar5 + 0x1a0) = uVar2;
  lVar4 = _nextBit(param_1,1);
  if (lVar4 != 0) {
    _nextBit(param_1,1);
    _nextBit(param_1,3);
    _nextBit(param_1,1);
    _nextBit(param_1,7);
    _nextBit(param_1,8);
    return;
  }
  return;
}

_extrainfo() {
  long lVar1;
  
  while (lVar1 = _nextBit(param_1,1), lVar1 != 0) {
    _flushBuf(param_1,8);
  }
  return;
}

static _updateTempTackData() {
  bool bVar1;
  int iVar2;
  long lVar3;
  
  bVar1 = false;
  lVar3 = 0;
  if (*(int *)(param_1 + 0x168) == 3) {
LAB_002956d0:
    iVar2 = *(int *)(param_1 + 0x864);
  }
  else {
    if (param_2 != 0) {
      lVar3 = param_2;
      if (param_2 < 0) {
        bVar1 = *(int *)(param_1 + 0x86c) == 0;
        *(undefined4 *)(param_1 + 0x86c) = 0;
      }
      else {
        *(undefined4 *)(param_1 + 0x86c) = 0;
      }
      goto LAB_002956d0;
    }
    iVar2 = *(int *)(param_1 + 0x864);
  }
  iVar2 = iVar2 + (int)param_2;
  *(int *)(param_1 + 0x1c4) = iVar2;
  if (bVar1) {
    if (lVar3 < param_2) {
      iVar2 = *(int *)(param_1 + 0x868);
      goto LAB_002956f8;
    }
    *(int *)(param_1 + 0x1c4) = iVar2 + 0x400;
  }
  iVar2 = *(int *)(param_1 + 0x868);
LAB_002956f8:
  if (iVar2 < *(int *)(param_1 + 0x1c4)) {
    iVar2 = *(int *)(param_1 + 0x1c4);
  }
  *(int *)(param_1 + 0x868) = iVar2;
  return;
}

_groupOfPicturesHeader() {
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = (int)param_1;
  *(undefined4 *)(iVar2 + 0x100) = 0;
  *(undefined4 *)(iVar2 + 0x86c) = 1;
  *(int *)(iVar2 + 0x864) = *(int *)(iVar2 + 0x868) + 1;
  _nextBit(param_1,1);
  _nextBit(param_1,5);
  _nextBit(param_1,6);
  _nextBit(param_1,1);
  _nextBit(param_1,6);
  _nextBit(param_1,6);
  uVar1 = _nextBit(param_1,1);
  *(undefined4 *)(iVar2 + 0x1bc) = uVar1;
  uVar1 = _nextBit(param_1,1);
  *(undefined4 *)(iVar2 + 0x1c0) = uVar1;
  _extensionAndUserData(param_1);
  return;
}

_quantMatrixExtension() {
  long lVar1;
  
  lVar1 = _nextBit(param_1,1);
  *(int *)((int)param_1 + 0x858) = (int)lVar1;
  if (lVar1 != 0) {
    _waitIpuIdle(param_1);
    _sendIpuCommand(param_1,0x50000000);
    _waitIpuIdle(param_1);
  }
  lVar1 = _nextBit(param_1,1);
  *(int *)((int)param_1 + 0x85c) = (int)lVar1;
  if (lVar1 != 0) {
    _waitIpuIdle(param_1);
    _sendIpuCommand(param_1,0x58000000);
    _waitIpuIdle(param_1);
  }
  lVar1 = _nextBit(param_1,1);
  if (lVar1 != 0) {
    _Error(param_1,0x3eaeb0);
  }
  lVar1 = _nextBit(param_1,1);
  if (lVar1 != 0) {
    _Error(param_1,0x3eaed8);
    return;
  }
  return;
}

_pictureDisplayExtension() {
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = (int)param_1;
  if (*(int *)(iVar3 + 0x154) == 0) {
    if (*(int *)(iVar3 + 0x18c) == 3) {
      iVar5 = 2;
      if (*(int *)(iVar3 + 0x19c) != 0) {
        iVar5 = 3;
      }
      goto LAB_002958e0;
    }
  }
  else if (*(int *)(iVar3 + 0x19c) != 0) {
    iVar5 = 2;
    if (*(int *)(iVar3 + 400) != 0) {
      iVar5 = 3;
    }
    goto LAB_002958e0;
  }
  iVar5 = 1;
LAB_002958e0:
  iVar4 = 0;
  if (iVar5 != 0) {
    do {
      uVar1 = _nextBit(param_1,0x10);
      iVar2 = iVar4 * 4;
      *(undefined4 *)(iVar3 + 0x1a4 + iVar2) = uVar1;
      _nextBit(param_1,1);
      iVar4 = iVar4 + 1;
      uVar1 = _nextBit(param_1,0x10);
      *(undefined4 *)(iVar3 + 0x1b0 + iVar2) = uVar1;
      _nextBit(param_1,1);
    } while (iVar4 < iVar5);
  }
  return;
}

_copyrightExtension() {
  _nextBit(param_1,1);
  _nextBit(param_1,8);
  _nextBit(param_1,1);
  _nextBit(param_1,7);
  _nextBit(param_1,1);
  _nextBit(param_1,0x14);
  _nextBit(param_1,1);
  _nextBit(param_1,0x16);
  _nextBit(param_1,1);
  _nextBit(param_1,0x16);
  return;
}

_decPicture() {
  long lVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  iVar2 = *(int *)(iVar3 + 0x18c);
  if ((iVar2 == 3) && (*(int *)(iVar3 + 0x138) != 0)) {
    _Error(param_1,0x3eaf08);
    *(undefined4 *)(iVar3 + 0x138) = 0;
    iVar2 = *(int *)(iVar3 + 0x18c);
  }
  if (iVar2 == 2) {
    iVar2 = *(int *)(iVar3 + 0x1f8);
  }
  else {
    if (iVar2 < 3) {
      if (iVar2 == 1) {
        iVar2 = *(int *)(iVar3 + 0x1e8);
        goto LAB_00295a9c;
      }
      iVar2 = *(int *)(iVar3 + 0x1d8);
    }
    else {
      if (iVar2 == 3) {
        iVar2 = *(int *)(iVar3 + 0x1d8);
        goto LAB_00295a9c;
      }
      iVar2 = *(int *)(iVar3 + 0x1d8);
    }
    _Error(param_1,0x3eaf28);
  }
LAB_00295a9c:
  lVar1 = _pictureData0(param_1);
  if (lVar1 != 0) {
    *(undefined4 *)(iVar2 + 0x28) = 1;
  }
  return lVar1;
}

_outputFrame() {
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (int)param_1;
  if (param_3 != 0) {
    if (*(int *)(iVar4 + 0x18c) == 3) {
      if (*(int *)(iVar4 + 0x168) == 3) {
        uVar1 = *(undefined4 *)(iVar4 + 0x1dc);
      }
      else {
        uVar1 = *(undefined4 *)(iVar4 + 0x1d0);
      }
      _dispRefImage(param_1,uVar1,param_2 + -1);
      iVar3 = *(int *)(iVar4 + 0x110);
      goto LAB_00295b40;
    }
    if (*(int *)(iVar4 + 0x168) == 3) {
      uVar1 = *(undefined4 *)(iVar4 + 0x1ec);
      uVar2 = *(undefined4 *)(iVar4 + 0x1fc);
    }
    else {
      uVar1 = *(undefined4 *)(iVar4 + 0x1e0);
      uVar2 = *(undefined4 *)(iVar4 + 0x1f0);
    }
    _dispRefImageField(param_1,uVar1,uVar2,param_2 + -1);
  }
  iVar3 = *(int *)(iVar4 + 0x110);
LAB_00295b40:
  if (iVar3 == 1) {
    *(undefined4 *)(iVar4 + 0x110) = 2;
  }
  return;
}

_updateRefImage() {
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  iVar6 = *(int *)(param_1 + 0x18c);
  iVar3 = *(int *)(param_1 + 0x168);
  iVar5 = 0;
  bVar8 = false;
  iVar7 = 4;
  if (iVar6 == 3) {
    iVar7 = 2;
  }
  if (iVar3 == 3) {
    *(undefined4 *)(param_1 + 0x1d8) = *(undefined4 *)(param_1 + 0x1dc);
    *(undefined4 *)(param_1 + 0x1e8) = *(undefined4 *)(param_1 + 0x1ec);
    *(undefined4 *)(param_1 + 0x1f8) = *(undefined4 *)(param_1 + 0x1fc);
    if (iVar7 <= *(int *)(param_1 + 0xb8) + *(int *)(param_1 + 0xbc)) {
      *(undefined4 *)(param_1 + 0x100) = 0;
      *(undefined4 *)(param_1 + 0x1c0) = 0;
      *(undefined4 *)(param_1 + 0x1bc) = 0;
    }
    if (*(int *)(param_1 + 0x100) == 0) {
      if (*(int *)(param_1 + 0x1c0) != 0) {
        iVar3 = *(int *)(param_1 + 0x1bc);
        goto LAB_00295be0;
      }
      *(undefined4 *)(param_1 + 0x100) = 0;
    }
    else {
      iVar3 = *(int *)(param_1 + 0x1bc);
LAB_00295be0:
      if (iVar3 == 0) {
        iVar6 = *(int *)(param_1 + 0x1e0);
        *(undefined4 *)(*(int *)(param_1 + 0x1d0) + 0x28) = 0;
        iVar3 = *(int *)(param_1 + 0x1f0);
        *(undefined4 *)(iVar6 + 0x28) = 0;
        *(undefined4 *)(iVar3 + 0x28) = 0;
        iVar6 = *(int *)(param_1 + 0x18c);
        *(undefined4 *)(param_1 + 0x100) = 0;
      }
      else {
        *(undefined4 *)(param_1 + 0x100) = 0;
      }
    }
    *(undefined4 *)(param_1 + 0x1c0) = 0;
    if (iVar6 == 3) {
      if (*(int *)(*(int *)(param_1 + 0x1d0) + 0x28) == 1) {
        iVar3 = *(int *)(param_1 + 0x1d4);
      }
      else {
        if (*(int *)(param_1 + 0x1bc) == 0) goto LAB_00295d50;
        iVar3 = *(int *)(param_1 + 0x1d4);
      }
    }
    else {
      if (*(int *)(*(int *)(param_1 + 0x1e0) + 0x28) == 1) {
        if (*(int *)(*(int *)(param_1 + 0x1f0) + 0x28) != 1) {
          iVar3 = *(int *)(param_1 + 0x1bc);
          goto LAB_00295c64;
        }
        iVar3 = *(int *)(param_1 + 0x1e4);
      }
      else {
        iVar3 = *(int *)(param_1 + 0x1bc);
LAB_00295c64:
        if (iVar3 == 0) goto LAB_00295d50;
        iVar3 = *(int *)(param_1 + 0x1e4);
      }
      if (*(int *)(iVar3 + 0x28) != 1) goto LAB_00295d50;
      iVar3 = *(int *)(param_1 + 500);
    }
    bVar8 = *(int *)(iVar3 + 0x28) == 1;
  }
  else {
    if (param_2 == 0) {
      uVar4 = *(undefined4 *)(param_1 + 0x1d4);
      *(undefined4 *)(param_1 + 0x1d4) = *(undefined4 *)(param_1 + 0x1d0);
      uVar1 = *(undefined4 *)(param_1 + 0x1e4);
      *(undefined4 *)(param_1 + 0x1e4) = *(undefined4 *)(param_1 + 0x1e0);
      uVar2 = *(undefined4 *)(param_1 + 0x1f0);
      *(undefined4 *)(param_1 + 0x1d0) = uVar4;
      *(undefined4 *)(param_1 + 0x1e0) = uVar1;
      *(undefined4 *)(param_1 + 0x1f0) = *(undefined4 *)(param_1 + 500);
      *(undefined4 *)(param_1 + 500) = uVar2;
      uVar4 = *(undefined4 *)(param_1 + 0x1d4);
    }
    else {
      uVar4 = *(undefined4 *)(param_1 + 0x1d4);
    }
    *(undefined4 *)(param_1 + 0x1d8) = uVar4;
    *(int *)(param_1 + 0x1e8) = *(int *)(param_1 + 0x1e4);
    *(int *)(param_1 + 0x1f8) = *(int *)(param_1 + 500);
    if (iVar6 == 3) {
      if (iVar3 == 2) {
        iVar3 = *(int *)(param_1 + 0x1d0);
LAB_00295d3c:
        if (*(int *)(iVar3 + 0x28) == 1) goto LAB_00295d48;
      }
      else {
        bVar8 = true;
      }
    }
    else {
      iVar7 = *(int *)(param_1 + 500);
      if (iVar6 != 1) {
        iVar7 = *(int *)(param_1 + 0x1e4);
      }
      if (iVar3 == 2) {
        if (param_2 == 0) {
          iVar3 = *(int *)(param_1 + 0x1e0);
        }
        else {
          if (*(int *)(iVar7 + 0x28) == 1) {
            bVar8 = true;
            goto LAB_00295d50;
          }
          iVar3 = *(int *)(param_1 + 0x1e0);
        }
        if (*(int *)(iVar3 + 0x28) == 1) {
          iVar3 = *(int *)(param_1 + 0x1f0);
          goto LAB_00295d3c;
        }
      }
      else {
LAB_00295d48:
        bVar8 = true;
      }
    }
  }
LAB_00295d50:
  if (iVar6 == 2) {
    iVar5 = *(int *)(param_1 + 0x1f8);
  }
  else if (iVar6 < 3) {
    if (iVar6 != 1) {
      _GRA3DVU1MEM_SPOTLIGHTSPC1 = 0;
      goto LAB_00295d8c;
    }
    iVar5 = *(int *)(param_1 + 0x1e8);
  }
  else {
    if (iVar6 != 3) {
      _GRA3DVU1MEM_SPOTLIGHTSPC1 = 0;
      goto LAB_00295d8c;
    }
    iVar5 = *(int *)(param_1 + 0x1d8);
  }
  *(undefined4 *)(iVar5 + 0x28) = 0;
LAB_00295d8c:
  uVar4 = *(undefined4 *)(param_1 + 0x168);
  *(undefined8 *)(iVar5 + 0x18) = *(undefined8 *)(param_1 + 0x840);
  *(undefined4 *)(iVar5 + 0x2c) = uVar4;
  uVar4 = *(undefined4 *)(param_1 + 0x18c);
  *(undefined8 *)(iVar5 + 0x20) = *(undefined8 *)(param_1 + 0x848);
  *(undefined4 *)(iVar5 + 0x30) = uVar4;
  *(undefined4 *)(iVar5 + 0x34) = *(undefined4 *)(param_1 + 0x154);
  *(undefined4 *)(iVar5 + 0x38) = *(undefined4 *)(param_1 + 0x1a0);
  *(undefined4 *)(iVar5 + 0x3c) = *(undefined4 *)(param_1 + 400);
  *(undefined4 *)(iVar5 + 0x40) = *(undefined4 *)(param_1 + 0x19c);
  *(undefined4 *)(iVar5 + 0x44) = *(undefined4 *)(param_1 + 0x1a4);
  *(undefined4 *)(iVar5 + 0x48) = *(undefined4 *)(param_1 + 0x1a8);
  *(undefined4 *)(iVar5 + 0x4c) = *(undefined4 *)(param_1 + 0x1ac);
  *(undefined4 *)(iVar5 + 0x50) = *(undefined4 *)(param_1 + 0x1b0);
  *(undefined4 *)(iVar5 + 0x54) = *(undefined4 *)(param_1 + 0x1b4);
  *(undefined4 *)(iVar5 + 0x58) = *(undefined4 *)(param_1 + 0x1b8);
  *(undefined4 *)(iVar5 + 0x5c) = *(undefined4 *)(param_1 + 0x160);
  *(undefined4 *)(iVar5 + 0x60) = *(undefined4 *)(param_1 + 0x164);
  return bVar8;
}

static _isOutSizeOK() {
  int iVar1;
  bool bVar2;
  char acStack_130 [256];
  
  iVar1 = (int)param_1;
  if (*(int *)(iVar1 + 0xf8) == 0) {
    bVar2 = *(int *)(param_2 + 0xc) * *(int *)(param_2 + 0x10) <= *(int *)(iVar1 + 0xfc);
  }
  else {
    bVar2 = false;
    if (*(int *)(param_2 + 4) <= *(int *)(iVar1 + 0xf4)) {
      bVar2 = *(int *)(param_2 + 8) <= *(int *)(iVar1 + 0xf8);
    }
  }
  if (bVar2 == false) {
    sprintf(acStack_130,"Too small buffer size for %dx%d picture\n");
    _Error(param_1,acStack_130);
  }
  return bVar2;
}

_cpr8() {
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 in_hi;
  ulong uVar11;
  int local_ac;
  uint local_a8;
  
  uVar7 = *param_2 & 0xfffffff;
  local_a8 = *(uint *)(param_1 + 0xf0) & 0xfffffff;
  if (*(int *)(param_1 + 0x18c) == 3) {
    iVar9 = *(int *)(param_1 + 0xf8);
    uVar3 = param_2[4];
  }
  else {
    if (*(int *)(param_1 + 0xf8) != 0) {
      iVar10 = (*(int *)(param_1 + 0xf8) >> 4) * 0xc0;
      iVar8 = ((int)param_2[4] >> 1) * 0x180;
      local_ac = 2;
      goto LAB_00295f8c;
    }
    uVar3 = param_2[4];
    iVar9 = 0;
  }
  iVar8 = uVar3 * 0x180;
  iVar10 = iVar8;
  if (iVar9 != 0) {
    iVar10 = (iVar9 >> 4) * 0x180;
  }
  local_ac = 1;
LAB_00295f8c:
  uVar11 = CONCAT44((int)((ulong)in_hi >> 0x20),iVar10 >> 0x1f);
  iVar9 = 0;
  if (local_ac != 0) {
    uVar3 = param_2[3];
    do {
      iVar5 = 0;
      uVar6 = local_a8;
      if (0 < (int)uVar3) {
        do {
          iVar4 = DIntr();
          REG_DMAC_9_SPR_TO_SADR = 0;
          REG_DMAC_9_SPR_TO_MADR = uVar7;
          REG_DMAC_9_SPR_TO_QWC = iVar8 >> 4;
          REG_DMAC_9_SPR_TO_CHCR = 0x101;
          if (iVar4 != 0) {
            EIntr();
          }
          uVar7 = uVar7 + iVar8;
          iVar5 = iVar5 + 1;
          do {
            uVar3 = REG_DMAC_9_SPR_TO_CHCR;
          } while ((uVar3 & 0x100) != 0);
          iVar4 = DIntr();
          REG_DMAC_8_SPR_FROM_SADR = 0;
          REG_DMAC_8_SPR_FROM_MADR = uVar6;
          REG_DMAC_8_SPR_FROM_QWC = iVar8 >> 4;
          REG_DMAC_8_SPR_FROM_CHCR = 0x100;
          if (iVar4 != 0) {
            EIntr();
          }
          uVar3 = param_2[3];
          do {
            uVar2 = REG_DMAC_8_SPR_FROM_CHCR;
          } while ((uVar2 & 0x100) != 0);
          do {
            iVar4 = REG_DMAC_8_SPR_FROM_QWC;
          } while (iVar4 != 0);
          uVar6 = uVar6 + iVar10;
        } while (iVar5 < (int)uVar3);
      }
      iVar9 = iVar9 + 1;
      lVar1 = ((long)(int)local_a8 | uVar11) + (long)(*(int *)(param_1 + 0xfc) * 0xc0);
      local_a8 = (uint)lVar1;
      uVar11 = (ulong)(int)((ulong)lVar1 >> 0x20);
    } while (iVar9 < local_ac);
  }
  return;
}

static _markOutput() {
  if (*(int *)(param_1 + 8) != 2) {
    *(undefined4 *)(param_1 + 8) = 2;
    *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_1 + 0x130);
  }
  *(undefined4 *)(param_1 + 0x838) = 1;
  return;
}

static _getPtsDtsFlags() {
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long u;
  ulong v;
  ulong uVar8;
  
  if (*(int *)(param_1 + 0x8c) == 0) {
    *param_3 = *(long *)(param_2 + 0x18);
  }
  else {
    lVar7 = *(long *)(param_2 + 0x18);
    if (lVar7 < 0) {
      iVar2 = *(int *)(param_1 + 0x98);
      if (iVar2 < 0) {
        *param_3 = lVar7;
      }
      else {
        uVar1 = *(uint *)(param_1 + 0xa8);
        v = (ulong)(int)*(undefined8 *)(param_1 + 0xa0);
        u = *(long *)(param_1 + 0x90);
        uVar8 = v & 1;
        lVar7 = __muldi3(u,v);
        *param_3 = (long)(int)(iVar2 + (int)((ulong)(lVar7 << 0x1f) >> 0x20) +
                                       ((uint)uVar8 & uVar1 & 1 & (uint)u & 1));
        if ((uVar8 & *(ulong *)(param_1 + 0x90)) != 0) {
          *(uint *)(param_1 + 0xa8) = uVar1 + 1;
        }
      }
    }
    else {
      *param_3 = lVar7;
    }
  }
  if (*(int *)(param_1 + 0x110) == 2) {
    if (*(long *)(param_1 + 0x108) < 0) {
      lVar7 = (long)*(int *)(param_2 + 0x40);
    }
    else {
      *param_3 = *(long *)(param_1 + 0x108);
      *(undefined4 *)(param_1 + 0x110) = 0;
      *(undefined8 *)(param_1 + 0x108) = 0xffffffffffffffff;
      lVar7 = (long)*(int *)(param_2 + 0x40);
    }
  }
  else {
    lVar7 = (long)*(int *)(param_2 + 0x40);
  }
  iVar2 = *(int *)(param_2 + 0x3c);
  iVar3 = *(int *)(param_2 + 0x34);
  iVar4 = *(int *)(param_2 + 0x30);
  iVar5 = *(int *)(param_2 + 0x2c);
  iVar6 = *(int *)(param_2 + 0x38);
  *param_4 = *(undefined8 *)(param_2 + 0x20);
  *param_5 = (long)iVar3 << 8 | (long)iVar5 | lVar7 << 5 | (long)iVar2 << 6 |
             (long)iVar6 << 7 | (long)iVar4 << 3;
  return;
}

_dispRefImage() {
  uint uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = (int)param_1;
  iVar4 = *(int *)(iVar3 + 0x870);
  _getPtsDtsFlags(param_1,param_2,iVar4 + 0x10,iVar4 + 0x18,iVar4 + 0x20);
  lVar2 = *(long *)(*(int *)(iVar3 + 0x870) + 0x20);
  *(undefined4 *)(iVar3 + 0x98) = *(undefined4 *)(*(int *)(iVar3 + 0x870) + 0x10);
  iVar4 = (int)param_2;
  uVar1 = *(uint *)(_showCount + ((uint)((ulong)(lVar2 << 0x1b) >> 0x20) & 0xf) * 4);
  *(undefined4 *)(iVar3 + 0xe4) = *(undefined4 *)(iVar4 + 0x5c);
  *(ulong *)(iVar3 + 0xa0) = (ulong)uVar1;
  *(undefined4 *)(iVar3 + 0xe8) = *(undefined4 *)(iVar4 + 0x60);
  *(undefined4 *)(iVar3 + 0xcc) = *(undefined4 *)(iVar4 + 0x44);
  *(undefined4 *)(iVar3 + 0xd0) = *(undefined4 *)(iVar4 + 0x48);
  *(undefined4 *)(iVar3 + 0xd4) = *(undefined4 *)(iVar4 + 0x4c);
  *(undefined4 *)(iVar3 + 0xd8) = *(undefined4 *)(iVar4 + 0x50);
  *(undefined4 *)(iVar3 + 0xdc) = *(undefined4 *)(iVar4 + 0x54);
  *(undefined4 *)(iVar3 + 0xe0) = *(undefined4 *)(iVar4 + 0x58);
  lVar2 = _isOutSizeOK(param_1,param_2);
  if ((lVar2 != 0) && (*(int *)(iVar4 + 0x28) == 1)) {
    if (*(int *)(iVar3 + 200) == 0) {
      _cpr8(param_1,param_2);
    }
    else {
      _csc_storeRefImage(param_1);
    }
    _markOutput(param_1);
    return;
  }
  return;
}

_dispRefImageField() {
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  
  uVar10 = 0;
  iVar5 = (int)param_1;
  uVar8 = param_3;
  uVar9 = param_2;
  if (*(int *)(iVar5 + 0x18c) == 2) {
    uVar10 = 0x40;
    uVar8 = param_2;
    uVar9 = param_3;
  }
  iVar6 = *(int *)(iVar5 + 0x870);
  _getPtsDtsFlags(param_1,uVar8,iVar6 + 0x10,iVar6 + 0x18,iVar6 + 0x20);
  iVar6 = *(int *)(iVar5 + 0x870);
  uVar1 = *(undefined4 *)(iVar6 + 0x10);
  *(undefined8 *)(iVar5 + 0xa0) = 1;
  *(undefined4 *)(iVar5 + 0x98) = uVar1;
  _getPtsDtsFlags(param_1,uVar9,iVar6 + 0x28,iVar6 + 0x30,iVar6 + 0x38);
  iVar6 = *(int *)(iVar5 + 0x870);
  uVar1 = *(undefined4 *)(iVar6 + 0x28);
  *(undefined8 *)(iVar5 + 0xa0) = 1;
  *(undefined4 *)(iVar5 + 0x98) = uVar1;
  uVar2 = *(ulong *)(iVar6 + 0x20);
  iVar7 = (int)uVar8;
  uVar4 = *(ulong *)(iVar6 + 0x38);
  *(undefined4 *)(iVar5 + 0xe4) = *(undefined4 *)(iVar7 + 0x5c);
  *(ulong *)(iVar6 + 0x20) = uVar2 | uVar10;
  uVar1 = *(undefined4 *)(iVar7 + 0x60);
  *(ulong *)(iVar6 + 0x38) = uVar4 | uVar10;
  *(undefined4 *)(iVar5 + 0xe8) = uVar1;
  *(undefined4 *)(iVar5 + 0xcc) = *(undefined4 *)(iVar7 + 0x44);
  *(undefined4 *)(iVar5 + 0xd0) = *(undefined4 *)((int)uVar9 + 0x48);
  *(undefined4 *)(iVar5 + 0xd8) = *(undefined4 *)(iVar7 + 0x50);
  *(undefined4 *)(iVar5 + 0xdc) = *(undefined4 *)((int)uVar9 + 0x54);
  lVar3 = _isOutSizeOK(param_1,param_2);
  if (((lVar3 != 0) && (iVar6 = (int)param_2, *(int *)(iVar6 + 0x28) == 1)) &&
     (*(int *)((int)param_3 + 0x28) == 1)) {
    *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) << 1;
    if (*(int *)(iVar5 + 200) == 0) {
      _cpr8(param_1,param_2);
      iVar5 = *(int *)(iVar6 + 0x10);
    }
    else {
      _csc_storeRefImage(param_1,param_2);
      iVar5 = *(int *)(iVar6 + 0x10);
    }
    *(int *)(iVar6 + 0x10) = iVar5 >> 1;
    _markOutput(param_1);
    return;
  }
  return;
}

static dmaRefImage() {
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ulong *puVar6;
  int iVar7;
  
  iVar7 = 0;
  iVar3 = *(int *)(param_1 + 0x828);
  iVar1 = *(int *)(iVar3 * 0x140 + param_1 + 0x6d4);
  puVar6 = (ulong *)0x204cc580;
  if (0 < iVar1) {
    do {
      lVar5 = 3;
      if (iVar7 == iVar1 + -1) {
        lVar5 = 0;
      }
      iVar4 = iVar7 * 4 + iVar3 * 0x140;
      iVar7 = iVar7 + 1;
      iVar2 = *(int *)(param_1 + 0x5c0 + iVar4);
      *puVar6 = ((long)*(int *)(param_1 + 0x5b0 + iVar4) & 0xfffffffU) << 0x20 | 0x30000030;
      puVar6[2] = ((long)iVar2 & 0xfffffffU) << 0x20 | lVar5 << 0x1c | 0x30;
      puVar6 = puVar6 + 4;
    } while (iVar7 < iVar1);
  }
  iVar3 = DIntr();
  SYNC(0);
  REG_DMAC_9_SPR_TO_SADR = *(undefined4 *)(*(int *)(param_1 + 0x828) * 0x140 + param_1 + 0x5a8);
  REG_DMAC_9_SPR_TO_TADR = 0x4cc580;
  REG_DMAC_9_SPR_TO_QWC = 0;
  REG_DMAC_9_SPR_TO_CHCR = 0x105;
  if (iVar3 == 0) {
    return iVar3;
  }
  iVar3 = EIntr();
  return iVar3;
}

static receiveDataFromIPU() {
  int iVar1;
  
  iVar1 = DIntr();
  REG_DMAC_3_IPU_FROM_MADR = param_1 & 0xfffffff | 0x80000000;
  REG_DMAC_3_IPU_FROM_QWC = param_2 >> 4;
  REG_DMAC_3_IPU_FROM_CHCR = 0x100;
  if (iVar1 != 0) {
    iVar1 = EIntr();
    return iVar1;
  }
  return iVar1;
}
