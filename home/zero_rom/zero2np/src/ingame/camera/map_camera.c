// STATUS: NOT STARTED

#include "map_camera.h"

typedef enum {
	APPROACH_CAMERA_FLOW_INIT = 0,
	APPROACH_CAMERA_FLOW_MOVE = 1,
	APPROACH_CAMERA_FLOW_KEEP = 2,
	APPROACH_CAMERA_FLOW_SHOULDER = 3,
	APPROACH_CAMERA_FLOW_TALK_INIT = 10,
	APPROACH_CAMERA_FLOW_TALK_KEEP = 11,
	APPROACH_CAMERA_FLOW_DEAD_INIT = 20,
	APPROACH_CAMERA_FLOW_DEAD_KEEP = 21
} APPROACH_CAMERA_FLOW;

typedef struct {
	int EventCamFlg;
	int SpecialCamFlg;
	int RoomNo;
	float *pFinCamTarget[4];
	void *pRectStat;
	int CamDataType;
	int BattleCamAccept;
	int RectCamLastTime;
	int CamTarget;
} MAP_CAMERA_CTRL;

typedef struct {
	float Power[2];
	int Counter;
	int AllTime;
	short int RequestFlg;
	short int LoopNum;
} QUAKE_CAMERA_CTRL;

u_short fior_tm = 0;
u_short ori_fior_tm = 0;
static MAP_CAMERA_CTRL map_camera_ctrl;
static APPROACH_CAMERA app_camera;
static QUAKE_CAMERA_CTRL QuakeCameraCtrl;

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3bb0d0;
	
  g3ddbgAssert__FbPCce(false,str_849);
  return;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_void__003f1a38,_max,v);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_char__003f1a40,_max,v);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi("unsigned int*",_max,v);
  }
  return (uint **)0x0;
}

void CameraMain() {
	MAP_CAMERA_CTRL *pMcCtrl;
	int RectCamFlg;
	
  int RectCamFlg;
  
  RectCamFlg = map_camera_ctrl.RectCamLastTime;
  map_camera_ctrl.RectCamLastTime = 0;
  if (map_camera_ctrl.pFinCamTarget == (float (*) [4])0x0) {
    if (plyr_wrk.cmn_wrk.mode == '\x05') {
      FinderInCameraCtrl__Fv();
    }
    else if (plyr_wrk.cmn_wrk.mode == '\x06') {
      FinderModeCameraCtrl__Fv();
    }
    else if (app_camera.mode == 0) {
      MapCamNormalCameraCtrl__Fi(RectCamFlg);
    }
    else {
      PlyrApproachCameraCtrl__Fi(RectCamFlg);
    }
  }
  else {
    gra3dcamSetTarget__FPCfi((float *)map_camera_ctrl.pFinCamTarget,1);
    gra3dApplyCamera__FP11GRA3DCAMERAi((GRA3DCAMERA *)0x0,1);
  }
  if (QuakeCameraCtrl.RequestFlg != 0) {
    QuakeCameraMain__Fv();
  }
  FinderInOverRapCtrl__Fv();
  return;
}

void CameraMainInit() {
	MAP_CAMERA_CTRL *pMcCtrl;
	
  map_camera_ctrl.CamDataType = -1;
  map_camera_ctrl.RoomNo = -1;
  map_camera_ctrl.CamTarget = 0;
  map_camera_ctrl.EventCamFlg = 0;
  map_camera_ctrl.SpecialCamFlg = 0;
  map_camera_ctrl.pFinCamTarget = (float (*) [4])0x0;
  map_camera_ctrl.pRectStat = (void *)0x0;
  map_camera_ctrl.BattleCamAccept = 0;
  map_camera_ctrl.RectCamLastTime = 0;
  memset(&app_camera,0,0xb0);
  QuakeCameraInit__Fv();
  return;
}

void MapCamSetEventCameraFlg(int Flg) {
	MAP_CAMERA_CTRL *pMcCtrl;
	
  if (Flg == 0) {
    map_camera_ctrl.EventCamFlg = 0;
    EventCameraInitCtrlReq__Fv();
  }
  else {
    map_camera_ctrl.EventCamFlg = 1;
  }
  return;
}

int MapCamGetEventCameraFlg() {
  return map_camera_ctrl.EventCamFlg;
}

static void MapCamNormalCameraCtrl(int RectCamFlg) {
	static char __FUNCTION__[23] = {
		/* [0] = */ 77,
		/* [1] = */ 97,
		/* [2] = */ 112,
		/* [3] = */ 67,
		/* [4] = */ 97,
		/* [5] = */ 109,
		/* [6] = */ 78,
		/* [7] = */ 111,
		/* [8] = */ 114,
		/* [9] = */ 109,
		/* [10] = */ 97,
		/* [11] = */ 108,
		/* [12] = */ 67,
		/* [13] = */ 97,
		/* [14] = */ 109,
		/* [15] = */ 101,
		/* [16] = */ 114,
		/* [17] = */ 97,
		/* [18] = */ 67,
		/* [19] = */ 116,
		/* [20] = */ 114,
		/* [21] = */ 108,
		/* [22] = */ 0
	};
	MAP_CAMERA_CTRL *pMcCtrl;
	MDAT_CAM_SP *pCamSp;
	MB_OUT_RECT *pRect;
	PLCMN_WRK *pPlayerCmnWrk;
	int GetCamDataType;
	
  ushort uVar1;
  int iVar2;
  int iVar3;
  MDAT_CAM_SP *pCamSp;
  MB_OUT_RECT *pMVar4;
  float *pfVar5;
  PLYR_WRK *pPlayerCmnWrk;
  MB_OUT_RECT *pRect;
  
  if (map_camera_ctrl.EventCamFlg == 0) {
    iVar2 = -1;
    if (map_camera_ctrl.CamTarget == 0) {
      pPlayerCmnWrk = &plyr_wrk;
    }
    else {
      pPlayerCmnWrk = (PLYR_WRK *)&sis_wrk;
    }
    if ((plyr_wrk.cmn_wrk.st.sta & 0x20) == 0) {
      map_camera_ctrl.BattleCamAccept = 0;
    }
    else {
      iVar3 = MrecCheckHitRect__FiPfi
                        ((int)(short)*(ushort *)&pPlayerCmnWrk->cmn_wrk,
                         (pPlayerCmnWrk->cmn_wrk).mbox.pos,8);
      if (iVar3 == 0) {
        map_camera_ctrl.BattleCamAccept = 1;
      }
      else if (map_camera_ctrl.BattleCamAccept != 0) {
        iVar2 = 8;
      }
    }
    if ((iVar2 == -1) &&
       ((pfVar5 = (pPlayerCmnWrk->cmn_wrk).mbox.pos, map_camera_ctrl.CamDataType == -1 ||
        (iVar3 = MrecCheckOnSameCamRect__FPviPfi
                           (map_camera_ctrl.pRectStat,(int)(short)*(ushort *)&pPlayerCmnWrk->cmn_wrk
                            ,pfVar5,map_camera_ctrl.CamDataType),
        iVar2 = map_camera_ctrl.CamDataType, iVar3 == 0)))) {
      CamChangeFlg__10CFEneEntryi(&fene_entry,1);
      iVar3 = MrecCheckHitRect__FiPfi((int)(short)*(ushort *)&pPlayerCmnWrk->cmn_wrk,pfVar5,9);
      iVar2 = 9;
      if (iVar3 == 0) {
        iVar2 = 1;
      }
    }
    if (iVar2 == 9) {
      if (map_camera_ctrl.SpecialCamFlg == 0) {
        MapCamUpdateRoomNo__FP15MAP_CAMERA_CTRL(&map_camera_ctrl);
        uVar1 = *(ushort *)&pPlayerCmnWrk->cmn_wrk;
      }
      else {
        uVar1 = *(ushort *)&pPlayerCmnWrk->cmn_wrk;
      }
      pfVar5 = (pPlayerCmnWrk->cmn_wrk).mbox.pos;
      map_camera_ctrl.SpecialCamFlg = 1;
      pCamSp = MrecGetCameraSpInfo__FPP11MB_OUT_RECTPviPf
                         (&pRect,map_camera_ctrl.pRectStat,(int)(short)uVar1,pfVar5);
      pMVar4 = pRect;
      if (pCamSp != (MDAT_CAM_SP *)0x0) {
        if (pRect != (MB_OUT_RECT *)0x0) {
          MapCamSpCameraCtrl__FP11MDAT_CAM_SPP11MB_OUT_RECTPf(pCamSp,pRect,pfVar5);
          map_camera_ctrl.pRectStat = pCamSp;
          map_camera_ctrl.CamDataType = iVar2;
          return;
        }
        pMVar4 = (MB_OUT_RECT *)0x0;
      }
      if (pMVar4 == (MB_OUT_RECT *)0x0) {
        _SetLineInfo__FPCciT0T0("map_camera.c",0x134,"MapCamNormalCameraCtrl",s_pRect_003f1a48);
        g3ddbgWarning__FbPCce(pRect != (MB_OUT_RECT *)0x0,&DAT_003f1a50);
      }
      if (pCamSp == (MDAT_CAM_SP *)0x0) {
        _SetLineInfo__FPCciT0T0("map_camera.c",0x135,"MapCamNormalCameraCtrl",s_pCamSp_003f1a58);
        g3ddbgWarning__FbPCce(false,&DAT_003f1a50);
      }
    }
    else {
      if (map_camera_ctrl.SpecialCamFlg == 1) {
        MapCamUpdateRoomNo__FP15MAP_CAMERA_CTRL(&map_camera_ctrl);
      }
      map_camera_ctrl.SpecialCamFlg = 0;
      MapCamRectangleCameraCtrl__FP9PLCMN_WRKii(&pPlayerCmnWrk->cmn_wrk,iVar2,RectCamFlg);
      map_camera_ctrl.pRectStat = MrecGetCameraInfo__Fv();
      map_camera_ctrl.CamDataType = iVar2;
    }
  }
  else {
    iVar2 = EventCameraMain__Fv();
    if (iVar2 != 0) {
      map_camera_ctrl.EventCamFlg = 0;
    }
  }
  return;
}

