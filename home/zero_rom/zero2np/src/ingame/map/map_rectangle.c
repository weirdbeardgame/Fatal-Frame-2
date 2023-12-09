// STATUS: NOT STARTED

#include "map_rectangle.h"

static MDAT_CAM *cam_info = NULL;
static int cam_change_flg = 0;
static int cam_hit_flg = 0;
static MDAT_SE *se_info = NULL;

static MapRecBufCtrl map_buf_ctrl[2] = {
	/* [0] = */ {
		/* .buf_id = */ -1,
		/* .id_num = */ 0,
		/* .id_list = */ {
			/* [0] = */ 0,
			/* [1] = */ 0,
			/* [2] = */ 0,
			/* [3] = */ 0,
			/* [4] = */ 0,
			/* [5] = */ 0,
			/* [6] = */ 0,
			/* [7] = */ 0
		}
	},
	/* [1] = */ {
		/* .buf_id = */ -1,
		/* .id_num = */ 0,
		/* .id_list = */ {
			/* [0] = */ 0,
			/* [1] = */ 0,
			/* [2] = */ 0,
			/* [3] = */ 0,
			/* [4] = */ 0,
			/* [5] = */ 0,
			/* [6] = */ 0,
			/* [7] = */ 0
		}
	}
};

static MapRecInfo map_rec_info = {
	/* .id_num = */ 0,
	/* .rec_num_list = */ {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0,
		/* [3] = */ 0,
		/* [4] = */ 0,
		/* [5] = */ 0,
		/* [6] = */ 0,
		/* [7] = */ 0
	},
	/* .buf_ids = */ {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0,
		/* [3] = */ 0,
		/* [4] = */ 0,
		/* [5] = */ 0,
		/* [6] = */ 0,
		/* [7] = */ 0
	},
	/* .rec_list = */ {
		/* [0] = */ NULL,
		/* [1] = */ NULL,
		/* [2] = */ NULL,
		/* [3] = */ NULL,
		/* [4] = */ NULL,
		/* [5] = */ NULL,
		/* [6] = */ NULL,
		/* [7] = */ NULL
	}
};

static MapRecInfo map_door_rec_info = {
	/* .id_num = */ 0,
	/* .rec_num_list = */ {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0,
		/* [3] = */ 0,
		/* [4] = */ 0,
		/* [5] = */ 0,
		/* [6] = */ 0,
		/* [7] = */ 0
	},
	/* .buf_ids = */ {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0,
		/* [3] = */ 0,
		/* [4] = */ 0,
		/* [5] = */ 0,
		/* [6] = */ 0,
		/* [7] = */ 0
	},
	/* .rec_list = */ {
		/* [0] = */ NULL,
		/* [1] = */ NULL,
		/* [2] = */ NULL,
		/* [3] = */ NULL,
		/* [4] = */ NULL,
		/* [5] = */ NULL,
		/* [6] = */ NULL,
		/* [7] = */ NULL
	}
};

static float sta_rot_tbl[6] = {
	/* [0] = */ 0.f,
	/* [1] = */ 1.57079625f,
	/* [2] = */ 3.1415925f,
	/* [3] = */ 4.71238852f,
	/* [4] = */ 0.785398126f,
	/* [5] = */ 3.92699051f
};

int MrecSetRegBuffID(int floor_id, float *pos, int buf_no) {
	int i;
	int buf_id;
	int id_num;
	int *ids;
	MapRecBufCtrl *mb_ctrl;
	
  MapRecBufCtrl *pMVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  pMVar1 = MrecGetRegBuffID__Fi(buf_no);
  iVar2 = RegDatGetBuffIDG__FiPCf(floor_id,pos);
  if (iVar2 == -1) {
    pMVar1->buf_id = -1;
    iVar2 = 0;
  }
  else {
    if (iVar2 + 3U < 2) {
      iVar3 = RegDatGetHitNum__Fv();
      piVar4 = RegDatGetHitList__Fv();
      iVar5 = 0;
      if (0 < iVar3) {
        do {
          iVar6 = iVar5 + 1;
          pMVar1->id_list[iVar5] = piVar4[iVar5];
          iVar5 = iVar6;
        } while (iVar6 < iVar3);
      }
      pMVar1->id_num = iVar3;
    }
    else {
      pMVar1->id_list[0] = iVar2;
      pMVar1->id_num = 1;
    }
    pMVar1->buf_id = iVar2;
    iVar2 = 1;
  }
  return iVar2;
}

static MapRecBufCtrl* MrecGetRegBuffID(int buf_no) {
  if (1 < (uint)buf_no) {
    return map_buf_ctrl;
  }
  return map_buf_ctrl + buf_no;
}

int MrecInitCameraInfo() {
  cam_info = (MDAT_CAM *)0x0;
  cam_change_flg = 0;
  cam_hit_flg = 0;
  return 1;
}

int MrecSetCameraInfo(int floor, float *pos, int DataType) {
	int i;
	int id;
	int buf_id;
	MB_OUT_RECT *region_p;
	int reg_num;
	int change;
	MDAT_CAM *cam;
	MDAT_CAM *tmp_cam;
	
  bool bVar1;
  int buff_id;
  MB_OUT_RECT *pMVar2;
  int iVar3;
  int iVar4;
  MDAT_CAM *pMVar5;
  MDAT_CAM *pMVar6;
  MDAT_CAM *pMVar7;
  int iVar8;
  int iVar9;
  int reg_id;
  
  pMVar7 = (MDAT_CAM *)0x0;
  iVar9 = 0;
  reg_id = -1;
  buff_id = RegDatGetBuffIDG__FiPCf(floor,pos);
  iVar3 = 0;
  if (-1 < buff_id) {
    pMVar2 = RegDatGetVecPtr__Fii(buff_id,DataType);
    iVar3 = RegDatGetVecNum__Fii(buff_id,DataType);
    iVar8 = 0;
    while (bVar1 = iVar8 < iVar3, iVar8 = iVar8 + 1, pMVar5 = pMVar7, bVar1) {
      iVar4 = MrecIsInRectangle__FPCfPA3_Cf(pos,pMVar2->vec);
      if (iVar4 != 0) {
        reg_id = pMVar2->reg_id;
        pMVar5 = (MDAT_CAM *)RegDatGetStPtr__Fii(buff_id,reg_id);
        pMVar6 = MrecGetCameraInfo__Fv();
        if (pMVar7 == (MDAT_CAM *)0x0) {
          pMVar7 = pMVar5;
        }
        if (pMVar5 == pMVar6) {
          iVar9 = 0;
          break;
        }
        iVar9 = 1;
      }
      pMVar2 = pMVar2 + 1;
    }
    if (reg_id == -1) {
      pMVar5 = cam_info;
    }
    cam_info = pMVar5;
    cam_hit_flg = (int)(reg_id != -1);
    iVar3 = iVar9;
    cam_change_flg = iVar9;
  }
  return iVar3;
}

