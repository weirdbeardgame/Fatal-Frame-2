// STATUS: NOT STARTED

#include "man_data.h"

int aBoneLabelTbl[16] = {
	/* [0] = */ 17,
	/* [1] = */ 6,
	/* [2] = */ 6,
	/* [3] = */ 6,
	/* [4] = */ 6,
	/* [5] = */ 6,
	/* [6] = */ 2,
	/* [7] = */ 2,
	/* [8] = */ 2,
	/* [9] = */ 2,
	/* [10] = */ 2,
	/* [11] = */ 2,
	/* [12] = */ 2,
	/* [13] = */ 2,
	/* [14] = */ 2,
	/* [15] = */ 2
};

__vtbl_ptr_type MAN_DATA virtual table[4] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ 0x2b7d68,
		/* .__delta2 = */ 32104
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ 0x2b7da8,
		/* .__delta2 = */ 32168
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ 0x2b7dc0,
		/* .__delta2 = */ 32192
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

unsigned char MAN_DATA type_info node[8];

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3baf80;
	
  int mdl_p;
  int anm_p;
  int smdl_p;
  
  g3ddbgAssert__FbPCce(false,str_574);
  return (int)this;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    IsReady__8MAN_DATA((MAN_DATA *)s_void__003f19b0);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    IsReady__8MAN_DATA((MAN_DATA *)s_char__003f19b8);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    IsReady__8MAN_DATA((MAN_DATA *)"unsigned int*");
  }
  return (uint **)0x0;
}

void MAN_DATA::InitializeIn() {
  this->mpShadowAniCtrl = (ANI_CTRL *)0x0;
  this->mMdlNo = -1;
  this->man_data_bank_no = -1;
  *(uint *)&this->field_0x28 = *(uint *)&this->field_0x28 & 0xffffffde;
  this->mpAniCtrl = (ANI_CTRL *)0x0;
  this->man_data_draw_lock_cnt = 0;
  this->mBDNo = -1;
  this->mAcsNo = -1;
  this->mAnmNo = -1;
  this->mSMdlNo = -1;
  return;
}

MAN_DATA* MAN_DATA::MAN_DATA() {
  __vtbl_ptr_type *p_Var1;
  
  p_Var1 = _vt_8MAN_DATA;
  this->mpShadowAniCtrl = (ANI_CTRL *)0x0;
  this->__vtable = (MAN_DATA__vtable *)_vt_8MAN_DATA;
  InitializeIn__8MAN_DATA(this);
  return (MAN_DATA *)p_Var1;
}

void ManItemSGDDraw(HeaderSection *l_hs, ANI_CTRL *pAniCtrl, int iItemLabel) {
	SGDCOORDINATE *l_cp;
	HeaderSection *hs;
	SGDCOORDINATE *cp;
	
  SGDCOORDINATE *pCoord;
  
  pCoord = l_hs->coordp;
  sceVu0CopyMatrix(pCoord,pAniCtrl->base_p->coordp[aBoneLabelTbl[iItemLabel]].matLocalWorld);
  sgdCalcBoneCoordinate__FP13SGDCOORDINATEi(pCoord,l_hs->blocks - 1);
  _gra3dDrawSGD__FP13SGDFILEHEADER13SGDRENDERTYPEP13SGDCOORDINATEi
            ((SGDFILEHEADER *)l_hs,SRT_REALTIME,(SGDCOORDINATE *)0x0,-1);
  return;
}

void MAN_DATA::AccessoryDraw(int iAlpha) {
	static char __FUNCTION__[14] = {
		/* [0] = */ 65,
		/* [1] = */ 99,
		/* [2] = */ 99,
		/* [3] = */ 101,
		/* [4] = */ 115,
		/* [5] = */ 115,
		/* [6] = */ 111,
		/* [7] = */ 114,
		/* [8] = */ 121,
		/* [9] = */ 68,
		/* [10] = */ 114,
		/* [11] = */ 97,
		/* [12] = */ 119,
		/* [13] = */ 0
	};
	HeaderSection *item;
	
  int iVar1;
  HeaderSection *l_hs;
  int *mdl_pp;
  
  mdl_pp = &this->mpAcsMdl;
  if (-1 < this->mAcsNo) {
    iVar1 = mmanageIsReadyItemMdl__FiPii(this->mAcsNo,mdl_pp,0);
    if (iVar1 == 0) {
      _SetLineInfo__FPCciT0T0
                ("man_data.c",0x4a,"AccessoryDraw","(mmanageIsReadyItemMdl(mAcsNo, &mpAcsMdl))");
      iVar1 = mmanageIsReadyItemMdl__FiPii(this->mAcsNo,mdl_pp,0);
      g3ddbgAssert__FbPCce(iVar1 != 0,"Not Ready Accessory Mdl");
    }
    l_hs = (HeaderSection *)GetItemSgdAddr__FPi((int *)*mdl_pp);
    ManmdlSetAlpha__FPvUc(l_hs,(uchar)iAlpha);
    SendItemVram__FPUii((uint *)*mdl_pp,0);
    ManItemSGDDraw__FP13HeaderSectionP8ANI_CTRLi(l_hs,this->mpAniCtrl,this->mAcsNo);
  }
  return;
}

