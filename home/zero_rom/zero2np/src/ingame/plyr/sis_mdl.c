// STATUS: NOT STARTED

#include "sis_mdl.h"

struct SIS_DATA : MAN_DATA {
private:
	unsigned int plyr_ready_sort : 1;
	unsigned int ane_alg_req : 1;
	int ane_alg_adrs;
	
public:
	SIS_DATA& operator=();
	SIS_DATA();
	SIS_DATA();
	/* vtable[1] */ virtual int Setup(int mdl_no, int anm_no, int bd_no, int smdl_no, int iAcsNo);
	/* vtable[2] */ virtual int IsReady();
	void Release();
	void* GetAlgAdrs();
	void Initialize();
private:
	void Init();
};

static SIS_DATA sis_data;
static int ltd_mode;
static int same_priority_count;
static LOOK_TARGET_PRIORITY_MAYU sis_neck_now_priority;
static LOOK_TARGET_PRIORITY_MAYU pre_priority;
static LOOK_AT_PARAM sis_neck_now_param;
static float sis_neck_now_dist;
static int sis_neck_flg;
static int sis_neck_no_registered_cnt;

__vtbl_ptr_type SIS_DATA virtual table[4] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ 0x2b91b0,
		/* .__delta2 = */ -28240
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ 0x2b9200,
		/* .__delta2 = */ -28160
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ 0x2b92c0,
		/* .__delta2 = */ -27968
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

unsigned char SIS_DATA type_info node[12];
unsigned char MAN_DATA type_info node[8];

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3c6ef8;
	
  int mdl_p;
  int anm_p;
  int smdl_p;
  
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)this;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf8MAN_DATA((SIS_DATA *)s_void__003f4350);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf8MAN_DATA((SIS_DATA *)s_char__003f4358);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf8MAN_DATA((SIS_DATA *)"unsigned int*");
  }
  return (uint **)0x0;
}

void sis_mdlInit() {
  SisNeckInit__Fv();
  InitializeIn__8MAN_DATA(&sis_data.field0_0x0);
  sis_data.ane_alg_adrs = 0;
  sis_data._48_4_ = sis_data._48_4_ & 0xfffffffc;
  return;
}

void SisterDrawLock() {
                    /* inlined from man_data.h */
  sis_data.field0_0x0.man_data_draw_lock_cnt = sis_data.field0_0x0.man_data_draw_lock_cnt + 1;
  return;
}

void SisterDrawUnlock() {
                    /* inlined from man_data.h */
  sis_data.field0_0x0.man_data_draw_lock_cnt = sis_data.field0_0x0.man_data_draw_lock_cnt + -1;
  return;
}

int SisterIsLocked() {
                    /* inlined from man_data.h */
                    /* end of inlined section */
                    /* inlined from man_data.h */
  if (sis_data.field0_0x0.man_data_draw_lock_cnt < 0) {
    printf("<<<<<<<<<WARNING FILE[%s] LINE[%d]>>>>>>>>>>\n");
    PrintWarningReal("man_data_draw_lock_cnt < 0");
  }
  return (int)(sis_data.field0_0x0.man_data_draw_lock_cnt != 0);
}

void* sis_mdlGetAlgAdrs() {
  return (void *)sis_data.ane_alg_adrs;
}

void sis_mdlSetSave(MC_SAVE_DATA *data) {
  data->size = 4;
  data->addr = (uchar *)&sis_data;
  return;
}

void SetupSisMdl() {
	int mdl_no;
	int iAcsNo;
	
  int mdl_no;
  int iAcsNo;
  
  mdl_no = GetSisterMdlNo__Fv();
  iAcsNo = GetSisterAcsNo__Fv();
  if ((sis_data._48_4_ & 2) == 0) {
    Req__7OL_LOADi(&ol_load,0x12e);
    sis_data._48_4_ = sis_data._48_4_ | 2;
  }
  SetupIn__8MAN_DATAiiiii(&sis_data.field0_0x0,mdl_no,4,0xc75,0x10,iAcsNo);
  return;
}

int IsReadySisMdl() {
	int mdl_p;
	int anm_p;
	int smdl_p;
	int ret;
	
  OL_LOAD_READY OVar1;
  OL_LOAD_READY OVar2;
  int mdl_p;
  int anm_p;
  int smdl_p;
  
  OVar1 = ReadyIn__8MAN_DATAPiN21(&sis_data.field0_0x0,&mdl_p,&anm_p,&smdl_p);
  OVar2 = IsReady__7OL_LOADiPi(&ol_load,0x12e,&sis_data.ane_alg_adrs);
  if (((OVar1 & OVar2) != OL_LOAD_READY_NOT_READY) &&
     (InitIn__8MAN_DATAiii(&sis_data.field0_0x0,mdl_p,anm_p,smdl_p), (sis_data._48_4_ & 1) == 0)) {
    ChrSortRegistSis__Fv();
                    /* inlined from man_data.h */
                    /* end of inlined section */
                    /* inlined from man_data.h */
    sis_wrk.anime_no = *(uchar *)&((sis_data.field0_0x0.mpAniCtrl)->anm).playnum;
                    /* end of inlined section */
    sis_data._48_4_ = sis_data._48_4_ | 1;
                    /* inlined from man_data.h */
                    /* end of inlined section */
  }
  return OVar1 & OVar2;
}

