// STATUS: NOT STARTED

#include "MapDraw.h"

static GRA3DLIGHTDATA *MapDrawRoomLihgtSp[2] = {
	/* [0] = */ NULL,
	/* [1] = */ NULL
};

static int s_bEnableLightFlashlightOnly = 1;
static GRA3DLIGHTDATA MapDrawPS2CoordLight[2];

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x39e3c8;
	
  g3ddbgAssert__FbPCce(false,str_735);
  return (char *)v;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_verifyrange__H1Zc_UiUi_PX01(0x3eed40,_max);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_verifyrange__H1Zc_UiUi_PX01(0x3eed48,_max);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_verifyrange__H1Zc_UiUi_PX01(0x39e410,_max);
  }
  return (uint **)0x0;
}

void MapDrawCalcRoomCoord(void *sgd_top, float *pos) {
	SGDCOORDINATE *cp;
	
  SGDCOORDINATE *pCoord;
  float afVar1 [4];
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  
  if (sgd_top == (void *)0x0) {
    printf("***ERR!! %s(%d):");
    printf("ADDR_NULL\n");
    return;
  }
                    /* inlined from ../../graphics/graph3d/g3dxVu0.h */
                    /* end of inlined section */
  pCoord = *(SGDCOORDINATE **)((int)sgd_top + 8);
                    /* inlined from ../../graphics/graph3d/g3dxVu0.h */
  auVar5 = _lqc2((undefined  [16])g_matConvertSI2PS[0]);
  auVar6 = _lqc2((undefined  [16])g_matConvertSI2PS[1]);
  auVar7 = _lqc2((undefined  [16])g_matConvertSI2PS[2]);
  auVar8 = _lqc2((undefined  [16])g_matConvertSI2PS[3]);
  afVar1 = (float  [4])_sqc2(auVar5);
  *(float *)((int)pCoord->matCoord[0] + 0) = afVar1[0];
  *(float *)((int)pCoord->matCoord[0] + 4) = afVar1[1];
  *(float *)((int)pCoord->matCoord[0] + 8) = afVar1[2];
  *(float *)((int)pCoord->matCoord[0] + 0xc) = afVar1[3];
  afVar1 = (float  [4])_sqc2(auVar6);
  *(float *)((int)pCoord->matCoord[1] + 0) = afVar1[0];
  *(float *)((int)pCoord->matCoord[1] + 4) = afVar1[1];
  *(float *)((int)pCoord->matCoord[1] + 8) = afVar1[2];
  *(float *)((int)pCoord->matCoord[1] + 0xc) = afVar1[3];
  afVar1 = (float  [4])_sqc2(auVar7);
  *(float *)((int)pCoord->matCoord[2] + 0) = afVar1[0];
  *(float *)((int)pCoord->matCoord[2] + 4) = afVar1[1];
  *(float *)((int)pCoord->matCoord[2] + 8) = afVar1[2];
  *(float *)((int)pCoord->matCoord[2] + 0xc) = afVar1[3];
  afVar1 = (float  [4])_sqc2(auVar8);
  *(float *)((int)pCoord->matCoord[3] + 0) = afVar1[0];
  *(float *)((int)pCoord->matCoord[3] + 4) = afVar1[1];
  *(float *)((int)pCoord->matCoord[3] + 8) = afVar1[2];
  *(float *)((int)pCoord->matCoord[3] + 0xc) = afVar1[3];
  uVar2 = *(undefined8 *)pos;
  fVar3 = pos[2];
  fVar4 = pos[3];
  pCoord->matCoord[3][0] = (float)uVar2;
  pCoord->matCoord[3][1] = (float)((ulong)uVar2 >> 0x20);
  pCoord->matCoord[3][2] = fVar3;
  pCoord->matCoord[3][3] = fVar4;
                    /* end of inlined section */
  sgdCalcBoneCoordinate__FP13SGDCOORDINATEi(pCoord,*(int *)((int)sgd_top + 0x14) + -1);
  return;
}

