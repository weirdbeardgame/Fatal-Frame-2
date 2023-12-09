// STATUS: NOT STARTED

#include "subtitle.h"

typedef enum {
	SUBTITLE_STATUS_IDLE = 0,
	SUBTITLE_STATUS_PRELOAD = 1,
	SUBTITLE_STATUS_EXEC = 2
} SUBTITLE_STATUS;

typedef struct {
	short int MsgId;
	short int Frame;
} SUBTITLE_MSG_DATA;

typedef struct {
	short int StreamFile;
	short int CharId;
	SUBTITLE_MSG_DATA MsgData[0];
} SUBTITLE_DATA;

typedef struct {
	SUBTITLE_DATA *pSubTitleData;
	int StreamId;
	int Status;
	int Counter;
	int MsgDataNo;
	int ObjType;
	int ObjId;
} SUBTITLE_CTRL;

SUBTITLE_CTRL SubTitleCtrl = {
	/* .pSubTitleData = */ NULL,
	/* .StreamId = */ 0,
	/* .Status = */ 0,
	/* .Counter = */ 0,
	/* .MsgDataNo = */ 0,
	/* .ObjType = */ 0,
	/* .ObjId = */ 0
};

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3c7dc0;
	
  g3ddbgAssert__FbPCce(false,str_574);
  return;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_void__003f45a0,_max,v);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_char__003f45a8,_max,v);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi("unsigned int*",_max,v);
  }
  return (uint **)0x0;
}

static void SubTitleCtrlStructInit(SUBTITLE_CTRL *pCtrl) {
  pCtrl->MsgDataNo = 0;
  pCtrl->StreamId = -1;
  pCtrl->pSubTitleData = (SUBTITLE_DATA *)0x0;
  pCtrl->Status = 0;
  pCtrl->Counter = 0;
  return;
}

void SubTitleInit() {
  SubTitleCtrlStructInit__FP13SUBTITLE_CTRL(&SubTitleCtrl);
  return;
}

static SUBTITLE_DATA* SubTitleDataPtrGet(int SubTitleNo) {
	SUBTITLE_DATA *pRet;
	u_int *pDataTop;
	u_int *pDataTbl;
	
  int *piVar1;
  SUBTITLE_DATA *pSVar2;
  
  pSVar2 = (SUBTITLE_DATA *)0x0;
  if ((uint)SubTitleNo < 0xfa) {
    piVar1 = GetSubTitleAddr__Fv();
    pSVar2 = (SUBTITLE_DATA *)((int)piVar1 + piVar1[SubTitleNo]);
  }
  return pSVar2;
}

static void SubTitleMimReq(int CharId) {
	ANI_CTRL *pAniCtrl;
	
  ANI_CTRL *ani_ctrl;
  
  if (CharId != 1) {
    if ((CharId == 6) && (ani_ctrl = motSearchANI_CTRL__Fi(6), ani_ctrl != (ANI_CTRL *)0x0)) {
      mimRequestNumContinue__FP8ANI_CTRLiUc(ani_ctrl,0,'\0');
    }
    return;
  }
  ReqSisterMimContinue__Fii(6,0);
  return;
}

static void SubTitleMimStop(int CharId) {
	ANI_CTRL *pAniCtrl;
	
  ANI_CTRL *ani_ctrl;
  
  if (CharId != 1) {
    if ((CharId == 6) && (ani_ctrl = motSearchANI_CTRL__Fi(6), ani_ctrl != (ANI_CTRL *)0x0)) {
      mimEndStopNum__FP8ANI_CTRLi(ani_ctrl,0);
    }
    return;
  }
  StopSisterMim__Fi(6);
  return;
}

