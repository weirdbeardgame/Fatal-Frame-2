// STATUS: NOT STARTED

#include "event_camera.h"

typedef enum {
	EVECAM_POINT_POSITION = 0,
	EVECAM_POINT_TARGET = 1
} EVENT_CAMERA_POINT_TYPE;

typedef struct {
	u_int *pDataTop;
	int NowFrame;
} VCI_CAMERA_CTRL;

typedef struct {
	float EventPosition[4];
	float EventTarget[4];
	float EventPositionOffset[4];
	float EventTargetOffset[4];
	int EventPositonObjType;
	int EventPositonObjId;
	int EventTargetObjType;
	int EventTargetObjId;
	float EventFov;
	float EventRoll;
	float EventMargin;
	u_int *pEventCamData;
	u_int WorldFlg;
} EVENT_CAMERA_CTRL;

struct fixed_array_base<float[4],50,float[50][4]> {
protected:
	float m_aData[50][4];
	
public:
	fixed_array_base<float[4],50,float[50][4]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	float&[4] operator[]();
	float&[4] operator[]();
	float*[4] data();
	float*[4] begin();
	float*[4] end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<float[4],50> : fixed_array_base<float[4],50,float[50][4]> {
};

unsigned char float [3] type_info node[8];
static VCI_CAMERA_CTRL vci_cam_ctrl;
static EVENT_CAMERA_CTRL event_camera_ctrl;

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3ac420;
	
  g3ddbgAssert__FbPCce(false,str_849);
  return (type_info *)v;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tfA3_f(0x3f0678,_max);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tfA3_f(0x3f0680,_max);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tfA3_f(0x3ac468,_max);
  }
  return (uint **)0x0;
}

void EventCameraReq() {
  EventCameraInitCtrl__FP17EVENT_CAMERA_CTRL(&event_camera_ctrl);
  MapCamSetEventCameraFlg__Fi(1);
  return;
}

static void EventCameraInitCtrl(EVENT_CAMERA_CTRL *pEveCamCtrl) {
  float fVar1;
  
  _SetVector__FPfffff(pEveCamCtrl->EventPosition,0.0,0.0,DAT_003ee278,0.0);
  _SetVector__FPfffff(pEveCamCtrl->EventTarget,0.0,0.0,0.0,0.0);
  _SetVector__FPfffff(pEveCamCtrl->EventPositionOffset,0.0,0.0,0.0,0.0);
  _SetVector__FPfffff(pEveCamCtrl->EventTargetOffset,0.0,0.0,0.0,0.0);
  fVar1 = DAT_003ee27c;
  pEveCamCtrl->EventMargin = 0.0;
  pEveCamCtrl->EventRoll = 0.0;
  pEveCamCtrl->EventTargetObjId = -1;
  pEveCamCtrl->EventFov = fVar1;
  pEveCamCtrl->WorldFlg = 0;
  pEveCamCtrl->EventPositonObjType = -1;
  pEveCamCtrl->EventPositonObjId = -1;
  pEveCamCtrl->EventTargetObjType = -1;
  pEveCamCtrl->pEventCamData = (uint *)0x0;
  return;
}

void EventCameraInitCtrlReq() {
  EventCameraInitCtrl__FP17EVENT_CAMERA_CTRL(&event_camera_ctrl);
  return;
}

void EventCameraSetVCIAddress(u_int *pData) {
	EVENT_CAMERA_CTRL *pEveCamCtrl;
	
  event_camera_ctrl.pEventCamData = pData;
  return;
}

void EventCameraSetPosition(float *Position) {
	EVENT_CAMERA_CTRL *pEveCamCtrl;
	
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
  event_camera_ctrl.EventPosition[0] = *Position;
  event_camera_ctrl.EventPosition[1] = Position[1];
  event_camera_ctrl.EventPosition[2] = Position[2];
  event_camera_ctrl.EventPosition[3] = Position[3];
                    /* end of inlined section */
  event_camera_ctrl.pEventCamData = (uint *)0x0;
  event_camera_ctrl.EventPositonObjId = -1;
  event_camera_ctrl.EventPositonObjType = -1;
  return;
}

void EventCameraSetTarget(float *Target) {
	EVENT_CAMERA_CTRL *pEveCamCtrl;
	
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
  event_camera_ctrl.EventTarget[0] = *Target;
  event_camera_ctrl.EventTarget[1] = Target[1];
  event_camera_ctrl.EventTarget[2] = Target[2];
  event_camera_ctrl.EventTarget[3] = Target[3];
                    /* end of inlined section */
  event_camera_ctrl.pEventCamData = (uint *)0x0;
  event_camera_ctrl.EventTargetObjId = -1;
  event_camera_ctrl.EventTargetObjType = -1;
  return;
}

void EventCameraSetPositionObjId(int Type, int Id) {
	EVENT_CAMERA_CTRL *pEveCamCtrl;
	
  event_camera_ctrl.EventPositonObjId = Id;
  event_camera_ctrl.EventPositonObjType = Type;
  return;
}

void EventCameraSetTargetObjId(int Type, int Id) {
	EVENT_CAMERA_CTRL *pEveCamCtrl;
	
  event_camera_ctrl.EventTargetObjId = Id;
  event_camera_ctrl.EventTargetObjType = Type;
  return;
}

void EventCameraSetPositionOffset(float *Offset) {
	EVENT_CAMERA_CTRL *pEveCamCtrl;
	float *pv0;
	
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
  event_camera_ctrl.EventPositionOffset[0] = *Offset;
  event_camera_ctrl.EventPositionOffset[1] = Offset[1];
  event_camera_ctrl.EventPositionOffset[2] = Offset[2];
  event_camera_ctrl.EventPositionOffset[3] = Offset[3];
  return;
}

void EventCameraSetTargetOffset(float *Offset) {
	EVENT_CAMERA_CTRL *pEveCamCtrl;
	float *pv0;
	
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
  event_camera_ctrl.EventTargetOffset[0] = *Offset;
  event_camera_ctrl.EventTargetOffset[1] = Offset[1];
  event_camera_ctrl.EventTargetOffset[2] = Offset[2];
  event_camera_ctrl.EventTargetOffset[3] = Offset[3];
  return;
}

void EventCameraSetFov(float Fov) {
	EVENT_CAMERA_CTRL *pEveCamCtrl;
	
  event_camera_ctrl.EventFov = Fov;
  return;
}

void EventCameraSetRoll(float Roll) {
	EVENT_CAMERA_CTRL *pEveCamCtrl;
	
  event_camera_ctrl.EventRoll = Roll;
  return;
}

void EventCameraSetMargin(float Margin) {
	EVENT_CAMERA_CTRL *pEveCamCtrl;
	
  event_camera_ctrl.EventMargin = Margin;
  return;
}

void EventCameraCut() {
  MapCamSetEventCameraFlg__Fi(0);
  return;
}

