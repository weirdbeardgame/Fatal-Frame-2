// STATUS: NOT STARTED

#include "MapPut.h"

struct MAPPUT_OBJ {
	short int buff_id;
	short int first_id;
	int flg;
	float z_num;
	float z_offset;
	u_int *addr;
	void (*func)(/* parameters unknown */);
	int work;
	float mat[4][4];
	float *mp[4][4];
	GRA3DLIGHTDATA *lit;
	float c_pos[4];
	MAPPUT_OBJ *next;
	MAPPUT_OBJ *befo;
	MAPPUT_OBJ *next_draw;
};

struct fixed_array_base<MAPPUT_OBJ,320,MAPPUT_OBJ[320]> {
protected:
	MAPPUT_OBJ m_aData[320];
	
public:
	fixed_array_base<MAPPUT_OBJ,320,MAPPUT_OBJ[320]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	MAPPUT_OBJ& operator[]();
	MAPPUT_OBJ& operator[]();
	MAPPUT_OBJ* data();
	MAPPUT_OBJ* begin();
	MAPPUT_OBJ* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<MAPPUT_OBJ,320> : fixed_array_base<MAPPUT_OBJ,320,MAPPUT_OBJ[320]> {
};

static fixed_array<MAPPUT_OBJ,320> MapPutList;
unsigned char MAPPUT_OBJ type_info node[8];
static MAPPUT_OBJ *MapPutSt;
static MAPPUT_OBJ *MapPutNowDraw;

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x39f1f8;
	
  g3ddbgAssert__FbPCce(false,str_735);
  return (type_info *)v;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf10MAPPUT_OBJ(0x3eefb8,_max);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf10MAPPUT_OBJ(0x3eefc0,_max);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf10MAPPUT_OBJ(0x39f240,_max);
  }
  return (uint **)0x0;
}

void MapPutSetFlg(int buff_id, int flg) {
	MAPPUT_OBJ *wp;
	
  ushort uVar1;
  MAPPUT_OBJ *pMVar2;
  
  if (MapPutSt != (MAPPUT_OBJ *)0x0) {
    uVar1 = MapPutSt->buff_id;
    pMVar2 = MapPutSt;
    while( true ) {
      if ((long)(short)uVar1 == (long)buff_id) {
        pMVar2->flg = pMVar2->flg | flg;
        pMVar2 = pMVar2->next;
      }
      else {
        pMVar2 = pMVar2->next;
      }
      if (pMVar2 == (MAPPUT_OBJ *)0x0) break;
      uVar1 = pMVar2->buff_id;
    }
  }
  return;
}

void MapPutDeleteFlg(int buff_id, int flg) {
	MAPPUT_OBJ *wp;
	
  ushort uVar1;
  MAPPUT_OBJ *pMVar2;
  
  if (MapPutSt != (MAPPUT_OBJ *)0x0) {
    uVar1 = MapPutSt->buff_id;
    pMVar2 = MapPutSt;
    while( true ) {
      if ((long)(short)uVar1 == (long)buff_id) {
        pMVar2->flg = pMVar2->flg & ~flg;
        pMVar2 = pMVar2->next;
      }
      else {
        pMVar2 = pMVar2->next;
      }
      if (pMVar2 == (MAPPUT_OBJ *)0x0) break;
      uVar1 = pMVar2->buff_id;
    }
  }
  return;
}

void MapPutSetFirst(void *obj, short int offset) {
  if (obj != (void *)0x0) {
    if ((short)offset < 0) {
      *(uint *)((int)obj + 4) = *(uint *)((int)obj + 4) & 0xfffffbff;
      return;
    }
    *(ushort *)((int)obj + 2) = offset;
    *(uint *)((int)obj + 4) = *(uint *)((int)obj + 4) | 0x400;
  }
  return;
}

void MapPutSetZoffset(void *obj, float offset) {
  if (obj != (void *)0x0) {
    *(float *)((int)obj + 0xc) = offset;
  }
  return;
}

void MapPutSetMatrix(void *obj, float *mat[4]) {
	float *pm0[4];
	
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  
  if (obj != (void *)0x0) {
                    /* inlined from ../../graphics/graph3d/g3dxVu0.h */
    auVar1 = _lqc2((undefined  [16])*mat);
    auVar2 = _lqc2((undefined  [16])mat[1]);
    auVar3 = _lqc2((undefined  [16])mat[2]);
    auVar4 = _lqc2((undefined  [16])mat[3]);
    auVar1 = _sqc2(auVar1);
    *(undefined (*) [16])((int)obj + 0x20) = auVar1;
    auVar1 = _sqc2(auVar2);
    *(undefined (*) [16])((int)obj + 0x30) = auVar1;
    auVar1 = _sqc2(auVar3);
    *(undefined (*) [16])((int)obj + 0x40) = auVar1;
    auVar1 = _sqc2(auVar4);
    *(undefined (*) [16])((int)obj + 0x50) = auVar1;
  }
  return;
}

