// STATUS: NOT STARTED

#include "libvu0.h"

sceVu0ApplyMatrix() {
  int iVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  
  iVar1 = DIntr();
  auVar2 = _lqc2(*param_2);
  auVar3 = _lqc2(param_2[1]);
  auVar4 = _lqc2(param_2[2]);
  auVar5 = _lqc2(param_2[3]);
  auVar6 = _lqc2(*param_3);
  _vmulabc(auVar2,auVar6);
  _vmaddabc(auVar3,auVar6);
  _vmaddabc(auVar4,auVar6);
  auVar2 = _vmaddbc(auVar5,auVar6);
  auVar2 = _sqc2(auVar2);
  *param_1 = auVar2;
  if (iVar1 != 0) {
    iVar1 = EIntr();
    return iVar1;
  }
  return iVar1;
}

sceVu0MulMatrix() {
  int iVar1;
  int iVar2;
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  
  iVar1 = DIntr();
  auVar3 = _lqc2(*param_2);
  auVar4 = _lqc2(param_2[1]);
  auVar5 = _lqc2(param_2[2]);
  auVar6 = _lqc2(param_2[3]);
  iVar2 = 4;
  do {
    auVar7 = _lqc2(*param_3);
    _vmulabc(auVar3,auVar7);
    _vmaddabc(auVar4,auVar7);
    _vmaddabc(auVar5,auVar7);
    auVar7 = _vmaddbc(auVar6,auVar7);
    auVar7 = _sqc2(auVar7);
    *param_1 = auVar7;
    iVar2 = iVar2 + -1;
    param_3 = param_3[1];
    param_1 = param_1[1];
  } while (iVar2 != 0);
  if (iVar1 != 0) {
    iVar1 = EIntr();
    return iVar1;
  }
  return iVar1;
}

sceVu0OuterProduct() {
  int iVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  
  iVar1 = DIntr();
  auVar2 = _lqc2(*param_2);
  auVar3 = _lqc2(*param_3);
  _vopmula(auVar2,auVar3);
  auVar2 = _vopmsub(auVar3,auVar2);
  auVar2 = _vsub(auVar2,auVar2);
  auVar2 = _sqc2(auVar2);
  *param_1 = auVar2;
  if (iVar1 != 0) {
    iVar1 = EIntr();
    return iVar1;
  }
  return iVar1;
}

sceVu0InnerProduct() {
  int iVar1;
  long lVar2;
  undefined auVar3 [16];
  undefined auVar4 [16];
  
  iVar1 = DIntr();
  auVar3 = _lqc2(*param_1);
  auVar4 = _lqc2(*param_2);
  auVar3 = _vmul(auVar3,auVar4);
  auVar3 = _vaddbc(auVar3,auVar3);
  auVar3 = _vaddbc(auVar3,auVar3);
  auVar3 = _qmfc2(auVar3._0_4_);
  lVar2 = auVar3._0_8_;
  if (iVar1 != 0) {
    iVar1 = EIntr();
    lVar2 = (long)iVar1;
  }
  return lVar2;
}

sceVu0Normalize() {
  int iVar1;
  undefined in_vf0 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined4 uVar4;
  
  iVar1 = DIntr();
  auVar2 = _lqc2(*param_2);
  auVar3 = _vmul(auVar2,auVar2);
  auVar3 = _vaddbc(auVar3,auVar3);
  auVar3 = _vaddbc(auVar3,auVar3);
  _vsqrt(auVar3);
  uVar4 = _vwaitq();
  auVar3 = _vaddq(in_vf0,uVar4);
  _vnop();
  _vnop();
  _vdiv(in_vf0,0,auVar3,0);
  _vsub(in_vf0,in_vf0);
  uVar4 = _vwaitq();
  auVar2 = _vmulq(auVar2,uVar4);
  auVar2 = _sqc2(auVar2);
  *param_1 = auVar2;
  if (iVar1 != 0) {
    iVar1 = EIntr();
    return iVar1;
  }
  return iVar1;
}