static void MapCamSpCameraCtrl(MDAT_CAM_SP *pCamSp, MB_OUT_RECT *pRect, float *Position) {
	MAP_CAMERA_CTRL *pMcCtrl;
	
  if ((pCamSp != (MDAT_CAM_SP *)0x0) && (pRect != (MB_OUT_RECT *)0x0)) {
    MapCamUpdateRoomNo__FP15MAP_CAMERA_CTRL(&map_camera_ctrl);
    if (pCamSp->type == 0) {
      MapCamSpCameraParallel__FP11MDAT_CAM_SPP11MB_OUT_RECTPf(pCamSp,pRect,Position);
    }
    else {
      MapCamSpCameraDiagonal__FP11MDAT_CAM_SPP11MB_OUT_RECTPf(pCamSp,pRect,Position);
    }
  }
  return;
}

static void MapCamSpCameraDiagonal(MDAT_CAM_SP *pCamSp, MB_OUT_RECT *pRect, float *Position) {
	MAP_CAMERA_CTRL *pMcCtrl;
	float CamPosition[4];
	float CamTarget[4];
	float Node0[4];
	float Node1[4];
	float Point0[4];
	float Point1[4];
	float Point2[4];
	float Point3[4];
	float Length02;
	float Length13;
	float Length0N0;
	float Length1N1;
	float Influence0;
	float Influence1;
	float Influence2;
	float Influence3;
	
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float CamPosition [4];
  float CamTarget [4];
  float Node0 [4];
  float Node1 [4];
  float Point0 [4];
  float Point1 [4];
  float Point2 [4];
  float Point3 [4];
  
  if ((pCamSp != (MDAT_CAM_SP *)0x0) && (pRect != (MB_OUT_RECT *)0x0)) {
    Point3[2] = pRect->vec[3][2];
    Point0[0] = pRect->vec[0];
    Point0[2] = pRect->vec[2];
    Point1[0] = pRect->vec[1][0];
    Point1[2] = pRect->vec[1][2];
    Point2[0] = pRect->vec[2][0];
    Point2[2] = pRect->vec[2][2];
    Point3[0] = pRect->vec[3][0];
    fVar4 = 1.0;
    Point0[1] = 0.0;
    Point0[3] = 1.0;
    Point1[1] = 0.0;
    Point1[3] = 1.0;
    Point2[1] = 0.0;
    Point2[3] = 1.0;
    Point3[1] = 0.0;
    Point3[3] = 1.0;
    MapCamGetPerpendicularNode__FPfN30(Node0,Point0,Point2,Position);
    MapCamGetPerpendicularNode__FPfN30(Node1,Point1,Point3,Position);
    fVar1 = GetDistV__FPCfT0(Point0,Point2);
    if (fVar1 == 0.0) {
      fVar5 = 0.0;
    }
    else {
      fVar4 = GetDistV__FPCfT0(Point0,Node0);
      fVar5 = fVar4 / fVar1;
      fVar4 = (fVar1 - fVar4) / fVar1;
    }
    fVar1 = GetDistV__FPCfT0(Point1,Point3);
    if (fVar1 == 0.0) {
      fVar1 = 1.0;
      fVar3 = 0.0;
    }
    else {
      fVar2 = GetDistV__FPCfT0(Point1,Node1);
      fVar3 = fVar2 / fVar1;
      fVar1 = (fVar1 - fVar2) / fVar1;
    }
    if (fVar4 < 0.0) {
      fVar4 = 0.0;
    }
    if (fVar1 < 0.0) {
      fVar1 = 0.0;
    }
    if (fVar5 < 0.0) {
      fVar5 = 0.0;
    }
    if (fVar3 < 0.0) {
      fVar3 = 0.0;
    }
    fVar2 = 1.0;
    if (1.0 < fVar4) {
      fVar4 = fVar2;
    }
    if (1.0 < fVar1) {
      fVar1 = fVar2;
    }
    if (1.0 < fVar5) {
      fVar5 = fVar2;
    }
    if (1.0 < fVar3) {
      fVar3 = fVar2;
    }
    CamPosition[0] =
         (pCamSp->st[0].Cam_Pos_X * fVar4 + pCamSp->st[2].Cam_Pos_X * fVar5 +
         pCamSp->st[1].Cam_Pos_X * fVar1 + pCamSp->st[3].Cam_Pos_X * fVar3) * 0.5;
    CamPosition[1] =
         (pCamSp->st[0].Cam_Pos_Y * fVar4 + pCamSp->st[2].Cam_Pos_Y * fVar5 +
         pCamSp->st[1].Cam_Pos_Y * fVar1 + pCamSp->st[3].Cam_Pos_Y * fVar3) * 0.5;
    CamPosition[2] =
         (pCamSp->st[0].Cam_Pos_Z * fVar4 + pCamSp->st[2].Cam_Pos_Z * fVar5 +
         pCamSp->st[1].Cam_Pos_Z * fVar1 + pCamSp->st[3].Cam_Pos_Z * fVar3) * 0.5;
    MapCamGra3dcamSetPositionAddOffset__FPCfi(CamPosition,map_camera_ctrl.RoomNo);
    CamTarget[0] = (pCamSp->st[0].View_Pos_X * fVar4 + pCamSp->st[2].View_Pos_X * fVar5 +
                   pCamSp->st[1].View_Pos_X * fVar1 + pCamSp->st[3].View_Pos_X * fVar3) * 0.5;
    CamTarget[1] = (pCamSp->st[0].View_Pos_Y * fVar4 + pCamSp->st[2].View_Pos_Y * fVar5 +
                   pCamSp->st[1].View_Pos_Y * fVar1 + pCamSp->st[3].View_Pos_Y * fVar3) * 0.5;
    CamTarget[2] = (pCamSp->st[0].View_Pos_Z * fVar4 + pCamSp->st[2].View_Pos_Z * fVar5 +
                   pCamSp->st[1].View_Pos_Z * fVar1 + pCamSp->st[3].View_Pos_Z * fVar3) * 0.5;
    MapCamGra3dcamSetTargetAddOffset__FPCfi(CamTarget,map_camera_ctrl.RoomNo);
    gra3dcamSetRoll__Ff((pCamSp->st[0].RotZ * fVar4 + pCamSp->st[2].RotZ * fVar5 +
                        pCamSp->st[1].RotZ * fVar1 + pCamSp->st[3].RotZ * fVar3) * 0.5);
    gra3dcamSetFov__Ff((pCamSp->st[0].Proj * fVar4 + pCamSp->st[2].Proj * fVar5 +
                       pCamSp->st[1].Proj * fVar1 + pCamSp->st[3].Proj * fVar3) * 0.5);
    gra3dApplyCamera__FP11GRA3DCAMERAi((GRA3DCAMERA *)0x0,0);
  }
  return;
}

