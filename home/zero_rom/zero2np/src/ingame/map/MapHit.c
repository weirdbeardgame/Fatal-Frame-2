// STATUS: NOT STARTED

#include "MapHit.h"

struct fixed_array_base<MAPHIT_HEAD,32,MAPHIT_HEAD[32]> {
protected:
	MAPHIT_HEAD m_aData[32];
	
public:
	fixed_array_base<MAPHIT_HEAD,32,MAPHIT_HEAD[32]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	MAPHIT_HEAD& operator[]();
	MAPHIT_HEAD& operator[]();
	MAPHIT_HEAD* data();
	MAPHIT_HEAD* begin();
	MAPHIT_HEAD* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<MAPHIT_HEAD,32> : fixed_array_base<MAPHIT_HEAD,32,MAPHIT_HEAD[32]> {
};

float MapHitDoorZ = 0.399999976f;
static float MapHitColLen = 0.f;

static float MapHitPoint[4][4] = {
	/* [0] = */ {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.399999976f,
		/* [3] = */ 1.f
	},
	/* [1] = */ {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ -0.399999976f,
		/* [3] = */ 1.f
	},
	/* [2] = */ {
		/* [0] = */ 18.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.399999976f,
		/* [3] = */ 1.f
	},
	/* [3] = */ {
		/* [0] = */ 18.f,
		/* [1] = */ 0.f,
		/* [2] = */ -0.399999976f,
		/* [3] = */ 1.f
	}
};

static fixed_array<MAPHIT_HEAD,32> MapHitRecList;
unsigned char MAPHIT_HEAD type_info node[8];
static int (*MapHitCallBack[3])(/* parameters unknown */);
static float MapHitDoorVec[2][4][4];
static int MapHitDoorID;
static float MapHitColPoint[2][4];

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x39e580;
	
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf11MAPHIT_HEAD(0x3eedc0,_max);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf11MAPHIT_HEAD(0x3eedc8,_max);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf11MAPHIT_HEAD(0x39e5c8,_max);
  }
  return (uint **)0x0;
}

float MapHitGetColLen() {
  return MapHitColLen;
}

float*[4] MapHitGetColPoint() {
  return MapHitColPoint;
}

void MapHitSetFlg(int id, int flg) {
	int i;
	
  fixed_array<MAPHIT_HEAD,32> *pfVar1;
  int iVar2;
  int iVar3;
  
  pfVar1 = &MapHitRecList;
  iVar2 = 0;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
    iVar3 = iVar2 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z11MAPHIT_HEAD_UiUi_PX01(iVar2,0x20);
                    /* end of inlined section */
    if (((fixed_array_base<MAPHIT_HEAD,32,MAPHIT_HEAD[32]> *)&((MAPHIT_HEAD *)pfVar1)->id)->m_aData
        [0].id == id) {
      ((MAPHIT_HEAD *)pfVar1)->flg = ((MAPHIT_HEAD *)pfVar1)->flg | flg;
    }
    pfVar1 = (fixed_array<MAPHIT_HEAD,32> *)((int)pfVar1 + 0x14);
    iVar2 = iVar3;
  } while (iVar3 < 0x20);
  return;
}

void MapHitDeleteFlg(int id, int flg) {
	int i;
	
  fixed_array<MAPHIT_HEAD,32> *pfVar1;
  int iVar2;
  int iVar3;
  
  pfVar1 = &MapHitRecList;
  iVar2 = 0;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
    iVar3 = iVar2 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z11MAPHIT_HEAD_UiUi_PX01(iVar2,0x20);
                    /* end of inlined section */
    if (((fixed_array_base<MAPHIT_HEAD,32,MAPHIT_HEAD[32]> *)&((MAPHIT_HEAD *)pfVar1)->id)->m_aData
        [0].id == id) {
      ((MAPHIT_HEAD *)pfVar1)->flg = ((MAPHIT_HEAD *)pfVar1)->flg & ~flg;
    }
    pfVar1 = (fixed_array<MAPHIT_HEAD,32> *)((int)pfVar1 + 0x14);
    iVar2 = iVar3;
  } while (iVar3 < 0x20);
  return;
}