static void SubTitleUpdateStreamPosition(int StreamId, int ObjType, int ObjId) {
	float TmpPos[4];
	
  int iVar1;
  float TmpPos [4];
  
  if ((((StreamId != -1) && (ObjType != -1)) && (ObjId != -1)) &&
     (iVar1 = GetObjectPos__FPfUci(TmpPos,(uchar)ObjType,ObjId), iVar1 != 0)) {
    StreamAutoSetPosition(StreamId,TmpPos);
  }
  return;
}

void SubTitleMain(int DrawFlg) {
	SUBTITLE_CTRL *pCtrl;
	SUBTITLE_DATA *pSubTitle;
	SUBTITLE_MSG_DATA *pMsgData;
	
  ushort uVar1;
  SUBTITLE_DATA *pSVar2;
  int iVar3;
  int iVar4;
  SUBTITLE_DATA *pSVar5;
  
  iVar3 = SubTitleCtrl.MsgDataNo;
  pSVar2 = SubTitleCtrl.pSubTitleData;
  if (SubTitleCtrl.Status == 1) {
    iVar3 = StreamAutoIsPreload(SubTitleCtrl.StreamId);
    if (iVar3 != 0) {
      StreamAutoPreloadPlay(SubTitleCtrl.StreamId);
      SubTitleCtrl.Status = 2;
    }
  }
  else if (SubTitleCtrl.Status == 2) {
    pSVar5 = SubTitleCtrl.pSubTitleData + SubTitleCtrl.MsgDataNo + 1;
    iVar4 = StreamAutoIsPlaying(SubTitleCtrl.StreamId);
    if (iVar4 == 0) {
      SubTitleMimStop__Fi((int)(short)pSVar2->CharId);
      SubTitleCtrlStructInit__FP13SUBTITLE_CTRL(&SubTitleCtrl);
    }
    else {
      SubTitleUpdateStreamPosition__Fiii
                (SubTitleCtrl.StreamId,SubTitleCtrl.ObjType,SubTitleCtrl.ObjId);
      SubTitleMimReq__Fi((int)(short)pSVar2->CharId);
      if (pSVar5->StreamFile != 0xffff) {
        iVar4 = SubTitleCheckDispAccept__Fv();
        if ((iVar4 != 0) && (DrawFlg != 0)) {
          uVar1 = pSVar5->StreamFile;
          MovieTitleDispMain__Fiiiic(6,(int)(short)uVar1,0x17c,1,uVar1 != 0xb4);
        }
        iVar4 = GetPALMode__Fv();
        if (iVar4 == 0) {
          if ((long)SubTitleCtrl.Counter < (long)(short)pSVar2[iVar3 + 1].CharId) {
            SubTitleCtrl.Counter = SubTitleCtrl.Counter + 1;
            return;
          }
        }
        else if (SubTitleCtrl.Counter < ((short)pSVar2[iVar3 + 1].CharId * 5) / 6) {
          SubTitleCtrl.Counter = SubTitleCtrl.Counter + 1;
          return;
        }
        SubTitleCtrl.Counter = 0;
        SubTitleCtrl.MsgDataNo = SubTitleCtrl.MsgDataNo + 1;
      }
    }
  }
  return;
}

