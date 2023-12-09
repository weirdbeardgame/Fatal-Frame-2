// STATUS: NOT STARTED

#include "MapLoad.h"

struct fixed_array_base<MLOAD_HEAD,2,MLOAD_HEAD[2]> {
protected:
	MLOAD_HEAD m_aData[2];
	
public:
	fixed_array_base<MLOAD_HEAD,2,MLOAD_HEAD[2]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	MLOAD_HEAD& operator[]();
	MLOAD_HEAD& operator[]();
	MLOAD_HEAD* data();
	MLOAD_HEAD* begin();
	MLOAD_HEAD* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<MLOAD_HEAD,2> : fixed_array_base<MLOAD_HEAD,2,MLOAD_HEAD[2]> {
};

static int MapLoadDrawID = -1;
static int MapLoadMyPosLabel = -1;
static int MapLoadStat = 0;
static void *MapLoadDoorBuff = NULL;

static char *MapLoadFreeArea[2] = {
	/* [0] = */ NULL,
	/* [1] = */ NULL
};

static fixed_array<MLOAD_HEAD,2> MapLoadBuff;
unsigned char MLOAD_HEAD type_info node[8];
static int MapLoadFileIDList[5];

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x39e8e0;
	
  g3ddbgAssert__FbPCce(false,str_807);
  return (type_info *)v;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf10MLOAD_HEAD(0x3eeea0,_max);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf10MLOAD_HEAD(0x3eeea8,_max);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf10MLOAD_HEAD(0x39e928,_max);
  }
  return (uint **)0x0;
}

int MapLoadGetLabel(int _room_no) {
  return _room_no * 5 + 0x22c;
}

int MapLoadCheckDrawFlg(int buff_id) {
  uint uVar1;
  
  uVar1 = 0;
  if ((uint)buff_id < 2) {
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z10MLOAD_HEAD_UiUi_PX01(buff_id,2);
    uVar1 = (MapLoadBuff.field0_0x0.m_aData[buff_id].stat ^ 1U) & 1;
  }
                    /* end of inlined section */
  return uVar1;
}

int MapLoadCheckLoadNow() {
  return MapLoadStat & 1;
}

char* MapLoadInitFreeMem(int buff_id) {
  char *pcVar1;
  MLOAD_HEAD *pMVar2;
  
  pMVar2 = MapLoadGetHeadPtr__Fi(buff_id);
  pcVar1 = (char *)pMVar2->free_mem_top;
  MapLoadFreeArea[buff_id] = pcVar1;
  return pcVar1;
}

char* MapLoadGetFreeMemAddr(int buff_id) {
  char *pcVar1;
  
  pcVar1 = (char *)0x0;
  if ((uint)buff_id < 2) {
    pcVar1 = MapLoadFreeArea[buff_id];
  }
  return pcVar1;
}

void MapLoadSetFreeMemAddr(int buff_id, char *addr) {
	static char __FUNCTION__[22] = {
		/* [0] = */ 77,
		/* [1] = */ 97,
		/* [2] = */ 112,
		/* [3] = */ 76,
		/* [4] = */ 111,
		/* [5] = */ 97,
		/* [6] = */ 100,
		/* [7] = */ 83,
		/* [8] = */ 101,
		/* [9] = */ 116,
		/* [10] = */ 70,
		/* [11] = */ 114,
		/* [12] = */ 101,
		/* [13] = */ 101,
		/* [14] = */ 77,
		/* [15] = */ 101,
		/* [16] = */ 109,
		/* [17] = */ 65,
		/* [18] = */ 100,
		/* [19] = */ 100,
		/* [20] = */ 114,
		/* [21] = */ 0
	};
	int buff_size;
	
  char *pcVar1;
  
  if ((uint)buff_id < 2) {
    MapLoadFreeArea[buff_id] = addr;
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z10MLOAD_HEAD_UiUi_PX01(buff_id,2);
    pcVar1 = MapLoadBuff.field0_0x0.m_aData[buff_id].addr;
    _fixed_array_verifyrange__H1Z10MLOAD_HEAD_UiUi_PX01(1,2);
    _fixed_array_verifyrange__H1Z10MLOAD_HEAD_UiUi_PX01(0,2);
                    /* end of inlined section */
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
    if ((int)MapLoadBuff.field0_0x0.m_aData[1].addr - (int)MapLoadBuff.field0_0x0.m_aData[0].addr <=
        (int)addr - (int)pcVar1) {
                    /* end of inlined section */
      SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
      PrintAssertReal("ERR ROOM HEAP MAX OVER\n");
    }
  }
  return;
}

void* MapLoadGetDoorBuffPtr() {
  return MapLoadDoorBuff;
}

int MapLoadGetFileID(int stat) {
  int iVar1;
  
  iVar1 = -1;
  if ((uint)stat < 5) {
    iVar1 = MapLoadFileIDList[stat];
  }
  return iVar1;
}

MLOAD_HEAD* MapLoadGetHeadPtr(int id) {
  MLOAD_HEAD *pMVar1;
  
  pMVar1 = (MLOAD_HEAD *)0x0;
  if ((uint)id < 2) {
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z10MLOAD_HEAD_UiUi_PX01(id,2);
    pMVar1 = MapLoadBuff.field0_0x0.m_aData + id;
  }
                    /* end of inlined section */
  return pMVar1;
}

