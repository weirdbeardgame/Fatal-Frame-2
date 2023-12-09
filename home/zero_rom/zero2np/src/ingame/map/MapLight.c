// STATUS: NOT STARTED

#include "MapLight.h"

typedef struct {
	int max;
	int frame[4];
} MAPMEI_FRAME;

typedef struct {
	int flg;
	G3DLIGHT *addr;
	GRA3DLIGHTSTATUS *st_addr;
	float power;
} MAP_LIGHT_SORT;

typedef struct {
	int flg;
	G3DLIGHT ldat;
	GRA3DLIGHTSTATUS lstat;
} MAP_LIGHT_DAT;

typedef struct {
	int iFlg;
	float fPow;
} MAP_LIGHT_HEAD;

typedef struct {
	MAPMEI_FRAME *top_dat_p;
	MAPMEI_FRAME *now_dat_p;
	int stat;
	int frame;
} MAPMEI_HEAD;

typedef struct {
	G3DLIGHT *lip;
	G3DLIGHT m_light;
} MAPMEI_LIGHTONE;

static MAPMEI_FRAME MapMeiList[25] = {
	/* [0] = */ {
		/* .max = */ -1,
		/* .frame = */ {
			/* [0] = */ -1,
			/* [1] = */ -1,
			/* [2] = */ -1,
			/* [3] = */ -1
		}
	},
	/* [1] = */ {
		/* .max = */ 100,
		/* .frame = */ {
			/* [0] = */ 2,
			/* [1] = */ 1,
			/* [2] = */ 10,
			/* [3] = */ 1
		}
	},
	/* [2] = */ {
		/* .max = */ 70,
		/* .frame = */ {
			/* [0] = */ 7,
			/* [1] = */ 1,
			/* [2] = */ 15,
			/* [3] = */ 30
		}
	},
	/* [3] = */ {
		/* .max = */ 100,
		/* .frame = */ {
			/* [0] = */ 2,
			/* [1] = */ 1,
			/* [2] = */ 10,
			/* [3] = */ 1
		}
	},
	/* [4] = */ {
		/* .max = */ 50,
		/* .frame = */ {
			/* [0] = */ 2,
			/* [1] = */ 1,
			/* [2] = */ 7,
			/* [3] = */ 15
		}
	},
	/* [5] = */ {
		/* .max = */ 100,
		/* .frame = */ {
			/* [0] = */ 2,
			/* [1] = */ 1,
			/* [2] = */ 10,
			/* [3] = */ 5
		}
	},
	/* [6] = */ {
		/* .max = */ 70,
		/* .frame = */ {
			/* [0] = */ 2,
			/* [1] = */ 1,
			/* [2] = */ 5,
			/* [3] = */ 1
		}
	},
	/* [7] = */ {
		/* .max = */ 100,
		/* .frame = */ {
			/* [0] = */ 2,
			/* [1] = */ 1,
			/* [2] = */ 10,
			/* [3] = */ 5
		}
	},
	/* [8] = */ {
		/* .max = */ 80,
		/* .frame = */ {
			/* [0] = */ 2,
			/* [1] = */ 1,
			/* [2] = */ 5,
			/* [3] = */ 30
		}
	},
	/* [9] = */ {
		/* .max = */ -1,
		/* .frame = */ {
			/* [0] = */ -1,
			/* [1] = */ -1,
			/* [2] = */ -1,
			/* [3] = */ -1
		}
	},
	/* [10] = */ {
		/* .max = */ 100,
		/* .frame = */ {
			/* [0] = */ 10,
			/* [1] = */ 20,
			/* [2] = */ 10,
			/* [3] = */ 20
		}
	},
	/* [11] = */ {
		/* .max = */ 100,
		/* .frame = */ {
			/* [0] = */ 10,
			/* [1] = */ 20,
			/* [2] = */ 10,
			/* [3] = */ 20
		}
	},
	/* [12] = */ {
		/* .max = */ 100,
		/* .frame = */ {
			/* [0] = */ 10,
			/* [1] = */ 20,
			/* [2] = */ 10,
			/* [3] = */ 20
		}
	},
	/* [13] = */ {
		/* .max = */ 100,
		/* .frame = */ {
			/* [0] = */ 10,
			/* [1] = */ 20,
			/* [2] = */ 10,
			/* [3] = */ 20
		}
	},
	/* [14] = */ {
		/* .max = */ -1,
		/* .frame = */ {
			/* [0] = */ -1,
			/* [1] = */ -1,
			/* [2] = */ -1,
			/* [3] = */ -1
		}
	},
	/* [15] = */ {
		/* .max = */ 100,
		/* .frame = */ {
			/* [0] = */ 10,
			/* [1] = */ 20,
			/* [2] = */ 10,
			/* [3] = */ 20
		}
	},
	/* [16] = */ {
		/* .max = */ 100,
		/* .frame = */ {
			/* [0] = */ 10,
			/* [1] = */ 20,
			/* [2] = */ 10,
			/* [3] = */ 20
		}
	},
	/* [17] = */ {
		/* .max = */ 100,
		/* .frame = */ {
			/* [0] = */ 10,
			/* [1] = */ 20,
			/* [2] = */ 10,
			/* [3] = */ 20
		}
	},
	/* [18] = */ {
		/* .max = */ 100,
		/* .frame = */ {
			/* [0] = */ 10,
			/* [1] = */ 20,
			/* [2] = */ 10,
			/* [3] = */ 20
		}
	},
	/* [19] = */ {
		/* .max = */ -1,
		/* .frame = */ {
			/* [0] = */ -1,
			/* [1] = */ -1,
			/* [2] = */ -1,
			/* [3] = */ -1
		}
	},
	/* [20] = */ {
		/* .max = */ 100,
		/* .frame = */ {
			/* [0] = */ 10,
			/* [1] = */ 20,
			/* [2] = */ 10,
			/* [3] = */ 20
		}
	},
	/* [21] = */ {
		/* .max = */ 100,
		/* .frame = */ {
			/* [0] = */ 10,
			/* [1] = */ 20,
			/* [2] = */ 10,
			/* [3] = */ 20
		}
	},
	/* [22] = */ {
		/* .max = */ 100,
		/* .frame = */ {
			/* [0] = */ 10,
			/* [1] = */ 20,
			/* [2] = */ 10,
			/* [3] = */ 20
		}
	},
	/* [23] = */ {
		/* .max = */ 100,
		/* .frame = */ {
			/* [0] = */ 10,
			/* [1] = */ 20,
			/* [2] = */ 10,
			/* [3] = */ 20
		}
	},
	/* [24] = */ {
		/* .max = */ -1000,
		/* .frame = */ {
			/* [0] = */ -1,
			/* [1] = */ -1,
			/* [2] = */ -1,
			/* [3] = */ -1
		}
	}
};

float MapLightPower = 0.999999f;

float MapLightIntens[2] = {
	/* [0] = */ 0.799999952f,
	/* [1] = */ 0.799999952f
};

float MapLightDiff[2] = {
	/* [0] = */ 0.5f,
	/* [1] = */ 0.5f
};

static MAPMEI_HEAD *MapMeiNowHeadPtr = NULL;
static GRA3DLIGHTDATA MapMeiWork[2];
unsigned char G3DLIGHT type_info node[8];
unsigned char GRA3DLIGHTSTATUS type_info node[8];
static MAPMEI_HEAD MapMeiHead[4];
static MAPMEI_LIGHTONE MapMeiLightOneWork[39];

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x39e6f8;
	
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf16GRA3DLIGHTSTATUS(0x3eee08,_max);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf16GRA3DLIGHTSTATUS(0x3eee10,_max);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf16GRA3DLIGHTSTATUS(0x39e740,_max);
  }
  return (uint **)0x0;
}

void MapLightLed(GRA3DLIGHTDATA *light) {
	int i;
	
  int iVar1;
  int iVar2;
  G3DLIGHT *pGVar3;
  
  pGVar3 = (light->aLight).field0_0x0.m_aData + 3;
  iVar1 = 3;
  do {
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
    iVar2 = iVar1 + 1;
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(iVar1,0x27);
    pGVar3->vDiffuse[0] = 255.0;
                    /* end of inlined section */
    pGVar3 = pGVar3 + 1;
    iVar1 = iVar2;
  } while (iVar2 < 0x25);
  return;
}

void MapLightPreRenderObj(void *hdl, int buff_id) {
  GRA3DLIGHTDATA *pLightData;
  uint *mdl_addr;
  
  pLightData = MapDrawGetLightPtr4BuffID__Fi(buff_id);
  gra3dSetLightData__FPC14GRA3DLIGHTDATAPCf(pLightData,(float *)0x0);
  mdl_addr = MapPutGetModelPtr__FPv(hdl);
  MapLightSetLight__FiPiPvi(buff_id,(int *)mdl_addr,hdl,0);
  return;
}