static void SubTitleReqSub(int SubTitleNo, int StreamId, int ObjType, int ObjId, sceVu0FVECTOR *pPosition) {
	SUBTITLE_CTRL *pCtrl;
	SUBTITLE_DATA *pSubTitle;
	
  SUBTITLE_DATA *pSVar1;
  _SND_3D_SET local_50;
  
  pSVar1 = SubTitleDataPtrGet__Fi(SubTitleNo);
  if (pSVar1 != (SUBTITLE_DATA *)0x0) {
    if (SubTitleCtrl.StreamId == -1) {
      SubTitleCtrlStructInit__FP13SUBTITLE_CTRL(&SubTitleCtrl);
    }
    else {
      SubTitleStop__Fv();
    }
    SubTitleCtrl.pSubTitleData = pSVar1;
    if (StreamId < 0) {
      if (pPosition == (float (*) [4])0x0) {
        SubTitleCtrl.StreamId =
             StreamAutoPreload((int)(short)pSVar1->StreamFile,(short)pSVar1->StreamFile + -1,0x11,0,
                               0,0x3200,0,(_SND_3D_SET *)0x0);
        SubTitleCtrl.ObjId = -1;
        SubTitleCtrl.ObjType = -1;
      }
      else {
        local_50.vel = (float (*) [4])0x0;
        local_50.dir = (float (*) [4])0x0;
        local_50.pos = pPosition;
        SubTitleCtrl.StreamId =
             StreamAutoPreload((int)(short)pSVar1->StreamFile,(short)pSVar1->StreamFile + -1,0x11,0,
                               0,0x3200,0,&local_50);
        SubTitleCtrl.ObjType = ObjType;
        SubTitleCtrl.ObjId = ObjId;
      }
    }
    else {
      SubTitleCtrl.ObjId = -1;
      SubTitleCtrl.ObjType = -1;
      SubTitleCtrl.StreamId = StreamId;
    }
    SubTitleCtrl.MsgDataNo = 0;
    SubTitleCtrl.Status = 1;
    SubTitleCtrl.Counter = 0;
  }
  return;
}

void SubTitleReq(int SubTitleNo) {
  SubTitleReqSub__FiiiiPA3_f(SubTitleNo,-1,-1,-1,(float (*) [4])0x0);
  return;
}

void SubTitleReq3D(int SubTitleNo, float *Position) {
	float TmpPos[4];
	
  float TmpPos [4];
  
                    /* inlined from ../../graphics/graph3d/g3dxVu0.h */
  TmpPos[2] = Position[2];
  TmpPos[3] = Position[3];
  TmpPos[0] = (float)*(undefined8 *)Position;
  TmpPos[1] = (float)((ulong)*(undefined8 *)Position >> 0x20);
                    /* end of inlined section */
  SubTitleReqSub__FiiiiPA3_f(SubTitleNo,-1,-1,-1,(float (*) [4])TmpPos);
  return;
}

void SubTitleReq3DObj(int SubTitleNo, int ObjType, int ObjId) {
	float TmpPos[4];
	
  int iVar1;
  float TmpPos [4];
  
  iVar1 = GetObjectPos__FPfUci(TmpPos,(uchar)ObjType,ObjId);
  if (iVar1 != 0) {
    SubTitleReqSub__FiiiiPA3_f(SubTitleNo,-1,ObjType,ObjId,(float (*) [4])TmpPos);
  }
  return;
}

void SubTitleReqAutoEnemy(int SubTitleNo, int StreamId) {
  SubTitleReqSub__FiiiiPA3_f(SubTitleNo,StreamId,-1,-1,(float (*) [4])0x0);
  return;
}

void SubTitleStop() {
	SUBTITLE_CTRL *pCtrl;
	
  StreamAutoFadeOut(SubTitleCtrl.StreamId,0);
  SubTitleCtrlStructInit__FP13SUBTITLE_CTRL(&SubTitleCtrl);
  return;
}

int SubTitleIsEnd() {
	SUBTITLE_CTRL *pCtrl;
	
  return (int)(SubTitleCtrl.Status == 0);
}

int SubTitleStreamFileNoGet(int SubTitleNo) {
  SUBTITLE_DATA *pSVar1;
  
  pSVar1 = SubTitleDataPtrGet__Fi(SubTitleNo);
  return (int)(short)pSVar1->StreamFile;
}

static int SubTitleCheckDispAccept() {
	int Accept;
	
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (plyr_wrk.cmn_wrk.mode != '\x06') {
    iVar1 = MesStatusCheck__Fv();
    uVar2 = 0;
    if (iVar1 == 0) {
      iVar1 = EvChapterIsDisp__Fv();
      uVar2 = (uint)(iVar1 == 0);
    }
  }
  return uVar2;
}
