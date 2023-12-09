// STATUS: NOT STARTED

#include "ChrSort.h"

typedef struct {
	int put_id;
	void *hdl;
	ENE_WRK *ene;
} CHR_SORT_WORK;

typedef struct {
	int put_id;
	void *hdl;
	FLY_WRK *fly;
} CHR_SORT_FLY_WORK;

static int ChrSortFlg = 0;
static void *ChrSortHdl[2];
static CHR_SORT_WORK ChrSortEnemList[32];
static CHR_SORT_FLY_WORK ChrSortFlyList[32];

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x39dc28;
	
  g3ddbgAssert__FbPCce(false,str_735);
  return;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_void__003eeb08,_max,v);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_char__003eeb10,_max,v);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi("unsigned int*",_max,v);
  }
  return (uint **)0x0;
}

void ChrSortSetFlg(int flg) {
  ChrSortFlg = ChrSortFlg | flg;
  return;
}

void ChrSortDelFlg(int flg) {
  ChrSortFlg = ChrSortFlg & ~flg;
  return;
}

void ChrSortEnemCallback() {
	int id;
	CHR_SORT_WORK *ep;
	
  int iVar1;
  float (*mat) [4] [4];
  
  iVar1 = MapPutGetNowBuffID__Fv();
  iVar1 = iVar1 + -3000;
  if (((ChrSortEnemList[iVar1].hdl != (void *)0x0) && ((ChrSortEnemList[iVar1].ene)->status == 4))
     && ((ChrSortFlg & 1U) == 0)) {
    EnemyDrawOne__FP7ENE_WRK(ChrSortEnemList[iVar1].ene);
    mat = EnemyGetMatrix__FP7ENE_WRK(ChrSortEnemList[iVar1].ene);
    MapPutSetMatrix__FPvPA3_f(ChrSortEnemList[iVar1].hdl,(float (*) [4])mat);
  }
  return;
}

void ChrSortFlyCallback() {
	int id;
	CHR_SORT_FLY_WORK *fp;
	
  int iVar1;
  float (*mat) [4] [4];
  
  iVar1 = MapPutGetNowBuffID__Fv();
  iVar1 = iVar1 + -4000;
  if (ChrSortFlyList[iVar1].hdl != (void *)0x0) {
    FlyDrawOne__FP7FLY_WRK(ChrSortFlyList[iVar1].fly);
    mat = FlyGetMatrix__FP7FLY_WRK(ChrSortFlyList[iVar1].fly);
    MapPutSetMatrix__FPvPA3_f(ChrSortFlyList[iVar1].hdl,(float (*) [4])mat);
  }
  return;
}

static CHR_SORT_WORK* ChrSortGetEnemWork() {
	int i;
	
  int iVar1;
  CHR_SORT_WORK *pCVar2;
  
  iVar1 = 0;
  pCVar2 = ChrSortEnemList;
  do {
    if (pCVar2->hdl == (void *)0x0) {
      pCVar2->put_id = iVar1 + 3000;
      return pCVar2;
    }
    iVar1 = iVar1 + 1;
    pCVar2 = pCVar2 + 1;
  } while (iVar1 < 0x20);
  return (CHR_SORT_WORK *)0x0;
}

static CHR_SORT_FLY_WORK* ChrSortGetFlyWork() {
	int i;
	
  int iVar1;
  CHR_SORT_FLY_WORK *pCVar2;
  
  iVar1 = 0;
  pCVar2 = ChrSortFlyList;
  do {
    if (pCVar2->hdl == (void *)0x0) {
      pCVar2->put_id = iVar1 + 4000;
      return pCVar2;
    }
    iVar1 = iVar1 + 1;
    pCVar2 = pCVar2 + 1;
  } while (iVar1 < 0x20);
  return (CHR_SORT_FLY_WORK *)0x0;
}

int ChrSortRegistEnem(ENE_WRK *ene) {
	CHR_SORT_WORK *ep;
	
  CHR_SORT_WORK *pCVar1;
  int iVar2;
  void *obj;
  uint *puVar3;
  float (*mat) [4] [4];
  
  pCVar1 = ChrSortGetEnemWork__Fv();
  iVar2 = -1;
  if (pCVar1 != (CHR_SORT_WORK *)0x0) {
    obj = MapPutSetFunc__FiPUii(pCVar1->put_id,(uint *)ChrSortEnemCallback__Fv,0);
    pCVar1->ene = ene;
    pCVar1->hdl = obj;
    puVar3 = (uint *)MapPutGetFlgPtr__FPv(obj);
    *puVar3 = *puVar3 & 0xffffffef;
    mat = EnemyGetMatrix__FP7ENE_WRK(ene);
    MapPutSetMatrix__FPvPA3_f(pCVar1->hdl,(float (*) [4])mat);
    iVar2 = pCVar1->put_id;
  }
  return iVar2;
}