int MAN_DATA::SetupIn(int mdl_no, int anm_no, int bd_no, int smdl_no, int iAcsNo) {
	int ret;
	
  int iVar1;
  int iVar2;
  
  iVar1 = this->mAcsNo;
  iVar2 = 0;
  if (iVar1 != iAcsNo) {
    if (-1 < iVar1) {
      mmanageClearItemMdl__Fi(iVar1);
    }
    this->mAcsNo = iAcsNo;
    if (-1 < iAcsNo) {
      iVar2 = 1;
      mmanageReqItemMdl__Fi(iAcsNo);
    }
  }
  iVar1 = this->mMdlNo;
  if (iVar1 == mdl_no) {
    iVar1 = this->mSMdlNo;
  }
  else if (mdl_no < 0) {
    iVar1 = this->mSMdlNo;
  }
  else {
    if (iVar1 < 0) {
      this->mMdlNo = mdl_no;
    }
    else {
      mmanageClearMdl__Fi(iVar1);
      this->mMdlNo = mdl_no;
    }
    iVar2 = 1;
    mmanageReqMdl__Fi(mdl_no);
    iVar1 = this->mSMdlNo;
  }
  if (iVar1 == smdl_no) {
    iVar1 = this->mAnmNo;
  }
  else if (smdl_no < 0) {
    iVar1 = this->mAnmNo;
  }
  else {
    if (iVar1 < 0) {
      this->mSMdlNo = smdl_no;
    }
    else {
      mmanageClearMdl__Fi(iVar1);
      this->mSMdlNo = smdl_no;
    }
    iVar2 = 1;
    mmanageReqMdl__Fi(smdl_no);
    iVar1 = this->mAnmNo;
  }
  if (iVar1 == anm_no) {
    iVar1 = this->mBDNo;
  }
  else if (anm_no < 0) {
    iVar1 = this->mBDNo;
  }
  else {
    iVar2 = 1;
    ReleaseAnmIn__8MAN_DATA(this);
    this->mAnmNo = anm_no;
    mmanageReqAnm__Fi(anm_no);
    iVar1 = this->mBDNo;
  }
  if ((iVar1 != bd_no) && (-1 < bd_no)) {
    if (this->man_data_bank_no != -1) {
      SndBankRelease(this->man_data_bank_no);
    }
    this->mBDNo = bd_no;
    iVar1 = SndBankNew(bd_no,bd_no + -1,-1);
    this->man_data_bank_no = iVar1;
  }
  return iVar2;
}

void MAN_DATA::InitIn(int mdl_p, int anm_p, int smdl_p) {
  ANI_CTRL *pAVar1;
  uint uVar2;
  
  uVar2 = *(uint *)&this->field_0x28;
  if ((uVar2 & 1) == 0) {
    pAVar1 = (ANI_CTRL *)
             motInitOneEnemyAnm__FPUiT0UiUi((uint *)anm_p,(uint *)mdl_p,this->mMdlNo,this->mAnmNo);
    this->mpAniCtrl = pAVar1;
    pAVar1 = (ANI_CTRL *)
             motInitOneEnemyAnm__FPUiT0UiUi((uint *)anm_p,(uint *)smdl_p,this->mSMdlNo,this->mAnmNo)
    ;
    this->mpShadowAniCtrl = pAVar1;
    uVar2 = *(uint *)&this->field_0x28 | 1;
    *(uint *)&this->field_0x28 = uVar2;
  }
  if ((uVar2 & 0x20) == 0) {
    acsSetEneCollision__FP8ANI_CTRLUs(this->mpAniCtrl,*(short *)&this->mMdlNo);
    acsSetRopeCollision__FP8ANI_CTRLUs(this->mpAniCtrl,*(short *)&this->mMdlNo);
    *(uint *)&this->field_0x28 = *(uint *)&this->field_0x28 | 0x20;
  }
  return;
}