void MapLightPreRenderObj2(void *hdl, int room_no) {
  int buff_id;
  
  buff_id = MapLoadGetBuffID__Fi(room_no);
  MapLightPreRenderObj__FPvi(hdl,buff_id);
  return;
}

void MapLightSetPlayerOnly() {
  int iLightId;
  
  gra3dLightEnableAll__Fi(0);
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_relops.h */
                    /* end of inlined section */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_relops.h */
  if (plyr_wrk.fl.Type != G3DLIGHTTYPE_FORCE_DWORD) {
                    /* end of inlined section */
    iLightId = 0x13;
    if (plyr_wrk.fl.Type != G3DLIGHT_POINT) {
      iLightId = 0x26;
    }
    gra3dLightEnable__Fii(iLightId,1);
  }
  if (plyr_wrk.fl2.Type == G3DLIGHT_POINT) {
    gra3dLightEnable__Fii(0x14,1);
  }
  return;
}

void MapLightSetPlayerReal() {
	G3DLIGHT L;
	float *pv0;
	float sc;
	
  int iLightId;
  undefined auVar1 [16];
  undefined auVar2 [16];
  G3DLIGHT L;
  G3DLIGHT local_90;
  
                    /* inlined from ../../graphics/graph3d/g3dLight.h */
                    /* end of inlined section */
  if (plyr_wrk.fl.Type == G3DLIGHTTYPE_FORCE_DWORD) {
    gra3dLightEnable__Fii(0x26,0);
    gra3dLightEnable__Fii(0x13,0);
  }
  else {
    iLightId = 0x13;
    if (plyr_wrk.fl.Type != G3DLIGHT_POINT) {
      iLightId = 0x26;
    }
                    /* inlined from ../../graphics/graph3d/g3dLight.h */
    L.vDiffuse[0] = plyr_wrk.fl.vDiffuse[0];
    L.vDiffuse[1] = plyr_wrk.fl.vDiffuse[1];
    L.vDiffuse[2] = plyr_wrk.fl.vDiffuse[2];
    L.vDiffuse[3] = plyr_wrk.fl.vDiffuse[3];
    L.vSpecular[0] = plyr_wrk.fl.vSpecular[0];
    L.vSpecular[1] = plyr_wrk.fl.vSpecular[1];
    L.vSpecular[2] = plyr_wrk.fl.vSpecular[2];
    L.vSpecular[3] = plyr_wrk.fl.vSpecular[3];
    L.vAmbient[0] = plyr_wrk.fl.vAmbient[0];
    L.vAmbient[1] = plyr_wrk.fl.vAmbient[1];
    L.vAmbient[2] = plyr_wrk.fl.vAmbient[2];
    L.vAmbient[3] = plyr_wrk.fl.vAmbient[3];
    L.vPosition[0] = plyr_wrk.fl.vPosition[0];
    L.vPosition[1] = plyr_wrk.fl.vPosition[1];
    L.vPosition[2] = plyr_wrk.fl.vPosition[2];
    L.vPosition[3] = plyr_wrk.fl.vPosition[3];
    L.vDirection._0_8_ = CONCAT44(plyr_wrk.fl.vDirection[1],plyr_wrk.fl.vDirection[0]);
    L.vDirection._0_12_ = CONCAT48(plyr_wrk.fl.vDirection[2],L.vDirection._0_8_);
    L.vDirection[3] = plyr_wrk.fl.vDirection[3];
    L.Type = plyr_wrk.fl.Type;
    L.fAngleInside = plyr_wrk.fl.fAngleInside;
    L.fAngleOutside = plyr_wrk.fl.fAngleOutside;
    L.fMaxRange = plyr_wrk.fl.fMaxRange;
    L.fMinRange = plyr_wrk.fl.fMinRange;
    L.fFalloff = plyr_wrk.fl.fFalloff;
    L.afPad0[0] = plyr_wrk.fl.afPad0[0];
    L.afPad0[1] = plyr_wrk.fl.afPad0[1];
                    /* end of inlined section */
                    /* inlined from ../../graphics/graph3d/g3dxVu0.h */
                    /* end of inlined section */
    if (plyr_wrk.fl.Type == G3DLIGHT_SPOT) {
                    /* inlined from ../../graphics/graph3d/g3dxVu0.h */
      auVar2 = _qmtc2(0xbf800000);
      auVar1 = _lqc2((undefined  [16])L.vDirection);
      auVar1 = _vmulbc(auVar1,auVar2);
      L.vDirection = (float  [4])_sqc2(auVar1);
    }
                    /* end of inlined section */
    gra3dSetLight__FiPC8G3DLIGHT(iLightId,&L);
    gra3dLightEnable__Fii(iLightId,1);
  }
                    /* end of inlined section */
  if (plyr_wrk.fl2.Type == G3DLIGHT_POINT) {
                    /* inlined from ../../graphics/graph3d/g3dLight.h */
    local_90.vDiffuse[0] = plyr_wrk.fl2.vDiffuse[0];
    local_90.vDiffuse[1] = plyr_wrk.fl2.vDiffuse[1];
    local_90.vDiffuse[2] = plyr_wrk.fl2.vDiffuse[2];
    local_90.vDiffuse[3] = plyr_wrk.fl2.vDiffuse[3];
    local_90.vSpecular[0] = plyr_wrk.fl2.vSpecular[0];
    local_90.vSpecular[1] = plyr_wrk.fl2.vSpecular[1];
    local_90.vSpecular[2] = plyr_wrk.fl2.vSpecular[2];
    local_90.vSpecular[3] = plyr_wrk.fl2.vSpecular[3];
    local_90.vAmbient[0] = plyr_wrk.fl2.vAmbient[0];
    local_90.vAmbient[1] = plyr_wrk.fl2.vAmbient[1];
    local_90.vAmbient[2] = plyr_wrk.fl2.vAmbient[2];
    local_90.vAmbient[3] = plyr_wrk.fl2.vAmbient[3];
    local_90.vPosition[0] = plyr_wrk.fl2.vPosition[0];
    local_90.vPosition[1] = plyr_wrk.fl2.vPosition[1];
    local_90.vPosition[2] = plyr_wrk.fl2.vPosition[2];
    local_90.vPosition[3] = plyr_wrk.fl2.vPosition[3];
    local_90.vDirection[0] = plyr_wrk.fl2.vDirection[0];
    local_90.vDirection[1] = plyr_wrk.fl2.vDirection[1];
    local_90.vDirection[2] = plyr_wrk.fl2.vDirection[2];
    local_90.vDirection[3] = plyr_wrk.fl2.vDirection[3];
    local_90.Type = plyr_wrk.fl2.Type;
    local_90.fAngleInside = plyr_wrk.fl2.fAngleInside;
    local_90.fAngleOutside = plyr_wrk.fl2.fAngleOutside;
    local_90.fMaxRange = plyr_wrk.fl2.fMaxRange;
    local_90.fMinRange = plyr_wrk.fl2.fMinRange;
    local_90.fFalloff = plyr_wrk.fl2.fFalloff;
    local_90.afPad0[0] = plyr_wrk.fl2.afPad0[0];
    local_90.afPad0[1] = plyr_wrk.fl2.afPad0[1];
                    /* end of inlined section */
    gra3dSetLight__FiPC8G3DLIGHT(0x14,&local_90);
    gra3dLightEnable__Fii(0x14,1);
  }
  else {
    gra3dLightEnable__Fii(0x14,0);
  }
  return;
}

