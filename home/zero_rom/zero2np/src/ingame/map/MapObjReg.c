// STATUS: NOT STARTED

#include "MapObjReg.h"

struct fixed_array_base<MAPOBJ_HEAD,2,MAPOBJ_HEAD[2]> {
protected:
	MAPOBJ_HEAD m_aData[2];
	
public:
	fixed_array_base<MAPOBJ_HEAD,2,MAPOBJ_HEAD[2]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	MAPOBJ_HEAD& operator[]();
	MAPOBJ_HEAD& operator[]();
	MAPOBJ_HEAD* data();
	MAPOBJ_HEAD* begin();
	MAPOBJ_HEAD* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<MAPOBJ_HEAD,2> : fixed_array_base<MAPOBJ_HEAD,2,MAPOBJ_HEAD[2]> {
};

static int MapObjSceneLoadFlg = 0;
static fixed_array<MAPOBJ_HEAD,2> MapObjList;
unsigned char MAPOBJ_HEAD type_info node[8];

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x39eea0;
	
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf11MAPOBJ_HEAD(0x3eef40,_max);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf11MAPOBJ_HEAD(0x3eef48,_max);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf11MAPOBJ_HEAD(0x39eee8,_max);
  }
  return (uint **)0x0;
}

void MapObjRegSetSceneLoad(int flg) {
  MapObjSceneLoadFlg = flg;
  return;
}

static MAPOBJ_DAT* MapObjGetFreeListSpacePtr(MAPOBJ_HEAD *hp) {
	int i;
	
  void *pvVar1;
  MAPOBJ_DAT *pMVar2;
  void **ppvVar3;
  int iVar4;
  
  ppvVar3 = &hp->dat[0].obj_ptr;
  iVar4 = 0;
  pvVar1 = *ppvVar3;
  pMVar2 = hp->dat;
  while( true ) {
    ppvVar3 = ppvVar3 + 7;
    if (pvVar1 == (void *)0x0) {
      return pMVar2;
    }
    iVar4 = iVar4 + 1;
    if (299 < iVar4) break;
    pvVar1 = *ppvVar3;
    pMVar2 = pMVar2 + 1;
  }
  printf("***ERR!! %s(%d):");
  printf("NO_FREE_SPACE_OBJ\n");
  return (MAPOBJ_DAT *)0x0;
}

MAPOBJ_HEAD* MapObjGetListPtr(int id) {
  MAPOBJ_HEAD *pMVar1;
  
  pMVar1 = (MAPOBJ_HEAD *)0x0;
  if ((uint)id < 2) {
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z11MAPOBJ_HEAD_UiUi_PX01(id,2);
    pMVar1 = MapObjList.field0_0x0.m_aData + id;
  }
                    /* end of inlined section */
  return pMVar1;
}

int MapObjSetHit2(MDAT_OBJ *op, int hit_sw) {
	int buff_id;
	MB_OUT_HEAD *hp;
	MB_OUT_RECT *rp;
	
  uint labelID;
  int iVar1;
  MB_OUT_HEAD *pMVar2;
  MB_OUT_RECT *pMVar3;
  
  iVar1 = -1;
  if (op != (MDAT_OBJ *)0x0) {
    labelID = (op->head).labelID;
    op->HitCheck = hit_sw;
    iVar1 = RegDatBuffID4Label__Fi(labelID);
    pMVar2 = RegDatGetHead__Fi(iVar1);
    if (hit_sw == 0) {
      MapHitDeleteOne__Fi((op->head).labelID);
      iVar1 = 0;
    }
    else {
      RegDatVecFind4Label__Fii(iVar1,(op->head).labelID);
      while( true ) {
        pMVar3 = RegDatVecNextFind__Fi(iVar1);
        if (pMVar3 == (MB_OUT_RECT *)0x0) break;
        MapHitRegistRec__FiiiPf((op->head).labelID,0,pMVar2->kai,(float *)pMVar3->vec);
      }
      iVar1 = 0;
    }
  }
  return iVar1;
}

int MapObjSetHit(int labelID, int hit_sw) {
  MDAT_OBJ *op;
  int iVar1;
  
  op = (MDAT_OBJ *)RegDatGetStPtr4Label2__Fi(labelID);
  iVar1 = MapObjSetHit2__FP8MDAT_OBJi(op,hit_sw);
  return iVar1;
}

int MapObjSetHitArea(int reg_id) {
	MB_OUT_SECTION *mp;
	
  int iVar1;
  MB_OUT_SECTION *pMVar2;
  
  RegDatGetStPtrStart__Fii(reg_id,3);
  while (pMVar2 = RegDatGetNextStPtr__Fi(reg_id), pMVar2 != (MB_OUT_SECTION *)0x0) {
    iVar1._0_2_ = pMVar2[9].SecStID;
    iVar1._2_2_ = pMVar2[9].size;
    if (iVar1 != 0) {
      MapObjSetHit__Fii(pMVar2->labelID,1);
    }
  }
  return 0;
}

int MapObjGetLightFlg(char *name) {
  uint uVar1;
  int iVar2;
  
  uVar1 = FurnLoadGetAttr__FPc(name);
  if (uVar1 != 1) {
    iVar2 = FurnLoadGetAttr__FPc(name);
    uVar1 = (uint)(iVar2 == 5);
  }
  return uVar1;
}

