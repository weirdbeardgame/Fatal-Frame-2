// STATUS: NOT STARTED

#include "g3dCore.h"

typedef void (*LPFUNC_CALCCOLORDATA)(/* parameters unknown */);
typedef void (*LPFUNC_LOADMATERIAL)(/* parameters unknown */);
typedef void (*LPFUNC_LOADCOLOR)(/* parameters unknown */);
typedef void (*LPFUNC_LOADCOLORCOEFF)(/* parameters unknown */);
typedef void (*LPFUNC_CALCVERTEXCOLOR)(/* parameters unknown */);

struct _PACKET {
	qword qwVif1Code;
	sceGifTag gt;
	sceGifPackAd aGPA[1];
};

static G3DCOREOBJECT *s_pObject = NULL;
LPFUNC_SETGSREGISTER IG3DCompatible::s_pFuncSetGsRegister = g3dSetGsRegister;
LPFUNC_SETGSREGISTERS IG3DCompatible::s_pFuncSetGsRegisters = g3dSetGsRegisters;
LPFUNC_GETGSREGISTERREF IG3DCompatible::s_pFuncGetGsRegisterRef = g3dGetGsRegisterRef;
LPFUNC_SETTRANSFORM IG3DCompatible::s_pFuncSetTransform = g3dSetTransform;
LPFUNC_GETTRANSFORMREF IG3DCompatible::s_pFuncGetTransformRef = g3dGetTransformRef;

Rep basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> >::nilRep = {
	/* .len = */ 0,
	/* .res = */ 0,
	/* .ref = */ 1,
	/* .selfish = */ false
};

size_t basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> >::npos = 65535;

static LPFUNC_CALCCOLORDATA s_apfCalcColorData[3] = {
	/* [0] = */ 0x2b4ba0,
	/* [1] = */ 0x2b4bc0,
	/* [2] = */ 0x2b4c18
};

static LPFUNC_LOADMATERIAL s_apfLoadMaterial[3] = {
	/* [0] = */ 0x2b4b68,
	/* [1] = */ 0x2b4b70,
	/* [2] = */ 0x2b4b80
};

static LPFUNC_LOADCOLOR s_apfLoadColor[3] = {
	/* [0] = */ 0x2b4c90,
	/* [1] = */ 0x2b4ca8,
	/* [2] = */ 0x2b4cc8
};

static LPFUNC_LOADCOLORCOEFF s_apfLoadColorCoeff[3] = {
	/* [0] = */ 0x2b4cf8,
	/* [1] = */ 0x2b4d00,
	/* [2] = */ 0x2b4d70
};

static LPFUNC_CALCVERTEXCOLOR s_apfCalcVertexColorDirectionalLight[3] = {
	/* [0] = */ 0x2b4f10,
	/* [1] = */ 0x2b4fd0,
	/* [2] = */ 0x2b50c8
};

static LPFUNC_CALCVERTEXCOLOR s_apfCalcVertexColorPointLight[3] = {
	/* [0] = */ _Vu0CalcVertexColorPointLightConstant,
	/* [1] = */ _Vu0CalcVertexColorPointLightLambert,
	/* [2] = */ _Vu0CalcVertexColorPointLightPhong
};

static LPFUNC_CALCVERTEXCOLOR s_apfCalcVertexColorSpotLight[3] = {
	/* [0] = */ 0x2b5200,
	/* [1] = */ 0x2b5380,
	/* [2] = */ 0x2b5538
};

static void _CalcColor() {
	static char __FUNCTION__[11] = {
		/* [0] = */ 95,
		/* [1] = */ 67,
		/* [2] = */ 97,
		/* [3] = */ 108,
		/* [4] = */ 99,
		/* [5] = */ 67,
		/* [6] = */ 111,
		/* [7] = */ 108,
		/* [8] = */ 111,
		/* [9] = */ 114,
		/* [10] = */ 0
	};
	int iLightingType;
	
  code *pcVar1;
  G3DVU1MEMLAYOUT *pGVar2;
  G3DVU1MEMLAYOUT *pGVar3;
  G3DCOREOBJECT *pGVar4;
  uint uVar5;
  
  if (s_pObject->auiGlobalState[1] < 3) {
    uVar5 = s_pObject->auiGlobalState[1];
  }
  else {
    _SetLineInfo__FPCciT0T0
              ("g3dCore.c",0x94,"_CalcColor",
               "s_pObject->auiGlobalState[ G3DGS_LIGHTINGTYPE ] < NUM_G3DLIGHTINGTYPE");
    g3ddbgAssert__FbPCce(s_pObject->auiGlobalState[1] < 3,"memory illegal access occured");
    uVar5 = s_pObject->auiGlobalState[1];
  }
  pGVar4 = s_pObject;
  pGVar2 = &s_pObject->Vu1Mem;
  pGVar3 = &s_pObject->Vu1Mem;
  (*(code *)s_apfLoadMaterial[uVar5])((undefined *)((int)&s_pObject->Vu1Mem + 0x460));
  pcVar1 = (code *)s_apfCalcColorData[uVar5];
  (*pcVar1)((undefined *)((int)pGVar2 + 0x180),(undefined *)((int)pGVar3 + 0x530));
  (*pcVar1)((undefined *)((int)&pGVar4->Vu1Mem + 0x210),(undefined *)((int)&pGVar4->Vu1Mem + 0x5c0))
  ;
  (*pcVar1)((undefined *)((int)&pGVar4->Vu1Mem + 0x2a0),(undefined *)((int)&pGVar4->Vu1Mem + 0x650))
  ;
  return;
}

static void _CalcAmbient() {
	float vWork[4];
	float *pv0;
	float *pv2;
	
  undefined auVar1 [16];
  undefined auVar2 [16];
  float vWork [4];
  
                    /* inlined from g3dxVu0.h */
  auVar1 = _lqc2(*(undefined (*) [16])s_pObject->vAmbient);
  auVar2 = _lqc2(*(undefined (*) [16])(s_pObject->Vu1Mem).Packed.Material.vAmbient);
  auVar1 = _vmul(auVar1,auVar2);
  auVar1 = _sqc2(auVar1);
  auVar1 = _lqc2(auVar1);
  auVar2 = _lqc2(*(undefined (*) [16])(s_pObject->Vu1Mem).Packed.Material.vEmissive);
  auVar1 = _vadd(auVar1,auVar2);
  auVar1 = _sqc2(auVar1);
  *(undefined (*) [16])(s_pObject->Vu1Mem).Packed.Calc.vAmbient = auVar1;
  return;
}

static void _ApplyLightDirectional() {
	G3DVU1MEMLAYOUT_DIRECT &rVu1Mem;
	int i;
	int bEnable;
	float *pv0;
	float *pv1;
	
  undefined8 uVar1;
  _LIGHTDATA *p_Var2;
  G3DCOREOBJECT *pGVar3;
  G3DCOREOBJECT *pGVar4;
  int iVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  undefined in_vf0 [16];
  undefined in_vf1 [16];
  undefined auVar10 [16];
  undefined auVar11 [16];
  undefined4 uVar12;
  
  pGVar3 = s_pObject;
  uVar9 = 0;
  do {
    iVar5 = s_pObject->aLightData[uVar9].bEnable;
    uVar6 = *(ulong *)((int)&pGVar3->Vu1Mem + 0x338);
    if (iVar5 == 0) {
      uVar6 = uVar6 & ~(long)(1 << (uVar9 & 0x1f));
    }
    else {
      uVar6 = (long)(1 << (uVar9 & 0x1f)) | uVar6;
    }
    (pGVar3->Vu1Mem).Packed.Light.status.field1_0x8.lAS = uVar6;
    pGVar4 = s_pObject;
    if (iVar5 == 0) {
                    /* end of inlined section */
      iVar5 = uVar9 * 0x10;
      auVar10 = _sqc2(in_vf0);
      *(undefined (*) [16])((int)&pGVar3->Vu1Mem + iVar5 + 0x530) = auVar10;
      auVar10 = _sqc2(in_vf0);
      *(undefined (*) [16])((int)&pGVar3->Vu1Mem + iVar5 + 0x560) = auVar10;
      auVar10 = _sqc2(in_vf0);
      *(undefined (*) [16])((int)&pGVar3->Vu1Mem + iVar5 + 0x590) = auVar10;
      auVar10 = _sqc2(in_vf0);
      *(undefined (*) [16])((int)&pGVar3->Vu1Mem + iVar5 + 0x340) = auVar10;
    }
    else {
                    /* inlined from g3dxVu0.h */
      iVar5 = uVar9 * 0x10;
                    /* end of inlined section */
                    /* inlined from g3dxVu0.h */
                    /* end of inlined section */
      p_Var2 = s_pObject->aLightData;
                    /* inlined from g3dxVu0.h */
      uVar1 = *(undefined8 *)s_pObject->aLightData[uVar9].L.vAmbient;
      fVar7 = s_pObject->aLightData[uVar9].L.vAmbient[2];
      fVar8 = s_pObject->aLightData[uVar9].L.vAmbient[3];
      *(int *)((int)&pGVar3->Vu1Mem + iVar5 + 0x530) = (int)uVar1;
      *(int *)((int)&pGVar3->Vu1Mem + iVar5 + 0x534) = (int)((ulong)uVar1 >> 0x20);
      *(float *)((int)&pGVar3->Vu1Mem + iVar5 + 0x538) = fVar7;
      *(float *)((int)&pGVar3->Vu1Mem + iVar5 + 0x53c) = fVar8;
      uVar1 = *(undefined8 *)p_Var2[uVar9].L.vDiffuse;
      fVar7 = pGVar4->aLightData[uVar9].L.vDiffuse[2];
      fVar8 = pGVar4->aLightData[uVar9].L.vDiffuse[3];
      *(int *)((int)&pGVar3->Vu1Mem + iVar5 + 0x560) = (int)uVar1;
      *(int *)((int)&pGVar3->Vu1Mem + iVar5 + 0x564) = (int)((ulong)uVar1 >> 0x20);
      *(float *)((int)&pGVar3->Vu1Mem + iVar5 + 0x568) = fVar7;
      *(float *)((int)&pGVar3->Vu1Mem + iVar5 + 0x56c) = fVar8;
      uVar1 = *(undefined8 *)pGVar4->aLightData[uVar9].L.vSpecular;
      fVar7 = pGVar4->aLightData[uVar9].L.vSpecular[2];
      fVar8 = pGVar4->aLightData[uVar9].L.vSpecular[3];
      *(int *)((int)&pGVar3->Vu1Mem + iVar5 + 0x590) = (int)uVar1;
      *(int *)((int)&pGVar3->Vu1Mem + iVar5 + 0x594) = (int)((ulong)uVar1 >> 0x20);
      *(float *)((int)&pGVar3->Vu1Mem + iVar5 + 0x598) = fVar7;
      *(float *)((int)&pGVar3->Vu1Mem + iVar5 + 0x59c) = fVar8;
      auVar10 = _lqc2(*(undefined (*) [16])pGVar4->aLightData[uVar9].L.vDirection);
      auVar11 = _vmul(auVar10,auVar10);
      _vnop();
      _vnop();
      _vnop();
      _vaddabc(auVar11,auVar11);
      auVar11 = _vmaddbc(in_vf1,auVar11);
      _vnop();
      _vnop();
      _vnop();
      uVar12 = _vrsqrt(in_vf0,auVar11);
      _vsubbc(in_vf0,in_vf0);
      _vnop();
      _vnop();
      _vnop();
      _vnop();
      _vnop();
      _vnop();
      _vnop();
      _vnop();
      _vnop();
      _vnop();
      _vnop();
      auVar10 = _vmulq(auVar10,uVar12);
      auVar10 = _sqc2(auVar10);
      *(undefined (*) [16])((int)&pGVar3->Vu1Mem + iVar5 + 0x340) = auVar10;
    }
    uVar9 = uVar9 + 1;
  } while ((int)uVar9 < 3);
  return;
}

static void _ApplyLightPoint() {
	G3DVU1MEMLAYOUT_DIRECT &rVu1Mem;
	int i;
	int iId;
	int bEnable;
	
  undefined auVar1 [16];
  undefined8 uVar2;
  _LIGHTDATA *p_Var3;
  G3DCOREOBJECT *pGVar4;
  G3DCOREOBJECT *pGVar5;
  int iVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  undefined in_vf0 [16];
  
  pGVar4 = s_pObject;
  iVar10 = 0;
  do {
    iVar6 = s_pObject->aLightData[iVar10 + 3].bEnable;
    uVar7 = *(ulong *)((int)&pGVar4->Vu1Mem + 0x338);
    if (iVar6 == 0) {
      uVar7 = uVar7 & ~(long)(1 << (iVar10 + 4U & 0x1f));
    }
    else {
      uVar7 = (long)(1 << (iVar10 + 4U & 0x1f)) | uVar7;
    }
    (pGVar4->Vu1Mem).Packed.Light.status.field1_0x8.lAS = uVar7;
    pGVar5 = s_pObject;
    if (iVar6 == 0) {
      iVar6 = iVar10 * 0x10;
      auVar1 = _sqc2(in_vf0);
      *(undefined (*) [16])((int)&pGVar4->Vu1Mem + iVar6 + 0x5c0) = auVar1;
      auVar1 = _sqc2(in_vf0);
      *(undefined (*) [16])((int)&pGVar4->Vu1Mem + iVar6 + 0x5f0) = auVar1;
      auVar1 = _sqc2(in_vf0);
      *(undefined (*) [16])((int)&pGVar4->Vu1Mem + iVar6 + 0x620) = auVar1;
      auVar1 = _sqc2(in_vf0);
      *(undefined (*) [16])((int)&pGVar4->Vu1Mem + iVar6 + 0x370) = auVar1;
      *(undefined4 *)((int)&pGVar4->Vu1Mem + iVar10 * 4 + 0x3b0) = 0;
      *(undefined4 *)((int)&pGVar4->Vu1Mem + iVar10 * 4 + 0x3a0) = 0;
    }
    else {
                    /* inlined from g3dxVu0.h */
      iVar6 = iVar10 * 0x10;
                    /* end of inlined section */
                    /* inlined from g3dxVu0.h */
                    /* end of inlined section */
      p_Var3 = s_pObject->aLightData;
                    /* inlined from g3dxVu0.h */
      uVar2 = *(undefined8 *)s_pObject->aLightData[iVar10 + 3].L.vAmbient;
      fVar8 = s_pObject->aLightData[iVar10 + 3].L.vAmbient[2];
      fVar9 = s_pObject->aLightData[iVar10 + 3].L.vAmbient[3];
      *(int *)((int)&pGVar4->Vu1Mem + iVar6 + 0x5c0) = (int)uVar2;
      *(int *)((int)&pGVar4->Vu1Mem + iVar6 + 0x5c4) = (int)((ulong)uVar2 >> 0x20);
      *(float *)((int)&pGVar4->Vu1Mem + iVar6 + 0x5c8) = fVar8;
      *(float *)((int)&pGVar4->Vu1Mem + iVar6 + 0x5cc) = fVar9;
      uVar2 = *(undefined8 *)p_Var3[iVar10 + 3].L.vDiffuse;
      fVar8 = pGVar5->aLightData[iVar10 + 3].L.vDiffuse[2];
      fVar9 = pGVar5->aLightData[iVar10 + 3].L.vDiffuse[3];
      *(int *)((int)&pGVar4->Vu1Mem + iVar6 + 0x5f0) = (int)uVar2;
      *(int *)((int)&pGVar4->Vu1Mem + iVar6 + 0x5f4) = (int)((ulong)uVar2 >> 0x20);
      *(float *)((int)&pGVar4->Vu1Mem + iVar6 + 0x5f8) = fVar8;
      *(float *)((int)&pGVar4->Vu1Mem + iVar6 + 0x5fc) = fVar9;
      uVar2 = *(undefined8 *)pGVar5->aLightData[iVar10 + 3].L.vSpecular;
      fVar8 = pGVar5->aLightData[iVar10 + 3].L.vSpecular[2];
      fVar9 = pGVar5->aLightData[iVar10 + 3].L.vSpecular[3];
      *(int *)((int)&pGVar4->Vu1Mem + iVar6 + 0x620) = (int)uVar2;
      *(int *)((int)&pGVar4->Vu1Mem + iVar6 + 0x624) = (int)((ulong)uVar2 >> 0x20);
      *(float *)((int)&pGVar4->Vu1Mem + iVar6 + 0x628) = fVar8;
      *(float *)((int)&pGVar4->Vu1Mem + iVar6 + 0x62c) = fVar9;
      uVar2 = *(undefined8 *)pGVar5->aLightData[iVar10 + 3].L.vPosition;
      fVar8 = pGVar5->aLightData[iVar10 + 3].L.vPosition[2];
      fVar9 = pGVar5->aLightData[iVar10 + 3].L.vPosition[3];
      *(int *)((int)&pGVar4->Vu1Mem + iVar6 + 0x370) = (int)uVar2;
      *(int *)((int)&pGVar4->Vu1Mem + iVar6 + 0x374) = (int)((ulong)uVar2 >> 0x20);
      *(float *)((int)&pGVar4->Vu1Mem + iVar6 + 0x378) = fVar8;
      *(float *)((int)&pGVar4->Vu1Mem + iVar6 + 0x37c) = fVar9;
                    /* end of inlined section */
      *(float *)((int)&pGVar4->Vu1Mem + iVar10 * 4 + 0x3b0) =
           1.0 / (pGVar5->aLightData[iVar10 + 3].L.fMaxRange -
                 pGVar5->aLightData[iVar10 + 3].L.fMinRange);
      *(float *)((int)&pGVar4->Vu1Mem + iVar10 * 4 + 0x3a0) =
           pGVar5->aLightData[iVar10 + 3].L.fMaxRange;
    }
    iVar10 = iVar10 + 1;
  } while (iVar10 < 3);
  return;
}