sceVu0TransposeMatrix() {
  int iVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  
  iVar1 = DIntr();
  auVar3 = _pextlw(SUB168(param_2[1],0),SUB168(*param_2,0));
  auVar4 = _pextuw(param_2[1],*param_2);
  auVar5 = _pextlw(SUB168(param_2[3],0),SUB128(*(undefined (*) [12])param_2[2],0));
  auVar6 = _pextuw(param_2[3],param_2[2]);
  auVar2 = _pcpyld(auVar5,auVar3);
  auVar3 = _pcpyud(auVar3,auVar5);
  auVar5 = _pcpyld(auVar6,auVar4);
  auVar4 = _pcpyud(auVar4,auVar6);
  *param_1 = auVar2._0_4_;
  param_1[1] = auVar2._4_4_;
  param_1[2] = auVar2._8_4_;
  param_1[3] = auVar2._12_4_;
  param_1[4] = auVar3._0_4_;
  param_1[5] = auVar3._4_4_;
  param_1[6] = auVar3._8_4_;
  param_1[7] = auVar3._12_4_;
  param_1[8] = auVar5._0_4_;
  param_1[9] = auVar5._4_4_;
  param_1[10] = auVar5._8_4_;
  param_1[0xb] = auVar5._12_4_;
  param_1[0xc] = auVar4._0_4_;
  param_1[0xd] = auVar4._4_4_;
  param_1[0xe] = auVar4._8_4_;
  param_1[0xf] = auVar4._12_4_;
  if (iVar1 != 0) {
    iVar1 = EIntr();
    return iVar1;
  }
  return iVar1;
}

sceVu0InversMatrix() {
  int iVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  
  iVar1 = DIntr();
  auVar6 = _lqc2(param_2[3]);
  auVar7 = _vmove(auVar6);
  auVar6 = _vsub(auVar6,auVar6);
  auVar9 = _vmove(auVar6);
  auVar6 = _qmfc2(auVar6._0_4_);
  auVar2 = _pextlw(SUB168(param_2[1],0),SUB168(*param_2,0));
  auVar3 = _pextuw(param_2[1],*param_2);
  auVar4 = _pextlw(auVar6._0_8_,SUB128(*(undefined (*) [12])param_2[2],0));
  auVar5 = _pextuw(auVar6,param_2[2]);
  auVar6 = _pcpyld(auVar4,auVar2);
  auVar2 = _pcpyud(auVar2,auVar4);
  auVar3 = _pcpyld(auVar5,auVar3);
  auVar4 = _qmtc2(auVar6._0_4_);
  auVar5 = _qmtc2(auVar2._0_4_);
  auVar8 = _qmtc2(auVar3._0_4_);
  _vmulabc(auVar4,auVar7);
  _vmaddabc(auVar5,auVar7);
  auVar4 = _vmaddbc(auVar8,auVar7);
  auVar4 = _vsub(auVar9,auVar4);
  *param_1 = auVar6._0_4_;
  param_1[1] = auVar6._4_4_;
  param_1[2] = auVar6._8_4_;
  param_1[3] = auVar6._12_4_;
  param_1[4] = auVar2._0_4_;
  param_1[5] = auVar2._4_4_;
  param_1[6] = auVar2._8_4_;
  param_1[7] = auVar2._12_4_;
  param_1[8] = auVar3._0_4_;
  param_1[9] = auVar3._4_4_;
  param_1[10] = auVar3._8_4_;
  param_1[0xb] = auVar3._12_4_;
  auVar6 = _sqc2(auVar4);
  *(undefined (*) [16])(param_1 + 0xc) = auVar6;
  if (iVar1 != 0) {
    iVar1 = EIntr();
    return iVar1;
  }
  return iVar1;
}

sceVu0DivVector() {
  int iVar1;
  undefined in_vf0 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined4 uVar4;
  
  iVar1 = DIntr();
  auVar2 = _lqc2(*param_3);
  auVar3 = _qmtc2(param_1);
  _vdiv(in_vf0,0,auVar3,0);
  uVar4 = _vwaitq();
  auVar2 = _vmulq(auVar2,uVar4);
  auVar2 = _sqc2(auVar2);
  *param_2 = auVar2;
  if (iVar1 != 0) {
    iVar1 = EIntr();
    return iVar1;
  }
  return iVar1;
}

sceVu0DivVectorXYZ() {
  int iVar1;
  undefined in_vf0 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined4 uVar4;
  
  iVar1 = DIntr();
  auVar2 = _lqc2(*param_3);
  auVar3 = _qmtc2(param_1);
  _vdiv(in_vf0,0,auVar3,0);
  uVar4 = _vwaitq();
  auVar2 = _vmulq(auVar2,uVar4);
  auVar2 = _sqc2(auVar2);
  *param_2 = auVar2;
  if (iVar1 != 0) {
    iVar1 = EIntr();
    return iVar1;
  }
  return iVar1;
}

