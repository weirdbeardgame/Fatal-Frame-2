// STATUS: NOT STARTED

#include "MapSp.h"

typedef struct {
	float fMinSpeed;
	float fMaxSpeed;
	int iMinFrame;
	int iMaxFrame;
	float fReelSpeed;
	int iSave;
} MAPSP_KAZ_DB;

typedef struct {
	void *pHdl;
	float fRot;
	float *pfMstRot;
	int iGroupID;
	int iType;
	float vPos[4];
} MAPSP_KAZ_HEAD;

typedef struct {
	float fSpeed;
	float fMstSpeed;
	float fNextSpeed;
	int iFrame;
	int iNextFrame;
} MAPSP_KAZ_SPEED;

struct fixed_array_base<MAPSP_KAZ_HEAD,64,MAPSP_KAZ_HEAD[64]> {
protected:
	MAPSP_KAZ_HEAD m_aData[64];
	
public:
	fixed_array_base<MAPSP_KAZ_HEAD,64,MAPSP_KAZ_HEAD[64]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	MAPSP_KAZ_HEAD& operator[]();
	MAPSP_KAZ_HEAD& operator[]();
	MAPSP_KAZ_HEAD* data();
	MAPSP_KAZ_HEAD* begin();
	MAPSP_KAZ_HEAD* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<MAPSP_KAZ_HEAD,64> : fixed_array_base<MAPSP_KAZ_HEAD,64,MAPSP_KAZ_HEAD[64]> {
};

struct fixed_array_base<MAPSP_KAZ_SPEED,5,MAPSP_KAZ_SPEED[5]> {
protected:
	MAPSP_KAZ_SPEED m_aData[5];
	
public:
	fixed_array_base<MAPSP_KAZ_SPEED,5,MAPSP_KAZ_SPEED[5]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	MAPSP_KAZ_SPEED& operator[]();
	MAPSP_KAZ_SPEED& operator[]();
	MAPSP_KAZ_SPEED* data();
	MAPSP_KAZ_SPEED* begin();
	MAPSP_KAZ_SPEED* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<MAPSP_KAZ_SPEED,5> : fixed_array_base<MAPSP_KAZ_SPEED,5,MAPSP_KAZ_SPEED[5]> {
};

static MAPSP_KAZ_DB MapSpDbDat = {
	/* .fMinSpeed = */ 5.f,
	/* .fMaxSpeed = */ 20.9999676f,
	/* .iMinFrame = */ 10,
	/* .iMaxFrame = */ 50,
	/* .fReelSpeed = */ -10.f,
	/* .iSave = */ 0
};

DEBUG_MENU dbg_kaza_main = {
	/* .parent = */ &dbg_room_main,
	/* .off_num = */ NULL,
	/* .title = */ 0x39f518,
	/* .submenu = */ {
		/* [0] = */ {
			/* .name = */ 0x39f528,
			/* .attr = */ 32768,
			/* .child = */ &MapSpDbDat,
			/* .nmin = */ 0.f,
			/* .nmax = */ 1000.f,
			/* .nadd = */ 0.199999988f
		},
		/* [1] = */ {
			/* .name = */ 0x39f538,
			/* .attr = */ 32768,
			/* .child = */ 0x2cc614,
			/* .nmin = */ 0.f,
			/* .nmax = */ 1000.f,
			/* .nadd = */ 0.199999988f
		},
		/* [2] = */ {
			/* .name = */ 0x39f548,
			/* .attr = */ 32768,
			/* .child = */ 0x2cc618,
			/* .nmin = */ 1.f,
			/* .nmax = */ 1000.f,
			/* .nadd = */ 1.f
		},
		/* [3] = */ {
			/* .name = */ 0x39f558,
			/* .attr = */ 32768,
			/* .child = */ 0x2cc61c,
			/* .nmin = */ 1.f,
			/* .nmax = */ 1000.f,
			/* .nadd = */ 1.f
		},
		/* [4] = */ {
			/* .name = */ 0x39f568,
			/* .attr = */ 32768,
			/* .child = */ 0x2cc620,
			/* .nmin = */ -360.f,
			/* .nmax = */ 360.f,
			/* .nadd = */ 0.5f
		},
		/* [5] = */ {
			/* .name = */ 0x3ef0b0,
			/* .attr = */ 8192,
			/* .child = */ 0x2cc624,
			/* .nmin = */ 0.f,
			/* .nmax = */ 1.f,
			/* .nadd = */ 1.f
		},
		/* [6] = */ {
			/* .name = */ 0x3ef0b8,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [7] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [8] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [9] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [10] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [11] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [12] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [13] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [14] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [15] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [16] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [17] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [18] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [19] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		}
	},
	/* .mnum = */ 0,
	/* .kai = */ 0,
	/* .max = */ 0,
	/* .pos = */ 0
};

static int MapSpMoviFlg = 0;
static void *MapSpMoviHdl = NULL;
static float MapSpMoviRot = 0.f;
static int MapSpMoveFlg = 0;
static MDAT_OBJ *MapSpKageObjPtr = NULL;
static int MapSpKageBuffID = -1;
static MAPOBJ_DAT *MapSpFusumaPtr = NULL;
static int MapSpFusumaBuffID = -1;
static fixed_array<MAPSP_KAZ_HEAD,64> MapSpKazList;
static fixed_array<MAPSP_KAZ_SPEED,5> MapSpKazSpeed;
unsigned char MAPSP_KAZ_HEAD type_info node[8];
unsigned char MAPSP_KAZ_SPEED type_info node[8];
static int (*MapSpFuncList[3])(/* parameters unknown */);
static float MapSpMoviPos[4];

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x39f4c0;
	
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf15MAPSP_KAZ_SPEED(0x3ef078,_max);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf15MAPSP_KAZ_SPEED(0x3ef080,_max);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf15MAPSP_KAZ_SPEED(0x39f508,_max);
  }
  return (uint **)0x0;
}

