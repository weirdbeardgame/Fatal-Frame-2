// STATUS: NOT STARTED

#include "RegDat.h"

typedef struct {
	int st_num;
	MB_OUT_RECT *dat;
} RD_REG_ST_DAT;

struct fixed_array_base<RD_REG_ST_DAT,14,RD_REG_ST_DAT[14]> {
protected:
	RD_REG_ST_DAT m_aData[14];
	
public:
	fixed_array_base<RD_REG_ST_DAT,14,RD_REG_ST_DAT[14]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	RD_REG_ST_DAT& operator[]();
	RD_REG_ST_DAT& operator[]();
	RD_REG_ST_DAT* data();
	RD_REG_ST_DAT* begin();
	RD_REG_ST_DAT* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<RD_REG_ST_DAT,14> : fixed_array_base<RD_REG_ST_DAT,14,RD_REG_ST_DAT[14]> {
};

typedef struct {
	fixed_array<RD_REG_ST_DAT,14> StPtrList;
	char *RegDatPtr;
	int LabVecID;
	int LabVecNum;
	MB_OUT_RECT *LabVecPtr;
	int type_id;
	int type_search_num;
	MB_OUT_SECTION *type_search_p;
} RD_REG_HEAD;

struct fixed_array_base<RD_REG_HEAD,8,RD_REG_HEAD[8]> {
protected:
	RD_REG_HEAD m_aData[8];
	
public:
	fixed_array_base<RD_REG_HEAD,8,RD_REG_HEAD[8]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	RD_REG_HEAD& operator[]();
	RD_REG_HEAD& operator[]();
	RD_REG_HEAD* data();
	RD_REG_HEAD* begin();
	RD_REG_HEAD* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<RD_REG_HEAD,8> : fixed_array_base<RD_REG_HEAD,8,RD_REG_HEAD[8]> {
};

static int RegDatNoRegNum = 0;
static int RegDatHitNum = 0;
static fixed_array<RD_REG_HEAD,8> RegDatBuff;
static fixed_array<int,8> RegDatHitList;
static fixed_array<int,8> RegDatNoRegList;
unsigned char RD_REG_HEAD type_info node[8];
unsigned char RD_REG_ST_DAT type_info node[8];

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x39f860;
	
  g3ddbgAssert__FbPCce(false,str_574);
  return (type_info *)v;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf13RD_REG_ST_DAT(0x3ef178,_max);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf13RD_REG_ST_DAT(0x3ef180,_max);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf13RD_REG_ST_DAT(0x39f8a8,_max);
  }
  return (uint **)0x0;
}

int RegDatSetTopAddr(int buff_id, void *addr) {
	RD_REG_HEAD *hp;
	
  int iVar1;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z11RD_REG_HEAD_UiUi_PX01(buff_id,8);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  iVar1 = -1;
  if (buff_id * 0x8c != -0x421990) {
    RegDatBuff.field0_0x0.m_aData[buff_id].RegDatPtr = (char *)addr;
    iVar1 = 0;
  }
  return iVar1;
}

short unsigned int* RegDatGetStPtr(int buff_id, int reg_id) {
	RD_REG_HEAD *hp;
	int i;
	MB_OUT_SECTION *dp;
	
  short *psVar1;
  char *pcVar2;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z11RD_REG_HEAD_UiUi_PX01(buff_id,8);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  pcVar2 = (char *)0x0;
  if (buff_id * 0x8c != -0x421990) {
    pcVar2 = RegDatBuff.field0_0x0.m_aData[buff_id].RegDatPtr;
  }
  if (pcVar2 == (char *)0x0) {
    printf("***ERR!! %s(%d):");
    pcVar2 = "HEADER_ADDR_IS_NULL [%d]\n";
  }
  else {
    if (reg_id <= *(int *)(pcVar2 + 0x18)) {
      psVar1 = *(short **)(pcVar2 + 0x1c);
      if (reg_id < 1) {
        return psVar1;
      }
      do {
        reg_id = reg_id + -1;
        psVar1 = (short *)((int)psVar1 + (uint)(ushort)psVar1[1]);
      } while (reg_id != 0);
      return psVar1;
    }
    printf("***ERR!! %s(%d):");
    pcVar2 = " OUT_OF_ID [%d]\n";
  }
  printf(pcVar2);
  return (short *)0x0;
}

unsigned int RegDatGetStLabel(int buff_id, int reg_id) {
	RD_REG_HEAD *hp;
	int i;
	MB_OUT_SECTION *dp;
	
  int iVar1;
  char *pcVar2;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z11RD_REG_HEAD_UiUi_PX01(buff_id,8);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  pcVar2 = (char *)0x0;
  if (buff_id * 0x8c != -0x421990) {
    pcVar2 = RegDatBuff.field0_0x0.m_aData[buff_id].RegDatPtr;
  }
  if (pcVar2 == (char *)0x0) {
    printf("***ERR!! %s(%d):");
    pcVar2 = "HEADER_ADDR_IS_NULL [%d]\n";
  }
  else {
    if (reg_id <= *(int *)(pcVar2 + 0x18)) {
      iVar1 = *(int *)(pcVar2 + 0x1c);
      if (0 < reg_id) {
        do {
          reg_id = reg_id + -1;
          iVar1 = iVar1 + (uint)*(ushort *)(iVar1 + 2);
        } while (reg_id != 0);
      }
      goto LAB_00114f70;
    }
    printf("***ERR!! %s(%d):");
    pcVar2 = " OUT_OF_ID [%d]\n";
  }
  printf(pcVar2);
  iVar1 = 0;
LAB_00114f70:
  return *(uint *)(iVar1 + 4);
}

