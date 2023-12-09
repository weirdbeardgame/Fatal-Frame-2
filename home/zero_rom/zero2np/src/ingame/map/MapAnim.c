// STATUS: NOT STARTED

#include "MapAnim.h"

typedef struct {
	short int id;
	short int flg;
	u_int frame;
	u_int *mot_p;
	float *mat[4][4];
	ANI_CTRL *ctl;
	float offset[4];
	float rot[4];
	RST_DATA rst;
	void *func_dat[2];
	int (*func)(/* parameters unknown */);
} MAP_ANIM_CTL;

struct fixed_array_base<MAP_ANIM_CTL,32,MAP_ANIM_CTL[32]> {
protected:
	MAP_ANIM_CTL m_aData[32];
	
public:
	fixed_array_base<MAP_ANIM_CTL,32,MAP_ANIM_CTL[32]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	MAP_ANIM_CTL& operator[]();
	MAP_ANIM_CTL& operator[]();
	MAP_ANIM_CTL* data();
	MAP_ANIM_CTL* begin();
	MAP_ANIM_CTL* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<MAP_ANIM_CTL,32> : fixed_array_base<MAP_ANIM_CTL,32,MAP_ANIM_CTL[32]> {
};

struct fixed_array_base<ANI_CTRL,2,ANI_CTRL[2]> {
protected:
	ANI_CTRL m_aData[2];
	
public:
	fixed_array_base<ANI_CTRL,2,ANI_CTRL[2]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	ANI_CTRL& operator[]();
	ANI_CTRL& operator[]();
	ANI_CTRL* data();
	ANI_CTRL* begin();
	ANI_CTRL* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<ANI_CTRL,2> : fixed_array_base<ANI_CTRL,2,ANI_CTRL[2]> {
};

struct MAPMANIM_MATRIX {
	short int flg;
	short int anim_id;
	int mat_id;
	char *mot_addr;
	MAPMANIM_MATRIX *next;
	float mat[4][4];
};

typedef struct {
	int id;
	int buff_id;
	char *mdl_addr;
	MAPMANIM_MATRIX *mat_addr;
	int mat_num;
} MAPMANIM_HEAD;

struct fixed_array_base<MAPMANIM_MATRIX,255,MAPMANIM_MATRIX[255]> {
protected:
	MAPMANIM_MATRIX m_aData[255];
	
public:
	fixed_array_base<MAPMANIM_MATRIX,255,MAPMANIM_MATRIX[255]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	MAPMANIM_MATRIX& operator[]();
	MAPMANIM_MATRIX& operator[]();
	MAPMANIM_MATRIX* data();
	MAPMANIM_MATRIX* begin();
	MAPMANIM_MATRIX* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<MAPMANIM_MATRIX,255> : fixed_array_base<MAPMANIM_MATRIX,255,MAPMANIM_MATRIX[255]> {
};

struct fixed_array_base<MAPMANIM_HEAD,64,MAPMANIM_HEAD[64]> {
protected:
	MAPMANIM_HEAD m_aData[64];
	
public:
	fixed_array_base<MAPMANIM_HEAD,64,MAPMANIM_HEAD[64]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	MAPMANIM_HEAD& operator[]();
	MAPMANIM_HEAD& operator[]();
	MAPMANIM_HEAD* data();
	MAPMANIM_HEAD* begin();
	MAPMANIM_HEAD* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<MAPMANIM_HEAD,64> : fixed_array_base<MAPMANIM_HEAD,64,MAPMANIM_HEAD[64]> {
};

static fixed_array<MAP_ANIM_CTL,32> MapAnimCtl;
static fixed_array<ANI_CTRL,2> MapAnimMotCtl;
static fixed_array<MAPMANIM_MATRIX,255> MapManimMatrxList;
static fixed_array<MAPMANIM_HEAD,64> MapManimList;
unsigned char MAP_ANIM_CTL type_info node[8];
unsigned char ANI_CTRL type_info node[8];
unsigned char MAPMANIM_MATRIX type_info node[8];
unsigned char MAPMANIM_HEAD type_info node[8];

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x39dfc8;
	
  g3ddbgAssert__FbPCce(false,str_849);
  return (type_info *)v;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf13MAPMANIM_HEAD(0x3eec78,_max);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf13MAPMANIM_HEAD(0x3eec80,_max);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf13MAPMANIM_HEAD(0x39e010,_max);
  }
  return (uint **)0x0;
}

static MAP_ANIM_CTL* MapAnimGetCtlPtr(u_int *mdl_p, float *pMat[4][4]) {
	int i;
	
  int iVar1;
  fixed_array<MAP_ANIM_CTL,32> *pfVar2;
  
  iVar1 = 0;
  pfVar2 = &MapAnimCtl;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  while ((((_fixed_array_verifyrange__H1Z12MAP_ANIM_CTL_UiUi_PX01(iVar1,0x20),
           ((((MAP_ANIM_CTL *)pfVar2)->flg ^ 1) & 1) != 0 ||
           (_fixed_array_verifyrange__H1Z12MAP_ANIM_CTL_UiUi_PX01(iVar1,0x20),
           ((MAP_ANIM_CTL *)pfVar2)->ctl == (ANI_CTRL *)0x0)) ||
          (_fixed_array_verifyrange__H1Z12MAP_ANIM_CTL_UiUi_PX01(iVar1,0x20),
          ((MAP_ANIM_CTL *)pfVar2)->ctl->base_p != (HeaderSection *)mdl_p)) ||
         (_fixed_array_verifyrange__H1Z12MAP_ANIM_CTL_UiUi_PX01(iVar1,0x20),
         ((MAP_ANIM_CTL *)pfVar2)->mat != pMat))) {
    iVar1 = iVar1 + 1;
    pfVar2 = (fixed_array<MAP_ANIM_CTL,32> *)((int)pfVar2 + 0x80);
    if (0x1f < iVar1) {
      return (MAP_ANIM_CTL *)0x0;
    }
  }
  _fixed_array_verifyrange__H1Z12MAP_ANIM_CTL_UiUi_PX01(iVar1,0x20);
  return (MAP_ANIM_CTL *)pfVar2;
}

static MAP_ANIM_CTL* MapAnimGetFreeCtlEx(int iFlg) {
	static char __FUNCTION__[20] = {
		/* [0] = */ 77,
		/* [1] = */ 97,
		/* [2] = */ 112,
		/* [3] = */ 65,
		/* [4] = */ 110,
		/* [5] = */ 105,
		/* [6] = */ 109,
		/* [7] = */ 71,
		/* [8] = */ 101,
		/* [9] = */ 116,
		/* [10] = */ 70,
		/* [11] = */ 114,
		/* [12] = */ 101,
		/* [13] = */ 101,
		/* [14] = */ 67,
		/* [15] = */ 116,
		/* [16] = */ 108,
		/* [17] = */ 69,
		/* [18] = */ 120,
		/* [19] = */ 0
	};
	int i;
	
  ANI_CTRL *pAVar1;
  int iVar2;
  fixed_array<MAP_ANIM_CTL,32> *pfVar3;
  
  iVar2 = 0;
  pfVar3 = &MapAnimCtl;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z12MAP_ANIM_CTL_UiUi_PX01(iVar2,0x20);
    if ((((MAP_ANIM_CTL *)pfVar3)->flg & 1) == 0) {
      _fixed_array_verifyrange__H1Z12MAP_ANIM_CTL_UiUi_PX01(iVar2,0x20);
      ((MAP_ANIM_CTL *)pfVar3)->id = (ushort)iVar2;
      _fixed_array_verifyrange__H1Z12MAP_ANIM_CTL_UiUi_PX01(iVar2,0x20);
      ((MAP_ANIM_CTL *)pfVar3)->frame = 0;
      _fixed_array_verifyrange__H1Z12MAP_ANIM_CTL_UiUi_PX01(iVar2,0x20);
                    /* end of inlined section */
      ((MAP_ANIM_CTL *)pfVar3)->flg = 1;
      if ((iFlg & 0x400U) == 0) {
                    /* end of inlined section */
        if ((iFlg & 0x800U) == 0) {
                    /* end of inlined section */
          pAVar1 = motGetANI_CTRL__Fv();
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
          _fixed_array_verifyrange__H1Z12MAP_ANIM_CTL_UiUi_PX01(iVar2,0x20);
          ((MAP_ANIM_CTL *)pfVar3)->ctl = pAVar1;
        }
        else {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
          _fixed_array_verifyrange__H1Z8ANI_CTRL_UiUi_PX01(1,2);
          motFreeANI_CTRL__FP8ANI_CTRL(MapAnimMotCtl.field0_0x0.m_aData + 1);
          _fixed_array_verifyrange__H1Z12MAP_ANIM_CTL_UiUi_PX01(iVar2,0x20);
          _fixed_array_verifyrange__H1Z8ANI_CTRL_UiUi_PX01(1,2);
          ((MAP_ANIM_CTL *)pfVar3)->ctl = MapAnimMotCtl.field0_0x0.m_aData + 1;
        }
      }
      else {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        _fixed_array_verifyrange__H1Z8ANI_CTRL_UiUi_PX01(0,2);
        motFreeANI_CTRL__FP8ANI_CTRL((ANI_CTRL *)&MapAnimMotCtl);
        _fixed_array_verifyrange__H1Z12MAP_ANIM_CTL_UiUi_PX01(iVar2,0x20);
        _fixed_array_verifyrange__H1Z8ANI_CTRL_UiUi_PX01(0,2);
        ((MAP_ANIM_CTL *)pfVar3)->ctl = (ANI_CTRL *)&MapAnimMotCtl;
      }
      _fixed_array_verifyrange__H1Z12MAP_ANIM_CTL_UiUi_PX01(iVar2,0x20);
      return (MAP_ANIM_CTL *)pfVar3;
    }
    iVar2 = iVar2 + 1;
                    /* end of inlined section */
    pfVar3 = (fixed_array<MAP_ANIM_CTL,32> *)((int)pfVar3 + 0x80);
  } while (iVar2 < 0x20);
  SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
  PrintAssertReal("MANIM_MAX_OVER\n");
  return (MAP_ANIM_CTL *)0x0;
}

static MAP_ANIM_CTL* MapAnimGetFreeCtl() {
  MAP_ANIM_CTL *pMVar1;
  
  pMVar1 = MapAnimGetFreeCtlEx__Fi(0);
  return pMVar1;
}

static MAP_ANIM_CTL* MapAnimGetCtlArea(int id) {
  MAP_ANIM_CTL *pMVar1;
  
  pMVar1 = (MAP_ANIM_CTL *)0x0;
  if ((uint)id < 0x20) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z12MAP_ANIM_CTL_UiUi_PX01(id,0x20);
    pMVar1 = MapAnimCtl.field0_0x0.m_aData + id;
  }
                    /* end of inlined section */
  return pMVar1;
}