void MapSpKayaDrawCallback() {
	void *pHdl;
	u_int *pModel;
	
  void *obj;
  uint *top;
  float (*mat) [4] [4];
  
  obj = MapPutGetNowHdl__Fv();
  top = MapPutGetModelPtr__FPv(obj);
  MhCtlDrawShadow__Fv();
  mat = MapPutGetMatrixPtr__FPv(obj);
  MapDrawObj__FPvPA3_f(top,(float (*) [4])mat);
  return;
}

static MAPSP_KAZ_HEAD* MapSpKazGetFreeArea() {
	int i;
	
  int iVar1;
  fixed_array<MAPSP_KAZ_HEAD,64> *pfVar2;
  
  iVar1 = 0;
  pfVar2 = &MapSpKazList;
  do {
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z14MAPSP_KAZ_HEAD_UiUi_PX01(iVar1,0x40);
    if (((MAPSP_KAZ_HEAD *)pfVar2)->pHdl == (void *)0x0) {
      _fixed_array_verifyrange__H1Z14MAPSP_KAZ_HEAD_UiUi_PX01(iVar1,0x40);
      return (MAPSP_KAZ_HEAD *)pfVar2;
    }
    iVar1 = iVar1 + 1;
    pfVar2 = (fixed_array<MAPSP_KAZ_HEAD,64> *)((int)pfVar2 + 0x30);
  } while (iVar1 < 0x40);
  printf("***ERR!! %s(%d):");
  printf("NO_SPACE\n");
  return (MAPSP_KAZ_HEAD *)0x0;
}

