// STATUS: NOT STARTED

#include "gra3dMisc.h"

static int s_iObjdctIdDrawNoShadow = -1;
static int s_bSpecialLightActive = 0;
static G3DLIGHT s_ProjectorSpot;
unsigned char G3DLIGHT type_info node[8];
unsigned char GRA3DLIGHTSTATUS type_info node[8];

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3b6da0;
	
  LIGHTCOMPAREDATA __value;
  LIGHTCOMPAREDATA __val;
  
  g3ddbgAssert__FbPCce(false,str_735);
  return (type_info *)__first;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf16GRA3DLIGHTSTATUS((LIGHTCOMPAREDATA *)s_void__003f1220,(LIGHTCOMPAREDATA *)_max,SUB41(v,0))
    ;
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf16GRA3DLIGHTSTATUS((LIGHTCOMPAREDATA *)s_char__003f1228,(LIGHTCOMPAREDATA *)_max,SUB41(v,0))
    ;
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf16GRA3DLIGHTSTATUS((LIGHTCOMPAREDATA *)"unsigned int*",(LIGHTCOMPAREDATA *)_max,SUB41(v,0));
  }
  return (uint **)0x0;
}

void _DrawShadowTexture() {
	sceGifPackAd aGPA[6];
	CAutoGsRegisters<6> ARs;
	
  _sceGifPackAd aGPA [6];
  
  return;
}

void gra3dCalcShadowLight(G3DLIGHT *pLight, float *vTarget) {
	LIGHTCOMPAREDATA &aLCD[39];
	G3DLIGHT lAdjust;
	int i;
	LIGHTCOMPAREDATA &rLCD;
	LIGHTCOMPAREDATA *__first;
	greater __comp;
	float sc;
	
  undefined *puVar1;
  uint uVar2;
  G3DLIGHT *pGVar3;
  GRA3DLIGHTSTATUS *pGVar4;
  G3DLIGHT *pGVar5;
  int iVar6;
  G3DLIGHT *pGVar7;
  G3DLIGHT *pGVar8;
  undefined8 uVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  int iLightId;
  float fVar13;
  undefined auVar14 [16];
  undefined auVar15 [16];
  LIGHTCOMPAREDATA *__first;
  greater__2_1770 __comp;
  G3DLIGHT lAdjust;
  undefined auStack_80 [8];
  undefined auStack_78 [8];
  G3DLIGHT *local_70;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  G3DLIGHT *local_50;
  
  ZeroArray__H1Z16LIGHTCOMPAREDATA_PX01i_v(0x70003900,0x27);
  iLightId = 0;
  iVar10 = 0;
  do {
    pGVar4 = gra3dGetLightStatusRef__Fi(iLightId);
    if ((pGVar4->bEnable == 0) || (pGVar4->bEnableToShadow == 0)) {
      *(undefined4 *)((int)&DAT_70003908 + iVar10) = 0x7fffffff;
    }
    else {
      pGVar5 = gra3dGetLightRef__Fi(iLightId);
      *(G3DLIGHT **)((int)&DAT_70003904 + iVar10) = pGVar5;
      fVar13 = g3dCalcLightPower__FPC8G3DLIGHTPCf(pGVar5,vTarget);
      *(int *)((int)&DAT_70003908 + iVar10) = iLightId;
      *(float *)((int)&DAT_70003900 + iVar10) = fVar13;
    }
    iLightId = iLightId + 1;
    iVar6 = 0x27;
    iVar10 = iVar10 + 0xc;
  } while (iLightId < 0x27);
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_algo.h */
  iVar10 = 0;
  do {
    iVar6 = iVar6 >> 1;
    iVar10 = iVar10 + 1;
  } while (iVar6 != 1);
  __introsort_loop__H4ZP16LIGHTCOMPAREDATAZ16LIGHTCOMPAREDATAZiZQ216LIGHTCOMPAREDATA7greater_X01X01PX11X21X31_v
            (&DAT_70003900,0x70003ad4,0,iVar10 * 2,0);
  __final_insertion_sort__H2ZP16LIGHTCOMPAREDATAZQ216LIGHTCOMPAREDATA7greater_X01X01X11_v
            (&DAT_70003900,0x70003ad4,0);
                    /* end of inlined section */
  local_70 = &lAdjust;
  pGVar5 = &g_NullLight;
  pGVar3 = local_70;
  do {
    pGVar8 = pGVar3;
    pGVar7 = pGVar5;
    uVar9 = *(undefined8 *)(pGVar7->vDiffuse + 2);
    uVar11 = *(undefined8 *)pGVar7->vSpecular;
    uVar12 = *(undefined8 *)(pGVar7->vSpecular + 2);
    *(undefined8 *)pGVar8->vDiffuse = *(undefined8 *)pGVar7->vDiffuse;
    *(undefined8 *)(pGVar8->vDiffuse + 2) = uVar9;
    *(undefined8 *)pGVar8->vSpecular = uVar11;
    *(undefined8 *)(pGVar8->vSpecular + 2) = uVar12;
    pGVar5 = (G3DLIGHT *)pGVar7->vAmbient;
    pGVar3 = (G3DLIGHT *)pGVar8->vAmbient;
  } while (pGVar7->vAmbient != &g_NullLight.fMinRange);
  uVar9 = *(undefined8 *)(pGVar7->vAmbient + 2);
  *(undefined8 *)pGVar8->vAmbient = g_NullLight._96_8_;
  *(undefined8 *)(pGVar8->vAmbient + 2) = uVar9;
  local_60 = DAT_70003904;
  lAdjust.vDiffuse[3] = 1.0;
  lAdjust.vDiffuse[0] = 1.0;
  local_5c = DAT_70003910;
  lAdjust.vDiffuse[1] = 1.0;
  lAdjust.vDiffuse[2] = 1.0;
  local_58 = DAT_7000391c;
  lAdjust.vDirection[1] = -1.0;
  lAdjust.vDirection[2] = DAT_003ee3dc;
  local_54 = DAT_70003928;
  lAdjust.Type = G3DLIGHT_DIRECTIONAL;
  lAdjust.vDirection[0] = 0.0;
  lAdjust.vDirection[3] = 0.0;
  local_50 = local_70;
  auStack_80 = (undefined  [8])CONCAT44(DAT_70003910,DAT_70003904);
  puVar1 = auStack_80 + 7;
  uVar2 = (uint)puVar1 & 7;
  *(ulong *)(puVar1 + -uVar2) =
       *(ulong *)(puVar1 + -uVar2) & -1L << (uVar2 + 1) * 8 | (ulong)auStack_80 >> (7 - uVar2) * 8;
  puVar1 = auStack_78 + 7;
  uVar2 = (uint)puVar1 & 7;
  *(ulong *)(puVar1 + -uVar2) =
       *(ulong *)(puVar1 + -uVar2) & -1L << (uVar2 + 1) * 8 |
       CONCAT44(DAT_70003928,DAT_7000391c) >> (7 - uVar2) * 8;
  auStack_78 = (undefined  [8])CONCAT44(DAT_70003928,DAT_7000391c);
  g3dBlendLight__FP8G3DLIGHTPPC8G3DLIGHTiPCf(pLight,(G3DLIGHT **)auStack_80,5,vTarget);
                    /* inlined from g3dxVu0.h */
  auVar15 = _qmtc2(0x3f000000);
  auVar14 = _lqc2(*(undefined (*) [16])pLight->vDiffuse);
  auVar14 = _vmulbc(auVar14,auVar15);
  auVar14 = _sqc2(auVar14);
  *(undefined (*) [16])pLight->vDiffuse = auVar14;
  return;
}

