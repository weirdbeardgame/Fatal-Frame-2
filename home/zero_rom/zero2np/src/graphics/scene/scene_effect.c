// STATUS: NOT STARTED

#include "scene_effect.h"

typedef struct {
	int TableNum;
	u_int TimingTableOffset;
	u_int VibrationDataOffset;
} SCENE_EFFECT_HEADER;

typedef struct {
	int Frame;
	int Offset;
} SCENE_EFFECT_TABLE;

struct _SCENE_EFFECT_CTRL_DATA {
	void *pRet;
	int EffectId;
	int StartFrame;
	int EndFrame;
	_SCENE_EFFECT_CTRL_DATA *pNext;
	char ChangeData;
};

typedef _SCENE_EFFECT_CTRL_DATA SCENE_EFFECT_CTRL_DATA;

typedef struct {
	SCENE_EFFECT_CTRL_DATA *pDataTop;
	SCENE_EFFECT_CTRL_DATA *pDataLast;
	int LenzFlareFlg;
	float SpotLightPos[4];
	float SpotLightRot[4];
	int ExecutedFrame;
} SCENE_EFFECT_CTRL;

struct _SCENE_FADE_MODEL_DATA {
	int ModelType;
	int ModelId;
	int StartFrame;
	int EndFrame;
	int StartAlpha;
	int EndAlpha;
	_SCENE_FADE_MODEL_DATA *pNext;
};

typedef _SCENE_FADE_MODEL_DATA SCENE_FADE_MODEL_DATA;

typedef struct {
	SCENE_FADE_MODEL_DATA *pDataTop;
	SCENE_FADE_MODEL_DATA *pDataLast;
} SCENE_FADE_MODEL_CTRL;

typedef struct {
	short int FuncNo;
	short int ModelType;
	short int ModelId;
	short int StartAlpha;
	short int EndAlpha;
	short int Frame;
} SCENE_EFFECT_MODELFADE;

typedef struct {
	short int FuncNo;
	short int ModelId;
	short int Type;
	short int StartScaleX;
	short int EndScaleX;
	short int StartScaleY;
	short int EndScaleY;
	short int StartAlpha;
	short int EndAlpha;
	short int StartWaveRate;
	short int EndWaveRate;
	short int StartTexRate;
	short int EndTexRate;
	short int StartWaveSpeed;
	short int EndWaveSpeed;
	short int Distance;
	short int Time;
	short int Pad;
} SCENE_EFFECT_PDEFORM;

struct _SCENE_PDEFORM_DATA {
	float Position[4];
	SCENE_EFFECT_PDEFORM Param;
	float WaveSpeed;
	float WaveRate;
	float TexRate;
	int StartFrame;
	int EndFrame;
};

typedef _SCENE_PDEFORM_DATA SCENE_PDEFORM_DATA;

typedef struct {
	SCENE_PDEFORM_DATA *pDataTop;
	SCENE_PDEFORM_DATA *pDataLast;
} SCENE_PDEFORM_CTRL;

struct _SCENE_ENE_AURA_DATA {
	float Position[4];
	int ModelId;
	u_int Rgba;
	float Size;
	float AlphaRate;
	float Adjust;
	void *pRet;
	_SCENE_ENE_AURA_DATA *pNext;
};

typedef _SCENE_ENE_AURA_DATA SCENE_ENE_AURA_DATA;

typedef struct {
	SCENE_ENE_AURA_DATA *pDataTop;
	SCENE_ENE_AURA_DATA *pDataLast;
} SCENE_ENE_AURA_CTRL;

typedef struct {
	short int FuncNo;
	short int ModelId;
	short int Size;
	short int AlphaRate;
	short int R;
	short int G;
	short int B;
	short int A;
	short int Adjust;
	short int Pad;
} SCENE_EFFECT_ENE_AURA;

struct _SCENE_HAZE_DATA {
	float Position[4];
	float HipPosition[4];
	float OldHipPosition[4];
	float Rot[4];
	int ModelId;
	void *pEffRet;
};

typedef _SCENE_HAZE_DATA SCENE_HAZE_DATA;

typedef struct {
	short int FuncNo;
	short int ModelId;
} SCENE_EFFECT_HAZE;

typedef struct {
	short int FuncNo;
	short int ModelId;
} SCENE_EFFECT_HAZE_OFF;

struct _SCENE_VIBRATION_DATA {
	short int StartFrame;
	short int EndFrame;
	short int BlankTime;
	short int VibrateTime;
	short int Power;
	short int ActuaterNo;
	int BlankCount;
	int VibrateCount;
	_SCENE_VIBRATION_DATA *pNext;
};

typedef _SCENE_VIBRATION_DATA SCENE_VIBRATION_DATA;

typedef struct {
	SCENE_VIBRATION_DATA *pDataTop;
	SCENE_VIBRATION_DATA *pDataLast;
} SCENE_VIBRATION_CTRL;

typedef struct {
	short int FuncNo;
	short int BlankTime;
	short int VibrateTime;
	short int Power;
	short int TotalTime;
	short int ActuaterNo;
} SCENE_EFFECT_VIBRATION;

typedef struct {
	short int FuncNo;
	short int StartTime;
	short int EndTime;
	short int BlankTime;
	short int VibrateTime;
	short int Power;
	short int ActuaterNo;
} SCENE_EFFECT_VIBRATION2;

typedef struct {
	float Position[4];
	void *pEffectRet;
	ANI_CTRL *pMdlAnm;
} SCENE_EFFECT_TORCH_DATA;

typedef struct {
	short int FuncNo;
	short int ModelId;
	short int TorchType;
	short int Pad;
} SCENE_EFFECT_TORCH;

typedef struct {
	short int FuncNo;
	short int Type;
	short int StartSpeed;
	short int EndSpeed;
	short int StartAlpha;
	short int EndAlpha;
	short int AlphaMax;
	short int ColorMax;
	short int Time;
	short int Pad;
} SCENE_EFFECT_DITHER;

typedef struct {
	short int FuncNo;
	short int Type;
	short int StartAlpha;
	short int EndAlpha;
	short int StartScale;
	short int EndScale;
	short int StartRot;
	short int EndRot;
	short int Time;
	short int Pad;
} SCENE_EFFECT_BLUR;

typedef struct {
	short int FuncNo;
	short int Type;
	short int StartRate;
	short int EndRate;
	short int Time;
	short int Pad;
} SCENE_EFFECT_DEFORM;

typedef struct {
	short int FuncNo;
	short int StartRate;
	short int EndRate;
	short int Time;
} SCENE_EFFECT_FOCUS;

typedef struct {
	short int FuncNo;
	short int Type;
	short int StartColor;
	short int EndColor;
	short int StartAlpha;
	short int EndAlpha;
	short int Time;
	short int Pad;
} SCENE_EFFECT_CONTRAST;

typedef struct {
	short int FuncNo;
	short int StartColor;
	short int EndColor;
	short int StartAlpha;
	short int EndAlpha;
	short int StartAlpha2;
	short int EndAlpha2;
	short int Time;
} SCENE_EFFECT_NEGA;

typedef struct {
	short int FuncNo;
	short int StartAlpha;
	short int EndAlpha;
	short int Time;
} SCENE_EFFECT_FADEFRAME;

typedef struct {
	short int FuncNo;
	short int EffectId;
} SCENE_EFFECT_OFF;

typedef struct {
	short int FuncNo;
	short int Type;
} SCENE_EFFECT_FOCUSDEPTH;

typedef struct {
	short int FuncNo;
	short int Frame;
} SCENE_EFFECT_OVERLAP;

typedef struct {
	short int FuncNo;
	short int Pad;
} SCENE_EFFECT_LENZ_FLARE;

typedef struct {
	short int FuncNo;
	short int ModelType;
	short int ModelId;
	short int LightNo;
	short int R;
	short int G;
	short int B;
	short int Power;
} SCENE_EFFECT_POINTLIGHT;

typedef struct {
	short int FuncNo;
	short int ModelType;
	short int ModelId;
	short int LightNo;
	short int R;
	short int G;
	short int B;
	short int Power;
	short int Cone;
	short int Pad;
} SCENE_EFFECT_SPOTLIGHT;

typedef struct {
	short int FuncNo;
	short int R;
	short int G;
	short int B;
	short int Power;
	short int Cone;
} SCENE_EFFECT_HANDSPOTLIGHT;

typedef struct {
	short int FuncNo;
	short int ModelId;
} SCENE_EFFECT_PDEFORM_OFF;

typedef struct {
	short int FuncNo;
	short int OnFlg;
} SCENE_EFFECT_MONOCHRO_ONOFF;

typedef struct {
	short int FuncNo;
	short int InFlg;
	short int ColorType;
	short int Time;
} SCENE_EFFECT_FADE_IN_OUT;

typedef struct {
	short int FuncNo;
	short int ColorR;
	short int ColorG;
	short int ColorB;
	short int Alpha;
	short int Pad;
} SCENE_EFFECT_FADE_SCREEN;

typedef struct {
	short int FuncNo;
	short int Pad;
} SCENE_EFFECT_FADE_SCREEN_OFF;

unsigned char SCN_ANM_MDL type_info node[8];
static SCENE_EFFECT_CTRL SceneEffectCtrl;
static SCENE_FADE_MODEL_CTRL SceneFadeModelCtrl;
static SINGLE_LINK_LIST ScenePDeformCtrl;
static SCENE_ENE_AURA_CTRL SceneEneAuraCtrl;
static SCENE_VIBRATION_CTRL SceneVibrationCtrl;
static SINGLE_LINK_LIST SceneTorchCtrl;
static SINGLE_LINK_LIST SceneHazeCtrl;

static short int* (*SceneEffectFunc[27])(/* parameters unknown */) = {
	/* [0] = */ SceneEffectReqDataEnd,
	/* [1] = */ SceneEffectReqOff,
	/* [2] = */ SceneEffectReqFocusDepth,
	/* [3] = */ SceneEffectReqDither,
	/* [4] = */ SceneEffectReqBlur,
	/* [5] = */ SceneEffectReqDeform,
	/* [6] = */ SceneEffectReqFocus,
	/* [7] = */ SceneEffectReqContrast,
	/* [8] = */ SceneEffectReqNega,
	/* [9] = */ SceneEffectReqFadeFrame,
	/* [10] = */ SceneEffectReqOverlap,
	/* [11] = */ SceneEffectReqModelFade,
	/* [12] = */ SceneEffectReqPDeform,
	/* [13] = */ SceneEffectReqLenzFlare,
	/* [14] = */ SceneEffectReqEneAura,
	/* [15] = */ SceneEffectReqVibration,
	/* [16] = */ SceneEffectReqPointLight,
	/* [17] = */ SceneEffectReqSpotLight,
	/* [18] = */ SceneEffectReqHandSpotLight,
	/* [19] = */ SceneEffectReqTorch,
	/* [20] = */ SceneEffectReqPDeformOff,
	/* [21] = */ SceneEffectMonochroModeOnOff,
	/* [22] = */ SceneEffectReqHaze,
	/* [23] = */ SceneEffectHazeOff,
	/* [24] = */ SceneEffectFadeInOut,
	/* [25] = */ SceneEffectReqFadeScreen,
	/* [26] = */ SceneEffectReqFadeScreenOff
};

static float SaeHazeOffset[4] = {
	/* [0] = */ 0.f,
	/* [1] = */ 450.f,
	/* [2] = */ 0.f,
	/* [3] = */ 0.f
};

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3c5d90;
	
  g3ddbgAssert__FbPCce(false,str_574);
  return (type_info *)v;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf11SCN_ANM_MDL(0x3f3e80,_max);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf11SCN_ANM_MDL(0x3f3e88,_max);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf11SCN_ANM_MDL(0x3c5dd8,_max);
  }
  return (uint **)0x0;
}

void SceneEffectInit() {
  SceneEffectCtrlInit__Fv();
  SceneEffectFadeModelCtrlInit__Fv();
  SceneEffectPDeformCtrlInit__Fv();
  SceneEffectEneAuraCtrlInit__Fv();
  SceneEffectVibrationCtrlInit__Fv();
  SceneTorchCtrlInit__Fv();
  SceneEffectHazeCtrlInit__Fv();
  return;
}

void SceneEffectMain(SCENE_CTRL *pSceneCtrl, u_int *pDataAddr) {
	int NowFrame;
	int ExecutedFrame;
	int LoopNum;
	int i;
	
  uint NowFrame;
  int Frame;
  int iVar1;
  int iVar2;
  
  NowFrame = SceneEffectCtrl.ExecutedFrame;
  if (pDataAddr != (uint *)0x0) {
    NowFrame = (pSceneCtrl->fod_ctrl).now_frame;
    iVar2 = NowFrame - SceneEffectCtrl.ExecutedFrame;
    iVar1 = SceneEffectCtrl.ExecutedFrame + iVar2;
    for (Frame = SceneEffectCtrl.ExecutedFrame + 1; Frame <= iVar1; Frame = Frame + 1) {
      SceneEffectReq__FPsi((ushort *)pDataAddr,Frame);
      SceneEffectRegistEffectReq__Fi(Frame);
      SceneEffectVibrationReq__FPsi((ushort *)pDataAddr,Frame);
      SceneEffectFadeModelCtrlExec__FP10SCENE_CTRL(pSceneCtrl);
      SceneEffectEneAuraCtrlExec__Fv();
      SceneEffectVibrationCtrlExec__Fi(Frame);
      SceneTorchCtrlExec__Fv();
      SceneEffectHazeCtrlExec__Fv();
    }
    if (iVar2 != 0) {
      SceneEffectPDeformCtrlExec__Fi(NowFrame);
    }
    if (SceneEffectCtrl.LenzFlareFlg != 0) {
      SceneEffectLenzFlareExec__FP10SCENE_CTRL(pSceneCtrl);
    }
  }
  SceneEffectCtrl.ExecutedFrame = NowFrame;
  return;
}