int MrecIsCameraChange() {
  return cam_change_flg;
}

int MrecIsCameraHit() {
  return cam_hit_flg;
}

int MrecGetCameraID() {
	MDAT_CAM *cam;
	
  MDAT_CAM *pMVar1;
  uint uVar2;
  
  pMVar1 = MrecGetCameraInfo__Fv();
  uVar2 = 0xffffffff;
  if (pMVar1 != (MDAT_CAM *)0x0) {
    uVar2 = (uint)(ushort)(pMVar1->head).SecStID;
  }
  return uVar2;
}

int MrecGetCameraType() {
	MDAT_CAM *cam;
	
  MDAT_CAM *pMVar1;
  int iVar2;
  
  pMVar1 = MrecGetCameraInfo__Fv();
  iVar2 = -1;
  if (pMVar1 != (MDAT_CAM *)0x0) {
    iVar2 = pMVar1->type;
  }
  return iVar2;
}

int MrecGetCameraPos(float *pos) {
	MDAT_CAM *cam;
	
  MDAT_CAM *pMVar1;
  float fVar2;
  
  pMVar1 = MrecGetCameraInfo__Fv();
  if (pMVar1 != (MDAT_CAM *)0x0) {
    *pos = pMVar1->Pos[0];
    pos[1] = pMVar1->Pos[1];
    fVar2 = pMVar1->Pos[2];
    pos[3] = 1.0;
    pos[2] = fVar2;
  }
  return (uint)(pMVar1 != (MDAT_CAM *)0x0);
}

int MrecGetCameraInterest(float *pos) {
	MDAT_CAM *cam;
	
  MDAT_CAM *pMVar1;
  float fVar2;
  
  pMVar1 = MrecGetCameraInfo__Fv();
  if (pMVar1 != (MDAT_CAM *)0x0) {
    *pos = pMVar1->View[0];
    pos[1] = pMVar1->View[1];
    fVar2 = pMVar1->View[2];
    pos[3] = 1.0;
    pos[2] = fVar2;
  }
  return (uint)(pMVar1 != (MDAT_CAM *)0x0);
}

int MrecGetCameraRotZ(float *rot_z) {
	MDAT_CAM *cam;
	
  MDAT_CAM *pMVar1;
  
  pMVar1 = MrecGetCameraInfo__Fv();
  if (pMVar1 != (MDAT_CAM *)0x0) {
    *rot_z = pMVar1->RotZ;
  }
  return (uint)(pMVar1 != (MDAT_CAM *)0x0);
}

float MrecGetCameraPrj() {
	MDAT_CAM *cam;
	
  MDAT_CAM *pMVar1;
  float fVar2;
  
  pMVar1 = MrecGetCameraInfo__Fv();
  fVar2 = -1.0;
  if (pMVar1 != (MDAT_CAM *)0x0) {
    fVar2 = pMVar1->Rrg;
  }
  return fVar2;
}

float MrecGetCameraAsobi() {
	MDAT_CAM *cam;
	
  MDAT_CAM *pMVar1;
  float fVar2;
  
  pMVar1 = MrecGetCameraInfo__Fv();
  fVar2 = -1.0;
  if (pMVar1 != (MDAT_CAM *)0x0) {
    fVar2 = pMVar1->Asobi;
  }
  return fVar2;
}

MDAT_CAM_SP* MrecGetCameraSpInfo(MB_OUT_RECT **ppRect, void *pRectStat, int floor, float *Pos) {
  MDAT_CAM_SP *pMVar1;
  
  pMVar1 = (MDAT_CAM_SP *)RegDatGetRectAndStat__FPP11MB_OUT_RECTPviPfi(ppRect,pRectStat,floor,Pos,9)
  ;
  return pMVar1;
}

int MrecCheckOnSameCamRect(void *pRectStat, int floor, float *Pos, int DataType) {
  int iVar1;
  
  iVar1 = RegDatCheckSameRectStat__FPviPfi(pRectStat,floor,Pos,DataType);
  return (int)(iVar1 != 0);
}

int MrecCheckHitRect(int floor, float *Pos, int DataType) {
  void *pvVar1;
  
  pvVar1 = RegDatGetStat__FiPfi(floor,Pos,DataType);
  return (int)(pvVar1 != (void *)0x0);
}

int MrecIsInEvent(float *pos, int label, int floor) {
	int buf_id;
	int *lp;
	int i;
	
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = RegDatGetBuffIDG__FiPCf(floor,pos);
  if (iVar2 < 0) {
    iVar2 = 0;
    piVar3 = RegDatGetHitList__Fv();
    do {
      iVar5 = RegDatGetHitNum__Fv();
      bVar1 = iVar5 <= iVar2;
      iVar2 = iVar2 + 1;
      if (bVar1) {
        return 0;
      }
      iVar5 = *piVar3;
      piVar3 = piVar3 + 1;
      iVar4 = MrecIsInEventSub__FPCfii(pos,iVar5,label);
      iVar5 = 1;
    } while (iVar4 == 0);
  }
  else {
    iVar2 = MrecIsInEventSub__FPCfii(pos,iVar2,label);
    iVar5 = 1;
    if (iVar2 == 0) {
      iVar5 = 0;
    }
  }
  return iVar5;
}

int MrecIsInEventSub(float *pos, int buf_id, int label) {
	MB_OUT_RECT *region_p;
	
  int iVar1;
  MB_OUT_RECT *pMVar2;
  
  iVar1 = RegDatVecFind4Label__Fii(buf_id,label);
  if (-1 < iVar1) {
    pMVar2 = RegDatVecNextFind__Fi(buf_id);
    while (pMVar2 != (MB_OUT_RECT *)0x0) {
      iVar1 = MrecIsInRectangle__FPCfPA3_Cf(pos,pMVar2->vec);
      if (iVar1 != 0) {
        return 1;
      }
      pMVar2 = RegDatVecNextFind__Fi(buf_id);
    }
  }
  return 0;
}