void ReleaseSisMdl() {
  if ((sis_data._48_4_ & 1) != 0) {
    ChrSortDelete__Fi(0);
    sis_data._48_4_ = sis_data._48_4_ & 0xfffffffe;
  }
  if ((sis_data._48_4_ & 2) != 0) {
    Clear__7OL_LOADi(&ol_load,0x12e);
    sis_data._48_4_ = sis_data._48_4_ & 0xfffffffd;
  }
  ReleaseIn__8MAN_DATA(&sis_data.field0_0x0);
  return;
}

void sis_mdlMotionWork() {
  int iVar1;
  
  iVar1 = IsReadySisMdl__Fv();
  if ((iVar1 != 0) && (iVar1 = IsSisWrk__Fv(), iVar1 != 0)) {
    SisNeckMain__Fv();
    sisterAnimationProc__Fv();
  }
  return;
}

int sis_mdlBankPlay(int no, int effect, int loop, int fade_time, SND_3D_SET *s3d, int vol, int pitch) {
	static char __FUNCTION__[16] = {
		/* [0] = */ 115,
		/* [1] = */ 105,
		/* [2] = */ 115,
		/* [3] = */ 95,
		/* [4] = */ 109,
		/* [5] = */ 100,
		/* [6] = */ 108,
		/* [7] = */ 66,
		/* [8] = */ 97,
		/* [9] = */ 110,
		/* [10] = */ 107,
		/* [11] = */ 80,
		/* [12] = */ 108,
		/* [13] = */ 97,
		/* [14] = */ 121,
		/* [15] = */ 0
	};
	
  int iVar1;
  
                    /* inlined from man_data.h */
                    /* end of inlined section */
                    /* inlined from man_data.h */
                    /* end of inlined section */
                    /* inlined from man_data.h */
                    /* end of inlined section */
                    /* inlined from man_data.h */
                    /* end of inlined section */
                    /* inlined from man_data.h */
                    /* end of inlined section */
                    /* inlined from man_data.h */
                    /* end of inlined section */
                    /* inlined from man_data.h */
  if (sis_data.field0_0x0.man_data_bank_no != -1) {
    iVar1 = SndBankPlay(sis_data.field0_0x0.man_data_bank_no,no,effect,loop,vol,pitch,fade_time,s3d)
    ;
    return iVar1;
  }
                    /* end of inlined section */
  SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
  PrintAssertReal("sis_bank_id is Illegal");
  return 0x300000;
}

int sis_mdlBankIsLoopSnd(int no) {
	static char __FUNCTION__[21] = {
		/* [0] = */ 115,
		/* [1] = */ 105,
		/* [2] = */ 115,
		/* [3] = */ 95,
		/* [4] = */ 109,
		/* [5] = */ 100,
		/* [6] = */ 108,
		/* [7] = */ 66,
		/* [8] = */ 97,
		/* [9] = */ 110,
		/* [10] = */ 107,
		/* [11] = */ 73,
		/* [12] = */ 115,
		/* [13] = */ 76,
		/* [14] = */ 111,
		/* [15] = */ 111,
		/* [16] = */ 112,
		/* [17] = */ 83,
		/* [18] = */ 110,
		/* [19] = */ 100,
		/* [20] = */ 0
	};
	
  int iVar1;
  
                    /* inlined from man_data.h */
                    /* end of inlined section */
                    /* inlined from man_data.h */
                    /* end of inlined section */
                    /* inlined from man_data.h */
  if (sis_data.field0_0x0.man_data_bank_no != -1) {
    iVar1 = SndBankIsLoopSnd(sis_data.field0_0x0.man_data_bank_no,no);
    return iVar1;
  }
                    /* end of inlined section */
  SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
  PrintAssertReal("sis_bank_id is Illegal");
  return 0;
}

short unsigned int GetSisterFtype() {
                    /* inlined from man_data.h */
  return (sis_data.field0_0x0.mpAniCtrl)->ftype;
}

void ReqSisterMim(int no, int rev) {
                    /* inlined from man_data.h */
                    /* end of inlined section */
                    /* inlined from man_data.h */
                    /* end of inlined section */
  if (sis_data.field0_0x0.mpAniCtrl != (ANI_CTRL *)0x0) {
    mimRequestNum__FP8ANI_CTRLiUc(sis_data.field0_0x0.mpAniCtrl,no,(uchar)rev);
  }
  return;
}