static void MapCamSpCameraParallel(MDAT_CAM_SP *pCamSp, MB_OUT_RECT *pRect, float *Position) {
	static char __FUNCTION__[23] = {
		/* [0] = */ 77,
		/* [1] = */ 97,
		/* [2] = */ 112,
		/* [3] = */ 67,
		/* [4] = */ 97,
		/* [5] = */ 109,
		/* [6] = */ 83,
		/* [7] = */ 112,
		/* [8] = */ 67,
		/* [9] = */ 97,
		/* [10] = */ 109,
		/* [11] = */ 101,
		/* [12] = */ 114,
		/* [13] = */ 97,
		/* [14] = */ 80,
		/* [15] = */ 97,
		/* [16] = */ 114,
		/* [17] = */ 97,
		/* [18] = */ 108,
		/* [19] = */ 108,
		/* [20] = */ 101,
		/* [21] = */ 108,
		/* [22] = */ 0
	};
	MAP_CAMERA_CTRL *pMcCtrl;
	float CamPosition[4];
	float CamTarget[4];
	float Node0[4];
	float Node1[4];
	float Point0[4];
	float Point1[4];
	float Point2[4];
	float Point3[4];
	float Length01;
	float Length12;
	float Length0N0;
	float Length1N1;
	float Influence01;
	float Influence23;
	float Influence03;
	float Influence12;
	float Influence0;
	float Influence1;
	float Influence2;
	float Influence3;
	
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float CamPosition [4];
  float CamTarget [4];
  float Node0 [4];
  float Node1 [4];
  float Point0 [4];
  float Point1 [4];
  float Point2 [4];
  float Point3 [4];
  
  if (pCamSp == (MDAT_CAM_SP *)0x0) {
    _SetLineInfo__FPCciT0T0("map_camera.c",0x1ce,"MapCamSpCameraParallel",s_pCamSp_003f1a58);
    g3ddbgAssert__FbPCce(false,&DAT_003f1a50);
  }
  if (pRect == (MB_OUT_RECT *)0x0) {
    _SetLineInfo__FPCciT0T0("map_camera.c",0x1cf,"MapCamSpCameraParallel",s_pRect_003f1a48);
    g3ddbgAssert__FbPCce(false,&DAT_003f1a50);
  }
  Point0[0] = pRect->vec[0];
  Point0[2] = pRect->vec[2];
  Point1[0] = pRect->vec[1][0];
  Point1[2] = pRect->vec[1][2];
  Point2[0] = pRect->vec[2][0];
  Point2[2] = pRect->vec[2][2];
  fVar2 = 1.0;
  Point0[1] = 0.0;
  Point0[3] = 1.0;
  Point1[1] = 0.0;
  Point1[3] = 1.0;
  Point2[1] = 0.0;
  Point2[3] = 1.0;
  MapCamGetPerpendicularNode__FPfN30(Node0,Point0,Point1,Position);
  MapCamGetPerpendicularNode__FPfN30(Node1,Point1,Point2,Position);
  fVar1 = GetDistV__FPCfT0(Point0,Point1);
  if (fVar1 == 0.0) {
    fVar4 = 0.0;
  }
  else {
    fVar2 = GetDistV__FPCfT0(Point0,Node0);
    fVar4 = fVar2 / fVar1;
    fVar2 = (fVar1 - fVar2) / fVar1;
  }
  fVar1 = GetDistV__FPCfT0(Point1,Point2);
  fVar3 = 0.0;
  if (fVar1 == 0.0) {
    fVar1 = 1.0;
    fVar6 = fVar2 * 0.0;
  }
  else {
    fVar6 = GetDistV__FPCfT0(Point1,Node1);
    fVar3 = fVar6 / fVar1;
    fVar1 = (fVar1 - fVar6) / fVar1;
    fVar6 = fVar3 * fVar2;
  }
  fVar5 = fVar1 * fVar4;
  fVar1 = fVar1 * fVar2;
  fVar3 = fVar3 * fVar4;
  CamPosition[0] =
       pCamSp->st[0].Cam_Pos_X * fVar1 + pCamSp->st[2].Cam_Pos_X * fVar3 +
       pCamSp->st[1].Cam_Pos_X * fVar5 + pCamSp->st[3].Cam_Pos_X * fVar6;
  CamPosition[1] =
       pCamSp->st[0].Cam_Pos_Y * fVar1 + pCamSp->st[2].Cam_Pos_Y * fVar3 +
       pCamSp->st[1].Cam_Pos_Y * fVar5 + pCamSp->st[3].Cam_Pos_Y * fVar6;
  CamPosition[2] =
       pCamSp->st[0].Cam_Pos_Z * fVar1 + pCamSp->st[2].Cam_Pos_Z * fVar3 +
       pCamSp->st[1].Cam_Pos_Z * fVar5 + pCamSp->st[3].Cam_Pos_Z * fVar6;
  MapCamGra3dcamSetPositionAddOffset__FPCfi(CamPosition,map_camera_ctrl.RoomNo);
  CamTarget[0] = pCamSp->st[0].View_Pos_X * fVar1 + pCamSp->st[2].View_Pos_X * fVar3 +
                 pCamSp->st[1].View_Pos_X * fVar5 + pCamSp->st[3].View_Pos_X * fVar6;
  CamTarget[1] = pCamSp->st[0].View_Pos_Y * fVar1 + pCamSp->st[2].View_Pos_Y * fVar3 +
                 pCamSp->st[1].View_Pos_Y * fVar5 + pCamSp->st[3].View_Pos_Y * fVar6;
  CamTarget[2] = pCamSp->st[0].View_Pos_Z * fVar1 + pCamSp->st[2].View_Pos_Z * fVar3 +
                 pCamSp->st[1].View_Pos_Z * fVar5 + pCamSp->st[3].View_Pos_Z * fVar6;
  MapCamGra3dcamSetTargetAddOffset__FPCfi(CamTarget,map_camera_ctrl.RoomNo);
  gra3dcamSetRoll__Ff(pCamSp->st[0].RotZ * fVar1 + pCamSp->st[2].RotZ * fVar3 +
                      pCamSp->st[1].RotZ * fVar5 + pCamSp->st[3].RotZ * fVar6);
  gra3dcamSetFov__Ff(pCamSp->st[0].Proj * fVar1 + pCamSp->st[2].Proj * fVar3 +
                     pCamSp->st[1].Proj * fVar5 + pCamSp->st[3].Proj * fVar6);
  gra3dApplyCamera__FP11GRA3DCAMERAi((GRA3DCAMERA *)0x0,0);
  return;
}