int MrecIsHitRectangleNum(int buf_no) {
	int buf_id;
	int i;
	int id_num;
	int *ids;
	int sam;
	MapRecBufCtrl *buf_ctrl;
	
  int iVar1;
  MapRecBufCtrl *pMVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 0;
  pMVar2 = MrecGetRegBuffID__Fi(buf_no);
  iVar1 = pMVar2->buf_id;
  iVar3 = 0;
  if (iVar1 != -1) {
    piVar4 = pMVar2->id_list;
    if (iVar1 + 3U < 2) {
      iVar1 = pMVar2->id_num;
      iVar5 = 0;
      iVar3 = iVar6;
      if (0 < iVar1) {
        do {
          iVar3 = *piVar4;
          piVar4 = piVar4 + 1;
          iVar5 = iVar5 + 1;
          iVar3 = RegDatGetVecNum__Fii(iVar3,0);
          iVar6 = iVar6 + iVar3;
          iVar3 = iVar6;
        } while (iVar5 < iVar1);
      }
    }
    else {
      iVar3 = RegDatGetVecNum__Fii(iVar1,0);
    }
  }
  return iVar3;
}

float*[4] MrecGetRectPtr(int num, int buf_no) {
	int i;
	int rec_sam;
	MB_OUT_RECT *reg_p;
	MapRecBufCtrl *buf_ctrl;
	int buf_id;
	int id_num;
	
  int iVar1;
  bool bVar2;
  MapRecBufCtrl *pMVar3;
  int iVar4;
  MB_OUT_RECT *pMVar5;
  float (*pafVar6) [4];
  int buff_id;
  int *piVar7;
  int iVar8;
  int iVar9;
  
  if (buf_no == 0) {
    pMVar3 = MrecGetRegBuffID__Fi(0);
  }
  else {
    pMVar3 = MrecGetRegBuffID__Fi(1);
  }
  buff_id = pMVar3->buf_id;
  pafVar6 = (float (*) [4])0x0;
  if (buff_id != -1) {
    if (buff_id + 3U < 2) {
      iVar1 = pMVar3->id_num;
      piVar7 = pMVar3->id_list;
      iVar8 = 0;
      iVar9 = 0;
      while (bVar2 = iVar8 < iVar1, iVar8 = iVar8 + 1, bVar2) {
        iVar4 = RegDatGetVecNum__Fii(*piVar7,0);
        if (num < iVar9 + iVar4) {
          buff_id = *piVar7;
          num = num - iVar9;
          break;
        }
        piVar7 = piVar7 + 1;
        iVar9 = iVar9 + iVar4;
      }
    }
    pMVar5 = RegDatGetVecPtr__Fii(buff_id,0);
    if (pMVar5 == (MB_OUT_RECT *)0x0) {
      pafVar6 = (float (*) [4])0x0;
    }
    else {
      pafVar6 = pMVar5[num].vec;
    }
  }
  return pafVar6;
}

int MrecSetHitRectInfo(int buf_no) {
	MapRecBufCtrl *buf_ctrl;
	int i;
	int buf_id;
	int id_num;
	int *ids;
	
  MapRecBufCtrl *pMVar1;
  int iVar2;
  MB_OUT_RECT *pMVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  
  if (buf_no == 0) {
    pMVar1 = MrecGetRegBuffID__Fi(0);
  }
  else {
    pMVar1 = MrecGetRegBuffID__Fi(1);
  }
  iVar4 = pMVar1->buf_id;
  if (iVar4 == -1) {
    iVar4 = 0;
    map_rec_info.id_num = 0;
  }
  else {
    if (iVar4 + 3U < 2) {
      iVar4 = pMVar1->id_num;
      piVar5 = pMVar1->id_list;
      iVar7 = 0;
      map_rec_info.id_num = iVar4;
      if (0 < iVar4) {
        piVar6 = map_rec_info.buf_ids;
        do {
          iVar7 = iVar7 + 1;
          iVar2 = RegDatGetVecNum__Fii(*piVar5,0);
          piVar6[-8] = iVar2;
          pMVar3 = RegDatGetVecPtr__Fii(*piVar5,0);
          iVar2 = *piVar5;
          piVar6[8] = (int)pMVar3;
          *piVar6 = iVar2;
          piVar6 = piVar6 + 1;
          piVar5 = piVar5 + 1;
        } while (iVar7 < iVar4);
        return 1;
      }
    }
    else {
      map_rec_info.id_num = 1;
      map_rec_info.rec_num_list[0] = RegDatGetVecNum__Fii(iVar4,0);
      map_rec_info.rec_list[0] = RegDatGetVecPtr__Fii(iVar4,0);
      map_rec_info.buf_ids[0] = iVar4;
    }
    iVar4 = 1;
  }
  return iVar4;
}

int MrecGetHitInfoIdNum() {
  return map_rec_info.id_num;
}

int* MrecGetHitInfoRecNumList() {
  return map_rec_info.rec_num_list;
}

float*[4] MrecGetHitInfoRecVecter(int list_no, int rec_no) {
  float (*pafVar1) [4];
  
  pafVar1 = (float (*) [4])0x0;
  if (map_rec_info.rec_list[list_no] != (MB_OUT_RECT *)0x0) {
    pafVar1 = map_rec_info.rec_list[list_no][rec_no].vec;
  }
  return pafVar1;
}