void ReqSisterMimContinue(int no, int rev) {
                    /* inlined from man_data.h */
                    /* end of inlined section */
                    /* inlined from man_data.h */
                    /* end of inlined section */
  if (sis_data.field0_0x0.mpAniCtrl != (ANI_CTRL *)0x0) {
    mimRequestNumContinue__FP8ANI_CTRLiUc(sis_data.field0_0x0.mpAniCtrl,no,(uchar)rev);
  }
  return;
}

void StopSisterMim(int no) {
                    /* inlined from man_data.h */
                    /* end of inlined section */
                    /* inlined from man_data.h */
                    /* end of inlined section */
  if (sis_data.field0_0x0.mpAniCtrl != (ANI_CTRL *)0x0) {
    mimStopNum__FP8ANI_CTRLi(sis_data.field0_0x0.mpAniCtrl,no);
  }
  return;
}

int IsSisterMimParts(int no) {
  int iVar1;
  
  iVar1 = mimIsUseParts__FP8ANI_CTRLi(sis_data.field0_0x0.mpAniCtrl,no);
  return (int)(iVar1 != 0);
}

void ReqSisterAnime(u_char flame) {
	static char __FUNCTION__[15] = {
		/* [0] = */ 82,
		/* [1] = */ 101,
		/* [2] = */ 113,
		/* [3] = */ 83,
		/* [4] = */ 105,
		/* [5] = */ 115,
		/* [6] = */ 116,
		/* [7] = */ 101,
		/* [8] = */ 114,
		/* [9] = */ 65,
		/* [10] = */ 110,
		/* [11] = */ 105,
		/* [12] = */ 109,
		/* [13] = */ 101,
		/* [14] = */ 0
	};
	
                    /* inlined from man_data.h */
                    /* end of inlined section */
                    /* inlined from man_data.h */
                    /* end of inlined section */
                    /* inlined from man_data.h */
  if (sis_data.field0_0x0.mpAniCtrl == (ANI_CTRL *)0x0) {
                    /* end of inlined section */
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("SisAniCtrl Is NULL");
    return;
  }
                    /* inlined from man_data.h */
                    /* end of inlined section */
                    /* inlined from man_data.h */
  if ((uint)sis_wrk.anime_no == ((sis_data.field0_0x0.mpAniCtrl)->anm).playnum) {
                    /* end of inlined section */
    printf("The same anime is requested. In ReqSisterAnime!!!!!!!!\n");
    return;
  }
  mimInitLoop__FP8ANI_CTRL(sis_data.field0_0x0.mpAniCtrl);
  motSetAnime__FP8ANI_CTRLPPUsi(sis_data.field0_0x0.mpAniCtrl,anm_tbl[4].ani,(uint)sis_wrk.anime_no)
  ;
  motInitInterpAnime__FP8ANI_CTRLi(sis_data.field0_0x0.mpAniCtrl,(uint)flame);
  return;
}