MB_OUT_RECT* RegDatGetVecPtr(int buff_id, int type) {
	RD_REG_HEAD *hp;
	
  MB_OUT_RECT *pMVar1;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z11RD_REG_HEAD_UiUi_PX01(buff_id,8);
                    /* end of inlined section */
  pMVar1 = (MB_OUT_RECT *)0x0;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  if ((uint)type < 0xe) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z13RD_REG_ST_DAT_UiUi_PX01(type,0xe);
    pMVar1 = RegDatBuff.field0_0x0.m_aData[buff_id].StPtrList.field0_0x0.m_aData[type].dat;
  }
                    /* end of inlined section */
  return pMVar1;
}

int RegDatGetVecNum(int buff_id, int type) {
	RD_REG_HEAD *hp;
	
  int iVar1;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z11RD_REG_HEAD_UiUi_PX01(buff_id,8);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar1 = -1;
                    /* end of inlined section */
  if ((uint)type < 0xe) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z13RD_REG_ST_DAT_UiUi_PX01(type,0xe);
    iVar1 = RegDatBuff.field0_0x0.m_aData[buff_id].StPtrList.field0_0x0.m_aData[type].st_num;
  }
                    /* end of inlined section */
  return iVar1;
}

MB_OUT_RECT* RegDatGetVecPtrStart(int buff_id) {
	RD_REG_HEAD *hp;
	
  char *pcVar1;
  MB_OUT_RECT *pMVar2;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z11RD_REG_HEAD_UiUi_PX01(buff_id,8);
                    /* end of inlined section */
  pMVar2 = (MB_OUT_RECT *)0x0;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  pcVar1 = (char *)0x0;
  if (buff_id * 0x8c != -0x421990) {
    pcVar1 = RegDatBuff.field0_0x0.m_aData[buff_id].RegDatPtr;
  }
  if (pcVar1 != (char *)0x0) {
    pMVar2 = *(MB_OUT_RECT **)(pcVar1 + 0x14);
  }
  return pMVar2;
}

int RegDatGetVecNumAll(int buff_id) {
	RD_REG_HEAD *hp;
	
  char *pcVar1;
  int iVar2;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z11RD_REG_HEAD_UiUi_PX01(buff_id,8);
                    /* end of inlined section */
  iVar2 = -1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  pcVar1 = (char *)0x0;
  if (buff_id * 0x8c != -0x421990) {
    pcVar1 = RegDatBuff.field0_0x0.m_aData[buff_id].RegDatPtr;
  }
  if (pcVar1 != (char *)0x0) {
    iVar2 = *(int *)(pcVar1 + 0x10);
  }
  return iVar2;
}

MB_OUT_RECT* RegDatGetNextVecPtr(MB_OUT_RECT *mst) {
  return (MB_OUT_RECT *)((int)mst->pad + ((ushort)mst->size - 8));
}

int RegDatGetStID4Label(int buff_id, int label) {
	RD_REG_HEAD *hp;
	
  int iVar1;
  int iVar2;
  char *pcVar3;
  
  iVar1 = label % 1000;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z11RD_REG_HEAD_UiUi_PX01(buff_id,8);
                    /* end of inlined section */
  pcVar3 = (char *)0x0;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  if (buff_id * 0x8c != -0x421990) {
    pcVar3 = RegDatBuff.field0_0x0.m_aData[buff_id].RegDatPtr;
  }
  iVar2 = -1;
  if ((((pcVar3 != (char *)0x0) && (iVar2 = -2, *(int *)(pcVar3 + 4) == label / 1000)) &&
      (iVar2 = -3, iVar1 <= *(int *)(pcVar3 + 0x18))) && (iVar2 = iVar1, iVar1 < 0)) {
    iVar2 = -3;
  }
  return iVar2;
}

short unsigned int* RegDatGetStPtr4Label(int buff_id, int label) {
	int st_id;
	
  int reg_id;
  short *psVar1;
  
  reg_id = RegDatGetStID4Label__Fii(buff_id,label);
  if (-1 < reg_id) {
    psVar1 = RegDatGetStPtr__Fii(buff_id,reg_id);
    return psVar1;
  }
  return (short *)0x0;
}

short unsigned int* RegDatGetStPtr4Label2(int label) {
	int st_id;
	int i;
	MB_OUT_HEAD *bp;
	
  MB_OUT_HEAD *pMVar1;
  int reg_id;
  short *psVar2;
  int buff_id;
  
  buff_id = 0;
  while ((pMVar1 = RegDatGetHead__Fi(buff_id), pMVar1 == (MB_OUT_HEAD *)0x0 ||
         (pMVar1->area_id != label / 1000))) {
    buff_id = buff_id + 1;
    if (7 < buff_id) {
      return (short *)0x0;
    }
  }
  reg_id = RegDatGetStID4Label__Fii(buff_id,label);
  if (reg_id < 0) {
    return (short *)0x0;
  }
  psVar2 = RegDatGetStPtr__Fii(buff_id,reg_id);
  return psVar2;
}

short unsigned int* RegDatGetStPtr4Label3(int label, int type) {
	static char __FUNCTION__[22] = {
		/* [0] = */ 82,
		/* [1] = */ 101,
		/* [2] = */ 103,
		/* [3] = */ 68,
		/* [4] = */ 97,
		/* [5] = */ 116,
		/* [6] = */ 71,
		/* [7] = */ 101,
		/* [8] = */ 116,
		/* [9] = */ 83,
		/* [10] = */ 116,
		/* [11] = */ 80,
		/* [12] = */ 116,
		/* [13] = */ 114,
		/* [14] = */ 52,
		/* [15] = */ 76,
		/* [16] = */ 97,
		/* [17] = */ 98,
		/* [18] = */ 101,
		/* [19] = */ 108,
		/* [20] = */ 51,
		/* [21] = */ 0
	};
	MB_OUT_SECTION *hp;
	
  ushort *puVar1;
  
  puVar1 = (ushort *)RegDatGetStPtr4Label2__Fi(label);
  if ((puVar1 != (ushort *)0x0) && ((uint)*puVar1 != type)) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("RegDat No Type : label[%d]\n");
    puVar1 = (ushort *)0x0;
  }
  return (short *)puVar1;
}

