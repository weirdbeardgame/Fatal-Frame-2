// STATUS: NOT STARTED

#include "mime.h"

struct fixed_array_base<unsigned int,50,unsigned int[50]> {
protected:
	u_int m_aData[50];
	
public:
	fixed_array_base<unsigned int,50,unsigned int[50]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	u_int& operator[]();
	u_int& operator[]();
	u_int* data();
	u_int* begin();
	u_int* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<unsigned int,50> : fixed_array_base<unsigned int,50,unsigned int[50]> {
};

struct fixed_array_base<unsigned int *,50,unsigned int *[50]> {
protected:
	u_int *m_aData[50];
	
public:
	fixed_array_base<unsigned int *,50,unsigned int *[50]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	u_int*& operator[]();
	u_int*& operator[]();
	u_int** data();
	u_int** begin();
	u_int** end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<unsigned int *,50> : fixed_array_base<unsigned int *,50,unsigned int *[50]> {
};

struct fixed_array_base<unsigned char,30,unsigned char[30]> {
protected:
	u_char m_aData[30];
	
public:
	fixed_array_base<unsigned char,30,unsigned char[30]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	u_char& operator[]();
	u_char& operator[]();
	u_char* data();
	u_char* begin();
	u_char* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<unsigned char,30> : fixed_array_base<unsigned char,30,unsigned char[30]> {
};

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3bfeb8;
	
