// STATUS: NOT STARTED

#include "g3dLight.h"

void g3dSetLightStatus(G3DVU1LIGHTSTATUS *pLS) {
  return;
}

void g3dutilSetLightDefault(G3DLIGHT *pLight, G3DLIGHTTYPE iLightType) {
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = g_NullLight.vDiffuse[3];
  fVar2 = g_NullLight.vDiffuse[2];
                    /* inlined from g3dLight.h */
  fVar1 = g_NullLight.vDiffuse[1];
  pLight->vDiffuse[0] = g_NullLight.vDiffuse[0];
  pLight->vDiffuse[1] = fVar1;
  pLight->vDiffuse[2] = fVar2;
  pLight->vDiffuse[3] = fVar3;
  fVar3 = g_NullLight.vSpecular[3];
  fVar2 = g_NullLight.vSpecular[2];
  fVar1 = g_NullLight.vSpecular[1];
  pLight->vSpecular[0] = g_NullLight.vSpecular[0];
  pLight->vSpecular[1] = fVar1;
  pLight->vSpecular[2] = fVar2;
  pLight->vSpecular[3] = fVar3;
  fVar3 = g_NullLight.vAmbient[3];
  fVar2 = g_NullLight.vAmbient[2];
  fVar1 = g_NullLight.vAmbient[1];
  pLight->vAmbient[0] = g_NullLight.vAmbient[0];
  pLight->vAmbient[1] = fVar1;
  pLight->vAmbient[2] = fVar2;
  pLight->vAmbient[3] = fVar3;
  fVar3 = g_NullLight.vPosition[3];
  fVar2 = g_NullLight.vPosition[2];
  fVar1 = g_NullLight.vPosition[1];
  pLight->vPosition[0] = g_NullLight.vPosition[0];
  pLight->vPosition[1] = fVar1;
  pLight->vPosition[2] = fVar2;
  pLight->vPosition[3] = fVar3;
  fVar3 = g_NullLight.vDirection[3];
  fVar2 = g_NullLight.vDirection[2];
  fVar1 = g_NullLight.vDirection[1];
  pLight->vDirection[0] = g_NullLight.vDirection[0];
  pLight->vDirection[1] = fVar1;
  pLight->vDirection[2] = fVar2;
  pLight->vDirection[3] = fVar3;
  fVar3 = g_NullLight.fMaxRange;
  fVar2 = g_NullLight.fAngleOutside;
  fVar1 = g_NullLight.fAngleInside;
  pLight->Type = g_NullLight.Type;
  pLight->fAngleInside = fVar1;
  pLight->fAngleOutside = fVar2;
  pLight->fMaxRange = fVar3;
  fVar3 = g_NullLight.afPad0[1];
  fVar2 = g_NullLight.afPad0[0];
  fVar1 = g_NullLight.fFalloff;
  pLight->fMinRange = g_NullLight.fMinRange;
  pLight->fFalloff = fVar1;
  pLight->afPad0[0] = fVar2;
  pLight->afPad0[1] = fVar3;
                    /* end of inlined section */
  pLight->Type = iLightType;
  return;
}

float g3dCalcSpotlightFalloff(G3DLIGHT *pLight, float *vVertexPosition) {
	static char __FUNCTION__[24] = {
		/* [0] = */ 103,
		/* [1] = */ 51,
		/* [2] = */ 100,
		/* [3] = */ 67,
		/* [4] = */ 97,
		/* [5] = */ 108,
		/* [6] = */ 99,
		/* [7] = */ 83,
		/* [8] = */ 112,
		/* [9] = */ 111,
		/* [10] = */ 116,
		/* [11] = */ 108,
		/* [12] = */ 105,
		/* [13] = */ 103,
		/* [14] = */ 104,
		/* [15] = */ 116,
		/* [16] = */ 70,
		/* [17] = */ 97,
		/* [18] = */ 108,
		/* [19] = */ 108,
		/* [20] = */ 111,
		/* [21] = */ 102,
		/* [22] = */ 102,
		/* [23] = */ 0
	};
	float fCosAlpha;
	float fCosPhi;
	float fCosTheta;
	float fRet;
	float min;
	static int bOnce = 1;
	
  float fVar1;
  float fVar2;
  float x;
  float fVar3;
  
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_relops.h */
  fVar1 = 1.0;
                    /* end of inlined section */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_relops.h */
  if (pLight->Type == G3DLIGHT_SPOT) {
                    /* end of inlined section */
    fVar3 = pLight->fAngleOutside;
    fVar1 = 0.0;
    if (pLight->fAngleInside <= fVar3) {
                    /* inlined from g3dMath.h */
      if (0.0 <= fVar3) {
        fVar1 = DAT_003ee374;
        if (fVar3 <= DAT_003ee374) {
          fVar1 = fVar3;
        }
        pLight->fAngleOutside = fVar1;
      }
      else {
        pLight->fAngleOutside = 0.0;
      }
                    /* end of inlined section */
      fVar3 = cosf(fVar1);
      fVar2 = cosf(pLight->fAngleInside);
      fVar1 = g3dCalcAngle__FPCfN20(pLight->vDirection,pLight->vPosition,vVertexPosition);
      x = cosf(fVar1);
      acosf(x);
      fVar1 = 0.0;
      if ((fVar3 <= x) && (fVar1 = 1.0, x < fVar2)) {
        fVar1 = pLight->fFalloff;
        if (fVar1 == 1.0) {
          fVar1 = (x - fVar3) / (fVar2 - fVar3);
        }
        else {
          if (bOnce_801 != 0) {
            _SetLineInfo__FPCciT0T0("g3dLight.c",0xd1,"g3dCalcSpotlightFalloff",&DAT_003f0c88);
            g3ddbgWarning__FbPCce(false,&DAT_003b28d8);
            bOnce_801 = 0;
            fVar1 = pLight->fFalloff;
          }
          fVar1 = powf((x - fVar3) / (fVar2 - fVar3),fVar1);
        }
      }
    }
  }
  return fVar1;
}