static void _ApplyLightSpot() {
	G3DVU1MEMLAYOUT_DIRECT &rVu1Mem;
	int i;
	int iId;
	int bEnable;
	
  undefined8 uVar1;
  _LIGHTDATA *p_Var2;
  G3DCOREOBJECT *pGVar3;
  G3DCOREOBJECT *pGVar4;
  int iVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  undefined in_vf0 [16];
  undefined in_vf1 [16];
  undefined extraout_vf1 [16];
  undefined auVar10 [16];
  undefined auVar11 [16];
  undefined4 uVar12;
  
  pGVar3 = s_pObject;
  iVar9 = 0;
  do {
    iVar5 = s_pObject->aLightData[iVar9 + 6].bEnable;
    uVar6 = *(ulong *)((int)&pGVar3->Vu1Mem + 0x338);
    if (iVar5 == 0) {
      uVar6 = uVar6 & ~(long)(1 << (iVar9 + 8U & 0x1f));
    }
    else {
      uVar6 = (long)(1 << (iVar9 + 8U & 0x1f)) | uVar6;
    }
    (pGVar3->Vu1Mem).Packed.Light.status.field1_0x8.lAS = uVar6;
    pGVar4 = s_pObject;
    if (iVar5 == 0) {
      iVar5 = iVar9 * 0x10;
      auVar10 = _sqc2(in_vf0);
      *(undefined (*) [16])((int)&pGVar3->Vu1Mem + iVar5 + 0x650) = auVar10;
      auVar10 = _sqc2(in_vf0);
      *(undefined (*) [16])((int)&pGVar3->Vu1Mem + iVar5 + 0x680) = auVar10;
      auVar10 = _sqc2(in_vf0);
      *(undefined (*) [16])((int)&pGVar3->Vu1Mem + iVar5 + 0x6b0) = auVar10;
      auVar10 = _sqc2(in_vf0);
      *(undefined (*) [16])((int)&pGVar3->Vu1Mem + iVar5 + 0x3c0) = auVar10;
      auVar10 = _sqc2(in_vf0);
      *(undefined (*) [16])((int)&pGVar3->Vu1Mem + iVar5 + 0x3f0) = auVar10;
      iVar5 = iVar9 * 4;
      *(undefined4 *)((int)&pGVar3->Vu1Mem + iVar5 + 0x430) = 0;
      *(undefined4 *)((int)&pGVar3->Vu1Mem + iVar5 + 0x420) = 0;
      *(undefined4 *)((int)&pGVar3->Vu1Mem + iVar5 + 0x450) = 0;
      *(undefined4 *)((int)&pGVar3->Vu1Mem + iVar5 + 0x440) = 0;
    }
    else {
                    /* inlined from g3dxVu0.h */
      iVar5 = iVar9 * 0x10;
                    /* end of inlined section */
                    /* inlined from g3dxVu0.h */
                    /* end of inlined section */
      p_Var2 = s_pObject->aLightData;
                    /* inlined from g3dxVu0.h */
      uVar1 = *(undefined8 *)s_pObject->aLightData[iVar9 + 6].L.vAmbient;
      fVar7 = s_pObject->aLightData[iVar9 + 6].L.vAmbient[2];
      fVar8 = s_pObject->aLightData[iVar9 + 6].L.vAmbient[3];
      *(int *)((int)&pGVar3->Vu1Mem + iVar5 + 0x650) = (int)uVar1;
      *(int *)((int)&pGVar3->Vu1Mem + iVar5 + 0x654) = (int)((ulong)uVar1 >> 0x20);
      *(float *)((int)&pGVar3->Vu1Mem + iVar5 + 0x658) = fVar7;
      *(float *)((int)&pGVar3->Vu1Mem + iVar5 + 0x65c) = fVar8;
      uVar1 = *(undefined8 *)p_Var2[iVar9 + 6].L.vDiffuse;
      fVar7 = pGVar4->aLightData[iVar9 + 6].L.vDiffuse[2];
      fVar8 = pGVar4->aLightData[iVar9 + 6].L.vDiffuse[3];
      *(int *)((int)&pGVar3->Vu1Mem + iVar5 + 0x680) = (int)uVar1;
      *(int *)((int)&pGVar3->Vu1Mem + iVar5 + 0x684) = (int)((ulong)uVar1 >> 0x20);
      *(float *)((int)&pGVar3->Vu1Mem + iVar5 + 0x688) = fVar7;
      *(float *)((int)&pGVar3->Vu1Mem + iVar5 + 0x68c) = fVar8;
      uVar1 = *(undefined8 *)pGVar4->aLightData[iVar9 + 6].L.vSpecular;
      fVar7 = pGVar4->aLightData[iVar9 + 6].L.vSpecular[2];
      fVar8 = pGVar4->aLightData[iVar9 + 6].L.vSpecular[3];
      *(int *)((int)&pGVar3->Vu1Mem + iVar5 + 0x6b0) = (int)uVar1;
      *(int *)((int)&pGVar3->Vu1Mem + iVar5 + 0x6b4) = (int)((ulong)uVar1 >> 0x20);
      *(float *)((int)&pGVar3->Vu1Mem + iVar5 + 0x6b8) = fVar7;
      *(float *)((int)&pGVar3->Vu1Mem + iVar5 + 0x6bc) = fVar8;
      uVar1 = *(undefined8 *)pGVar4->aLightData[iVar9 + 6].L.vPosition;
      fVar7 = pGVar4->aLightData[iVar9 + 6].L.vPosition[2];
      fVar8 = pGVar4->aLightData[iVar9 + 6].L.vPosition[3];
      *(int *)((int)&pGVar3->Vu1Mem + iVar5 + 0x3c0) = (int)uVar1;
      *(int *)((int)&pGVar3->Vu1Mem + iVar5 + 0x3c4) = (int)((ulong)uVar1 >> 0x20);
      *(float *)((int)&pGVar3->Vu1Mem + iVar5 + 0x3c8) = fVar7;
      *(float *)((int)&pGVar3->Vu1Mem + iVar5 + 0x3cc) = fVar8;
      auVar10 = _lqc2(*(undefined (*) [16])pGVar4->aLightData[iVar9 + 6].L.vDirection);
      auVar11 = _vmul(auVar10,auVar10);
      _vnop();
      _vnop();
      _vnop();
      _vaddabc(auVar11,auVar11);
      auVar11 = _vmaddbc(in_vf1,auVar11);
      _vnop();
      _vnop();
      _vnop();
      uVar12 = _vrsqrt(in_vf0,auVar11);
      _vsubbc(in_vf0,in_vf0);
      _vnop();
      _vnop();
      _vnop();
      _vnop();
      _vnop();
      _vnop();
      _vnop();
      _vnop();
      _vnop();
      _vnop();
      _vnop();
      auVar10 = _vmulq(auVar10,uVar12);
      auVar10 = _sqc2(auVar10);
      *(undefined (*) [16])((int)&pGVar3->Vu1Mem + iVar5 + 0x3f0) = auVar10;
                    /* end of inlined section */
      iVar5 = iVar9 * 4;
      *(float *)((int)&pGVar3->Vu1Mem + iVar5 + 0x420) = pGVar4->aLightData[iVar9 + 6].L.fMaxRange;
      *(float *)((int)&pGVar3->Vu1Mem + iVar5 + 0x430) =
           1.0 / (pGVar4->aLightData[iVar9 + 6].L.fMaxRange -
                 pGVar4->aLightData[iVar9 + 6].L.fMinRange);
      fVar7 = cosf(pGVar4->aLightData[iVar9 + 6].L.fAngleOutside);
      fVar8 = cosf(pGVar4->aLightData[iVar9 + 6].L.fAngleInside);
      *(float *)((int)&pGVar3->Vu1Mem + iVar5 + 0x450) = 1.0 / (fVar8 - fVar7);
      *(float *)((int)&pGVar3->Vu1Mem + iVar5 + 0x440) = fVar7;
      in_vf1 = extraout_vf1;
    }
    iVar9 = iVar9 + 1;
  } while (iVar9 < 3);
  return;
}

void g3dInitialize(G3DCREATIONDATA *pCD) {
	int i;
	_LIGHTDATA &rLD;
	int i;
	
  float afVar1 [4];
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  G3DCOREOBJECT *pGVar8;
  G3DLIGHT *pLight;
  int iVar9;
  G3DLIGHTTYPE iLightType;
  uint uVar10;
  undefined in_vf0 [16];
  undefined auVar11 [16];
  undefined auVar12 [16];
  undefined auVar13 [16];
  undefined auVar14 [16];
  
  s_pObject = pCD->pObj;
  g3ddbgVerifyVu1MemAddress__Fv();
  g3ddbgVerifyGsRegisterAddress__Fv();
  pGVar8 = s_pObject;
  _lqc2((undefined  [16])g_v1110);
                    /* inlined from g3dLight.h */
                    /* end of inlined section */
  s_pObject->auiGlobalState[1] = 1;
                    /* inlined from g3dLight.h */
                    /* end of inlined section */
  pGVar8->auiRenderState[0] = 1;
                    /* inlined from g3dLight.h */
                    /* end of inlined section */
  pGVar8->auiRenderState[1] = 1;
  pGVar8->auiRenderState[2] = 1;
  pGVar8->auiRenderState[3] = 0;
  pGVar8->auiRenderState[4] = 0;
  pGVar8->auiRenderState[5] = 0;
  pGVar8->auiRenderState[6] = 0;
  pGVar8->auiGlobalState[0] = 0;
  fVar4 = g_NullMaterial.vDiffuse[3];
  fVar3 = g_NullMaterial.vDiffuse[2];
  uVar2 = g_NullMaterial.vDiffuse._0_8_;
                    /* inlined from g3dLight.h */
  (pGVar8->Material).vDiffuse[0] = (float)g_NullMaterial.vDiffuse._0_8_;
  (pGVar8->Material).vDiffuse[1] = SUB84(uVar2,4);
  (pGVar8->Material).vDiffuse[2] = fVar3;
  (pGVar8->Material).vDiffuse[3] = fVar4;
  fVar5 = g_NullMaterial.vAmbient[3];
  fVar4 = g_NullMaterial.vAmbient[2];
  fVar3 = g_NullMaterial.vAmbient[1];
  (pGVar8->Material).vAmbient[0] = g_NullMaterial.vAmbient[0];
  (pGVar8->Material).vAmbient[1] = fVar3;
  (pGVar8->Material).vAmbient[2] = fVar4;
  (pGVar8->Material).vAmbient[3] = fVar5;
  fVar5 = g_NullMaterial.vSpecular[3];
  fVar4 = g_NullMaterial.vSpecular[2];
  fVar3 = g_NullMaterial.vSpecular[1];
  (pGVar8->Material).vSpecular[0] = g_NullMaterial.vSpecular[0];
  (pGVar8->Material).vSpecular[1] = fVar3;
  (pGVar8->Material).vSpecular[2] = fVar4;
  (pGVar8->Material).vSpecular[3] = fVar5;
  fVar5 = g_NullMaterial.vEmissive[3];
  fVar4 = g_NullMaterial.vEmissive[2];
  fVar3 = g_NullMaterial.vEmissive[1];
  (pGVar8->Material).vEmissive[0] = g_NullMaterial.vEmissive[0];
  (pGVar8->Material).vEmissive[1] = fVar3;
  (pGVar8->Material).vEmissive[2] = fVar4;
  (pGVar8->Material).vEmissive[3] = fVar5;
  iVar7 = g_NullMaterial.aiPad[2];
  iVar6 = g_NullMaterial.aiPad[1];
  iVar9 = g_NullMaterial.aiPad[0];
  (pGVar8->Material).fPower = g_NullMaterial.fPower;
  (pGVar8->Material).aiPad[0] = iVar9;
  (pGVar8->Material).aiPad[1] = iVar6;
  (pGVar8->Material).aiPad[2] = iVar7;
                    /* end of inlined section */
  auVar11 = _sqc2(in_vf0);
  *(undefined (*) [16])s_pObject->vAmbient = auVar11;
  uVar10 = 0;
  do {
                    /* inlined from g3dTypes.h */
                    /* end of inlined section */
    pLight = (G3DLIGHT *)(s_pObject->aLightData + uVar10);
                    /* inlined from g3dTypes.h */
                    /* inlined from g3dTypes.h */
    s_pObject->aLightData[uVar10].bEnable = 0;
    iLightType = G3DLIGHT_DIRECTIONAL;
    if (((2 < uVar10) && (iLightType = G3DLIGHT_POINT, 2 < uVar10 - 3)) &&
       (iLightType = G3DLIGHT_SPOT, 2 < uVar10 - 6)) {
      iLightType = G3DLIGHTTYPE_FORCE_DWORD;
    }
                    /* inlined from g3dTypes.h */
    uVar10 = uVar10 + 1;
    g3dutilSetLightDefault__FP8G3DLIGHT12G3DLIGHTTYPE(pLight,iLightType);
                    /* end of inlined section */
  } while ((int)uVar10 < 9);
  iVar9 = 0;
                    /* inlined from g3dxVu0.h */
  do {
    pGVar8 = s_pObject;
    auVar11 = _lqc2((undefined  [16])g_matUnit[0]);
    auVar12 = _lqc2((undefined  [16])g_matUnit[1]);
    auVar13 = _lqc2((undefined  [16])g_matUnit[2]);
    auVar14 = _lqc2((undefined  [16])g_matUnit[3]);
    afVar1 = (float  [4])_sqc2(auVar11);
    s_pObject->amatTransform[iVar9][0] = afVar1;
    afVar1 = (float  [4])_sqc2(auVar12);
    pGVar8->amatTransform[iVar9][1] = afVar1;
    afVar1 = (float  [4])_sqc2(auVar13);
    pGVar8->amatTransform[iVar9][2] = afVar1;
    afVar1 = (float  [4])_sqc2(auVar14);
    pGVar8->amatTransform[iVar9][3] = afVar1;
                    /* end of inlined section */
    iVar9 = iVar9 + 1;
  } while (iVar9 < 5);
  return;
}

int g3dSetRenderState(G3DRENDERSTATETYPE State, unsigned int uiValue) {
	static char __FUNCTION__[18] = {
		/* [0] = */ 103,
		/* [1] = */ 51,
		/* [2] = */ 100,
		/* [3] = */ 83,
		/* [4] = */ 101,
		/* [5] = */ 116,
		/* [6] = */ 82,
		/* [7] = */ 101,
		/* [8] = */ 110,
		/* [9] = */ 100,
		/* [10] = */ 101,
		/* [11] = */ 114,
		/* [12] = */ 83,
		/* [13] = */ 116,
		/* [14] = */ 97,
		/* [15] = */ 116,
		/* [16] = */ 101,
		/* [17] = */ 0
	};
	
  if (s_pObject == (G3DCOREOBJECT *)0x0) {
    _SetLineInfo__FPCciT0T0("g3dCore.c",0x18e,"g3dSetRenderState","s_pObject");
    g3ddbgAssert__FbPCce(s_pObject != (G3DCOREOBJECT *)0x0,"g3d is not initialized yet");
  }
  if (7 < (int)State) {
    _SetLineInfo__FPCciT0T0("g3dCore.c",399,"g3dSetRenderState","State < NUM_G3DRENDERSTATETYPE");
    g3ddbgAssert__FbPCce(false,&DAT_003f0b10);
  }
  s_pObject->auiRenderState[State] = uiValue;
  if (State == G3DRS_FOGCOLOR) {
    g3dSetGsRegister__Flli
              ((long)(int)uiValue & 0xffU | ((long)(int)(uiValue >> 8) & 0xffU) << 8 |
               ((long)(int)(uiValue >> 0x10) & 0xffU) << 0x10,0x3d,1);
  }
  return 1;
}

unsigned int& g3dGetRenderStateRef(G3DRENDERSTATETYPE State) {
	static char __FUNCTION__[21] = {
		/* [0] = */ 103,
		/* [1] = */ 51,
		/* [2] = */ 100,
		/* [3] = */ 71,
		/* [4] = */ 101,
		/* [5] = */ 116,
		/* [6] = */ 82,
		/* [7] = */ 101,
		/* [8] = */ 110,
		/* [9] = */ 100,
		/* [10] = */ 101,
		/* [11] = */ 114,
		/* [12] = */ 83,
		/* [13] = */ 116,
		/* [14] = */ 97,
		/* [15] = */ 116,
		/* [16] = */ 101,
		/* [17] = */ 82,
		/* [18] = */ 101,
		/* [19] = */ 102,
		/* [20] = */ 0
	};
	
  if (s_pObject == (G3DCOREOBJECT *)0x0) {
    _SetLineInfo__FPCciT0T0("g3dCore.c",0x1b7,"g3dGetRenderStateRef","s_pObject");
    g3ddbgAssert__FbPCce(s_pObject != (G3DCOREOBJECT *)0x0,"g3d is not initialized yet");
  }
  if (7 < (int)State) {
    _SetLineInfo__FPCciT0T0
              ("g3dCore.c",0x1b8,"g3dGetRenderStateRef","State < NUM_G3DRENDERSTATETYPE");
    g3ddbgAssert__FbPCce(false,&DAT_003f0b10);
  }
  return s_pObject->auiRenderState + State;
}

int g3dSetGlobalState(G3DGLOBALSTATETYPE State, unsigned int uiValue) {
	static char __FUNCTION__[18] = {
		/* [0] = */ 103,
		/* [1] = */ 51,
		/* [2] = */ 100,
		/* [3] = */ 83,
		/* [4] = */ 101,
		/* [5] = */ 116,
		/* [6] = */ 71,
		/* [7] = */ 108,
		/* [8] = */ 111,
		/* [9] = */ 98,
		/* [10] = */ 97,
		/* [11] = */ 108,
		/* [12] = */ 83,
		/* [13] = */ 116,
		/* [14] = */ 97,
		/* [15] = */ 116,
		/* [16] = */ 101,
		/* [17] = */ 0
	};
	
  if (s_pObject == (G3DCOREOBJECT *)0x0) {
    _SetLineInfo__FPCciT0T0("g3dCore.c",0x1c2,"g3dSetGlobalState","s_pObject");
    g3ddbgAssert__FbPCce(s_pObject != (G3DCOREOBJECT *)0x0,"g3d is not initialized yet");
  }
  if (1 < (int)State) {
    _SetLineInfo__FPCciT0T0("g3dCore.c",0x1c3,"g3dSetGlobalState","State < NUM_G3DGLOBALSTATETYPE");
    g3ddbgAssert__FbPCce(false,&DAT_003f0b10);
  }
  s_pObject->auiGlobalState[State] = uiValue;
  if ((State == G3DGS_LIGHTINGTYPE) && (2 < uiValue)) {
    _SetLineInfo__FPCciT0T0("g3dCore.c",0x1ca,"g3dSetGlobalState","uiValue < NUM_G3DLIGHTINGTYPE");
    g3ddbgAssert__FbPCce(false,&DAT_003f0b10);
  }
  return 1;
}