void gra3dPrelightScene(int RoomNo) {
	MLOAD_HEAD *hp;
	float vOffset[4];
	
  int iVar1;
  MLOAD_HEAD *hp;
  GRA3DLIGHTDATA *pLightData;
  undefined8 *puVar2;
  float vOffset [4];
  
  iVar1 = MapLoadGetBuffID__Fi(RoomNo);
  hp = MapLoadGetHeadPtr__Fi(iVar1);
  if ((hp != (MLOAD_HEAD *)0x0) && (iVar1 = MapMeiCheck__FP10MLOAD_HEAD(hp), iVar1 == 0)) {
    iVar1 = MapLoadGetBuffID__Fi(RoomNo);
    pLightData = MapDrawGetLightPtr4BuffID2__Fi(iVar1);
    gra3dSetLightData__FPC14GRA3DLIGHTDATAPCf(pLightData,(float *)0x0);
                    /* inlined from g3dxVu0.h */
    puVar2 = (undefined8 *)MapLoadGetOffset__Fi(RoomNo);
    vOffset[2] = *(float *)(puVar2 + 1);
    vOffset[3] = *(float *)((int)puVar2 + 0xc);
    vOffset[0] = (float)*puVar2;
    vOffset[1] = (float)((ulong)*puVar2 >> 0x20);
                    /* end of inlined section */
    gra3dExecPrelight__FP13SGDFILEHEADERPCfT1((SGDFILEHEADER *)hp->model_addr,vOffset,g_v0000);
    gra3dExecPrelight__FP13SGDFILEHEADERPCfT1((SGDFILEHEADER *)hp->shadow_s_addr,vOffset,g_v0000);
    MapDrawPreLight__FP10MLOAD_HEAD(hp);
  }
  return;
}

void gra3dPrelight() {
  int RoomNo;
  
  RoomNo = GetPlyrAreaNo__Fv();
  gra3dPrelightScene__Fi(RoomNo);
  return;
}

void gra3dDrawSGDShadow(SGDFILEHEADER *pSGDTop, SGDCOORDINATE *pCoord, G3DLIGHT *pLight, float *avBBWorld[4]) {
	static char __FUNCTION__[19] = {
		/* [0] = */ 103,
		/* [1] = */ 114,
		/* [2] = */ 97,
		/* [3] = */ 51,
		/* [4] = */ 100,
		/* [5] = */ 68,
		/* [6] = */ 114,
		/* [7] = */ 97,
		/* [8] = */ 119,
		/* [9] = */ 83,
		/* [10] = */ 71,
		/* [11] = */ 68,
		/* [12] = */ 83,
		/* [13] = */ 104,
		/* [14] = */ 97,
		/* [15] = */ 100,
		/* [16] = */ 111,
		/* [17] = */ 119,
		/* [18] = */ 0
	};
	
  if (pSGDTop != (SGDFILEHEADER *)0x0) {
                    /* inlined from sgd_types.h */
    if ((pSGDTop->ucModelType & 1) != 0) {
                    /* end of inlined section */
      _SetLineInfo__FPCciT0T0
                ("gra3dMisc.c",0xf5,"gra3dDrawSGDShadow","(!sgdIsPresetData( pSGDTop ))");
      g3ddbgWarning__FbPCce
                ((bool)(pSGDTop->ucModelType & 1 ^ 1),"shadow model is expected No-Preset model");
      g3ddbgPrintf__FPCce("[G3DRETURN]%s(%d)(%s):%s\n");
      return;
    }
    gra3dshadowSetBoundingBox__FPA3_CfT0(avBBWorld,g_matUnit);
    gra3dshadowSetLight__FPC8G3DLIGHT(pLight);
    gra3dshadowDrawSGD__FP13SGDFILEHEADERP13SGDCOORDINATEi(pSGDTop,pCoord,-1);
  }
  return;
}

void gra3dSetObjectIdDrawNoShadow(int iId) {
  s_iObjdctIdDrawNoShadow = iId;
  return;
}

void gra3dDrawSGDShadowEveryObject(SGDFILEHEADER *pShadowModel, G3DLIGHT *pLight) {
	static char __FUNCTION__[30] = {
		/* [0] = */ 103,
		/* [1] = */ 114,
		/* [2] = */ 97,
		/* [3] = */ 51,
		/* [4] = */ 100,
		/* [5] = */ 68,
		/* [6] = */ 114,
		/* [7] = */ 97,
		/* [8] = */ 119,
		/* [9] = */ 83,
		/* [10] = */ 71,
		/* [11] = */ 68,
		/* [12] = */ 83,
		/* [13] = */ 104,
		/* [14] = */ 97,
		/* [15] = */ 100,
		/* [16] = */ 111,
		/* [17] = */ 119,
		/* [18] = */ 69,
		/* [19] = */ 118,
		/* [20] = */ 101,
		/* [21] = */ 114,
		/* [22] = */ 121,
		/* [23] = */ 79,
		/* [24] = */ 98,
		/* [25] = */ 106,
		/* [26] = */ 101,
		/* [27] = */ 99,
		/* [28] = */ 116,
		/* [29] = */ 0
	};
	unsigned int i;
	SGDPROCUNITHEADER *pPUHead;
	SGDPROCUNITDATA *pPUData;
	
  SGDPROCUNITHEADER *pSVar1;
  uint uVar2;
  int *piVar3;
  uint iObjectIndex;
  
  if ((pShadowModel != (SGDFILEHEADER *)0x0) && (pShadowModel->pCoord != (SGDCOORDINATE *)0x0)) {
                    /* inlined from sgd_types.h */
    if ((pShadowModel->ucModelType & 1) != 0) {
                    /* end of inlined section */
      _SetLineInfo__FPCciT0T0
                ("gra3dMisc.c",0x11a,"gra3dDrawSGDShadowEveryObject",
                 "(!sgdIsPresetData( pShadowModel ))");
      g3ddbgWarning__FbPCce
                ((bool)(pShadowModel->ucModelType & 1 ^ 1),
                 "shadow model is expected No-Preset model");
      g3ddbgPrintf__FPCce("[G3DRETURN]%s(%d)(%s):%s\n");
      return;
    }
    iObjectIndex = 1;
    sgdCalcBoneCoordinate__FP13SGDCOORDINATEi(pShadowModel->pCoord,pShadowModel->uiNumBlock - 1);
    gra3dSetGsRegister__Flli(0,0x3f);
    _gra3dDrawSGD__FP13SGDFILEHEADER13SGDRENDERTYPEP13SGDCOORDINATEi
              (pShadowModel,SRT_REALTIME,(SGDCOORDINATE *)0x0,0);
    gra3dshadowSetLight__FPC8G3DLIGHT(pLight);
    if (1 < pShadowModel->uiNumBlock - 1) {
      piVar3 = pShadowModel->aiPad;
      pSVar1 = (SGDPROCUNITHEADER *)*piVar3;
      do {
        piVar3 = piVar3 + 1;
        pSVar1 = sgdGetProcUnit__FPC17SGDPROCUNITHEADERii(pSVar1,4,0);
        if (pSVar1 == (SGDPROCUNITHEADER *)0x0) {
LAB_001b7034:
          uVar2 = pShadowModel->uiNumBlock;
        }
        else {
          if (s_iObjdctIdDrawNoShadow != iObjectIndex) {
            gra3dshadowSetBoundingBox__FPA3_CfT0
                      ((float (*) [4])(pSVar1 + 1),(float (*) [4])pShadowModel->pCoord);
            gra3dshadowDrawSGD__FP13SGDFILEHEADERP13SGDCOORDINATEi
                      (pShadowModel,(SGDCOORDINATE *)0x0,iObjectIndex);
            goto LAB_001b7034;
          }
          uVar2 = pShadowModel->uiNumBlock;
        }
        iObjectIndex = iObjectIndex + 1;
        if (uVar2 - 1 <= iObjectIndex) {
          return;
        }
        pSVar1 = (SGDPROCUNITHEADER *)*piVar3;
      } while( true );
    }
  }
  return;
}