void MapLightMakeRoomReal(GRA3DLIGHTDATA *LD, GRA3DLIGHTDATA *mst) {
	GRA3DLIGHTID flashlightId;
	
  float fVar1;
  float fVar2;
  float fVar3;
  GRA3DLIGHTDATA *pGVar4;
  undefined8 uVar5;
  GRA3DLIGHTDATA *pGVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  GRA3DLIGHTSTATUS *pGVar9;
  G3DLIGHT *pLight;
  int iVar10;
  undefined auVar11 [16];
  undefined auVar12 [16];
  
  pGVar6 = mst + 1;
  pGVar4 = LD;
  iVar10 = 0x13;
  if (plyr_wrk.fl.Type != G3DLIGHT_POINT) {
    iVar10 = 0x26;
  }
  do {
    uVar5 = *(undefined8 *)(mst->vAmbient + 2);
    uVar7 = *(undefined8 *)(mst->aLight).field0_0x0.m_aData[0].vDiffuse;
    uVar8 = *(undefined8 *)((mst->aLight).field0_0x0.m_aData[0].vDiffuse + 2);
    *(undefined8 *)pGVar4->vAmbient = *(undefined8 *)mst->vAmbient;
    *(undefined8 *)(pGVar4->vAmbient + 2) = uVar5;
    *(undefined8 *)(pGVar4->aLight).field0_0x0.m_aData[0].vDiffuse = uVar7;
    *(undefined8 *)((pGVar4->aLight).field0_0x0.m_aData[0].vDiffuse + 2) = uVar8;
    mst = (GRA3DLIGHTDATA *)(mst->aLight).field0_0x0.m_aData[0].vSpecular;
    pGVar4 = (GRA3DLIGHTDATA *)(pGVar4->aLight).field0_0x0.m_aData[0].vSpecular;
  } while (mst != pGVar6);
  if (plyr_wrk.fl.Type == G3DLIGHTTYPE_FORCE_DWORD) {
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z16GRA3DLIGHTSTATUS_UiUi_PX01(iVar10,0x27);
    pGVar9 = (LD->aStatus).field0_0x0.m_aData + iVar10;
    pGVar9->bEnable = 0;
    _fixed_array_verifyrange__H1Z16GRA3DLIGHTSTATUS_UiUi_PX01(iVar10,0x27);
    pGVar9->bEmulateToDirectionalLight = 0;
  }
  else {
    _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(iVar10,0x27);
    fVar2 = plyr_wrk.fl.vDiffuse[3];
    fVar1 = plyr_wrk.fl.vDiffuse[2];
    uVar5 = plyr_wrk.fl.vDiffuse._0_8_;
                    /* inlined from ../../graphics/graph3d/g3dLight.h */
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
    pLight = (G3DLIGHT *)(LD->vAmbient + iVar10 * 0x1c + 4);
                    /* inlined from ../../graphics/graph3d/g3dLight.h */
    pLight->vDiffuse[0] = (float)plyr_wrk.fl.vDiffuse._0_8_;
    pLight->vDiffuse[1] = SUB84(uVar5,4);
    pLight->vDiffuse[2] = fVar1;
    pLight->vDiffuse[3] = fVar2;
    fVar3 = plyr_wrk.fl.vSpecular[3];
    fVar2 = plyr_wrk.fl.vSpecular[2];
    fVar1 = plyr_wrk.fl.vSpecular[1];
    pLight->vSpecular[0] = plyr_wrk.fl.vSpecular[0];
    pLight->vSpecular[1] = fVar1;
    pLight->vSpecular[2] = fVar2;
    pLight->vSpecular[3] = fVar3;
    fVar3 = plyr_wrk.fl.vAmbient[3];
    fVar2 = plyr_wrk.fl.vAmbient[2];
    fVar1 = plyr_wrk.fl.vAmbient[1];
    pLight->vAmbient[0] = plyr_wrk.fl.vAmbient[0];
    pLight->vAmbient[1] = fVar1;
    pLight->vAmbient[2] = fVar2;
    pLight->vAmbient[3] = fVar3;
    fVar3 = plyr_wrk.fl.vPosition[3];
    fVar2 = plyr_wrk.fl.vPosition[2];
    fVar1 = plyr_wrk.fl.vPosition[1];
    pLight->vPosition[0] = plyr_wrk.fl.vPosition[0];
    pLight->vPosition[1] = fVar1;
    pLight->vPosition[2] = fVar2;
    pLight->vPosition[3] = fVar3;
    fVar3 = plyr_wrk.fl.vDirection[3];
    fVar2 = plyr_wrk.fl.vDirection[2];
    fVar1 = plyr_wrk.fl.vDirection[1];
    pLight->vDirection[0] = plyr_wrk.fl.vDirection[0];
    pLight->vDirection[1] = fVar1;
    pLight->vDirection[2] = fVar2;
    pLight->vDirection[3] = fVar3;
    fVar3 = plyr_wrk.fl.fMaxRange;
    fVar2 = plyr_wrk.fl.fAngleOutside;
    fVar1 = plyr_wrk.fl.fAngleInside;
    pLight->Type = plyr_wrk.fl.Type;
    pLight->fAngleInside = fVar1;
    pLight->fAngleOutside = fVar2;
    pLight->fMaxRange = fVar3;
    fVar3 = plyr_wrk.fl.afPad0[1];
    fVar2 = plyr_wrk.fl.afPad0[0];
    fVar1 = plyr_wrk.fl.fFalloff;
    pLight->fMinRange = plyr_wrk.fl.fMinRange;
    pLight->fFalloff = fVar1;
    pLight->afPad0[0] = fVar2;
    pLight->afPad0[1] = fVar3;
                    /* end of inlined section */
    gra3dSetLightIntens__FPC8G3DLIGHTf
              (pLight,pLight->afPad0[0] * MapLightIntens[plyr_wrk.cmn_wrk.mode == '\x06']);
                    /* inlined from ../../graphics/graph3d/g3dxVu0.h */
    auVar12 = _qmtc2(MapLightDiff[plyr_wrk.cmn_wrk.mode == '\x06']);
    auVar11 = _lqc2(*(undefined (*) [16])pLight->vDiffuse);
    auVar11 = _vmulbc(auVar11,auVar12);
    auVar11 = _sqc2(auVar11);
    *(undefined (*) [16])pLight->vDiffuse = auVar11;
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z16GRA3DLIGHTSTATUS_UiUi_PX01(iVar10,0x27);
    pGVar9 = (LD->aStatus).field0_0x0.m_aData + iVar10;
    pGVar9->bEnable = 1;
    _fixed_array_verifyrange__H1Z16GRA3DLIGHTSTATUS_UiUi_PX01(iVar10,0x27);
    pGVar9->bEmulateToDirectionalLight = 1;
  }
  return;
}

void MapLightSetLight(int buff_id, int *mdl_addr, void *obj_hdl, int pre_flg) {
  float (*mat) [4] [4];
  uint *puVar1;
  GRA3DLIGHTDATA *light_ptr;
  
  if (pre_flg == 0) {
    puVar1 = (uint *)MapPutGetFlgPtr__FPv(obj_hdl);
    *puVar1 = *puVar1 | 0x20;
    mat = MapPutGetMatrixPtr__FPv(obj_hdl);
    gra3dExecPrelight__FP13SGDFILEHEADERPA3_Cf((SGDFILEHEADER *)mdl_addr,(float (*) [4])mat);
    return;
  }
  if (pre_flg == 1) {
    puVar1 = (uint *)MapPutGetFlgPtr__FPv(obj_hdl);
    *puVar1 = *puVar1 & 0xffffffdf;
    light_ptr = MapDrawGetLightPtr4BuffID__Fi(buff_id);
    MapPutSetLitPtr__FPvP14GRA3DLIGHTDATA(obj_hdl,light_ptr);
  }
  return;
}

static void MapLigtPreRenderOne(int buff_id, char *name) {
	static char __FUNCTION__[20] = {
		/* [0] = */ 77,
		/* [1] = */ 97,
		/* [2] = */ 112,
		/* [3] = */ 76,
		/* [4] = */ 105,
		/* [5] = */ 103,
		/* [6] = */ 116,
		/* [7] = */ 80,
		/* [8] = */ 114,
		/* [9] = */ 101,
		/* [10] = */ 82,
		/* [11] = */ 101,
		/* [12] = */ 110,
		/* [13] = */ 100,
		/* [14] = */ 101,
		/* [15] = */ 114,
		/* [16] = */ 79,
		/* [17] = */ 110,
		/* [18] = */ 101,
		/* [19] = */ 0
	};
	short int *flg;
	SGDFILEHEADER *pSGDHead;
	
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  MLOAD_HEAD *hp;
  SGDFILEHEADER *pSGDTop;
  
  iVar2 = MapObjCheckEffect__FPc(name);
  if ((((iVar2 == -1) && (iVar2 = strcmp(name,&DAT_003eee58), iVar2 != 0)) &&
      (puVar3 = FurnCtlGetFlgPtr__FiPc(buff_id,name), puVar3 != (ushort *)0x0)) &&
     (((*puVar3 & 2) == 0 && (iVar2 = MapObjGetLightFlg__FPc(name), iVar2 == 0)))) {
    hp = MapLoadGetHeadPtr__Fi(buff_id);
    iVar2 = MapMeiCheck__FP10MLOAD_HEAD(hp);
    if (iVar2 == 0) {
      pSGDTop = (SGDFILEHEADER *)FurnCtlGetModelAddr__FiPc(buff_id,name);
      if (pSGDTop == (SGDFILEHEADER *)0x0) {
        printf("***ERR!! %s(%d):");
        printf("NO_SGD_MODEL[%s]\n");
        SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
        PrintAssertReal("ERR NO MODEL ADDR");
        return;
      }
      _gra3dDrawSGD__FP13SGDFILEHEADER13SGDRENDERTYPEP13SGDCOORDINATEi
                (pSGDTop,SRT_PRELIGHTING,(SGDCOORDINATE *)0x0,-1);
      uVar1 = *puVar3;
      pSGDTop->pCoord->bCalc = 0;
      *puVar3 = uVar1 | 2;
    }
  }
  return;
}