int MrecLineCross(float *pos1, float *pos2, int list_no, int num) {
	float *vec[4];
	int i;
	float vw[4][4];
	
  bool bVar1;
  float (*pafVar2) [4];
  int iVar3;
  float (*pafVar4) [4];
  int iVar5;
  float *pfVar6;
  int iVar7;
  float vw [4] [4];
  
  pafVar2 = MrecGetHitInfoRecVecter__Fii(list_no,num);
  pafVar4 = pafVar2;
  if (pafVar2 != (float (*) [4])0x0) {
    bVar1 = true;
    iVar7 = 0;
    while (bVar1) {
      iVar5 = iVar7 + 1;
      iVar3 = iVar5;
      if (iVar5 < 0) {
        iVar3 = iVar7 + 4;
      }
      iVar3 = HcBaseLineIntersect2__FPCfN30
                        (pos1,pos2,(float *)pafVar2[iVar7],
                         (float *)pafVar2[iVar5 + (iVar3 >> 2) * -4]);
      if (iVar3 != 0) break;
      bVar1 = iVar5 < 4;
      iVar7 = iVar5;
    }
    pafVar4 = (float (*) [4])0x0;
    if (iVar7 != 4) {
      if (debug_var.hit_disp != 0) {
        pfVar6 = vw + 1;
        iVar7 = 0;
        do {
          iVar3 = iVar7 + 1;
          sceVu0CopyVector(vw[iVar7],pafVar2[iVar7]);
          *pfVar6 = pos1[1];
          pfVar6 = pfVar6 + 4;
          iVar7 = iVar3;
        } while (iVar3 < 4);
        Draw3DSquare__FPfN30UcUcUcUc
                  ((float *)vw,(float *)vw[1],(float *)vw[2],(float *)vw[3],'@',0xff,'@','@');
      }
      pafVar4 = (float (*) [4])&GRA3DVU1MEM_VF02;
    }
  }
  return (int)pafVar4;
}

int MrecIsInHitRectangle(float *pos1, float *pos2, float *pos3, float *pos4, int list_no, int num) {
	float *vec[4];
	int i;
	
  float (*target) [4];
  int iVar1;
  int iVar2;
  
  target = MrecGetHitInfoRecVecter__Fii(list_no,num);
  if (target != (float (*) [4])0x0) {
    iVar2 = 0;
    while ((iVar2 < 4 &&
           ((iVar1 = HcBaseIsInTriXZ__FPCfN30((float *)target,pos1,pos2,pos3), iVar1 != 0 ||
            (iVar1 = HcBaseIsInTriXZ__FPCfN30((float *)target,pos3,pos4,pos1), iVar1 != 0))))) {
      target = target[1];
      iVar2 = iVar2 + 1;
    }
    target = (float (*) [4])(uint)(iVar2 == 4);
  }
  return (int)target;
}

int MrecIsNearRectangle(float *boxmin, float *boxmax, int list_no, int num) {
	float *vec[4];
	float vecmin[4];
	float vecmax[4];
	float *pvMin;
	float *pvMax;
	int i;
	
  float (*pafVar1) [4];
  int iVar2;
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  float vecmin [4];
  float vecmax [4];
  
  pafVar1 = MrecGetHitInfoRecVecter__Fii(list_no,num);
  if (pafVar1 != (float (*) [4])0x0) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
    auVar4 = _lqc2((undefined  [16])*pafVar1);
    auVar5 = _lqc2((undefined  [16])*pafVar1);
    iVar2 = 2;
    do {
      pafVar1 = pafVar1[1];
      auVar3 = _lqc2((undefined  [16])*pafVar1);
      auVar4 = _vmax(auVar4,auVar3);
      auVar5 = _vmini(auVar5,auVar3);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
    auVar4 = _sqc2(auVar4);
    auVar5 = _sqc2(auVar5);
                    /* end of inlined section */
    vecmin[0] = auVar5._0_4_;
    pafVar1 = (float (*) [4])0x0;
    if (((vecmin[0] <= *boxmax) && (vecmax[0] = auVar4._0_4_, *boxmin <= vecmax[0])) &&
       (vecmin[2] = auVar5._8_4_, vecmin[2] <= boxmax[2])) {
      vecmax[2] = auVar4._8_4_;
      pafVar1 = (float (*) [4])&GRA3DVU1MEM_VF02;
      if (vecmax[2] < boxmin[2]) {
        pafVar1 = (float (*) [4])0x0;
      }
    }
  }
  return (int)pafVar1;
}

int MrecSetSEInfo(float *pos) {
	int i;
	int j;
	int id;
	int buf_id;
	int id_num;
	int *ids;
	MB_OUT_RECT *region_p;
	int reg_num;
	MDAT_SE *se;
	MapRecBufCtrl *buf_ctrl;
	int w_id;
	MDAT_SE *w_se;
	
  int buff_id;
  int iVar1;
  MapRecBufCtrl *pMVar2;
  MB_OUT_RECT *pMVar3;
  int iVar4;
  int iVar5;
  MDAT_SE *pMVar6;
  int iVar7;
  MDAT_SE *pMVar8;
  MDAT_SE *pMVar9;
  int iVar10;
  int *piVar11;
  
  iVar7 = -1;
  pMVar9 = (MDAT_SE *)0x0;
  pMVar2 = MrecGetRegBuffID__Fi(0);
  iVar10 = 0;
  if (pMVar2->buf_id != -1) {
    iVar10 = pMVar2->id_num;
    piVar11 = pMVar2->id_list;
    if (0 < iVar10) {
      do {
        buff_id = *piVar11;
        pMVar3 = RegDatGetVecPtr__Fii(buff_id,4);
        iVar4 = RegDatGetVecNum__Fii(buff_id,4);
        pMVar8 = pMVar9;
        if (0 < iVar4) {
          do {
            iVar5 = MrecIsInRectangle__FPCfPA3_Cf(pos,pMVar3->vec);
            iVar1 = iVar7;
            pMVar9 = pMVar8;
            if (iVar5 != 0) {
              iVar5 = pMVar3->reg_id;
              pMVar6 = (MDAT_SE *)RegDatGetStPtr__Fii(buff_id,iVar5);
              iVar1 = iVar5;
              pMVar9 = pMVar6;
              if (((iVar7 != -1) && (iVar1 = iVar7, pMVar9 = pMVar8, iVar7 != iVar5)) &&
                 (iVar1 = iVar5, pMVar9 = pMVar6, pMVar6->Pre <= pMVar8->Pre)) {
                iVar1 = iVar7;
                pMVar9 = pMVar8;
              }
            }
            iVar7 = iVar1;
            iVar4 = iVar4 + -1;
            pMVar3 = pMVar3 + 1;
            pMVar8 = pMVar9;
          } while (iVar4 != 0);
        }
        iVar10 = iVar10 + -1;
        piVar11 = piVar11 + 1;
      } while (iVar10 != 0);
    }
    if (iVar7 == -1) {
      printf(" foot se miss \n");
      iVar10 = 0;
    }
    else {
      iVar10 = 1;
      se_info = pMVar9;
    }
  }
  return iVar10;
}