void MapPutSetMatrixPtr(void *obj, float *mp[4][4]) {
  if (obj != (void *)0x0) {
    *(float (**) [4] [4])((int)obj + 0x60) = mp;
  }
  return;
}

void MapPutSetBuffID(void *obj, int buff_id) {
  if (obj != (void *)0x0) {
    *(short *)obj = (short)buff_id;
  }
  return;
}

void MapPutSetLitPtr(void *obj, GRA3DLIGHTDATA *light_ptr) {
  if (obj != (void *)0x0) {
    *(GRA3DLIGHTDATA **)((int)obj + 100) = light_ptr;
  }
  return;
}

void MapPutSetWork(void *obj, int work) {
  if (obj != (void *)0x0) {
    *(int *)((int)obj + 0x18) = work;
  }
  return;
}

void MapPutSetModelPtr(void *obj, u_int *addr) {
  *(uint **)((int)obj + 0x10) = addr;
  return;
}

float*[4][4] MapPutGetMatrixPtr(void *obj) {
  return (float (*) [4] [4])((int)obj + 0x20);
}

int* MapPutGetFlgPtr(void *obj) {
  return (int *)((int)obj + 4);
}

GRA3DLIGHTDATA* MapPutGetLitPtr(void *obj) {
  return *(GRA3DLIGHTDATA **)((int)obj + 100);
}

u_int* MapPutGetModelPtr(void *obj) {
  return *(uint **)((int)obj + 0x10);
}

int MapPutGetWork(void *obj) {
  return *(int *)((int)obj + 0x18);
}

void MapPutSetFuncAddr(void *obj, void (*func)(/* parameters unknown */)) {
  if (obj != (void *)0x0) {
    *(undefined1 **)((int)obj + 0x14) = func;
  }
  return;
}

static MAPPUT_OBJ* MapPutGetFreeArea() {
	int i;
	
  int iVar1;
  fixed_array<MAPPUT_OBJ,320> *pfVar2;
  
  iVar1 = 0;
  pfVar2 = &MapPutList;
  do {
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z10MAPPUT_OBJ_UiUi_PX01(iVar1,0x140);
    if ((short)((MAPPUT_OBJ *)pfVar2)->buff_id < 0) {
      _fixed_array_verifyrange__H1Z10MAPPUT_OBJ_UiUi_PX01(iVar1,0x140);
      ((MAPPUT_OBJ *)pfVar2)->addr = (uint *)0x0;
      _fixed_array_verifyrange__H1Z10MAPPUT_OBJ_UiUi_PX01(iVar1,0x140);
      return (MAPPUT_OBJ *)pfVar2;
    }
    iVar1 = iVar1 + 1;
    pfVar2 = (fixed_array<MAPPUT_OBJ,320> *)((int)pfVar2 + 0x90);
  } while (iVar1 < 0x140);
  printf("***ERR!! %s(%d):");
  printf("NO_FREE_AREA\n");
  return (MAPPUT_OBJ *)0x0;
}

static void MapPutAddList(MAPPUT_OBJ *op) {
	MAPPUT_OBJ *wp;
	
  MAPPUT_OBJ *pMVar1;
  MAPPUT_OBJ *pMVar2;
  
  pMVar2 = MapPutSt;
  if (MapPutSt == (MAPPUT_OBJ *)0x0) {
    MapPutSt = op;
    op->befo = (MAPPUT_OBJ *)0x0;
  }
  else {
    pMVar1 = MapPutSt->next;
    if (MapPutSt->next == (MAPPUT_OBJ *)0x0) {
      MapPutSt->next = op;
    }
    else {
      do {
        pMVar2 = pMVar1;
        pMVar1 = pMVar2->next;
      } while (pMVar2->next != (MAPPUT_OBJ *)0x0);
      pMVar2->next = op;
    }
    op->befo = pMVar2;
  }
  op->next = (MAPPUT_OBJ *)0x0;
  return;
}