void SceneEffectEnd() {
  SceneEffectCtrlAllDelete__Fv();
  SceneEffectFadeModelAllDelete__Fv();
  SceneEffectPDeformCtrlAllDelete__Fv();
  SceneEffectEneAuraCtrlAllDelete__Fv();
  SceneEffectVibrationCtrlAllDelete__Fv();
  SceneTorchCtrlAllDelete__Fv();
  SceneEffectHazeCtrlAllDelete__Fv();
  SetParam__FiiUcUcUci(0,0,'\0','\0','\0',0);
  return;
}

static void SceneEffectCtrlInit() {
  SceneEffectCtrl.SpotLightPos[3] = 1.0;
  SceneEffectCtrl.ExecutedFrame = 0;
  SceneEffectCtrl.pDataTop = (_SCENE_EFFECT_CTRL_DATA *)0x0;
  SceneEffectCtrl.pDataLast = (_SCENE_EFFECT_CTRL_DATA *)0x0;
  SceneEffectCtrl.LenzFlareFlg = 0;
  SceneEffectCtrl.SpotLightPos[0] = 0.0;
  SceneEffectCtrl.SpotLightPos[1] = 0.0;
  SceneEffectCtrl.SpotLightPos[2] = 0.0;
  SceneEffectCtrl.SpotLightRot[0] = 0.0;
  SceneEffectCtrl.SpotLightRot[1] = 0.0;
  SceneEffectCtrl.SpotLightRot[2] = 0.0;
  SceneEffectCtrl.SpotLightRot[3] = 0.0;
  return;
}

static void SceneEffectCtrlAllDelete() {
	SCENE_EFFECT_CTRL_DATA *pData;
	SCENE_EFFECT_CTRL_DATA *pDataNext;
	
  _SCENE_EFFECT_CTRL_DATA *p_Var1;
  void *p;
  _HEAP_WRK *wrk;
  _SCENE_EFFECT_CTRL_DATA *ap;
  
  if (SceneEffectCtrl.pDataTop != (_SCENE_EFFECT_CTRL_DATA *)0x0) {
    p = (SceneEffectCtrl.pDataTop)->pRet;
    ap = SceneEffectCtrl.pDataTop;
    while( true ) {
      if (p != (void *)0x0) {
        ResetEffects__FPv(p);
      }
      p_Var1 = ap->pNext;
      wrk = GetSystemHeapWrkP__Fv();
      heapCtrlFree(wrk,ap);
      if (p_Var1 == (_SCENE_EFFECT_CTRL_DATA *)0x0) break;
      p = p_Var1->pRet;
      ap = p_Var1;
    }
  }
  SceneEffectCtrlInit__Fv();
  return;
}

static SCENE_EFFECT_CTRL_DATA* SceneEffectCtrlRegist(void *pRet, int EffectId, int ChangeDataSize) {
	SCENE_EFFECT_CTRL *pCtrl;
	SCENE_EFFECT_CTRL_DATA *pMalloc;
	int MallocSize;
	
  _SCENE_EFFECT_CTRL_DATA *p_Var1;
  _HEAP_WRK *wrk;
  _SCENE_EFFECT_CTRL_DATA *p_Var2;
  
  wrk = GetSystemHeapWrkP__Fv();
  p_Var2 = (_SCENE_EFFECT_CTRL_DATA *)SAFE_MALLOC(wrk,(void *)0x0,ChangeDataSize + 0x20);
  if (p_Var2 != (_SCENE_EFFECT_CTRL_DATA *)0x0) {
    p_Var1 = p_Var2;
    if (SceneEffectCtrl.pDataLast != (_SCENE_EFFECT_CTRL_DATA *)0x0) {
      (SceneEffectCtrl.pDataLast)->pNext = p_Var2;
      p_Var1 = SceneEffectCtrl.pDataTop;
    }
    SceneEffectCtrl.pDataTop = p_Var1;
    SceneEffectCtrl.pDataLast = p_Var2;
    p_Var2->pRet = pRet;
    p_Var2->EffectId = EffectId;
    p_Var2->pNext = (_SCENE_EFFECT_CTRL_DATA *)0x0;
    p_Var2->StartFrame = 0;
    p_Var2->EndFrame = 0;
  }
  return p_Var2;
}

static int SceneEffectCtrlDelete(int EffectId) {
	SCENE_EFFECT_CTRL *pCtrl;
	SCENE_EFFECT_CTRL_DATA *pData;
	SCENE_EFFECT_CTRL_DATA *pPreData;
	int RetVal;
	
  _SCENE_EFFECT_CTRL_DATA *p_Var1;
  _HEAP_WRK *wrk;
  _SCENE_EFFECT_CTRL_DATA *p_Var2;
  int iVar3;
  _SCENE_EFFECT_CTRL_DATA *p_Var4;
  
  iVar3 = -1;
  p_Var4 = SceneEffectCtrl.pDataTop;
  p_Var2 = SceneEffectCtrl.pDataTop;
  do {
    if (p_Var4 == (_SCENE_EFFECT_CTRL_DATA *)0x0) {
LAB_0024d454:
      SceneEffectCtrl.pDataLast = (_SCENE_EFFECT_CTRL_DATA *)0x0;
      for (p_Var4 = SceneEffectCtrl.pDataTop; p_Var4 != (_SCENE_EFFECT_CTRL_DATA *)0x0;
          p_Var4 = p_Var4->pNext) {
        SceneEffectCtrl.pDataLast = p_Var4;
      }
      return iVar3;
    }
    if (p_Var4->EffectId == EffectId) {
      p_Var1 = p_Var4->pNext;
      if (p_Var2 != p_Var4) {
        p_Var2->pNext = p_Var4->pNext;
        p_Var1 = SceneEffectCtrl.pDataTop;
      }
      SceneEffectCtrl.pDataTop = p_Var1;
      ResetEffects__FPv(p_Var4->pRet);
      wrk = GetSystemHeapWrkP__Fv();
      heapCtrlFree(wrk,p_Var4);
      iVar3 = 1;
      goto LAB_0024d454;
    }
    p_Var4 = p_Var4->pNext;
    p_Var2 = p_Var4;
  } while( true );
}

static void SceneEffectReq(short int *pDataTop, int Frame) {
	SCENE_EFFECT_TABLE *pTable;
	int i;
	
  int *piVar1;
  int iVar2;
  
  if (pDataTop != (ushort *)0x0) {
    iVar2 = 0;
    do {
      if (*(int *)pDataTop <= iVar2) {
        return;
      }
      piVar1 = (int *)((int)pDataTop + iVar2 * 8 + *(int *)(pDataTop + 2));
      iVar2 = iVar2 + 1;
    } while (*piVar1 != Frame);
    SceneEffectReqOneData__FPsi((ushort *)((int)pDataTop + piVar1[1]),Frame);
  }
  return;
}

static void SceneEffectRegistEffectReq(int NowFrame) {
	SCENE_EFFECT_CTRL_DATA *pData;
	
  int iVar1;
  void *pvVar2;
  _SCENE_EFFECT_CTRL_DATA *pData;
  
  if (SceneEffectCtrl.pDataTop != (_SCENE_EFFECT_CTRL_DATA *)0x0) {
    pvVar2 = (SceneEffectCtrl.pDataTop)->pRet;
    pData = SceneEffectCtrl.pDataTop;
    while( true ) {
      if (pvVar2 == (void *)0x0) {
        iVar1 = pData->EffectId;
        if (iVar1 == 2) {
          SceneEffectCallDither__FP23_SCENE_EFFECT_CTRL_DATAi(pData,NowFrame);
          pData = pData->pNext;
        }
        else if (iVar1 - 3U < 3) {
          SceneEffectCallBlur__FP23_SCENE_EFFECT_CTRL_DATAi(pData,NowFrame);
          pData = pData->pNext;
        }
        else if (iVar1 == 6) {
          SceneEffectCallDeform__FP23_SCENE_EFFECT_CTRL_DATAi(pData,NowFrame);
          pData = pData->pNext;
        }
        else if (iVar1 == 7) {
          SceneEffectCallFocus__FP23_SCENE_EFFECT_CTRL_DATAi(pData,NowFrame);
          pData = pData->pNext;
        }
        else if (iVar1 - 0xdU < 3) {
          SceneEffectCallContrast__FP23_SCENE_EFFECT_CTRL_DATAi(pData,NowFrame);
          pData = pData->pNext;
        }
        else if (iVar1 == 0xc) {
          SceneEffectCallNega__FP23_SCENE_EFFECT_CTRL_DATAi(pData,NowFrame);
          pData = pData->pNext;
        }
        else if (iVar1 == 9) {
          SceneEffectCallFadeFrame__FP23_SCENE_EFFECT_CTRL_DATAi(pData,NowFrame);
          pData = pData->pNext;
        }
        else {
          pData = pData->pNext;
        }
      }
      else {
        pData = pData->pNext;
      }
      if (pData == (_SCENE_EFFECT_CTRL_DATA *)0x0) break;
      pvVar2 = pData->pRet;
    }
  }
  return;
}

static void SceneEffectVibrationReq(short int *pDataTop, int Frame) {
	SCENE_EFFECT_VIBRATION2 *pVibData;
	
  ushort uVar1;
  SCENE_EFFECT_VIBRATION2 *pVibration;
  
  if ((pDataTop != (ushort *)0x0) &&
     (pVibration = (SCENE_EFFECT_VIBRATION2 *)((int)pDataTop + *(int *)(pDataTop + 4)),
     pVibration->FuncNo == 0xf)) {
    uVar1 = pVibration->StartTime;
    while( true ) {
      if ((long)(short)uVar1 == (long)Frame) {
        SceneEffectVibrationRegist__FP23SCENE_EFFECT_VIBRATION2i(pVibration,Frame);
      }
      if (pVibration[1].FuncNo != 0xf) break;
      uVar1 = pVibration[1].StartTime;
      pVibration = pVibration + 1;
    }
  }
  return;
}

static void SceneEffectReqOneData(short int *pData, int NowFrame) {
  if (pData != (ushort *)0x0) {
    do {
      printf("SceneEffectReqOneData() --> func no : %d\n");
      pData = (ushort *)(*(code *)SceneEffectFunc[(short)*pData])(pData,NowFrame);
    } while (pData != (ushort *)0x0);
  }
  return;
}

static void* SceneEffectChangeDataPtr(SCENE_EFFECT_CTRL_DATA *pCtrl) {
  return &pCtrl->ChangeData;
}

static short int* SceneEffectReqDataEnd(short int *pData, int Frame) {
  return (ushort *)0x0;
}

static short int* SceneEffectReqOff(short int *pData, int Frame) {
	SCENE_EFFECT_OFF *pOff;
	
  switch(pData[1]) {
  case 2:
    SceneEffectCtrlDelete__Fi(1);
    break;
  case 3:
    SceneEffectCtrlDelete__Fi(2);
    break;
  case 4:
    SceneEffectCtrlDelete__Fi(3);
    SceneEffectCtrlDelete__Fi(4);
    SceneEffectCtrlDelete__Fi(5);
    break;
  case 5:
    SceneEffectCtrlDelete__Fi(6);
    break;
  case 6:
    SceneEffectCtrlDelete__Fi(7);
    break;
  case 7:
    SceneEffectCtrlDelete__Fi(0xd);
    SceneEffectCtrlDelete__Fi(0xe);
    SceneEffectCtrlDelete__Fi(0xf);
    break;
  case 8:
    SceneEffectCtrlDelete__Fi(0xc);
    break;
  case 9:
    SceneEffectCtrlDelete__Fi(9);
    break;
  case 10:
    SceneEffectCtrlDelete__Fi(8);
    break;
  case 0xd:
    SceneEffectCtrl.LenzFlareFlg = 0;
  }
  return pData + 2;
}

static short int* SceneEffectReqFocusDepth(short int *pData, int Frame) {
	SCENE_EFFECT_FOCUSDEPTH *pDepth;
	
  if (pData[1] == 0) {
    SceneEffectCtrlDelete__Fi(1);
  }
  else if (pData[1] == 1) {
    SetEffects__Fiie(1,2);
  }
  return pData + 2;
}

