// STATUS: NOT STARTED

#include "MhCtl.h"

MH_CTL_DB_FLG mhdb = {
	/* .draw_flg = */ 1,
	/* .draw_hight = */ 0,
	/* .predb_mode = */ 0,
	/* .save = */ 0
};

DEBUG_MENU dbg_room_main = {
	/* .parent = */ &dbg_menu_main,
	/* .off_num = */ NULL,
	/* .title = */ 0x3ef130,
	/* .submenu = */ {
		/* [0] = */ {
			/* .name = */ 0x39f6e8,
			/* .attr = */ 8192,
			/* .child = */ 0x339e98,
			/* .nmin = */ 0.f,
			/* .nmax = */ 1.f,
			/* .nadd = */ 1.f
		},
		/* [1] = */ {
			/* .name = */ 0x39f6f8,
			/* .attr = */ 8192,
			/* .child = */ 0x2cc82c,
			/* .nmin = */ 0.f,
			/* .nmax = */ 1.f,
			/* .nadd = */ 1.f
		},
		/* [2] = */ {
			/* .name = */ 0x39f708,
			/* .attr = */ 8192,
			/* .child = */ 0x2cc830,
			/* .nmin = */ 0.f,
			/* .nmax = */ 1.f,
			/* .nadd = */ 1.f
		},
		/* [3] = */ {
			/* .name = */ 0x39f718,
			/* .attr = */ 32768,
			/* .child = */ &MapLightPower,
			/* .nmin = */ 0.f,
			/* .nmax = */ 10.f,
			/* .nadd = */ 0.01f
		},
		/* [4] = */ {
			/* .name = */ 0x39f728,
			/* .attr = */ 32768,
			/* .child = */ MapLightIntens,
			/* .nmin = */ 0.f,
			/* .nmax = */ 1.f,
			/* .nadd = */ 0.01f
		},
		/* [5] = */ {
			/* .name = */ 0x39f738,
			/* .attr = */ 32768,
			/* .child = */ MapLightDiff,
			/* .nmin = */ 0.f,
			/* .nmax = */ 2.f,
			/* .nadd = */ 0.01f
		},
		/* [6] = */ {
			/* .name = */ 0x39f748,
			/* .attr = */ 32768,
			/* .child = */ 0x3eee4c,
			/* .nmin = */ 0.f,
			/* .nmax = */ 1.f,
			/* .nadd = */ 0.01f
		},
		/* [7] = */ {
			/* .name = */ 0x39f758,
			/* .attr = */ 32768,
			/* .child = */ 0x3eee54,
			/* .nmin = */ 0.f,
			/* .nmax = */ 2.f,
			/* .nadd = */ 0.01f
		},
		/* [8] = */ {
			/* .name = */ 0x39f768,
			/* .attr = */ 32768,
			/* .child = */ &MapHitDoorZ,
			/* .nmin = */ 0.f,
			/* .nmax = */ 2.f,
			/* .nadd = */ 0.01f
		},
		/* [9] = */ {
			/* .name = */ 0x39f778,
			/* .attr = */ 32768,
			/* .child = */ &MapObjSimiEnd,
			/* .nmin = */ 0.f,
			/* .nmax = */ 255.f,
			/* .nadd = */ 1.f
		},
		/* [10] = */ {
			/* .name = */ 0x39f788,
			/* .attr = */ 32768,
			/* .child = */ &MapObjSimiTime,
			/* .nmin = */ 0.f,
			/* .nmax = */ 1000.f,
			/* .nadd = */ 1.f
		},
		/* [11] = */ {
			/* .name = */ 0x3ef138,
			/* .attr = */ 8192,
			/* .child = */ 0x2cc834,
			/* .nmin = */ 0.f,
			/* .nmax = */ 1.f,
			/* .nadd = */ 1.f
		},
		/* [12] = */ {
			/* .name = */ 0x3ef140,
			/* .attr = */ 4096,
			/* .child = */ &dbg_kaza_main,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [13] = */ {
			/* .name = */ 0x3ef148,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [14] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [15] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [16] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [17] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [18] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [19] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		}
	},
	/* .mnum = */ 0,
	/* .kai = */ 0,
	/* .max = */ 0,
	/* .pos = */ 0
};

static int MhCtlLoadFlg = 0;
static int MhCtlRegBuffID = -1;
static int s_bDrewShadow = 0;
static int mh_ctl_disp_lock_cnt;

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x39f690;
	
  g3ddbgAssert__FbPCce(false,str_807);
  return;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_void__003ef120,_max,v);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_char__003ef128,_max,v);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi("unsigned int*",_max,v);
  }
  return (uint **)0x0;
}

