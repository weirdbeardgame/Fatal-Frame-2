// STATUS: NOT STARTED

#include "n_equip_tray.h"

SUB_FUNC_SI_PARAM CNEquipTraySave::sub_func_si_param[4] = {
	/* [0] = */ {
		/* .EffTime = */ 12,
		/* .SearchFlg = */ 0
	},
	/* [1] = */ {
		/* .EffTime = */ 15,
		/* .SearchFlg = */ 1
	},
	/* [2] = */ {
		/* .EffTime = */ 25,
		/* .SearchFlg = */ 1
	},
	/* [3] = */ {
		/* .EffTime = */ 50,
		/* .SearchFlg = */ 1
	}
};

SUB_FUNC_MAHI_PARAM CNEquipTraySave::sub_func_mahi_param[4] = {
	/* [0] = */ {
		/* .EffTime = */ 8,
		/* .StopTime = */ 1,
		/* .ActTime = */ 1
	},
	/* [1] = */ {
		/* .EffTime = */ 12,
		/* .StopTime = */ 1,
		/* .ActTime = */ 1
	},
	/* [2] = */ {
		/* .EffTime = */ 20,
		/* .StopTime = */ 2,
		/* .ActTime = */ 1
	},
	/* [3] = */ {
		/* .EffTime = */ 34,
		/* .StopTime = */ 3,
		/* .ActTime = */ 1
	}
};

SUB_FUNC_SUB_PARAM CNEquipTraySave::sub_func_oso_param[4] = {
	/* [0] = */ {
		/* .EffTime = */ 12
	},
	/* [1] = */ {
		/* .EffTime = */ 18
	},
	/* [2] = */ {
		/* .EffTime = */ 24
	},
	/* [3] = */ {
		/* .EffTime = */ 40
	}
};

SUB_FUNC_SUB_PARAM CNEquipTraySave::sub_func_seal_param[4] = {
	/* [0] = */ {
		/* .EffTime = */ 10
	},
	/* [1] = */ {
		/* .EffTime = */ 20
	},
	/* [2] = */ {
		/* .EffTime = */ 30
	},
	/* [3] = */ {
		/* .EffTime = */ 50
	}
};

SUB_FUNC_SUB_PARAM CNEquipTraySave::sub_func_trace_param[4] = {
	/* [0] = */ {
		/* .EffTime = */ 10
	},
	/* [1] = */ {
		/* .EffTime = */ 18
	},
	/* [2] = */ {
		/* .EffTime = */ 25
	},
	/* [3] = */ {
		/* .EffTime = */ 50
	}
};

SUB_FUNC_KOUGEKI_PARAM CNEquipTraySave::sub_func_rei_param[4] = {
	/* [0] = */ {
		/* .NDmgMag = */ 1.5f,
		/* .SDmgMag = */ 1.8f,
		/* .SlowHTTime = */ 0,
		/* .SlowHTRate = */ 0.32f
	},
	/* [1] = */ {
		/* .NDmgMag = */ 1.69999993f,
		/* .SDmgMag = */ 2.19999981f,
		/* .SlowHTTime = */ 0,
		/* .SlowHTRate = */ 0.32f
	},
	/* [2] = */ {
		/* .NDmgMag = */ 2.f,
		/* .SDmgMag = */ 2.39999986f,
		/* .SlowHTTime = */ 0,
		/* .SlowHTRate = */ 0.32f
	},
	/* [3] = */ {
		/* .NDmgMag = */ 2.f,
		/* .SDmgMag = */ 2.8f,
		/* .SlowHTTime = */ 0,
		/* .SlowHTRate = */ 0.32f
	}
};

SUB_FUNC_KOUGEKI_PARAM CNEquipTraySave::sub_func_koku_param[4] = {
	/* [0] = */ {
		/* .NDmgMag = */ 1.f,
		/* .SDmgMag = */ 1.5f,
		/* .SlowHTTime = */ 0,
		/* .SlowHTRate = */ 1.f
	},
	/* [1] = */ {
		/* .NDmgMag = */ 1.f,
		/* .SDmgMag = */ 1.69999993f,
		/* .SlowHTTime = */ 120,
		/* .SlowHTRate = */ 0.32f
	},
	/* [2] = */ {
		/* .NDmgMag = */ 1.5f,
		/* .SDmgMag = */ 1.8f,
		/* .SlowHTTime = */ 120,
		/* .SlowHTRate = */ 0.32f
	},
	/* [3] = */ {
		/* .NDmgMag = */ 1.5f,
		/* .SDmgMag = */ 2.f,
		/* .SlowHTTime = */ 120,
		/* .SlowHTRate = */ 0.32f
	}
};

SUB_FUNC_KOUGEKI_PARAM CNEquipTraySave::sub_func_metsu_param[4] = {
	/* [0] = */ {
		/* .NDmgMag = */ 0.199999988f,
		/* .SDmgMag = */ 2.5f,
		/* .SlowHTTime = */ 0,
		/* .SlowHTRate = */ 0.299999982f
	},
	/* [1] = */ {
		/* .NDmgMag = */ 0.799999952f,
		/* .SDmgMag = */ 3.f,
		/* .SlowHTTime = */ 0,
		/* .SlowHTRate = */ 0.299999982f
	},
	/* [2] = */ {
		/* .NDmgMag = */ 1.5f,
		/* .SDmgMag = */ 3.19999981f,
		/* .SlowHTTime = */ 0,
		/* .SlowHTRate = */ 0.299999982f
	},
	/* [3] = */ {
		/* .NDmgMag = */ 3.f,
		/* .SDmgMag = */ 3.6f,
		/* .SlowHTTime = */ 0,
		/* .SlowHTRate = */ 0.299999982f
	}
};

SUB_FUNC_KOUGEKI_PARAM CNEquipTraySave::sub_func_ren_param[4] = {
	/* [0] = */ {
		/* .NDmgMag = */ 2.f,
		/* .SDmgMag = */ 1.f,
		/* .SlowHTTime = */ 0,
		/* .SlowHTRate = */ 0.f
	},
	/* [1] = */ {
		/* .NDmgMag = */ 2.5f,
		/* .SDmgMag = */ 0.799999952f,
		/* .SlowHTTime = */ 0,
		/* .SlowHTRate = */ 0.f
	},
	/* [2] = */ {
		/* .NDmgMag = */ 3.f,
		/* .SDmgMag = */ 0.599999964f,
		/* .SlowHTTime = */ 0,
		/* .SlowHTRate = */ 0.f
	},
	/* [3] = */ {
		/* .NDmgMag = */ 4.f,
		/* .SDmgMag = */ 0.5f,
		/* .SlowHTTime = */ 0,
		/* .SlowHTRate = */ 0.f
	}
};

NEQUIP_FUNC_DAT CNEquipTrayWrk::equip_func_tbl[10] = {
	/* [0] = */ {
		/* .need_stock_num = */ 0,
		/* .pk2_no = */ 24,
		/* .r = */ 130,
		/* .g = */ 130,
		/* .b = */ 130,
		/* .bHitBack = */ 1
	},
	/* [1] = */ {
		/* .need_stock_num = */ 1,
		/* .pk2_no = */ 68,
		/* .r = */ 179,
		/* .g = */ 140,
		/* .b = */ 186,
		/* .bHitBack = */ 1
	},
	/* [2] = */ {
		/* .need_stock_num = */ 2,
		/* .pk2_no = */ 66,
		/* .r = */ 142,
		/* .g = */ 186,
		/* .b = */ 140,
		/* .bHitBack = */ 1
	},
	/* [3] = */ {
		/* .need_stock_num = */ 1,
		/* .pk2_no = */ 67,
		/* .r = */ 192,
		/* .g = */ 163,
		/* .b = */ 132,
		/* .bHitBack = */ 1
	},
	/* [4] = */ {
		/* .need_stock_num = */ 2,
		/* .pk2_no = */ 71,
		/* .r = */ 156,
		/* .g = */ 155,
		/* .b = */ 139,
		/* .bHitBack = */ 1
	},
	/* [5] = */ {
		/* .need_stock_num = */ 3,
		/* .pk2_no = */ 70,
		/* .r = */ 131,
		/* .g = */ 179,
		/* .b = */ 158,
		/* .bHitBack = */ 1
	},
	/* [6] = */ {
		/* .need_stock_num = */ 2,
		/* .pk2_no = */ 64,
		/* .r = */ 203,
		/* .g = */ 199,
		/* .b = */ 148,
		/* .bHitBack = */ 1
	},
	/* [7] = */ {
		/* .need_stock_num = */ 3,
		/* .pk2_no = */ 63,
		/* .r = */ 111,
		/* .g = */ 162,
		/* .b = */ 205,
		/* .bHitBack = */ 1
	},
	/* [8] = */ {
		/* .need_stock_num = */ 4,
		/* .pk2_no = */ 65,
		/* .r = */ 220,
		/* .g = */ 123,
		/* .b = */ 123,
		/* .bHitBack = */ 1
	},
	/* [9] = */ {
		/* .need_stock_num = */ 1,
		/* .pk2_no = */ 69,
		/* .r = */ 108,
		/* .g = */ 146,
		/* .b = */ 129,
		/* .bHitBack = */ 0
	}
};

char CNEquipTraySave::aStockMaxTbl[4] = {
	/* [0] = */ 1,
	/* [1] = */ 2,
	/* [2] = */ 3,
	/* [3] = */ 4
};

unsigned char CVariable<char, 0, 9> type_info node[8];
unsigned char CVariable<char, 0, 3> type_info node[8];
int dbg_stock_num = 0;

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3c1c10;
	
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)this;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tft9CVariable3Zci0i3((CFadeVariable<short_int> *)s_void__003f3478);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tft9CVariable3Zci0i3((CFadeVariable<short_int> *)s_char__003f3480);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tft9CVariable3Zci0i3((CFadeVariable<short_int> *)"unsigned int*");
  }
  return (uint **)0x0;
}

int CNEquipTraySave::IsStockMax() {
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  return (int)((long)_15CNEquipTraySave_aStockMaxTbl[(this->mStockGrade).mValue] <=
              (long)this->mStockNum);
}