int MapAnimCheckPlay(int id) {
	MAP_ANIM_CTL *hp;
	
  MAP_ANIM_CTL *pMVar1;
  uint uVar2;
  
  pMVar1 = MapAnimGetCtlArea__Fi(id);
  uVar2 = 0xffffffff;
  if (pMVar1 != (MAP_ANIM_CTL *)0x0) {
    uVar2 = (uint)((pMVar1->flg & 1) != 0);
  }
  return uVar2;
}

static MAP_ANIM_CTL* MapAnimGetUseHeader(int id) {
	MAP_ANIM_CTL *cp;
	
  MAP_ANIM_CTL *pMVar1;
  MAP_ANIM_CTL *pMVar2;
  
  pMVar1 = MapAnimGetCtlArea__Fi(id);
  pMVar2 = pMVar1;
  if ((pMVar1 != (MAP_ANIM_CTL *)0x0) &&
     (pMVar2 = (MAP_ANIM_CTL *)0x0, ((pMVar1->flg ^ 1) & 1) == 0)) {
    pMVar2 = pMVar1;
  }
  return pMVar2;
}

void MapAnimSetFlg(int id, int flg) {
	MAP_ANIM_CTL *cp;
	
  MAP_ANIM_CTL *pMVar1;
  
  pMVar1 = MapAnimGetUseHeader__Fi(id);
  if (pMVar1 != (MAP_ANIM_CTL *)0x0) {
    pMVar1->flg = pMVar1->flg | (ushort)flg;
  }
  return;
}

void MapAnimDeleteFlg(int id, int flg) {
	MAP_ANIM_CTL *cp;
	
  MAP_ANIM_CTL *pMVar1;
  
  pMVar1 = MapAnimGetUseHeader__Fi(id);
  if (pMVar1 != (MAP_ANIM_CTL *)0x0) {
    pMVar1->flg = pMVar1->flg & ~(ushort)flg;
  }
  return;
}

short int MapAnimGetFlg(int id) {
	MAP_ANIM_CTL *cp;
	
  MAP_ANIM_CTL *pMVar1;
  ushort uVar2;
  
  pMVar1 = MapAnimGetUseHeader__Fi(id);
  uVar2 = 0xffff;
  if (pMVar1 != (MAP_ANIM_CTL *)0x0) {
    uVar2 = pMVar1->flg;
  }
  return uVar2;
}

void MapAnimSetCallback(int anim_id, int (*func)(/* parameters unknown */), void *dat, void *dat2) {
	MAP_ANIM_CTL *cp;
	
  ushort uVar1;
  MAP_ANIM_CTL *pMVar2;
  
  pMVar2 = MapAnimGetUseHeader__Fi(anim_id);
  if (pMVar2 != (MAP_ANIM_CTL *)0x0) {
    pMVar2->func_dat[0] = dat;
    pMVar2->func_dat[1] = dat2;
    pMVar2->func = func;
    if (func == (undefined1 *)0x0) {
      uVar1 = pMVar2->flg & 0xfdff;
    }
    else {
      uVar1 = pMVar2->flg | 0x200;
    }
    pMVar2->flg = uVar1;
  }
  return;
}

u_int* MapAnimRegstMim(int id, u_int *mim_p, u_int *pkt_p) {
	u_int i;
	MAP_ANIM_CTL *cp;
	ANI_CTRL *ap;
	MIME_DAT *mim_dat;
	
  ANI_CTRL *pAVar1;
  MAP_ANIM_CTL *pMVar2;
  uint *puVar3;
  MIME_CTRL *pMVar4;
  MIME_DAT *mdat;
  int iVar5;
  uint uVar6;
  
  pMVar2 = MapAnimGetCtlArea__Fi(id);
  if (pMVar2 == (MAP_ANIM_CTL *)0x0) {
    puVar3 = (uint *)0x0;
  }
  else {
    puVar3 = (uint *)0x0;
    if (mim_p == (uint *)0x0) {
      pAVar1 = pMVar2->ctl;
      puVar3 = (uint *)GetPakTaleAddr__FPv((void *)0x0);
      pAVar1->mim_num = _o_c;
      pMVar4 = (MIME_CTRL *)motAlign128__FPUi(puVar3);
      pAVar1->mim = pMVar4;
      mdat = (MIME_DAT *)motAlign128__FPUi((uint *)(pMVar4 + 0x32));
      puVar3 = motAlign128__FPUi((uint *)(mdat + 0x32));
      puVar3 = mimInitMimeCtrl__FP9MIME_CTRLP8MIME_DATPUiN32
                         (pAVar1->mim,mdat,(uint *)0x0,pAVar1->mpk_p,puVar3,&pAVar1->mim_num);
      uVar6 = 0;
      if (pAVar1->mim_num != 0) {
        iVar5 = 0;
        do {
          uVar6 = uVar6 + 1;
          (&pAVar1->mim->stat)[iVar5] = '\x02';
          iVar5 = iVar5 + 0x1c;
        } while (uVar6 < pAVar1->mim_num);
      }
    }
  }
  return puVar3;
}