static MAPHIT_HEAD* MapHitGetFreeArea(int id) {
	int i;
	
  int iVar1;
  int iVar2;
  fixed_array<MAPHIT_HEAD,32> *pfVar3;
  
  pfVar3 = &MapHitRecList;
  iVar1 = 0;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
    iVar2 = iVar1 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z11MAPHIT_HEAD_UiUi_PX01(iVar1,0x20);
                    /* end of inlined section */
    if (((MAPHIT_HEAD *)pfVar3)->id < 0) {
      ((MAPHIT_HEAD *)pfVar3)->id = id;
      return (MAPHIT_HEAD *)pfVar3;
    }
    pfVar3 = (fixed_array<MAPHIT_HEAD,32> *)((int)pfVar3 + 0x14);
    iVar1 = iVar2;
  } while (iVar2 < 0x20);
  printf("***ERR!! %s(%d):");
  printf("ERR! NO_FREE_SPACE[%d]\n");
  return (MAPHIT_HEAD *)0x0;
}

int MapHitRegistRec(int id, int stat, int key, float *rec) {
	MAPHIT_HEAD *rp;
	
  MAPHIT_HEAD *pMVar1;
  int iVar2;
  
  pMVar1 = MapHitGetFreeArea__Fi(id);
  iVar2 = -1;
  if (pMVar1 != (MAPHIT_HEAD *)0x0) {
    pMVar1->key = key;
    iVar2 = 0;
    pMVar1->stat = stat;
    pMVar1->rec = rec;
  }
  return iVar2;
}

void MapHitDeleteOne(int id) {
	int i;
	
  int iVar1;
  int iVar2;
  fixed_array<MAPHIT_HEAD,32> *pfVar3;
  
  pfVar3 = &MapHitRecList;
  iVar1 = 0;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
    iVar2 = iVar1 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z11MAPHIT_HEAD_UiUi_PX01(iVar1,0x20);
                    /* end of inlined section */
    if (((fixed_array_base<MAPHIT_HEAD,32,MAPHIT_HEAD[32]> *)&((MAPHIT_HEAD *)pfVar3)->id)->m_aData
        [0].id == id) {
      ((fixed_array_base<MAPHIT_HEAD,32,MAPHIT_HEAD[32]> *)&((MAPHIT_HEAD *)pfVar3)->id)->m_aData[0]
      .id = -1;
    }
    pfVar3 = (fixed_array<MAPHIT_HEAD,32> *)((int)pfVar3 + 0x14);
    iVar1 = iVar2;
  } while (iVar2 < 0x20);
  return;
}

void MapHitDeleteAll() {
	int i;
	
  int iVar1;
  int iVar2;
  fixed_array<MAPHIT_HEAD,32> *pfVar3;
  
  pfVar3 = &MapHitRecList;
  iVar1 = 0;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
    iVar2 = iVar1 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z11MAPHIT_HEAD_UiUi_PX01(iVar1,0x20);
                    /* end of inlined section */
    ((fixed_array_base<MAPHIT_HEAD,32,MAPHIT_HEAD[32]> *)&((MAPHIT_HEAD *)pfVar3)->id)->m_aData[0].
    id = -1;
    pfVar3 = (fixed_array<MAPHIT_HEAD,32> *)((int)pfVar3 + 0x14);
    iVar1 = iVar2;
  } while (iVar2 < 0x20);
  return;
}

void MapHitDeleteGroup(int a_id) {
	int i;
	
  int iVar1;
  int iVar2;
  fixed_array<MAPHIT_HEAD,32> *pfVar3;
  
  pfVar3 = &MapHitRecList;
  iVar1 = 0;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
    iVar2 = iVar1 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z11MAPHIT_HEAD_UiUi_PX01(iVar1,0x20);
                    /* end of inlined section */
    if (((fixed_array_base<MAPHIT_HEAD,32,MAPHIT_HEAD[32]> *)&((MAPHIT_HEAD *)pfVar3)->id)->m_aData
        [0].id / 1000 == a_id) {
      ((fixed_array_base<MAPHIT_HEAD,32,MAPHIT_HEAD[32]> *)&((MAPHIT_HEAD *)pfVar3)->id)->m_aData[0]
      .id = -1;
    }
    pfVar3 = (fixed_array<MAPHIT_HEAD,32> *)((int)pfVar3 + 0x14);
    iVar1 = iVar2;
  } while (iVar2 < 0x20);
  return;
}