sceVu0InterVector() {
  int iVar1;
  undefined in_vf0 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  
  iVar1 = DIntr();
  auVar2 = _lqc2(*param_3);
  auVar3 = _lqc2(*param_4);
  auVar4 = _qmtc2(param_1);
  auVar5 = _vaddbc(in_vf0,in_vf0);
  auVar5 = _vsub(auVar5,auVar4);
  _vmulabc(auVar2,auVar4);
  auVar2 = _vmaddbc(auVar3,auVar5);
  auVar2 = _sqc2(auVar2);
  *param_2 = auVar2;
  if (iVar1 != 0) {
    iVar1 = EIntr();
    return iVar1;
  }
  return iVar1;
}

sceVu0AddVector() {
  int iVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  
  iVar1 = DIntr();
  auVar2 = _lqc2(*param_2);
  auVar3 = _lqc2(*param_3);
  auVar2 = _vadd(auVar2,auVar3);
  auVar2 = _sqc2(auVar2);
  *param_1 = auVar2;
  if (iVar1 != 0) {
    iVar1 = EIntr();
    return iVar1;
  }
  return iVar1;
}

sceVu0SubVector() {
  int iVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  
  iVar1 = DIntr();
  auVar2 = _lqc2(*param_2);
  auVar3 = _lqc2(*param_3);
  auVar2 = _vsub(auVar2,auVar3);
  auVar2 = _sqc2(auVar2);
  *param_1 = auVar2;
  if (iVar1 != 0) {
    iVar1 = EIntr();
    return iVar1;
  }
  return iVar1;
}

sceVu0MulVector() {
  int iVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  
  iVar1 = DIntr();
  auVar2 = _lqc2(*param_2);
  auVar3 = _lqc2(*param_3);
  auVar2 = _vmul(auVar2,auVar3);
  auVar2 = _sqc2(auVar2);
  *param_1 = auVar2;
  if (iVar1 != 0) {
    iVar1 = EIntr();
    return iVar1;
  }
  return iVar1;
}

sceVu0ScaleVector() {
  int iVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  
  iVar1 = DIntr();
  auVar2 = _lqc2(*param_3);
  auVar3 = _qmtc2(param_1);
  auVar2 = _vmulbc(auVar2,auVar3);
  auVar2 = _sqc2(auVar2);
  *param_2 = auVar2;
  if (iVar1 != 0) {
    iVar1 = EIntr();
    return iVar1;
  }
  return iVar1;
}

sceVu0TransMatrix() {
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined auVar13 [16];
  undefined auVar14 [16];
  
  iVar1 = DIntr();
  auVar13 = _lqc2(*param_3);
  auVar14 = _lqc2(*(undefined (*) [16])(param_2 + 0xc));
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[4];
  uVar6 = param_2[5];
  uVar7 = param_2[6];
  uVar8 = param_2[7];
  uVar9 = param_2[8];
  uVar10 = param_2[9];
  uVar11 = param_2[10];
  uVar12 = param_2[0xb];
  auVar13 = _vadd(auVar14,auVar13);
  *param_1 = *param_2;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  param_1[4] = uVar5;
  param_1[5] = uVar6;
  param_1[6] = uVar7;
  param_1[7] = uVar8;
  param_1[8] = uVar9;
  param_1[9] = uVar10;
  param_1[10] = uVar11;
  param_1[0xb] = uVar12;
  auVar13 = _sqc2(auVar13);
  *(undefined (*) [16])(param_1 + 0xc) = auVar13;
  if (iVar1 != 0) {
    iVar1 = EIntr();
    return iVar1;
  }
  return iVar1;
}

sceVu0CopyVector() {
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = DIntr();
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  if (iVar1 != 0) {
    iVar1 = EIntr();
    return iVar1;
  }
  return iVar1;
}

sceVu0CopyMatrix() {
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  
  iVar1 = DIntr();
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[4];
  uVar6 = param_2[5];
  uVar7 = param_2[6];
  uVar8 = param_2[7];
  uVar9 = param_2[8];
  uVar10 = param_2[9];
  uVar11 = param_2[10];
  uVar12 = param_2[0xb];
  uVar13 = param_2[0xc];
  uVar14 = param_2[0xd];
  uVar15 = param_2[0xe];
  uVar16 = param_2[0xf];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  param_1[4] = uVar5;
  param_1[5] = uVar6;
  param_1[6] = uVar7;
  param_1[7] = uVar8;
  param_1[8] = uVar9;
  param_1[9] = uVar10;
  param_1[10] = uVar11;
  param_1[0xb] = uVar12;
  param_1[0xc] = uVar13;
  param_1[0xd] = uVar14;
  param_1[0xe] = uVar15;
  param_1[0xf] = uVar16;
  if (iVar1 != 0) {
    iVar1 = EIntr();
    return iVar1;
  }
  return iVar1;
}