int MapAnimRegistEx(int play_id, u_int *mdl_p, u_int *mot_p, float *mat[4][4], float *offset, float *rot, int iFlg, int iFflg) {
	MAP_ANIM_CTL *cp;
	ANI_CTRL *ap;
	
  ANI_CTRL *__s;
  undefined8 uVar1;
  MAP_ANIM_CTL *pMVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  
  pMVar2 = MapAnimGetCtlPtr__FPUiPA3_A3_f(mdl_p,mat);
  if (pMVar2 == (MAP_ANIM_CTL *)0x0) {
    if ((iFlg & 0xc00U) == 0) {
      pMVar2 = MapAnimGetFreeCtl__Fv();
      if (pMVar2 != (MAP_ANIM_CTL *)0x0) {
        __s = pMVar2->ctl;
        goto LAB_00103ccc;
      }
    }
    else {
      pMVar2 = MapAnimGetFreeCtlEx__Fi(iFlg);
      if (pMVar2 != (MAP_ANIM_CTL *)0x0) goto LAB_00103cc8;
    }
    printf("***ERR!! %s(%d):");
    printf("NO_ANIM_SPECE\n");
    iVar3 = -1;
  }
  else {
LAB_00103cc8:
    __s = pMVar2->ctl;
LAB_00103ccc:
    memset(__s,0,0x80);
    __s->base_p = (HeaderSection *)mdl_p;
    pMVar2->mat = mat;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
                    /* end of inlined section */
    pMVar2->mot_p = mot_p;
    uVar1 = *(undefined8 *)offset;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
    fVar4 = offset[2];
    fVar5 = offset[3];
    pMVar2->offset[0] = (float)uVar1;
    pMVar2->offset[1] = (float)((ulong)uVar1 >> 0x20);
    pMVar2->offset[2] = fVar4;
    pMVar2->offset[3] = fVar5;
                    /* end of inlined section */
    _SetVector__FPfffff(pMVar2->rot,*rot,-rot[1],-rot[2],1.0);
    RotLimitChk__FPf(pMVar2->rot);
    RotLimitChk__FPf(pMVar2->rot + 1);
    RotLimitChk__FPf(pMVar2->rot + 2);
    pMVar2->flg = pMVar2->flg | (ushort)iFlg;
    if (mot_p != (uint *)0x0) {
      motInitMotCtrlEx__FP8MOT_CTRLPUiT1i(&__s->mot,mot_p,(uint *)0x0,play_id);
      __s->mot_num = *mot_p;
    }
    MapAnimOne__FiPA3_fi((int)(short)pMVar2->id,(float (*) [4])pMVar2->mat,iFflg);
    iVar3 = (int)(short)pMVar2->id;
  }
  return iVar3;
}

int MapAnimRegist(int play_id, u_int *mdl_p, u_int *mot_p, float *mat[4][4], float *offset, float *rot) {
  int iVar1;
  
  iVar1 = MapAnimRegistEx__FiPUiT1PA3_A3_fPfT4ii(play_id,mdl_p,mot_p,mat,offset,rot,0,3);
  return iVar1;
}

int MapAnimCall(int anim_id, int play_id) {
	MAP_ANIM_CTL *cp;
	ANI_CTRL *ap;
	HeaderSection *wp;
	
  ANI_CTRL *__s;
  HeaderSection *pHVar1;
  uint *mot_addr;
  MAP_ANIM_CTL *pMVar2;
  int iVar3;
  
  pMVar2 = MapAnimGetCtlArea__Fi(anim_id);
  iVar3 = -1;
  if (pMVar2 != (MAP_ANIM_CTL *)0x0) {
    __s = pMVar2->ctl;
    pMVar2->frame = 0;
    pHVar1 = __s->base_p;
    memset(__s,0,0x80);
    mot_addr = pMVar2->mot_p;
    __s->base_p = pHVar1;
    if (mot_addr != (uint *)0x0) {
      motInitMotCtrlEx__FP8MOT_CTRLPUiT1i(&__s->mot,mot_addr,(uint *)0x0,play_id);
      __s->mot_num = *pMVar2->mot_p;
    }
    iVar3 = (int)(short)pMVar2->id;
    pMVar2->flg = pMVar2->flg & 0xfffd;
  }
  return iVar3;
}

void MapAnimDelete(int id) {
	MAP_ANIM_CTL *cp;
	
  MAP_ANIM_CTL *pMVar1;
  
  pMVar1 = MapAnimGetCtlArea__Fi(id);
  if ((pMVar1 != (MAP_ANIM_CTL *)0x0) && (pMVar1->ctl != (ANI_CTRL *)0x0)) {
    printf("MapAnim free ANI_CTRL[%x]\n");
    motFreeANI_CTRL__FP8ANI_CTRL(pMVar1->ctl);
    pMVar1->ctl = (ANI_CTRL *)0x0;
    pMVar1->flg = 0;
    pMVar1->frame = 0;
  }
  return;
}

void MapAnimDeleteBuffID(int buff_id) {
	int i;
	int flg;
	
  int id;
  fixed_array<MAP_ANIM_CTL,32> *pfVar1;
  ushort uVar2;
  
  id = 0;
  pfVar1 = &MapAnimCtl;
  uVar2 = 8;
  if (buff_id == 0) {
    uVar2 = 4;
  }
  do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z12MAP_ANIM_CTL_UiUi_PX01(id,0x20);
    if ((((((MAP_ANIM_CTL *)pfVar1)->flg ^ 1) & 1) == 0) &&
       (_fixed_array_verifyrange__H1Z12MAP_ANIM_CTL_UiUi_PX01(id,0x20),
       (((MAP_ANIM_CTL *)pfVar1)->flg & uVar2) != 0)) {
                    /* end of inlined section */
      MapAnimDelete__Fi(id);
    }
    id = id + 1;
    pfVar1 = (fixed_array<MAP_ANIM_CTL,32> *)((int)pfVar1 + 0x80);
  } while (id < 0x20);
  return;
}

void MapAnimDeleteAll() {
	int i;
	
  ushort uVar1;
  int id;
  int iVar2;
  ushort *puVar3;
  
  puVar3 = &MapAnimCtl.field0_0x0.m_aData[0].flg;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  id = 0;
  do {
    _fixed_array_verifyrange__H1Z12MAP_ANIM_CTL_UiUi_PX01(id,0x20);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    uVar1 = *puVar3;
                    /* end of inlined section */
    puVar3 = puVar3 + 0x40;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    iVar2 = id + 1;
    if (((uVar1 ^ 1) & 1) == 0) {
                    /* end of inlined section */
      MapAnimDelete__Fi(id);
    }
    id = iVar2;
  } while (iVar2 < 0x20);
  return;
}

void MapAnimGetRstMix(MAP_ANIM_CTL *pMapAniCtl, MOT_CTRL *pMotCtl) {
	RST_DATA aRst;
	float fWDat;
	float *pMstVec[4];
	float *pDatVec[4];
	
  uint frame;
  uint uVar1;
  float *pfVar2;
  RST_DATA *rst;
  float fVar3;
  undefined auVar4 [16];
  undefined auVar5 [16];
  RST_DATA aRst;
  
  rst = &pMapAniCtl->rst;
  uVar1 = pMapAniCtl->frame;
  frame = (int)uVar1 / 100;
  motGetFrameDataRT__FP8RST_DATAPUiUiUi(rst,pMotCtl->dat,frame,(uint)(uVar1 == 0));
  if (((int)uVar1 % 100 != 0) && ((int)frame < pMotCtl->all_cnt + -1)) {
    aRst.rot = *(float (*) [4])rst->rot;
    fVar3 = (float)((int)uVar1 % 100) / 100.0;
    aRst.scale._0_8_ = *(undefined8 *)(pMapAniCtl->rst).scale;
    aRst.scale._8_8_ = *(undefined8 *)((pMapAniCtl->rst).scale + 2);
    aRst.trans = *(float (*) [4])(pMapAniCtl->rst).trans;
    motGetFrameDataRT__FP8RST_DATAPUiUiUi(&aRst,pMotCtl->dat,frame + 1,0);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
    auVar5 = _qmtc2(1.0 - fVar3);
    auVar4 = _lqc2(*(undefined (*) [16])rst->rot);
    auVar4 = _vmulbc(auVar4,auVar5);
    auVar4 = _sqc2(auVar4);
    *(undefined (*) [16])rst->rot = auVar4;
    auVar5 = _qmtc2(fVar3);
    auVar4 = _lqc2((undefined  [16])aRst.rot);
    auVar4 = _vmulbc(auVar4,auVar5);
    auVar4 = _sqc2(auVar4);
    auVar5 = _lqc2(*(undefined (*) [16])rst->rot);
    auVar4 = _lqc2(auVar4);
    auVar4 = _vadd(auVar5,auVar4);
    auVar4 = _sqc2(auVar4);
    *(undefined (*) [16])rst->rot = auVar4;
                    /* end of inlined section */
    pfVar2 = (pMapAniCtl->rst).trans;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
    auVar5 = _qmtc2(1.0 - fVar3);
    auVar4 = _lqc2(*(undefined (*) [16])pfVar2);
    auVar4 = _vmulbc(auVar4,auVar5);
    auVar4 = _sqc2(auVar4);
    *(undefined (*) [16])pfVar2 = auVar4;
    auVar5 = _qmtc2(fVar3);
    auVar4 = _lqc2((undefined  [16])aRst.trans);
    auVar4 = _vmulbc(auVar4,auVar5);
    auVar4 = _sqc2(auVar4);
    auVar5 = _lqc2(*(undefined (*) [16])pfVar2);
    auVar4 = _lqc2(auVar4);
    auVar4 = _vadd(auVar5,auVar4);
    auVar4 = _sqc2(auVar4);
    *(undefined (*) [16])pfVar2 = auVar4;
  }
  return;
}