static void MapCamGetPerpendicularNode(float *Node, float *Line0, float *Line1, float *Point) {
	float LineX10;
	float LineY10;
	
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar4 = *Line0;
  fVar5 = *Line1 - fVar4;
  fVar7 = Line0[2];
  fVar6 = Line1[2] - fVar7;
  if ((fVar5 == 0.0) && (fVar6 == 0.0)) {
    fVar4 = *Point;
    Node[1] = 0.0;
    *Node = fVar4;
    fVar4 = Point[2];
    Node[3] = 1.0;
    Node[2] = fVar4;
    return;
  }
  fVar2 = *Point;
  fVar1 = Point[2];
  Node[1] = 0.0;
  fVar3 = fVar5 * fVar5 + fVar6 * fVar6;
  *Node = (fVar5 * ((fVar2 - fVar4) * fVar5 + (fVar1 - fVar7) * fVar6)) / fVar3 + fVar4;
  fVar2 = Line0[2];
  fVar4 = Point[2];
  fVar7 = *Point;
  fVar1 = *Line0;
  Node[3] = 1.0;
  Node[2] = (fVar6 * ((fVar7 - fVar1) * fVar5 + (fVar4 - fVar2) * fVar6)) / fVar3 + fVar2;
  return;
}

static void MapCamRectangleCameraCtrl(PLCMN_WRK *pPlayerCmnWrk, int DataType, int RectCamFlg) {
	MAP_CAMERA_CTRL *pMcCtrl;
	int type;
	int ret;
	int NoCamera;
	int InitFlg;
	
  bool bVar1;
  int iVar2;
  int init;
  
  init = 0;
  bVar1 = false;
  map_camera_ctrl.RectCamLastTime = 1;
  iVar2 = MrecSetCameraInfo__FiPCfi
                    ((int)(short)pPlayerCmnWrk->floor,(pPlayerCmnWrk->mbox).pos,DataType);
  if (iVar2 == 1) {
    MapCamUpdateRoomNo__FP15MAP_CAMERA_CTRL(&map_camera_ctrl);
  }
  if (iVar2 == 0) {
    if (RectCamFlg == 0) {
      init = 1;
    }
  }
  else {
    init = 1;
  }
  iVar2 = MrecGetCameraType__Fv();
  switch(iVar2) {
  case 0:
  case 4:
    MapCamTypeFix__Fv();
    break;
  case 1:
  case 5:
    MapCamTypePositionFollow__Fi(init);
    break;
  case 2:
  case 6:
    MapCamTypeTargetFollow__Fi(init);
    break;
  case 3:
  case 7:
    MapCamTypePositionTargetFollow__Fi(init);
    break;
  case 8:
    MapCamTypePositionFollowYFix__Fi(init);
    break;
  case 9:
    MapCamTypeTargetFollowYFix__Fi(init);
    break;
  default:
    bVar1 = true;
  }
  if (!bVar1) {
    MapCamSetFovRoll__Fv();
  }
  gra3dApplyCamera__FP11GRA3DCAMERAi((GRA3DCAMERA *)0x0,0);
  return;
}

static void MapCamSetFovRoll() {
	float Roll;
	float Fov;
	
  int iVar1;
  float fFov;
  float Roll;
  
  iVar1 = MrecGetCameraRotZ__FPf(&Roll);
  if (iVar1 != 0) {
    gra3dcamSetRoll__Ff(Roll);
  }
  fFov = MrecGetCameraPrj__Fv();
  if (0.0 < fFov) {
    gra3dcamSetFov__Ff(fFov);
  }
  return;
}

static void MapCamTypeFix() {
	MAP_CAMERA_CTRL *pMcCtrl;
	float Position[4];
	float Target[4];
	
  int iVar1;
  float Position [4];
  float Target [4];
  
  iVar1 = MrecGetCameraPos__FPf(Position);
  if (iVar1 == 1) {
    MapCamGra3dcamSetPositionAddOffset__FPCfi(Position,map_camera_ctrl.RoomNo);
  }
  iVar1 = MrecGetCameraInterest__FPf(Target);
  if (iVar1 == 1) {
    MapCamGra3dcamSetTargetAddOffset__FPCfi(Target,map_camera_ctrl.RoomNo);
  }
  return;
}

static void MapCamTypePositionFollow(int init) {
	MAP_CAMERA_CTRL *pMcCtrl;
	float Position[4];
	float Target[4];
	float Offset[4];
	float margin;
	
  int iVar1;
  float (*NowPosition) [4];
  float margin;
  float Position [4];
  float Target [4];
  float Offset [4];
  
  memset(Offset,0,0x10);
  iVar1 = MapCamGetObjPosition__FPfi(Position,0);
  if (iVar1 == 0) {
    NowPosition = gra3dcamGetPosition__Fv();
    if (init == 0) {
      margin = MrecGetCameraAsobi__Fv();
      if (0.0 <= margin) {
        MrecGetCameraPos__FPf(Offset);
        sceVu0AddVector(Position,Position,Offset);
        MapCamGra3dcamSetPositionMargin__FPCfT0f(Position,(float *)NowPosition,margin);
      }
    }
    else {
      MrecGetCameraPos__FPf(Offset);
      sceVu0AddVector(Position,Position,Offset);
      Position[3] = 1.0;
      gra3dcamSetPosition__FPCf(Position);
    }
  }
  iVar1 = MrecGetCameraInterest__FPf(Target);
  if (iVar1 == 1) {
    MapCamGra3dcamSetTargetAddOffset__FPCfi(Target,map_camera_ctrl.RoomNo);
  }
  return;
}

static void MapCamTypeTargetFollow(int init) {
	MAP_CAMERA_CTRL *pMcCtrl;
	float Position[4];
	float Target[4];
	float Offset[4];
	float margin;
	
  int iVar1;
  float (*NowTarget) [4];
  float margin;
  float Position [4];
  float Target [4];
  float Offset [4];
  
  memset(Offset,0,0x10);
  iVar1 = MrecGetCameraPos__FPf(Position);
  if (iVar1 == 1) {
    MapCamGra3dcamSetPositionAddOffset__FPCfi(Position,map_camera_ctrl.RoomNo);
  }
  iVar1 = MapCamGetObjPosition__FPfi(Target,0);
  if (iVar1 == 0) {
    NowTarget = gra3dcamGetTarget__Fv();
    if (init == 0) {
      margin = MrecGetCameraAsobi__Fv();
      if (0.0 <= margin) {
        MrecGetCameraInterest__FPf(Offset);
        sceVu0AddVector(Target,Target,Offset);
        MapCamGra3dcamSetTargetMargin__FPCfT0f(Target,(float *)NowTarget,margin);
      }
    }
    else {
      MrecGetCameraInterest__FPf(Offset);
      sceVu0AddVector(Target,Target,Offset);
      Target[3] = 1.0;
      gra3dcamSetTarget__FPCfi(Target,1);
    }
  }
  return;
}