unsigned int& g3dGetGlobalStateRef(G3DGLOBALSTATETYPE State) {
	static char __FUNCTION__[21] = {
		/* [0] = */ 103,
		/* [1] = */ 51,
		/* [2] = */ 100,
		/* [3] = */ 71,
		/* [4] = */ 101,
		/* [5] = */ 116,
		/* [6] = */ 71,
		/* [7] = */ 108,
		/* [8] = */ 111,
		/* [9] = */ 98,
		/* [10] = */ 97,
		/* [11] = */ 108,
		/* [12] = */ 83,
		/* [13] = */ 116,
		/* [14] = */ 97,
		/* [15] = */ 116,
		/* [16] = */ 101,
		/* [17] = */ 82,
		/* [18] = */ 101,
		/* [19] = */ 102,
		/* [20] = */ 0
	};
	
  if (s_pObject == (G3DCOREOBJECT *)0x0) {
    _SetLineInfo__FPCciT0T0("g3dCore.c",0x1e6,"g3dGetGlobalStateRef","s_pObject");
    g3ddbgAssert__FbPCce(s_pObject != (G3DCOREOBJECT *)0x0,"g3d is not initialized yet");
  }
  if (1 < (int)State) {
    _SetLineInfo__FPCciT0T0
              ("g3dCore.c",0x1e7,"g3dGetGlobalStateRef","State < NUM_G3DGLOBALSTATETYPE");
    g3ddbgAssert__FbPCce(false,&DAT_003f0b10);
  }
  return s_pObject->auiGlobalState + State;
}

void g3dSetAmbient(float *vAmbient) {
	static char __FUNCTION__[14] = {
		/* [0] = */ 103,
		/* [1] = */ 51,
		/* [2] = */ 100,
		/* [3] = */ 83,
		/* [4] = */ 101,
		/* [5] = */ 116,
		/* [6] = */ 65,
		/* [7] = */ 109,
		/* [8] = */ 98,
		/* [9] = */ 105,
		/* [10] = */ 101,
		/* [11] = */ 110,
		/* [12] = */ 116,
		/* [13] = */ 0
	};
	
  undefined8 uVar1;
  G3DCOREOBJECT *pGVar2;
  float fVar3;
  float fVar4;
  
  if (s_pObject == (G3DCOREOBJECT *)0x0) {
    _SetLineInfo__FPCciT0T0("g3dCore.c",0x1f1,"g3dSetAmbient","s_pObject");
    g3ddbgAssert__FbPCce(s_pObject != (G3DCOREOBJECT *)0x0,"g3d is not initialized yet");
  }
                    /* inlined from g3dxVu0.h */
  pGVar2 = s_pObject;
  uVar1 = *(undefined8 *)vAmbient;
  fVar3 = vAmbient[2];
  fVar4 = vAmbient[3];
  s_pObject->vAmbient[0] = (float)uVar1;
  pGVar2->vAmbient[1] = (float)((ulong)uVar1 >> 0x20);
  pGVar2->vAmbient[2] = fVar3;
  pGVar2->vAmbient[3] = fVar4;
  pGVar2 = s_pObject;
  uVar1 = *(undefined8 *)vAmbient;
  fVar3 = vAmbient[2];
  fVar4 = vAmbient[3];
  (s_pObject->Vu1Mem).Packed.Global.vAmbient[0] = (float)uVar1;
  (pGVar2->Vu1Mem).Packed.Global.vAmbient[1] = (float)((ulong)uVar1 >> 0x20);
  (pGVar2->Vu1Mem).Packed.Global.vAmbient[2] = fVar3;
  (pGVar2->Vu1Mem).Packed.Global.vAmbient[3] = fVar4;
                    /* end of inlined section */
  _CalcAmbient__Fv();
  return;
}

float&[4] g3dGetAmbientRef() {
	static char __FUNCTION__[17] = {
		/* [0] = */ 103,
		/* [1] = */ 51,
		/* [2] = */ 100,
		/* [3] = */ 71,
		/* [4] = */ 101,
		/* [5] = */ 116,
		/* [6] = */ 65,
		/* [7] = */ 109,
		/* [8] = */ 98,
		/* [9] = */ 105,
		/* [10] = */ 101,
		/* [11] = */ 110,
		/* [12] = */ 116,
		/* [13] = */ 82,
		/* [14] = */ 101,
		/* [15] = */ 102,
		/* [16] = */ 0
	};
	
  if (s_pObject == (G3DCOREOBJECT *)0x0) {
    _SetLineInfo__FPCciT0T0("g3dCore.c",0x20a,"g3dGetAmbientRef","s_pObject");
    g3ddbgAssert__FbPCce(s_pObject != (G3DCOREOBJECT *)0x0,"g3d is not initialized yet");
  }
  return (float (*) [4])s_pObject->vAmbient;
}

int g3dSetTransform(G3DTRANSFORMSTATETYPE State, float *mat[4]) {
	static char __FUNCTION__[16] = {
		/* [0] = */ 103,
		/* [1] = */ 51,
		/* [2] = */ 100,
		/* [3] = */ 83,
		/* [4] = */ 101,
		/* [5] = */ 116,
		/* [6] = */ 84,
		/* [7] = */ 114,
		/* [8] = */ 97,
		/* [9] = */ 110,
		/* [10] = */ 115,
		/* [11] = */ 102,
		/* [12] = */ 111,
		/* [13] = */ 114,
		/* [14] = */ 109,
		/* [15] = */ 0
	};
	G3DVU1TRANSFORM &rT;
	float *pm0[4];
	float *pm1[4];
	float *pm0[4];
	float *pm2[4];
	float *pm0[4];
	float *pm0[4];
	
  float afVar1 [4];
  G3DVU1MEMLAYOUT *pGVar2;
  G3DVU1TRANSFORM *pGVar3;
  G3DCOREOBJECT *pGVar4;
  float (*pafVar5) [4];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined auVar11 [16];
  undefined auVar12 [16];
  undefined auVar13 [16];
  
  if (s_pObject == (G3DCOREOBJECT *)0x0) {
    _SetLineInfo__FPCciT0T0("g3dCore.c",0x23c,"g3dSetTransform","s_pObject");
    g3ddbgAssert__FbPCce(s_pObject != (G3DCOREOBJECT *)0x0,"g3d is not initialized yet");
  }
  if (4 < (int)State) {
    _SetLineInfo__FPCciT0T0("g3dCore.c",0x23d,"g3dSetTransform","State < NUM_G3DTRANSFORMSTATETYPE")
    ;
    g3ddbgAssert__FbPCce(false,&DAT_003f0b10);
                    /* inlined from g3dxVu0.h */
  }
  pGVar4 = s_pObject;
  auVar6 = _lqc2((undefined  [16])*mat);
  auVar7 = _lqc2((undefined  [16])mat[1]);
  auVar8 = _lqc2((undefined  [16])mat[2]);
  auVar9 = _lqc2((undefined  [16])mat[3]);
  afVar1 = (float  [4])_sqc2(auVar6);
  s_pObject->amatTransform[State][0] = afVar1;
  afVar1 = (float  [4])_sqc2(auVar7);
  pGVar4->amatTransform[State][1] = afVar1;
  afVar1 = (float  [4])_sqc2(auVar8);
  pGVar4->amatTransform[State][2] = afVar1;
  afVar1 = (float  [4])_sqc2(auVar9);
  pGVar4->amatTransform[State][3] = afVar1;
  pGVar4 = s_pObject;
                    /* end of inlined section */
  pGVar2 = &s_pObject->Vu1Mem;
  switch(State) {
  case G3DTS_VIEW:
                    /* inlined from g3dxVu0.h */
    pGVar2 = &s_pObject->Vu1Mem;
    auVar6 = _lqc2((undefined  [16])*mat);
    auVar7 = _lqc2((undefined  [16])mat[1]);
    auVar8 = _lqc2((undefined  [16])mat[2]);
    auVar9 = _lqc2((undefined  [16])mat[3]);
    afVar1 = (float  [4])_sqc2(auVar6);
    *(float *)((int)((G3DVU1TRANSFORM *)((int)&pGVar2->Packed + 0x20))->matCamera[0] + 0) =
         afVar1[0];
    *(float *)((int)((G3DVU1TRANSFORM *)((int)&pGVar2->Packed + 0x20))->matCamera[0] + 4) =
         afVar1[1];
    *(float *)((int)((G3DVU1TRANSFORM *)((int)&pGVar2->Packed + 0x20))->matCamera[0] + 8) =
         afVar1[2];
    *(float *)((int)((G3DVU1TRANSFORM *)((int)&pGVar2->Packed + 0x20))->matCamera[0] + 0xc) =
         afVar1[3];
    pGVar3 = &(pGVar4->Vu1Mem).Packed.Transform;
    afVar1 = (float  [4])_sqc2(auVar7);
    *(float *)((int)pGVar3->matCamera[1] + 0) = afVar1[0];
    *(float *)((int)pGVar3->matCamera[1] + 4) = afVar1[1];
    *(float *)((int)pGVar3->matCamera[1] + 8) = afVar1[2];
    *(float *)((int)pGVar3->matCamera[1] + 0xc) = afVar1[3];
    pGVar3 = &(pGVar4->Vu1Mem).Packed.Transform;
    afVar1 = (float  [4])_sqc2(auVar8);
    *(float *)((int)pGVar3->matCamera[2] + 0) = afVar1[0];
    *(float *)((int)pGVar3->matCamera[2] + 4) = afVar1[1];
    *(float *)((int)pGVar3->matCamera[2] + 8) = afVar1[2];
    *(float *)((int)pGVar3->matCamera[2] + 0xc) = afVar1[3];
    pGVar3 = &(pGVar4->Vu1Mem).Packed.Transform;
    afVar1 = (float  [4])_sqc2(auVar9);
    *(float *)((int)pGVar3->matCamera[3] + 0) = afVar1[0];
    *(float *)((int)pGVar3->matCamera[3] + 4) = afVar1[1];
    *(float *)((int)pGVar3->matCamera[3] + 8) = afVar1[2];
    *(float *)((int)pGVar3->matCamera[3] + 0xc) = afVar1[3];
    pGVar2 = &pGVar4->Vu1Mem;
    auVar6 = _lqc2((undefined  [16])s_pObject->amatTransform[1][0]);
    auVar7 = _lqc2((undefined  [16])s_pObject->amatTransform[1][1]);
    auVar8 = _lqc2((undefined  [16])s_pObject->amatTransform[1][2]);
    auVar9 = _lqc2((undefined  [16])s_pObject->amatTransform[1][3]);
    auVar10 = _lqc2((undefined  [16])*mat);
    auVar11 = _lqc2((undefined  [16])mat[1]);
    auVar12 = _lqc2((undefined  [16])mat[2]);
    auVar13 = _lqc2((undefined  [16])mat[3]);
    _vmulabc(auVar6,auVar10);
    _vmaddabc(auVar7,auVar10);
    _vmaddabc(auVar8,auVar10);
    auVar10 = _vmaddbc(auVar9,auVar10);
    _vmulabc(auVar6,auVar11);
    _vmaddabc(auVar7,auVar11);
    _vmaddabc(auVar8,auVar11);
    auVar11 = _vmaddbc(auVar9,auVar11);
    _vmulabc(auVar6,auVar12);
    _vmaddabc(auVar7,auVar12);
    _vmaddabc(auVar8,auVar12);
    auVar12 = _vmaddbc(auVar9,auVar12);
    _vmulabc(auVar6,auVar13);
    _vmaddabc(auVar7,auVar13);
    _vmaddabc(auVar8,auVar13);
    auVar6 = _vmaddbc(auVar9,auVar13);
    afVar1 = (float  [4])_sqc2(auVar10);
    *(float *)((int)((G3DVU1TRANSFORM *)((int)&pGVar2->Packed + 0x20))->matWorldScreen[0] + 0) =
         afVar1[0];
    *(float *)((int)((G3DVU1TRANSFORM *)((int)&pGVar2->Packed + 0x20))->matWorldScreen[0] + 4) =
         afVar1[1];
    *(float *)((int)((G3DVU1TRANSFORM *)((int)&pGVar2->Packed + 0x20))->matWorldScreen[0] + 8) =
         afVar1[2];
    *(float *)((int)((G3DVU1TRANSFORM *)((int)&pGVar2->Packed + 0x20))->matWorldScreen[0] + 0xc) =
         afVar1[3];
    pGVar3 = &(pGVar4->Vu1Mem).Packed.Transform;
    afVar1 = (float  [4])_sqc2(auVar11);
    *(float *)((int)pGVar3->matWorldScreen[1] + 0) = afVar1[0];
    *(float *)((int)pGVar3->matWorldScreen[1] + 4) = afVar1[1];
    *(float *)((int)pGVar3->matWorldScreen[1] + 8) = afVar1[2];
    *(float *)((int)pGVar3->matWorldScreen[1] + 0xc) = afVar1[3];
    pGVar3 = &(pGVar4->Vu1Mem).Packed.Transform;
    afVar1 = (float  [4])_sqc2(auVar12);
    *(float *)((int)pGVar3->matWorldScreen[2] + 0) = afVar1[0];
    *(float *)((int)pGVar3->matWorldScreen[2] + 4) = afVar1[1];
    *(float *)((int)pGVar3->matWorldScreen[2] + 8) = afVar1[2];
    *(float *)((int)pGVar3->matWorldScreen[2] + 0xc) = afVar1[3];
    pGVar3 = &(pGVar4->Vu1Mem).Packed.Transform;
    afVar1 = (float  [4])_sqc2(auVar6);
    *(float *)((int)pGVar3->matWorldScreen[3] + 0) = afVar1[0];
    *(float *)((int)pGVar3->matWorldScreen[3] + 4) = afVar1[1];
    *(float *)((int)pGVar3->matWorldScreen[3] + 8) = afVar1[2];
    *(float *)((int)pGVar3->matWorldScreen[3] + 0xc) = afVar1[3];
    break;
  case G3DTS_PROJECTION:
                    /* inlined from g3dxVu0.h */
    pGVar2 = &s_pObject->Vu1Mem;
    auVar6 = _lqc2((undefined  [16])*mat);
    auVar7 = _lqc2((undefined  [16])mat[1]);
    auVar8 = _lqc2((undefined  [16])mat[2]);
    auVar9 = _lqc2((undefined  [16])mat[3]);
    auVar10 = _lqc2((undefined  [16])s_pObject->amatTransform[0]);
    auVar11 = _lqc2((undefined  [16])s_pObject->amatTransform[1]);
    auVar12 = _lqc2((undefined  [16])s_pObject->amatTransform[2]);
    auVar13 = _lqc2((undefined  [16])s_pObject->amatTransform[3]);
    _vmulabc(auVar6,auVar10);
    _vmaddabc(auVar7,auVar10);
    _vmaddabc(auVar8,auVar10);
    auVar10 = _vmaddbc(auVar9,auVar10);
    _vmulabc(auVar6,auVar11);
    _vmaddabc(auVar7,auVar11);
    _vmaddabc(auVar8,auVar11);
    auVar11 = _vmaddbc(auVar9,auVar11);
    _vmulabc(auVar6,auVar12);
    _vmaddabc(auVar7,auVar12);
    _vmaddabc(auVar8,auVar12);
    auVar12 = _vmaddbc(auVar9,auVar12);
    _vmulabc(auVar6,auVar13);
    _vmaddabc(auVar7,auVar13);
    _vmaddabc(auVar8,auVar13);
    auVar6 = _vmaddbc(auVar9,auVar13);
    afVar1 = (float  [4])_sqc2(auVar10);
    *(float *)((int)((G3DVU1TRANSFORM *)((int)&pGVar2->Packed + 0x20))->matWorldScreen[0] + 0) =
         afVar1[0];
    *(float *)((int)((G3DVU1TRANSFORM *)((int)&pGVar2->Packed + 0x20))->matWorldScreen[0] + 4) =
         afVar1[1];
    *(float *)((int)((G3DVU1TRANSFORM *)((int)&pGVar2->Packed + 0x20))->matWorldScreen[0] + 8) =
         afVar1[2];
    *(float *)((int)((G3DVU1TRANSFORM *)((int)&pGVar2->Packed + 0x20))->matWorldScreen[0] + 0xc) =
         afVar1[3];
    pGVar3 = &(pGVar4->Vu1Mem).Packed.Transform;
    afVar1 = (float  [4])_sqc2(auVar11);
    *(float *)((int)pGVar3->matWorldScreen[1] + 0) = afVar1[0];
    *(float *)((int)pGVar3->matWorldScreen[1] + 4) = afVar1[1];
    *(float *)((int)pGVar3->matWorldScreen[1] + 8) = afVar1[2];
    *(float *)((int)pGVar3->matWorldScreen[1] + 0xc) = afVar1[3];
    pGVar3 = &(pGVar4->Vu1Mem).Packed.Transform;
    afVar1 = (float  [4])_sqc2(auVar12);
    *(float *)((int)pGVar3->matWorldScreen[2] + 0) = afVar1[0];
    *(float *)((int)pGVar3->matWorldScreen[2] + 4) = afVar1[1];
    *(float *)((int)pGVar3->matWorldScreen[2] + 8) = afVar1[2];
    *(float *)((int)pGVar3->matWorldScreen[2] + 0xc) = afVar1[3];
    pGVar3 = &(pGVar4->Vu1Mem).Packed.Transform;
    afVar1 = (float  [4])_sqc2(auVar6);
    *(float *)((int)pGVar3->matWorldScreen[3] + 0) = afVar1[0];
    *(float *)((int)pGVar3->matWorldScreen[3] + 4) = afVar1[1];
    *(float *)((int)pGVar3->matWorldScreen[3] + 8) = afVar1[2];
    *(float *)((int)pGVar3->matWorldScreen[3] + 0xc) = afVar1[3];
    break;
  case G3DTS_WORLD:
                    /* inlined from g3dxVu0.h */
    auVar6 = _lqc2((undefined  [16])*mat);
    auVar7 = _lqc2((undefined  [16])mat[1]);
    auVar8 = _lqc2((undefined  [16])mat[2]);
    auVar9 = _lqc2((undefined  [16])mat[3]);
    afVar1 = (float  [4])_sqc2(auVar6);
    *(float *)((int)((G3DVU1TRANSFORM *)((int)&pGVar2->Packed + 0x20))->matLocalWorld[0] + 0) =
         afVar1[0];
    *(float *)((int)((G3DVU1TRANSFORM *)((int)&pGVar2->Packed + 0x20))->matLocalWorld[0] + 4) =
         afVar1[1];
    *(float *)((int)((G3DVU1TRANSFORM *)((int)&pGVar2->Packed + 0x20))->matLocalWorld[0] + 8) =
         afVar1[2];
    *(float *)((int)((G3DVU1TRANSFORM *)((int)&pGVar2->Packed + 0x20))->matLocalWorld[0] + 0xc) =
         afVar1[3];
    pGVar3 = &(pGVar4->Vu1Mem).Packed.Transform;
    afVar1 = (float  [4])_sqc2(auVar7);
    *(float *)((int)pGVar3->matLocalWorld[1] + 0) = afVar1[0];
    *(float *)((int)pGVar3->matLocalWorld[1] + 4) = afVar1[1];
    *(float *)((int)pGVar3->matLocalWorld[1] + 8) = afVar1[2];
    *(float *)((int)pGVar3->matLocalWorld[1] + 0xc) = afVar1[3];
    pGVar3 = &(pGVar4->Vu1Mem).Packed.Transform;
    afVar1 = (float  [4])_sqc2(auVar8);
    *(float *)((int)pGVar3->matLocalWorld[2] + 0) = afVar1[0];
    *(float *)((int)pGVar3->matLocalWorld[2] + 4) = afVar1[1];
    *(float *)((int)pGVar3->matLocalWorld[2] + 8) = afVar1[2];
    *(float *)((int)pGVar3->matLocalWorld[2] + 0xc) = afVar1[3];
    pGVar3 = &(pGVar4->Vu1Mem).Packed.Transform;
    afVar1 = (float  [4])_sqc2(auVar9);
    *(float *)((int)pGVar3->matLocalWorld[3] + 0) = afVar1[0];
    *(float *)((int)pGVar3->matLocalWorld[3] + 4) = afVar1[1];
    *(float *)((int)pGVar3->matLocalWorld[3] + 8) = afVar1[2];
    *(float *)((int)pGVar3->matLocalWorld[3] + 0xc) = afVar1[3];
                    /* end of inlined section */
    break;
  case G3DTS_WORLD1:
    pafVar5 = (s_pObject->Vu1Mem).Direct.matLocalWorld1;
                    /* inlined from g3dxVu0.h */
    goto LAB_0019c2fc;
  case G3DTS_WORLDCLIP:
                    /* inlined from g3dxVu0.h */
    pafVar5 = (s_pObject->Vu1Mem).Direct.matWorldClip;
LAB_0019c2fc:
    auVar6 = _lqc2((undefined  [16])*mat);
    auVar7 = _lqc2((undefined  [16])mat[1]);
    auVar8 = _lqc2((undefined  [16])mat[2]);
    auVar9 = _lqc2((undefined  [16])mat[3]);
    afVar1 = (float  [4])_sqc2(auVar6);
    *(float *)((int)pafVar5 + 0) = afVar1[0];
    *(float *)((int)pafVar5 + 4) = afVar1[1];
    *(float *)((int)pafVar5 + 8) = afVar1[2];
    *(float *)((int)pafVar5 + 0xc) = afVar1[3];
    afVar1 = (float  [4])_sqc2(auVar7);
    *(float *)((int)pafVar5[1] + 0) = afVar1[0];
    *(float *)((int)pafVar5[1] + 4) = afVar1[1];
    *(float *)((int)pafVar5[1] + 8) = afVar1[2];
    *(float *)((int)pafVar5[1] + 0xc) = afVar1[3];
    afVar1 = (float  [4])_sqc2(auVar8);
    *(float *)((int)pafVar5[2] + 0) = afVar1[0];
    *(float *)((int)pafVar5[2] + 4) = afVar1[1];
    *(float *)((int)pafVar5[2] + 8) = afVar1[2];
    *(float *)((int)pafVar5[2] + 0xc) = afVar1[3];
    afVar1 = (float  [4])_sqc2(auVar9);
    *(float *)((int)pafVar5[3] + 0) = afVar1[0];
    *(float *)((int)pafVar5[3] + 4) = afVar1[1];
    *(float *)((int)pafVar5[3] + 8) = afVar1[2];
    *(float *)((int)pafVar5[3] + 0xc) = afVar1[3];
  }
  return 1;
}