void CNEquipTrayWrk::GetSubFuncArray(char *equip_func) {
	int i;
	
  CVariable<char,0,9> *pCVar1;
  char *pcVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zt9CVariable3Zci0i9_UiUi_PX01(iVar3,3);
    pCVar1 = (this->mSave).mEquipFunc.field0_0x0.m_aData + iVar3;
                    /* end of inlined section */
    pcVar2 = equip_func + iVar3;
    iVar3 = iVar3 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
    *pcVar2 = pCVar1->mValue;
  } while (iVar3 < 3);
  return;
}

void CNEquipTrayWrk::SetSubFuncArray(char *equip_func) {
	int i;
	char iValue;
	CVariable<char,0,2> *this;
	char iValue;
	
  char cVar1;
  fixed_array<CVariable<char,_0,_9>,3> *pfVar2;
  CVariable<char,0,2> *pCVar3;
  int iVar4;
  
  pfVar2 = &(this->mSave).mEquipFunc;
  iVar4 = 0;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zt9CVariable3Zci0i9_UiUi_PX01(iVar4,3);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    cVar1 = equip_func[iVar4];
    if (cVar1 < '\n') {
      if (cVar1 < '\0') {
        SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
        PrintAssertReal("Set Value is Illegal");
        (pfVar2->field0_0x0).m_aData[0].mValue = cVar1;
      }
      else {
        (pfVar2->field0_0x0).m_aData[0].mValue = cVar1;
      }
    }
    else {
      SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
      PrintAssertReal("Set Value is Illegal");
      (pfVar2->field0_0x0).m_aData[0].mValue = cVar1;
    }
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zt9CVariable3Zci0i9_UiUi_PX01(iVar4,3);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    cVar1 = (char)iVar4;
    if ((pfVar2->field0_0x0).m_aData[0].mValue != '\0') {
      pCVar3 = &(this->mSave).mSlctNo;
      if (cVar1 < '\x03') {
        if (cVar1 < '\0') {
          SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
          PrintAssertReal("Set Value is Illegal");
          pCVar3->mValue = cVar1;
        }
        else {
          pCVar3->mValue = cVar1;
        }
      }
      else {
        SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
        PrintAssertReal("Set Value is Illegal");
        pCVar3->mValue = cVar1;
      }
    }
                    /* end of inlined section */
    iVar4 = iVar4 + 1;
    pfVar2 = (fixed_array<CVariable<char,_0,_9>,3> *)((pfVar2->field0_0x0).m_aData + 1);
  } while (iVar4 < 3);
  return;
}

int CNEquipTraySave::NextFuncSet() {
	static char __FUNCTION__[12] = {
		/* [0] = */ 78,
		/* [1] = */ 101,
		/* [2] = */ 120,
		/* [3] = */ 116,
		/* [4] = */ 70,
		/* [5] = */ 117,
		/* [6] = */ 110,
		/* [7] = */ 99,
		/* [8] = */ 83,
		/* [9] = */ 101,
		/* [10] = */ 116,
		/* [11] = */ 0
	};
	int iPreNo;
	CVariable<char,0,2> *this;
	int iVal;
	
  char cVar1;
  char cVar2;
  int iVar3;
  CVariable<char,0,2> *pCVar4;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  pCVar4 = &this->mSlctNo;
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  cVar1 = pCVar4->mValue;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Zt9CVariable3Zci0i9_UiUi_PX01(cVar1,3);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  if ((this->mEquipFunc).field0_0x0.m_aData[cVar1].mValue == '\0') {
                    /* end of inlined section */
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("NextFuncSet() Illegal Arg Is Passed");
  }
  do {
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    iVar3 = pCVar4->mValue + 1;
    if (iVar3 < 3) {
      pCVar4->mValue = (char)iVar3;
    }
    else {
      pCVar4->mValue = '\x02';
      pCVar4->mValue = '\0';
    }
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    cVar2 = pCVar4->mValue;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zt9CVariable3Zci0i9_UiUi_PX01(cVar2,3);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
  } while ((this->mEquipFunc).field0_0x0.m_aData[cVar2].mValue == '\0');
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  return (int)pCVar4->mValue - (int)cVar1;
}

int CNEquipTrayWrk::GetNowEquipFuncNum() {
	int iCnt;
	int i;
	
  CVariable<char,0,9> *pCVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = 0;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zt9CVariable3Zci0i9_UiUi_PX01(iVar2,3);
    pCVar1 = (this->mSave).mEquipFunc.field0_0x0.m_aData + iVar2;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
    iVar2 = iVar2 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
                    /* end of inlined section */
    if (pCVar1->mValue != '\0') {
      iVar3 = iVar3 + 1;
    }
  } while (iVar2 < 3);
  return iVar3;
}

void CNEquipTrayWrk::SetRemainParticle(int iParticleNum) {
  this->mRemainParticleNum = this->mRemainParticleNum + iParticleNum;
  return;
}

void CNEquipTrayWrk::SetSave(MC_SAVE_DATA *save) {
  save->addr = (uchar *)this;
  save->size = 0x20;
  return;
}

void CNEquipTrayWrk::SetBattleFlg(int iFlg) {
  *(uint *)&(this->mNowOffset).mTarget =
       *(uint *)&(this->mNowOffset).mTarget & 0xfffbffff | (iFlg & 1U) << 0x12;
  return;
}

void CNEquipTraySave::Init() {
	int i;
	int i;
	
  CVariable<char,0,9> *pCVar1;
  CVariable<char,0,3> *pCVar2;
  int iVar3;
  
  iVar3 = 0;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  (this->mSlctNo).mValue = '\0';
                    /* end of inlined section */
  this->mStockNum = 0;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  (this->mStockGrade).mValue = '\0';
  do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zt9CVariable3Zci0i9_UiUi_PX01(iVar3,3);
    pCVar1 = (this->mEquipFunc).field0_0x0.m_aData + iVar3;
                    /* end of inlined section */
    iVar3 = iVar3 + 1;
                    /* end of inlined section */
    pCVar1->mValue = '\0';
  } while (iVar3 < 3);
  iVar3 = 0;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zt9CVariable3Zci0i3_UiUi_PX01(iVar3,10);
    pCVar2 = (this->mSubFuncLv).field0_0x0.m_aData + iVar3;
                    /* end of inlined section */
    iVar3 = iVar3 + 1;
                    /* end of inlined section */
    pCVar2->mValue = '\0';
  } while (iVar3 < 10);
  this->mBankGage = 0;
  this->mAbsorbMultiRate = 1.0;
  this->mDispGage = 0;
  return;
}

void CNEquipTrayWrk::End() {
  End__15CNEquipTraySavei(&this->mSave,this->mRemainParticleNum);
  this->mRemainParticleNum = 0;
  return;
}

void CNEquipTraySave::End(int iRemainParticle) {
  char cVar1;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  if ((long)this->mStockNum < (long)_15CNEquipTraySave_aStockMaxTbl[(this->mStockGrade).mValue]) {
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    cVar1 = (this->mSlctNo).mValue;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zt9CVariable3Zci0i9_UiUi_PX01(cVar1,3);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    if ((this->mEquipFunc).field0_0x0.m_aData[cVar1].mValue != '\0') {
                    /* end of inlined section */
      ConvertGage2StockNum__15CNEquipTraySavei
                (this,this->mBankGage +
                      (int)((float)(iRemainParticle * 0x2d) * this->mAbsorbMultiRate));
    }
  }
  return;
}

float CNEquipTrayWrk::GetTargetFOV() {
  return 1.0;
}

void CNEquipTrayWrk::Reset() {
  char cVar1;
  float fVar2;
  
  fVar2 = DAT_003ee61c;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  cVar1 = (this->mSave).mSlctNo.mValue;
                    /* end of inlined section */
  this->mMode = 0;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  this->mRot = (float)-(int)cVar1 * fVar2;
  (this->mStockAnm).mSpeed = '\0';
  (this->mStockAnm).mValue = '\0';
  (this->mSubFuncAnmShot).mSpeed = '\0';
  (this->mSubFuncAnmShot).mValue = '\0';
  (this->mGageAnmAlpha).mSpeed = '\0';
  (this->mGageAnmAlpha).mValue = '\0';
  (this->mGageAnmAlpha).mTarget = '\0';
                    /* end of inlined section */
  *(uint *)&(this->mNowOffset).mTarget = *(uint *)&(this->mNowOffset).mTarget & 0xfffdffff;
  PutOut__14CNEquipTrayWrk(this);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  (this->mSuckMouthScale).mAdd = '\0';
  (this->mSuckMouthScale).mValue = '\0';
  (this->mSuckMouthAlpha).mAdd = 0;
  (this->mSuckMouthAlpha).mValue = 0;
  (this->mAccumulateBollRot).mValue = -180.0;
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  (this->mAccumulateBollRot).m_fMax = 180.0;
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  (this->mAccumulateBollRot).m_fMin = -180.0;
  (this->mAccumulateBollFlare).mValue = 0;
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  *(ushort *)&(this->mAccumulateBollFlare).field_0x2 =
       *(ushort *)&(this->mAccumulateBollFlare).field_0x2 | 3;
  (this->mSubFuncAnmBlink).mValue = '\0';
  (this->mSubFuncAnmBlink).field_0x1 = (this->mSubFuncAnmBlink).field_0x1 & 0xfe | 2;
  (this->mSubFuncAnmBlinkNoSetup).mValue = '\0';
  (this->mSubFuncAnmBlinkNoSetup).field_0x1 = (this->mSubFuncAnmBlinkNoSetup).field_0x1 & 0xfe | 2;
  (this->mNowOffset).mSpeed = 0;
  (this->mNowOffset).mValue = 0;
  (this->mNowOffset).mTarget = 0;
                    /* end of inlined section */
  this->mRemainParticleNum = 0;
  *(uint *)&(this->mNowOffset).mTarget = *(uint *)&(this->mNowOffset).mTarget & 0xfff7ffff;
  return;
}

void CNEquipTrayWrk::PutOut() {
  uint uVar1;
  
  uVar1 = *(uint *)&(this->mNowOffset).mTarget;
  if ((uVar1 & 0x10000) != 0) {
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
    *(uint *)&(this->mNowOffset).mTarget = uVar1 & 0xfffeffff;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    (this->mRenzMarkAlpha).mAdd = 0xfffb;
  }
  return;
}