static short int* SceneEffectReqDither(short int *pData, int Frame) {
	SCENE_EFFECT_DITHER *pDither;
	SCENE_EFFECT_CTRL_DATA *pCtrlData;
	
  uint uVar1;
  uint uVar2;
  ulong *puVar3;
  uint *puVar4;
  _SCENE_EFFECT_CTRL_DATA *pCtrl;
  void *pvVar5;
  ulong in_v1;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  
  SceneEffectCtrlDelete__Fi(2);
  uVar8 = 2;
  if (pData[1] != 0) {
    pCtrl = SceneEffectCtrlRegist__FPvii((void *)0x0,2,0x14);
    uVar7 = (ulong)(int)pCtrl;
    if (uVar7 != 0) {
      pvVar5 = SceneEffectChangeDataPtr__FPC23_SCENE_EFFECT_CTRL_DATA(pCtrl);
      uVar1 = (int)pData + 7U & 7;
      uVar2 = (uint)pData & 7;
      uVar6 = (*(long *)(((int)pData + 7U) - uVar1) << (7 - uVar1) * 8 |
              in_v1 & 0xffffffffffffffffU >> (uVar1 + 1) * 8) & -1L << (8 - uVar2) * 8 |
              *(ulong *)((int)pData - uVar2) >> uVar2 * 8;
      uVar1 = (int)pData + 0xfU & 7;
      uVar2 = (uint)(pData + 4) & 7;
      uVar7 = (*(long *)(((int)pData + 0xfU) - uVar1) << (7 - uVar1) * 8 |
              uVar7 & 0xffffffffffffffffU >> (uVar1 + 1) * 8) & -1L << (8 - uVar2) * 8 |
              *(ulong *)((int)(pData + 4) - uVar2) >> uVar2 * 8;
      uVar1 = (int)pData + 0x13U & 3;
      uVar2 = (uint)(pData + 8) & 3;
      uVar8 = (*(int *)(((int)pData + 0x13U) - uVar1) << (3 - uVar1) * 8 |
              uVar8 & 0xffffffffU >> (uVar1 + 1) * 8) & -1 << (4 - uVar2) * 8 |
              *(uint *)((int)(pData + 8) - uVar2) >> uVar2 * 8;
      uVar1 = (int)pvVar5 + 7U & 7;
      puVar3 = (ulong *)(((int)pvVar5 + 7U) - uVar1);
      *puVar3 = *puVar3 & -1L << (uVar1 + 1) * 8 | uVar6 >> (7 - uVar1) * 8;
      uVar1 = (uint)pvVar5 & 7;
      *(ulong *)((int)pvVar5 - uVar1) =
           uVar6 << uVar1 * 8 |
           *(ulong *)((int)pvVar5 - uVar1) & 0xffffffffffffffffU >> (8 - uVar1) * 8;
      uVar1 = (int)pvVar5 + 0xfU & 7;
      puVar3 = (ulong *)(((int)pvVar5 + 0xfU) - uVar1);
      *puVar3 = *puVar3 & -1L << (uVar1 + 1) * 8 | uVar7 >> (7 - uVar1) * 8;
      uVar1 = (int)pvVar5 + 8U & 7;
      puVar3 = (ulong *)(((int)pvVar5 + 8U) - uVar1);
      *puVar3 = uVar7 << uVar1 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar1) * 8;
      uVar1 = (int)pvVar5 + 0x13U & 3;
      puVar4 = (uint *)(((int)pvVar5 + 0x13U) - uVar1);
      *puVar4 = *puVar4 & -1 << (uVar1 + 1) * 8 | uVar8 >> (3 - uVar1) * 8;
      uVar1 = (int)pvVar5 + 0x10U & 3;
      puVar4 = (uint *)(((int)pvVar5 + 0x10U) - uVar1);
      *puVar4 = *puVar4 & 0xffffffffU >> (4 - uVar1) * 8 | uVar8 << uVar1 * 8;
      pCtrl->StartFrame = Frame;
      pCtrl->EndFrame = Frame + (short)pData[8];
    }
  }
  return pData + 10;
}

static void SceneEffectCallDither(SCENE_EFFECT_CTRL_DATA *pData, int NowFrame) {
	SCENE_EFFECT_DITHER *pDither;
	float Alpha;
	float Speed;
	float Progress;
	
  int iVar1;
  
  SceneEffectChangeDataPtr__FPC23_SCENE_EFFECT_CTRL_DATA(pData);
  iVar1 = SceneTestEffectFlgGet__F15SCN_DB_EFF_TYPE(SCN_DB_EFF_DITHER);
  if (iVar1 == 0) {
    SetEffects__Fiie(2,1);
  }
  return;
}

static short int* SceneEffectReqBlur(short int *pData, int Frame) {
	SCENE_EFFECT_BLUR *pBlur;
	SCENE_EFFECT_CTRL_DATA *pCtrlData;
	int BlurType;
	
  uint uVar1;
  uint uVar2;
  ulong *puVar3;
  uint *puVar4;
  _SCENE_EFFECT_CTRL_DATA *pCtrl;
  void *pvVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  
  SceneEffectCtrlDelete__Fi(3);
  SceneEffectCtrlDelete__Fi(4);
  SceneEffectCtrlDelete__Fi(5);
  uVar6 = (ulong)(short)pData[1];
  if (uVar6 != 0) {
    uVar7 = uVar6 ^ 2;
    uVar8 = 3;
    if (uVar6 != 1) {
      uVar8 = 4;
      if (uVar7 != 0) {
        uVar8 = 5;
      }
    }
    pCtrl = SceneEffectCtrlRegist__FPvii((void *)0x0,uVar8,0x14);
    uVar6 = (ulong)(int)pCtrl;
    if (uVar6 != 0) {
      pvVar5 = SceneEffectChangeDataPtr__FPC23_SCENE_EFFECT_CTRL_DATA(pCtrl);
      uVar1 = (int)pData + 7U & 7;
      uVar2 = (uint)pData & 7;
      uVar7 = (*(long *)(((int)pData + 7U) - uVar1) << (7 - uVar1) * 8 |
              uVar7 & 0xffffffffffffffffU >> (uVar1 + 1) * 8) & -1L << (8 - uVar2) * 8 |
              *(ulong *)((int)pData - uVar2) >> uVar2 * 8;
      uVar1 = (int)pData + 0xfU & 7;
      uVar2 = (uint)(pData + 4) & 7;
      uVar6 = (*(long *)(((int)pData + 0xfU) - uVar1) << (7 - uVar1) * 8 |
              uVar6 & 0xffffffffffffffffU >> (uVar1 + 1) * 8) & -1L << (8 - uVar2) * 8 |
              *(ulong *)((int)(pData + 4) - uVar2) >> uVar2 * 8;
      uVar1 = (int)pData + 0x13U & 3;
      uVar2 = (uint)(pData + 8) & 3;
      uVar8 = (*(int *)(((int)pData + 0x13U) - uVar1) << (3 - uVar1) * 8 |
              uVar8 & 0xffffffffU >> (uVar1 + 1) * 8) & -1 << (4 - uVar2) * 8 |
              *(uint *)((int)(pData + 8) - uVar2) >> uVar2 * 8;
      uVar1 = (int)pvVar5 + 7U & 7;
      puVar3 = (ulong *)(((int)pvVar5 + 7U) - uVar1);
      *puVar3 = *puVar3 & -1L << (uVar1 + 1) * 8 | uVar7 >> (7 - uVar1) * 8;
      uVar1 = (uint)pvVar5 & 7;
      *(ulong *)((int)pvVar5 - uVar1) =
           uVar7 << uVar1 * 8 |
           *(ulong *)((int)pvVar5 - uVar1) & 0xffffffffffffffffU >> (8 - uVar1) * 8;
      uVar1 = (int)pvVar5 + 0xfU & 7;
      puVar3 = (ulong *)(((int)pvVar5 + 0xfU) - uVar1);
      *puVar3 = *puVar3 & -1L << (uVar1 + 1) * 8 | uVar6 >> (7 - uVar1) * 8;
      uVar1 = (int)pvVar5 + 8U & 7;
      puVar3 = (ulong *)(((int)pvVar5 + 8U) - uVar1);
      *puVar3 = uVar6 << uVar1 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar1) * 8;
      uVar1 = (int)pvVar5 + 0x13U & 3;
      puVar4 = (uint *)(((int)pvVar5 + 0x13U) - uVar1);
      *puVar4 = *puVar4 & -1 << (uVar1 + 1) * 8 | uVar8 >> (3 - uVar1) * 8;
      uVar1 = (int)pvVar5 + 0x10U & 3;
      puVar4 = (uint *)(((int)pvVar5 + 0x10U) - uVar1);
      *puVar4 = *puVar4 & 0xffffffffU >> (4 - uVar1) * 8 | uVar8 << uVar1 * 8;
      pCtrl->StartFrame = Frame;
      pCtrl->EndFrame = Frame + (short)pData[8];
    }
  }
  return pData + 10;
}

static void SceneEffectCallBlur(SCENE_EFFECT_CTRL_DATA *pData, int NowFrame) {
	SCENE_EFFECT_BLUR *pBlur;
	static int BlurAlpha = 0;
	int Scale;
	int Rot;
	float Progress;
	
  short sVar1;
  void *pvVar2;
  int iVar3;
  
  pvVar2 = SceneEffectChangeDataPtr__FPC23_SCENE_EFFECT_CTRL_DATA(pData);
  iVar3 = SceneTestEffectFlgGet__F15SCN_DB_EFF_TYPE(SCN_DB_EFF_BLUR_N);
  if (iVar3 != 0) {
    return;
  }
  iVar3 = SceneTestEffectFlgGet__F15SCN_DB_EFF_TYPE(SCN_DB_EFF_BLUR_B);
  if (iVar3 != 0) {
    return;
  }
  iVar3 = SceneTestEffectFlgGet__F15SCN_DB_EFF_TYPE(SCN_DB_EFF_BLUR_W);
  if (iVar3 != 0) {
    return;
  }
  if (*(short *)((int)pvVar2 + 0x10) < 1) {
    sVar1 = *(short *)((int)pvVar2 + 6);
  }
  else {
    if (NowFrame <= pData->EndFrame) {
      BlurAlpha_943 =
           (int)((float)((int)*(short *)((int)pvVar2 + 6) - (int)*(short *)((int)pvVar2 + 4)) *
                 ((float)(NowFrame - pData->StartFrame) / (float)(int)*(short *)((int)pvVar2 + 0x10)
                 ) + (float)(int)*(short *)((int)pvVar2 + 4));
      goto LAB_0024dce4;
    }
    sVar1 = *(short *)((int)pvVar2 + 6);
  }
  BlurAlpha_943 = (int)sVar1;
LAB_0024dce4:
  SetEffects__Fiie(pData->EffectId,1);
  return;
}