int MAN_DATA::ReadyIn(int *mdl_pp, int *anm_pp, int *smdl_pp) {
	int ret;
	
  uint uVar1;
  uint uVar2;
  
  uVar1 = 1;
  if (-1 < this->mAcsNo) {
    uVar1 = mmanageIsReadyItemMdl__FiPii(this->mAcsNo,&this->mpAcsMdl,0);
    uVar1 = uVar1 & 1;
  }
  if (this->mMdlNo < 0) {
    uVar1 = 0;
  }
  else {
    uVar2 = mmanageIsReadyMdl__FiPii(this->mMdlNo,mdl_pp,1);
    uVar1 = uVar1 & uVar2;
  }
  if (this->mSMdlNo < 0) {
    uVar1 = 0;
  }
  else {
    uVar2 = mmanageIsReadyMdl__FiPii(this->mSMdlNo,smdl_pp,1);
    uVar1 = uVar1 & uVar2;
  }
  if (this->mAnmNo < 0) {
    uVar1 = 0;
  }
  else {
    uVar2 = mmanageIsReadyAnm__FiPii(this->mAnmNo,anm_pp,1);
    uVar1 = uVar1 & uVar2;
  }
  if ((-1 < this->mBDNo) && (this->man_data_bank_no != -1)) {
    uVar2 = SndBankIsReady(this->man_data_bank_no);
    uVar1 = uVar1 & uVar2;
  }
  return uVar1;
}

void MAN_DATA::ReleaseAnmIn() {
  uint uVar1;
  int mdl_no;
  
  uVar1 = *(uint *)&this->field_0x28;
  if ((uVar1 & 0x20) != 0) {
    acsDelEneCollision__FP8ANI_CTRL(this->mpAniCtrl);
    acsDelRopeCollision__FP8ANI_CTRL(this->mpAniCtrl);
    uVar1 = *(uint *)&this->field_0x28 & 0xffffffdf;
    *(uint *)&this->field_0x28 = uVar1;
  }
  if ((uVar1 & 1) == 0) {
    mdl_no = this->mAnmNo;
  }
  else {
    mimClearAllVertex__FP8ANI_CTRL(this->mpAniCtrl);
    acsResetCloth__FP8ANI_CTRL(this->mpAniCtrl);
    motReleaseOneAnm__FPv(this->mpAniCtrl);
    motReleaseOneAnm__FPv(this->mpShadowAniCtrl);
    this->mpShadowAniCtrl = (ANI_CTRL *)0x0;
    this->mpAniCtrl = (ANI_CTRL *)0x0;
    *(uint *)&this->field_0x28 = *(uint *)&this->field_0x28 & 0xfffffffe;
    mdl_no = this->mAnmNo;
  }
  if (-1 < mdl_no) {
    mmanageClearAnm__Fi(mdl_no);
    this->mAnmNo = -1;
  }
  return;
}

void MAN_DATA::ReleaseIn() {
  int iVar1;
  
  if (-1 < this->mAcsNo) {
    mmanageClearItemMdl__Fi(this->mAcsNo);
    this->mAcsNo = -1;
  }
  if (this->mMdlNo < 0) {
    iVar1 = this->mSMdlNo;
  }
  else {
    mmanageClearMdl__Fi(this->mMdlNo);
    this->mMdlNo = -1;
    iVar1 = this->mSMdlNo;
  }
  if (iVar1 < 0) {
    iVar1 = this->mBDNo;
  }
  else {
    mmanageClearMdl__Fi(iVar1);
    this->mSMdlNo = -1;
    iVar1 = this->mBDNo;
  }
  if (-1 < iVar1) {
    SndBankRelease(this->man_data_bank_no);
    this->mBDNo = -1;
    this->man_data_bank_no = -1;
  }
  ReleaseAnmIn__8MAN_DATA(this);
  return;
}

type_info& MAN_DATA type_info function() {
  int mdl_p;
  int anm_p;
  int smdl_p;
  
  g3ddbgAssert__FbPCce(false,str_574);
  return (int)this;
}

int MAN_DATA::Setup(int mdl_no, int anm_no, int bd_no, int smdl_no, int mAcsNo) {
  int mdl_p;
  int anm_p;
  int smdl_p;
  
  g3ddbgAssert__FbPCce(false,str_574);
  return (int)this;
}

int MAN_DATA::IsReady() {
	int mdl_p;
	int anm_p;
	int smdl_p;
	int ret;
	
  int mdl_p;
  int anm_p;
  int smdl_p;
  
  g3ddbgAssert__FbPCce(false,str_574);
  return (int)this;
}
