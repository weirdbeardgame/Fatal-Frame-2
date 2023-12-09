// STATUS: NOT STARTED

#include "MapFog.h"

typedef struct {
	int r;
	int g;
	int b;
	int near;
	int far;
	int min;
	int max;
} MAP_FOG_HEAD;

static MAP_FOG_HEAD MapFogDat[3] = {
	/* [0] = */ {
		/* .r = */ 40,
		/* .g = */ 40,
		/* .b = */ 40,
		/* .near = */ 2000,
		/* .far = */ 18550,
		/* .min = */ 50,
		/* .max = */ 200
	},
	/* [1] = */ {
		/* .r = */ 40,
		/* .g = */ 40,
		/* .b = */ 40,
		/* .near = */ 2000,
		/* .far = */ 18550,
		/* .min = */ 50,
		/* .max = */ 200
	},
	/* [2] = */ {
		/* .r = */ 40,
		/* .g = */ 40,
		/* .b = */ 40,
		/* .near = */ 2000,
		/* .far = */ 18550,
		/* .min = */ 50,
		/* .max = */ 200
	}
};

static int MapFogFrame = 0;
static int MapFogNowFrame = 0;
static int MapFogFlg = 0;
static float *MapFogRect[4] = NULL;
static int MapFogLastRoom = -1;
static float MapFogBfoCam[4];

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x39e528;
	
  g3ddbgAssert__FbPCce(false,str_807);
  return;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_void__003eed90,_max,v);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_char__003eed98,_max,v);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi("unsigned int*",_max,v);
  }
  return (uint **)0x0;
}

int* MapFogGetColor() {
  return (int *)(MapFogDat + 2);
}

void MapFogAnimStart(int frame) {
  MapFogFrame = frame;
  MapFogDat[0]._0_8_ = MapFogDat[2]._0_8_;
  MapFogDat[0]._8_8_ = MapFogDat[2]._8_8_;
  MapFogDat[0]._16_8_ = MapFogDat[2]._16_8_;
  MapFogDat[0].max = MapFogDat[2].max;
  MapFogFlg = MapFogFlg | 1;
  MapFogNowFrame = 0;
  return;
}

void MapFogAnim(MAP_FOG_HEAD *now, MAP_FOG_HEAD *st, MAP_FOG_HEAD *en) {
	int i;
	int *w_now;
	int *w_st;
	int *w_en;
	float wf;
	
  uint uVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  
  if (MapFogNowFrame + 1 < MapFogFrame) {
    fVar6 = (float)MapFogNowFrame;
    iVar5 = 6;
    fVar7 = (float)MapFogFrame;
    do {
      piVar2 = &st->r;
      st = (MAP_FOG_HEAD *)&st->g;
      piVar3 = &en->r;
      en = (MAP_FOG_HEAD *)&en->g;
      iVar5 = iVar5 + -1;
      now->r = (int)((float)(*piVar3 - *piVar2) * (fVar6 / fVar7) + (float)*piVar2);
      now = (MAP_FOG_HEAD *)&now->g;
    } while (-1 < iVar5);
    if ((MapFogFlg & 0x80U) == 0) {
      if ((MapFogFlg & 0x40U) == 0) {
        if ((MapFogFlg & 0x20U) == 0) goto LAB_00108470;
        iVar5 = (MapFogNowFrame << 8) / MapFogFrame;
        if (MapFogFrame == 0) {
          trap(7);
        }
      }
      else {
        if (MapFogFrame == 0) {
          trap(7);
        }
        iVar5 = 0x100 - (MapFogNowFrame << 8) / MapFogFrame;
      }
      MapSkySetAlpha__Fi(iVar5);
    }
LAB_00108470:
    if ((MapFogFlg & 4U) == 0) {
      MapSkySetAlpha__Fi(0xff);
    }
    MapFogNowFrame = MapFogNowFrame + 1;
    return;
  }
  uVar1 = MapFogFlg & 0xfffffffe;
  MapFogDat[2]._0_8_ = MapFogDat[1]._4_8_ << 0x20 | (ulong)MapFogDat._24_8_ >> 0x20;
  MapFogDat[2]._8_8_ = MapFogDat[1]._12_8_ << 0x20 | (ulong)MapFogDat[1]._4_8_ >> 0x20;
  MapFogDat[2]._16_8_ =
       CONCAT44(MapFogDat[1].max,MapFogDat[1].min) << 0x20 | (ulong)MapFogDat[1]._12_8_ >> 0x20;
  MapFogDat[2].max = MapFogDat[1].max;
  if ((MapFogFlg & 0x40U) == 0) {
    uVar4 = MapFogFlg & 0x20;
    iVar5 = 0xff;
    MapFogFlg = uVar1;
    if (uVar4 == 0) goto LAB_00108388;
  }
  else {
    iVar5 = 0;
  }
  MapFogFlg = uVar1;
  MapSkySetAlpha__Fi(iVar5);
LAB_00108388:
  if ((MapFogFlg & 4U) != 0) {
    return;
  }
  MapSkySetAlpha__Fi(0xff);
  return;
}