static void* MapObjRegistEffect(int buff_id, char *name, int *mdl_addr, int label, float *mpos, float *mrot) {
	void *hdl;
	float scale[4];
	float pos[4];
	float rot[4];
	float mat[4][4];
	int id;
	MDAT_OBJ *op;
	void *hdl;
	float scale[4];
	float pos[4];
	float rot[4];
	int iWaterID;
	int LightComeInType;
	void *hdl;
	float scale[4];
	float pos[4];
	float rot[4];
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  void *pvVar7;
  uint *puVar8;
  short *psVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float local_140;
  float fStack_13c;
  float local_138;
  float mat [4] [4];
  undefined auStack_b0 [8];
  undefined auStack_a8 [8];
  float afStack_a0 [4];
  float afStack_90 [4];
  float scale [4];
  float pos [4];
  float rot [4];
  
  uVar5 = DAT_0039ef48;
  uVar4 = DAT_0039ef40;
  fVar15 = *mpos;
  fVar11 = mpos[1];
  fVar13 = mpos[2];
  fVar14 = *mrot;
  fVar12 = mrot[1];
  fVar16 = mrot[2];
  iVar6 = FurnCtlGetID__FPc(name);
  if (*name != 'f') {
    return (void *)0x0;
  }
  if ((iVar6 - 0x32aU < 0x5a) || (iVar6 - 0x96U < 0x2b)) {
    if (iVar6 == 0x332) {
      pvVar7 = MapPutSetFunc__FiPUii(buff_id,(uint *)IgEffectTourouFreaModelDraw__Fv,0);
      EffectTourouFreaRegist__FPvi(pvVar7,buff_id);
    }
    else {
      pvVar7 = MapPutSetFunc__FiPUii(buff_id,(uint *)IgEffectTourouBaseModelDraw__Fv,0);
      EffectTourouBaseRegist__FPvi(mdl_addr,buff_id);
    }
                    /* inlined from MapGeom.h */
    fVar17 = DAT_003ed850;
                    /* end of inlined section */
    puVar8 = (uint *)MapPutGetFlgPtr__FPv(pvVar7);
                    /* end of inlined section */
                    /* inlined from MapGeom.h */
                    /* end of inlined section */
    *puVar8 = *puVar8 & 0xffffffef;
                    /* inlined from MapGeom.h */
  }
  else {
    if (iVar6 - 100U < 100) {
      EffectModelAlphaChangeRegist__FPvi(mdl_addr,label);
      fVar13 = mpos[2];
      fVar12 = *mpos;
      fVar11 = mpos[1];
      puVar1 = auStack_b0 + 7;
      uVar2 = (uint)puVar1 & 7;
      *(ulong *)(puVar1 + -uVar2) =
           *(ulong *)(puVar1 + -uVar2) & -1L << (uVar2 + 1) * 8 | DAT_0039ef50 >> (7 - uVar2) * 8;
      auStack_b0 = (undefined  [8])DAT_0039ef50;
      puVar1 = auStack_a8 + 7;
      uVar2 = (uint)puVar1 & 7;
      *(ulong *)(puVar1 + -uVar2) =
           *(ulong *)(puVar1 + -uVar2) & -1L << (uVar2 + 1) * 8 | _DAT_0039ef58 >> (7 - uVar2) * 8;
      auStack_a8 = (undefined  [8])_DAT_0039ef58;
      _SetVector__FPfffff(afStack_a0,fVar12,fVar11,fVar13,1.0);
      _SetVector__FPfffff(afStack_90,*mrot,mrot[1],mrot[2],0.0);
      pvVar7 = MapPutSetObj__FiPUiPfN22P14GRA3DLIGHTDATAi
                         (buff_id,(uint *)mdl_addr,afStack_a0,afStack_90,(float *)auStack_b0,
                          (GRA3DLIGHTDATA *)0x0,2);
      if (pvVar7 == (void *)0x0) {
        printf("***ERR!! %s(%d):");
        printf("PUT_OBJ_MAX_OVER.\n");
      }
      psVar9 = RegDatGetStPtr4Label2__Fi(label);
      *(undefined4 *)(psVar9 + 0x2c) = 0x12;
      *(undefined4 *)(psVar9 + 0x2a) = 0xffffffff;
      if (*(int *)(psVar9 + 0x28) != 0) {
        EffectModelAlphaChangeReq__Fiiii(label,0x80,0x80,0);
        return pvVar7;
      }
      EffectModelAlphaChangeReq__Fiiii(label,0,0,0);
      return pvVar7;
    }
    iVar10 = FurnLoadGetAttr__FPc(name);
    if (iVar10 != 4) {
      return (void *)0x0;
    }
    iVar10 = iVar6 + -0x25b;
    switch(iVar10) {
    case 4:
    case 5:
    case 6:
    default:
      pvVar7 = MapPutSetFunc__FiPUii(buff_id,(uint *)IgEffectLightComeInModelDraw__Fv,0);
      iVar10 = 1;
      if ((iVar6 != 0x25f) && (iVar10 = 2, iVar6 != 0x261)) {
        iVar10 = 0;
      }
      EffectLightComeInRegist__FPvii(mdl_addr,buff_id,iVar10);
      puVar8 = (uint *)MapPutGetFlgPtr__FPv(pvVar7);
                    /* inlined from MapGeom.h */
                    /* end of inlined section */
                    /* inlined from MapGeom.h */
                    /* end of inlined section */
      *puVar8 = *puVar8 & 0xffffffef;
                    /* inlined from MapGeom.h */
      fVar17 = DAT_003ed854;
      break;
    case 7:
    case 8:
    case 9:
    case 10:
      iVar10 = iVar6 + -0x25e;
    case 0:
    case 1:
    case 2:
    case 3:
      EffectWaterFlowRegist__FPvii(mdl_addr,buff_id,iVar10);
      fVar13 = mpos[2];
      fVar12 = *mpos;
      fVar11 = mpos[1];
      uVar2 = (int)scale + 7U & 7;
      puVar3 = (ulong *)(((int)scale + 7U) - uVar2);
      *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_0039ef78 >> (7 - uVar2) * 8;
      scale[0] = (float)(undefined4)DAT_0039ef78;
      scale[1] = (float)DAT_0039ef78._4_4_;
      uVar2 = (int)scale + 0xfU & 7;
      puVar3 = (ulong *)(((int)scale + 0xfU) - uVar2);
      *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_0039ef80 >> (7 - uVar2) * 8;
      scale[2] = (float)(undefined4)DAT_0039ef80;
      scale[3] = (float)DAT_0039ef80._4_4_;
      _SetVector__FPfffff(pos,fVar12,fVar11,fVar13,1.0);
      _SetVector__FPfffff(rot,*mrot,mrot[1],mrot[2],0.0);
      pvVar7 = MapPutSetObj__FiPUiPfN22P14GRA3DLIGHTDATAi
                         (buff_id,(uint *)mdl_addr,pos,rot,scale,(GRA3DLIGHTDATA *)0x0,2);
      if (pvVar7 == (void *)0x0) {
        printf("***ERR!! %s(%d):");
        printf("PUT_OBJ_MAX_OVER.\n");
      }
      MapPutSetFirst__FPvs(pvVar7,(ushort)iVar6);
      return pvVar7;
    }
  }
  sceVu0UnitMatrix(mat);
  fStack_13c = (float)((ulong)uVar4 >> 0x20);
  local_138 = (float)uVar5;
  local_140 = (float)uVar4;
  mat[0][0] = local_140 * 25.0;
  mat[1][1] = -fStack_13c * 25.0;
  mat[2][2] = -local_138 * 25.0;
  sceVu0RotMatrixX(-(fVar14 * fVar17),mat,mat);
  sceVu0RotMatrixY(-(fVar12 * fVar17),mat,mat);
  sceVu0RotMatrixZ(fVar16 * fVar17,mat,mat);
                    /* inlined from ../../graphics/graph3d/g3dxVu0.h */
                    /* inlined from MapGeom.h */
                    /* end of inlined section */
                    /* end of inlined section */
  mat[3][3] = 1.0;
  mat[3][0] = fVar15;
  mat[3][1] = fVar11;
  mat[3][2] = fVar13;
  MapPutSetWork__FPvi(pvVar7,(int)mdl_addr);
  MapPutSetMatrix__FPvPA3_f(pvVar7,mat);
  return pvVar7;
}

static void* MapObjRegistModel(int buff_id, char *name, int *mdl_addr, int label, float *mpos, float *mrot) {
	float rrot[4];
	void *hdl;
	float scale[4];
	float pos[4];
	float rot[4];
	
  uint uVar1;
  ulong *puVar2;
  int iVar3;
  void *pvVar4;
  float y;
  float x;
  float z;
  float rrot [4];
  float scale [4];
  float pos [4];
  float rot [4];
  
  if (mdl_addr == (int *)0x0) {
    printf("***ERR!! %s(%d):");
    printf("MODEL_NOT_PACK_FILE: buff_id[%d] addr[%x]\n");
    pvVar4 = (void *)0x0;
  }
  else {
    iVar3 = FurnLoadGetAttr__FPc(name);
    if (iVar3 == 5) {
      rrot[0] = 0.0;
      rrot[2] = 0.0;
      rrot[1] = 0.0;
    }
    else {
      rrot[2] = mrot[2];
      rrot[0] = *mrot;
      rrot[1] = mrot[1];
    }
    pvVar4 = MapObjRegistEffect__FiPcPiiPfT4(buff_id,name,mdl_addr,label,mpos,rrot);
    if (pvVar4 == (void *)0x0) {
      z = mpos[2];
      x = *mpos;
      y = mpos[1];
      uVar1 = (int)scale + 7U & 7;
      puVar2 = (ulong *)(((int)scale + 7U) - uVar1);
      *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | DAT_0039eff0 >> (7 - uVar1) * 8;
      scale[0] = (float)(undefined4)DAT_0039eff0;
      scale[1] = (float)DAT_0039eff0._4_4_;
      uVar1 = (int)scale + 0xfU & 7;
      puVar2 = (ulong *)(((int)scale + 0xfU) - uVar1);
      *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | _DAT_0039eff8 >> (7 - uVar1) * 8;
      scale[2] = (float)_DAT_0039eff8;
      scale[3] = (float)_UNK_0039effc;
      _SetVector__FPfffff(pos,x,y,z,1.0);
      _SetVector__FPfffff(rot,rrot[0],rrot[1],rrot[2],0.0);
      pvVar4 = MapPutSetObj__FiPUiPfN22P14GRA3DLIGHTDATAi
                         (buff_id,(uint *)mdl_addr,pos,rot,scale,(GRA3DLIGHTDATA *)0x0,2);
      if (pvVar4 == (void *)0x0) {
        printf("***ERR!! %s(%d):");
        printf("PUT_OBJ_MAX_OVER.\n");
      }
    }
  }
  return pvVar4;
}