static short int* SceneEffectReqDeform(short int *pData, int Frame) {
	SCENE_EFFECT_DEFORM *pDeform;
	SCENE_EFFECT_CTRL_DATA *pCtrlData;
	
  uint uVar1;
  uint uVar2;
  ulong *puVar3;
  uint *puVar4;
  _SCENE_EFFECT_CTRL_DATA *pCtrl;
  void *pvVar5;
  ulong in_v1;
  ulong uVar7;
  long lVar6;
  
  SceneEffectCtrlDelete__Fi(6);
  if (pData[1] != 0) {
    pCtrl = SceneEffectCtrlRegist__FPvii((void *)0x0,6,0xc);
    lVar6 = (long)(int)pCtrl;
    if (lVar6 != 0) {
      pvVar5 = SceneEffectChangeDataPtr__FPC23_SCENE_EFFECT_CTRL_DATA(pCtrl);
      uVar1 = (int)pData + 7U & 7;
      uVar2 = (uint)pData & 7;
      uVar7 = (*(long *)(((int)pData + 7U) - uVar1) << (7 - uVar1) * 8 |
              in_v1 & 0xffffffffffffffffU >> (uVar1 + 1) * 8) & -1L << (8 - uVar2) * 8 |
              *(ulong *)((int)pData - uVar2) >> uVar2 * 8;
      uVar1 = (int)pData + 0xbU & 3;
      uVar2 = (uint)(pData + 4) & 3;
      uVar1 = (*(int *)(((int)pData + 0xbU) - uVar1) << (3 - uVar1) * 8 |
              (uint)lVar6 & 0xffffffffU >> (uVar1 + 1) * 8) & -1 << (4 - uVar2) * 8 |
              *(uint *)((int)(pData + 4) - uVar2) >> uVar2 * 8;
      uVar2 = (int)pvVar5 + 7U & 7;
      puVar3 = (ulong *)(((int)pvVar5 + 7U) - uVar2);
      *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | uVar7 >> (7 - uVar2) * 8;
      uVar2 = (uint)pvVar5 & 7;
      *(ulong *)((int)pvVar5 - uVar2) =
           uVar7 << uVar2 * 8 |
           *(ulong *)((int)pvVar5 - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
      uVar2 = (int)pvVar5 + 0xbU & 3;
      puVar4 = (uint *)(((int)pvVar5 + 0xbU) - uVar2);
      *puVar4 = *puVar4 & -1 << (uVar2 + 1) * 8 | uVar1 >> (3 - uVar2) * 8;
      uVar2 = (int)pvVar5 + 8U & 3;
      puVar4 = (uint *)(((int)pvVar5 + 8U) - uVar2);
      *puVar4 = *puVar4 & 0xffffffffU >> (4 - uVar2) * 8 | uVar1 << uVar2 * 8;
      pCtrl->StartFrame = Frame;
      pCtrl->EndFrame = Frame + (short)pData[4];
    }
  }
  return pData + 6;
}

static void SceneEffectCallDeform(SCENE_EFFECT_CTRL_DATA *pData, int NowFrame) {
	SCENE_EFFECT_DEFORM *pDeform;
	int Rate;
	float Progress;
	
  int iVar1;
  
  SceneEffectChangeDataPtr__FPC23_SCENE_EFFECT_CTRL_DATA(pData);
  iVar1 = SceneTestEffectFlgGet__F15SCN_DB_EFF_TYPE(SCN_DB_EFF_DEFORM);
  if (iVar1 == 0) {
    SetEffects__Fiie(6,1);
  }
  return;
}

static short int* SceneEffectReqFocus(short int *pData, int Frame) {
	SCENE_EFFECT_FOCUS *pFocus;
	SCENE_EFFECT_CTRL_DATA *pCtrlData;
	
  uint uVar1;
  uint uVar2;
  ulong *puVar3;
  _SCENE_EFFECT_CTRL_DATA *pCtrl;
  void *pvVar4;
  ulong in_v1;
  ulong uVar5;
  
  SceneEffectCtrlDelete__Fi(7);
  pCtrl = SceneEffectCtrlRegist__FPvii((void *)0x0,7,8);
  if (pCtrl != (_SCENE_EFFECT_CTRL_DATA *)0x0) {
    pvVar4 = SceneEffectChangeDataPtr__FPC23_SCENE_EFFECT_CTRL_DATA(pCtrl);
    uVar1 = (int)pData + 7U & 7;
    uVar2 = (uint)pData & 7;
    uVar5 = (*(long *)(((int)pData + 7U) - uVar1) << (7 - uVar1) * 8 |
            in_v1 & 0xffffffffffffffffU >> (uVar1 + 1) * 8) & -1L << (8 - uVar2) * 8 |
            *(ulong *)((int)pData - uVar2) >> uVar2 * 8;
    uVar1 = (int)pvVar4 + 7U & 7;
    puVar3 = (ulong *)(((int)pvVar4 + 7U) - uVar1);
    *puVar3 = *puVar3 & -1L << (uVar1 + 1) * 8 | uVar5 >> (7 - uVar1) * 8;
    uVar1 = (uint)pvVar4 & 7;
    *(ulong *)((int)pvVar4 - uVar1) =
         uVar5 << uVar1 * 8 |
         *(ulong *)((int)pvVar4 - uVar1) & 0xffffffffffffffffU >> (8 - uVar1) * 8;
    pCtrl->StartFrame = Frame;
    pCtrl->EndFrame = Frame + (short)pData[3];
  }
  return pData + 4;
}

static void SceneEffectCallFocus(SCENE_EFFECT_CTRL_DATA *pData, int NowFrame) {
	SCENE_EFFECT_FOCUS *pFocus;
	int Rate;
	float Progress;
	
  int iVar1;
  
  SceneEffectChangeDataPtr__FPC23_SCENE_EFFECT_CTRL_DATA(pData);
  iVar1 = SceneTestEffectFlgGet__F15SCN_DB_EFF_TYPE(SCN_DB_EFF_FOCUS);
  if (iVar1 == 0) {
    SetEffects__Fiie(7,1);
  }
  return;
}

static short int* SceneEffectReqContrast(short int *pData, int Frame) {
	SCENE_EFFECT_CONTRAST *pContrast;
	SCENE_EFFECT_CTRL_DATA *pCtrlData;
	int Type;
	
  uint uVar1;
  uint uVar2;
  ulong *puVar3;
  int iVar4;
  _SCENE_EFFECT_CTRL_DATA *pCtrl;
  void *pvVar5;
  ulong uVar6;
  ulong uVar7;
  int EffectId;
  
  SceneEffectCtrlDelete__Fi(0xd);
  SceneEffectCtrlDelete__Fi(0xe);
  SceneEffectCtrlDelete__Fi(0xf);
  uVar6 = (ulong)(short)pData[1];
  EffectId = 0xe;
  if (uVar6 != 3) {
    if ((long)uVar6 < 4) {
      iVar4 = 2;
      EffectId = 0xd;
    }
    else {
      iVar4 = 4;
      EffectId = 0xf;
    }
    if (uVar6 != (long)iVar4) {
      EffectId = 0;
    }
  }
  if (EffectId != 0) {
    pCtrl = SceneEffectCtrlRegist__FPvii((void *)0x0,EffectId,0x10);
    uVar7 = (ulong)(int)pCtrl;
    if (uVar7 != 0) {
      pvVar5 = SceneEffectChangeDataPtr__FPC23_SCENE_EFFECT_CTRL_DATA(pCtrl);
      uVar1 = (int)pData + 7U & 7;
      uVar2 = (uint)pData & 7;
      uVar6 = (*(long *)(((int)pData + 7U) - uVar1) << (7 - uVar1) * 8 |
              uVar6 & 0xffffffffffffffffU >> (uVar1 + 1) * 8) & -1L << (8 - uVar2) * 8 |
              *(ulong *)((int)pData - uVar2) >> uVar2 * 8;
      uVar1 = (int)pData + 0xfU & 7;
      uVar2 = (uint)(pData + 4) & 7;
      uVar7 = (*(long *)(((int)pData + 0xfU) - uVar1) << (7 - uVar1) * 8 |
              uVar7 & 0xffffffffffffffffU >> (uVar1 + 1) * 8) & -1L << (8 - uVar2) * 8 |
              *(ulong *)((int)(pData + 4) - uVar2) >> uVar2 * 8;
      uVar1 = (int)pvVar5 + 7U & 7;
      puVar3 = (ulong *)(((int)pvVar5 + 7U) - uVar1);
      *puVar3 = *puVar3 & -1L << (uVar1 + 1) * 8 | uVar6 >> (7 - uVar1) * 8;
      uVar1 = (uint)pvVar5 & 7;
      *(ulong *)((int)pvVar5 - uVar1) =
           uVar6 << uVar1 * 8 |
           *(ulong *)((int)pvVar5 - uVar1) & 0xffffffffffffffffU >> (8 - uVar1) * 8;
      uVar1 = (int)pvVar5 + 0xfU & 7;
      puVar3 = (ulong *)(((int)pvVar5 + 0xfU) - uVar1);
      *puVar3 = *puVar3 & -1L << (uVar1 + 1) * 8 | uVar7 >> (7 - uVar1) * 8;
      uVar1 = (int)pvVar5 + 8U & 7;
      puVar3 = (ulong *)(((int)pvVar5 + 8U) - uVar1);
      *puVar3 = uVar7 << uVar1 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar1) * 8;
      pCtrl->StartFrame = Frame;
      pCtrl->EndFrame = Frame + (short)pData[6];
    }
  }
  return pData + 8;
}

static void SceneEffectCallContrast(SCENE_EFFECT_CTRL_DATA *pData, int NowFrame) {
	SCENE_EFFECT_CONTRAST *pContrast;
	int Color;
	int Alpha;
	float Progress;
	
  int iVar1;
  
  SceneEffectChangeDataPtr__FPC23_SCENE_EFFECT_CTRL_DATA(pData);
  iVar1 = SceneTestEffectFlgGet__F15SCN_DB_EFF_TYPE(SCN_DB_EFF_CONTRAST1);
  if (((iVar1 == 0) &&
      (iVar1 = SceneTestEffectFlgGet__F15SCN_DB_EFF_TYPE(SCN_DB_EFF_CONTRAST2), iVar1 == 0)) &&
     (iVar1 = SceneTestEffectFlgGet__F15SCN_DB_EFF_TYPE(SCN_DB_EFF_CONTRAST3), iVar1 == 0)) {
    SetEffects__Fiie(pData->EffectId,1);
  }
  return;
}

static short int* SceneEffectReqNega(short int *pData, int Frame) {
	SCENE_EFFECT_NEGA *pNega;
	SCENE_EFFECT_CTRL_DATA *pCtrlData;
	
  uint uVar1;
  uint uVar2;
  ulong *puVar3;
  _SCENE_EFFECT_CTRL_DATA *pCtrl;
  void *pvVar4;
  ulong in_v1;
  ulong uVar5;
  ulong uVar6;
  
  SceneEffectCtrlDelete__Fi(0xc);
  pCtrl = SceneEffectCtrlRegist__FPvii((void *)0x0,0xc,0x10);
  uVar6 = (ulong)(int)pCtrl;
  if (uVar6 != 0) {
    pvVar4 = SceneEffectChangeDataPtr__FPC23_SCENE_EFFECT_CTRL_DATA(pCtrl);
    uVar1 = (int)pData + 7U & 7;
    uVar2 = (uint)pData & 7;
    uVar5 = (*(long *)(((int)pData + 7U) - uVar1) << (7 - uVar1) * 8 |
            in_v1 & 0xffffffffffffffffU >> (uVar1 + 1) * 8) & -1L << (8 - uVar2) * 8 |
            *(ulong *)((int)pData - uVar2) >> uVar2 * 8;
    uVar1 = (int)pData + 0xfU & 7;
    uVar2 = (uint)(pData + 4) & 7;
    uVar6 = (*(long *)(((int)pData + 0xfU) - uVar1) << (7 - uVar1) * 8 |
            uVar6 & 0xffffffffffffffffU >> (uVar1 + 1) * 8) & -1L << (8 - uVar2) * 8 |
            *(ulong *)((int)(pData + 4) - uVar2) >> uVar2 * 8;
    uVar1 = (int)pvVar4 + 7U & 7;
    puVar3 = (ulong *)(((int)pvVar4 + 7U) - uVar1);
    *puVar3 = *puVar3 & -1L << (uVar1 + 1) * 8 | uVar5 >> (7 - uVar1) * 8;
    uVar1 = (uint)pvVar4 & 7;
    *(ulong *)((int)pvVar4 - uVar1) =
         uVar5 << uVar1 * 8 |
         *(ulong *)((int)pvVar4 - uVar1) & 0xffffffffffffffffU >> (8 - uVar1) * 8;
    uVar1 = (int)pvVar4 + 0xfU & 7;
    puVar3 = (ulong *)(((int)pvVar4 + 0xfU) - uVar1);
    *puVar3 = *puVar3 & -1L << (uVar1 + 1) * 8 | uVar6 >> (7 - uVar1) * 8;
    uVar1 = (int)pvVar4 + 8U & 7;
    puVar3 = (ulong *)(((int)pvVar4 + 8U) - uVar1);
    *puVar3 = uVar6 << uVar1 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar1) * 8;
    pCtrl->StartFrame = Frame;
    pCtrl->EndFrame = Frame + (short)pData[7];
  }
  return pData + 8;
}

static void SceneEffectCallNega(SCENE_EFFECT_CTRL_DATA *pData, int NowFrame) {
	SCENE_EFFECT_NEGA *pNega;
	static u_char nalp = 0;
	int Color;
	int Alpha;
	int Alpha2;
	float Progress;
	
  void *pvVar1;
  int iVar2;
  
  pvVar1 = SceneEffectChangeDataPtr__FPC23_SCENE_EFFECT_CTRL_DATA(pData);
  iVar2 = SceneTestEffectFlgGet__F15SCN_DB_EFF_TYPE(SCN_DB_EFF_NEGA);
  if (iVar2 == 0) {
    if (*(short *)((int)pvVar1 + 0xe) < 1) {
      nalp_968 = (undefined)*(undefined2 *)((int)pvVar1 + 0xc);
    }
    else if (pData->EndFrame < NowFrame) {
      nalp_968 = (undefined)*(undefined2 *)((int)pvVar1 + 0xc);
    }
    else {
      nalp_968 = (undefined)
                 (int)((float)((int)*(short *)((int)pvVar1 + 0xc) -
                              (int)*(short *)((int)pvVar1 + 10)) *
                       ((float)(NowFrame - pData->StartFrame) /
                       (float)(int)*(short *)((int)pvVar1 + 0xe)) +
                      (float)(int)*(short *)((int)pvVar1 + 10));
    }
    SetEffects__Fiie(0xc,1);
  }
  return;
}

static short int* SceneEffectReqFadeFrame(short int *pData, int Frame) {
	SCENE_EFFECT_FADEFRAME *pFadeFrame;
	SCENE_EFFECT_CTRL_DATA *pCtrlData;
	
  uint uVar1;
  uint uVar2;
  ulong *puVar3;
  _SCENE_EFFECT_CTRL_DATA *pCtrl;
  void *pvVar4;
  ulong in_v1;
  ulong uVar5;
  
  SceneEffectCtrlDelete__Fi(9);
  pCtrl = SceneEffectCtrlRegist__FPvii((void *)0x0,9,8);
  if (pCtrl != (_SCENE_EFFECT_CTRL_DATA *)0x0) {
    pvVar4 = SceneEffectChangeDataPtr__FPC23_SCENE_EFFECT_CTRL_DATA(pCtrl);
    uVar1 = (int)pData + 7U & 7;
    uVar2 = (uint)pData & 7;
    uVar5 = (*(long *)(((int)pData + 7U) - uVar1) << (7 - uVar1) * 8 |
            in_v1 & 0xffffffffffffffffU >> (uVar1 + 1) * 8) & -1L << (8 - uVar2) * 8 |
            *(ulong *)((int)pData - uVar2) >> uVar2 * 8;
    uVar1 = (int)pvVar4 + 7U & 7;
    puVar3 = (ulong *)(((int)pvVar4 + 7U) - uVar1);
    *puVar3 = *puVar3 & -1L << (uVar1 + 1) * 8 | uVar5 >> (7 - uVar1) * 8;
    uVar1 = (uint)pvVar4 & 7;
    *(ulong *)((int)pvVar4 - uVar1) =
         uVar5 << uVar1 * 8 |
         *(ulong *)((int)pvVar4 - uVar1) & 0xffffffffffffffffU >> (8 - uVar1) * 8;
    pCtrl->StartFrame = Frame;
    pCtrl->EndFrame = Frame + (short)pData[3];
  }
  return pData + 4;
}

