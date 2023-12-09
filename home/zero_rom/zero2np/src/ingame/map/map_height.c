// STATUS: NOT STARTED

#include "map_height.h"

struct fixed_array_base<MhCtrl *,2,MhCtrl *[2]> {
protected:
	MhCtrl *m_aData[2];
	
public:
	fixed_array_base<MhCtrl *,2,MhCtrl *[2]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	MhCtrl*& operator[]();
	MhCtrl*& operator[]();
	MhCtrl** data();
	MhCtrl** begin();
	MhCtrl** end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<MhCtrl *,2> : fixed_array_base<MhCtrl *,2,MhCtrl *[2]> {
};

static float mh_l_scale_vec[4] = {
	/* [0] = */ 0.04f,
	/* [1] = */ -0.04f,
	/* [2] = */ -0.04f,
	/* [3] = */ 1.f
};

static float mh_b_scale_vec[4] = {
	/* [0] = */ 25.f,
	/* [1] = */ -25.f,
	/* [2] = */ -25.f,
	/* [3] = */ 1.f
};

static fixed_array<MhCtrl *,2> map_height_ctrl;
unsigned char MhCtrl * type_info node[12];
unsigned char float [3] type_info node[8];
unsigned char MhCtrl type_info node[8];

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3bb230;
	
  g3ddbgAssert__FbPCce(false,str_807);
  return (type_info *)v;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf6MhCtrl(0x3f1a98,_max);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf6MhCtrl(0x3f1aa0,_max);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf6MhCtrl(0x3bb278,_max);
  }
  return (uint **)0x0;
}

void MhFirstInit() {
	int i;
	
  int iVar1;
  int iVar2;
  fixed_array<MhCtrl_*,2> *pfVar3;
  
  pfVar3 = &map_height_ctrl;
  iVar1 = 0;
  do {
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
    iVar2 = iVar1 + 1;
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1ZP6MhCtrl_UiUi_PX01(iVar1,2);
    *(MhCtrl **)pfVar3 = (MhCtrl *)0x0;
                    /* end of inlined section */
    pfVar3 = (fixed_array<MhCtrl_*,2> *)((int)pfVar3 + 4);
    iVar1 = iVar2;
  } while (iVar2 < 2);
  return;
}

int MhInitMapHeight(int addr, float *offset, int id) {
	MhCtrl *mh_ctrl;
	int i;
	int h;
	int w;
	
  int iVar1;
  MhCtrl *mh_ctrl;
  SgmAREA *pSVar2;
  
  iVar1 = MhSetCtrlP__Fii(addr,id);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    mh_ctrl = MhGetCtrlP__Fi(id);
    iVar1 = mh_ctrl->w * mh_ctrl->h;
    pSVar2 = (SgmAREA *)((int)&mh_ctrl->area->num + addr);
    mh_ctrl->x = (float *)((int)mh_ctrl->x + addr);
    mh_ctrl->z = (float *)((int)mh_ctrl->z + addr);
    mh_ctrl->v_idx = (SgmIDX *)((int)mh_ctrl->v_idx->n + addr);
    mh_ctrl->V = (SgmVERTEX *)((int)mh_ctrl->V->v + addr);
    mh_ctrl->area = pSVar2;
    if (0 < iVar1) {
      do {
        iVar1 = iVar1 + -1;
        pSVar2->e_idx = (int *)((int)pSVar2->e_idx + addr);
        pSVar2 = pSVar2 + 1;
      } while (iVar1 != 0);
    }
    MhSetOffset__FP6MhCtrlPf(mh_ctrl,offset);
    iVar1 = 1;
  }
  return iVar1;
}

