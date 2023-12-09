// STATUS: NOT STARTED

#include "plyr_mdl.h"

struct MDL_REQ_SAVE {
	int mMdlNo;
	int mAnmNo;
	int mBdNo;
	int mSmdlNo;
	
	MDL_REQ_SAVE& operator=();
	MDL_REQ_SAVE();
	MDL_REQ_SAVE();
	void Set();
	void SetSave();
};

struct _GAME_COSTUME {
	int mPlyrMdlNo;
	int mSisterMdlNo;
	int mPlyrAcsNo;
	int mSisterAcsNo;
};

typedef _GAME_COSTUME GAME_COSTUME;

struct PLYR_PLYR_DATA : MAN_DATA {
	int plyr_cam_mdl_p;
	int plyr_light_mdl_p;
	u_char plyr_cam_alpha;
	u_char plyr_light_alpha;
private:
	unsigned int plyr_req_other_mdl : 1;
	unsigned int plyr_init_ok : 1;
	
public:
	PLYR_PLYR_DATA& operator=();
	PLYR_PLYR_DATA();
	PLYR_PLYR_DATA();
	/* vtable[1] */ virtual int Setup(int mdl_no, int anm_no, int bd_no, int smdl_no, int iAcsNo);
	/* vtable[2] */ virtual int IsReady();
	void Release();
	void Initialize();
private:
	void Init();
};

int g_iMaxPlayerAlpha = 128;
int g_iMinPlayerAlpha = 0;
static int s_bUseDoorLight = 0;
static PLYR_PLYR_DATA plyr_data;
unsigned char G3DLIGHT type_info node[8];
unsigned char GRA3DLIGHTSTATUS type_info node[8];
static MDL_REQ_SAVE plyr_mdl_req_save;
static int ltd_mode;
static int same_priority_count;
static LOOK_TARGET_PRIORITY_MIO plyr_neck_now_priority;
static LOOK_TARGET_PRIORITY_MIO pre_priority;
static LOOK_AT_PARAM plyr_neck_now_param;
static int plyr_neck_flg;
static int plyr_neck_no_registered_cnt;
static GAME_COSTUME GameCostume;

__vtbl_ptr_type PLYR_PLYR_DATA virtual table[4] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ 0x2b8d00,
		/* .__delta2 = */ -29440
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ 0x2b8d50,
		/* .__delta2 = */ -29360
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ 0x2b8e48,
		/* .__delta2 = */ -29112
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

unsigned char PLYR_PLYR_DATA type_info node[12];
unsigned char MAN_DATA type_info node[8];

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3c3e28;
	
  int mdl_p;
  int anm_p;
  int smdl_p;
  
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)this;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf8MAN_DATA((PLYR_PLYR_DATA *)s_void__003f3a18);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf8MAN_DATA((PLYR_PLYR_DATA *)s_char__003f3a20);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf8MAN_DATA((PLYR_PLYR_DATA *)"unsigned int*");
  }
  return (uint **)0x0;
}

void plyr_mdlInit() {
  uint uVar1;
  
  plyr_mdl_req_save.mMdlNo = GetPlyrMdlNo__Fv();
  plyr_mdl_req_save.mSmdlNo = 0x10;
  plyr_mdl_req_save.mBdNo = 0xcfd;
  plyr_mdl_req_save.mAnmNo = 0;
  PlyrNeckInit__Fv();
  InitializeIn__8MAN_DATA(&plyr_data.field0_0x0);
  uVar1 = plyr_data._56_4_ & 0xfffcffff;
  plyr_data.plyr_cam_alpha = (char)uVar1;
  plyr_data.plyr_light_alpha = (char)(uVar1 >> 8);
  plyr_data._58_2_ = (short)(uVar1 >> 0x10);
  return;
}

void plyr_mdlResetReq() {
	int mdl_no;
	int anm_no;
	int bd_no;
	int smdl_no;
	int iAcsNo;
	
  int bd_no;
  int smdl_no;
  int mdl_no;
  int iAcsNo;
  int iVar1;
  
  mdl_no = GetPlyrMdlNo__Fv();
  smdl_no = plyr_mdl_req_save.mSmdlNo;
  bd_no = plyr_mdl_req_save.mBdNo;
  iVar1 = plyr_mdl_req_save.mAnmNo;
  iAcsNo = GetPlyrAcsNo__Fv();
  if ((plyr_data._56_4_ & 0x10000) == 0) {
    mmanageReqItemMdl__Fi(0);
    mmanageReqItemMdl__Fi(1);
    plyr_data._56_4_ = plyr_data._56_4_ | 0x10000;
  }
  iVar1 = SetupIn__8MAN_DATAiiiii(&plyr_data.field0_0x0,mdl_no,iVar1,bd_no,smdl_no,iAcsNo);
  if ((iVar1 != 0) && ((plyr_data._56_4_ & 0x20000) != 0)) {
    ChrSortDelete__Fi(1);
    plyr_data._56_4_ = plyr_data._56_4_ & 0xfffdffff;
  }
  return;
}

void SetupPlyrMdl(int mdl_no, int anm_no, int smdl_no, int acs_no) {
  int iVar1;
  
  plyr_mdl_req_save.mBdNo = 0xcfd;
  plyr_mdl_req_save.mMdlNo = mdl_no;
  plyr_mdl_req_save.mAnmNo = anm_no;
  plyr_mdl_req_save.mSmdlNo = smdl_no;
  if ((plyr_data._56_4_ & 0x10000) == 0) {
    mmanageReqItemMdl__Fi(0);
    mmanageReqItemMdl__Fi(1);
    plyr_data._56_4_ = plyr_data._56_4_ | 0x10000;
  }
  iVar1 = SetupIn__8MAN_DATAiiiii(&plyr_data.field0_0x0,mdl_no,anm_no,0xcfd,smdl_no,acs_no);
  if ((iVar1 != 0) && ((plyr_data._56_4_ & 0x20000) != 0)) {
    ChrSortDelete__Fi(1);
    plyr_data._56_4_ = plyr_data._56_4_ & 0xfffdffff;
  }
  return;
}

int IsReadyPlyrMdl() {
	int mdl_p;
	int anm_p;
	int smdl_p;
	int ret;
	
  ANI_CTRL *pAVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int mdl_p;
  int anm_p;
  int smdl_p;
  
  uVar2 = ReadyIn__8MAN_DATAPiN21(&plyr_data.field0_0x0,&mdl_p,&anm_p,&smdl_p);
  uVar3 = mmanageIsReadyItemMdl__FiPii(0,&plyr_data.plyr_cam_mdl_p,1);
  uVar4 = mmanageIsReadyItemMdl__FiPii(1,&plyr_data.plyr_light_mdl_p,1);
  uVar4 = uVar2 & uVar3 & uVar4;
  if ((uVar4 != 0) &&
     (InitIn__8MAN_DATAiii(&plyr_data.field0_0x0,mdl_p,anm_p,smdl_p),
     (plyr_data._56_4_ & 0x20000) == 0)) {
    ChrSortRegistPlayr__Fv();
                    /* inlined from man_data.h */
                    /* end of inlined section */
                    /* inlined from man_data.h */
    plyr_wrk.anime_no = *(uchar *)&((plyr_data.field0_0x0.mpAniCtrl)->anm).playnum;
                    /* end of inlined section */
    plyr_data._56_4_ = plyr_data._56_4_ & 0xffff0000;
                    /* inlined from man_data.h */
                    /* end of inlined section */
    plyr_data._56_4_ = plyr_data._56_4_ | 0x20000;
    if ((plyr_wrk.cmn_wrk.st.sta & 0x8000) != 0) {
      ReqPlayerMim__Fii(0x19,0);
      pAVar1 = plyr_data.field0_0x0.mpAniCtrl;
                    /* inlined from man_data.h */
      iVar5 = GetPlyrMdlNo__Fv();
      if (pAVar1->mdl_no == iVar5) {
                    /* end of inlined section */
        IgEffectRenzFlareDispFlgSet__Fi(1);
      }
    }
  }
  return uVar4;
}