static void SceneEffectCallFadeFrame(SCENE_EFFECT_CTRL_DATA *pData, int NowFrame) {
	SCENE_EFFECT_FADEFRAME *pFadeFrame;
	int Alpha;
	float Progress;
	
  int iVar1;
  
  SceneEffectChangeDataPtr__FPC23_SCENE_EFFECT_CTRL_DATA(pData);
  iVar1 = SceneTestEffectFlgGet__F15SCN_DB_EFF_TYPE(SCN_DB_EFF_FADE_FRAME);
  if (iVar1 == 0) {
    SetEffects__Fiie(9,1);
  }
  return;
}

static short int* SceneEffectReqOverlap(short int *pData, int Frame) {
  void *pRet;
  
  pRet = SetEffects__Fiie(8,2);
  SceneEffectCtrlRegist__FPvii(pRet,8,0);
  return pData + 2;
}

static short int* SceneEffectReqModelFade(short int *pData, int Frame) {
  SceneEffectFadeModelRegist__FP22SCENE_EFFECT_MODELFADEi((SCENE_EFFECT_MODELFADE *)pData,Frame);
  return pData + 6;
}

static short int* SceneEffectReqPDeform(short int *pData, int Frame) {
  SceneEffectPDeformRegist__FP20SCENE_EFFECT_PDEFORMi((SCENE_EFFECT_PDEFORM *)pData,Frame);
  return pData + 0x12;
}

static short int* SceneEffectReqLenzFlare(short int *pData, int Frame) {
  SceneEffectCtrl.LenzFlareFlg = 1;
  return pData + 2;
}

static short int* SceneEffectReqEneAura(short int *pData, int Frame) {
  SceneEffectEneAuraRegist__FP21SCENE_EFFECT_ENE_AURA((SCENE_EFFECT_ENE_AURA *)pData);
  return pData + 10;
}

static short int* SceneEffectReqVibration(short int *pData, int Frame) {
  return pData + 6;
}

static short int* SceneEffectReqPointLight(short int *pData, int Frame) {
  SceneChangeLightParameter__Fiiiifffff
            (3,(int)(short)pData[3],(int)(short)pData[1],(int)(short)pData[2],
             (float)(int)(short)pData[4] / 1000.0,(float)(int)(short)pData[5] / 1000.0,
             (float)(int)(short)pData[6] / 1000.0,(float)(int)(short)pData[7],0.0);
  return pData + 8;
}

static short int* SceneEffectReqSpotLight(short int *pData, int Frame) {
  SceneChangeLightParameter__Fiiiifffff
            (2,(int)(short)pData[3],(int)(short)pData[1],(int)(short)pData[2],
             (float)(int)(short)pData[4] / 1000.0,(float)(int)(short)pData[5] / 1000.0,
             (float)(int)(short)pData[6] / 1000.0,(float)(int)(short)pData[7],
             (float)(int)(short)pData[8] / 10.0);
  return pData + 10;
}

static short int* SceneEffectReqHandSpotLight(short int *pData, int Frame) {
  SceneChangeHandSpotLightParameter__Ffffff
            ((float)(int)(short)pData[1] / 1000.0,(float)(int)(short)pData[2] / 1000.0,
             (float)(int)(short)pData[3] / 1000.0,(float)(int)(short)pData[4],
             (float)(int)(short)pData[5] / 10.0);
  return pData + 6;
}

static short int* SceneEffectReqTorch(short int *pData, int Frame) {
	SCENE_EFFECT_TORCH *pTorch;
	SCENE_EFFECT_TORCH_DATA TorchData;
	
  SCENE_EFFECT_TORCH_DATA TorchData;
  
  TorchData.pMdlAnm = SceneGetAniCtrl__Fi((int)(short)pData[1]);
  if (TorchData.pMdlAnm != (ANI_CTRL *)0x0) {
    motGetBukiUpPos__FPfP8ANI_CTRL(TorchData.Position,TorchData.pMdlAnm);
    SceneTorchCtrlRegistAndReq__FP23SCENE_EFFECT_TORCH_DATAi(&TorchData,(int)(short)pData[2]);
  }
  return pData + 4;
}

static short int* SceneEffectReqPDeformOff(short int *pData, int Frame) {
  SceneEffectPDeformCtrlDelete__Fi((int)(short)pData[1]);
  return pData + 2;
}

static short int* SceneEffectMonochroModeOnOff(short int *pData, int Frame) {
	SCENE_EFFECT_MONOCHRO_ONOFF *pMonoOnOff;
	int RoomNo;
	int SubRoomNo;
	
  int RoomNo;
  int RoomNo_00;
  
  RoomNo = SceneRoomNoGet__Fv();
  RoomNo_00 = SceneSubRoomNoGet__Fv();
  if (pData[1] == 0) {
    EffWrkMonochroModeSet__Fi(0);
    gra3dMonotoneDrawEnable__Fi(0);
  }
  else {
    EffWrkMonochroModeSet__Fi(1);
    gra3dMonotoneDrawEnable__Fi(1);
  }
  if (RoomNo != -1) {
    gra3dPrelightScene__Fi(RoomNo);
  }
  if (RoomNo_00 != -1) {
    gra3dPrelightScene__Fi(RoomNo_00);
  }
  return pData + 2;
}

static short int* SceneEffectReqHaze(short int *pData, int Frame) {
  SceneEffectHazeRegist__FP17SCENE_EFFECT_HAZE((SCENE_EFFECT_HAZE *)pData);
  return pData + 2;
}

static short int* SceneEffectHazeOff(short int *pData, int Frame) {
  SceneEffectHazeCtrlDelete__Fi((int)(short)pData[1]);
  return pData + 2;
}

static short int* SceneEffectFadeInOut(short int *pData, int Frame) {
	SCENE_EFFECT_FADE_IN_OUT *pFade;
	
  if (pData[1] == 0) {
    if (pData[2] == 1) {
      SetWhiteOut2__Fi((int)(short)pData[3]);
    }
    else {
      SetBlackOut2__Fi((int)(short)pData[3]);
    }
  }
  else if (pData[2] == 1) {
    SetWhiteIn2__Fi((int)(short)pData[3]);
  }
  else {
    SetBlackIn2__Fi((int)(short)pData[3]);
  }
  return pData + 4;
}

static short int* SceneEffectReqFadeScreen(short int *pData, int Frame) {
  SetParam__FiiUcUcUci
            ((int)(short)pData[4],0,*(uchar *)(pData + 1),*(uchar *)(pData + 2),
             *(uchar *)(pData + 3),0);
  return pData + 6;
}

static short int* SceneEffectReqFadeScreenOff(short int *pData, int Frame) {
  SetParam__FiiUcUcUci(0,0,'\0','\0','\0',0);
  return pData + 2;
}

static void SceneEffectFadeModelCtrlInit() {
  SceneFadeModelCtrl.pDataLast = (_SCENE_FADE_MODEL_DATA *)0x0;
  SceneFadeModelCtrl.pDataTop = (_SCENE_FADE_MODEL_DATA *)0x0;
  return;
}

static int SceneEffectFadeModelRegist(SCENE_EFFECT_MODELFADE *pModelFade, int Frame) {
	SCENE_FADE_MODEL_CTRL *pCtrl;
	SCENE_FADE_MODEL_DATA *pMalloc;
	
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  _SCENE_FADE_MODEL_DATA *p_Var5;
  _HEAP_WRK *wrk;
  _SCENE_FADE_MODEL_DATA *p_Var6;
  int iVar7;
  
  wrk = GetSystemHeapWrkP__Fv();
  p_Var6 = (_SCENE_FADE_MODEL_DATA *)SAFE_MALLOC(wrk,(void *)0x0,0x1c);
  iVar7 = -1;
  if (p_Var6 != (_SCENE_FADE_MODEL_DATA *)0x0) {
    p_Var5 = p_Var6;
    if (SceneFadeModelCtrl.pDataLast != (_SCENE_FADE_MODEL_DATA *)0x0) {
      (SceneFadeModelCtrl.pDataLast)->pNext = p_Var6;
      p_Var5 = SceneFadeModelCtrl.pDataTop;
    }
    SceneFadeModelCtrl.pDataTop = p_Var5;
    uVar1 = pModelFade->Frame;
    iVar7 = 0;
    uVar2 = pModelFade->EndAlpha;
    uVar3 = pModelFade->ModelId;
    uVar4 = pModelFade->StartAlpha;
    SceneFadeModelCtrl.pDataLast = p_Var6;
    p_Var6->ModelType = (int)(short)pModelFade->ModelType;
    p_Var6->ModelId = (int)(short)uVar3;
    p_Var6->EndFrame = (short)uVar1 + Frame;
    p_Var6->StartAlpha = (int)(short)uVar4;
    p_Var6->EndAlpha = (int)(short)uVar2;
    p_Var6->pNext = (_SCENE_FADE_MODEL_DATA *)0x0;
    p_Var6->StartFrame = Frame;
  }
  return iVar7;
}

static void SceneEffectFadeModelAllDelete() {
	SCENE_FADE_MODEL_DATA *pData;
	SCENE_FADE_MODEL_DATA *pDataNext;
	
  bool bVar1;
  _SCENE_FADE_MODEL_DATA *p_Var2;
  _SCENE_FADE_MODEL_DATA *ap;
  _HEAP_WRK *wrk;
  
  bVar1 = SceneFadeModelCtrl.pDataTop != (_SCENE_FADE_MODEL_DATA *)0x0;
  ap = SceneFadeModelCtrl.pDataTop;
  while (bVar1) {
    p_Var2 = ap->pNext;
    if (ap != (_SCENE_FADE_MODEL_DATA *)0x0) {
      wrk = GetSystemHeapWrkP__Fv();
      heapCtrlFree(wrk,ap);
    }
    bVar1 = p_Var2 != (_SCENE_FADE_MODEL_DATA *)0x0;
    ap = p_Var2;
  }
  SceneEffectFadeModelCtrlInit__Fv();
  return;
}

static void SceneEffectFadeModelCtrlExec(SCENE_CTRL *pSceneCtrl) {
	SCENE_FADE_MODEL_DATA *pFadeData;
	SCN_ANM_MDL *pAnmMdl;
	int ModelNum;
	int NowFrame;
	int i;
	int DivFrame;
	
  uint uVar1;
  uint uVar2;
  int iVar3;
  SCENE_CTRL *pSVar4;
  int iVar5;
  _SCENE_FADE_MODEL_DATA *p_Var6;
  
  uVar1 = (pSceneCtrl->fod_ctrl).now_frame;
  if (SceneFadeModelCtrl.pDataTop != (_SCENE_FADE_MODEL_DATA *)0x0) {
    iVar5 = (SceneFadeModelCtrl.pDataTop)->ModelType;
    p_Var6 = SceneFadeModelCtrl.pDataTop;
    while( true ) {
      if (iVar5 == 1) {
                    /* inlined from ../graph3d/ctl/fixed_array.h */
        iVar5 = pSceneCtrl->furn_num;
        _fixed_array_verifyrange__H1Z11SCN_ANM_MDL_UiUi_PX01(0,0xe);
        pSVar4 = (SCENE_CTRL *)&pSceneCtrl->furn_mdl;
                    /* end of inlined section */
      }
      else if (iVar5 < 2) {
        if (iVar5 == 0) {
                    /* inlined from ../graph3d/ctl/fixed_array.h */
          iVar5 = pSceneCtrl->man_mdl_num;
          _fixed_array_verifyrange__H1Z11SCN_ANM_MDL_UiUi_PX01(0,8);
          pSVar4 = pSceneCtrl;
                    /* end of inlined section */
        }
        else {
          iVar5 = 0;
          pSVar4 = (SCENE_CTRL *)0x0;
        }
      }
      else if (iVar5 == 2) {
                    /* inlined from ../graph3d/ctl/fixed_array.h */
        iVar5 = pSceneCtrl->door_num;
        _fixed_array_verifyrange__H1Z11SCN_ANM_MDL_UiUi_PX01(0,8);
        pSVar4 = (SCENE_CTRL *)&pSceneCtrl->door_mdl;
                    /* end of inlined section */
      }
      else if (iVar5 == 3) {
                    /* inlined from ../graph3d/ctl/fixed_array.h */
        iVar5 = pSceneCtrl->item_num;
        _fixed_array_verifyrange__H1Z11SCN_ANM_MDL_UiUi_PX01(0,8);
                    /* end of inlined section */
        pSVar4 = (SCENE_CTRL *)&pSceneCtrl->item_mdl;
      }
      else {
        iVar5 = 0;
        pSVar4 = (SCENE_CTRL *)0x0;
      }
      if (pSVar4 != (SCENE_CTRL *)0x0) {
        if (iVar5 < 1) {
          p_Var6 = p_Var6->pNext;
        }
        else {
          do {
            if (p_Var6->ModelId == (pSVar4->man_mdl).field0_0x0.m_aData[0].mdl_no) {
              if ((int)uVar1 < p_Var6->EndFrame) {
                iVar3 = p_Var6->EndFrame - p_Var6->StartFrame;
                if (iVar3 == 0) {
                  uVar2 = p_Var6->EndAlpha;
                }
                else {
                  if (iVar3 == 0) {
                    trap(7);
                  }
                  uVar2 = (int)((p_Var6->EndAlpha - p_Var6->StartAlpha) *
                               (uVar1 - p_Var6->StartFrame)) / iVar3 + p_Var6->StartAlpha;
                }
              }
              else {
                uVar2 = p_Var6->EndAlpha;
              }
              (pSVar4->man_mdl).field0_0x0.m_aData[0].mdl_alpha = uVar2;
              (pSVar4->man_mdl).field0_0x0.m_aData[0].mdl_alpha =
                   (pSVar4->man_mdl).field0_0x0.m_aData[0].mdl_alpha | 0x80000000;
            }
            iVar5 = iVar5 + -1;
            pSVar4 = (SCENE_CTRL *)((pSVar4->man_mdl).field0_0x0.m_aData + 1);
          } while (iVar5 != 0);
          p_Var6 = p_Var6->pNext;
        }
      }
      if (p_Var6 == (_SCENE_FADE_MODEL_DATA *)0x0) break;
      iVar5 = p_Var6->ModelType;
    }
  }
  return;
}