void gra3dGenerateLightDataToChar(GRA3DLIGHTDATA *pLDDest, GRA3DLIGHTDATA *pLDSrc, GRA3DEMULATIONLIGHTDATACREATIONDATA *pData) {
	static char __FUNCTION__[29] = {
		/* [0] = */ 103,
		/* [1] = */ 114,
		/* [2] = */ 97,
		/* [3] = */ 51,
		/* [4] = */ 100,
		/* [5] = */ 71,
		/* [6] = */ 101,
		/* [7] = */ 110,
		/* [8] = */ 101,
		/* [9] = */ 114,
		/* [10] = */ 97,
		/* [11] = */ 116,
		/* [12] = */ 101,
		/* [13] = */ 76,
		/* [14] = */ 105,
		/* [15] = */ 103,
		/* [16] = */ 104,
		/* [17] = */ 116,
		/* [18] = */ 68,
		/* [19] = */ 97,
		/* [20] = */ 116,
		/* [21] = */ 97,
		/* [22] = */ 84,
		/* [23] = */ 111,
		/* [24] = */ 67,
		/* [25] = */ 104,
		/* [26] = */ 97,
		/* [27] = */ 114,
		/* [28] = */ 0
	};
	GRA3DLIGHTID flashlightId;
	int bEnableSelfreflection;
	int bEmulateSelfreflection;
	int bEnableFlashlight;
	int bEmulateFlashlight;
	int bEnableFlashlight2;
	int bEmulateFlashlight2;
	float sc;
	G3DLIGHT *pDest;
	G3DLIGHT *pSrc;
	G3DLIGHT *pDest;
	G3DLIGHT *pSrc;
	
  float fVar1;
  float fVar2;
  float fVar3;
  GRA3DLIGHTDATA *pGVar4;
  GRA3DLIGHTDATA *pGVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  G3DLIGHT *pLight;
  GRA3DLIGHTSTATUS *pGVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined auVar15 [16];
  undefined auVar16 [16];
  int bEmulateFlashlight;
  int bEmulateFlashlight2;
  
  if (pLDDest == (GRA3DLIGHTDATA *)0x0) {
    _SetLineInfo__FPCciT0T0("gra3dMisc.c",0x146,"gra3dGenerateLightDataToChar",s_pLDDest_003f1238);
    g3ddbgAssert__FbPCce(false,&DAT_003f1240);
  }
  if (pLDSrc == (GRA3DLIGHTDATA *)0x0) {
    _SetLineInfo__FPCciT0T0("gra3dMisc.c",0x147,"gra3dGenerateLightDataToChar",s_pLDSrc_003f1248);
    g3ddbgAssert__FbPCce(false,&DAT_003f1240);
  }
  pGVar5 = pLDSrc + 1;
  pGVar4 = pLDDest;
  do {
    uVar6 = *(undefined8 *)(pLDSrc->vAmbient + 2);
    uVar7 = *(undefined8 *)(pLDSrc->aLight).field0_0x0.m_aData[0].vDiffuse;
    uVar8 = *(undefined8 *)((pLDSrc->aLight).field0_0x0.m_aData[0].vDiffuse + 2);
    *(undefined8 *)pGVar4->vAmbient = *(undefined8 *)pLDSrc->vAmbient;
    *(undefined8 *)(pGVar4->vAmbient + 2) = uVar6;
    *(undefined8 *)(pGVar4->aLight).field0_0x0.m_aData[0].vDiffuse = uVar7;
    *(undefined8 *)((pGVar4->aLight).field0_0x0.m_aData[0].vDiffuse + 2) = uVar8;
    pLDSrc = (GRA3DLIGHTDATA *)(pLDSrc->aLight).field0_0x0.m_aData[0].vSpecular;
    pGVar4 = (GRA3DLIGHTDATA *)(pGVar4->aLight).field0_0x0.m_aData[0].vSpecular;
  } while (pLDSrc != pGVar5);
  iVar11 = pData->bEnableSelfreflection;
  iVar14 = pData->bEmulateSelfreflection;
  iVar10 = 0x26;
  if (plyr_wrk.fl.Type == G3DLIGHT_POINT) {
    iVar10 = 0x13;
  }
  bEmulateFlashlight = pData->bEmulateFlashlight;
  iVar12 = pData->bEnableFlashlight;
  bEmulateFlashlight2 = pData->bEmulateFlashlight2;
  iVar13 = pData->bEnableFlashlight2;
  if (plyr_wrk.fl.Type == G3DLIGHTTYPE_FORCE_DWORD) {
    bEmulateFlashlight = 0;
    iVar11 = 0;
    iVar14 = 0;
    iVar12 = 0;
  }
  if (plyr_wrk.fl2.Type == G3DLIGHTTYPE_FORCE_DWORD) {
    bEmulateFlashlight2 = 0;
    iVar13 = 0;
  }
  if (iVar12 != 0) {
                    /* inlined from ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(iVar10,0x27);
    fVar2 = plyr_wrk.fl.vDiffuse[3];
    fVar1 = plyr_wrk.fl.vDiffuse[2];
    uVar6 = plyr_wrk.fl.vDiffuse._0_8_;
                    /* inlined from ../../graphics/graph3d/g3dLight.h */
                    /* inlined from ctl/fixed_array.h */
    pLight = (G3DLIGHT *)(pLDDest->vAmbient + iVar10 * 0x1c + 4);
                    /* inlined from ../../graphics/graph3d/g3dLight.h */
    pLight->vDiffuse[0] = (float)plyr_wrk.fl.vDiffuse._0_8_;
    pLight->vDiffuse[1] = SUB84(uVar6,4);
    pLight->vDiffuse[2] = fVar1;
    pLight->vDiffuse[3] = fVar2;
    fVar3 = plyr_wrk.fl.vSpecular[3];
    fVar2 = plyr_wrk.fl.vSpecular[2];
    fVar1 = plyr_wrk.fl.vSpecular[1];
    pLight->vSpecular[0] = plyr_wrk.fl.vSpecular[0];
    pLight->vSpecular[1] = fVar1;
    pLight->vSpecular[2] = fVar2;
    pLight->vSpecular[3] = fVar3;
    fVar3 = plyr_wrk.fl.vAmbient[3];
    fVar2 = plyr_wrk.fl.vAmbient[2];
    fVar1 = plyr_wrk.fl.vAmbient[1];
    pLight->vAmbient[0] = plyr_wrk.fl.vAmbient[0];
    pLight->vAmbient[1] = fVar1;
    pLight->vAmbient[2] = fVar2;
    pLight->vAmbient[3] = fVar3;
    fVar3 = plyr_wrk.fl.vPosition[3];
    fVar2 = plyr_wrk.fl.vPosition[2];
    fVar1 = plyr_wrk.fl.vPosition[1];
    pLight->vPosition[0] = plyr_wrk.fl.vPosition[0];
    pLight->vPosition[1] = fVar1;
    pLight->vPosition[2] = fVar2;
    pLight->vPosition[3] = fVar3;
    fVar3 = plyr_wrk.fl.vDirection[3];
    fVar2 = plyr_wrk.fl.vDirection[2];
    fVar1 = plyr_wrk.fl.vDirection[1];
    pLight->vDirection[0] = plyr_wrk.fl.vDirection[0];
    pLight->vDirection[1] = fVar1;
    pLight->vDirection[2] = fVar2;
    pLight->vDirection[3] = fVar3;
    fVar3 = plyr_wrk.fl.fMaxRange;
    fVar2 = plyr_wrk.fl.fAngleOutside;
    fVar1 = plyr_wrk.fl.fAngleInside;
    pLight->Type = plyr_wrk.fl.Type;
    pLight->fAngleInside = fVar1;
    pLight->fAngleOutside = fVar2;
    pLight->fMaxRange = fVar3;
    fVar3 = plyr_wrk.fl.afPad0[1];
    fVar2 = plyr_wrk.fl.afPad0[0];
    fVar1 = plyr_wrk.fl.fFalloff;
    pLight->fMinRange = plyr_wrk.fl.fMinRange;
    pLight->fFalloff = fVar1;
    pLight->afPad0[0] = fVar2;
    pLight->afPad0[1] = fVar3;
                    /* end of inlined section */
    gra3dSetLightIntens__FPC8G3DLIGHTf(pLight,pLight->afPad0[0] * pData->fAngleScale);
                    /* inlined from g3dxVu0.h */
    auVar16 = _qmtc2(pData->fDiffuseScale);
    auVar15 = _lqc2(*(undefined (*) [16])pLight->vDiffuse);
    auVar15 = _vmulbc(auVar15,auVar16);
    auVar15 = _sqc2(auVar15);
    *(undefined (*) [16])pLight->vDiffuse = auVar15;
  }
                    /* end of inlined section */
  if (iVar11 != 0) {
                    /* inlined from ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(0x15,0x27);
    fVar2 = plyr_wrk.reflectionlight.vDiffuse[3];
    fVar1 = plyr_wrk.reflectionlight.vDiffuse[2];
    uVar6 = plyr_wrk.reflectionlight.vDiffuse._0_8_;
                    /* inlined from ../../graphics/graph3d/g3dLight.h */
    (pLDDest->aLight).field0_0x0.m_aData[0x15].vDiffuse[0] =
         (float)plyr_wrk.reflectionlight.vDiffuse._0_8_;
    (pLDDest->aLight).field0_0x0.m_aData[0x15].vDiffuse[1] = SUB84(uVar6,4);
    (pLDDest->aLight).field0_0x0.m_aData[0x15].vDiffuse[2] = fVar1;
    (pLDDest->aLight).field0_0x0.m_aData[0x15].vDiffuse[3] = fVar2;
    fVar3 = plyr_wrk.reflectionlight.vSpecular[3];
    fVar2 = plyr_wrk.reflectionlight.vSpecular[2];
    fVar1 = plyr_wrk.reflectionlight.vSpecular[1];
    (pLDDest->aLight).field0_0x0.m_aData[0x15].vSpecular[0] = plyr_wrk.reflectionlight.vSpecular[0];
    (pLDDest->aLight).field0_0x0.m_aData[0x15].vSpecular[1] = fVar1;
    (pLDDest->aLight).field0_0x0.m_aData[0x15].vSpecular[2] = fVar2;
    (pLDDest->aLight).field0_0x0.m_aData[0x15].vSpecular[3] = fVar3;
    fVar3 = plyr_wrk.reflectionlight.vAmbient[3];
    fVar2 = plyr_wrk.reflectionlight.vAmbient[2];
    fVar1 = plyr_wrk.reflectionlight.vAmbient[1];
    (pLDDest->aLight).field0_0x0.m_aData[0x15].vAmbient[0] = plyr_wrk.reflectionlight.vAmbient[0];
    (pLDDest->aLight).field0_0x0.m_aData[0x15].vAmbient[1] = fVar1;
    (pLDDest->aLight).field0_0x0.m_aData[0x15].vAmbient[2] = fVar2;
    (pLDDest->aLight).field0_0x0.m_aData[0x15].vAmbient[3] = fVar3;
    fVar3 = plyr_wrk.reflectionlight.vPosition[3];
    fVar2 = plyr_wrk.reflectionlight.vPosition[2];
    fVar1 = plyr_wrk.reflectionlight.vPosition[1];
    (pLDDest->aLight).field0_0x0.m_aData[0x15].vPosition[0] = plyr_wrk.reflectionlight.vPosition[0];
    (pLDDest->aLight).field0_0x0.m_aData[0x15].vPosition[1] = fVar1;
    (pLDDest->aLight).field0_0x0.m_aData[0x15].vPosition[2] = fVar2;
    (pLDDest->aLight).field0_0x0.m_aData[0x15].vPosition[3] = fVar3;
    fVar3 = plyr_wrk.reflectionlight.vDirection[3];
    fVar2 = plyr_wrk.reflectionlight.vDirection[2];
    fVar1 = plyr_wrk.reflectionlight.vDirection[1];
    (pLDDest->aLight).field0_0x0.m_aData[0x15].vDirection[0] =
         plyr_wrk.reflectionlight.vDirection[0];
    (pLDDest->aLight).field0_0x0.m_aData[0x15].vDirection[1] = fVar1;
    (pLDDest->aLight).field0_0x0.m_aData[0x15].vDirection[2] = fVar2;
    (pLDDest->aLight).field0_0x0.m_aData[0x15].vDirection[3] = fVar3;
    fVar3 = plyr_wrk.reflectionlight.fMaxRange;
    fVar2 = plyr_wrk.reflectionlight.fAngleOutside;
    fVar1 = plyr_wrk.reflectionlight.fAngleInside;
    (pLDDest->aLight).field0_0x0.m_aData[0x15].Type = plyr_wrk.reflectionlight.Type;
    (pLDDest->aLight).field0_0x0.m_aData[0x15].fAngleInside = fVar1;
    (pLDDest->aLight).field0_0x0.m_aData[0x15].fAngleOutside = fVar2;
    (pLDDest->aLight).field0_0x0.m_aData[0x15].fMaxRange = fVar3;
    fVar3 = plyr_wrk.reflectionlight.afPad0[1];
    fVar2 = plyr_wrk.reflectionlight.afPad0[0];
    fVar1 = plyr_wrk.reflectionlight.fFalloff;
    (pLDDest->aLight).field0_0x0.m_aData[0x15].fMinRange = plyr_wrk.reflectionlight.fMinRange;
    (pLDDest->aLight).field0_0x0.m_aData[0x15].fFalloff = fVar1;
    (pLDDest->aLight).field0_0x0.m_aData[0x15].afPad0[0] = fVar2;
    (pLDDest->aLight).field0_0x0.m_aData[0x15].afPad0[1] = fVar3;
  }
                    /* end of inlined section */
  if ((plyr_wrk.fl2.Type == G3DLIGHT_POINT) && (iVar13 != 0)) {
                    /* inlined from ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(0x14,0x27);
    fVar2 = plyr_wrk.fl2.vDiffuse[3];
    fVar1 = plyr_wrk.fl2.vDiffuse[2];
    uVar6 = plyr_wrk.fl2.vDiffuse._0_8_;
                    /* inlined from ../../graphics/graph3d/g3dLight.h */
    (pLDDest->aLight).field0_0x0.m_aData[0x14].vDiffuse[0] = (float)plyr_wrk.fl2.vDiffuse._0_8_;
    (pLDDest->aLight).field0_0x0.m_aData[0x14].vDiffuse[1] = SUB84(uVar6,4);
    (pLDDest->aLight).field0_0x0.m_aData[0x14].vDiffuse[2] = fVar1;
    (pLDDest->aLight).field0_0x0.m_aData[0x14].vDiffuse[3] = fVar2;
    fVar3 = plyr_wrk.fl2.vSpecular[3];
    fVar2 = plyr_wrk.fl2.vSpecular[2];
    fVar1 = plyr_wrk.fl2.vSpecular[1];
    (pLDDest->aLight).field0_0x0.m_aData[0x14].vSpecular[0] = plyr_wrk.fl2.vSpecular[0];
    (pLDDest->aLight).field0_0x0.m_aData[0x14].vSpecular[1] = fVar1;
    (pLDDest->aLight).field0_0x0.m_aData[0x14].vSpecular[2] = fVar2;
    (pLDDest->aLight).field0_0x0.m_aData[0x14].vSpecular[3] = fVar3;
    fVar3 = plyr_wrk.fl2.vAmbient[3];
    fVar2 = plyr_wrk.fl2.vAmbient[2];
    fVar1 = plyr_wrk.fl2.vAmbient[1];
    (pLDDest->aLight).field0_0x0.m_aData[0x14].vAmbient[0] = plyr_wrk.fl2.vAmbient[0];
    (pLDDest->aLight).field0_0x0.m_aData[0x14].vAmbient[1] = fVar1;
    (pLDDest->aLight).field0_0x0.m_aData[0x14].vAmbient[2] = fVar2;
    (pLDDest->aLight).field0_0x0.m_aData[0x14].vAmbient[3] = fVar3;
    fVar3 = plyr_wrk.fl2.vPosition[3];
    fVar2 = plyr_wrk.fl2.vPosition[2];
    fVar1 = plyr_wrk.fl2.vPosition[1];
    (pLDDest->aLight).field0_0x0.m_aData[0x14].vPosition[0] = plyr_wrk.fl2.vPosition[0];
    (pLDDest->aLight).field0_0x0.m_aData[0x14].vPosition[1] = fVar1;
    (pLDDest->aLight).field0_0x0.m_aData[0x14].vPosition[2] = fVar2;
    (pLDDest->aLight).field0_0x0.m_aData[0x14].vPosition[3] = fVar3;
    fVar3 = plyr_wrk.fl2.vDirection[3];
    fVar2 = plyr_wrk.fl2.vDirection[2];
    fVar1 = plyr_wrk.fl2.vDirection[1];
    (pLDDest->aLight).field0_0x0.m_aData[0x14].vDirection[0] = plyr_wrk.fl2.vDirection[0];
    (pLDDest->aLight).field0_0x0.m_aData[0x14].vDirection[1] = fVar1;
    (pLDDest->aLight).field0_0x0.m_aData[0x14].vDirection[2] = fVar2;
    (pLDDest->aLight).field0_0x0.m_aData[0x14].vDirection[3] = fVar3;
    fVar3 = plyr_wrk.fl2.fMaxRange;
    fVar2 = plyr_wrk.fl2.fAngleOutside;
    fVar1 = plyr_wrk.fl2.fAngleInside;
    (pLDDest->aLight).field0_0x0.m_aData[0x14].Type = plyr_wrk.fl2.Type;
    (pLDDest->aLight).field0_0x0.m_aData[0x14].fAngleInside = fVar1;
    (pLDDest->aLight).field0_0x0.m_aData[0x14].fAngleOutside = fVar2;
    (pLDDest->aLight).field0_0x0.m_aData[0x14].fMaxRange = fVar3;
    fVar3 = plyr_wrk.fl2.afPad0[1];
    fVar2 = plyr_wrk.fl2.afPad0[0];
    fVar1 = plyr_wrk.fl2.fFalloff;
    (pLDDest->aLight).field0_0x0.m_aData[0x14].fMinRange = plyr_wrk.fl2.fMinRange;
    (pLDDest->aLight).field0_0x0.m_aData[0x14].fFalloff = fVar1;
    (pLDDest->aLight).field0_0x0.m_aData[0x14].afPad0[0] = fVar2;
    (pLDDest->aLight).field0_0x0.m_aData[0x14].afPad0[1] = fVar3;
                    /* inlined from ctl/fixed_array.h */
  }
  _fixed_array_verifyrange__H1Z16GRA3DLIGHTSTATUS_UiUi_PX01(0x15,0x27);
  (pLDDest->aStatus).field0_0x0.m_aData[0x15].bEnable = iVar11;
  _fixed_array_verifyrange__H1Z16GRA3DLIGHTSTATUS_UiUi_PX01(0x15,0x27);
  (pLDDest->aStatus).field0_0x0.m_aData[0x15].bEnableToChar = 1;
  _fixed_array_verifyrange__H1Z16GRA3DLIGHTSTATUS_UiUi_PX01(0x15,0x27);
  (pLDDest->aStatus).field0_0x0.m_aData[0x15].bEnableToShadow = 1;
  _fixed_array_verifyrange__H1Z16GRA3DLIGHTSTATUS_UiUi_PX01(0x15,0x27);
  (pLDDest->aStatus).field0_0x0.m_aData[0x15].bEmulateToDirectionalLight = iVar14;
  _fixed_array_verifyrange__H1Z16GRA3DLIGHTSTATUS_UiUi_PX01(iVar10,0x27);
                    /* end of inlined section */
                    /* inlined from ctl/fixed_array.h */
  pGVar9 = (pLDDest->aStatus).field0_0x0.m_aData + iVar10;
  pGVar9->bEnable = iVar12;
  _fixed_array_verifyrange__H1Z16GRA3DLIGHTSTATUS_UiUi_PX01(iVar10,0x27);
  pGVar9->bEnableToChar = 1;
  _fixed_array_verifyrange__H1Z16GRA3DLIGHTSTATUS_UiUi_PX01(iVar10,0x27);
  pGVar9->bEnableToShadow = 1;
  _fixed_array_verifyrange__H1Z16GRA3DLIGHTSTATUS_UiUi_PX01(iVar10,0x27);
  pGVar9->bEmulateToDirectionalLight = bEmulateFlashlight;
  _fixed_array_verifyrange__H1Z16GRA3DLIGHTSTATUS_UiUi_PX01(0x14,0x27);
  (pLDDest->aStatus).field0_0x0.m_aData[0x14].bEnable = iVar13;
  _fixed_array_verifyrange__H1Z16GRA3DLIGHTSTATUS_UiUi_PX01(0x14,0x27);
  (pLDDest->aStatus).field0_0x0.m_aData[0x14].bEnableToChar = 1;
  _fixed_array_verifyrange__H1Z16GRA3DLIGHTSTATUS_UiUi_PX01(0x14,0x27);
  (pLDDest->aStatus).field0_0x0.m_aData[0x14].bEnableToShadow = 1;
  _fixed_array_verifyrange__H1Z16GRA3DLIGHTSTATUS_UiUi_PX01(0x14,0x27);
  (pLDDest->aStatus).field0_0x0.m_aData[0x14].bEmulateToDirectionalLight = bEmulateFlashlight2;
  return;
}