int CNEquipTrayWrk::IsReady() {
  char cVar1;
  int iVar2;
  
                    /* end of inlined section */
  iVar2 = GetNowEquipFuncNum__14CNEquipTrayWrk(this);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* inlined from n_equip_tray.h */
  if ((iVar2 != 0) &&
     (cVar1 = (this->mSave).mSlctNo.mValue,
     _fixed_array_verifyrange__H1Zt9CVariable3Zci0i9_UiUi_PX01(cVar1,3),
     _14CNEquipTrayWrk_equip_func_tbl[(this->mSave).mEquipFunc.field0_0x0.m_aData[cVar1].mValue].
     need_stock_num <= (this->mSave).mStockNum)) {
    return 1;
  }
                    /* end of inlined section */
  return 0;
}

int CNEquipTrayWrk::SetUp() {
  uint uVar1;
  int iVar2;
  
  iVar2 = IsReady__14CNEquipTrayWrk(this);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    uVar1 = *(uint *)&(this->mNowOffset).mTarget;
    iVar2 = 0;
    if ((uVar1 & 0x10000) == 0) {
      *(uint *)&(this->mNowOffset).mTarget = uVar1 | 0x10000;
      if ((uVar1 & 0x40000) != 0) {
        SystemBankPlay__FiiiiP11_SND_3D_SETii(7,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      }
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
      iVar2 = 1;
      (this->mRenzMarkAlpha).mAdd = 9;
    }
  }
  return iVar2;
}

int CNEquipTrayWrk::IsSetUp() {
  return *(ushort *)&this->field_0x7e & 1;
}

int CNEquipTrayWrk::Use2() {
  char cVar1;
  int iVar2;
  
  iVar2 = IsSetUp__14CNEquipTrayWrk(this);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    if ((this->mSave).mStockNum < 5) {
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
      cVar1 = (this->mSave).mSlctNo.mValue;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Zt9CVariable3Zci0i9_UiUi_PX01(cVar1,3);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* inlined from n_equip_tray.h */
      dbg_stock_num =
           (this->mSave).mStockNum -
           _14CNEquipTrayWrk_equip_func_tbl
           [(this->mSave).mEquipFunc.field0_0x0.m_aData[cVar1].mValue].need_stock_num;
      (this->mSave).mStockNum = dbg_stock_num;
                    /* end of inlined section */
    }
    iVar2 = IsReady__14CNEquipTrayWrk(this);
    if (iVar2 == 0) {
      PutOut__14CNEquipTrayWrk(this);
    }
    iVar2 = 1;
  }
  return iVar2;
}

float CNEquipTrayWrk::GetDmgRate(SHUTTER_CHANCE_STATE SState) {
	SUB_FUNC_KOUGEKI_PARAM *pParam;
	
  char cVar1;
  _SUB_FUNC_KOUGEKI_PARAM *p_Var2;
  CVariable<char,0,2> *pCVar3;
  float fVar4;
  
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  pCVar3 = &(this->mSave).mSlctNo;
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  cVar1 = pCVar3->mValue;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Zt9CVariable3Zci0i9_UiUi_PX01(cVar1,3);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  cVar1 = (this->mSave).mEquipFunc.field0_0x0.m_aData[cVar1].mValue;
                    /* inlined from n_equip_tray.h */
  if (cVar1 == '\a') {
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    cVar1 = pCVar3->mValue;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zt9CVariable3Zci0i9_UiUi_PX01(cVar1,3);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    cVar1 = (this->mSave).mEquipFunc.field0_0x0.m_aData[cVar1].mValue;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zt9CVariable3Zci0i3_UiUi_PX01(cVar1,10);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* inlined from n_equip_tray.h */
    p_Var2 = _15CNEquipTraySave_sub_func_rei_param +
             (this->mSave).mSubFuncLv.field0_0x0.m_aData[cVar1].mValue;
                    /* end of inlined section */
  }
  else if (cVar1 < '\b') {
    if (cVar1 != '\x06') {
      return 0.0;
    }
    cVar1 = pCVar3->mValue;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zt9CVariable3Zci0i9_UiUi_PX01(cVar1,3);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    cVar1 = (this->mSave).mEquipFunc.field0_0x0.m_aData[cVar1].mValue;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zt9CVariable3Zci0i3_UiUi_PX01(cVar1,10);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* inlined from n_equip_tray.h */
    p_Var2 = _15CNEquipTraySave_sub_func_koku_param +
             (this->mSave).mSubFuncLv.field0_0x0.m_aData[cVar1].mValue;
                    /* end of inlined section */
  }
  else if (cVar1 == '\b') {
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    cVar1 = pCVar3->mValue;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zt9CVariable3Zci0i9_UiUi_PX01(cVar1,3);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    cVar1 = (this->mSave).mEquipFunc.field0_0x0.m_aData[cVar1].mValue;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zt9CVariable3Zci0i3_UiUi_PX01(cVar1,10);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* inlined from n_equip_tray.h */
    p_Var2 = _15CNEquipTraySave_sub_func_metsu_param +
             (this->mSave).mSubFuncLv.field0_0x0.m_aData[cVar1].mValue;
                    /* end of inlined section */
  }
  else {
    if (cVar1 != '\t') {
      return (float)0;
    }
    cVar1 = pCVar3->mValue;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zt9CVariable3Zci0i9_UiUi_PX01(cVar1,3);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    cVar1 = (this->mSave).mEquipFunc.field0_0x0.m_aData[cVar1].mValue;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zt9CVariable3Zci0i3_UiUi_PX01(cVar1,10);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* inlined from n_equip_tray.h */
    p_Var2 = _15CNEquipTraySave_sub_func_ren_param +
             (this->mSave).mSubFuncLv.field0_0x0.m_aData[cVar1].mValue;
                    /* end of inlined section */
  }
  if (SState == SHUTTER_CHANCE_NONE) {
    fVar4 = p_Var2->NDmgMag;
  }
  else {
    fVar4 = p_Var2->SDmgMag;
  }
  return fVar4;
}

int CNEquipTrayWrk::IsChargeResetOK() {
  char cVar1;
  int iVar2;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  cVar1 = (this->mSave).mSlctNo.mValue;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Zt9CVariable3Zci0i9_UiUi_PX01(cVar1,3);
                    /* end of inlined section */
  iVar2 = 1;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  cVar1 = (this->mSave).mEquipFunc.field0_0x0.m_aData[cVar1].mValue;
                    /* inlined from n_equip_tray.h */
  if ('\0' < cVar1) {
    if (cVar1 < '\x06') {
      iVar2 = 0;
    }
    else if (cVar1 == '\t') {
                    /* end of inlined section */
      iVar2 = 0;
    }
  }
  return iVar2;
}

void CNEquipTrayWrk::SetEffectsPre() {
  *(uint *)&(this->mNowOffset).mTarget = *(uint *)&(this->mNowOffset).mTarget | 0x100000;
  return;
}

