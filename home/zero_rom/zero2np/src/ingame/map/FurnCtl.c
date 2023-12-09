// STATUS: NOT STARTED

#include "FurnCtl.h"

typedef struct {
	int buff_id;
	short int attr;
	short int flg;
	int size;
	char name[36];
	char *addr;
	char *model;
	char *mot;
} FURN_CTL;

struct fixed_array_base<FURN_CTL,48,FURN_CTL[48]> {
protected:
	FURN_CTL m_aData[48];
	
public:
	fixed_array_base<FURN_CTL,48,FURN_CTL[48]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	FURN_CTL& operator[]();
	FURN_CTL& operator[]();
	FURN_CTL* data();
	FURN_CTL* begin();
	FURN_CTL* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<FURN_CTL,48> : fixed_array_base<FURN_CTL,48,FURN_CTL[48]> {
};

typedef struct {
	int id;
	char *addr;
} FURN_WORK_HEAD;

static int FurnCtlFindBuffID = 0;
static int FurnCtlFindListID = -1;
static fixed_array<FURN_CTL,48> FurnCtlList;
unsigned char FURN_CTL type_info node[8];
static char *FurnCtlWorkList[2][2];
static FURN_WORK_HEAD FurnWorkList[32];

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x39dcf8;
	
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf8FURN_CTL(0x3eeb88,_max);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf8FURN_CTL(0x3eeb90,_max);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf8FURN_CTL(0x39dd40,_max);
  }
  return (uint **)0x0;
}

int FurnCtlCheckKakuType(char *f_name, char *type) {
	char *p;
	
  char *pcVar1;
  int iVar2;
  
  pcVar1 = strrchr(f_name,0x2e);
  if (pcVar1 != (char *)0x0) {
    iVar2 = strcmp(pcVar1 + 1,type);
    return iVar2;
  }
  return 1;
}

int FurnCtlGetType(char *name) {
  int iVar1;
  
  iVar1 = strncmp(name,&DAT_003eebc0,4);
  return (int)(iVar1 != 0);
}

void FurnCtlGetMdoelName(char *out, char *in) {
	char *p;
	
  char *pcVar1;
  
  strcpy(out,in);
  pcVar1 = strstr(out,&DAT_003eebc8);
  if (pcVar1 != (char *)0x0) {
    *pcVar1 = '\0';
  }
  pcVar1 = strstr(out,&DAT_003eebd0);
  if (pcVar1 != (char *)0x0) {
    *pcVar1 = '\0';
  }
  strcat(out,&DAT_003eebd8);
  return;
}

int FurnCtlGetID(char *name) {
	int i;
	int num;
	
  char *pcVar1;
  int iVar2;
  int iVar3;
  
  if ((*name == 'f') || (*name == 'd')) {
    iVar3 = 0;
    iVar2 = 1;
    do {
      pcVar1 = name + iVar2;
      iVar2 = iVar2 + 1;
      if ((""[*pcVar1 + 1] & 4U) == 0) goto LAB_00101cac;
      iVar3 = iVar3 * 10 + (int)*pcVar1 + -0x30;
    } while (iVar2 < 4);
  }
  else {
LAB_00101cac:
    printf("***ERR!! %s(%d):");
    printf("NO_FURN_OR_DOOR_NAME[%s]\n");
    iVar3 = -1;
  }
  return iVar3;
}

int FurnCtlGetAnimID(char *name, int type) {
  uint uVar1;
  int iVar2;
  char *fmt;
  
  iVar2 = FurnCtlGetID__FPc(name);
  uVar1 = iVar2 % 100;
  if (type == 0) {
    if (uVar1 < 0x12) {
      return uVar1 + 1;
    }
    printf("***ERR!! %s(%d):");
    fmt = "NO_CLOTH_ANIM_DATA[%d]\n";
  }
  else if (type == 1) {
    if (uVar1 < 0x20) {
      return uVar1 + 2;
    }
    printf("***ERR!! %s(%d):");
    fmt = "NO_BORN_ANIM_DATA[%d]\n";
  }
  else {
    printf("***ERR!! %s(%d):");
    fmt = "NO_ANIM_TYPE[%d]\n";
  }
  printf(fmt);
  return -1;
}

