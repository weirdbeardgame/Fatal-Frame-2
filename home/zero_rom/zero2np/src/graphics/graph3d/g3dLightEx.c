// STATUS: NOT STARTED

#include "g3dLightEx.h"

typedef int (*LPFUNC_ISBBLIGHTINGUP)(/* parameters unknown */);

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3b2968;
	
  LIGHTCOMPAREDATA __value;
  LIGHTCOMPAREDATA __val;
  
  g3ddbgAssert__FbPCce(false,str_825);
  return;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    __push_heap__H4ZP16LIGHTCOMPAREDATAZiZ16LIGHTCOMPAREDATAZQ216LIGHTCOMPAREDATA7greater_X01X11X11X21X31_v
              ((LIGHTCOMPAREDATA *)s_void__003f0cc8,(LIGHTCOMPAREDATA *)_max,SUB41(v,0));
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    __push_heap__H4ZP16LIGHTCOMPAREDATAZiZ16LIGHTCOMPAREDATAZQ216LIGHTCOMPAREDATA7greater_X01X11X11X21X31_v
              ((LIGHTCOMPAREDATA *)s_char__003f0cd0,(LIGHTCOMPAREDATA *)_max,SUB41(v,0));
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    __push_heap__H4ZP16LIGHTCOMPAREDATAZiZ16LIGHTCOMPAREDATAZQ216LIGHTCOMPAREDATA7greater_X01X11X11X21X31_v
              ((LIGHTCOMPAREDATA *)"unsigned int*",(LIGHTCOMPAREDATA *)_max,SUB41(v,0));
  }
  return (uint **)0x0;
}