static void MapLightPreRenderType(int buff_id, int reg_id, int type) {
	MB_OUT_SECTION *mp;
	
  ushort uVar1;
  MB_OUT_SECTION *pMVar2;
  MB_OUT_SECTION *name;
  
  RegDatGetStPtrStart__Fii(reg_id,type);
LAB_0010a058:
  while( true ) {
    pMVar2 = RegDatGetNextStPtr__Fi(reg_id);
    name = pMVar2 + 1;
    if (pMVar2 == (MB_OUT_SECTION *)0x0) {
      return;
    }
    uVar1 = pMVar2->SecStID;
    if (uVar1 == 7) break;
    if (uVar1 < 8) goto code_r0x0010a014;
    if (uVar1 == 0xb) {
      MapLigtPreRenderOne__FiPc(buff_id,(char *)(pMVar2 + 1));
    }
  }
  goto LAB_0010a03c;
code_r0x0010a014:
  if (uVar1 == 3) {
    name = (MB_OUT_SECTION *)&pMVar2[1].labelID;
LAB_0010a03c:
    MapLigtPreRenderOne__FiPc(buff_id,(char *)name);
  }
  goto LAB_0010a058;
}

void MapLightRePreRender(int buff_id, int reg_id) {
  FurnCtlDeleteDrawFlgAll__Fi(buff_id);
  MapLightPreRenderType__Fiii(buff_id,reg_id,7);
  MapLightPreRenderType__Fiii(buff_id,reg_id,3);
  MapLightPreRenderType__Fiii(buff_id,reg_id,0xb);
  return;
}