int RegDatVecFind4Label(int buff_id, int label) {
	short unsigned int *sp;
	RD_REG_HEAD *hp;
	
  ushort *puVar1;
  int iVar2;
  MB_OUT_RECT *pMVar3;
  
  iVar2 = -1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  if ((uint)buff_id < 8) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z11RD_REG_HEAD_UiUi_PX01(buff_id,8);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
    puVar1 = (ushort *)RegDatGetStPtr4Label__Fii(buff_id,label);
    iVar2 = -2;
    if (puVar1 != (ushort *)0x0) {
      iVar2 = RegDatGetStID4Label__Fii(buff_id,label);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z11RD_REG_HEAD_UiUi_PX01(buff_id,8);
      RegDatBuff.field0_0x0.m_aData[buff_id].LabVecID = iVar2;
      _fixed_array_verifyrange__H1Z11RD_REG_HEAD_UiUi_PX01(buff_id,8);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      iVar2 = -3;
      if (-1 < RegDatBuff.field0_0x0.m_aData[buff_id].LabVecID) {
                    /* end of inlined section */
        iVar2 = RegDatGetVecNum__Fii(buff_id,(uint)*puVar1);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        _fixed_array_verifyrange__H1Z11RD_REG_HEAD_UiUi_PX01(buff_id,8);
        RegDatBuff.field0_0x0.m_aData[buff_id].LabVecNum = iVar2;
        _fixed_array_verifyrange__H1Z11RD_REG_HEAD_UiUi_PX01(buff_id,8);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        iVar2 = -4;
        if (0 < RegDatBuff.field0_0x0.m_aData[buff_id].LabVecNum) {
                    /* end of inlined section */
          pMVar3 = RegDatGetVecPtr__Fii(buff_id,(uint)*puVar1);
          iVar2 = -5;
          if (pMVar3 != (MB_OUT_RECT *)0x0) {
            iVar2 = 0;
          }
          RegDatBuff.field0_0x0.m_aData[buff_id].LabVecPtr = pMVar3;
        }
      }
    }
  }
  return iVar2;
}

MB_OUT_RECT* RegDatVecNextFind(int buff_id) {
	RD_REG_HEAD *hp;
	
  MB_OUT_RECT *pMVar1;
  int iVar2;
  MB_OUT_RECT *pMVar3;
  
  if ((uint)buff_id < 8) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z11RD_REG_HEAD_UiUi_PX01(buff_id,8);
                    /* end of inlined section */
    iVar2 = RegDatBuff.field0_0x0.m_aData[buff_id].LabVecNum + -1;
    RegDatBuff.field0_0x0.m_aData[buff_id].LabVecNum = iVar2;
    while (-1 < iVar2) {
      pMVar3 = RegDatBuff.field0_0x0.m_aData[buff_id].LabVecPtr;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z11RD_REG_HEAD_UiUi_PX01(buff_id,8);
      if (pMVar3->reg_id == RegDatBuff.field0_0x0.m_aData[buff_id].LabVecID) {
        pMVar3 = RegDatBuff.field0_0x0.m_aData[buff_id].LabVecPtr;
        pMVar1 = RegDatGetNextVecPtr__FP11MB_OUT_RECT(pMVar3);
        RegDatBuff.field0_0x0.m_aData[buff_id].LabVecPtr = pMVar1;
        return pMVar3;
      }
                    /* end of inlined section */
      pMVar3 = RegDatGetNextVecPtr__FP11MB_OUT_RECT
                         (RegDatBuff.field0_0x0.m_aData[buff_id].LabVecPtr);
      iVar2 = RegDatBuff.field0_0x0.m_aData[buff_id].LabVecNum;
      RegDatBuff.field0_0x0.m_aData[buff_id].LabVecPtr = pMVar3;
      iVar2 = iVar2 + -1;
      RegDatBuff.field0_0x0.m_aData[buff_id].LabVecNum = iVar2;
    }
  }
  else {
    printf("***ERR!! %s(%d):");
    printf(" BUFF_ID_ERR [%d]\n");
  }
  return (MB_OUT_RECT *)0x0;
}

int RegDatBuffID4Label(int labelID) {
	int i;
	MB_OUT_HEAD *bp;
	
  MB_OUT_HEAD *pMVar1;
  int buff_id;
  int iVar2;
  
  buff_id = 0;
  while( true ) {
    pMVar1 = RegDatGetHead__Fi(buff_id);
    iVar2 = buff_id + 1;
    if ((pMVar1 != (MB_OUT_HEAD *)0x0) && (pMVar1->area_id == labelID / 1000)) break;
    buff_id = iVar2;
    if (7 < iVar2) {
      return -1;
    }
  }
  return buff_id;
}