float&[4][4] g3dGetTransformRef(G3DTRANSFORMSTATETYPE State) {
	static char __FUNCTION__[19] = {
		/* [0] = */ 103,
		/* [1] = */ 51,
		/* [2] = */ 100,
		/* [3] = */ 71,
		/* [4] = */ 101,
		/* [5] = */ 116,
		/* [6] = */ 84,
		/* [7] = */ 114,
		/* [8] = */ 97,
		/* [9] = */ 110,
		/* [10] = */ 115,
		/* [11] = */ 102,
		/* [12] = */ 111,
		/* [13] = */ 114,
		/* [14] = */ 109,
		/* [15] = */ 82,
		/* [16] = */ 101,
		/* [17] = */ 102,
		/* [18] = */ 0
	};
	
  if (s_pObject == (G3DCOREOBJECT *)0x0) {
    _SetLineInfo__FPCciT0T0("g3dCore.c",0x272,"g3dGetTransformRef","s_pObject");
    g3ddbgAssert__FbPCce(s_pObject != (G3DCOREOBJECT *)0x0,"g3d is not initialized yet");
  }
  if (4 < (int)State) {
    _SetLineInfo__FPCciT0T0
              ("g3dCore.c",0x273,"g3dGetTransformRef","State < NUM_G3DTRANSFORMSTATETYPE");
    g3ddbgAssert__FbPCce(false,&DAT_003f0b10);
  }
  return s_pObject->amatTransform[State];
}

int g3dSetMaterial(G3DMATERIAL *pMaterial) {
	static char __FUNCTION__[15] = {
		/* [0] = */ 103,
		/* [1] = */ 51,
		/* [2] = */ 100,
		/* [3] = */ 83,
		/* [4] = */ 101,
		/* [5] = */ 116,
		/* [6] = */ 77,
		/* [7] = */ 97,
		/* [8] = */ 116,
		/* [9] = */ 101,
		/* [10] = */ 114,
		/* [11] = */ 105,
		/* [12] = */ 97,
		/* [13] = */ 108,
		/* [14] = */ 0
	};
	
  undefined8 uVar1;
  G3DCOREOBJECT *pGVar2;
  int iVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  
  if (s_pObject == (G3DCOREOBJECT *)0x0) {
    _SetLineInfo__FPCciT0T0("g3dCore.c",0x2c6,"g3dSetMaterial","s_pObject");
    g3ddbgAssert__FbPCce(s_pObject != (G3DCOREOBJECT *)0x0,"g3d is not initialized yet");
  }
  if (pMaterial == (G3DMATERIAL *)0x0) {
    _SetLineInfo__FPCciT0T0("g3dCore.c",0x2c7,"g3dSetMaterial","pMaterial");
    g3ddbgAssert__FbPCce(false,&DAT_003f0b10);
                    /* inlined from g3dLight.h */
  }
  pGVar2 = s_pObject;
  uVar1 = *(undefined8 *)pMaterial->vDiffuse;
  fVar4 = pMaterial->vDiffuse[2];
  fVar6 = pMaterial->vDiffuse[3];
  (s_pObject->Material).vDiffuse[0] = (float)uVar1;
  (pGVar2->Material).vDiffuse[1] = (float)((ulong)uVar1 >> 0x20);
  (pGVar2->Material).vDiffuse[2] = fVar4;
  (pGVar2->Material).vDiffuse[3] = fVar6;
  fVar4 = pMaterial->vAmbient[1];
  fVar6 = pMaterial->vAmbient[2];
  fVar7 = pMaterial->vAmbient[3];
  (pGVar2->Material).vAmbient[0] = pMaterial->vAmbient[0];
  (pGVar2->Material).vAmbient[1] = fVar4;
  (pGVar2->Material).vAmbient[2] = fVar6;
  (pGVar2->Material).vAmbient[3] = fVar7;
  fVar4 = pMaterial->vSpecular[1];
  fVar6 = pMaterial->vSpecular[2];
  fVar7 = pMaterial->vSpecular[3];
  (pGVar2->Material).vSpecular[0] = pMaterial->vSpecular[0];
  (pGVar2->Material).vSpecular[1] = fVar4;
  (pGVar2->Material).vSpecular[2] = fVar6;
  (pGVar2->Material).vSpecular[3] = fVar7;
  fVar4 = pMaterial->vEmissive[1];
  fVar6 = pMaterial->vEmissive[2];
  fVar7 = pMaterial->vEmissive[3];
  (pGVar2->Material).vEmissive[0] = pMaterial->vEmissive[0];
  (pGVar2->Material).vEmissive[1] = fVar4;
  (pGVar2->Material).vEmissive[2] = fVar6;
  (pGVar2->Material).vEmissive[3] = fVar7;
  iVar3 = pMaterial->aiPad[0];
  iVar5 = pMaterial->aiPad[1];
  iVar8 = pMaterial->aiPad[2];
  (pGVar2->Material).fPower = pMaterial->fPower;
  (pGVar2->Material).aiPad[0] = iVar3;
  (pGVar2->Material).aiPad[1] = iVar5;
  (pGVar2->Material).aiPad[2] = iVar8;
  pGVar2 = s_pObject;
  uVar1 = *(undefined8 *)(s_pObject->Material).vDiffuse;
  fVar4 = (s_pObject->Material).vDiffuse[2];
  fVar6 = (s_pObject->Material).vDiffuse[3];
  (s_pObject->Vu1Mem).Packed.Material.vDiffuse[0] = (float)uVar1;
  (pGVar2->Vu1Mem).Packed.Material.vDiffuse[1] = (float)((ulong)uVar1 >> 0x20);
  (pGVar2->Vu1Mem).Packed.Material.vDiffuse[2] = fVar4;
  (pGVar2->Vu1Mem).Packed.Material.vDiffuse[3] = fVar6;
  fVar4 = (pGVar2->Material).vAmbient[1];
  fVar6 = (pGVar2->Material).vAmbient[2];
  fVar7 = (pGVar2->Material).vAmbient[3];
  (pGVar2->Vu1Mem).Packed.Material.vAmbient[0] = (pGVar2->Material).vAmbient[0];
  (pGVar2->Vu1Mem).Packed.Material.vAmbient[1] = fVar4;
  (pGVar2->Vu1Mem).Packed.Material.vAmbient[2] = fVar6;
  (pGVar2->Vu1Mem).Packed.Material.vAmbient[3] = fVar7;
  fVar4 = (pGVar2->Material).vSpecular[1];
  fVar6 = (pGVar2->Material).vSpecular[2];
  fVar7 = (pGVar2->Material).vSpecular[3];
  (pGVar2->Vu1Mem).Packed.Material.vSpecular[0] = (pGVar2->Material).vSpecular[0];
  (pGVar2->Vu1Mem).Packed.Material.vSpecular[1] = fVar4;
  (pGVar2->Vu1Mem).Packed.Material.vSpecular[2] = fVar6;
  (pGVar2->Vu1Mem).Packed.Material.vSpecular[3] = fVar7;
  fVar4 = (pGVar2->Material).vEmissive[1];
  fVar6 = (pGVar2->Material).vEmissive[2];
  fVar7 = (pGVar2->Material).vEmissive[3];
  (pGVar2->Vu1Mem).Packed.Material.vEmissive[0] = (pGVar2->Material).vEmissive[0];
  (pGVar2->Vu1Mem).Packed.Material.vEmissive[1] = fVar4;
  (pGVar2->Vu1Mem).Packed.Material.vEmissive[2] = fVar6;
  (pGVar2->Vu1Mem).Packed.Material.vEmissive[3] = fVar7;
  iVar3 = (pGVar2->Material).aiPad[0];
  iVar5 = (pGVar2->Material).aiPad[1];
  iVar8 = (pGVar2->Material).aiPad[2];
  (pGVar2->Vu1Mem).Packed.Material.fPower = (pGVar2->Material).fPower;
  (pGVar2->Vu1Mem).Packed.Material.aiPad[0] = iVar3;
  (pGVar2->Vu1Mem).Packed.Material.aiPad[1] = iVar5;
  (pGVar2->Vu1Mem).Packed.Material.aiPad[2] = iVar8;
  pGVar2 = s_pObject;
                    /* end of inlined section */
  (s_pObject->Vu1Mem).Packed.Calc.vMisc[0] = (s_pObject->Material).vDiffuse[3];
  _CalcAmbient__Fv();
  _Vu0CalcVertexColorSpotLightPhong__FPf((float *)pGVar2);
  return 1;
}

G3DMATERIAL& g3dGetMaterialRef() {
	static char __FUNCTION__[18] = {
		/* [0] = */ 103,
		/* [1] = */ 51,
		/* [2] = */ 100,
		/* [3] = */ 71,
		/* [4] = */ 101,
		/* [5] = */ 116,
		/* [6] = */ 77,
		/* [7] = */ 97,
		/* [8] = */ 116,
		/* [9] = */ 101,
		/* [10] = */ 114,
		/* [11] = */ 105,
		/* [12] = */ 97,
		/* [13] = */ 108,
		/* [14] = */ 82,
		/* [15] = */ 101,
		/* [16] = */ 102,
		/* [17] = */ 0
	};
	
  if (s_pObject == (G3DCOREOBJECT *)0x0) {
    _SetLineInfo__FPCciT0T0("g3dCore.c",0x2ee,"g3dGetMaterialRef","s_pObject");
    g3ddbgAssert__FbPCce(s_pObject != (G3DCOREOBJECT *)0x0,"g3d is not initialized yet");
  }
  return &s_pObject->Material;
}

int g3dLightEnable(int iLightId, int bEnable) {
	static char __FUNCTION__[15] = {
		/* [0] = */ 103,
		/* [1] = */ 51,
		/* [2] = */ 100,
		/* [3] = */ 76,
		/* [4] = */ 105,
		/* [5] = */ 103,
		/* [6] = */ 104,
		/* [7] = */ 116,
		/* [8] = */ 69,
		/* [9] = */ 110,
		/* [10] = */ 97,
		/* [11] = */ 98,
		/* [12] = */ 108,
		/* [13] = */ 101,
		/* [14] = */ 0
	};
	
  if (s_pObject == (G3DCOREOBJECT *)0x0) {
    _SetLineInfo__FPCciT0T0("g3dCore.c",0x2fc,"g3dLightEnable","s_pObject");
    g3ddbgAssert__FbPCce(s_pObject != (G3DCOREOBJECT *)0x0,"g3d is not initialized yet");
  }
  if (8 < iLightId) {
    _SetLineInfo__FPCciT0T0("g3dCore.c",0x2fd,"g3dLightEnable","iLightId < NUM_G3DLIGHTINDEX");
    g3ddbgAssert__FbPCce(false,"iLightId:%d");
  }
  s_pObject->aLightData[iLightId].bEnable = bEnable;
  return 1;
}

int g3dIsLightEnable(int iLightId) {
	static char __FUNCTION__[17] = {
		/* [0] = */ 103,
		/* [1] = */ 51,
		/* [2] = */ 100,
		/* [3] = */ 73,
		/* [4] = */ 115,
		/* [5] = */ 76,
		/* [6] = */ 105,
		/* [7] = */ 103,
		/* [8] = */ 104,
		/* [9] = */ 116,
		/* [10] = */ 69,
		/* [11] = */ 110,
		/* [12] = */ 97,
		/* [13] = */ 98,
		/* [14] = */ 108,
		/* [15] = */ 101,
		/* [16] = */ 0
	};
	
  if (s_pObject == (G3DCOREOBJECT *)0x0) {
    _SetLineInfo__FPCciT0T0("g3dCore.c",0x309,"g3dIsLightEnable","s_pObject");
    g3ddbgAssert__FbPCce(s_pObject != (G3DCOREOBJECT *)0x0,"g3d is not initialized yet");
  }
  if (8 < iLightId) {
    _SetLineInfo__FPCciT0T0("g3dCore.c",0x30a,"g3dIsLightEnable","iLightId < NUM_G3DLIGHTINDEX");
    g3ddbgAssert__FbPCce(false,"iLightId : %d");
  }
  return s_pObject->aLightData[iLightId].bEnable;
}

