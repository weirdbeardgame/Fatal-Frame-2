// STATUS: NOT STARTED

#include "MapObj.h"

typedef struct {
	char *name;
	int id;
} MAPOBJ_EFF;

typedef struct {
	float pow;
	int cycle;
} MAPOBJ_WIND;

int MapObjSimiEnd = 128;
int MapObjSimiTime = 100;

static MAPOBJ_EFF MapObjEffLabel[21] = {
	/* [0] = */ {
		/* .name = */ 0x39ebf8,
		/* .id = */ 0
	},
	/* [1] = */ {
		/* .name = */ 0x39ec08,
		/* .id = */ 1
	},
	/* [2] = */ {
		/* .name = */ 0x39ec18,
		/* .id = */ 2
	},
	/* [3] = */ {
		/* .name = */ 0x39ec28,
		/* .id = */ 3
	},
	/* [4] = */ {
		/* .name = */ 0x39ec38,
		/* .id = */ 4
	},
	/* [5] = */ {
		/* .name = */ 0x39ec48,
		/* .id = */ 5
	},
	/* [6] = */ {
		/* .name = */ 0x39ec58,
		/* .id = */ 6
	},
	/* [7] = */ {
		/* .name = */ 0x39ec68,
		/* .id = */ 7
	},
	/* [8] = */ {
		/* .name = */ 0x39ec78,
		/* .id = */ 8
	},
	/* [9] = */ {
		/* .name = */ 0x39ec88,
		/* .id = */ 9
	},
	/* [10] = */ {
		/* .name = */ 0x39ec98,
		/* .id = */ 10
	},
	/* [11] = */ {
		/* .name = */ 0x39eca8,
		/* .id = */ 11
	},
	/* [12] = */ {
		/* .name = */ 0x39ecb8,
		/* .id = */ 12
	},
	/* [13] = */ {
		/* .name = */ 0x39ecc8,
		/* .id = */ 13
	},
	/* [14] = */ {
		/* .name = */ 0x39ecd8,
		/* .id = */ 14
	},
	/* [15] = */ {
		/* .name = */ 0x39ece8,
		/* .id = */ 15
	},
	/* [16] = */ {
		/* .name = */ 0x39ecf8,
		/* .id = */ 16
	},
	/* [17] = */ {
		/* .name = */ 0x39ed08,
		/* .id = */ 17
	},
	/* [18] = */ {
		/* .name = */ 0x39ed18,
		/* .id = */ 18
	},
	/* [19] = */ {
		/* .name = */ 0x39ed28,
		/* .id = */ 19
	},
	/* [20] = */ {
		/* .name = */ NULL,
		/* .id = */ -1
	}
};

static int MapObjFlg = 0;

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x39eba0;
	
  g3ddbgAssert__FbPCce(false,str_646);
  return;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_void__003eeee8,_max,v);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_char__003eeef0,_max,v);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi("unsigned int*",_max,v);
  }
  return (uint **)0x0;
}

void MapObjDrawON() {
	int i;
	int j;
	MAPOBJ_DAT *dp;
	
  MAPOBJ_HEAD *pMVar1;
  uint *puVar2;
  MAPOBJ_DAT *pMVar3;
  int iVar4;
  int id;
  
  id = 0;
  do {
    iVar4 = 299;
    pMVar1 = MapObjGetListPtr__Fi(id);
    pMVar3 = pMVar1->dat;
    do {
      if (pMVar3->obj_ptr != (void *)0x0) {
        pMVar3->flg = pMVar3->flg & 0xfffffffe;
        if (pMVar3->obj_hdl != (void *)0x0) {
          puVar2 = (uint *)MapPutGetFlgPtr__FPv(pMVar3->obj_hdl);
          *puVar2 = *puVar2 & 0xfffffff7;
        }
      }
      iVar4 = iVar4 + -1;
      pMVar3 = pMVar3 + 1;
    } while (-1 < iVar4);
    id = id + 1;
  } while (id < 2);
  return;
}