int MrecGetSeNo() {
	MDAT_SE *se;
	
  MDAT_SE *pMVar1;
  int iVar2;
  
  pMVar1 = MrecGetSeInfo__Fv();
  iVar2 = -1;
  if (pMVar1 != (MDAT_SE *)0x0) {
    iVar2 = pMVar1->No;
  }
  return iVar2;
}

int MrecIsDoorRectangleNum() {
	int buf_id;
	int i;
	int id_num;
	int *ids;
	int sam;
	
  MapRecBufCtrl *pMVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 0;
  pMVar1 = MrecGetRegBuffID__Fi(0);
  iVar2 = pMVar1->buf_id;
  iVar4 = 0;
  if (iVar2 != -1) {
    if (iVar2 + 3U < 2) {
      iVar5 = 0;
      iVar2 = RegDatGetHitNum__Fv();
      piVar3 = RegDatGetHitList__Fv();
      if (iVar2 < 1) {
        iVar4 = 0;
      }
      else {
        do {
          iVar4 = *piVar3;
          piVar3 = piVar3 + 1;
          iVar5 = iVar5 + 1;
          iVar4 = RegDatGetVecNum__Fii(iVar4,7);
          iVar6 = iVar6 + iVar4;
          iVar4 = iVar6;
        } while (iVar5 < iVar2);
      }
    }
    else {
      iVar4 = RegDatGetVecNum__Fii(iVar2,7);
    }
  }
  return iVar4;
}

int MrecPointDoorRectangle(float *len, float *pos, float *a, float *b, int num, float r) {
	MB_OUT_RECT *reg_p;
	int buf_id;
	int id_num;
	int i;
	int rec_sam;
	MDAT_DOOR *door;
	
  bool bVar1;
  MapRecBufCtrl *pMVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  MB_OUT_RECT *pMVar6;
  short *psVar7;
  int iVar8;
  MB_OUT_RECT *pMVar9;
  int iVar10;
  int iVar11;
  
  pMVar2 = MrecGetRegBuffID__Fi(0);
  iVar8 = pMVar2->buf_id;
  pMVar9 = (MB_OUT_RECT *)0x0;
  if (iVar8 != -1) {
    if (iVar8 + 3U < 2) {
      iVar10 = 0;
      iVar3 = RegDatGetHitNum__Fv();
      piVar4 = RegDatGetHitList__Fv();
      iVar11 = 0;
      while (bVar1 = iVar10 < iVar3, iVar10 = iVar10 + 1, bVar1) {
        iVar5 = RegDatGetVecNum__Fii(*piVar4,7);
        if (num < iVar11 + iVar5) {
          iVar8 = *piVar4;
          num = num - iVar11;
          break;
        }
        piVar4 = piVar4 + 1;
        iVar11 = iVar11 + iVar5;
      }
    }
    pMVar6 = RegDatGetVecPtr__Fii(iVar8,7);
    pMVar9 = pMVar6;
    if (pMVar6 != (MB_OUT_RECT *)0x0) {
      psVar7 = RegDatGetStPtr__Fii(iVar8,pMVar6[num].reg_id);
      if (psVar7 == (short *)0x0) {
        pMVar9 = (MB_OUT_RECT *)0x0;
      }
      else {
        pMVar9 = (MB_OUT_RECT *)0x0;
        if (*(int *)(psVar7 + 0x24) != 0) {
          iVar8 = HcBasePointRectangle__FPfN30PA3_ff(len,pos,a,b,pMVar6[num].vec,r);
          return iVar8;
        }
      }
    }
  }
  return (int)pMVar9;
}

int MrecSetDoorHitRectInfo(int buf_no) {
	MapRecBufCtrl *buf_ctrl;
	int i;
	int buf_id;
	int id_num;
	int *ids;
	
  MapRecBufCtrl *pMVar1;
  int iVar2;
  MB_OUT_RECT *pMVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  
  if (buf_no == 0) {
    pMVar1 = MrecGetRegBuffID__Fi(0);
  }
  else {
    pMVar1 = MrecGetRegBuffID__Fi(1);
  }
  iVar4 = pMVar1->buf_id;
  if (iVar4 == -1) {
    iVar4 = 0;
    map_door_rec_info.id_num = 0;
  }
  else {
    if (iVar4 + 3U < 2) {
      iVar4 = pMVar1->id_num;
      piVar5 = pMVar1->id_list;
      iVar7 = 0;
      map_door_rec_info.id_num = iVar4;
      if (0 < iVar4) {
        piVar6 = map_door_rec_info.buf_ids;
        do {
          iVar7 = iVar7 + 1;
          iVar2 = RegDatGetVecNum__Fii(*piVar5,7);
          piVar6[-8] = iVar2;
          pMVar3 = RegDatGetVecPtr__Fii(*piVar5,7);
          iVar2 = *piVar5;
          piVar6[8] = (int)pMVar3;
          *piVar6 = iVar2;
          piVar6 = piVar6 + 1;
          piVar5 = piVar5 + 1;
        } while (iVar7 < iVar4);
        return 1;
      }
    }
    else {
      map_door_rec_info.id_num = 1;
      map_door_rec_info.rec_num_list[0] = RegDatGetVecNum__Fii(iVar4,7);
      map_door_rec_info.rec_list[0] = RegDatGetVecPtr__Fii(iVar4,7);
      map_door_rec_info.buf_ids[0] = iVar4;
    }
    iVar4 = 1;
  }
  return iVar4;
}

int MrecGetDoorHitInfoIdNum() {
  return map_door_rec_info.id_num;
}

int* MrecGetDoorHitInfoRecNumList() {
  return map_door_rec_info.rec_num_list;
}

float*[4] MrecGetDoorHitInfoRecVecter(int list_no, int rec_no) {
  float (*pafVar1) [4];
  
  pafVar1 = (float (*) [4])0x0;
  if (map_door_rec_info.rec_list[list_no] != (MB_OUT_RECT *)0x0) {
    pafVar1 = map_door_rec_info.rec_list[list_no][rec_no].vec;
  }
  return pafVar1;
}

int MrecCheckDoorHitSta(int list_no, int rec_no) {
	MDAT_DOOR *door;
	
  short *psVar1;
  
  psVar1 = (short *)0x0;
  if ((map_door_rec_info.rec_list[list_no] != (MB_OUT_RECT *)0x0) &&
     (psVar1 = RegDatGetStPtr__Fii(map_door_rec_info.buf_ids[list_no],
                                   map_door_rec_info.rec_list[list_no][rec_no].reg_id),
     psVar1 != (short *)0x0)) {
    psVar1 = (short *)(uint)(*(int *)(psVar1 + 0x24) != 0);
  }
  return (int)psVar1;
}