int g3dSetLight(int iLightId, G3DLIGHT *pLight) {
	static char __FUNCTION__[12] = {
		/* [0] = */ 103,
		/* [1] = */ 51,
		/* [2] = */ 100,
		/* [3] = */ 83,
		/* [4] = */ 101,
		/* [5] = */ 116,
		/* [6] = */ 76,
		/* [7] = */ 105,
		/* [8] = */ 103,
		/* [9] = */ 104,
		/* [10] = */ 116,
		/* [11] = */ 0
	};
	
  undefined8 uVar1;
  G3DCOREOBJECT *pGVar2;
  int iVar3;
  G3DLIGHTTYPE GVar4;
  float fVar5;
  bool bVar6;
  float fVar7;
  float fVar8;
  
  if (s_pObject == (G3DCOREOBJECT *)0x0) {
    _SetLineInfo__FPCciT0T0("g3dCore.c",0x314,"g3dSetLight","s_pObject");
    g3ddbgAssert__FbPCce(s_pObject != (G3DCOREOBJECT *)0x0,"g3d is not initialized yet");
  }
  if (pLight == (G3DLIGHT *)0x0) {
    _SetLineInfo__FPCciT0T0("g3dCore.c",0x315,"g3dSetLight",s_pLight_003f0b18);
    g3ddbgAssert__FbPCce(false,&DAT_003f0b10);
  }
  if (8 < iLightId) {
    _SetLineInfo__FPCciT0T0("g3dCore.c",0x316,"g3dSetLight","iLightId < NUM_G3DLIGHTINDEX");
    g3ddbgAssert__FbPCce(false,&DAT_003f0b10);
                    /* inlined from g3dTypes.h */
  }
  GVar4 = G3DLIGHT_DIRECTIONAL;
  if ((2U < (uint)iLightId) && (GVar4 = G3DLIGHT_POINT, 2 < iLightId - 3U)) {
    GVar4 = G3DLIGHT_SPOT;
    if (2 < iLightId - 6U) {
      GVar4 = G3DLIGHTTYPE_FORCE_DWORD;
    }
  }
  if (GVar4 != pLight->Type) {
                    /* end of inlined section */
    _SetLineInfo__FPCciT0T0
              ("g3dCore.c",0x318,"g3dSetLight","g3dGetLightType( iLightId ) == pLight->Type");
    GVar4 = G3DLIGHT_DIRECTIONAL;
                    /* inlined from g3dTypes.h */
    if ((2U < (uint)iLightId) && (GVar4 = G3DLIGHT_POINT, 2 < iLightId - 3U)) {
      GVar4 = G3DLIGHT_SPOT;
      if (2 < iLightId - 6U) {
        GVar4 = G3DLIGHTTYPE_FORCE_DWORD;
      }
    }
    g3ddbgAssert__FbPCce(GVar4 == pLight->Type,&DAT_003aee30);
  }
                    /* end of inlined section */
  fVar7 = pLight->fMinRange;
  if (fVar7 < 0.0) {
    _SetLineInfo__FPCciT0T0("g3dCore.c",0x319,"g3dSetLight","pLight->fMinRange >= 0.0f");
    g3ddbgWarning__FbPCce(0.0 <= pLight->fMinRange,&DAT_003f0b10);
    fVar7 = pLight->fMinRange;
    fVar8 = pLight->fMaxRange;
  }
  else {
    fVar8 = pLight->fMaxRange;
  }
  if (fVar8 < fVar7) {
    _SetLineInfo__FPCciT0T0
              ("g3dCore.c",0x31a,"g3dSetLight","pLight->fMaxRange >= pLight->fMinRange");
    g3ddbgWarning__FbPCce(pLight->fMinRange <= pLight->fMaxRange,&DAT_003f0b10);
    fVar7 = pLight->fAngleOutside;
  }
  else {
    fVar7 = pLight->fAngleOutside;
  }
  if (fVar7 < pLight->fAngleInside) {
    _SetLineInfo__FPCciT0T0
              ("g3dCore.c",0x31b,"g3dSetLight","pLight->fAngleOutside >= pLight->fAngleInside");
    g3ddbgWarning__FbPCce(pLight->fAngleInside <= pLight->fAngleOutside,&DAT_003f0b10);
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_relops.h */
  }
  bVar6 = false;
  if (pLight->Type == G3DLIGHT_POINT) {
    iVar3 = memcmp(pLight->vDirection,g_v0000,0x10);
    bVar6 = iVar3 != 0;
  }
  if (bVar6) {
    bVar6 = false;
                    /* end of inlined section */
    _SetLineInfo__FPCciT0T0
              ("g3dCore.c",799,"g3dSetLight",
               "pLight->Type != G3DLIGHT_POINT || EqualMemory128(pLight->vDirection,g_v0000,1 )");
    if ((pLight->Type != G3DLIGHT_POINT) ||
       (iVar3 = memcmp(pLight->vDirection,g_v0000,0x10), iVar3 == 0)) {
      bVar6 = true;
    }
    g3ddbgWarning__FbPCce(bVar6,&DAT_003f0b10);
  }
                    /* inlined from g3dLight.h */
  pGVar2 = s_pObject;
  uVar1 = *(undefined8 *)pLight->vDiffuse;
  fVar7 = pLight->vDiffuse[2];
  fVar8 = pLight->vDiffuse[3];
  s_pObject->aLightData[iLightId].L.vDiffuse[0] = (float)uVar1;
  pGVar2->aLightData[iLightId].L.vDiffuse[1] = (float)((ulong)uVar1 >> 0x20);
  pGVar2->aLightData[iLightId].L.vDiffuse[2] = fVar7;
  pGVar2->aLightData[iLightId].L.vDiffuse[3] = fVar8;
  fVar7 = pLight->vSpecular[1];
  fVar8 = pLight->vSpecular[2];
  fVar5 = pLight->vSpecular[3];
  pGVar2->aLightData[iLightId].L.vSpecular[0] = pLight->vSpecular[0];
  pGVar2->aLightData[iLightId].L.vSpecular[1] = fVar7;
  pGVar2->aLightData[iLightId].L.vSpecular[2] = fVar8;
  pGVar2->aLightData[iLightId].L.vSpecular[3] = fVar5;
  fVar7 = pLight->vAmbient[1];
  fVar8 = pLight->vAmbient[2];
  fVar5 = pLight->vAmbient[3];
  pGVar2->aLightData[iLightId].L.vAmbient[0] = pLight->vAmbient[0];
  pGVar2->aLightData[iLightId].L.vAmbient[1] = fVar7;
  pGVar2->aLightData[iLightId].L.vAmbient[2] = fVar8;
  pGVar2->aLightData[iLightId].L.vAmbient[3] = fVar5;
  fVar7 = pLight->vPosition[1];
  fVar8 = pLight->vPosition[2];
  fVar5 = pLight->vPosition[3];
  pGVar2->aLightData[iLightId].L.vPosition[0] = pLight->vPosition[0];
  pGVar2->aLightData[iLightId].L.vPosition[1] = fVar7;
  pGVar2->aLightData[iLightId].L.vPosition[2] = fVar8;
  pGVar2->aLightData[iLightId].L.vPosition[3] = fVar5;
  fVar7 = pLight->vDirection[1];
  fVar8 = pLight->vDirection[2];
  fVar5 = pLight->vDirection[3];
  pGVar2->aLightData[iLightId].L.vDirection[0] = pLight->vDirection[0];
  pGVar2->aLightData[iLightId].L.vDirection[1] = fVar7;
  pGVar2->aLightData[iLightId].L.vDirection[2] = fVar8;
  pGVar2->aLightData[iLightId].L.vDirection[3] = fVar5;
  fVar7 = pLight->fAngleInside;
  fVar8 = pLight->fAngleOutside;
  fVar5 = pLight->fMaxRange;
  pGVar2->aLightData[iLightId].L.Type = pLight->Type;
  pGVar2->aLightData[iLightId].L.fAngleInside = fVar7;
  pGVar2->aLightData[iLightId].L.fAngleOutside = fVar8;
  pGVar2->aLightData[iLightId].L.fMaxRange = fVar5;
  fVar7 = pLight->fFalloff;
  fVar8 = pLight->afPad0[0];
  fVar5 = pLight->afPad0[1];
  pGVar2->aLightData[iLightId].L.fMinRange = pLight->fMinRange;
  pGVar2->aLightData[iLightId].L.fFalloff = fVar7;
  pGVar2->aLightData[iLightId].L.afPad0[0] = fVar8;
  pGVar2->aLightData[iLightId].L.afPad0[1] = fVar5;
                    /* end of inlined section */
  return 1;
}

G3DLIGHT& g3dGetLightRef(int iLightId) {
	static char __FUNCTION__[15] = {
		/* [0] = */ 103,
		/* [1] = */ 51,
		/* [2] = */ 100,
		/* [3] = */ 71,
		/* [4] = */ 101,
		/* [5] = */ 116,
		/* [6] = */ 76,
		/* [7] = */ 105,
		/* [8] = */ 103,
		/* [9] = */ 104,
		/* [10] = */ 116,
		/* [11] = */ 82,
		/* [12] = */ 101,
		/* [13] = */ 102,
		/* [14] = */ 0
	};
	
  if (s_pObject == (G3DCOREOBJECT *)0x0) {
    _SetLineInfo__FPCciT0T0("g3dCore.c",0x33b,"g3dGetLightRef","s_pObject");
    g3ddbgAssert__FbPCce(s_pObject != (G3DCOREOBJECT *)0x0,"g3d is not initialized yet");
  }
  if (8 < iLightId) {
    _SetLineInfo__FPCciT0T0("g3dCore.c",0x33c,"g3dGetLightRef","iLightId < NUM_G3DLIGHTINDEX");
    g3ddbgAssert__FbPCce(false,&DAT_003f0b10);
  }
  return (G3DLIGHT *)(s_pObject->aLightData + iLightId);
}

int g3dApplyLight() {
	static char __FUNCTION__[14] = {
		/* [0] = */ 103,
		/* [1] = */ 51,
		/* [2] = */ 100,
		/* [3] = */ 65,
		/* [4] = */ 112,
		/* [5] = */ 112,
		/* [6] = */ 108,
		/* [7] = */ 121,
		/* [8] = */ 76,
		/* [9] = */ 105,
		/* [10] = */ 103,
		/* [11] = */ 104,
		/* [12] = */ 116,
		/* [13] = */ 0
	};
	
  G3DVU1LIGHTSTATUS *pLS;
  
  if (s_pObject == (G3DCOREOBJECT *)0x0) {
    _SetLineInfo__FPCciT0T0("g3dCore.c",0x346,"g3dApplyLight","s_pObject");
    g3ddbgAssert__FbPCce(s_pObject != (G3DCOREOBJECT *)0x0,"g3d is not initialized yet");
  }
  _ApplyLightDirectional__Fv();
  _ApplyLightPoint__Fv();
  _ApplyLightSpot__Fv();
  pLS = &(s_pObject->Vu1Mem).Direct.lightstatus;
  g3dSetLightStatus__FPC17G3DVU1LIGHTSTATUS(pLS);
  _Vu0CalcVertexColorSpotLightPhong__FPf((float *)pLS);
  return 1;
}

int g3dSetTexture(int iStage, CTexture *pTexture) {
	static char __FUNCTION__[14] = {
		/* [0] = */ 103,
		/* [1] = */ 51,
		/* [2] = */ 100,
		/* [3] = */ 83,
		/* [4] = */ 101,
		/* [5] = */ 116,
		/* [6] = */ 84,
		/* [7] = */ 101,
		/* [8] = */ 120,
		/* [9] = */ 116,
		/* [10] = */ 117,
		/* [11] = */ 114,
		/* [12] = */ 101,
		/* [13] = */ 0
	};
	sceGifPackAd aGPA[2];
	
  IG3DResource__vtable *pIVar1;
  _sceGifPackAd aGPA [2];
  
  if (s_pObject == (G3DCOREOBJECT *)0x0) {
    _SetLineInfo__FPCciT0T0("g3dCore.c",0x35f,"g3dSetTexture","s_pObject");
    g3ddbgAssert__FbPCce(s_pObject != (G3DCOREOBJECT *)0x0,"g3d is not initialized yet");
  }
  if (0 < iStage) {
    _SetLineInfo__FPCciT0T0("g3dCore.c",0x360,"g3dSetTexture","iStage < G3D_MAX_TEXTURESTAGE");
    g3ddbgAssert__FbPCce(iStage < 1,&DAT_003f0b10);
  }
  (s_pObject->Resource).apTexture[iStage] = pTexture;
  if (pTexture != (CTexture *)0x0) {
    pIVar1 = (pTexture->field0_0x0).__vtable;
    (*(code *)pIVar1[1].PreLoad)
              ((int)&(pTexture->field0_0x0).m_Type + (int)*(short *)&pIVar1[1].IG3DResource);
                    /* inlined from g3dTexture.h */
                    /* end of inlined section */
    aGPA[0].DATA = (pTexture->m_TextureData).l.lTex0;
    aGPA[1].DATA = (pTexture->m_TextureData).l.lTex1;
    aGPA[0].ADDR = 6;
    aGPA[1].ADDR = 0x14;
    g3dSetGsRegisters__FPC13_sceGifPackAdii(aGPA,2,1);
  }
  return 1;
}