void EventCameraSetWorldFlg(int Flg) {
	EVENT_CAMERA_CTRL *pEveCamCtrl;
	
  if (Flg != 0) {
    event_camera_ctrl.WorldFlg = 1;
    return;
  }
  event_camera_ctrl.WorldFlg = 0;
  return;
}

int EventCameraMain() {
	EVENT_CAMERA_CTRL *pEveCamCtrl;
	float CamPosition[4];
	float CamTarget[4];
	
  int iVar1;
  float (*NowTarget) [4];
  float CamPosition [4];
  float CamTarget [4];
  
  if (event_camera_ctrl.pEventCamData == (uint *)0x0) {
    if ((event_camera_ctrl.EventPositonObjType == -1) || (event_camera_ctrl.EventPositonObjId == -1)
       ) {
      if (event_camera_ctrl.WorldFlg == 0) {
        iVar1 = GetPlyrAreaNo__Fv();
        MapCamGra3dcamSetPositionAddOffset__FPCfi(event_camera_ctrl.EventPosition,iVar1);
      }
      else {
        gra3dcamSetPosition__FPCf(event_camera_ctrl.EventPosition);
      }
    }
    else {
      iVar1 = GetObjectPos__FPfUci
                        (CamPosition,(uchar)event_camera_ctrl.EventPositonObjType,
                         event_camera_ctrl.EventPositonObjId);
      if (iVar1 != 0) {
        sceVu0AddVector(CamPosition,CamPosition,0x47bf90);
        gra3dcamSetPosition__FPCf(CamPosition);
      }
    }
    if ((event_camera_ctrl.EventTargetObjType == -1) || (event_camera_ctrl.EventTargetObjId == -1))
    {
      if (event_camera_ctrl.WorldFlg == 0) {
        iVar1 = GetPlyrAreaNo__Fv();
        MapCamGra3dcamSetTargetAddOffset__FPCfi(event_camera_ctrl.EventTarget,iVar1);
      }
      else {
        gra3dcamSetTarget__FPCfi(event_camera_ctrl.EventTarget,1);
      }
    }
    else {
      iVar1 = GetObjectPos__FPfUci
                        (CamTarget,(uchar)event_camera_ctrl.EventTargetObjType,
                         event_camera_ctrl.EventTargetObjId);
      if (iVar1 != 0) {
        NowTarget = gra3dcamGetTarget__Fv();
        sceVu0AddVector(CamTarget,CamTarget,0x47bfa0);
        MapCamGra3dcamSetTargetMargin__FPCfT0f
                  (CamTarget,(float *)NowTarget,event_camera_ctrl.EventMargin);
      }
    }
    gra3dcamSetFov__Ff(event_camera_ctrl.EventFov);
    gra3dcamSetRoll__Ff(event_camera_ctrl.EventRoll);
  }
  else {
    EventCameraVCIPlay__Fv();
  }
  gra3dApplyCamera__FP11GRA3DCAMERAi((GRA3DCAMERA *)0x0,1);
  return 0;
}

int EventCameraVCIPlay() {
  uint *pHead;
  int iVar1;
  
  pHead = vci_cam_ctrl.pDataTop;
  if (vci_cam_ctrl.pDataTop == (uint *)0x0) {
    printf("Error!! : pVciCam->pDataTop is NULL : in EventCameraVCIPlay()\n");
    iVar1 = 1;
  }
  else {
    if ((int)(uint)*(ushort *)(vci_cam_ctrl.pDataTop + 1) <= vci_cam_ctrl.NowFrame) {
      vci_cam_ctrl.NowFrame = *(ushort *)(vci_cam_ctrl.pDataTop + 1) - 1;
    }
    iVar1 = GetPlyrAreaNo__Fv();
    EventCameraVCIPlayFrame__FP17VCI_CAMERA_HEADERUii
              ((VCI_CAMERA_HEADER *)pHead,vci_cam_ctrl.NowFrame,iVar1);
    iVar1 = 0;
    vci_cam_ctrl.NowFrame = vci_cam_ctrl.NowFrame + 1;
  }
  return iVar1;
}

int EventCameraVCIPlayIsEnd() {
	int Ret;
	
  uint uVar1;
  
  uVar1 = 1;
  if (vci_cam_ctrl.pDataTop != (uint *)0x0) {
    uVar1 = (uint)((int)(uint)*(ushort *)(vci_cam_ctrl.pDataTop + 1) <= vci_cam_ctrl.NowFrame);
  }
  return uVar1;
}

static void EventCameraVCIPlayFrame(VCI_CAMERA_HEADER *pHead, u_int frame, int RoomNo) {
	float PosDist;
	float TargetDist;
	float RollDist;
	float ProjDist;
	int AllTime;
	int TmpFrame;
	
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float PosDist;
  float TargetDist;
  
  if (pHead != (VCI_CAMERA_HEADER *)0x0) {
    EventCameraGetMoveDist__FPfT0P17VCI_CAMERA_HEADER(&PosDist,&TargetDist,pHead);
    fVar2 = EventCameraGetRollDist__FP17VCI_CAMERA_HEADER(pHead);
    fVar3 = EventCameraGetProjDist__FP17VCI_CAMERA_HEADER(pHead);
    iVar1 = (uint)(ushort)pHead->AccelTime + (uint)(ushort)pHead->EqualTime +
            (uint)(ushort)pHead->BrakeTime;
    if (iVar1 == 0) {
      printf("Error!! AllTime is zero. : in EventCameraVCIPlayFrame()\n");
    }
    else {
      if (iVar1 == 0) {
        trap(7);
      }
      iVar1 = (uint)(ushort)pHead->Frame +
              (int)((uint)(ushort)pHead->Frame * (uint)(ushort)pHead->EqualTime) / iVar1;
      if (iVar1 == 0) {
        printf("Error!! TmpFrame is zero. : in EventCameraVCIPlayFrame()\n");
      }
      else {
        fVar4 = (float)iVar1;
        EventCameraHokan__FP17VCI_CAMERA_HEADERUiffffi
                  (pHead,frame,(PosDist + PosDist) / fVar4,(TargetDist + TargetDist) / fVar4,
                   (fVar2 + fVar2) / fVar4,(fVar3 + fVar3) / fVar4,RoomNo);
      }
    }
  }
  return;
}

void EventCameraVCICtrlInit(u_int *pDataTop) {
  vci_cam_ctrl.pDataTop = pDataTop;
  vci_cam_ctrl.NowFrame = 0;
  return;
}