void MapAnimMixRst(float *aRetMatrix[4], RST_DATA *pStartRst, RST_DATA *pEndRst, float fRate) {
	float vTrans[4];
	float vScale[4];
	float aStMat[4][4];
	float aEndMat[4][4];
	float aInterp[4][4];
	
  float vTrans [4];
  float vScale [4];
  float aStMat [4] [4];
  float aEndMat [4] [4];
  float aInterp [4] [4];
  
  sceRotMatrixXYZ__FPA3_fT0Pf(aStMat,g_matUnit,pStartRst->rot);
  sceVu0Normalize(aStMat,aStMat);
  sceVu0Normalize(aStMat[1],aStMat[1]);
  sceVu0Normalize(aStMat[2],aStMat[2]);
  sceRotMatrixXYZ__FPA3_fT0Pf(aEndMat,g_matUnit,pEndRst->rot);
  sceVu0Normalize(aEndMat,aEndMat);
  sceVu0Normalize(aEndMat[1],aEndMat[1]);
  sceVu0Normalize(aEndMat[2],aEndMat[2]);
  sceVu0UnitMatrix(aInterp);
  motInterpMatrix__FPA3_fN20f(aInterp,aStMat,aEndMat,fRate);
  sceVu0InterVector(fRate,vTrans,pEndRst->trans,pStartRst->trans);
  sceVu0InterVector(fRate,vScale,pEndRst->scale,pStartRst->scale);
  sceVu0UnitMatrix(aRetMatrix);
  (*aRetMatrix)[0] = vScale[0];
  aRetMatrix[1][1] = vScale[1];
  aRetMatrix[2][2] = vScale[2];
  aRetMatrix[3][3] = 1.0;
  sceVu0MulMatrix(aRetMatrix,aRetMatrix,aInterp);
  sceVu0TransMatrix(aRetMatrix,aRetMatrix,vTrans);
  return;
}