void* MapPutSetObj(int buff_id, u_int *addr, float *pos, float *rot, float *scale, GRA3DLIGHTDATA *lit, int flg) {
	MAPPUT_OBJ *op;
	float *mat[4];
	float rx;
	float f;
	float f1;
	float f2;
	float ry;
	float f;
	float fRange;
	float f1;
	float f2;
	float rz;
	float f;
	float fRange;
	float f1;
	float f2;
	
  undefined8 uVar1;
  MAPPUT_OBJ *op;
  float *rvec;
  float (*pafVar2) [4];
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  op = MapPutGetFreeArea__Fv();
  if (op != (MAPPUT_OBJ *)0x0) {
    op->buff_id = (ushort)buff_id;
    if ((flg & 1U) == 0) {
      op->addr = addr;
    }
    else {
      op->func = (undefined1 *)addr;
    }
    op->lit = lit;
    op->flg = flg;
    op->z_offset = 0.0;
    op->mp = (float (*) [4] [4])0x0;
    if (op->addr != (uint *)0x0) {
      rvec = op->c_pos;
      MapDrawGetCenPos__FPvPA3_f(op->addr,(float (*) [4])rvec);
      *rvec = *rvec + *pos;
      op->c_pos[1] = op->c_pos[1] + pos[1];
      fVar4 = pos[2];
      op->c_pos[3] = 1.0;
      op->c_pos[2] = op->c_pos[2] + fVar4;
    }
    pafVar2 = op->mat;
    if ((flg & 0x10U) == 0) {
      fVar6 = DAT_003ed864;
                    /* inlined from ../../graphics/graph3d/g3dMath.h */
                    /* inlined from MapGeom.h */
      sceVu0UnitMatrix(pafVar2);
      fVar4 = DAT_003ed868;
      fVar3 = scale[2];
      fVar5 = scale[1];
                    /* inlined from ../../graphics/graph3d/g3dxVu0.h */
                    /* inlined from MapGeom.h */
      (*pafVar2)[0] = *scale * 25.0;
      op->mat[2][2] = -fVar3 * 25.0;
      op->mat[1][1] = -fVar5 * 25.0;
      fVar3 = DAT_003ed86c;
                    /* inlined from ../../graphics/graph3d/g3dxVu0.h */
      fVar4 = -(*rot * fVar4);
                    /* inlined from ../../graphics/graph3d/g3dMath.h */
      if (fVar6 < fVar4) {
        fVar4 = fmodf(fVar4,DAT_003ed86c);
        if (fVar6 < fVar4) {
          fVar4 = fVar4 - fVar3;
        }
        else if (fVar4 < -fVar6) {
          fVar4 = fVar4 + fVar3;
        }
      }
                    /* inlined from ../../graphics/graph3d/g3dxVu0.h */
      fVar3 = DAT_003ed870;
                    /* inlined from ../../graphics/graph3d/g3dMath.h */
                    /* inlined from ../../graphics/graph3d/g3dxVu0.h */
      sceVu0RotMatrixX(fVar4,pafVar2,pafVar2);
      fVar4 = DAT_003ed878;
                    /* inlined from ../../graphics/graph3d/g3dMath.h */
                    /* inlined from ../../graphics/graph3d/g3dxVu0.h */
      fVar6 = -(rot[1] * DAT_003ed874);
                    /* inlined from ../../graphics/graph3d/g3dMath.h */
      if (fVar3 < fVar6) {
        fVar5 = fVar3;
        fVar6 = fmodf(fVar6,DAT_003ed878);
        if (fVar5 < fVar6) {
          fVar6 = fVar6 - fVar4;
        }
        else if (fVar6 < -fVar3) {
          fVar6 = fVar6 + fVar4;
        }
      }
                    /* inlined from ../../graphics/graph3d/g3dxVu0.h */
      fVar3 = DAT_003ed87c;
                    /* inlined from ../../graphics/graph3d/g3dMath.h */
                    /* inlined from ../../graphics/graph3d/g3dxVu0.h */
      sceVu0RotMatrixY(fVar6,pafVar2,pafVar2);
      fVar4 = DAT_003ed884;
                    /* inlined from ../../graphics/graph3d/g3dMath.h */
                    /* inlined from ../../graphics/graph3d/g3dxVu0.h */
      fVar6 = rot[2] * DAT_003ed880;
                    /* inlined from ../../graphics/graph3d/g3dMath.h */
      if (fVar3 < fVar6) {
        fVar5 = fVar3;
        fVar6 = fmodf(fVar6,DAT_003ed884);
        if (fVar5 < fVar6) {
          fVar6 = fVar6 - fVar4;
        }
        else if (fVar6 < -fVar3) {
          fVar6 = fVar6 + fVar4;
        }
      }
                    /* inlined from ../../graphics/graph3d/g3dxVu0.h */
      sceVu0RotMatrixZ(fVar6,pafVar2,pafVar2);
      uVar1 = *(undefined8 *)pos;
      fVar4 = pos[2];
      fVar3 = pos[3];
      op->mat[3][0] = (float)uVar1;
      op->mat[3][1] = (float)((ulong)uVar1 >> 0x20);
      op->mat[3][2] = fVar4;
      op->mat[3][3] = fVar3;
                    /* inlined from MapGeom.h */
      op->mat[3][3] = 1.0;
    }
                    /* end of inlined section */
    MapPutAddList__FP10MAPPUT_OBJ(op);
  }
  return op;
}