static float EventCameraGetProgress(VCI_CAMERA_HEADER *pHead, u_int frame) {
	u_int EqualFrame;
	u_int AllTime;
	float ret;
	u_int TmpFrame;
	
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar9 = 0.0;
  uVar4 = (uint)(ushort)pHead->AccelTime + (uint)(ushort)pHead->EqualTime +
          (uint)(ushort)pHead->BrakeTime;
  if (uVar4 == 0) {
    printf("Error!! : AllTime is zero\n");
    fVar9 = 0.0;
  }
  else {
    uVar1 = pHead->Frame;
    if (uVar4 == 0) {
      trap(7);
    }
    uVar2 = (int)((uint)(ushort)pHead->AccelTime * (uint)uVar1) / (int)uVar4;
    uVar4 = ((uint)(ushort)pHead->BrakeTime * (uint)uVar1) / uVar4;
    uVar3 = (uVar1 - uVar2) - uVar4;
    if (uVar2 < frame) {
      if (uVar2 + uVar3 < frame) {
        uVar5 = uVar4 - ((frame - uVar2) - uVar3);
        if (uVar4 != 0) {
          if ((int)uVar2 < 0) {
            fVar9 = (float)(uVar2 & 1 | uVar2 >> 1);
            fVar9 = fVar9 + fVar9;
          }
          else {
            fVar9 = (float)uVar2;
          }
          if ((int)uVar3 < 0) {
            fVar6 = (float)(uVar3 & 1 | uVar3 >> 1);
            fVar6 = fVar6 + fVar6;
          }
          else {
            fVar6 = (float)uVar3;
          }
          if ((int)uVar5 < 0) {
            fVar7 = (float)(uVar5 & 1 | uVar5 >> 1);
            fVar7 = fVar7 + fVar7;
          }
          else {
            fVar7 = (float)uVar5;
          }
          if ((int)uVar5 < 0) {
            fVar8 = (float)(uVar5 & 1 | uVar5 >> 1);
            fVar8 = fVar8 + fVar8;
          }
          else {
            fVar8 = (float)uVar5;
          }
          fVar9 = (fVar9 * 100.0 * 0.5 + fVar6 * 100.0 + (float)uVar4 * 100.0 * 0.5) -
                  ((fVar7 * 100.0 * fVar8) / (float)uVar4) * 0.5;
        }
      }
      else {
        fVar9 = 0.0;
        if (uVar2 + uVar3 != 0) {
          if ((int)uVar2 < 0) {
            fVar9 = (float)(uVar2 & 1 | uVar2 >> 1);
            fVar9 = fVar9 + fVar9;
          }
          else {
            fVar9 = (float)uVar2;
          }
          uVar2 = frame - uVar2;
          if ((int)uVar2 < 0) {
            fVar6 = (float)(uVar2 & 1 | uVar2 >> 1);
            fVar6 = fVar6 + fVar6;
          }
          else {
            fVar6 = (float)uVar2;
          }
          fVar9 = fVar9 * 100.0 * 0.5 + fVar6 * 100.0;
        }
      }
    }
    else {
      fVar9 = 0.0;
      if (uVar2 != 0) {
        if ((int)frame < 0) {
          fVar9 = (float)(frame & 1 | frame >> 1);
          fVar9 = fVar9 + fVar9;
        }
        else {
          fVar9 = (float)frame;
        }
        if ((int)frame < 0) {
          fVar6 = (float)(frame & 1 | frame >> 1);
          fVar6 = fVar6 + fVar6;
        }
        else {
          fVar6 = (float)frame;
        }
        if ((int)uVar2 < 0) {
          fVar7 = (float)(uVar2 & 1 | uVar2 >> 1);
          fVar7 = fVar7 + fVar7;
        }
        else {
          fVar7 = (float)uVar2;
        }
        fVar9 = ((fVar9 * 100.0 * fVar6) / fVar7) * 0.5;
      }
    }
  }
  return fVar9;
}

static void EventCameraHokan(VCI_CAMERA_HEADER *pHead, u_int frame, float PosSpdMax, float TargetSpdMax, float RollSpdMax, float ProjSpdMax, int RoomNo) {
	float PosDist;
	float TargetDist;
	float RollDist;
	float ProjDist;
	int PointNo;
	float Progress;
	
  int PointNo;
  float fVar1;
  float TargetDist;
  float PosDist;
  float Dist;
  
  fVar1 = EventCameraGetProgress__FP17VCI_CAMERA_HEADERUi(pHead,frame);
  PosDist = (PosSpdMax * fVar1) / 100.0;
  TargetDist = (TargetSpdMax * fVar1) / 100.0;
  Dist = (RollSpdMax * fVar1) / 100.0;
  if (PosDist < TargetDist) {
    PointNo = EventCameraGetTargetDistToPointNo__FP17VCI_CAMERA_HEADERf(pHead,TargetDist);
  }
  else {
    PointNo = EventCameraGetPosDistToPointNo__FP17VCI_CAMERA_HEADERf(pHead,PosDist);
  }
  if (pHead->HokanType == 1) {
    EventCameraSetBezier__FP17VCI_CAMERA_HEADERfii(pHead,PosDist,RoomNo,0);
    EventCameraSetBezier__FP17VCI_CAMERA_HEADERfii(pHead,TargetDist,RoomNo,1);
  }
  else if (pHead->HokanType == 2) {
    EventCameraSetHermite__FP17VCI_CAMERA_HEADERifii(pHead,PointNo,PosDist,RoomNo,0);
    EventCameraSetHermite__FP17VCI_CAMERA_HEADERifii(pHead,PointNo,TargetDist,RoomNo,1);
  }
  else {
    EventCameraSetFromPointDist__FP17VCI_CAMERA_HEADERifii(pHead,PointNo,PosDist,RoomNo,0);
    EventCameraSetFromPointDist__FP17VCI_CAMERA_HEADERifii(pHead,PointNo,TargetDist,RoomNo,1);
  }
  EventCameraSetRollFromPointDist__FP17VCI_CAMERA_HEADERif(pHead,PointNo,Dist);
  EventCameraSetProjFromPointDist__FP17VCI_CAMERA_HEADERif
            (pHead,PointNo,(ProjSpdMax * fVar1) / 100.0);
  gra3dApplyCamera__FP11GRA3DCAMERAi((GRA3DCAMERA *)0x0,1);
  return;
}

static int EventCameraGetPosDistToPointNo(VCI_CAMERA_HEADER *pHead, float PosDist) {
	int i;
	float dist;
	int PointNo;
	
  VCI_CAMERA_HEADER *v1;
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = 0.0;
  if (pHead == (VCI_CAMERA_HEADER *)0x0) {
    printf("Error!! : pHead is NULL\n");
    iVar2 = 0;
  }
  else {
    v1 = pHead + 1;
    for (iVar1 = 0; iVar2 = 0, iVar1 < (int)((ushort)pHead->DataNum - 1); iVar1 = iVar1 + 1) {
      fVar3 = Get2PLength__FPCfT0((float *)v1,(float *)(v1 + 3));
      fVar4 = fVar4 + fVar3;
      iVar2 = iVar1;
      if (PosDist <= fVar4) break;
      v1 = v1 + 3;
    }
    if (fVar4 < PosDist) {
      iVar2 = (ushort)pHead->DataNum - 2;
    }
  }
  return iVar2;
}