static int MapLoadCheckFreeAreaLabelID(int label) {
	int i;
	
  int iVar1;
  int iVar2;
  fixed_array<MLOAD_HEAD,2> *pfVar3;
  
  pfVar3 = &MapLoadBuff;
  iVar1 = 0;
  do {
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z10MLOAD_HEAD_UiUi_PX01(iVar1,2);
                    /* end of inlined section */
    iVar2 = iVar1 + 1;
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
    if (((fixed_array_base<MLOAD_HEAD,2,MLOAD_HEAD[2]> *)&((MLOAD_HEAD *)pfVar3)->labelID)->m_aData
        [0].labelID == label) {
      return iVar1;
    }
    pfVar3 = (fixed_array<MLOAD_HEAD,2> *)((int)pfVar3 + 0x13f0);
    iVar1 = iVar2;
                    /* end of inlined section */
  } while (iVar2 < 2);
  return -1;
}

int MapLoadGetBuffID4Label(int label) {
	int i;
	int j;
	
  short *psVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  iVar5 = 0x408e90;
  do {
    iVar3 = 0;
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
    do {
      _fixed_array_verifyrange__H1Z10MLOAD_HEAD_UiUi_PX01(iVar4,2);
      _fixed_array_verifyrange__H1Zc_UiUi_PX01(iVar3,4);
                    /* end of inlined section */
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
      pcVar2 = (char *)(iVar5 + iVar3);
                    /* end of inlined section */
      iVar3 = iVar3 + 1;
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
      if ((*pcVar2 != -1) &&
         (psVar1 = RegDatGetStPtr4Label__Fii((int)*pcVar2,label), psVar1 != (short *)0x0)) {
        return iVar4;
      }
    } while (iVar3 < 4);
    iVar4 = iVar4 + 1;
    iVar5 = iVar5 + 0x13f0;
    if (1 < iVar4) {
      return -1;
    }
  } while( true );
}

void MapLoadSetNoRegList() {
	int i;
	int j;
	
  int iVar1;
  MLOAD_HEAD *pMVar2;
  char *pcVar3;
  int iVar4;
  int buff_id;
  
  buff_id = 0;
  RegDatResetNoRegistList__Fv();
  do {
    iVar1 = MapLoadCheckDrawFlg__Fi(buff_id);
    if (iVar1 == 0) {
      pMVar2 = MapLoadGetHeadPtr__Fi(buff_id);
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
      iVar1 = 0;
      do {
        pcVar3 = (pMVar2->reg_id).field0_0x0.m_aData + iVar1;
        _fixed_array_verifyrange__H1Zc_UiUi_PX01(iVar1,4);
        iVar4 = iVar1 + 1;
        if (*pcVar3 != -1) {
          _fixed_array_verifyrange__H1Zc_UiUi_PX01(iVar1,4);
          RegDatAddNoRegistList__Fi((int)*pcVar3);
        }
                    /* end of inlined section */
        iVar1 = iVar4;
      } while (iVar4 < 4);
    }
    buff_id = buff_id + 1;
  } while (buff_id < 2);
  return;
}

MLOAD_HEAD* MapLoadGetHeader() {
	int b_id;
	
  uint id;
  MLOAD_HEAD *pMVar1;
  
  id = MapLoadCheckFreeAreaLabelID__Fi(MapLoadMyPosLabel);
  if (1 < id) {
    printf("***ERR!! %s(%d):");
    printf(" NOT_B_ID b_id[%d]\n");
    return (MLOAD_HEAD *)0x0;
  }
  pMVar1 = MapLoadGetHeadPtr__Fi(id);
  return pMVar1;
}

int MapLoadGetRegBuffID(int room_no, int kai) {
	int b_id;
	int i;
	MB_OUT_HEAD *mp;
	
  char cVar1;
  int iVar2;
  MB_OUT_HEAD *pMVar3;
  long lVar4;
  int iVar5;
  
  iVar2 = MapLoadGetLabel__Fi(room_no);
  iVar2 = MapLoadCheckFreeAreaLabelID__Fi(iVar2);
  if (iVar2 < 0) {
    printf("***ERR!! %s(%d):");
    MapLoadGetLabel__Fi(room_no);
    printf(" NO_MODEL_AREA :label[%d] room_no[%d] floor[%d]\n");
    lVar4 = -1;
  }
  else {
    if (kai < 0) {
      kai = 0xb;
    }
    iVar5 = 0;
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
    do {
      _fixed_array_verifyrange__H1Z10MLOAD_HEAD_UiUi_PX01(iVar2,2);
      _fixed_array_verifyrange__H1Zc_UiUi_PX01(iVar5,4);
      cVar1 = *(char *)(iVar2 * 0x13f0 + 0x408e90 + iVar5);
      lVar4 = (long)cVar1;
                    /* end of inlined section */
      iVar5 = iVar5 + 1;
      if (((lVar4 != -1) && (pMVar3 = RegDatGetHead__Fi((int)cVar1), pMVar3 != (MB_OUT_HEAD *)0x0))
         && (pMVar3->kai == kai)) goto LAB_0010bb64;
    } while (iVar5 < 4);
    lVar4 = -2;
  }
LAB_0010bb64:
  return (int)lVar4;
}

void MapLoadSetNowRoom(int room_no) {
  MapLoadMyPosLabel = MapLoadGetLabel__Fi(room_no);
  return;
}