int MapSpKazRegistObj(int iGroup, void *pHdl, int iType, float *pfMstRot) {
	MAPSP_KAZ_HEAD *pKazHead;
	
  undefined8 uVar1;
  MAPSP_KAZ_HEAD *pMVar2;
  int iVar3;
  float (*paafVar4) [4] [4];
  float fVar5;
  float fVar6;
  
  pMVar2 = MapSpKazGetFreeArea__Fv();
  if (pMVar2 == (MAPSP_KAZ_HEAD *)0x0) {
    printf("***ERR!! %s(%d):");
    printf("NO_FREE_SPACE group[%d] type[%d]\n");
    iVar3 = -1;
  }
  else {
    pMVar2->pfMstRot = pfMstRot;
    pMVar2->pHdl = pHdl;
    pMVar2->iGroupID = iGroup;
    pMVar2->iType = iType;
    fVar6 = GetRandValF__Ff(360.0);
    pMVar2->fRot = fVar6;
    paafVar4 = MapPutGetMatrixPtr__FPv(pMVar2->pHdl);
                    /* inlined from ../../graphics/graph3d/g3dxVu0.h */
    uVar1 = *(undefined8 *)(*paafVar4)[3];
    fVar6 = (*paafVar4)[3][2];
    fVar5 = (*paafVar4)[3][3];
    pMVar2->vPos[0] = (float)uVar1;
    pMVar2->vPos[1] = (float)((ulong)uVar1 >> 0x20);
    pMVar2->vPos[2] = fVar6;
    pMVar2->vPos[3] = fVar5;
                    /* end of inlined section */
    iVar3 = 0;
    pMVar2->vPos[3] = 1.0;
  }
  return iVar3;
}

void MapSpKazDeleteGroup(int iGroupID) {
	int i;
	
  int iVar1;
  int iVar2;
  fixed_array<MAPSP_KAZ_HEAD,64> *pfVar3;
  
  pfVar3 = &MapSpKazList;
  iVar1 = 0;
  do {
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
    iVar2 = iVar1 + 1;
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z14MAPSP_KAZ_HEAD_UiUi_PX01(iVar1,0x40);
                    /* end of inlined section */
    if (((MAPSP_KAZ_HEAD *)pfVar3)->iGroupID == iGroupID) {
      ((fixed_array_base<MAPSP_KAZ_HEAD,64,MAPSP_KAZ_HEAD[64]> *)&((MAPSP_KAZ_HEAD *)pfVar3)->pHdl)
      ->m_aData[0].pHdl = (void *)0x0;
    }
    pfVar3 = (fixed_array<MAPSP_KAZ_HEAD,64> *)((int)pfVar3 + 0x30);
    iVar1 = iVar2;
  } while (iVar2 < 0x40);
  return;
}

void MapSpKazDeleteAll() {
	int i;
	
  int iVar1;
  int iVar2;
  fixed_array<MAPSP_KAZ_HEAD,64> *pfVar3;
  
  pfVar3 = &MapSpKazList;
  iVar1 = 0;
  do {
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
    iVar2 = iVar1 + 1;
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z14MAPSP_KAZ_HEAD_UiUi_PX01(iVar1,0x40);
                    /* end of inlined section */
    ((fixed_array_base<MAPSP_KAZ_HEAD,64,MAPSP_KAZ_HEAD[64]> *)&((MAPSP_KAZ_HEAD *)pfVar3)->pHdl)->
    m_aData[0].pHdl = (void *)0x0;
    pfVar3 = (fixed_array<MAPSP_KAZ_HEAD,64> *)((int)pfVar3 + 0x30);
    iVar1 = iVar2;
  } while (iVar2 < 0x40);
  return;
}

static float MapSpKazGetSpeed(int iType) {
  float fVar1;
  
  if ((uint)iType < 5) {
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z15MAPSP_KAZ_SPEED_UiUi_PX01(iType,5);
    fVar1 = MapSpKazSpeed.field0_0x0.m_aData[iType].fSpeed;
                    /* end of inlined section */
  }
  else {
    printf("***ERR!! %s(%d):");
    printf("NO_SPEED_TYPE[%d]\n");
    fVar1 = 0.0;
  }
  return fVar1;
}