void ReleasePlyrMdl() {
  if ((plyr_data._56_4_ & 0x20000) != 0) {
    ChrSortDelete__Fi(1);
    plyr_data._56_4_ = plyr_data._56_4_ & 0xfffdffff;
  }
  if ((plyr_data._56_4_ & 0x10000) != 0) {
    mmanageClearItemMdl__Fi(0);
    mmanageClearItemMdl__Fi(1);
    plyr_data._56_4_ = plyr_data._56_4_ & 0xfffeffff;
  }
  ReleaseIn__8MAN_DATA(&plyr_data.field0_0x0);
  return;
}

void ReqPlayerMim(int no, int rev) {
                    /* inlined from man_data.h */
                    /* end of inlined section */
                    /* inlined from man_data.h */
                    /* end of inlined section */
  if (plyr_data.field0_0x0.mpAniCtrl != (ANI_CTRL *)0x0) {
    mimRequestNum__FP8ANI_CTRLiUc(plyr_data.field0_0x0.mpAniCtrl,no,(uchar)rev);
  }
  return;
}

void ReqPlayerMimContinue(int no, int rev) {
                    /* inlined from man_data.h */
                    /* end of inlined section */
                    /* inlined from man_data.h */
                    /* end of inlined section */
  if (plyr_data.field0_0x0.mpAniCtrl != (ANI_CTRL *)0x0) {
    mimRequestNumContinue__FP8ANI_CTRLiUc(plyr_data.field0_0x0.mpAniCtrl,no,(uchar)rev);
  }
  return;
}

void StopPlayerMim(int no) {
                    /* inlined from man_data.h */
                    /* end of inlined section */
                    /* inlined from man_data.h */
                    /* end of inlined section */
  if (plyr_data.field0_0x0.mpAniCtrl != (ANI_CTRL *)0x0) {
    mimStopNum__FP8ANI_CTRLi(plyr_data.field0_0x0.mpAniCtrl,no);
  }
  return;
}

int IsPlayerMimParts(int no) {
  int iVar1;
  
  iVar1 = mimIsUseParts__FP8ANI_CTRLi(plyr_data.field0_0x0.mpAniCtrl,no);
  return (int)(iVar1 != 0);
}

void plyr_mdlSetSave(MC_SAVE_DATA *data) {
  data->size = 0x10;
  data->addr = (uchar *)&plyr_mdl_req_save;
  return;
}

u_short GetPlyrFtype() {
  short sVar1;
  
                    /* inlined from man_data.h */
                    /* end of inlined section */
  sVar1 = 0;
  if (plyr_data.field0_0x0.mpAniCtrl != (ANI_CTRL *)0x0) {
                    /* inlined from man_data.h */
    sVar1 = (plyr_data.field0_0x0.mpAniCtrl)->ftype;
  }
                    /* end of inlined section */
  return sVar1;
}

void ReqPlayerAnime(u_char flame) {
	int interp;
	
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = IsReadyPlyrMdl__Fv();
  if (iVar1 == 0) {
    return;
  }
                    /* end of inlined section */
                    /* inlined from man_data.h */
                    /* end of inlined section */
                    /* inlined from man_data.h */
                    /* end of inlined section */
                    /* inlined from man_data.h */
  uVar3 = ((plyr_data.field0_0x0.mpAniCtrl)->anm).playnum;
  if (plyr_wrk.anime_no == uVar3) {
                    /* end of inlined section */
    printf("The same anime is requested. In ReqPlayerAnime!!!!!!!!\n");
    return;
  }
  uVar2 = PlayerInterpFlame__FP8ANI_CTRLii
                    (plyr_data.field0_0x0.mpAniCtrl,uVar3,(uint)plyr_wrk.anime_no);
  uVar3 = (uint)flame;
  if (uVar2 != 0xffffffff) {
    uVar3 = uVar2 & 0xff;
  }
  mimInitLoop__FP8ANI_CTRL(plyr_data.field0_0x0.mpAniCtrl);
  if (((((byte)(plyr_wrk.anime_no - 6) < 4) || ((byte)(plyr_wrk.anime_no - 0xc) < 4)) &&
      ((iVar1 = ((plyr_data.field0_0x0.mpAniCtrl)->anm).playnum, iVar1 < 6 || (9 < iVar1)))) &&
     ((iVar1 < 0xc || (0xf < iVar1)))) {
    mimRequestNum__FP8ANI_CTRLiUc(plyr_data.field0_0x0.mpAniCtrl,0x16,'\0');
    if ((plyr_wrk.cmn_wrk.st.sta & 0x8000) == 0) {
      mimRequestNum__FP8ANI_CTRLiUc(plyr_data.field0_0x0.mpAniCtrl,0x15,'\0');
    }
  }
  else {
                    /* inlined from man_data.h */
    if (((3 < (byte)(plyr_wrk.anime_no - 6)) && (3 < (byte)(plyr_wrk.anime_no - 0xc))) &&
       ((((iVar1 = ((plyr_data.field0_0x0.mpAniCtrl)->anm).playnum, 5 < iVar1 && (iVar1 < 10)) ||
         ((0xb < iVar1 && (iVar1 < 0x10)))) &&
        (mimRequestNum__FP8ANI_CTRLiUc(plyr_data.field0_0x0.mpAniCtrl,0x16,'\x01'),
        (plyr_wrk.cmn_wrk.st.sta & 0x8000) == 0)))) {
      mimRequestNum__FP8ANI_CTRLiUc(plyr_data.field0_0x0.mpAniCtrl,0x15,'\x01');
    }
  }
                    /* inlined from man_data.h */
  if (((((plyr_wrk.anime_no == '\x01') || (plyr_wrk.anime_no == '\n')) ||
       (plyr_wrk.anime_no == '\v')) &&
      ((iVar1 = ((plyr_data.field0_0x0.mpAniCtrl)->anm).playnum, iVar1 != 1 && (iVar1 != 10)))) &&
     (iVar1 != 0xb)) {
                    /* end of inlined section */
    mimRequestNum__FP8ANI_CTRLiUc(plyr_data.field0_0x0.mpAniCtrl,0x18,'\0');
    if ((plyr_wrk.cmn_wrk.st.sta & 0x8000) == 0) {
      mimRequestNum__FP8ANI_CTRLiUc(plyr_data.field0_0x0.mpAniCtrl,0x17,'\0');
      goto LAB_0023e9b0;
    }
  }
  else {
                    /* inlined from man_data.h */
    if (((plyr_wrk.anime_no != '\x01') && (plyr_wrk.anime_no != '\n')) &&
       ((plyr_wrk.anime_no != '\v' &&
        (((iVar1 = ((plyr_data.field0_0x0.mpAniCtrl)->anm).playnum, iVar1 == 1 || (iVar1 == 10)) ||
         (iVar1 == 0xb)))))) {
      mimRequestNum__FP8ANI_CTRLiUc(plyr_data.field0_0x0.mpAniCtrl,0x18,'\x01');
      if ((plyr_wrk.cmn_wrk.st.sta & 0x8000) != 0) goto LAB_0023e9c0;
      mimRequestNum__FP8ANI_CTRLiUc(plyr_data.field0_0x0.mpAniCtrl,0x17,'\x01');
    }
LAB_0023e9b0:
    if ((plyr_wrk.cmn_wrk.st.sta & 0x8000) == 0) goto LAB_0023ea84;
  }
LAB_0023e9c0:
  if (0x21 < (byte)(plyr_wrk.anime_no - 0x18)) {
                    /* inlined from man_data.h */
    iVar1 = ((plyr_data.field0_0x0.mpAniCtrl)->anm).playnum;
    if ((0x17 < iVar1) && (iVar1 < 0x3a)) {
                    /* end of inlined section */
      mimRequestNum__FP8ANI_CTRLiUc(plyr_data.field0_0x0.mpAniCtrl,0x19,'\0');
      plyr_data.plyr_light_alpha = '\0';
      if ((plyr_wrk.cmn_wrk.st.sta & 0x8000) != 0) {
        IgEffectRenzFlareDispFlgSet__Fi(1);
      }
      goto LAB_0023ea84;
    }
    if (0x21 < (byte)(plyr_wrk.anime_no - 0x18)) goto LAB_0023ea84;
  }
  iVar1 = ((plyr_data.field0_0x0.mpAniCtrl)->anm).playnum;
  if ((iVar1 < 0x18) || (0x39 < iVar1)) {
    mimRequestNum__FP8ANI_CTRLiUc(plyr_data.field0_0x0.mpAniCtrl,0x19,'\x01');
    IgEffectRenzFlareDispFlgSet__Fi(0);
  }
LAB_0023ea84:
                    /* inlined from man_data.h */
  if ((plyr_wrk.anime_no == '0') && (((plyr_data.field0_0x0.mpAniCtrl)->anm).playnum != 0x30)) {
    plyr_data.plyr_cam_alpha = '\0';
  }
                    /* end of inlined section */
                    /* inlined from man_data.h */
                    /* end of inlined section */
  motSetAnime__FP8ANI_CTRLPPUsi
            (plyr_data.field0_0x0.mpAniCtrl,anm_tbl[(plyr_data.field0_0x0.mpAniCtrl)->anm_no].ani,
             (uint)plyr_wrk.anime_no);
  motInitInterpAnime__FP8ANI_CTRLi(plyr_data.field0_0x0.mpAniCtrl,uVar3);
  return;
}