void MapLoadSetDrawFlgSub(int buff_id, int sw) {
	MLOAD_HEAD *hp;
	
  MLOAD_HEAD *hp;
  
  hp = MapLoadGetHeadPtr__Fi(buff_id);
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  if (sw == 1) {
    if (hp->labelID < 0) {
      printf("***ERR!! %s(%d):");
      printf("DONOT_MODEL\n");
    }
    else {
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z10MLOAD_HEAD_UiUi_PX01(buff_id,2);
                    /* end of inlined section */
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
      MapLoadBuff.field0_0x0.m_aData[buff_id].stat =
           MapLoadBuff.field0_0x0.m_aData[buff_id].stat & 0xfffffffe;
      MapDrawInitFurn__FP10MLOAD_HEAD(hp);
    }
  }
  else {
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z10MLOAD_HEAD_UiUi_PX01(buff_id,2);
                    /* end of inlined section */
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
    MapLoadBuff.field0_0x0.m_aData[buff_id].stat = MapLoadBuff.field0_0x0.m_aData[buff_id].stat | 1;
    gra3dSetLightData__FPC14GRA3DLIGHTDATAPCf(&hp->lit_dat,(float *)0x0);
    MapDrawDeleteNoDraw__Fi(buff_id);
    MapPutSetFlg__Fii(buff_id,8);
  }
  MapLoadSetNoRegList__Fv();
  return;
}

static int MapLoadCheckSwitch(int buff_id, int sw) {
	int work;
	
  int iVar1;
  
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z10MLOAD_HEAD_UiUi_PX01(buff_id,2);
                    /* end of inlined section */
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
  iVar1 = 1;
  if ((-1 < MapLoadBuff.field0_0x0.m_aData[buff_id].labelID) || (sw != 1)) {
    _fixed_array_verifyrange__H1Z10MLOAD_HEAD_UiUi_PX01(buff_id,2);
                    /* end of inlined section */
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
    iVar1 = 1;
    if (((MapLoadBuff.field0_0x0.m_aData[buff_id].stat ^ (uint)(sw == 2) ^ 1) & 1) == 0) {
                    /* end of inlined section */
      printf("SAISETTEI HITUYOU[%d]:%s/////\n");
      iVar1 = 0;
    }
  }
  return iVar1;
}

void MapLoadSetDrawFlg(int flg, int sw) {
	int buff_id;
	
  uint buff_id;
  int iVar1;
  
  buff_id = MapLoadCheckFreeAreaLabelID__Fi(MapLoadMyPosLabel);
  if (1 < buff_id) {
    printf("***ERR!! %s(%d):");
    printf(" NO_BUFF_ID[%d]\n");
    return;
  }
  if (((flg & 2U) != 0) && (iVar1 = MapLoadCheckSwitch__Fii(buff_id ^ 1,sw), iVar1 == 0)) {
    MapLoadSetDrawFlgSub__Fii(buff_id ^ 1,sw);
  }
  if (((flg & 1U) != 0) && (iVar1 = MapLoadCheckSwitch__Fii(buff_id,sw), iVar1 == 0)) {
    MapLoadSetDrawFlgSub__Fii(buff_id,sw);
  }
  return;
}

void MapLoadSetDrawFlg2(int buff_id, int sw) {
  int iVar1;
  
  iVar1 = MapLoadCheckSwitch__Fii(buff_id,sw);
  if (iVar1 == 0) {
    MapLoadSetDrawFlgSub__Fii(buff_id,sw);
  }
  return;
}

void MapLoadSetDrawFlg3(int room_no, int sw) {
  int iVar1;
  
  iVar1 = MapLoadGetLabel__Fi(room_no);
  iVar1 = MapLoadCheckFreeAreaLabelID__Fi(iVar1);
  MapLoadSetDrawFlg2__Fii(iVar1,sw);
  return;
}

void MapLoadSetDrawOnly(int room_no) {
	int b_id;
	
  int label;
  uint buff_id;
  
  label = MapLoadGetLabel__Fi(room_no);
  buff_id = MapLoadCheckFreeAreaLabelID__Fi(label);
  if (buff_id == 0xffffffff) {
    MapLoadSetDrawFlg2__Fii(0,2);
    MapLoadSetDrawFlg2__Fii(1,2);
    return;
  }
  MapLoadSetDrawFlg2__Fii(buff_id,1);
  MapLoadSetDrawFlg2__Fii(buff_id ^ 1,2);
  return;
}

int* MapLoadGetFreeArea() {
	int b_id;
	
  uint uVar1;
  int iVar2;
  char *fmt;
  MLOAD_HEAD *hp;
  
  if ((MapLoadStat & 1U) == 0) {
    uVar1 = MapLoadCheckFreeAreaLabelID__Fi(MapLoadMyPosLabel);
    if (-1 < (int)uVar1) {
      uVar1 = uVar1 ^ 1;
      iVar2 = MapLoadCheckDrawFlg__Fi(uVar1);
      if (iVar2 != 0) {
        printf("***ERR!! %s(%d):");
        printf("ERR? NOW_DORWING_NEXT_ROOM\n");
        MapLoadSetDrawFlg__Fii(2,2);
      }
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z10MLOAD_HEAD_UiUi_PX01(uVar1,2);
      hp = MapLoadBuff.field0_0x0.m_aData + uVar1;
      MapDrawDeleteRoom__FP10MLOAD_HEAD(hp);
      _fixed_array_verifyrange__H1Z10MLOAD_HEAD_UiUi_PX01(uVar1,2);
      hp->labelID = -1;
      _fixed_array_verifyrange__H1Z10MLOAD_HEAD_UiUi_PX01(uVar1,2);
      return (int *)MapLoadBuff.field0_0x0.m_aData[uVar1].addr;
    }
    printf("***ERR!! %s(%d):");
    fmt = "CANNOT_GET_NOW_AREA\n";
  }
  else {
    printf("***ERR!! %s(%d):");
    fmt = "NO_FREE_SPACE_LOADING_NOW\n";
  }
  printf(fmt);
                    /* end of inlined section */
  return (int *)0x0;
}