static void _SetLightToShadow(GRA3DEMULATIONLIGHTDATACREATIONDATA *pData) {
	GRA3DLIGHTDATA LD;
	GRA3DLIGHTID lightId;
	
  float *pfVar1;
  int iVar2;
  GRA3DLIGHTDATA *pLDSrc;
  GRA3DLIGHTID GVar3;
  G3DLIGHT *pGVar4;
  float *pfVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  G3DLIGHT *pGVar9;
  G3DLIGHT *pGVar10;
  GRA3DLIGHTDATA LD;
  
  iVar2 = GetPlyrAreaNo__Fv();
  pLDSrc = MapDrawGetLightPtr__Fi(iVar2);
  gra3dGenerateLightDataToChar__FP14GRA3DLIGHTDATAPC14GRA3DLIGHTDATAPC35GRA3DEMULATIONLIGHTDATACREATIONDATA
            (&LD,pLDSrc,pData);
  iVar2 = gra3dIsSpecialLightActive__Fv();
  if (iVar2 != 0) {
    GVar3 = gra3dGetProjectorSpotId__Fv();
    pGVar4 = gra3dGetProjectorSpot__Fv();
                    /* inlined from ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(GVar3,0x27);
    pGVar10 = pGVar4;
    pfVar1 = LD.vAmbient + GVar3 * 0x1c + 4;
    do {
      pfVar5 = pfVar1;
      pGVar9 = pGVar10;
      uVar6 = *(undefined8 *)(pGVar9->vDiffuse + 2);
      uVar7 = *(undefined8 *)pGVar9->vSpecular;
      uVar8 = *(undefined8 *)(pGVar9->vSpecular + 2);
      *(undefined8 *)pfVar5 = *(undefined8 *)pGVar9->vDiffuse;
      *(undefined8 *)(pfVar5 + 2) = uVar6;
      *(undefined8 *)(((fixed_array<G3DLIGHT,39> *)(pfVar5 + 4))->field0_0x0).m_aData[0].vDiffuse =
           uVar7;
      *(undefined8 *)(pfVar5 + 6) = uVar8;
      pGVar10 = (G3DLIGHT *)pGVar9->vAmbient;
      pfVar1 = pfVar5 + 8;
    } while (pGVar10 != (G3DLIGHT *)&pGVar4->fMinRange);
    uVar6 = *(undefined8 *)(pGVar9->vAmbient + 2);
    *(undefined8 *)(pfVar5 + 8) = *(undefined8 *)pGVar10;
    *(undefined8 *)(pfVar5 + 10) = uVar6;
    _fixed_array_verifyrange__H1Z16GRA3DLIGHTSTATUS_UiUi_PX01(GVar3,0x27);
    LD.aStatus.field0_0x0.m_aData[GVar3].bEnable = 1;
                    /* end of inlined section */
  }
  gra3dSetLightData__FPC14GRA3DLIGHTDATAPCf(&LD,(float *)0x0);
  return;
}