static MAPOBJ_DAT* MapObjGetFreeDatPtr(int buff_id, void *op, int stat) {
	MAPOBJ_HEAD *hp;
	MAPOBJ_DAT *dp;
	
  MAPOBJ_HEAD *hp;
  void *pvVar1;
  
  hp = MapObjGetListPtr__Fi(buff_id);
  if ((hp != (MAPOBJ_HEAD *)0x0) &&
     (hp = (MAPOBJ_HEAD *)MapObjGetFreeListSpacePtr__FP11MAPOBJ_HEAD(hp), hp != (MAPOBJ_HEAD *)0x0))
  {
    hp->dat[0].stat = 0;
    hp->dat[0].mdl_addr = (int *)&_heap_size;
    hp->lit_addr = (int *)stat;
    hp->dat[0].anim_id = (int)op;
    hp->dat[0].obj_ptr = (void *)0x0;
    if (stat == 3) {
      pvVar1 = MapSaveGetTblPtr__Fi(*(int *)((int)op + 4));
      hp->dat[0].obj_hdl = pvVar1;
    }
    else {
      hp->dat[0].obj_hdl = (void *)0x0;
    }
  }
  return (MAPOBJ_DAT *)hp;
}

static MAPOBJ_DAT* MapObjAddDrawList(int buff_id, void *op, char *name, float *mpos, float *mrot, int stat) {
	MAPOBJ_DAT *dp;
	int pre_flg;
	short int *flg;
	
  ushort uVar1;
  MAPOBJ_DAT *pMVar2;
  int *piVar3;
  void *pvVar4;
  ushort *puVar5;
  MLOAD_HEAD *hp;
  int iVar6;
  int pre_flg;
  uint *puVar7;
  uint uVar8;
  char *fmt;
  
  pMVar2 = MapObjGetFreeDatPtr__FiPvi(buff_id,op,stat);
  if (pMVar2 == (MAPOBJ_DAT *)0x0) {
    printf("***ERR!! %s(%d):");
    printf("NO_OBJ_CTL_SPASE[%s]\n");
    pMVar2 = (MAPOBJ_DAT *)0x0;
  }
  else if (name == (char *)0x0) {
    pMVar2->mdl_addr = (int *)0x0;
  }
  else {
    piVar3 = (int *)FurnCtlGetModelAddr__FiPc(buff_id,name);
    pMVar2->mdl_addr = piVar3;
    if (piVar3 == (int *)0x0) {
      printf("***ERR!! %s(%d):");
      fmt = "NO_MODEL_ADDR[%s]\n";
    }
    else {
      pvVar4 = MapObjRegistModel__FiPcPiiPfT4(buff_id,name,piVar3,*(int *)((int)op + 4),mpos,mrot);
      pMVar2->obj_hdl = pvVar4;
      if (pvVar4 != (void *)0x0) {
        puVar5 = FurnCtlGetFlgPtr__FiPc(buff_id,name);
        hp = MapLoadGetHeadPtr__Fi(buff_id);
        pre_flg = 1;
        iVar6 = MapMeiCheck__FP10MLOAD_HEAD(hp);
        if (iVar6 == 0) {
          pre_flg = MapObjGetLightFlg__FPc(name);
          if (pre_flg == 0) {
            puVar7 = (uint *)MapPutGetFlgPtr__FPv(pMVar2->obj_hdl);
            uVar8 = *puVar7 | 0x20;
          }
          else {
            puVar7 = (uint *)MapPutGetFlgPtr__FPv(pMVar2->obj_hdl);
            uVar8 = *puVar7 & 0xffffffdf;
          }
          *puVar7 = uVar8;
          uVar1 = *puVar5;
        }
        else {
          uVar1 = *puVar5;
        }
        if ((uVar1 & 2) == 0) {
          piVar3 = pMVar2->mdl_addr;
        }
        else {
          if (pre_flg == 0) {
            return pMVar2;
          }
          piVar3 = pMVar2->mdl_addr;
        }
        MapLightSetLight__FiPiPvi(buff_id,piVar3,pMVar2->obj_hdl,pre_flg);
        *puVar5 = *puVar5 | 2;
        return pMVar2;
      }
      printf("***ERR!! %s(%d):");
      fmt = "NO_OBJ_HDL[%s]\n";
    }
    printf(fmt);
  }
  return pMVar2;
}

void MapObjCallbackBornAnim() {
	void *hdl;
	u_int furn_id;
	u_int *model_p;
	SGDCOORDINATE *c_cp;
	u_int i;
	
  SGDCOORDINATE *furn_cp;
  float afVar1 [4];
  SGDCOORDINATE *pSVar2;
  int iVar3;
  void *obj;
  uint furn_id;
  uint *sgd_top;
  float (*paafVar4) [4] [4];
  uint uVar5;
  float fVar6;
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined auVar10 [16];
  
  iVar3 = GetObjDrawFLG__Fv();
  if (iVar3 != 0) {
    uVar5 = 0;
    obj = MapPutGetNowHdl__Fv();
    furn_id = MapPutGetWork__FPv(obj);
    sgd_top = MapPutGetModelPtr__FPv(obj);
    furn_cp = (SGDCOORDINATE *)sgd_top[2];
    pSVar2 = furn_cp;
    if (sgd_top[5] != 1) {
      do {
        sceVu0UnitMatrix(pSVar2);
        uVar5 = uVar5 + 1;
        pSVar2 = pSVar2 + 1;
      } while (uVar5 < sgd_top[5] - 1);
    }
                    /* inlined from ../../graphics/graph3d/g3dxVu0.h */
    paafVar4 = MapPutGetMatrixPtr__FPv(obj);
    auVar7 = _lqc2((undefined  [16])(*paafVar4)[0]);
    auVar8 = _lqc2((undefined  [16])(*paafVar4)[1]);
    auVar9 = _lqc2((undefined  [16])(*paafVar4)[2]);
    auVar10 = _lqc2((undefined  [16])(*paafVar4)[3]);
    afVar1 = (float  [4])_sqc2(auVar7);
    *(float *)((int)furn_cp->matCoord[0] + 0) = afVar1[0];
    *(float *)((int)furn_cp->matCoord[0] + 4) = afVar1[1];
    *(float *)((int)furn_cp->matCoord[0] + 8) = afVar1[2];
    *(float *)((int)furn_cp->matCoord[0] + 0xc) = afVar1[3];
    afVar1 = (float  [4])_sqc2(auVar8);
    *(float *)((int)furn_cp->matCoord[1] + 0) = afVar1[0];
    *(float *)((int)furn_cp->matCoord[1] + 4) = afVar1[1];
    *(float *)((int)furn_cp->matCoord[1] + 8) = afVar1[2];
    *(float *)((int)furn_cp->matCoord[1] + 0xc) = afVar1[3];
    afVar1 = (float  [4])_sqc2(auVar9);
    *(float *)((int)furn_cp->matCoord[2] + 0) = afVar1[0];
    *(float *)((int)furn_cp->matCoord[2] + 4) = afVar1[1];
    *(float *)((int)furn_cp->matCoord[2] + 8) = afVar1[2];
    *(float *)((int)furn_cp->matCoord[2] + 0xc) = afVar1[3];
    afVar1 = (float  [4])_sqc2(auVar10);
    *(float *)((int)furn_cp->matCoord[3] + 0) = afVar1[0];
    *(float *)((int)furn_cp->matCoord[3] + 4) = afVar1[1];
    *(float *)((int)furn_cp->matCoord[3] + 8) = afVar1[2];
    *(float *)((int)furn_cp->matCoord[3] + 0xc) = afVar1[3];
                    /* end of inlined section */
    fVar6 = furn_cp->matCoord[2][2];
    furn_cp->matCoord[1][1] = -furn_cp->matCoord[1][1];
    furn_cp->matCoord[2][2] = -fVar6;
    acsMoveRope__FUiP13SGDCOORDINATE(furn_id,furn_cp);
    MapDrawSGD__FPv(sgd_top);
  }
  return;
}