void CNEquipTrayWrk::SetEffect(ENE_WRK *ew, SHUTTER_CHANCE_STATE SState) {
	int eHitEffectLabel;
	int eHitEffectLabel;
	int eHitEffectLabel;
	int eHitEffectLabel;
	
  char cVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  CVariable<char,0,2> *pCVar7;
  
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  pCVar7 = &(this->mSave).mSlctNo;
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  cVar1 = pCVar7->mValue;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Zt9CVariable3Zci0i9_UiUi_PX01(cVar1,3);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* inlined from n_equip_tray.h */
  switch((this->mSave).mEquipFunc.field0_0x0.m_aData[cVar1].mValue) {
  case '\x01':
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    cVar1 = pCVar7->mValue;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zt9CVariable3Zci0i9_UiUi_PX01(cVar1,3);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    cVar1 = (this->mSave).mEquipFunc.field0_0x0.m_aData[cVar1].mValue;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zt9CVariable3Zci0i3_UiUi_PX01(cVar1,10);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* inlined from n_equip_tray.h */
    SetEneSlowMode__FP7ENE_WRKif
              (ew,_15CNEquipTraySave_sub_func_oso_param
                  [(this->mSave).mSubFuncLv.field0_0x0.m_aData[cVar1].mValue].EffTime * 0x1e,
               DAT_003ee620);
                    /* end of inlined section */
    EneHitEffectReq__FiPfi((uint)(ew->alg).idx,(ew->mpos).p0,3);
    break;
  case '\x02':
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    cVar1 = pCVar7->mValue;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zt9CVariable3Zci0i9_UiUi_PX01(cVar1,3);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    cVar1 = (this->mSave).mEquipFunc.field0_0x0.m_aData[cVar1].mValue;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zt9CVariable3Zci0i3_UiUi_PX01(cVar1,10);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    cVar3 = pCVar7->mValue;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* inlined from n_equip_tray.h */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* inlined from n_equip_tray.h */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* inlined from n_equip_tray.h */
    cVar1 = _15CNEquipTraySave_sub_func_mahi_param
            [(this->mSave).mSubFuncLv.field0_0x0.m_aData[cVar1].mValue].EffTime;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zt9CVariable3Zci0i9_UiUi_PX01(cVar3,3);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    cVar3 = (this->mSave).mEquipFunc.field0_0x0.m_aData[cVar3].mValue;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* inlined from n_equip_tray.h */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zt9CVariable3Zci0i3_UiUi_PX01(cVar3,10);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    cVar2 = pCVar7->mValue;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* inlined from n_equip_tray.h */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* inlined from n_equip_tray.h */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* inlined from n_equip_tray.h */
    cVar3 = _15CNEquipTraySave_sub_func_mahi_param
            [(this->mSave).mSubFuncLv.field0_0x0.m_aData[cVar3].mValue].StopTime;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zt9CVariable3Zci0i9_UiUi_PX01(cVar2,3);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    cVar2 = (this->mSave).mEquipFunc.field0_0x0.m_aData[cVar2].mValue;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* inlined from n_equip_tray.h */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zt9CVariable3Zci0i3_UiUi_PX01(cVar2,10);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* inlined from n_equip_tray.h */
    SetEneMahiMode__FP7ENE_WRKiii
              (ew,cVar1 * 0x1e,cVar3 * 0x1e,
               _15CNEquipTraySave_sub_func_mahi_param
               [(this->mSave).mSubFuncLv.field0_0x0.m_aData[cVar2].mValue].ActTime * 0x1e);
                    /* end of inlined section */
    EneHitEffectReq__FiPfi((uint)(ew->alg).idx,(ew->mpos).p0,10);
    break;
  case '\x03':
    if ((*(uint *)&(this->mNowOffset).mTarget & 0x100000) == 0) break;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    cVar1 = pCVar7->mValue;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zt9CVariable3Zci0i9_UiUi_PX01(cVar1,3);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    cVar1 = (this->mSave).mEquipFunc.field0_0x0.m_aData[cVar1].mValue;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zt9CVariable3Zci0i3_UiUi_PX01(cVar1,10);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    cVar3 = pCVar7->mValue;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* inlined from n_equip_tray.h */
    cVar1 = _15CNEquipTraySave_sub_func_si_param
            [(this->mSave).mSubFuncLv.field0_0x0.m_aData[cVar1].mValue].EffTime;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* inlined from n_equip_tray.h */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zt9CVariable3Zci0i9_UiUi_PX01(cVar3,3);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    cVar3 = (this->mSave).mEquipFunc.field0_0x0.m_aData[cVar3].mValue;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* inlined from n_equip_tray.h */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zt9CVariable3Zci0i3_UiUi_PX01(cVar3,10);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* inlined from n_equip_tray.h */
    SetEneView__FP7ENE_WRKii
              (ew,cVar1 * 0x1e,
               (int)_15CNEquipTraySave_sub_func_si_param
                    [(this->mSave).mSubFuncLv.field0_0x0.m_aData[cVar3].mValue].SearchFlg);
                    /* end of inlined section */
    bVar4 = (ew->alg).idx;
    iVar6 = 0xb;
    goto LAB_002230f0;
  case '\x04':
    if ((*(uint *)&(this->mNowOffset).mTarget & 0x100000) == 0) break;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    cVar1 = pCVar7->mValue;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zt9CVariable3Zci0i9_UiUi_PX01(cVar1,3);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    cVar1 = (this->mSave).mEquipFunc.field0_0x0.m_aData[cVar1].mValue;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zt9CVariable3Zci0i3_UiUi_PX01(cVar1,10);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* inlined from n_equip_tray.h */
    Req__10CEneTracerii(&plyr_wrk.ene_tracer,(uint)(ew->alg).idx,
                        _15CNEquipTraySave_sub_func_trace_param
                        [(this->mSave).mSubFuncLv.field0_0x0.m_aData[cVar1].mValue].EffTime * 0x1e);
                    /* end of inlined section */
    bVar4 = (ew->alg).idx;
    iVar6 = 0x12;
LAB_002230f0:
    EneHitEffectReq__FiPfi((uint)bVar4,(ew->mpos).p0,iVar6);
    *(uint *)&(this->mNowOffset).mTarget = *(uint *)&(this->mNowOffset).mTarget & 0xffefffff;
    break;
  case '\x05':
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    cVar1 = pCVar7->mValue;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zt9CVariable3Zci0i9_UiUi_PX01(cVar1,3);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    cVar1 = (this->mSave).mEquipFunc.field0_0x0.m_aData[cVar1].mValue;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zt9CVariable3Zci0i3_UiUi_PX01(cVar1,10);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* inlined from n_equip_tray.h */
    SetEneSealMode__FP7ENE_WRKi
              (ew,_15CNEquipTraySave_sub_func_seal_param
                  [(this->mSave).mSubFuncLv.field0_0x0.m_aData[cVar1].mValue].EffTime * 0x1e);
                    /* end of inlined section */
    EneHitEffectReq__FiPfi((uint)(ew->alg).idx,(ew->mpos).p0,0x13);
    break;
  case '\x06':
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    cVar1 = pCVar7->mValue;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zt9CVariable3Zci0i9_UiUi_PX01(cVar1,3);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    cVar1 = (this->mSave).mEquipFunc.field0_0x0.m_aData[cVar1].mValue;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zt9CVariable3Zci0i3_UiUi_PX01(cVar1,10);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    cVar3 = pCVar7->mValue;
    cVar1 = (this->mSave).mSubFuncLv.field0_0x0.m_aData[cVar1].mValue;
                    /* inlined from n_equip_tray.h */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* inlined from n_equip_tray.h */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zt9CVariable3Zci0i9_UiUi_PX01(cVar3,3);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    cVar3 = (this->mSave).mEquipFunc.field0_0x0.m_aData[cVar3].mValue;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zt9CVariable3Zci0i3_UiUi_PX01(cVar3,10);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* inlined from n_equip_tray.h */
    SetEneSlowHitBack__FP7ENE_WRKiif
              (ew,10,_15CNEquipTraySave_sub_func_koku_param[cVar1].SlowHTTime,
               _15CNEquipTraySave_sub_func_koku_param
               [(this->mSave).mSubFuncLv.field0_0x0.m_aData[cVar3].mValue].SlowHTRate);
                    /* end of inlined section */
    iVar6 = 7;
    if (SState != SHUTTER_CHANCE_NONE) {
      iVar5 = 9;
      iVar6 = 8;
LAB_0022338c:
      if (SState != SHUTTER_CHANCE_NORMAL) {
        iVar6 = iVar5;
      }
    }
    goto LAB_00223390;
  case '\a':
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    cVar1 = pCVar7->mValue;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zt9CVariable3Zci0i9_UiUi_PX01(cVar1,3);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    cVar1 = (this->mSave).mEquipFunc.field0_0x0.m_aData[cVar1].mValue;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zt9CVariable3Zci0i3_UiUi_PX01(cVar1,10);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    cVar3 = pCVar7->mValue;
    cVar1 = (this->mSave).mSubFuncLv.field0_0x0.m_aData[cVar1].mValue;
                    /* inlined from n_equip_tray.h */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* inlined from n_equip_tray.h */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zt9CVariable3Zci0i9_UiUi_PX01(cVar3,3);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    cVar3 = (this->mSave).mEquipFunc.field0_0x0.m_aData[cVar3].mValue;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zt9CVariable3Zci0i3_UiUi_PX01(cVar3,10);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* inlined from n_equip_tray.h */
    SetEneSlowHitBack__FP7ENE_WRKiif
              (ew,10,_15CNEquipTraySave_sub_func_rei_param[cVar1].SlowHTTime,
               _15CNEquipTraySave_sub_func_rei_param
               [(this->mSave).mSubFuncLv.field0_0x0.m_aData[cVar3].mValue].SlowHTRate);
                    /* end of inlined section */
    iVar6 = 4;
    if (SState != SHUTTER_CHANCE_NONE) {
      iVar5 = 6;
      iVar6 = 5;
      goto LAB_0022338c;
    }
    goto LAB_00223390;
  case '\b':
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    cVar1 = pCVar7->mValue;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zt9CVariable3Zci0i9_UiUi_PX01(cVar1,3);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    cVar1 = (this->mSave).mEquipFunc.field0_0x0.m_aData[cVar1].mValue;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zt9CVariable3Zci0i3_UiUi_PX01(cVar1,10);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    cVar3 = pCVar7->mValue;
    cVar1 = (this->mSave).mSubFuncLv.field0_0x0.m_aData[cVar1].mValue;
                    /* inlined from n_equip_tray.h */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* inlined from n_equip_tray.h */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zt9CVariable3Zci0i9_UiUi_PX01(cVar3,3);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    cVar3 = (this->mSave).mEquipFunc.field0_0x0.m_aData[cVar3].mValue;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zt9CVariable3Zci0i3_UiUi_PX01(cVar3,10);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* inlined from n_equip_tray.h */
    SetEneSlowHitBack__FP7ENE_WRKiif
              (ew,10,_15CNEquipTraySave_sub_func_metsu_param[cVar1].SlowHTTime,
               _15CNEquipTraySave_sub_func_metsu_param
               [(this->mSave).mSubFuncLv.field0_0x0.m_aData[cVar3].mValue].SlowHTRate);
                    /* end of inlined section */
    iVar6 = 0xc;
    if (SState != SHUTTER_CHANCE_NONE) {
      iVar5 = 0xe;
      iVar6 = 0xd;
      goto LAB_0022338c;
    }
    goto LAB_00223390;
  case '\t':
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    cVar1 = pCVar7->mValue;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zt9CVariable3Zci0i9_UiUi_PX01(cVar1,3);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    cVar1 = (this->mSave).mEquipFunc.field0_0x0.m_aData[cVar1].mValue;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zt9CVariable3Zci0i3_UiUi_PX01(cVar1,10);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    cVar3 = pCVar7->mValue;
    cVar1 = (this->mSave).mSubFuncLv.field0_0x0.m_aData[cVar1].mValue;
                    /* inlined from n_equip_tray.h */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* inlined from n_equip_tray.h */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zt9CVariable3Zci0i9_UiUi_PX01(cVar3,3);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    cVar3 = (this->mSave).mEquipFunc.field0_0x0.m_aData[cVar3].mValue;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zt9CVariable3Zci0i3_UiUi_PX01(cVar3,10);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* inlined from n_equip_tray.h */
    SetEneSlowHitBack__FP7ENE_WRKiif
              (ew,10,_15CNEquipTraySave_sub_func_metsu_param[cVar1].SlowHTTime,
               _15CNEquipTraySave_sub_func_metsu_param
               [(this->mSave).mSubFuncLv.field0_0x0.m_aData[cVar3].mValue].SlowHTRate);
                    /* end of inlined section */
    iVar6 = 0xf;
    if (SState != SHUTTER_CHANCE_NONE) {
      iVar5 = 0x11;
      iVar6 = 0x10;
      goto LAB_0022338c;
    }
LAB_00223390:
    EneHitEffectReq__FiPfi((uint)(ew->alg).idx,(ew->mpos).p0,iVar6);
  }
  Blink__t14CBlinkVariable3Zci0i_100_c(&this->mSubFuncAnmShot,10);
  return;
}

int CNEquipTraySave::ConvertGage2StockNum(int iGage) {
	int ret;
	int iRemain;
	
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar3 = iGage + this->mDispGage;
  iVar2 = iVar3 / 1000;
  iVar3 = iVar3 % 1000;
  if (iVar2 != 0) {
    iVar4 = 1;
    if (this->mStockNum < 5) {
      iVar2 = this->mStockNum + iVar2;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
      this->mStockNum = iVar2;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
      cVar1 = _15CNEquipTraySave_aStockMaxTbl[(this->mStockGrade).mValue];
      if ((long)iVar2 < (long)cVar1) {
        dbg_stock_num = this->mStockNum;
      }
      else {
                    /* end of inlined section */
        this->mBankGage = 0;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
        this->mStockNum = (int)cVar1;
                    /* end of inlined section */
        iVar3 = 0;
                    /* end of inlined section */
        dbg_stock_num = this->mStockNum;
      }
      iVar4 = 1;
    }
  }
  this->mDispGage = iVar3;
  printf("iGage = %d iNum = %d iRemain = %d\n");
  return iVar4;
}