static void SceneEffectPDeformCtrlInit() {
  SingleLinkListInit__FP16SINGLE_LINK_LISTUi(&ScenePDeformCtrl,0x50);
  return;
}

static void SceneEffectPDeformCtrlAllDelete() {
  SingleLinkListAllCellFree__FP16SINGLE_LINK_LIST(&ScenePDeformCtrl);
  return;
}

static void SceneEffectPDeformCtrlDelete(int ModelId) {
	SLL_CELL *pCell;
	SINGLE_LINK_LIST *pSLL;
	
  void *pvVar1;
  _SLL_CELL *pCell;
  _SLL_CELL *p_Var2;
  
                    /* inlined from ../../common/SingleLinkList.h */
                    /* end of inlined section */
                    /* inlined from ../../common/SingleLinkList.h */
                    /* end of inlined section */
                    /* inlined from ../../common/SingleLinkList.h */
  pCell = (_SLL_CELL *)0x0;
  if (ScenePDeformCtrl.RegCount != 0) {
    pCell = ScenePDeformCtrl.pBeginCell;
  }
                    /* end of inlined section */
  if (pCell != (_SLL_CELL *)0x0) {
                    /* inlined from ../../common/SingleLinkList.h */
    p_Var2 = (_SLL_CELL *)0x0;
    if (pCell != (_SLL_CELL *)0x0) {
      p_Var2 = pCell->pNext;
    }
    while( true ) {
                    /* end of inlined section */
      pvVar1 = SingleLinkListCellBodyPtr__FPC9_SLL_CELL(pCell);
      if ((long)*(short *)((int)pvVar1 + 0x12) == (long)ModelId) {
        SingleLinkListRemove__FP16SINGLE_LINK_LISTP9_SLL_CELL(&ScenePDeformCtrl,pCell);
      }
      if (p_Var2 == (_SLL_CELL *)0x0) break;
      pCell = p_Var2;
      p_Var2 = p_Var2->pNext;
    }
  }
  return;
}

static int SceneEffectPDeformRegist(SCENE_EFFECT_PDEFORM *pPDeform, int NowFrame) {
	SCENE_PDEFORM_DATA TmpData;
	SLL_CELL *pCell;
	int RetVal;
	SCENE_PDEFORM_DATA *pData;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  ulong *puVar4;
  uint *puVar5;
  _SLL_CELL *pCell;
  undefined4 *puVar6;
  ulong in_v1;
  ulong uVar7;
  ulong uVar8;
  ulong in_a2;
  ulong uVar9;
  int iVar10;
  ulong uVar11;
  _SCENE_PDEFORM_DATA TmpData;
  
  uVar11 = (ulong)(int)&TmpData;
  iVar10 = -1;
  pCell = SingleLinkListAddEnd__FP16SINGLE_LINK_LISTPCv(&ScenePDeformCtrl,&TmpData);
  uVar8 = (ulong)(int)pCell;
  if (uVar8 != 0) {
    iVar10 = 0;
    puVar6 = (undefined4 *)SingleLinkListCellBodyPtr__FPC9_SLL_CELL(pCell);
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    puVar6[3] = 0x3f800000;
    puVar1 = (undefined *)((int)&pPDeform->StartScaleX + 1);
    uVar2 = (uint)puVar1 & 7;
    uVar3 = (uint)pPDeform & 7;
    uVar7 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
            in_v1 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
            *(ulong *)((int)pPDeform - uVar3) >> uVar3 * 8;
    puVar1 = (undefined *)((int)&pPDeform->StartAlpha + 1);
    uVar2 = (uint)puVar1 & 7;
    uVar3 = (uint)&pPDeform->EndScaleX & 7;
    uVar8 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
            uVar8 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
            *(ulong *)((int)&pPDeform->EndScaleX - uVar3) >> uVar3 * 8;
    puVar1 = (undefined *)((int)&pPDeform->StartTexRate + 1);
    uVar2 = (uint)puVar1 & 7;
    uVar3 = (uint)&pPDeform->EndAlpha & 7;
    uVar11 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
             uVar11 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
             *(ulong *)((int)&pPDeform->EndAlpha - uVar3) >> uVar3 * 8;
    puVar1 = (undefined *)((int)&pPDeform->Distance + 1);
    uVar2 = (uint)puVar1 & 7;
    uVar3 = (uint)&pPDeform->EndTexRate & 7;
    uVar9 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
            in_a2 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
            *(ulong *)((int)&pPDeform->EndTexRate - uVar3) >> uVar3 * 8;
    uVar2 = (int)puVar6 + 0x17U & 7;
    puVar4 = (ulong *)(((int)puVar6 + 0x17U) - uVar2);
    *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | uVar7 >> (7 - uVar2) * 8;
    uVar2 = (uint)(puVar6 + 4) & 7;
    puVar4 = (ulong *)((int)(puVar6 + 4) - uVar2);
    *puVar4 = uVar7 << uVar2 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
    uVar2 = (int)puVar6 + 0x1fU & 7;
    puVar4 = (ulong *)(((int)puVar6 + 0x1fU) - uVar2);
    *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | uVar8 >> (7 - uVar2) * 8;
    uVar2 = (uint)(puVar6 + 6) & 7;
    puVar4 = (ulong *)((int)(puVar6 + 6) - uVar2);
    *puVar4 = uVar8 << uVar2 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
    uVar2 = (int)puVar6 + 0x27U & 7;
    puVar4 = (ulong *)(((int)puVar6 + 0x27U) - uVar2);
    *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | uVar11 >> (7 - uVar2) * 8;
    uVar2 = (uint)(puVar6 + 8) & 7;
    puVar4 = (ulong *)((int)(puVar6 + 8) - uVar2);
    *puVar4 = uVar11 << uVar2 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
    uVar2 = (int)puVar6 + 0x2fU & 7;
    puVar4 = (ulong *)(((int)puVar6 + 0x2fU) - uVar2);
    *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | uVar9 >> (7 - uVar2) * 8;
    uVar2 = (uint)(puVar6 + 10) & 7;
    puVar4 = (ulong *)((int)(puVar6 + 10) - uVar2);
    *puVar4 = uVar9 << uVar2 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
    puVar1 = (undefined *)((int)&pPDeform->Pad + 1);
    uVar2 = (uint)puVar1 & 3;
    uVar3 = (uint)&pPDeform->Time & 3;
    uVar2 = (*(int *)(puVar1 + -uVar2) << (3 - uVar2) * 8 |
            (uint)uVar7 & 0xffffffffU >> (uVar2 + 1) * 8) & -1 << (4 - uVar3) * 8 |
            *(uint *)((int)&pPDeform->Time - uVar3) >> uVar3 * 8;
    uVar3 = (int)puVar6 + 0x33U & 3;
    puVar5 = (uint *)(((int)puVar6 + 0x33U) - uVar3);
    *puVar5 = *puVar5 & -1 << (uVar3 + 1) * 8 | uVar2 >> (3 - uVar3) * 8;
    uVar3 = (uint)(puVar6 + 0xc) & 3;
    puVar5 = (uint *)((int)(puVar6 + 0xc) - uVar3);
    *puVar5 = *puVar5 & 0xffffffffU >> (4 - uVar3) * 8 | uVar2 << uVar3 * 8;
    puVar6[0xf] = 0x3f800000;
    puVar6[0xd] = 0;
    puVar6[0xe] = 0;
    puVar6[0x11] = NowFrame + *(short *)(puVar6 + 0xc);
    puVar6[0x10] = NowFrame;
  }
  return iVar10;
}

static void SceneEffectPDeformCtrlExec(int NowFrame) {
	int Alpha;
	float ScaleX;
	float ScaleY;
	float Progress;
	SLL_CELL *pCell;
	SINGLE_LINK_LIST *pSLL;
	SCENE_PDEFORM_DATA *pData;
	
  short sVar1;
  _SLL_CELL *pCell;
  _SLL_CELL *p_Var2;
  float *Position;
  int ModelId;
  float fVar3;
  
                    /* inlined from ../../common/SingleLinkList.h */
                    /* end of inlined section */
                    /* inlined from ../../common/SingleLinkList.h */
                    /* end of inlined section */
                    /* inlined from ../../common/SingleLinkList.h */
                    /* end of inlined section */
                    /* inlined from ../../common/SingleLinkList.h */
  p_Var2 = (_SLL_CELL *)0x0;
  if (ScenePDeformCtrl.RegCount != 0) {
    p_Var2 = ScenePDeformCtrl.pBeginCell;
  }
  do {
    pCell = p_Var2;
                    /* end of inlined section */
    if (pCell == (_SLL_CELL *)0x0) {
      return;
    }
    Position = (float *)SingleLinkListCellBodyPtr__FPC9_SLL_CELL(pCell);
    if (*(short *)(Position + 0xc) < 1) {
      sVar1 = *(short *)(Position + 0xb);
LAB_0024ef6c:
      Position[0xd] = (float)(int)sVar1 / 100.0;
      Position[0xe] = (float)(int)*(short *)(Position + 9) / 100.0;
      Position[0xf] = (float)(int)*(short *)(Position + 10) / 100.0;
    }
    else {
      if ((int)Position[0x11] < NowFrame) {
        sVar1 = *(short *)(Position + 0xb);
        goto LAB_0024ef6c;
      }
      fVar3 = (float)(NowFrame - (int)Position[0x10]) / (float)(int)*(short *)(Position + 0xc);
      Position[0xd] =
           ((float)((int)*(short *)(Position + 0xb) - (int)*(short *)((int)Position + 0x2a)) * fVar3
           + (float)(int)*(short *)((int)Position + 0x2a)) / 100.0;
      Position[0xe] =
           ((float)((int)*(short *)(Position + 9) - (int)*(short *)((int)Position + 0x22)) * fVar3 +
           (float)(int)*(short *)((int)Position + 0x22)) / 100.0;
      Position[0xf] =
           ((float)((int)*(short *)(Position + 10) - (int)*(short *)((int)Position + 0x26)) * fVar3
           + (float)(int)*(short *)((int)Position + 0x26)) / 100.0;
    }
    ModelId = SceneManModelNoChange__Fi((int)*(short *)((int)Position + 0x12));
    SceneGetModelPDeformPos__FPfif(Position,ModelId,(float)(int)*(short *)((int)Position + 0x2e));
    SetEffects__Fiie(0x18,1);
                    /* inlined from ../../common/SingleLinkList.h */
    p_Var2 = (_SLL_CELL *)0x0;
    if (pCell != (_SLL_CELL *)0x0) {
      p_Var2 = pCell->pNext;
    }
  } while( true );
}