sceVu0FTOI4Vector() {
  int iVar1;
  undefined auVar2 [16];
  
  iVar1 = DIntr();
  auVar2 = _lqc2(*param_2);
  auVar2 = _vftoi4(auVar2);
  auVar2 = _sqc2(auVar2);
  *param_1 = auVar2;
  if (iVar1 != 0) {
    iVar1 = EIntr();
    return iVar1;
  }
  return iVar1;
}

sceVu0FTOI0Vector() {
  int iVar1;
  undefined auVar2 [16];
  
  iVar1 = DIntr();
  auVar2 = _lqc2(*param_2);
  auVar2 = _vftoi0(auVar2);
  auVar2 = _sqc2(auVar2);
  *param_1 = auVar2;
  if (iVar1 != 0) {
    iVar1 = EIntr();
    return iVar1;
  }
  return iVar1;
}

sceVu0ITOF4Vector() {
  int iVar1;
  undefined auVar2 [16];
  
  iVar1 = DIntr();
  auVar2 = _lqc2(*param_2);
  auVar2 = _vitof4(auVar2);
  auVar2 = _sqc2(auVar2);
  *param_1 = auVar2;
  if (iVar1 != 0) {
    iVar1 = EIntr();
    return iVar1;
  }
  return iVar1;
}

sceVu0ITOF0Vector() {
  int iVar1;
  undefined auVar2 [16];
  
  iVar1 = DIntr();
  auVar2 = _lqc2(*param_2);
  auVar2 = _vitof0(auVar2);
  auVar2 = _sqc2(auVar2);
  *param_1 = auVar2;
  if (iVar1 != 0) {
    iVar1 = EIntr();
    return iVar1;
  }
  return iVar1;
}

sceVu0UnitMatrix() {
  int iVar1;
  undefined in_vf0 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  
  iVar1 = DIntr();
  auVar2 = _vsub(in_vf0,in_vf0);
  auVar2 = _vadd(auVar2,in_vf0);
  auVar3 = _vmr32(auVar2);
  auVar4 = _vmr32(auVar3);
  auVar5 = _vmr32(auVar4);
  auVar2 = _sqc2(auVar2);
  param_1[3] = auVar2;
  auVar2 = _sqc2(auVar3);
  param_1[2] = auVar2;
  auVar2 = _sqc2(auVar4);
  param_1[1] = auVar2;
  auVar2 = _sqc2(auVar5);
  *param_1 = auVar2;
  if (iVar1 != 0) {
    iVar1 = EIntr();
    return iVar1;
  }
  return iVar1;
}

static _sceVu0ecossin() {
  long in_a3;
  undefined in_vf0 [16];
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined in_vf6 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined4 uVar5;
  
  auVar2 = _lqc2(_S5432);
  auVar3 = _vmr32(in_vf6);
  auVar1 = _vaddbc(in_vf0,auVar3);
  auVar3 = _vmul(auVar3,auVar3);
  auVar1 = _vmulbc(auVar1,in_vf0);
  auVar4 = _vmulbc(auVar2,auVar3);
  auVar2 = _vsub(in_vf0,in_vf0);
  auVar4 = _vmulbc(auVar4,auVar3);
  auVar4 = _vmulbc(auVar4,auVar3);
  auVar1 = _vaddbc(auVar1,auVar4);
  auVar4 = _vmulbc(auVar4,auVar3);
  auVar1 = _vaddbc(auVar1,auVar4);
  auVar3 = _vmulbc(auVar4,auVar3);
  auVar1 = _vaddbc(auVar1,auVar3);
  auVar1 = _vaddbc(auVar1,auVar3);
  auVar1 = _vaddbc(auVar2,auVar1);
  auVar1 = _vmul(auVar1,auVar1);
  auVar1 = _vsubbc(in_vf0,auVar1);
  _vsqrt(auVar1);
  uVar5 = _vwaitq();
  auVar1 = _vaddq(in_vf0,uVar5);
  if (in_a3 == 0) {
    _vaddbc(auVar2,auVar1);
  }
  else {
    _vsubbc(auVar2,auVar1);
  }
  return;
}