static int RegDatGetBuffFreeSpace() {
	int i;
	int j;
	
  char *pcVar1;
  char **ppcVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  ppcVar2 = &RegDatBuff.field0_0x0.m_aData[0].RegDatPtr;
  iVar5 = 0;
  iVar6 = 0;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z11RD_REG_HEAD_UiUi_PX01(iVar6,8);
    pcVar1 = *ppcVar2;
    ppcVar2 = ppcVar2 + 0x23;
    if (pcVar1 == (char *)0x0) {
                    /* end of inlined section */
      piVar3 = &RegDatBuff.field0_0x0.m_aData[0].StPtrList.field0_0x0.m_aData[0].st_num + iVar5;
      iVar5 = 0;
      do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        _fixed_array_verifyrange__H1Z11RD_REG_HEAD_UiUi_PX01(iVar6,8);
        _fixed_array_verifyrange__H1Z13RD_REG_ST_DAT_UiUi_PX01(iVar5,0xe);
        piVar3[1] = 0;
        _fixed_array_verifyrange__H1Z11RD_REG_HEAD_UiUi_PX01(iVar6,8);
        iVar4 = iVar5 + 1;
        _fixed_array_verifyrange__H1Z13RD_REG_ST_DAT_UiUi_PX01(iVar5,0xe);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        *piVar3 = 0;
        piVar3 = piVar3 + 2;
        iVar5 = iVar4;
                    /* end of inlined section */
      } while (iVar4 < 0xe);
      return iVar6;
    }
    iVar6 = iVar6 + 1;
    iVar5 = iVar5 + 0x23;
  } while (iVar6 < 8);
  return -1;
}

static RD_REG_HEAD* RegDatGetBuffListPtr(int id) {
  RD_REG_HEAD *pRVar1;
  
  pRVar1 = (RD_REG_HEAD *)0x0;
  if ((uint)id < 8) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z11RD_REG_HEAD_UiUi_PX01(id,8);
    pRVar1 = RegDatBuff.field0_0x0.m_aData + id;
  }
                    /* end of inlined section */
  return pRVar1;
}

void RegDatDeleteBuffList(int id) {
  if ((uint)id < 8) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z11RD_REG_HEAD_UiUi_PX01(id,8);
    RegDatBuff.field0_0x0.m_aData[id].RegDatPtr = (char *)0x0;
  }
                    /* end of inlined section */
  return;
}

void RegDatDeleteAllBuffList() {
	int i;
	
  int iVar1;
  int id;
  
  id = 0;
  do {
    iVar1 = id + 1;
    RegDatDeleteBuffList__Fi(id);
    id = iVar1;
  } while (iVar1 < 8);
  return;
}

static MB_OUT_RECT* RegDatGetVecPtrSub(MB_OUT_HEAD *stp, int RegStID, int *num) {
	int i;
	MB_OUT_RECT *vp;
	int reg_id;
	int i;
	MB_OUT_SECTION *dp;
	
  MB_OUT_SECTION *pMVar1;
  char *fmt;
  int iVar2;
  MB_OUT_RECT *pMVar3;
  int iVar4;
  
  iVar4 = 0;
  pMVar3 = stp->reg_vecp;
  if (0 < stp->reg_vec_num) {
    do {
      iVar2 = pMVar3->reg_id;
      if (stp == (MB_OUT_HEAD *)0x0) {
        printf("***ERR!! %s(%d):");
        fmt = "HEADER_ADDR_IS_NULL [%d]\n";
LAB_00115888:
        printf(fmt);
        pMVar1 = (MB_OUT_SECTION *)0x0;
      }
      else {
        if (stp->reg_st_num < iVar2) {
          printf("***ERR!! %s(%d):");
          fmt = " OUT_OF_ID [%d]\n";
          goto LAB_00115888;
        }
        pMVar1 = stp->reg_stp;
        if (0 < iVar2) {
          do {
            iVar2 = iVar2 + -1;
            pMVar1 = (MB_OUT_SECTION *)((int)&pMVar1->SecStID + (uint)(ushort)pMVar1->size);
          } while (iVar2 != 0);
        }
      }
      if (pMVar1 == (MB_OUT_SECTION *)0x0) {
        return (MB_OUT_RECT *)0x0;
      }
      if ((uint)(ushort)pMVar1->SecStID == RegStID) {
        *num = iVar4;
        return pMVar3;
      }
      if (RegStID < (int)(uint)(ushort)pMVar1->SecStID) {
        return (MB_OUT_RECT *)0x0;
      }
      iVar4 = iVar4 + 1;
      pMVar3 = (MB_OUT_RECT *)((int)pMVar3->pad + ((ushort)pMVar3->size - 8));
    } while (iVar4 < stp->reg_vec_num);
  }
  return (MB_OUT_RECT *)0x0;
}

static MB_OUT_RECT* RegDatGetVecPtrBin(MB_OUT_HEAD *stp, int RegStID) {
	int work;
	
  MB_OUT_RECT *pMVar1;
  int work;
  
  pMVar1 = RegDatGetVecPtrSub__FP11MB_OUT_HEADiPi(stp,RegStID,&work);
  return pMVar1;
}

static int RegDatGetVecNumBin(MB_OUT_HEAD *stp, int RegStID) {
	int cnt;
	int i;
	int st_num;
	MB_OUT_RECT *vp;
	int reg_id;
	int i;
	MB_OUT_SECTION *dp;
	
  MB_OUT_RECT *pMVar1;
  MB_OUT_RECT *pMVar2;
  MB_OUT_SECTION *pMVar3;
  char *fmt;
  int iVar4;
  int iVar5;
  int cnt;
  
  pMVar1 = RegDatGetVecPtrSub__FP11MB_OUT_HEADiPi(stp,RegStID,&cnt);
  pMVar2 = pMVar1;
  if ((pMVar1 != (MB_OUT_RECT *)0x0) &&
     (pMVar2 = (MB_OUT_RECT *)0x0, iVar5 = cnt, cnt < stp->reg_vec_num)) {
    do {
      iVar4 = pMVar1->reg_id;
      if (stp == (MB_OUT_HEAD *)0x0) {
        printf("***ERR!! %s(%d):");
        fmt = "HEADER_ADDR_IS_NULL [%d]\n";
LAB_00115a10:
        printf(fmt);
        pMVar3 = (MB_OUT_SECTION *)0x0;
      }
      else {
        if (stp->reg_st_num < iVar4) {
          printf("***ERR!! %s(%d):");
          fmt = " OUT_OF_ID [%d]\n";
          goto LAB_00115a10;
        }
        pMVar3 = stp->reg_stp;
        if (0 < iVar4) {
          do {
            iVar4 = iVar4 + -1;
            pMVar3 = (MB_OUT_SECTION *)((int)&pMVar3->SecStID + (uint)(ushort)pMVar3->size);
          } while (iVar4 != 0);
        }
      }
      if (pMVar3 == (MB_OUT_SECTION *)0x0) {
        return 0;
      }
      if ((uint)(ushort)pMVar3->SecStID != RegStID) {
        return (int)pMVar2;
      }
      iVar5 = iVar5 + 1;
      pMVar2 = (MB_OUT_RECT *)((int)&pMVar2->RectID + 1);
      pMVar1 = (MB_OUT_RECT *)((int)pMVar1->pad + ((ushort)pMVar1->size - 8));
    } while (iVar5 < stp->reg_vec_num);
  }
  return (int)pMVar2;
}