static MDAT_FOG* MapFogGetRegStat(int buff_id, MB_OUT_RECT *dat) {
  MDAT_FOG *pMVar1;
  
  if (dat != (MB_OUT_RECT *)0x0) {
    pMVar1 = (MDAT_FOG *)RegDatGetStPtr__Fii(buff_id,dat->reg_id);
    return pMVar1;
  }
  return (MDAT_FOG *)0x0;
}

static MB_OUT_RECT* MapFogGetRegDat(int buff_id, float *pos, int type) {
	int i;
	int reg_num;
	MB_OUT_RECT *region_p;
	
  MB_OUT_RECT *pMVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  pMVar1 = RegDatGetVecPtr__Fii(buff_id,type);
  iVar2 = RegDatGetVecNum__Fii(buff_id,type);
  if (0 < iVar2) {
    do {
      iVar3 = MrecIsInRectangle__FPCfPA3_Cf(pos,pMVar1->vec);
      iVar4 = iVar4 + 1;
      if (iVar3 != 0) {
        return pMVar1;
      }
      pMVar1 = pMVar1 + 1;
    } while (iVar4 < iVar2);
  }
  return (MB_OUT_RECT *)0x0;
}

static MDAT_FOG* MapFogUpdate(int buff_id, float *pos) {
	MB_OUT_RECT *rp;
	
  MB_OUT_RECT *dat;
  MDAT_FOG *pMVar1;
  
  dat = MapFogGetRegDat__FiPCfi(buff_id,pos,0xd);
  if (dat == (MB_OUT_RECT *)0x0) {
    dat = MapFogGetRegDat__FiPCfi(buff_id,pos,5);
    if (dat == (MB_OUT_RECT *)0x0) {
      return (MDAT_FOG *)0x0;
    }
    if ((MapFogFlg & 0x40U) == 0) {
      MapFogFlg = MapFogFlg | 0xa0;
    }
    else {
      MapFogFlg = MapFogFlg & 0xffffff3fU | 0x20;
    }
  }
  else if ((MapFogFlg & 0x20U) == 0) {
    MapFogFlg = MapFogFlg | 0xc0;
  }
  else {
    MapFogFlg = MapFogFlg & 0xffffff5fU | 0x40;
  }
  pMVar1 = MapFogGetRegStat__FiP11MB_OUT_RECT(buff_id,dat);
  if (pMVar1 != (MDAT_FOG *)0x0) {
    MapFogRect = dat->vec;
  }
  return pMVar1;
}

void MapFogStartFogEv(int r, int g, int b, int st, int en, int min, int max) {
  MapFogAnimStart__Fi(0x10);
  MapFogDat[1].max = max;
  MapFogDat[1].r = r;
  MapFogDat[1].g = g;
  MapFogDat[1].b = b;
  MapFogDat[1].near = st;
  MapFogDat[1].far = en;
  MapFogDat[1].min = min;
  MapFogFlg = MapFogFlg | 8;
  return;
}

void MapFogEndFogEv(int frame) {
  MapFogRect = (float (*) [4])0x0;
  MapFogFlg = MapFogFlg & 0xfffffff7;
  return;
}

static MDAT_FOG* MapFogGetNewDat(int room_no, int floor, float *pos) {
	int buff_id;
	int *lp;
	int i;
	
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  MDAT_FOG *pMVar5;
  
  iVar2 = RegDatGetBuffIDG__FiPCf(floor,pos);
  if (-4 < iVar2) {
    if (iVar2 < -1) {
      iVar2 = 0;
      piVar3 = RegDatGetHitList__Fv();
      do {
        iVar4 = RegDatGetHitNum__Fv();
        bVar1 = iVar4 <= iVar2;
        iVar2 = iVar2 + 1;
        if (bVar1) {
          return (MDAT_FOG *)0x0;
        }
        iVar4 = *piVar3;
        piVar3 = piVar3 + 1;
        pMVar5 = MapFogUpdate__FiPCf(iVar4,pos);
      } while (pMVar5 == (MDAT_FOG *)0x0);
      return pMVar5;
    }
    if (iVar2 == -1) {
      return (MDAT_FOG *)0x0;
    }
  }
  pMVar5 = MapFogUpdate__FiPCf(iVar2,pos);
  if (pMVar5 == (MDAT_FOG *)0x0) {
    return (MDAT_FOG *)0x0;
  }
  return pMVar5;
}

static void MapFogAnimNowDat(int room_no, int floor, float *pos) {
	MDAT_FOG *fop;
	
  MDAT_FOG *pMVar1;
  uint uVar2;
  
  pMVar1 = MapFogGetNewDat__FiiPCf(room_no,floor,pos);
  if (pMVar1 != (MDAT_FOG *)0x0) {
    MapFogAnimStart__Fi(0x10);
    uVar2 = MapFogFlg >> 2 & 1;
    MapFogFlg = MapFogFlg & 0xfffffffdU | 1;
    MapFogDat[1].r = pMVar1->dat[uVar2].Color[0];
    MapFogDat[1].g = pMVar1->dat[uVar2].Color[1];
    MapFogDat[1].b = pMVar1->dat[uVar2].Color[2];
    MapFogDat[1].min = pMVar1->dat[uVar2].Min;
    MapFogDat[1].max = pMVar1->dat[uVar2].Max;
    MapFogDat[1].near = (int)pMVar1->dat[uVar2].Start;
    MapFogDat[1].far = (int)pMVar1->dat[uVar2].End;
  }
  return;
}