void MhCtlInit() {
  mh_ctl_disp_lock_cnt = 0;
  MhCtlRegBuffID = -1;
  return;
}

int MhCtlGetMapHeight(float *tv, float *pos, int room_no, int flg) {
	int b_id;
	
  undefined8 uVar1;
  int iVar2;
  MLOAD_HEAD *pMVar3;
  float fVar4;
  float fVar5;
  
  DrawMapHitRect__FPf(pos);
  iVar2 = -1;
  if (MhCtlLoadFlg == 0) {
    iVar2 = MapLoadGetBuffID__Fi(room_no);
    if (iVar2 < 0) {
      printf("***ERR!! %s(%d):");
      printf(" NO_ROOM_NO b_id[%d]:room_no[%d]\n");
      iVar2 = -1;
    }
    else {
      if ((iVar2 != 0) && (mhdb.draw_hight != 0)) {
        MhDrawHeight__Fi(iVar2);
      }
      pMVar3 = MapLoadGetHeadPtr__Fi(iVar2);
      if (pMVar3->high_addr != 0) {
        iVar2 = MhGetMapHeight__FPfT0ii(tv,pos,iVar2,flg);
        return iVar2;
      }
      uVar1 = *(undefined8 *)pos;
                    /* inlined from ../../graphics/graph3d/g3dxVu0.h */
      fVar4 = pos[2];
      fVar5 = pos[3];
      *tv = (float)uVar1;
      tv[1] = (float)((ulong)uVar1 >> 0x20);
      tv[2] = fVar4;
      tv[3] = fVar5;
      iVar2 = 1;
                    /* end of inlined section */
    }
  }
  return iVar2;
}

int MhCtlHitLineCheck(float *pos1, float *pos2, int room_no) {
	int b_id;
	
  int iVar1;
  
  if (MhCtlLoadFlg == 0) {
    iVar1 = MapLoadGetBuffID__Fi(room_no);
    if (-1 < iVar1) {
      iVar1 = MhHitLineCheck__FPfT0i(pos1,pos2,iVar1);
      return iVar1;
    }
    printf("***ERR!! %s(%d):");
    printf(" NO_ROOM_NO b_id[%d]:room_no[%d]\n");
  }
  return -1;
}

int MhCtlGetRoomNo(int kai, float *vPos) {
	int buff_id;
	
  int iVar1;
  
  iVar1 = MapLoadGetBuffID4Pos__FiPCf(kai,vPos);
  if (-1 < iVar1) {
    iVar1 = MapLoadGetRoomNo4BuffID__Fi(iVar1);
    return iVar1;
  }
  return iVar1;
}

void MhCtlGetObjStatStart(int room_no, int kai) {
	int buff_id;
	
  int buff_id;
  
  buff_id = MapLoadGetRegBuffID__Fii(room_no,kai);
  if (-1 < buff_id) {
    RegDatGetStPtrStart__Fii(buff_id,3);
    MhCtlRegBuffID = buff_id;
  }
  return;
}

MB_OUT_SECTION* MhCtlGetObjStatNext() {
  MB_OUT_SECTION *pMVar1;
  
  pMVar1 = RegDatGetNextStPtr__Fi(MhCtlRegBuffID);
  return pMVar1;
}

int MhCtlMain(int area_no) {
  int iVar1;
  
  MapObjProc__Fv();
  MapAnimProc__Fv();
  acsChodoClothCtrl__Fv();
  if ((MhCtlLoadFlg != 0) && (iVar1 = MapLoadCheckLoadNow__Fv(), iVar1 == 0)) {
    MhCtlLoadFlg = 0;
  }
  if (mhdb.save != 0) {
    DbmSave__FP10DEBUG_MENUPcN21
              (&dbg_room_main,"host0:../src/ingame/map/","MapLightDat.h",s_MAPLI__003ef168);
    mhdb.save = 0;
  }
  MapLoadSetNowRoom__Fi(area_no);
  MapLoadMain__Fv();
  return 0;
}