void MapDrawSetMatrixSGD(void *sgd_top, float *mat[4]) {
	SGDCOORDINATE *cp;
	float *pm0[4];
	
  undefined (*pauVar1) [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  
  pauVar1 = *(undefined (**) [16])((int)sgd_top + 8);
                    /* inlined from ../../graphics/graph3d/g3dxVu0.h */
  auVar2 = _lqc2((undefined  [16])*mat);
  auVar3 = _lqc2((undefined  [16])mat[1]);
  auVar4 = _lqc2((undefined  [16])mat[2]);
  auVar5 = _lqc2((undefined  [16])mat[3]);
  auVar2 = _sqc2(auVar2);
  *pauVar1 = auVar2;
  auVar2 = _sqc2(auVar3);
  pauVar1[1] = auVar2;
  auVar2 = _sqc2(auVar4);
  pauVar1[2] = auVar2;
  auVar2 = _sqc2(auVar5);
  pauVar1[3] = auVar2;
  auVar2 = _lqc2((undefined  [16])*mat);
  auVar3 = _lqc2((undefined  [16])mat[1]);
  auVar4 = _lqc2((undefined  [16])mat[2]);
  auVar5 = _lqc2((undefined  [16])mat[3]);
  auVar2 = _sqc2(auVar2);
  pauVar1[4] = auVar2;
  auVar2 = _sqc2(auVar3);
  pauVar1[5] = auVar2;
  auVar2 = _sqc2(auVar4);
  pauVar1[6] = auVar2;
  auVar2 = _sqc2(auVar5);
  pauVar1[7] = auVar2;
  return;
}

void MapDrawSGD(void *sgd_top) {
  _gra3dDrawSGD__FP13SGDFILEHEADER13SGDRENDERTYPEP13SGDCOORDINATEi
            ((SGDFILEHEADER *)sgd_top,SRT_REALTIME,(SGDCOORDINATE *)0x0,-1);
  return;
}

int MapDrawGetCenPos(void *sgd_top, float *rvec[4]) {
	float h_pos[8][4];
	
  float fVar1;
  float fVar2;
  float fVar3;
  float h_pos [8] [4];
  
  sgdGetBoundingBox__FP13SGDFILEHEADERPA3_f((SGDFILEHEADER *)sgd_top,h_pos);
  sceVu0AddVector(rvec,h_pos,h_pos[7]);
  sceVu0ScaleVector(0x3f000000,rvec,rvec);
  fVar2 = (*rvec)[0];
  fVar3 = (*rvec)[1];
  fVar1 = (*rvec)[2];
  (*rvec)[3] = 1.0;
  (*rvec)[0] = fVar2 * 25.0;
  (*rvec)[2] = fVar1 * 25.0;
  (*rvec)[1] = fVar3 * -25.0;
  return 0;
}

void MapDrawSetSpRoomLight(GRA3DLIGHTDATA *lp) {
	int i;
	
  MLOAD_HEAD *pMVar1;
  int id;
  int iVar2;
  GRA3DLIGHTDATA **ppGVar3;
  GRA3DLIGHTDATA **ppGVar4;
  
  ppGVar3 = MapDrawRoomLihgtSp;
  ppGVar4 = ppGVar3;
  id = 0;
  do {
    iVar2 = id + 1;
    pMVar1 = MapLoadGetHeadPtr__Fi(id);
    if (pMVar1 == (MLOAD_HEAD *)0x0) {
      *ppGVar3 = (GRA3DLIGHTDATA *)0x0;
    }
    else {
      *ppGVar4 = lp;
    }
    ppGVar4 = ppGVar4 + 1;
    ppGVar3 = ppGVar3 + 1;
    id = iVar2;
  } while (iVar2 < 2);
  return;
}

GRA3DLIGHTDATA* MapDrawGetLightPtr4BuffID2(int buff_id) {
  GRA3DLIGHTDATA *pGVar1;
  
  if ((uint)buff_id < 2) {
    pGVar1 = MapDrawPS2CoordLight + buff_id;
  }
  else {
    printf("***ERR!! %s(%d):");
    printf("NO BUFF_ID[%d]*************\n");
    pGVar1 = (GRA3DLIGHTDATA *)0x0;
  }
  return pGVar1;
}

GRA3DLIGHTDATA* MapDrawGetLightPtr4BuffID(int buff_id) {
	MLOAD_HEAD *hp;
	
  MLOAD_HEAD *hp;
  int iVar1;
  GRA3DLIGHTDATA *pGVar2;
  
  pGVar2 = MapDrawRoomLihgtSp[buff_id];
  if (pGVar2 == (GRA3DLIGHTDATA *)0x0) {
    hp = MapLoadGetHeadPtr__Fi(buff_id);
    if (hp == (MLOAD_HEAD *)0x0) {
      pGVar2 = (GRA3DLIGHTDATA *)0x0;
    }
    else {
      pGVar2 = (GRA3DLIGHTDATA *)0x0;
      if (-1 < hp->labelID) {
        iVar1 = MapMeiCheck__FP10MLOAD_HEAD(hp);
        if (iVar1 != 0) {
          pGVar2 = MapMeiGetLight__Fv();
          return pGVar2;
        }
        pGVar2 = MapDrawPS2CoordLight + buff_id;
      }
    }
  }
  return pGVar2;
}

GRA3DLIGHTDATA* MapDrawGetLightPtr(int room_no) {
	int buff_id;
	
  int buff_id;
  GRA3DLIGHTDATA *pGVar1;
  
  buff_id = MapLoadGetBuffID__Fi(room_no);
  if (-1 < buff_id) {
    pGVar1 = MapDrawGetLightPtr4BuffID__Fi(buff_id);
    return pGVar1;
  }
  return (GRA3DLIGHTDATA *)0x0;
}

int MapDrawInitRegDat(MLOAD_HEAD *hp) {
	int i;
	int cnt;
	
  char *pcVar1;
  int iVar2;
  int iVar3;
  int num;
  
  iVar3 = 0;
  do {
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zc_UiUi_PX01(iVar3,4);
    pcVar1 = (hp->reg_id).field0_0x0.m_aData + iVar3;
                    /* end of inlined section */
    iVar3 = iVar3 + 1;
                    /* end of inlined section */
    *pcVar1 = -1;
  } while (iVar3 < 4);
  iVar3 = GetNumInPak__FPv((void *)hp->reg_dat_top);
  if (4 < iVar3) {
    iVar3 = 4;
    printf("***ERR!! %s(%d):");
    printf("REG_DAT_NUM_MAX_OVER\n");
  }
  num = 0;
  if (0 < iVar3) {
    do {
      pcVar1 = (char *)GetFileInPak__FPvi((void *)hp->reg_dat_top,num);
      iVar2 = RegDatRegist__FPc(pcVar1);
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Zc_UiUi_PX01(num,4);
      pcVar1 = (hp->reg_id).field0_0x0.m_aData + num;
                    /* end of inlined section */
      num = num + 1;
                    /* end of inlined section */
      *pcVar1 = (char)iVar2;
    } while (num < iVar3);
  }
  return 0;
}

int MapDrawRegistModel(MLOAD_HEAD *hp) {
  void *pvVar1;
  
  pvVar1 = GetFileInPak__FPvi((void *)hp->model_pak_addr,0);
  hp->model_addr = (uint)pvVar1;
  pvVar1 = GetFileInPak__FPvi((void *)hp->model_pak_addr,1);
  hp->shadow_s_addr = (uint)pvVar1;
  pvVar1 = GetFileInPak__FPvi((void *)hp->model_pak_addr,2);
  hp->shadow_addr = (uint)pvVar1;
  sgdRemap__FP13SGDFILEHEADER((SGDFILEHEADER *)hp->model_addr);
  if ((SGDFILEHEADER *)hp->shadow_s_addr != (SGDFILEHEADER *)0x0) {
    sgdRemap__FP13SGDFILEHEADER((SGDFILEHEADER *)hp->shadow_s_addr);
  }
  if ((SGDFILEHEADER *)hp->shadow_addr != (SGDFILEHEADER *)0x0) {
    sgdRemap__FP13SGDFILEHEADER((SGDFILEHEADER *)hp->shadow_addr);
  }
  return 0;
}

int MapDrawInitRoom(MLOAD_HEAD *hp) {
	static char __FUNCTION__[16] = {
		/* [0] = */ 77,
		/* [1] = */ 97,
		/* [2] = */ 112,
		/* [3] = */ 68,
		/* [4] = */ 114,
		/* [5] = */ 97,
		/* [6] = */ 119,
		/* [7] = */ 73,
		/* [8] = */ 110,
		/* [9] = */ 105,
		/* [10] = */ 116,
		/* [11] = */ 82,
		/* [12] = */ 111,
		/* [13] = */ 111,
		/* [14] = */ 109,
		/* [15] = */ 0
	};
	MB_OUT_HEAD *rp;
	
  undefined8 uVar1;
  MB_OUT_HEAD *pMVar2;
  int iVar3;
  uint addr;
  float fVar4;
  float fVar5;
  GRA3DLIGHTDATA *pRet;
  
  MapDrawRegistModel__FP10MLOAD_HEAD(hp);
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Zc_UiUi_PX01(0,4);
  pMVar2 = RegDatGetHead__Fi((int)(hp->reg_id).field0_0x0.m_aData[0]);
                    /* end of inlined section */
  if (pMVar2 == (MB_OUT_HEAD *)0x0) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("CAN_NOT_GET_REG_DAT_HEAD\n");
                    /* inlined from ../../graphics/graph3d/g3dxVu0.h */
  }
  uVar1 = *(undefined8 *)pMVar2->Pos;
  fVar4 = pMVar2->Pos[2];
  fVar5 = pMVar2->Pos[3];
  hp->pos[0] = (float)uVar1;
  hp->pos[1] = (float)((ulong)uVar1 >> 0x20);
  hp->pos[2] = fVar4;
  hp->pos[3] = fVar5;
                    /* end of inlined section */
  pRet = &hp->lit_dat;
  sgdVerifyLightData__FP14GRA3DLIGHTDATAPC18ZERO2LIGHTDATAFILE
            (pRet,(ZERO2LIGHTDATAFILE *)hp->lit_addr);
  fVar4 = DAT_003ed82c;
  if (((pRet->vAmbient[0] == 0.0) && ((hp->lit_dat).vAmbient[1] == 0.0)) &&
     ((hp->lit_dat).vAmbient[2] == 0.0)) {
    pRet->vAmbient[0] = DAT_003ed82c;
    (hp->lit_dat).vAmbient[2] = fVar4;
    (hp->lit_dat).vAmbient[1] = fVar4;
  }
  iVar3 = MapLoadGetRoomNo4BuffID__Fi(hp->buff_id);
  if (iVar3 == 0x25) {
    (hp->lit_dat).vAmbient[0] = DAT_003ed830;
    iVar3 = hp->buff_id;
  }
  else {
    iVar3 = hp->buff_id;
  }
  gra3dLightDataAddOffsetPosition__FP14GRA3DLIGHTDATAPC14GRA3DLIGHTDATAPCf
            (MapDrawPS2CoordLight + iVar3,pRet,hp->pos);
  iVar3 = MapMeiCheck__FP10MLOAD_HEAD(hp);
  if (iVar3 == 0) {
    gra3dSetLightData__FPC14GRA3DLIGHTDATAPCf(MapDrawPS2CoordLight + hp->buff_id,(float *)0x0);
    addr = hp->high_addr;
  }
  else {
    MapMeiInit__FP14GRA3DLIGHTDATA(MapDrawPS2CoordLight + hp->buff_id);
    addr = hp->high_addr;
  }
  if (addr != 0) {
    MhInitMapHeight__FiPfi(addr,pMVar2->Pos,hp->buff_id);
  }
  return 0;
}