static int PlayerInterpFlame(ANI_CTRL *ani_ctrl, int now_anm, int next_anm) {
	int flame;
	int ani_run;
	int mot_run;
	float tmp;
	
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  
  iVar3 = 0;
  iVar4 = 0;
  iVar2 = PlyrOutsideCheck__Fv();
  if (iVar2 != 0) {
    iVar3 = 6;
    iVar4 = 6;
  }
  if (((now_anm == 0) && (1 < next_anm)) && (next_anm < 5)) {
    return 10;
  }
  if ((now_anm - 2U < 3) && (next_anm == 0)) {
    uVar1 = (ani_ctrl->mot).play_id;
    if ((uVar1 == 3) || (uVar1 == 5)) {
      fVar6 = (float)(ani_ctrl->mot).cnt / (float)(ani_ctrl->mot).all_cnt;
    }
    else if ((uVar1 == 2) || (uVar1 == 4)) {
      iVar2 = (ani_ctrl->mot).all_cnt;
      fVar6 = (float)(iVar2 - (ani_ctrl->mot).cnt) / (float)iVar2;
    }
    else {
      fVar6 = 0.0;
    }
    fVar5 = 10.0;
    fVar6 = fVar6 * 5.0;
  }
  else {
    iVar2 = iVar3 + 6;
    if ((now_anm == 0) && ((iVar2 <= next_anm && (next_anm <= iVar3 + 8)))) {
      return 10;
    }
    if (((now_anm < iVar2) || (iVar3 + 8 < now_anm)) || (next_anm != 0)) {
      if (((now_anm - 2U < 4) && (iVar2 <= next_anm)) && (next_anm <= iVar3 + 9)) {
        iVar2 = (ani_ctrl->mot).all_cnt;
        fVar6 = ((float)(iVar2 - (ani_ctrl->mot).cnt) / (float)iVar2) * 5.0 + 5.0;
        goto LAB_0023eeb4;
      }
      if (now_anm < iVar2) {
LAB_0023eed0:
        if (((now_anm - 0x41U < 2) && (iVar2 <= next_anm)) && (next_anm <= iVar3 + 9)) {
          return 10;
        }
        if (0x17 < next_anm - 0x18U) {
          return -1;
        }
        return 2;
      }
      if (((now_anm <= iVar3 + 9) && (1 < next_anm)) && (next_anm < 6)) {
        iVar2 = (ani_ctrl->mot).all_cnt;
        fVar6 = ((float)(iVar2 - (ani_ctrl->mot).cnt) / (float)iVar2) * 5.0 + 5.0;
        goto LAB_0023eeb4;
      }
      if (((now_anm < iVar2) || (iVar3 + 9 < now_anm)) || ((next_anm < 0x41 || (0x42 < next_anm))))
      goto LAB_0023eed0;
      uVar1 = (ani_ctrl->mot).play_id;
      if ((uVar1 == iVar4 + 7U) || (uVar1 == iVar4 + 9U)) {
        iVar2 = (ani_ctrl->mot).all_cnt;
        fVar6 = (float)(iVar2 - (ani_ctrl->mot).cnt) / (float)(iVar2 << 1);
      }
      else if ((uVar1 == iVar4 + 6U) || (uVar1 == iVar4 + 8U)) {
        iVar2 = (ani_ctrl->mot).all_cnt * 2;
        fVar6 = (float)(iVar2 - (ani_ctrl->mot).cnt) / (float)iVar2;
      }
      else {
        fVar6 = 0.0;
      }
      fVar5 = 2.0;
      fVar6 = fVar6 * 6.0;
    }
    else {
      uVar1 = (ani_ctrl->mot).play_id;
      if ((uVar1 == iVar4 + 7U) || (uVar1 == iVar4 + 9U)) {
        fVar6 = (float)(ani_ctrl->mot).cnt / (float)(ani_ctrl->mot).all_cnt;
      }
      else if ((uVar1 == iVar4 + 6U) || (uVar1 == iVar4 + 8U)) {
        iVar2 = (ani_ctrl->mot).all_cnt;
        fVar6 = (float)(iVar2 - (ani_ctrl->mot).cnt) / (float)iVar2;
      }
      else {
        fVar6 = 0.0;
      }
      fVar5 = 5.0;
      fVar6 = fVar6 * 5.0;
    }
  }
  fVar6 = fVar6 + fVar5;
LAB_0023eeb4:
  iVar2 = (int)fVar6;
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  return iVar2;
}

void plyr_mdlMotionWork() {
  PlyrNeckMain__Fv();
  return;
}

void plyr_mdlGetMATRIX(float *mtx[4], int bone_no) {
	HeaderSection *hs;
	SGDCOORDINATE *cp;
	float *pm1[4];
	
  SGDCOORDINATE *pSVar1;
  float afVar2 [4];
  float afVar3 [4];
  float afVar4 [4];
  float afVar5 [4];
  SGDCOORDINATE *pSVar6;
  int iVar7;
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined auVar11 [16];
  
  iVar7 = IsReadyPlyrMdl__Fv();
  if (iVar7 != 0) {
                    /* inlined from man_data.h */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
                    /* inlined from man_data.h */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
                    /* inlined from man_data.h */
                    /* end of inlined section */
    pSVar1 = (plyr_data.field0_0x0.mpAniCtrl)->base_p->coordp;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
    pSVar6 = pSVar1 + bone_no;
    afVar5[0] = *(float *)((int)pSVar6->matLocalWorld[0] + 0);
    afVar5[1] = *(float *)((int)pSVar6->matLocalWorld[0] + 4);
    afVar5[2] = *(float *)((int)pSVar6->matLocalWorld[0] + 8);
    afVar5[3] = *(float *)((int)pSVar6->matLocalWorld[0] + 0xc);
    auVar8 = _lqc2((undefined  [16])afVar5);
    pSVar6 = pSVar1 + bone_no;
    afVar2[0] = *(float *)((int)pSVar6->matLocalWorld[1] + 0);
    afVar2[1] = *(float *)((int)pSVar6->matLocalWorld[1] + 4);
    afVar2[2] = *(float *)((int)pSVar6->matLocalWorld[1] + 8);
    afVar2[3] = *(float *)((int)pSVar6->matLocalWorld[1] + 0xc);
    auVar9 = _lqc2((undefined  [16])afVar2);
    pSVar6 = pSVar1 + bone_no;
    afVar3[0] = *(float *)((int)pSVar6->matLocalWorld[2] + 0);
    afVar3[1] = *(float *)((int)pSVar6->matLocalWorld[2] + 4);
    afVar3[2] = *(float *)((int)pSVar6->matLocalWorld[2] + 8);
    afVar3[3] = *(float *)((int)pSVar6->matLocalWorld[2] + 0xc);
    auVar10 = _lqc2((undefined  [16])afVar3);
    pSVar1 = pSVar1 + bone_no;
    afVar4[0] = *(float *)((int)pSVar1->matLocalWorld[3] + 0);
    afVar4[1] = *(float *)((int)pSVar1->matLocalWorld[3] + 4);
    afVar4[2] = *(float *)((int)pSVar1->matLocalWorld[3] + 8);
    afVar4[3] = *(float *)((int)pSVar1->matLocalWorld[3] + 0xc);
    auVar11 = _lqc2((undefined  [16])afVar4);
    afVar5 = (float  [4])_sqc2(auVar8);
    *mtx = afVar5;
    afVar5 = (float  [4])_sqc2(auVar9);
    mtx[1] = afVar5;
    afVar5 = (float  [4])_sqc2(auVar10);
    mtx[2] = afVar5;
    afVar5 = (float  [4])_sqc2(auVar11);
    mtx[3] = afVar5;
  }
                    /* end of inlined section */
  return;
}