int ChrSortRegistFly(FLY_WRK *fly) {
	CHR_SORT_FLY_WORK *fp;
	
  CHR_SORT_FLY_WORK *pCVar1;
  int iVar2;
  void *obj;
  uint *puVar3;
  float (*mat) [4] [4];
  
  pCVar1 = ChrSortGetFlyWork__Fv();
  iVar2 = -1;
  if (pCVar1 != (CHR_SORT_FLY_WORK *)0x0) {
    obj = MapPutSetFunc__FiPUii(pCVar1->put_id,(uint *)ChrSortFlyCallback__Fv,0);
    pCVar1->fly = fly;
    pCVar1->hdl = obj;
    puVar3 = (uint *)MapPutGetFlgPtr__FPv(obj);
    *puVar3 = *puVar3 & 0xffffffef;
    mat = FlyGetMatrix__FP7FLY_WRK(fly);
    MapPutSetMatrix__FPvPA3_f(pCVar1->hdl,(float (*) [4])mat);
    iVar2 = pCVar1->put_id;
  }
  return iVar2;
}

int ChrSortDeleteEnem(ENE_WRK *ene) {
	int i;
	
  int iVar1;
  void **ppvVar2;
  
  ppvVar2 = &ChrSortEnemList[0].hdl;
  iVar1 = 0;
  while ((*ppvVar2 == (void *)0x0 || ((ENE_WRK *)ppvVar2[1] != ene))) {
    iVar1 = iVar1 + 1;
    ppvVar2 = ppvVar2 + 3;
    if (0x1f < iVar1) {
      return -1;
    }
  }
  MpaPutDeleteOneObj__FPv(*ppvVar2);
  *ppvVar2 = (void *)0x0;
  return 0;
}

int ChrSortDeleteFly(FLY_WRK *fly) {
	int i;
	
  int iVar1;
  void **ppvVar2;
  
  ppvVar2 = &ChrSortFlyList[0].hdl;
  iVar1 = 0;
  while ((*ppvVar2 == (void *)0x0 || ((FLY_WRK *)ppvVar2[1] != fly))) {
    iVar1 = iVar1 + 1;
    ppvVar2 = ppvVar2 + 3;
    if (0x1f < iVar1) {
      return -1;
    }
  }
  MpaPutDeleteOneObj__FPv(*ppvVar2);
  *ppvVar2 = (void *)0x0;
  return 0;
}

float*[4][4] ChrSortGetSgdMatrix(HeaderSection *hs) {
  return hs->coordp->matCoord;
}

float*[4][4] ChrSortGetPlayrMatrix() {
  ANI_CTRL *pAVar1;
  float (*paafVar2) [4] [4];
  
  pAVar1 = plyr_mdlGetANI_CTRL__Fv();
  paafVar2 = ChrSortGetSgdMatrix__FP13HeaderSection(pAVar1->base_p);
  return paafVar2;
}

float*[4][4] ChrSortGetSisMatrix() {
  ANI_CTRL *pAVar1;
  float (*paafVar2) [4] [4];
  
  pAVar1 = sis_mdlGetANI_CTRL__Fv();
  paafVar2 = ChrSortGetSgdMatrix__FP13HeaderSection(pAVar1->base_p);
  return paafVar2;
}

int ChrSortRegistSis() {
  float (*mp) [4] [4];
  
  ChrSortHdl[0] = MapPutSetFunc__FiPUii(2000,(uint *)DrawSister__Fv,0);
  mp = ChrSortGetSisMatrix__Fv();
  MapPutSetMatrixPtr__FPvPA3_A3_f(ChrSortHdl[0],mp);
  return 0;
}

int ChrSortRegistPlayr() {
  float (*mp) [4] [4];
  
  ChrSortHdl[1] = MapPutSetFunc__FiPUii(0x7d1,(uint *)DrawGirl__Fv,0);
  mp = ChrSortGetPlayrMatrix__Fv();
  MapPutSetMatrixPtr__FPvPA3_A3_f(ChrSortHdl[1],mp);
  return 0;
}

int ChrSortDelete(int id) {
	int ret;
	
  void *hdl;
  uint uVar1;
  
  uVar1 = 0;
  if ((uint)id < 2) {
    hdl = ChrSortHdl[id];
    if (hdl != (void *)0x0) {
      MpaPutDeleteOneObj__FPv(hdl);
      ChrSortHdl[id] = (void *)0x0;
    }
    uVar1 = (uint)(hdl != (void *)0x0);
  }
  return uVar1;
}

void ChrSortInit() {
	int i;
	
  void **ppvVar1;
  int iVar2;
  
  ChrSortHdl[0] = (void *)0x0;
  ChrSortHdl[1] = (void *)0x0;
  iVar2 = 0x1f;
  ppvVar1 = &ChrSortEnemList[0x1f].hdl;
  do {
    iVar2 = iVar2 + -1;
    *ppvVar1 = (void *)0x0;
    ppvVar1 = ppvVar1 + -3;
  } while (-1 < iVar2);
  iVar2 = 0x1f;
  ppvVar1 = &ChrSortFlyList[0x1f].hdl;
  do {
    iVar2 = iVar2 + -1;
    *ppvVar1 = (void *)0x0;
    ppvVar1 = ppvVar1 + -3;
  } while (-1 < iVar2);
  ChrSortFlg = 0;
  return;
}