float g3dCalcLightDistanceAttenuation(G3DLIGHT *pLight, float *vVertexPosition) {
	static char __FUNCTION__[32] = {
		/* [0] = */ 103,
		/* [1] = */ 51,
		/* [2] = */ 100,
		/* [3] = */ 67,
		/* [4] = */ 97,
		/* [5] = */ 108,
		/* [6] = */ 99,
		/* [7] = */ 76,
		/* [8] = */ 105,
		/* [9] = */ 103,
		/* [10] = */ 104,
		/* [11] = */ 116,
		/* [12] = */ 68,
		/* [13] = */ 105,
		/* [14] = */ 115,
		/* [15] = */ 116,
		/* [16] = */ 97,
		/* [17] = */ 110,
		/* [18] = */ 99,
		/* [19] = */ 101,
		/* [20] = */ 65,
		/* [21] = */ 116,
		/* [22] = */ 116,
		/* [23] = */ 101,
		/* [24] = */ 110,
		/* [25] = */ 117,
		/* [26] = */ 97,
		/* [27] = */ 116,
		/* [28] = */ 105,
		/* [29] = */ 111,
		/* [30] = */ 110,
		/* [31] = */ 0
	};
	float fScope;
	float fRelativeDistance1;
	unsigned int uiLightAttenuationType;
	float f;
	
  undefined in_vf1 [16];
  undefined extraout_vf1 [16];
  undefined auVar1 [16];
  undefined auVar2 [16];
  
  if (pLight->Type != G3DLIGHT_DIRECTIONAL) {
    if (pLight->fMaxRange < pLight->fMinRange) {
      _SetLineInfo__FPCciT0T0
                ("g3dLight.c",0xe1,"g3dCalcLightDistanceAttenuation",
                 "pLight->fMinRange <= pLight->fMaxRange");
      g3ddbgWarning__FbPCce(pLight->fMinRange <= pLight->fMaxRange,&DAT_003f0c90);
                    /* inlined from g3dxVu0.h */
      in_vf1 = extraout_vf1;
    }
    auVar1 = _lqc2(*(undefined (*) [16])pLight->vPosition);
    auVar2 = _lqc2(*(undefined (*) [16])vVertexPosition);
    auVar1 = _vsub(auVar1,auVar2);
    auVar1 = _vmul(auVar1,auVar1);
    _vaddabc(auVar1,auVar1);
    _vmaddbc(in_vf1,auVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 1.0;
}

float g3dCalcLightAttenuation(G3DLIGHT *pLight, float *vVertex) {
	static char __FUNCTION__[24] = {
		/* [0] = */ 103,
		/* [1] = */ 51,
		/* [2] = */ 100,
		/* [3] = */ 67,
		/* [4] = */ 97,
		/* [5] = */ 108,
		/* [6] = */ 99,
		/* [7] = */ 76,
		/* [8] = */ 105,
		/* [9] = */ 103,
		/* [10] = */ 104,
		/* [11] = */ 116,
		/* [12] = */ 65,
		/* [13] = */ 116,
		/* [14] = */ 116,
		/* [15] = */ 101,
		/* [16] = */ 110,
		/* [17] = */ 117,
		/* [18] = */ 97,
		/* [19] = */ 116,
		/* [20] = */ 105,
		/* [21] = */ 111,
		/* [22] = */ 110,
		/* [23] = */ 0
	};
	float fRet;
	
  G3DLIGHTTYPE GVar1;
  float fVar2;
  float fVar3;
  
  GVar1 = pLight->Type;
  if (GVar1 == G3DLIGHT_POINT) {
    fVar2 = g3dCalcLightDistanceAttenuation__FPC8G3DLIGHTPCf(pLight,vVertex);
    return fVar2;
  }
  if ((int)GVar1 < 2) {
    if (GVar1 == G3DLIGHT_DIRECTIONAL) {
      return 1.0;
    }
  }
  else {
    if (GVar1 == G3DLIGHT_SPOT) {
      fVar2 = g3dCalcLightDistanceAttenuation__FPC8G3DLIGHTPCf(pLight,vVertex);
      fVar3 = g3dCalcSpotlightFalloff__FPC8G3DLIGHTPCf(pLight,vVertex);
      return fVar2 * fVar3;
    }
    if (GVar1 == G3DLIGHTTYPE_FORCE_DWORD) {
      return 0.0;
    }
  }
  _SetLineInfo__FPCciT0T0("g3dLight.c",0x123,"g3dCalcLightAttenuation",&DAT_003f0c88);
  g3ddbgAssert__FbPCce(false,&DAT_003f0c90);
  return 1.0;
}