void gra3dDrawSGDShadowCharacter(ANI_CTRL *pAC, SGDCOORDINATE *pCoord, float *avBBWorld[4], GRA3DEMULATIONLIGHTDATACREATIONDATA *pELDCD) {
	float vBBCenter[4];
	G3DLIGHT shadowlight;
	
  int iVar1;
  float vBBCenter [4];
  G3DLIGHT shadowlight;
  
  if (pAC != (ANI_CTRL *)0x0) {
    SendEneVram__FPUii(pAC->mdl_p,0x2bc0);
    if (debug_var.shadow_model_disp != 0) {
      _gra3dDrawSGD__FP13SGDFILEHEADER13SGDRENDERTYPEP13SGDCOORDINATEi
                ((SGDFILEHEADER *)pAC->base_p,SRT_REALTIME,pCoord,-1);
    }
    if ((g_gra3dShadowDebug.bDrawCharShadow != 0) && (iVar1 = GetSdwDrawFLG__Fv(), iVar1 != 0)) {
      gra3dbbCalcCenterBase__FPfPA3_Cf(vBBCenter,avBBWorld);
      _SetLightToShadow__FPC35GRA3DEMULATIONLIGHTDATACREATIONDATA(pELDCD);
      iVar1 = EffectThunderLightGetLightningFlg__Fv();
      if (iVar1 == 0) {
        gra3dCalcShadowLight__FP8G3DLIGHTPCf(&shadowlight,vBBCenter);
      }
      else {
        EffectThunderLightGetG3dLight__FP8G3DLIGHT(&shadowlight);
      }
      gra3dLightEnableAll__Fi(0);
      gra3dDrawSGDShadow__FP13SGDFILEHEADERP13SGDCOORDINATEPC8G3DLIGHTPA3_Cf
                ((SGDFILEHEADER *)pAC->base_p,pCoord,&shadowlight,avBBWorld);
    }
  }
  return;
}