void CalcGirlCoord(int pause_flg) {
	HeaderSection *hs;
	SGDCOORDINATE *cp;
	float grot;
	
  HeaderSection *pHVar1;
  SGDCOORDINATE *pCoord;
  undefined8 uVar2;
  float fVar3;
  ANI_CTRL *pAVar4;
  uchar uVar5;
  int iVar6;
  uint uVar7;
  _LOOK_AT_PARAM *param;
  float fVar8;
  
  iVar6 = IsReadyPlyrMdl__Fv();
  if (iVar6 == 0) {
    return;
  }
                    /* end of inlined section */
                    /* inlined from man_data.h */
                    /* end of inlined section */
                    /* inlined from man_data.h */
                    /* end of inlined section */
                    /* inlined from man_data.h */
  pHVar1 = (plyr_data.field0_0x0.mpAniCtrl)->base_p;
                    /* end of inlined section */
  pCoord = pHVar1->coordp;
  MrecSetRegBuffID__FiPCfi((int)(short)plyr_wrk.cmn_wrk.floor,plyr_wrk.cmn_wrk.mbox.pos,0);
  uVar5 = motSetCoord__FP8ANI_CTRLUcUc(plyr_data.field0_0x0.mpAniCtrl,0xff,'\0');
  pAVar4 = plyr_data.field0_0x0.mpAniCtrl;
  if (uVar5 == '\x01') {
    iVar6 = 0x2000;
  }
  else {
    if (uVar5 != '\x02') goto LAB_0023f068;
    iVar6 = 0x4000;
  }
  plyr_wrk.cmn_wrk.st.sta = plyr_wrk.cmn_wrk.st.sta | (long)iVar6;
LAB_0023f068:
  plyr_data.plyr_light_alpha = plyr_data.plyr_light_alpha + 10;
  if (0x80 < plyr_data.plyr_light_alpha) {
    plyr_data.plyr_light_alpha = 0x80;
  }
  plyr_data.plyr_cam_alpha = plyr_data.plyr_cam_alpha + 10;
  if (0x80 < plyr_data.plyr_cam_alpha) {
    plyr_data.plyr_cam_alpha = 0x80;
  }
  uVar7 = motGetNowFrame__FP8MOT_CTRL(&(plyr_data.field0_0x0.mpAniCtrl)->mot);
  movGetMoveval__FPfT0P8ANI_CTRLUif(plyr_wrk.spd,plyr_wrk.old_spd,pAVar4,uVar7 >> 1,0.0);
  mimSetVertex__FP8ANI_CTRL(plyr_data.field0_0x0.mpAniCtrl);
  sceVu0UnitMatrix(pCoord);
  fVar3 = DAT_003ee7f0;
  pCoord->matCoord[0] = 25.0;
  pCoord->matCoord[2][2] = 25.0;
  pCoord->matCoord[1][1] = 25.0;
  fVar8 = plyr_wrk.cmn_wrk.mbox.rot[1] + fVar3;
  if (fVar3 < fVar8) {
    fVar8 = fVar8 - DAT_003ee7f4;
  }
  sceVu0RotMatrixX(pCoord,pCoord);
  sceVu0RotMatrixY(fVar8,pCoord,pCoord);
  fVar8 = plyr_wrk.cmn_wrk.mbox.pos[3];
  fVar3 = plyr_wrk.cmn_wrk.mbox.pos[2];
  uVar2 = plyr_wrk.cmn_wrk.mbox.pos._0_8_;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
  pCoord->matCoord[3][0] = (float)plyr_wrk.cmn_wrk.mbox.pos._0_8_;
  pCoord->matCoord[3][1] = SUB84(uVar2,4);
  pCoord->matCoord[3][2] = fVar3;
  pCoord->matCoord[3][3] = fVar8;
                    /* end of inlined section */
  uVar7 = pHVar1->blocks;
  pCoord->matCoord[3][3] = 1.0;
  sgdCalcBoneCoordinate__FP13SGDCOORDINATEi(pCoord,uVar7 - 1);
  pAVar4 = plyr_data.field0_0x0.mpAniCtrl;
  param = PlyrNeckGetParam__Fv();
  motLookAtCtrl__FP8ANI_CTRLP14_LOOK_AT_PARAM(pAVar4,param);
  LeftHandCtrl__FP13SGDCOORDINATE(pCoord);
  sgdCalcBoneCoordinate__FP13SGDCOORDINATEi(pCoord,pHVar1->blocks - 1);
  pAVar4 = plyr_data.field0_0x0.mpAniCtrl;
                    /* inlined from man_data.h */
                    /* end of inlined section */
  GetMdlWaistPos__FPfP8ANI_CTRLUs
            (plyr_wrk.bwp,plyr_data.field0_0x0.mpAniCtrl,
             *(short *)&(plyr_data.field0_0x0.mpAniCtrl)->mdl_no);
  GetMdlNeckPos__FPfP8ANI_CTRLUs(plyr_wrk.cmn_wrk.headpos,pAVar4,*(short *)&pAVar4->mdl_no);
  GetPlyrAcsLightPos__FPfP8ANI_CTRL(plyr_wrk.spot_pos,plyr_data.field0_0x0.mpAniCtrl);
  return;
}

void playerUseDoorLight(int b) {
  s_bUseDoorLight = b;
  return;
}