static void MapCamTypePositionTargetFollow(int init) {
	float Position[4];
	float Target[4];
	float Offset[4];
	float margin;
	float margin;
	
  int iVar1;
  float (*pafVar2) [4];
  float fVar3;
  float Position [4];
  float Target [4];
  float Offset [4];
  
  memset(Offset,0,0x10);
  iVar1 = MapCamGetObjPosition__FPfi(Position,0);
  if (iVar1 == 0) {
    pafVar2 = gra3dcamGetPosition__Fv();
    if (init == 0) {
      fVar3 = MrecGetCameraAsobi__Fv();
      if (0.0 <= fVar3) {
        MrecGetCameraPos__FPf(Offset);
        sceVu0AddVector(Position,Position,Offset);
        MapCamGra3dcamSetPositionMargin__FPCfT0f(Position,(float *)pafVar2,fVar3);
      }
    }
    else {
      MrecGetCameraPos__FPf(Offset);
      sceVu0AddVector(Position,Position,Offset);
      Position[3] = 1.0;
      gra3dcamSetPosition__FPCf(Position);
    }
  }
  iVar1 = MapCamGetObjPosition__FPfi(Target,0);
  if (iVar1 == 0) {
    pafVar2 = gra3dcamGetTarget__Fv();
    if (init == 0) {
      fVar3 = MrecGetCameraAsobi__Fv();
      if (0.0 <= fVar3) {
        MrecGetCameraInterest__FPf(Offset);
        sceVu0AddVector(Target,Target,Offset);
        MapCamGra3dcamSetTargetMargin__FPCfT0f(Target,(float *)pafVar2,fVar3);
      }
    }
    else {
      MrecGetCameraInterest__FPf(Offset);
      sceVu0AddVector(Target,Target,Offset);
      Target[3] = 1.0;
      gra3dcamSetTarget__FPCfi(Target,1);
    }
  }
  return;
}

static void MapCamTypeTargetFollowYFix(int init) {
	MAP_CAMERA_CTRL *pMcCtrl;
	float Position[4];
	float Target[4];
	float Offset[4];
	float margin;
	
  int iVar1;
  float (*NowTarget) [4];
  float margin;
  float Position [4];
  float Target [4];
  float Offset [4];
  
  memset(Offset,0,0x10);
  iVar1 = MrecGetCameraPos__FPf(Position);
  if (iVar1 == 1) {
    MapCamGra3dcamSetPositionAddOffset__FPCfi(Position,map_camera_ctrl.RoomNo);
  }
  iVar1 = MapCamGetObjPosition__FPfi(Target,0);
  if (iVar1 == 0) {
    NowTarget = gra3dcamGetTarget__Fv();
    if (init == 0) {
      margin = MrecGetCameraAsobi__Fv();
      if (0.0 <= margin) {
        MrecGetCameraInterest__FPf(Offset);
        sceVu0AddVector(Target,Target,Offset);
        Target[1] = (*NowTarget)[1];
        MapCamGra3dcamSetTargetMargin__FPCfT0f(Target,(float *)NowTarget,margin);
      }
    }
    else {
      MrecGetCameraInterest__FPf(Offset);
      sceVu0AddVector(Target,Target,Offset);
      Target[3] = 1.0;
      gra3dcamSetTarget__FPCfi(Target,1);
    }
  }
  return;
}

static void MapCamTypePositionFollowYFix(int init) {
	MAP_CAMERA_CTRL *pMcCtrl;
	float Position[4];
	float Target[4];
	float Offset[4];
	float margin;
	
  int iVar1;
  float (*NowPosition) [4];
  float margin;
  float Position [4];
  float Target [4];
  float Offset [4];
  
  memset(Offset,0,0x10);
  iVar1 = MapCamGetObjPosition__FPfi(Position,0);
  if (iVar1 == 0) {
    NowPosition = gra3dcamGetPosition__Fv();
    if (init == 0) {
      margin = MrecGetCameraAsobi__Fv();
      if (0.0 <= margin) {
        MrecGetCameraPos__FPf(Offset);
        sceVu0AddVector(Position,Position,Offset);
        Position[1] = (*NowPosition)[1];
        MapCamGra3dcamSetPositionMargin__FPCfT0f(Position,(float *)NowPosition,margin);
      }
    }
    else {
      MrecGetCameraPos__FPf(Offset);
      sceVu0AddVector(Position,Position,Offset);
      Position[3] = 1.0;
      gra3dcamSetPosition__FPCf(Position);
    }
  }
  iVar1 = MrecGetCameraInterest__FPf(Target);
  if (iVar1 == 1) {
    MapCamGra3dcamSetTargetAddOffset__FPCfi(Target,map_camera_ctrl.RoomNo);
  }
  return;
}

int MapCamGetObjPosition(float *pos, int obj_id) {
	MAP_CAMERA_CTRL *pMcCtrl;
	MOVE_BOX *pMoveBox;
	
  SIS_WRK *pSVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if (map_camera_ctrl.CamTarget == 0) {
    pSVar1 = (SIS_WRK *)&plyr_wrk;
  }
  else {
    pSVar1 = &sis_wrk;
  }
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
  fVar2 = (((PLYR_WRK *)pSVar1)->cmn_wrk).mbox.pos[1];
  fVar3 = (((PLYR_WRK *)pSVar1)->cmn_wrk).mbox.pos[2];
  fVar4 = (((PLYR_WRK *)pSVar1)->cmn_wrk).mbox.pos[3];
  *pos = (((PLYR_WRK *)pSVar1)->cmn_wrk).mbox.pos[0];
  pos[1] = fVar2;
  pos[2] = fVar3;
  pos[3] = fVar4;
                    /* end of inlined section */
  return 0;
}

void ReqFinderInOverRap(u_short time) {
  fior_tm = time;
  ori_fior_tm = time;
  return;
}

static void FinderInOverRapCtrl() {
  if (fior_tm != 0) {
    fior_tm = fior_tm + -1;
    SetEffects__Fiie(8,1);
  }
  return;
}

void MapCamGra3dcamSetPositionAddOffset(float *Vector, int RoomNo) {
	float CamPos[4];
	float RoomCenter[4];
	
  int RoomNo_00;
  float CamPos [4];
  float RoomCenter [4];
  
  RoomNo_00 = GetPlyrAreaNo__Fv();
  MapLoadGetOffsetVector__FPfi(RoomCenter,RoomNo_00);
  sceVu0AddVector(CamPos,RoomCenter,Vector);
  CamPos[3] = 1.0;
  gra3dcamSetPosition__FPCf(CamPos);
  return;
}

void MapCamGra3dcamSetTargetAddOffset(float *Vector, int RoomNo) {
	float CamTarget[4];
	float RoomCenter[4];
	
  int RoomNo_00;
  float CamTarget [4];
  float RoomCenter [4];
  
  RoomNo_00 = GetPlyrAreaNo__Fv();
  MapLoadGetOffsetVector__FPfi(RoomCenter,RoomNo_00);
  sceVu0AddVector(CamTarget,RoomCenter,Vector);
  CamTarget[3] = 1.0;
  gra3dcamSetTarget__FPCfi(CamTarget,1);
  return;
}

void MapCamGra3dcamSetPositionMargin(float *Position, float *NowPosition, float margin) {
	float DirVec[4];
	
  int iVar1;
  float (*vPos) [4];
  float DirVec [4];
  
  iVar1 = MapCamCalcFollowPointWithMargin__FPfPCfT1f(DirVec,Position,NowPosition,margin);
  if (iVar1 == 0) {
    vPos = gra3dcamGetPosition__Fv();
    gra3dcamSetPosition__FPCf((float *)vPos);
  }
  else {
    gra3dcamSetPosition__FPCf(DirVec);
  }
  return;
}

void MapCamGra3dcamSetTargetMargin(float *Target, float *NowTarget, float margin) {
	float DirVec[4];
	
  int iVar1;
  float (*vTarget) [4];
  float DirVec [4];
  
  iVar1 = MapCamCalcFollowPointWithMargin__FPfPCfT1f(DirVec,Target,NowTarget,margin);
  if (iVar1 == 0) {
    vTarget = gra3dcamGetTarget__Fv();
    gra3dcamSetTarget__FPCfi((float *)vTarget,1);
  }
  else {
    gra3dcamSetTarget__FPCfi(DirVec,1);
  }
  return;
}