void gra3dStartSpecialLight() {
  if (s_bSpecialLightActive == 0) {
    s_bSpecialLightActive = 1;
  }
  return;
}

void gra3dEndSpecialLight() {
  s_bSpecialLightActive = 0;
  return;
}

void gra3dUpdateSpecialLight() {
	float f;
	
  G3DLIGHT *pGVar1;
  int iVar2;
  GRA3DLIGHTDATA *pGVar3;
  GRA3DLIGHTID GVar4;
  G3DLIGHT *pGVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float *pfVar9;
  float *pfVar10;
  float f;
  
  if (s_bSpecialLightActive != 0) {
    iVar2 = GetPlyrAreaNo__Fv();
    iVar2 = MapLoadGetBuffID__Fi(iVar2);
    pGVar3 = MapDrawGetLightPtr4BuffID2__Fi(iVar2);
                    /* inlined from ctl/fixed_array.h */
    GVar4 = gra3dGetProjectorSpotId__Fv();
    _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(GVar4,0x27);
    pGVar1 = &s_ProjectorSpot;
    pfVar10 = pGVar3->vAmbient + GVar4 * 0x1c + 4;
    do {
      pfVar9 = pfVar10;
      pGVar5 = pGVar1;
      uVar6 = *(undefined8 *)(pfVar9 + 2);
      uVar7 = *(undefined8 *)
               (((fixed_array<G3DLIGHT,39> *)(pfVar9 + 4))->field0_0x0).m_aData[0].vDiffuse;
      uVar8 = *(undefined8 *)(pfVar9 + 6);
      *(undefined8 *)pGVar5->vDiffuse = *(undefined8 *)pfVar9;
      *(undefined8 *)(pGVar5->vDiffuse + 2) = uVar6;
      *(undefined8 *)pGVar5->vSpecular = uVar7;
      *(undefined8 *)(pGVar5->vSpecular + 2) = uVar8;
      s_ProjectorSpot.fMinRange = DAT_003ee3e0;
      pfVar10 = pfVar9 + 8;
      pGVar1 = (G3DLIGHT *)pGVar5->vAmbient;
    } while (pfVar10 != pGVar3->vAmbient + GVar4 * 0x1c + 4 + 0x18);
                    /* end of inlined section */
                    /* inlined from ctl/fixed_array.h */
    uVar6 = *(undefined8 *)(pfVar9 + 10);
    *(undefined8 *)pGVar5->vAmbient = *(undefined8 *)pfVar10;
    *(undefined8 *)(pGVar5->vAmbient + 2) = uVar6;
                    /* end of inlined section */
    s_ProjectorSpot.fMaxRange = 2800.0;
                    /* inlined from g3dMath.h */
    iVar2 = rand();
    f = (float)((double)DAT_003ee3e4 + (double)DAT_003ee3e8 * ((double)(long)iVar2 / _DAT_003b70a0))
    ;
                    /* end of inlined section */
                    /* end of inlined section */
    fill__H2ZPfZf_X01X01RCX11_v(0x4b3ba0,0x4b3bb0,&f);
  }
  return;
}