static int MapSpKazAnim() {
	int i;
	MAPSP_KAZ_SPEED *pSpeed;
	
  int iVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
  iVar5 = 0;
  iVar1 = 0;
  do {
    iVar4 = iVar1 + 1;
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z15MAPSP_KAZ_SPEED_UiUi_PX01(iVar1,5);
                    /* end of inlined section */
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
    pfVar3 = (float *)((int)&MapSpKazSpeed.field0_0x0.m_aData[0].fSpeed + iVar5);
                    /* end of inlined section */
    fVar9 = *(float *)((int)&MapSpKazSpeed.field0_0x0.m_aData[0].fMstSpeed + iVar5);
    fVar7 = *(float *)((int)&MapSpKazSpeed.field0_0x0.m_aData[0].fNextSpeed + iVar5);
    if (fVar9 == fVar7) {
      iVar1 = *(int *)((int)&MapSpKazSpeed.field0_0x0.m_aData[0].iFrame + iVar5);
      iVar2 = *(int *)((int)&MapSpKazSpeed.field0_0x0.m_aData[0].iNextFrame + iVar5);
    }
    else {
      iVar1 = *(int *)((int)&MapSpKazSpeed.field0_0x0.m_aData[0].iFrame + iVar5);
      iVar2 = *(int *)((int)&MapSpKazSpeed.field0_0x0.m_aData[0].iNextFrame + iVar5);
      *pfVar3 = ((fVar7 - fVar9) * (float)iVar1) / (float)iVar2 + fVar9;
    }
    *(int *)((int)&MapSpKazSpeed.field0_0x0.m_aData[0].iFrame + iVar5) = iVar1 + 1;
    if (iVar2 <= iVar1 + 1) {
      iVar1 = GetRandValI__Fi(MapSpDbDat.iMaxFrame - MapSpDbDat.iMinFrame);
      fVar6 = *(float *)((int)&MapSpKazSpeed.field0_0x0.m_aData[0].fNextSpeed + iVar5);
      fVar8 = *(float *)((int)&MapSpKazSpeed.field0_0x0.m_aData[0].fMstSpeed + iVar5);
      *(int *)((int)&MapSpKazSpeed.field0_0x0.m_aData[0].iNextFrame + iVar5) =
           iVar1 + MapSpDbDat.iMinFrame;
      *(undefined4 *)((int)&MapSpKazSpeed.field0_0x0.m_aData[0].iFrame + iVar5) = 0;
      *pfVar3 = fVar6;
      fVar9 = MapSpDbDat.fMaxSpeed;
      fVar7 = MapSpDbDat.fMinSpeed;
      if (fVar8 == fVar6) {
        *(float *)((int)&MapSpKazSpeed.field0_0x0.m_aData[0].fMstSpeed + iVar5) = fVar6;
        fVar7 = GetRandValF__Ff(fVar9 - fVar7);
        fVar7 = fVar7 + MapSpDbDat.fMinSpeed;
        *(float *)((int)&MapSpKazSpeed.field0_0x0.m_aData[0].fNextSpeed + iVar5) = fVar7;
        if (fVar7 < 0.0) {
          *(float *)((int)&MapSpKazSpeed.field0_0x0.m_aData[0].fNextSpeed + iVar5) = -fVar7;
        }
      }
      else {
        *(float *)((int)&MapSpKazSpeed.field0_0x0.m_aData[0].fMstSpeed + iVar5) = fVar6;
      }
    }
    iVar5 = iVar5 + 0x14;
    iVar1 = iVar4;
  } while (iVar4 < 5);
  return 0;
}