void* MapPutSetFunc(int buff_id, u_int *addr, int flg) {
  void *pvVar1;
  
  pvVar1 = MapPutSetObj__FiPUiPfN22P14GRA3DLIGHTDATAi
                     (buff_id,addr,(float *)0x0,(float *)0x0,(float *)0x0,(GRA3DLIGHTDATA *)0x0,
                      flg | 0x11);
  return pvVar1;
}

void MapPutChangeFunc(void *pHdl, void (*func)(/* parameters unknown */)) {
  *(undefined1 **)((int)pHdl + 0x14) = func;
  *(uint *)((int)pHdl + 4) = *(uint *)((int)pHdl + 4) | 1;
  return;
}

void MapPutChangeObj(void *pHdl) {
  *(undefined4 *)((int)pHdl + 0x14) = 0;
  *(uint *)((int)pHdl + 4) = *(uint *)((int)pHdl + 4) & 0xfffffffe;
  return;
}

static void MpaPutDeleteOne(MAPPUT_OBJ *op) {
	MAPPUT_OBJ *bp;
	MAPPUT_OBJ *np;
	
  MAPPUT_OBJ *pMVar1;
  MAPPUT_OBJ *pMVar2;
  
  if (op != (MAPPUT_OBJ *)0x0) {
    pMVar1 = op->next;
    pMVar2 = pMVar1;
    if (op->befo != (MAPPUT_OBJ *)0x0) {
      op->befo->next = pMVar1;
      pMVar2 = MapPutSt;
    }
    MapPutSt = pMVar2;
    if (pMVar1 != (MAPPUT_OBJ *)0x0) {
      pMVar1->befo = op->befo;
    }
    op->addr = (uint *)0x0;
    op->func = (undefined1 *)0x0;
    op->buff_id = 0xffff;
  }
  return;
}

void MpaPutDeleteOneObj(void *hdl) {
  MpaPutDeleteOne__FP10MAPPUT_OBJ((MAPPUT_OBJ *)hdl);
  return;
}

void MapPutDelete(int buff_id) {
	int i;
	
  int iVar1;
  int iVar2;
  fixed_array<MAPPUT_OBJ,320> *op;
  
  op = &MapPutList;
  iVar1 = 0;
  do {
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z10MAPPUT_OBJ_UiUi_PX01(iVar1,0x140);
    iVar2 = iVar1 + 1;
    if ((long)(short)((MAPPUT_OBJ *)op)->buff_id == (long)buff_id) {
      _fixed_array_verifyrange__H1Z10MAPPUT_OBJ_UiUi_PX01(iVar1,0x140);
      MpaPutDeleteOne__FP10MAPPUT_OBJ((MAPPUT_OBJ *)op);
    }
                    /* end of inlined section */
    op = (fixed_array<MAPPUT_OBJ,320> *)((int)op + 0x90);
    iVar1 = iVar2;
  } while (iVar2 < 0x140);
  return;
}

static int MapPutDrawOK(MAPPUT_OBJ *lp) {
  uint uVar1;
  int iVar2;
  
  iVar2 = -1;
  uVar1 = lp->flg;
  if ((((uVar1 & 8) == 0) &&
      (((uVar1 & 0x40) == 0 || (iVar2 = -2, plyr_wrk.cmn_wrk.mode != '\x06')))) &&
     (((uVar1 & 0x80) == 0 || (iVar2 = -3, plyr_wrk.cmn_wrk.mode == '\x06')))) {
    if ((uVar1 & 0x100) != 0) {
      iVar2 = PhotoFlgIsUp__Fv();
      if (iVar2 != 0) {
        return -4;
      }
      uVar1 = lp->flg;
    }
    if ((uVar1 & 0x200) == 0) {
      iVar2 = 1;
    }
    else {
      iVar2 = PhotoFlgIsUp__Fv();
      if (iVar2 == 0) {
        iVar2 = -5;
      }
      else {
        iVar2 = 1;
      }
    }
  }
  return iVar2;
}