int gra3dIsSpecialLightActive() {
  return s_bSpecialLightActive;
}

G3DLIGHT& gra3dGetProjectorSpot() {
  return &s_ProjectorSpot;
}

GRA3DLIGHTID gra3dGetProjectorSpotId() {
	static char __FUNCTION__[24] = {
		/* [0] = */ 103,
		/* [1] = */ 114,
		/* [2] = */ 97,
		/* [3] = */ 51,
		/* [4] = */ 100,
		/* [5] = */ 71,
		/* [6] = */ 101,
		/* [7] = */ 116,
		/* [8] = */ 80,
		/* [9] = */ 114,
		/* [10] = */ 111,
		/* [11] = */ 106,
		/* [12] = */ 101,
		/* [13] = */ 99,
		/* [14] = */ 116,
		/* [15] = */ 111,
		/* [16] = */ 114,
		/* [17] = */ 83,
		/* [18] = */ 112,
		/* [19] = */ 111,
		/* [20] = */ 116,
		/* [21] = */ 73,
		/* [22] = */ 100,
		/* [23] = */ 0
	};
	int iAreaId;
	
  int iVar1;
  GRA3DLIGHTID GVar2;
  bool b;
  
  iVar1 = GetPlyrAreaNo__Fv();
  GVar2 = LID_SPOT_10;
  if ((iVar1 != 0x23) && (GVar2 = LID_SPOT_3, iVar1 != 0x18)) {
    if ((iVar1 != 0x23) && (iVar1 != 0x18)) {
      _SetLineInfo__FPCciT0T0
                ("gra3dMisc.c",0x222,"gra3dGetProjectorSpotId",
                 "(iAreaId == rry05 || iAreaId == rtb05)");
      b = false;
      if ((iVar1 == 0x23) || (iVar1 == 0x18)) {
        b = true;
      }
      g3ddbgWarning__FbPCce(b,&DAT_003f1240);
    }
    g3ddbgPrintf__FPCce("[G3DRETURN:%d]%s(%d)(%s):%s\n");
    GVar2 = GRA3DLIGHTID_FORCE_DWORD;
  }
  return GVar2;
}

void void fill<float *, float>(float *__first, float *__last, float &__value) {
  LIGHTCOMPAREDATA __value;
  LIGHTCOMPAREDATA __val;
  
  g3ddbgAssert__FbPCce(false,str_735);
  return (type_info *)__first;
}

void void ZeroArray<LIGHTCOMPAREDATA>(LIGHTCOMPAREDATA *a, int n) {
  LIGHTCOMPAREDATA __value;
  LIGHTCOMPAREDATA __val;
  
  g3ddbgAssert__FbPCce(false,str_735);
  return (type_info *)__first;
}

void void __introsort_loop<LIGHTCOMPAREDATA *, LIGHTCOMPAREDATA, int, LIGHTCOMPAREDATA::greater>(LIGHTCOMPAREDATA *__first, LIGHTCOMPAREDATA *__last, int __depth_limit, greater __comp) {
	LIGHTCOMPAREDATA *__cut;
	LIGHTCOMPAREDATA &__b;
	LIGHTCOMPAREDATA &__c;
	greater __comp;
	
  LIGHTCOMPAREDATA __value;
  LIGHTCOMPAREDATA __val;
  
  g3ddbgAssert__FbPCce(false,str_735);
  return (type_info *)__first;
}

void void __final_insertion_sort<LIGHTCOMPAREDATA *, LIGHTCOMPAREDATA::greater>(LIGHTCOMPAREDATA *__first, LIGHTCOMPAREDATA *__last, greater __comp) {
  LIGHTCOMPAREDATA __value;
  LIGHTCOMPAREDATA __val;
  
  g3ddbgAssert__FbPCce(false,str_735);
  return (type_info *)__first;
}