void sisterAnimationProc() {
	static char __FUNCTION__[20] = {
		/* [0] = */ 115,
		/* [1] = */ 105,
		/* [2] = */ 115,
		/* [3] = */ 116,
		/* [4] = */ 101,
		/* [5] = */ 114,
		/* [6] = */ 65,
		/* [7] = */ 110,
		/* [8] = */ 105,
		/* [9] = */ 109,
		/* [10] = */ 97,
		/* [11] = */ 116,
		/* [12] = */ 105,
		/* [13] = */ 111,
		/* [14] = */ 110,
		/* [15] = */ 80,
		/* [16] = */ 114,
		/* [17] = */ 111,
		/* [18] = */ 99,
		/* [19] = */ 0
	};
	
  ANI_CTRL *pAVar1;
  uchar uVar2;
  uint uVar3;
  _LOOK_AT_PARAM *param;
  int iVar4;
  
  uVar2 = motSetCoord__FP8ANI_CTRLUcUc(sis_data.field0_0x0.mpAniCtrl,0xff,'\0');
  pAVar1 = sis_data.field0_0x0.mpAniCtrl;
  if (uVar2 == '\x01') {
    iVar4 = 0x2000;
  }
  else {
    if (uVar2 != '\x02') goto LAB_0025b178;
    iVar4 = 0x4000;
  }
  sis_wrk.cmn_wrk.st.sta = sis_wrk.cmn_wrk.st.sta | (long)iVar4;
LAB_0025b178:
  uVar3 = motGetNowFrame__FP8MOT_CTRL(&(sis_data.field0_0x0.mpAniCtrl)->mot);
  movGetMoveval__FPfT0P8ANI_CTRLUif(sis_wrk.spd,sis_wrk.old_spd,pAVar1,uVar3 >> 1,0.0);
  mimSetVertex__FP8ANI_CTRL(sis_data.field0_0x0.mpAniCtrl);
                    /* inlined from man_data.h */
  if ((sis_data.field0_0x0.mpAniCtrl)->base_p == (HeaderSection *)0x0) {
                    /* end of inlined section */
    printf("(int)(sis_data.GetAniCtrl()->mdl_no) = 0x%x\n");
    printf("(int)(sis_data.GetAniCtrl()->anm_no) = 0x%x\n");
    printf("(int)(sis_data.GetAniCtrl()->mdl_p) = 0x%x\n");
    printf("(int)(sis_data.GetAniCtrl()->anm_p) = 0x%x\n");
    printf("(int)(sis_data.GetAniCtrl()->pk2_p) = 0x%x\n");
    printf("(int)(sis_data.GetAniCtrl()->mpk_p) = 0x%x\n");
    printf("(int)(sis_data.GetAniCtrl()->mtop) = 0x%x\n");
    printf("(int)(sis_data.GetAniCtrl()->mdat) = 0x%x\n");
    printf("(int)(sis_data.GetAniCtrl()->mim) = 0x%x\n");
    printf("(int)(sis_data.GetAniCtrl()->wmim) = 0x%x\n");
    printf("(int)(sis_data.GetAniCtrl()->cloth_ctrl) = 0x%x\n");
    printf("(int)(sis_data.GetAniCtrl()->collision_ctrl) = 0x%x\n");
    printf("(int)(sis_data.GetAniCtrl()->pkt_p) = 0x%x\n");
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("sisAniCtrl->base_p is NULL");
  }
  SetRT2BaseMtx__FP8ANI_CTRLPfT1
            (sis_data.field0_0x0.mpAniCtrl,sis_wrk.cmn_wrk.mbox.pos,sis_wrk.cmn_wrk.mbox.rot);
  pAVar1 = sis_data.field0_0x0.mpAniCtrl;
  param = SisNeckGetParam__Fv();
  motLookAtCtrl__FP8ANI_CTRLP14_LOOK_AT_PARAM(pAVar1,param);
  SetCoordinate__FP8ANI_CTRLPfT1
            (sis_data.field0_0x0.mpAniCtrl,sis_wrk.cmn_wrk.mbox.pos,sis_wrk.cmn_wrk.mbox.rot);
  pAVar1 = sis_data.field0_0x0.mpAniCtrl;
  iVar4 = GetSisterMdlNo__Fv();
  GetMdlWaistPos__FPfP8ANI_CTRLUs(sis_wrk.bwp,pAVar1,(short)iVar4);
  pAVar1 = sis_data.field0_0x0.mpAniCtrl;
  iVar4 = GetSisterMdlNo__Fv();
  GetMdlNeckPos__FPfP8ANI_CTRLUs(sis_wrk.cmn_wrk.headpos,pAVar1,(short)iVar4);
  pAVar1 = sis_data.field0_0x0.mpAniCtrl;
  uVar3 = GetSisterMdlNo__Fv();
  acsClothCtrl__FP8ANI_CTRLPUiUiUc(pAVar1,pAVar1->mpk_p,uVar3,'\0');
  return;
}

static GRA3DEMULATIONLIGHTDATACREATIONDATA& _GetEmulationLightdataCreationDataRef() {
	static char __FUNCTION__[38] = {
		/* [0] = */ 95,
		/* [1] = */ 71,
		/* [2] = */ 101,
		/* [3] = */ 116,
		/* [4] = */ 69,
		/* [5] = */ 109,
		/* [6] = */ 117,
		/* [7] = */ 108,
		/* [8] = */ 97,
		/* [9] = */ 116,
		/* [10] = */ 105,
		/* [11] = */ 111,
		/* [12] = */ 110,
		/* [13] = */ 76,
		/* [14] = */ 105,
		/* [15] = */ 103,
		/* [16] = */ 104,
		/* [17] = */ 116,
		/* [18] = */ 100,
		/* [19] = */ 97,
		/* [20] = */ 116,
		/* [21] = */ 97,
		/* [22] = */ 67,
		/* [23] = */ 114,
		/* [24] = */ 101,
		/* [25] = */ 97,
		/* [26] = */ 116,
		/* [27] = */ 105,
		/* [28] = */ 111,
		/* [29] = */ 110,
		/* [30] = */ 68,
		/* [31] = */ 97,
		/* [32] = */ 116,
		/* [33] = */ 97,
		/* [34] = */ 82,
		/* [35] = */ 101,
		/* [36] = */ 102,
		/* [37] = */ 0
	};
	float rf_rate;
	static GRA3DEMULATIONLIGHTDATACREATIONDATA eldcd_MAYU;
	
  float fVar1;
  ANI_CTRL *pAVar2;
  undefined local_60 [12];
  uint uStack_54;
  undefined8 local_28;
  
  pAVar2 = sis_mdlGetANI_CTRL__Fv();
  fVar1 = debug_var.flrf_si_rate;
  if (pAVar2 != (ANI_CTRL *)0x0) {
    if (__tmp_10_1166 == 0) {
      memset(local_60,0,0x10);
      _DAT_004bc008 = (ulong)uStack_54 << 0x20;
      DAT_004bc010 = CONCAT44(0x3f000000,fVar1);
      DAT_004bc018 = (ulong)(uint)plyr_wrk.maplight_scale;
      DAT_004bc020 = 0x100000000;
      DAT_004bc028 = 0x100000001;
      DAT_004bc030 = 0x100000001;
      DAT_004bc038 = local_28;
      __tmp_10_1166 = 1;
    }
    pAVar2 = (ANI_CTRL *)&eldcd_MAYU_1165;
    _DAT_004bc008 = CONCAT44(DAT_004bc008_4,debug_var.sis_para_b);
    _eldcd_MAYU_1165 = CONCAT44(debug_var.sis_para_g,debug_var.sis_para_r);
  }
  return (GRA3DEMULATIONLIGHTDATACREATIONDATA *)pAVar2;
}