void MapSpKazSetMatrix(MAPSP_KAZ_HEAD *pKazHead) {
	float vRot[4];
	float *mat[4][4];
	float in;
	float min;
	float max;
	float w;
	float *pv0;
	float *pv1;
	
  float (*paafVar1) [4] [4];
  double dVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float vRot [4];
  
  fVar5 = MapSpKazGetSpeed__Fi(pKazHead->iType);
                    /* inlined from MapGeom.h */
                    /* end of inlined section */
  fVar5 = pKazHead->fRot + fVar5;
  pKazHead->fRot = fVar5;
                    /* inlined from MapGeom.h */
  for (; 360.0 <= fVar5; fVar5 = fVar5 - 360.0) {
  }
  for (; fVar5 < 0.0; fVar5 = fVar5 + 360.0) {
  }
  pKazHead->fRot = fVar5;
  fVar3 = DAT_003ed8a8;
  if (180.0 <= fVar5) {
    dVar2 = ((double)(fVar5 - 180.0) * DAT_0039f5e0) / DAT_0039f5e8 - DAT_0039f5e0;
  }
  else {
    dVar2 = ((double)fVar5 * DAT_0039f5f0) / _DAT_0039f5f8;
  }
                    /* end of inlined section */
  _SetVector__FPfffff(vRot,*pKazHead->pfMstRot,pKazHead->pfMstRot[1],
                      ((float)dVar2 * 180.0) / DAT_003ed8a4,0.0);
  paafVar1 = MapPutGetMatrixPtr__FPv(pKazHead->pHdl);
  sceVu0UnitMatrix(paafVar1);
                    /* inlined from MapGeom.h */
                    /* end of inlined section */
                    /* inlined from MapGeom.h */
  (*paafVar1)[0] = 25.0;
                    /* end of inlined section */
                    /* inlined from MapGeom.h */
  (*paafVar1)[2][2] = -25.0;
  (*paafVar1)[1][1] = -25.0;
                    /* end of inlined section */
  sceVu0RotMatrixZ(vRot[2] * fVar3,paafVar1,paafVar1);
  sceVu0RotMatrixX(-(vRot[0] * fVar3),paafVar1,paafVar1);
                    /* inlined from ../../graphics/graph3d/g3dxVu0.h */
                    /* end of inlined section */
  sceVu0RotMatrixY(-(vRot[1] * fVar3),paafVar1,paafVar1);
                    /* inlined from ../../graphics/graph3d/g3dxVu0.h */
  fVar5 = pKazHead->vPos[1];
  fVar3 = pKazHead->vPos[2];
  fVar4 = pKazHead->vPos[3];
  (*paafVar1)[3][0] = pKazHead->vPos[0];
  (*paafVar1)[3][1] = fVar5;
  (*paafVar1)[3][2] = fVar3;
  (*paafVar1)[3][3] = fVar4;
  return;
}

int MapSpKazProc() {
	int i;
	int cnt;
	
  int iVar1;
  MAPSP_KAZ_HEAD *pKazHead;
  int iVar3;
  int iVar2;
  
  iVar3 = 0;
  MapSpKazAnim__Fv();
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
  pKazHead = (MAPSP_KAZ_HEAD *)&MapSpKazList;
  iVar2 = 0;
  do {
    iVar1 = iVar2 + 1;
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z14MAPSP_KAZ_HEAD_UiUi_PX01(iVar2,0x40);
                    /* end of inlined section */
    if (pKazHead->pHdl != (void *)0x0) {
      iVar3 = iVar3 + 1;
      MapSpKazSetMatrix__FP14MAPSP_KAZ_HEAD(pKazHead);
    }
    pKazHead = pKazHead + 1;
    iVar2 = iVar1;
  } while (iVar1 < 0x40);
  if (iVar3 == 0) {
    MapSpFuncList[0] = (undefined1 *)0x0;
  }
  if (MapSpDbDat.iSave != 0) {
    DbmSave__FP10DEBUG_MENUPcN21
              (&dbg_kaza_main,"host0:../src/ingame/map/","MapSpDat.h",s_MAPSP__003ef0c8);
    MapSpDbDat.iSave = 0;
  }
  return 0;
}