int MrecDoorLineCross(float *pos1, float *pos2, int list_no, int num) {
	float *vec[4];
	int i;
	float vw[4][4];
	
  bool bVar1;
  float (*pafVar2) [4];
  int iVar3;
  float (*pafVar4) [4];
  int iVar5;
  float *pfVar6;
  int iVar7;
  float vw [4] [4];
  
  pafVar2 = MrecGetDoorHitInfoRecVecter__Fii(list_no,num);
  pafVar4 = pafVar2;
  if (pafVar2 != (float (*) [4])0x0) {
    bVar1 = true;
    iVar7 = 0;
    while (bVar1) {
      iVar5 = iVar7 + 1;
      iVar3 = iVar5;
      if (iVar5 < 0) {
        iVar3 = iVar7 + 4;
      }
      iVar3 = HcBaseLineIntersect2__FPCfN30
                        (pos1,pos2,(float *)pafVar2[iVar7],
                         (float *)pafVar2[iVar5 + (iVar3 >> 2) * -4]);
      if (iVar3 != 0) break;
      bVar1 = iVar5 < 4;
      iVar7 = iVar5;
    }
    pafVar4 = (float (*) [4])0x0;
    if (iVar7 != 4) {
      if (debug_var.hit_disp != 0) {
        pfVar6 = vw + 1;
        iVar7 = 0;
        do {
          iVar3 = iVar7 + 1;
          sceVu0CopyVector(vw[iVar7],pafVar2[iVar7]);
          *pfVar6 = pos1[1];
          pfVar6 = pfVar6 + 4;
          iVar7 = iVar3;
        } while (iVar3 < 4);
        Draw3DSquare__FPfN30UcUcUcUc
                  ((float *)vw,(float *)vw[1],(float *)vw[2],(float *)vw[3],'@',0xff,'@','@');
      }
      pafVar4 = (float (*) [4])&GRA3DVU1MEM_VF02;
    }
  }
  return (int)pafVar4;
}

int MrecIsNearDoorRectangle(float *boxmin, float *boxmax, int list_no, int num) {
	float *vec[4];
	float vecmin[4];
	float vecmax[4];
	float *pvMin;
	float *pvMax;
	int i;
	
  float (*pafVar1) [4];
  int iVar2;
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  float vecmin [4];
  float vecmax [4];
  
  pafVar1 = MrecGetDoorHitInfoRecVecter__Fii(list_no,num);
  if (pafVar1 != (float (*) [4])0x0) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
    auVar4 = _lqc2((undefined  [16])*pafVar1);
    auVar5 = _lqc2((undefined  [16])*pafVar1);
    iVar2 = 2;
    do {
      pafVar1 = pafVar1[1];
      auVar3 = _lqc2((undefined  [16])*pafVar1);
      auVar4 = _vmax(auVar4,auVar3);
      auVar5 = _vmini(auVar5,auVar3);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
    auVar4 = _sqc2(auVar4);
    auVar5 = _sqc2(auVar5);
                    /* end of inlined section */
    vecmin[0] = auVar5._0_4_;
    pafVar1 = (float (*) [4])0x0;
    if (((vecmin[0] <= *boxmax) && (vecmax[0] = auVar4._0_4_, *boxmin <= vecmax[0])) &&
       (vecmin[2] = auVar5._8_4_, vecmin[2] <= boxmax[2])) {
      vecmax[2] = auVar4._8_4_;
      pafVar1 = (float (*) [4])&GRA3DVU1MEM_VF02;
      if (vecmax[2] < boxmin[2]) {
        pafVar1 = (float (*) [4])0x0;
      }
    }
  }
  return (int)pafVar1;
}

int MrecGetStaInfo(float *rot, int floor, float *pos) {
	int i;
	int buf_id;
	MB_OUT_RECT *region_p;
	int reg_num;
	MDAT_FLOOR *stairs;
	
  int buff_id;
  MB_OUT_RECT *pMVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  short *psVar5;
  float fVar6;
  
  psVar5 = (short *)0x0;
  buff_id = RegDatGetBuffIDG__FiPCf(floor,pos);
  uVar3 = 0;
  if (-1 < buff_id) {
    pMVar1 = RegDatGetVecPtr__Fii(buff_id,10);
    iVar2 = RegDatGetVecNum__Fii(buff_id,10);
    if (iVar2 < 1) {
      uVar3 = 0;
    }
    else {
      do {
        iVar4 = MrecIsInRectangle__FPCfPA3_Cf(pos,pMVar1->vec);
        if (iVar4 != 0) {
          psVar5 = RegDatGetStPtr__Fii(buff_id,pMVar1->reg_id);
          fVar6 = MrecGetStaRot__Fi(*(int *)(psVar5 + 6));
          *rot = fVar6;
        }
        iVar2 = iVar2 + -1;
        pMVar1 = pMVar1 + 1;
      } while (iVar2 != 0);
      uVar3 = (uint)(psVar5 != (short *)0x0);
    }
  }
  return uVar3;
}

float MrecGetStaRot(int rot) {
  float *pfVar1;
  
  pfVar1 = MrecGetStaRotTbl__Fv();
  return pfVar1[rot];
}