static int EventCameraGetTargetDistToPointNo(VCI_CAMERA_HEADER *pHead, float TargetDist) {
	int i;
	float dist;
	int PointNo;
	
  VCI_CAMERA_HEADER *pVVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = 0.0;
  if (pHead == (VCI_CAMERA_HEADER *)0x0) {
    printf("Error!! : pHead is NULL\n");
    iVar3 = 0;
  }
  else {
    pVVar1 = pHead + 1;
    for (iVar2 = 0; iVar3 = 0, iVar2 < (int)((ushort)pHead->DataNum - 1); iVar2 = iVar2 + 1) {
      fVar4 = Get2PLength__FPCfT0((float *)(pVVar1 + 1),(float *)(pVVar1 + 4));
      fVar5 = fVar5 + fVar4;
      pVVar1 = pVVar1 + 3;
      iVar3 = iVar2;
      if (TargetDist <= fVar5) break;
    }
    if (fVar5 < TargetDist) {
      iVar3 = (ushort)pHead->DataNum - 2;
    }
  }
  return iVar3;
}

static void EventCameraGetMoveDistToPoint(float *pPosDist, float *pTargetDist, VCI_CAMERA_HEADER *pHead, int PointNo) {
	VCI_CAMERA_POINT *pEveCam;
	int i;
	
  VCI_CAMERA_HEADER *v1;
  float fVar1;
  
  if (pHead != (VCI_CAMERA_HEADER *)0x0) {
    v1 = pHead + 1;
    if (pPosDist != (float *)0x0) {
      *pPosDist = 0.0;
    }
    if (pTargetDist != (float *)0x0) {
      *pTargetDist = 0.0;
    }
    if ((int)(uint)(ushort)pHead->DataNum <= PointNo) {
      printf("Error!! : PointNo is beyond DataNum\n");
    }
    if (0 < PointNo) {
      do {
        if (pPosDist != (float *)0x0) {
          fVar1 = Get2PLength__FPCfT0((float *)v1,(float *)(v1 + 3));
          *pPosDist = *pPosDist + fVar1;
        }
        if (pTargetDist != (float *)0x0) {
          fVar1 = Get2PLength__FPCfT0((float *)(v1 + 1),(float *)(v1 + 4));
          *pTargetDist = *pTargetDist + fVar1;
        }
        PointNo = PointNo + -1;
        v1 = v1 + 3;
      } while (PointNo != 0);
    }
    return;
  }
  printf("Error!! pHead is NULL : in EventCameraGetMoveDistToPoint()\n");
  return;
}

static float EventCameraGetRollDistToPoint(VCI_CAMERA_HEADER *pHead, int PointNo) {
	VCI_CAMERA_POINT *pEveCam;
	int i;
	float dist;
	
  VCI_CAMERA_HEADER *pVVar1;
  VCI_CAMERA_HEADER *pVVar2;
  int iVar3;
  double arg_a;
  VCI_CAMERA_HEADER *pVVar4;
  float fVar5;
  float fVar6;
  
  fVar6 = 0.0;
  if (pHead == (VCI_CAMERA_HEADER *)0x0) {
    printf("Error!! pHead is NULL : in EventCameraGetRollDistToPoint()\n");
    fVar5 = 0.0;
  }
  else {
    pVVar4 = pHead + 1;
    if ((int)(uint)(ushort)pHead->DataNum <= PointNo) {
      printf("Error!! : PointNo is beyond DataNum\n");
    }
    fVar5 = 0.0;
    if (0 < PointNo) {
      do {
        pVVar1 = pVVar4 + 5;
        pVVar2 = pVVar4 + 2;
        pVVar4 = pVVar4 + 3;
        arg_a = (double)(*(float *)pVVar1->FileId - *(float *)pVVar2->FileId);
        iVar3 = dpcmp((long)arg_a,0);
        if (iVar3 < 0) {
          arg_a = 0.0 - arg_a;
        }
        PointNo = PointNo + -1;
        fVar5 = fVar6 + (float)arg_a;
        fVar6 = fVar5;
      } while (PointNo != 0);
    }
  }
  return fVar5;
}

static float EventCameraGetProjDistToPoint(VCI_CAMERA_HEADER *pHead, int PointNo) {
	VCI_CAMERA_POINT *pEveCam;
	int i;
	float dist;
	
  VCI_CAMERA_HEADER *pVVar1;
  VCI_CAMERA_HEADER *pVVar2;
  int iVar3;
  double arg_a;
  VCI_CAMERA_HEADER *pVVar4;
  float fVar5;
  float fVar6;
  
  fVar6 = 0.0;
  if (pHead == (VCI_CAMERA_HEADER *)0x0) {
    printf("Error!! pHead is NULL : in EventCameraGetProjDistToPoint()\n");
    fVar5 = 0.0;
  }
  else {
    pVVar4 = pHead + 1;
    if ((int)(uint)(ushort)pHead->DataNum <= PointNo) {
      printf("Error!! : PointNo is beyond DataNum\n");
    }
    fVar5 = 0.0;
    if (0 < PointNo) {
      do {
        pVVar1 = pVVar4 + 5;
        pVVar2 = pVVar4 + 2;
        pVVar4 = pVVar4 + 3;
        arg_a = (double)(*(float *)&pVVar1->Frame - *(float *)&pVVar2->Frame);
        iVar3 = dpcmp((long)arg_a,0);
        if (iVar3 < 0) {
          arg_a = 0.0 - arg_a;
        }
        PointNo = PointNo + -1;
        fVar5 = fVar6 + (float)arg_a;
        fVar6 = fVar5;
      } while (PointNo != 0);
    }
  }
  return fVar5;
}

static void EventCameraGetMoveDist(float *pPosDist, float *pTargetDist, VCI_CAMERA_HEADER *pHead) {
  if (pHead == (VCI_CAMERA_HEADER *)0x0) {
    printf("Error!! pHead is NULL : in EventCameraGetMoveDist()\n");
    return;
  }
  EventCameraGetMoveDistToPoint__FPfT0P17VCI_CAMERA_HEADERi
            (pPosDist,pTargetDist,pHead,(ushort)pHead->DataNum - 1);
  return;
}

static float EventCameraGetRollDist(VCI_CAMERA_HEADER *pHead) {
  float fVar1;
  
  if (pHead == (VCI_CAMERA_HEADER *)0x0) {
    printf("Error!! pHead is NULL : in EventCameraGetRollDist()\n");
    return 0.0;
  }
  fVar1 = EventCameraGetRollDistToPoint__FP17VCI_CAMERA_HEADERi(pHead,(ushort)pHead->DataNum - 1);
  return fVar1;
}

static float EventCameraGetProjDist(VCI_CAMERA_HEADER *pHead) {
  float fVar1;
  
  if (pHead == (VCI_CAMERA_HEADER *)0x0) {
    printf("Error!! pHead is NULL : in EventCameraGetProjDist()\n");
    return 0.0;
  }
  fVar1 = EventCameraGetProjDistToPoint__FP17VCI_CAMERA_HEADERi(pHead,(ushort)pHead->DataNum - 1);
  return fVar1;
}