void CNEquipTrayWrk::Init() {
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
  *(uint *)&(this->mNowOffset).mTarget =
       *(uint *)&(this->mNowOffset).mTarget & 0xfffeffff | 0x100000;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  (this->mRenzMarkAlpha).mAdd = 0;
  (this->mRenzMarkAlpha).mValue = 0;
                    /* end of inlined section */
  dbg_stock_num = (this->mSave).mStockNum;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  (this->mRenzMarkBlink).mAdd = 0xffeb;
                    /* end of inlined section */
  return;
}

void CNEquipTrayWrk::Rotate() {
  int iVar1;
  
  if ((this->mMode == 0) && (iVar1 = GetNowEquipFuncNum__14CNEquipTrayWrk(this), 1 < iVar1)) {
    NextFuncSet__15CNEquipTraySave(&this->mSave);
    iVar1 = IsReady__14CNEquipTrayWrk(this);
    if (iVar1 == 0) {
      PutOut__14CNEquipTrayWrk(this);
    }
    Fade__t13CFadeVariable1Zsss(&this->mNowOffset,0x2d,7);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    (this->mPreSlctAlpha).mSpeed = 0;
    (this->mPreSlctAlpha).mTarget = 0x80;
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    (this->mPreSlctAlpha).mValue = 0x80;
                    /* end of inlined section */
    Fade__t13CFadeVariable1Zsss(&this->mPreSlctAlpha,0,3);
    this->mPreSlctYOffset = 0;
    FinderBankPlay__FiiiiP11_SND_3D_SETii(0x10,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    this->mMode = 1;
  }
  return;
}

void CNEquipTrayWrk::FinderConvertGage2StockNum(int iAddGage) {
  char cVar1;
  int iVar2;
  
                    /* end of inlined section */
  iVar2 = ConvertGage2StockNum__15CNEquipTraySavei(&this->mSave,iAddGage);
                    /* end of inlined section */
  if (iVar2 != 0) {
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    cVar1 = (this->mSave).mSlctNo.mValue;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zt9CVariable3Zci0i9_UiUi_PX01(cVar1,3);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
                    /* inlined from n_equip_tray.h */
                    /* end of inlined section */
                    /* inlined from n_equip_tray.h */
                    /* end of inlined section */
                    /* inlined from n_equip_tray.h */
                    /* end of inlined section */
                    /* inlined from n_equip_tray.h */
                    /* end of inlined section */
                    /* inlined from n_equip_tray.h */
    if ((this->mSave).mStockNum ==
        _14CNEquipTrayWrk_equip_func_tbl[(this->mSave).mEquipFunc.field0_0x0.m_aData[cVar1].mValue].
        need_stock_num) {
                    /* end of inlined section */
      SystemBankPlay__FiiiiP11_SND_3D_SETii(7,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    }
    else {
      FinderBankPlay__FiiiiP11_SND_3D_SETii(0xe,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    }
    Blink__t14CBlinkVariable3Zci0i_127_c(&this->mStockAnm,0x10);
  }
  return;
}

void CNEquipTrayWrk::Work() {
	int absorb_num;
	int iAddGage;
	short int iValue;
	short int iValue;
	CFVariable *this;
	float fAddValue;
	
  uint uVar1;
  int iVar2;
  CFVariable *pCVar3;
  ushort uVar4;
  int iVar5;
  CFadeVariable<short_int> *pCVar6;
  CFadeVariable<short_int> *pCVar7;
  float fVar8;
  float fVar9;
  
  (this->mSave).mStockNum = dbg_stock_num;
  iVar2 = EneDmgParticleSuctionNumGet__Fv();
  if (iVar2 == 0) {
    iVar2 = (this->mSave).mBankGage;
  }
  else {
    iVar5 = this->mRemainParticleNum;
    if (iVar5 < iVar2) {
      iVar2 = iVar5;
    }
    this->mRemainParticleNum = iVar5 - iVar2;
    if (1 < iVar2) {
      FinderBankPlay__FiiiiP11_SND_3D_SETii(0xb,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    }
    Absorb__15CNEquipTraySavei(&this->mSave,iVar2 * 0x2d);
    iVar2 = (this->mSave).mBankGage;
  }
  uVar1 = *(uint *)&(this->mNowOffset).mTarget;
  if (iVar2 < 1) {
    if ((uVar1 & 0x20000) != 0) {
      Fade__t13CFadeVariable1Zccc(&this->mGageAnmAlpha,0,1);
      uVar1 = *(uint *)&(this->mNowOffset).mTarget;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
      (this->mSuckMouthScale).mAdd = -10;
                    /* end of inlined section */
      *(uint *)&(this->mNowOffset).mTarget = uVar1 & 0xfffdffff;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
      (this->mSuckMouthAlpha).mAdd = 0xfff4;
    }
  }
  else {
    if ((uVar1 & 0x20000) == 0) {
      Fade__t13CFadeVariable1Zccc(&this->mGageAnmAlpha,0xffffffffffffff80,1);
      uVar1 = *(uint *)&(this->mNowOffset).mTarget;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
      (this->mSuckMouthScale).mAdd = '\x14';
                    /* end of inlined section */
      *(uint *)&(this->mNowOffset).mTarget = uVar1 | 0x20000;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
      (this->mSuckMouthAlpha).mAdd = 0x19;
      iVar2 = (this->mSave).mBankGage;
                    /* end of inlined section */
    }
    iVar5 = 0x41;
    if (iVar2 < 0x42) {
      iVar5 = iVar2;
    }
    (this->mSave).mBankGage = iVar2 - iVar5;
    FinderConvertGage2StockNum__14CNEquipTrayWrki(this,iVar5);
  }
                    /* end of inlined section */
  iVar2 = InFinderMode__Fv();
  if (iVar2 != 0) {
    Work__t14CBlinkVariable3Zci0i_127_(&this->mStockAnm);
    Work__t14CBlinkVariable3Zci0i_100_(&this->mSubFuncAnmShot);
    iVar2 = IsSetUp__14CNEquipTrayWrk(this);
    if (iVar2 == 0) {
      Work__t20CBlinkSwitchVariable5ZUci0i_60_i_20_i0(&this->mSubFuncAnmBlinkNoSetup);
    }
    else {
      Work__t20CBlinkSwitchVariable5ZUci_50_i_100_i1i0(&this->mSubFuncAnmBlink);
    }
    Work__t13CFadeVariable1Zc(&this->mGageAnmAlpha);
    Work__t12CWrkVariable3Zci0i_100_(&this->mSuckMouthScale);
    Work__t12CWrkVariable3Zsi0i_128_(&this->mSuckMouthAlpha);
    Work__t12CWrkVariable3Zsi0i_76_(&this->mRenzMarkAlpha);
    Work__t12CWrkVariable3Zsi_20_i_128_(&this->mRenzMarkBlink);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    pCVar3 = &this->mAccumulateBollRot;
    fVar9 = (this->mAccumulateBollRot).m_fMax;
    fVar8 = pCVar3->mValue + 12.0;
    pCVar3->mValue = fVar8;
    if (fVar9 < fVar8) {
      pCVar3->mValue = fVar9;
      pCVar3->mValue = (this->mAccumulateBollRot).m_fMin;
    }
                    /* end of inlined section */
    Work__t20CBlinkSwitchVariable5Zsi_20_i_60_i_15_i0(&this->mAccumulateBollFlare);
    if (this->mMode == 1) {
      pCVar7 = &this->mNowOffset;
      pCVar6 = &this->mPreSlctAlpha;
      Work__t13CFadeVariable1Zs(pCVar7);
      Work__t13CFadeVariable1Zs(pCVar6);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
      if (pCVar6->mValue == (this->mPreSlctAlpha).mTarget) {
                    /* end of inlined section */
        Fade__t13CFadeVariable1Zsss(pCVar6,0x3c,3);
        iVar2 = GetNowEquipFuncNum__14CNEquipTrayWrk(this);
        this->mPreSlctYOffset = iVar2 * -0x2d + 0x2d;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
        uVar4 = pCVar7->mValue;
      }
      else {
        uVar4 = pCVar7->mValue;
      }
      if (uVar4 == (this->mNowOffset).mTarget) {
        (this->mNowOffset).mSpeed = 0;
                    /* end of inlined section */
        this->mMode = 0;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
        pCVar7->mValue = 0;
        (this->mNowOffset).mTarget = 0;
                    /* end of inlined section */
      }
    }
  }
  return;
}

void CNEquipTrayWrk::SetAbsorbMultiRate(float fRate) {
  (this->mSave).mAbsorbMultiRate = fRate;
  return;
}

void CNEquipTraySave::Absorb(int power) {
  char cVar1;
  int iVar2;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
  if ((((long)this->mStockNum < (long)_15CNEquipTraySave_aStockMaxTbl[(this->mStockGrade).mValue])
      && (cVar1 = (this->mSlctNo).mValue,
         _fixed_array_verifyrange__H1Zt9CVariable3Zci0i9_UiUi_PX01(cVar1,3),
         (this->mEquipFunc).field0_0x0.m_aData[cVar1].mValue != '\0')) &&
     (iVar2 = IsStockMax__15CNEquipTraySave(this), iVar2 == 0)) {
    this->mBankGage = this->mBankGage + (int)((float)power * this->mAbsorbMultiRate);
  }
  return;
}

void CNEquipTrayWrk::AbsorbImmediately(int power) {
  char cVar1;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* inlined from n_equip_tray.h */
  if (((long)(this->mSave).mStockNum <
       (long)_15CNEquipTraySave_aStockMaxTbl[(this->mSave).mStockGrade.mValue]) &&
     (cVar1 = (this->mSave).mSlctNo.mValue,
     _fixed_array_verifyrange__H1Zt9CVariable3Zci0i9_UiUi_PX01(cVar1,3),
     (this->mSave).mEquipFunc.field0_0x0.m_aData[cVar1].mValue != '\0')) {
                    /* end of inlined section */
    FinderConvertGage2StockNum__14CNEquipTrayWrki(this,power);
    FinderBankPlay__FiiiiP11_SND_3D_SETii(5,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
  }
  return;
}

void CNEquipTrayWrk::AccumulaterDraw(int fndr_mx, int fndr_my, int master_alp) {
	DISP_SPRT ds;
	float fAccumPercent;
	int i;
	int i;
	int i;
	int iNeedNum;
	int i;
	
  undefined *puVar1;
  char cVar2;
  uint uVar3;
  ulong *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  SPRT_DAT *pSVar9;
  CVariable<char,0,3> *pCVar10;
  uchar uVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  DISP_SPRT ds;
  undefined auStack_150 [7];
  undefined auStack_149 [8];
  undefined auStack_141 [17];
  uint local_130;
  uint local_12c;
  int local_128;
  int local_124;
  undefined4 local_120;
  undefined local_11c;
  undefined local_11b;
  undefined local_11a;
  undefined local_119;
  DISP_SQAR DStack_110;
  int local_90;
  
  iVar7 = 0xf;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  pCVar10 = &(this->mSave).mStockGrade;
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
  iVar12 = (this->mSave).mDispGage;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  uVar11 = (uchar)master_alp;
  local_90 = fndr_my;
  if (_15CNEquipTraySave_aStockMaxTbl[pCVar10->mValue] + 0xe < 0xf) {
    fVar15 = (float)fndr_my;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    cVar2 = pCVar10->mValue;
  }
  else {
    fVar15 = (float)fndr_my;
    pSVar9 = n_finder_dat + 0xf;
                    /* end of inlined section */
    do {
      CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ds,pSVar9);
      iVar7 = iVar7 + 1;
      pSVar9 = pSVar9 + 1;
      ds.x = ds.x + (float)fndr_mx;
      ds.zbuf = 0x10a000118;
      ds.y = ds.y + fVar15;
      ds.alphar = 0x44;
      ds.alpha = uVar11;
      DispSprD__FP9DISP_SPRT(&ds);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    } while (iVar7 <= _15CNEquipTraySave_aStockMaxTbl[pCVar10->mValue] + 0xe);
    cVar2 = pCVar10->mValue;
  }
                    /* end of inlined section */
  fVar16 = (float)fndr_mx;
  iVar7 = 0x13;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  if (_15CNEquipTraySave_aStockMaxTbl[cVar2] + 0x12 < 0x13) {
    iVar7 = (this->mSave).mStockNum;
  }
  else {
    pSVar9 = n_finder_dat + 0x13;
                    /* end of inlined section */
    do {
      CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ds,pSVar9);
      iVar7 = iVar7 + 1;
      pSVar9 = pSVar9 + 1;
      ds.x = ds.x + fVar16;
      ds.zbuf = 0x10a000118;
      ds.y = ds.y + fVar15;
      ds.alphar = 0x44;
      ds.alpha = uVar11;
      DispSprD__FP9DISP_SPRT(&ds);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    } while (iVar7 <= _15CNEquipTraySave_aStockMaxTbl[pCVar10->mValue] + 0x12);
                    /* end of inlined section */
    iVar7 = (this->mSave).mStockNum;
  }
  iVar8 = 0x17;
  if (0x17 < iVar7 + 0x17) {
    pSVar9 = n_finder_dat + 0x17;
    do {
      CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ds,pSVar9);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
      ds.rot = (this->mAccumulateBollRot).mValue;
                    /* end of inlined section */
      ds.x = ds.x + fVar16;
      ds.y = ds.y + fVar15;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
      ds.zbuf = 0x10a000118;
      ds.alphar = 0x44;
      ds.crx = ds.x + (float)(ds.w >> 1);
      iVar8 = iVar8 + 1;
      ds.cry = ds.y + (float)(ds.h >> 1);
      ds.alpha = uVar11;
      DispSprD__FP9DISP_SPRT(&ds);
      pSVar9 = pSVar9 + 1;
    } while (iVar8 < (this->mSave).mStockNum + 0x17);
  }
  iVar7 = IsReady__14CNEquipTrayWrk(this);
  if (iVar7 != 0) {
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    cVar2 = (this->mSave).mSlctNo.mValue;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zt9CVariable3Zci0i9_UiUi_PX01(cVar2,3);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* inlined from n_equip_tray.h */
    iVar7 = _14CNEquipTrayWrk_equip_func_tbl
            [(this->mSave).mEquipFunc.field0_0x0.m_aData[cVar2].mValue].need_stock_num;
                    /* end of inlined section */
    if (0x1b < iVar7 + 0x1b) {
      pSVar9 = n_finder_dat + 0x1b;
      do {
        iVar7 = iVar7 + -1;
        CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ds,pSVar9);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
        iVar8 = master_alp * (short)(this->mAccumulateBollFlare).mValue;
                    /* end of inlined section */
        ds.x = ds.x + fVar16;
        ds.zbuf = 0x10a000118;
        ds.y = ds.y + fVar15;
        ds.alphar = 0x48;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
        if (iVar8 < 0) {
          iVar8 = iVar8 + 0x7f;
        }
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
        ds.alpha = (uchar)(iVar8 >> 7);
                    /* end of inlined section */
                    /* end of inlined section */
        DispSprD__FP9DISP_SPRT(&ds);
        pSVar9 = pSVar9 + 1;
      } while (iVar7 != 0);
    }
  }
  local_130 = (uint)(ushort)n_finder_dat[157].w;
  local_128 = (n_finder_dat[157].x + fndr_mx) - local_130;
  local_12c = (uint)(ushort)n_finder_dat[157].h;
  local_124 = n_finder_dat[157].y + local_90;
  local_120 = 0x10;
  local_11c = 0;
  local_11b = 0;
  local_11a = 0;
  local_119 = 0;
  _auStack_150 = (ulong)CONCAT24(n_finder_dat[157].h,local_130);
  uVar5 = CONCAT44(n_finder_dat[157].y + local_90,local_128);
  uVar6._0_4_ = 0x10;
  uVar6._4_1_ = '\0';
  uVar6._5_1_ = '\0';
  uVar6._6_1_ = '\0';
  uVar6._7_1_ = '\0';
  puVar1 = auStack_150 + 7;
  uVar3 = (uint)puVar1 & 7;
  *(ulong *)(puVar1 + -uVar3) =
       *(ulong *)(puVar1 + -uVar3) & -1L << (uVar3 + 1) * 8 |
       (ulong)(CONCAT24(n_finder_dat[157].h,local_130) >> (7 - uVar3) * 8);
  uVar3 = (uint)auStack_141 & 7;
  puVar4 = (ulong *)((int)auStack_141 - uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | uVar5 >> (7 - uVar3) * 8;
  uVar3 = (uint)(ulong *)((int)auStack_141 + 8) & 7;
  puVar4 = (ulong *)((int)(ulong *)((int)auStack_141 + 8) - uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | (ulong)(0x10L >> (7 - uVar3) * 8);
  unique0x1000029a = uVar5;
  auStack_141._1_8_ = uVar6;
  CopySqrDToSqr__FP9DISP_SQARP8SQAR_DAT(&DStack_110,(SQAR_DAT *)auStack_150);
  DStack_110.zbuf = 0xa000118;
  DStack_110.test = 0x30003;
  DispSqrD__FP9DISP_SQAR(&DStack_110);
  DStack_110.pri = 0x30;
  DStack_110.x[0] = DStack_110.x[0] + (uint)(ushort)n_finder_dat[157].w;
  DStack_110.x[1] = DStack_110.x[1] + (uint)(ushort)n_finder_dat[157].w;
  DStack_110.x[3] = DStack_110.x[3] + (uint)(ushort)n_finder_dat[157].w;
  DStack_110.x[2] = DStack_110.x[2] + (uint)(ushort)n_finder_dat[157].w;
  DStack_110.z = 0xfffcf;
  DispSqrD__FP9DISP_SQAR(&DStack_110);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ds,n_finder_dat + 0x9d);
  fVar14 = ((float)iVar12 / 1000.0) * 90.0;
  ds.x = ds.x + fVar16;
  ds.y = ds.y + fVar15;
  ds.rot = fVar14 - 90.0;
  fVar13 = (float)(local_90 + 0x177);
  ds.z = 0xfffdf;
  ds.test = 0x5000d;
  ds.zbuf = 0x10a000118;
  ds.alphar = 0x48;
  ds.pri = 0x20;
  ds.crx = (float)(fndr_mx + 0x47);
  ds.cry = fVar13;
  ds.alpha = uVar11;
  DispSprD__FP9DISP_SPRT(&ds);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ds,n_finder_dat + 0xe);
  ds.x = ds.x + fVar16;
  ds.zbuf = 0x10a000118;
  ds.y = ds.y + fVar15;
  ds.alphar = 0x44;
  ds.crx = (float)(fndr_mx + 0x47);
  ds.cry = fVar13;
  ds.rot = fVar14;
  ds.alpha = uVar11;
  DispSprD__FP9DISP_SPRT(&ds);
  return;
}

void CNEquipTrayWrk::BaseDraw(int fndr_mx, int fndr_my, int master_alp) {
	DISP_SPRT ds;
	DISP_SPRT ds;
	
  float fVar1;
  DISP_SPRT DStack_160;
  DISP_SPRT ds;
  
  fVar1 = (float)fndr_my;
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&DStack_160,n_finder_dat + 10);
  DStack_160.x = DStack_160.x + (float)fndr_mx;
  DStack_160.zbuf = 0x10a000118;
  DStack_160.y = DStack_160.y + fVar1;
  DStack_160.alphar = 0x44;
  DStack_160.alpha = (uchar)master_alp;
  DispSprD__FP9DISP_SPRT(&DStack_160);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ds,n_finder_dat + 8);
  ds.x = ds.x + (float)fndr_mx;
  ds.zbuf = 0x10a000118;
  ds.y = ds.y + fVar1;
  ds.alphar = 0x44;
  ds.alpha = (uchar)master_alp;
  DispSprD__FP9DISP_SPRT(&ds);
  return;
}

