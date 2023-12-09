// STATUS: NOT STARTED

#include "DbFurnPre.h"

static int DbFurnPreNameID = -1;
static int DbFurnPreMdoelMax = -1;
static int DbFurnPreBuffID = -1;
static int DbFurnPreObjID = -1;
static int DbFurnPreObjMax = -1;
static float *DbFurnPrePos = NULL;

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x39dc80;
	
  g3ddbgAssert__FbPCce(false,str_646);
  return (char *)v;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_verifyrange__H1Zc_UiUi_PX01(0x3eeb28,_max);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_verifyrange__H1Zc_UiUi_PX01(0x3eeb30,_max);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_verifyrange__H1Zc_UiUi_PX01(0x39dcc8,_max);
  }
  return (uint **)0x0;
}

static int DbFurnPreGetObjNum(int buff_id) {
	int cnt;
	
  char *pcVar1;
  int iVar2;
  
  iVar2 = 0;
  FurnCtlFindInit__Fi(buff_id);
  while (pcVar1 = FurnCtlGetNextName__Fv(), pcVar1 != (char *)0x0) {
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}

static char* DbFurnPreGetObjName(int buff_id, int id) {
	int i;
	char *name;
	
  char *pcVar1;
  
  FurnCtlFindInit__Fi(buff_id);
  pcVar1 = FurnCtlGetNextName__Fv();
  if (0 < id) {
    do {
      id = id + -1;
      pcVar1 = FurnCtlGetNextName__Fv();
    } while (id != 0);
  }
  return pcVar1;
}

int DbFurnPreGetNumOneType(int reg_id, int type, char *name, int flg) {
	int cnt;
	void *vp;
	char *d_name;
	
  int iVar1;
  MB_OUT_SECTION *pMVar2;
  MB_OUT_SECTION *__s2;
  int iVar3;
  
  iVar3 = 0;
  RegDatGetStPtrStart__Fii(reg_id,type);
  do {
    pMVar2 = RegDatGetNextStPtr__Fi(reg_id);
    if (pMVar2 == (MB_OUT_SECTION *)0x0) {
      return iVar3;
    }
    __s2 = (MB_OUT_SECTION *)0x0;
    if (type == 7) {
LAB_001015c0:
      __s2 = pMVar2 + 1;
    }
    else if (type < 8) {
      if (type == 3) {
        __s2 = (MB_OUT_SECTION *)&pMVar2[1].labelID;
      }
    }
    else if (type == 0xb) goto LAB_001015c0;
    iVar1 = strncmp(name,(char *)__s2,4);
    if (iVar1 == 0) {
      iVar3 = iVar3 + 1;
    }
    if ((-1 < flg) && (flg + 1 == iVar3)) {
      return (int)pMVar2;
    }
  } while( true );
}

float* DbFurnPreGetDat(int buff_id, char *name, int id) {
	int reg_id;
	int put_num;
	
  char cVar1;
  MLOAD_HEAD *pMVar2;
  int iVar3;
  int iVar4;
  
  pMVar2 = MapLoadGetHeadPtr__Fi(buff_id);
                    /* inlined from ../graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Zc_UiUi_PX01(0,4);
                    /* end of inlined section */
  iVar4 = 7;
  cVar1 = (pMVar2->reg_id).field0_0x0.m_aData[0];
  if (*name != 'd') {
    iVar3 = DbFurnPreGetNumOneType__FiiPci((int)cVar1,0xb,name,-1);
    iVar4 = 3;
    if (id < iVar3) {
      iVar4 = DbFurnPreGetNumOneType__FiiPci((int)cVar1,0xb,name,id);
      return (float *)(iVar4 + 0x2c);
    }
    id = id - iVar3;
  }
  iVar4 = DbFurnPreGetNumOneType__FiiPci((int)cVar1,iVar4,name,id);
  return (float *)(iVar4 + 0x30);
}

int DbFurnPreGetObjNum(int buff_id, char *name) {
	int cnt;
	int reg_id;
	
  char cVar1;
  MLOAD_HEAD *pMVar2;
  int iVar3;
  int iVar4;
  
  pMVar2 = MapLoadGetHeadPtr__Fi(buff_id);
                    /* inlined from ../graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Zc_UiUi_PX01(0,4);
                    /* end of inlined section */
                    /* end of inlined section */
  cVar1 = (pMVar2->reg_id).field0_0x0.m_aData[0];
  if (*name == 'd') {
    iVar3 = DbFurnPreGetNumOneType__FiiPci((int)cVar1,7,name,-1);
  }
  else {
    iVar3 = DbFurnPreGetNumOneType__FiiPci((int)cVar1,0xb,name,-1);
    iVar4 = DbFurnPreGetNumOneType__FiiPci((int)cVar1,3,name,-1);
    iVar3 = iVar3 + iVar4;
  }
  return iVar3;
}

void DbFurnPreSetBuffID(int buff_id) {
  DbFurnPreBuffID = buff_id & 1;
  DbFurnPrePos = (float *)0x0;
  DbFurnPreMdoelMax = DbFurnPreGetObjNum__Fi(DbFurnPreBuffID);
  return;
}

void DbFurnPreProc() {
	int flg;
	char *name;
	float pos[4];
	SGDFILEHEADER *mdp;
	
  bool bVar1;
  bool bVar2;
  char *name;
  SGDFILEHEADER *pSGDTop;
  int room_no;
  GRA3DLIGHTDATA *pLightData;
  float pos [4];
  
  if (-1 < DbFurnPreBuffID) {
    bVar1 = (pad[0].one & 0x1000U) != 0;
    if (bVar1) {
      DbFurnPreNameID = DbFurnPreNameID + -1;
    }
    bVar2 = (pad[0].one & 0x4000U) != 0;
    if (bVar2) {
      DbFurnPreNameID = DbFurnPreNameID + 1;
    }
    if ((pad[0].one & 0x2000U) != 0) {
      DbFurnPreObjID = DbFurnPreObjID + 1;
    }
    if ((pad[0].one & 0x8000U) != 0) {
      DbFurnPreObjID = DbFurnPreObjID + -1;
    }
    if (DbFurnPreObjMax <= DbFurnPreObjID) {
      DbFurnPreObjID = 0;
    }
    if (DbFurnPreObjID < 0) {
      DbFurnPreObjID = DbFurnPreObjMax + -1;
    }
    if (DbFurnPreMdoelMax <= DbFurnPreNameID) {
      DbFurnPreNameID = 0;
    }
    if (DbFurnPreNameID < 0) {
      DbFurnPreNameID = DbFurnPreMdoelMax + -1;
    }
    name = DbFurnPreGetObjName__Fii(DbFurnPreBuffID,DbFurnPreNameID);
    if (bVar2 || bVar1) {
      DbFurnPrePos = (float *)0x0;
      DbFurnPreObjID = 0;
      DbFurnPreObjMax = DbFurnPreGetObjNum__FiPc(DbFurnPreBuffID,name);
    }
    if (((((pad[0].one & 2U) != 0) && (-1 < DbFurnPreBuffID)) && (-1 < DbFurnPreObjID)) &&
       (name != (char *)0x0)) {
      pSGDTop = (SGDFILEHEADER *)FurnCtlGetModelAddr__FiPc(DbFurnPreBuffID,name);
      room_no = GetPlyrAreaNo__Fv();
      pLightData = MapDrawGetLightPtr__Fi(room_no);
      gra3dSetLightData__FPC14GRA3DLIGHTDATAPCf(pLightData,(float *)0x0);
      DbFurnPrePos = DbFurnPreGetDat__FiPci(DbFurnPreBuffID,name,DbFurnPreObjID);
      pos[0] = *DbFurnPrePos;
      pos[1] = DbFurnPrePos[1];
      pos[2] = DbFurnPrePos[2];
      pos[3] = 1.0;
      _gra3dDrawSGD__FP13SGDFILEHEADER13SGDRENDERTYPEP13SGDCOORDINATEi
                (pSGDTop,SRT_CLEARPRELIGHTING,(SGDCOORDINATE *)0x0,-1);
      gra3dExecPrelight__FP13SGDFILEHEADERPCfT1(pSGDTop,pos,g_v0000);
    }
    SetString2__FiffiUcUcUcPCce(0,20.0,20.0,1,0x80,0x80,0x80,s__s__d_003eeb78);
    SetString2__FiffiUcUcUcPCce(0,20.0,40.0,1,0x80,0x80,0x80,"now%d max%d");
    if (DbFurnPrePos != (float *)0x0) {
      SetString2__FiffiUcUcUcPCce(0,20.0,60.0,1,0x80,0x80,0x80,"pos %f %f %f");
    }
  }
  return;
}

char* char * _fixed_array_verifyrange<char>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_646);
  return (char *)v;
}