static void EventCameraSetFromPointDist(VCI_CAMERA_HEADER *pHead, int PointNo, float Dist, int RoomNo, int PointType) {
	VCI_CAMERA_POINT *pEveCam;
	float TmpVec[4];
	float StartPos[4];
	float EndPos[4];
	float PointDist;
	float Point2PointDist;
	
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  VCI_CAMERA_HEADER *pVVar5;
  float fVar6;
  float fVar7;
  float TmpVec [4];
  float StartPos [4];
  float EndPos [4];
  float PointDist;
  
  if (pHead == (VCI_CAMERA_HEADER *)0x0) {
    printf("Error!! pHead is NULL : in EventCameraSetPosFromPointDist()\n");
  }
  else {
    if (PointType == 0) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
      pVVar5 = pHead + PointNo * 3 + 1;
      uVar1._0_1_ = pVVar5->FileId[0];
      uVar1._1_1_ = pVVar5->FileId[1];
      uVar1._2_1_ = pVVar5->FileId[2];
      uVar1._3_1_ = pVVar5->FileId[3];
      uVar1._4_2_ = pVVar5->Frame;
      uVar1._6_2_ = pVVar5->DataNum;
      StartPos[2] = *(float *)&pVVar5->HokanType;
      StartPos[3] = *(float *)&pVVar5->EqualTime;
      StartPos[0] = (float)uVar1;
      StartPos[1] = (float)((ulong)uVar1 >> 0x20);
      uVar2._0_1_ = pVVar5[3].FileId[0];
      uVar2._1_1_ = pVVar5[3].FileId[1];
      uVar2._2_1_ = pVVar5[3].FileId[2];
      uVar2._3_1_ = pVVar5[3].FileId[3];
      uVar2._4_2_ = pVVar5[3].Frame;
      uVar2._6_2_ = pVVar5[3].DataNum;
      EndPos[2] = *(float *)&pVVar5[3].HokanType;
      EndPos[3] = *(float *)&pVVar5[3].EqualTime;
      EndPos[0] = (float)uVar2;
      EndPos[1] = (float)((ulong)uVar2 >> 0x20);
                    /* end of inlined section */
      EventCameraGetMoveDistToPoint__FPfT0P17VCI_CAMERA_HEADERi
                (&PointDist,(float *)0x0,pHead,PointNo);
    }
    else {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
      pVVar5 = pHead + PointNo * 3 + 2;
      uVar3._0_1_ = pVVar5->FileId[0];
      uVar3._1_1_ = pVVar5->FileId[1];
      uVar3._2_1_ = pVVar5->FileId[2];
      uVar3._3_1_ = pVVar5->FileId[3];
      uVar3._4_2_ = pVVar5->Frame;
      uVar3._6_2_ = pVVar5->DataNum;
      StartPos[2] = *(float *)&pHead[PointNo * 3 + 2].HokanType;
      StartPos[3] = *(float *)&pHead[PointNo * 3 + 2].EqualTime;
      StartPos[0] = (float)uVar3;
      StartPos[1] = (float)((ulong)uVar3 >> 0x20);
      pVVar5 = pHead + PointNo * 3 + 5;
      uVar4._0_1_ = pVVar5->FileId[0];
      uVar4._1_1_ = pVVar5->FileId[1];
      uVar4._2_1_ = pVVar5->FileId[2];
      uVar4._3_1_ = pVVar5->FileId[3];
      uVar4._4_2_ = pVVar5->Frame;
      uVar4._6_2_ = pVVar5->DataNum;
      EndPos[2] = *(float *)&pHead[PointNo * 3 + 5].HokanType;
      EndPos[3] = *(float *)&pHead[PointNo * 3 + 5].EqualTime;
      EndPos[0] = (float)uVar4;
      EndPos[1] = (float)((ulong)uVar4 >> 0x20);
                    /* end of inlined section */
      EventCameraGetMoveDistToPoint__FPfT0P17VCI_CAMERA_HEADERi
                ((float *)0x0,&PointDist,pHead,PointNo);
    }
    fVar7 = Dist - PointDist;
    fVar6 = Get2PLength__FPCfT0(EndPos,StartPos);
    sceVu0SubVector(TmpVec,EndPos,StartPos);
    if (fVar6 == 0.0) {
      sceVu0ScaleVector(TmpVec,TmpVec);
    }
    else {
      sceVu0ScaleVector(fVar7 / fVar6,TmpVec,TmpVec);
    }
    sceVu0AddVector(TmpVec,TmpVec,StartPos);
    if (PointType == 0) {
      MapCamGra3dcamSetPositionAddOffset__FPCfi(TmpVec,RoomNo);
    }
    else {
      MapCamGra3dcamSetTargetAddOffset__FPCfi(TmpVec,RoomNo);
    }
  }
  return;
}