sceVu0RotMatrixZ() {
  long lVar1;
  int iVar2;
  undefined in_vf0 [16];
  undefined extraout_vf4 [16];
  undefined auVar3 [16];
  undefined extraout_vf5 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  
  DIntr();
  if (param_1 < 0.0) {
    param_1 = param_1 + 1.570796;
  }
  else {
    param_1 = 1.570796 - param_1;
  }
  _qmtc2(param_1);
  lVar1 = _sceVu0ecossin();
  _vmove(extraout_vf5);
  _vmove(extraout_vf5);
  auVar6 = _vmove(in_vf0);
  auVar7 = _vsub(auVar6,auVar6);
  auVar5 = _vmr32(auVar7);
  auVar6 = _vsub(extraout_vf4,extraout_vf4);
  _vaddbc(extraout_vf5,auVar6);
  auVar4 = _vaddbc(extraout_vf5,auVar6);
  _vsubbc(extraout_vf5,auVar6);
  auVar6 = _vaddbc(extraout_vf5,auVar6);
  iVar2 = 4;
  do {
    auVar3 = _lqc2(*param_3);
    _vmulabc(auVar4,auVar3);
    _vmaddabc(auVar6,auVar3);
    _vmaddabc(auVar5,auVar3);
    auVar3 = _vmaddbc(auVar7,auVar3);
    auVar3 = _sqc2(auVar3);
    *param_2 = auVar3;
    iVar2 = iVar2 + -1;
    param_3 = param_3[1];
    param_2 = param_2[1];
  } while (iVar2 != 0);
  if (lVar1 != 0) {
    iVar2 = EIntr();
    return iVar2;
  }
  return 0;
}

sceVu0RotMatrixX() {
  long lVar1;
  int iVar2;
  undefined in_vf0 [16];
  undefined extraout_vf4 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined extraout_vf5 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  
  DIntr();
  if (param_1 < 0.0) {
    param_1 = param_1 + 1.570796;
  }
  else {
    param_1 = 1.570796 - param_1;
  }
  _qmtc2(param_1);
  lVar1 = _sceVu0ecossin();
  _vmove(extraout_vf5);
  _vmove(extraout_vf5);
  _vmove(extraout_vf5);
  _vmove(extraout_vf5);
  auVar5 = _vaddbc(extraout_vf5,in_vf0);
  auVar7 = _vaddbc(extraout_vf5,in_vf0);
  auVar3 = _vsub(extraout_vf4,extraout_vf4);
  _vaddbc(extraout_vf5,auVar3);
  auVar6 = _vaddbc(extraout_vf5,auVar3);
  _vsubbc(extraout_vf5,auVar3);
  auVar3 = _vaddbc(extraout_vf5,auVar3);
  iVar2 = 4;
  do {
    auVar4 = _lqc2(*param_3);
    _vmulabc(auVar5,auVar4);
    _vmaddabc(auVar6,auVar4);
    _vmaddabc(auVar3,auVar4);
    auVar4 = _vmaddbc(auVar7,auVar4);
    auVar4 = _sqc2(auVar4);
    *param_2 = auVar4;
    iVar2 = iVar2 + -1;
    param_3 = param_3[1];
    param_2 = param_2[1];
  } while (iVar2 != 0);
  if (lVar1 != 0) {
    iVar2 = EIntr();
    return iVar2;
  }
  return 0;
}

sceVu0RotMatrixY() {
  long lVar1;
  int iVar2;
  undefined in_vf0 [16];
  undefined extraout_vf4 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined extraout_vf5 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  
  DIntr();
  if (param_1 < 0.0) {
    param_1 = param_1 + 1.570796;
  }
  else {
    param_1 = 1.570796 - param_1;
  }
  _qmtc2(param_1);
  lVar1 = _sceVu0ecossin();
  _vmove(extraout_vf5);
  _vmove(extraout_vf5);
  _vmove(extraout_vf5);
  _vmove(extraout_vf5);
  auVar6 = _vaddbc(extraout_vf5,in_vf0);
  auVar7 = _vaddbc(extraout_vf5,in_vf0);
  auVar3 = _vsub(extraout_vf4,extraout_vf4);
  _vsubbc(extraout_vf5,auVar3);
  auVar5 = _vaddbc(extraout_vf5,auVar3);
  _vaddbc(extraout_vf5,auVar3);
  auVar3 = _vaddbc(extraout_vf5,auVar3);
  iVar2 = 4;
  do {
    auVar4 = _lqc2(*param_3);
    _vmulabc(auVar5,auVar4);
    _vmaddabc(auVar6,auVar4);
    _vmaddabc(auVar3,auVar4);
    auVar4 = _vmaddbc(auVar7,auVar4);
    auVar4 = _sqc2(auVar4);
    *param_2 = auVar4;
    iVar2 = iVar2 + -1;
    param_3 = param_3[1];
    param_2 = param_2[1];
  } while (iVar2 != 0);
  if (lVar1 != 0) {
    iVar2 = EIntr();
    return iVar2;
  }
  return 0;
}