  g3ddbgAssert__FbPCce(false,str_646);
  return (uchar *)v;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_verifyrange__H1ZUc_UiUi_PX01(0x3f3060,_max);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_verifyrange__H1ZUc_UiUi_PX01(0x3f3068,_max);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_verifyrange__H1ZUc_UiUi_PX01(0x3bff00,_max);
  }
  return (uint **)0x0;
}

u_int* mimInitMimeCtrl(MIME_CTRL *m_ctrl, MIME_DAT *mdat, u_int *mim_p, u_int *mdl_p, u_int *tmp_p, u_int *m_num) {
	u_int i;
	u_int j;
	u_int mim_num;
	fixed_array<unsigned int,50> parts_buf;
	fixed_array<unsigned int *,50> parts_p;
	u_int *parts;
	u_int fsize;
	u_int parts_no;
	u_int flg;
	
  uint uVar1;
  MIME_DAT **ppMVar2;
  uint parts_id;
  uint *mdl_p_00;
  uint uVar3;
  fixed_array<unsigned_int,50> *pfVar4;
  uint *puVar5;
  MIME_DAT *mdat_00;
  fixed_array<unsigned_int,50> parts_buf;
  fixed_array<unsigned_int_*,50> parts_p;
  uint *local_70;
  uint *local_6c;
  uint i;
  uint mim_num;
  uint fsize;
  uint flg;
  MIME_DAT *local_58;
  int local_54;
  
  mim_num = *mim_p;
  puVar5 = mim_p + 4;
  i = 0;
  local_54 = 0;
  mdat_00 = mdat;
  local_70 = mdl_p;
  local_6c = m_num;
  local_58 = mdat;
  do {
    uVar3 = i;
    if (mim_num <= i) {
      return tmp_p;
    }
    fsize = *puVar5;
    puVar5 = puVar5 + 4;
    m_ctrl->stat = '\0';
    flg = 0;
    parts_id = mimGetPartsNo__FPUi(puVar5);
    mdl_p_00 = (uint *)GetFileInPak__FPvi(local_70,parts_id);
    if (mdl_p_00 == (uint *)0x0) {
      *local_6c = 0;
      return tmp_p;
    }
                    /* inlined from ../graph3d/ctl/fixed_array.h */
                    /* inlined from ../graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1ZUi_UiUi_PX01(i,0x32);
    *(uint *)((int)parts_buf.field0_0x0.m_aData + local_54) = parts_id;
    _fixed_array_verifyrange__H1ZPUi_UiUi_PX01(uVar3,0x32);
                    /* end of inlined section */
                    /* inlined from ../graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
    *(uint **)((int)parts_p.field0_0x0.m_aData + local_54) = tmp_p;
    pfVar4 = &parts_buf;
    for (uVar3 = 0; uVar3 < i; uVar3 = uVar3 + 1) {
                    /* inlined from ../graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1ZUi_UiUi_PX01(uVar3,0x32);
      uVar1 = *(uint *)pfVar4;
                    /* inlined from ../graph3d/ctl/fixed_array.h */
      pfVar4 = (fixed_array<unsigned_int,50> *)((int)pfVar4 + 4);
      if (parts_id == uVar1) {
                    /* end of inlined section */
        flg = 1;
        break;
      }
    }
    if (flg == 0) {
      tmp_p = mimSetMimeDat__FP8MIME_DATPUiN21(local_58,puVar5,tmp_p,mdl_p_00);
    }
    else {
                    /* inlined from ../graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1ZPUi_UiUi_PX01(uVar3,0x32);
      mimSetMimeDat__FP8MIME_DATPUiN21(mdat,puVar5,parts_p.field0_0x0.m_aData[uVar3],mdl_p_00);
    }
                    /* end of inlined section */
    mdat = mdat + 1;
    mimSetMimeCtrl__FP9MIME_CTRLP8MIME_DATUiUi(m_ctrl,mdat_00,0,parts_id);
    local_54 = local_54 + 4;
    local_58 = local_58 + 1;
    i = i + 1;
    mimAddressMapping__FPUi(m_ctrl->mdat->dat);
    ppMVar2 = &m_ctrl->mdat;
    m_ctrl = m_ctrl + 1;
    mimSetOriVertex__FP8MIME_DAT(*ppMVar2);
    puVar5 = (uint *)((int)puVar5 + (fsize & 0xfffffffc));
    mdat_00 = mdat_00 + 1;
  } while( true );
}

u_int mimGetBufSize(u_int *mim_p, u_int *mdl_p) {
	u_int i;
	u_int j;
	u_int mim_num;
	u_int work_buf;
	fixed_array<unsigned int,50> parts_buf;
	u_int *parts;
	u_int fsize;
	u_int parts_no;
	u_int flg;
	PHEAD *ph;
	
  uint uVar1;
  uint uVar2;
  bool bVar3;
  uint num;
  void *pvVar4;
  uint uVar5;
  fixed_array<unsigned_int,50> *pfVar6;
  uint *puVar7;
  uint uVar8;
  fixed_array<unsigned_int,50> *pfVar9;
  fixed_array<unsigned_int,50> parts_buf;
  uint *local_60;
  uint mim_num;
  uint work_buf;
  
  pfVar9 = &parts_buf;
  uVar8 = 0;
  mim_num = *mim_p;
  puVar7 = mim_p + 4;
  work_buf = 0;
  local_60 = mdl_p;
  do {
    if (mim_num <= uVar8) {
      return work_buf;
    }
    uVar2 = *puVar7;
    bVar3 = false;
    num = mimGetPartsNo__FPUi(puVar7 + 4);
    pvVar4 = GetFileInPak__FPvi(local_60,num);
    if (pvVar4 == (void *)0x0) {
      return work_buf;
    }
                    /* inlined from ../graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1ZUi_UiUi_PX01(uVar8,0x32);
    *(uint *)pfVar9 = num;
                    /* end of inlined section */
    pfVar6 = &parts_buf;
    uVar5 = 0;
    do {
      if (uVar8 <= uVar5) goto LAB_00210c88;
                    /* inlined from ../graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1ZUi_UiUi_PX01(uVar5,0x32);
      uVar1 = *(uint *)pfVar6;
      pfVar6 = (fixed_array<unsigned_int,50> *)((int)pfVar6 + 4);
      uVar5 = uVar5 + 1;
    } while (num != uVar1);
                    /* end of inlined section */
    bVar3 = true;
LAB_00210c88:
    if (!bVar3) {
      work_buf = work_buf +
                 (*(int *)(*(int *)((int)pvVar4 + 0x10) + 0xc) -
                 *(int *)(*(int *)((int)pvVar4 + 0x10) + 8));
    }
    pfVar9 = (fixed_array<unsigned_int,50> *)((int)pfVar9 + 4);
    uVar8 = uVar8 + 1;
    puVar7 = (uint *)((int)(puVar7 + 4) + (uVar2 & 0xfffffffc));
  } while( true );
}

void mimInitAcsCtrl(ANI_CTRL *ani_ctrl, u_short mdl_no) {
	u_int i;
	u_int j;
	u_int k;
	u_int wmim_num;
	WMIM_DAT *wmim_tbl;
	MIME_CTRL *m_ctrl;
	u_char flg;
	char name[100];
	WMIM_DAT *wdat;
	
  bool bVar1;
  int iVar2;
  float *pfVar3;
  uchar *__src;
  char *pcVar4;
  int iVar5;
  WMIM_CTRL *pWVar6;
  ulong uVar7;
  WMIM_DAT *pWVar8;
  int iVar10;
  uint uVar11;
  MIME_CTRL *m_ctrl;
  uint uVar12;
  char name [100];
  float fVar9;
  
  pWVar6 = ani_ctrl->wmim;
  if (pWVar6 != (WMIM_CTRL *)0x0) {
    uVar11 = 0;
    pWVar8 = manmdl_dat[(ushort)mdl_no].wdat;
    if (pWVar8 != (WMIM_DAT *)0x0) {
      uVar12 = 0;
      if (pWVar8->dat != (WMIM *)0x0) {
        iVar5 = 0;
        iVar2 = 0;
        do {
          fVar9 = (float)((int)&pWVar8->dat + iVar5);
          iVar2 = iVar2 + uVar11;
          uVar11 = uVar11 + 1;
          iVar5 = uVar11 * 8;
          pfVar3 = pWVar6->v + iVar2 * 4 + -4;
          *pfVar3 = fVar9;
          pfVar3[0x13] = 0.0;
          pWVar8 = (&manmdl_dat[0].wdat)[((uint)(ushort)mdl_no * 2 + (uint)(ushort)mdl_no) * 2];
          pfVar3[0xc] = 0.0;
          pfVar3[0xd] = 0.0;
          pfVar3[0xe] = 0.0;
          pfVar3[0xf] = 0.0;
          pfVar3[4] = 0.0;
          pfVar3[5] = 0.0;
          pfVar3[6] = 0.0;
          pfVar3[7] = 0.0;
          pfVar3[8] = 0.0;
          pfVar3[9] = 0.0;
          pfVar3[10] = 0.0;
          pfVar3[0xb] = 0.0;
          pfVar3[0x10] = 0.0;
          pfVar3[0x11] = 0.0;
          pfVar3[0x12] = 0.0;
          if (pWVar8 == (WMIM_DAT *)0x0) {
            return;
          }
          iVar2 = uVar11 * 4;
          uVar12 = uVar11;
        } while (pWVar8[uVar11].dat != (WMIM *)0x0);
      }
      if (uVar12 < 10) {
        pWVar6 = pWVar6 + uVar12;
        uVar11 = uVar12;
        do {
          pWVar6->wdat = (WMIM_DAT *)0x0;
          uVar11 = uVar11 + 1;
          pWVar6 = pWVar6 + 1;
        } while (uVar11 < 10);
        uVar11 = ani_ctrl->mim_num;
      }
      else {
        uVar11 = ani_ctrl->mim_num;
      }
      ani_ctrl->wmim_num = uVar12;
      if (uVar11 < uVar12) {
        printf("//=================================================\n");
        printf("// Warning : ani_ctrl->mim_num < ani_ctrl->wmim_num\n");
        printf("//=================================================\n");
        printf("mim_num = %d wmim_num = %d\n");
        ani_ctrl->mim_num = 0;
        ani_ctrl->wmim_num = 0;
      }
      else {
        uVar12 = 0;
        if (uVar11 != 0) {
          iVar2 = 0;
          do {
            bVar1 = false;
            if (ani_ctrl->mim == (MIME_CTRL *)0x0) {
              printf("Warning : mim addr is NULL \n");
              return;
            }
            m_ctrl = (MIME_CTRL *)((int)&ani_ctrl->mim->mdat + iVar2);
            uVar11 = 0;
            if (m_ctrl->flg == '\0') {
              m_ctrl->weight_id = '\0';
              uVar11 = ani_ctrl->mim_num;
            }
            else {
              __src = mimGetWeightName__FPUi(m_ctrl->mdat->dat);
              strncpy(name,(char *)__src,8);
              if (ani_ctrl->wmim_num == 0) {
                uVar11 = ani_ctrl->mim_num;
              }
              else {
                iVar5 = 0;
                do {
                  iVar10 = 0;
                  do {
                    uVar7 = (ulong)*(byte *)(***(int ***)((int)ani_ctrl->wmim->v + iVar5 + -0x10) +
                                            iVar10);
                    pcVar4 = name + iVar10;
                    if (uVar7 == 0) {
                      m_ctrl->weight_id = (uchar)uVar11;
                      bVar1 = true;
                      mimRequest__FP9MIME_CTRLUc(m_ctrl,'\0');
                      break;
                    }
                    iVar10 = iVar10 + 1;
                  } while ((long)*pcVar4 == uVar7);
                  if (bVar1) {
                    uVar11 = ani_ctrl->mim_num;
                    goto LAB_00210fc8;
                  }
                  uVar11 = uVar11 + 1;
                  iVar5 = iVar5 + 0x50;
                } while (uVar11 < ani_ctrl->wmim_num);
                uVar11 = ani_ctrl->mim_num;
              }
            }
LAB_00210fc8:
            uVar12 = uVar12 + 1;
            iVar2 = iVar2 + 0x1c;
          } while (uVar12 < uVar11);
        }
      }
    }
  }
  return;
}

void mimInitLoop(ANI_CTRL *ani_ctrl) {
	u_int i;
	
  int iVar1;
  MIME_CTRL *pMVar2;
  uint uVar3;
  
  pMVar2 = ani_ctrl->mim;
  if ((pMVar2 != (MIME_CTRL *)0x0) && (uVar3 = 0, ani_ctrl->mim_num != 0)) {
    iVar1 = 0;
    while( true ) {
      *(undefined *)((int)pMVar2 + (iVar1 - uVar3) * 4 + 0x16) = 0;
      uVar3 = uVar3 + 1;
      if (ani_ctrl->mim_num <= uVar3) break;
      pMVar2 = ani_ctrl->mim;
      iVar1 = uVar3 * 8;
    }
  }
  return;
}

void mimRequest(MIME_CTRL *m_ctrl, u_char rev) {
  uint uVar1;
  
  if (rev == '\0') {
    m_ctrl->frame = 0;
  }
  else {
    uVar1 = mimGetFrameNum__FPUi(m_ctrl->mdat->dat);
    m_ctrl->frame = uVar1 - 1;
  }
  m_ctrl->rev = rev;
  m_ctrl->stat = '\x02';
  return;
}

void mimRequestLastFrame(MIME_CTRL *m_ctrl, u_char rev) {
  uint uVar1;
  
  if (rev == '\0') {
    uVar1 = mimGetFrameNum__FPUi(m_ctrl->mdat->dat);
    m_ctrl->frame = uVar1 - 1;
  }
  else {
    m_ctrl->frame = 0;
  }
  m_ctrl->rev = rev;
  m_ctrl->stat = '\x02';
  return;
}

int mimRequestNum(ANI_CTRL *ani_ctrl, int num, u_char rev) {
	int i;
	int mim_no;
	int mim_num;
	MIME_CTRL *m_ctrl;
	
  uint uVar1;
  MIME_CTRL *pMVar2;
  int iVar3;
  MIME_CTRL *m_ctrl;
  MIME_CTRL *pMVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = 0;
  if (ani_ctrl != (ANI_CTRL *)0x0) {
    iVar3 = mimdatGetMimeNo__FP8ANI_CTRLi(ani_ctrl,num);
    iVar5 = 0;
    if (iVar3 != -1) {
      uVar1 = ani_ctrl->mim_num;
      if (iVar3 < (int)uVar1) {
        pMVar2 = ani_ctrl->mim;
        iVar5 = 0;
        pMVar4 = pMVar2;
        if (0 < (int)uVar1) {
          m_ctrl = pMVar2;
          iVar6 = 0;
          while( true ) {
            if ((pMVar2[iVar3].parts_id == m_ctrl->parts_id) && (iVar5 != iVar3)) {
              mimStop__FP9MIME_CTRL(m_ctrl);
              pMVar4 = ani_ctrl->mim;
            }
            iVar5 = iVar5 + 1;
            if ((int)uVar1 <= iVar5) break;
            m_ctrl = (MIME_CTRL *)((int)&pMVar4[1].mdat + iVar6);
            iVar6 = iVar6 + 0x1c;
          }
        }
        pMVar4[iVar3].loop = '\0';
        mimRequest__FP9MIME_CTRLUc(ani_ctrl->mim + iVar3,rev);
        iVar5 = 1;
      }
      else {
        printf("mime num is over!!!!!!!!!!!\n");
        iVar5 = 1;
      }
    }
  }
  return iVar5;
}

int mimLoopRequestNum(ANI_CTRL *ani_ctrl, int num, u_char rev) {
	int i;
	int mim_no;
	int mim_num;
	MIME_CTRL *m_ctrl;
	
  uint uVar1;
  MIME_CTRL *pMVar2;
  int iVar3;
  MIME_CTRL *m_ctrl;
  MIME_CTRL *pMVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = 0;
  if (ani_ctrl != (ANI_CTRL *)0x0) {
    iVar3 = mimdatGetMimeNo__FP8ANI_CTRLi(ani_ctrl,num);
    iVar5 = 0;
    if (iVar3 != -1) {
      uVar1 = ani_ctrl->mim_num;
      if (iVar3 < (int)uVar1) {
        pMVar2 = ani_ctrl->mim;
        iVar5 = 0;
        pMVar4 = pMVar2;
        if (0 < (int)uVar1) {
          m_ctrl = pMVar2;
          iVar6 = 0;
          do {
            if ((pMVar2[iVar3].parts_id == m_ctrl->parts_id) && (iVar5 != iVar3)) {
              mimStop__FP9MIME_CTRL(m_ctrl);
              pMVar4 = ani_ctrl->mim;
            }
            iVar5 = iVar5 + 1;
            m_ctrl = (MIME_CTRL *)((int)&pMVar4[1].mdat + iVar6);
            iVar6 = iVar6 + 0x1c;
          } while (iVar5 < (int)uVar1);
        }
        pMVar4[iVar3].loop = '\x01';
        if (ani_ctrl->mim[iVar3].stat == '\x01') {
          mimRequest__FP9MIME_CTRLUc(ani_ctrl->mim + iVar3,rev);
          iVar5 = 1;
        }
        else {
          iVar5 = 1;
        }
      }
      else {
        printf("mime num is over!!!!!!!!!!\n");
        iVar5 = 1;
      }
    }
  }
  return iVar5;
}

int mimRequestNumContinue(ANI_CTRL *ani_ctrl, int num, u_char rev) {
	int i;
	int mim_no;
	int mim_num;
	MIME_CTRL *m_ctrl;
	
  uint uVar1;
  MIME_CTRL *pMVar2;
  int iVar3;
  int iVar4;
  MIME_CTRL *pMVar5;
  int iVar6;
  
  iVar6 = 0;
  if (ani_ctrl != (ANI_CTRL *)0x0) {
    iVar3 = mimdatGetMimeNo__FP8ANI_CTRLi(ani_ctrl,num);
    iVar6 = 0;
    if (iVar3 != -1) {
      uVar1 = ani_ctrl->mim_num;
      if (iVar3 < (int)uVar1) {
        pMVar2 = ani_ctrl->mim;
        iVar6 = 0;
        if (0 < (int)uVar1) {
          iVar4 = 0;
          pMVar5 = pMVar2;
          while( true ) {
            pMVar5 = (MIME_CTRL *)((iVar4 - iVar6) * 4 + (int)pMVar5);
            if ((pMVar2[iVar3].parts_id == pMVar5->parts_id) && (iVar6 != iVar3)) {
              mimStop__FP9MIME_CTRL(pMVar5);
            }
            iVar6 = iVar6 + 1;
            if ((int)uVar1 <= iVar6) break;
            pMVar5 = ani_ctrl->mim;
            iVar4 = iVar6 * 8;
          }
        }
        iVar6 = 1;
        if (pMVar2[iVar3].stat == '\x01') {
          mimRequest__FP9MIME_CTRLUc(ani_ctrl->mim + iVar3,rev);
          iVar6 = 1;
        }
      }
      else {
        printf("mime num is over!!!!!!!!!!!\n");
        iVar6 = 1;
      }
    }
  }
  return iVar6;
}

int mimIsUseParts(ANI_CTRL *ani_ctrl, int no) {
	int i;
	int mim_num;
	int mim_no;
	
  MIME_CTRL *pMVar1;
  int iVar2;
  MIME_CTRL *pMVar3;
  int iVar4;
  
  if ((ani_ctrl != (ANI_CTRL *)0x0) &&
     (iVar2 = mimdatGetMimeNo__FP8ANI_CTRLi(ani_ctrl,no), iVar2 != -1)) {
    iVar4 = 0;
    if (0 < (int)ani_ctrl->mim_num) {
      pMVar3 = ani_ctrl->mim;
      pMVar1 = pMVar3 + iVar2;
      do {
        if ((pMVar1->parts_id == pMVar3->parts_id) && (pMVar3->stat != '\x01')) {
          return 1;
        }
        iVar4 = iVar4 + 1;
        pMVar3 = pMVar3 + 1;
      } while (iVar4 < (int)ani_ctrl->mim_num);
    }
  }
  return 0;
}

int mimIsReqMimNum(ANI_CTRL *ani_ctrl, int no) {
	int mim_no;
	
  int iVar1;
  
  if ((ani_ctrl != (ANI_CTRL *)0x0) &&
     (iVar1 = mimdatGetMimeNo__FP8ANI_CTRLi(ani_ctrl,no), iVar1 != -1)) {
    if (iVar1 < (int)ani_ctrl->mim_num) {
      if (ani_ctrl->mim[iVar1].stat != '\x01') {
        return 1;
      }
    }
    else {
      printf("mime num is over!!!!!!!!!!!\n");
    }
  }
  return 0;
}

int mimStopNum(ANI_CTRL *ani_ctrl, int num) {
	int mim_no;
	int mim_num;
	
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (ani_ctrl != (ANI_CTRL *)0x0) {
    iVar1 = mimdatGetMimeNo__FP8ANI_CTRLi(ani_ctrl,num);
    iVar2 = 0;
    if (iVar1 != -1) {
      if (iVar1 < (int)ani_ctrl->mim_num) {
        mimStop__FP9MIME_CTRL(ani_ctrl->mim + iVar1);
        iVar2 = 1;
      }
      else {
        printf("mime num is over!!!!!!!!!!!\n");
        iVar2 = 0;
      }
    }
  }
  return iVar2;
}

int mimEndStopNum(ANI_CTRL *ani_ctrl, int num) {
	int mim_no;
	int mim_num;
	MIME_CTRL *m_ctrl;
	
  int iVar1;
  uint uVar2;
  int iVar3;
  MIME_CTRL *pMVar4;
  
  iVar3 = 0;
  if (ani_ctrl != (ANI_CTRL *)0x0) {
    iVar1 = mimdatGetMimeNo__FP8ANI_CTRLi(ani_ctrl,num);
    iVar3 = 0;
    if (iVar1 != -1) {
      if (iVar1 < (int)ani_ctrl->mim_num) {
        pMVar4 = ani_ctrl->mim + iVar1;
        uVar2 = mimGetFrameNum__FPUi(pMVar4->mdat->dat);
        iVar3 = 1;
        pMVar4->stat = '\x02';
        pMVar4->frame = uVar2 - 1;
      }
      else {
        printf("mime num is over!!!!!!!!!!!\n");
        iVar3 = 0;
      }
    }
  }
  return iVar3;
}

void mimStop(MIME_CTRL *m_ctrl) {
  m_ctrl->rev = '\0';
  m_ctrl->stat = '\x01';
  m_ctrl->frame = 0;
  return;
}

void mimSetReso(MIME_CTRL *m_ctrl, int reso) {
  m_ctrl->reso = reso;
  return;
}

void mimClearVertex(MIME_CTRL *m_ctrl) {
	u_int i;
	u_int vtx_num;
	float *pkt[4];
	float *vtx[4];
	MIME_DAT *mdat;
	
  MIME_DAT *pMVar1;
  uint uVar2;
  float (*pafVar3) [4];
  float (*pafVar4) [4];
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  
  pMVar1 = m_ctrl->mdat;
  if (pMVar1 != (MIME_DAT *)0x0) {
    uVar2 = pMVar1->vtx_num;
    uVar8 = 0;
    pafVar3 = pMVar1->pkt;
    pafVar4 = pMVar1->vtx;
    if (uVar2 != 0) {
      do {
                    /* inlined from ../graph3d/g3dxVu0.h */
        fVar5 = (*pafVar4)[1];
        fVar6 = (*pafVar4)[2];
        fVar7 = (*pafVar4)[3];
        (*pafVar3)[0] = (*pafVar4)[0];
        (*pafVar3)[1] = fVar5;
        (*pafVar3)[2] = fVar6;
        (*pafVar3)[3] = fVar7;
                    /* end of inlined section */
        uVar8 = uVar8 + 1;
        pafVar3 = pafVar3[1];
        pafVar4 = pafVar4[1];
      } while (uVar8 < uVar2);
    }
  }
  return;
}

void mimCalcVertex(MIME_CTRL *m_ctrl, WMIM_CTRL *wmim, u_char clear_vtx_flg) {
	u_int i;
	u_int j;
	u_int k;
	u_int vtx_num;
	u_int key_num;
	u_int vtx_ofs;
	float *key[4];
	float *pkt[4];
	u_int *ko_top;
	float weight;
	MIME_DAT *mdat;
	fixed_array<unsigned char,6> acs_flg;
	u_int koblock_num;
	u_int *mim_top;
	u_int frame;
	u_int *wav_addr;
	
  byte bVar1;
  MIME_DAT *pMVar2;
  uint *puVar3;
  uint uVar4;
  float afVar5 [4];
  uint uVar6;
  uint *puVar7;
  uint **ppuVar8;
  undefined (*pauVar9) [16];
  undefined (*pauVar10) [16];
  uint uVar11;
  float (*pafVar12) [4];
  uchar *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  float fVar18;
  undefined auVar19 [16];
  undefined auVar20 [16];
  undefined auVar21 [16];
  fixed_array<unsigned_char,6> acs_flg;
  
  pMVar2 = m_ctrl->mdat;
  uVar6 = mimGetKeymdlNum__FPUi(pMVar2->dat);
  if (clear_vtx_flg != '\0') {
    mimClearVertex__FP9MIME_CTRL(m_ctrl);
  }
  if ((m_ctrl->flg & 1) != 0) {
                    /* inlined from ../graph3d/ctl/fixed_array.h */
    uVar17 = 0;
    uVar16 = 0;
    do {
      _fixed_array_verifyrange__H1ZUc_UiUi_PX01(uVar16,6);
                    /* end of inlined section */
      bVar1 = m_ctrl->flg;
      uVar14 = uVar17 + 1;
                    /* inlined from ../graph3d/ctl/fixed_array.h */
      puVar13 = acs_flg.field0_0x0.m_aData + uVar16;
                    /* end of inlined section */
                    /* end of inlined section */
      *puVar13 = '\0';
      uVar15 = uVar16;
      if (((int)(uint)bVar1 >> (uVar14 & 0x1f) & 1U) != 0) {
                    /* inlined from ../graph3d/ctl/fixed_array.h */
        uVar15 = uVar16 + 1;
        _fixed_array_verifyrange__H1ZUc_UiUi_PX01(uVar16,6);
        *puVar13 = (uchar)uVar17;
      }
                    /* end of inlined section */
      uVar17 = uVar14;
      uVar16 = uVar15;
    } while (uVar14 < 6);
    if (uVar15 != uVar6) {
      printf("Warning : acsnum is Wrong!!!!\n");
    }
  }
  uVar17 = 0;
  if (uVar6 == 0) {
    return;
  }
  bVar1 = m_ctrl->flg;
  do {
    if ((bVar1 & 1) == 0) {
      puVar3 = pMVar2->dat;
      puVar7 = puVar3 + uVar17 * 2 + 8;
      if (puVar3[1] == 0) {
        puVar7 = (uint *)((int)(puVar3 + uVar17 * 2 + 8) + (int)puVar3);
      }
      fVar18 = *(float *)(m_ctrl->frame * 4 + *puVar7);
LAB_0021190c:
      if (DAT_003ee5a4 <= fVar18) {
        if (1.0 < fVar18) {
          fVar18 = 1.0;
        }
        auVar19 = _qmtc2(fVar18);
        puVar3 = pMVar2->dat;
        uVar16 = 0;
        pafVar12 = pMVar2->pkt;
        ppuVar8 = (uint **)(puVar3 + uVar17 * 2 + 9);
        if (puVar3[1] == 0) {
          ppuVar8 = (uint **)((int)(puVar3 + uVar17 * 2 + 9) + (int)puVar3);
        }
        puVar3 = *ppuVar8;
        uVar15 = *puVar3;
        pauVar9 = (undefined (*) [16])(puVar3 + 4);
        if (uVar15 != 0) {
          uVar14 = puVar3[5];
          while( true ) {
            pauVar10 = pauVar9[1];
            uVar4 = *(uint *)*pauVar9;
            uVar11 = 0;
            pafVar12 = pafVar12[uVar14];
            pauVar9 = pauVar10;
            if (uVar4 != 0) {
              do {
                auVar20 = _lqc2(*pauVar9);
                auVar20 = _vmulbc(auVar20,auVar19);
                auVar21 = _lqc2((undefined  [16])*pafVar12);
                auVar20 = _vadd(auVar21,auVar20);
                afVar5 = (float  [4])_sqc2(auVar20);
                *pafVar12 = afVar5;
                uVar11 = uVar11 + 1;
                pauVar9 = pauVar9[1];
                pafVar12 = pafVar12[1];
              } while (uVar11 < uVar4);
            }
            uVar16 = uVar16 + 1;
            if (uVar15 <= uVar16) break;
            pafVar12 = pMVar2->pkt;
            uVar14 = *(uint *)((int)*pauVar9 + 4);
          }
        }
      }
    }
    else {
      if (wmim == (WMIM_CTRL *)0x0) {
        printf("Warning : wmim addr is NULL \n");
        return;
      }
      if (wmim->wdat != (WMIM_DAT *)0x0) {
                    /* inlined from ../graph3d/ctl/fixed_array.h */
        _fixed_array_verifyrange__H1ZUc_UiUi_PX01(uVar17,6);
        puVar13 = acs_flg.field0_0x0.m_aData + uVar17;
        if ((*puVar13 & 1) == 0) {
          _fixed_array_verifyrange__H1ZUc_UiUi_PX01(uVar17,6);
          fVar18 = -wmim->w[*puVar13 >> 1];
        }
        else {
          _fixed_array_verifyrange__H1ZUc_UiUi_PX01(uVar17,6);
          fVar18 = wmim->w[*puVar13 >> 1];
        }
                    /* end of inlined section */
        if (0.0 <= fVar18) goto LAB_0021190c;
      }
    }
    uVar17 = uVar17 + 1;
    if (uVar6 <= uVar17) {
      return;
    }
    bVar1 = m_ctrl->flg;
  } while( true );
}

void mimSetMimeCtrl(MIME_CTRL *m_ctrl, MIME_DAT *mdat, u_int furn_id, u_int parts_id) {
  uint *mim_top;
  int iVar1;
  uint uVar2;
  
  m_ctrl->furn_id = (short)furn_id;
  m_ctrl->parts_id = (uchar)parts_id;
  m_ctrl->mdat = mdat;
  m_ctrl->frame = 0;
  iVar1 = motGetMotReso__Fv();
  m_ctrl->cnt = 0.0;
  mim_top = mdat->dat;
  m_ctrl->reso = iVar1;
  uVar2 = mimGetFlg__FPUi(mim_top);
  m_ctrl->flg = (uchar)uVar2;
  if ((uVar2 & 0xff) == 1) {
    m_ctrl->stat = '\x02';
  }
  else {
    m_ctrl->stat = '\x01';
  }
  m_ctrl->rev = '\0';
  m_ctrl->loop = '\0';
  return;
}

u_int* mimSetMimeDat(MIME_DAT *mdat, u_int *mim_p, u_int *tmp_buf, u_int *mdl_p) {
	PHEAD *ph;
	
  float (*pafVar1) [4];
  int iVar2;
  uint uVar3;
  
  uVar3 = mdl_p[4];
  mdat->dat = mim_p;
  pafVar1 = *(float (**) [4])(uVar3 + 8);
  iVar2 = *(int *)(uVar3 + 0xc);
  mdat->pkt = pafVar1;
  uVar3 = iVar2 - (int)pafVar1;
  mdat->vtx = (float (*) [4])tmp_buf;
  mdat->vtx_num = uVar3 >> 4;
  return (uint *)((int)tmp_buf + (uVar3 & 0xfffffff0));
}

void mimSetOriVertex(MIME_DAT *mdat) {
	u_int i;
	u_int vtx_num;
	float *vtx[4];
	float *pkt[4];
	
  uint uVar1;
  float (*pafVar2) [4];
  float (*pafVar3) [4];
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  
  uVar1 = mdat->vtx_num;
  uVar7 = 0;
  pafVar2 = mdat->pkt;
  pafVar3 = mdat->vtx;
  if (uVar1 != 0) {
    do {
                    /* inlined from ../graph3d/g3dxVu0.h */
      fVar4 = (*pafVar2)[1];
      fVar5 = (*pafVar2)[2];
      fVar6 = (*pafVar2)[3];
      (*pafVar3)[0] = (*pafVar2)[0];
      (*pafVar3)[1] = fVar4;
      (*pafVar3)[2] = fVar5;
      (*pafVar3)[3] = fVar6;
                    /* end of inlined section */
      uVar7 = uVar7 + 1;
      pafVar2 = pafVar2[1];
      pafVar3 = pafVar3[1];
    } while (uVar7 < uVar1);
  }
  return;
}

void mimSetVertex(ANI_CTRL *ani_ctrl) {
	static char __FUNCTION__[13] = {
		/* [0] = */ 109,
		/* [1] = */ 105,
		/* [2] = */ 109,
		/* [3] = */ 83,
		/* [4] = */ 101,
		/* [5] = */ 116,
		/* [6] = */ 86,
		/* [7] = */ 101,
		/* [8] = */ 114,
		/* [9] = */ 116,
		/* [10] = */ 101,
		/* [11] = */ 120,
		/* [12] = */ 0
	};
	MIME_DAT *mdat;
	u_int mim_num;
	u_int bg_num;
	u_int *pBakDat;
	u_int stat;
	u_int i;
	fixed_array<unsigned char,30> flg;
	MIME_CTRL *m_ctrl;
	MIME_CTRL *m_ctrl;
	
  byte bVar1;
  MIME_DAT *pMVar2;
  uint *puVar3;
  uint *puVar4;
  MIME_CTRL *pMVar5;
  MIME_CTRL *m_ctrl;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  fixed_array<unsigned_char,30> flg;
  uint bg_num;
  
  uVar6 = 0;
                    /* inlined from ../graph3d/ctl/fixed_array.h */
  do {
    _fixed_array_verifyrange__H1ZUc_UiUi_PX01(uVar6,0x1e);
    flg.field0_0x0.m_aData[uVar6] = '\x01';
                    /* end of inlined section */
    uVar6 = uVar6 + 1;
  } while (uVar6 < 0x1e);
  bg_num = ani_ctrl->bg_num;
  uVar6 = ani_ctrl->mim_num;
  uVar8 = 0;
  if (ani_ctrl->wmim_num != 0) {
    do {
      uVar7 = uVar8 + 1;
      mimWeightCtrl__FP8ANI_CTRLUif(ani_ctrl,uVar8,1.0);
      uVar8 = uVar7;
    } while (uVar7 < ani_ctrl->wmim_num);
  }
  uVar8 = 0;
  if (uVar6 != 0) {
    iVar9 = 0;
    do {
      pMVar5 = (MIME_CTRL *)((int)&ani_ctrl->mim->mdat + iVar9);
      if (ani_ctrl->mim == (MIME_CTRL *)0x0) {
        printf("Warning : mim addr is NULL \n");
        return;
      }
      pMVar2 = pMVar5->mdat;
      puVar3 = pMVar2->dat;
      if (pMVar5->stat == '\x02') {
        bVar1 = pMVar5->parts_id;
        if (ani_ctrl->wmim == (WMIM_CTRL *)0x0) {
                    /* inlined from ../graph3d/ctl/fixed_array.h */
          _fixed_array_verifyrange__H1ZUc_UiUi_PX01(bVar1,0x1e);
          mimCalcVertex__FP9MIME_CTRLP9WMIM_CTRLUc
                    (pMVar5,(WMIM_CTRL *)0x0,flg.field0_0x0.m_aData[bVar1]);
          puVar4 = pMVar2->dat;
        }
        else {
          _fixed_array_verifyrange__H1ZUc_UiUi_PX01(bVar1,0x1e);
          mimCalcVertex__FP9MIME_CTRLP9WMIM_CTRLUc
                    (pMVar5,ani_ctrl->wmim + pMVar5->weight_id,flg.field0_0x0.m_aData[bVar1]);
                    /* end of inlined section */
          puVar4 = pMVar2->dat;
        }
        if (puVar3 != puVar4) {
          _SetLineInfo__FPCciT0T0(s_mime_c_003f3098,0x38d,"mimSetVertex","pBakDat == mdat->dat");
          g3ddbgAssert__FbPCce(puVar3 == pMVar2->dat,&DAT_003f30a0);
        }
        if (((pMVar5->flg ^ 1) & 1) == 0) {
          bVar1 = pMVar5->parts_id;
        }
        else {
          puVar4 = pMVar2->dat;
          if (puVar3 != puVar4) {
            _SetLineInfo__FPCciT0T0(s_mime_c_003f3098,0x38f,"mimSetVertex","pBakDat == mdat->dat");
            g3ddbgAssert__FbPCce(puVar3 == pMVar2->dat,&DAT_003f30a0);
            puVar4 = pMVar2->dat;
          }
          mimAddFrame__FP9MIME_CTRLPUi(pMVar5,puVar4);
                    /* inlined from ../graph3d/ctl/fixed_array.h */
          bVar1 = pMVar5->parts_id;
        }
        _fixed_array_verifyrange__H1ZUc_UiUi_PX01(bVar1,0x1e);
        flg.field0_0x0.m_aData[bVar1] = '\0';
      }
                    /* end of inlined section */
      uVar8 = uVar8 + 1;
      iVar9 = iVar9 + 0x1c;
    } while (uVar8 < uVar6);
  }
  uVar6 = 0;
  if (bg_num != 0) {
    iVar9 = 0;
    pMVar5 = ani_ctrl->bgmim;
    while( true ) {
      m_ctrl = (MIME_CTRL *)((int)&pMVar5->mdat + iVar9);
      iVar9 = iVar9 + 0x1c;
      if (pMVar5 == (MIME_CTRL *)0x0) break;
                    /* inlined from ../graph3d/ctl/fixed_array.h */
      bVar1 = m_ctrl->parts_id;
                    /* end of inlined section */
      pMVar2 = m_ctrl->mdat;
                    /* inlined from ../graph3d/ctl/fixed_array.h */
      puVar3 = pMVar2->dat;
      _fixed_array_verifyrange__H1ZUc_UiUi_PX01(bVar1,0x1e);
                    /* end of inlined section */
      if ((flg.field0_0x0.m_aData[bVar1] == '\x01') && (ani_ctrl->interp_flg == 0)) {
                    /* inlined from ../graph3d/ctl/fixed_array.h */
        bVar1 = m_ctrl->parts_id;
        _fixed_array_verifyrange__H1ZUc_UiUi_PX01(bVar1,0x1e);
        mimCalcVertex__FP9MIME_CTRLP9WMIM_CTRLUc
                  (m_ctrl,(WMIM_CTRL *)0x0,flg.field0_0x0.m_aData[bVar1]);
                    /* end of inlined section */
        puVar4 = pMVar2->dat;
        if (puVar3 != puVar4) {
          _SetLineInfo__FPCciT0T0(s_mime_c_003f3098,0x3a4,"mimSetVertex","pBakDat == mdat->dat");
          g3ddbgAssert__FbPCce(puVar3 == pMVar2->dat,&DAT_003f30a0);
          puVar4 = pMVar2->dat;
        }
        mimAddFrame__FP9MIME_CTRLPUi(m_ctrl,puVar4);
                    /* inlined from ../graph3d/ctl/fixed_array.h */
        bVar1 = m_ctrl->parts_id;
        _fixed_array_verifyrange__H1ZUc_UiUi_PX01(bVar1,0x1e);
        flg.field0_0x0.m_aData[bVar1] = '\0';
                    /* end of inlined section */
      }
      uVar6 = uVar6 + 1;
      if (bg_num <= uVar6) {
        return;
      }
      pMVar5 = ani_ctrl->bgmim;
    }
    printf("Warning : bgmim addr is NULL \n");
  }
  return;
}

void mimClearToScene() {
  return;
}

void mimClearAllVertex(ANI_CTRL *ani_ctrl) {
	u_int mim_num;
	u_int bg_num;
	u_int i;
	
  uint uVar1;
  bool bVar2;
  MIME_CTRL *pMVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = 0;
  iVar5 = 0;
  uVar1 = ani_ctrl->mim_num;
  do {
    bVar2 = uVar1 <= uVar4;
    uVar4 = uVar4 + 1;
    if (bVar2) {
LAB_00211ecc:
      uVar1 = ani_ctrl->bg_num;
      uVar4 = 0;
      iVar5 = 0;
      while( true ) {
        bVar2 = uVar1 <= uVar4;
        uVar4 = uVar4 + 1;
        if (bVar2) {
          return;
        }
        pMVar3 = (MIME_CTRL *)((int)&ani_ctrl->bgmim->mdat + iVar5);
        iVar5 = iVar5 + 0x1c;
        if (ani_ctrl->bgmim == (MIME_CTRL *)0x0) break;
        mimClearVertex__FP9MIME_CTRL(pMVar3);
      }
      printf("Warning : bg_mim addr is NULL\n");
      return;
    }
    pMVar3 = (MIME_CTRL *)((int)&ani_ctrl->mim->mdat + iVar5);
    iVar5 = iVar5 + 0x1c;
    if (ani_ctrl->mim == (MIME_CTRL *)0x0) {
      printf("Warning : mim addr is NULL\n");
      goto LAB_00211ecc;
    }
    mimClearVertex__FP9MIME_CTRL(pMVar3);
  } while( true );
}

u_char mimAddFrame(MIME_CTRL *m_ctrl, u_int *dat) {
	static char __FUNCTION__[12] = {
		/* [0] = */ 109,
		/* [1] = */ 105,
		/* [2] = */ 109,
		/* [3] = */ 65,
		/* [4] = */ 100,
		/* [5] = */ 100,
		/* [6] = */ 70,
		/* [7] = */ 114,
		/* [8] = */ 97,
		/* [9] = */ 109,
		/* [10] = */ 101,
		/* [11] = */ 0
	};
	float cnt_f;
	int cnt_i;
	
  uchar uVar1;
  uint uVar2;
  float fVar3;
  int iVar4;
  
  if (((uint)dat & 0xe000000) != 0) {
    _SetLineInfo__FPCciT0T0(s_mime_c_003f3098,0x3e3,"mimAddFrame","!((int)dat & 0x0e000000)");
    g3ddbgAssert__FbPCce(((uint)dat & 0xe000000) == 0,"IllegalData");
  }
  uVar1 = '\0';
  if (m_ctrl->reso != 0) {
    fVar3 = m_ctrl->cnt + (float)m_ctrl->reso / 200.0;
    iVar4 = (int)fVar3;
    m_ctrl->cnt = fVar3;
    if (m_ctrl->rev == '\0') {
      m_ctrl->cnt = fVar3 - (float)iVar4;
      m_ctrl->frame = m_ctrl->frame + iVar4;
      uVar2 = mimGetFrameNum__FPUi(dat);
      if (m_ctrl->frame < (int)uVar2) {
        return '\0';
      }
      uVar1 = m_ctrl->loop;
      m_ctrl->frame = 0;
    }
    else {
      m_ctrl->cnt = fVar3 - (float)iVar4;
      iVar4 = m_ctrl->frame - iVar4;
      m_ctrl->frame = iVar4;
      if (-1 < iVar4) {
        return '\0';
      }
      uVar2 = mimGetFrameNum__FPUi(dat);
      uVar1 = m_ctrl->loop;
      m_ctrl->frame = uVar2 - 1;
    }
    if (uVar1 == '\0') {
      mimStop__FP9MIME_CTRL(m_ctrl);
    }
    uVar1 = '\x01';
  }
  return uVar1;
}

void SceneMimSetVertex(ANI_CTRL *ani_ctrl, u_int frame) {
	MIME_DAT *mdat;
	u_int i;
	fixed_array<unsigned char,30> flg;
	MIME_CTRL *m_ctrl;
	
  byte bVar1;
  MIME_DAT *pMVar2;
  MIME_CTRL *m_ctrl;
  uint uVar3;
  uint uVar4;
  int iVar5;
  fixed_array<unsigned_char,30> flg;
  
  uVar3 = 0;
                    /* inlined from ../graph3d/ctl/fixed_array.h */
  do {
    _fixed_array_verifyrange__H1ZUc_UiUi_PX01(uVar3,0x1e);
    flg.field0_0x0.m_aData[uVar3] = '\x01';
                    /* end of inlined section */
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x1e);
  uVar3 = 0;
  if (ani_ctrl->wmim_num != 0) {
    do {
      uVar4 = uVar3 + 1;
      mimWeightCtrl__FP8ANI_CTRLUif(ani_ctrl,uVar3,1.0);
      uVar3 = uVar4;
    } while (uVar4 < ani_ctrl->wmim_num);
  }
  uVar3 = 0;
  if (ani_ctrl->mim_num != 0) {
    iVar5 = 0;
    do {
      m_ctrl = (MIME_CTRL *)((int)&ani_ctrl->mim->mdat + iVar5);
      iVar5 = iVar5 + 0x1c;
      if (ani_ctrl->mim == (MIME_CTRL *)0x0) {
        printf("Warning : mim addr is NULL \n");
        return;
      }
      pMVar2 = m_ctrl->mdat;
      if (((m_ctrl->flg ^ 1) & 1) != 0) {
        uVar4 = mimGetFrameNum__FPUi(pMVar2->dat);
        if (frame < uVar4) {
          m_ctrl->frame = frame;
        }
        else {
          uVar4 = mimGetFrameNum__FPUi(pMVar2->dat);
          frame = uVar4 - 1;
          m_ctrl->frame = frame;
        }
      }
      bVar1 = m_ctrl->parts_id;
      if (ani_ctrl->wmim == (WMIM_CTRL *)0x0) {
                    /* inlined from ../graph3d/ctl/fixed_array.h */
        _fixed_array_verifyrange__H1ZUc_UiUi_PX01(bVar1,0x1e);
        mimCalcVertex__FP9MIME_CTRLP9WMIM_CTRLUc
                  (m_ctrl,(WMIM_CTRL *)0x0,flg.field0_0x0.m_aData[bVar1]);
        bVar1 = m_ctrl->parts_id;
      }
      else {
        _fixed_array_verifyrange__H1ZUc_UiUi_PX01(bVar1,0x1e);
        mimCalcVertex__FP9MIME_CTRLP9WMIM_CTRLUc
                  (m_ctrl,ani_ctrl->wmim + m_ctrl->weight_id,flg.field0_0x0.m_aData[bVar1]);
        bVar1 = m_ctrl->parts_id;
      }
                    /* end of inlined section */
      uVar3 = uVar3 + 1;
                    /* inlined from ../graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1ZUc_UiUi_PX01(bVar1,0x1e);
                    /* end of inlined section */
      uVar4 = ani_ctrl->mim_num;
                    /* inlined from ../graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* end of inlined section */
      flg.field0_0x0.m_aData[bVar1] = '\0';
    } while (uVar3 < uVar4);
  }
  return;
}

u_int mimGetFrameNum(u_int *mim_top) {
  return mim_top[3];
}

u_int mimGetKeymdlNum(u_int *mim_top) {
  return mim_top[2];
}

u_int mimGetPartsNo(u_int *mim_top) {
  return mim_top[4];
}

u_int mimGetFlg(u_int *mim_top) {
  return mim_top[5];
}

u_char* mimGetWeightName(u_int *mim_top) {
  return (uchar *)(mim_top + 6);
}

void mimAddressMapping(u_int *top_addr) {
	MIM_FILE_HEADER *head_p;
	MIM_ADDR_TABLE *tbl_p;
	u_int i;
	
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  
  puVar2 = top_addr + 8;
  if (*top_addr == 0x454d494d) {
    if (top_addr[1] != 1) {
      uVar1 = top_addr[2];
      uVar3 = 0;
      if (uVar1 != 0) {
        do {
          uVar3 = uVar3 + 1;
          *puVar2 = (int)top_addr + *puVar2;
          puVar2[1] = (int)top_addr + puVar2[1];
          puVar2 = puVar2 + 2;
        } while (uVar3 < uVar1);
      }
      top_addr[1] = 1;
    }
    return;
  }
  printf("This isn\'t mime file\n");
  return;
}

void mimInitWeight(ANI_CTRL *ani_ctrl) {
	u_int i;
	
  uint uVar1;
  WMIM_CTRL *pWVar2;
  uint uVar3;
  
  uVar1 = ani_ctrl->wmim_num;
  uVar3 = 0;
  if (uVar1 != 0) {
    pWVar2 = ani_ctrl->wmim;
    do {
      uVar3 = uVar3 + 1;
      pWVar2->v[0] = 0.0;
      pWVar2->v[1] = 0.0;
      pWVar2->v[2] = 0.0;
      pWVar2->v[3] = 0.0;
      pWVar2->w[0] = 0.0;
      pWVar2->w[1] = 0.0;
      pWVar2->w[2] = 0.0;
      pWVar2->w[3] = 0.0;
      pWVar2 = pWVar2 + 1;
    } while (uVar3 < uVar1);
  }
  return;
}

void mimWeightCtrl(ANI_CTRL *ani_ctrl, u_int weight_id, float scale) {
	u_int i;
	float m[4][4];
	float pos[4];
	float f[4];
	float char_pos[4];
	float char_v[4];
	float reverse[4];
	float force[4];
	HeaderSection *hs;
	WMIM_CTRL *w_ctrl;
	WMIM_DAT *wdat;
	
  HeaderSection *pHVar1;
  WMIM_DAT *pWVar2;
  WMIM_CTRL *pWVar3;
  float m [4] [4];
  float pos [4];
  float f [4];
  float char_pos [4];
  float char_v [4];
  float reverse [4];
  float force [4];
  
  if (ani_ctrl->wmim == (WMIM_CTRL *)0x0) {
    printf("Warning : wmim addr is NULL \n");
    return;
  }
  pHVar1 = ani_ctrl->base_p;
  pWVar3 = ani_ctrl->wmim + weight_id;
  pWVar2 = pWVar3->wdat;
  sceVu0CopyMatrix(m,pHVar1->coordp[pWVar2->bone_id].matLocalWorld);
  sceVu0CopyVector(char_pos,pHVar1->coordp->matLocalWorld[3]);
  sceVu0SubVector(char_v,char_pos,pWVar3->old_pos);
  sceVu0ScaleVector(DAT_003ee5a8,char_v,char_v);
  sceVu0ApplyMatrix(pos,m,pWVar2->dat->pos);
  sceVu0SubVector(f,pos,pWVar3->pbak);
  sceVu0SubVector(f,f,char_v);
  sceVu0CopyVector(pWVar3->pbak,pos);
  sceVu0CopyVector(pWVar3->old_pos,char_pos);
  sceVu0ScaleVector(pWVar2->dat->mass,f,f);
  sceVu0ScaleVector(pWVar2->dat->mass,force,pWVar2->dat->gravity);
  sceVu0AddVector(f,f,force);
  sceVu0ScaleVector(scale,f,f);
                    /* WARNING: Subroutine does not return */
  sceVu0InnerProduct(f,f);
}

u_int* unsigned int * _fixed_array_verifyrange<unsigned int>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_646);
  return (uchar *)v;
}

u_char* unsigned char * _fixed_array_verifyrange<unsigned char>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_646);
  return (uchar *)v;
}