MAPOBJ_DAT* MapObjGetDat(int type, int id) {
	int i;
	int j;
	MAPOBJ_DAT *dp;
	
  void *pvVar1;
  MAPOBJ_HEAD *pMVar2;
  int iVar3;
  char *s;
  MAPOBJ_DAT *pMVar4;
  int iVar5;
  int id_00;
  
  id_00 = 0;
  do {
    iVar5 = 0;
    pMVar2 = MapObjGetListPtr__Fi(id_00);
    pMVar4 = pMVar2->dat;
    do {
      pvVar1 = pMVar4->obj_ptr;
      if ((pvVar1 == (void *)0x0) || (iVar3 = pMVar4->stat, iVar3 != type)) goto LAB_0010d3e0;
      if (iVar3 == 7) {
        s = (char *)((int)pvVar1 + 9);
LAB_0010d3c4:
        iVar3 = atoi(s);
        if (id == iVar3) {
          return pMVar4;
        }
      }
      else if (iVar3 < 8) {
        if (iVar3 == 3) {
          s = (char *)((int)pvVar1 + 0xd);
          goto LAB_0010d3c4;
        }
      }
      else if (iVar3 == 0xb) {
        s = (char *)((int)pvVar1 + 9);
        goto LAB_0010d3c4;
      }
LAB_0010d3e0:
      iVar5 = iVar5 + 1;
      pMVar4 = pMVar4 + 1;
    } while (iVar5 < 300);
    id_00 = id_00 + 1;
    if (1 < id_00) {
      return (MAPOBJ_DAT *)0x0;
    }
  } while( true );
}

GRA3DLIGHTDATA* MapObjGetLight(int type, int id) {
	MAPOBJ_DAT *dp;
	static GRA3DLIGHTDATA lwork;
	MDAT_DOOR *op;
	float vPos[4];
	
  void *pvVar1;
  GRA3DLIGHTDATA *pGVar2;
  uint *mdl_p;
  GRA3DLIGHTDATA *pGVar3;
  float vPos [4];
  
  if (__tmp_10_1094 == 0) {
                    /* end of inlined section */
    __tmp_10_1094 = 1;
  }
  pGVar2 = (GRA3DLIGHTDATA *)MapObjGetDat__Fii(type,id);
  pGVar3 = pGVar2;
  if (pGVar2 != (GRA3DLIGHTDATA *)0x0) {
    if (type == 7) {
      pvVar1 = (void *)(pGVar2->aLight).field0_0x0.m_aData[0].vDiffuse[0];
      pGVar3 = (GRA3DLIGHTDATA *)&lwork_1093;
      vPos._0_8_ = *(undefined8 *)((int)pvVar1 + 0x30);
      vPos[3] = 1.0;
      vPos[2] = *(float *)((int)pvVar1 + 0x38);
      mdl_p = MapPutGetModelPtr__FPv((void *)(pGVar2->aLight).field0_0x0.m_aData[0].vDiffuse[1]);
      MapDoorMakeDualRoomLight__FP14GRA3DLIGHTDATAPfPv((GRA3DLIGHTDATA *)&lwork_1093,vPos,mdl_p);
    }
    else {
      pGVar3 = MapPutGetLitPtr__FPv((void *)(pGVar2->aLight).field0_0x0.m_aData[0].vDiffuse[1]);
    }
  }
  return pGVar3;
}