static void MapAnimOne(int id, float *mat[4], int a_flg) {
	MOT_CTRL *m_ctrl;
	MAP_ANIM_CTL *hp;
	ANI_CTRL *ap;
	float lmat[4][4];
	float rot_y;
	SGDCOORDINATE *cp;
	float fWDat;
	RST_DATA aMstRst;
	RST_DATA aRst;
	int id;
	float w_mat[4][4];
	
  int iVar1;
  ANI_CTRL *pAVar2;
  uint *top_addr;
  float (*paafVar3) [4] [4];
  float afVar4 [4];
  undefined8 uVar5;
  MAP_ANIM_CTL *pMVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  ushort uVar10;
  float fVar11;
  float fVar12;
  undefined auVar13 [16];
  undefined auVar14 [16];
  undefined auVar15 [16];
  undefined auVar16 [16];
  undefined auVar17 [16];
  undefined auVar18 [16];
  undefined auVar19 [16];
  undefined auVar20 [16];
  float lmat [4] [4];
  float rot_y;
  RST_DATA aMstRst;
  RST_DATA aRst;
  float w_mat [4] [4];
  
  rot_y = 0.0;
  pMVar6 = MapAnimGetCtlArea__Fi(id);
  if (pMVar6 == (MAP_ANIM_CTL *)0x0) {
    return;
  }
  pAVar2 = pMVar6->ctl;
  top_addr = (pAVar2->mot).dat;
  if (top_addr == (uint *)0x0) {
    return;
  }
  if (pAVar2->base_p == (HeaderSection *)0x0) {
    uVar8 = pMVar6->frame;
  }
  else {
    pAVar2->base_p->coordp->bCalc = 0;
    uVar8 = pMVar6->frame;
  }
  motGetFrameDataRT__FP8RST_DATAPUiUiUi(&pMVar6->rst,top_addr,(int)uVar8 / 100,(uint)(uVar8 == 0));
  uVar9._0_2_ = pMVar6->id;
  uVar9._2_2_ = pMVar6->flg;
  uVar9._4_4_ = pMVar6->frame;
  if ((uVar9 & 0x3000000) != 0x1000000) {
    if ((pMVar6->flg & 0x20) == 0) {
      rot_y = pMVar6->rot[1];
    }
    else {
      rot_y = (float)((double)pMVar6->rot[1] + _DAT_0039e0d0);
    }
    RotLimitChk__FPf(&rot_y);
    sceVu0UnitMatrix(lmat);
                    /* inlined from MapGeom.h */
                    /* end of inlined section */
                    /* inlined from MapGeom.h */
    lmat[0][0] = 25.0;
                    /* end of inlined section */
                    /* inlined from MapGeom.h */
    lmat[2][2] = -25.0;
    lmat[1][1] = -25.0;
                    /* end of inlined section */
    sceVu0RotMatrixX(pMVar6->rot[0],lmat,lmat);
    sceVu0RotMatrixY(rot_y,lmat,lmat);
    sceVu0RotMatrixZ(pMVar6->rot[2],lmat,lmat);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
    lmat[3][2] = pMVar6->offset[2];
    lmat[3][0] = (float)*(undefined8 *)pMVar6->offset;
    lmat[3][1] = (float)((ulong)*(undefined8 *)pMVar6->offset >> 0x20);
                    /* end of inlined section */
    lmat[3][3] = 1.0;
  }
  sceVu0UnitMatrix(mat);
  iVar7 = GetPALMode__Fv();
  if (iVar7 != 0) {
    aMstRst.rot._0_8_ = *(undefined8 *)(pMVar6->rst).rot;
    iVar7 = (int)pMVar6->frame / 100;
    iVar1 = (int)pMVar6->frame % 100;
    fVar12 = 0.0;
    aMstRst.rot._8_8_ = *(undefined8 *)((pMVar6->rst).rot + 2);
    aMstRst.scale._0_8_ = *(undefined8 *)(pMVar6->rst).scale;
    aMstRst.scale._8_8_ = *(undefined8 *)((pMVar6->rst).scale + 2);
    aMstRst.trans._0_8_ = *(undefined8 *)(pMVar6->rst).trans;
    aMstRst.trans._8_8_ = *(undefined8 *)((pMVar6->rst).trans + 2);
    aRst.rot._0_8_ = *(undefined8 *)(pMVar6->rst).rot;
    aRst.rot._8_8_ = *(undefined8 *)((pMVar6->rst).rot + 2);
    aRst.scale._0_8_ = *(undefined8 *)(pMVar6->rst).scale;
    aRst.scale._8_8_ = *(undefined8 *)((pMVar6->rst).scale + 2);
    aRst.trans._0_8_ = *(undefined8 *)(pMVar6->rst).trans;
    aRst.trans._8_8_ = *(undefined8 *)((pMVar6->rst).trans + 2);
    if ((iVar1 != 0) && (iVar7 < (pAVar2->mot).all_cnt + -1)) {
      motGetFrameDataRT__FP8RST_DATAPUiUiUi(&aRst,(pAVar2->mot).dat,iVar7 + 1,0);
      fVar12 = (float)iVar1 / 100.0;
    }
    if ((a_flg & 1U) != 0) {
      aRst.rot._8_8_ = aRst.rot._8_8_ & 0xffffffff00000000;
      aRst.rot[0] = 0.0;
      aRst.rot[1] = 0.0;
      aMstRst.rot._8_8_ = aMstRst.rot._8_8_ & 0xffffffff00000000;
      aMstRst.rot[0] = 0.0;
      aMstRst.rot[1] = 0.0;
    }
    if (iVar1 != 0) {
      MapAnimMixRst__FPA3_fP8RST_DATAT1f(mat,&pMVar6->rst,&aRst,fVar12);
      goto LAB_001045d4;
    }
  }
                    /* inlined from MapGeom.h */
                    /* end of inlined section */
                    /* inlined from MapGeom.h */
  fVar12 = (pMVar6->rst).scale[1];
                    /* end of inlined section */
                    /* inlined from MapGeom.h */
  fVar11 = (pMVar6->rst).scale[2];
  (*mat)[0] = (pMVar6->rst).scale[0];
  mat[1][1] = fVar12;
                    /* end of inlined section */
  mat[2][2] = fVar11;
  if (((a_flg ^ 1U) & 1) != 0) {
    sceVu0RotMatrixX((pMVar6->rst).rot[0],mat,mat);
    sceVu0RotMatrixY((pMVar6->rst).rot[1],mat,mat);
    sceVu0RotMatrixZ((pMVar6->rst).rot[2],mat,mat);
  }
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
  uVar5 = *(undefined8 *)(pMVar6->rst).trans;
  fVar12 = (pMVar6->rst).trans[2];
  fVar11 = (pMVar6->rst).trans[3];
  mat[3][0] = (float)uVar5;
  mat[3][1] = (float)((ulong)uVar5 >> 0x20);
  mat[3][2] = fVar12;
  mat[3][3] = fVar11;
                    /* end of inlined section */
  mat[3][3] = 1.0;
LAB_001045d4:
  if ((a_flg & 0x100U) == 0) {
    auVar13._4_4_ = lmat[0][1];
    auVar13._8_4_ = lmat[0][2];
    auVar13._12_4_ = lmat[0][3];
    auVar13._0_4_ = lmat[0][0];
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
    auVar13 = _lqc2(auVar13);
    auVar14._4_4_ = lmat[1][1];
    auVar14._0_4_ = lmat[1][0];
    auVar14._8_4_ = lmat[1][2];
    auVar14._12_4_ = lmat[1][3];
    auVar14 = _lqc2(auVar14);
    auVar15._8_4_ = lmat[2][2];
    auVar15._0_4_ = lmat[2][0];
    auVar15._4_4_ = lmat[2][1];
    auVar15._12_4_ = lmat[2][3];
    auVar15 = _lqc2(auVar15);
    auVar16._4_4_ = lmat[3][1];
    auVar16._0_4_ = lmat[3][0];
    auVar16._8_4_ = lmat[3][2];
    auVar16._12_4_ = lmat[3][3];
    auVar16 = _lqc2(auVar16);
    auVar17 = _lqc2((undefined  [16])*mat);
    auVar18 = _lqc2((undefined  [16])mat[1]);
    auVar19 = _lqc2((undefined  [16])mat[2]);
    auVar20 = _lqc2((undefined  [16])mat[3]);
    _vmulabc(auVar13,auVar17);
    _vmaddabc(auVar14,auVar17);
    _vmaddabc(auVar15,auVar17);
    auVar17 = _vmaddbc(auVar16,auVar17);
    _vmulabc(auVar13,auVar18);
    _vmaddabc(auVar14,auVar18);
    _vmaddabc(auVar15,auVar18);
    auVar18 = _vmaddbc(auVar16,auVar18);
    _vmulabc(auVar13,auVar19);
    _vmaddabc(auVar14,auVar19);
    _vmaddabc(auVar15,auVar19);
    auVar19 = _vmaddbc(auVar16,auVar19);
    _vmulabc(auVar13,auVar20);
    _vmaddabc(auVar14,auVar20);
    _vmaddabc(auVar15,auVar20);
    auVar13 = _vmaddbc(auVar16,auVar20);
    afVar4 = (float  [4])_sqc2(auVar17);
    *mat = afVar4;
    afVar4 = (float  [4])_sqc2(auVar18);
    mat[1] = afVar4;
    afVar4 = (float  [4])_sqc2(auVar19);
    mat[2] = afVar4;
    afVar4 = (float  [4])_sqc2(auVar13);
    mat[3] = afVar4;
                    /* end of inlined section */
  }
  if ((a_flg & 2U) == 0) {
    iVar7 = GetPALMode__Fv();
    if (iVar7 == 0) {
      uVar8 = pMVar6->frame + 100;
    }
    else {
      uVar8 = pMVar6->frame + 0x78;
    }
    pMVar6->frame = uVar8;
    uVar10 = pMVar6->flg;
  }
  else {
    uVar10 = pMVar6->flg;
  }
  if ((uVar10 & 0x200) == 0) {
    uVar8 = pMVar6->frame;
  }
  else {
    if (pMVar6->func != (undefined1 *)0x0) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
      paafVar3 = pMVar6->mat;
      auVar13 = _lqc2((undefined  [16])(*paafVar3)[0]);
      auVar14 = _lqc2((undefined  [16])(*paafVar3)[1]);
      auVar15 = _lqc2((undefined  [16])(*paafVar3)[2]);
      auVar16 = _lqc2((undefined  [16])(*paafVar3)[3]);
      w_mat[0] = (float  [4])_sqc2(auVar13);
      w_mat[1] = (float  [4])_sqc2(auVar14);
      w_mat[2] = (float  [4])_sqc2(auVar15);
      w_mat[3] = (float  [4])_sqc2(auVar16);
                    /* end of inlined section */
      if ((pMVar6->flg & 0x100) == 0) {
        uVar8 = pMVar6->frame;
      }
      else {
        auVar17._4_4_ = lmat[0][1];
        auVar17._8_4_ = lmat[0][2];
        auVar17._12_4_ = lmat[0][3];
        auVar17._0_4_ = lmat[0][0];
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
        auVar13 = _lqc2(auVar17);
        auVar18._4_4_ = lmat[1][1];
        auVar18._0_4_ = lmat[1][0];
        auVar18._8_4_ = lmat[1][2];
        auVar18._12_4_ = lmat[1][3];
        auVar14 = _lqc2(auVar18);
        auVar19._8_4_ = lmat[2][2];
        auVar19._0_4_ = lmat[2][0];
        auVar19._4_4_ = lmat[2][1];
        auVar19._12_4_ = lmat[2][3];
        auVar15 = _lqc2(auVar19);
        auVar20._4_4_ = lmat[3][1];
        auVar20._0_4_ = lmat[3][0];
        auVar20._8_4_ = lmat[3][2];
        auVar20._12_4_ = lmat[3][3];
        auVar16 = _lqc2(auVar20);
        auVar17 = _lqc2((undefined  [16])w_mat[0]);
        auVar18 = _lqc2((undefined  [16])w_mat[1]);
        auVar19 = _lqc2((undefined  [16])w_mat[2]);
        auVar20 = _lqc2((undefined  [16])w_mat[3]);
        _vmulabc(auVar13,auVar17);
        _vmaddabc(auVar14,auVar17);
        _vmaddabc(auVar15,auVar17);
        auVar17 = _vmaddbc(auVar16,auVar17);
        _vmulabc(auVar13,auVar18);
        _vmaddabc(auVar14,auVar18);
        _vmaddabc(auVar15,auVar18);
        auVar18 = _vmaddbc(auVar16,auVar18);
        _vmulabc(auVar13,auVar19);
        _vmaddabc(auVar14,auVar19);
        _vmaddabc(auVar15,auVar19);
        auVar19 = _vmaddbc(auVar16,auVar19);
        _vmulabc(auVar13,auVar20);
        _vmaddabc(auVar14,auVar20);
        _vmaddabc(auVar15,auVar20);
        auVar13 = _vmaddbc(auVar16,auVar20);
        w_mat[0] = (float  [4])_sqc2(auVar17);
        w_mat[1] = (float  [4])_sqc2(auVar18);
        w_mat[2] = (float  [4])_sqc2(auVar19);
        w_mat[3] = (float  [4])_sqc2(auVar13);
                    /* end of inlined section */
        uVar8 = pMVar6->frame;
      }
      uVar10 = 0xffff;
      if ((uint)((int)uVar8 / 100) < (uint)(pAVar2->mot).all_cnt) {
        uVar10 = pMVar6->id;
      }
      (*(code *)pMVar6->func)(uVar10,w_mat,pMVar6->func_dat[0],pMVar6->func_dat[1]);
    }
    uVar8 = pMVar6->frame;
  }
  if ((uint)(pAVar2->mot).all_cnt <= (uint)((int)uVar8 / 100)) {
    uVar10 = pMVar6->flg;
    if ((uVar10 & 0x10) == 0) {
      if ((uVar10 & 0x80) == 0) {
        MapAnimDelete__Fi(id);
      }
      else {
        pMVar6->flg = uVar10 | 2;
      }
    }
    else {
      pMVar6->frame = 0;
    }
  }
  return;
}