G3DLIGHT* G3DLIGHT * _fixed_array_verifyrange<G3DLIGHT>(size_t v, size_t _max) {
  LIGHTCOMPAREDATA __value;
  LIGHTCOMPAREDATA __val;
  
  g3ddbgAssert__FbPCce(false,str_735);
  return (type_info *)__first;
}

GRA3DLIGHTSTATUS* GRA3DLIGHTSTATUS * _fixed_array_verifyrange<GRA3DLIGHTSTATUS>(size_t v, size_t _max) {
  LIGHTCOMPAREDATA __value;
  LIGHTCOMPAREDATA __val;
  
  g3ddbgAssert__FbPCce(false,str_735);
  return (type_info *)__first;
}

LIGHTCOMPAREDATA* LIGHTCOMPAREDATA * __unguarded_partition<LIGHTCOMPAREDATA *, LIGHTCOMPAREDATA, LIGHTCOMPAREDATA::greater>(LIGHTCOMPAREDATA *__first, LIGHTCOMPAREDATA *__last, LIGHTCOMPAREDATA __pivot, greater __comp) {
  LIGHTCOMPAREDATA __value;
  LIGHTCOMPAREDATA __val;
  
  g3ddbgAssert__FbPCce(false,str_735);
  return (type_info *)__first;
}

void void __partial_sort<LIGHTCOMPAREDATA *, LIGHTCOMPAREDATA, LIGHTCOMPAREDATA::greater>(LIGHTCOMPAREDATA *__first, LIGHTCOMPAREDATA *__middle, LIGHTCOMPAREDATA *__last, greater __comp) {
	LIGHTCOMPAREDATA *__i;
	LIGHTCOMPAREDATA __value;
	greater __comp;
	
  LIGHTCOMPAREDATA __value;
  LIGHTCOMPAREDATA __val;
  
  g3ddbgAssert__FbPCce(false,str_735);
  return (type_info *)__first;
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
  
  g3ddbgAssert__FbPCce(false,str_735);
  return (type_info *)__first;
}

void void __unguarded_insertion_sort_aux<LIGHTCOMPAREDATA *, LIGHTCOMPAREDATA, LIGHTCOMPAREDATA::greater>(LIGHTCOMPAREDATA *__first, LIGHTCOMPAREDATA *__last, greater __comp) {
	LIGHTCOMPAREDATA *__i;
	
  LIGHTCOMPAREDATA __value;
  LIGHTCOMPAREDATA __val;
  
  g3ddbgAssert__FbPCce(false,str_735);
  return (type_info *)__first;
}

void void sort_heap<LIGHTCOMPAREDATA *, LIGHTCOMPAREDATA::greater>(LIGHTCOMPAREDATA *__first, LIGHTCOMPAREDATA *__last, greater __comp) {
  LIGHTCOMPAREDATA __value;
  LIGHTCOMPAREDATA __val;
  
  g3ddbgAssert__FbPCce(false,str_735);
  return (type_info *)__first;
}

void void __make_heap<LIGHTCOMPAREDATA *, LIGHTCOMPAREDATA::greater, LIGHTCOMPAREDATA, int>(LIGHTCOMPAREDATA *__first, LIGHTCOMPAREDATA *__last, greater __comp) {
	ptrdiff_t __parent;
	
  LIGHTCOMPAREDATA __value;
  LIGHTCOMPAREDATA __val;
  
  g3ddbgAssert__FbPCce(false,str_735);
  return (type_info *)__first;
}

void void __adjust_heap<LIGHTCOMPAREDATA *, int, LIGHTCOMPAREDATA, LIGHTCOMPAREDATA::greater>(LIGHTCOMPAREDATA *__first, int __holeIndex, int __len, LIGHTCOMPAREDATA __value, greater __comp) {
	int __topIndex;
	int __secondChild;
	LIGHTCOMPAREDATA &__X;
	
  LIGHTCOMPAREDATA __value;
  LIGHTCOMPAREDATA __val;
  
  g3ddbgAssert__FbPCce(false,str_735);
  return (type_info *)__first;
}

void void __unguarded_linear_insert<LIGHTCOMPAREDATA *, LIGHTCOMPAREDATA, LIGHTCOMPAREDATA::greater>(LIGHTCOMPAREDATA *__last, LIGHTCOMPAREDATA __val, greater __comp) {
	LIGHTCOMPAREDATA *__next;
	
  LIGHTCOMPAREDATA __value;
  LIGHTCOMPAREDATA __val;
  
  g3ddbgAssert__FbPCce(false,str_735);
  return (type_info *)__first;
}

void void __push_heap<LIGHTCOMPAREDATA *, int, LIGHTCOMPAREDATA, LIGHTCOMPAREDATA::greater>(LIGHTCOMPAREDATA *__first, int __holeIndex, int __topIndex, LIGHTCOMPAREDATA __value, greater __comp) {
	int __parent;
	
  LIGHTCOMPAREDATA __value;
  LIGHTCOMPAREDATA __val;
  
  g3ddbgAssert__FbPCce(false,str_735);
  return (type_info *)__first;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  G3DLIGHT *pGVar1;
  G3DLIGHT *pGVar2;
  G3DLIGHT *pGVar3;
  G3DLIGHT *pGVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if ((__priority == 0xffff) && (__initialize_p == 1)) {
    pGVar1 = &g_NullLight;
    pGVar2 = &s_ProjectorSpot;
    do {
      pGVar4 = pGVar2;
      pGVar3 = pGVar1;
      uVar5 = *(undefined8 *)(pGVar3->vDiffuse + 2);
      uVar6 = *(undefined8 *)pGVar3->vSpecular;
      uVar7 = *(undefined8 *)(pGVar3->vSpecular + 2);
      *(undefined8 *)pGVar4->vDiffuse = *(undefined8 *)pGVar3->vDiffuse;
      *(undefined8 *)(pGVar4->vDiffuse + 2) = uVar5;
      *(undefined8 *)pGVar4->vSpecular = uVar6;
      *(undefined8 *)(pGVar4->vSpecular + 2) = uVar7;
      pGVar1 = (G3DLIGHT *)pGVar3->vAmbient;
      pGVar2 = (G3DLIGHT *)pGVar4->vAmbient;
    } while (pGVar3->vAmbient != &g_NullLight.fMinRange);
    uVar5 = *(undefined8 *)(pGVar3->vAmbient + 2);
    *(undefined8 *)pGVar4->vAmbient = g_NullLight._96_8_;
    *(undefined8 *)(pGVar4->vAmbient + 2) = uVar5;
  }
  return;
}

type_info& G3DLIGHT type_info function() {
  LIGHTCOMPAREDATA __value;
  LIGHTCOMPAREDATA __val;
  
  g3ddbgAssert__FbPCce(false,str_735);
  return (type_info *)__first;
}

type_info& GRA3DLIGHTSTATUS type_info function() {
  LIGHTCOMPAREDATA __value;
  LIGHTCOMPAREDATA __val;
  
  g3ddbgAssert__FbPCce(false,str_735);
  return (type_info *)__first;
}

static void global constructors keyed to _DrawShadowTexture() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