void CNEquipTrayWrk::Draw(int fndr_mx, int fndr_my, int master_alp) {
	int pk2_no;
	DISP_SPRT ds;
	float iYOffset;
	CVariable<char,0,2> iSlctNo;
	CVariable<char,0,2> *this;
	int iVal;
	int i;
	int iSubPk2No;
	int iVal;
	int i;
	DISP_SPRT ds;
	CVariable<char,0,2> iSlctNo;
	DISP_SPRT ds;
	int iSubPk2No;
	CVariable<char,0,2> *this;
	int iVal;
	DISP_SPRT ds;
	float iYOffset;
	int iVal;
	int i;
	int iSubPk2No;
	int iVal;
	int i;
	int iFlareAlp;
	float fScaleRate;
	DISP_SPRT ds;
	DISP_SPRT ds;
	int iFlareAlp;
	
  char cVar1;
  uchar uVar2;
  uchar uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  CVariable<char,0,2> *pCVar8;
  SPRT_DAT *pSVar9;
  int iVar10;
  uchar uVar11;
  float fVar12;
  float fVar13;
  DISP_SPRT DStack_400;
  char local_370;
  DISP_SPRT DStack_360;
  CVariable<char,0,2> iSlctNo;
  DISP_SPRT DStack_2c0;
  DISP_SPRT DStack_230;
  DISP_SPRT DStack_1a0;
  DISP_SPRT ds;
  int pk2_no;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  pCVar8 = &(this->mSave).mSlctNo;
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  cVar1 = pCVar8->mValue;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Zt9CVariable3Zci0i9_UiUi_PX01(cVar1,3);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  cVar1 = (this->mSave).mEquipFunc.field0_0x0.m_aData[cVar1].mValue;
  iVar6 = (int)cVar1;
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
  iVar10 = (&_14CNEquipTrayWrk_equip_func_tbl[0].pk2_no)[iVar6 * 2 + (int)cVar1];
  if (iVar10 != 0x18) {
    uVar11 = (uchar)master_alp;
    if (this->mMode == 0) {
      iVar4 = GetNowEquipFuncNum__14CNEquipTrayWrk(this);
      if (iVar4 < 2) {
        fVar12 = (float)fndr_my;
      }
      else {
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
        iVar4 = pCVar8->mValue + 1;
        fVar12 = (float)(fndr_my + (short)(this->mNowOffset).mValue) - 45.0;
        if (iVar4 < 3) {
          local_370 = (char)iVar4;
        }
        else {
          local_370 = '\0';
        }
                    /* end of inlined section */
        iVar4 = 1;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
        do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
          iVar7 = (int)local_370;
          _fixed_array_verifyrange__H1Zt9CVariable3Zci0i9_UiUi_PX01(local_370,3);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
          if (_14CNEquipTrayWrk_equip_func_tbl
              [(this->mSave).mEquipFunc.field0_0x0.m_aData[iVar7].mValue].pk2_no != 0x18) {
            CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT
                      (&DStack_400,
                       n_finder_dat +
                       _14CNEquipTrayWrk_equip_func_tbl
                       [(this->mSave).mEquipFunc.field0_0x0.m_aData[iVar7].mValue].pk2_no);
            DStack_400.x = DStack_400.x + (float)fndr_mx;
            DStack_400.alphar = 0x44;
            DStack_400.y = DStack_400.y + fVar12;
            DStack_400.zbuf = 0x10a000118;
            DStack_400.r = '<';
            DStack_400.g = '<';
            DStack_400.b = '<';
            DStack_400.alpha = uVar11;
            DispSprD__FP9DISP_SPRT(&DStack_400);
            fVar12 = fVar12 - 45.0;
          }
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
          if (local_370 + 1 < 3) {
            local_370 = (char)(local_370 + 1);
          }
          else {
            local_370 = '\0';
          }
                    /* end of inlined section */
          iVar4 = iVar4 + -1;
        } while (-1 < iVar4);
        fVar12 = (float)fndr_my;
        pSVar9 = n_finder_dat + 6;
        iVar4 = 1;
        do {
          CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&DStack_400,pSVar9);
          iVar4 = iVar4 + -1;
          pSVar9 = pSVar9 + 1;
          DStack_400.x = DStack_400.x + (float)fndr_mx;
          DStack_400.zbuf = 0x10a000118;
          DStack_400.y = DStack_400.y + fVar12;
          DStack_400.alphar = 0x44;
          DStack_400.alpha = uVar11;
          DispSprD__FP9DISP_SPRT(&DStack_400);
        } while (-1 < iVar4);
      }
      BaseDraw__14CNEquipTrayWrkiii(this,fndr_mx,fndr_my,master_alp);
      AccumulaterDraw__14CNEquipTrayWrkiii(this,fndr_mx,fndr_my,master_alp);
      CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&DStack_360,n_finder_dat + iVar10);
      DStack_360.x = DStack_360.x + (float)fndr_mx;
      DStack_360.zbuf = 0x10a000118;
      DStack_360.y = DStack_360.y + fVar12;
      DStack_360.alphar = 0x44;
      DStack_360.alpha = uVar11;
      iVar10 = IsReady__14CNEquipTrayWrk(this);
      if (iVar10 == 0) {
        DStack_360.b = '<';
        DStack_360.r = '<';
        iVar10 = iVar6 << 1;
        DStack_360.g = '<';
      }
      else {
        iVar10 = iVar6 * 2;
        DStack_360.b = _14CNEquipTrayWrk_equip_func_tbl[iVar6].b;
        DStack_360.r = _14CNEquipTrayWrk_equip_func_tbl[iVar6].r;
        DStack_360.g = _14CNEquipTrayWrk_equip_func_tbl[iVar6].g;
      }
      DispSprD__FP9DISP_SPRT(&DStack_360);
      cVar1 = (this->mSuckMouthScale).mValue;
    }
    else {
      iSlctNo.mValue = pCVar8->mValue;
      do {
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
        if (iSlctNo.mValue + -1 < 0) {
          iSlctNo.mValue = '\x02';
        }
        else {
          iSlctNo.mValue = (char)(iSlctNo.mValue + -1);
        }
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
        iVar10 = (int)iSlctNo.mValue;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        _fixed_array_verifyrange__H1Zt9CVariable3Zci0i9_UiUi_PX01(iSlctNo.mValue,3);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
      } while ((this->mSave).mEquipFunc.field0_0x0.m_aData[iVar10].mValue == '\0');
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
      iVar10 = (int)iSlctNo.mValue;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Zt9CVariable3Zci0i9_UiUi_PX01(iSlctNo.mValue,3);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
      fVar13 = (float)fndr_mx;
      CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT
                (&DStack_2c0,
                 n_finder_dat +
                 _14CNEquipTrayWrk_equip_func_tbl
                 [(this->mSave).mEquipFunc.field0_0x0.m_aData[iVar10].mValue].pk2_no);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
      iVar10 = (short)(this->mPreSlctAlpha).mValue * master_alp;
                    /* end of inlined section */
      DStack_2c0.x = DStack_2c0.x + (float)fndr_mx;
      DStack_2c0.alphar = 0x44;
      DStack_2c0.zbuf = 0x10a000118;
      DStack_2c0.y = DStack_2c0.y + (float)(fndr_my + this->mPreSlctYOffset);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
      if (iVar10 < 0) {
        iVar10 = iVar10 + 0x7f;
      }
      DStack_2c0.alpha = (uchar)(iVar10 >> 7);
                    /* end of inlined section */
      DispSprD__FP9DISP_SPRT(&DStack_2c0);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
      fVar12 = (float)(fndr_my + (short)(this->mNowOffset).mValue) - 45.0;
      if (iSlctNo.mValue + 1 < 3) {
        iSlctNo.mValue = (char)(iSlctNo.mValue + 1);
      }
      else {
        iSlctNo.mValue = '\0';
      }
                    /* end of inlined section */
      iVar10 = 1;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
      do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        iVar4 = (int)iSlctNo.mValue;
        _fixed_array_verifyrange__H1Zt9CVariable3Zci0i9_UiUi_PX01(iSlctNo.mValue,3);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
        if (_14CNEquipTrayWrk_equip_func_tbl
            [(this->mSave).mEquipFunc.field0_0x0.m_aData[iVar4].mValue].pk2_no != 0x18) {
          CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT
                    (&DStack_230,
                     n_finder_dat +
                     _14CNEquipTrayWrk_equip_func_tbl
                     [(this->mSave).mEquipFunc.field0_0x0.m_aData[iVar4].mValue].pk2_no);
          DStack_230.x = DStack_230.x + fVar13;
          DStack_230.alphar = 0x44;
          DStack_230.y = DStack_230.y + fVar12;
          DStack_230.zbuf = 0x10a000118;
          DStack_230.r = '<';
          DStack_230.g = '<';
          DStack_230.b = '<';
          DStack_230.alpha = uVar11;
          DispSprD__FP9DISP_SPRT(&DStack_230);
          fVar12 = fVar12 - 45.0;
        }
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
        if (iSlctNo.mValue + 1 < 3) {
          iSlctNo.mValue = (char)(iSlctNo.mValue + 1);
        }
        else {
          iSlctNo.mValue = '\0';
        }
                    /* end of inlined section */
        iVar10 = iVar10 + -1;
      } while (-1 < iVar10);
      fVar12 = (float)fndr_my;
      iVar10 = 1;
      pSVar9 = n_finder_dat + 6;
      do {
        iVar10 = iVar10 + -1;
        CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&DStack_230,pSVar9);
        DStack_230.x = DStack_230.x + fVar13;
        DStack_230.zbuf = 0x10a000118;
        DStack_230.y = DStack_230.y + fVar12;
        DStack_230.alphar = 0x44;
        DStack_230.alpha = uVar11;
        DispSprD__FP9DISP_SPRT(&DStack_230);
        pSVar9 = pSVar9 + 1;
      } while (-1 < iVar10);
      BaseDraw__14CNEquipTrayWrkiii(this,fndr_mx,fndr_my,master_alp);
      AccumulaterDraw__14CNEquipTrayWrkiii(this,fndr_mx,fndr_my,master_alp);
      iVar10 = iVar6 << 1;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
      cVar1 = (this->mSuckMouthScale).mValue;
    }
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    iVar4 = (short)(this->mSuckMouthAlpha).mValue * master_alp;
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0x7f;
    }
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&DStack_1a0,n_finder_dat + 0x3a);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
    DStack_1a0.x = DStack_1a0.x + (float)fndr_mx;
    DStack_1a0.y = DStack_1a0.y + fVar12;
    DStack_1a0.zbuf = 0x10a000118;
    DStack_1a0.alphar = 0x48;
    DStack_1a0.alpha = (uchar)(iVar4 >> 7);
    DStack_1a0.csx = DStack_1a0.x + (float)(DStack_1a0.w >> 1);
    DStack_1a0.csy = DStack_1a0.y + (float)(DStack_1a0.h >> 1);
    iVar4 = (iVar10 + iVar6) * 4;
    uVar11 = (&_14CNEquipTrayWrk_equip_func_tbl[0].b)[iVar4];
    uVar2 = (&_14CNEquipTrayWrk_equip_func_tbl[0].r)[iVar4];
    uVar3 = (&_14CNEquipTrayWrk_equip_func_tbl[0].g)[iVar4];
    DStack_1a0.scw = (float)(int)cVar1 / 100.0;
    DStack_1a0.sch = (float)(int)cVar1 / 100.0;
    DStack_1a0.r = uVar2;
    DStack_1a0.g = uVar3;
    DStack_1a0.b = uVar11;
    DispSprD__FP9DISP_SPRT(&DStack_1a0);
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ds,n_finder_dat + 0xb);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
    ds.x = ds.x + (float)fndr_mx;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
    ds.y = ds.y + fVar12;
    ds.zbuf = 0x10a000118;
    ds.alphar = 0x48;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    if ((this->mSubFuncAnmShot).mSpeed == '\0') {
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
      if ((((this->mSubFuncAnmBlinkNoSetup).field_0x1 & 1) != 0) ||
         (uVar5 = 0x80, ((this->mSubFuncAnmBlink).field_0x1 & 1) != 0)) {
                    /* end of inlined section */
        iVar4 = IsSetUp__14CNEquipTrayWrk(this);
        if (iVar4 == 0) {
          uVar5 = (uint)(this->mSubFuncAnmBlinkNoSetup).mValue;
        }
        else if ((*(uint *)&(this->mNowOffset).mTarget & 0x80000) == 0) {
          uVar5 = (uint)(this->mSubFuncAnmBlinkNoSetup).mValue;
        }
        else {
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
          uVar5 = (uint)(this->mSubFuncAnmBlink).mValue;
        }
                    /* end of inlined section */
        iVar10 = (iVar10 + iVar6) * 4;
        ds.b = (&_14CNEquipTrayWrk_equip_func_tbl[0].b)[iVar10];
        ds.r = (&_14CNEquipTrayWrk_equip_func_tbl[0].r)[iVar10];
        ds.g = (&_14CNEquipTrayWrk_equip_func_tbl[0].g)[iVar10];
      }
    }
    else {
                    /* end of inlined section */
                    /* end of inlined section */
      uVar5 = (uint)(this->mSubFuncAnmShot).mValue;
      ds.r = uVar2;
      ds.g = uVar3;
      ds.b = uVar11;
    }
    iVar10 = uVar5 * master_alp;
    if (iVar10 < 0) {
      iVar10 = iVar10 + 0x7f;
    }
    ds.alpha = (uchar)(iVar10 >> 7);
    DispSprD__FP9DISP_SPRT(&ds);
  }
  return;
}