static void SceneEffectLenzFlareExec(SCENE_CTRL *pSceneCtrl) {
	ANI_CTRL *pAniCtrl;
	int i;
	float LocalWorld[4][4];
	float TmpVec[4];
	float TmpFloat;
	
  SCENE_CTRL *pSVar1;
  int iVar2;
  ANI_CTRL *ani_ctrl;
  float LocalWorld [4] [4];
  float TmpVec [4];
  float TmpFloat;
  
  iVar2 = 0;
  ani_ctrl = (ANI_CTRL *)0x0;
  pSVar1 = pSceneCtrl;
  if (0 < pSceneCtrl->man_mdl_num) {
    do {
                    /* inlined from ../graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z11SCN_ANM_MDL_UiUi_PX01(iVar2,8);
      if ((pSVar1->man_mdl).field0_0x0.m_aData[0].mdl_no == 0) {
        _fixed_array_verifyrange__H1Z11SCN_ANM_MDL_UiUi_PX01(iVar2,8);
                    /* end of inlined section */
        ani_ctrl = (pSVar1->man_mdl).field0_0x0.m_aData[0].pMdlAnm;
        break;
      }
      iVar2 = iVar2 + 1;
      pSVar1 = (SCENE_CTRL *)((pSVar1->man_mdl).field0_0x0.m_aData + 1);
    } while (iVar2 < pSceneCtrl->man_mdl_num);
  }
  if (ani_ctrl != (ANI_CTRL *)0x0) {
    GetPlyrAcsLightPos__FPfP8ANI_CTRL(SceneEffectCtrl.SpotLightPos,ani_ctrl);
    motGetLocalWorldMatrix__FPA3_fPUii(LocalWorld,ani_ctrl->mpk_p,6);
    sceVu0SubVector(TmpVec,0x4bbf80,LocalWorld[3]);
    Vector2Rot__FPCfPfT1(TmpVec,&TmpFloat,SceneEffectCtrl.SpotLightRot + 1);
    SetEffects__Fiie(10,1);
  }
  return;
}

static void SceneEffectEneAuraCtrlInit() {
  SceneEneAuraCtrl.pDataLast = (_SCENE_ENE_AURA_DATA *)0x0;
  SceneEneAuraCtrl.pDataTop = (_SCENE_ENE_AURA_DATA *)0x0;
  return;
}

static void SceneEffectEneAuraCtrlAllDelete() {
	SCENE_ENE_AURA_DATA *pData;
	SCENE_ENE_AURA_DATA *pDataNext;
	
  _SCENE_ENE_AURA_DATA *p_Var1;
  void *p;
  _HEAP_WRK *wrk;
  _SCENE_ENE_AURA_DATA *ap;
  
  if (SceneEneAuraCtrl.pDataTop != (_SCENE_ENE_AURA_DATA *)0x0) {
    p = (SceneEneAuraCtrl.pDataTop)->pRet;
    ap = SceneEneAuraCtrl.pDataTop;
    while( true ) {
      if (p != (void *)0x0) {
        ResetEffects__FPv(p);
      }
      p_Var1 = ap->pNext;
      if (ap != (_SCENE_ENE_AURA_DATA *)0x0) {
        wrk = GetSystemHeapWrkP__Fv();
        heapCtrlFree(wrk,ap);
      }
      if (p_Var1 == (_SCENE_ENE_AURA_DATA *)0x0) break;
      p = p_Var1->pRet;
      ap = p_Var1;
    }
  }
  SceneEffectEneAuraCtrlInit__Fv();
  return;
}

static int SceneEffectEneAuraRegist(SCENE_EFFECT_ENE_AURA *pEneAura) {
	SCENE_ENE_AURA_CTRL *pCtrl;
	SCENE_ENE_AURA_DATA *pMalloc;
	
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  _SCENE_ENE_AURA_DATA *p_Var9;
  _HEAP_WRK *wrk;
  _SCENE_ENE_AURA_DATA *p_Var10;
  int iVar11;
  void *pvVar12;
  
  wrk = GetSystemHeapWrkP__Fv();
  p_Var10 = (_SCENE_ENE_AURA_DATA *)SAFE_MALLOC(wrk,(void *)0x0,0x30);
  iVar11 = -1;
  if (p_Var10 != (_SCENE_ENE_AURA_DATA *)0x0) {
    p_Var9 = p_Var10;
    if (SceneEneAuraCtrl.pDataLast != (_SCENE_ENE_AURA_DATA *)0x0) {
      (SceneEneAuraCtrl.pDataLast)->pNext = p_Var10;
      p_Var9 = SceneEneAuraCtrl.pDataTop;
    }
    SceneEneAuraCtrl.pDataTop = p_Var9;
    SceneEneAuraCtrl.pDataLast = p_Var10;
    iVar11 = SceneManModelNoChange__Fi((int)(short)pEneAura->ModelId);
    SceneGetModelPDeformPos__FPfif((SceneEneAuraCtrl.pDataLast)->Position,iVar11,0.0);
    p_Var10 = SceneEneAuraCtrl.pDataLast;
    uVar5 = pEneAura->AlphaRate;
    uVar6 = pEneAura->Adjust;
    bVar1 = *(byte *)&pEneAura->R;
    uVar7 = pEneAura->Size;
    bVar2 = *(byte *)&pEneAura->B;
    bVar3 = *(byte *)&pEneAura->G;
    bVar4 = *(byte *)&pEneAura->A;
    uVar8 = pEneAura->ModelId;
    (SceneEneAuraCtrl.pDataLast)->Position[1] =
         (SceneEneAuraCtrl.pDataLast)->Position[1] + (float)(int)(short)uVar6;
    p_Var10->ModelId = (int)(short)uVar8;
    p_Var10->Rgba =
         (uint)bVar1 * 0x1000000 + (uint)bVar4 + (uint)bVar2 * 0x100 + (uint)bVar3 * 0x10000;
    p_Var10->Size = (float)(int)(short)uVar7;
    p_Var10->AlphaRate = (float)(int)(short)uVar5 / 100.0;
    p_Var10->Adjust = (float)(int)(short)uVar6;
    pvVar12 = SetEffects__Fiie(0x19,2);
    p_Var10 = SceneEneAuraCtrl.pDataLast;
    (SceneEneAuraCtrl.pDataLast)->pNext = (_SCENE_ENE_AURA_DATA *)0x0;
    p_Var10->pRet = pvVar12;
    iVar11 = 0;
  }
  return iVar11;
}

static void SceneEffectEneAuraCtrlExec() {
	SCENE_ENE_AURA_DATA *pData;
	
  bool bVar1;
  _SCENE_ENE_AURA_DATA *Position;
  int ModelId;
  
  bVar1 = SceneEneAuraCtrl.pDataTop != (_SCENE_ENE_AURA_DATA *)0x0;
  Position = SceneEneAuraCtrl.pDataTop;
  while (bVar1) {
    ModelId = SceneManModelNoChange__Fi(Position->ModelId);
    SceneGetModelPDeformPos__FPfif(Position->Position,ModelId,0.0);
    Position->Position[1] = Position->Position[1] + Position->Adjust;
    Position = Position->pNext;
    bVar1 = Position != (_SCENE_ENE_AURA_DATA *)0x0;
  }
  return;
}

static void SceneEffectHazeCtrlInit() {
  SingleLinkListInit__FP16SINGLE_LINK_LISTUi(&SceneHazeCtrl,0x50);
  return;
}

static void SceneEffectHazeCtrlDelete(int ModelId) {
	SLL_CELL *pCell;
	SINGLE_LINK_LIST *pSLL;
	
  _SLL_CELL *p_Var1;
  void *pvVar2;
  _SLL_CELL *pCell;
  
                    /* inlined from ../../common/SingleLinkList.h */
                    /* end of inlined section */
                    /* inlined from ../../common/SingleLinkList.h */
                    /* end of inlined section */
                    /* inlined from ../../common/SingleLinkList.h */
  p_Var1 = (_SLL_CELL *)0x0;
  if (SceneHazeCtrl.RegCount != 0) {
    p_Var1 = SceneHazeCtrl.pBeginCell;
  }
  do {
    pCell = p_Var1;
    if (pCell == (_SLL_CELL *)0x0) {
      return;
    }
                    /* end of inlined section */
    p_Var1 = pCell->pNext;
    pvVar2 = SingleLinkListCellBodyPtr__FPC9_SLL_CELL(pCell);
  } while (*(int *)((int)pvVar2 + 0x40) != ModelId);
  EffectSaeHazeCut__FPv(*(void **)((int)pvVar2 + 0x44));
  SingleLinkListRemove__FP16SINGLE_LINK_LISTP9_SLL_CELL(&SceneHazeCtrl,pCell);
  return;
}

static void SceneEffectHazeCtrlAllDelete() {
	SLL_CELL *pCell;
	SINGLE_LINK_LIST *pSLL;
	
  void *pvVar1;
  _SLL_CELL *pCell;
  _SLL_CELL *p_Var2;
  
                    /* inlined from ../../common/SingleLinkList.h */
                    /* end of inlined section */
                    /* inlined from ../../common/SingleLinkList.h */
                    /* end of inlined section */
                    /* inlined from ../../common/SingleLinkList.h */
  pCell = (_SLL_CELL *)0x0;
  if (SceneHazeCtrl.RegCount != 0) {
    pCell = SceneHazeCtrl.pBeginCell;
  }
                    /* end of inlined section */
  if (pCell != (_SLL_CELL *)0x0) {
                    /* inlined from ../../common/SingleLinkList.h */
    p_Var2 = (_SLL_CELL *)0x0;
    if (pCell != (_SLL_CELL *)0x0) {
      p_Var2 = pCell->pNext;
    }
    while( true ) {
                    /* end of inlined section */
      pvVar1 = SingleLinkListCellBodyPtr__FPC9_SLL_CELL(pCell);
      EffectSaeHazeCut__FPv(*(void **)((int)pvVar1 + 0x44));
      SingleLinkListRemove__FP16SINGLE_LINK_LISTP9_SLL_CELL(&SceneHazeCtrl,pCell);
      if (p_Var2 == (_SLL_CELL *)0x0) break;
      pCell = p_Var2;
      p_Var2 = p_Var2->pNext;
    }
  }
  return;
}

static int SceneEffectHazeRegist(SCENE_EFFECT_HAZE *pHaze) {
	SCENE_HAZE_DATA TmpData;
	SLL_CELL *pCell;
	int RetVal;
	SCENE_HAZE_DATA *pData;
	
  ushort uVar1;
  _SLL_CELL *pCell;
  float (*pCenterPos) [4];
  void *pvVar2;
  int iVar3;
  _SCENE_HAZE_DATA TmpData;
  
  iVar3 = -1;
  pCell = SingleLinkListAddEnd__FP16SINGLE_LINK_LISTPCv(&SceneHazeCtrl,&TmpData);
  if (pCell != (_SLL_CELL *)0x0) {
    iVar3 = 0;
    pCenterPos = (float (*) [4])SingleLinkListCellBodyPtr__FPC9_SLL_CELL(pCell);
    uVar1 = pHaze->ModelId;
    pCenterPos[4][0] = (float)(int)(short)uVar1;
    SceneManModelHipPositionGet__FPfi((float *)pCenterPos[1],(int)(short)uVar1);
    SceneManModelHipPositionGet__FPfi((float *)pCenterPos[2],(int)pCenterPos[4][0]);
    sceVu0AddVector(pCenterPos,pCenterPos[1],0x3c5ee0);
    pCenterPos[3][0] = 0.0;
    pCenterPos[3][1] = 0.0;
    pCenterPos[3][3] = 1.0;
    pCenterPos[3][2] = 0.0;
    pvVar2 = EffectSaeHazeReq__FPA3_fT0Pf(pCenterPos,pCenterPos[3],(float *)0x0);
    pCenterPos[4][1] = (float)pvVar2;
  }
  return iVar3;
}

static void SceneEffectHazeCtrlExec() {
	SLL_CELL *pCell;
	float RotX;
	SINGLE_LINK_LIST *pSLL;
	SCENE_HAZE_DATA *pHaze;
	
  _SLL_CELL *pCell;
  _SLL_CELL *p_Var1;
  void *pvVar2;
  int iVar3;
  undefined8 *HipPos;
  float *v1;
  float fVar4;
  float RotX;
  
                    /* inlined from ../../common/SingleLinkList.h */
                    /* end of inlined section */
                    /* inlined from ../../common/SingleLinkList.h */
                    /* end of inlined section */
                    /* inlined from ../../common/SingleLinkList.h */
                    /* end of inlined section */
                    /* inlined from ../../common/SingleLinkList.h */
  p_Var1 = (_SLL_CELL *)0x0;
  if (SceneHazeCtrl.RegCount != 0) {
    p_Var1 = SceneHazeCtrl.pBeginCell;
  }
                    /* end of inlined section */
  while (pCell = p_Var1, pCell != (_SLL_CELL *)0x0) {
    pvVar2 = SingleLinkListCellBodyPtr__FPC9_SLL_CELL(pCell);
                    /* inlined from ../graph3d/g3dxVu0.h */
    v1 = (float *)((int)pvVar2 + 0x20);
    HipPos = (undefined8 *)((int)pvVar2 + 0x10);
    *v1 = (float)*HipPos;
    *(int *)((int)pvVar2 + 0x24) = (int)((ulong)*HipPos >> 0x20);
    *(undefined4 *)((int)pvVar2 + 0x28) = *(undefined4 *)((int)pvVar2 + 0x18);
    *(undefined4 *)((int)pvVar2 + 0x2c) = *(undefined4 *)((int)pvVar2 + 0x1c);
                    /* end of inlined section */
    SceneManModelHipPositionGet__FPfi((float *)HipPos,*(int *)((int)pvVar2 + 0x40));
    sceVu0AddVector(pvVar2,HipPos,0x3c5ee0);
    fVar4 = Get2PLength__FPCfT0(v1,(float *)HipPos);
    iVar3 = dpcmp((long)(double)fVar4,DAT_003c5e50);
    if (0 < iVar3) {
      Get2PosRot__FPCfT0PfT2(v1,(float *)HipPos,&RotX,(float *)((int)pvVar2 + 0x34));
    }
                    /* inlined from ../../common/SingleLinkList.h */
    p_Var1 = (_SLL_CELL *)0x0;
    if (pCell != (_SLL_CELL *)0x0) {
      p_Var1 = pCell->pNext;
    }
  }
  return;
}