void DrawSister() {
	HeaderSection *hs;
	float work_amb[4];
	float avWorldBB[8][4];
	int mdl_p;
	int anm_p;
	int smdl_p;
	int ret;
	int iAlpha;
	
  SGDFILEHEADER *pSGDTop;
  int iVar1;
  OL_LOAD_READY OVar2;
  OL_LOAD_READY OVar3;
  float (*pafVar4) [4];
  GRA3DEMULATIONLIGHTDATACREATIONDATA *pData;
  int iVar5;
  int mdl_p;
  int anm_p;
  int smdl_p;
  float work_amb [4];
  float avWorldBB [8] [4];
  
  iVar1 = IsSisWrk__Fv();
  if (iVar1 != 0) {
                    /* inlined from man_data.h */
    if (sis_data.field0_0x0.man_data_draw_lock_cnt < 0) {
      printf("<<<<<<<<<WARNING FILE[%s] LINE[%d]>>>>>>>>>>\n");
      PrintWarningReal("man_data_draw_lock_cnt < 0");
    }
    if (sis_data.field0_0x0.man_data_draw_lock_cnt == 0) {
                    /* end of inlined section */
      OVar2 = ReadyIn__8MAN_DATAPiN21(&sis_data.field0_0x0,&mdl_p,&anm_p,&smdl_p);
      OVar3 = IsReady__7OL_LOADiPi(&ol_load,0x12e,&sis_data.ane_alg_adrs);
      if ((OVar2 & OVar3) != OL_LOAD_READY_NOT_READY) {
        InitIn__8MAN_DATAiii(&sis_data.field0_0x0,mdl_p,anm_p,smdl_p);
        if ((sis_data._48_4_ & 1) == 0) {
          ChrSortRegistSis__Fv();
                    /* inlined from man_data.h */
                    /* end of inlined section */
                    /* inlined from man_data.h */
          sis_wrk.anime_no = *(uchar *)&((sis_data.field0_0x0.mpAniCtrl)->anm).playnum;
                    /* end of inlined section */
          sis_data._48_4_ = sis_data._48_4_ | 1;
                    /* inlined from man_data.h */
                    /* end of inlined section */
        }
        if (((OVar2 & OVar3) != OL_LOAD_READY_NOT_READY) &&
           (iVar1 = GetSisDrawFLG__Fv(), iVar1 != 0)) {
                    /* inlined from man_data.h */
                    /* end of inlined section */
          pSGDTop = (SGDFILEHEADER *)(sis_data.field0_0x0.mpAniCtrl)->base_p;
          gra3dLightEnablePush__Fv();
                    /* inlined from ../../graphics/graph3d/g3dxVu0.h */
          pafVar4 = gra3dGetAmbientRef__Fv();
          work_amb[2] = (*pafVar4)[2];
          work_amb[3] = (*pafVar4)[3];
          work_amb[0] = (float)*(undefined8 *)*pafVar4;
          work_amb[1] = (float)((ulong)*(undefined8 *)*pafVar4 >> 0x20);
                    /* end of inlined section */
          charbbGet__FPA3_fPC8ANI_CTRLPA3_Cf
                    (avWorldBB,sis_data.field0_0x0.mpAniCtrl,
                     (float (*) [4])(sis_data.field0_0x0.mpAniCtrl)->base_p->coordp);
          iVar1 = CheckModelBoundingBox__FPA3_Cf(avWorldBB);
          if (iVar1 != 0) {
            pData = _GetEmulationLightdataCreationDataRef__Fv();
            playerSetLight__FPCfPC35GRA3DEMULATIONLIGHTDATACREATIONDATA(sis_wrk.bwp,pData);
            iVar5 = PlayerModeIsFinder__Fv();
            iVar1 = g_iMaxPlayerAlpha;
            if (iVar5 == 0) {
              iVar1 = playerCalcAlpha__FPC8ANI_CTRL(sis_data.field0_0x0.mpAniCtrl);
            }
            AccessoryDraw__8MAN_DATAi(&sis_data.field0_0x0,iVar1);
            iVar5 = gra3dIsMonotoneDrawEnable__Fv();
            if (iVar5 == 0) {
              SendEneVram__FPUii((sis_data.field0_0x0.mpAniCtrl)->mdl_p,0x2bc0);
            }
            else {
              SendEneVramMono__FPUiiT0
                        ((sis_data.field0_0x0.mpAniCtrl)->mdl_p,0x2bc0,
                         (sis_data.field0_0x0.mpAniCtrl)->bwc_p);
            }
            SendEneVram__FPUii((sis_data.field0_0x0.mpAniCtrl)->mdl_p,0x2bc0);
            ManmdlSetAlpha__FPvUc(pSGDTop,(uchar)iVar1);
            _gra3dDrawSGD__FP13SGDFILEHEADER13SGDRENDERTYPEP13SGDCOORDINATEi
                      (pSGDTop,SRT_REALTIME,(SGDCOORDINATE *)0x0,-1);
            DrawGirlSubObj__FPUiUc((sis_data.field0_0x0.mpAniCtrl)->mpk_p,(uchar)iVar1);
            _SetPREVIOUSTRI2PRIM__FP17SGDPROCUNITHEADER((SGDPROCUNITHEADER *)0x0);
          }
          gra3dSetAmbient__FPCf(work_amb);
          gra3dLightEnablePop__Fv();
        }
      }
    }
  }
  return;
}