static int MapCamCalcFollowPointWithMargin(float *NextPos, float *TargetPos, float *NowPos, float margin) {
	int ret;
	float length;
	
  int iVar1;
  float fVar2;
  
  fVar2 = Get2PLength__FPCfT0(NowPos,TargetPos);
  iVar1 = 0;
  if ((margin < fVar2) && (fVar2 != 0.0)) {
    sceVu0SubVector(NextPos,TargetPos,NowPos);
    sceVu0ScaleVector((fVar2 - margin) / fVar2,NextPos,NextPos);
    sceVu0AddVector(NextPos,NextPos,NowPos);
    NextPos[3] = 1.0;
    iVar1 = 1;
  }
  return iVar1;
}

static void MapCamUpdateRoomNo(MAP_CAMERA_CTRL *pMcCtrl) {
  int iVar1;
  
  iVar1 = GetPlyrAreaNo__Fv();
  pMcCtrl->RoomNo = iVar1;
  return;
}

void MapCamTargetChange(int no) {
	MAP_CAMERA_CTRL *pMcCtrl;
	
  map_camera_ctrl.CamTarget = no;
  return;
}

void MapCamSetFinCamera(float &rvPosition[4], float *pvTarget[4]) {
	MAP_CAMERA_CTRL *pMcCtrl;
	
  map_camera_ctrl.pFinCamTarget = pvTarget;
  gra3dcamSetPosition__FPCf((float *)rvPosition);
  gra3dcamSetTarget__FPCfi((float *)pvTarget,1);
  gra3dApplyCamera__FP11GRA3DCAMERAi((GRA3DCAMERA *)0x0,1);
  return;
}

void MapCamCutFinCamera() {
	MAP_CAMERA_CTRL *pMcCtrl;
	
  map_camera_ctrl.pFinCamTarget = (float (*) [4])0x0;
  return;
}

void ReqPlyrApproachCameraCtrl(float *ipos, float offy, float dist) {
  app_camera.mode = 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
                    /* end of inlined section */
  app_camera.offy = offy;
  app_camera.dist = dist;
  app_camera.flow = 0;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
  app_camera.ipos[0] = *ipos;
  app_camera.ipos[1] = ipos[1];
  app_camera.ipos[2] = ipos[2];
  app_camera.ipos[3] = ipos[3];
                    /* end of inlined section */
  app_camera.pEneWrk = (ENE_WRK *)0x0;
  return;
}

void ReqPlyrDamageCameraCtrl(float *ipos, float offy, float dist, ENE_WRK *pEneWrk) {
  int Type;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
                    /* end of inlined section */
  app_camera.mode = 1;
  app_camera.flow = 0;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
  app_camera.ipos[0] = *ipos;
  app_camera.ipos[1] = ipos[1];
  app_camera.ipos[2] = ipos[2];
  app_camera.ipos[3] = ipos[3];
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
                    /* end of inlined section */
  app_camera.cnt = 0.0;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
  app_camera.NeckInitVector[0] = (pEneWrk->mpos).p0[0];
  app_camera.NeckInitVector[1] = (pEneWrk->mpos).p0[1];
  app_camera.NeckInitVector[2] = (pEneWrk->mpos).p0[2];
  app_camera.NeckInitVector[3] = (pEneWrk->mpos).p0[3];
                    /* end of inlined section */
  app_camera.offy = offy;
  app_camera.dist = dist;
  app_camera.pEneWrk = pEneWrk;
  Type = PlyrShoulderCameraTypeGet__Fi((uint)(ushort)(pEneWrk->dat->cmn).mdl_no);
  PlyrShoulderCameraPositionGet__FPfi(app_camera.PosInitVector,Type);
  return;
}

void ReqPlyrDeadCameraCtrl(float *ipos, float offy, float offy2, float dist, float *trot) {
	float *pv0;
	
  app_camera.mode = 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
                    /* end of inlined section */
  app_camera.flow = 0x14;
  app_camera.offy = offy;
  app_camera.offy2 = offy2;
  app_camera.dist = dist;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
  app_camera.ipos[0] = (float)*(undefined8 *)ipos;
  app_camera.ipos[1] = (float)((ulong)*(undefined8 *)ipos >> 0x20);
  app_camera.ipos[2] = ipos[2];
  app_camera.ipos[3] = ipos[3];
  app_camera.trot[0] = (float)*(undefined8 *)trot;
  app_camera.trot[1] = (float)((ulong)*(undefined8 *)trot >> 0x20);
  app_camera.trot[2] = trot[2];
  app_camera.trot[3] = trot[3];
  return;
}

void ReqPlyrTalkCameraCtrl(float offy, float dist) {
	float ipos[4];
	float *pv0;
	
  float ipos [4];
  
  GetCenterPoint__FPfN20(ipos,plyr_wrk.cmn_wrk.headpos,sis_wrk.cmn_wrk.headpos);
  app_camera.mode = 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
                    /* end of inlined section */
  app_camera.flow = 10;
  app_camera.offy = offy;
  app_camera.dist = dist;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
  app_camera.ipos[0] = (float)ipos._0_8_;
  app_camera.ipos[1] = SUB84(ipos._0_8_,4);
  app_camera.ipos[2] = ipos[2];
  app_camera.ipos[3] = ipos[3];
  return;
}

void EndPlyrApproachCameraCtrl() {
  app_camera.mode = 0;
  return;
}