static FURN_CTL* FurnCtlGetFreeSpace(int buff_id) {
	static char __FUNCTION__[20] = {
		/* [0] = */ 70,
		/* [1] = */ 117,
		/* [2] = */ 114,
		/* [3] = */ 110,
		/* [4] = */ 67,
		/* [5] = */ 116,
		/* [6] = */ 108,
		/* [7] = */ 71,
		/* [8] = */ 101,
		/* [9] = */ 116,
		/* [10] = */ 70,
		/* [11] = */ 114,
		/* [12] = */ 101,
		/* [13] = */ 101,
		/* [14] = */ 83,
		/* [15] = */ 112,
		/* [16] = */ 97,
		/* [17] = */ 99,
		/* [18] = */ 101,
		/* [19] = */ 0
	};
	int i;
	
  int iVar1;
  int iVar2;
  fixed_array<FURN_CTL,48> *pfVar3;
  
  pfVar3 = &FurnCtlList;
  iVar1 = 0;
  do {
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
    iVar2 = iVar1 + 1;
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z8FURN_CTL_UiUi_PX01(iVar1,0x30);
                    /* end of inlined section */
    if (((FURN_CTL *)pfVar3)->buff_id < 0) {
      ((FURN_CTL *)pfVar3)->buff_id = buff_id;
      ((FURN_CTL *)pfVar3)->flg = 0;
      ((FURN_CTL *)pfVar3)->attr = 0;
      ((FURN_CTL *)pfVar3)->model = (char *)0x0;
      ((FURN_CTL *)pfVar3)->mot = (char *)0x0;
      return (FURN_CTL *)pfVar3;
    }
    pfVar3 = (fixed_array<FURN_CTL,48> *)((int)pfVar3 + 0x3c);
    iVar1 = iVar2;
  } while (iVar2 < 0x30);
  SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
  PrintAssertReal(" NO_FREE_SPACE\n");
  return (FURN_CTL *)0x0;
}

int FurnCtlRegist(int buff_id, char *name, char *addr, int attr, u_int size) {
	FURN_CTL *mp;
	
  FURN_CTL *pFVar1;
  int iVar2;
  
  pFVar1 = FurnCtlGetFreeSpace__Fi(buff_id);
  iVar2 = -1;
  if (pFVar1 != (FURN_CTL *)0x0) {
    strcpy(pFVar1->name,name);
    iVar2 = 0;
    pFVar1->size = size;
    pFVar1->addr = addr;
    pFVar1->attr = (ushort)attr;
  }
  return iVar2;
}

void FurnCtlClearBuff(int buff_id) {
	int i;
	
  int iVar1;
  int iVar2;
  fixed_array<FURN_CTL,48> *pfVar3;
  
  pfVar3 = &FurnCtlList;
  iVar1 = 0;
  do {
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z8FURN_CTL_UiUi_PX01(iVar1,0x30);
    iVar2 = iVar1 + 1;
    if (((fixed_array_base<FURN_CTL,48,FURN_CTL[48]> *)&((FURN_CTL *)pfVar3)->buff_id)->m_aData[0].
        buff_id == buff_id) {
      _fixed_array_verifyrange__H1Z8FURN_CTL_UiUi_PX01(iVar1,0x30);
      ((fixed_array_base<FURN_CTL,48,FURN_CTL[48]> *)&((FURN_CTL *)pfVar3)->buff_id)->m_aData[0].
      buff_id = -1;
    }
                    /* end of inlined section */
    pfVar3 = (fixed_array<FURN_CTL,48> *)((int)pfVar3 + 0x3c);
    iVar1 = iVar2;
  } while (iVar2 < 0x30);
  return;
}