void MhCtlDrawShadow() {
	int bInFinder;
	MLOAD_HEAD *hp;
	
  int iVar1;
  PLAYERFLASHLIGHTTYPE PVar2;
  MLOAD_HEAD *pMVar3;
  int iVar4;
  
  if (s_bDrewShadow != 0) {
    return;
  }
  s_bDrewShadow = 1;
  iVar1 = PlayerModeIsFinder__Fv();
  PVar2 = playerGetFlashlightType__Fv();
  if (PVar2 != PFT_HAND) goto LAB_00114884;
  if (iVar1 != 0) goto LAB_00114894;
  MapLoadGetRoomNoNow__Fv();
  pMVar3 = MapLoadGetHeader__Fv();
  if (((pMVar3 == (MLOAD_HEAD *)0x0) || (pMVar3->model_addr == 0)) || (pMVar3->shadow_addr == 0)) {
LAB_00114884:
    if (iVar1 != 0) goto LAB_00114894;
  }
  else if (pMVar3->shadow_s_addr != 0) {
    if ((debug_var.shadow_model_disp != 0) &&
       (gra3dSetGsRegisterDefault__Fv(), debug_var.shadow_model_disp != 0)) {
      _gra3dDrawSGD__FP13SGDFILEHEADER13SGDRENDERTYPEP13SGDCOORDINATEi
                ((SGDFILEHEADER *)pMVar3->shadow_addr,SRT_REALTIME,(SGDCOORDINATE *)0x0,-1);
    }
    if ((g_gra3dShadowDebug.bDrawObjectShadow != 0) && (iVar4 = GetSdwDrawFLG__Fv(), iVar4 != 0)) {
      gra3dDrawSGDShadowEveryObject__FP13SGDFILEHEADERPC8G3DLIGHT
                ((SGDFILEHEADER *)pMVar3->shadow_addr,&plyr_wrk.fl);
    }
    goto LAB_00114884;
  }
  playerDrawShadow__Fv();
LAB_00114894:
  sisterDrawShadow__Fv();
  return;
}

void MhCtlSetVuFlush() {
	unsigned int &rauiPacket[1];
	
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)g3dDmaOpenPacket__Fv();
  *puVar1 = 0;
  puVar1[1] = &DAT_11000000;
  puVar1[2] = 0;
  puVar1[3] = 0;
  g3dDmaClosePacket__FPCv(puVar1 + 4);
  return;
}

int MhCtlDraw() {
  int iVar1;
  
  if (mh_ctl_disp_lock_cnt == 0) {
    gra3dshadowClearProjectModel__Fv();
    _SetPREVIOUSTRI2PRIM__FP17SGDPROCUNITHEADER((SGDPROCUNITHEADER *)0x0);
    gra3dSetGsRegisterDefault__Fv();
    s_bDrewShadow = 0;
    iVar1 = GetSkyDrawFLG__Fv();
    if (iVar1 != 0) {
      MapSkyProc__Fv();
    }
    if (mhdb.predb_mode != 0) {
      DbFurnPreProc__Fv();
    }
    MapDrawRoom__Fv();
    MapPutDraw__Fv();
    MhCtlDrawShadow__Fv();
  }
  return 0;
}

void MhCtlDrawLock() {
  mh_ctl_disp_lock_cnt = mh_ctl_disp_lock_cnt + 1;
  return;
}

void MhCtlDrawUnlock() {
  mh_ctl_disp_lock_cnt = mh_ctl_disp_lock_cnt + -1;
  return;
}

void MhCtlDbOutObjPos(int room_no, int kai) {
	MB_OUT_SECTION *mp;
	
  MB_OUT_SECTION *pMVar1;
  
  printf("***********************************************\n");
  MhCtlGetObjStatStart__Fii(room_no,kai);
  while (pMVar1 = MhCtlGetObjStatNext__Fv(), pMVar1 != (MB_OUT_SECTION *)0x0) {
    printf("event obj pos[%f][%f][%f]\n");
  }
  return;
}

void MhCtlReload() {
  int iVar1;
  MLOAD_HEAD *pMVar2;
  
  iVar1 = MapLoadCheckLoadNow__Fv();
  if ((iVar1 == 0) && (pMVar2 = MapLoadGetHeader__Fv(), pMVar2 != (MLOAD_HEAD *)0x0)) {
    iVar1 = MapLoadGetRoomNoNow__Fv();
    MapLoadReload__Fi(iVar1);
  }
  return;
}