static void RegDatRegistPtrList(RD_REG_HEAD *hp) {
	int i;
	
  int iVar1;
  MB_OUT_RECT *pMVar2;
  RD_REG_HEAD *pRVar3;
  int RegStID;
  
  pRVar3 = hp;
  RegStID = 0;
  do {
    iVar1 = RegDatGetVecNumBin__FP11MB_OUT_HEADi((MB_OUT_HEAD *)hp->RegDatPtr,RegStID);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z13RD_REG_ST_DAT_UiUi_PX01(RegStID,0xe);
    (pRVar3->StPtrList).field0_0x0.m_aData[0].st_num = iVar1;
                    /* end of inlined section */
    pMVar2 = RegDatGetVecPtrBin__FP11MB_OUT_HEADi((MB_OUT_HEAD *)hp->RegDatPtr,RegStID);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
    iVar1 = RegStID + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z13RD_REG_ST_DAT_UiUi_PX01(RegStID,0xe);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    (pRVar3->StPtrList).field0_0x0.m_aData[0].dat = pMVar2;
    pRVar3 = (RD_REG_HEAD *)((pRVar3->StPtrList).field0_0x0.m_aData + 1);
    RegStID = iVar1;
                    /* end of inlined section */
  } while (iVar1 < 0xe);
  return;
}

static void RegDatAddOffset(MB_OUT_HEAD *hp, float x, float y, float z) {
	MB_OUT_RECT *rp;
	int i;
	int j;
	
  float *pfVar1;
  MB_OUT_RECT *mst;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  
  iVar3 = 0;
  mst = hp->reg_vecp;
  if (0 < hp->reg_vec_num) {
    do {
      pfVar1 = mst->vec + 2;
      iVar2 = 3;
      do {
        fVar4 = (*(float (*) [4])(pfVar1 + -2))[0];
        iVar2 = iVar2 + -1;
        fVar5 = *pfVar1;
        pfVar1[-1] = 0.0;
        pfVar1[1] = 1.0;
        (*(float (*) [4])(pfVar1 + -2))[0] = fVar4 + x;
        *pfVar1 = fVar5 + z;
        pfVar1 = pfVar1 + 4;
      } while (-1 < iVar2);
      iVar3 = iVar3 + 1;
      mst = RegDatGetNextVecPtr__FP11MB_OUT_RECT(mst);
    } while (iVar3 < hp->reg_vec_num);
  }
  return;
}

void RegDatSetOffset(int buff_id, float x, float y, float z) {
	RD_REG_HEAD *hp;
	
  MB_OUT_HEAD *hp;
  float y_00;
  float x_00;
  float z_00;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  hp = (MB_OUT_HEAD *)0x0;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z11RD_REG_HEAD_UiUi_PX01(buff_id,8);
                    /* end of inlined section */
  if (buff_id * 0x8c != -0x421990) {
    hp = (MB_OUT_HEAD *)RegDatBuff.field0_0x0.m_aData[buff_id].RegDatPtr;
  }
  x_00 = x - hp->Pos[0];
  y_00 = y - hp->Pos[1];
  z_00 = z - hp->Pos[2];
  hp->Pos[0] = x_00;
  hp->Pos[1] = y_00;
  hp->Pos[2] = z_00;
  RegDatAddOffset__FP11MB_OUT_HEADfff(hp,x_00,y_00,z_00);
  hp->Pos[0] = x;
  hp->Pos[2] = z;
  hp->Pos[1] = y;
  return;
}

int RegDatRegist(char *mst) {
	int id;
	RD_REG_HEAD *rp;
	unsigned int work;
	
  int iVar1;
  int iVar2;
  RD_REG_HEAD *hp;
  char *fmt;
  
  if (mst == (char *)0x0) {
    printf("***ERR!! %s(%d):");
    printf("REG_DAT_ADDR_IS_NULL\n");
    iVar1 = -1;
  }
  else {
    iVar1 = RegDatGetBuffFreeSpace__Fv();
    if (iVar1 < 0) {
      printf("***ERR!! %s(%d):");
      fmt = "NO_REG_DAT_SPACE\n";
    }
    else {
      iVar2 = strcmp(mst,&DAT_003ef190);
      if (iVar2 == 0) {
        *(char **)(mst + 0x1c) = mst + *(int *)(mst + 0x1c);
        *(float *)(mst + 0x24) = -*(float *)(mst + 0x24);
        *(float *)(mst + 0x28) = -*(float *)(mst + 0x28);
        *(char **)(mst + 0x14) = mst + *(int *)(mst + 0x14);
        hp = RegDatGetBuffListPtr__Fi(iVar1);
        hp->RegDatPtr = mst;
        RegDatRegistPtrList__FP11RD_REG_HEAD(hp);
        RegDatAddOffset__FP11MB_OUT_HEADfff
                  ((MB_OUT_HEAD *)mst,*(float *)(mst + 0x20),*(float *)(mst + 0x24),
                   *(float *)(mst + 0x28));
        return iVar1;
      }
      printf("***ERR!! %s(%d):");
      fmt = "NO_REG_FILE_DAT\n";
    }
    printf(fmt);
    iVar1 = -2;
  }
  return iVar1;
}