void FurnCtlClearAll() {
	int i;
	
  int iVar1;
  int iVar2;
  fixed_array<FURN_CTL,48> *pfVar3;
  
  pfVar3 = &FurnCtlList;
  iVar1 = 0;
  do {
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
    iVar2 = iVar1 + 1;
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z8FURN_CTL_UiUi_PX01(iVar1,0x30);
    ((fixed_array_base<FURN_CTL,48,FURN_CTL[48]> *)&((FURN_CTL *)pfVar3)->buff_id)->m_aData[0].
    buff_id = -1;
                    /* end of inlined section */
    pfVar3 = (fixed_array<FURN_CTL,48> *)((int)pfVar3 + 0x3c);
    iVar1 = iVar2;
  } while (iVar2 < 0x30);
  return;
}

void FurnCtlFindInit(int buff_id) {
  FurnCtlFindBuffID = buff_id;
  FurnCtlFindListID = 0;
  return;
}

static FURN_CTL* FurnCtlGetNext() {
	int i;
	
  int *piVar1;
  int iVar2;
  FURN_CTL *pFVar3;
  FURN_CTL *pFVar4;
  
  if (-1 < FurnCtlFindListID) {
                    /* end of inlined section */
    if (FurnCtlFindListID < 0x30) {
      pFVar3 = FurnCtlList.field0_0x0.m_aData + FurnCtlFindListID;
      pFVar4 = pFVar3;
      iVar2 = FurnCtlFindListID;
      do {
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
        _fixed_array_verifyrange__H1Z8FURN_CTL_UiUi_PX01(iVar2,0x30);
        piVar1 = &pFVar3->buff_id;
        pFVar3 = pFVar3 + 1;
        if (*piVar1 == FurnCtlFindBuffID) {
          FurnCtlFindListID = iVar2 + 1;
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
          _fixed_array_verifyrange__H1Z8FURN_CTL_UiUi_PX01(iVar2,0x30);
          return pFVar4;
        }
                    /* end of inlined section */
        iVar2 = iVar2 + 1;
        pFVar4 = pFVar4 + 1;
      } while (iVar2 < 0x30);
    }
    FurnCtlFindListID = -1;
  }
  return (FURN_CTL *)0x0;
}

char* FurnCtlGetNextName() {
  FURN_CTL *pFVar1;
  char *pcVar2;
  
  pFVar1 = FurnCtlGetNext__Fv();
  pcVar2 = pFVar1->name;
  if (pFVar1 == (FURN_CTL *)0x0) {
    pcVar2 = (char *)0x0;
  }
  return pcVar2;
}

char* FurnCtlGetNextModelAddr() {
	FURN_CTL *fp;
	
  FURN_CTL *pFVar1;
  char *pcVar2;
  
  pFVar1 = FurnCtlGetNext__Fv();
  pcVar2 = (char *)0x0;
  if (pFVar1 != (FURN_CTL *)0x0) {
    pcVar2 = pFVar1->model;
  }
  return pcVar2;
}

FURN_CTL* FurnCtlGetHeadPtr(int buff_id, char *name) {
	int i;
	
  int iVar1;
  int iVar2;
  fixed_array<FURN_CTL,48> *pfVar3;
  
  pfVar3 = &FurnCtlList;
  iVar1 = 0;
  while( true ) {
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
    iVar2 = iVar1 + 1;
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z8FURN_CTL_UiUi_PX01(iVar1,0x30);
                    /* end of inlined section */
    if ((((FURN_CTL *)pfVar3)->buff_id == buff_id) &&
       (iVar1 = strncmp(((FURN_CTL *)pfVar3)->name,name,4), iVar1 == 0)) break;
    pfVar3 = (fixed_array<FURN_CTL,48> *)((int)pfVar3 + 0x3c);
    iVar1 = iVar2;
    if (0x2f < iVar2) {
      printf("***ERR!! %s(%d):");
      printf(" NO_MODEL_IN_FURN_CTL[%s] addr[%x]\n");
      return (FURN_CTL *)0x0;
    }
  }
  return (FURN_CTL *)pfVar3;
}

short int* FurnCtlGetFlgPtr(int buff_id, char *name) {
  FURN_CTL *pFVar1;
  ushort *puVar2;
  
  pFVar1 = FurnCtlGetHeadPtr__FiPc(buff_id,name);
  puVar2 = &pFVar1->flg;
  if (pFVar1 == (FURN_CTL *)0x0) {
    puVar2 = (ushort *)0x0;
  }
  return puVar2;
}