static void SceneEffectVibrationCtrlInit() {
  SceneVibrationCtrl.pDataLast = (_SCENE_VIBRATION_DATA *)0x0;
  SceneVibrationCtrl.pDataTop = (_SCENE_VIBRATION_DATA *)0x0;
  return;
}

static void SceneEffectVibrationCtrlAllDelete() {
	SCENE_VIBRATION_DATA *pData;
	SCENE_VIBRATION_DATA *pDataNext;
	
  bool bVar1;
  _SCENE_VIBRATION_DATA *p_Var2;
  _SCENE_VIBRATION_DATA *ap;
  _HEAP_WRK *wrk;
  
  bVar1 = SceneVibrationCtrl.pDataTop != (_SCENE_VIBRATION_DATA *)0x0;
  ap = SceneVibrationCtrl.pDataTop;
  while (bVar1) {
    p_Var2 = ap->pNext;
    if (ap != (_SCENE_VIBRATION_DATA *)0x0) {
      wrk = GetSystemHeapWrkP__Fv();
      heapCtrlFree(wrk,ap);
    }
    bVar1 = p_Var2 != (_SCENE_VIBRATION_DATA *)0x0;
    ap = p_Var2;
  }
  SceneEffectVibrationCtrlInit__Fv();
  return;
}

static int SceneEffectVibrationRegist(SCENE_EFFECT_VIBRATION2 *pVibration, int Frame) {
	SCENE_VIBRATION_CTRL *pCtrl;
	SCENE_VIBRATION_DATA *pMalloc;
	
  ushort uVar1;
  _SCENE_VIBRATION_DATA *p_Var2;
  _HEAP_WRK *wrk;
  _SCENE_VIBRATION_DATA *p_Var3;
  int iVar4;
  
  wrk = GetSystemHeapWrkP__Fv();
  p_Var3 = (_SCENE_VIBRATION_DATA *)SAFE_MALLOC(wrk,(void *)0x0,0x18);
  iVar4 = -1;
  if (p_Var3 != (_SCENE_VIBRATION_DATA *)0x0) {
    p_Var2 = p_Var3;
    if (SceneVibrationCtrl.pDataLast != (_SCENE_VIBRATION_DATA *)0x0) {
      (SceneVibrationCtrl.pDataLast)->pNext = p_Var3;
      p_Var2 = SceneVibrationCtrl.pDataTop;
    }
    SceneVibrationCtrl.pDataTop = p_Var2;
    iVar4 = 0;
    SceneVibrationCtrl.pDataLast = p_Var3;
    p_Var3->StartFrame = pVibration->StartTime;
    p_Var3->pNext = (_SCENE_VIBRATION_DATA *)0x0;
    p_Var3->EndFrame = pVibration->EndTime;
    p_Var3->BlankTime = pVibration->BlankTime;
    p_Var3->VibrateTime = pVibration->VibrateTime;
    p_Var3->Power = pVibration->Power;
    uVar1 = pVibration->BlankTime;
    p_Var3->ActuaterNo = pVibration->ActuaterNo;
    p_Var3->BlankCount = (int)(short)uVar1;
    p_Var3->VibrateCount = (int)(short)pVibration->VibrateTime;
  }
  return iVar4;
}

static void SceneEffectVibrationCtrlExec(int NowFrame) {
	SCENE_VIBRATION_DATA *pData;
	
  ushort uVar1;
  int iVar2;
  _SCENE_VIBRATION_DATA *p_Var3;
  
  if (SceneVibrationCtrl.pDataTop != (_SCENE_VIBRATION_DATA *)0x0) {
    uVar1 = (SceneVibrationCtrl.pDataTop)->StartFrame;
    p_Var3 = SceneVibrationCtrl.pDataTop;
    while( true ) {
      if ((long)NowFrame < (long)(short)uVar1) {
        p_Var3 = p_Var3->pNext;
      }
      else if ((long)NowFrame < (long)(short)p_Var3->EndFrame) {
        if (p_Var3->VibrateCount == 0) {
          if (p_Var3->BlankCount == 0) {
            p_Var3->VibrateCount = (int)(short)p_Var3->VibrateTime;
            p_Var3->BlankCount = (int)(short)p_Var3->BlankTime;
          }
          else {
            p_Var3->BlankCount = p_Var3->BlankCount + -1;
          }
        }
        else {
          if (p_Var3->ActuaterNo == 0) {
            VibrateRequest1__FUsUs(0,1);
            iVar2 = p_Var3->VibrateCount;
          }
          else {
            VibrateRequest2__FUsUs(0,p_Var3->Power);
            iVar2 = p_Var3->VibrateCount;
          }
          p_Var3->VibrateCount = iVar2 + -1;
        }
        p_Var3 = p_Var3->pNext;
      }
      else {
        p_Var3 = p_Var3->pNext;
      }
      if (p_Var3 == (_SCENE_VIBRATION_DATA *)0x0) break;
      uVar1 = p_Var3->StartFrame;
    }
  }
  return;
}

static void SceneEffectVibrationExecPAL(int NowFrame) {
	SCENE_VIBRATION_DATA *pData;
	
  ushort uVar1;
  _SCENE_VIBRATION_DATA *p_Var2;
  
  if (SceneVibrationCtrl.pDataTop != (_SCENE_VIBRATION_DATA *)0x0) {
    uVar1 = (SceneVibrationCtrl.pDataTop)->StartFrame;
    p_Var2 = SceneVibrationCtrl.pDataTop;
    while( true ) {
      if ((long)NowFrame < (long)(short)uVar1) {
        p_Var2 = p_Var2->pNext;
      }
      else if ((long)NowFrame < (long)(short)p_Var2->EndFrame) {
        if (p_Var2->VibrateCount == 0) {
          p_Var2 = p_Var2->pNext;
        }
        else if (p_Var2->ActuaterNo == 0) {
          VibrateRequest1__FUsUs(0,1);
          p_Var2 = p_Var2->pNext;
        }
        else {
          VibrateRequest2__FUsUs(0,p_Var2->Power);
          p_Var2 = p_Var2->pNext;
        }
      }
      else {
        p_Var2 = p_Var2->pNext;
      }
      if (p_Var2 == (_SCENE_VIBRATION_DATA *)0x0) break;
      uVar1 = p_Var2->StartFrame;
    }
  }
  return;
}

static void SceneEffectVibrationCountPAL(int NowFrame) {
	SCENE_VIBRATION_DATA *pData;
	
  ushort uVar1;
  int iVar2;
  _SCENE_VIBRATION_DATA *p_Var3;
  
  if (SceneVibrationCtrl.pDataTop != (_SCENE_VIBRATION_DATA *)0x0) {
    uVar1 = (SceneVibrationCtrl.pDataTop)->StartFrame;
    p_Var3 = SceneVibrationCtrl.pDataTop;
    while( true ) {
      if ((long)NowFrame < (long)(short)uVar1) {
        p_Var3 = p_Var3->pNext;
      }
      else if ((long)NowFrame < (long)(short)p_Var3->EndFrame) {
        if (p_Var3->VibrateCount == 0) {
          iVar2 = p_Var3->BlankCount + -1;
          if (p_Var3->BlankCount == 0) {
            iVar2 = (int)(short)p_Var3->BlankTime;
            p_Var3->VibrateCount = (int)(short)p_Var3->VibrateTime;
          }
          p_Var3->BlankCount = iVar2;
        }
        else {
          p_Var3->VibrateCount = p_Var3->VibrateCount + -1;
        }
        p_Var3 = p_Var3->pNext;
      }
      else {
        p_Var3 = p_Var3->pNext;
      }
      if (p_Var3 == (_SCENE_VIBRATION_DATA *)0x0) break;
      uVar1 = p_Var3->StartFrame;
    }
  }
  return;
}

static void SceneTorchCtrlInit() {
  SingleLinkListInit__FP16SINGLE_LINK_LISTUi(&SceneTorchCtrl,0x20);
  return;
}

static void SceneTorchCtrlRegistAndReq(SCENE_EFFECT_TORCH_DATA *pData, int TorchType) {
	SLL_CELL *pCell;
	SCENE_EFFECT_TORCH_DATA *pTorch;
	
  _SLL_CELL *pCell;
  float (*pPosition) [4];
  void *pvVar1;
  
  pCell = SingleLinkListAddEnd__FP16SINGLE_LINK_LISTPCv(&SceneTorchCtrl,pData);
  if (pCell != (_SLL_CELL *)0x0) {
    pPosition = (float (*) [4])SingleLinkListCellBodyPtr__FPC9_SLL_CELL(pCell);
    pvVar1 = EffectSetTorch2NoSE__FPA3_fi(pPosition,TorchType);
    pPosition[1][0] = (float)pvVar1;
  }
  return;
}

static void SceneTorchCtrlAllDelete() {
	SLL_CELL *pCell;
	SINGLE_LINK_LIST *pSLL;
	
  void *pvVar1;
  _SLL_CELL *pCell;
  _SLL_CELL *p_Var2;
  
                    /* inlined from ../../common/SingleLinkList.h */
                    /* end of inlined section */
                    /* inlined from ../../common/SingleLinkList.h */
                    /* end of inlined section */
                    /* inlined from ../../common/SingleLinkList.h */
  pCell = (_SLL_CELL *)0x0;
  if (SceneTorchCtrl.RegCount != 0) {
    pCell = SceneTorchCtrl.pBeginCell;
  }
                    /* end of inlined section */
  if (pCell != (_SLL_CELL *)0x0) {
                    /* inlined from ../../common/SingleLinkList.h */
    p_Var2 = (_SLL_CELL *)0x0;
    if (pCell != (_SLL_CELL *)0x0) {
      p_Var2 = pCell->pNext;
    }
    while( true ) {
                    /* end of inlined section */
      pvVar1 = SingleLinkListCellBodyPtr__FPC9_SLL_CELL(pCell);
      EffectResetTorch2__FPv(*(void **)((int)pvVar1 + 0x10));
      SingleLinkListRemove__FP16SINGLE_LINK_LISTP9_SLL_CELL(&SceneTorchCtrl,pCell);
      if (p_Var2 == (_SLL_CELL *)0x0) break;
      pCell = p_Var2;
      p_Var2 = p_Var2->pNext;
    }
  }
  return;
}

static void SceneTorchCtrlExec() {
	SLL_CELL *pCell;
	SINGLE_LINK_LIST *pSLL;
	SCENE_EFFECT_TORCH_DATA *pTorch;
	
  _SLL_CELL *pCell;
  _SLL_CELL *p_Var1;
  float *p0;
  
                    /* inlined from ../../common/SingleLinkList.h */
                    /* end of inlined section */
                    /* inlined from ../../common/SingleLinkList.h */
                    /* end of inlined section */
                    /* inlined from ../../common/SingleLinkList.h */
  p_Var1 = (_SLL_CELL *)0x0;
  if (SceneTorchCtrl.RegCount != 0) {
    p_Var1 = SceneTorchCtrl.pBeginCell;
  }
                    /* end of inlined section */
  while (pCell = p_Var1, pCell != (_SLL_CELL *)0x0) {
    p0 = (float *)SingleLinkListCellBodyPtr__FPC9_SLL_CELL(pCell);
    motGetBukiUpPos__FPfP8ANI_CTRL(p0,(ANI_CTRL *)p0[5]);
                    /* inlined from ../../common/SingleLinkList.h */
    p_Var1 = (_SLL_CELL *)0x0;
    if (pCell != (_SLL_CELL *)0x0) {
      p_Var1 = pCell->pNext;
    }
  }
  return;
}

void SceneMovieEffectMain(int NowFrame, u_int *pDataAddr) {
	int ExecutedFrame;
	int i;
	
  int iVar1;
  int iVar2;
  
  iVar2 = SceneEffectCtrl.ExecutedFrame;
  if (pDataAddr != (uint *)0x0) {
    iVar1 = GetPALMode__Fv();
    iVar2 = iVar2 + 1;
    if (iVar1 != 0) {
      NowFrame = (int)((float)NowFrame * DAT_003ee840);
    }
    for (; iVar2 <= NowFrame; iVar2 = iVar2 + 1) {
      SceneEffectReq__FPsi((ushort *)pDataAddr,iVar2);
      SceneEffectVibrationReq__FPsi((ushort *)pDataAddr,iVar2);
      SceneEffectVibrationCountPAL__Fi(iVar2);
    }
    SceneEffectVibrationExecPAL__Fi(NowFrame);
    SceneEffectCtrl.ExecutedFrame = NowFrame;
  }
  return;
}

SCN_ANM_MDL* SCN_ANM_MDL * _fixed_array_verifyrange<SCN_ANM_MDL>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_574);
  return (type_info *)v;
}

type_info& SCN_ANM_MDL type_info function() {
  g3ddbgAssert__FbPCce(false,str_574);
  return (type_info *)v;
}