static MAPPUT_OBJ* MapPutSort() {
	MAPPUT_OBJ *lp;
	MAPPUT_OBJ *st;
	MAPPUT_OBJ *wp;
	MAPPUT_OBJ *bp;
	float *o_pos[4];
	int iMode;
	int iEnd;
	int iWork;
	
  float (*paafVar1) [4] [4];
  uint uVar2;
  bool bVar3;
  float afVar4 [4];
  float afVar5 [4];
  float afVar6 [4];
  float afVar7 [4];
  float afVar8 [4];
  float afVar9 [4];
  float afVar10 [4];
  float afVar11 [4];
  float afVar12 [4];
  float afVar13 [4];
  float afVar14 [4];
  float afVar15 [4];
  float fVar16;
  int iVar17;
  GRA3DCAMERA *pGVar18;
  uint uVar19;
  MAPPUT_OBJ *pMVar20;
  MAPPUT_OBJ *pMVar21;
  MAPPUT_OBJ *pMVar22;
  MAPPUT_OBJ *lp;
  MAPPUT_OBJ *pMVar23;
  MAPPUT_OBJ *pMVar24;
  undefined auVar25 [16];
  undefined auVar26 [16];
  undefined auVar27 [16];
  undefined auVar28 [16];
  undefined auVar29 [16];
  undefined auVar30 [16];
  undefined auVar31 [16];
  undefined auVar32 [16];
  undefined local_b0 [12];
  undefined4 uStack_a4;
  undefined local_a0 [16];
  undefined local_90 [16];
  undefined local_80 [16];
  undefined local_70 [16];
  undefined local_60 [12];
  undefined4 uStack_54;
  
  if (MapPutSt == (MAPPUT_OBJ *)0x0) {
    return (MAPPUT_OBJ *)0x0;
  }
  lp = MapPutSt;
  pMVar23 = (MAPPUT_OBJ *)0x0;
LAB_00111030:
  iVar17 = MapPutDrawOK__FP10MAPPUT_OBJ(lp);
  if (-1 < iVar17) {
    if ((lp->flg & 0x10U) == 0) {
      memset(local_60,0,0x10);
                    /* inlined from ../../graphics/graph3d/g3dxVu0.h */
      uStack_54 = 0x3f800000;
      pGVar18 = gra3dGetCamera__Fv();
      afVar8[0] = *(float *)((int)pGVar18->matWorldScreen[0] + 0);
      afVar8[1] = *(float *)((int)pGVar18->matWorldScreen[0] + 4);
      afVar8[2] = *(float *)((int)pGVar18->matWorldScreen[0] + 8);
      afVar8[3] = *(float *)((int)pGVar18->matWorldScreen[0] + 0xc);
      auVar25 = _lqc2((undefined  [16])afVar8);
      afVar9[0] = *(float *)((int)pGVar18->matWorldScreen[1] + 0);
      afVar9[1] = *(float *)((int)pGVar18->matWorldScreen[1] + 4);
      afVar9[2] = *(float *)((int)pGVar18->matWorldScreen[1] + 8);
      afVar9[3] = *(float *)((int)pGVar18->matWorldScreen[1] + 0xc);
      auVar26 = _lqc2((undefined  [16])afVar9);
      afVar10[0] = *(float *)((int)pGVar18->matWorldScreen[2] + 0);
      afVar10[1] = *(float *)((int)pGVar18->matWorldScreen[2] + 4);
      afVar10[2] = *(float *)((int)pGVar18->matWorldScreen[2] + 8);
      afVar10[3] = *(float *)((int)pGVar18->matWorldScreen[2] + 0xc);
      auVar27 = _lqc2((undefined  [16])afVar10);
      afVar11[0] = *(float *)((int)pGVar18->matWorldScreen[3] + 0);
      afVar11[1] = *(float *)((int)pGVar18->matWorldScreen[3] + 4);
      afVar11[2] = *(float *)((int)pGVar18->matWorldScreen[3] + 8);
      afVar11[3] = *(float *)((int)pGVar18->matWorldScreen[3] + 0xc);
      auVar28 = _lqc2((undefined  [16])afVar11);
      afVar12[0] = *(float *)((int)lp->mat[0] + 0);
      afVar12[1] = *(float *)((int)lp->mat[0] + 4);
      afVar12[2] = *(float *)((int)lp->mat[0] + 8);
      afVar12[3] = *(float *)((int)lp->mat[0] + 0xc);
      auVar29 = _lqc2((undefined  [16])afVar12);
      afVar13[0] = *(float *)((int)lp->mat[1] + 0);
      afVar13[1] = *(float *)((int)lp->mat[1] + 4);
      afVar13[2] = *(float *)((int)lp->mat[1] + 8);
      afVar13[3] = *(float *)((int)lp->mat[1] + 0xc);
      auVar30 = _lqc2((undefined  [16])afVar13);
      afVar14[0] = *(float *)((int)lp->mat[2] + 0);
      afVar14[1] = *(float *)((int)lp->mat[2] + 4);
      afVar14[2] = *(float *)((int)lp->mat[2] + 8);
      afVar14[3] = *(float *)((int)lp->mat[2] + 0xc);
      auVar31 = _lqc2((undefined  [16])afVar14);
      afVar15[0] = *(float *)((int)lp->mat[3] + 0);
      afVar15[1] = *(float *)((int)lp->mat[3] + 4);
      afVar15[2] = *(float *)((int)lp->mat[3] + 8);
      afVar15[3] = *(float *)((int)lp->mat[3] + 0xc);
      auVar32 = _lqc2((undefined  [16])afVar15);
      _vmulabc(auVar25,auVar29);
      _vmaddabc(auVar26,auVar29);
      _vmaddabc(auVar27,auVar29);
      auVar29 = _vmaddbc(auVar28,auVar29);
      _vmulabc(auVar25,auVar30);
      _vmaddabc(auVar26,auVar30);
      _vmaddabc(auVar27,auVar30);
      auVar30 = _vmaddbc(auVar28,auVar30);
      _vmulabc(auVar25,auVar31);
      _vmaddabc(auVar26,auVar31);
      _vmaddabc(auVar27,auVar31);
      auVar31 = _vmaddbc(auVar28,auVar31);
      _vmulabc(auVar25,auVar32);
      _vmaddabc(auVar26,auVar32);
      _vmaddabc(auVar27,auVar32);
      auVar25 = _vmaddbc(auVar28,auVar32);
      local_a0 = _sqc2(auVar29);
      local_90 = _sqc2(auVar30);
      local_80 = _sqc2(auVar31);
      local_70 = _sqc2(auVar25);
      auVar26 = _lqc2(local_a0);
      auVar27 = _lqc2(local_90);
      auVar28 = _lqc2(local_80);
      auVar29 = _lqc2(local_70);
      auVar25._12_4_ = uStack_54;
      auVar25._0_12_ = local_60;
      auVar25 = _lqc2(auVar25);
      _vmulabc(auVar26,auVar25);
      _vmaddabc(auVar27,auVar25);
      _vmaddabc(auVar28,auVar25);
      auVar25 = _vmaddbc(auVar29,auVar25);
      _ret_1090 = _sqc2(auVar25);
                    /* end of inlined section */
    }
    else {
      paafVar1 = lp->mp;
      memset(local_b0,0,0x10);
                    /* inlined from ../../graphics/graph3d/g3dxVu0.h */
      uStack_a4 = 0x3f800000;
      pGVar18 = gra3dGetCamera__Fv();
      afVar4[0] = *(float *)((int)pGVar18->matWorldScreen[0] + 0);
      afVar4[1] = *(float *)((int)pGVar18->matWorldScreen[0] + 4);
      afVar4[2] = *(float *)((int)pGVar18->matWorldScreen[0] + 8);
      afVar4[3] = *(float *)((int)pGVar18->matWorldScreen[0] + 0xc);
      auVar25 = _lqc2((undefined  [16])afVar4);
      afVar5[0] = *(float *)((int)pGVar18->matWorldScreen[1] + 0);
      afVar5[1] = *(float *)((int)pGVar18->matWorldScreen[1] + 4);
      afVar5[2] = *(float *)((int)pGVar18->matWorldScreen[1] + 8);
      afVar5[3] = *(float *)((int)pGVar18->matWorldScreen[1] + 0xc);
      auVar26 = _lqc2((undefined  [16])afVar5);
      afVar6[0] = *(float *)((int)pGVar18->matWorldScreen[2] + 0);
      afVar6[1] = *(float *)((int)pGVar18->matWorldScreen[2] + 4);
      afVar6[2] = *(float *)((int)pGVar18->matWorldScreen[2] + 8);
      afVar6[3] = *(float *)((int)pGVar18->matWorldScreen[2] + 0xc);
      auVar27 = _lqc2((undefined  [16])afVar6);
      afVar7[0] = *(float *)((int)pGVar18->matWorldScreen[3] + 0);
      afVar7[1] = *(float *)((int)pGVar18->matWorldScreen[3] + 4);
      afVar7[2] = *(float *)((int)pGVar18->matWorldScreen[3] + 8);
      afVar7[3] = *(float *)((int)pGVar18->matWorldScreen[3] + 0xc);
      auVar28 = _lqc2((undefined  [16])afVar7);
      auVar29 = _lqc2((undefined  [16])(*paafVar1)[0]);
      auVar30 = _lqc2((undefined  [16])(*paafVar1)[1]);
      auVar31 = _lqc2((undefined  [16])(*paafVar1)[2]);
      auVar32 = _lqc2((undefined  [16])(*paafVar1)[3]);
      _vmulabc(auVar25,auVar29);
      _vmaddabc(auVar26,auVar29);
      _vmaddabc(auVar27,auVar29);
      auVar29 = _vmaddbc(auVar28,auVar29);
      _vmulabc(auVar25,auVar30);
      _vmaddabc(auVar26,auVar30);
      _vmaddabc(auVar27,auVar30);
      auVar30 = _vmaddbc(auVar28,auVar30);
      _vmulabc(auVar25,auVar31);
      _vmaddabc(auVar26,auVar31);
      _vmaddabc(auVar27,auVar31);
      auVar31 = _vmaddbc(auVar28,auVar31);
      _vmulabc(auVar25,auVar32);
      _vmaddabc(auVar26,auVar32);
      _vmaddabc(auVar27,auVar32);
      auVar28 = _vmaddbc(auVar28,auVar32);
      auVar25 = _sqc2(auVar29);
      auVar26 = _sqc2(auVar30);
      auVar27 = _sqc2(auVar31);
      auVar28 = _sqc2(auVar28);
      auVar25 = _lqc2(auVar25);
      auVar29 = _lqc2(auVar26);
      auVar27 = _lqc2(auVar27);
      auVar28 = _lqc2(auVar28);
      auVar26._12_4_ = uStack_a4;
      auVar26._0_12_ = local_b0;
      auVar26 = _lqc2(auVar26);
      _vmulabc(auVar25,auVar26);
      _vmaddabc(auVar29,auVar26);
      _vmaddabc(auVar27,auVar26);
      auVar25 = _vmaddbc(auVar28,auVar26);
      _ret_1090 = _sqc2(auVar25);
                    /* end of inlined section */
    }
    fVar16 = DAT_0040f858;
    lp->next_draw = (MAPPUT_OBJ *)0x0;
    lp->z_num = -(fVar16 + lp->z_offset);
    pMVar24 = lp;
    if (pMVar23 != (MAPPUT_OBJ *)0x0) {
      uVar2 = pMVar23->flg;
      pMVar21 = pMVar23;
      pMVar22 = pMVar23;
      do {
        pMVar20 = pMVar21;
        uVar19 = 2;
        if ((uVar2 & 0x400) == 0) {
          uVar19 = 0;
        }
        uVar19 = lp->flg >> 10 & 1U | uVar19;
        bVar3 = false;
        if (uVar19 == 1) {
LAB_00111278:
          bVar3 = true;
        }
        else if (uVar19 < 2) {
          if ((uVar19 == 0) && (pMVar20->z_num < lp->z_num)) goto LAB_00111278;
        }
        else if ((uVar19 != 2) && (uVar19 == 3)) {
          bVar3 = (short)pMVar20->first_id < (short)lp->first_id;
        }
        pMVar21 = pMVar20;
        if ((bVar3) ||
           (pMVar21 = pMVar20->next_draw, pMVar22 = pMVar20, pMVar21 == (MAPPUT_OBJ *)0x0))
        goto LAB_001112a0;
        uVar2 = pMVar21->flg;
      } while( true );
    }
    goto LAB_001112cc;
  }
  lp = lp->next;
  pMVar24 = pMVar23;
  goto LAB_001112d0;
LAB_001112a0:
  if (pMVar23 == pMVar21) {
    lp->next_draw = pMVar23;
  }
  else if (pMVar21 == (MAPPUT_OBJ *)0x0) {
    pMVar22->next_draw = lp;
    pMVar24 = pMVar23;
  }
  else {
    lp->next_draw = pMVar22->next_draw;
    pMVar22->next_draw = lp;
    pMVar24 = pMVar23;
  }
LAB_001112cc:
  lp = lp->next;
LAB_001112d0:
  pMVar23 = pMVar24;
  if (lp == (MAPPUT_OBJ *)0x0) {
    return pMVar24;
  }
  goto LAB_00111030;
}