static void FurnCtlDeleteFlg(int buff_id, int flg) {
	int i;
	
  fixed_array<FURN_CTL,48> *pfVar1;
  int iVar2;
  int iVar3;
  
  pfVar1 = &FurnCtlList;
  iVar2 = 0;
  do {
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
    iVar3 = iVar2 + 1;
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z8FURN_CTL_UiUi_PX01(iVar2,0x30);
                    /* end of inlined section */
    if (((fixed_array_base<FURN_CTL,48,FURN_CTL[48]> *)&((FURN_CTL *)pfVar1)->buff_id)->m_aData[0].
        buff_id == buff_id) {
      ((FURN_CTL *)pfVar1)->flg = ((FURN_CTL *)pfVar1)->flg & ~(ushort)flg;
    }
    pfVar1 = (fixed_array<FURN_CTL,48> *)((int)pfVar1 + 0x3c);
    iVar2 = iVar3;
  } while (iVar3 < 0x30);
  return;
}

void FurnCtlDeleteDrawFlgAll(int buff_id) {
  FurnCtlDeleteFlg__Fii(buff_id,2);
  return;
}

void FurnCtlDeleteManimFlgAll(int buff_id) {
  FurnCtlDeleteFlg__Fii(buff_id,1);
  return;
}

short int FurnCtlGetAttr(int buff_id, char *name) {
	FURN_CTL *cp;
	
  FURN_CTL *pFVar1;
  ushort uVar2;
  
  pFVar1 = FurnCtlGetHeadPtr__FiPc(buff_id,name);
  uVar2 = 0xffff;
  if (pFVar1 != (FURN_CTL *)0x0) {
    uVar2 = pFVar1->attr;
  }
  return uVar2;
}

char* FurnCtlGetModelAddr(int buff_id, char *name) {
	FURN_CTL *cp;
	char *ret;
	
  FURN_CTL *pFVar1;
  FURN_CTL *pSGDHead;
  
  pFVar1 = FurnCtlGetHeadPtr__FiPc(buff_id,name);
  pSGDHead = pFVar1;
  if (pFVar1 != (FURN_CTL *)0x0) {
    if (pFVar1->attr == 1) {
      pSGDHead = (FURN_CTL *)MapLoadGetFreeMemAddr__Fi(buff_id);
      if (pSGDHead != (FURN_CTL *)0x0) {
        memcpy(pSGDHead,pFVar1->model,(long)pFVar1->size);
        MapLoadSetFreeMemAddr__FiPc(buff_id,pSGDHead->name + pFVar1->size + -0xc);
        sgdRemap__FP13SGDFILEHEADER((SGDFILEHEADER *)pSGDHead);
      }
    }
    else {
      pSGDHead = (FURN_CTL *)pFVar1->model;
    }
  }
  return (char *)pSGDHead;
}

int FurnCtlGetSize(int buff_id, char *name) {
	FURN_CTL *cp;
	
  FURN_CTL *pFVar1;
  int iVar2;
  
  pFVar1 = FurnCtlGetHeadPtr__FiPc(buff_id,name);
  iVar2 = 0;
  if (pFVar1 != (FURN_CTL *)0x0) {
    iVar2 = pFVar1->size;
  }
  return iVar2;
}

char* FurnCtlGetMotAddrEx(int buff_id, char *name, int iIndex) {
	FURN_CTL *cp;
	
  FURN_CTL *pFVar1;
  int iVar2;
  uint *puVar3;
  
  pFVar1 = FurnCtlGetHeadPtr__FiPc(buff_id,name);
  if (((pFVar1 != (FURN_CTL *)0x0) && (0 < iIndex)) &&
     (iVar2 = Pk2GetNum__FPUi((uint *)pFVar1->addr), iIndex < iVar2)) {
    puVar3 = Pk2GetAddr__FPUii((uint *)pFVar1->addr,iIndex);
    return (char *)puVar3;
  }
  return (char *)0x0;
}