void MapDrawInitFurn(MLOAD_HEAD *hp) {
	int i;
	int reg_id;
	
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  gra3dSetLightData__FPC14GRA3DLIGHTDATAPCf(MapDrawPS2CoordLight + hp->buff_id,(float *)0x0);
  DbFurnPreSetBuffID__Fi(hp->buff_id);
  MapObjRegistPhf__FiPc(hp->buff_id,(char *)hp->lit_addr);
  MapLoadInitFreeMem__Fi(hp->buff_id);
  FurnCtlDeleteDrawFlgAll__Fi(hp->buff_id);
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
  do {
    _fixed_array_verifyrange__H1Zc_UiUi_PX01(iVar2,4);
    cVar1 = (hp->reg_id).field0_0x0.m_aData[iVar2];
                    /* end of inlined section */
    iVar2 = iVar2 + 1;
    if (cVar1 != -1) {
      MapSaveSetMstDat__Fi((int)cVar1);
      MapObjRegistRegDatOne__Fii(hp->buff_id,(int)cVar1);
      MapObjSetHitArea__Fi((int)cVar1);
    }
  } while (iVar2 < 4);
  hp->stat = hp->stat | 4;
  return;
}

void MapDrawPreLight(MLOAD_HEAD *hp) {
	int i;
	int reg_id;
	
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
  do {
    _fixed_array_verifyrange__H1Zc_UiUi_PX01(iVar2,4);
    cVar1 = (hp->reg_id).field0_0x0.m_aData[iVar2];
                    /* end of inlined section */
    iVar2 = iVar2 + 1;
    if (cVar1 != -1) {
      MapLightRePreRender__Fii(hp->buff_id,(int)cVar1);
    }
  } while (iVar2 < 4);
  return;
}

