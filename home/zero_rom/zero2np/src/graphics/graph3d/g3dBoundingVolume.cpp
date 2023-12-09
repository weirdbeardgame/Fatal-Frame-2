// STATUS: NOT STARTED

#include "g3dBoundingVolume.h"

void g3dbvBoxFromVertices(float *box[4], float *av[4]) {
	float vScale[4];
	float *pv0;
	float *pv2;
	
  float afVar1 [4];
  undefined in_vf0 [16];
  undefined extraout_vf1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined4 uVar4;
  float vScale [4];
  
  memset(box,0,0x40);
                    /* inlined from g3dxVu0.h */
  auVar2 = _lqc2((undefined  [16])av[1]);
  auVar3 = _lqc2((undefined  [16])*av);
  auVar2 = _vsub(auVar2,auVar3);
  auVar3 = _vmul(auVar2,auVar2);
  _vaddabc(auVar3,auVar3);
  auVar3 = _vmaddbc(extraout_vf1,auVar3);
  _vnop();
  _vnop();
  _vnop();
  _vrsqrt(in_vf0,auVar3);
  _vmul(auVar2,in_vf0);
  uVar4 = _vwaitq();
  auVar2 = _vmulq(auVar2,uVar4);
  afVar1 = (float  [4])_sqc2(auVar2);
  *box = afVar1;
  auVar2 = _lqc2((undefined  [16])av[2]);
  auVar3 = _lqc2((undefined  [16])*av);
  auVar2 = _vsub(auVar2,auVar3);
  auVar3 = _vmul(auVar2,auVar2);
  _vaddabc(auVar3,auVar3);
  auVar3 = _vmaddbc(extraout_vf1,auVar3);
  _vnop();
  _vnop();
  _vnop();
  _vrsqrt(in_vf0,auVar3);
  _vmul(auVar2,in_vf0);
  uVar4 = _vwaitq();
  auVar2 = _vmulq(auVar2,uVar4);
  afVar1 = (float  [4])_sqc2(auVar2);
  box[1] = afVar1;
  auVar2 = _lqc2((undefined  [16])av[4]);
  auVar3 = _lqc2((undefined  [16])*av);
  auVar2 = _vsub(auVar2,auVar3);
  auVar3 = _vmul(auVar2,auVar2);
  _vaddabc(auVar3,auVar3);
  auVar3 = _vmaddbc(extraout_vf1,auVar3);
  _vnop();
  _vnop();
  _vnop();
  _vrsqrt(in_vf0,auVar3);
  _vmul(auVar2,in_vf0);
  uVar4 = _vwaitq();
  auVar2 = _vmulq(auVar2,uVar4);
  afVar1 = (float  [4])_sqc2(auVar2);
  box[2] = afVar1;
  auVar2 = _lqc2((undefined  [16])av[1]);
  auVar3 = _lqc2((undefined  [16])*av);
  auVar2 = _vsub(auVar2,auVar3);
  auVar2 = _vmul(auVar2,auVar2);
  _vaddabc(auVar2,auVar2);
  _vmaddbc(extraout_vf1,auVar2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

void g3dbvInnerEllipseFromVertices(float *e[4], float *avVertices[4]) {
  g3dbvBoxFromVertices__FPA3_fPA3_Cf(e,avVertices);
  return;
}

int g3dbvIsEllipseInclude(float *e[4], float *v) {
	float vInv[4];
	float matInv[4][4];
	
  undefined auVar1 [16];
  undefined in_vf0 [16];
  undefined in_vf1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined4 uVar8;
  float vInv [4];
  float matInv [4] [4];
  
                    /* inlined from g3dxVu0.h */
  auVar4 = _lqc2((undefined  [16])*e);
  auVar5 = _lqc2((undefined  [16])e[1]);
  auVar6 = _lqc2((undefined  [16])e[2]);
  _lqc2((undefined  [16])e[3]);
  _vopmula(auVar5,auVar6);
  auVar7 = _vopmsub(auVar6,auVar5);
  auVar2 = _vmul(auVar4,auVar7);
  _vaddabc(auVar2,auVar2);
  auVar2 = _vmaddbc(in_vf1,auVar2);
  _vdiv(in_vf0,0,auVar2,0);
  _vopmula(auVar6,auVar4);
  auVar6 = _vopmsub(auVar4,auVar6);
  _vopmula(auVar4,auVar5);
  auVar5 = _vopmsub(auVar5,auVar4);
  auVar2 = _sqc2(auVar7);
  auVar4 = _sqc2(auVar6);
  auVar5 = _sqc2(auVar5);
  auVar6 = _sqc2(in_vf0);
  uVar8 = _vwaitq();
  auVar3 = _vaddq(in_vf0,uVar8);
  matInv[1]._0_8_ = auVar4._0_8_;
  matInv[2]._0_8_ = auVar5._0_8_;
  matInv[3]._0_8_ = auVar6._0_8_;
  auVar7 = _pextlw(matInv[1]._0_8_,auVar2._0_8_);
  auVar1 = _pextuw(auVar4,auVar2);
  auVar4 = _pextlw(matInv[3]._0_8_,matInv[2]._0_8_);
  auVar6 = _pextuw(auVar6,auVar5);
  auVar2 = _pcpyld(auVar4,auVar7);
  auVar4 = _pcpyud(auVar7,auVar4);
  auVar5 = _pcpyld(auVar6,auVar1);
  _pcpyud(auVar1,auVar6);
  auVar2 = _lqc2(auVar2);
  auVar4 = _lqc2(auVar4);
  auVar5 = _lqc2(auVar5);
  auVar6 = _lqc2((undefined  [16])e[3]);
  auVar2 = _vmulbc(auVar2,auVar3);
  auVar4 = _vmulbc(auVar4,auVar3);
  auVar5 = _vmulbc(auVar5,auVar3);
  auVar6 = _vsub(in_vf0,auVar6);
  auVar2 = _sqc2(auVar2);
  auVar4 = _sqc2(auVar4);
  auVar5 = _sqc2(auVar5);
  auVar6 = _sqc2(auVar6);
  auVar2 = _lqc2(auVar2);
  auVar4 = _lqc2(auVar4);
  auVar5 = _lqc2(auVar5);
  auVar6 = _lqc2(auVar6);
  auVar7 = _lqc2(*(undefined (*) [16])v);
  auVar6 = _vadd(auVar6,auVar7);
  _vmulabc(auVar2,auVar6);
  _vmaddabc(auVar4,auVar6);
  auVar2 = _vmaddbc(auVar5,auVar6);
  auVar2 = _sqc2(auVar2);
  auVar2 = _lqc2(auVar2);
  auVar2 = _vmul(auVar2,auVar2);
  _vaddabc(auVar2,auVar2);
  _vmaddbc(in_vf1,auVar2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