static void PlyrApproachCameraCtrl(int RectCamFlg) {
	float ptv[4];
	float itv[4];
	float tw[4];
	float tr[4];
	APPROACH_CAMERA *apcm;
	float hdist;
	
  undefined8 uVar1;
  int iVar2;
  GRA3DCAMERA *pGVar3;
  float z;
  float ptv [4];
  float itv [4];
  float tw [4];
  float tr [4];
  
  switch(app_camera.flow) {
  case 0:
                    /* end of inlined section */
    MapCamNormalCameraCtrl__Fi(RectCamFlg);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
    pGVar3 = gra3dGetCamera__Fv();
    uVar1 = *(undefined8 *)pGVar3->matCoord[3];
    app_camera.npos[2] = pGVar3->matCoord[3][2];
    app_camera.npos[3] = pGVar3->matCoord[3][3];
    app_camera.npos[0] = (float)uVar1;
    app_camera.npos[1] = (float)((ulong)uVar1 >> 0x20);
    pGVar3 = gra3dGetCamera__Fv();
    app_camera.inpos[2] = pGVar3->vTarget[2];
    app_camera.inpos[3] = pGVar3->vTarget[3];
    app_camera.inpos[0] = (float)*(undefined8 *)pGVar3->vTarget;
    app_camera.inpos[1] = (float)((ulong)*(undefined8 *)pGVar3->vTarget >> 0x20);
    itv[0] = app_camera.ipos[0];
    itv[2] = app_camera.ipos[2];
    itv[3] = app_camera.ipos[3];
                    /* end of inlined section */
    itv[1] = app_camera.ipos[1] - app_camera.offy;
    GetTrgtRot__FPCfT0Pfi(app_camera.ipos,app_camera.npos,tr,3);
    _SetVector__FPfffff(tw,0.0,0.0,app_camera.dist,0.0);
    RotFvector__FPfT0(tr,tw);
    sceVu0AddVector(ptv,itv,tw);
    iVar2 = GetPALMode__Fv();
    app_camera.cnt = DAT_003ee49c;
    if (iVar2 == 0) {
      app_camera.cnt = 20.0;
    }
    sceVu0SubVector(0x4b4690,itv,0x4b46a0);
    sceVu0DivVector(app_camera.cnt,0x4b4690,0x4b4690);
    sceVu0SubVector(0x4b4670,ptv,0x4b4680);
    sceVu0DivVector(app_camera.cnt,0x4b4670,0x4b4670);
    ApproachCameraCrossFadeSW__Fi(1);
    app_camera.flow = 1;
    break;
  case 1:
    if (0.0 < app_camera.cnt) {
      sceVu0AddVector(0x4b4680,0x4b4680,0x4b4670);
      sceVu0AddVector(0x4b46a0,0x4b46a0,0x4b4690);
      app_camera.cnt = app_camera.cnt - 1.0;
    }
    else if (app_camera.pEneWrk == (ENE_WRK *)0x0) {
      app_camera.flow = 2;
    }
    else {
      app_camera.flow = 3;
      app_camera.cnt = 0.0;
      ApproachCameraCrossFadeSW__Fi(1);
    }
    SetEffects__Fiie(8,1);
    gra3dcamSetPosition__FPCf(app_camera.npos);
    goto LAB_001db16c;
  case 2:
    goto LAB_001db158;
  case 3:
    if (app_camera.cnt < 1.0) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
      uVar1 = *(undefined8 *)((app_camera.pEneWrk)->mpos).p0;
      app_camera.NeckInitVector[2] = ((app_camera.pEneWrk)->mpos).p0[2];
      app_camera.NeckInitVector[3] = ((app_camera.pEneWrk)->mpos).p0[3];
      app_camera.NeckInitVector[0] = (float)uVar1;
      app_camera.NeckInitVector[1] = (float)((ulong)uVar1 >> 0x20);
                    /* end of inlined section */
      iVar2 = PlyrShoulderCameraTypeGet__Fi((uint)(ushort)((app_camera.pEneWrk)->dat->cmn).mdl_no);
      PlyrShoulderCameraPositionGet__FPfi(app_camera.PosInitVector,iVar2);
    }
    if (app_camera.cnt < 10.0) {
      SetEffects__Fiie(8,1);
    }
    PlyrShoulderCameraSet__FPfT0(app_camera.PosInitVector,app_camera.NeckInitVector);
    app_camera.cnt = app_camera.cnt + 1.0;
    if (40.0 < app_camera.cnt) {
      SetEffects__Fiie(8,1);
      app_camera.flow = 2;
      app_camera.cnt = 0.0;
    }
    break;
  case 10:
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
    pGVar3 = gra3dGetCamera__Fv();
    uVar1 = *(undefined8 *)pGVar3->matCoord[3];
    app_camera.npos[2] = pGVar3->matCoord[3][2];
    app_camera.npos[3] = pGVar3->matCoord[3][3];
    app_camera.npos[0] = (float)uVar1;
    app_camera.npos[1] = (float)((ulong)uVar1 >> 0x20);
    pGVar3 = gra3dGetCamera__Fv();
    app_camera.inpos[2] = pGVar3->vTarget[2];
    app_camera.inpos[3] = pGVar3->vTarget[3];
    app_camera.inpos[0] = (float)*(undefined8 *)pGVar3->vTarget;
    app_camera.inpos[1] = (float)((ulong)*(undefined8 *)pGVar3->vTarget >> 0x20);
    itv[0] = app_camera.ipos[0];
    itv[2] = app_camera.ipos[2];
    itv[3] = app_camera.ipos[3];
                    /* end of inlined section */
    itv[1] = app_camera.ipos[1] - app_camera.offy;
    GetTrgtRotFromPlyr__FPfT0i(app_camera.npos,tr,3);
    _SetVector__FPfffff(tw,0.0,0.0,app_camera.dist,0.0);
    RotFvector__FPfT0(tr,tw);
    sceVu0AddVector(ptv,itv,tw);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
    app_camera.npos[2] = ptv[2];
    app_camera.npos[3] = ptv[3];
    app_camera.npos[0] = ptv[0];
    app_camera.npos[1] = ptv[1];
    app_camera.inpos[2] = itv[2];
    app_camera.inpos[3] = itv[3];
    app_camera.inpos[0] = itv[0];
    app_camera.inpos[1] = itv[1];
    app_camera.flow = 0xb;
                    /* end of inlined section */
    break;
  case 0xb:
LAB_001db158:
    SetEffects__Fiie(8,1);
    gra3dcamSetPosition__FPCf(app_camera.npos);
LAB_001db16c:
    gra3dcamSetTarget__FPCfi(app_camera.inpos,1);
    gra3dApplyCamera__FP11GRA3DCAMERAi((GRA3DCAMERA *)0x0,1);
    break;
  case 0x14:
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
    pGVar3 = gra3dGetCamera__Fv();
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
    uVar1 = *(undefined8 *)pGVar3->matCoord[3];
    app_camera.npos[2] = pGVar3->matCoord[3][2];
    app_camera.npos[3] = pGVar3->matCoord[3][3];
    app_camera.npos[0] = (float)uVar1;
    app_camera.npos[1] = (float)((ulong)uVar1 >> 0x20);
    z = DAT_003ee4a0;
    pGVar3 = gra3dGetCamera__Fv();
    app_camera.inpos[2] = pGVar3->vTarget[2];
    app_camera.inpos[3] = pGVar3->vTarget[3];
    app_camera.inpos[0] = (float)*(undefined8 *)pGVar3->vTarget;
    app_camera.inpos[1] = (float)((ulong)*(undefined8 *)pGVar3->vTarget >> 0x20);
                    /* end of inlined section */
    _SetVector__FPfffff(tw,0.0,-app_camera.offy,z,0.0);
    RotFvector__FPfT0(app_camera.trot,tw);
    sceVu0AddVector(itv,0x4b4660,tw);
    _SetVector__FPfffff(tw,0.0,0.0,app_camera.dist,0.0);
    GetTrgtRot__FPCfT0Pfi(app_camera.inpos,app_camera.npos,tr,2);
    RotFvector__FPfT0(tr,tw);
    sceVu0AddVector(ptv,itv,tw);
    ptv[1] = app_camera.ipos[1] - app_camera.offy2;
    gra3dcamSetPosition__FPCf(ptv);
    gra3dcamSetTarget__FPCfi(itv,1);
    gra3dApplyCamera__FP11GRA3DCAMERAi((GRA3DCAMERA *)0x0,1);
    app_camera.flow = 0x15;
  }
  return;
}

void ApproachCameraCrossFadeSW(int sw) {
  app_camera.crossfade = sw;
  return;
}

int GetApproachCameraCrossFade() {
  return app_camera.crossfade;
}

static int PlyrShoulderCameraTypeGet(int ModelNo) {
	int Type;
	
  int iVar1;
  
  if ((ModelNo < 0x15) ||
     (((iVar1 = 1, 0x16 < ModelNo && (iVar1 = 0, ModelNo < 0x1e)) && (iVar1 = 2, ModelNo < 0x1b))))
  {
    iVar1 = 0;
  }
  return iVar1;
}

static void PlyrShoulderCameraPositionGet(float *Position, int Type) {
	float TmpMat[4][4];
	static float Offset[3][4] = {
		/* [0] = */ {
			/* [0] = */ -19.9999981f,
			/* [1] = */ -675.f,
			/* [2] = */ 57.4999962f,
			/* [3] = */ 1.f
		},
		/* [1] = */ {
			/* [0] = */ -14.1396475f,
			/* [1] = */ -754.186707f,
			/* [2] = */ 92.5153809f,
			/* [3] = */ 1.f
		},
		/* [2] = */ {
			/* [0] = */ -56.9938927f,
			/* [1] = */ -807.208252f,
			/* [2] = */ 110.294434f,
			/* [3] = */ 1.f
		}
	};
	PLCMN_WRK *pPlayerCmnWrk;
	
  float TmpMat [4] [4];
  
  sceVu0UnitMatrix(TmpMat);
  sceVu0RotMatrix(TmpMat,TmpMat,0x33cde0);
  sceVu0TransMatrix(TmpMat,TmpMat,0x33cda0);
  sceVu0ApplyMatrix(Position,TmpMat,&Offset_1090 + Type * 0x10);
  return;
}