static void SisNeckInit() {
  SetSisNeckFlg__Fi(1);
  ltd_mode = 0;
  same_priority_count = 0;
  SisNeckFrameInit__Fv();
  sis_neck_no_registered_cnt = 0;
  return;
}

static void SisNeckFrameInit() {
  sis_neck_now_priority = LTP_MAYU_LEAST;
  sis_neck_now_dist = DAT_003f439c;
  return;
}

int SisNeckRegisterTarget(LOOK_AT_PARAM *param, LOOK_TARGET_PRIORITY_MAYU priority, float fLimitDist) {
	float dist;
	float vSub[4];
	int mdl_p;
	int anm_p;
	int smdl_p;
	int ret;
	
  OL_LOAD_READY OVar1;
  OL_LOAD_READY OVar2;
  float vSub [4];
  int mdl_p;
  int anm_p;
  int smdl_p;
  
  OVar1 = ReadyIn__8MAN_DATAPiN21(&sis_data.field0_0x0,&mdl_p,&anm_p,&smdl_p);
  OVar2 = IsReady__7OL_LOADiPi(&ol_load,0x12e,&sis_data.ane_alg_adrs);
  if ((OVar1 & OVar2) != OL_LOAD_READY_NOT_READY) {
    InitIn__8MAN_DATAiii(&sis_data.field0_0x0,mdl_p,anm_p,smdl_p);
    if ((sis_data._48_4_ & 1) == 0) {
      ChrSortRegistSis__Fv();
                    /* inlined from man_data.h */
                    /* end of inlined section */
                    /* inlined from man_data.h */
      sis_wrk.anime_no = *(uchar *)&((sis_data.field0_0x0.mpAniCtrl)->anm).playnum;
                    /* end of inlined section */
      sis_data._48_4_ = sis_data._48_4_ | 1;
                    /* inlined from man_data.h */
                    /* end of inlined section */
    }
    if ((OVar1 & OVar2) != OL_LOAD_READY_NOT_READY) {
      sceVu0SubVector(vSub,0x34fd00,param);
                    /* WARNING: Subroutine does not return */
      sceVu0InnerProduct(vSub,vSub);
    }
  }
  return 0;
}

void SetSisNeckFlg(int flg) {
  sis_neck_flg = flg;
  return;
}

void DbgSisLookPointCtrl() {
  return;
}

static void SisNeckMain() {
  DbgSisLookPointCtrl__Fv();
  sis_neck_now_param.enable = sis_neck_flg;
  if (ltd_mode == 0) {
    if (pre_priority == sis_neck_now_priority) {
      same_priority_count = same_priority_count + 2;
    }
    else {
      same_priority_count = 0;
    }
    if (sis_neck_now_priority == LTP_MAYU_LEAST) {
      sis_neck_now_param.enable = 0;
      sis_neck_no_registered_cnt = sis_neck_no_registered_cnt + 2;
    }
    else {
      sis_neck_no_registered_cnt = 0;
    }
  }
  else if (ltd_mode == 1) {
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_relops.h */
                    /* end of inlined section */
    same_priority_count = same_priority_count + 2;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_relops.h */
    if (pre_priority == sis_neck_now_priority) {
      ltd_mode = (int)(same_priority_count < 0x709);
      printf("MAYU IS TIRED\n");
    }
    else {
                    /* end of inlined section */
      ltd_mode = 0;
    }
  }
  pre_priority = sis_neck_now_priority;
  SisNeckFrameInit__Fv();
  return;
}