static void EventCameraSetBezier(VCI_CAMERA_HEADER *pHead, float Dist, int RoomNo, int PointType) {
	fixed_array<float[4],50> ControlPoint;
	float TmpVec[4];
	VCI_CAMERA_POINT *pEveCam;
	int i;
	float AllDist;
	float DistRate;
	
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  VCI_CAMERA_HEADER *pVVar5;
  int iVar6;
  fixed_array<float[4],50> *pfVar7;
  fixed_array<float[4],50> *pfVar8;
  float t;
  fixed_array<float[4],50> ControlPoint;
  float TmpVec [4];
  float AllDist;
  
  pfVar7 = &ControlPoint;
  pfVar8 = &ControlPoint;
  if (pHead == (VCI_CAMERA_HEADER *)0x0) {
    printf("Error!! pHead is NULL : in EventCameraSetPosFromPointDist()\n");
  }
  else if ((ushort)pHead->DataNum < 0x33) {
    pVVar5 = pHead + 1;
    if (PointType == 0) {
      iVar6 = 0;
      if (pHead->DataNum != 0) {
        do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
          _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(iVar6,0x32);
          uVar1._0_1_ = pVVar5->FileId[0];
          uVar1._1_1_ = pVVar5->FileId[1];
          uVar1._2_1_ = pVVar5->FileId[2];
          uVar1._3_1_ = pVVar5->FileId[3];
          uVar1._4_2_ = pVVar5->Frame;
          uVar1._6_2_ = pVVar5->DataNum;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
          uVar3 = *(undefined4 *)&pVVar5->HokanType;
          uVar4 = *(undefined4 *)&pVVar5->EqualTime;
          *(int *)pfVar7 = (int)uVar1;
          *(int *)((int)pfVar7 + 4) = (int)((ulong)uVar1 >> 0x20);
          *(undefined4 *)((int)pfVar7 + 8) = uVar3;
          *(undefined4 *)((int)pfVar7 + 0xc) = uVar4;
                    /* end of inlined section */
          iVar6 = iVar6 + 1;
          pVVar5 = pVVar5 + 3;
          pfVar7 = (fixed_array<float[4],50> *)((int)pfVar7 + 0x10);
        } while (iVar6 < (int)(uint)(ushort)pHead->DataNum);
      }
      EventCameraGetMoveDist__FPfT0P17VCI_CAMERA_HEADER(&AllDist,(float *)0x0,pHead);
    }
    else {
      iVar6 = 0;
      if (pHead->DataNum != 0) {
        pVVar5 = pHead + 2;
        do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
          _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(iVar6,0x32);
          uVar2._0_1_ = pVVar5->FileId[0];
          uVar2._1_1_ = pVVar5->FileId[1];
          uVar2._2_1_ = pVVar5->FileId[2];
          uVar2._3_1_ = pVVar5->FileId[3];
          uVar2._4_2_ = pVVar5->Frame;
          uVar2._6_2_ = pVVar5->DataNum;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
          uVar3 = *(undefined4 *)&pVVar5->HokanType;
          uVar4 = *(undefined4 *)&pVVar5->EqualTime;
          *(int *)pfVar8 = (int)uVar2;
          *(int *)((int)pfVar8 + 4) = (int)((ulong)uVar2 >> 0x20);
          *(undefined4 *)((int)pfVar8 + 8) = uVar3;
          *(undefined4 *)((int)pfVar8 + 0xc) = uVar4;
                    /* end of inlined section */
          iVar6 = iVar6 + 1;
          pVVar5 = pVVar5 + 3;
          pfVar8 = (fixed_array<float[4],50> *)((int)pfVar8 + 0x10);
        } while (iVar6 < (int)(uint)(ushort)pHead->DataNum);
      }
      EventCameraGetMoveDist__FPfT0P17VCI_CAMERA_HEADER((float *)0x0,&AllDist,pHead);
    }
    t = 0.0;
    if (AllDist != 0.0) {
      t = Dist / AllDist;
    }
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(0,0x32);
    CalcBezierPoint__FPfifPA3_f(TmpVec,(ushort)pHead->DataNum - 1,t,(float (*) [4])&ControlPoint);
                    /* end of inlined section */
    if (PointType == 0) {
      MapCamGra3dcamSetPositionAddOffset__FPCfi(TmpVec,RoomNo);
    }
    else {
      MapCamGra3dcamSetTargetAddOffset__FPCfi(TmpVec,RoomNo);
    }
  }
  else {
    printf(
          "Error!! Bezier Control Point Over : in EventCameraSetPosFromPointDist() : pHead->DataNum = %d\n"
          );
  }
  return;
}

static void EventCameraSetRollFromPointDist(VCI_CAMERA_HEADER *pHead, int PointNo, float Dist) {
	VCI_CAMERA_POINT *pEveCam;
	float ChgRoll;
	float Roll;
	
  int iVar1;
  double arg_a;
  float fVar2;
  float fRad;
  float fVar3;
  
  if (pHead != (VCI_CAMERA_HEADER *)0x0) {
    fVar2 = EventCameraGetRollDistToPoint__FP17VCI_CAMERA_HEADERi(pHead,PointNo);
    fVar2 = Dist - fVar2;
    fRad = *(float *)pHead[PointNo * 3 + 3].FileId;
    fVar3 = *(float *)pHead[PointNo * 3 + 6].FileId - fRad;
    arg_a = (double)fVar3;
    iVar1 = dpcmp((long)arg_a,0);
    if (iVar1 < 0) {
      arg_a = 0.0 - arg_a;
    }
    if ((float)arg_a != 0.0) {
      fRad = fRad + (fVar3 * fVar2) / (float)arg_a;
    }
    gra3dcamSetRoll__Ff(fRad);
    return;
  }
  printf("Error!! pHead is NULL : in EventCameraSetRollFromPointDist()\n");
  return;
}

static void EventCameraSetProjFromPointDist(VCI_CAMERA_HEADER *pHead, int PointNo, float Dist) {
	VCI_CAMERA_POINT *pEveCam;
	float ChgProj;
	float Proj;
	
  int iVar1;
  double arg_a;
  float fVar2;
  float fFov;
  float fVar3;
  
  if (pHead != (VCI_CAMERA_HEADER *)0x0) {
    fVar2 = EventCameraGetProjDistToPoint__FP17VCI_CAMERA_HEADERi(pHead,PointNo);
    fVar2 = Dist - fVar2;
    fFov = *(float *)&pHead[PointNo * 3 + 3].Frame;
    fVar3 = *(float *)&pHead[PointNo * 3 + 6].Frame - fFov;
    arg_a = (double)fVar3;
    iVar1 = dpcmp((long)arg_a,0);
    if (iVar1 < 0) {
      arg_a = 0.0 - arg_a;
    }
    if ((float)arg_a != 0.0) {
      fFov = fFov + (fVar3 * fVar2) / (float)arg_a;
    }
    gra3dcamSetFov__Ff(fFov);
    return;
  }
  printf("Error!! pHead is NULL : in EventCameraSetProjFromPointDist()\n");
  return;
}

int EventCameraGetDataNum(u_int *pData) {
  uint uVar1;
  
  if (pData == (uint *)0x0) {
    printf("Error!! pData is NULL : in EventCameraGetDataNum()\n");
    uVar1 = 0;
  }
  else {
    uVar1 = (uint)*(ushort *)((int)pData + 6);
  }
  return uVar1;
}

void EventCameraGetPosition(float *Position, u_int *pData, int PointNo) {
	VCI_CAMERA_POINT *pPoint;
	float *pv1;
	
  undefined8 uVar1;
  undefined8 *puVar2;
  float fVar3;
  float fVar4;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
                    /* end of inlined section */
                    /* end of inlined section */
  if (pData == (uint *)0x0) {
    printf("Error!! pData is NULL : in EventCameraGetPosition()\n");
    return;
  }
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
  puVar2 = (undefined8 *)(pData + PointNo * 0xc + 4);
  uVar1 = *puVar2;
  fVar3 = *(float *)(puVar2 + 1);
  fVar4 = *(float *)((int)puVar2 + 0xc);
  *Position = (float)uVar1;
  Position[1] = (float)((ulong)uVar1 >> 0x20);
  Position[2] = fVar3;
  Position[3] = fVar4;
  return;
}

void EventCameraGetTarget(float *Target, u_int *pData, int PointNo) {
	float *pv1;
	
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
                    /* end of inlined section */
                    /* end of inlined section */
  if (pData == (uint *)0x0) {
    printf("Error!! pData is NULL : in EventCameraGetTarget()\n");
    return;
  }
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
  uVar1 = *(undefined8 *)(pData + PointNo * 0xc + 8);
  fVar2 = (float)pData[PointNo * 0xc + 10];
  fVar3 = (float)pData[PointNo * 0xc + 0xb];
  *Target = (float)uVar1;
  Target[1] = (float)((ulong)uVar1 >> 0x20);
  Target[2] = fVar2;
  Target[3] = fVar3;
  return;
}