static void MapSpMoviRegistObj(void *pHdl, int iFlg) {
	float *pv0;
	float *pv1;
	
  float (*paafVar1) [4] [4];
  
  MapSpMoviRot = 0.0;
  MapSpMoviHdl = pHdl;
  MapSpMoveFlg = iFlg;
  paafVar1 = MapPutGetMatrixPtr__FPv(pHdl);
                    /* inlined from ../../graphics/graph3d/g3dxVu0.h */
  MapSpMoviPos[0] = (*paafVar1)[3][0];
  MapSpMoviPos[1] = (*paafVar1)[3][1];
  MapSpMoviPos[2] = (*paafVar1)[3][2];
  MapSpMoviPos[3] = (*paafVar1)[3][3];
  return;
}

float*[4] MapSpGetReelPos() {
  return (float (*) [4])MapSpMoviPos;
}

void MapSpMoviSetFlg(int iOn_Off) {
  MapSpMoviFlg = iOn_Off;
  return;
}

int MapSpMoviProc() {
	float fRot;
	float vRot[4];
	float vScale[4];
	float in;
	float min;
	float max;
	float w;
	
  undefined8 uVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float (*paafVar5) [4] [4];
  double dVar6;
  float fVar7;
  float vRot [4];
  float vScale [4];
  
  uVar2 = DAT_0039f638;
  uVar1 = DAT_0039f630;
  if ((MapSpMoviHdl != (void *)0x0) && (MapSpMoviFlg != 0)) {
                    /* inlined from MapGeom.h */
    for (MapSpMoviRot = MapSpMoviRot + MapSpDbDat.fReelSpeed; 360.0 <= MapSpMoviRot;
        MapSpMoviRot = MapSpMoviRot - 360.0) {
    }
    for (; MapSpMoviRot < 0.0; MapSpMoviRot = MapSpMoviRot + 360.0) {
    }
    if (180.0 <= MapSpMoviRot) {
      dVar6 = ((double)(MapSpMoviRot - 180.0) * DAT_0039f640) / DAT_0039f648 - DAT_0039f640;
    }
    else {
      dVar6 = ((double)MapSpMoviRot * DAT_0039f650) / _DAT_0039f658;
    }
                    /* end of inlined section */
    fVar7 = ((float)dVar6 * 180.0) / DAT_003ed8ac;
    if (MapSpMoveFlg == 0) {
      _SetVector__FPfffff(vRot,0.0,0.0,fVar7,0.0);
                    /* inlined from MapGeom.h */
    }
    else {
      _SetVector__FPfffff(vRot,fVar7,0.0,0.0,0.0);
    }
    fVar7 = DAT_003ed8b0;
    paafVar5 = MapPutGetMatrixPtr__FPv(MapSpMoviHdl);
    sceVu0UnitMatrix(paafVar5);
    vScale[1] = (float)((ulong)uVar1 >> 0x20);
    vScale[2] = (float)uVar2;
    vScale[0] = (float)uVar1;
    (*paafVar5)[0] = vScale[0] * 25.0;
    (*paafVar5)[1][1] = -vScale[1] * 25.0;
    (*paafVar5)[2][2] = -vScale[2] * 25.0;
    sceVu0RotMatrixX(-(vRot[0] * fVar7),paafVar5,paafVar5);
    sceVu0RotMatrixY(-(vRot[1] * fVar7),paafVar5,paafVar5);
    sceVu0RotMatrixZ(vRot[2] * fVar7,paafVar5,paafVar5);
    fVar4 = MapSpMoviPos[3];
    fVar3 = MapSpMoviPos[2];
    fVar7 = MapSpMoviPos[1];
                    /* inlined from ../../graphics/graph3d/g3dxVu0.h */
    (*paafVar5)[3][0] = MapSpMoviPos[0];
    (*paafVar5)[3][1] = fVar7;
    (*paafVar5)[3][2] = fVar3;
    (*paafVar5)[3][3] = fVar4;
                    /* inlined from MapGeom.h */
                    /* end of inlined section */
                    /* inlined from MapGeom.h */
    (*paafVar5)[3][3] = 1.0;
  }
                    /* end of inlined section */
  return 0;
}