static LOOK_AT_PARAM* SisNeckGetParam() {
  return &sis_neck_now_param;
}

ANI_CTRL* sis_mdlGetANI_CTRL() {
                    /* inlined from man_data.h */
  return sis_data.field0_0x0.mpAniCtrl;
}

ANI_CTRL* sis_mdlGetShadowANI_CTRL() {
                    /* inlined from man_data.h */
  return sis_data.field0_0x0.mpShadowAniCtrl;
}

void sis_mdlGetMATRIX(float *mtx[4], int bone_no) {
	HeaderSection *hs;
	SGDCOORDINATE *cp;
	int mdl_p;
	int anm_p;
	int smdl_p;
	int ret;
	float *pm1[4];
	
  SGDCOORDINATE *pSVar1;
  float afVar2 [4];
  float afVar3 [4];
  float afVar4 [4];
  float afVar5 [4];
  SGDCOORDINATE *pSVar6;
  OL_LOAD_READY OVar7;
  OL_LOAD_READY OVar8;
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined auVar11 [16];
  undefined auVar12 [16];
  int mdl_p;
  int anm_p;
  int smdl_p;
  
  OVar7 = ReadyIn__8MAN_DATAPiN21(&sis_data.field0_0x0,&mdl_p,&anm_p,&smdl_p);
  OVar8 = IsReady__7OL_LOADiPi(&ol_load,0x12e,&sis_data.ane_alg_adrs);
  if ((OVar7 & OVar8) != OL_LOAD_READY_NOT_READY) {
    InitIn__8MAN_DATAiii(&sis_data.field0_0x0,mdl_p,anm_p,smdl_p);
    if ((sis_data._48_4_ & 1) == 0) {
      ChrSortRegistSis__Fv();
                    /* inlined from man_data.h */
                    /* end of inlined section */
                    /* inlined from man_data.h */
      sis_wrk.anime_no = *(uchar *)&((sis_data.field0_0x0.mpAniCtrl)->anm).playnum;
                    /* end of inlined section */
      sis_data._48_4_ = sis_data._48_4_ | 1;
                    /* inlined from man_data.h */
                    /* end of inlined section */
    }
    if ((OVar7 & OVar8) != OL_LOAD_READY_NOT_READY) {
                    /* inlined from ../../graphics/graph3d/g3dxVu0.h */
                    /* inlined from man_data.h */
                    /* inlined from ../../graphics/graph3d/g3dxVu0.h */
                    /* inlined from man_data.h */
                    /* end of inlined section */
      pSVar1 = (sis_data.field0_0x0.mpAniCtrl)->base_p->coordp;
                    /* inlined from ../../graphics/graph3d/g3dxVu0.h */
      pSVar6 = pSVar1 + bone_no;
      afVar5[0] = *(float *)((int)pSVar6->matLocalWorld[0] + 0);
      afVar5[1] = *(float *)((int)pSVar6->matLocalWorld[0] + 4);
      afVar5[2] = *(float *)((int)pSVar6->matLocalWorld[0] + 8);
      afVar5[3] = *(float *)((int)pSVar6->matLocalWorld[0] + 0xc);
      auVar9 = _lqc2((undefined  [16])afVar5);
      pSVar6 = pSVar1 + bone_no;
      afVar2[0] = *(float *)((int)pSVar6->matLocalWorld[1] + 0);
      afVar2[1] = *(float *)((int)pSVar6->matLocalWorld[1] + 4);
      afVar2[2] = *(float *)((int)pSVar6->matLocalWorld[1] + 8);
      afVar2[3] = *(float *)((int)pSVar6->matLocalWorld[1] + 0xc);
      auVar10 = _lqc2((undefined  [16])afVar2);
      pSVar6 = pSVar1 + bone_no;
      afVar3[0] = *(float *)((int)pSVar6->matLocalWorld[2] + 0);
      afVar3[1] = *(float *)((int)pSVar6->matLocalWorld[2] + 4);
      afVar3[2] = *(float *)((int)pSVar6->matLocalWorld[2] + 8);
      afVar3[3] = *(float *)((int)pSVar6->matLocalWorld[2] + 0xc);
      auVar11 = _lqc2((undefined  [16])afVar3);
      pSVar1 = pSVar1 + bone_no;
      afVar4[0] = *(float *)((int)pSVar1->matLocalWorld[3] + 0);
      afVar4[1] = *(float *)((int)pSVar1->matLocalWorld[3] + 4);
      afVar4[2] = *(float *)((int)pSVar1->matLocalWorld[3] + 8);
      afVar4[3] = *(float *)((int)pSVar1->matLocalWorld[3] + 0xc);
      auVar12 = _lqc2((undefined  [16])afVar4);
      afVar5 = (float  [4])_sqc2(auVar9);
      *mtx = afVar5;
      afVar5 = (float  [4])_sqc2(auVar10);
      mtx[1] = afVar5;
      afVar5 = (float  [4])_sqc2(auVar11);
      mtx[2] = afVar5;
      afVar5 = (float  [4])_sqc2(auVar12);
      mtx[3] = afVar5;
    }
  }
                    /* end of inlined section */
  return;
}