static int _IsBBLightingupSpot(G3DLIGHT *pLight, float *avBB[4]) {
	static char __FUNCTION__[20] = {
		/* [0] = */ 95,
		/* [1] = */ 73,
		/* [2] = */ 115,
		/* [3] = */ 66,
		/* [4] = */ 66,
		/* [5] = */ 76,
		/* [6] = */ 105,
		/* [7] = */ 103,
		/* [8] = */ 104,
		/* [9] = */ 116,
		/* [10] = */ 105,
		/* [11] = */ 110,
		/* [12] = */ 103,
		/* [13] = */ 117,
		/* [14] = */ 112,
		/* [15] = */ 83,
		/* [16] = */ 112,
		/* [17] = */ 111,
		/* [18] = */ 116,
		/* [19] = */ 0
	};
	float plane[4];
	float *pv;
	float fAllowableError;
	int i;
	
  undefined in_vf1 [16];
  undefined auVar1 [16];
  float plane [4];
  
                    /* inlined from g3dxVu0.h */
                    /* end of inlined section */
                    /* inlined from g3dxVu0.h */
  auVar1 = _lqc2(*(undefined (*) [16])pLight->vDirection);
  auVar1 = _vmul(auVar1,auVar1);
  _vaddabc(auVar1,auVar1);
  _vmaddbc(in_vf1,auVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

static int _IsBBLightingupPoint(G3DLIGHT *pLight, float *avBB[4]) {
  return 1;
}

static void _ConvertEmulateDirectionallightDataToG3DLIGHT(G3DLIGHT *pDest, G3D_EMULATE_DIRECTIONALLIGHT_DATA *pEDD) {
  float fVar1;
  float fVar2;
  float fVar3;
  undefined in_vf0 [16];
  undefined extraout_vf1 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined4 uVar6;
  
  g3dutilSetLightDefault__FP8G3DLIGHT12G3DLIGHTTYPE(pDest,G3DLIGHT_DIRECTIONAL);
                    /* inlined from g3dxVu0.h */
  fVar1 = (pEDD->vDiffuse).y;
  fVar2 = (pEDD->vDiffuse).z;
  fVar3 = (pEDD->vDiffuse).w;
  pDest->vDiffuse[0] = (pEDD->vDiffuse).x;
  pDest->vDiffuse[1] = fVar1;
  pDest->vDiffuse[2] = fVar2;
  pDest->vDiffuse[3] = fVar3;
  auVar4 = _lqc2((undefined  [16])pEDD->vDirection);
  auVar5 = _vmul(auVar4,auVar4);
  _vnop();
  _vnop();
  _vnop();
  _vaddabc(auVar5,auVar5);
  auVar5 = _vmaddbc(extraout_vf1,auVar5);
  _vnop();
  _vnop();
  _vnop();
  uVar6 = _vrsqrt(in_vf0,auVar5);
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
  auVar4 = _vmulq(auVar4,uVar6);
  auVar4 = _sqc2(auVar4);
  *(undefined (*) [16])pDest->vDirection = auVar4;
                    /* end of inlined section */
  pDest->Type = G3DLIGHT_DIRECTIONAL;
  return;
}

static void _BlendEmulatedDirectionalLight(G3D_EMULATE_DIRECTIONALLIGHT_DATA *pDest, G3D_EMULATE_DIRECTIONALLIGHT_DATA *pSrc0, G3D_EMULATE_DIRECTIONALLIGHT_DATA *pSrc1) {
	float fTotal;
	float fRatioSrc0;
	
  XVECTOR XVar1;
  undefined8 uVar2;
  float fVar3;
  XVECTOR *pXVar4;
  float fVar5;
  float fVar6;
  undefined in_vf0 [16];
  undefined in_vf1 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined4 uVar11;
  
  fVar3 = g_xv0000.w;
  fVar5 = g_xv0000.z;
  fVar6 = pSrc0->fLength + pSrc1->fLength;
  if (0.0 < fVar6) {
    fVar5 = pSrc0->fLength / fVar6;
                    /* inlined from g3dxVu0.h */
    auVar7 = _lqc2((undefined  [16])pSrc0->vDiffuse);
    auVar8 = _lqc2((undefined  [16])pSrc0->vDiffuse);
    auVar9 = _qmtc2(fVar5);
    _vmove(auVar7);
    auVar10 = _vaddbc(in_vf0,in_vf0);
    auVar10 = _vsub(auVar10,auVar9);
    _vmulabc(auVar7,auVar9);
    auVar7 = _vmaddbc(auVar8,auVar10);
    XVar1 = (XVECTOR)_sqc2(auVar7);
    pDest->vDiffuse = XVar1;
    pXVar4 = &pDest->vDirection;
    auVar7 = _lqc2((undefined  [16])pSrc0->vDirection);
    auVar8 = _lqc2((undefined  [16])pSrc0->vDirection);
    auVar9 = _qmtc2(1.0 - fVar5);
    _vmove(auVar7);
    auVar10 = _vaddbc(in_vf0,in_vf0);
    auVar10 = _vsub(auVar10,auVar9);
    _vmulabc(auVar7,auVar9);
    auVar7 = _vmaddbc(auVar8,auVar10);
    XVar1 = (XVECTOR)_sqc2(auVar7);
    *pXVar4 = XVar1;
    auVar7 = _lqc2((undefined  [16])*pXVar4);
    auVar8 = _vmul(auVar7,auVar7);
    _vnop();
    _vnop();
    _vnop();
    _vaddabc(auVar8,auVar8);
    auVar8 = _vmaddbc(in_vf1,auVar8);
    _vnop();
    _vnop();
    _vnop();
    uVar11 = _vrsqrt(in_vf0,auVar8);
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
    auVar7 = _vmulq(auVar7,uVar11);
    XVar1 = (XVECTOR)_sqc2(auVar7);
    *pXVar4 = XVar1;
                    /* end of inlined section */
    pDest->fLength = fVar6 * fVar5;
    return;
  }
  fVar6 = g_xv0000.y;
  (pDest->vDiffuse).x = g_xv0000.x;
  (pDest->vDiffuse).y = fVar6;
                    /* inlined from g3dxVu0.h */
  (pDest->vDiffuse).z = fVar5;
  (pDest->vDiffuse).w = fVar3;
  fVar3 = g_xv0000.w;
  fVar5 = g_xv0000.z;
  uVar2 = g_xv0000._0_8_;
  (pDest->vDirection).x = (float)g_xv0000._0_8_;
  (pDest->vDirection).y = SUB84(uVar2,4);
  (pDest->vDirection).z = fVar5;
  (pDest->vDirection).w = fVar3;
                    /* end of inlined section */
  return;
}

static void _BlendEmulatedDirectionalLight(G3D_EMULATE_DIRECTIONALLIGHT_DATA *pDest, G3D_EMULATE_DIRECTIONALLIGHT_DATA *aSrc, int iNumSrc) {
	static char __FUNCTION__[31] = {
		/* [0] = */ 95,
		/* [1] = */ 66,
		/* [2] = */ 108,
		/* [3] = */ 101,
		/* [4] = */ 110,
		/* [5] = */ 100,
		/* [6] = */ 69,
		/* [7] = */ 109,
		/* [8] = */ 117,
		/* [9] = */ 108,
		/* [10] = */ 97,
		/* [11] = */ 116,
		/* [12] = */ 101,
		/* [13] = */ 100,
		/* [14] = */ 68,
		/* [15] = */ 105,
		/* [16] = */ 114,
		/* [17] = */ 101,
		/* [18] = */ 99,
		/* [19] = */ 116,
		/* [20] = */ 105,
		/* [21] = */ 111,
		/* [22] = */ 110,
		/* [23] = */ 97,
		/* [24] = */ 108,
		/* [25] = */ 76,
		/* [26] = */ 105,
		/* [27] = */ 103,
		/* [28] = */ 104,
		/* [29] = */ 116,
		/* [30] = */ 0
	};
	float fTotal;
	float vDestWork[4];
	int i;
	int i;
	int i;
	
  XVECTOR XVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  undefined in_vf0 [16];
  undefined extraout_vf1 [16];
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined auVar11 [16];
  undefined4 uVar12;
  float vDestWork [4];
  
  if (6 < iNumSrc) {
    _SetLineInfo__FPCciT0T0
              ("g3dLightEx.c",0xcf,"_BlendEmulatedDirectionalLight","G3D_MAX_BLENDLIGHT >= iNumSrc")
    ;
    g3ddbgAssert__FbPCce(false,&DAT_003f0cd8);
  }
  fVar4 = g_xv0000.w;
  fVar3 = g_xv0000.z;
  uVar2 = g_xv0000._0_8_;
  fVar8 = 0.0;
  if (0 < iNumSrc) {
    pfVar6 = &aSrc->fLength;
    iVar5 = iNumSrc;
    do {
      fVar7 = *pfVar6;
      pfVar6 = pfVar6 + 0xc;
      iVar5 = iVar5 + -1;
      fVar8 = fVar8 + fVar7;
    } while (iVar5 != 0);
  }
  if (0.0 < fVar8) {
    memset(vDestWork,0,0x10);
    for (iVar5 = 0; iVar5 < iNumSrc; iVar5 = iVar5 + 1) {
      auVar9 = _qmtc2(aSrc[iVar5].fLength);
      auVar10 = _lqc2((undefined  [16])aSrc[iVar5].vDiffuse);
      auVar11 = _lqc2((undefined  [16])vDestWork);
      _vmulabc(auVar10,auVar9);
      auVar9 = _vmaddbc(auVar11,in_vf0);
      vDestWork = (float  [4])_sqc2(auVar9);
    }
                    /* inlined from g3dxVu0.h */
    auVar11 = _lqc2((undefined  [16])vDestWork);
    auVar9 = _qmtc2(0);
    auVar10 = _qmtc2(0x3f800000);
    auVar9 = _vmaxbc(auVar11,auVar9);
    auVar9 = _vminibc(auVar9,auVar10);
    XVar1 = (XVECTOR)_sqc2(auVar9);
    pDest->vDiffuse = XVar1;
    vDestWork[2] = g_v0000[2];
    vDestWork[0] = g_v0000[0];
    vDestWork[1] = g_v0000[1];
    vDestWork[3] = g_v0000[3];
                    /* end of inlined section */
    iVar5 = iNumSrc;
    if (0 < iNumSrc) {
      do {
        auVar9 = _qmtc2(aSrc->fLength);
        auVar10 = _lqc2((undefined  [16])aSrc->vDirection);
        auVar11 = _lqc2((undefined  [16])vDestWork);
        _vmulabc(auVar10,auVar9);
        auVar9 = _vmaddbc(auVar11,in_vf0);
        vDestWork = (float  [4])_sqc2(auVar9);
        iVar5 = iVar5 + -1;
        aSrc = aSrc + 1;
      } while (iVar5 != 0);
    }
    auVar9 = _lqc2((undefined  [16])vDestWork);
    auVar10 = _vmul(auVar9,auVar9);
    _vnop();
    _vnop();
    _vnop();
    _vaddabc(auVar10,auVar10);
    auVar10 = _vmaddbc(extraout_vf1,auVar10);
    _vnop();
    _vnop();
    _vnop();
    uVar12 = _vrsqrt(in_vf0,auVar10);
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
    auVar9 = _vmulq(auVar9,uVar12);
    XVar1 = (XVECTOR)_sqc2(auVar9);
    pDest->vDirection = XVar1;
                    /* end of inlined section */
    pDest->fLength = fVar8 * (float)iNumSrc;
  }
  else {
                    /* inlined from g3dxVu0.h */
    (pDest->vDiffuse).x = (float)g_xv0000._0_8_;
    (pDest->vDiffuse).y = SUB84(uVar2,4);
    (pDest->vDiffuse).z = fVar3;
    (pDest->vDiffuse).w = fVar4;
    fVar4 = g_xv0000.w;
    fVar3 = g_xv0000.z;
    uVar2 = g_xv0000._0_8_;
    (pDest->vDirection).x = (float)g_xv0000._0_8_;
    (pDest->vDirection).y = SUB84(uVar2,4);
    (pDest->vDirection).z = fVar3;
    (pDest->vDirection).w = fVar4;
                    /* end of inlined section */
    pDest->fLength = 0.0;
  }
  return;
}

void gra3dSetLightIntens(G3DLIGHT *pLight, float fIntens) {
	static char __FUNCTION__[20] = {
		/* [0] = */ 103,
		/* [1] = */ 114,
		/* [2] = */ 97,
		/* [3] = */ 51,
		/* [4] = */ 100,
		/* [5] = */ 83,
		/* [6] = */ 101,
		/* [7] = */ 116,
		/* [8] = */ 76,
		/* [9] = */ 105,
		/* [10] = */ 103,
		/* [11] = */ 104,
		/* [12] = */ 116,
		/* [13] = */ 73,
		/* [14] = */ 110,
		/* [15] = */ 116,
		/* [16] = */ 101,
		/* [17] = */ 110,
		/* [18] = */ 115,
		/* [19] = */ 0
	};
	
  bool b;
  float fVar1;
  
  pLight->afPad0[0] = fIntens;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_relops.h */
  if (pLight->Type == G3DLIGHT_SPOT) {
                    /* end of inlined section */
    fVar1 = 0.0;
    if ((fIntens < 0.0) || (1.0 < fIntens)) {
      b = false;
      _SetLineInfo__FPCciT0T0
                ("g3dLightEx.c",0x11b,"gra3dSetLightIntens","0.0f <= fIntens && fIntens <= 1.0f");
      if ((fVar1 <= fIntens) && (fIntens <= 1.0)) {
        b = true;
      }
      g3ddbgWarning__FbPCce(b,&DAT_003b2ae8);
    }
                    /* inlined from g3dUtil.h */
                    /* end of inlined section */
                    /* inlined from g3dUtil.h */
    fVar1 = ((fIntens - 0.0) * -90.0 + 90.0) * DAT_003ee37c;
                    /* end of inlined section */
                    /* inlined from g3dUtil.h */
    pLight->fAngleOutside = fVar1;
                    /* end of inlined section */
    pLight->fAngleInside = fVar1 * 0.5;
  }
  return;
}

void g3dEmulateDirectionalLight(G3D_EMULATE_DIRECTIONALLIGHT_DATA *pEDD, G3DLIGHT *pLight, float *vPos) {
	static char __FUNCTION__[27] = {
		/* [0] = */ 103,
		/* [1] = */ 51,
		/* [2] = */ 100,
		/* [3] = */ 69,
		/* [4] = */ 109,
		/* [5] = */ 117,
		/* [6] = */ 108,
		/* [7] = */ 97,
		/* [8] = */ 116,
		/* [9] = */ 101,
		/* [10] = */ 68,
		/* [11] = */ 105,
		/* [12] = */ 114,
		/* [13] = */ 101,
		/* [14] = */ 99,
		/* [15] = */ 116,
		/* [16] = */ 105,
		/* [17] = */ 111,
		/* [18] = */ 110,
		/* [19] = */ 97,
		/* [20] = */ 108,
		/* [21] = */ 76,
		/* [22] = */ 105,
		/* [23] = */ 103,
		/* [24] = */ 104,
		/* [25] = */ 116,
		/* [26] = */ 0
	};
	
  G3DLIGHTTYPE GVar1;
  XVECTOR XVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  undefined in_vf0 [16];
  undefined in_vf1 [16];
  undefined extraout_vf1 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined4 uVar8;
  
  if (pLight == (G3DLIGHT *)0x0) {
    _SetLineInfo__FPCciT0T0("g3dLightEx.c",0x13a,"g3dEmulateDirectionalLight",s_pLight_003f0ce0);
    g3ddbgAssert__FbPCce(false,&DAT_003f0cd8);
    in_vf1 = extraout_vf1;
  }
  GVar1 = pLight->Type;
  if (GVar1 != G3DLIGHT_POINT) {
    if ((int)GVar1 < 2) {
      if (GVar1 == G3DLIGHT_DIRECTIONAL) {
                    /* inlined from g3dxVu0.h */
        uVar3 = *(undefined8 *)pLight->vDirection;
        fVar5 = pLight->vDirection[2];
        fVar4 = pLight->vDirection[3];
        (pEDD->vDirection).x = (float)uVar3;
        (pEDD->vDirection).y = (float)((ulong)uVar3 >> 0x20);
        (pEDD->vDirection).z = fVar5;
        (pEDD->vDirection).w = fVar4;
        uVar3 = *(undefined8 *)pLight->vDiffuse;
                    /* inlined from xvector.h */
                    /* inlined from g3dxVu0.h */
        fVar5 = pLight->vDiffuse[2];
        fVar4 = pLight->vDiffuse[3];
        (pEDD->vDiffuse).x = (float)uVar3;
        (pEDD->vDiffuse).y = (float)((ulong)uVar3 >> 0x20);
        (pEDD->vDiffuse).z = fVar5;
        (pEDD->vDiffuse).w = fVar4;
                    /* end of inlined section */
        pEDD->fLength = 1.0;
        return;
      }
    }
    else if (GVar1 == G3DLIGHT_SPOT) {
                    /* inlined from g3dxVu0.h */
      auVar6 = _lqc2(*(undefined (*) [16])pLight->vPosition);
      auVar7 = _lqc2(*(undefined (*) [16])vPos);
      auVar6 = _vsub(auVar6,auVar7);
      auVar7 = _vmul(auVar6,auVar6);
      _vaddabc(auVar7,auVar7);
      auVar7 = _vmaddbc(in_vf1,auVar7);
      _vnop();
      _vnop();
      _vnop();
      _vrsqrt(in_vf0,auVar7);
      _vmul(auVar6,in_vf0);
      uVar8 = _vwaitq();
      auVar6 = _vmulq(auVar6,uVar8);
      XVar2 = (XVECTOR)_sqc2(auVar6);
      pEDD->vDirection = XVar2;
                    /* end of inlined section */
      fVar5 = g3dCalcLightDistanceAttenuation__FPC8G3DLIGHTPCf(pLight,vPos);
      pEDD->fLength = fVar5;
      if (pLight->fFalloff != 1.0) {
        _SetLineInfo__FPCciT0T0
                  ("g3dLightEx.c",0x162,"g3dEmulateDirectionalLight","pLight->fFalloff == 1.0f");
        g3ddbgAssert__FbPCce(pLight->fFalloff == 1.0,&DAT_003f0cd8);
      }
      fVar5 = g3dCalcSpotlightFalloff__FPC8G3DLIGHTPCf(pLight,vPos);
      fVar5 = pEDD->fLength * fVar5;
      pEDD->fLength = fVar5;
                    /* inlined from g3dxVu0.h */
      auVar7 = _qmtc2(fVar5);
      auVar6 = _lqc2(*(undefined (*) [16])pLight->vDiffuse);
      auVar6 = _vmulbc(auVar6,auVar7);
      XVar2 = (XVECTOR)_sqc2(auVar6);
      pEDD->vDiffuse = XVar2;
      return;
    }
    _SetLineInfo__FPCciT0T0("g3dLightEx.c",0x16a,"g3dEmulateDirectionalLight",&DAT_003f0ce8);
    g3ddbgAssert__FbPCce(false,&DAT_003f0cd8);
    return;
  }
                    /* inlined from g3dxVu0.h */
  auVar6 = _lqc2(*(undefined (*) [16])pLight->vPosition);
  auVar7 = _lqc2(*(undefined (*) [16])vPos);
  auVar6 = _vsub(auVar6,auVar7);
  auVar7 = _vmul(auVar6,auVar6);
  _vaddabc(auVar7,auVar7);
  auVar7 = _vmaddbc(in_vf1,auVar7);
  _vnop();
  _vnop();
  _vnop();
  _vrsqrt(in_vf0,auVar7);
  _vmul(auVar6,in_vf0);
  uVar8 = _vwaitq();
  auVar6 = _vmulq(auVar6,uVar8);
  XVar2 = (XVECTOR)_sqc2(auVar6);
  pEDD->vDirection = XVar2;
  auVar6 = _lqc2((undefined  [16])pEDD->vDirection);
  auVar6 = _vmul(auVar6,auVar6);
  _vaddabc(auVar6,auVar6);
  _vmaddbc(in_vf1,auVar6);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

float g3dCalcLightPower(G3DLIGHT *pLight, float *vPos) {
	G3D_EMULATE_DIRECTIONALLIGHT_DATA edd;
	
  undefined extraout_vf1 [16];
  undefined auVar1 [16];
  G3D_EMULATE_DIRECTIONALLIGHT_DATA edd;
  
  g3dEmulateDirectionalLight__FP33G3D_EMULATE_DIRECTIONALLIGHT_DATAPC8G3DLIGHTPCf(&edd,pLight,vPos);
                    /* inlined from g3dxVu0.h */
  auVar1 = _lqc2((undefined  [16])edd.vDiffuse);
  auVar1 = _vmul(auVar1,auVar1);
  _vaddabc(auVar1,auVar1);
  _vmaddbc(extraout_vf1,auVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

void gra3dEmulateDirectionalLight(G3DLIGHT *pDest, G3DLIGHT *pLight, G3DLIGHTTYPE iLightType, float *vPos) {
	G3D_EMULATE_DIRECTIONALLIGHT_DATA edd;
	
  G3D_EMULATE_DIRECTIONALLIGHT_DATA edd;
  
  g3dEmulateDirectionalLight__FP33G3D_EMULATE_DIRECTIONALLIGHT_DATAPC8G3DLIGHTPCf(&edd,pLight,vPos);
  _ConvertEmulateDirectionallightDataToG3DLIGHT__FP8G3DLIGHTPC33G3D_EMULATE_DIRECTIONALLIGHT_DATA
            (pDest,&edd);
  return;
}

void g3dGenerateDirectionalLightByEmulatedData(G3DLIGHT *aDest, G3D_EMULATE_DIRECTIONALLIGHT_DATA *aSrc, int iNumEmulated) {
	static char __FUNCTION__[42] = {
		/* [0] = */ 103,
		/* [1] = */ 51,
		/* [2] = */ 100,
		/* [3] = */ 71,
		/* [4] = */ 101,
		/* [5] = */ 110,
		/* [6] = */ 101,
		/* [7] = */ 114,
		/* [8] = */ 97,
		/* [9] = */ 116,
		/* [10] = */ 101,
		/* [11] = */ 68,
		/* [12] = */ 105,
		/* [13] = */ 114,
		/* [14] = */ 101,
		/* [15] = */ 99,
		/* [16] = */ 116,
		/* [17] = */ 105,
		/* [18] = */ 111,
		/* [19] = */ 110,
		/* [20] = */ 97,
		/* [21] = */ 108,
		/* [22] = */ 76,
		/* [23] = */ 105,
		/* [24] = */ 103,
		/* [25] = */ 104,
		/* [26] = */ 116,
		/* [27] = */ 66,
		/* [28] = */ 121,
		/* [29] = */ 69,
		/* [30] = */ 109,
		/* [31] = */ 117,
		/* [32] = */ 108,
		/* [33] = */ 97,
		/* [34] = */ 116,
		/* [35] = */ 101,
		/* [36] = */ 100,
		/* [37] = */ 68,
		/* [38] = */ 97,
		/* [39] = */ 116,
		/* [40] = */ 97,
		/* [41] = */ 0
	};
	G3D_EMULATE_DIRECTIONALLIGHT_DATA aTop[3];
	int i;
	int i;
	float afCos[3];
	float *pfMax;
	int iIndex;
	int iIndex2;
	int j;
	int i;
	G3DLIGHT &rLight;
	G3D_EMULATE_DIRECTIONALLIGHT_DATA &rEmuDirLight;
	
  bool bVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  XVECTOR *pXVar5;
  float *pfVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  G3D_EMULATE_DIRECTIONALLIGHT_DATA *pGVar11;
  G3DLIGHT *pDest;
  int iVar12;
  uint uVar13;
  int iVar14;
  XVECTOR *pXVar15;
  int iVar16;
  undefined in_vf1 [16];
  undefined extraout_vf1 [16];
  undefined extraout_vf1_00 [16];
  undefined extraout_vf1_01 [16];
  undefined auVar17 [16];
  undefined auVar18 [16];
  G3D_EMULATE_DIRECTIONALLIGHT_DATA aTop [3];
  float afCos [3];
  undefined auStack_64 [4];
  G3DLIGHT *local_60;
  
  pGVar11 = aTop;
  iVar12 = 0;
  iVar14 = 0;
  local_60 = aDest;
  do {
    bVar1 = iVar12 < iNumEmulated;
    iVar12 = iVar12 + 1;
    if (bVar1) {
      puVar2 = (undefined8 *)((int)aSrc->aiPad + iVar14 + -0x24);
      uVar10 = puVar2[5];
      uVar4 = puVar2[1];
      uVar7 = puVar2[2];
      uVar8 = puVar2[3];
      uVar9 = puVar2[4];
      *(undefined8 *)pGVar11 = *puVar2;
      *(undefined8 *)((int)pGVar11 + 8) = uVar4;
      *(undefined8 *)((int)pGVar11 + 0x10) = uVar7;
      *(undefined8 *)((int)pGVar11 + 0x18) = uVar8;
      *(undefined8 *)((int)pGVar11 + 0x20) = uVar9;
      *(undefined8 *)((int)pGVar11 + 0x28) = uVar10;
    }
    else {
      memset(pGVar11,0,0x30);
      in_vf1 = extraout_vf1;
    }
    pGVar11 = (G3D_EMULATE_DIRECTIONALLIGHT_DATA *)((int)pGVar11 + 0x30);
    iVar14 = iVar14 + 0x30;
  } while (iVar12 < 3);
  iVar12 = 3;
  if (3 < iNumEmulated) {
    pGVar11 = aSrc + 3;
    pXVar15 = &aSrc[3].vDirection;
    do {
      pfVar6 = afCos;
      pXVar5 = &aSrc->vDirection;
      iVar14 = 2;
      do {
                    /* inlined from g3dxVu0.h */
        auVar17 = _lqc2((undefined  [16])*pXVar5);
        auVar18 = _lqc2((undefined  [16])*pXVar15);
        auVar17 = _vmul(auVar17,auVar18);
        _vaddabc(auVar17,auVar17);
        auVar17 = _vmaddbc(in_vf1,auVar17);
        auVar17 = _qmfc2(auVar17._0_4_);
                    /* end of inlined section */
        iVar14 = iVar14 + -1;
                    /* inlined from g3dxVu0.h */
        *pfVar6 = auVar17._0_4_;
                    /* end of inlined section */
        pXVar5 = pXVar5 + 3;
        pfVar6 = pfVar6 + 1;
      } while (-1 < iVar14);
      uVar4 = max_element__H1ZPf_X01X01_X01(afCos,auStack_64);
      in_vf1 = extraout_vf1_00;
      if (0.0 < *(float *)uVar4) {
        uVar13 = (uint)((int)(float *)uVar4 - (int)afCos) >> 2;
        uVar3 = indexof__H1Zf_PCX01T0_i(afCos,uVar4);
        if (uVar3 != uVar13) {
          _SetLineInfo__FPCciT0T0
                    ("g3dLightEx.c",0x1b8,"g3dGenerateDirectionalLightByEmulatedData",
                     "iIndex2 == iIndex");
          g3ddbgAssert__FbPCce(uVar3 == uVar13,&DAT_003f0cd8);
        }
        if (2 < uVar13) {
          _SetLineInfo__FPCciT0T0
                    ("g3dLightEx.c",0x1ba,"g3dGenerateDirectionalLightByEmulatedData","iIndex < 3");
          g3ddbgAssert__FbPCce(false,&DAT_003f0cd8);
        }
        _BlendEmulatedDirectionalLight__FP33G3D_EMULATE_DIRECTIONALLIGHT_DATAPC33G3D_EMULATE_DIRECTIONALLIGHT_DATAT1
                  (aTop + uVar13,aTop + uVar13,pGVar11);
        in_vf1 = extraout_vf1_01;
      }
      iVar12 = iVar12 + 1;
      pGVar11 = pGVar11 + 1;
      pXVar15 = pXVar15 + 3;
    } while (iVar12 < iNumEmulated);
  }
  iVar12 = 0;
  iVar16 = 0;
  iVar14 = 0;
  do {
    bVar1 = iVar12 < iNumEmulated;
    iVar12 = iVar12 + 1;
    pDest = (G3DLIGHT *)((int)local_60->vDiffuse + iVar14);
    iVar14 = iVar14 + 0x70;
    if (bVar1) {
      _ConvertEmulateDirectionallightDataToG3DLIGHT__FP8G3DLIGHTPC33G3D_EMULATE_DIRECTIONALLIGHT_DATA
                (pDest,(G3D_EMULATE_DIRECTIONALLIGHT_DATA *)((int)aTop[0].aiPad + iVar16 + -0x24));
    }
    else {
      g3dutilSetLightDefault__FP8G3DLIGHT12G3DLIGHTTYPE(pDest,G3DLIGHT_DIRECTIONAL);
      pDest->Type = G3DLIGHT_DIRECTIONAL;
    }
    iVar16 = iVar16 + 0x30;
  } while (iVar12 < 3);
  return;
}

int g3dIsBBLightingup(G3DLIGHT *pLight, float *avBB[4]) {
	static char __FUNCTION__[18] = {
		/* [0] = */ 103,
		/* [1] = */ 51,
		/* [2] = */ 100,
		/* [3] = */ 73,
		/* [4] = */ 115,
		/* [5] = */ 66,
		/* [6] = */ 66,
		/* [7] = */ 76,
		/* [8] = */ 105,
		/* [9] = */ 103,
		/* [10] = */ 104,
		/* [11] = */ 116,
		/* [12] = */ 105,
		/* [13] = */ 110,
		/* [14] = */ 103,
		/* [15] = */ 117,
		/* [16] = */ 112,
		/* [17] = */ 0
	};
	LPFUNC_ISBBLIGHTINGUP aFunc[3];
	LPFUNC_ISBBLIGHTINGUP pFunc;
	
  uint uVar1;
  ulong *puVar2;
  int iVar3;
  G3DLIGHTTYPE GVar4;
  G3DLIGHTTYPE *pGVar5;
  undefined1 *aFunc [3];
  
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_relops.h */
                    /* end of inlined section */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_relops.h */
  pGVar5 = &pLight->Type;
  GVar4 = *pGVar5;
                    /* end of inlined section */
  uVar1 = (int)aFunc + 7U & 7;
  puVar2 = (ulong *)(((int)aFunc + 7U) - uVar1);
  *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | DAT_003b2c10 >> (7 - uVar1) * 8;
  aFunc._0_8_ = DAT_003b2c10;
  aFunc[2] = PTR__IsBBLightingupSpot__FPC8G3DLIGHTPA3_Cf_003b2c18;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_relops.h */
  if (GVar4 == G3DLIGHTTYPE_FORCE_DWORD) {
                    /* end of inlined section */
    _SetLineInfo__FPCciT0T0
              ("g3dLightEx.c",0x1de,"g3dIsBBLightingup","pLight->Type != INVALID_G3DLIGHTTYPE");
    g3ddbgAssert__FbPCce(*pGVar5 != G3DLIGHTTYPE_FORCE_DWORD,&DAT_003f0cd8);
    GVar4 = *pGVar5;
  }
  if (2 < (int)GVar4) {
    _SetLineInfo__FPCciT0T0
              ("g3dLightEx.c",0x1df,"g3dIsBBLightingup","pLight->Type < NUM_G3DLIGHTTYPE");
    g3ddbgAssert__FbPCce((int)*pGVar5 < 3,"pLight->Type : %d");
    GVar4 = *pGVar5;
  }
  iVar3 = 1;
  if ((code *)aFunc[GVar4] != (code *)0x0) {
    iVar3 = (*(code *)aFunc[GVar4])(pLight,avBB);
  }
  return iVar3;
}

void g3dSortLightForBoundingBoxByPowerOrder(int iNum, LIGHTCOMPAREDATA *aCD, G3DLIGHT **apLightSrc, float *avBB[4]) {
	static char __FUNCTION__[39] = {
		/* [0] = */ 103,
		/* [1] = */ 51,
		/* [2] = */ 100,
		/* [3] = */ 83,
		/* [4] = */ 111,
		/* [5] = */ 114,
		/* [6] = */ 116,
		/* [7] = */ 76,
		/* [8] = */ 105,
		/* [9] = */ 103,
		/* [10] = */ 104,
		/* [11] = */ 116,
		/* [12] = */ 70,
		/* [13] = */ 111,
		/* [14] = */ 114,
		/* [15] = */ 66,
		/* [16] = */ 111,
		/* [17] = */ 117,
		/* [18] = */ 110,
		/* [19] = */ 100,
		/* [20] = */ 105,
		/* [21] = */ 110,
		/* [22] = */ 103,
		/* [23] = */ 66,
		/* [24] = */ 111,
		/* [25] = */ 120,
		/* [26] = */ 66,
		/* [27] = */ 121,
		/* [28] = */ 80,
		/* [29] = */ 111,
		/* [30] = */ 119,
		/* [31] = */ 101,
		/* [32] = */ 114,
		/* [33] = */ 79,
		/* [34] = */ 114,
		/* [35] = */ 100,
		/* [36] = */ 101,
		/* [37] = */ 114,
		/* [38] = */ 0
	};
	G3DLIGHTTYPE lt;
	int i;
	G3DLIGHT *pL;
	float colscale;
	float spower;
	LIGHTCOMPAREDATA *__first;
	LIGHTCOMPAREDATA *__last;
	greater __comp;
	
  G3DLIGHTTYPE GVar1;
  G3DLIGHT *pLight;
  int iVar2;
  LIGHTCOMPAREDATA *pLVar3;
  int iVar4;
  undefined extraout_vf1 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  LIGHTCOMPAREDATA *__first;
  greater__2_1770 __comp;
  
  iVar4 = 0;
  GVar1 = (*apLightSrc)->Type;
  if (0 < iNum) {
    pLVar3 = aCD;
    do {
      pLight = *apLightSrc;
      if (pLight->Type != GVar1) {
        _SetLineInfo__FPCciT0T0
                  ("g3dLightEx.c",0x202,"g3dSortLightForBoundingBoxByPowerOrder","pL->Type == lt");
        g3ddbgAssert__FbPCce(pLight->Type == GVar1,&DAT_003b2cb8);
      }
      pLVar3->iIndex = iVar4;
      pLVar3->fPower = 0.0;
      pLVar3->pLight = (G3DLIGHT *)0x0;
      if ((pLight != (G3DLIGHT *)0x0) &&
         (iVar2 = g3dIsBBLightingup__FPC8G3DLIGHTPA3_Cf(pLight,avBB), iVar2 != 0)) {
                    /* inlined from g3dxVu0.h */
        auVar5 = _lqc2(*(undefined (*) [16])pLight->vDiffuse);
        _vaddabc(auVar5,auVar5);
        auVar5 = _vmaddbc(extraout_vf1,auVar5);
        _qmfc2(auVar5._0_4_);
        auVar5 = _lqc2(*(undefined (*) [16])pLight->vPosition);
        auVar6 = _lqc2((undefined  [16])avBB[8]);
        auVar5 = _vsub(auVar5,auVar6);
        auVar5 = _vmul(auVar5,auVar5);
        _vaddabc(auVar5,auVar5);
        _vmaddbc(extraout_vf1,auVar5);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      iVar4 = iVar4 + 1;
      pLVar3 = pLVar3 + 1;
      apLightSrc = apLightSrc + 1;
    } while (iVar4 < iNum);
  }
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_algo.h */
  pLVar3 = aCD + iNum;
  if (aCD != pLVar3) {
    iVar2 = 0;
    for (iVar4 = ((int)pLVar3 - (int)aCD >> 2) * -0x55555555; iVar4 != 1; iVar4 = iVar4 >> 1) {
      iVar2 = iVar2 + 1;
    }
    __introsort_loop__H4ZP16LIGHTCOMPAREDATAZ16LIGHTCOMPAREDATAZiZQ216LIGHTCOMPAREDATA7greater_X01X01PX11X21X31_v
              (aCD,pLVar3,0,iVar2 << 1,0);
    __final_insertion_sort__H2ZP16LIGHTCOMPAREDATAZQ216LIGHTCOMPAREDATA7greater_X01X01X11_v
              (aCD,pLVar3,0);
  }
  return;
}

void g3dBlendLight(G3DLIGHT *pLight, G3DLIGHT **apSrc, int iNumSrc, float *vTarget) {
	static char __FUNCTION__[14] = {
		/* [0] = */ 103,
		/* [1] = */ 51,
		/* [2] = */ 100,
		/* [3] = */ 66,
		/* [4] = */ 108,
		/* [5] = */ 101,
		/* [6] = */ 110,
		/* [7] = */ 100,
		/* [8] = */ 76,
		/* [9] = */ 105,
		/* [10] = */ 103,
		/* [11] = */ 104,
		/* [12] = */ 116,
		/* [13] = */ 0
	};
	G3D_EMULATE_DIRECTIONALLIGHT_DATA EDDDest;
	G3D_EMULATE_DIRECTIONALLIGHT_DATA aEDDSrc[6];
	int i;
	
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  G3D_EMULATE_DIRECTIONALLIGHT_DATA *pEDD;
  int iVar5;
  float *pfVar6;
  G3D_EMULATE_DIRECTIONALLIGHT_DATA EDDDest;
  G3D_EMULATE_DIRECTIONALLIGHT_DATA aEDDSrc [6];
  
  if (6 < iNumSrc) {
    _SetLineInfo__FPCciT0T0("g3dLightEx.c",0x237,"g3dBlendLight","G3D_MAX_BLENDLIGHT >= iNumSrc");
    g3ddbgAssert__FbPCce(false,&DAT_003f0cd8);
  }
                    /* end of inlined section */
  if (0 < iNumSrc) {
    pfVar6 = &aEDDSrc[0].fLength;
    iVar5 = iNumSrc;
    pEDD = aEDDSrc;
    do {
      if (*apSrc == (G3DLIGHT *)0x0) {
                    /* inlined from g3dxVu0.h */
        (pEDD->vDirection).x = (float)g_xv0000._0_8_;
        (pEDD->vDirection).y = SUB84(g_xv0000._0_8_,4);
        (pEDD->vDirection).z = g_xv0000.z;
        (pEDD->vDirection).w = g_xv0000.w;
        (pEDD->vDiffuse).x = (float)g_xv0000._0_8_;
        (pEDD->vDiffuse).y = SUB84(g_xv0000._0_8_,4);
        (pEDD->vDiffuse).z = g_xv0000.z;
        (pEDD->vDiffuse).w = g_xv0000.w;
                    /* end of inlined section */
        *pfVar6 = 0.0;
      }
      else {
        g3dEmulateDirectionalLight__FP33G3D_EMULATE_DIRECTIONALLIGHT_DATAPC8G3DLIGHTPCf
                  (pEDD,*apSrc,vTarget);
      }
      iVar5 = iVar5 + -1;
      pfVar6 = pfVar6 + 0xc;
      pEDD = pEDD + 1;
      apSrc = apSrc + 1;
    } while (iVar5 != 0);
  }
  _BlendEmulatedDirectionalLight__FP33G3D_EMULATE_DIRECTIONALLIGHT_DATAPC33G3D_EMULATE_DIRECTIONALLIGHT_DATAi
            (&EDDDest,aEDDSrc,iNumSrc);
  fVar3 = g_NullLight.vDiffuse[3];
  fVar2 = g_NullLight.vDiffuse[2];
  uVar1 = g_NullLight.vDiffuse._0_8_;
                    /* inlined from g3dLight.h */
  pLight->vDiffuse[0] = (float)g_NullLight.vDiffuse._0_8_;
  pLight->vDiffuse[1] = SUB84(uVar1,4);
  pLight->vDiffuse[2] = fVar2;
  pLight->vDiffuse[3] = fVar3;
  fVar4 = g_NullLight.vSpecular[3];
  fVar3 = g_NullLight.vSpecular[2];
  fVar2 = g_NullLight.vSpecular[1];
  pLight->vSpecular[0] = g_NullLight.vSpecular[0];
  pLight->vSpecular[1] = fVar2;
  pLight->vSpecular[2] = fVar3;
  pLight->vSpecular[3] = fVar4;
  fVar4 = g_NullLight.vAmbient[3];
  fVar3 = g_NullLight.vAmbient[2];
  fVar2 = g_NullLight.vAmbient[1];
  pLight->vAmbient[0] = g_NullLight.vAmbient[0];
  pLight->vAmbient[1] = fVar2;
  pLight->vAmbient[2] = fVar3;
  pLight->vAmbient[3] = fVar4;
  fVar4 = g_NullLight.vPosition[3];
  fVar3 = g_NullLight.vPosition[2];
  fVar2 = g_NullLight.vPosition[1];
  pLight->vPosition[0] = g_NullLight.vPosition[0];
  pLight->vPosition[1] = fVar2;
  pLight->vPosition[2] = fVar3;
  pLight->vPosition[3] = fVar4;
  fVar4 = g_NullLight.vDirection[3];
  fVar3 = g_NullLight.vDirection[2];
  fVar2 = g_NullLight.vDirection[1];
  pLight->vDirection[0] = g_NullLight.vDirection[0];
  pLight->vDirection[1] = fVar2;
  pLight->vDirection[2] = fVar3;
  pLight->vDirection[3] = fVar4;
  fVar4 = g_NullLight.fMaxRange;
  fVar3 = g_NullLight.fAngleOutside;
  fVar2 = g_NullLight.fAngleInside;
  pLight->Type = g_NullLight.Type;
  pLight->fAngleInside = fVar2;
  pLight->fAngleOutside = fVar3;
  pLight->fMaxRange = fVar4;
  fVar4 = g_NullLight.afPad0[1];
  fVar3 = g_NullLight.afPad0[0];
  fVar2 = g_NullLight.fFalloff;
  pLight->fMinRange = g_NullLight.fMinRange;
  pLight->fFalloff = fVar2;
  pLight->afPad0[0] = fVar3;
  pLight->afPad0[1] = fVar4;
                    /* inlined from g3dxVu0.h */
  pLight->vDiffuse[0] = (float)EDDDest.vDiffuse._0_8_;
  pLight->vDiffuse[1] = SUB84(EDDDest.vDiffuse._0_8_,4);
  pLight->vDiffuse[2] = EDDDest.vDiffuse.z;
  pLight->vDiffuse[3] = EDDDest.vDiffuse.w;
  pLight->vDirection[0] = (float)EDDDest.vDirection._0_8_;
  pLight->vDirection[1] = SUB84(EDDDest.vDirection._0_8_,4);
  pLight->vDirection[2] = EDDDest.vDirection.z;
  pLight->vDirection[3] = EDDDest.vDirection.w;
                    /* end of inlined section */
  pLight->Type = G3DLIGHT_DIRECTIONAL;
  return;
}

float* float * max_element<float *>(float *__first, float *__last) {
	float *__result;
	
  LIGHTCOMPAREDATA __value;
  LIGHTCOMPAREDATA __val;
  
  g3ddbgAssert__FbPCce(false,str_825);
  return;
}

int int indexof<float>(float *arraytop, float *obj) {
	static char __FUNCTION__[8] = {
		/* [0] = */ 105,
		/* [1] = */ 110,
		/* [2] = */ 100,
		/* [3] = */ 101,
		/* [4] = */ 120,
		/* [5] = */ 111,
		/* [6] = */ 102,
		/* [7] = */ 0
	};
	
  LIGHTCOMPAREDATA __value;
  LIGHTCOMPAREDATA __val;
  
  g3ddbgAssert__FbPCce(false,str_825);
  return;
}

void void __introsort_loop<LIGHTCOMPAREDATA *, LIGHTCOMPAREDATA, int, LIGHTCOMPAREDATA::greater>(LIGHTCOMPAREDATA *__first, LIGHTCOMPAREDATA *__last, int __depth_limit, greater __comp) {
	LIGHTCOMPAREDATA *__cut;
	LIGHTCOMPAREDATA &__b;
	LIGHTCOMPAREDATA &__c;
	greater __comp;
	
  LIGHTCOMPAREDATA __value;
  LIGHTCOMPAREDATA __val;
  
  g3ddbgAssert__FbPCce(false,str_825);
  return;
}

void void __final_insertion_sort<LIGHTCOMPAREDATA *, LIGHTCOMPAREDATA::greater>(LIGHTCOMPAREDATA *__first, LIGHTCOMPAREDATA *__last, greater __comp) {
  LIGHTCOMPAREDATA __value;
  LIGHTCOMPAREDATA __val;
  
  g3ddbgAssert__FbPCce(false,str_825);
  return;
}

LIGHTCOMPAREDATA* LIGHTCOMPAREDATA * __unguarded_partition<LIGHTCOMPAREDATA *, LIGHTCOMPAREDATA, LIGHTCOMPAREDATA::greater>(LIGHTCOMPAREDATA *__first, LIGHTCOMPAREDATA *__last, LIGHTCOMPAREDATA __pivot, greater __comp) {
  LIGHTCOMPAREDATA __value;
  LIGHTCOMPAREDATA __val;
  
  g3ddbgAssert__FbPCce(false,str_825);
  return;
}

void void __partial_sort<LIGHTCOMPAREDATA *, LIGHTCOMPAREDATA, LIGHTCOMPAREDATA::greater>(LIGHTCOMPAREDATA *__first, LIGHTCOMPAREDATA *__middle, LIGHTCOMPAREDATA *__last, greater __comp) {
	LIGHTCOMPAREDATA *__i;
	LIGHTCOMPAREDATA __value;
	greater __comp;
	
  LIGHTCOMPAREDATA __value;
  LIGHTCOMPAREDATA __val;
  
  g3ddbgAssert__FbPCce(false,str_825);
  return;
}

void void __insertion_sort<LIGHTCOMPAREDATA *, LIGHTCOMPAREDATA::greater>(LIGHTCOMPAREDATA *__first, LIGHTCOMPAREDATA *__last, greater __comp) {
	LIGHTCOMPAREDATA *__i;
	LIGHTCOMPAREDATA *__first;
	greater __comp;
	LIGHTCOMPAREDATA __val;
	LIGHTCOMPAREDATA *__last;
	LIGHTCOMPAREDATA *__result;
	ptrdiff_t __n;
	
  LIGHTCOMPAREDATA __value;
  LIGHTCOMPAREDATA __val;
  
  g3ddbgAssert__FbPCce(false,str_825);
  return;
}

void void __unguarded_insertion_sort_aux<LIGHTCOMPAREDATA *, LIGHTCOMPAREDATA, LIGHTCOMPAREDATA::greater>(LIGHTCOMPAREDATA *__first, LIGHTCOMPAREDATA *__last, greater __comp) {
	LIGHTCOMPAREDATA *__i;
	
  LIGHTCOMPAREDATA __value;
  LIGHTCOMPAREDATA __val;
  
  g3ddbgAssert__FbPCce(false,str_825);
  return;
}

void void sort_heap<LIGHTCOMPAREDATA *, LIGHTCOMPAREDATA::greater>(LIGHTCOMPAREDATA *__first, LIGHTCOMPAREDATA *__last, greater __comp) {
  LIGHTCOMPAREDATA __value;
  LIGHTCOMPAREDATA __val;
  
  g3ddbgAssert__FbPCce(false,str_825);
  return;
}

void void __make_heap<LIGHTCOMPAREDATA *, LIGHTCOMPAREDATA::greater, LIGHTCOMPAREDATA, int>(LIGHTCOMPAREDATA *__first, LIGHTCOMPAREDATA *__last, greater __comp) {
	ptrdiff_t __parent;
	
  LIGHTCOMPAREDATA __value;
  LIGHTCOMPAREDATA __val;
  
  g3ddbgAssert__FbPCce(false,str_825);
  return;
}

void void __adjust_heap<LIGHTCOMPAREDATA *, int, LIGHTCOMPAREDATA, LIGHTCOMPAREDATA::greater>(LIGHTCOMPAREDATA *__first, int __holeIndex, int __len, LIGHTCOMPAREDATA __value, greater __comp) {
	int __topIndex;
	int __secondChild;
	LIGHTCOMPAREDATA &__X;
	
  LIGHTCOMPAREDATA __value;
  LIGHTCOMPAREDATA __val;
  
  g3ddbgAssert__FbPCce(false,str_825);
  return;
}

void void __unguarded_linear_insert<LIGHTCOMPAREDATA *, LIGHTCOMPAREDATA, LIGHTCOMPAREDATA::greater>(LIGHTCOMPAREDATA *__last, LIGHTCOMPAREDATA __val, greater __comp) {
	LIGHTCOMPAREDATA *__next;
	
  LIGHTCOMPAREDATA __value;
  LIGHTCOMPAREDATA __val;
  
  g3ddbgAssert__FbPCce(false,str_825);
  return;
}

void void __push_heap<LIGHTCOMPAREDATA *, int, LIGHTCOMPAREDATA, LIGHTCOMPAREDATA::greater>(LIGHTCOMPAREDATA *__first, int __holeIndex, int __topIndex, LIGHTCOMPAREDATA __value, greater __comp) {
	int __parent;
	
  LIGHTCOMPAREDATA __value;
  LIGHTCOMPAREDATA __val;
  
  g3ddbgAssert__FbPCce(false,str_825);
  return;
}