void RegDatInit() {
	int i;
	
  fixed_array<RD_REG_HEAD,8> *pfVar1;
  int iVar2;
  int iVar3;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  pfVar1 = &RegDatBuff;
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z11RD_REG_HEAD_UiUi_PX01(0,8);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  memset(&RegDatBuff,0,0x460);
  iVar2 = 0;
  do {
    _fixed_array_verifyrange__H1Z11RD_REG_HEAD_UiUi_PX01(iVar2,8);
    ((RD_REG_HEAD *)pfVar1)->RegDatPtr = (char *)0x0;
    _fixed_array_verifyrange__H1Z11RD_REG_HEAD_UiUi_PX01(iVar2,8);
    ((RD_REG_HEAD *)pfVar1)->LabVecID = -1;
    _fixed_array_verifyrange__H1Z11RD_REG_HEAD_UiUi_PX01(iVar2,8);
    ((RD_REG_HEAD *)pfVar1)->LabVecNum = -1;
                    /* end of inlined section */
    iVar3 = iVar2 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z11RD_REG_HEAD_UiUi_PX01(iVar2,8);
    ((RD_REG_HEAD *)pfVar1)->LabVecPtr = (MB_OUT_RECT *)0x0;
                    /* end of inlined section */
    pfVar1 = (fixed_array<RD_REG_HEAD,8> *)((int)pfVar1 + 0x8c);
    iVar2 = iVar3;
  } while (iVar3 < 8);
  RegDatDeleteAllBuffList__Fv();
  RegDatResetNoRegistList__Fv();
  return;
}

void RegDatDeleteBuff(int buff_id) {
  RegDatSetTopAddr__FiPv(buff_id,(void *)0x0);
  return;
}

int RegDatCheckBuff(int buff_id) {
	RD_REG_HEAD *hp;
	
  int iVar1;
  char *pcVar2;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z11RD_REG_HEAD_UiUi_PX01(buff_id,8);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  pcVar2 = (char *)0x0;
  if (buff_id * 0x8c != -0x421990) {
    pcVar2 = RegDatBuff.field0_0x0.m_aData[buff_id].RegDatPtr;
  }
  iVar1 = -1;
  if (pcVar2 != (char *)0x0) {
    iVar1 = 0;
  }
  return iVar1;
}

static int RegDatCheckHitRect(MB_OUT_RECT *mp, float *vPos) {
  int iVar1;
  uint uVar2;
  
  iVar1 = HcBaseIsInTriXZ__FPCfN30(vPos,(float *)mp->vec,(float *)mp->vec[1],(float *)mp->vec[2]);
  if (iVar1 == 0) {
    iVar1 = HcBaseIsInTriXZ__FPCfN30(vPos,(float *)mp->vec,(float *)mp->vec[2],(float *)mp->vec[3]);
    uVar2 = (uint)(iVar1 != 0);
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

MB_OUT_HEAD* RegDatGetHead(int buff_id) {
	RD_REG_HEAD *hp;
	
  MB_OUT_HEAD *pMVar1;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z11RD_REG_HEAD_UiUi_PX01(buff_id,8);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  pMVar1 = (MB_OUT_HEAD *)0x0;
  if (buff_id * 0x8c != -0x421990) {
    pMVar1 = (MB_OUT_HEAD *)RegDatBuff.field0_0x0.m_aData[buff_id].RegDatPtr;
  }
  return pMVar1;
}

int RegDatGetBuffIDG(int kai, float *vPos) {
	int i;
	int j;
	int cnt;
	MB_OUT_RECT *mp;
	MB_OUT_HEAD *bp;
	
  bool bVar1;
  int iVar2;
  MB_OUT_HEAD *pMVar3;
  MB_OUT_RECT *mp;
  int iVar4;
  int iVar5;
  fixed_array<int,8> *pfVar6;
  int iVar7;
  int iVar8;
  
  RegDatHitNum = 0;
  iVar8 = 0;
  do {
    pMVar3 = RegDatGetHead__Fi(iVar8);
    if ((pMVar3 != (MB_OUT_HEAD *)0x0) && ((kai == -1 || (pMVar3->kai == kai)))) {
      pfVar6 = &RegDatNoRegList;
      for (iVar4 = 0; iVar4 < RegDatNoRegNum; iVar4 = iVar4 + 1) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar4,8);
        iVar7 = *(int *)pfVar6;
        pfVar6 = (fixed_array<int,8> *)((int)pfVar6 + 4);
        if (iVar7 == iVar8) break;
      }
      if ((iVar4 == RegDatNoRegNum) &&
         (mp = RegDatGetVecPtr__Fii(iVar8,6), mp != (MB_OUT_RECT *)0x0)) {
        iVar4 = RegDatGetVecNum__Fii(iVar8,6);
        iVar7 = 0;
        while (bVar1 = iVar7 < iVar4, iVar7 = iVar7 + 1, bVar1) {
          iVar5 = RegDatCheckHitRect__FP11MB_OUT_RECTPCf(mp,vPos);
          iVar2 = RegDatHitNum;
          if (iVar5 != 0) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
            _fixed_array_verifyrange__H1Zi_UiUi_PX01(RegDatHitNum,8);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
            RegDatHitNum = RegDatHitNum + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
            RegDatHitList.field0_0x0.m_aData[iVar2] = iVar8;
                    /* end of inlined section */
            break;
          }
          mp = RegDatGetNextVecPtr__FP11MB_OUT_RECT(mp);
        }
      }
    }
    iVar8 = iVar8 + 1;
    if (7 < iVar8) {
      iVar8 = -1;
      if (((RegDatHitNum != 0) && (iVar8 = -2, RegDatHitNum != 8)) && (iVar8 = -3, RegDatHitNum < 2)
         ) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        _fixed_array_verifyrange__H1Zi_UiUi_PX01(0,8);
        iVar8 = RegDatHitList.field0_0x0.m_aData[0];
      }
                    /* end of inlined section */
      return iVar8;
    }
  } while( true );
}