void MapAnimProc() {
	int i;
	
  int id;
  fixed_array<MAP_ANIM_CTL,32> *pfVar1;
  
  id = 0;
  pfVar1 = &MapAnimCtl;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z12MAP_ANIM_CTL_UiUi_PX01(id,0x20);
    if ((((((MAP_ANIM_CTL *)pfVar1)->flg ^ 1) & 1) == 0) &&
       (_fixed_array_verifyrange__H1Z12MAP_ANIM_CTL_UiUi_PX01(id,0x20),
       (((MAP_ANIM_CTL *)pfVar1)->flg & 2) == 0)) {
      _fixed_array_verifyrange__H1Z12MAP_ANIM_CTL_UiUi_PX01(id,0x20);
      _fixed_array_verifyrange__H1Z12MAP_ANIM_CTL_UiUi_PX01(id,0x20);
      MapAnimOne__FiPA3_fi
                (id,(float (*) [4])((MAP_ANIM_CTL *)pfVar1)->mat,
                 ((MAP_ANIM_CTL *)pfVar1)->flg & 0x100);
    }
                    /* end of inlined section */
    id = id + 1;
    pfVar1 = (fixed_array<MAP_ANIM_CTL,32> *)((int)pfVar1 + 0x80);
  } while (id < 0x20);
  MapManimProc__Fv();
  return;
}

void MapAnimInit() {
	int i;
	
  int iVar1;
  int iVar2;
  fixed_array<MAP_ANIM_CTL,32> *__s;
  
  __s = &MapAnimCtl;
  iVar1 = 0;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
    iVar2 = iVar1 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z12MAP_ANIM_CTL_UiUi_PX01(iVar1,0x20);
    memset(__s,0,0x80);
                    /* end of inlined section */
    __s = (fixed_array<MAP_ANIM_CTL,32> *)((int)__s + 0x80);
    iVar1 = iVar2;
  } while (iVar2 < 0x20);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z8ANI_CTRL_UiUi_PX01(0,2);
  motFreeANI_CTRL__FP8ANI_CTRL((ANI_CTRL *)&MapAnimMotCtl);
  _fixed_array_verifyrange__H1Z8ANI_CTRL_UiUi_PX01(1,2);
  motFreeANI_CTRL__FP8ANI_CTRL(MapAnimMotCtl.field0_0x0.m_aData + 1);
  return;
}

static MAPMANIM_MATRIX* MapManimGetFreeMatrix() {
	int i;
	
  int iVar1;
  fixed_array<MAPMANIM_MATRIX,255> *pfVar2;
  
  iVar1 = 0;
  pfVar2 = &MapManimMatrxList;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z15MAPMANIM_MATRIX_UiUi_PX01(iVar1,0xff);
    if ((((MAPMANIM_MATRIX *)pfVar2)->flg & 1) == 0) {
      _fixed_array_verifyrange__H1Z15MAPMANIM_MATRIX_UiUi_PX01(iVar1,0xff);
      ((MAPMANIM_MATRIX *)pfVar2)->flg = ((MAPMANIM_MATRIX *)pfVar2)->flg | 1;
      _fixed_array_verifyrange__H1Z15MAPMANIM_MATRIX_UiUi_PX01(iVar1,0xff);
      ((MAPMANIM_MATRIX *)pfVar2)->mot_addr = (char *)0x0;
      _fixed_array_verifyrange__H1Z15MAPMANIM_MATRIX_UiUi_PX01(iVar1,0xff);
      ((MAPMANIM_MATRIX *)pfVar2)->next = (MAPMANIM_MATRIX *)0x0;
      _fixed_array_verifyrange__H1Z15MAPMANIM_MATRIX_UiUi_PX01(iVar1,0xff);
      return (MAPMANIM_MATRIX *)pfVar2;
    }
    iVar1 = iVar1 + 1;
                    /* end of inlined section */
    pfVar2 = (fixed_array<MAPMANIM_MATRIX,255> *)((int)pfVar2 + 0x50);
  } while (iVar1 < 0xff);
  printf("***ERR!! %s(%d):");
  printf("NO_MATRIX_SPACE\n");
  return (MAPMANIM_MATRIX *)0x0;
}

static int MapManimDeleteMatrix(MAPMANIM_MATRIX *mat) {
	int i;
	
  int iVar1;
  fixed_array<MAPMANIM_MATRIX,255> *pfVar2;
  
  iVar1 = 0;
  pfVar2 = &MapManimMatrxList;
  if (mat == (MAPMANIM_MATRIX *)0x0) {
    iVar1 = -2;
  }
  else {
    do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z15MAPMANIM_MATRIX_UiUi_PX01(iVar1,0xff);
      if ((MAPMANIM_MATRIX *)pfVar2 == mat) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        _fixed_array_verifyrange__H1Z15MAPMANIM_MATRIX_UiUi_PX01(iVar1,0xff);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
        ((MAPMANIM_MATRIX *)pfVar2)->flg = ((MAPMANIM_MATRIX *)pfVar2)->flg & 0xfffe;
        return 0;
      }
                    /* end of inlined section */
      iVar1 = iVar1 + 1;
      pfVar2 = (fixed_array<MAPMANIM_MATRIX,255> *)((int)pfVar2 + 0x50);
    } while (iVar1 < 0xff);
    iVar1 = -1;
  }
  return iVar1;
}

static int MapManimGetMatrixNumSgd(char *addr) {
  int iVar1;
  
  iVar1 = 0;
  if (addr != (char *)0x0) {
    iVar1 = *(int *)(addr + 0x14);
  }
  return iVar1;
}

static MAPMANIM_HEAD* MapManimGetHeadPtr(int id) {
	int i;
	
  int iVar1;
  fixed_array<MAPMANIM_HEAD,64> *pfVar2;
  
  iVar1 = 0;
  pfVar2 = &MapManimList;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z13MAPMANIM_HEAD_UiUi_PX01(iVar1,0x40);
    if (((MAPMANIM_HEAD *)pfVar2)->id == id) {
      _fixed_array_verifyrange__H1Z13MAPMANIM_HEAD_UiUi_PX01(iVar1,0x40);
      return (MAPMANIM_HEAD *)pfVar2;
    }
    iVar1 = iVar1 + 1;
    pfVar2 = (fixed_array<MAPMANIM_HEAD,64> *)((int)pfVar2 + 0x14);
  } while (iVar1 < 0x40);
  printf("***ERR!! %s(%d):");
  printf("NO_CTL_ID[%d]\n");
  return (MAPMANIM_HEAD *)0x0;
}

static MAPMANIM_HEAD* MapManimGetFreeSpace(int buff_id) {
	int i;
	
  int iVar1;
  fixed_array<MAPMANIM_HEAD,64> *pfVar2;
  
  iVar1 = 0;
  pfVar2 = &MapManimList;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z13MAPMANIM_HEAD_UiUi_PX01(iVar1,0x40);
    if (((MAPMANIM_HEAD *)pfVar2)->buff_id == -1) {
      _fixed_array_verifyrange__H1Z13MAPMANIM_HEAD_UiUi_PX01(iVar1,0x40);
      ((MAPMANIM_HEAD *)pfVar2)->id = iVar1;
      _fixed_array_verifyrange__H1Z13MAPMANIM_HEAD_UiUi_PX01(iVar1,0x40);
      ((MAPMANIM_HEAD *)pfVar2)->buff_id = buff_id;
      _fixed_array_verifyrange__H1Z13MAPMANIM_HEAD_UiUi_PX01(iVar1,0x40);
      ((MAPMANIM_HEAD *)pfVar2)->mat_addr = (MAPMANIM_MATRIX *)0x0;
      _fixed_array_verifyrange__H1Z13MAPMANIM_HEAD_UiUi_PX01(iVar1,0x40);
      return (MAPMANIM_HEAD *)pfVar2;
    }
    iVar1 = iVar1 + 1;
    pfVar2 = (fixed_array<MAPMANIM_HEAD,64> *)((int)pfVar2 + 0x14);
  } while (iVar1 < 0x40);
  printf("***ERR!! %s(%d):");
  printf("NO_FURN_ANIM_HEAD_SPACE\n");
  return (MAPMANIM_HEAD *)0x0;
}