void* MapPutGetNowHdl() {
  return MapPutNowDraw;
}

int MapPutGetNowBuffID() {
  return (int)(short)MapPutNowDraw->buff_id;
}

void MapPutDraw() {
	MAPPUT_OBJ *lp;
	GRA3DLIGHTDATA mld;
	int l_flg;
	
  uint uVar1;
  bool bVar2;
  MAPPUT_OBJ *pMVar3;
  int iVar4;
  GRA3DLIGHTDATA mld;
  GRA3DLIGHTDATA GStack_13c0;
  
  pMVar3 = MapPutSort__Fv();
  MapLightSetPlayerOnly__Fv();
  if (pMVar3 != (MAPPUT_OBJ *)0x0) {
    uVar1 = pMVar3->flg;
    while( true ) {
      bVar2 = false;
      MapPutNowDraw = pMVar3;
      if ((uVar1 & 0x20) == 0) {
        if ((uVar1 & 0x1000) == 0) {
          if ((uVar1 & 0x800) == 0) {
            if ((pMVar3->lit != (GRA3DLIGHTDATA *)0x0) &&
               (iVar4 = MapDrawIsEnableFlashlightOnly__Fv(), iVar4 != 0)) {
              bVar2 = true;
              gra3dLightEnablePush__Fv();
              gra3dSetLightData__FPC14GRA3DLIGHTDATAPCf(pMVar3->lit,(float *)0x0);
              MapLightSetPlayerReal__Fv();
              gra3dApplyLight__Fv();
            }
          }
          else {
            iVar4 = MapDrawIsEnableFlashlightOnly__Fv();
            if (iVar4 != 0) {
              bVar2 = true;
                    /* end of inlined section */
              gra3dLightEnablePush__Fv();
              MapLightMakeRoomReal__FP14GRA3DLIGHTDATAT0(&mld,pMVar3->lit);
              gra3dEmulateLightDataObj__FP14GRA3DLIGHTDATAPC14GRA3DLIGHTDATAPCff
                        (&GStack_13c0,&mld,pMVar3->c_pos,1.0);
              gra3dSetLightData__FPC14GRA3DLIGHTDATAPCf(&GStack_13c0,(float *)0x0);
            }
          }
        }
        else {
          gra3dSetLightData__FPC14GRA3DLIGHTDATAPCf(pMVar3->lit,(float *)0x0);
          gra3dExecPrelight__FP13SGDFILEHEADERPA3_Cf((SGDFILEHEADER *)pMVar3->addr,pMVar3->mat);
          MapLightSetPlayerOnly__Fv();
        }
      }
      else {
        MapLightSetPlayerOnly__Fv();
      }
      EffectThunderLightSetRoomLight__Fv();
      if ((pMVar3->flg & 1U) == 0) {
        iVar4 = GetObjDrawFLG__Fv();
        if (iVar4 != 0) {
          MapDrawObj__FPvPA3_f(pMVar3->addr,pMVar3->mat);
        }
      }
      else if ((code *)pMVar3->func != (code *)0x0) {
        (*(code *)pMVar3->func)();
      }
      if (bVar2) {
        gra3dLightEnablePop__Fv();
        gra3dApplyLight__Fv();
        pMVar3 = pMVar3->next_draw;
      }
      else {
        pMVar3 = pMVar3->next_draw;
      }
      if (pMVar3 == (MAPPUT_OBJ *)0x0) break;
      uVar1 = pMVar3->flg;
    }
  }
  return;
}