void playerSetLight(float *vPosition, GRA3DEMULATIONLIGHTDATACREATIONDATA *pData) {
	static char __FUNCTION__[15] = {
		/* [0] = */ 112,
		/* [1] = */ 108,
		/* [2] = */ 97,
		/* [3] = */ 121,
		/* [4] = */ 101,
		/* [5] = */ 114,
		/* [6] = */ 83,
		/* [7] = */ 101,
		/* [8] = */ 116,
		/* [9] = */ 76,
		/* [10] = */ 105,
		/* [11] = */ 103,
		/* [12] = */ 104,
		/* [13] = */ 116,
		/* [14] = */ 0
	};
	float amb;
	GRA3DLIGHTDATA LD;
	GRA3DLIGHTDATA *pLDSrc;
	GRA3DLIGHTID lightId;
	
  float afVar1 [4];
  float *pfVar2;
  GRA3DLIGHTDATA *pLDSrc;
  int iVar3;
  GRA3DLIGHTID GVar4;
  G3DLIGHT *pGVar5;
  GRA3DCAMERA *pGVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  G3DLIGHT *pGVar10;
  G3DLIGHT *pGVar11;
  float *pfVar12;
  float fMagnification;
  undefined auVar13 [16];
  undefined auVar14 [16];
  GRA3DLIGHTDATA LD;
  
  if (pData == (GRA3DEMULATIONLIGHTDATACREATIONDATA *)0x0) {
    _SetLineInfo__FPCciT0T0("plyr_mdl.c",0x2b7,"playerSetLight",s_pData_003f3a60);
    g3ddbgAssert__FbPCce(false,&DAT_003f3a68);
  }
                    /* end of inlined section */
  if (s_bUseDoorLight == 0) {
    iVar3 = GetPlyrAreaNo__Fv();
    pLDSrc = MapDrawGetLightPtr__Fi(iVar3);
  }
  else {
    pLDSrc = MapDoorGetLight__Fv();
  }
  gra3dGenerateLightDataToChar__FP14GRA3DLIGHTDATAPC14GRA3DLIGHTDATAPC35GRA3DEMULATIONLIGHTDATACREATIONDATA
            (&LD,pLDSrc,pData);
  iVar3 = gra3dIsSpecialLightActive__Fv();
  if (iVar3 == 0) {
    fMagnification = pData->fMaplightScale;
  }
  else {
    GVar4 = gra3dGetProjectorSpotId__Fv();
    pGVar5 = gra3dGetProjectorSpot__Fv();
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(GVar4,0x27);
    pGVar11 = pGVar5;
    pfVar2 = LD.vAmbient + GVar4 * 0x1c + 4;
    do {
      pfVar12 = pfVar2;
      pGVar10 = pGVar11;
      uVar7 = *(undefined8 *)(pGVar10->vDiffuse + 2);
      uVar8 = *(undefined8 *)pGVar10->vSpecular;
      uVar9 = *(undefined8 *)(pGVar10->vSpecular + 2);
      *(undefined8 *)pfVar12 = *(undefined8 *)pGVar10->vDiffuse;
      *(undefined8 *)(pfVar12 + 2) = uVar7;
      *(undefined8 *)(((fixed_array<G3DLIGHT,39> *)(pfVar12 + 4))->field0_0x0).m_aData[0].vDiffuse =
           uVar8;
      *(undefined8 *)(pfVar12 + 6) = uVar9;
      pGVar11 = (G3DLIGHT *)pGVar10->vAmbient;
      pfVar2 = pfVar12 + 8;
    } while (pGVar11 != (G3DLIGHT *)&pGVar5->fMinRange);
    uVar7 = *(undefined8 *)(pGVar10->vAmbient + 2);
    *(undefined8 *)(pfVar12 + 8) = *(undefined8 *)pGVar11;
    *(undefined8 *)(pfVar12 + 10) = uVar7;
    _fixed_array_verifyrange__H1Z16GRA3DLIGHTSTATUS_UiUi_PX01(GVar4,0x27);
    LD.aStatus.field0_0x0.m_aData[GVar4].bEnable = 1;
                    /* end of inlined section */
    fMagnification = pData->fMaplightScale;
  }
  gra3dEmulateLightData__FP14GRA3DLIGHTDATAPC14GRA3DLIGHTDATAPCff(&LD,&LD,vPosition,fMagnification);
  LD.vAmbient[3] = 0.0;
  LD.vAmbient[2] = debug_var.pl_amb;
  LD.vAmbient[0] = debug_var.pl_amb;
  LD.vAmbient[1] = debug_var.pl_amb;
  iVar3 = EffectThunderLightGetLightningFlg__Fv();
  if (iVar3 != 0) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(1,0x27);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    EffectThunderLightGetG3dLight__FP8G3DLIGHT(LD.aLight.field0_0x0.m_aData + 1);
    _fixed_array_verifyrange__H1Z16GRA3DLIGHTSTATUS_UiUi_PX01(1,0x27);
    LD.aStatus.field0_0x0.m_aData[1].bEnable = 1;
    _fixed_array_verifyrange__H1Z16GRA3DLIGHTSTATUS_UiUi_PX01(1,0x27);
    LD.aStatus.field0_0x0.m_aData[1].bEnableToChar = 1;
    _fixed_array_verifyrange__H1Z16GRA3DLIGHTSTATUS_UiUi_PX01(1,0x27);
    LD.aStatus.field0_0x0.m_aData[1].bEnableToShadow = 1;
  }
                    /* end of inlined section */
  if (pData->bEnableStaticDirLight != 0) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(2,0x27);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
    g3dutilSetLightDefault__FP8G3DLIGHT12G3DLIGHTTYPE
              (LD.aLight.field0_0x0.m_aData + 2,G3DLIGHT_DIRECTIONAL);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
    pGVar6 = gra3dGetCamera__Fv();
    auVar14 = _qmtc2(0xbf800000);
    afVar1[0] = *(float *)((int)pGVar6->matCoord[2] + 0);
    afVar1[1] = *(float *)((int)pGVar6->matCoord[2] + 4);
    afVar1[2] = *(float *)((int)pGVar6->matCoord[2] + 8);
    afVar1[3] = *(float *)((int)pGVar6->matCoord[2] + 0xc);
    auVar13 = _lqc2((undefined  [16])afVar1);
    auVar13 = _vmulbc(auVar13,auVar14);
    LD.aLight.field0_0x0.m_aData[2].vDirection = (float  [4])_sqc2(auVar13);
    LD.aLight.field0_0x0.m_aData[2].vDiffuse[2] = pData->vStaticDirLightColor[2];
    LD.aLight.field0_0x0.m_aData[2].vDiffuse[3] = pData->vStaticDirLightColor[3];
    LD.aLight.field0_0x0.m_aData[2].vDiffuse[0] = (float)*(undefined8 *)pData->vStaticDirLightColor;
    LD.aLight.field0_0x0.m_aData[2].vDiffuse[1] =
         (float)((ulong)*(undefined8 *)pData->vStaticDirLightColor >> 0x20);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z16GRA3DLIGHTSTATUS_UiUi_PX01(2,0x27);
    LD.aStatus.field0_0x0.m_aData[2].bEnable = 1;
  }
                    /* end of inlined section */
  gra3dSetLightData__FPC14GRA3DLIGHTDATAPCf(&LD,(float *)0x0);
  return;
}

GRA3DEMULATIONLIGHTDATACREATIONDATA& _GetEmulationLightdataCreationDataRef() {
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
	static GRA3DEMULATIONLIGHTDATACREATIONDATA aELDCD_MIO[2];
	
  ANI_CTRL *pAVar1;
  undefined8 *puVar2;
  PLAYERFLASHLIGHTTYPE PVar3;
  GRA3DEMULATIONLIGHTDATACREATIONDATA *pGVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  float local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  float local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  
  puVar2 = (undefined8 *)&local_b0;
  pAVar1 = plyr_mdlGetANI_CTRL__Fv();
  if (pAVar1 == (ANI_CTRL *)0x0) {
    pGVar4 = (GRA3DEMULATIONLIGHTDATACREATIONDATA *)0x0;
  }
  else {
    if (__tmp_10_1235 == 0) {
      memset(&local_b0,0,0x10);
      local_a8 = DAT_003ee7f8;
      uStack_9c = 0x3f800000;
      local_98 = plyr_wrk.maplight_scale;
      puVar8 = (undefined8 *)&aELDCD_MIO_1234;
      local_b0 = DAT_003ee7f8;
      uStack_ac = DAT_003ee7f8;
      local_a0 = 0x3f800000;
      uStack_94 = 1;
      local_90 = 1;
      local_8c = 0;
      local_88 = 0;
      local_84 = 0;
      local_80 = 0;
      local_7c = 0;
      memset(&local_70,0,0x10);
      local_70 = DAT_003ee800;
      local_68 = DAT_003ee7fc;
      local_58 = plyr_wrk.maplight_scale;
      local_3c = 1;
      local_6c = DAT_003ee7fc;
      local_60 = 0;
      local_5c = 0;
      local_54 = 1;
      local_50 = 1;
      local_4c = 0;
      local_48 = 0;
      local_44 = 0;
      local_40 = 0;
      do {
        uVar5 = puVar2[1];
        uVar6 = puVar2[2];
        uVar7 = puVar2[3];
        *puVar8 = *puVar2;
        puVar8[1] = uVar5;
        puVar8[2] = uVar6;
        puVar8[3] = uVar7;
        puVar2 = puVar2 + 4;
        puVar8 = puVar8 + 4;
      } while (puVar2 != (undefined8 *)&stack0xffffffd0);
      __tmp_10_1235 = 1;
    }
    DAT_004bbc30 = debug_var.fStaticDirLightColStepR;
    DAT_004bbc34 = debug_var.fStaticDirLightColStepG;
    DAT_004bbc38 = debug_var.fStaticDirLightColStepB;
    aELDCD_MIO_1234 = debug_var.sis_para_r;
    DAT_004bbbf4 = debug_var.sis_para_g;
    DAT_004bbbf8 = debug_var.sis_para_b;
    DAT_004bbc20._4_4_ = (uint)((plyr_wrk.cmn_wrk.st.sta & 0x8000) == 0);
    PVar3 = playerGetFlashlightType__Fv();
    pGVar4 = (GRA3DEMULATIONLIGHTDATACREATIONDATA *)(&aELDCD_MIO_1234 + PVar3 * 0x10);
  }
  return pGVar4;
}