static MAPMANIM_MATRIX* MapManimAddMatrix(MAPMANIM_HEAD *hp) {
	MAPMANIM_MATRIX *mat_sp;
	MAPMANIM_MATRIX *work_mat;
	
  MAPMANIM_MATRIX *pMVar1;
  
  pMVar1 = (MAPMANIM_MATRIX *)0x0;
  if (hp != (MAPMANIM_HEAD *)0x0) {
    for (pMVar1 = hp->mat_addr; pMVar1 != (MAPMANIM_MATRIX *)0x0; pMVar1 = pMVar1->next) {
      hp = (MAPMANIM_HEAD *)pMVar1;
    }
    pMVar1 = MapManimGetFreeMatrix__Fv();
    hp->mat_addr = pMVar1;
  }
  return pMVar1;
}

void MapManimDeleteOne(int id) {
	MAPMANIM_MATRIX *mat_sp;
	MAPMANIM_HEAD *hp;
	
  MAPMANIM_MATRIX *pMVar1;
  MAPMANIM_MATRIX *mat;
  
  if ((uint)id < 0x40) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z13MAPMANIM_HEAD_UiUi_PX01(id,0x40);
                    /* end of inlined section */
    if (id * 0x14 != -0x3fc9d0) {
      mat = MapManimList.field0_0x0.m_aData[id].mat_addr;
      while (mat != (MAPMANIM_MATRIX *)0x0) {
        pMVar1 = mat->next;
        MapManimDeleteMatrix__FP15MAPMANIM_MATRIX(mat);
        mat = pMVar1;
      }
      MapManimList.field0_0x0.m_aData[id].buff_id = -1;
    }
  }
  return;
}

void MapManimDelete(int buff_id) {
	int i;
	
  int iVar1;
  int iVar2;
  fixed_array<MAPMANIM_HEAD,64> *pfVar3;
  
  pfVar3 = &MapManimList;
  iVar1 = 0;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z13MAPMANIM_HEAD_UiUi_PX01(iVar1,0x40);
    iVar2 = iVar1 + 1;
    if (((MAPMANIM_HEAD *)pfVar3)->buff_id == buff_id) {
      _fixed_array_verifyrange__H1Z13MAPMANIM_HEAD_UiUi_PX01(iVar1,0x40);
      MapManimDeleteOne__Fi
                (((fixed_array_base<MAPMANIM_HEAD,64,MAPMANIM_HEAD[64]> *)
                 &((MAPMANIM_HEAD *)pfVar3)->id)->m_aData[0].id);
    }
                    /* end of inlined section */
    pfVar3 = (fixed_array<MAPMANIM_HEAD,64> *)((int)pfVar3 + 0x14);
    iVar1 = iVar2;
  } while (iVar2 < 0x40);
  return;
}

static int MapManimSetAnimSub(int buff_id, int mat_num, char *mdl_addr, char *mot_addr, int *anim_id, float *offset, float *rot, int st_frame, int e_flg) {
	int e_flg;
	MAPMANIM_MATRIX *mp;
	int i;
	int flg;
	MAPMANIM_HEAD *hp;
	int iAniCtlFlg;
	
  MAPMANIM_HEAD *hp;
  MAPMANIM_MATRIX *pMVar1;
  MAP_ANIM_CTL *pMVar2;
  int iVar3;
  uint uVar4;
  ushort uVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  int flg;
  
  hp = MapManimGetFreeSpace__Fi(buff_id);
  if (hp == (MAPMANIM_HEAD *)0x0) {
    iVar3 = -1;
  }
  else {
    uVar4 = 8;
    if (buff_id == 0) {
      uVar4 = 4;
    }
    uVar8 = 0;
    hp->mdl_addr = mdl_addr;
    if ((0 < mat_num) && (*anim_id != -99)) {
      iVar3 = 0;
      do {
        uVar7 = 0;
        piVar6 = (int *)(iVar3 + (int)anim_id);
        if (-1 < *piVar6) {
          pMVar1 = MapManimAddMatrix__FP13MAPMANIM_HEAD(hp);
          if (pMVar1 == (MAPMANIM_MATRIX *)0x0) {
            return -2;
          }
          pMVar1->mat_id = uVar8;
          pMVar1->mot_addr = mot_addr;
          if (((e_flg & 0x1000U) != 0) && (uVar7 = 0x800, (uVar8 & 1) == 0)) {
            uVar7 = 0x400;
          }
          iVar3 = MapAnimRegistEx__FiPUiT1PA3_A3_fPfT4ii
                            (*piVar6,(uint *)mdl_addr,(uint *)mot_addr,
                             (float (*) [4] [4])pMVar1->mat,offset,rot,e_flg | uVar4 | uVar7,3);
          uVar5 = (ushort)iVar3;
          pMVar1->anim_id = uVar5;
          *piVar6 = (int)(short)uVar5;
          pMVar2 = MapAnimGetCtlArea__Fi((int)(short)uVar5);
          pMVar2->frame = st_frame;
        }
        uVar8 = uVar8 + 1;
        iVar3 = uVar8 * 4;
      } while (((int)uVar8 < mat_num) && (anim_id[uVar8] != -99));
    }
    iVar3 = hp->id;
  }
  return iVar3;
}

int MapManimSetAnim(int buff_id, char *mdl_addr, char *mot_addr, int *anim_id, float *offset, float *rot, int st_frame) {
  int iVar1;
  
  iVar1 = MapManimSetAnimEx__FiPcT1PiPfT4ii
                    (buff_id,mdl_addr,mot_addr,anim_id,offset,rot,st_frame,0x150);
  return iVar1;
}

int MapManimSetAnimEx2(int buff_id, int mat_num, char *mot_addr, int *anim_id, float *offset, float *rot, int st_frame, int e_flg) {
  int iVar1;
  
  iVar1 = MapManimSetAnimSub__FiiPcT2PiPfT5ii
                    (buff_id,mat_num,(char *)0x0,mot_addr,anim_id,offset,rot,st_frame,e_flg);
  return iVar1;
}

int MapManimSetAnimEx(int buff_id, char *mdl_addr, char *mot_addr, int *anim_id, float *offset, float *rot, int st_frame, int e_flg) {
  int iVar1;
  
  iVar1 = MapManimGetMatrixNumSgd__FPc(mdl_addr);
  iVar1 = MapManimSetAnimSub__FiiPcT2PiPfT5ii
                    (buff_id,iVar1,mdl_addr,mot_addr,anim_id,offset,rot,st_frame,e_flg);
  return iVar1;
}