void MapPutResetAll() {
	int i;
	
  fixed_array<MAPPUT_OBJ,320> *pfVar1;
  int iVar2;
  int iVar3;
  
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  gra3dLightEnableAll__Fi(0);
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
  pfVar1 = &MapPutList;
  _fixed_array_verifyrange__H1Z10MAPPUT_OBJ_UiUi_PX01(0,0x140);
  memset(&MapPutList,0,0xb400);
  iVar2 = 0;
  do {
    _fixed_array_verifyrange__H1Z10MAPPUT_OBJ_UiUi_PX01(iVar2,0x140);
    ((fixed_array_base<MAPPUT_OBJ,320,MAPPUT_OBJ[320]> *)&((MAPPUT_OBJ *)pfVar1)->buff_id)->m_aData
    [0].buff_id = 0xffff;
    _fixed_array_verifyrange__H1Z10MAPPUT_OBJ_UiUi_PX01(iVar2,0x140);
    ((MAPPUT_OBJ *)pfVar1)->addr = (uint *)0x0;
                    /* end of inlined section */
    iVar3 = iVar2 + 1;
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z10MAPPUT_OBJ_UiUi_PX01(iVar2,0x140);
    ((MAPPUT_OBJ *)pfVar1)->func = (undefined1 *)0x0;
                    /* end of inlined section */
    pfVar1 = (fixed_array<MAPPUT_OBJ,320> *)((int)pfVar1 + 0x90);
    iVar2 = iVar3;
  } while (iVar3 < 0x140);
  MapPutSt = (MAPPUT_OBJ *)0x0;
  MapPutNowDraw = (MAPPUT_OBJ *)0x0;
  return;
}

MAPPUT_OBJ* MAPPUT_OBJ * _fixed_array_verifyrange<MAPPUT_OBJ>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_735);
  return (type_info *)v;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  return;
}

type_info& MAPPUT_OBJ type_info function() {
  g3ddbgAssert__FbPCce(false,str_735);
  return (type_info *)v;
}

static void global constructors keyed to MapPutSetFlg() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