int MapSpAraCheck() {
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  return (int)('\x06' < ingame_wrk.mChapterNo.mValue);
}

int MapSpKageProc() {
  int iId;
  
  if (MapSpKageObjPtr == (MDAT_OBJ *)0x0) {
    MapSpFuncList[1] = (undefined1 *)0x0;
  }
  iId = 1;
  if ((0 < MapSpKageObjPtr->Action) && (MapSpKageObjPtr->ActionType + 1U < 2)) {
    iId = -1;
  }
  gra3dSetObjectIdDrawNoShadow__Fi(iId);
  return 0;
}

static void MapSpFusumaEnd(int iGroupID) {
  if (iGroupID == MapSpFusumaBuffID) {
    MapSpFusumaPtr = (MAPOBJ_DAT *)0x0;
    MapSpFusumaBuffID = -1;
    MapSpFuncList[2] = (undefined1 *)0x0;
  }
  return;
}

int MapSpFusumaProc() {
	MDAT_OBJ *pObjDat;
	
  uint uVar1;
  
  if (MapSpFusumaPtr == (MAPOBJ_DAT *)0x0) {
    MapSpFuncList[2] = (undefined1 *)0x0;
  }
  if (0 < *(int *)((int)MapSpFusumaPtr->obj_ptr + 0x54)) {
    uVar1 = *(uint *)((int)MapSpFusumaPtr->obj_ptr + 0x58);
    if ((int)uVar1 < 0) {
      uVar1 = ~uVar1;
    }
    if ((uVar1 - 1 < 2) &&
       (MapLightPreRenderObj__FPvi(MapSpFusumaPtr->obj_hdl,MapSpFusumaBuffID), uVar1 == 2)) {
      MapSpFusumaEnd__Fi(MapSpFusumaBuffID);
    }
  }
  return 0;
}