void MapLoadSetOffSet(int room_no, float x, float y, float z) {
	MLOAD_HEAD *hp;
	int buff_id;
	int j;
	float work[4];
	
  int id;
  MLOAD_HEAD *hp;
  char *pcVar1;
  int iVar2;
  int iVar3;
  float work [4];
  
  id = MapLoadGetBuffID__Fi(room_no);
  if (-1 < id) {
    hp = MapLoadGetHeadPtr__Fi(id);
    iVar2 = 0;
    if (hp != (MLOAD_HEAD *)0x0) {
      do {
        pcVar1 = (hp->reg_id).field0_0x0.m_aData + iVar2;
        _fixed_array_verifyrange__H1Zc_UiUi_PX01(iVar2,4);
        iVar3 = iVar2 + 1;
        if (*pcVar1 != -1) {
          _fixed_array_verifyrange__H1Zc_UiUi_PX01(iVar2,4);
          RegDatSetOffset__Fifff((int)*pcVar1,x,y,z);
        }
                    /* end of inlined section */
        iVar2 = iVar3;
      } while (iVar3 < 4);
      work[0] = x - hp->pos[0];
      work[1] = x - hp->pos[1];
      work[2] = x - hp->pos[2];
      MhSetOffset2__FiPf(id,work);
      hp->pos[0] = x;
      hp->pos[1] = y;
      hp->pos[2] = z;
      MapDrawSetUpRoomCoordinate__FP10MLOAD_HEAD(hp);
    }
  }
  return;
}

float* MapLoadGetOffset(int room_no) {
	int b_id;
	MB_OUT_HEAD *mp;
	
  int iVar1;
  MB_OUT_HEAD *pMVar2;
  float *pfVar3;
  
  iVar1 = MapLoadGetLabel__Fi(room_no);
  iVar1 = MapLoadCheckFreeAreaLabelID__Fi(iVar1);
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  pfVar3 = (float *)0x0;
                    /* end of inlined section */
  if (-1 < iVar1) {
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z10MLOAD_HEAD_UiUi_PX01(iVar1,2);
    _fixed_array_verifyrange__H1Zc_UiUi_PX01(0,4);
    pMVar2 = RegDatGetHead__Fi((int)MapLoadBuff.field0_0x0.m_aData[iVar1].reg_id.field0_0x0.m_aData
                                    [0]);
                    /* end of inlined section */
    if (pMVar2 == (MB_OUT_HEAD *)0x0) {
      printf("***ERR!! %s(%d):");
      printf("CAN_NOT_READ_OFFSET\n");
      pfVar3 = (float *)0x0;
    }
    else {
      pfVar3 = pMVar2->Pos;
    }
  }
  return pfVar3;
}

void MapLoadGetOffsetVector(float *Center, int RoomNo) {
	float tmp_vec[4];
	float *pFloat;
	
  float *pfVar1;
  float tmp_vec [4];
  
  memset(tmp_vec,0,0x10);
  pfVar1 = (float *)0x0;
  if (-1 < RoomNo) {
    pfVar1 = MapLoadGetOffset__Fi(RoomNo);
  }
  if (pfVar1 != (float *)0x0) {
    tmp_vec[0] = *pfVar1;
    tmp_vec[1] = pfVar1[1];
    tmp_vec[2] = pfVar1[2];
    tmp_vec[3] = pfVar1[3];
  }
                    /* inlined from ../../graphics/graph3d/g3dxVu0.h */
  *Center = tmp_vec[0];
  Center[1] = tmp_vec[1];
  Center[2] = tmp_vec[2];
  Center[3] = tmp_vec[3];
  return;
}