static void MapFogSetNowDat(int room_no, int floor, float *pos) {
	MDAT_FOG *fop;
	
  MDAT_FOG *pMVar1;
  uint uVar2;
  int iAlpha;
  uint uVar3;
  
  pMVar1 = MapFogGetNewDat__FiiPCf(room_no,floor,pos);
  uVar3 = MapFogFlg;
  if (pMVar1 == (MDAT_FOG *)0x0) goto LAB_00108974;
  uVar2 = MapFogFlg >> 2 & 1;
  uVar3 = MapFogFlg & 0xfffffffd;
  MapFogDat[2].r = pMVar1->dat[uVar2].Color[0];
  MapFogDat[2].g = pMVar1->dat[uVar2].Color[1];
  MapFogDat[2].b = pMVar1->dat[uVar2].Color[2];
  MapFogDat[2].min = pMVar1->dat[uVar2].Min;
  MapFogDat[2].max = pMVar1->dat[uVar2].Max;
  MapFogDat[2].near = (int)pMVar1->dat[uVar2].Start;
  MapFogDat[2].far = (int)pMVar1->dat[uVar2].End;
  if ((MapFogFlg & 0x20U) == 0) {
    iAlpha = 0;
    if ((MapFogFlg & 0x40U) != 0) goto LAB_00108940;
  }
  else {
    iAlpha = 0xff;
LAB_00108940:
    MapFogFlg = uVar3;
    MapSkySetAlpha__Fi(iAlpha);
    uVar3 = MapFogFlg | 0x80;
  }
  if ((uVar3 & 4) == 0) {
    MapFogFlg = uVar3;
    MapSkySetAlpha__Fi(0xff);
    uVar3 = MapFogFlg;
  }
LAB_00108974:
  MapFogFlg = uVar3 & 0xfffffffe;
  return;
}

void MapFogReset() {
  MapFogFrame = 0;
  MapFogLastRoom = -1;
  MapFogNowFrame = 0;
  MapFogFlg = 0;
  MapFogRect = (float (*) [4])0x0;
  return;
}

void MapFogProc(int room_no, int floor, float *pos) {
	float &rvPos[4];
	int id;
	MAP_FOG_HEAD *mp;
	
  float (*p0) [4];
  int iVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  
  p0 = gra3dcamGetPosition__Fv();
  uVar3 = MapFogFlg & 0xffffffef;
  uVar2 = 0;
  if (plyr_wrk.cmn_wrk.mode == '\x06') {
    uVar2 = 4;
  }
  if (((uVar3 ^ uVar2) & 4) != 0) {
    uVar3 = uVar3 | 0x10;
  }
  MapFogFlg = uVar3 & 0xfffffffb | uVar2;
  if (MapFogLastRoom != room_no) {
    iVar1 = PlyrOutsideCheck__Fv();
    MapFogLastRoom = room_no;
    if (iVar1 == 0) {
      MapFogFlg = MapFogFlg & 0xfffffffd;
    }
    else {
      MapFogRect = (float (*) [4])0x0;
    }
  }
  if ((MapFogFlg & 8U) == 0) {
    fVar4 = GetDistV__FPCfT0((float *)p0,MapFogBfoCam);
    if (((int)fVar4 < 0x2bd) && ((MapFogFlg & 0x10U) == 0)) {
      if ((MapFogRect == (float (*) [4])0x0) ||
         (iVar1 = MrecIsInRectangle__FPCfPA3_Cf((float *)p0,MapFogRect), iVar1 == 0)) {
        MapFogAnimNowDat__FiiPCf(room_no,floor,(float *)p0);
      }
    }
    else {
      MapFogSetNowDat__FiiPCf(room_no,floor,(float *)p0);
    }
  }
  MapFogBfoCam[2] = (*p0)[2];
  MapFogBfoCam[3] = (*p0)[3];
  MapFogBfoCam[0] = (float)*(undefined8 *)*p0;
  MapFogBfoCam[1] = (float)((ulong)*(undefined8 *)*p0 >> 0x20);
                    /* end of inlined section */
  if ((MapFogFlg & 1U) != 0) {
    MapFogAnim__FP12MAP_FOG_HEADN20(MapFogDat + 2,MapFogDat,MapFogDat + 1);
  }
  gra3dSetFog__Fffff((float)MapFogDat[2].min,(float)MapFogDat[2].max,(float)MapFogDat[2].near,
                     (float)MapFogDat[2].far);
  gra3dSetFogColor__Fiii
            ((uint)(byte)MapFogDat[2].r,(uint)(byte)MapFogDat[2].g,(uint)(byte)MapFogDat[2].b);
  gra3dApplyFog__Fv();
  return;
}

void MapFogDbProc(int room_no, int floor, float *pos) {
  MapFogProc__FiiPf(room_no,floor,pos);
  return;
}