sceVu0RotMatrix() {
  sceVu0RotMatrixZ(param_3[2]);
  sceVu0RotMatrixY(param_3[1],param_1,param_1);
  sceVu0RotMatrixX(*param_3,param_1,param_1);
  return;
}

sceVu0ClampVector() {
  int iVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  
  iVar1 = DIntr();
  auVar4 = _lqc2(*param_4);
  auVar2 = _qmtc2(param_1);
  auVar3 = _qmtc2(param_2);
  auVar2 = _vmaxbc(auVar4,auVar2);
  auVar2 = _vminibc(auVar2,auVar3);
  auVar2 = _sqc2(auVar2);
  *param_3 = auVar2;
  if (iVar1 != 0) {
    iVar1 = EIntr();
    return iVar1;
  }
  return iVar1;
}

sceVu0CameraMatrix() {
  undefined auStack_b0 [16];
  undefined auStack_a0 [16];
  undefined auStack_90 [32];
  undefined auStack_70 [16];
  
  sceVu0UnitMatrix(auStack_b0);
  sceVu0OuterProduct(auStack_70,param_4,param_3);
  sceVu0Normalize(auStack_b0,auStack_70);
  sceVu0Normalize(auStack_90,param_3);
  sceVu0OuterProduct(auStack_a0,auStack_90,auStack_b0);
  sceVu0TransMatrix(auStack_b0,auStack_b0,param_2);
  sceVu0InversMatrix(param_1,auStack_b0);
  return;
}

sceVu0NormalLightMatrix() {
  int iVar1;
  undefined auStack_60 [16];
  
  sceVu0ScaleVector(0xbf800000,auStack_60);
  sceVu0Normalize(param_1,auStack_60);
  sceVu0ScaleVector(0xbf800000,auStack_60,param_3);
  iVar1 = (int)param_1;
  sceVu0Normalize(iVar1 + 0x10,auStack_60);
  sceVu0ScaleVector(0xbf800000,auStack_60,param_4);
  sceVu0Normalize(iVar1 + 0x20,auStack_60);
  *(undefined4 *)(iVar1 + 0x30) = 0;
  *(undefined4 *)(iVar1 + 0x3c) = 0x3f800000;
  *(undefined4 *)(iVar1 + 0x38) = 0;
  *(undefined4 *)(iVar1 + 0x34) = 0;
  sceVu0TransposeMatrix(param_1,param_1);
  return;
}

sceVu0LightColorMatrix() {
  sceVu0CopyVector();
  sceVu0CopyVector(param_1 + 0x10,param_3);
  sceVu0CopyVector(param_1 + 0x20,param_4);
  sceVu0CopyVector(param_1 + 0x30,param_5);
  return;
}

sceVu0ViewScreenMatrix() {
  undefined4 *puVar1;
  float fVar2;
  float param_9;
  undefined4 local_a0 [5];
  undefined4 local_8c;
  float local_78;
  undefined4 local_70;
  undefined4 local_6c;
  float local_68;
  
  fVar2 = (param_9 * param_8 * (-param_6 + param_7)) / (-param_8 + param_9);
  sceVu0UnitMatrix();
  puVar1 = (undefined4 *)param_9_00;
  puVar1[5] = param_1;
  *puVar1 = param_1;
  puVar1[10] = 0;
  puVar1[0xf] = 0;
  puVar1[0xb] = 0x3f800000;
  puVar1[0xe] = 0x3f800000;
  sceVu0UnitMatrix(local_a0);
  local_a0[0] = param_2;
  local_8c = param_3;
  local_78 = fVar2;
  local_70 = param_4;
  local_6c = param_5;
  local_68 = (-param_7 * param_8 + param_6 * param_9) / (-param_8 + param_9);
  sceVu0MulMatrix(param_9_00,local_a0,param_9_00);
  return;
}