void* RegDatGetStat(int kai, float *vPos, int type) {
  void *pvVar1;
  
  pvVar1 = RegDatGetRectAndStat__FPP11MB_OUT_RECTPviPfi
                     ((MB_OUT_RECT **)0x0,(void *)0x0,kai,vPos,type);
  return pvVar1;
}

void* RegDatGetRectAndStat(MB_OUT_RECT **ppRect, void *pRectStat, int kai, float *vPos, int type) {
	int buff_id;
	int i;
	void *pRet;
	int HitNum;
	int *pHitList;
	void *pStat;
	
  int iVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  void *pvVar5;
  void *pvVar6;
  void *pvVar7;
  int iVar8;
  
  pvVar7 = (void *)0x0;
  if (ppRect != (MB_OUT_RECT **)0x0) {
    *ppRect = (MB_OUT_RECT *)0x0;
  }
  iVar3 = RegDatGetBuffIDG__FiPCf(kai,vPos);
  if (iVar3 < 0) {
    if (iVar3 == -1) {
      pRectStat = (void *)0x0;
    }
    else {
      iVar3 = RegDatGetHitNum__Fv();
      piVar4 = RegDatGetHitList__Fv();
      if (pRectStat == (void *)0x0) {
        iVar8 = 0;
        pRectStat = pvVar7;
        do {
          bVar2 = iVar3 <= iVar8;
          iVar8 = iVar8 + 1;
          if (bVar2) {
            return pRectStat;
          }
          iVar1 = *piVar4;
          piVar4 = piVar4 + 1;
          pRectStat = RegDatGetRectAndStat2__FPP11MB_OUT_RECTPviPfi
                                (ppRect,(void *)0x0,iVar1,vPos,type);
        } while (pRectStat == (void *)0x0);
      }
      else {
        iVar8 = 0;
        do {
          bVar2 = iVar3 <= iVar8;
          iVar8 = iVar8 + 1;
          if (bVar2) {
            return pvVar7;
          }
          iVar1 = *piVar4;
          piVar4 = piVar4 + 1;
          pvVar5 = RegDatGetRectAndStat2__FPP11MB_OUT_RECTPviPfi(ppRect,pRectStat,iVar1,vPos,type);
          pvVar6 = pvVar5;
          if (pvVar7 != (void *)0x0) {
            pvVar6 = pvVar7;
          }
          if (pvVar5 != (void *)0x0) {
            pvVar7 = pvVar6;
          }
        } while (pvVar5 != pRectStat);
      }
    }
  }
  else {
    pRectStat = RegDatGetRectAndStat2__FPP11MB_OUT_RECTPviPfi(ppRect,pRectStat,iVar3,vPos,type);
  }
  return pRectStat;
}

void* RegDatGetRectAndStat2(MB_OUT_RECT **ppRect, void *pStat, int buff_id, float *vPos, int type) {
	int cnt;
	int j;
	MB_OUT_RECT *mp;
	void *pRet;
	MB_OUT_RECT *pRetMbOutRect;
	void *pTmpStat;
	
  bool bVar1;
  MB_OUT_RECT *mp;
  int iVar2;
  int iVar3;
  short *psVar4;
  short *psVar5;
  int iVar6;
  MB_OUT_RECT *pMVar7;
  MB_OUT_RECT *pMVar8;
  
  psVar5 = (short *)0x0;
  pMVar7 = (MB_OUT_RECT *)0x0;
  if (ppRect != (MB_OUT_RECT **)0x0) {
    *ppRect = (MB_OUT_RECT *)0x0;
  }
  mp = RegDatGetVecPtr__Fii(buff_id,type);
  if (mp == (MB_OUT_RECT *)0x0) {
    psVar5 = (short *)0x0;
  }
  else {
    iVar6 = 0;
    iVar2 = RegDatGetVecNum__Fii(buff_id,type);
    while (bVar1 = iVar6 < iVar2, iVar6 = iVar6 + 1, psVar4 = psVar5, pMVar8 = pMVar7, bVar1) {
      iVar3 = RegDatCheckHitRect__FP11MB_OUT_RECTPCf(mp,vPos);
      if ((iVar3 != 0) && (psVar4 = RegDatGetStPtr__Fii(buff_id,mp->reg_id), psVar4 != (short *)0x0)
         ) {
        pMVar8 = mp;
        if (psVar4 == (short *)pStat) break;
        if ((psVar4 != (short *)0x0) && (psVar5 == (short *)0x0)) {
          pMVar7 = mp;
          psVar5 = psVar4;
        }
      }
      mp = RegDatGetNextVecPtr__FP11MB_OUT_RECT(mp);
    }
    psVar5 = (short *)0x0;
    if ((psVar4 != (short *)0x0) && (psVar5 = psVar4, ppRect != (MB_OUT_RECT **)0x0)) {
      *ppRect = pMVar8;
    }
  }
  return psVar5;
}