int MrecIsInRectangle(float *pos, float *rec[4]) {
  int iVar1;
  uint uVar2;
  
  iVar1 = HcBaseIsInTriXZ__FPCfN30(pos,(float *)rec,(float *)rec[1],(float *)rec[2]);
  if (iVar1 == 0) {
    iVar1 = HcBaseIsInTriXZ__FPCfN30(pos,(float *)rec,(float *)rec[2],(float *)rec[3]);
    uVar2 = (uint)(iVar1 != 0);
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

MDAT_CAM* MrecGetCameraInfo() {
  return cam_info;
}

static MDAT_SE* MrecGetSeInfo() {
  return se_info;
}

static float* MrecGetStaRotTbl() {
  return sta_rot_tbl;
}

int DrawCameraRect(float *pos) {
	MB_OUT_RECT *reg_p;
	int i;
	int j;
	int buf_id;
	int num;
	float v[4][4];
	
  float (*pafVar1) [4];
  MapRecBufCtrl *pMVar2;
  int iVar3;
  MB_OUT_RECT *pMVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  float v [4] [4];
  
  iVar3 = 0;
  if (debug_var.hit_disp != 0) {
    pMVar2 = MrecGetRegBuffID__Fi(0);
    iVar9 = pMVar2->buf_id;
    iVar3 = 0;
    if (-1 < iVar9) {
      iVar3 = RegDatGetVecNum__Fii(iVar9,1);
      pMVar4 = RegDatGetVecPtr__Fii(iVar9,1);
      iVar9 = 0;
      if (0 < iVar3) {
        iVar5 = 0;
        do {
          iVar8 = 0;
          pfVar7 = v + 1;
          pfVar6 = (float *)(pMVar4->pad + (iVar5 + iVar9) * 4 + -2);
          pafVar1 = v;
          do {
            pfVar6 = pfVar6 + 4;
            sceVu0CopyVector(pafVar1,pfVar6);
            iVar8 = iVar8 + 1;
            *pfVar7 = pos[1];
            pfVar7 = pfVar7 + 4;
            pafVar1 = (float (*) [4])((int)pafVar1 + 0x10);
          } while (iVar8 < 4);
          iVar9 = iVar9 + 1;
          Draw3DSquare__FPfN30UcUcUcUc
                    ((float *)v,(float *)v[1],(float *)v[2],(float *)v[3],' ',0x80,0x80,'@');
          iVar5 = iVar9 * 4;
        } while (iVar9 < iVar3);
      }
      iVar3 = 1;
    }
  }
  return iVar3;
}

int DrawCameraRectOne(int i, float *pos) {
	int j;
	int buf_id;
	float v[4][4];
	
  float (*pafVar1) [4];
  MapRecBufCtrl *pMVar2;
  MB_OUT_RECT *pMVar3;
  float *pfVar4;
  int iVar5;
  float v [4] [4];
  
  iVar5 = 0;
  if (debug_var.hit_disp != 0) {
    pMVar2 = MrecGetRegBuffID__Fi(0);
    iVar5 = 0;
    if (-1 < pMVar2->buf_id) {
      iVar5 = 0;
      pMVar3 = RegDatGetVecPtr__Fii(pMVar2->buf_id,1);
      pfVar4 = v + 1;
      pMVar3 = pMVar3 + i;
      pafVar1 = v;
      do {
        pMVar3 = (MB_OUT_RECT *)pMVar3->vec;
        sceVu0CopyVector(pafVar1,pMVar3);
        iVar5 = iVar5 + 1;
        *pfVar4 = pos[1];
        pfVar4 = pfVar4 + 4;
        pafVar1 = (float (*) [4])((int)pafVar1 + 0x10);
      } while (iVar5 < 4);
      Draw3DSquare__FPfN30UcUcUcUc
                ((float *)v,(float *)v[1],(float *)v[2],(float *)v[3],'@',0x80,0x80,'@');
      iVar5 = 1;
    }
  }
  return iVar5;
}

int DrawEventRect(float *pos) {
	MB_OUT_RECT *reg_p;
	int i;
	int j;
	int num;
	int buf_id;
	float v[4][4];
	
  float (*pafVar1) [4];
  MapRecBufCtrl *pMVar2;
  int iVar3;
  MB_OUT_RECT *pMVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  float v [4] [4];
  
  iVar3 = 0;
  if (debug_var.hit_disp != 0) {
    pMVar2 = MrecGetRegBuffID__Fi(0);
    iVar9 = pMVar2->buf_id;
    iVar3 = 0;
    if (-1 < iVar9) {
      iVar3 = RegDatGetVecNum__Fii(iVar9,2);
      pMVar4 = RegDatGetVecPtr__Fii(iVar9,2);
      iVar9 = 0;
      if (0 < iVar3) {
        iVar5 = 0;
        do {
          iVar8 = 0;
          pfVar7 = v + 1;
          pfVar6 = (float *)(pMVar4->pad + (iVar5 + iVar9) * 4 + -2);
          pafVar1 = v;
          do {
            pfVar6 = pfVar6 + 4;
            sceVu0CopyVector(pafVar1,pfVar6);
            iVar8 = iVar8 + 1;
            *pfVar7 = pos[1];
            pfVar7 = pfVar7 + 4;
            pafVar1 = (float (*) [4])((int)pafVar1 + 0x10);
          } while (iVar8 < 4);
          iVar9 = iVar9 + 1;
          Draw3DSquare__FPfN30UcUcUcUc
                    ((float *)v,(float *)v[1],(float *)v[2],(float *)v[3],' ',0x80,0x80,'@');
          iVar5 = iVar9 * 4;
        } while (iVar9 < iVar3);
      }
      iVar3 = 1;
    }
  }
  return iVar3;
}

int DrawEventRectOne(int i, float *pos) {
	int j;
	int buf_id;
	float v[4][4];
	
  float (*pafVar1) [4];
  MapRecBufCtrl *pMVar2;
  MB_OUT_RECT *pMVar3;
  float *pfVar4;
  int iVar5;
  float v [4] [4];
  
  iVar5 = 0;
  if (debug_var.hit_disp != 0) {
    pMVar2 = MrecGetRegBuffID__Fi(0);
    iVar5 = 0;
    if (-1 < pMVar2->buf_id) {
      iVar5 = 0;
      pMVar3 = RegDatGetVecPtr__Fii(pMVar2->buf_id,2);
      pfVar4 = v + 1;
      pMVar3 = pMVar3 + i;
      pafVar1 = v;
      do {
        pMVar3 = (MB_OUT_RECT *)pMVar3->vec;
        sceVu0CopyVector(pafVar1,pMVar3);
        iVar5 = iVar5 + 1;
        *pfVar4 = pos[1];
        pfVar4 = pfVar4 + 4;
        pafVar1 = (float (*) [4])((int)pafVar1 + 0x10);
      } while (iVar5 < 4);
      Draw3DSquare__FPfN30UcUcUcUc
                ((float *)v,(float *)v[1],(float *)v[2],(float *)v[3],'@',0x80,0x80,'@');
      iVar5 = 1;
    }
  }
  return iVar5;
}

int DrawMapHitRect(float *pos) {
	MB_OUT_RECT *reg_p;
	int i;
	int j;
	int num;
	int buf_id;
	float v[4][4];
	
  float (*pafVar1) [4];
  float fVar2;
  MapRecBufCtrl *pMVar3;
  int iVar4;
  MB_OUT_RECT *pMVar5;
  int iVar6;
  float *pfVar7;
  float *pfVar8;
  int iVar9;
  int iVar10;
  float v [4] [4];
  
  iVar4 = 0;
  if (debug_var.hit_disp != 0) {
    pMVar3 = MrecGetRegBuffID__Fi(0);
    iVar10 = pMVar3->buf_id;
    iVar4 = 0;
    if (-1 < iVar10) {
      iVar4 = RegDatGetVecNum__Fii(iVar10,0);
      pMVar5 = RegDatGetVecPtr__Fii(iVar10,0);
      fVar2 = DAT_003ee4b4;
      iVar10 = 0;
      if (0 < iVar4) {
        iVar6 = 0;
        do {
          iVar9 = 0;
          pfVar8 = v + 1;
          pfVar7 = (float *)(pMVar5->pad + (iVar6 + iVar10) * 4 + -2);
          pafVar1 = v;
          do {
            pfVar7 = pfVar7 + 4;
            sceVu0CopyVector(pafVar1,pfVar7);
            iVar9 = iVar9 + 1;
            *pfVar8 = pos[1] - fVar2;
            pfVar8 = pfVar8 + 4;
            pafVar1 = (float (*) [4])((int)pafVar1 + 0x10);
          } while (iVar9 < 4);
          iVar10 = iVar10 + 1;
          Draw3DSquare__FPfN30UcUcUcUc
                    ((float *)v,(float *)v[1],(float *)v[2],(float *)v[3],0x80,'@',' ','@');
          iVar6 = iVar10 * 4;
        } while (iVar10 < iVar4);
      }
      iVar4 = 1;
    }
  }
  return iVar4;
}

int DrawMapHitRectOne(int i, float *pos) {
	int j;
	int buf_id;
	float v[4][4];
	
  float (*pafVar1) [4];
  MapRecBufCtrl *pMVar2;
  MB_OUT_RECT *pMVar3;
  float *pfVar4;
  int iVar5;
  float v [4] [4];
  
  iVar5 = 0;
  if (debug_var.hit_disp != 0) {
    pMVar2 = MrecGetRegBuffID__Fi(0);
    iVar5 = 0;
    if (-1 < pMVar2->buf_id) {
      iVar5 = 0;
      pMVar3 = RegDatGetVecPtr__Fii(pMVar2->buf_id,0);
      pfVar4 = v + 1;
      pMVar3 = pMVar3 + i;
      pafVar1 = v;
      do {
        pMVar3 = (MB_OUT_RECT *)pMVar3->vec;
        sceVu0CopyVector(pafVar1,pMVar3);
        iVar5 = iVar5 + 1;
        *pfVar4 = pos[1];
        pfVar4 = pfVar4 + 4;
        pafVar1 = (float (*) [4])((int)pafVar1 + 0x10);
      } while (iVar5 < 4);
      Draw3DSquare__FPfN30UcUcUcUc
                ((float *)v,(float *)v[1],(float *)v[2],(float *)v[3],' ','@',0x80,'@');
      iVar5 = 1;
    }
  }
  return iVar5;
}

int DrawSeRect(float *pos) {
	MB_OUT_RECT *reg_p;
	int i;
	int j;
	int buf_id;
	int num;
	float v[4][4];
	
  float (*pafVar1) [4];
  MapRecBufCtrl *pMVar2;
  int iVar3;
  MB_OUT_RECT *pMVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  float v [4] [4];
  
  iVar3 = 0;
  if (debug_var.hit_disp != 0) {
    pMVar2 = MrecGetRegBuffID__Fi(0);
    iVar9 = pMVar2->buf_id;
    iVar3 = 0;
    if (-1 < iVar9) {
      iVar3 = RegDatGetVecNum__Fii(iVar9,4);
      pMVar4 = RegDatGetVecPtr__Fii(iVar9,4);
      iVar9 = 0;
      if (0 < iVar3) {
        iVar5 = 0;
        do {
          iVar8 = 0;
          pfVar7 = v + 1;
          pfVar6 = (float *)(pMVar4->pad + (iVar5 + iVar9) * 4 + -2);
          pafVar1 = v;
          do {
            pfVar6 = pfVar6 + 4;
            sceVu0CopyVector(pafVar1,pfVar6);
            iVar8 = iVar8 + 1;
            *pfVar7 = pos[1];
            pfVar7 = pfVar7 + 4;
            pafVar1 = (float (*) [4])((int)pafVar1 + 0x10);
          } while (iVar8 < 4);
          iVar9 = iVar9 + 1;
          Draw3DSquare__FPfN30UcUcUcUc
                    ((float *)v,(float *)v[1],(float *)v[2],(float *)v[3],' ',0x80,0x80,'@');
          iVar5 = iVar9 * 4;
        } while (iVar9 < iVar3);
      }
      iVar3 = 1;
    }
  }
  return iVar3;
}

int DrawSeRectOne(int i, float *pos) {
	int j;
	int buf_id;
	float v[4][4];
	
  float (*pafVar1) [4];
  MapRecBufCtrl *pMVar2;
  MB_OUT_RECT *pMVar3;
  float *pfVar4;
  int iVar5;
  float v [4] [4];
  
  iVar5 = 0;
  if (debug_var.hit_disp != 0) {
    pMVar2 = MrecGetRegBuffID__Fi(0);
    iVar5 = 0;
    if (-1 < pMVar2->buf_id) {
      iVar5 = 0;
      pMVar3 = RegDatGetVecPtr__Fii(pMVar2->buf_id,4);
      pfVar4 = v + 1;
      pMVar3 = pMVar3 + i;
      pafVar1 = v;
      do {
        pMVar3 = (MB_OUT_RECT *)pMVar3->vec;
        sceVu0CopyVector(pafVar1,pMVar3);
        iVar5 = iVar5 + 1;
        *pfVar4 = pos[1];
        pfVar4 = pfVar4 + 4;
        pafVar1 = (float (*) [4])((int)pafVar1 + 0x10);
      } while (iVar5 < 4);
      Draw3DSquare__FPfN30UcUcUcUc
                ((float *)v,(float *)v[1],(float *)v[2],(float *)v[3],'@',0x80,0x80,'@');
      iVar5 = 1;
    }
  }
  return iVar5;
}