char* FurnCtlGetMotAddr(int buff_id, char *name) {
	FURN_CTL *cp;
	
  FURN_CTL *pFVar1;
  char *pcVar2;
  
  pFVar1 = FurnCtlGetHeadPtr__FiPc(buff_id,name);
  pcVar2 = (char *)0x0;
  if (pFVar1 != (FURN_CTL *)0x0) {
    pcVar2 = pFVar1->mot;
  }
  return pcVar2;
}

int FurnCtlGetAddr(int buff_id, char *name, char **model, char **mot) {
	FURN_CTL *cp;
	
  FURN_CTL *pFVar1;
  int iVar2;
  
  pFVar1 = FurnCtlGetHeadPtr__FiPc(buff_id,name);
  iVar2 = -1;
  if (pFVar1 != (FURN_CTL *)0x0) {
    iVar2 = 0;
    *model = pFVar1->model;
    *mot = pFVar1->mot;
  }
  return iVar2;
}

void CurnCtlSetTopWorkAddr(int buff_id, char *addr) {
  FurnCtlWorkList[buff_id][0] = addr;
  return;
}

static int FurnCtlCheckFileType(int *mst) {
  int iVar1;
  int iVar2;
  
  iVar2 = -1;
  if (mst != (int *)0x0) {
    iVar1 = *mst;
    iVar2 = 0;
    if ((((iVar1 != 0x627a70) && (iVar2 = 1, iVar1 != 0x666870)) && (iVar2 = 2, iVar1 != 0x1050)) &&
       (iVar2 = 4, (mst[1] | mst[2] | mst[3]) != 0)) {
      iVar2 = -1;
    }
  }
  return iVar2;
}

void FurnCtlModelInit(int buff_id) {
	int i;
	FURN_CTL *cp;
	
  int iVar1;
  SGDFILEHEADER *pSVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  iVar5 = 0;
  do {
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z8FURN_CTL_UiUi_PX01(iVar4,0x30);
                    /* end of inlined section */
    if (*(int *)(FurnCtlList.field0_0x0.m_aData[0].name + iVar5 + -0xc) == buff_id) {
      iVar1 = FurnCtlCheckFileType__FPi
                        (*(int **)(FurnCtlList.field0_0x0.m_aData[0].name + iVar5 + 0x24));
      if (iVar1 == 2) {
        pSVar2 = *(SGDFILEHEADER **)(FurnCtlList.field0_0x0.m_aData[0].name + iVar5 + 0x24);
        *(SGDFILEHEADER **)(FurnCtlList.field0_0x0.m_aData[0].name + iVar5 + 0x28) = pSVar2;
        sgdRemap__FP13SGDFILEHEADER(pSVar2);
      }
      else if ((iVar1 < 2) || (4 < iVar1)) {
        printf("***ERR!! %s(%d):");
        printf(" CANNOT_INIT[%s]\n");
      }
      else {
        pSVar2 = (SGDFILEHEADER *)
                 Pk2GetAddr__FPUii(*(uint **)(FurnCtlList.field0_0x0.m_aData[0].name + iVar5 + 0x24)
                                   ,0);
        *(SGDFILEHEADER **)(FurnCtlList.field0_0x0.m_aData[0].name + iVar5 + 0x28) = pSVar2;
        if (pSVar2 != (SGDFILEHEADER *)0x0) {
          if (*(short *)(FurnCtlList.field0_0x0.m_aData[0].name + iVar5 + -8) != 1) {
            sgdRemap__FP13SGDFILEHEADER(pSVar2);
          }
          iVar1 = Pk2GetNum__FPUi(*(uint **)(FurnCtlList.field0_0x0.m_aData[0].name + iVar5 + 0x24))
          ;
          if (1 < iVar1) {
            puVar3 = Pk2GetAddr__FPUii(*(uint **)(FurnCtlList.field0_0x0.m_aData[0].name +
                                                 iVar5 + 0x24),1);
            *(uint **)(FurnCtlList.field0_0x0.m_aData[0].name + iVar5 + 0x2c) = puVar3;
          }
        }
      }
    }
    iVar4 = iVar4 + 1;
    iVar5 = iVar5 + 0x3c;
  } while (iVar4 < 0x30);
  return;
}