void MapSpObjReg(int iGroup, char *sName, MAPOBJ_DAT *pMObjDat, float *pfRot) {
	void *pHdl;
	
  void *obj;
  int iVar1;
  GRA3DLIGHTDATA *light_ptr;
  uint *puVar2;
  
  obj = pMObjDat->obj_hdl;
  if (obj == (void *)0x0) {
    return;
  }
  iVar1 = FurnLoadGetAttr__FPc(sName);
  if (iVar1 == 1) {
    MapPutSetZoffset__FPvf(obj,DAT_003ed8b4);
  }
  iVar1 = FurnCtlGetID__FPc(sName);
  if (iVar1 != 0x12e) {
    if (iVar1 < 0x12f) {
      if (iVar1 == 0x1c) {
LAB_00114170:
        MapSpFuncList[2] = MapSpFusumaProc__Fv;
        MapSpFusumaPtr = pMObjDat;
        MapSpFusumaBuffID = iGroup;
        return;
      }
      if (0x1c < iVar1) {
        if (iVar1 != 0xec) {
          if (iVar1 < 0xed) {
            if (iVar1 != 0xda) {
              return;
            }
            MapSpMoviRegistObj__FPvi(obj,1);
            return;
          }
          if (iVar1 != 0x106) {
            return;
          }
          MapSpFuncList[1] = MapSpKageProc__Fv;
          MapSpKageObjPtr = (MDAT_OBJ *)pMObjDat->obj_ptr;
          MapSpKageBuffID = iGroup;
          return;
        }
        MapSpMoviRegistObj__FPvi(obj,0);
        goto LAB_0011424c;
      }
      if (iVar1 == 0x14) goto LAB_0011415c;
      if (iVar1 < 0x15) {
        if (iVar1 != 9) {
          return;
        }
        MapPutSetZoffset__FPvf(obj,DAT_003ed8b8);
        MapPutChangeFunc__FPvPFv_v(obj,MapSpKayaDrawCallback__Fv);
        return;
      }
      if (iVar1 != 0x18) {
        return;
      }
    }
    else {
      if (iVar1 == 0x195) {
        iVar1 = GetRandValI__Fi(5);
        MapSpKazRegistObj__FiPviPf(iGroup,obj,iVar1,pfRot);
        MapSpFuncList[0] = MapSpKazProc__Fv;
        return;
      }
      if (0x195 < iVar1) {
        if (iVar1 < 0x20f) {
          return;
        }
        if (0x210 < iVar1) {
          if (0x2c2 < iVar1) {
            return;
          }
          if (iVar1 < 0x2c1) {
            return;
          }
LAB_0011415c:
          MapPutSetFirst__FPvs(obj,100);
          return;
        }
LAB_0011424c:
        puVar2 = (uint *)MapPutGetFlgPtr__FPv(obj);
        *puVar2 = *puVar2 | 0x800;
        return;
      }
      if (iVar1 == 0x14a) goto LAB_00114170;
      if (iVar1 < 0x14b) {
        if (iVar1 != 0x149) {
          return;
        }
        puVar2 = (uint *)MapPutGetFlgPtr__FPv(obj);
        *puVar2 = *puVar2 & 0xffffe7df;
        light_ptr = MapDrawGetLightPtr4BuffID__Fi(iGroup);
        MapPutSetLitPtr__FPvP14GRA3DLIGHTDATA(obj,light_ptr);
        return;
      }
      if (iVar1 != 0x16a) {
        return;
      }
    }
  }
  MapPutSetZoffset__FPvf(obj,DAT_003ed8bc);
  return;
}

void MapSpObjRelease(int iGroupID) {
  MapSpKazDeleteGroup__Fi(iGroupID);
  MapSpFusumaEnd__Fi(iGroupID);
  if (MapSpKageBuffID == iGroupID) {
    MapSpKageBuffID = -1;
    MapSpFuncList[1] = (undefined1 *)0x0;
    MapSpKageObjPtr = (MDAT_OBJ *)0x0;
  }
  return;
}

void MapSpProc() {
	int i;
	
  code *pcVar1;
  undefined1 **ppuVar2;
  int iVar3;
  
  ppuVar2 = MapSpFuncList;
  iVar3 = 2;
  pcVar1 = (code *)MapSpFuncList[0];
  while( true ) {
    ppuVar2 = (code **)ppuVar2 + 1;
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)();
    }
    iVar3 = iVar3 + -1;
    if (iVar3 < 0) break;
    pcVar1 = (code *)*ppuVar2;
  }
  return;
}

void MapSpInit() {
	int i;
	
  undefined1 **ppuVar1;
  int iVar2;
  
  iVar2 = 2;
  ppuVar1 = MapSpFuncList + 2;
  do {
    iVar2 = iVar2 + -1;
    *ppuVar1 = (undefined1 *)0x0;
    ppuVar1 = ppuVar1 + -1;
  } while (-1 < iVar2);
  MapSpKazDeleteAll__Fv();
  MapSpKageObjPtr = (MDAT_OBJ *)0x0;
  MapSpKageBuffID = -1;
  return;
}

MAPSP_KAZ_HEAD* MAPSP_KAZ_HEAD * _fixed_array_verifyrange<MAPSP_KAZ_HEAD>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

MAPSP_KAZ_SPEED* MAPSP_KAZ_SPEED * _fixed_array_verifyrange<MAPSP_KAZ_SPEED>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  return;
}

type_info& MAPSP_KAZ_HEAD type_info function() {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

type_info& MAPSP_KAZ_SPEED type_info function() {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

static void global constructors keyed to MapSpKayaDrawCallback() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