void CNEquipTrayWrk::RenzMarkOn() {
	CBlinkSwitchVariable<unsigned char,0,60,20,0> *this;
	
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
  *(uint *)&(this->mNowOffset).mTarget = *(uint *)&(this->mNowOffset).mTarget | 0x80000;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  (this->mRenzMarkBlink).mAdd = 0x15;
  (this->mSubFuncAnmBlink).field_0x1 = (this->mSubFuncAnmBlink).field_0x1 | 1;
  (this->mSubFuncAnmBlinkNoSetup).field_0x1 = (this->mSubFuncAnmBlinkNoSetup).field_0x1 | 1;
  return;
}

void CNEquipTrayWrk::RenzMarkOff() {
	CBlinkSwitchVariable<unsigned char,0,60,20,0> *this;
	
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
  *(uint *)&(this->mNowOffset).mTarget = *(uint *)&(this->mNowOffset).mTarget & 0xfff7ffff;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  (this->mRenzMarkBlink).mAdd = 0xffeb;
  (this->mSubFuncAnmBlink).field_0x1 = (this->mSubFuncAnmBlink).field_0x1 & 0xfe;
  (this->mSubFuncAnmBlinkNoSetup).field_0x1 = (this->mSubFuncAnmBlinkNoSetup).field_0x1 & 0xfe;
  return;
}