int MapLoadGetBuffID4Pos(int kai, float *vPos) {
	int i;
	int j;
	int l;
	int ret_id;
	int *rec_list;
	
  bool bVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  MLOAD_HEAD *pMVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  
  iVar10 = -3;
  iVar3 = RegDatGetBuffIDG__FiPCf(kai,vPos);
  if (iVar3 == -1) {
    iVar10 = -1;
  }
  else {
    iVar3 = 0;
    piVar4 = RegDatGetHitList__Fv();
    do {
      iVar5 = MapLoadCheckDrawFlg__Fi(iVar3);
      if (iVar5 != 0) {
        iVar5 = 0;
        pMVar6 = MapLoadGetHeadPtr__Fi(iVar3);
        do {
          piVar8 = piVar4;
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* end of inlined section */
          for (iVar9 = 0; iVar7 = RegDatGetHitNum__Fv(), iVar9 < iVar7; iVar9 = iVar9 + 1) {
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
            _fixed_array_verifyrange__H1Zc_UiUi_PX01(iVar5,4);
                    /* end of inlined section */
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
            cVar2 = *(char *)piVar8;
            piVar8 = piVar8 + 1;
                    /* end of inlined section */
            if (((pMVar6->reg_id).field0_0x0.m_aData[iVar5] == cVar2) &&
               (bVar1 = -1 < iVar10, iVar10 = iVar3, bVar1)) {
              return -2;
            }
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < 4);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 2);
  }
  return iVar10;
}

int MapLoadGetBuffID(int room_no) {
	int label;
	
  int iVar1;
  
  iVar1 = MapLoadGetLabel__Fi(room_no);
  if (iVar1 != -1) {
    iVar1 = MapLoadCheckFreeAreaLabelID__Fi(iVar1);
    return iVar1;
  }
  return -1;
}

int MapLoadGetRoomNo4BuffID(int buff_id) {
  int iVar1;
  MLOAD_HEAD *pMVar2;
  
  iVar1 = -1;
  if ((uint)buff_id < 2) {
    pMVar2 = MapLoadGetHeadPtr__Fi(buff_id);
    iVar1 = (pMVar2->labelID + -0x22c) / 5;
  }
  return iVar1;
}

int MapLoadGetRoomNoNow() {
  int iVar1;
  
  iVar1 = MapLoadCheckFreeAreaLabelID__Fi(MapLoadMyPosLabel);
  iVar1 = MapLoadGetRoomNo4BuffID__Fi(iVar1);
  return iVar1;
}

int MapLoadSwitch() {
	MLOAD_HEAD *hp;
	
  MLOAD_HEAD *pMVar1;
  int iVar2;
  int iVar3;
  uint buff_id;
  
  pMVar1 = MapLoadGetHeadPtr__Fi(MapLoadDrawID);
  iVar2 = MapLoadCheckLoadNow__Fv();
  iVar3 = 1;
  if (iVar2 == 0) {
    if ((pMVar1->stat & 2U) == 0) {
      buff_id = MapLoadCheckFreeAreaLabelID__Fi(MapLoadMyPosLabel);
      MapLoadDrawID = buff_id ^ 1;
      MapLoadSetDrawFlg2__Fii(buff_id,2);
      MapLoadSetDrawFlg2__Fii(MapLoadDrawID,1);
    }
    else {
      MapLoadSetDrawFlg2__Fii(MapLoadDrawID ^ 1,2);
      MapLoadInitRoom__Fv();
    }
    pMVar1 = MapLoadGetHeadPtr__Fi(MapLoadDrawID);
    MapLoadSetNowRoom__Fi((pMVar1->labelID + -0x22c) / 5);
    iVar3 = 0;
  }
  return iVar3;
}

void MapLoadBg(int room_no) {
	int i;
	
  int iVar1;
  int *piVar2;
  
  iVar1 = MapLoadGetLabel__Fi(room_no);
  iVar1 = MapLoadCheckFreeAreaLabelID__Fi(iVar1);
  if (iVar1 < 0) {
    iVar1 = MapLoadCheckLoadNow__Fv();
    if (iVar1 != 0) {
      piVar2 = MapLoadFileIDList;
      iVar1 = 4;
      do {
        if (*piVar2 != -1) {
          FileLoadCancel(*piVar2,(undefined1 *)0x0,(void *)0x0);
          *piVar2 = -1;
        }
        iVar1 = iVar1 + -1;
        piVar2 = piVar2 + 1;
      } while (-1 < iVar1);
    }
    MapLoadMoveRoom__Fi(room_no);
    MapLoadStat = MapLoadStat | 4;
  }
  return;
}

int MapLoadDrawRoomOne(int room_no) {
	int buff_id;
	MLOAD_HEAD *hp;
	
  int id;
  int iVar1;
  MLOAD_HEAD *hp;
  
  id = MapLoadGetBuffID__Fi(room_no);
  iVar1 = -1;
  if (-1 < id) {
    hp = MapLoadGetHeadPtr__Fi(id);
    iVar1 = -2;
    if (hp != (MLOAD_HEAD *)0x0) {
      MapDrawRoomOne__FP10MLOAD_HEADP14GRA3DLIGHTDATA(hp,(GRA3DLIGHTDATA *)0x0);
      iVar1 = 0;
    }
  }
  return iVar1;
}

int MapLoadInitRoom() {
	MLOAD_HEAD *hp;
	
  int buff_id;
  MLOAD_HEAD *hp;
  
  hp = MapLoadGetHeadPtr__Fi(MapLoadDrawID);
  MapDrawInitRoom__FP10MLOAD_HEAD(hp);
  buff_id = MapLoadDrawID;
  hp->stat = hp->stat & 0xfffffffd;
  MapLoadStat = MapLoadStat & 0xfffffffe;
  MapLoadSetDrawFlg2__Fii(buff_id,1);
  return MapLoadDrawID;
}

void MapLoadDeleteRoom(int b_id) {
  MLOAD_HEAD *hp;
  
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z10MLOAD_HEAD_UiUi_PX01(b_id,2);
  hp = MapLoadBuff.field0_0x0.m_aData + b_id;
  MapDrawDeleteRoom__FP10MLOAD_HEAD(hp);
  _fixed_array_verifyrange__H1Z10MLOAD_HEAD_UiUi_PX01(b_id,2);
  hp->labelID = -1;
  return;
}

void MapLoadDeleteRoomAll() {
  MapLoadDeleteRoom__Fi(0);
  MapLoadDeleteRoom__Fi(1);
  return;
}

static u_int* MapLoadRegistReq(int label1, char *addr) {
	u_int w_addr;
	MLOAD_HEAD *hp;
	int i;
	
  MLOAD_HEAD *hp;
  MLOAD_HEAD *pMVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  int *piVar5;
  
  hp = MapLoadGetHeadPtr__Fi(MapLoadDrawID);
  MapLoadDrawID = MapLoadDrawID & 1;
  pMVar1 = MapLoadGetHeadPtr__Fi(MapLoadDrawID ^ 1);
  foot_seSetRoom__Fii((pMVar1->labelID + -0x22c) / 5,(label1 + -0x22c) / 5);
  MapDrawDeleteRoom__FP10MLOAD_HEAD(hp);
  MapLoadStat = MapLoadStat | 1;
  hp->stat = 3;
  hp->reg_dat_top = (uint)hp->addr;
  uVar2 = LoadReqGetAddr__FiUiPi(label1 + 2,(uint)hp->addr,MapLoadFileIDList + 2);
  hp->model_pak_addr = uVar2;
  iVar3 = gra3dIsMonotoneDrawEnable__Fv();
  if (iVar3 == 0) {
    uVar2 = LoadReqGetAddr__FiUiPi(label1,uVar2,MapLoadFileIDList);
  }
  else {
    uVar2 = LoadReqGetAddr__FiUiPi(label1 + 4,uVar2,MapLoadFileIDList);
  }
  hp->lit_addr = uVar2;
  uVar2 = LoadReqGetAddr__FiUiPi(label1 + 1,uVar2,MapLoadFileIDList + 1);
  hp->high_addr = uVar2;
  puVar4 = (uint *)LoadReqGetAddr__FiUiPi(label1 + 3,uVar2,MapLoadFileIDList + 3);
  if ((uint *)hp->high_addr == puVar4) {
    hp->high_addr = 0;
  }
  piVar5 = MapLoadFileIDList;
  iVar3 = 0;
  do {
    IsLoadEnd__Fi(*piVar5);
    piVar5 = piVar5 + 1;
    iVar3 = iVar3 + 1;
    printf("IsLoadEnd[%d] id = %x : flg = %d\n");
  } while (iVar3 < 5);
  hp->free_mem_top = (uint)puVar4;
  return puVar4;
}

int MapLoadMoveRoom(int room_no) {
	int id;
	int label1;
	MLOAD_HEAD *hp;
	
  int label;
  int iVar1;
  uint uVar2;
  MLOAD_HEAD *pMVar3;
  
  label = MapLoadGetLabel__Fi(room_no);
  printf("room_no[%d]label1 = %d : label2 = %d\n");
  if (label != MapLoadMyPosLabel) {
    iVar1 = MapLoadCheckFreeAreaLabelID__Fi(label);
    if (iVar1 < 0) {
      uVar2 = MapLoadCheckFreeAreaLabelID__Fi(MapLoadMyPosLabel);
      if ((int)uVar2 < 0) {
        uVar2 = 0;
      }
      MapLoadDrawID = uVar2 ^ 1;
      pMVar3 = MapLoadGetHeadPtr__Fi(MapLoadDrawID);
      pMVar3->labelID = label;
      MapLoadRegistReq__FiPc(label,pMVar3->addr);
    }
    else {
      MapLoadSetDrawFlg__Fii(2,1);
      MapLoadDrawID = iVar1;
    }
  }
  return MapLoadDrawID;
}

int MapLoadReload(int room_no) {
	int id;
	int label;
	MLOAD_HEAD *hp;
	
  int iVar1;
  int id;
  MLOAD_HEAD *hp;
  
  iVar1 = MapLoadGetLabel__Fi(room_no);
  id = MapLoadCheckFreeAreaLabelID__Fi(iVar1);
  if (id < 0) {
    printf("ERR NO_LABEL_ID[%d] label[%d]\n");
    iVar1 = -1;
  }
  else {
    MapLoadDrawID = id;
    hp = MapLoadGetHeadPtr__Fi(id);
    MapDrawDeleteRoom__FP10MLOAD_HEAD(hp);
    MapLoadMyPosLabel = iVar1;
    MapLoadRegistReq__FiPc(iVar1,hp->addr);
    iVar1 = 0;
  }
  return iVar1;
}

int MapLoadUpdatRoomDat(int door_id) {
	MLOAD_DOOR_DAT *dp;
	int buff_id;
	int id;
	
  MLOAD_DOOR_DAT *pMVar1;
  int iVar2;
  int iVar3;
  
  pMVar1 = MapDoorGetDatListPtr__Fi(door_id);
  if (pMVar1 == (MLOAD_DOOR_DAT *)0x0) {
    printf("***ERR!! %s(%d):");
    printf("NO_ROOM_DAT\n");
    iVar2 = -1;
  }
  else {
    iVar2 = MapLoadGetLabel__Fi(pMVar1->room_no[0]);
    iVar3 = 1;
    if (iVar2 != MapLoadMyPosLabel) {
      iVar2 = MapLoadGetLabel__Fi(pMVar1->room_no[1]);
      iVar3 = 0;
      if (iVar2 != MapLoadMyPosLabel) {
        printf("***ERR!! %s(%d):");
        printf("NO_NOW_ROOM_ID\n");
        return -2;
      }
    }
    iVar2 = MapLoadMoveRoom__Fi(pMVar1->room_no[iVar3]);
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z10MLOAD_HEAD_UiUi_PX01(iVar2,2);
    iVar2 = MapLoadBuff.field0_0x0.m_aData[iVar2].labelID;
  }
                    /* end of inlined section */
  return iVar2;
}

static int MapLoadCallFurn(int buff_id) {
	static char __FUNCTION__[16] = {
		/* [0] = */ 77,
		/* [1] = */ 97,
		/* [2] = */ 112,
		/* [3] = */ 76,
		/* [4] = */ 111,
		/* [5] = */ 97,
		/* [6] = */ 100,
		/* [7] = */ 67,
		/* [8] = */ 97,
		/* [9] = */ 108,
		/* [10] = */ 108,
		/* [11] = */ 70,
		/* [12] = */ 117,
		/* [13] = */ 114,
		/* [14] = */ 110,
		/* [15] = */ 0
	};
	int i;
	MLOAD_HEAD *hp;
	
  MLOAD_HEAD *hp;
  int iVar1;
  char *pcVar2;
  int iVar3;
  
  hp = MapLoadGetHeadPtr__Fi(buff_id);
  iVar1 = 0;
  if ((hp->stat & 8U) == 0) {
    iVar1 = IsLoadEnd__Fi(MapLoadFileIDList[2]);
    if (iVar1 == 0) {
      iVar1 = -1;
    }
    else {
      MapDrawInitRegDat__FP10MLOAD_HEAD(hp);
      MapLoadSetNoRegList__Fv();
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
      iVar1 = 0;
      do {
        pcVar2 = (hp->reg_id).field0_0x0.m_aData + iVar1;
        _fixed_array_verifyrange__H1Zc_UiUi_PX01(iVar1,4);
        iVar3 = iVar1 + 1;
        if (-1 < *pcVar2) {
          _fixed_array_verifyrange__H1Zc_UiUi_PX01(iVar1,4);
          pcVar2 = FurnLoadRegID__FiiPc(buff_id,(int)*pcVar2,(char *)hp->free_mem_top);
          hp->free_mem_top = (uint)pcVar2;
          _fixed_array_verifyrange__H1Z10MLOAD_HEAD_UiUi_PX01(1,2);
          _fixed_array_verifyrange__H1Z10MLOAD_HEAD_UiUi_PX01(0,2);
                    /* end of inlined section */
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
          if (hp->addr +
              ((int)MapLoadBuff.field0_0x0.m_aData[1].addr -
              (int)MapLoadBuff.field0_0x0.m_aData[0].addr) < (char *)hp->free_mem_top) {
                    /* end of inlined section */
            SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
            PrintAssertReal("ERR ROOM MEM SPACE OVER\n");
          }
        }
        iVar1 = iVar3;
      } while (iVar3 < 4);
      MapLoadFreeArea[MapLoadDrawID] = (char *)hp->free_mem_top;
      CurnCtlSetTopWorkAddr__FiPc(buff_id,MapLoadFreeArea[buff_id]);
      iVar1 = 1;
      hp->stat = hp->stat | 8;
    }
  }
  return iVar1;
}

int MapLoadMain() {
	int i;
	
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  
  if ((MapLoadStat & 1U) != 0) {
    iVar1 = MapLoadCallFurn__Fi(MapLoadDrawID);
    if (iVar1 != 0) {
      return -1;
    }
    iVar3 = 0;
    iVar1 = IsLoadEndAll__Fv();
    piVar4 = MapLoadFileIDList;
    if (iVar1 == 0) {
      return -1;
    }
    do {
      IsLoadEnd__Fi(*piVar4);
      piVar4 = piVar4 + 1;
      iVar3 = iVar3 + 1;
      printf("IsLoadEnd[%d] id = %x : flg = %d\n");
    } while (iVar3 < 5);
    uVar2 = MapLoadStat & 0xfffffffe;
    piVar4 = MapLoadFileIDList + 4;
    iVar1 = 4;
    do {
      iVar1 = iVar1 + -1;
      *piVar4 = -1;
      piVar4 = piVar4 + -1;
    } while (-1 < iVar1);
    if ((MapLoadStat & 2U) != 0) {
      MapLoadStat = uVar2;
      MapSkyRegist__Fv();
      uVar2 = MapLoadStat & 0xfffffffd;
    }
    if ((uVar2 & 4) == 0) {
      MapLoadStat = uVar2;
      MapLoadInitRoom__Fv();
    }
    else {
      MapLoadStat = uVar2 & 0xfffffffb;
    }
  }
  return 0;
}

u_int MapLoadSetMemSpace(u_int st_addr, u_int en_addr) {
  return (en_addr - st_addr >> 1) + st_addr & 0xfffffff0;
}

int MapLoadInit(int room_no) {
	u_int addr;
	int i;
	int j;
	int buff[2];
	
  ulong *puVar1;
  uint uVar2;
  void *pvVar3;
  char *pcVar4;
  undefined *puVar5;
  int *piVar6;
  fixed_array<MLOAD_HEAD,2> *pfVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int buff [2];
  
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
  pfVar7 = &MapLoadBuff;
                    /* end of inlined section */
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  iVar10 = 0x408e90;
  uVar2 = (int)buff + 7U & 7;
  puVar1 = (ulong *)(((int)buff + 7U) - uVar2);
  *puVar1 = *puVar1 & -1L << (uVar2 + 1) * 8 | (ulong)DAT_003eeed8 >> (7 - uVar2) * 8;
  buff = DAT_003eeed8;
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z10MLOAD_HEAD_UiUi_PX01(0,2);
  memset(&MapLoadBuff,0,0x27e0);
  iVar9 = 0;
  do {
    _fixed_array_verifyrange__H1Z10MLOAD_HEAD_UiUi_PX01(iVar9,2);
    ((fixed_array_base<MLOAD_HEAD,2,MLOAD_HEAD[2]> *)&((MLOAD_HEAD *)pfVar7)->labelID)->m_aData[0].
    labelID = -1;
    _fixed_array_verifyrange__H1Z10MLOAD_HEAD_UiUi_PX01(iVar9,2);
    ((MLOAD_HEAD *)pfVar7)->buff_id = iVar9;
    _fixed_array_verifyrange__H1Z10MLOAD_HEAD_UiUi_PX01(iVar9,2);
                    /* end of inlined section */
    iVar8 = 0;
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
    ((MLOAD_HEAD *)pfVar7)->addr = (char *)buff[iVar9];
    _fixed_array_verifyrange__H1Z10MLOAD_HEAD_UiUi_PX01(iVar9,2);
    ((MLOAD_HEAD *)pfVar7)->stat = 0;
    do {
      _fixed_array_verifyrange__H1Z10MLOAD_HEAD_UiUi_PX01(iVar9,2);
      _fixed_array_verifyrange__H1Zc_UiUi_PX01(iVar8,4);
      puVar5 = (undefined *)(iVar10 + iVar8);
                    /* end of inlined section */
      iVar8 = iVar8 + 1;
                    /* end of inlined section */
      *puVar5 = 0xff;
    } while (iVar8 < 4);
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
    iVar8 = iVar9 + 1;
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
    iVar10 = iVar10 + 0x13f0;
    _fixed_array_verifyrange__H1Z10MLOAD_HEAD_UiUi_PX01(iVar9,2);
                    /* end of inlined section */
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
    ((MLOAD_HEAD *)pfVar7)->stat = ((MLOAD_HEAD *)pfVar7)->stat | 1;
    pfVar7 = (fixed_array<MLOAD_HEAD,2> *)((int)pfVar7 + 0x13f0);
    iVar9 = iVar8;
                    /* end of inlined section */
  } while (iVar8 < 2);
  MapLoadDrawID = 0;
  MapLoadStat = 0;
  MapLoadMyPosLabel = MapLoadGetLabel__Fi(room_no);
  iVar9 = 4;
  piVar6 = MapLoadFileIDList + 4;
  do {
    iVar9 = iVar9 + -1;
    *piVar6 = -1;
    piVar6 = piVar6 + -1;
  } while (-1 < iVar9);
  MapLoadSetDrawFlg__Fii(3,2);
  MapLoadSetNowRoom__Fi(room_no);
  MapObjInit__Fv();
  MapDoorInit__Fv();
  RegDatInit__Fv();
  FurnCtlInit__Fv();
  MapAnimInit__Fv();
  MapManimInit__Fv();
  FurnWorkInit__Fv();
  MapHitInit__Fv();
  MapSpInit__Fv();
                    /* end of inlined section */
  uVar2 = MapDoorAnimInit__FPUi((uint *)0xddbc00);
  pvVar3 = (void *)MapSkyInit__FUi(uVar2);
  MapLoadDoorBuff = pvVar3;
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z10MLOAD_HEAD_UiUi_PX01(0,2);
                    /* end of inlined section */
  MapLoadBuff.field0_0x0.m_aData[0].addr = (char *)((int)pvVar3 + 0x1ea00);
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  pcVar4 = (char *)MapLoadSetMemSpace__FUiUi((uint)MapLoadBuff.field0_0x0.m_aData[0].addr,0x15fbc00)
  ;
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z10MLOAD_HEAD_UiUi_PX01(1,2);
                    /* end of inlined section */
  MapLoadBuff.field0_0x0.m_aData[1].addr = pcVar4;
  if (-1 < room_no) {
    iVar8 = MapLoadGetLabel__Fi(room_no);
    iVar9 = MapLoadDrawID;
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z10MLOAD_HEAD_UiUi_PX01(MapLoadDrawID,2);
    iVar10 = MapLoadDrawID;
                    /* end of inlined section */
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
    MapLoadBuff.field0_0x0.m_aData[iVar9].labelID = iVar8;
    _fixed_array_verifyrange__H1Z10MLOAD_HEAD_UiUi_PX01(iVar10,2);
    MapLoadRegistReq__FiPc(MapLoadMyPosLabel,MapLoadBuff.field0_0x0.m_aData[iVar10].addr);
                    /* end of inlined section */
    MapLoadStat = MapLoadStat | 2;
  }
  return 0;
}

MLOAD_HEAD* MLOAD_HEAD * _fixed_array_verifyrange<MLOAD_HEAD>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_807);
  return (type_info *)v;
}

char* char * _fixed_array_verifyrange<char>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_807);
  return (type_info *)v;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
  return;
}

type_info& MLOAD_HEAD type_info function() {
  g3ddbgAssert__FbPCce(false,str_807);
  return (type_info *)v;
}

static void global constructors keyed to MapLoadGetLabel() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