static int MapObjRegistBornAnim(MB_OUT_SECTION *sp, char *name, void *obj_hdl, int *mdl_addr) {
	int anim_id;
	
  int iVar1;
  uint *puVar2;
  
  iVar1 = FurnCtlGetAnimID__FPci(name,1);
  if (iVar1 < 0) {
    printf("***ERR!! %s(%d):");
    printf("NO_REGIST_BORN_ANIM[%s]\n");
    iVar1 = -1;
  }
  else {
    acsRopeSetWork__FUiUc(sp->labelID,(uchar)iVar1);
    puVar2 = (uint *)MapPutGetFlgPtr__FPv(obj_hdl);
    *puVar2 = *puVar2 | 1;
    MapPutSetFuncAddr__FPvPFv_v(obj_hdl,MapObjCallbackBornAnim__Fv);
    MapPutSetWork__FPvi(obj_hdl,sp->labelID);
    iVar1 = 0;
  }
  return iVar1;
}

void MapObjBornDelete(int buff_id) {
	u_int i;
	u_int j;
	MB_OUT_HEAD *rp;
	int furn_id;
	
  MLOAD_HEAD *pMVar1;
  MB_OUT_HEAD *pMVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = 0;
  pMVar1 = MapLoadGetHeadPtr__Fi(buff_id);
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
  do {
    pcVar4 = (pMVar1->reg_id).field0_0x0.m_aData + uVar6;
    _fixed_array_verifyrange__H1Zc_UiUi_PX01(uVar6,4);
    if (*pcVar4 != -1) {
      _fixed_array_verifyrange__H1Zc_UiUi_PX01(uVar6,4);
                    /* end of inlined section */
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
      pMVar2 = RegDatGetHead__Fi((int)*pcVar4);
                    /* end of inlined section */
      uVar3 = 0;
      do {
        uVar5 = uVar3 + 1;
        uVar3 = acsRopeGetFurnID__FUi(uVar3);
        if ((int)uVar3 / 1000 == pMVar2->area_id) {
          acsRopeReleaseWork__FUi(uVar3);
        }
        uVar3 = uVar5;
      } while (uVar5 < 0x14);
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 < 4);
  return;
}

static void MapObjCallbackTreeAnim() {
	void *obj_hdl;
	u_int *mdl_addr;
	int anim_id;
	sceGifPackAd aGPA[1];
	sceGifPackAd aGPAEnd[1];
	
  void *obj;
  SGDFILEHEADER *pSGDHead;
  int id;
  int iVar1;
  float (*mat) [4] [4];
  _sceGifPackAd aGPA [1];
  _sceGifPackAd aGPAEnd [1];
  
  obj = MapPutGetNowHdl__Fv();
  pSGDHead = (SGDFILEHEADER *)MapPutGetModelPtr__FPv(obj);
  id = MapPutGetWork__FPv(obj);
  iVar1 = GetObjDrawFLG__Fv();
  if (iVar1 != 0) {
    aGPA[0].ADDR = DAT_0039f068;
    aGPA[0].DATA = DAT_0039f060;
    g3dSetGsRegisters__FPC13_sceGifPackAdii(aGPA,1,1);
    MapManimSetMatrixSgdOne2__FP13SGDFILEHEADERi(pSGDHead,id);
    mat = MapPutGetMatrixPtr__FPv(obj);
    MapDrawObj__FPvPA3_f(pSGDHead,(float (*) [4])mat);
    aGPAEnd[0].ADDR = DAT_0039f078;
    aGPAEnd[0].DATA = DAT_0039f070;
    g3dSetGsRegisters__FPC13_sceGifPackAdii(aGPAEnd,1,1);
  }
  return;
}

static int MapObjCheckNuno(int buff_id, char *name, void *hdl, int *mdl_addr) {
	int n_id;
	
  int iVar1;
  float (*mat) [4] [4];
  uint *puVar2;
  
  iVar1 = FurnCtlGetAnimID__FPci(name,0);
  if (iVar1 < 0) {
    printf("***ERR!! %s(%d):");
    printf("NO_NUNO_ID[%s]\n");
    iVar1 = -1;
  }
  else {
    mat = MapPutGetMatrixPtr__FPv(hdl);
    MapDrawSetMatrixSGD__FPvPA3_f(mdl_addr,(float (*) [4])mat);
    puVar2 = (uint *)MapLoadGetFreeMemAddr__Fi(buff_id);
    puVar2 = acsChodoSetCloth__FPUiiiT0i((uint *)mdl_addr,iVar1,buff_id,puVar2,(int)hdl);
    MapLoadSetFreeMemAddr__FiPc(buff_id,(char *)puVar2);
    puVar2 = (uint *)MapPutGetFlgPtr__FPv(hdl);
    iVar1 = 1;
    *puVar2 = *puVar2 | 0x800;
  }
  return iVar1;
}

static int MapObjRegistTreeAnim(int buff_id, char *m_name, char *model_addr, char *mot_addr, void *obj_hdl, float *offset, float *rot) {
	static int anim_list[6][7] = {
		/* [0] = */ {
			/* [0] = */ -1,
			/* [1] = */ -1,
			/* [2] = */ 2,
			/* [3] = */ 1,
			/* [4] = */ 0,
			/* [5] = */ -99,
			/* [6] = */ -99
		},
		/* [1] = */ {
			/* [0] = */ -1,
			/* [1] = */ -1,
			/* [2] = */ 2,
			/* [3] = */ 1,
			/* [4] = */ 0,
			/* [5] = */ -99,
			/* [6] = */ -99
		},
		/* [2] = */ {
			/* [0] = */ -1,
			/* [1] = */ -1,
			/* [2] = */ 2,
			/* [3] = */ 1,
			/* [4] = */ 0,
			/* [5] = */ -99,
			/* [6] = */ -99
		},
		/* [3] = */ {
			/* [0] = */ -1,
			/* [1] = */ -1,
			/* [2] = */ 2,
			/* [3] = */ 1,
			/* [4] = */ 0,
			/* [5] = */ -99,
			/* [6] = */ -99
		},
		/* [4] = */ {
			/* [0] = */ -1,
			/* [1] = */ -1,
			/* [2] = */ 2,
			/* [3] = */ 1,
			/* [4] = */ 0,
			/* [5] = */ -99,
			/* [6] = */ -99
		},
		/* [5] = */ {
			/* [0] = */ -1,
			/* [1] = */ -1,
			/* [2] = */ 2,
			/* [3] = */ 1,
			/* [4] = */ 0,
			/* [5] = */ -99,
			/* [6] = */ -99
		}
	};
	static int id_tes[7][3];
	int tree_id;
	short int *flp;
	int cnt;
	int work_list[7];
	
  uint uVar1;
  uint uVar2;
  ulong *puVar3;
  int iVar4;
  ushort *puVar5;
  int iVar6;
  uint *puVar7;
  ulong uVar8;
  ulong uVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  int work_list [7];
  char *local_60;
  float *local_5c;
  float *local_58;
  
  uVar9 = (ulong)(int)m_name;
  iVar12 = m_name[3] + -0x30;
  if (iVar12 < 7) {
    iVar4 = MapSpAraCheck__Fv();
    if (iVar4 != 0) {
      mot_addr = FurnCtlGetMotAddrEx__FiPci(buff_id,m_name,2);
    }
    puVar5 = FurnCtlGetFlgPtr__FiPc(buff_id,m_name);
    if (((*puVar5 ^ 1) & 1) != 0) {
      iVar6 = iVar12 * 0x1c;
      uVar8 = (ulong)(iVar12 * 0xc);
      piVar10 = (int *)(&id_tes_1148 + iVar12 * 0xc);
      iVar11 = 2;
      iVar4 = iVar6;
      local_60 = model_addr;
      local_5c = offset;
      local_58 = rot;
      do {
        uVar1 = iVar6 + 0x2c8fd7U & 7;
        uVar2 = (uint)(anim_list_1147 + iVar6) & 7;
        work_list._0_8_ =
             (*(long *)((iVar6 + 0x2c8fd7U) - uVar1) << (7 - uVar1) * 8 |
             (long)iVar4 & 0xffffffffffffffffU >> (uVar1 + 1) * 8) & -1L << (8 - uVar2) * 8 |
             *(ulong *)(anim_list_1147 + iVar6 + -uVar2) >> uVar2 * 8;
        uVar1 = iVar6 + 0x2c8fdfU & 7;
        uVar2 = iVar6 + 0x2c8fd8U & 7;
        uVar8 = (*(long *)((iVar6 + 0x2c8fdfU) - uVar1) << (7 - uVar1) * 8 |
                uVar8 & 0xffffffffffffffffU >> (uVar1 + 1) * 8) & -1L << (8 - uVar2) * 8 |
                *(ulong *)((iVar6 + 0x2c8fd8U) - uVar2) >> uVar2 * 8;
        uVar1 = iVar6 + 0x2c8fe7U & 7;
        uVar2 = iVar6 + 0x2c8fe0U & 7;
        uVar9 = (*(long *)((iVar6 + 0x2c8fe7U) - uVar1) << (7 - uVar1) * 8 |
                uVar9 & 0xffffffffffffffffU >> (uVar1 + 1) * 8) & -1L << (8 - uVar2) * 8 |
                *(ulong *)((iVar6 + 0x2c8fe0U) - uVar2) >> uVar2 * 8;
        iVar4 = *(int *)(anim_list_1147 + iVar6 + 0x18);
        uVar1 = (int)work_list + 7U & 7;
        puVar3 = (ulong *)(((int)work_list + 7U) - uVar1);
        *puVar3 = *puVar3 & -1L << (uVar1 + 1) * 8 | (ulong)work_list._0_8_ >> (7 - uVar1) * 8;
        uVar1 = (int)work_list + 0xfU & 7;
        puVar3 = (ulong *)(((int)work_list + 0xfU) - uVar1);
        *puVar3 = *puVar3 & -1L << (uVar1 + 1) * 8 | uVar8 >> (7 - uVar1) * 8;
        uVar1 = (int)work_list + 0x17U & 7;
        puVar3 = (ulong *)(((int)work_list + 0x17U) - uVar1);
        *puVar3 = *puVar3 & -1L << (uVar1 + 1) * 8 | uVar9 >> (7 - uVar1) * 8;
        work_list._8_8_ = uVar8;
        work_list._16_8_ = uVar9;
        work_list[6] = iVar4;
        iVar4 = GetRandValI__Fi(100);
        uVar9 = (ulong)(int)local_60;
        iVar11 = iVar11 + -1;
        iVar4 = MapManimSetAnim__FiPcT1PiPfT4i
                          (buff_id,local_60,mot_addr,work_list,local_5c,local_58,iVar4);
        *piVar10 = iVar4;
        piVar10 = piVar10 + 1;
      } while (-1 < iVar11);
      *puVar5 = *puVar5 | 1;
    }
    puVar7 = (uint *)MapPutGetFlgPtr__FPv(obj_hdl);
    *puVar7 = *puVar7 | 1;
    MapPutSetFuncAddr__FPvPFv_v(obj_hdl,MapObjCallbackTreeAnim__Fv);
    iVar4 = GetRandValI__Fi(3);
    MapPutSetWork__FPvi(obj_hdl,*(int *)(&id_tes_1148 + (iVar12 * 3 + iVar4) * 4));
    iVar12 = 0;
  }
  else {
    printf("***ERR!! %s(%d):");
    printf("TREE_TYPE_MAX_OVER[%d]\n");
    iVar12 = -1;
  }
  return iVar12;
}

int MapObjCheckAnim(int buff_id, char *m_name, float *offset, float *rot, void *obj_hdl, int ani_type) {
	char *model_addr;
	char *mot_addr;
	int anim_id;
	
  ushort uVar1;
  int iVar2;
  float (*mat) [4] [4];
  int id;
  uint uVar3;
  char *model_addr;
  char *mot_addr;
  
  model_addr = (char *)0x0;
  mot_addr = (char *)0x0;
  FurnCtlGetAddr__FiPcPPcT2(buff_id,m_name,&model_addr,&mot_addr);
  id = -1;
  if (mot_addr != (char *)0x0) {
    if (model_addr == (char *)0x0) {
      printf("***ERR!! %s(%d):");
      printf("NO_ANIM_MODEL [%s]\n");
      id = -2;
    }
    else {
      uVar1 = FurnCtlGetAttr__FiPc(buff_id,m_name);
      if (uVar1 == 2) {
        iVar2 = FurnCtlGetID__FPc(m_name);
        id = -1;
        if (iVar2 < 0x32a) {
          MapObjRegistTreeAnim__FiPcN21PvPfT5(buff_id,m_name,model_addr,mot_addr,obj_hdl,offset,rot)
          ;
          id = -1;
        }
      }
      else {
        mat = MapPutGetMatrixPtr__FPv(obj_hdl);
        id = MapAnimRegistEx__FiPUiT1PA3_A3_fPfT4ii
                       (ani_type,(uint *)model_addr,(uint *)mot_addr,mat,offset,rot,0x20,2);
        uVar3 = 8;
        if (buff_id == 0) {
          uVar3 = 4;
        }
        MapAnimSetFlg__Fii(id,uVar3 | 0xa2);
        if (MapObjSceneLoadFlg == 0) {
          MapLightSetLight__FiPiPvi(buff_id,(int *)model_addr,obj_hdl,0);
        }
      }
    }
  }
  return id;
}

void MapObjRegistMot(int buff_id, MAPOBJ_DAT *dp, char *name, int action, int a_type, float *irot, float *ipos) {
	void *obj_hdl;
	int *mdl_addr;
	float rot[4];
	float offset[4];
	
  void *hdl;
  int *mdl_addr;
  int iVar1;
  char *fmt;
  float rot [4];
  float offset [4];
  
  hdl = dp->obj_hdl;
  mdl_addr = dp->mdl_addr;
  if (hdl == (void *)0x0) {
    printf("***ERR!! %s(%d):");
    fmt = "NO_MODEL_HDL [%s]\n";
  }
  else {
    if (mdl_addr != (int *)0x0) {
      iVar1 = FurnLoadGetAttr__FPc(name);
      if (iVar1 == 1) {
        MapObjCheckNuno__FiPcPvPi(buff_id,name,hdl,mdl_addr);
      }
      else if (iVar1 == 5) {
        MapObjRegistBornAnim__FP14MB_OUT_SECTIONPcPvPi
                  ((MB_OUT_SECTION *)dp->obj_ptr,name,hdl,mdl_addr);
      }
      else {
        _SetVector__FPfffff(rot,*irot * DAT_003ed858,
                            (float)((double)(irot[1] * DAT_003ed858) + _DAT_0039f0d8),
                            irot[2] * DAT_003ed858,1.0);
        _SetVector__FPfffff(offset,*ipos,ipos[1],ipos[2],1.0);
        iVar1 = MapObjCheckAnim__FiPcPfT2Pvi(buff_id,name,offset,rot,hdl,a_type);
        dp->anim_id = iVar1;
      }
      MapSpObjReg__FiPcP10MAPOBJ_DATPf(buff_id,name,dp,irot);
      return;
    }
    printf("***ERR!! %s(%d):");
    fmt = "NO_ANIM_MODEL [%s]\n";
  }
  printf(fmt);
  return;
}

int MapObjRegistDoor(int buff_id, int reg_id, int stat, MB_OUT_SECTION *reg_p) {
	u_int door_hdl;
	MAPOBJ_DAT *dp;
	char name[36];
	MDAT_DOOR *op;
	float *pos;
	MB_OUT_HEAD *hp;
	
  uint ptr;
  MB_OUT_HEAD *pMVar1;
  MAPOBJ_DAT *pMVar2;
  MB_OUT_SECTION *mpos;
  float fVar3;
  float fVar4;
  char name [36];
  
  mpos = reg_p + 6;
  FurnCtlGetMdoelName__FPcT0(name,(char *)(reg_p + 1));
  ptr = MapDoorAdd__FiP9MDAT_DOOR(buff_id,(MDAT_DOOR *)reg_p);
  if (ptr != 0) {
    if ((stat & 4U) == 0) {
      pMVar1 = RegDatGetHead__Fi(reg_id);
      fVar4 = (float)reg_p[6].labelID;
      fVar3 = *(float *)(reg_p + 7);
      *(float *)mpos = *(float *)mpos + pMVar1->Pos[0];
      reg_p[6].labelID = (uint)(fVar4 + pMVar1->Pos[1]);
      *(float *)(reg_p + 7) = fVar3 + pMVar1->Pos[2];
    }
    pMVar2 = MapObjAddDrawList__FiPvPCcPfT3i
                       (buff_id,reg_p,name,(float *)mpos,(float *)&reg_p[7].labelID,7);
    if (pMVar2 == (MAPOBJ_DAT *)0x0) {
      printf("***ERR!! %s(%d):");
      printf("MDOEL OBJ NULL\n");
    }
    else {
      MapDoorSetStat__FUiPv(ptr,pMVar2->obj_hdl);
    }
  }
  return 0;
}

int MapObjRegistFurn(int buff_id, int reg_id, int stat, MB_OUT_SECTION *reg_p) {
	MDAT_OBJ *op;
	char name[36];
	MAPOBJ_DAT *dp;
	int ret;
	float *pos;
	MB_OUT_HEAD *hp;
	void *hdl;
	float scale[4];
	float pos[4];
	float rot[4];
	float mat[4][4];
	
  int iVar1;
  int a_type;
  undefined8 uVar2;
  undefined8 uVar3;
  MAPOBJ_HEAD *pMVar4;
  MB_OUT_HEAD *pMVar5;
  int iVar6;
  void *obj;
  uint *puVar7;
  MAPOBJ_DAT *dp;
  MB_OUT_SECTION *mpos;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  char name [36];
  float scale [4];
  float pos [4];
  float rot [4];
  float mat [4] [4];
  
  pMVar4 = MapObjGetListPtr__Fi(buff_id);
  if (pMVar4 != (MAPOBJ_HEAD *)0x0) {
    FurnCtlGetMdoelName__FPcT0(name,(char *)&reg_p[1].labelID);
    if (reg_p[9].labelID != 0) {
      photo_datObjStart__FP8MDAT_OBJ((MDAT_OBJ *)reg_p);
    }
    mpos = reg_p + 6;
    if ((stat & 4U) == 0) {
      pMVar5 = RegDatGetHead__Fi(reg_id);
      fVar13 = (float)reg_p[6].labelID;
      fVar12 = *(float *)(reg_p + 7);
      *(float *)mpos = *(float *)mpos + pMVar5->Pos[0];
      reg_p[6].labelID = (uint)(fVar13 + pMVar5->Pos[1]);
      *(float *)(reg_p + 7) = fVar12 + pMVar5->Pos[2];
    }
    iVar6 = MapObjCheckEffect__FPc((char *)&reg_p[1].labelID);
    if (iVar6 == -1) {
      dp = MapObjAddDrawList__FiPvPCcPfT3i
                     (buff_id,reg_p,name,(float *)mpos,(float *)&reg_p[7].labelID,3);
      iVar6._0_2_ = reg_p[10].SecStID;
      iVar6._2_2_ = reg_p[10].size;
      MapObjUpdateFlg__FPvi(dp->obj_hdl,iVar6);
      pMVar4 = (MAPOBJ_HEAD *)0x0;
      if (dp != (MAPOBJ_DAT *)0x0) {
        iVar1._0_2_ = reg_p[9].SecStID;
        iVar1._2_2_ = reg_p[9].size;
        if (iVar1 != 0) {
          MapObjSetHit2__FP8MDAT_OBJi((MDAT_OBJ *)reg_p,1);
        }
        a_type._0_2_ = reg_p[0xb].SecStID;
        a_type._2_2_ = reg_p[0xb].size;
        MapObjRegistMot__FiP10MAPOBJ_DATPciiPfT5
                  (buff_id,dp,name,reg_p[10].labelID,a_type,(float *)&reg_p[7].labelID,(float *)mpos
                  );
        pMVar4 = (MAPOBJ_HEAD *)0x0;
      }
    }
    else {
      pMVar4 = (MAPOBJ_HEAD *)0x0;
      if (iVar6 != -2) {
        reg_p[10].labelID = 0xffffffff;
        reg_p[0xb].SecStID = (short)iVar6;
        reg_p[0xb].size = (short)((uint)iVar6 >> 0x10);
        MapObjAddDrawList__FiPvPCcPfT3i(buff_id,reg_p,(char *)0x0,(float *)0x0,(float *)0x0,3);
        uVar3 = _DAT_0039f0f8;
        uVar2 = DAT_0039f0f0;
        pMVar4 = (MAPOBJ_HEAD *)0x0;
        if (iVar6 == 0) {
          fVar14 = *(float *)mpos;
          fVar8 = (float)reg_p[6].labelID;
          fVar10 = *(float *)(reg_p + 7);
          fVar13 = 1.0;
          fVar11 = (float)reg_p[7].labelID;
          fVar9 = *(float *)(reg_p + 8);
          fVar15 = (float)reg_p[8].labelID;
          obj = MapPutSetFunc__FiPUii(buff_id,(uint *)MapObjEffCallback__Fv,0);
          fVar12 = DAT_003ed85c;
                    /* inlined from MapGeom.h */
                    /* end of inlined section */
          puVar7 = (uint *)MapPutGetFlgPtr__FPv(obj);
                    /* inlined from MapGeom.h */
                    /* end of inlined section */
                    /* inlined from MapGeom.h */
                    /* end of inlined section */
          *puVar7 = *puVar7 & 0xffffffef;
                    /* inlined from MapGeom.h */
          sceVu0UnitMatrix(mat);
          scale[0] = (float)uVar2;
          scale[1] = (float)((ulong)uVar2 >> 0x20);
          scale[2] = (float)uVar3;
          mat[0][0] = scale[0] * 25.0;
          mat[1][1] = -scale[1] * 25.0;
          mat[2][2] = -scale[2] * 25.0;
          sceVu0RotMatrixX(-(fVar11 * fVar12),mat,mat);
          sceVu0RotMatrixY(-(fVar9 * fVar12),mat,mat);
          sceVu0RotMatrixZ(fVar15 * fVar12,mat,mat);
                    /* inlined from ../../graphics/graph3d/g3dxVu0.h */
                    /* end of inlined section */
          mat[3][0] = fVar14;
          mat[3][1] = fVar8;
          mat[3][2] = fVar10;
          mat[3][3] = fVar13;
                    /* end of inlined section */
          MapPutSetWork__FPvi(obj,reg_p->labelID);
          MapPutSetMatrix__FPvPA3_f(obj,mat);
          pMVar4 = (MAPOBJ_HEAD *)0x0;
        }
      }
    }
  }
  return (int)pMVar4;
}

static int MapObjRegistPutFurn(int buff_id, int reg_id, int stat, MB_OUT_SECTION *reg_p) {
	MDAT_PUT *op;
	char name[36];
	MAPOBJ_DAT *dp;
	int ret;
	float *pos;
	MB_OUT_HEAD *hp;
	float vScale[4];
	float vPos[4];
	float vRot[4];
	float *mat[4];
	float *pos;
	float *rot;
	float *scale;
	
  int v_flg;
  int a_type;
  int iActionType;
  int a_type_00;
  MAPOBJ_HEAD *pMVar1;
  MB_OUT_HEAD *pMVar2;
  int iVar3;
  MAPOBJ_DAT *pMVar4;
  float (*paafVar5) [4] [4];
  void *hdl;
  uint *mpos;
  MB_OUT_SECTION *mrot;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  char name [36];
  float vScale [4];
  float vPos [4];
  float vRot [4];
  
  pMVar1 = MapObjGetListPtr__Fi(buff_id);
  if (pMVar1 == (MAPOBJ_HEAD *)0x0) {
    return 0;
  }
  iVar3._0_2_ = reg_p[10].SecStID;
  iVar3._2_2_ = reg_p[10].size;
  if (iVar3 != 0) {
    mpos = &reg_p[5].labelID;
    FurnCtlGetMdoelName__FPcT0(name,(char *)(reg_p + 1));
    if ((stat & 4U) == 0) {
      pMVar2 = RegDatGetHead__Fi(reg_id);
      fVar14 = *(float *)(reg_p + 6);
      fVar13 = (float)reg_p[6].labelID;
      *mpos = (uint)((float)*mpos + pMVar2->Pos[0]);
      *(float *)(reg_p + 6) = fVar14 + pMVar2->Pos[1];
      reg_p[6].labelID = (uint)(fVar13 + pMVar2->Pos[2]);
    }
    iVar3 = MapObjCheckEffect__FPc((char *)(reg_p + 1));
    if (iVar3 == -1) {
      mrot = reg_p + 7;
      pMVar4 = MapObjAddDrawList__FiPvPCcPfT3i(buff_id,reg_p,name,(float *)mpos,(float *)mrot,0xb);
      fVar13 = DAT_003ed860;
      if (pMVar4 == (MAPOBJ_DAT *)0x0) {
        return 0;
      }
      hdl = pMVar4->obj_hdl;
      if (hdl != (void *)0x0) {
        fVar9 = (float)reg_p[8].labelID;
        fVar6 = *(float *)(reg_p + 9);
        fVar15 = (float)reg_p[9].labelID;
        fVar14 = 1.0;
        fVar16 = (float)reg_p[6].labelID;
        fVar10 = (float)*mpos;
        fVar7 = *(float *)(reg_p + 6);
        fVar8 = (float)reg_p[7].labelID;
        fVar11 = *(float *)mrot;
                    /* inlined from MapGeom.h */
                    /* end of inlined section */
        fVar12 = *(float *)(reg_p + 8);
                    /* inlined from MapGeom.h */
        paafVar5 = MapPutGetMatrixPtr__FPv(pMVar4->obj_hdl);
        sceVu0UnitMatrix(paafVar5);
        (*paafVar5)[0] = fVar9 * 25.0;
        (*paafVar5)[1][1] = -fVar6 * 25.0;
        (*paafVar5)[2][2] = -fVar15 * 25.0;
        sceVu0RotMatrixX(-(fVar11 * fVar13),paafVar5,paafVar5);
        sceVu0RotMatrixY(-(fVar8 * fVar13),paafVar5,paafVar5);
        sceVu0RotMatrixZ(fVar12 * fVar13,paafVar5,paafVar5);
                    /* inlined from ../../graphics/graph3d/g3dxVu0.h */
        (*paafVar5)[3][0] = fVar10;
        (*paafVar5)[3][1] = fVar7;
        (*paafVar5)[3][2] = fVar16;
        (*paafVar5)[3][3] = 1.0;
                    /* inlined from MapGeom.h */
        (*paafVar5)[3][3] = fVar14;
        hdl = pMVar4->obj_hdl;
      }
      v_flg._0_2_ = reg_p[10].SecStID;
      v_flg._2_2_ = reg_p[10].size;
                    /* end of inlined section */
      MapObjUpdateFlg__FPvi(hdl,v_flg);
      a_type._0_2_ = reg_p[0xb].SecStID;
      a_type._2_2_ = reg_p[0xb].size;
      MapObjRegistMot__FiP10MAPOBJ_DATPciiPfT5
                (buff_id,pMVar4,name,reg_p[10].labelID,a_type,(float *)mrot,(float *)mpos);
      iVar3 = FurnLoadGetAttr__FPc(name);
      if (iVar3 == 1) {
        iActionType._0_2_ = reg_p[0xb].SecStID;
        iActionType._2_2_ = reg_p[0xb].size;
        MapObjNunoCtl__FPvii(pMVar4->obj_hdl,reg_p[10].labelID,iActionType);
      }
      else {
        if (iVar3 != 5) {
          return 0;
        }
        a_type_00._0_2_ = reg_p[0xb].SecStID;
        a_type_00._2_2_ = reg_p[0xb].size;
        MapObjBoneCtl__Fiii(reg_p->labelID,reg_p[10].labelID,a_type_00);
      }
    }
    else if (iVar3 != -2) {
      reg_p[0xb].SecStID = (short)iVar3;
      reg_p[0xb].size = (short)((uint)iVar3 >> 0x10);
      reg_p[10].labelID = 0xffffffff;
      pMVar4 = MapObjAddDrawList__FiPvPCcPfT3i
                         (buff_id,reg_p,(char *)0x0,(float *)0x0,(float *)0x0,0xb);
      MapObjSetDrawEffect__FP10MAPOBJ_DATi(pMVar4,1);
    }
  }
  return 0;
}

static void MapObjCallFuncRecDat(int buff_id, int reg_id, int stat, int type, int (*func)(/* parameters unknown */)) {
	MB_OUT_SECTION *mp;
	
  MB_OUT_SECTION *pMVar1;
  
  RegDatGetStPtrStart__Fii(reg_id,type);
  while( true ) {
    pMVar1 = RegDatGetNextStPtr__Fi(reg_id);
    if (pMVar1 == (MB_OUT_SECTION *)0x0) break;
    (*(code *)func)(buff_id,reg_id,stat,pMVar1);
  }
  return;
}

void MapObjRegistRegDatOne(int buff_id, int reg_id) {
	MLOAD_HEAD *mp;
	
  MLOAD_HEAD *pMVar1;
  
  pMVar1 = MapLoadGetHeadPtr__Fi(buff_id);
  MapObjCallFuncRecDat__FiiiiPFiiiP14MB_OUT_SECTION_i
            (buff_id,reg_id,pMVar1->stat,7,MapObjRegistDoor__FiiiP14MB_OUT_SECTION);
  MapObjCallFuncRecDat__FiiiiPFiiiP14MB_OUT_SECTION_i
            (buff_id,reg_id,pMVar1->stat,3,MapObjRegistFurn__FiiiP14MB_OUT_SECTION);
  MapObjCallFuncRecDat__FiiiiPFiiiP14MB_OUT_SECTION_i
            (buff_id,reg_id,pMVar1->stat,0xb,MapObjRegistPutFurn__FiiiP14MB_OUT_SECTION);
  return;
}

static void MapObjDeleteAlphaChangeEffect(int buff_id) {
	int i;
	
  MLOAD_HEAD *pMVar1;
  MB_OUT_HEAD *pMVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  
  pMVar1 = MapLoadGetHeadPtr__Fi(buff_id);
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
  iVar4 = 0;
  do {
    pcVar3 = (pMVar1->reg_id).field0_0x0.m_aData + iVar4;
    _fixed_array_verifyrange__H1Zc_UiUi_PX01(iVar4,4);
    iVar5 = iVar4 + 1;
    if (*pcVar3 != -1) {
      _fixed_array_verifyrange__H1Zc_UiUi_PX01(iVar4,4);
      pMVar2 = RegDatGetHead__Fi((int)*pcVar3);
                    /* end of inlined section */
      EffectModelAlphaChangeDeleteGroup__Fi(pMVar2->area_id);
    }
    iVar4 = iVar5;
  } while (iVar5 < 4);
  return;
}

MDAT_DOOR* MapObjSetDoorDat(int b_id, int door_id) {
	int i;
	MLOAD_HEAD *mp;
	MDAT_DOOR *dp;
	
  MLOAD_HEAD *pMVar1;
  MDAT_DOOR *pMVar2;
  char *pcVar3;
  int iVar4;
  
  pMVar1 = MapLoadGetHeadPtr__Fi(b_id);
  if (pMVar1 == (MLOAD_HEAD *)0x0) {
    printf("***ERR!! %s(%d):");
    printf("DEL_DOOR_ERR! CANNOTGET_HEADER PTR = NULL\n");
  }
  else {
    iVar4 = 0;
    if (-1 < pMVar1->labelID) {
      do {
        pcVar3 = (pMVar1->reg_id).field0_0x0.m_aData + iVar4;
        _fixed_array_verifyrange__H1Zc_UiUi_PX01(iVar4,4);
        if (*pcVar3 != -1) {
          _fixed_array_verifyrange__H1Zc_UiUi_PX01(iVar4,4);
          RegDatGetStPtrStart__Fii((int)*pcVar3,7);
                    /* end of inlined section */
          while( true ) {
            _fixed_array_verifyrange__H1Zc_UiUi_PX01(iVar4,4);
            pMVar2 = (MDAT_DOOR *)RegDatGetNextStPtr__Fi((int)*pcVar3);
            if (pMVar2 == (MDAT_DOOR *)0x0) break;
            if (pMVar2->DatID == door_id) {
              printf("DEL_DOOR_KEEP_DOOR id[%d]\n");
              return pMVar2;
            }
          }
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < 4);
    }
  }
  return (MDAT_DOOR *)0x0;
}

void MapObjDeletDraw(int buff_id) {
	int j;
	MAPOBJ_HEAD *hp;
	MDAT_DOOR *op;
	MDAT_DOOR *work;
	MAPOBJ_DAT *mop;
	int now_id;
	char model_name[48];
	
  MDAT_OBJ *p_obj;
  MAPOBJ_HEAD *pMVar1;
  char *__s1;
  int iVar2;
  MLOAD_HEAD *pMVar3;
  MAPOBJ_DAT *pMVar4;
  MDAT_DOOR *pMVar5;
  int *piVar6;
  GRA3DLIGHTDATA *light_ptr;
  void *pvVar7;
  uint id;
  MAPOBJ_DAT *dp;
  int iVar8;
  float fVar9;
  char model_name [48];
  
  pMVar1 = MapObjGetListPtr__Fi(buff_id);
  if (pMVar1 != (MAPOBJ_HEAD *)0x0) {
    dp = pMVar1->dat;
    acsChodoDel__Fi(buff_id);
    EffectLightComeInDeleteMapBuffId__Fi(buff_id);
    EffectWaterFlowDelete__Fi(buff_id);
    MapObjDeleteAlphaChangeEffect__Fi(buff_id);
    EffectTourouFreaDelete__Fi(buff_id);
    EffectTourouBaseDelete__Fi(buff_id);
    MapObjBornDelete__Fi(buff_id);
    iVar8 = 299;
    MapSpObjRelease__Fi(buff_id);
    do {
      p_obj = (MDAT_OBJ *)dp->obj_ptr;
      if (p_obj != (MDAT_OBJ *)0x0) {
        iVar2 = dp->stat;
        if (iVar2 == 7) {
          id = buff_id ^ 1;
          pMVar3 = MapLoadGetHeadPtr__Fi(id);
          if (pMVar3 != (MLOAD_HEAD *)0x0) {
            pMVar1 = MapObjGetListPtr__Fi(id);
            pMVar4 = MapObjGetFreeListSpacePtr__FP11MAPOBJ_HEAD(pMVar1);
            if (pMVar4 != (MAPOBJ_DAT *)0x0) {
              pMVar5 = MapObjSetDoorDat__Fii(id,*(int *)(p_obj->ModelName + 0x20));
              if (pMVar5 != (MDAT_DOOR *)0x0) {
                FurnCtlGetMdoelName__FPcT0(model_name,(char *)&p_obj->type);
                piVar6 = (int *)FurnCtlGetModelAddr__FiPc(id,model_name);
                pMVar4->mdl_addr = piVar6;
                if (piVar6 == (int *)0x0) {
                  printf("***ERR!! %s(%d):");
                  printf("DELL_DOOR ERR! NO_DOOR_MODEL_IN_PAK [%s]\n");
                }
                fVar9 = p_obj->Pos[0];
                pMVar4->obj_ptr = pMVar5;
                pMVar5->Pos[0] = fVar9;
                iVar2 = p_obj->HitCheck;
                pvVar7 = dp->obj_hdl;
                pMVar5->Pos[1] = p_obj->Pos[1];
                pMVar5->HitCheck = iVar2;
                fVar9 = p_obj->Pos[2];
                pMVar4->stat = 7;
                pMVar5->Pos[2] = fVar9;
                pMVar4->obj_hdl = pvVar7;
                pMVar5->Rot[0] = p_obj->Rot[0];
                pMVar5->Rot[1] = p_obj->Rot[1];
                pMVar5->Rot[2] = p_obj->Rot[2];
                if (pvVar7 != (void *)0x0) {
                  MapPutSetModelPtr__FPvPUi(pvVar7,(uint *)pMVar4->mdl_addr);
                  pMVar3 = MapLoadGetHeadPtr__Fi(id);
                  iVar2 = MapMeiCheck__FP10MLOAD_HEAD(pMVar3);
                  if (iVar2 == 0) {
                    MapLightPreRenderObj__FPvi(pMVar4->obj_hdl,id);
                    pvVar7 = pMVar4->obj_hdl;
                  }
                  else {
                    light_ptr = MapMeiGetLight__Fv();
                    MapPutSetLitPtr__FPvP14GRA3DLIGHTDATA(pMVar4->obj_hdl,light_ptr);
                    pvVar7 = pMVar4->obj_hdl;
                  }
                  if (pvVar7 != (void *)0x0) {
                    dp->obj_ptr = (void *)0x0;
                    goto LAB_001106b4;
                  }
                }
                printf("***ERR!! %s(%d):");
                printf("DELL_DOOR ERR! NO_REGIST_PUTOBJ [%s]\n");
              }
              dp->obj_ptr = (void *)0x0;
              goto LAB_001106b4;
            }
          }
          printf("DEL_DOOR ERR! NO_DRAW_LIST_PTR \n");
          dp->obj_ptr = (void *)0x0;
        }
        else {
          if (iVar2 == 3) {
            if (p_obj->PhotoAble != 0) {
              photo_datObjEnd__FP8MDAT_OBJ(p_obj);
            }
          }
          else if (iVar2 != 0xb) {
            dp->obj_ptr = (void *)0x0;
            goto LAB_001106b4;
          }
          __s1 = MapObjGetModelName__FP10MAPOBJ_DAT(dp);
          iVar2 = strncmp(__s1,&DAT_003eef80,4);
          if (iVar2 == 0) {
            MapObjSetDrawEffect__FP10MAPOBJ_DATi(dp,0);
            dp->obj_ptr = (void *)0x0;
          }
          else {
            dp->obj_ptr = (void *)0x0;
          }
        }
LAB_001106b4:
        dp->mdl_addr = (int *)0x0;
        dp->flg = 0;
      }
      iVar8 = iVar8 + -1;
      dp = dp + 1;
    } while (-1 < iVar8);
    MapPutDelete__Fi(buff_id);
  }
  return;
}

int MapObjRegistPhf(int buff_id, char *lit_addr) {
	MAPOBJ_HEAD *hp;
	
  MAPOBJ_HEAD *pMVar1;
  int iVar2;
  
  pMVar1 = MapObjGetListPtr__Fi(buff_id);
  if (pMVar1 == (MAPOBJ_HEAD *)0x0) {
    printf("***ERR!! %s(%d):");
    printf("NO_OBJLIST_WORK\n");
    iVar2 = -1;
  }
  else {
    pMVar1->lit_addr = (int *)lit_addr;
    FurnCtlModelInit__Fi(buff_id);
    iVar2 = 0;
  }
  return iVar2;
}

void MapObjRegInit() {
  MapObjSceneLoadFlg = 0;
  MapObjDeletDraw__Fi(0);
  MapObjDeletDraw__Fi(1);
  return;
}

MAPOBJ_HEAD* MAPOBJ_HEAD * _fixed_array_verifyrange<MAPOBJ_HEAD>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

char* char * _fixed_array_verifyrange<char>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  return;
}

type_info& MAPOBJ_HEAD type_info function() {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

static void global constructors keyed to MapObjRegSetSceneLoad() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