void CNEquipTrayWrk::RenzMarkDraw(int fndr_mx, int fndr_my, int master_alp) {
	float fRate;
	float fScale;
	float fRot;
	int i;
	
  char cVar1;
  ushort uVar2;
  int iVar3;
  SPRT_DAT *d;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  DISP_SPRT DStack_100;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  fVar5 = 1.0;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  cVar1 = (this->mSave).mSlctNo.mValue;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Zt9CVariable3Zci0i9_UiUi_PX01(cVar1,3);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  iVar3 = (int)(short)(this->mRenzMarkAlpha).mValue;
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
  fVar6 = (DAT_003ee624 - (float)iVar3 / 76.0) * 90.0;
  cVar1 = (this->mSave).mEquipFunc.field0_0x0.m_aData[cVar1].mValue;
  if (fVar6 < 0.0) {
    fVar6 = 0.0;
  }
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  uVar2 = (this->mRenzMarkBlink).mValue;
                    /* end of inlined section */
  iVar4 = 3;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
  fVar7 = (float)fndr_mx;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
  d = n_finder_dat + 0x3b;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
  do {
    iVar4 = iVar4 + -1;
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&DStack_100,d);
    DStack_100.r = _14CNEquipTrayWrk_equip_func_tbl[cVar1].r;
    DStack_100.crx = (float)(fndr_mx + 0x140);
    DStack_100.cry = (float)(fndr_my + 0xe0);
    DStack_100.x = DStack_100.x + fVar7;
    DStack_100.g = _14CNEquipTrayWrk_equip_func_tbl[cVar1].g;
    DStack_100.y = DStack_100.y + (float)fndr_my;
    DStack_100.b = _14CNEquipTrayWrk_equip_func_tbl[cVar1].b;
    DStack_100.zbuf = 0x10a000118;
    DStack_100.alphar = 0x48;
    DStack_100.alpha = (uchar)((master_alp * (short)uVar2 * iVar3) / 0x2600);
    DStack_100.csx = DStack_100.crx;
    DStack_100.csy = DStack_100.cry;
    DStack_100.scw = fVar5;
    DStack_100.sch = fVar5;
    DStack_100.rot = fVar6;
    DispSprD__FP9DISP_SPRT(&DStack_100);
    d = d + 1;
  } while (-1 < iVar4);
  return;
}

int CNEquipTrayWrk::IsMoving() {
  return (int)(0 < (this->mSave).mBankGage);
}

int CNEquipTrayWrk::IsHitBackON() {
  char cVar1;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  cVar1 = (this->mSave).mSlctNo.mValue;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Zt9CVariable3Zci0i9_UiUi_PX01(cVar1,3);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* inlined from n_equip_tray.h */
  return (int)_14CNEquipTrayWrk_equip_func_tbl
              [(this->mSave).mEquipFunc.field0_0x0.m_aData[cVar1].mValue].bHitBack;
}

void CNEquipTraySave::ResetGage() {
  this->mStockNum = 0;
  this->mDispGage = 0;
  this->mBankGage = 0;
  dbg_stock_num = 0;
  return;
}

void CNEquipTraySave::PushGage(int *iGageDat) {
  *iGageDat = this->mDispGage;
  iGageDat[1] = this->mBankGage;
  iGageDat[2] = this->mStockNum;
  return;
}

void CNEquipTraySave::PopGage(int *iGageDat) {
  this->mDispGage = *iGageDat;
  this->mBankGage = iGageDat[1];
  this->mStockNum = iGageDat[2];
  return;
}

CVariable<char,0,9>* CVariable<char, 0, 9> * _fixed_array_verifyrange<CVariable<char, 0, 9> >(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)this;
}

CVariable<char,0,3>* CVariable<char, 0, 3> * _fixed_array_verifyrange<CVariable<char, 0, 3> >(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)this;
}

void CBlinkVariable<char, 0, 100>::Blink(char tTime) {
	static char __FUNCTION__[6] = {
		/* [0] = */ 66,
		/* [1] = */ 108,
		/* [2] = */ 105,
		/* [3] = */ 110,
		/* [4] = */ 107,
		/* [5] = */ 0
	};
	
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)this;
}

void CFadeVariable<short>::Fade(short int tTarget, short int tTime) {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)this;
}

void CBlinkVariable<char, 0, 127>::Blink(char tTime) {
	static char __FUNCTION__[6] = {
		/* [0] = */ 66,
		/* [1] = */ 108,
		/* [2] = */ 105,
		/* [3] = */ 110,
		/* [4] = */ 107,
		/* [5] = */ 0
	};
	
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)this;
}

void CFadeVariable<char>::Fade(char tTarget, char tTime) {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)this;
}

void CBlinkVariable<char, 0, 127>::Work() {
	int iValue;
	
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)this;
}

void CBlinkVariable<char, 0, 100>::Work() {
	int iValue;
	
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)this;
}

void CBlinkSwitchVariable<unsigned char, 50, 100, 1, 0>::Work() {
	int iValue;
	
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)this;
}

void CBlinkSwitchVariable<unsigned char, 0, 60, 20, 0>::Work() {
	int iValue;
	
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)this;
}

void CFadeVariable<char>::Work() {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)this;
}

void CWrkVariable<char, 0, 100>::Work() {
	int iVal;
	
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)this;
}

void CWrkVariable<short, 0, 128>::Work() {
	int iVal;
	
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)this;
}

void CWrkVariable<short, 0, 76>::Work() {
	int iVal;
	
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)this;
}

void CWrkVariable<short, 20, 128>::Work() {
	int iVal;
	
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)this;
}

void CBlinkSwitchVariable<short, 20, 60, 15, 0>::Work() {
	int iValue;
	
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)this;
}

void CFadeVariable<short>::Work() {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)this;
}

type_info& CVariable<char, 0, 9> type_info function() {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)this;
}

type_info& CVariable<char, 0, 3> type_info function() {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)this;
}