void MapDrawDelRegDatAll(MLOAD_HEAD *hp) {
	int i;
	
  char *pcVar1;
  int iVar2;
  
  iVar2 = 0;
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
  do {
    pcVar1 = (hp->reg_id).field0_0x0.m_aData + iVar2;
    _fixed_array_verifyrange__H1Zc_UiUi_PX01(iVar2,4);
    if (*pcVar1 != -1) {
      _fixed_array_verifyrange__H1Zc_UiUi_PX01(iVar2,4);
      RegDatDeleteBuffList__Fi((int)*pcVar1);
      _fixed_array_verifyrange__H1Zc_UiUi_PX01(iVar2,4);
      *pcVar1 = -1;
    }
                    /* end of inlined section */
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  return;
}

static void MapDrawDeleteHit(int buff_id) {
	int i;
	
  MLOAD_HEAD *pMVar1;
  MB_OUT_HEAD *pMVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  
  pMVar1 = MapLoadGetHeadPtr__Fi(buff_id);
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
  iVar4 = 0;
  do {
    pcVar3 = (pMVar1->reg_id).field0_0x0.m_aData + iVar4;
    _fixed_array_verifyrange__H1Zc_UiUi_PX01(iVar4,4);
    iVar5 = iVar4 + 1;
    if (*pcVar3 != -1) {
      _fixed_array_verifyrange__H1Zc_UiUi_PX01(iVar4,4);
      pMVar2 = RegDatGetHead__Fi((int)*pcVar3);
                    /* end of inlined section */
      MapHitDeleteGroup__Fi(pMVar2->area_id);
    }
    iVar4 = iVar5;
  } while (iVar5 < 4);
  return;
}

void MapDrawDeleteNoDraw(int buff_id) {
  MapDoorDeleteBuff__Fi(buff_id);
  MapDrawDeleteHit__Fi(buff_id);
  MapManimDelete__Fi(buff_id);
  MapAnimDeleteBuffID__Fi(buff_id);
  FurnCtlDeleteManimFlgAll__Fi(buff_id);
  MapObjDeletDraw__Fi(buff_id);
  FurnWorkFree__Fi(buff_id);
  return;
}

void MapDrawDeleteRoom(MLOAD_HEAD *hp) {
  MapDrawDelRegDatAll__FP10MLOAD_HEAD(hp);
  MapDrawDeleteNoDraw__Fi(hp->buff_id);
  FurnCtlClearBuff__Fi(hp->buff_id);
  return;
}

void MapDrawDeleteRoomAll() {
  MLOAD_HEAD *pMVar1;
  
  pMVar1 = MapLoadGetHeadPtr__Fi(0);
  MapDrawDeleteRoom__FP10MLOAD_HEAD(pMVar1);
  pMVar1 = MapLoadGetHeadPtr__Fi(1);
  MapDrawDeleteRoom__FP10MLOAD_HEAD(pMVar1);
  return;
}

void MapDrawObj(void *top, float *mat[4]) {
	SGDCOORDINATE *cp;
	
  SGDCOORDINATE *pCoord;
  float afVar1 [4];
  int iVar2;
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  
  pCoord = *(SGDCOORDINATE **)((int)top + 8);
  iVar2 = (int)pCoord - (int)top;
  if (iVar2 < 0) {
    iVar2 = -iVar2;
  }
  if ((((uint)pCoord & 0xf) == 0) && (iVar2 < 0x201)) {
                    /* inlined from ../../graphics/graph3d/g3dxVu0.h */
    auVar3 = _lqc2((undefined  [16])*mat);
    auVar4 = _lqc2((undefined  [16])mat[1]);
    auVar5 = _lqc2((undefined  [16])mat[2]);
    auVar6 = _lqc2((undefined  [16])mat[3]);
    afVar1 = (float  [4])_sqc2(auVar3);
    *(float *)((int)pCoord->matCoord[0] + 0) = afVar1[0];
    *(float *)((int)pCoord->matCoord[0] + 4) = afVar1[1];
    *(float *)((int)pCoord->matCoord[0] + 8) = afVar1[2];
    *(float *)((int)pCoord->matCoord[0] + 0xc) = afVar1[3];
    afVar1 = (float  [4])_sqc2(auVar4);
    *(float *)((int)pCoord->matCoord[1] + 0) = afVar1[0];
    *(float *)((int)pCoord->matCoord[1] + 4) = afVar1[1];
    *(float *)((int)pCoord->matCoord[1] + 8) = afVar1[2];
    *(float *)((int)pCoord->matCoord[1] + 0xc) = afVar1[3];
    afVar1 = (float  [4])_sqc2(auVar5);
    *(float *)((int)pCoord->matCoord[2] + 0) = afVar1[0];
    *(float *)((int)pCoord->matCoord[2] + 4) = afVar1[1];
    *(float *)((int)pCoord->matCoord[2] + 8) = afVar1[2];
    *(float *)((int)pCoord->matCoord[2] + 0xc) = afVar1[3];
    afVar1 = (float  [4])_sqc2(auVar6);
    *(float *)((int)pCoord->matCoord[3] + 0) = afVar1[0];
    *(float *)((int)pCoord->matCoord[3] + 4) = afVar1[1];
    *(float *)((int)pCoord->matCoord[3] + 8) = afVar1[2];
    *(float *)((int)pCoord->matCoord[3] + 0xc) = afVar1[3];
                    /* end of inlined section */
    sgdCalcBoneCoordinate__FP13SGDCOORDINATEi(pCoord,*(int *)((int)top + 0x14) + -1);
    _gra3dDrawSGD__FP13SGDFILEHEADER13SGDRENDERTYPEP13SGDCOORDINATEi
              ((SGDFILEHEADER *)top,SRT_REALTIME,(SGDCOORDINATE *)0x0,-1);
    gra3dshadowAddProjectModel__FP13SGDFILEHEADER((SGDFILEHEADER *)top);
    return;
  }
  printf("***ERR!! %s(%d):");
  printf("NO_SGD_FILE_FORMAT addr[%x]\n");
  return;
}

void MapDrawObjNoShadow(void *top, float *mat[4]) {
	SGDCOORDINATE *cp;
	
  SGDCOORDINATE *pCoord;
  float afVar1 [4];
  int iVar2;
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  
  pCoord = *(SGDCOORDINATE **)((int)top + 8);
  iVar2 = (int)pCoord - (int)top;
  if (iVar2 < 0) {
    iVar2 = -iVar2;
  }
  if ((((uint)pCoord & 0xf) == 0) && (iVar2 < 0x201)) {
                    /* inlined from ../../graphics/graph3d/g3dxVu0.h */
    auVar3 = _lqc2((undefined  [16])*mat);
    auVar4 = _lqc2((undefined  [16])mat[1]);
    auVar5 = _lqc2((undefined  [16])mat[2]);
    auVar6 = _lqc2((undefined  [16])mat[3]);
    afVar1 = (float  [4])_sqc2(auVar3);
    *(float *)((int)pCoord->matCoord[0] + 0) = afVar1[0];
    *(float *)((int)pCoord->matCoord[0] + 4) = afVar1[1];
    *(float *)((int)pCoord->matCoord[0] + 8) = afVar1[2];
    *(float *)((int)pCoord->matCoord[0] + 0xc) = afVar1[3];
    afVar1 = (float  [4])_sqc2(auVar4);
    *(float *)((int)pCoord->matCoord[1] + 0) = afVar1[0];
    *(float *)((int)pCoord->matCoord[1] + 4) = afVar1[1];
    *(float *)((int)pCoord->matCoord[1] + 8) = afVar1[2];
    *(float *)((int)pCoord->matCoord[1] + 0xc) = afVar1[3];
    afVar1 = (float  [4])_sqc2(auVar5);
    *(float *)((int)pCoord->matCoord[2] + 0) = afVar1[0];
    *(float *)((int)pCoord->matCoord[2] + 4) = afVar1[1];
    *(float *)((int)pCoord->matCoord[2] + 8) = afVar1[2];
    *(float *)((int)pCoord->matCoord[2] + 0xc) = afVar1[3];
    afVar1 = (float  [4])_sqc2(auVar6);
    *(float *)((int)pCoord->matCoord[3] + 0) = afVar1[0];
    *(float *)((int)pCoord->matCoord[3] + 4) = afVar1[1];
    *(float *)((int)pCoord->matCoord[3] + 8) = afVar1[2];
    *(float *)((int)pCoord->matCoord[3] + 0xc) = afVar1[3];
                    /* end of inlined section */
    sgdCalcBoneCoordinate__FP13SGDCOORDINATEi(pCoord,*(int *)((int)top + 0x14) + -1);
    _gra3dDrawSGD__FP13SGDFILEHEADER13SGDRENDERTYPEP13SGDCOORDINATEi
              ((SGDFILEHEADER *)top,SRT_REALTIME,(SGDCOORDINATE *)0x0,-1);
    return;
  }
  printf("***ERR!! %s(%d):");
  printf("NO_SGD_FILE_FORMAT addr[%x]\n");
  return;
}

void MapDrawSetUpRoomCoordinate(MLOAD_HEAD *hp) {
	float m_pos[4];
	
  float m_pos [4];
  
  _SetVector__FPfffff(m_pos,hp->pos[0],hp->pos[1],hp->pos[2],1.0);
  MapDrawCalcRoomCoord__FPvPCf((void *)hp->model_addr,m_pos);
  if ((void *)hp->shadow_addr != (void *)0x0) {
    MapDrawCalcRoomCoord__FPvPCf((void *)hp->shadow_addr,m_pos);
  }
  if ((void *)hp->shadow_s_addr != (void *)0x0) {
    MapDrawCalcRoomCoord__FPvPCf((void *)hp->shadow_s_addr,m_pos);
  }
  return;
}

void MapDrawShadowOne(MLOAD_HEAD *hp, GRA3DLIGHTDATA *lp) {
  if ((SGDFILEHEADER *)hp->shadow_s_addr != (SGDFILEHEADER *)0x0) {
    _gra3dDrawSGD__FP13SGDFILEHEADER13SGDRENDERTYPEP13SGDCOORDINATEi
              ((SGDFILEHEADER *)hp->shadow_s_addr,SRT_REALTIME,(SGDCOORDINATE *)0x0,-1);
  }
  return;
}

void MapDrawRoomOne(MLOAD_HEAD *hp, GRA3DLIGHTDATA *lp) {
	HeaderSection *hs;
	SGDCOORDINATE *cp;
	G3DLIGHT L;
	GRA3DLIGHTID lightId;
	
  int *piVar1;
  G3DLIGHT *pGVar2;
  int iVar3;
  G3DLIGHT *pGVar4;
  GRA3DLIGHTID iLightId;
  G3DLIGHT *pGVar5;
  G3DLIGHT *pGVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined auVar11 [16];
  undefined auVar12 [16];
  G3DLIGHT L;
  
  if (((-1 < hp->labelID) && (piVar1 = (int *)hp->model_addr, piVar1 != (int *)0x0)) &&
     (*piVar1 == 0x1050)) {
    if (*(int *)(piVar1[2] + 0xd4) == 0) {
      MapDrawSetUpRoomCoordinate__FP10MLOAD_HEAD(hp);
    }
    if (s_bEnableLightFlashlightOnly != 0) {
      iVar3 = MapMeiCheck__FP10MLOAD_HEAD(hp);
      if (iVar3 == 0) {
        gra3dLightEnableAll__Fi(0);
        MapLightSetPlayerReal__Fv();
        iVar3 = gra3dIsSpecialLightActive__Fv();
        if (iVar3 != 0) {
          pGVar4 = gra3dGetProjectorSpot__Fv();
          pGVar2 = &L;
          pGVar6 = pGVar4;
          do {
            pGVar5 = pGVar6;
            puVar7 = (undefined8 *)pGVar2;
            uVar8 = *(undefined8 *)(pGVar5->vDiffuse + 2);
            uVar9 = *(undefined8 *)pGVar5->vSpecular;
            uVar10 = *(undefined8 *)(pGVar5->vSpecular + 2);
            *puVar7 = *(undefined8 *)pGVar5->vDiffuse;
            puVar7[1] = uVar8;
            puVar7[2] = uVar9;
            puVar7[3] = uVar10;
            pGVar6 = (G3DLIGHT *)pGVar5->vAmbient;
            pGVar2 = (G3DLIGHT *)(puVar7 + 4);
          } while (pGVar6 != (G3DLIGHT *)&pGVar4->fMinRange);
                    /* end of inlined section */
          uVar8 = *(undefined8 *)(pGVar5->vAmbient + 2);
          puVar7[4] = *(undefined8 *)pGVar6;
                    /* inlined from ../../graphics/graph3d/g3dxVu0.h */
                    /* end of inlined section */
          puVar7[5] = uVar8;
                    /* inlined from ../../graphics/graph3d/g3dxVu0.h */
          auVar11 = _lqc2((undefined  [16])g_v0000);
          auVar12 = _lqc2((undefined  [16])L.vDirection);
          auVar11 = _vsub(auVar11,auVar12);
          L.vDirection = (float  [4])_sqc2(auVar11);
                    /* end of inlined section */
          iLightId = gra3dGetProjectorSpotId__Fv();
          gra3dSetLight__FiPC8G3DLIGHT(iLightId,&L);
          gra3dLightEnable__Fii(iLightId,1);
        }
        EffectThunderLightSetRoomLight__Fv();
        gra3dSetAmbient__FPCf(MapDrawPS2CoordLight[hp->buff_id].vAmbient);
        gra3dApplyLight__Fv();
      }
      else {
        gra3dLightEnableAll__Fi(1);
        iVar3 = MapMeiProc__Fv();
        if (iVar3 < 0) {
          printf("***ERR!! %s(%d):");
          printf("NO_MEIMETU_LIGHT\n");
        }
      }
    }
    iVar3 = GetRoomDrawFLG__Fv();
    if (iVar3 != 0) {
      _gra3dDrawSGD__FP13SGDFILEHEADER13SGDRENDERTYPEP13SGDCOORDINATEi
                ((SGDFILEHEADER *)hp->model_addr,SRT_REALTIME,(SGDCOORDINATE *)0x0,-1);
    }
    iVar3 = GetSdwSrcDrawFLG__Fv();
    if (iVar3 != 0) {
      MapDrawShadowOne__FP10MLOAD_HEADP14GRA3DLIGHTDATA(hp,lp);
    }
    gra3dshadowAddProjectModel__FP13SGDFILEHEADER((SGDFILEHEADER *)hp->model_addr);
  }
  return;
}

void MapDrawRoom() {
	int i;
	
  int iVar1;
  MLOAD_HEAD *hp;
  int buff_id;
  int iVar2;
  GRA3DLIGHTDATA **ppGVar3;
  
  ppGVar3 = MapDrawRoomLihgtSp;
  buff_id = 0;
  do {
    iVar1 = MapLoadCheckDrawFlg__Fi(buff_id);
    iVar2 = buff_id + 1;
    if (iVar1 != 0) {
      hp = MapLoadGetHeadPtr__Fi(buff_id);
      MapDrawRoomOne__FP10MLOAD_HEADP14GRA3DLIGHTDATA(hp,*ppGVar3);
    }
    ppGVar3 = ppGVar3 + 1;
    buff_id = iVar2;
  } while (iVar2 < 2);
  return;
}

void MapDrawEnableFlashlightOnly(int b) {
  s_bEnableLightFlashlightOnly = b;
  return;
}

int MapDrawIsEnableFlashlightOnly() {
  return s_bEnableLightFlashlightOnly;
}

char* char * _fixed_array_verifyrange<char>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_735);
  return (char *)v;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
                    /* end of inlined section */
  return;
}

static void global constructors keyed to MapDrawCalcRoomCoord() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