void EventCameraGetOneData(VCI_CAMERA_POINT *pOut, u_int *pData, int PointNo) {
	VCI_CAMERA_POINT *pPoint;
	
  undefined4 uVar1;
  undefined8 *puVar2;
  
  if (pData == (uint *)0x0) {
    printf("Error!! pData is NULL : in EventCameraGetTarget()\n");
    return;
  }
  puVar2 = (undefined8 *)(pData + PointNo * 0xc + 4);
  *(undefined8 *)pOut->LocalPosition = *puVar2;
  *(undefined8 *)(pOut->LocalPosition + 2) = puVar2[1];
  *(undefined8 *)pOut->LocalTarget = puVar2[2];
  *(undefined8 *)(pOut->LocalTarget + 2) = puVar2[3];
  uVar1 = *(undefined4 *)((int)(puVar2 + 4) + 4);
  pOut->Roll = (float)*(undefined4 *)(puVar2 + 4);
  pOut->Proj = (float)uVar1;
  *(undefined8 *)&pOut->field_0x28 = puVar2[5];
  return;
}

int EventCameraCheckFileId(u_int *pData) {
	int ret;
	
  uint uVar1;
  
  uVar1 = 0;
  if (pData != (uint *)0x0) {
    if (*(short *)pData == 0x5645) {
      uVar1 = (uint)(*(short *)((int)pData + 2) == 0x4345);
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}

void EventCameraVCIReq(int CamNo) {
	static char __FUNCTION__[18] = {
		/* [0] = */ 69,
		/* [1] = */ 118,
		/* [2] = */ 101,
		/* [3] = */ 110,
		/* [4] = */ 116,
		/* [5] = */ 67,
		/* [6] = */ 97,
		/* [7] = */ 109,
		/* [8] = */ 101,
		/* [9] = */ 114,
		/* [10] = */ 97,
		/* [11] = */ 86,
		/* [12] = */ 67,
		/* [13] = */ 73,
		/* [14] = */ 82,
		/* [15] = */ 101,
		/* [16] = */ 113,
		/* [17] = */ 0
	};
	u_int *pVciData;
	
  uint *pData;
  int iVar1;
  
  pData = GetAddrPK2__FPUiUi((uint *)0x59ec00,CamNo);
  iVar1 = EventCameraCheckFileId__FPCUi(pData);
  if (iVar1 == 0) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error!! Not VCI data 0x%x : EventCameraVCIReq(%d)");
  }
  EventCameraSetVCIAddress__FPUi(pData);
  EventCameraVCICtrlInit__FPUi(pData);
  MapCamSetEventCameraFlg__Fi(1);
  return;
}

static u_int* GetAddrPK2(u_int *top, u_int no) {
	static char __FUNCTION__[11] = {
		/* [0] = */ 71,
		/* [1] = */ 101,
		/* [2] = */ 116,
		/* [3] = */ 65,
		/* [4] = */ 100,
		/* [5] = */ 100,
		/* [6] = */ 114,
		/* [7] = */ 80,
		/* [8] = */ 75,
		/* [9] = */ 50,
		/* [10] = */ 0
	};
	
  uint *puVar1;
  
  puVar1 = (uint *)0x0;
  if (top != (uint *)0x0) {
    if (*top <= no) {
      printf("Error!! *top = %d, no = %d : GetAddrPK2()\n");
      SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
      PrintAssertReal(&DAT_003f0688);
    }
    puVar1 = (uint *)((int)top + top[no + 4]);
  }
  return puVar1;
}

void CalcBezierPoint(float *Point, int n, float t, float *pControlPoint[4]) {
	fixed_array<float[4],50> WorkVector;
	float TmpVector[4];
	int m;
	int i;
	int j;
	
  undefined8 uVar1;
  int iVar2;
  float (*pafVar3) [4];
  float fVar4;
  float fVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  fixed_array<float[4],50> WorkVector;
  float TmpVector [4];
  
  if (0x32 < n) {
    printf("Error!! Bezier Control Point Over : in CalcBezierPoint() : n = %d\n");
  }
  iVar6 = 0;
  if (-1 < n) {
    do {
      _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(iVar6,0x32);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
      pafVar3 = pControlPoint[iVar6];
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      uVar1 = *(undefined8 *)*pafVar3;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
      fVar4 = (*pafVar3)[2];
      fVar5 = (*pafVar3)[3];
      TmpVector[iVar6 * 4 + -200] = (float)uVar1;
      TmpVector[iVar6 * 4 + -199] = (float)((ulong)uVar1 >> 0x20);
      TmpVector[iVar6 * 4 + -0xc6] = fVar4;
      TmpVector[iVar6 * 4 + -0xc5] = fVar5;
                    /* end of inlined section */
      iVar6 = iVar6 + 1;
    } while (iVar6 <= n);
  }
  iVar6 = 1;
  if (0 < n) {
    iVar10 = n + -1;
    while( true ) {
      if (-1 < iVar10) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        iVar2 = 1;
        iVar9 = 0;
        while( true ) {
          iVar8 = iVar2;
          _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(iVar8,0x32);
          _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(iVar9,0x32);
          pfVar7 = TmpVector + iVar9 * 4 + -200;
          sceVu0SubVector(TmpVector,TmpVector + iVar8 * 4 + -200,pfVar7);
                    /* end of inlined section */
          sceVu0ScaleVectorXYZ(t,TmpVector,TmpVector);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
          _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(iVar9,0x32);
          _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(iVar9,0x32);
          sceVu0AddVector(pfVar7,pfVar7,TmpVector);
                    /* end of inlined section */
          if (iVar10 < iVar8) break;
          iVar2 = iVar8 + 1;
          iVar9 = iVar8;
        }
      }
      iVar6 = iVar6 + 1;
      if (n < iVar6) break;
      iVar10 = n - iVar6;
    }
  }
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(0,0x32);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
  *Point = (float)WorkVector.field0_0x0.m_aData[0]._0_8_;
  Point[1] = SUB84(WorkVector.field0_0x0.m_aData[0]._0_8_,4);
  Point[2] = WorkVector.field0_0x0.m_aData[0][2];
  Point[3] = WorkVector.field0_0x0.m_aData[0][3];
                    /* end of inlined section */
  Point[3] = 1.0;
  return;
}