static void PlyrShoulderCameraSet(float *Position, float *Target) {
  gra3dcamSetPosition__FPCf(Position);
  gra3dcamSetTarget__FPCfi(Target,1);
  gra3dcamSetRoll__Ff(0.0);
  gra3dcamSetFov__Ff(DAT_003ee4a4);
  gra3dApplyCamera__FP11GRA3DCAMERAi((GRA3DCAMERA *)0x0,1);
  return;
}

static void QuakeCameraInit() {
	QUAKE_CAMERA_CTRL *pQuakeCamera;
	
  QuakeCameraCtrl.LoopNum = 0;
  QuakeCameraCtrl.RequestFlg = 0;
  QuakeCameraCtrl.Counter = 0;
  QuakeCameraCtrl.AllTime = 0;
  return;
}

void QuakeCameraStop() {
	QUAKE_CAMERA_CTRL *pQuakeCamera;
	
  QuakeCameraCtrl.RequestFlg = 0;
  return;
}

void QuakeCameraReq(float Power, u_int Time, u_int LoopNum) {
	QUAKE_CAMERA_CTRL *pQuakeCamera;
	
  QuakeCameraCtrl.Power[1] = Power * DAT_003ee4a8;
  QuakeCameraCtrl.LoopNum = (ushort)LoopNum;
  QuakeCameraCtrl.RequestFlg = 1;
  QuakeCameraCtrl.Power[0] = Power;
  QuakeCameraCtrl.Counter = Time;
  QuakeCameraCtrl.AllTime = Time;
  snd_utilAutoBDPlay(0xd2d,0xd2c,0,0,0x3200,0x1000,0,(_SND_3D_SET *)0x0);
  return;
}

int QuakeCameraGetReq() {
	QUAKE_CAMERA_CTRL *pQuakeCamera;
	
  return (int)(short)QuakeCameraCtrl.RequestFlg;
}

static int QuakeCameraMain() {
	float TmpMat[4][4];
	float Val[2][4];
	float CameraXd[4];
	float CameraYd[4];
	float CameraZd[4];
	float CameraPosition[4];
	float CameraTarget[4];
	float V0;
	float V1;
	float V2;
	int i;
	QUAKE_CAMERA_CTRL *pQuakeCamera;
	GRA3DCAMERA *pCam;
	float &rCamPos[4];
	float dat;
	
  float fVar1;
  GRA3DCAMERA *pGVar2;
  float (*pafVar3) [4];
  int iVar4;
  int iVar5;
  float (*pafVar6) [4];
  QUAKE_CAMERA_CTRL *pQVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float TmpMat [4] [4];
  float Val [2] [4];
  float CameraXd [4];
  float CameraYd [4];
  float CameraZd [4];
  float CameraPosition [4];
  float CameraTarget [4];
  
  pQVar7 = &QuakeCameraCtrl;
  pGVar2 = gra3dGetCamera__Fv();
  pafVar3 = gra3dcamGetPosition__Fv();
  iVar4 = 0;
  if (QuakeCameraCtrl.RequestFlg != 0) {
    if (QuakeCameraCtrl.Counter < QuakeCameraCtrl.AllTime) {
      QuakeCameraCtrl.Counter = QuakeCameraCtrl.Counter - 1;
      if (QuakeCameraCtrl.Counter < 1) {
        if (QuakeCameraCtrl.LoopNum == 0) {
          QuakeCameraCtrl.RequestFlg = 0;
          QuakeCameraStop__Fv();
          iVar4 = 0;
        }
        else {
                    /* inlined from ../../graphics/effect/effect.h */
          iVar4 = rand();
                    /* end of inlined section */
                    /* inlined from ../../graphics/effect/effect.h */
                    /* end of inlined section */
          QuakeCameraCtrl.LoopNum = QuakeCameraCtrl.LoopNum - 1;
                    /* inlined from ../../graphics/effect/effect.h */
                    /* end of inlined section */
          QuakeCameraCtrl.Counter = (int)(((float)iVar4 / DAT_003ee4ac) * -300.0 + 600.0);
          iVar4 = 0;
        }
      }
      else {
        if ((QuakeCameraCtrl.Counter & 1U) != 0) {
          VibrateRequest2__FUsUs(0,0xa0);
        }
        fVar1 = DAT_003ee4b0;
        sceVu0SubVector(CameraZd,pGVar2->vTarget,pafVar3);
        CameraYd[0] = 0.0;
        CameraYd[1] = -1.0;
        CameraYd[2] = 0.0;
        iVar4 = 1;
        CameraYd[3] = 0.0;
        sceVu0UnitMatrix(TmpMat);
        fVar8 = gra3dcamGetRoll__Fv();
        fVar12 = 15.0;
        sceVu0RotMatrixZ(-fVar8,TmpMat,TmpMat);
        sceVu0ApplyMatrix(CameraYd,TmpMat,CameraYd);
        sceVu0OuterProduct(CameraXd,CameraZd,CameraYd);
        pafVar6 = Val;
        do {
          fVar9 = pQVar7->Power[0];
          pQVar7 = (QUAKE_CAMERA_CTRL *)(pQVar7->Power + 1);
                    /* inlined from ../../graphics/effect/effect.h */
          iVar5 = rand();
                    /* end of inlined section */
          fVar8 = -fVar9;
                    /* inlined from ../../graphics/effect/effect.h */
                    /* end of inlined section */
          fVar9 = fVar9 - fVar8;
                    /* inlined from ../../graphics/effect/effect.h */
          fVar10 = fVar9 * ((float)iVar5 / fVar1) + fVar8;
          iVar5 = rand();
          fVar11 = fVar9 * ((float)iVar5 / fVar1) + fVar8;
          iVar5 = rand();
                    /* end of inlined section */
                    /* inlined from ../../graphics/effect/effect.h */
                    /* end of inlined section */
          fVar8 = fVar9 * ((float)iVar5 / fVar1) + fVar8;
          if (QuakeCameraCtrl.Counter < 0xf) {
            fVar9 = (float)QuakeCameraCtrl.Counter / fVar12;
            fVar10 = fVar10 * fVar9;
            fVar11 = fVar11 * fVar9;
            fVar8 = fVar8 * fVar9;
          }
          iVar4 = iVar4 + -1;
          (*pafVar6)[0] = CameraXd[0] * fVar10 + CameraYd[0] * fVar11 + CameraZd[0] * fVar8;
          (*pafVar6)[1] = CameraXd[1] * fVar10 + CameraYd[1] * fVar11 + CameraZd[1] * fVar8;
          (*pafVar6)[3] = 0.0;
          (*pafVar6)[2] = CameraXd[2] * fVar10 + CameraYd[2] * fVar11 + CameraZd[2] * fVar8;
          pafVar6 = pafVar6[1];
        } while (-1 < iVar4);
        sceVu0AddVector(CameraPosition,pafVar3,Val);
        sceVu0AddVector(CameraTarget,pGVar2->vTarget,Val[1]);
        gra3dcamSetPosition__FPCf(CameraPosition);
        gra3dcamSetTarget__FPCfi(CameraTarget,1);
        gra3dApplyCamera__FP11GRA3DCAMERAi((GRA3DCAMERA *)0x0,1);
        iVar4 = 1;
      }
    }
    else {
      QuakeCameraCtrl.Counter = QuakeCameraCtrl.Counter + -1;
      iVar4 = 0;
    }
  }
  return iVar4;
}