int playerCalcAlpha(ANI_CTRL *pAC) {
	static char __FUNCTION__[16] = {
		/* [0] = */ 112,
		/* [1] = */ 108,
		/* [2] = */ 97,
		/* [3] = */ 121,
		/* [4] = */ 101,
		/* [5] = */ 114,
		/* [6] = */ 67,
		/* [7] = */ 97,
		/* [8] = */ 108,
		/* [9] = */ 99,
		/* [10] = */ 65,
		/* [11] = */ 108,
		/* [12] = */ 112,
		/* [13] = */ 104,
		/* [14] = */ 97,
		/* [15] = */ 0
	};
	float avBBWorld[8][4];
	float ellipse[4][4];
	float avRet[2][4];
	float vDir[4];
	
  float afVar1 [4];
  SGDCOORDINATE *pSVar2;
  GRA3DCAMERA *pGVar3;
  HeaderSection *pHVar4;
  undefined in_vf0 [16];
  undefined extraout_vf1 [16];
  undefined extraout_vf1_00 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined4 uVar7;
  float avBBWorld [8] [4];
  float ellipse [4] [4];
  float avRet [2] [4];
  float vDir [4];
  
  if (pAC == (ANI_CTRL *)0x0) {
    _SetLineInfo__FPCciT0T0("plyr_mdl.c",0x340,"playerCalcAlpha",(char *)&PTR_DAT_003f3a70);
    g3ddbgAssert__FbPCce(false,&DAT_003f3a68);
  }
  pHVar4 = pAC->base_p;
  if (pHVar4 == (HeaderSection *)0x0) {
    _SetLineInfo__FPCciT0T0("plyr_mdl.c",0x341,"playerCalcAlpha","pAC->base_p");
    g3ddbgAssert__FbPCce(pAC->base_p != (HeaderSection *)0x0,&DAT_003f3a68);
    pHVar4 = pAC->base_p;
    pSVar2 = pHVar4->coordp;
  }
  else {
    pSVar2 = pHVar4->coordp;
  }
  if (pSVar2 == (SGDCOORDINATE *)0x0) {
    _SetLineInfo__FPCciT0T0("plyr_mdl.c",0x342,"playerCalcAlpha","pAC->base_p->coordp");
    g3ddbgAssert__FbPCce(pAC->base_p->coordp != (SGDCOORDINATE *)0x0,&DAT_003f3a68);
    pSVar2 = pAC->base_p->coordp;
  }
  else {
    pSVar2 = pHVar4->coordp;
  }
  charbbGet__FPA3_fPC8ANI_CTRLPA3_Cf(avBBWorld,pAC,(float (*) [4])pSVar2);
  g3dbvInnerEllipseFromVertices__FPA3_fPA3_Cf(ellipse,avBBWorld);
  pGVar3 = gra3dGetCamera__Fv();
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
  auVar5 = _lqc2((undefined  [16])ellipse[3]);
  afVar1[0] = *(float *)((int)pGVar3->matCoord[3] + 0);
  afVar1[1] = *(float *)((int)pGVar3->matCoord[3] + 4);
  afVar1[2] = *(float *)((int)pGVar3->matCoord[3] + 8);
  afVar1[3] = *(float *)((int)pGVar3->matCoord[3] + 0xc);
  auVar6 = _lqc2((undefined  [16])afVar1);
  auVar5 = _vsub(auVar5,auVar6);
  auVar6 = _vmul(auVar5,auVar5);
  _vaddabc(auVar6,auVar6);
  auVar6 = _vmaddbc(extraout_vf1,auVar6);
  _vnop();
  _vnop();
  _vnop();
  _vrsqrt(in_vf0,auVar6);
  _vmul(auVar5,in_vf0);
  uVar7 = _vwaitq();
  auVar5 = _vmulq(auVar5,uVar7);
  vDir = (float  [4])_sqc2(auVar5);
                    /* end of inlined section */
  g3dCalcIntersectionEllipseAndLine__FPA3_fPA3_CfPCfT2(avRet,ellipse,(float *)ellipse[3],vDir);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
  auVar5 = _lqc2((undefined  [16])ellipse[3]);
  auVar6 = _lqc2((undefined  [16])avRet[0]);
  auVar5 = _vsub(auVar5,auVar6);
  auVar5 = _vmul(auVar5,auVar5);
  _vaddabc(auVar5,auVar5);
  _vmaddbc(extraout_vf1_00,auVar5);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

void playerDrawShadow() {
	static char __FUNCTION__[17] = {
		/* [0] = */ 112,
		/* [1] = */ 108,
		/* [2] = */ 97,
		/* [3] = */ 121,
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
	
  ANI_CTRL *pAVar1;
  SGDCOORDINATE *pSVar2;
  GRA3DEMULATIONLIGHTDATACREATIONDATA *pELDCD;
  HeaderSection *pHVar3;
  float avBBWorld [8] [4];
  
  pAVar1 = plyr_mdlGetANI_CTRL__Fv();
  if (pAVar1 != (ANI_CTRL *)0x0) {
    pHVar3 = pAVar1->base_p;
    if (pHVar3 == (HeaderSection *)0x0) {
      _SetLineInfo__FPCciT0T0("plyr_mdl.c",0x39c,"playerDrawShadow","pAC->base_p");
      g3ddbgAssert__FbPCce(pAVar1->base_p != (HeaderSection *)0x0,&DAT_003f3a68);
      pHVar3 = pAVar1->base_p;
      pSVar2 = pHVar3->coordp;
    }
    else {
      pSVar2 = pHVar3->coordp;
    }
    if (pSVar2 == (SGDCOORDINATE *)0x0) {
      _SetLineInfo__FPCciT0T0("plyr_mdl.c",0x39d,"playerDrawShadow","pAC->base_p->coordp");
      g3ddbgAssert__FbPCce(pAVar1->base_p->coordp != (SGDCOORDINATE *)0x0,&DAT_003f3a68);
      pSVar2 = pAVar1->base_p->coordp;
    }
    else {
      pSVar2 = pHVar3->coordp;
    }
    charbbGet__FPA3_fPC8ANI_CTRLPA3_Cf(avBBWorld,pAVar1,(float (*) [4])pSVar2);
                    /* inlined from man_data.h */
    if (plyr_data.field0_0x0.man_data_draw_lock_cnt < 0) {
      printf("<<<<<<<<<WARNING FILE[%s] LINE[%d]>>>>>>>>>>\n");
      PrintWarningReal("man_data_draw_lock_cnt < 0");
    }
    if (plyr_data.field0_0x0.man_data_draw_lock_cnt == 0) {
                    /* end of inlined section */
      pAVar1 = plyr_mdlGetShadowANI_CTRL__Fv();
      pELDCD = _GetEmulationLightdataCreationDataRef__Fv();
      gra3dDrawSGDShadowCharacter__FP8ANI_CTRLP13SGDCOORDINATEPA3_CfPC35GRA3DEMULATIONLIGHTDATACREATIONDATA
                (pAVar1,pSVar2,avBBWorld,pELDCD);
    }
  }
  return;
}

void PlayerDrawLock() {
                    /* inlined from man_data.h */
  plyr_data.field0_0x0.man_data_draw_lock_cnt = plyr_data.field0_0x0.man_data_draw_lock_cnt + 1;
  return;
}

void PlayerDrawUnlock() {
                    /* inlined from man_data.h */
  plyr_data.field0_0x0.man_data_draw_lock_cnt = plyr_data.field0_0x0.man_data_draw_lock_cnt + -1;
  return;
}

void DrawGirl() {
	float work_amb[4];
	HeaderSection *hs;
	float tgirlbox[8][4];
	int iAlpha;
	HeaderSection *item;
	HeaderSection *item;
	
  SGDFILEHEADER *pSGDTop;
  char cVar1;
  int iVar2;
  float (*pafVar3) [4];
  GRA3DEMULATIONLIGHTDATACREATIONDATA *pData;
  int iAlpha;
  HeaderSection *pHVar4;
  float work_amb [4];
  float tgirlbox [8] [4];
  
  iVar2 = IsReadyPlyrMdl__Fv();
  if ((iVar2 != 0) && (iVar2 = GetPlyrDrawFLG__Fv(), iVar2 != 0)) {
                    /* inlined from man_data.h */
    if (plyr_data.field0_0x0.man_data_draw_lock_cnt < 0) {
      printf("<<<<<<<<<WARNING FILE[%s] LINE[%d]>>>>>>>>>>\n");
      PrintWarningReal("man_data_draw_lock_cnt < 0");
    }
    if (plyr_data.field0_0x0.man_data_draw_lock_cnt == 0) {
                    /* end of inlined section */
      gra3dLightEnablePush__Fv();
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
      pafVar3 = gra3dGetAmbientRef__Fv();
      work_amb[2] = (*pafVar3)[2];
      work_amb[3] = (*pafVar3)[3];
      work_amb[0] = (float)*(undefined8 *)*pafVar3;
      work_amb[1] = (float)((ulong)*(undefined8 *)*pafVar3 >> 0x20);
                    /* inlined from man_data.h */
                    /* end of inlined section */
                    /* inlined from man_data.h */
      pSGDTop = (SGDFILEHEADER *)(plyr_data.field0_0x0.mpAniCtrl)->base_p;
                    /* end of inlined section */
      charbbGet__FPA3_fPC8ANI_CTRLPA3_Cf
                (tgirlbox,plyr_data.field0_0x0.mpAniCtrl,(float (*) [4])pSGDTop->pCoord);
      pData = _GetEmulationLightdataCreationDataRef__Fv();
      iVar2 = CheckModelBoundingBox__FPA3_Cf(tgirlbox);
      if (iVar2 != 0) {
        iAlpha = 0x80;
        playerSetLight__FPCfPC35GRA3DEMULATIONLIGHTDATACREATIONDATA(plyr_wrk.bwp,pData);
        iVar2 = PlayerModeIsFinder__Fv();
        if (iVar2 == 0) {
          iAlpha = playerCalcAlpha__FPC8ANI_CTRL(plyr_data.field0_0x0.mpAniCtrl);
        }
        AccessoryDraw__8MAN_DATAi(&plyr_data.field0_0x0,iAlpha);
        iVar2 = gra3dIsMonotoneDrawEnable__Fv();
        if (iVar2 == 0) {
          SendEneVram__FPUii((plyr_data.field0_0x0.mpAniCtrl)->mdl_p,0x2bc0);
        }
        else {
          SendEneVramMono__FPUiiT0
                    ((plyr_data.field0_0x0.mpAniCtrl)->mdl_p,0x2bc0,
                     (plyr_data.field0_0x0.mpAniCtrl)->bwc_p);
        }
        ManmdlSetAlpha__FPvUc(pSGDTop,(uchar)iAlpha);
        _gra3dDrawSGD__FP13SGDFILEHEADER13SGDRENDERTYPEP13SGDCOORDINATEi
                  (pSGDTop,SRT_REALTIME,(SGDCOORDINATE *)0x0,-1);
        DrawGirlSubObj__FPUiUc((plyr_data.field0_0x0.mpAniCtrl)->mpk_p,(uchar)iAlpha);
                    /* inlined from man_data.h */
        if ((((plyr_wrk.cmn_wrk.st.sta & 0x8000) != 0) &&
            (cVar1 = GetSynchroModeFlg__Fv(), cVar1 == '\0')) &&
           ((iVar2 = ((plyr_data.field0_0x0.mpAniCtrl)->anm).playnum, iVar2 < 0x18 || (0x39 < iVar2)
            ))) {
                    /* end of inlined section */
          pHVar4 = (HeaderSection *)GetItemSgdAddr__FPi((int *)plyr_data.plyr_light_mdl_p);
          SendItemVram__FPUii((uint *)plyr_data.plyr_light_mdl_p,0);
          ManmdlSetAlpha__FPvUc(pHVar4,plyr_data.plyr_light_alpha);
          ManItemSGDDraw__FP13HeaderSectionP8ANI_CTRLi(pHVar4,plyr_data.field0_0x0.mpAniCtrl,1);
                    /* inlined from man_data.h */
        }
        iVar2 = ((plyr_data.field0_0x0.mpAniCtrl)->anm).playnum;
        if ((iVar2 == 0x30) || (iVar2 == 0x31)) {
                    /* end of inlined section */
          pHVar4 = (HeaderSection *)GetItemSgdAddr__FPi((int *)plyr_data.plyr_cam_mdl_p);
          SendItemVram__FPUii((uint *)plyr_data.plyr_cam_mdl_p,0);
          ManmdlSetAlpha__FPvUc(pHVar4,plyr_data.plyr_cam_alpha);
          ManItemSGDDraw__FP13HeaderSectionP8ANI_CTRLi(pHVar4,plyr_data.field0_0x0.mpAniCtrl,0);
        }
        _SetPREVIOUSTRI2PRIM__FP17SGDPROCUNITHEADER((SGDPROCUNITHEADER *)0x0);
      }
      gra3dSetAmbient__FPCf(work_amb);
      gra3dLightEnablePop__Fv();
      gra3dApplyLight__Fv();
    }
  }
  return;
}

static void LeftHandCtrl(SGDCOORDINATE *cp) {
	float target[4];
	float yrot;
	
  float rx;
  float target [4];
  
  rx = (plyr_wrk.spot_rot[1] * DAT_003ee804) / DAT_003ee808;
  sceVu0CopyVector(target,cp[6].matLocalWorld[3]);
  target[1] = target[1] - (plyr_wrk.spot_rot[0] * 60.0) / DAT_003ee80c;
  if (plyr_wrk.cmn_wrk.mode != '\x06') {
    motInversKinematics__FP13SGDCOORDINATEPfPUiUc
              (cp,target,((plyr_data.field0_0x0.mpAniCtrl)->mot).dat,'\x06');
    LocalRotMatrixX__FPA3_fT0f((float (*) [4])(cp + 0xb),(float (*) [4])(cp + 0xb),rx);
  }
  return;
}

ANI_CTRL* plyr_mdlGetANI_CTRL() {
                    /* inlined from man_data.h */
  return plyr_data.field0_0x0.mpAniCtrl;
}

ANI_CTRL* plyr_mdlGetShadowANI_CTRL() {
                    /* inlined from man_data.h */
  return plyr_data.field0_0x0.mpShadowAniCtrl;
}

static void PlyrNeckFrameInit() {
  plyr_neck_now_priority = LTP_MIO_LEAST;
  return;
}

static void PlyrNeckInit() {
  SetPlyrNeckFlg__Fi(1);
  ltd_mode = 0;
  pre_priority = LTP_MIO_LEAST;
  same_priority_count = 0;
  plyr_neck_no_registered_cnt = 0;
  PlyrNeckFrameInit__Fv();
  return;
}

int PlyrNeckRegisterTarget(LOOK_AT_PARAM *param, LOOK_TARGET_PRIORITY_MIO priority) {
  int iVar1;
  
  iVar1 = IsReadyPlyrMdl__Fv();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = 0;
    if ((uint)priority < (uint)plyr_neck_now_priority) {
      iVar1 = IsTargetInSight__FP8ANI_CTRLPf(plyr_data.field0_0x0.mpAniCtrl,param->pos);
      if (iVar1 == 0) {
        iVar1 = 0;
      }
      else {
        plyr_neck_now_param.pos._0_8_ = *(undefined8 *)param->pos;
        iVar1 = 1;
        plyr_neck_now_param.pos._8_8_ = *(undefined8 *)(param->pos + 2);
        plyr_neck_now_param.eye_spd = param->eye_spd;
        plyr_neck_now_param.head_spd = param->head_spd;
        plyr_neck_now_param.chest_spd = param->chest_spd;
        plyr_neck_now_param.enable = param->enable;
        plyr_neck_now_priority = priority;
      }
    }
  }
  return iVar1;
}

void SetPlyrNeckFlg(int flg) {
  plyr_neck_flg = flg;
  return;
}

static void PlyrNeckMain() {
  plyr_neck_now_param.enable = plyr_neck_flg;
  if (ltd_mode == 0) {
    if (pre_priority == plyr_neck_now_priority) {
      same_priority_count = same_priority_count + 2;
    }
    else {
      same_priority_count = 0;
    }
    if (plyr_neck_now_priority == LTP_MIO_LEAST) {
      plyr_neck_now_param.enable = 0;
      plyr_neck_no_registered_cnt = plyr_neck_no_registered_cnt + 2;
    }
    else {
      plyr_neck_no_registered_cnt = 0;
    }
  }
  else if (ltd_mode == 1) {
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_relops.h */
                    /* end of inlined section */
    same_priority_count = same_priority_count + 2;
    ltd_mode = (int)(same_priority_count < 0x709);
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_relops.h */
    if (pre_priority != plyr_neck_now_priority) {
      ltd_mode = 0;
    }
  }
  pre_priority = plyr_neck_now_priority;
                    /* end of inlined section */
  PlyrNeckFrameInit__Fv();
  return;
}

static LOOK_AT_PARAM* PlyrNeckGetParam() {
  return &plyr_neck_now_param;
}

int plyr_mdlBankPlay(int no, int effect, int loop, int fade_time, SND_3D_SET *s3d, int vol, int pitch) {
	static char __FUNCTION__[17] = {
		/* [0] = */ 112,
		/* [1] = */ 108,
		/* [2] = */ 121,
		/* [3] = */ 114,
		/* [4] = */ 95,
		/* [5] = */ 109,
		/* [6] = */ 100,
		/* [7] = */ 108,
		/* [8] = */ 66,
		/* [9] = */ 97,
		/* [10] = */ 110,
		/* [11] = */ 107,
		/* [12] = */ 80,
		/* [13] = */ 108,
		/* [14] = */ 97,
		/* [15] = */ 121,
		/* [16] = */ 0
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
  if (plyr_data.field0_0x0.man_data_bank_no != -1) {
    iVar1 = SndBankPlay(plyr_data.field0_0x0.man_data_bank_no,no,effect,loop,vol,pitch,fade_time,s3d
                       );
    return iVar1;
  }
                    /* end of inlined section */
  SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
  PrintAssertReal("plyr_bank_id is Illegal");
  return 0x300000;
}

int plyr_mdlBankIsLoopSnd(int no) {
	static char __FUNCTION__[22] = {
		/* [0] = */ 112,
		/* [1] = */ 108,
		/* [2] = */ 121,
		/* [3] = */ 114,
		/* [4] = */ 95,
		/* [5] = */ 109,
		/* [6] = */ 100,
		/* [7] = */ 108,
		/* [8] = */ 66,
		/* [9] = */ 97,
		/* [10] = */ 110,
		/* [11] = */ 107,
		/* [12] = */ 73,
		/* [13] = */ 115,
		/* [14] = */ 76,
		/* [15] = */ 111,
		/* [16] = */ 111,
		/* [17] = */ 112,
		/* [18] = */ 83,
		/* [19] = */ 110,
		/* [20] = */ 100,
		/* [21] = */ 0
	};
	
  int iVar1;
  
                    /* inlined from man_data.h */
                    /* end of inlined section */
                    /* inlined from man_data.h */
                    /* end of inlined section */
                    /* inlined from man_data.h */
  if (plyr_data.field0_0x0.man_data_bank_no != -1) {
    iVar1 = SndBankIsLoopSnd(plyr_data.field0_0x0.man_data_bank_no,no);
    return iVar1;
  }
                    /* end of inlined section */
  SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
  PrintAssertReal("plyr_bank_id is Illegal");
  return 0;
}

int GetPlyrMdlNo() {
  return GameCostume.mPlyrMdlNo;
}

void SetPlyrMdlNo(int iMdlNo) {
  GameCostume.mPlyrMdlNo = iMdlNo;
  return;
}

int GetPlyrAcsNo() {
  return GameCostume.mPlyrAcsNo;
}

void SetPlyrAcsNo(int iMdlNo) {
  GameCostume.mPlyrAcsNo = iMdlNo;
  return;
}

int GetSisterMdlNo() {
  return GameCostume.mSisterMdlNo;
}

void SetSisterMdlNo(int iMdlNo) {
  GameCostume.mSisterMdlNo = iMdlNo;
  return;
}

int GetSisterAcsNo() {
  return GameCostume.mSisterAcsNo;
}

void SetSisterAcsNo(int iAcsNo) {
  GameCostume.mSisterAcsNo = iAcsNo;
  return;
}

void CostumeSetSave(MC_SAVE_DATA *data) {
  data->size = 0x10;
  data->addr = (uchar *)&GameCostume;
  return;
}

G3DLIGHT* G3DLIGHT * _fixed_array_verifyrange<G3DLIGHT>(size_t v, size_t _max) {
  int mdl_p;
  int anm_p;
  int smdl_p;
  
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)this;
}

GRA3DLIGHTSTATUS* GRA3DLIGHTSTATUS * _fixed_array_verifyrange<GRA3DLIGHTSTATUS>(size_t v, size_t _max) {
  int mdl_p;
  int anm_p;
  int smdl_p;
  
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)this;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if ((__priority == 0xffff) && (__initialize_p == 1)) {
                    /* inlined from plyr_mdl.c */
    __8MAN_DATA(&plyr_data.field0_0x0);
    plyr_data.field0_0x0.__vtable = (MAN_DATA__vtable *)_vt_14PLYR_PLYR_DATA;
    InitializeIn__8MAN_DATA(&plyr_data.field0_0x0);
    plyr_data._56_4_ = plyr_data._56_4_ & 0xfffcffff;
  }
  return;
}

type_info& G3DLIGHT type_info function() {
  int mdl_p;
  int anm_p;
  int smdl_p;
  
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)this;
}

type_info& GRA3DLIGHTSTATUS type_info function() {
  int mdl_p;
  int anm_p;
  int smdl_p;
  
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)this;
}

type_info& PLYR_PLYR_DATA type_info function() {
  int mdl_p;
  int anm_p;
  int smdl_p;
  
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)this;
}

int PLYR_PLYR_DATA::Setup(int mdl_no, int anm_no, int bd_no, int smdl_no, int iAcsNo) {
	int ret;
	
  int mdl_p;
  int anm_p;
  int smdl_p;
  
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)this;
}

int PLYR_PLYR_DATA::IsReady() {
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

static void global constructors keyed to g_iMaxPlayerAlpha() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