static float MapLightGetPower(G3DLIGHT *pLightDat, float *vChrPos) {
	float fPower;
	float fLen;
	
  undefined in_vf1 [16];
  undefined auVar1 [16];
  
                    /* inlined from ../../graphics/graph3d/g3dxVu0.h */
  auVar1 = _lqc2(*(undefined (*) [16])pLightDat->vDiffuse);
  auVar1 = _vmul(auVar1,auVar1);
  _vaddabc(auVar1,auVar1);
  _vmaddbc(in_vf1,auVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

static int MapLightSetSortDat(int l_num, int st, int reg_cnt, float *pos, MAP_LIGHT_SORT *llist, GRA3DLIGHTDATA *lp) {
	int j;
	
  int iVar1;
  MAP_LIGHT_SORT *pMVar2;
  G3DLIGHT *pLightDat;
  GRA3DLIGHTSTATUS *pGVar3;
  float fVar4;
  
  iVar1 = st + reg_cnt;
  if (st < iVar1) {
    pGVar3 = (lp->aStatus).field0_0x0.m_aData + st;
    pMVar2 = llist + l_num;
    pLightDat = (G3DLIGHT *)(lp->vAmbient + st * 0x1c + 4);
    do {
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z16GRA3DLIGHTSTATUS_UiUi_PX01(st,0x27);
      if (pGVar3->bEnable != 0) {
        l_num = l_num + 1;
        _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(st,0x27);
        pMVar2->addr = pLightDat;
        _fixed_array_verifyrange__H1Z16GRA3DLIGHTSTATUS_UiUi_PX01(st,0x27);
        pMVar2->st_addr = pGVar3;
        _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(st,0x27);
        fVar4 = MapLightGetPower__FP8G3DLIGHTPf(pLightDat,pos);
        pMVar2->power = fVar4;
                    /* end of inlined section */
        pMVar2 = pMVar2 + 1;
      }
      st = st + 1;
      pLightDat = pLightDat + 1;
      pGVar3 = pGVar3 + 1;
    } while (st < iVar1);
  }
  return l_num;
}

void MapLightSelect(GRA3DLIGHTDATA *pLightMst, float *vPos, int iStart, int iEnd) {
	int i;
	int j;
	MAP_LIGHT_HEAD aFlgList[39];
	int iLightID;
	float fPow;
	
  int iVar1;
  int iVar2;
  int iVar3;
  GRA3DLIGHTSTATUS *pGVar4;
  int iVar5;
  MAP_LIGHT_HEAD *pMVar6;
  G3DLIGHT *pLightDat;
  float fVar7;
  float fVar8;
  MAP_LIGHT_HEAD aFlgList [39];
  
  if (iStart <= iEnd) {
    iVar1 = iStart * 8;
    pGVar4 = (pLightMst->aStatus).field0_0x0.m_aData + iStart;
    pMVar6 = aFlgList + iStart;
    pLightDat = (G3DLIGHT *)(pLightMst->vAmbient + iStart * 0x1c + 4);
    iVar3 = iStart;
    do {
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z16GRA3DLIGHTSTATUS_UiUi_PX01(iVar3,0x27);
      pMVar6->iFlg = (uint)(pGVar4->bEnable == 0);
      pMVar6 = pMVar6 + 1;
      _fixed_array_verifyrange__H1Z16GRA3DLIGHTSTATUS_UiUi_PX01(iVar3,0x27);
      pGVar4->bEnable = 0;
                    /* end of inlined section */
      iVar2 = iVar3 + 1;
      pGVar4 = pGVar4 + 1;
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(iVar3,0x27);
      fVar8 = MapLightGetPower__FP8G3DLIGHTPf(pLightDat,vPos);
                    /* end of inlined section */
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
      *(float *)((int)&aFlgList[0].fPow + iVar1) = fVar8;
                    /* end of inlined section */
      iVar1 = iVar1 + 8;
      pLightDat = pLightDat + 1;
      iVar3 = iVar2;
    } while (iVar2 <= iEnd);
  }
  iVar3 = 0;
  while( true ) {
    iVar1 = -1;
    if (iStart <= iEnd) {
      pMVar6 = aFlgList + iStart;
      fVar8 = -1.0;
      iVar2 = iStart;
      iVar5 = iVar1;
      do {
        fVar7 = fVar8;
        iVar1 = iVar5;
        if ((pMVar6->iFlg != 1) && (fVar7 = pMVar6->fPow, iVar1 = iVar2, pMVar6->fPow <= fVar8)) {
          fVar7 = fVar8;
          iVar1 = iVar5;
        }
        iVar2 = iVar2 + 1;
        pMVar6 = pMVar6 + 1;
        fVar8 = fVar7;
        iVar5 = iVar1;
      } while (iVar2 <= iEnd);
    }
    if (iVar1 < 0) break;
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
    aFlgList[iVar1].iFlg = 1;
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
    iVar3 = iVar3 + 1;
    _fixed_array_verifyrange__H1Z16GRA3DLIGHTSTATUS_UiUi_PX01(iVar1,0x27);
                    /* end of inlined section */
                    /* end of inlined section */
    (pLightMst->aStatus).field0_0x0.m_aData[iVar1].bEnable = 1;
    if (0xd < iVar3) {
      return;
    }
  }
  return;
}

void MapLightSelectEnable(GRA3DLIGHTDATA *pLightMst, float *vPos) {
  MapLightSelect__FP14GRA3DLIGHTDATAPfii(pLightMst,vPos,3,0x12);
  MapLightSelect__FP14GRA3DLIGHTDATAPfii(pLightMst,vPos,0x16,0x25);
  return;
}

static int MapLightMakeDualSub(MAP_LIGHT_DAT *w_light, GRA3DLIGHTDATA *in1, GRA3DLIGHTDATA *in2, int st, int en, float *pos) {
	int i;
	int j;
	int l_num;
	int in_cnt;
	int ret;
	MAP_LIGHT_SORT llist[78];
	MAP_LIGHT_SORT *lsp;
	int reg_cnt;
	
  undefined *puVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  ulong *puVar5;
  uint uVar6;
  MAP_LIGHT_SORT *pMVar7;
  G3DLIGHT *pGVar8;
  ulong *puVar9;
  ulong *puVar10;
  GRA3DLIGHTSTATUS *pGVar11;
  int iVar12;
  G3DLIGHT *pGVar13;
  int iVar14;
  int iVar15;
  MAP_LIGHT_SORT *pMVar16;
  G3DLIGHT *pGVar17;
  MAP_LIGHT_DAT *pMVar18;
  MAP_LIGHT_SORT *pMVar19;
  ulong uVar20;
  ulong uVar21;
  int iVar22;
  ulong uVar23;
  MAP_LIGHT_SORT llist [78];
  
  iVar22 = (en - st) + 1;
  if (st <= en) {
    pGVar11 = &w_light[st].lstat;
    iVar14 = st;
    do {
      iVar14 = iVar14 + 1;
      pGVar11->bEnable = 0;
      pGVar11 = pGVar11 + 9;
    } while (iVar14 <= en);
  }
  iVar14 = MapLightSetSortDat__FiiiPfP14MAP_LIGHT_SORTP14GRA3DLIGHTDATA(0,st,iVar22,pos,llist,in1);
  iVar22 = MapLightSetSortDat__FiiiPfP14MAP_LIGHT_SORTP14GRA3DLIGHTDATA
                     (iVar14,st,iVar22,pos,llist,in2);
  if ((iVar22 != 0) && (0 < iVar22)) {
    pMVar18 = w_light + st;
    pGVar17 = &pMVar18->ldat;
    iVar14 = iVar22;
    pMVar7 = llist + iVar22;
    do {
      pMVar19 = pMVar7 + -1;
      iVar15 = 1;
      pMVar16 = llist;
      if (1 < iVar14) {
        iVar12 = 0x10;
        pMVar16 = llist;
        while( true ) {
          iVar15 = iVar15 + 1;
          if (*(float *)((int)pMVar16 + 0xc) < *(float *)((int)&llist[0].power + iVar12)) {
            pMVar16 = (MAP_LIGHT_SORT *)((int)&llist[0].flg + iVar12);
          }
          if (iVar14 <= iVar15) break;
          iVar12 = iVar15 * 0x10;
        }
      }
      puVar5 = *(ulong **)((int)pMVar16 + 4);
      pGVar8 = pGVar17;
      puVar10 = puVar5;
      do {
        puVar9 = puVar10;
        pGVar13 = pGVar8;
        uVar20 = puVar9[1];
        uVar21 = puVar9[2];
        uVar23 = puVar9[3];
        *(ulong *)pGVar13->vDiffuse = *puVar9;
        *(ulong *)(pGVar13->vDiffuse + 2) = uVar20;
        *(ulong *)pGVar13->vSpecular = uVar21;
        *(ulong *)(pGVar13->vSpecular + 2) = uVar23;
        puVar10 = puVar9 + 4;
        pGVar8 = (G3DLIGHT *)pGVar13->vAmbient;
      } while (puVar10 != puVar5 + 0xc);
      uVar20 = *puVar10;
      uVar21 = puVar9[5];
      *(ulong *)pGVar13->vAmbient = uVar20;
      st = st + 1;
      pGVar17 = (G3DLIGHT *)((GRA3DLIGHTSTATUS *)(pGVar17 + 1) + 2);
      *(ulong *)(pGVar13->vAmbient + 2) = uVar21;
      uVar6 = *(uint *)((int)pMVar16 + 8);
      uVar3 = uVar6 + 7 & 7;
      uVar4 = uVar6 & 7;
      uVar21 = (*(long *)((uVar6 + 7) - uVar3) << (7 - uVar3) * 8 |
               uVar23 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
               *(ulong *)(uVar6 - uVar4) >> uVar4 * 8;
      uVar3 = uVar6 + 0xf & 7;
      uVar4 = uVar6 + 8 & 7;
      uVar20 = (*(long *)((uVar6 + 0xf) - uVar3) << (7 - uVar3) * 8 |
               uVar20 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
               *(ulong *)((uVar6 + 8) - uVar4) >> uVar4 * 8;
      puVar1 = (undefined *)((int)&(pMVar18->lstat).bEnableToChar + 3);
      uVar3 = (uint)puVar1 & 7;
      puVar5 = (ulong *)(puVar1 + -uVar3);
      *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar21 >> (7 - uVar3) * 8;
      uVar3 = (uint)&pMVar18->lstat & 7;
      puVar5 = (ulong *)((int)&pMVar18->lstat - uVar3);
      *puVar5 = uVar21 << uVar3 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
      puVar1 = (undefined *)((int)&(pMVar18->lstat).bEmulateToDirectionalLight + 3);
      uVar3 = (uint)puVar1 & 7;
      puVar5 = (ulong *)(puVar1 + -uVar3);
      *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar20 >> (7 - uVar3) * 8;
      piVar2 = &(pMVar18->lstat).bEnableToShadow;
      uVar3 = (uint)piVar2 & 7;
      puVar5 = (ulong *)((int)piVar2 - uVar3);
      *puVar5 = uVar20 << uVar3 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
      iVar15 = pMVar16->flg;
      (pMVar18->lstat).bEnable = 1;
      pMVar18->flg = iVar15;
      pMVar18 = pMVar18 + 1;
      if (en < st) {
        return iVar22;
      }
      uVar20._0_4_ = pMVar19->flg;
      uVar20._4_4_ = pMVar19->addr;
      uVar21._0_4_ = pMVar7[-0xffffffff00000001].st_addr;
      uVar21._4_4_ = pMVar7[-0xffffffff00000001].power;
      uVar3 = (int)pMVar16 + 7U & 7;
      puVar5 = (ulong *)(((int)pMVar16 + 7U) - uVar3);
      *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar20 >> (7 - uVar3) * 8;
      *(ulong *)pMVar16 = uVar20;
      uVar3 = (int)pMVar16 + 0xfU & 7;
      puVar5 = (ulong *)(((int)pMVar16 + 0xfU) - uVar3);
      *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar21 >> (7 - uVar3) * 8;
      iVar14 = iVar14 + -1;
      *(ulong *)((int)pMVar16 + 8) = uVar21;
      pMVar7 = pMVar19;
    } while (0 < iVar14);
  }
  return iVar22;
}

static void MapLightClearPointDirection(GRA3DLIGHTDATA *pLight) {
	int i;
	float *pv0;
	float *pv1;
	
  float fVar1;
  float fVar2;
  float fVar3;
  fixed_array<G3DLIGHT,39> *pfVar4;
  int iVar5;
  
  pfVar4 = &pLight->aLight;
  iVar5 = 0;
  do {
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(iVar5,0x27);
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_relops.h */
    if ((pfVar4->field0_0x0).m_aData[0].Type == G3DLIGHT_POINT) {
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(iVar5,0x27);
      fVar3 = g_v0000[3];
      fVar2 = g_v0000[2];
      fVar1 = g_v0000[1];
                    /* inlined from ../../graphics/graph3d/g3dxVu0.h */
      (pfVar4->field0_0x0).m_aData[0].vDirection[0] = g_v0000[0];
      (pfVar4->field0_0x0).m_aData[0].vDirection[1] = fVar1;
      (pfVar4->field0_0x0).m_aData[0].vDirection[2] = fVar2;
      (pfVar4->field0_0x0).m_aData[0].vDirection[3] = fVar3;
    }
                    /* end of inlined section */
    iVar5 = iVar5 + 1;
    pfVar4 = (fixed_array<G3DLIGHT,39> *)((pfVar4->field0_0x0).m_aData + 1);
  } while (iVar5 < 0x27);
  return;
}

static int MapLightCheckDirectLight(GRA3DLIGHTDATA *pLight) {
	int i;
	
  fixed_array_base<GRA3DLIGHTSTATUS,39,GRA3DLIGHTSTATUS[39]> *pfVar1;
  int iVar2;
  fixed_array<GRA3DLIGHTSTATUS,39> *pfVar4;
  int iVar3;
  
  pfVar4 = &pLight->aStatus;
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
  iVar3 = 0;
  do {
    iVar2 = iVar3 + 1;
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z16GRA3DLIGHTSTATUS_UiUi_PX01(iVar3,0x27);
                    /* end of inlined section */
    pfVar1 = &pfVar4->field0_0x0;
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
    pfVar4 = (fixed_array<GRA3DLIGHTSTATUS,39> *)((pfVar4->field0_0x0).m_aData + 1);
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
    if (pfVar1->m_aData[0].bEnable == 1) {
      return 1;
    }
    iVar3 = iVar2;
                    /* end of inlined section */
  } while (iVar2 < 3);
  return 0;
}

void MapLightMakeDualDirect(GRA3DLIGHTDATA *pLightOut, GRA3DLIGHTDATA *pLight1, GRA3DLIGHTDATA *pLight2) {
	int j;
	int l;
	float fPowList[3];
	float fSarPow;
	int iSarID;
	
  int iVar1;
  fixed_array<GRA3DLIGHTSTATUS,39> *pfVar2;
  fixed_array<GRA3DLIGHTSTATUS,39> *pfVar3;
  int iVar4;
  float *pfVar5;
  undefined extraout_vf1 [16];
  undefined extraout_vf1_00 [16];
  undefined auVar6 [16];
  float fPowList [3];
  GRA3DLIGHTDATA *local_60;
  
  pfVar5 = fPowList;
  pfVar2 = &pLightOut->aStatus;
  iVar1 = 0;
  pfVar3 = &pLight1->aStatus;
  iVar4 = 0;
  local_60 = pLight2;
  do {
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z16GRA3DLIGHTSTATUS_UiUi_PX01(iVar1,0x27);
    if ((pfVar3->field0_0x0).m_aData[0].bEnable != 0) {
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(iVar1,0x27);
                    /* inlined from ../../graphics/graph3d/g3dxVu0.h */
      auVar6 = _lqc2(*(undefined (*) [16])((int)pLightOut->vAmbient + iVar4 + 0x10));
      auVar6 = _vmul(auVar6,auVar6);
      _vaddabc(auVar6,auVar6);
      _vmaddbc(extraout_vf1,auVar6);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* end of inlined section */
    *pfVar5 = 0.0;
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z16GRA3DLIGHTSTATUS_UiUi_PX01(iVar1,0x27);
                    /* end of inlined section */
    (pfVar2->field0_0x0).m_aData[0].bEnable = 0;
                    /* end of inlined section */
    iVar1 = iVar1 + 1;
    pfVar2 = (fixed_array<GRA3DLIGHTSTATUS,39> *)((pfVar2->field0_0x0).m_aData + 1);
    pfVar3 = (fixed_array<GRA3DLIGHTSTATUS,39> *)((pfVar3->field0_0x0).m_aData + 1);
    pfVar5 = pfVar5 + 1;
    iVar4 = iVar4 + 0x70;
  } while (iVar1 < 3);
  iVar1 = 0;
  iVar4 = 0;
  pfVar2 = &local_60->aStatus;
  do {
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z16GRA3DLIGHTSTATUS_UiUi_PX01(iVar1,0x27);
    if ((pfVar2->field0_0x0).m_aData[0].bEnable != 0) {
      _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(iVar1,0x27);
                    /* inlined from ../../graphics/graph3d/g3dxVu0.h */
      auVar6 = _lqc2(*(undefined (*) [16])((int)pLightOut->vAmbient + iVar4 + 0x10));
      auVar6 = _vmul(auVar6,auVar6);
      _vaddabc(auVar6,auVar6);
      _vmaddbc(extraout_vf1_00,auVar6);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* end of inlined section */
    iVar1 = iVar1 + 1;
    iVar4 = iVar4 + 0x70;
    pfVar2 = (fixed_array<GRA3DLIGHTSTATUS,39> *)((pfVar2->field0_0x0).m_aData + 1);
  } while (iVar1 < 3);
  return;
}

int MapLightUpdate(GRA3DLIGHTDATA *pOutLight, MAP_LIGHT_DAT *pUpLight, int iStart, int iEnd) {
	int cnt;
	int i;
	
  undefined *puVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  ulong *puVar5;
  float *pfVar6;
  G3DLIGHT *pGVar7;
  G3DLIGHT *pGVar8;
  ulong uVar9;
  float *pfVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  MAP_LIGHT_DAT *pMVar15;
  GRA3DLIGHTSTATUS *pGVar16;
  float *pfVar17;
  int iVar18;
  
  iVar18 = 0;
  if (iStart <= iEnd) {
    pMVar15 = pUpLight + iStart;
    pGVar16 = (pOutLight->aStatus).field0_0x0.m_aData + iStart;
    pfVar17 = pOutLight->vAmbient + iStart * 0x1c + 4;
    do {
      if ((pMVar15->lstat).bEnable == 0) {
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
        _fixed_array_verifyrange__H1Z16GRA3DLIGHTSTATUS_UiUi_PX01(iStart,0x27);
                    /* end of inlined section */
        pGVar16->bEnable = 0;
      }
      else {
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
        _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(iStart,0x27);
        pfVar6 = pfVar17;
        pGVar8 = &pMVar15->ldat;
        do {
          pGVar7 = pGVar8;
          pfVar10 = pfVar6;
          uVar11 = *(undefined8 *)(pGVar7->vDiffuse + 2);
          uVar12 = *(undefined8 *)pGVar7->vSpecular;
          uVar13 = *(ulong *)(pGVar7->vSpecular + 2);
          *(undefined8 *)pfVar10 = *(undefined8 *)pGVar7->vDiffuse;
          *(undefined8 *)(pfVar10 + 2) = uVar11;
          *(undefined8 *)
           (((fixed_array<G3DLIGHT,39> *)(pfVar10 + 4))->field0_0x0).m_aData[0].vDiffuse = uVar12;
          *(ulong *)(pfVar10 + 6) = uVar13;
          pGVar8 = (G3DLIGHT *)pGVar7->vAmbient;
          pfVar6 = pfVar10 + 8;
        } while (pGVar8 != (G3DLIGHT *)&(pMVar15->ldat).fMinRange);
        uVar11 = *(undefined8 *)(pGVar7->vAmbient + 2);
        *(undefined8 *)(pfVar10 + 8) = *(undefined8 *)pGVar8;
                    /* end of inlined section */
        iVar18 = iVar18 + 1;
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
        *(undefined8 *)(pfVar10 + 10) = uVar11;
        uVar9 = _fixed_array_verifyrange__H1Z16GRA3DLIGHTSTATUS_UiUi_PX01(iStart,0x27);
        puVar1 = (undefined *)((int)&(pMVar15->lstat).bEnableToChar + 3);
        uVar3 = (uint)puVar1 & 7;
        uVar4 = (uint)&pMVar15->lstat & 7;
        uVar14 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
                 uVar13 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
                 *(ulong *)((int)&pMVar15->lstat - uVar4) >> uVar4 * 8;
        puVar1 = (undefined *)((int)&(pMVar15->lstat).bEmulateToDirectionalLight + 3);
        uVar3 = (uint)puVar1 & 7;
        piVar2 = &(pMVar15->lstat).bEnableToShadow;
        uVar4 = (uint)piVar2 & 7;
        uVar13 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
                 uVar9 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
                 *(ulong *)((int)piVar2 - uVar4) >> uVar4 * 8;
        puVar1 = (undefined *)((int)&pGVar16->bEnableToChar + 3);
        uVar3 = (uint)puVar1 & 7;
        puVar5 = (ulong *)(puVar1 + -uVar3);
        *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar14 >> (7 - uVar3) * 8;
        uVar3 = (uint)pGVar16 & 7;
        *(ulong *)((int)pGVar16 - uVar3) =
             uVar14 << uVar3 * 8 |
             *(ulong *)((int)pGVar16 - uVar3) & 0xffffffffffffffffU >> (8 - uVar3) * 8;
        puVar1 = (undefined *)((int)&pGVar16->bEmulateToDirectionalLight + 3);
        uVar3 = (uint)puVar1 & 7;
        puVar5 = (ulong *)(puVar1 + -uVar3);
        *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar13 >> (7 - uVar3) * 8;
        uVar3 = (uint)&pGVar16->bEnableToShadow & 7;
        puVar5 = (ulong *)((int)&pGVar16->bEnableToShadow - uVar3);
        *puVar5 = uVar13 << uVar3 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
      }
                    /* end of inlined section */
      iStart = iStart + 1;
      pGVar16 = pGVar16 + 1;
      pfVar17 = pfVar17 + 0x1c;
      pMVar15 = pMVar15 + 1;
    } while (iStart <= iEnd);
  }
  _fixed_array_verifyrange__H1Z16GRA3DLIGHTSTATUS_UiUi_PX01(iEnd,0x27);
                    /* end of inlined section */
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
  (pOutLight->aStatus).field0_0x0.m_aData[iEnd].bEnable = 0;
  return iVar18;
}

void MapLightMakeDual(GRA3DLIGHTDATA *out, GRA3DLIGHTDATA *light1, GRA3DLIGHTDATA *light2, float *vCenPos) {
	int i;
	MAP_LIGHT_DAT w_light[39];
	GRA3DLIGHTDATA *wp;
	
  GRA3DLIGHTSTATUS *pGVar1;
  GRA3DLIGHTDATA *pGVar2;
  int iVar3;
  GRA3DLIGHTDATA *pGVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  MAP_LIGHT_DAT w_light [39];
  
  if ((light1 == (GRA3DLIGHTDATA *)0x0) && (light2 == (GRA3DLIGHTDATA *)0x0)) {
    printf("***ERR!! %s(%d):");
    printf("NO_LIGHT_DATA\n");
  }
  else {
    pGVar4 = light2;
    if (light1 != (GRA3DLIGHTDATA *)0x0) {
      pGVar4 = (GRA3DLIGHTDATA *)0x0;
    }
    if (light2 == (GRA3DLIGHTDATA *)0x0) {
      pGVar4 = light1;
    }
    if (pGVar4 == (GRA3DLIGHTDATA *)0x0) {
      iVar3 = 0x26;
      pGVar1 = &w_light[0x26].lstat;
      do {
        iVar3 = iVar3 + -1;
        pGVar1->bEnable = 0;
        pGVar1 = pGVar1 + -9;
      } while (-1 < iVar3);
      MapLightMakeDualSub__FP13MAP_LIGHT_DATP14GRA3DLIGHTDATAT1iiPf
                (w_light,light1,light2,3,0x12,vCenPos);
      MapLightMakeDualSub__FP13MAP_LIGHT_DATP14GRA3DLIGHTDATAT1iiPf
                (w_light,light1,light2,0x16,0x25,vCenPos);
      pGVar4 = out;
      pGVar2 = light2;
      do {
        uVar5 = *(undefined8 *)(pGVar2->vAmbient + 2);
        uVar6 = *(undefined8 *)(pGVar2->aLight).field0_0x0.m_aData[0].vDiffuse;
        uVar7 = *(undefined8 *)((pGVar2->aLight).field0_0x0.m_aData[0].vDiffuse + 2);
        *(undefined8 *)pGVar4->vAmbient = *(undefined8 *)pGVar2->vAmbient;
        *(undefined8 *)(pGVar4->vAmbient + 2) = uVar5;
        *(undefined8 *)(pGVar4->aLight).field0_0x0.m_aData[0].vDiffuse = uVar6;
        *(undefined8 *)((pGVar4->aLight).field0_0x0.m_aData[0].vDiffuse + 2) = uVar7;
        pGVar2 = (GRA3DLIGHTDATA *)(pGVar2->aLight).field0_0x0.m_aData[0].vSpecular;
        pGVar4 = (GRA3DLIGHTDATA *)(pGVar4->aLight).field0_0x0.m_aData[0].vSpecular;
      } while (pGVar2 != light2 + 1);
      iVar3 = MapLightUpdate__FP14GRA3DLIGHTDATAP13MAP_LIGHT_DATii(out,w_light,3,0x12);
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Zi_UiUi_PX01(1,3);
      (out->aiNumInitial).field0_0x0.m_aData[1] = iVar3;
                    /* end of inlined section */
      iVar3 = MapLightUpdate__FP14GRA3DLIGHTDATAP13MAP_LIGHT_DATii(out,w_light,0x16,0x25);
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Zi_UiUi_PX01(2,3);
      (out->aiNumInitial).field0_0x0.m_aData[2] = iVar3;
                    /* end of inlined section */
      iVar3 = MapLightCheckDirectLight__FP14GRA3DLIGHTDATA(light1);
      if ((iVar3 != 0) && (iVar3 = MapLightCheckDirectLight__FP14GRA3DLIGHTDATA(light2), iVar3 != 0)
         ) {
        MapLightMakeDualDirect__FP14GRA3DLIGHTDATAN20(out,light1,light2);
      }
      MapLightClearPointDirection__FP14GRA3DLIGHTDATA(out);
    }
    else {
      pGVar2 = pGVar4 + 1;
      do {
        uVar5 = *(undefined8 *)(pGVar4->vAmbient + 2);
        uVar6 = *(undefined8 *)(pGVar4->aLight).field0_0x0.m_aData[0].vDiffuse;
        uVar7 = *(undefined8 *)((pGVar4->aLight).field0_0x0.m_aData[0].vDiffuse + 2);
        *(undefined8 *)out->vAmbient = *(undefined8 *)pGVar4->vAmbient;
        *(undefined8 *)(out->vAmbient + 2) = uVar5;
        *(undefined8 *)(out->aLight).field0_0x0.m_aData[0].vDiffuse = uVar6;
        *(undefined8 *)((out->aLight).field0_0x0.m_aData[0].vDiffuse + 2) = uVar7;
        pGVar4 = (GRA3DLIGHTDATA *)(pGVar4->aLight).field0_0x0.m_aData[0].vSpecular;
        out = (GRA3DLIGHTDATA *)(out->aLight).field0_0x0.m_aData[0].vSpecular;
      } while (pGVar4 != pGVar2);
      printf("***ERR!! %s(%d):");
      printf("LIGHT_DATA_NO_DUAL light1[%x] light1[%x]\n");
    }
  }
  return;
}

void MapLightSetScale(GRA3DLIGHTDATA *out, GRA3DLIGHTDATA *mst) {
	int i;
	
  GRA3DLIGHTDATA *pGVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  
  pGVar1 = mst + 1;
  do {
    uVar2 = *(undefined8 *)(mst->vAmbient + 2);
    uVar3 = *(undefined8 *)(mst->aLight).field0_0x0.m_aData[0].vDiffuse;
    uVar4 = *(undefined8 *)((mst->aLight).field0_0x0.m_aData[0].vDiffuse + 2);
    *(undefined8 *)out->vAmbient = *(undefined8 *)mst->vAmbient;
    *(undefined8 *)(out->vAmbient + 2) = uVar2;
    *(undefined8 *)(out->aLight).field0_0x0.m_aData[0].vDiffuse = uVar3;
    *(undefined8 *)((out->aLight).field0_0x0.m_aData[0].vDiffuse + 2) = uVar4;
    mst = (GRA3DLIGHTDATA *)(mst->aLight).field0_0x0.m_aData[0].vSpecular;
    out = (GRA3DLIGHTDATA *)(out->aLight).field0_0x0.m_aData[0].vSpecular;
  } while (mst != pGVar1);
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
  iVar6 = 0;
  do {
    iVar5 = iVar6 + 1;
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z16GRA3DLIGHTSTATUS_UiUi_PX01(iVar6,0x27);
                    /* end of inlined section */
    iVar6 = iVar5;
  } while (iVar5 < 0x27);
  return;
}

GRA3DLIGHTDATA* MapMeiGetLight() {
  return MapMeiWork;
}

int MapMeiCheck(MLOAD_HEAD *hp) {
	static char __FUNCTION__[12] = {
		/* [0] = */ 77,
		/* [1] = */ 97,
		/* [2] = */ 112,
		/* [3] = */ 77,
		/* [4] = */ 101,
		/* [5] = */ 105,
		/* [6] = */ 67,
		/* [7] = */ 104,
		/* [8] = */ 101,
		/* [9] = */ 99,
		/* [10] = */ 107,
		/* [11] = */ 0
	};
	
  if (hp == (MLOAD_HEAD *)0x0) {
    _SetLineInfo__FPCciT0T0("MapLight.c",0x29f,"MapMeiCheck",&DAT_003eee60);
    g3ddbgAssert__FbPCce(false,&DAT_003eee68);
  }
  return (int)(hp->labelID == 0x326);
}

void MapMeiRegistLightOne(G3DLIGHT *lp) {
	int i;
	
  undefined8 *puVar1;
  undefined8 *puVar2;
  G3DLIGHT *pGVar3;
  G3DLIGHT *pGVar4;
  G3DLIGHT **ppGVar5;
  int iVar6;
  undefined8 uVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  iVar6 = 0;
  iVar8 = 0;
  do {
    iVar6 = iVar6 + 1;
    ppGVar5 = (G3DLIGHT **)((int)MapMeiLightOneWork[0].m_light.vDiffuse + iVar8 + -0x10);
    if (*ppGVar5 == (G3DLIGHT *)0x0) {
      *ppGVar5 = lp;
      pGVar4 = lp;
      puVar1 = (undefined8 *)((int)MapMeiLightOneWork[0].m_light.vDiffuse + iVar8);
      do {
        puVar2 = puVar1;
        pGVar3 = pGVar4;
        uVar7 = *(undefined8 *)(pGVar3->vDiffuse + 2);
        uVar9 = *(undefined8 *)pGVar3->vSpecular;
        uVar10 = *(undefined8 *)(pGVar3->vSpecular + 2);
        *puVar2 = *(undefined8 *)pGVar3->vDiffuse;
        puVar2[1] = uVar7;
        puVar2[2] = uVar9;
        puVar2[3] = uVar10;
        pGVar4 = (G3DLIGHT *)pGVar3->vAmbient;
        puVar1 = puVar2 + 4;
      } while (pGVar4 != (G3DLIGHT *)&lp->fMinRange);
      uVar7 = *(undefined8 *)(pGVar3->vAmbient + 2);
      puVar2[4] = *(undefined8 *)pGVar4;
      puVar2[5] = uVar7;
      return;
    }
    iVar8 = iVar6 * 0x80;
  } while (iVar6 < 0x27);
  return;
}

void MapMeiInit(GRA3DLIGHTDATA *mst) {
	int i;
	MAPMEI_FRAME *lp;
	
  GRA3DLIGHTDATA *pGVar1;
  MAPMEI_LIGHTONE *pMVar2;
  MAPMEI_HEAD *pMVar3;
  GRA3DLIGHTDATA *pGVar4;
  MAPMEI_FRAME *pMVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  pMVar5 = MapMeiList;
  pMVar3 = MapMeiHead + 3;
  iVar6 = 3;
  do {
    iVar6 = iVar6 + -1;
    pMVar3->top_dat_p = (MAPMEI_FRAME *)0x0;
    pMVar3 = pMVar3 + -1;
  } while (-1 < iVar6);
  iVar6 = 0;
  pMVar3 = MapMeiHead;
  do {
    for (; -1 < pMVar5->max; pMVar5 = pMVar5 + 1) {
    }
    iVar6 = iVar6 + 1;
    if (pMVar5->max == -1000) break;
    pMVar5 = pMVar5 + 1;
    pMVar3->top_dat_p = pMVar5;
    pMVar3->now_dat_p = pMVar5;
    pMVar3->stat = 0;
    pMVar3->frame = 0;
    pMVar3 = pMVar3 + 1;
  } while (iVar6 < 4);
  MapMeiNowHeadPtr = MapMeiHead;
  pGVar4 = MapMeiWork;
  pGVar1 = mst;
  do {
    uVar7 = *(undefined8 *)(pGVar1->vAmbient + 2);
    uVar8 = *(undefined8 *)(pGVar1->aLight).field0_0x0.m_aData[0].vDiffuse;
    uVar9 = *(undefined8 *)((pGVar1->aLight).field0_0x0.m_aData[0].vDiffuse + 2);
    *(undefined8 *)pGVar4->vAmbient = *(undefined8 *)pGVar1->vAmbient;
    *(undefined8 *)(pGVar4->vAmbient + 2) = uVar7;
    *(undefined8 *)(pGVar4->aLight).field0_0x0.m_aData[0].vDiffuse = uVar8;
    *(undefined8 *)((pGVar4->aLight).field0_0x0.m_aData[0].vDiffuse + 2) = uVar9;
    pGVar1 = (GRA3DLIGHTDATA *)(pGVar1->aLight).field0_0x0.m_aData[0].vSpecular;
    pGVar4 = (GRA3DLIGHTDATA *)(pGVar4->aLight).field0_0x0.m_aData[0].vSpecular;
  } while (pGVar1 != mst + 1);
  pGVar4 = mst + 1;
  pGVar1 = MapMeiWork + 1;
  do {
    uVar7 = *(undefined8 *)(mst->vAmbient + 2);
    uVar8 = *(undefined8 *)(mst->aLight).field0_0x0.m_aData[0].vDiffuse;
    uVar9 = *(undefined8 *)((mst->aLight).field0_0x0.m_aData[0].vDiffuse + 2);
    *(undefined8 *)pGVar1->vAmbient = *(undefined8 *)mst->vAmbient;
    *(undefined8 *)(pGVar1->vAmbient + 2) = uVar7;
    *(undefined8 *)(pGVar1->aLight).field0_0x0.m_aData[0].vDiffuse = uVar8;
    *(undefined8 *)((pGVar1->aLight).field0_0x0.m_aData[0].vDiffuse + 2) = uVar9;
    mst = (GRA3DLIGHTDATA *)(mst->aLight).field0_0x0.m_aData[0].vSpecular;
    pGVar1 = (GRA3DLIGHTDATA *)(pGVar1->aLight).field0_0x0.m_aData[0].vSpecular;
  } while (mst != pGVar4);
  iVar6 = 0x26;
  pMVar2 = MapMeiLightOneWork + 0x26;
  do {
    iVar6 = iVar6 + -1;
    pMVar2->lip = (G3DLIGHT *)0x0;
    pMVar2 = pMVar2 + -1;
  } while (-1 < iVar6);
  return;
}

void MapMeiTerm() {
  return;
}

static void MapMeiAnimLight(GRA3DLIGHTDATA *out, GRA3DLIGHTDATA *mst, int max) {
	int i;
	float num;
	G3DLIGHT *out;
	G3DLIGHT *mst;
	int j;
	float num;
	int j;
	
  float *pfVar1;
  float *pfVar2;
  MAPMEI_LIGHTONE *pMVar3;
  float *pfVar4;
  G3DLIGHT *pGVar5;
  int iVar6;
  G3DLIGHT *pGVar7;
  int iVar8;
  int iVar9;
  fixed_array<GRA3DLIGHTSTATUS,39> *pfVar10;
  float fVar11;
  
  fVar11 = (float)max / 100.0;
  iVar8 = 0;
  iVar9 = 0;
  pfVar10 = &mst->aStatus;
  do {
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z16GRA3DLIGHTSTATUS_UiUi_PX01(iVar8,0x27);
    if ((pfVar10->field0_0x0).m_aData[0].bEnable != 0) {
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(iVar8,0x27);
      pfVar4 = (float *)((int)out->vAmbient + iVar9 + 0x10);
      _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(iVar8,0x27);
      pfVar2 = (float *)((int)mst->vAmbient + iVar9 + 0x10);
                    /* end of inlined section */
      iVar6 = 2;
      pfVar4[0x17] = pfVar2[0x17] * fVar11;
      pfVar4[0x18] = pfVar2[0x18] * fVar11;
      do {
        iVar6 = iVar6 + -1;
        *pfVar4 = *pfVar2 * fVar11;
        pfVar1 = pfVar2 + 4;
        pfVar2 = pfVar2 + 1;
        pfVar4[4] = *pfVar1 * fVar11;
        pfVar4 = pfVar4 + 1;
      } while (-1 < iVar6);
    }
    iVar8 = iVar8 + 1;
    iVar9 = iVar9 + 0x70;
    pfVar10 = (fixed_array<GRA3DLIGHTSTATUS,39> *)((pfVar10->field0_0x0).m_aData + 1);
  } while (iVar8 < 0x27);
  pMVar3 = MapMeiLightOneWork;
  iVar8 = 0x26;
  do {
    pGVar7 = pMVar3->lip;
    if (pGVar7 != (G3DLIGHT *)0x0) {
      pGVar5 = &pMVar3->m_light;
      iVar9 = 2;
      pGVar7->fMaxRange = (pMVar3->m_light).fMaxRange * fVar11;
      pGVar7->fMinRange = (pMVar3->m_light).fMinRange * fVar11;
      do {
        iVar9 = iVar9 + -1;
        pGVar7->vDiffuse[0] = pGVar5->vDiffuse[0] * fVar11;
        pfVar2 = pGVar5->vSpecular;
        pGVar5 = (G3DLIGHT *)(pGVar5->vDiffuse + 1);
        pGVar7->vSpecular[0] = *pfVar2 * fVar11;
        pGVar7 = (G3DLIGHT *)(pGVar7->vDiffuse + 1);
      } while (-1 < iVar9);
    }
    iVar8 = iVar8 + -1;
    pMVar3 = pMVar3 + 1;
  } while (-1 < iVar8);
  return;
}

static int MapMeiAnimFrame(MAPMEI_HEAD *hp) {
	MAPMEI_FRAME *np;
	int num;
	int lnum;
	
  int iVar1;
  MAPMEI_FRAME *pMVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = hp->stat;
  iVar3 = 0;
  pMVar2 = hp->now_dat_p;
  iVar5 = 0;
  if (iVar1 == 1) {
    iVar5 = pMVar2->max;
    iVar4 = hp->frame;
    iVar3 = iVar5;
  }
  else if (iVar1 < 2) {
    if (iVar1 == 0) {
      iVar5 = pMVar2->max;
      iVar4 = hp->frame;
      if (pMVar2->frame[0] == 0) {
        trap(7);
      }
      iVar3 = ((iVar5 + -0x32) * iVar4) / pMVar2->frame[0] + 0x32;
    }
    else {
      iVar4 = hp->frame;
    }
  }
  else if (iVar1 == 2) {
    iVar5 = 0x32;
    iVar4 = hp->frame;
    iVar3 = pMVar2->max + -0x32;
    if (pMVar2->frame[2] == 0) {
      trap(7);
    }
    iVar3 = (iVar3 - (iVar3 * iVar4) / pMVar2->frame[2]) + 0x32;
  }
  else {
    iVar4 = hp->frame;
    if (iVar1 == 3) {
      iVar3 = 0x32;
      iVar5 = 0x32;
    }
  }
  hp->frame = iVar4 + 1;
  if (pMVar2->frame[iVar1] <= iVar4 + 1) {
    hp->frame = 0;
    hp->stat = iVar1 + 1;
    iVar3 = iVar5;
    if (3 < iVar1 + 1) {
      hp->stat = 0;
      hp->now_dat_p = pMVar2 + 1;
      if (pMVar2[1].max < 0) {
        hp->now_dat_p = hp->top_dat_p;
      }
    }
  }
  return iVar3;
}

int MapMeiProc() {
  int iVar1;
  
  iVar1 = -1;
  if ((MapMeiNowHeadPtr != (MAPMEI_HEAD *)0x0) &&
     (iVar1 = -2, MapMeiNowHeadPtr->top_dat_p != (MAPMEI_FRAME *)0x0)) {
    iVar1 = MapMeiAnimFrame__FP11MAPMEI_HEAD(MapMeiNowHeadPtr);
    MapMeiAnimLight__FP14GRA3DLIGHTDATAT0i(MapMeiWork,MapMeiWork + 1,iVar1);
    gra3dSetLightData__FPC14GRA3DLIGHTDATAPCf(MapMeiWork,(float *)0x0);
    MapLightSetPlayerReal__Fv();
    gra3dApplyLight__Fv();
    iVar1 = 0;
  }
  return iVar1;
}

G3DLIGHT* G3DLIGHT * _fixed_array_verifyrange<G3DLIGHT>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

GRA3DLIGHTSTATUS* GRA3DLIGHTSTATUS * _fixed_array_verifyrange<GRA3DLIGHTSTATUS>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

int* int * _fixed_array_verifyrange<int>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
                    /* end of inlined section */
  return;
}

type_info& G3DLIGHT type_info function() {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

type_info& GRA3DLIGHTSTATUS type_info function() {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

static void global constructors keyed to MapLightPower() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