void MapHitRegistCallback(int type, int (*func)(/* parameters unknown */)) {
  if ((uint)type < 3) {
    MapHitCallBack[type] = func;
  }
  return;
}

int MapHitCheckCol(float *pos, float r, int call_work, int key) {
	int i;
	int type;
	int ret;
	MAPHIT_DAT c_dat;
	
  uint uVar1;
  int iVar2;
  long lVar3;
  fixed_array<MAPHIT_HEAD,32> *pfVar4;
  int iVar5;
  undefined8 uVar6;
  MAPHIT_DAT c_dat;
  
  uVar6 = 0xffffffffffffffff;
  c_dat.pos = (float (*) [4])pos;
  c_dat.r = r;
  c_dat.call_work = call_work;
  if (MapHitCallBack[0] != (undefined1 *)0x0) {
    (*(code *)MapHitCallBack[0])(0,&c_dat,0);
  }
  pfVar4 = &MapHitRecList;
  iVar2 = 0;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
    iVar5 = iVar2 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z11MAPHIT_HEAD_UiUi_PX01(iVar2,0x20);
                    /* end of inlined section */
    if (-1 < ((fixed_array_base<MAPHIT_HEAD,32,MAPHIT_HEAD[32]> *)&((MAPHIT_HEAD *)pfVar4)->id)->
             m_aData[0].id) {
      if (key < 0) {
        uVar1 = ((MAPHIT_HEAD *)pfVar4)->flg;
      }
      else {
        if (key != ((MAPHIT_HEAD *)pfVar4)->key) goto LAB_0010910c;
        uVar1 = ((MAPHIT_HEAD *)pfVar4)->flg;
      }
      if ((((uVar1 & 1) == 0) &&
          (iVar2 = HcBasePointRectangle__FPfN30PA3_ff
                             (&MapHitColLen,pos,(float *)MapHitColPoint,(float *)MapHitColPoint[1],
                              (float (*) [4])((MAPHIT_HEAD *)pfVar4)->rec,r), iVar2 != 0)) &&
         ((uVar6 = 1, MapHitCallBack[1] == (undefined1 *)0x0 ||
          (lVar3 = (*(code *)MapHitCallBack[1])(pfVar4,&c_dat,iVar2), lVar3 == 0)))) break;
    }
LAB_0010910c:
    pfVar4 = (fixed_array<MAPHIT_HEAD,32> *)((int)pfVar4 + 0x14);
    iVar2 = iVar5;
  } while (iVar5 < 0x20);
  if (MapHitCallBack[2] != (undefined1 *)0x0) {
    uVar6 = (*(code *)MapHitCallBack[2])(0,&c_dat,uVar6);
  }
  return (int)uVar6;
}

void MapHitInit() {
	int i;
	
  undefined1 **ppuVar1;
  int iVar2;
  int iVar3;
  fixed_array<MAPHIT_HEAD,32> *pfVar4;
  
  pfVar4 = &MapHitRecList;
  iVar3 = 0;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
    iVar2 = iVar3 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z11MAPHIT_HEAD_UiUi_PX01(iVar3,0x20);
                    /* end of inlined section */
    ((fixed_array_base<MAPHIT_HEAD,32,MAPHIT_HEAD[32]> *)&((MAPHIT_HEAD *)pfVar4)->id)->m_aData[0].
    id = -1;
    pfVar4 = (fixed_array<MAPHIT_HEAD,32> *)((int)pfVar4 + 0x14);
    iVar3 = iVar2;
  } while (iVar2 < 0x20);
  iVar3 = 2;
  ppuVar1 = MapHitCallBack + 2;
  do {
    iVar3 = iVar3 + -1;
    *ppuVar1 = (undefined1 *)0x0;
    ppuVar1 = ppuVar1 + -1;
  } while (-1 < iVar3);
  MapHitDoorID = -1;
  MapHitRegistCallback__FiPFP11MAPHIT_HEADP10MAPHIT_DATi_i
            (1,MapTesCallbackHit__FP11MAPHIT_HEADP10MAPHIT_DATi);
  return;
}

void MapHitTerm() {
  return;
}

void MapHitSetDoorRec(int id, int door_id, int key) {
  MapHitRegistRec__FiiiPf(id,0,key,(float *)MapHitDoorVec[door_id & 1]);
  MapHitDoorID = id;
  return;
}