int MhGetMapHeight(float *pos_h, float *pos, int id, int limit_flg) {
	int i;
	int p_area;
	int idx;
	int flg;
	MhCtrl *mh_ctrl;
	float height;
	float max_height;
	float scale_pos[4];
	
  int idx;
  MhCtrl *mh_ctrl;
  int iVar1;
  int iVar2;
  SgmAREA *pSVar3;
  int iVar4;
  MhCtrl *pMVar5;
  float fVar6;
  float fVar7;
  float scale_pos [4];
  
  pMVar5 = (MhCtrl *)0x0;
  mh_ctrl = MhGetCtrlP__Fi(id);
  fVar7 = 0.0;
  if (mh_ctrl != (MhCtrl *)0x0) {
    sceVu0MulVector(scale_pos,pos,0x31c680);
    iVar1 = MhIsInArea__FP6MhCtrlPf(mh_ctrl,scale_pos);
    if (iVar1 == -1) {
      sceVu0CopyVector(pos_h,pos);
      mh_ctrl = (MhCtrl *)0x0;
    }
    else {
      pSVar3 = mh_ctrl->area;
      iVar4 = 0;
      if (0 < pSVar3[iVar1].num) {
        do {
          idx = pSVar3[iVar1].e_idx[iVar4];
          iVar2 = MhIsInTriXZ__FP6MhCtrlPfi(mh_ctrl,scale_pos,idx);
          fVar6 = fVar7;
          if (iVar2 == 0) {
LAB_001dbb3c:
            pSVar3 = mh_ctrl->area;
            fVar7 = fVar6;
          }
          else {
            fVar6 = MhIsHeightTri__FP6MhCtrlPfi(mh_ctrl,scale_pos,idx);
            if (pMVar5 == (MhCtrl *)0x0) {
              pMVar5 = (MhCtrl *)&GRA3DVU1MEM_VF02;
              goto LAB_001dbb3c;
            }
            if (fVar7 - scale_pos[1] < 20.0) {
              if (fVar6 - scale_pos[1] < 20.0) {
LAB_001dbb2c:
                if (fVar7 < fVar6) goto LAB_001dbb3c;
                pSVar3 = mh_ctrl->area;
              }
              else {
                pSVar3 = mh_ctrl->area;
              }
            }
            else {
              if (20.0 < fVar7 - scale_pos[1]) {
                if (20.0 < fVar6 - scale_pos[1]) goto LAB_001dbb2c;
                goto LAB_001dbb3c;
              }
              pSVar3 = mh_ctrl->area;
            }
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < pSVar3[iVar1].num);
      }
      mh_ctrl = pMVar5;
      sceVu0CopyVector(pos_h,pos);
      if (mh_ctrl != (MhCtrl *)0x0) {
        if (limit_flg != 0) {
          if (2.0 < fVar7 - scale_pos[1]) {
            fVar7 = scale_pos[1] + 2.0;
          }
          else if (fVar7 - scale_pos[1] < -2.0) {
            fVar7 = scale_pos[1] - 2.0;
          }
        }
        pos_h[1] = -(fVar7 * 25.0);
      }
    }
  }
  return (int)mh_ctrl;
}

int MhDrawHeight(int id) {
	int i;
	int j;
	int f;
	MhCtrl *mh_ctrl;
	fixed_array<float[4],3> v;
	
  int iVar1;
  fixed_array<float[4],3> *pfVar2;
  MhCtrl *pMVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float (*mpos3) [4];
  fixed_array<float[4],3> v;
  
  iVar6 = 0;
  pMVar3 = MhGetCtrlP__Fi(id);
  iVar1 = pMVar3->f_count;
  if (0 < iVar1) {
    mpos3 = v.field0_0x0.m_aData[2];
    do {
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
      pfVar2 = &v;
      iVar4 = 0;
      do {
        _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(iVar4,3);
        sceVu0CopyVector(pfVar2,pMVar3->V + pMVar3->v_idx[iVar6].n[iVar4]);
        _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(iVar4,3);
        iVar5 = iVar4 + 1;
        _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(iVar4,3);
                    /* end of inlined section */
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
        sceVu0MulVector(pfVar2,pfVar2,0x31c690);
                    /* end of inlined section */
        pfVar2 = (fixed_array<float[4],3> *)((int)pfVar2 + 0x10);
        iVar4 = iVar5;
      } while (iVar5 < 3);
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(0,3);
      iVar6 = iVar6 + 1;
      _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(1,3);
      _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(2,3);
      _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(2,3);
      Draw3DSquare__FPfN30UcUcUcUc
                ((float *)&v,(float *)v.field0_0x0.m_aData[1],(float *)mpos3,(float *)mpos3,' ',0x80
                 ,' ','@');
                    /* end of inlined section */
    } while (iVar6 < iVar1);
  }
  return 1;
}

int MhHitLineCheck(float *pos1, float *pos2, int id) {
	int i;
	MhCtrl *mh_ctrl;
	float scale_pos1[4];
	float scale_pos2[4];
	
  MhCtrl *mh_ctrl;
  int iVar1;
  int iVar2;
  undefined auVar3 [16];
  undefined auVar4 [16];
  float scale_pos1 [4];
  float scale_pos2 [4];
  
  mh_ctrl = MhGetCtrlP__Fi(id);
  if (mh_ctrl != (MhCtrl *)0x0) {
                    /* inlined from ../../graphics/graph3d/g3dxVu0.h */
    auVar3 = _lqc2(*(undefined (*) [16])pos1);
    auVar4 = _lqc2((undefined  [16])g_vConvertPS2SI);
    auVar3 = _vmul(auVar3,auVar4);
    scale_pos1 = (float  [4])_sqc2(auVar3);
    auVar3 = _lqc2(*(undefined (*) [16])pos2);
    auVar4 = _lqc2((undefined  [16])g_vConvertPS2SI);
    auVar3 = _vmul(auVar3,auVar4);
    scale_pos2 = (float  [4])_sqc2(auVar3);
                    /* end of inlined section */
    iVar1 = 0;
    if (0 < mh_ctrl->f_count) {
      do {
        iVar2 = iVar1 + 1;
        iVar1 = MhIsHitHeightTri__FP6MhCtrlPfT1i(mh_ctrl,scale_pos1,scale_pos2,iVar1);
        if (iVar1 != 0) {
          return 1;
        }
        iVar1 = iVar2;
      } while (iVar2 < mh_ctrl->f_count);
    }
  }
  return 0;
}

static int MhSetCtrlP(int addr, int id) {
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* end of inlined section */
  if ((uint)id < 2) {
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1ZP6MhCtrl_UiUi_PX01(id,2);
    map_height_ctrl.field0_0x0.m_aData[id] = (MhCtrl *)addr;
                    /* end of inlined section */
  }
  return (uint)((uint)id < 2);
}

static MhCtrl* MhGetCtrlP(int id) {
  MhCtrl *pMVar1;
  
  if ((uint)id < 2) {
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1ZP6MhCtrl_UiUi_PX01(id,2);
    pMVar1 = map_height_ctrl.field0_0x0.m_aData[id];
  }
  else {
                    /* end of inlined section */
    pMVar1 = (MhCtrl *)0x0;
  }
  return pMVar1;
}

static int MhSetOffset(MhCtrl *mh_ctrl, float *in_offset) {
	int i;
	int j;
	int w;
	int h;
	float offset[4];
	
  float *pfVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  SgmVERTEX *pSVar6;
  float offset [4];
  
  sceVu0MulVector(offset,in_offset,0x31c680);
  iVar3 = mh_ctrl->h;
  if (-1 < mh_ctrl->w) {
    pfVar1 = mh_ctrl->x;
    iVar2 = mh_ctrl->w + 1;
    do {
      iVar2 = iVar2 + -1;
      *pfVar1 = *pfVar1 + offset[0];
      pfVar1 = pfVar1 + 1;
    } while (iVar2 != 0);
  }
  if (iVar3 < 0) {
    iVar3 = mh_ctrl->v_count;
  }
  else {
    pfVar1 = mh_ctrl->z;
    iVar3 = iVar3 + 1;
    do {
      iVar3 = iVar3 + -1;
      *pfVar1 = *pfVar1 + offset[2];
      pfVar1 = pfVar1 + 1;
    } while (iVar3 != 0);
    iVar3 = mh_ctrl->v_count;
  }
  iVar2 = 0;
  if (0 < iVar3) {
    pSVar6 = mh_ctrl->V;
    do {
      iVar4 = 0;
      do {
        iVar5 = iVar4 + 1;
        pSVar6->v[iVar4] = pSVar6->v[iVar4] + offset[iVar4];
        iVar4 = iVar5;
      } while (iVar5 < 3);
      iVar2 = iVar2 + 1;
      pSVar6 = pSVar6 + 1;
    } while (iVar2 < iVar3);
  }
  return 1;
}

int MhSetOffset2(int id, float *in_offset) {
  MhCtrl *mh_ctrl;
  int iVar1;
  
  mh_ctrl = MhGetCtrlP__Fi(id);
  iVar1 = MhSetOffset__FP6MhCtrlPf(mh_ctrl,in_offset);
  return iVar1;
}

static int MhIsInArea(MhCtrl *mh_ctrl, float *pos) {
	int w;
	int h;
	int i;
	int j;
	
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  
  iVar1 = mh_ctrl->w;
  iVar5 = 0;
  iVar2 = mh_ctrl->h;
  if (-1 < iVar1) {
    fVar6 = *mh_ctrl->x;
    while ((fVar6 <= *pos && ((iVar5 != iVar1 || (fVar6 < *pos))))) {
      iVar5 = iVar5 + 1;
      if (iVar1 < iVar5) break;
      fVar6 = mh_ctrl->x[iVar5];
    }
  }
  iVar4 = 0;
  if (-1 < iVar2) {
    fVar6 = *mh_ctrl->z;
    while ((fVar6 <= pos[2] && ((iVar4 != iVar2 || (fVar6 < pos[2]))))) {
      iVar4 = iVar4 + 1;
      if (iVar2 < iVar4) break;
      fVar6 = mh_ctrl->z[iVar4];
    }
  }
  iVar3 = -1;
  if (iVar5 != 0) {
    if (iVar5 == iVar1 + 1) {
      iVar3 = -1;
    }
    else if ((iVar4 == 0) || (iVar3 = (iVar4 + -1) * iVar1 + iVar5 + -1, iVar4 == iVar2 + 1)) {
      iVar3 = -1;
    }
  }
  return iVar3;
}

static int MhIsInTriXZ(MhCtrl *mh_ctrl, float *pos, int idx) {
	float tri[3][4];
	float outer[4];
	float tmp1[4];
	float tmp2[4];
	float y_vec[4];
	int i;
	int idx_num[3];
	
  SgmVERTEX *pSVar1;
  int iVar2;
  SgmIDX *pSVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  float (*pafVar7) [4];
  float tri [3] [4];
  float outer [4];
  float tmp1 [4];
  float tmp2 [4];
  float y_vec [4];
  int idx_num [3];
  
  iVar6 = 0;
  memset(y_vec,0,0x10);
  y_vec[1] = 1.0;
  pSVar3 = mh_ctrl->v_idx;
  pafVar7 = tri;
  while( true ) {
    piVar5 = idx_num + iVar6;
    pSVar1 = mh_ctrl->V;
    piVar4 = pSVar3[idx].n + iVar6;
    iVar6 = iVar6 + 1;
    iVar2 = *piVar4;
    *piVar5 = iVar2;
    sceVu0CopyVector(pafVar7,pSVar1 + iVar2);
    if (2 < iVar6) break;
    pSVar3 = mh_ctrl->v_idx;
    pafVar7 = (float (*) [4])((int)pafVar7 + 0x10);
  }
  sceVu0SubVector(tmp1,tri[1],tri);
  sceVu0SubVector(tmp2,tri[2],tri);
  sceVu0OuterProduct(outer,tmp1,tmp2);
                    /* WARNING: Subroutine does not return */
  sceVu0InnerProduct(outer,y_vec);
}

static float MhIsHeightTri(MhCtrl *mh_ctrl, float *pos, int idx) {
	fixed_array<float[4],3> v;
	int i;
	int v_idx;
	float height;
	float x1;
	float y1;
	float z1;
	float x2;
	float y2;
	float z2;
	float x3;
	float y3;
	float z3;
	
  int iVar1;
  fixed_array<float[4],3> *pfVar2;
  SgmIDX *pSVar3;
  int iVar4;
  float fVar5;
  fixed_array<float[4],3> v;
  
  pSVar3 = mh_ctrl->v_idx;
  pfVar2 = &v;
  iVar4 = 0;
  while( true ) {
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
    iVar1 = pSVar3[idx].n[iVar4];
    _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(iVar4,3);
                    /* end of inlined section */
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
    sceVu0CopyVector(pfVar2,mh_ctrl->V + iVar1);
                    /* end of inlined section */
    if (2 < iVar4 + 1) break;
    pSVar3 = mh_ctrl->v_idx;
    pfVar2 = (fixed_array<float[4],3> *)((int)pfVar2 + 0x10);
    iVar4 = iVar4 + 1;
  }
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(0,3);
  _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(0,3);
  _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(0,3);
  _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(1,3);
  _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(1,3);
  _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(1,3);
  _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(2,3);
  _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(2,3);
  _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(2,3);
                    /* end of inlined section */
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  fVar5 = (v.field0_0x0.m_aData[1][2] - v.field0_0x0.m_aData[0][2]) *
          (v.field0_0x0.m_aData[2][0] - v.field0_0x0.m_aData[0][0]) -
          (v.field0_0x0.m_aData[2][2] - v.field0_0x0.m_aData[0][2]) *
          (v.field0_0x0.m_aData[1][0] - v.field0_0x0.m_aData[0][0]);
  if (fVar5 != 0.0) {
    v.field0_0x0.m_aData[0][1] =
         (((v.field0_0x0.m_aData[1][1] - v.field0_0x0.m_aData[0][1]) *
           (v.field0_0x0.m_aData[2][2] - v.field0_0x0.m_aData[0][2]) -
          (v.field0_0x0.m_aData[2][1] - v.field0_0x0.m_aData[0][1]) *
          (v.field0_0x0.m_aData[1][2] - v.field0_0x0.m_aData[0][2])) *
          (v.field0_0x0.m_aData[0][0] - *pos) +
         ((v.field0_0x0.m_aData[1][0] - v.field0_0x0.m_aData[0][0]) *
          (v.field0_0x0.m_aData[2][1] - v.field0_0x0.m_aData[0][1]) -
         (v.field0_0x0.m_aData[2][0] - v.field0_0x0.m_aData[0][0]) *
         (v.field0_0x0.m_aData[1][1] - v.field0_0x0.m_aData[0][1])) *
         (v.field0_0x0.m_aData[0][2] - pos[2])) / fVar5 + v.field0_0x0.m_aData[0][1];
  }
  return v.field0_0x0.m_aData[0][1];
}

static int MhIsHitHeightTri(MhCtrl *mh_ctrl, float *pos1, float *pos2, int idx) {
	float v0[4];
	SgmVERTEX &raSgmVERTEX[1];
	int &riv[4];
	
  SgmVERTEX *pSVar1;
  int iVar2;
  SgmIDX *pSVar3;
  float v0 [4];
  
  pSVar1 = mh_ctrl->V;
  pSVar3 = mh_ctrl->v_idx + idx;
  iVar2 = HcBaseIsNearSegTri__FPCfN40
                    (pos1,pos2,pSVar1[pSVar3->n[0]].v,pSVar1[pSVar3->n[1]].v,pSVar1[pSVar3->n[2]].v)
  ;
  if (iVar2 != 0) {
    iVar2 = HcBaseIsLineHitFace__FPfPCfN41
                      (v0,pos1,pos2,pSVar1[pSVar3->n[0]].v,pSVar1[pSVar3->n[1]].v,
                       pSVar1[pSVar3->n[2]].v);
    if ((iVar2 != 0) && (iVar2 = MhIsInTriXZ__FP6MhCtrlPfi(mh_ctrl,v0,idx), iVar2 != 0)) {
      return 1;
    }
    iVar2 = 0;
  }
  return iVar2;
}

MhCtrl** MhCtrl * * _fixed_array_verifyrange<MhCtrl *>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_807);
  return (type_info *)v;
}

float*[4] float [3] * _fixed_array_verifyrange<float [3]>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_807);
  return (type_info *)v;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  return;
}

type_info& MhCtrl * type_info function() {
  g3ddbgAssert__FbPCce(false,str_807);
  return (type_info *)v;
}

type_info& float [3] type_info function() {
  g3ddbgAssert__FbPCce(false,str_807);
  return (type_info *)v;
}

type_info& MhCtrl type_info function() {
  g3ddbgAssert__FbPCce(false,str_807);
  return (type_info *)v;
}

static void global constructors keyed to MhFirstInit() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