sceVu0DropShadowMatrix() {
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (param_6 != 0) {
    fVar1 = *param_5;
    fVar4 = param_5[1];
    fVar3 = param_5[2];
    param_4[3] = param_1;
    param_4[7] = param_2;
    param_4[0xb] = param_3;
    param_4[0xc] = -fVar1;
    param_4[0xd] = -fVar4;
    param_4[0xe] = -fVar3;
    fVar2 = 1.0 - (param_1 * fVar1 + param_2 * fVar4 + param_3 * fVar3);
    param_4[4] = param_2 * fVar1;
    param_4[1] = param_1 * fVar4;
    param_4[8] = param_3 * fVar1;
    param_4[9] = param_3 * fVar4;
    param_4[0xf] = fVar2 - 1.0;
    *param_4 = param_1 * fVar1 + fVar2;
    param_4[5] = param_2 * fVar4 + fVar2;
    param_4[10] = param_3 * fVar3 + fVar2;
    param_4[2] = param_1 * fVar3;
    param_4[6] = param_2 * fVar3;
    return;
  }
  fVar3 = *param_5;
  fVar4 = param_5[1];
  fVar5 = param_5[2];
  param_4[3] = 0.0;
  param_4[7] = 0.0;
  param_4[0xb] = 0.0;
  fVar2 = param_1 * fVar3 + param_2 * fVar4 + param_3 * fVar5;
  fVar1 = -1.0 / fVar2;
  param_4[0xf] = fVar1 * -fVar2;
  *param_4 = fVar1 * (param_1 * fVar3 - fVar2);
  param_4[4] = fVar1 * param_2 * fVar3;
  param_4[8] = fVar1 * param_3 * fVar3;
  param_4[0xc] = fVar1 * -fVar3;
  param_4[1] = fVar1 * param_1 * fVar4;
  param_4[5] = fVar1 * (param_2 * fVar4 - fVar2);
  param_4[9] = fVar1 * param_3 * fVar4;
  param_4[0xd] = fVar1 * -fVar4;
  param_4[2] = fVar1 * param_1 * fVar5;
  param_4[6] = fVar1 * param_2 * fVar5;
  param_4[10] = fVar1 * (param_3 * fVar5 - fVar2);
  param_4[0xe] = fVar1 * -fVar5;
  return;
}

sceVu0RotTransPersN() {
  int iVar1;
  undefined in_vf0 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined4 uVar8;
  
  iVar1 = DIntr();
  auVar2 = _lqc2(*param_2);
  auVar3 = _lqc2(param_2[1]);
  auVar4 = _lqc2(param_2[2]);
  auVar5 = _lqc2(param_2[3]);
  do {
    auVar6 = _lqc2(*param_3);
    _vmulabc(auVar2,auVar6);
    _vmaddabc(auVar3,auVar6);
    _vmaddabc(auVar4,auVar6);
    auVar6 = _vmaddbc(auVar5,auVar6);
    _vdiv(in_vf0,0,auVar6,0);
    uVar8 = _vwaitq();
    auVar6 = _vmulq(auVar6,uVar8);
    auVar7 = _vftoi4(auVar6);
    if (param_5 != 0) {
      auVar7 = _vftoi0(auVar6);
    }
    auVar6 = _sqc2(auVar7);
    *param_1 = auVar6;
    param_4 = param_4 + -1;
    param_3 = param_3[1];
    param_1 = param_1[1];
  } while (param_4 != 0);
  if (iVar1 != 0) {
    iVar1 = EIntr();
    return iVar1;
  }
  return iVar1;
}

sceVu0RotTransPers() {
  int iVar1;
  undefined in_vf0 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined4 uVar7;
  
  iVar1 = DIntr();
  auVar2 = _lqc2(*param_2);
  auVar3 = _lqc2(param_2[1]);
  auVar4 = _lqc2(param_2[2]);
  auVar5 = _lqc2(param_2[3]);
  auVar6 = _lqc2(*param_3);
  _vmulabc(auVar2,auVar6);
  _vmaddabc(auVar3,auVar6);
  _vmaddabc(auVar4,auVar6);
  auVar2 = _vmaddbc(auVar5,auVar6);
  _vdiv(in_vf0,0,auVar2,0);
  uVar7 = _vwaitq();
  auVar2 = _vmulq(auVar2,uVar7);
  auVar3 = _vftoi4(auVar2);
  if (param_4 != 0) {
    auVar3 = _vftoi0(auVar2);
  }
  auVar2 = _sqc2(auVar3);
  *param_1 = auVar2;
  if (iVar1 != 0) {
    iVar1 = EIntr();
    return iVar1;
  }
  return iVar1;
}

sceVu0CopyVectorXYZ() {
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  return;
}

sceVu0InterVectorXYZ() {
  int iVar1;
  undefined in_vf0 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  
  iVar1 = DIntr();
  auVar2 = _lqc2(*param_3);
  auVar3 = _lqc2(*param_4);
  auVar4 = _qmtc2(param_1);
  _vmove(auVar2);
  auVar5 = _vaddbc(in_vf0,in_vf0);
  auVar5 = _vsub(auVar5,auVar4);
  _vmulabc(auVar2,auVar4);
  auVar2 = _vmaddbc(auVar3,auVar5);
  auVar2 = _sqc2(auVar2);
  *param_2 = auVar2;
  if (iVar1 != 0) {
    iVar1 = EIntr();
    return iVar1;
  }
  return iVar1;
}