static void EventCameraSetHermite(VCI_CAMERA_HEADER *pHead, int PointNo, float Dist, int RoomNo, int PointType) {
	VCI_CAMERA_POINT *pEveCam;
	float TmpVec[4];
	float StartPos[4];
	float EndPos[4];
	float DirVector0[4];
	float DirVector1[4];
	float PointDist;
	float Point2PointDist;
	float Progress;
	
  VCI_CAMERA_POINT *pVVar1;
  VCI_CAMERA_POINT *pEveCam;
  float fVar2;
  float ParamU;
  float TmpVec [4];
  float StartPos [4];
  float EndPos [4];
  float DirVector0 [4];
  float DirVector1 [4];
  float PointDist;
  
  if (pHead == (VCI_CAMERA_HEADER *)0x0) {
    printf("Error!! pHead is NULL : in EventCameraSetPosFromPointDist()\n");
  }
  else {
    pEveCam = (VCI_CAMERA_POINT *)(pHead + 1);
    if (PointType == 0) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
      pVVar1 = pEveCam + PointNo;
      StartPos[2] = pVVar1->LocalPosition[2];
      StartPos[3] = pVVar1->LocalPosition[3];
      StartPos[0] = (float)*(undefined8 *)pVVar1->LocalPosition;
      StartPos[1] = (float)((ulong)*(undefined8 *)pVVar1->LocalPosition >> 0x20);
      EndPos[2] = pVVar1[1].LocalPosition[2];
      EndPos[3] = pVVar1[1].LocalPosition[3];
      EndPos[0] = (float)*(undefined8 *)pVVar1[1].LocalPosition;
      EndPos[1] = (float)((ulong)*(undefined8 *)pVVar1[1].LocalPosition >> 0x20);
                    /* end of inlined section */
      EventCameraGetMoveDistToPoint__FPfT0P17VCI_CAMERA_HEADERi
                (&PointDist,(float *)0x0,pHead,PointNo);
    }
    else {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
      StartPos[2] = pEveCam[PointNo].LocalTarget[2];
      StartPos[3] = pEveCam[PointNo].LocalTarget[3];
      StartPos[0] = (float)*(undefined8 *)pEveCam[PointNo].LocalTarget;
      StartPos[1] = (float)((ulong)*(undefined8 *)pEveCam[PointNo].LocalTarget >> 0x20);
      EndPos[2] = pEveCam[PointNo + 1].LocalTarget[2];
      EndPos[3] = pEveCam[PointNo + 1].LocalTarget[3];
      EndPos[0] = (float)*(undefined8 *)pEveCam[PointNo + 1].LocalTarget;
      EndPos[1] = (float)((ulong)*(undefined8 *)pEveCam[PointNo + 1].LocalTarget >> 0x20);
                    /* end of inlined section */
      EventCameraGetMoveDistToPoint__FPfT0P17VCI_CAMERA_HEADERi
                ((float *)0x0,&PointDist,pHead,PointNo);
    }
    ParamU = 0.0;
    fVar2 = Get2PLength__FPCfT0(EndPos,StartPos);
    if (fVar2 != ParamU) {
      ParamU = (Dist - PointDist) / fVar2;
    }
    EventCameraGetHermiteDirVector__FPfP16VCI_CAMERA_POINTiii
              (DirVector0,pEveCam,PointNo,(uint)(ushort)pHead->DataNum,PointType);
    EventCameraGetHermiteDirVector__FPfP16VCI_CAMERA_POINTiii
              (DirVector1,pEveCam,PointNo + 1,(uint)(ushort)pHead->DataNum,PointType);
    CalcHermitePoint__FPfN40f(TmpVec,StartPos,EndPos,DirVector0,DirVector1,ParamU);
    if (PointType == 0) {
      MapCamGra3dcamSetPositionAddOffset__FPCfi(TmpVec,RoomNo);
    }
    else {
      MapCamGra3dcamSetTargetAddOffset__FPCfi(TmpVec,RoomNo);
    }
  }
  return;
}

static void EventCameraGetHermiteDirVector(float *DirVector, VCI_CAMERA_POINT *pEveCam, int PointNo, int DataNum, int PointType) {
	int StartNo;
	int EndNo;
	float ScaleVal;
	
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0x3f800000;
  if (PointNo == 0) {
    iVar1 = 0;
    uVar2 = 0x3f800000;
    PointNo = 1;
  }
  else if (PointNo == DataNum + -1) {
    iVar1 = DataNum + -2;
  }
  else {
    uVar2 = 0x3f000000;
    iVar1 = PointNo + -1;
    PointNo = PointNo + 1;
  }
  if (PointType == 0) {
    sceVu0SubVector(DirVector,pEveCam + PointNo,pEveCam + iVar1);
  }
  else {
    sceVu0SubVector(DirVector,pEveCam[PointNo].LocalTarget,pEveCam[iVar1].LocalTarget);
  }
  sceVu0ScaleVector(uVar2,DirVector,DirVector);
  return;
}

void CalcHermitePoint(float *HermiteVector, float *Point0, float *Point1, float *Direction0, float *Direction1, float ParamU) {
	float Hermite0[4];
	float Hermite1[4];
	float Hermite2[4];
	float Hermite3[4];
	float ParamU2;
	float ParamU3;
	float Basis1;
	float Basis2;
	float Basis3;
	
  float fVar1;
  float fVar2;
  float fVar3;
  float Hermite0 [4];
  float Hermite1 [4];
  float Hermite2 [4];
  float Hermite3 [4];
  
  fVar1 = ParamU * ParamU;
  fVar3 = fVar1 * ParamU;
  fVar2 = (fVar3 - (fVar1 + fVar1)) + ParamU;
  sceVu0ScaleVector(((fVar3 + fVar3) - fVar1 * 3.0) + 1.0,Hermite0,Point0);
  sceVu0ScaleVector(fVar3 * -2.0 + fVar1 * 3.0,Hermite1,Point1);
  sceVu0ScaleVector(fVar2,Hermite2,Direction0);
  sceVu0ScaleVector(fVar3 - fVar1,Hermite3,Direction1);
  sceVu0AddVector(HermiteVector,Hermite0,Hermite1);
  sceVu0AddVector(HermiteVector,HermiteVector,Hermite2);
  sceVu0AddVector(HermiteVector,HermiteVector,Hermite3);
  return;
}

void EventCameraTest() {
	float CamPos[4];
	float CamTargetOffset[4];
	
  float CamPos [4];
  float CamTargetOffset [4];
  
  if ((pad[0].one & 0x20U) != 0) {
    CamPos._8_8_ = DAT_003ac9f8;
    CamPos._0_8_ = DAT_003ac9f0;
    memset(CamTargetOffset,0,0x10);
    CamTargetOffset[1] = -500.0;
    EventCameraReq__Fv();
    EventCameraSetPosition__FPCf(CamPos);
    EventCameraSetMargin__Ff(500.0);
    EventCameraSetTargetOffset__FPf(CamTargetOffset);
    EventCameraSetTargetObjId__Fii(0,0);
    EventCameraSetRoll__Ff(DAT_003ee280);
  }
  if ((pad[0].one & 0x40U) != 0) {
    EventCameraCut__Fv();
  }
  return;
}

float*[4] float [3] * _fixed_array_verifyrange<float [3]>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_849);
  return (type_info *)v;
}

type_info& float [3] type_info function() {
  g3ddbgAssert__FbPCce(false,str_849);
  return (type_info *)v;
}