void MapHitDeleteDoorFlg(int flg) {
  if (-1 < MapHitDoorID) {
    MapHitDeleteFlg__Fii(MapHitDoorID,flg);
  }
  return;
}

void MapHitSetDoorFlg(int flg) {
  if (-1 < MapHitDoorID) {
    MapHitSetFlg__Fii(MapHitDoorID,flg);
  }
  return;
}

void MapHitRegistDoorVec(int door_id, int vec_id, float *vec) {
	float *pv0;
	float *pv1;
	
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  
                    /* inlined from ../../graphics/graph3d/g3dxVu0.h */
  uVar2 = door_id & 1;
  uVar3 = vec_id & 3;
  uVar1 = *(undefined8 *)vec;
  fVar4 = vec[2];
  fVar5 = vec[3];
  MapHitDoorVec[uVar2][uVar3][0] = (float)uVar1;
  MapHitDoorVec[uVar2][uVar3][1] = (float)((ulong)uVar1 >> 0x20);
  MapHitDoorVec[uVar2][uVar3][2] = fVar4;
  MapHitDoorVec[uVar2][uVar3][3] = fVar5;
  return;
}

void MapHitDeleteDoorRec() {
  if (-1 < MapHitDoorID) {
    MapHitDeleteOne__Fi(MapHitDoorID);
    MapHitDoorID = -1;
  }
  return;
}

void MapHitSetDoorHit(int id, int type, float *mat[4]) {
	int i;
	float dx;
	float vec[4][4];
	
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float (*vec_00) [4];
  uint vec_id;
  uint uVar4;
  float *pfVar5;
  float fVar6;
  float vec [4] [4];
  
  fVar6 = 18.0;
  if (type != 1) {
    if (type < 2) {
      fVar6 = 0.0;
    }
    else {
      fVar6 = -18.0;
      if (type != 2) {
        fVar6 = 0.0;
      }
    }
  }
  pfVar5 = MapHitPoint + 2;
  vec_id = 0;
  do {
    fVar2 = MapHitDoorZ;
                    /* inlined from ../../graphics/graph3d/g3dxVu0.h */
    vec_00 = vec[vec_id];
                    /* end of inlined section */
    *pfVar5 = MapHitDoorZ;
    if ((vec_id & 1) == 0) {
      *pfVar5 = -fVar2;
    }
    uVar1 = *(undefined8 *)MapHitPoint[vec_id];
                    /* inlined from ../../graphics/graph3d/g3dxVu0.h */
    fVar2 = MapHitPoint[vec_id][2];
    fVar3 = MapHitPoint[vec_id][3];
    (*vec_00)[0] = (float)uVar1;
    vec[vec_id][1] = (float)((ulong)uVar1 >> 0x20);
    vec[vec_id][2] = fVar2;
    vec[vec_id][3] = fVar3;
                    /* end of inlined section */
    pfVar5 = pfVar5 + 4;
    (*vec_00)[0] = (*vec_00)[0] - fVar6;
    sceVu0ApplyMatrix(vec_00,mat,vec_00);
    uVar4 = vec_id + 1;
    MapHitRegistDoorVec__FiiPf(id,vec_id,(float *)vec_00);
    vec_id = uVar4;
  } while ((int)uVar4 < 4);
  return;
}

void MapHitSetDoorZ(float num) {
  MapHitDoorZ = num;
  return;
}

int MapTesCallbackHit(MAPHIT_HEAD *hp, MAPHIT_DAT *dp, int type) {
	float len;
	float *vec[4];
	
  float (*a) [4];
  float len;
  
  len = MapHitGetColLen__Fv();
  a = MapHitGetColPoint__Fv();
  if (type == 1) {
    MapHitCollisionPoint__FPfN20ff((float *)dp->pos,(float *)dp->pos,(float *)a,len,dp->r);
  }
  else {
    if (type != 2) {
      return 1;
    }
    MapHitCollisionLine__FPfN30ff
              ((float *)dp->pos,(float *)dp->pos,(float *)a,(float *)a[1],len,dp->r);
  }
  return 0;
}

MAPHIT_HEAD* MAPHIT_HEAD * _fixed_array_verifyrange<MAPHIT_HEAD>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  return;
}

type_info& MAPHIT_HEAD type_info function() {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

static void global constructors keyed to MapHitDoorZ() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