sceVu0ScaleVectorXYZ() {
  int iVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  
  iVar1 = DIntr();
  auVar2 = _lqc2(*param_3);
  auVar3 = _qmtc2(param_1);
  auVar2 = _vmulbc(auVar2,auVar3);
  auVar2 = _sqc2(auVar2);
  *param_2 = auVar2;
  if (iVar1 != 0) {
    iVar1 = EIntr();
    return iVar1;
  }
  return iVar1;
}

sceVu0ClipScreen() {
  int iVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined in_vf0 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  
  iVar1 = DIntr();
  auVar4 = _vsub(in_vf0,in_vf0);
  auVar6 = _lqc2(*param_1);
  auVar5 = _qmtc2(0x45800000);
  uVar3 = _ctc2(0);
  _vsub(auVar6,auVar4);
  _vsub(auVar5,auVar6);
  _vnop();
  _vnop();
  _vnop();
  _vnop();
  _vnop();
  uVar2 = _cfc2(uVar3);
  if (iVar1 != 0) {
    EIntr();
  }
  return uVar2 & 0xc0;
}

sceVu0ClipScreen3() {
  int iVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined in_vf0 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  
  iVar1 = DIntr();
  auVar4 = _vsub(in_vf0,in_vf0);
  auVar5 = _lqc2(*param_1);
  auVar7 = _lqc2(*param_2);
  auVar8 = _lqc2(*param_3);
  auVar6 = _qmtc2(0x45800000);
  uVar3 = _ctc2(0);
  _vsub(auVar5,auVar4);
  _vsub(auVar6,auVar5);
  _vsub(auVar7,auVar4);
  _vsub(auVar6,auVar7);
  _vsub(auVar8,auVar4);
  _vsub(auVar6,auVar8);
  _vnop();
  _vnop();
  _vnop();
  _vnop();
  _vnop();
  uVar2 = _cfc2(uVar3);
  if (iVar1 != 0) {
    EIntr();
  }
  return uVar2 & 0xc0;
}

sceVu0ClipAll() {
  int iVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined auVar11 [16];
  undefined auVar12 [16];
  
  iVar1 = DIntr();
  auVar8 = _lqc2(*param_4);
  auVar4 = _lqc2(*param_3);
  auVar5 = _lqc2(param_3[1]);
  auVar6 = _lqc2(param_3[2]);
  auVar7 = _lqc2(param_3[3]);
  auVar9 = _lqc2(*param_1);
  auVar10 = _lqc2(*param_2);
  _lqc2(*param_1);
  _lqc2(*param_2);
  do {
    _vmulabc(auVar4,auVar8);
    _vmaddabc(auVar5,auVar8);
    _vmaddabc(auVar6,auVar8);
    auVar8 = _vmaddbc(auVar7,auVar8);
    auVar11 = _vmulbc(auVar9,auVar8);
    auVar12 = _vmulbc(auVar10,auVar8);
    _vnop();
    _vnop();
    uVar3 = _ctc2(0);
    _vsub(auVar8,auVar11);
    _vsub(auVar12,auVar8);
    _vmove(auVar9);
    _vmove(auVar10);
    _vnop();
    param_4 = param_4[1];
    auVar8 = _lqc2(*param_4);
    param_5 = param_5 + -1;
    uVar2 = _cfc2(uVar3);
    uVar2 = uVar2 & 0xc0;
    if (uVar2 == 0) goto end_clip_all;
  } while (param_5 != 0);
  uVar2 = 1;
end_clip_all:
  if (iVar1 != 0) {
    EIntr();
  }
  return uVar2;
}

sceVpu0Reset() {
  int iVar1;
  undefined8 uVar2;
  undefined4 in_vc12;
  
  iVar1 = DIntr();
  REG_VIF0_MARK = 0;
  REG_VIF0_ERR = 0;
  REG_VIF0_FBRST = 1;
  uVar2 = _cfc2(in_vc12);
  _ctc2((uint)uVar2 | 2);
  SYNC(0x10);
  REG_VIF0_FIFO = (int)_init_vif_regs_135;
  DAT_10004004 = (int)((ulong)_init_vif_regs_135 >> 0x20);
  DAT_10004008 = DAT_00369198;
  DAT_1000400c = DAT_0036919c;
  REG_VIF0_FIFO = DAT_003691a0;
  DAT_10004004 = DAT_003691a4;
  DAT_10004008 = DAT_003691a8;
  DAT_1000400c = DAT_003691ac;
  if (iVar1 != 0) {
    iVar1 = EIntr();
    return iVar1;
  }
  return iVar1;
}