int RegDatCheckSameRectStat(void *pStat, int kai, float *vPos, int type) {
	int buff_id;
	int i;
	int RetVal;
	int HitNum;
	
  int buff_id;
  bool bVar1;
  int iVar2;
  int *piVar3;
  void *pvVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = 0;
  if (pStat != (void *)0x0) {
    iVar2 = RegDatGetBuffIDG__FiPCf(kai,vPos);
    if (iVar2 < 0) {
      if (iVar2 == -1) {
        uVar6 = 0;
      }
      else {
        iVar5 = 0;
        iVar2 = RegDatGetHitNum__Fv();
        piVar3 = RegDatGetHitList__Fv();
        bVar1 = 0 < iVar2;
        do {
          iVar5 = iVar5 + 1;
          if (!bVar1) {
            return 0;
          }
          buff_id = *piVar3;
          piVar3 = piVar3 + 1;
          pvVar4 = RegDatGetRectAndStat2__FPP11MB_OUT_RECTPviPfi
                             ((MB_OUT_RECT **)0x0,pStat,buff_id,vPos,type);
          bVar1 = iVar5 < iVar2;
        } while (pStat != pvVar4);
        uVar6 = 1;
      }
    }
    else {
      pvVar4 = RegDatGetRectAndStat2__FPP11MB_OUT_RECTPviPfi
                         ((MB_OUT_RECT **)0x0,pStat,iVar2,vPos,type);
      uVar6 = (uint)(pStat == pvVar4);
    }
  }
  return uVar6;
}

int RegDatGetBuffID(float *vPos) {
  int iVar1;
  
  iVar1 = RegDatGetBuffIDG__FiPCf(-1,vPos);
  return iVar1;
}

int* RegDatGetHitList() {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Zi_UiUi_PX01(0,8);
  return (int *)&RegDatHitList;
}

int RegDatGetHitNum() {
  return RegDatHitNum;
}

void RegDatAddNoRegistList(int id) {
  int iVar1;
  
  if (7 < RegDatNoRegNum) {
    printf("***ERR!! %s(%d):");
    printf("NO_REGIST_LIST_MAX_OVER[%d]\n");
  }
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar1 = RegDatNoRegNum;
  _fixed_array_verifyrange__H1Zi_UiUi_PX01(RegDatNoRegNum,8);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  RegDatNoRegList.field0_0x0.m_aData[iVar1] = id;
                    /* end of inlined section */
  RegDatNoRegNum = RegDatNoRegNum + 1;
  return;
}

void RegDatResetNoRegistList() {
  RegDatNoRegNum = 0;
  return;
}

void RegDatGetStPtrStart(int buff_id, int type) {
	MB_OUT_HEAD *mp;
	
  char *pcVar1;
  MB_OUT_SECTION *pMVar2;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z11RD_REG_HEAD_UiUi_PX01(buff_id,8);
                    /* end of inlined section */
  if ((buff_id * 0x8c != -0x421990) &&
     (pcVar1 = RegDatBuff.field0_0x0.m_aData[buff_id].RegDatPtr, pcVar1 != (char *)0x0)) {
    pMVar2 = *(MB_OUT_SECTION **)(pcVar1 + 0x1c);
    RegDatBuff.field0_0x0.m_aData[buff_id].type_id = type;
    RegDatBuff.field0_0x0.m_aData[buff_id].type_search_num = 0;
    RegDatBuff.field0_0x0.m_aData[buff_id].type_search_p = pMVar2;
  }
  return;
}

MB_OUT_SECTION* RegDatGetNextStPtr(int buff_id) {
	MB_OUT_HEAD *mp;
	RD_REG_HEAD *hp;
	MB_OUT_SECTION *wp;
	
  ushort uVar1;
  char *pcVar2;
  uint uVar3;
  MB_OUT_SECTION *pMVar4;
  int iVar5;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z11RD_REG_HEAD_UiUi_PX01(buff_id,8);
                    /* end of inlined section */
  pMVar4 = (MB_OUT_SECTION *)0x0;
  if ((buff_id * 0x8c != -0x421990) &&
     (pcVar2 = RegDatBuff.field0_0x0.m_aData[buff_id].RegDatPtr, pcVar2 != (char *)0x0)) {
    iVar5 = RegDatBuff.field0_0x0.m_aData[buff_id].type_search_num;
    pMVar4 = (MB_OUT_SECTION *)0x0;
    if (iVar5 < *(int *)(pcVar2 + 0x18)) {
      uVar3 = RegDatBuff.field0_0x0.m_aData[buff_id].type_id;
      pMVar4 = RegDatBuff.field0_0x0.m_aData[buff_id].type_search_p;
      while( true ) {
        iVar5 = iVar5 + 1;
        RegDatBuff.field0_0x0.m_aData[buff_id].type_search_num = iVar5;
        uVar1 = pMVar4->SecStID;
        RegDatBuff.field0_0x0.m_aData[buff_id].type_search_p =
             (MB_OUT_SECTION *)((int)&pMVar4->SecStID + (uint)(ushort)pMVar4->size);
        if (uVar1 == uVar3) break;
        if (*(int *)(pcVar2 + 0x18) <= iVar5) {
          return (MB_OUT_SECTION *)0x0;
        }
        pMVar4 = RegDatBuff.field0_0x0.m_aData[buff_id].type_search_p;
      }
    }
  }
  return pMVar4;
}

RD_REG_HEAD* RD_REG_HEAD * _fixed_array_verifyrange<RD_REG_HEAD>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_574);
  return (type_info *)v;
}

RD_REG_ST_DAT* RD_REG_ST_DAT * _fixed_array_verifyrange<RD_REG_ST_DAT>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_574);
  return (type_info *)v;
}

int* int * _fixed_array_verifyrange<int>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_574);
  return (type_info *)v;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  return;
}

type_info& RD_REG_HEAD type_info function() {
  g3ddbgAssert__FbPCce(false,str_574);
  return (type_info *)v;
}

type_info& RD_REG_ST_DAT type_info function() {
  g3ddbgAssert__FbPCce(false,str_574);
  return (type_info *)v;
}

static void global constructors keyed to RegDatSetTopAddr() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