static void MapManimSetMatrixSgdOneSub(SGDFILEHEADER *pSGDHead, MAPMANIM_HEAD *hp) {
	int i;
	MAPMANIM_MATRIX *mp;
	SGDCOORDINATE &rCoord;
	
  float afVar1 [4];
  float afVar2 [4];
  float afVar3 [4];
  float afVar4 [4];
  int iVar5;
  MAPMANIM_MATRIX *pMVar6;
  SGDCOORDINATE *pSVar7;
  uint uVar8;
  int iVar9;
  undefined auVar10 [16];
  undefined auVar11 [16];
  undefined auVar12 [16];
  undefined auVar13 [16];
  
  if ((pSGDHead != (SGDFILEHEADER *)0x0) &&
     (pSVar7 = pSGDHead->pCoord, pSVar7 != (SGDCOORDINATE *)0x0)) {
    uVar8 = pSGDHead->uiNumBlock;
    iVar9 = 0;
    pMVar6 = hp->mat_addr;
    if ((0 < (int)(uVar8 - 1)) && (pMVar6 != (MAPMANIM_MATRIX *)0x0)) {
      iVar5 = pMVar6->mat_id;
      while( true ) {
        if (iVar5 == iVar9) {
          afVar4[0] = *(float *)((int)pMVar6->mat[0] + 0);
          afVar4[1] = *(float *)((int)pMVar6->mat[0] + 4);
          afVar4[2] = *(float *)((int)pMVar6->mat[0] + 8);
          afVar4[3] = *(float *)((int)pMVar6->mat[0] + 0xc);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
          auVar10 = _lqc2((undefined  [16])afVar4);
          afVar1[0] = *(float *)((int)pMVar6->mat[1] + 0);
          afVar1[1] = *(float *)((int)pMVar6->mat[1] + 4);
          afVar1[2] = *(float *)((int)pMVar6->mat[1] + 8);
          afVar1[3] = *(float *)((int)pMVar6->mat[1] + 0xc);
          auVar11 = _lqc2((undefined  [16])afVar1);
          afVar2[0] = *(float *)((int)pMVar6->mat[2] + 0);
          afVar2[1] = *(float *)((int)pMVar6->mat[2] + 4);
          afVar2[2] = *(float *)((int)pMVar6->mat[2] + 8);
          afVar2[3] = *(float *)((int)pMVar6->mat[2] + 0xc);
          auVar12 = _lqc2((undefined  [16])afVar2);
          afVar3[0] = *(float *)((int)pMVar6->mat[3] + 0);
          afVar3[1] = *(float *)((int)pMVar6->mat[3] + 4);
          afVar3[2] = *(float *)((int)pMVar6->mat[3] + 8);
          afVar3[3] = *(float *)((int)pMVar6->mat[3] + 0xc);
          auVar13 = _lqc2((undefined  [16])afVar3);
          afVar4 = (float  [4])_sqc2(auVar10);
          *(float *)((int)pSVar7->matCoord[0] + 0) = afVar4[0];
          *(float *)((int)pSVar7->matCoord[0] + 4) = afVar4[1];
          *(float *)((int)pSVar7->matCoord[0] + 8) = afVar4[2];
          *(float *)((int)pSVar7->matCoord[0] + 0xc) = afVar4[3];
          afVar4 = (float  [4])_sqc2(auVar11);
          *(float *)((int)pSVar7->matCoord[1] + 0) = afVar4[0];
          *(float *)((int)pSVar7->matCoord[1] + 4) = afVar4[1];
          *(float *)((int)pSVar7->matCoord[1] + 8) = afVar4[2];
          *(float *)((int)pSVar7->matCoord[1] + 0xc) = afVar4[3];
          afVar4 = (float  [4])_sqc2(auVar12);
          *(float *)((int)pSVar7->matCoord[2] + 0) = afVar4[0];
          *(float *)((int)pSVar7->matCoord[2] + 4) = afVar4[1];
          *(float *)((int)pSVar7->matCoord[2] + 8) = afVar4[2];
          *(float *)((int)pSVar7->matCoord[2] + 0xc) = afVar4[3];
          afVar4 = (float  [4])_sqc2(auVar13);
          *(float *)((int)pSVar7->matCoord[3] + 0) = afVar4[0];
          *(float *)((int)pSVar7->matCoord[3] + 4) = afVar4[1];
          *(float *)((int)pSVar7->matCoord[3] + 8) = afVar4[2];
          *(float *)((int)pSVar7->matCoord[3] + 0xc) = afVar4[3];
                    /* end of inlined section */
          pMVar6 = pMVar6->next;
          uVar8 = pSGDHead->uiNumBlock;
        }
        iVar9 = iVar9 + 1;
        pSVar7 = pSVar7 + 1;
        if (((int)(uVar8 - 1) <= iVar9) || (pMVar6 == (MAPMANIM_MATRIX *)0x0)) break;
        iVar5 = pMVar6->mat_id;
      }
    }
  }
  return;
}

void MapManimSetMatrixSgdOne2(SGDFILEHEADER *pSGDHead, int id) {
  MAPMANIM_HEAD *hp;
  
  hp = MapManimGetHeadPtr__Fi(id);
  MapManimSetMatrixSgdOneSub__FP13SGDFILEHEADERP13MAPMANIM_HEAD(pSGDHead,hp);
  return;
}

static void MapManimSetMatrixSgdOne(MAPMANIM_HEAD *hp) {
  MapManimSetMatrixSgdOneSub__FP13SGDFILEHEADERP13MAPMANIM_HEAD((SGDFILEHEADER *)hp->mdl_addr,hp);
  return;
}

void MapManimUnitMatrix(int id) {
	MAPMANIM_MATRIX *mat_sp;
	MAPMANIM_HEAD *hp;
	
  MAPMANIM_MATRIX *pMVar1;
  MAPMANIM_HEAD *hp;
  
  if ((uint)id < 0x40) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z13MAPMANIM_HEAD_UiUi_PX01(id,0x40);
    hp = MapManimList.field0_0x0.m_aData + id;
                    /* end of inlined section */
    if (hp != (MAPMANIM_HEAD *)0x0) {
      for (pMVar1 = MapManimList.field0_0x0.m_aData[id].mat_addr; pMVar1 != (MAPMANIM_MATRIX *)0x0;
          pMVar1 = pMVar1->next) {
        sceVu0UnitMatrix(pMVar1->mat);
      }
      MapManimSetMatrixSgdOne__FP13MAPMANIM_HEAD(hp);
    }
  }
  return;
}

void MapManimProc() {
	int i;
	
  int iVar1;
  int iVar2;
  fixed_array<MAPMANIM_HEAD,64> *hp;
  
  hp = &MapManimList;
  iVar1 = 0;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z13MAPMANIM_HEAD_UiUi_PX01(iVar1,0x40);
    iVar2 = iVar1 + 1;
    if (((MAPMANIM_HEAD *)hp)->buff_id != -1) {
      _fixed_array_verifyrange__H1Z13MAPMANIM_HEAD_UiUi_PX01(iVar1,0x40);
      MapManimSetMatrixSgdOne__FP13MAPMANIM_HEAD((MAPMANIM_HEAD *)hp);
    }
                    /* end of inlined section */
    hp = (fixed_array<MAPMANIM_HEAD,64> *)((int)hp + 0x14);
    iVar1 = iVar2;
  } while (iVar2 < 0x40);
  return;
}

void MapManimInit() {
	int i;
	
  int iVar1;
  int iVar2;
  fixed_array<MAPMANIM_MATRIX,255> *pfVar3;
  int *piVar4;
  
  pfVar3 = &MapManimMatrxList;
  iVar1 = 0;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
    iVar2 = iVar1 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z15MAPMANIM_MATRIX_UiUi_PX01(iVar1,0xff);
    ((fixed_array_base<MAPMANIM_MATRIX,255,MAPMANIM_MATRIX[255]> *)&((MAPMANIM_MATRIX *)pfVar3)->flg
    )->m_aData[0].flg = 0;
                    /* end of inlined section */
    pfVar3 = (fixed_array<MAPMANIM_MATRIX,255> *)((int)pfVar3 + 0x50);
    iVar1 = iVar2;
  } while (iVar2 < 0xff);
  piVar4 = &MapManimList.field0_0x0.m_aData[0].buff_id;
  iVar1 = 0;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
    iVar2 = iVar1 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z13MAPMANIM_HEAD_UiUi_PX01(iVar1,0x40);
    *piVar4 = -1;
                    /* end of inlined section */
    piVar4 = piVar4 + 5;
    iVar1 = iVar2;
  } while (iVar2 < 0x40);
  return;
}

MAP_ANIM_CTL* MAP_ANIM_CTL * _fixed_array_verifyrange<MAP_ANIM_CTL>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_849);
  return (type_info *)v;
}

ANI_CTRL* ANI_CTRL * _fixed_array_verifyrange<ANI_CTRL>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_849);
  return (type_info *)v;
}

MAPMANIM_MATRIX* MAPMANIM_MATRIX * _fixed_array_verifyrange<MAPMANIM_MATRIX>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_849);
  return (type_info *)v;
}

MAPMANIM_HEAD* MAPMANIM_HEAD * _fixed_array_verifyrange<MAPMANIM_HEAD>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_849);
  return (type_info *)v;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  return;
}

type_info& MAP_ANIM_CTL type_info function() {
  g3ddbgAssert__FbPCce(false,str_849);
  return (type_info *)v;
}

type_info& ANI_CTRL type_info function() {
  g3ddbgAssert__FbPCce(false,str_849);
  return (type_info *)v;
}

type_info& MAPMANIM_MATRIX type_info function() {
  g3ddbgAssert__FbPCce(false,str_849);
  return (type_info *)v;
}

type_info& MAPMANIM_HEAD type_info function() {
  g3ddbgAssert__FbPCce(false,str_849);
  return (type_info *)v;
}

static void global constructors keyed to MapAnimCheckPlay() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