void sisterDrawShadow() {
	static char __FUNCTION__[17] = {
		/* [0] = */ 115,
		/* [1] = */ 105,
		/* [2] = */ 115,
		/* [3] = */ 116,
		/* [4] = */ 101,
		/* [5] = */ 114,
		/* [6] = */ 68,
		/* [7] = */ 114,
		/* [8] = */ 97,
		/* [9] = */ 119,
		/* [10] = */ 83,
		/* [11] = */ 104,
		/* [12] = */ 97,
		/* [13] = */ 100,
		/* [14] = */ 111,
		/* [15] = */ 119,
		/* [16] = */ 0
	};
	ANI_CTRL *pAC;
	float avBBWorld[8][4];
	SGDCOORDINATE *pCoord;
	
  char cVar1;
  ANI_CTRL *pAVar2;
  SGDCOORDINATE *pSVar3;
  int iVar4;
  GRA3DEMULATIONLIGHTDATACREATIONDATA *pELDCD;
  HeaderSection *pHVar5;
  float avBBWorld [8] [4];
  
  pAVar2 = sis_mdlGetANI_CTRL__Fv();
  if (pAVar2 != (ANI_CTRL *)0x0) {
    pHVar5 = pAVar2->base_p;
    if (pHVar5 == (HeaderSection *)0x0) {
      _SetLineInfo__FPCciT0T0("sis_mdl.c",0x314,"sisterDrawShadow","pAC->base_p");
      g3ddbgAssert__FbPCce(pAVar2->base_p != (HeaderSection *)0x0,&DAT_003f4398);
      pHVar5 = pAVar2->base_p;
      pSVar3 = pHVar5->coordp;
    }
    else {
      pSVar3 = pHVar5->coordp;
    }
    if (pSVar3 == (SGDCOORDINATE *)0x0) {
      _SetLineInfo__FPCciT0T0("sis_mdl.c",0x315,"sisterDrawShadow","pAC->base_p->coordp");
      g3ddbgAssert__FbPCce(pAVar2->base_p->coordp != (SGDCOORDINATE *)0x0,&DAT_003f4398);
      pSVar3 = pAVar2->base_p->coordp;
    }
    else {
      pSVar3 = pHVar5->coordp;
    }
    charbbGet__FPA3_fPC8ANI_CTRLPA3_Cf(avBBWorld,pAVar2,(float (*) [4])pSVar3);
    iVar4 = SisterIsLocked__Fv();
    if ((iVar4 == 0) || (cVar1 = GetSynchroModeFlg__Fv(), cVar1 != '\0')) {
      pAVar2 = plyr_mdlGetShadowANI_CTRL__Fv();
      pELDCD = _GetEmulationLightdataCreationDataRef__Fv();
      gra3dDrawSGDShadowCharacter__FP8ANI_CTRLP13SGDCOORDINATEPA3_CfPC35GRA3DEMULATIONLIGHTDATACREATIONDATA
                (pAVar2,pSVar3,avBBWorld,pELDCD);
    }
  }
  return;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if ((__priority == 0xffff) && (__initialize_p == 1)) {
                    /* inlined from sis_mdl.c */
    __8MAN_DATA(&sis_data.field0_0x0);
    sis_data.field0_0x0.__vtable = (MAN_DATA__vtable *)_vt_8SIS_DATA;
    InitializeIn__8MAN_DATA(&sis_data.field0_0x0);
    sis_data.ane_alg_adrs = 0;
    sis_data._48_4_ = sis_data._48_4_ & 0xfffffffc;
  }
  return;
}

type_info& SIS_DATA type_info function() {
  int mdl_p;
  int anm_p;
  int smdl_p;
  
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)this;
}

int SIS_DATA::Setup(int mdl_no, int anm_no, int bd_no, int smdl_no, int iAcsNo) {
	int ret;
	
  int mdl_p;
  int anm_p;
  int smdl_p;
  
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)this;
}

int SIS_DATA::IsReady() {
	int mdl_p;
	int anm_p;
	int smdl_p;
	int ret;
	
  int mdl_p;
  int anm_p;
  int smdl_p;
  
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)this;
}

type_info& MAN_DATA type_info function() {
  int mdl_p;
  int anm_p;
  int smdl_p;
  
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)this;
}

static void global constructors keyed to sis_mdlInit() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