void g3dCalcVertexColor(float *vDest, float *vVertex, float *vNormal, float *vColorSource) {
	static char __FUNCTION__[19] = {
		/* [0] = */ 103,
		/* [1] = */ 51,
		/* [2] = */ 100,
		/* [3] = */ 67,
		/* [4] = */ 97,
		/* [5] = */ 108,
		/* [6] = */ 99,
		/* [7] = */ 86,
		/* [8] = */ 101,
		/* [9] = */ 114,
		/* [10] = */ 116,
		/* [11] = */ 101,
		/* [12] = */ 120,
		/* [13] = */ 67,
		/* [14] = */ 111,
		/* [15] = */ 108,
		/* [16] = */ 111,
		/* [17] = */ 114,
		/* [18] = */ 0
	};
	float vWork[4];
	G3DVU1MEMLAYOUT_PACKED &rLO;
	G3DVU1LIGHT &rL;
	int iLightingType;
	float fMin;
	float fMax;
	
  uint uVar1;
  float afVar2 [4];
  float afVar3 [4];
  float afVar4 [4];
  float afVar5 [4];
  float afVar6 [4];
  float afVar7 [4];
  float afVar8 [4];
  float afVar9 [4];
  float afVar10 [4];
  undefined8 uVar11;
  G3DVU1LIGHT *pGVar12;
  G3DVU1DIRECTIONALLIGHT *pGVar13;
  G3DVU1POINTLIGHT *pGVar14;
  G3DVU1SPOTLIGHT *pGVar15;
  G3DCOREOBJECT *pGVar16;
  ulong uVar17;
  float fVar18;
  float fVar19;
  undefined in_vf0 [16];
  undefined in_vf1 [16];
  undefined extraout_vf1 [16];
  undefined extraout_vf1_00 [16];
  undefined extraout_vf1_01 [16];
  undefined auVar20 [16];
  undefined extraout_vf6 [16];
  undefined extraout_vf6_00 [16];
  undefined auVar21 [16];
  undefined auVar22 [16];
  undefined auVar23 [16];
  undefined auVar24 [16];
  undefined auVar25 [16];
  undefined4 uVar26;
  float vWork [4];
  
  if (s_pObject == (G3DCOREOBJECT *)0x0) {
    _SetLineInfo__FPCciT0T0("g3dCore.c",0x3f1,"g3dCalcVertexColor","s_pObject");
    g3ddbgAssert__FbPCce(s_pObject != (G3DCOREOBJECT *)0x0,"g3d is not initialized yet");
    in_vf1 = extraout_vf1;
  }
  pGVar16 = s_pObject;
  uVar1 = s_pObject->auiGlobalState[1];
  auVar20 = _lqc2(*(undefined (*) [16])vVertex);
  auVar21 = _lqc2(*(undefined (*) [16])vNormal);
  auVar22 = _lqc2((undefined  [16])s_pObject->amatTransform[2][0]);
  auVar23 = _lqc2((undefined  [16])s_pObject->amatTransform[2][1]);
  auVar24 = _lqc2((undefined  [16])s_pObject->amatTransform[2][2]);
  auVar25 = _lqc2((undefined  [16])s_pObject->amatTransform[2][3]);
  _vmulabc(auVar22,auVar20);
  _vmaddabc(auVar23,auVar20);
  auVar20 = _vmaddbc(auVar24,auVar20);
  _vmulabc(auVar22,auVar21);
  _vmaddabc(auVar23,auVar21);
  auVar21 = _vmaddbc(auVar24,auVar21);
  auVar20 = _vadd(auVar25,auVar20);
  auVar21 = _vmul(auVar21,auVar21);
  _vaddabc(auVar21,auVar21);
  auVar21 = _vmaddbc(in_vf1,auVar21);
  _vrsqrt(in_vf0,auVar21);
  auVar21 = _vmulbc(in_vf0,in_vf0);
  uVar26 = _vwaitq();
  _vmulq(auVar21,uVar26);
  if (uVar1 == 2) {
                    /* inlined from g3dLight.h */
    auVar21 = _lqc2((undefined  [16])s_pObject->amatTransform[3]);
    auVar20 = _vsub(auVar20,auVar21);
    auVar21 = _vmul(auVar20,auVar20);
    _vnop();
    _vnop();
    _vnop();
    _vaddabc(auVar21,auVar21);
    auVar21 = _vmaddbc(in_vf1,auVar21);
    _vnop();
    _vnop();
    _vnop();
    uVar26 = _vrsqrt(in_vf0,auVar21);
    _vsubbc(in_vf0,in_vf0);
    _vnop();
    _vnop();
    _vnop();
    _vnop();
    _vnop();
    _vnop();
    _vnop();
    _vnop();
    _vnop();
    _vnop();
    _vnop();
    _vmulq(auVar20,uVar26);
  }
  uVar11 = *(undefined8 *)vColorSource;
                    /* inlined from g3dxVu0.h */
  fVar18 = vColorSource[2];
  fVar19 = vColorSource[3];
  *vDest = (float)uVar11;
  vDest[1] = (float)((ulong)uVar11 >> 0x20);
  vDest[2] = fVar18;
  vDest[3] = fVar19;
                    /* end of inlined section */
  uVar17 = *(ulong *)((int)&pGVar16->Vu1Mem + 0x338);
  if ((uVar17 & 7) != 0) {
    (*(code *)s_apfLoadColor[uVar1])((undefined *)((int)&pGVar16->Vu1Mem + 0x180));
                    /* inlined from g3dLight.h */
    pGVar12 = &(pGVar16->Vu1Mem).Packed.Light;
    afVar2[0] = *(float *)((int)(pGVar12->dir).avDirection[0] + 0);
    afVar2[1] = *(float *)((int)(pGVar12->dir).avDirection[0] + 4);
    afVar2[2] = *(float *)((int)(pGVar12->dir).avDirection[0] + 8);
    afVar2[3] = *(float *)((int)(pGVar12->dir).avDirection[0] + 0xc);
    auVar20 = _lqc2((undefined  [16])afVar2);
    pGVar13 = &(pGVar16->Vu1Mem).Packed.Light.dir;
    afVar3[0] = *(float *)((int)pGVar13->avDirection[1] + 0);
    afVar3[1] = *(float *)((int)pGVar13->avDirection[1] + 4);
    afVar3[2] = *(float *)((int)pGVar13->avDirection[1] + 8);
    afVar3[3] = *(float *)((int)pGVar13->avDirection[1] + 0xc);
    auVar21 = _lqc2((undefined  [16])afVar3);
    pGVar13 = &(pGVar16->Vu1Mem).Packed.Light.dir;
    afVar4[0] = *(float *)((int)pGVar13->avDirection[2] + 0);
    afVar4[1] = *(float *)((int)pGVar13->avDirection[2] + 4);
    afVar4[2] = *(float *)((int)pGVar13->avDirection[2] + 8);
    afVar4[3] = *(float *)((int)pGVar13->avDirection[2] + 0xc);
    auVar22 = _lqc2((undefined  [16])afVar4);
    _vsub(in_vf0,auVar20);
    _vsub(in_vf0,auVar21);
    _vsub(in_vf0,auVar22);
                    /* end of inlined section */
    (*(code *)s_apfLoadColorCoeff[uVar1])();
    (*(code *)s_apfCalcVertexColorDirectionalLight[uVar1])(vWork);
                    /* inlined from g3dxVu0.h */
    auVar20 = _lqc2(*(undefined (*) [16])vDest);
    auVar21 = _lqc2((undefined  [16])vWork);
    auVar20 = _vadd(auVar20,auVar21);
    auVar20 = _sqc2(auVar20);
    *(undefined (*) [16])vDest = auVar20;
    uVar17 = *(ulong *)((int)&pGVar16->Vu1Mem + 0x338);
  }
                    /* end of inlined section */
  if ((uVar17 & 0x70) != 0) {
    (*(code *)s_apfLoadColor[uVar1])((undefined *)((int)&pGVar16->Vu1Mem + 0x210));
                    /* inlined from g3dLight.h */
    pGVar12 = &(pGVar16->Vu1Mem).Packed.Light;
    afVar5[0] = *(float *)((int)(pGVar12->point).avPosition[0] + 0);
    afVar5[1] = *(float *)((int)(pGVar12->point).avPosition[0] + 4);
    afVar5[2] = *(float *)((int)(pGVar12->point).avPosition[0] + 8);
    afVar5[3] = *(float *)((int)(pGVar12->point).avPosition[0] + 0xc);
    auVar21 = _lqc2((undefined  [16])afVar5);
    pGVar14 = &(pGVar16->Vu1Mem).Packed.Light.point;
    afVar6[0] = *(float *)((int)pGVar14->avPosition[1] + 0);
    afVar6[1] = *(float *)((int)pGVar14->avPosition[1] + 4);
    afVar6[2] = *(float *)((int)pGVar14->avPosition[1] + 8);
    afVar6[3] = *(float *)((int)pGVar14->avPosition[1] + 0xc);
    auVar22 = _lqc2((undefined  [16])afVar6);
    pGVar14 = &(pGVar16->Vu1Mem).Packed.Light.point;
    afVar7[0] = *(float *)((int)pGVar14->avPosition[2] + 0);
    afVar7[1] = *(float *)((int)pGVar14->avPosition[2] + 4);
    afVar7[2] = *(float *)((int)pGVar14->avPosition[2] + 8);
    afVar7[3] = *(float *)((int)pGVar14->avPosition[2] + 0xc);
    auVar20 = _lqc2((undefined  [16])afVar7);
    auVar21 = _vsub(extraout_vf6,auVar21);
    auVar22 = _vsub(extraout_vf6,auVar22);
    auVar20 = _vsub(extraout_vf6,auVar20);
    _vnop();
    auVar23 = _vmul(auVar21,auVar21);
    auVar21 = _vmul(auVar22,auVar22);
    auVar20 = _vmul(auVar20,auVar20);
    _vnop();
    _vaddabc(auVar23,auVar23);
    _vmaddbc(extraout_vf1_00,auVar23);
    _vaddabc(auVar21,auVar21);
    _vmaddbc(extraout_vf1_00,auVar21);
    _vaddabc(auVar20,auVar20);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* end of inlined section */
  if ((uVar17 & 0x700) != 0) {
    (*(code *)s_apfLoadColor[uVar1])((undefined *)((int)&pGVar16->Vu1Mem + 0x2a0));
                    /* inlined from g3dLight.h */
    pGVar12 = &(pGVar16->Vu1Mem).Packed.Light;
    afVar8[0] = *(float *)((int)(pGVar12->spot).avPosition[0] + 0);
    afVar8[1] = *(float *)((int)(pGVar12->spot).avPosition[0] + 4);
    afVar8[2] = *(float *)((int)(pGVar12->spot).avPosition[0] + 8);
    afVar8[3] = *(float *)((int)(pGVar12->spot).avPosition[0] + 0xc);
    auVar21 = _lqc2((undefined  [16])afVar8);
    pGVar15 = &(pGVar16->Vu1Mem).Packed.Light.spot;
    afVar9[0] = *(float *)((int)pGVar15->avPosition[1] + 0);
    afVar9[1] = *(float *)((int)pGVar15->avPosition[1] + 4);
    afVar9[2] = *(float *)((int)pGVar15->avPosition[1] + 8);
    afVar9[3] = *(float *)((int)pGVar15->avPosition[1] + 0xc);
    auVar22 = _lqc2((undefined  [16])afVar9);
    pGVar15 = &(pGVar16->Vu1Mem).Packed.Light.spot;
    afVar10[0] = *(float *)((int)pGVar15->avPosition[2] + 0);
    afVar10[1] = *(float *)((int)pGVar15->avPosition[2] + 4);
    afVar10[2] = *(float *)((int)pGVar15->avPosition[2] + 8);
    afVar10[3] = *(float *)((int)pGVar15->avPosition[2] + 0xc);
    auVar20 = _lqc2((undefined  [16])afVar10);
    auVar21 = _vsub(extraout_vf6_00,auVar21);
    auVar22 = _vsub(extraout_vf6_00,auVar22);
    auVar20 = _vsub(extraout_vf6_00,auVar20);
    _vnop();
    auVar23 = _vmul(auVar21,auVar21);
    auVar21 = _vmul(auVar22,auVar22);
    auVar20 = _vmul(auVar20,auVar20);
    _vnop();
    _vaddabc(auVar23,auVar23);
    _vmaddbc(extraout_vf1_01,auVar23);
    _vaddabc(auVar21,auVar21);
    _vmaddbc(extraout_vf1_01,auVar21);
    _vaddabc(auVar20,auVar20);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  auVar20 = _lqc2(*(undefined (*) [16])vDest);
  auVar21 = _lqc2(*(undefined (*) [16])(s_pObject->Vu1Mem).Packed.Calc.vAmbient);
  auVar20 = _vadd(auVar20,auVar21);
  auVar20 = _sqc2(auVar20);
  *(undefined (*) [16])vDest = auVar20;
  auVar22 = _lqc2(*(undefined (*) [16])vDest);
  auVar20 = _qmtc2(0);
  auVar21 = _qmtc2(0x3f800000);
  auVar20 = _vmaxbc(auVar22,auVar20);
  auVar20 = _vminibc(auVar20,auVar21);
  auVar20 = _sqc2(auVar20);
  *(undefined (*) [16])vDest = auVar20;
  return;
}

int g3dSetGsRegister(long int lData, long int lAddress, int iDmaChan) {
	static char __FUNCTION__[17] = {
		/* [0] = */ 103,
		/* [1] = */ 51,
		/* [2] = */ 100,
		/* [3] = */ 83,
		/* [4] = */ 101,
		/* [5] = */ 116,
		/* [6] = */ 71,
		/* [7] = */ 115,
		/* [8] = */ 82,
		/* [9] = */ 101,
		/* [10] = */ 103,
		/* [11] = */ 105,
		/* [12] = */ 115,
		/* [13] = */ 116,
		/* [14] = */ 101,
		/* [15] = */ 114,
		/* [16] = */ 0
	};
	
  if (s_pObject == (G3DCOREOBJECT *)0x0) {
    _SetLineInfo__FPCciT0T0("g3dCore.c",0x43d,"g3dSetGsRegister","s_pObject");
    g3ddbgAssert__FbPCce(s_pObject != (G3DCOREOBJECT *)0x0,"g3d is not initialized yet");
  }
  if (0x7f < lAddress) {
    _SetLineInfo__FPCciT0T0
              ("g3dCore.c",0x43f,"g3dSetGsRegister","lAddress < DWSIZEOF( G3DGSREGISTERLAYOUT )");
    g3ddbgAssert__FbPCce(false,&DAT_003f0b10);
  }
  *(long *)((int)&s_pObject->GsRegister + (int)lAddress * 8) = lData;
  if (iDmaChan != -1) {
    g3dDmaSetGsRegister__FUlUl(lData,lAddress);
  }
  return 1;
}

int g3dSetGsRegisters(sceGifPackAd *aGPA, int iNum, int iDmaChan) {
	static char __FUNCTION__[18] = {
		/* [0] = */ 103,
		/* [1] = */ 51,
		/* [2] = */ 100,
		/* [3] = */ 83,
		/* [4] = */ 101,
		/* [5] = */ 116,
		/* [6] = */ 71,
		/* [7] = */ 115,
		/* [8] = */ 82,
		/* [9] = */ 101,
		/* [10] = */ 103,
		/* [11] = */ 105,
		/* [12] = */ 115,
		/* [13] = */ 116,
		/* [14] = */ 101,
		/* [15] = */ 114,
		/* [16] = */ 115,
		/* [17] = */ 0
	};
	_PACKET *pPacket;
	int iNumRegist;
	int i;
	int i;
	sceGifPackAd &rGPA;
	long int &rlCurData;
	
  ulong uVar1;
  G3DGSREGISTERLAYOUT *pGVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  _sceGifPackAd *p_Var9;
  undefined4 *puVar10;
  ulong uVar11;
  
  if (s_pObject == (G3DCOREOBJECT *)0x0) {
    _SetLineInfo__FPCciT0T0("g3dCore.c",0x46a,"g3dSetGsRegisters","(s_pObject)");
    g3ddbgWarning__FbPCce(s_pObject != (G3DCOREOBJECT *)0x0,"g3d is not initialized yet");
    g3ddbgPrintf__FPCce("[G3DRETURN:%d]%s(%d)(%s):%s\n");
    iVar6 = 0;
  }
  else {
    if (iDmaChan == -1) {
      iVar6 = 0;
      if (0 < iNum) {
        iVar4 = 0;
        while( true ) {
          iVar6 = iVar6 + 1;
          puVar5 = (undefined8 *)((int)&aGPA->DATA + iVar4);
          *(undefined8 *)((int)&s_pObject->GsRegister + *(int *)(puVar5 + 1) * 8) = *puVar5;
          if (iNum <= iVar6) break;
          iVar4 = iVar6 * 0x10;
        }
        return 1;
      }
    }
    else {
      iVar6 = 0;
      puVar3 = (undefined4 *)g3dDmaOpenPacket__Fv();
      puVar3[2] = &DAT_11000000;
      *puVar3 = 0;
      puVar3[1] = 0;
      *(ulong *)(puVar3 + 6) = *(ulong *)(puVar3 + 6) & 0xfffffffffffffff0 | 0xe;
      uVar11 = 0;
      if (0 < iNum) {
        puVar10 = puVar3 + 8;
        do {
          p_Var9 = aGPA + iVar6;
          iVar4 = *(int *)&p_Var9->ADDR;
          pGVar2 = &s_pObject->GsRegister;
          if (0x7f < p_Var9->ADDR) {
            _SetLineInfo__FPCciT0T0
                      ("g3dCore.c",0x495,"g3dSetGsRegisters",
                       "rGPA.ADDR < memberarraysizeof(G3DGSREGISTERLAYOUT,Array )");
            g3ddbgAssert__FbPCce(p_Var9->ADDR < 0x80,&DAT_003f0b10);
          }
          *(ulong *)((int)pGVar2 + iVar4 * 8) = p_Var9->DATA;
          uVar1 = p_Var9->DATA;
          uVar7 = *(undefined4 *)&p_Var9->ADDR;
          uVar8 = *(undefined4 *)((int)&p_Var9->ADDR + 4);
          *puVar10 = (int)uVar1;
          puVar10[1] = (int)(uVar1 >> 0x20);
          puVar10[2] = uVar7;
          puVar10[3] = uVar8;
          iVar6 = iVar6 + 1;
          uVar11 = (ulong)((int)uVar11 + 1);
          puVar10 = puVar10 + 4;
        } while (iVar6 < iNum);
      }
      if (uVar11 == 0) {
        g3dDmaCancelPacket__Fv();
        return 0;
      }
      puVar3[3] = (int)uVar11 + 1U | 0x50000000;
      *(ulong *)(puVar3 + 4) = uVar11 | 0x1000000000008000;
      g3dDmaClosePacket__FPCv(puVar3 + (int)uVar11 * 4 + 8);
    }
    iVar6 = 1;
  }
  return iVar6;
}

long int& g3dGetGsRegisterRef(long int lAddress) {
	static char __FUNCTION__[20] = {
		/* [0] = */ 103,
		/* [1] = */ 51,
		/* [2] = */ 100,
		/* [3] = */ 71,
		/* [4] = */ 101,
		/* [5] = */ 116,
		/* [6] = */ 71,
		/* [7] = */ 115,
		/* [8] = */ 82,
		/* [9] = */ 101,
		/* [10] = */ 103,
		/* [11] = */ 105,
		/* [12] = */ 115,
		/* [13] = */ 116,
		/* [14] = */ 101,
		/* [15] = */ 114,
		/* [16] = */ 82,
		/* [17] = */ 101,
		/* [18] = */ 102,
		/* [19] = */ 0
	};
	
  if (s_pObject == (G3DCOREOBJECT *)0x0) {
    _SetLineInfo__FPCciT0T0("g3dCore.c",0x4c2,"g3dGetGsRegisterRef","s_pObject");
    g3ddbgAssert__FbPCce(s_pObject != (G3DCOREOBJECT *)0x0,"g3d is not initialized yet");
  }
  if (0x7f < lAddress) {
    _SetLineInfo__FPCciT0T0
              ("g3dCore.c",0x4c3,"g3dGetGsRegisterRef","lAddress < DWSIZEOF( G3DGSREGISTERLAYOUT )")
    ;
    g3ddbgAssert__FbPCce(false,&DAT_003f0b10);
  }
  return (long *)((int)&s_pObject->GsRegister + (int)lAddress * 8);
}

void g3dCalcGsPrimitiveCoord(sceGsXyz *pGsXyz, float *vScreenCoord) {
	static char __FUNCTION__[24] = {
		/* [0] = */ 103,
		/* [1] = */ 51,
		/* [2] = */ 100,
		/* [3] = */ 67,
		/* [4] = */ 97,
		/* [5] = */ 108,
		/* [6] = */ 99,
		/* [7] = */ 71,
		/* [8] = */ 115,
		/* [9] = */ 80,
		/* [10] = */ 114,
		/* [11] = */ 105,
		/* [12] = */ 109,
		/* [13] = */ 105,
		/* [14] = */ 116,
		/* [15] = */ 105,
		/* [16] = */ 118,
		/* [17] = */ 101,
		/* [18] = */ 67,
		/* [19] = */ 111,
		/* [20] = */ 111,
		/* [21] = */ 114,
		/* [22] = */ 100,
		/* [23] = */ 0
	};
	sceVu0IVECTOR iv;
	
  float fVar1;
  float fVar2;
  G3DCOREOBJECT *pGVar3;
  undefined auVar4 [16];
  int iv [4];
  
  if (s_pObject == (G3DCOREOBJECT *)0x0) {
    _SetLineInfo__FPCciT0T0("g3dCore.c",0x4cf,"g3dCalcGsPrimitiveCoord","s_pObject");
    g3ddbgAssert__FbPCce(s_pObject != (G3DCOREOBJECT *)0x0,"g3d is not initialized yet");
  }
  pGVar3 = s_pObject;
                    /* inlined from g3dxVu0.h */
  auVar4 = _lqc2(*(undefined (*) [16])vScreenCoord);
  auVar4 = _vftoi4(auVar4);
  auVar4 = _sqc2(auVar4);
                    /* end of inlined section */
  iv[0]._0_2_ = auVar4._0_2_;
  iv[1]._0_2_ = auVar4._4_2_;
                    /* inlined from g3dUtil.h */
                    /* end of inlined section */
  *(short *)pGsXyz = *(short *)((int)&s_pObject->GsRegister + 0xc0) + (short)iv[0];
  fVar2 = DAT_003ee368;
  fVar1 = DAT_003ee364;
                    /* inlined from g3dUtil.h */
                    /* end of inlined section */
                    /* inlined from g3dUtil.h */
                    /* end of inlined section */
                    /* inlined from g3dUtil.h */
                    /* end of inlined section */
  *(short *)&pGsXyz->field_0x2 = *(short *)((int)&pGVar3->GsRegister + 0xc4) + (short)iv[1];
                    /* inlined from g3dUtil.h */
  *(int *)&pGsXyz->field_0x4 = (int)((vScreenCoord[2] - 0.0) * fVar1 + fVar2);
  return;
}

void g3dCalcScreenCoord(float *vScreenCoord, sceGsXyz *pGsXyz) {
	static char __FUNCTION__[19] = {
		/* [0] = */ 103,
		/* [1] = */ 51,
		/* [2] = */ 100,
		/* [3] = */ 67,
		/* [4] = */ 97,
		/* [5] = */ 108,
		/* [6] = */ 99,
		/* [7] = */ 83,
		/* [8] = */ 99,
		/* [9] = */ 114,
		/* [10] = */ 101,
		/* [11] = */ 101,
		/* [12] = */ 110,
		/* [13] = */ 67,
		/* [14] = */ 111,
		/* [15] = */ 111,
		/* [16] = */ 114,
		/* [17] = */ 100,
		/* [18] = */ 0
	};
	sceVu0IVECTOR iv;
	
  undefined auVar1 [16];
  int iv [4];
  
  if (s_pObject == (G3DCOREOBJECT *)0x0) {
    _SetLineInfo__FPCciT0T0("g3dCore.c",0x4e2,"g3dCalcScreenCoord","s_pObject");
    g3ddbgAssert__FbPCce(s_pObject != (G3DCOREOBJECT *)0x0,"g3d is not initialized yet");
  }
  auVar1._4_4_ = (uint)*(ushort *)&pGsXyz->field_0x2 -
                 (uint)*(ushort *)((int)&s_pObject->GsRegister + 0xc4);
  auVar1._0_4_ = (uint)*(ushort *)pGsXyz - (uint)*(ushort *)((int)&s_pObject->GsRegister + 0xc0);
  auVar1._8_4_ = *(undefined4 *)&pGsXyz->field_0x4;
  auVar1._12_4_ = iv[3];
                    /* inlined from g3dxVu0.h */
  auVar1 = _lqc2(auVar1);
  auVar1 = _vitof4(auVar1);
  auVar1 = _sqc2(auVar1);
  *(undefined (*) [16])vScreenCoord = auVar1;
  return;
}

void _Vu0LoadMaterialConstant(G3DMATERIAL *pMat) {
  code *pcVar1;
  G3DVU1MEMLAYOUT *pGVar2;
  G3DVU1MEMLAYOUT *pGVar3;
  G3DCOREOBJECT *pGVar4;
  uint uVar5;
  
  if (s_pObject->auiGlobalState[1] < 3) {
    uVar5 = s_pObject->auiGlobalState[1];
  }
  else {
    _SetLineInfo__FPCciT0T0
              ("g3dCore.c",0x94,"_CalcColor",
               "s_pObject->auiGlobalState[ G3DGS_LIGHTINGTYPE ] < NUM_G3DLIGHTINGTYPE");
    g3ddbgAssert__FbPCce(s_pObject->auiGlobalState[1] < 3,"memory illegal access occured");
    uVar5 = s_pObject->auiGlobalState[1];
  }
  pGVar4 = s_pObject;
  pGVar2 = &s_pObject->Vu1Mem;
  pGVar3 = &s_pObject->Vu1Mem;
  (*(code *)s_apfLoadMaterial[uVar5])((undefined *)((int)&s_pObject->Vu1Mem + 0x460));
  pcVar1 = (code *)s_apfCalcColorData[uVar5];
  (*pcVar1)((undefined *)((int)pGVar2 + 0x180),(undefined *)((int)pGVar3 + 0x530));
  (*pcVar1)((undefined *)((int)&pGVar4->Vu1Mem + 0x210),(undefined *)((int)&pGVar4->Vu1Mem + 0x5c0))
  ;
  (*pcVar1)((undefined *)((int)&pGVar4->Vu1Mem + 0x2a0),(undefined *)((int)&pGVar4->Vu1Mem + 0x650))
  ;
  return;
}

void _Vu0LoadMaterialLambert(G3DMATERIAL *pMat) {
  code *pcVar1;
  G3DVU1MEMLAYOUT *pGVar2;
  G3DVU1MEMLAYOUT *pGVar3;
  G3DCOREOBJECT *pGVar4;
  uint uVar5;
  
  if (s_pObject->auiGlobalState[1] < 3) {
    uVar5 = s_pObject->auiGlobalState[1];
  }
  else {
    _SetLineInfo__FPCciT0T0
              ("g3dCore.c",0x94,"_CalcColor",
               "s_pObject->auiGlobalState[ G3DGS_LIGHTINGTYPE ] < NUM_G3DLIGHTINGTYPE");
    g3ddbgAssert__FbPCce(s_pObject->auiGlobalState[1] < 3,"memory illegal access occured");
    uVar5 = s_pObject->auiGlobalState[1];
  }
  pGVar4 = s_pObject;
  pGVar2 = &s_pObject->Vu1Mem;
  pGVar3 = &s_pObject->Vu1Mem;
  (*(code *)s_apfLoadMaterial[uVar5])((undefined *)((int)&s_pObject->Vu1Mem + 0x460));
  pcVar1 = (code *)s_apfCalcColorData[uVar5];
  (*pcVar1)((undefined *)((int)pGVar2 + 0x180),(undefined *)((int)pGVar3 + 0x530));
  (*pcVar1)((undefined *)((int)&pGVar4->Vu1Mem + 0x210),(undefined *)((int)&pGVar4->Vu1Mem + 0x5c0))
  ;
  (*pcVar1)((undefined *)((int)&pGVar4->Vu1Mem + 0x2a0),(undefined *)((int)&pGVar4->Vu1Mem + 0x650))
  ;
  return;
}

void _Vu0LoadMaterialPhong(G3DMATERIAL *pMat) {
  code *pcVar1;
  G3DVU1MEMLAYOUT *pGVar2;
  G3DVU1MEMLAYOUT *pGVar3;
  G3DCOREOBJECT *pGVar4;
  uint uVar5;
  
  if (s_pObject->auiGlobalState[1] < 3) {
    uVar5 = s_pObject->auiGlobalState[1];
  }
  else {
    _SetLineInfo__FPCciT0T0
              ("g3dCore.c",0x94,"_CalcColor",
               "s_pObject->auiGlobalState[ G3DGS_LIGHTINGTYPE ] < NUM_G3DLIGHTINGTYPE");
    g3ddbgAssert__FbPCce(s_pObject->auiGlobalState[1] < 3,"memory illegal access occured");
    uVar5 = s_pObject->auiGlobalState[1];
  }
  pGVar4 = s_pObject;
  pGVar2 = &s_pObject->Vu1Mem;
  pGVar3 = &s_pObject->Vu1Mem;
  (*(code *)s_apfLoadMaterial[uVar5])((undefined *)((int)&s_pObject->Vu1Mem + 0x460));
  pcVar1 = (code *)s_apfCalcColorData[uVar5];
  (*pcVar1)((undefined *)((int)pGVar2 + 0x180),(undefined *)((int)pGVar3 + 0x530));
  (*pcVar1)((undefined *)((int)&pGVar4->Vu1Mem + 0x210),(undefined *)((int)&pGVar4->Vu1Mem + 0x5c0))
  ;
  (*pcVar1)((undefined *)((int)&pGVar4->Vu1Mem + 0x2a0),(undefined *)((int)&pGVar4->Vu1Mem + 0x650))
  ;
  return;
}

void _Vu0CalcColorDataConstant(void *pCD, void *pL) {
  code *pcVar1;
  G3DVU1MEMLAYOUT *pGVar2;
  G3DVU1MEMLAYOUT *pGVar3;
  G3DCOREOBJECT *pGVar4;
  uint uVar5;
  
  if (s_pObject->auiGlobalState[1] < 3) {
    uVar5 = s_pObject->auiGlobalState[1];
  }
  else {
    _SetLineInfo__FPCciT0T0
              ("g3dCore.c",0x94,"_CalcColor",
               "s_pObject->auiGlobalState[ G3DGS_LIGHTINGTYPE ] < NUM_G3DLIGHTINGTYPE");
    g3ddbgAssert__FbPCce(s_pObject->auiGlobalState[1] < 3,"memory illegal access occured");
    uVar5 = s_pObject->auiGlobalState[1];
  }
  pGVar4 = s_pObject;
  pGVar2 = &s_pObject->Vu1Mem;
  pGVar3 = &s_pObject->Vu1Mem;
  (*(code *)s_apfLoadMaterial[uVar5])((undefined *)((int)&s_pObject->Vu1Mem + 0x460));
  pcVar1 = (code *)s_apfCalcColorData[uVar5];
  (*pcVar1)((undefined *)((int)pGVar2 + 0x180),(undefined *)((int)pGVar3 + 0x530));
  (*pcVar1)((undefined *)((int)&pGVar4->Vu1Mem + 0x210),(undefined *)((int)&pGVar4->Vu1Mem + 0x5c0))
  ;
  (*pcVar1)((undefined *)((int)&pGVar4->Vu1Mem + 0x2a0),(undefined *)((int)&pGVar4->Vu1Mem + 0x650))
  ;
  return;
}

void _Vu0CalcColorDataLambert(void *pCD, void *pL) {
  code *pcVar1;
  G3DVU1MEMLAYOUT *pGVar2;
  G3DVU1MEMLAYOUT *pGVar3;
  G3DCOREOBJECT *pGVar4;
  uint uVar5;
  
  if (s_pObject->auiGlobalState[1] < 3) {
    uVar5 = s_pObject->auiGlobalState[1];
  }
  else {
    _SetLineInfo__FPCciT0T0
              ("g3dCore.c",0x94,"_CalcColor",
               "s_pObject->auiGlobalState[ G3DGS_LIGHTINGTYPE ] < NUM_G3DLIGHTINGTYPE");
    g3ddbgAssert__FbPCce(s_pObject->auiGlobalState[1] < 3,"memory illegal access occured");
    uVar5 = s_pObject->auiGlobalState[1];
  }
  pGVar4 = s_pObject;
  pGVar2 = &s_pObject->Vu1Mem;
  pGVar3 = &s_pObject->Vu1Mem;
  (*(code *)s_apfLoadMaterial[uVar5])((undefined *)((int)&s_pObject->Vu1Mem + 0x460));
  pcVar1 = (code *)s_apfCalcColorData[uVar5];
  (*pcVar1)((undefined *)((int)pGVar2 + 0x180),(undefined *)((int)pGVar3 + 0x530));
  (*pcVar1)((undefined *)((int)&pGVar4->Vu1Mem + 0x210),(undefined *)((int)&pGVar4->Vu1Mem + 0x5c0))
  ;
  (*pcVar1)((undefined *)((int)&pGVar4->Vu1Mem + 0x2a0),(undefined *)((int)&pGVar4->Vu1Mem + 0x650))
  ;
  return;
}

void _Vu0CalcColorDataPhong(void *pCD, void *pL) {
  code *pcVar1;
  G3DVU1MEMLAYOUT *pGVar2;
  G3DVU1MEMLAYOUT *pGVar3;
  G3DCOREOBJECT *pGVar4;
  uint uVar5;
  
  if (s_pObject->auiGlobalState[1] < 3) {
    uVar5 = s_pObject->auiGlobalState[1];
  }
  else {
    _SetLineInfo__FPCciT0T0
              ("g3dCore.c",0x94,"_CalcColor",
               "s_pObject->auiGlobalState[ G3DGS_LIGHTINGTYPE ] < NUM_G3DLIGHTINGTYPE");
    g3ddbgAssert__FbPCce(s_pObject->auiGlobalState[1] < 3,"memory illegal access occured");
    uVar5 = s_pObject->auiGlobalState[1];
  }
  pGVar4 = s_pObject;
  pGVar2 = &s_pObject->Vu1Mem;
  pGVar3 = &s_pObject->Vu1Mem;
  (*(code *)s_apfLoadMaterial[uVar5])((undefined *)((int)&s_pObject->Vu1Mem + 0x460));
  pcVar1 = (code *)s_apfCalcColorData[uVar5];
  (*pcVar1)((undefined *)((int)pGVar2 + 0x180),(undefined *)((int)pGVar3 + 0x530));
  (*pcVar1)((undefined *)((int)&pGVar4->Vu1Mem + 0x210),(undefined *)((int)&pGVar4->Vu1Mem + 0x5c0))
  ;
  (*pcVar1)((undefined *)((int)&pGVar4->Vu1Mem + 0x2a0),(undefined *)((int)&pGVar4->Vu1Mem + 0x650))
  ;
  return;
}

void _Vu0LoadColorDataConstant(void *pCD) {
  code *pcVar1;
  G3DVU1MEMLAYOUT *pGVar2;
  G3DVU1MEMLAYOUT *pGVar3;
  G3DCOREOBJECT *pGVar4;
  uint uVar5;
  
  if (s_pObject->auiGlobalState[1] < 3) {
    uVar5 = s_pObject->auiGlobalState[1];
  }
  else {
    _SetLineInfo__FPCciT0T0
              ("g3dCore.c",0x94,"_CalcColor",
               "s_pObject->auiGlobalState[ G3DGS_LIGHTINGTYPE ] < NUM_G3DLIGHTINGTYPE");
    g3ddbgAssert__FbPCce(s_pObject->auiGlobalState[1] < 3,"memory illegal access occured");
    uVar5 = s_pObject->auiGlobalState[1];
  }
  pGVar4 = s_pObject;
  pGVar2 = &s_pObject->Vu1Mem;
  pGVar3 = &s_pObject->Vu1Mem;
  (*(code *)s_apfLoadMaterial[uVar5])((undefined *)((int)&s_pObject->Vu1Mem + 0x460));
  pcVar1 = (code *)s_apfCalcColorData[uVar5];
  (*pcVar1)((undefined *)((int)pGVar2 + 0x180),(undefined *)((int)pGVar3 + 0x530));
  (*pcVar1)((undefined *)((int)&pGVar4->Vu1Mem + 0x210),(undefined *)((int)&pGVar4->Vu1Mem + 0x5c0))
  ;
  (*pcVar1)((undefined *)((int)&pGVar4->Vu1Mem + 0x2a0),(undefined *)((int)&pGVar4->Vu1Mem + 0x650))
  ;
  return;
}

void _Vu0LoadColorDataLambert(void *pCD) {
  code *pcVar1;
  G3DVU1MEMLAYOUT *pGVar2;
  G3DVU1MEMLAYOUT *pGVar3;
  G3DCOREOBJECT *pGVar4;
  uint uVar5;
  
  if (s_pObject->auiGlobalState[1] < 3) {
    uVar5 = s_pObject->auiGlobalState[1];
  }
  else {
    _SetLineInfo__FPCciT0T0
              ("g3dCore.c",0x94,"_CalcColor",
               "s_pObject->auiGlobalState[ G3DGS_LIGHTINGTYPE ] < NUM_G3DLIGHTINGTYPE");
    g3ddbgAssert__FbPCce(s_pObject->auiGlobalState[1] < 3,"memory illegal access occured");
    uVar5 = s_pObject->auiGlobalState[1];
  }
  pGVar4 = s_pObject;
  pGVar2 = &s_pObject->Vu1Mem;
  pGVar3 = &s_pObject->Vu1Mem;
  (*(code *)s_apfLoadMaterial[uVar5])((undefined *)((int)&s_pObject->Vu1Mem + 0x460));
  pcVar1 = (code *)s_apfCalcColorData[uVar5];
  (*pcVar1)((undefined *)((int)pGVar2 + 0x180),(undefined *)((int)pGVar3 + 0x530));
  (*pcVar1)((undefined *)((int)&pGVar4->Vu1Mem + 0x210),(undefined *)((int)&pGVar4->Vu1Mem + 0x5c0))
  ;
  (*pcVar1)((undefined *)((int)&pGVar4->Vu1Mem + 0x2a0),(undefined *)((int)&pGVar4->Vu1Mem + 0x650))
  ;
  return;
}

void _Vu0LoadColorDataPhong(void *pCD) {
  code *pcVar1;
  G3DVU1MEMLAYOUT *pGVar2;
  G3DVU1MEMLAYOUT *pGVar3;
  G3DCOREOBJECT *pGVar4;
  uint uVar5;
  
  if (s_pObject->auiGlobalState[1] < 3) {
    uVar5 = s_pObject->auiGlobalState[1];
  }
  else {
    _SetLineInfo__FPCciT0T0
              ("g3dCore.c",0x94,"_CalcColor",
               "s_pObject->auiGlobalState[ G3DGS_LIGHTINGTYPE ] < NUM_G3DLIGHTINGTYPE");
    g3ddbgAssert__FbPCce(s_pObject->auiGlobalState[1] < 3,"memory illegal access occured");
    uVar5 = s_pObject->auiGlobalState[1];
  }
  pGVar4 = s_pObject;
  pGVar2 = &s_pObject->Vu1Mem;
  pGVar3 = &s_pObject->Vu1Mem;
  (*(code *)s_apfLoadMaterial[uVar5])((undefined *)((int)&s_pObject->Vu1Mem + 0x460));
  pcVar1 = (code *)s_apfCalcColorData[uVar5];
  (*pcVar1)((undefined *)((int)pGVar2 + 0x180),(undefined *)((int)pGVar3 + 0x530));
  (*pcVar1)((undefined *)((int)&pGVar4->Vu1Mem + 0x210),(undefined *)((int)&pGVar4->Vu1Mem + 0x5c0))
  ;
  (*pcVar1)((undefined *)((int)&pGVar4->Vu1Mem + 0x2a0),(undefined *)((int)&pGVar4->Vu1Mem + 0x650))
  ;
  return;
}

void _Vu0LoadColorCoeffConstant() {
  code *pcVar1;
  G3DVU1MEMLAYOUT *pGVar2;
  G3DVU1MEMLAYOUT *pGVar3;
  G3DCOREOBJECT *pGVar4;
  uint uVar5;
  
  if (s_pObject->auiGlobalState[1] < 3) {
    uVar5 = s_pObject->auiGlobalState[1];
  }
  else {
    _SetLineInfo__FPCciT0T0
              ("g3dCore.c",0x94,"_CalcColor",
               "s_pObject->auiGlobalState[ G3DGS_LIGHTINGTYPE ] < NUM_G3DLIGHTINGTYPE");
    g3ddbgAssert__FbPCce(s_pObject->auiGlobalState[1] < 3,"memory illegal access occured");
    uVar5 = s_pObject->auiGlobalState[1];
  }
  pGVar4 = s_pObject;
  pGVar2 = &s_pObject->Vu1Mem;
  pGVar3 = &s_pObject->Vu1Mem;
  (*(code *)s_apfLoadMaterial[uVar5])((undefined *)((int)&s_pObject->Vu1Mem + 0x460));
  pcVar1 = (code *)s_apfCalcColorData[uVar5];
  (*pcVar1)((undefined *)((int)pGVar2 + 0x180),(undefined *)((int)pGVar3 + 0x530));
  (*pcVar1)((undefined *)((int)&pGVar4->Vu1Mem + 0x210),(undefined *)((int)&pGVar4->Vu1Mem + 0x5c0))
  ;
  (*pcVar1)((undefined *)((int)&pGVar4->Vu1Mem + 0x2a0),(undefined *)((int)&pGVar4->Vu1Mem + 0x650))
  ;
  return;
}

void _Vu0LoadColorCoeffLambert() {
  code *pcVar1;
  G3DVU1MEMLAYOUT *pGVar2;
  G3DVU1MEMLAYOUT *pGVar3;
  G3DCOREOBJECT *pGVar4;
  uint uVar5;
  
  if (s_pObject->auiGlobalState[1] < 3) {
    uVar5 = s_pObject->auiGlobalState[1];
  }
  else {
    _SetLineInfo__FPCciT0T0
              ("g3dCore.c",0x94,"_CalcColor",
               "s_pObject->auiGlobalState[ G3DGS_LIGHTINGTYPE ] < NUM_G3DLIGHTINGTYPE");
    g3ddbgAssert__FbPCce(s_pObject->auiGlobalState[1] < 3,"memory illegal access occured");
    uVar5 = s_pObject->auiGlobalState[1];
  }
  pGVar4 = s_pObject;
  pGVar2 = &s_pObject->Vu1Mem;
  pGVar3 = &s_pObject->Vu1Mem;
  (*(code *)s_apfLoadMaterial[uVar5])((undefined *)((int)&s_pObject->Vu1Mem + 0x460));
  pcVar1 = (code *)s_apfCalcColorData[uVar5];
  (*pcVar1)((undefined *)((int)pGVar2 + 0x180),(undefined *)((int)pGVar3 + 0x530));
  (*pcVar1)((undefined *)((int)&pGVar4->Vu1Mem + 0x210),(undefined *)((int)&pGVar4->Vu1Mem + 0x5c0))
  ;
  (*pcVar1)((undefined *)((int)&pGVar4->Vu1Mem + 0x2a0),(undefined *)((int)&pGVar4->Vu1Mem + 0x650))
  ;
  return;
}

void _Vu0LoadColorCoeffPhong() {
  code *pcVar1;
  G3DVU1MEMLAYOUT *pGVar2;
  G3DVU1MEMLAYOUT *pGVar3;
  G3DCOREOBJECT *pGVar4;
  uint uVar5;
  
  if (s_pObject->auiGlobalState[1] < 3) {
    uVar5 = s_pObject->auiGlobalState[1];
  }
  else {
    _SetLineInfo__FPCciT0T0
              ("g3dCore.c",0x94,"_CalcColor",
               "s_pObject->auiGlobalState[ G3DGS_LIGHTINGTYPE ] < NUM_G3DLIGHTINGTYPE");
    g3ddbgAssert__FbPCce(s_pObject->auiGlobalState[1] < 3,"memory illegal access occured");
    uVar5 = s_pObject->auiGlobalState[1];
  }
  pGVar4 = s_pObject;
  pGVar2 = &s_pObject->Vu1Mem;
  pGVar3 = &s_pObject->Vu1Mem;
  (*(code *)s_apfLoadMaterial[uVar5])((undefined *)((int)&s_pObject->Vu1Mem + 0x460));
  pcVar1 = (code *)s_apfCalcColorData[uVar5];
  (*pcVar1)((undefined *)((int)pGVar2 + 0x180),(undefined *)((int)pGVar3 + 0x530));
  (*pcVar1)((undefined *)((int)&pGVar4->Vu1Mem + 0x210),(undefined *)((int)&pGVar4->Vu1Mem + 0x5c0))
  ;
  (*pcVar1)((undefined *)((int)&pGVar4->Vu1Mem + 0x2a0),(undefined *)((int)&pGVar4->Vu1Mem + 0x650))
  ;
  return;
}

void _Vu0CalcVertexColorDirectinalLightConstant(float *vDestColor) {
  code *pcVar1;
  G3DVU1MEMLAYOUT *pGVar2;
  G3DVU1MEMLAYOUT *pGVar3;
  G3DCOREOBJECT *pGVar4;
  uint uVar5;
  
  if (s_pObject->auiGlobalState[1] < 3) {
    uVar5 = s_pObject->auiGlobalState[1];
  }
  else {
    _SetLineInfo__FPCciT0T0
              ("g3dCore.c",0x94,"_CalcColor",
               "s_pObject->auiGlobalState[ G3DGS_LIGHTINGTYPE ] < NUM_G3DLIGHTINGTYPE");
    g3ddbgAssert__FbPCce(s_pObject->auiGlobalState[1] < 3,"memory illegal access occured");
    uVar5 = s_pObject->auiGlobalState[1];
  }
  pGVar4 = s_pObject;
  pGVar2 = &s_pObject->Vu1Mem;
  pGVar3 = &s_pObject->Vu1Mem;
  (*(code *)s_apfLoadMaterial[uVar5])((undefined *)((int)&s_pObject->Vu1Mem + 0x460));
  pcVar1 = (code *)s_apfCalcColorData[uVar5];
  (*pcVar1)((undefined *)((int)pGVar2 + 0x180),(undefined *)((int)pGVar3 + 0x530));
  (*pcVar1)((undefined *)((int)&pGVar4->Vu1Mem + 0x210),(undefined *)((int)&pGVar4->Vu1Mem + 0x5c0))
  ;
  (*pcVar1)((undefined *)((int)&pGVar4->Vu1Mem + 0x2a0),(undefined *)((int)&pGVar4->Vu1Mem + 0x650))
  ;
  return;
}

void _Vu0CalcVertexColorDirectinalLightLambert(float *vDestColor) {
  code *pcVar1;
  G3DVU1MEMLAYOUT *pGVar2;
  G3DVU1MEMLAYOUT *pGVar3;
  G3DCOREOBJECT *pGVar4;
  uint uVar5;
  
  if (s_pObject->auiGlobalState[1] < 3) {
    uVar5 = s_pObject->auiGlobalState[1];
  }
  else {
    _SetLineInfo__FPCciT0T0
              ("g3dCore.c",0x94,"_CalcColor",
               "s_pObject->auiGlobalState[ G3DGS_LIGHTINGTYPE ] < NUM_G3DLIGHTINGTYPE");
    g3ddbgAssert__FbPCce(s_pObject->auiGlobalState[1] < 3,"memory illegal access occured");
    uVar5 = s_pObject->auiGlobalState[1];
  }
  pGVar4 = s_pObject;
  pGVar2 = &s_pObject->Vu1Mem;
  pGVar3 = &s_pObject->Vu1Mem;
  (*(code *)s_apfLoadMaterial[uVar5])((undefined *)((int)&s_pObject->Vu1Mem + 0x460));
  pcVar1 = (code *)s_apfCalcColorData[uVar5];
  (*pcVar1)((undefined *)((int)pGVar2 + 0x180),(undefined *)((int)pGVar3 + 0x530));
  (*pcVar1)((undefined *)((int)&pGVar4->Vu1Mem + 0x210),(undefined *)((int)&pGVar4->Vu1Mem + 0x5c0))
  ;
  (*pcVar1)((undefined *)((int)&pGVar4->Vu1Mem + 0x2a0),(undefined *)((int)&pGVar4->Vu1Mem + 0x650))
  ;
  return;
}

void _Vu0CalcVertexColorDirectinalLightPhong(float *vDestColor) {
  code *pcVar1;
  G3DVU1MEMLAYOUT *pGVar2;
  G3DVU1MEMLAYOUT *pGVar3;
  G3DCOREOBJECT *pGVar4;
  uint uVar5;
  
  if (s_pObject->auiGlobalState[1] < 3) {
    uVar5 = s_pObject->auiGlobalState[1];
  }
  else {
    _SetLineInfo__FPCciT0T0
              ("g3dCore.c",0x94,"_CalcColor",
               "s_pObject->auiGlobalState[ G3DGS_LIGHTINGTYPE ] < NUM_G3DLIGHTINGTYPE");
    g3ddbgAssert__FbPCce(s_pObject->auiGlobalState[1] < 3,"memory illegal access occured");
    uVar5 = s_pObject->auiGlobalState[1];
  }
  pGVar4 = s_pObject;
  pGVar2 = &s_pObject->Vu1Mem;
  pGVar3 = &s_pObject->Vu1Mem;
  (*(code *)s_apfLoadMaterial[uVar5])((undefined *)((int)&s_pObject->Vu1Mem + 0x460));
  pcVar1 = (code *)s_apfCalcColorData[uVar5];
  (*pcVar1)((undefined *)((int)pGVar2 + 0x180),(undefined *)((int)pGVar3 + 0x530));
  (*pcVar1)((undefined *)((int)&pGVar4->Vu1Mem + 0x210),(undefined *)((int)&pGVar4->Vu1Mem + 0x5c0))
  ;
  (*pcVar1)((undefined *)((int)&pGVar4->Vu1Mem + 0x2a0),(undefined *)((int)&pGVar4->Vu1Mem + 0x650))
  ;
  return;
}

static void _Vu0CalcVertexColorPointLightConstant(float *vDestColor) {
  ulong in_t0;
  ulong in_t5;
  undefined in_vf0 [16];
  undefined in_vf1 [16];
  undefined auVar1 [16];
  undefined in_vf15 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined in_vf25 [16];
  undefined in_vf26 [16];
  undefined in_vf27 [16];
  
  auVar2 = _vmul(in_vf0,in_vf0);
  if (((in_t5 & 0x10) != 0) && ((in_t0 & 0x88) == 0)) {
    _vnop();
    _vadda(0,in_vf25,in_vf0);
    auVar2 = _vmadd(in_vf0,in_vf0);
    _vnop();
    _vnop();
    _vnop();
    auVar2 = _vmulbc(auVar2,in_vf15);
    _vnop();
    _vnop();
    _vnop();
    auVar2 = _vminibc(auVar2,in_vf0);
  }
  auVar3 = _vmul(in_vf0,in_vf0);
  if (((in_t5 & 0x20) != 0) && ((in_t0 & 0x44) == 0)) {
    _vnop();
    _vadda(0,in_vf26,in_vf0);
    auVar3 = _vmadd(in_vf0,in_vf0);
    _vnop();
    _vnop();
    _vnop();
    auVar3 = _vmulbc(auVar3,in_vf15);
    _vnop();
    _vnop();
    _vnop();
    auVar3 = _vminibc(auVar3,in_vf0);
  }
  auVar1 = _vmul(in_vf0,in_vf0);
  if (((in_t5 & 0x40) != 0) && (_vnop(), (in_t0 & 0x22) == 0)) {
    _vnop();
    _vadda(0,in_vf27,in_vf0);
    auVar1 = _vmadd(in_vf0,in_vf0);
    _vnop();
    _vnop();
    _vnop();
    auVar1 = _vmulbc(auVar1,in_vf15);
    _vnop();
    _vnop();
    _vnop();
    auVar1 = _vminibc(auVar1,in_vf0);
  }
  _vadda(0,auVar2,auVar3);
  auVar2 = _vmadd(in_vf1,auVar1);
  _vnop();
  _vnop();
  _vnop();
  auVar2 = _vminibc(auVar2,in_vf0);
  _vnop();
  _vnop();
  _vnop();
  auVar2 = _sqc2(auVar2);
  *(undefined (*) [16])vDestColor = auVar2;
  return;
}

static void _Vu0CalcVertexColorPointLightLambert(float *vDestColor) {
  ulong in_t0;
  ulong in_t3;
  ulong in_t5;
  undefined in_vf0 [16];
  undefined in_vf1 [16];
  undefined auVar1 [16];
  undefined in_vf15 [16];
  undefined in_vf17 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined in_vf25 [16];
  undefined in_vf26 [16];
  undefined in_vf27 [16];
  undefined in_vf28 [16];
  undefined in_vf29 [16];
  undefined in_vf30 [16];
  
  auVar2 = _vmul(in_vf0,in_vf0);
  if (((in_t5 & 0x10) != 0) && ((in_t0 & 0x88) == 0)) {
    _vnop();
    _vadda(0,in_vf25,in_vf0);
    if ((in_t3 & 0x88) == 0) {
      _vnop();
      _vmaddabc(in_vf28,in_vf17);
    }
    auVar2 = _vmadd(in_vf0,in_vf0);
    _vnop();
    _vnop();
    _vnop();
    auVar2 = _vmulbc(auVar2,in_vf15);
    _vnop();
    _vnop();
    _vnop();
    auVar2 = _vminibc(auVar2,in_vf0);
  }
  auVar3 = _vmul(in_vf0,in_vf0);
  if (((in_t5 & 0x20) != 0) && (_vnop(), (in_t0 & 0x44) == 0)) {
    _vnop();
    _vadda(0,in_vf26,in_vf0);
    if ((in_t3 & 0x44) == 0) {
      _vnop();
      _vmaddabc(in_vf29,in_vf17);
    }
    auVar3 = _vmadd(in_vf0,in_vf0);
    _vnop();
    _vnop();
    _vnop();
    auVar3 = _vmulbc(auVar3,in_vf15);
    _vnop();
    _vnop();
    _vnop();
    auVar3 = _vminibc(auVar3,in_vf0);
  }
  auVar1 = _vmul(in_vf0,in_vf0);
  if (((in_t5 & 0x40) != 0) && (_vnop(), (in_t0 & 0x22) == 0)) {
    _vnop();
    _vadda(0,in_vf27,in_vf0);
    if ((in_t3 & 0x22) == 0) {
      _vnop();
      _vmaddabc(in_vf30,in_vf17);
    }
    auVar1 = _vmadd(in_vf0,in_vf0);
    _vnop();
    _vnop();
    _vnop();
    auVar1 = _vmulbc(auVar1,in_vf15);
    _vnop();
    _vnop();
    _vnop();
    auVar1 = _vminibc(auVar1,in_vf0);
  }
  _vadda(0,auVar2,auVar3);
  auVar2 = _vmadd(in_vf1,auVar1);
  _vnop();
  _vnop();
  _vnop();
  auVar2 = _vminibc(auVar2,in_vf0);
  _vnop();
  _vnop();
  _vnop();
  auVar2 = _sqc2(auVar2);
  *(undefined (*) [16])vDestColor = auVar2;
  return;
}

static void _Vu0CalcVertexColorPointLightPhong(float *vDestColor) {
  ulong in_t0;
  ulong in_t3;
  ulong in_t4;
  ulong in_t5;
  undefined in_vf0 [16];
  undefined in_vf1 [16];
  undefined auVar1 [16];
  undefined in_vf15 [16];
  undefined in_vf17 [16];
  undefined in_vf18 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined in_vf21 [16];
  undefined in_vf22 [16];
  undefined in_vf25 [16];
  undefined in_vf26 [16];
  undefined in_vf27 [16];
  undefined in_vf28 [16];
  undefined in_vf29 [16];
  undefined in_vf30 [16];
  undefined in_vf31 [16];
  
  auVar2 = _vmul(in_vf0,in_vf0);
  if (((in_t5 & 0x10) != 0) && ((in_t0 & 0x88) == 0)) {
    _vnop();
    _vadda(0,in_vf25,in_vf0);
    if ((in_t3 & 0x88) == 0) {
      _vnop();
      _vmaddabc(in_vf28,in_vf17);
    }
    if ((in_t4 & 0x88) == 0) {
      _vnop();
      _vmaddabc(in_vf31,in_vf18);
    }
    auVar2 = _vmadd(in_vf0,in_vf0);
    _vnop();
    _vnop();
    _vnop();
    auVar2 = _vmulbc(auVar2,in_vf15);
    _vnop();
    _vnop();
    _vnop();
    auVar2 = _vminibc(auVar2,in_vf0);
  }
  auVar3 = _vmul(in_vf0,in_vf0);
  if (((in_t5 & 0x20) != 0) && (_vnop(), (in_t0 & 0x44) == 0)) {
    _vnop();
    _vadda(0,in_vf26,in_vf0);
    if ((in_t3 & 0x44) == 0) {
      _vnop();
      _vmaddabc(in_vf29,in_vf17);
    }
    if ((in_t4 & 0x44) == 0) {
      _vnop();
      _vmaddabc(in_vf21,in_vf18);
    }
    auVar3 = _vmadd(in_vf0,in_vf0);
    _vnop();
    _vnop();
    _vnop();
    auVar3 = _vmulbc(auVar3,in_vf15);
    _vnop();
    _vnop();
    _vnop();
    auVar3 = _vminibc(auVar3,in_vf0);
  }
  auVar1 = _vmul(in_vf0,in_vf0);
  if (((in_t5 & 0x40) != 0) && (_vnop(), (in_t0 & 0x22) == 0)) {
    _vnop();
    _vadda(0,in_vf27,in_vf0);
    if ((in_t3 & 0x22) == 0) {
      _vnop();
      _vmaddabc(in_vf30,in_vf17);
    }
    if ((in_t4 & 0x22) == 0) {
      _vnop();
      _vmaddabc(in_vf22,in_vf18);
    }
    auVar1 = _vmadd(in_vf0,in_vf0);
    _vnop();
    _vnop();
    _vnop();
    auVar1 = _vmulbc(auVar1,in_vf15);
    _vnop();
    _vnop();
    _vnop();
    auVar1 = _vminibc(auVar1,in_vf0);
  }
  _vadda(0,auVar2,auVar3);
  auVar2 = _vmadd(in_vf1,auVar1);
  _vnop();
  _vnop();
  _vnop();
  auVar2 = _vminibc(auVar2,in_vf0);
  _vnop();
  _vnop();
  _vnop();
  auVar2 = _sqc2(auVar2);
  *(undefined (*) [16])vDestColor = auVar2;
  return;
}

void _Vu0CalcVertexColorSpotLightConstant(float *vDestColor) {
  code *pcVar1;
  G3DVU1MEMLAYOUT *pGVar2;
  G3DVU1MEMLAYOUT *pGVar3;
  G3DCOREOBJECT *pGVar4;
  uint uVar5;
  
  if (s_pObject->auiGlobalState[1] < 3) {
    uVar5 = s_pObject->auiGlobalState[1];
  }
  else {
    _SetLineInfo__FPCciT0T0
              ("g3dCore.c",0x94,"_CalcColor",
               "s_pObject->auiGlobalState[ G3DGS_LIGHTINGTYPE ] < NUM_G3DLIGHTINGTYPE");
    g3ddbgAssert__FbPCce(s_pObject->auiGlobalState[1] < 3,"memory illegal access occured");
    uVar5 = s_pObject->auiGlobalState[1];
  }
  pGVar4 = s_pObject;
  pGVar2 = &s_pObject->Vu1Mem;
  pGVar3 = &s_pObject->Vu1Mem;
  (*(code *)s_apfLoadMaterial[uVar5])((undefined *)((int)&s_pObject->Vu1Mem + 0x460));
  pcVar1 = (code *)s_apfCalcColorData[uVar5];
  (*pcVar1)((undefined *)((int)pGVar2 + 0x180),(undefined *)((int)pGVar3 + 0x530));
  (*pcVar1)((undefined *)((int)&pGVar4->Vu1Mem + 0x210),(undefined *)((int)&pGVar4->Vu1Mem + 0x5c0))
  ;
  (*pcVar1)((undefined *)((int)&pGVar4->Vu1Mem + 0x2a0),(undefined *)((int)&pGVar4->Vu1Mem + 0x650))
  ;
  return;
}

void _Vu0CalcVertexColorSpotLightLambert(float *vDestColor) {
  code *pcVar1;
  G3DVU1MEMLAYOUT *pGVar2;
  G3DVU1MEMLAYOUT *pGVar3;
  G3DCOREOBJECT *pGVar4;
  uint uVar5;
  
  if (s_pObject->auiGlobalState[1] < 3) {
    uVar5 = s_pObject->auiGlobalState[1];
  }
  else {
    _SetLineInfo__FPCciT0T0
              ("g3dCore.c",0x94,"_CalcColor",
               "s_pObject->auiGlobalState[ G3DGS_LIGHTINGTYPE ] < NUM_G3DLIGHTINGTYPE");
    g3ddbgAssert__FbPCce(s_pObject->auiGlobalState[1] < 3,"memory illegal access occured");
    uVar5 = s_pObject->auiGlobalState[1];
  }
  pGVar4 = s_pObject;
  pGVar2 = &s_pObject->Vu1Mem;
  pGVar3 = &s_pObject->Vu1Mem;
  (*(code *)s_apfLoadMaterial[uVar5])((undefined *)((int)&s_pObject->Vu1Mem + 0x460));
  pcVar1 = (code *)s_apfCalcColorData[uVar5];
  (*pcVar1)((undefined *)((int)pGVar2 + 0x180),(undefined *)((int)pGVar3 + 0x530));
  (*pcVar1)((undefined *)((int)&pGVar4->Vu1Mem + 0x210),(undefined *)((int)&pGVar4->Vu1Mem + 0x5c0))
  ;
  (*pcVar1)((undefined *)((int)&pGVar4->Vu1Mem + 0x2a0),(undefined *)((int)&pGVar4->Vu1Mem + 0x650))
  ;
  return;
}

void _Vu0CalcVertexColorSpotLightPhong(float *vDestColor) {
  code *pcVar1;
  G3DVU1MEMLAYOUT *pGVar2;
  G3DVU1MEMLAYOUT *pGVar3;
  G3DCOREOBJECT *pGVar4;
  uint uVar5;
  
  if (s_pObject->auiGlobalState[1] < 3) {
    uVar5 = s_pObject->auiGlobalState[1];
  }
  else {
    _SetLineInfo__FPCciT0T0
              ("g3dCore.c",0x94,"_CalcColor",
               "s_pObject->auiGlobalState[ G3DGS_LIGHTINGTYPE ] < NUM_G3DLIGHTINGTYPE");
    g3ddbgAssert__FbPCce(s_pObject->auiGlobalState[1] < 3,"memory illegal access occured");
    uVar5 = s_pObject->auiGlobalState[1];
  }
  pGVar4 = s_pObject;
  pGVar2 = &s_pObject->Vu1Mem;
  pGVar3 = &s_pObject->Vu1Mem;
  (*(code *)s_apfLoadMaterial[uVar5])((undefined *)((int)&s_pObject->Vu1Mem + 0x460));
  pcVar1 = (code *)s_apfCalcColorData[uVar5];
  (*pcVar1)((undefined *)((int)pGVar2 + 0x180),(undefined *)((int)pGVar3 + 0x530));
  (*pcVar1)((undefined *)((int)&pGVar4->Vu1Mem + 0x210),(undefined *)((int)&pGVar4->Vu1Mem + 0x5c0))
  ;
  (*pcVar1)((undefined *)((int)&pGVar4->Vu1Mem + 0x2a0),(undefined *)((int)&pGVar4->Vu1Mem + 0x650))
  ;
  return;
}