void FurnCtlInit() {
  FurnCtlClearAll__Fv();
  return;
}

void FurnCtlTerm() {
  return;
}

FURN_WORK_HEAD* FurnWorkGetFreeHead() {
	static char __FUNCTION__[20] = {
		/* [0] = */ 70,
		/* [1] = */ 117,
		/* [2] = */ 114,
		/* [3] = */ 110,
		/* [4] = */ 87,
		/* [5] = */ 111,
		/* [6] = */ 114,
		/* [7] = */ 107,
		/* [8] = */ 71,
		/* [9] = */ 101,
		/* [10] = */ 116,
		/* [11] = */ 70,
		/* [12] = */ 114,
		/* [13] = */ 101,
		/* [14] = */ 101,
		/* [15] = */ 72,
		/* [16] = */ 101,
		/* [17] = */ 97,
		/* [18] = */ 100,
		/* [19] = */ 0
	};
	int i;
	
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = 0;
  while( true ) {
    iVar2 = iVar2 + 1;
    if (*(int *)((int)&FurnWorkList[0].addr + iVar1) == 0) {
      return (FURN_WORK_HEAD *)((int)&FurnWorkList[0].id + iVar1);
    }
    if (0x1f < iVar2) break;
    iVar1 = iVar2 * 8;
  }
  SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
  PrintAssertReal("ERR! NO_FREE_SPACE\n");
  return (FURN_WORK_HEAD *)0x0;
}

char* FurnWorkAlloc(int ctl_id, int size) {
	FURN_WORK_HEAD *hp;
	
  FURN_WORK_HEAD *pFVar1;
  _HEAP_WRK *wrk;
  char *pcVar2;
  
  pFVar1 = FurnWorkGetFreeHead__Fv();
  if (pFVar1 == (FURN_WORK_HEAD *)0x0) {
    pcVar2 = (char *)0x0;
  }
  else {
    pFVar1->id = ctl_id;
    wrk = GetSystemHeapWrkP__Fv();
    pcVar2 = (char *)SAFE_MALLOC(wrk,(void *)0x0,size);
    pFVar1->addr = pcVar2;
  }
  return pcVar2;
}

void FurnWorkFree(int ctl_id) {
	int i;
	
  _HEAP_WRK *wrk;
  int iVar1;
  void **ppvVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar1 = 0;
  do {
    iVar4 = iVar4 + 1;
    ppvVar2 = (void **)((int)&FurnWorkList[0].addr + iVar1);
    piVar3 = (int *)((int)&FurnWorkList[0].id + iVar1);
    if ((*ppvVar2 != (void *)0x0) && (*piVar3 == ctl_id)) {
      wrk = GetSystemHeapWrkP__Fv();
      heapCtrlFree(wrk,*ppvVar2);
      *ppvVar2 = (void *)0x0;
      *piVar3 = -1;
    }
    iVar1 = iVar4 * 8;
  } while (iVar4 < 0x20);
  return;
}

void FurnWorkFreeAll() {
	int i;
	
  _HEAP_WRK *wrk;
  char **ppcVar1;
  int iVar2;
  
  ppcVar1 = &FurnWorkList[0].addr;
  iVar2 = 0x1f;
  do {
    iVar2 = iVar2 + -1;
    if (*ppcVar1 != (char *)0x0) {
      wrk = GetSystemHeapWrkP__Fv();
      heapCtrlFree(wrk,*ppcVar1);
      *ppcVar1 = (char *)0x0;
      ((FURN_WORK_HEAD *)(ppcVar1 + -1))->id = (int)&_heap_size;
    }
    ppcVar1 = ppcVar1 + 2;
  } while (-1 < iVar2);
  return;
}

void FurnWorkInit() {
  FurnWorkFreeAll__Fv();
  return;
}

void FurnWorkTrem() {
  return;
}

FURN_CTL* FURN_CTL * _fixed_array_verifyrange<FURN_CTL>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  return;
}

type_info& FURN_CTL type_info function() {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

static void global constructors keyed to FurnCtlCheckKakuType() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