int* MapObjGetModelAddr(int type, int id) {
	MAPOBJ_DAT *dp;
	
  MAPOBJ_DAT *pMVar1;
  uint *puVar2;
  int *piVar3;
  
  pMVar1 = MapObjGetDat__Fii(type,id);
  if (pMVar1 == (MAPOBJ_DAT *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    if (pMVar1->obj_hdl != (void *)0x0) {
      puVar2 = (uint *)MapPutGetFlgPtr__FPv(pMVar1->obj_hdl);
      *puVar2 = *puVar2 | 8;
    }
    piVar3 = pMVar1->mdl_addr;
    pMVar1->flg = pMVar1->flg | 1;
  }
  return piVar3;
}

char* MapObjGetModelName(MAPOBJ_DAT *dp) {
  void *pvVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  
  pvVar1 = dp->obj_ptr;
  pcVar3 = (char *)0x0;
  if (pvVar1 != (void *)0x0) {
    iVar2 = dp->stat;
    pcVar3 = (char *)((int)pvVar1 + 8);
    if (iVar2 != 7) {
      if (iVar2 < 8) {
        iVar4 = 3;
        pcVar3 = (char *)((int)pvVar1 + 0xc);
      }
      else {
        iVar4 = 0xb;
      }
      if (iVar2 != iVar4) {
        pcVar3 = (char *)0x0;
      }
    }
  }
  return pcVar3;
}

int MapObjCheckEffect(char *name) {
  char *pcVar1;
  char **ppcVar2;
  int iVar3;
  undefined *puVar4;
  MAPOBJ_EFF *pMVar5;
  MAPOBJ_EFF *pMVar6;
  
  iVar3 = strncmp(name,&DAT_003eef30,4);
  puVar4 = &_heap_size;
  if (iVar3 == 0) {
    pMVar5 = MapObjEffLabel;
    pMVar6 = pMVar5;
    pcVar1 = MapObjEffLabel[0].name;
    while (pcVar1 != (char *)0x0) {
      ppcVar2 = &pMVar5->name;
      pMVar5 = pMVar5 + 1;
      iVar3 = strcmp(*ppcVar2,name);
      if (iVar3 == 0) {
        return pMVar6->id;
      }
      pMVar6 = pMVar6 + 1;
      pcVar1 = pMVar5->name;
    }
    printf("***ERR!! %s(%d):");
    printf("NO_EFF_ID[%s]\n");
    puVar4 = (undefined *)0xfffffffe;
  }
  return (int)puVar4;
}

static int MapObjSetEffect(int label_id, int eff_id, int action, float *rpos, float *rrot) {
  int iVar1;
  
  iVar1 = eff_id;
  switch(eff_id) {
  case 0:
    iVar1 = action;
    if (((MapObjFlg & 1U) == 0) && (iVar1 = eff_id, action != eff_id)) {
      ItemEffectReq__FPfii(rpos,label_id,1);
    }
    break;
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
    if (action != eff_id) {
      SetRDPFire__FPfii(rpos,label_id,eff_id + -1);
    }
    break;
  case 7:
    if (action != eff_id) {
      SetRDPFireMove__FPfT0i(rpos,rrot,label_id);
    }
    break;
  case 8:
    IgEffectButterflyReq__FPf(rpos);
    break;
  case 9:
    if (action != eff_id) {
      SetRDLongFire2__FPfUcffffffffi(rpos,'\0',1.0,1.0,0.0,0.0,1.0,1.0,1.0,-1.0,label_id);
    }
    break;
  case 10:
    if (action != eff_id) {
      EffectRainReq__FPf(rpos);
      EffectSprayReq__FPf(rpos);
      EffectDropOfWaterReq__FPf(rpos);
    }
    break;
  case 0xb:
    if (action != eff_id) {
      EffectTorch2BigFreaReq__FPf(rpos);
    }
    break;
  case 0xc:
    if (action != eff_id) {
      EffectHazeReqId__FPfi(rpos,label_id);
    }
    break;
  case 0xd:
    if (action != eff_id) {
      EffectLeavesFallReq__FPfi(rpos,label_id);
    }
    break;
  default:
    iVar1 = -1;
    break;
  case 0x11:
    if (action != eff_id) {
      EffectManyCandleLoadReq__FPf(rpos);
    }
    break;
  case 0x12:
    if (action != eff_id) {
      EffectModelAlphaChangeReq__Fiiii(label_id,0,MapObjSimiEnd,MapObjSimiTime);
    }
    break;
  case 0x13:
    if (action != eff_id) {
      SetRDPFire__FPfii(rpos,label_id,8);
    }
  }
  return iVar1;
}

static int MapObjDeleteEffect(int label_id, int a_type, int action) {
  int iVar1;
  
  if ((action != -1) && ((uint)a_type < 0x14)) {
                    /* WARNING: Could not recover jumptable at 0x0010d860. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*(code *)(&PTR_LAB_0039edc0)[a_type])(label_id);
    return iVar1;
  }
  return -1;
}

void MapObjSetDrawEffect(MAPOBJ_DAT *dp, int sw) {
	float rpos[4];
	float rrot[4];
	
  void *pvVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int *piVar7;
  int *piVar8;
  float rpos [4];
  float rrot [4];
  
  pvVar1 = dp->obj_ptr;
  piVar8 = (int *)0x0;
  if (pvVar1 != (void *)0x0) {
    piVar8 = (int *)((int)pvVar1 + 0x54);
    if ((dp->stat != 3) && (piVar8 = (int *)0x0, dp->stat == 0xb)) {
      piVar8 = (int *)((int)pvVar1 + 0x54);
    }
  }
  piVar7 = (int *)0x0;
  if (pvVar1 != (void *)0x0) {
    piVar7 = (int *)((int)pvVar1 + 0x58);
    if ((dp->stat != 3) && (piVar7 = (int *)0x0, dp->stat == 0xb)) {
      piVar7 = (int *)((int)pvVar1 + 0x58);
    }
  }
  if (sw == 0) {
    iVar4 = MapObjDeleteEffect__Fiii(*(int *)((int)pvVar1 + 4),*piVar7,*piVar8);
    *piVar8 = iVar4;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if (pvVar1 != (void *)0x0) {
      iVar4 = dp->stat;
      puVar6 = (undefined8 *)((int)pvVar1 + 0x30);
      if (iVar4 != 7) {
        if (iVar4 < 8) {
          iVar3 = 3;
        }
        else {
          iVar3 = 0xb;
          puVar6 = (undefined8 *)((int)pvVar1 + 0x2c);
        }
        if (iVar4 != iVar3) {
          puVar6 = (undefined8 *)0x0;
        }
      }
    }
    pvVar2 = dp->obj_ptr;
    puVar5 = (undefined8 *)0x0;
    if (pvVar2 != (void *)0x0) {
      iVar4 = dp->stat;
      puVar5 = (undefined8 *)((int)pvVar2 + 0x3c);
      if (iVar4 != 7) {
        if (iVar4 < 8) {
          iVar3 = 3;
        }
        else {
          iVar3 = 0xb;
          puVar5 = (undefined8 *)((int)pvVar2 + 0x38);
        }
        if (iVar4 != iVar3) {
          puVar5 = (undefined8 *)0x0;
        }
      }
    }
    rpos._0_8_ = *puVar6;
    rpos[3] = 1.0;
    rpos[2] = *(float *)(puVar6 + 1);
    rrot._0_8_ = *puVar5;
    rrot._8_8_ = ZEXT48(*(uint *)(puVar5 + 1));
    iVar4 = MapObjSetEffect__FiiiPfT3(*(int *)((int)pvVar1 + 4),*piVar7,*piVar8,rpos,rrot);
    *piVar8 = iVar4;
  }
  return;
}

static int MapObjUpdateEffectDraw(int v_flg, MAPOBJ_DAT *dp) {
	int draw_flg;
	
  int iVar1;
  uint sw;
  
  sw = 0;
  switch(v_flg) {
  case 2:
    if (plyr_wrk.cmn_wrk.mode != '\x06') break;
  case 1:
    sw = 1;
    break;
  case 3:
    if (plyr_wrk.cmn_wrk.mode != '\x06') {
      sw = 1;
    }
    break;
  case 4:
    iVar1 = PhotoFlgIsUp__Fv();
    if (iVar1 != 0) {
      sw = 1;
    }
    break;
  case 5:
    iVar1 = PhotoFlgIsUp__Fv();
    sw = (uint)(iVar1 == 0);
  }
  MapObjSetDrawEffect__FP10MAPOBJ_DATi(dp,sw);
  return sw;
}

void MapObjEffCallback() {
  int iVar1;
  void *obj;
  
  iVar1 = GetObjDrawFLG__Fv();
  if (((iVar1 != 0) && ((MapObjFlg & 1U) == 0)) && (iVar1 = CheckIngameMission__Fv(), iVar1 == 0)) {
    obj = MapPutGetNowHdl__Fv();
    iVar1 = MapPutGetWork__FPv(obj);
    ItemEffectDrawOne__Fi(iVar1);
  }
  return;
}

void MapObjItemOff() {
  MapObjFlg = MapObjFlg | 1;
  return;
}

void MapObjItemOn() {
  MapObjFlg = MapObjFlg & 0xfffffffe;
  return;
}

void MapObjNunoCtl(void *pHdl, int iAction, int iActionType) {
	static MAPOBJ_WIND aWindPowerList[2] = {
		/* [0] = */ {
			/* .pow = */ 0.399999976f,
			/* .cycle = */ 120
		},
		/* [1] = */ {
			/* .pow = */ 0.799999952f,
			/* .cycle = */ 60
		}
	};
	
  int iVar1;
  double dVar2;
  float fVar3;
  
  if (iAction != 0) {
    if ((-1 < iAction) && (iAction < 3)) {
                    /* inlined from MapGeom.h */
                    /* end of inlined section */
      iVar1 = (iActionType & 7U) * 0x2d;
      fVar3 = (float)iVar1;
                    /* inlined from MapGeom.h */
      if (180.0 <= fVar3) {
        dVar2 = ((double)(fVar3 - 180.0) * DAT_0039ee28) / DAT_0039ee30 - DAT_0039ee28;
      }
      else {
        dVar2 = ((double)iVar1 * DAT_0039ee38) / DAT_0039ee40;
      }
      acsChodoSetWind__Fiffi
                ((int)pHdl,(float)dVar2,(float)MapObjEffLabel[iAction + 0x14].name,
                 MapObjEffLabel[iAction + 0x14].id);
    }
    return;
  }
  acsChodoResetWind__Fi((int)pHdl);
  return;
}

int MapObjBoneCtl(int iFurnID, int action, int a_type) {
	float pow;
	
  if (action == 0) {
    acsRopeMoveStop__FUi(iFurnID);
  }
  else if (action == 1) {
    acsRopeMoveRequest__FUiUcf(iFurnID,'\x01',(float)a_type / 100.0);
  }
  return 0;
}

static void MapObjUpdateAnim(int anim_id, void *hdl, MDAT_OBJ *op) {
  int a_type;
  ushort uVar1;
  uint uVar2;
  
  a_type = op->ActionType;
  if (-1 < a_type) {
    if (op->ModelName[1] == '5') {
      MapObjBoneCtl__Fiii((op->head).labelID,op->Action,a_type);
      uVar2 = op->ActionType;
    }
    else if (op->ModelName[1] == '9') {
      MapObjNunoCtl__FPvii(hdl,op->Action,a_type);
      uVar2 = op->ActionType;
    }
    else {
      uVar2 = op->Action;
      if ((int)uVar2 < 6) {
        if (anim_id < 0) {
          return;
        }
        uVar1 = MapAnimGetFlg__Fi(anim_id);
        if ((uVar1 & 0x40) != 0) {
          return;
        }
        uVar2 = op->Action;
      }
      if (uVar2 < 7) {
                    /* WARNING: Could not recover jumptable at 0x0010de78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&PTR_LAB_0039ee60)[uVar2])();
        return;
      }
      uVar2 = op->ActionType;
    }
    op->ActionType = ~uVar2;
  }
  return;
}

void MapObjUpdateFlg(void *hdl, int v_flg) {
	int *draw_flg;
	
  uint *puVar1;
  uint uVar2;
  
  if (hdl != (void *)0x0) {
    puVar1 = (uint *)MapPutGetFlgPtr__FPv(hdl);
    *puVar1 = *puVar1 & 0xfffffc37;
    switch(v_flg) {
    case 0:
      uVar2 = *puVar1 | 8;
      break;
    default:
      goto switchD_0010e0c8_caseD_1;
    case 2:
      uVar2 = *puVar1 | 0x80;
      break;
    case 3:
      uVar2 = *puVar1 | 0x40;
      break;
    case 4:
      uVar2 = *puVar1 | 0x200;
      break;
    case 5:
      uVar2 = *puVar1 | 0x100;
    }
    *puVar1 = uVar2;
  }
switchD_0010e0c8_caseD_1:
  return;
}

void MapObjProc() {
	int i;
	int j;
	int flg;
	MAPOBJ_DAT *dp;
	char *m_name;
	int ex_flg;
	int d_flg;
	MDAT_OBJ *mp;
	LOOK_AT_PARAM param;
	
  MDAT_OBJ *op;
  bool bVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  MAPOBJ_HEAD *pMVar5;
  char *__s1;
  int iVar6;
  void *pvVar7;
  MAPOBJ_DAT *dp;
  int *piVar8;
  int *piVar9;
  int buff_id;
  float fVar10;
  _LOOK_AT_PARAM local_b0;
  _LOOK_AT_PARAM param;
  
  buff_id = 0;
  do {
    iVar4 = MapLoadCheckDrawFlg__Fi(buff_id);
    fVar2 = DAT_003ed83c;
    if (iVar4 != 0) {
      pMVar5 = MapObjGetListPtr__Fi(buff_id);
      fVar3 = DAT_003ed844;
      dp = pMVar5->dat;
      iVar4 = 299;
      fVar10 = DAT_003ed840;
      do {
        if (((dp->obj_ptr != (void *)0x0) && (iVar6 = dp->stat, iVar6 != 0xb)) && (iVar6 != 7)) {
          piVar8 = (int *)((int)dp->obj_ptr + 0x50);
          bVar1 = (dp->flg & 1U) != 0;
          piVar9 = piVar8;
          if ((iVar6 != 3) && (piVar9 = (int *)0x0, iVar6 == 0xb)) {
            piVar9 = piVar8;
          }
          if ((piVar9 != (int *)0x0) && (bVar1 = true, *piVar9 != 0)) {
            bVar1 = false;
          }
          if (!bVar1) {
            dp->flg = dp->flg & 0xfffffffe;
          }
          bVar1 = false;
          __s1 = MapObjGetModelName__FP10MAPOBJ_DAT(dp);
          if ((*__s1 == 'f') && (__s1[1] == '1')) {
            if (*piVar9 == 0) {
              bVar1 = true;
            }
            else {
              MapObjUpdateFlg__FPvi(dp->obj_hdl,*piVar9);
              bVar1 = true;
            }
          }
          iVar6 = strncmp(__s1,&DAT_003eef30,4);
          if (iVar6 == 0) {
            iVar6 = *piVar9;
LAB_0010e2e0:
            iVar6 = MapObjUpdateEffectDraw__FiP10MAPOBJ_DAT(iVar6,dp);
            pvVar7 = dp->obj_ptr;
            if (*(int *)((int)pvVar7 + 0x58) == 0) {
              if (iVar6 == 0) {
                param.pos[0] = *(float *)((int)pvVar7 + 0x30);
                param.pos[1] = *(float *)((int)pvVar7 + 0x34);
                param.pos[2] = *(float *)((int)pvVar7 + 0x38);
                param.eye_spd = fVar2;
                param.chest_spd = fVar3;
                param.head_spd = fVar10;
                SisNeckRegisterTarget__FP14_LOOK_AT_PARAM26_LOOK_TARGET_PRIORITY_MAYUf
                          (&param,LTP_MAYU_ITEM,DAT_003ed84c);
                pvVar7 = dp->obj_save;
              }
              else {
                pvVar7 = dp->obj_save;
              }
            }
            else {
              pvVar7 = dp->obj_save;
            }
          }
          else {
            if (bVar1) {
              iVar6 = *piVar9;
              goto LAB_0010e2e0;
            }
            MapObjUpdateFlg__FPvi(dp->obj_hdl,*piVar9);
            if (dp->stat == 3) {
              op = (MDAT_OBJ *)dp->obj_ptr;
              MapObjUpdateAnim__FiPvP8MDAT_OBJ(dp->anim_id,dp->obj_hdl,op);
              local_b0.pos[0] = op->Pos[0];
              local_b0.pos[1] = op->Pos[1];
              local_b0.pos[2] = op->Pos[2];
              local_b0.eye_spd = fVar2;
              local_b0.chest_spd = fVar3;
              local_b0.head_spd = fVar10;
              SisNeckRegisterTarget__FP14_LOOK_AT_PARAM26_LOOK_TARGET_PRIORITY_MAYUf
                        (&local_b0,LTP_MAYU_OBJ,DAT_003ed848);
              pvVar7 = dp->obj_save;
            }
            else {
              pvVar7 = dp->obj_save;
            }
          }
          if (pvVar7 != (void *)0x0) {
            MapSaveCopyDat__FPvT0(pvVar7,dp->obj_ptr);
          }
        }
        iVar4 = iVar4 + -1;
        dp = dp + 1;
      } while (-1 < iVar4);
    }
    buff_id = buff_id + 1;
    if (1 < buff_id) {
      MapSpProc__Fv();
      return;
    }
  } while( true );
}

void MapObjInit() {
  MapObjRegInit__Fv();
  MapObjFlg = 0;
  return;
}
