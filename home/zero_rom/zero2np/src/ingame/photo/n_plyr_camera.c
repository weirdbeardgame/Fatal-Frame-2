// STATUS: NOT STARTED

#include "n_plyr_camera.h"

unsigned char CVariable<char, 0, 9> type_info node[8];
unsigned char CVariable<char, 0, 3> type_info node[8];
static int mIsSetup;

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3c1eb8;
	
  g3ddbgAssert__FbPCce(false,str_786);
  return;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    Fade__t13CFadeVariable1Ziii((CFadeVariable<int> *)s_void__003f3540,_max,v);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    Fade__t13CFadeVariable1Ziii((CFadeVariable<int> *)s_char__003f3548,_max,v);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    Fade__t13CFadeVariable1Ziii((CFadeVariable<int> *)"unsigned int*",_max,v);
  }
  return (uint **)0x0;
}

void CFinderBase::Draw(int off_x, int off_y, int iAlpha) {
	DISP_SPRT ds;
	
  DISP_SPRT ds;
  
  DrawKakiwari__11CFinderBaseiii(this,off_x,off_y,iAlpha);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ds,n_finder_dat + 9);
  ds.alpha = (uchar)iAlpha;
  ds.x = ds.x + (float)off_x;
  ds.zbuf = 0x10a000118;
  ds.y = ds.y + (float)off_y;
  ds.alphar = 0x44;
  DispSprD__FP9DISP_SPRT(&ds);
  return;
}

void CFinderBase::DrawKakiwari(int off_x, int off_y, int iAlpha) {
	DISP_SPRT ds;
	int i;
	
  int iVar1;
  SPRT_DAT *d;
  float fVar2;
  DISP_SPRT ds;
  
  fVar2 = (float)off_x;
  iVar1 = 5;
  d = n_finder_dat;
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ds,d);
    iVar1 = iVar1 + -1;
    d = d + 1;
    ds.x = ds.x + fVar2;
    ds.alphar = 0x44;
    ds.y = ds.y + (float)off_y;
    ds.alpha = (uchar)iAlpha;
    ds.test = 0x30003;
    ds.zbuf = 0x10a000118;
    DispSprD__FP9DISP_SPRT(&ds);
  } while (-1 < iVar1);
  return;
}

void CNPlyrCamera::Release() {
  Release__9CSPChance(&this->sp);
  return;
}

void CNPlyrCamera::SetUp() {
	static char __FUNCTION__[6] = {
		/* [0] = */ 83,
		/* [1] = */ 101,
		/* [2] = */ 116,
		/* [3] = */ 85,
		/* [4] = */ 112,
		/* [5] = */ 0
	};
	int adrs;
	
  uchar uVar1;
  uint uVar2;
  void *pvVar3;
  
  if (mIsSetup == 0) {
    mIsSetup = 1;
    this->finder_buf = (void *)0x18ad000;
    uVar1 = GetLanguage__Fv();
    LoadReq__FiUi((char)uVar1 + 9,(uint)this->finder_buf);
    uVar1 = GetLanguage__Fv();
    uVar2 = GetFileSize((char)uVar1 + 9);
    pvVar3 = (void *)GetAlignUp(uVar2 + (int)this->finder_buf,6);
    this->pl_life_buf = pvVar3;
    uVar1 = GetLanguage__Fv();
    LoadReq__FiUi((char)uVar1 + 0xe,(uint)this->pl_life_buf);
    uVar1 = GetLanguage__Fv();
    uVar2 = GetFileSize((char)uVar1 + 0xe);
    uVar2 = GetAlignUp(uVar2 + (int)this->pl_life_buf,6);
    if (0x19368c0 < (int)uVar2) {
      printf("PL_FNDR_ADDR + PL_FNDR_SIZE + PL_LIFE_SIZE = 0x%x\n");
      SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
      PrintAssertReal("Finder PK Is Over Size 0x%x");
      return;
    }
    printf("Finder Pk2 End Adrs[0x%x] buffer End Adrs[0x%x]\n");
  }
  return;
}

float CNPlyrCamera::GetFOVRate() {
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  return this->mZoomRate * (this->mFOV).mValue;
}

void CNPlyrCamera::DrawSpiritGageBase(int off_x, int off_y, int iAlpha, float fMasterScale) {
	DISP_SPRT ds;
	
  uchar uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  DISP_SPRT ds;
  
  fVar3 = (float)off_x;
  fVar6 = (float)off_y;
  fVar4 = (float)(off_y + 0xe1);
  fVar2 = (float)(off_x + 0x13f);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ds,n_finder_dat + 0x22);
  ds.x = ds.x + fVar3;
  ds.y = ds.y + fVar6;
  ds.zbuf = 0x10a000118;
  ds.alphar = 0x44;
  uVar1 = (uchar)iAlpha;
  ds.tex1 = 0x161;
  ds.csx = fVar2;
  ds.csy = fVar4;
  ds.scw = fMasterScale;
  ds.sch = fMasterScale;
  ds.alpha = uVar1;
  DispSprD__FP9DISP_SPRT(&ds);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ds,n_finder_dat + 0x23);
  fVar5 = 270.0;
  ds.x = ds.x + fVar3;
  ds.zbuf = 0x10a000118;
  ds.y = ds.y + fVar6;
  ds.alphar = 0x44;
  ds.tex1 = 0x161;
  ds.csx = fVar2;
  ds.csy = fVar4;
  ds.scw = fMasterScale;
  ds.sch = fMasterScale;
  ds.alpha = uVar1;
  DispSprD__FP9DISP_SPRT(&ds);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ds,n_finder_dat + 0x24);
  ds.x = ds.x + fVar3;
  ds.zbuf = 0x10a000118;
  ds.y = ds.y + fVar6;
  ds.alphar = 0x44;
  ds.tex1 = 0x161;
  ds.crx = fVar2;
  ds.cry = fVar4;
  ds.csx = fVar2;
  ds.csy = fVar4;
  ds.scw = fMasterScale;
  ds.sch = fMasterScale;
  ds.rot = fVar5;
  ds.alpha = uVar1;
  DispSprD__FP9DISP_SPRT(&ds);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ds,n_finder_dat + 0x25);
  ds.x = ds.x + fVar3;
  ds.zbuf = 0x10a000118;
  ds.y = ds.y + fVar6;
  ds.alphar = 0x44;
  ds.tex1 = 0x161;
  ds.crx = fVar2;
  ds.cry = fVar4;
  ds.csx = fVar2;
  ds.csy = fVar4;
  ds.scw = fMasterScale;
  ds.sch = fMasterScale;
  ds.rot = fVar5;
  ds.alpha = uVar1;
  DispSprD__FP9DISP_SPRT(&ds);
  return;
}

void CNPlyrCamera::FinderIn() {
  this->mCntFinder = 0;
  Reset__14CNEquipTrayWrk(&this->eq_tray);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  (this->mSpiritGageScale).mAdd = '\0';
  (this->mSpiritGageScale).mValue = '@';
                    /* end of inlined section */
  Init__10CBonusShot(&this->mBonusShot);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  (this->mMasterAlpha).mAdd = 0x10;
  (this->hp).mAlpha.mAdd = 0x20;
                    /* end of inlined section */
  (this->hp).mFadeWaitCnt.mValue = 0;
  Init__13CCenterCircle(&this->center_circle);
  this->mNoSpiritGageTimer = '\0';
  return;
}

void CNPlyrCamera::FinderOut() {
	CWaitVariable<short int> *this;
	short int WaitCnt;
	
  CWaitVariable<short_int> *pCVar1;
  
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  (this->mMasterAlpha).mAdd = -0x10;
  pCVar1 = &(this->hp).mFadeWaitCnt;
                    /* end of inlined section */
  End__14CNEquipTrayWrk(&this->eq_tray);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  if (pCVar1->mValue == 0) {
    pCVar1->mValue = 0x8c;
  }
  return;
}

void CNPlyrCamera::DrawLock() {
  this->mDrawLockCnt = this->mDrawLockCnt + '\x01';
  return;
}

void CNPlyrCamera::DrawUnlock() {
  this->mDrawLockCnt = this->mDrawLockCnt + -1;
  return;
}

void CNPlyrCamera::InCircleDrawLock(int iCnt) {
	CWaitVariable<short int> *this;
	CWrkVariable<short int,0,128> *this;
	
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  if ((this->mInWaiter).mValue == 0) {
    (this->mInWaiter).mValue = (ushort)iCnt;
  }
  (this->mInAlpha).mAdd = 0;
  (this->mInAlpha).mValue = 0;
  return;
}

void CNPlyrCamera::Init() {
  int iVar1;
  uint iWaitCnt;
  
  this->mDrawLockCnt = '\0';
  Init__9CFilament(&this->filament);
                    /* inlined from hp_bar.h */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  (this->hp).mAlpha.mAdd = 0;
  (this->hp).mAlpha.mValue = 0;
                    /* inlined from hp_bar.h */
  (this->hp).mFadeWaitCnt.mValue = 0;
  SyncHpBar__Fv();
                    /* end of inlined section */
  Init__9CSPChance(&this->sp);
                    /* inlined from center_cross.h */
  memset(&this->center_cross,0,0x78);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  (this->mMasterAlpha).mAdd = 0;
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  (this->mInAlpha).mValue = 0x80;
  (this->mInAlpha).mAdd = 0;
                    /* end of inlined section */
  (this->mMasterAlpha).mValue = 0;
  FrameLenSet__8CEneLifef(&this->ene_life,0.0);
  Init__7CFilmNo(&this->film_no);
  iVar1 = GetPALMode__Fv();
                    /* inlined from camera_film.h */
                    /* end of inlined section */
  if (iVar1 == 0) {
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    iWaitCnt = (uint)_11CCameraFilm_aFilmChargeSpdTbl[(this->camera_film).mFilmType.mValue];
  }
  else {
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* inlined from camera_film.h */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* inlined from camera_film.h */
    iWaitCnt = (((uint)_11CCameraFilm_aFilmChargeSpdTbl[(this->camera_film).mFilmType.mValue] * 0x18
                + (uint)_11CCameraFilm_aFilmChargeSpdTbl[(this->camera_film).mFilmType.mValue]) * 2)
               / 0x3c;
  }
                    /* inlined from camera_film.h */
  Reset__13CPhotoChargeri(&this->charger,iWaitCnt);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  (this->mSpiritGageAlpha).mSpeed = 0;
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  (this->mSpiritGageAlpha).mValue = 0;
  (this->mSpiritGageAlpha).mTarget = 0;
                    /* end of inlined section */
  this->mpSpiritGage = (CSpiritGage *)0x0;
  Init__11CSearchMark(&this->search_mark);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  (this->mInWaiter).mValue = 0;
                    /* end of inlined section */
  Init__11CDamageDisp(&this->mDmgDisp);
  ReqNoiseReset__12CNPlyrCamera(this);
  Init__14CNEquipTrayWrk(&this->eq_tray);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  (this->mFcs).mAdd = 0;
                    /* end of inlined section */
  this->mZoomRate = 1.0;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  (this->mFcs).mValue = 0;
  (this->mFOV).mTarget = 1.0;
  (this->mFOV).mSpeed = 0.0;
  (this->mFOV).mValue = 1.0;
                    /* end of inlined section */
  (this->mFOVTimer).mValue = '\0';
  Init__10CBonusShot(&this->mBonusShot);
  return;
}

void CNPlyrCamera::ReqZoomIn() {
	CFadeVariable<float> *this;
	float tTarget;
	
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  if ((this->mFOV).mTarget != DAT_003ee628) {
    Fade__t13CFadeVariable1Zfff(DAT_003ee628,DAT_003ee62c);
  }
  (this->mFOVTimer).mValue = '\0';
  return;
}

void CNPlyrCamera::ReqZoomOut() {
	CWaitVariable<char> *this;
	char WaitCnt;
	
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  if ((this->mFOVTimer).mValue == '\0') {
    (this->mFOVTimer).mValue = '<';
  }
  return;
}

void CNPlyrCamera::ZoomWork() {
  bool bVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = DAT_003ee63c;
  fVar3 = DAT_003ee634;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  if (((this->camera_power_up).mCamPartsSetFlg.flag_32[0] & 8U) == 0) {
    this->mZoomRate = 1.0;
  }
  else {
                    /* end of inlined section */
    if (*paddat[0x30] == 0) {
      if (*paddat[0x2f] == 0) {
        return;
      }
      fVar3 = this->mZoomRate - DAT_003ee638;
      bVar1 = fVar3 < DAT_003ee63c;
      this->mZoomRate = fVar3;
      fVar3 = fVar2;
    }
    else {
      fVar2 = this->mZoomRate + DAT_003ee630;
      bVar1 = DAT_003ee634 < fVar2;
      this->mZoomRate = fVar2;
    }
    if (bVar1) {
      this->mZoomRate = fVar3;
      return;
    }
  }
  return;
}

void CNPlyrCamera::ResetCharge() {
  int iVar1;
  uint iWaitCnt;
  
  iVar1 = GetPALMode__Fv();
                    /* inlined from camera_film.h */
                    /* end of inlined section */
  if (iVar1 == 0) {
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    iWaitCnt = (uint)_11CCameraFilm_aFilmChargeSpdTbl[(this->camera_film).mFilmType.mValue];
  }
  else {
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* inlined from camera_film.h */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* inlined from camera_film.h */
    iWaitCnt = (((uint)_11CCameraFilm_aFilmChargeSpdTbl[(this->camera_film).mFilmType.mValue] * 0x18
                + (uint)_11CCameraFilm_aFilmChargeSpdTbl[(this->camera_film).mFilmType.mValue]) * 2)
               / 0x3c;
  }
                    /* inlined from camera_film.h */
  Reset__13CPhotoChargeri(&this->charger,iWaitCnt);
  return;
}

void CNPlyrCamera::ReqNoiseUp() {
                    /* inlined from /home/zero_rom/zero2np/src/common/zero2_util.h */
                    /* end of inlined section */
  this->mNoSpiritGageTimer = 'F';
                    /* inlined from /home/zero_rom/zero2np/src/common/zero2_util.h */
  SndBufFadePitch((this->mSpiritNoise).field0_0x0.play_id,0x3800,6);
  SndBufVolFade((this->mSpiritNoise).field0_0x0.play_id,0,0xb);
  return;
}

void CNPlyrCamera::ReqNoiseReset() {
  return;
}

void CNPlyrCamera::Main() {
	short int iValue;
	int fcs;
	short int iValue;
	int iPitch;
	int tTarget;
	int tTarget;
	CSND_BUF_PLAY *this;
	
  int iVar1;
  int iVar2;
  long lVar3;
  CFilmNo *this_00;
  CFINDER_SND_BUF_PLAY *pCVar4;
  CPhotoCharger *this_01;
  int pitch;
  float fVar5;
  
  Work__t12CWrkVariable3Zii0i_128_(&this->mMasterAlpha);
  Work__t12CWrkVariable3Zsi0i_128_(&this->mInAlpha);
  Work__6CHpBar(&this->hp);
  Work__9CFilament(&this->filament);
  Work__11CSearchMark(&this->search_mark);
  lVar3 = Work__t13CWaitVariable1Zc(&this->mFOVTimer);
  if (lVar3 != 0) {
    Fade__t13CFadeVariable1Zfff(0x3f800000,0x41700000,&this->mFOV);
  }
  Work__t13CFadeVariable1Zf(&this->mFOV);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  fVar5 = (this->mFOV).mSpeed;
  iVar2 = 4;
  if ((fVar5 != 0.0) && (iVar2 = 3, 0.0 < fVar5)) {
    iVar2 = 2;
  }
  if (iVar2 == 3) {
    (this->mFcs).mValue = 0x80;
    (this->mFcs).mAdd = 0;
  }
  else {
    (this->mFcs).mAdd = 0xffd6;
  }
                    /* end of inlined section */
  Work__t12CWrkVariable3Zsi0i_128_(&this->mFcs);
  iVar2 = PlayerModeIsFinder__Fv();
  if (iVar2 == 0) {
                    /* end of inlined section */
    Work__13CPhotoChargeri(&this->charger,0);
                    /* inlined from /home/zero_rom/zero2np/src/common/zero2_util.h */
    SndBufFadeStop((this->mSpiritNoise).field0_0x0.play_id,10);
    (this->mSpiritNoise).field0_0x0.play_id = 0x300000;
  }
  else {
    iVar2 = 0;
    if ((float)(int)(short)this->mCntFinder <= 20.0) {
      iVar2 = 0x80 - ((int)(short)this->mCntFinder << 7) / 0x14;
    }
    if (iVar2 == 0) {
      SetEffects__Fiie(7,1);
    }
    else {
      SetEffects__Fiie(7,1);
    }
    this_01 = &this->charger;
    iVar2 = IsReady__13CPhotoCharger(this_01);
    this_00 = &this->film_no;
    if (iVar2 == 0) {
      Init__7CFilmNo(this_00);
    }
    else {
      BlinkOn__7CFilmNo(this_00);
    }
    Work__10CBonusShot(&this->mBonusShot);
    Work__11CDamageDisp(&this->mDmgDisp);
    Work__13CPhotoChargeri(this_01,1);
    Work__8CEneLife(&this->ene_life);
    Work__13CCenterCircle(&this->center_circle);
    Work__12CCenterCross(&this->center_cross);
    Work__14CNEquipTrayWrk(&this->eq_tray);
    Work__7CFilmNo(this_00);
    ZoomWork__12CNPlyrCamera(this);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    Work__9CSPChancei(&this->sp,(this->camera_power_up).mCamPartsSetFlg.flag_32[0] & 4);
                    /* end of inlined section */
    lVar3 = Work__t13CWaitVariable1Zs(&this->mInWaiter);
    if (lVar3 != 0) {
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
      (this->mInAlpha).mAdd = 0x10;
    }
                    /* end of inlined section */
    if (this->mNoSpiritGageTimer == '\0') {
                    /* end of inlined section */
      if ((this->mpSpiritGage == (CSpiritGage *)0x0) ||
         (iVar2 = IsReady__13CPhotoCharger(this_01), iVar2 == 0)) {
        if ((this->mSpiritGageAlpha).mTarget != 0) {
          Fade__t13CFadeVariable1Ziii(&this->mSpiritGageAlpha,0,4);
        }
                    /* inlined from /home/zero_rom/zero2np/src/common/zero2_util.h */
        SndBufFadeStop((this->mSpiritNoise).field0_0x0.play_id,10);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* inlined from /home/zero_rom/zero2np/src/common/zero2_util.h */
        (this->mSpiritNoise).field0_0x0.play_id = 0x300000;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
        (this->mSpiritGageScale).mValue = '@';
        (this->mSpiritGageScale).mAdd = '\0';
      }
      else {
                    /* inlined from ../photo/spirit_gage.h */
                    /* end of inlined section */
                    /* inlined from ../photo/spirit_gage.h */
        iVar1 = this->mpSpiritGage->mPercent;
                    /* end of inlined section */
        pitch = iVar1 * 0x28 + 0x1000;
        iVar2 = (((iVar1 * 0x46) / 100) * 0x3fff + 0x77fe2) / 100;
        pCVar4 = &this->mSpiritNoise;
        if (iVar1 == 0) {
                    /* inlined from /home/zero_rom/zero2np/src/common/zero2_util.h */
          SndBufFadeStop((pCVar4->field0_0x0).play_id,10);
          (pCVar4->field0_0x0).play_id = 0x300000;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
          if ((this->mSpiritGageAlpha).mTarget != 0x28) {
            Fade__t13CFadeVariable1Ziii(&this->mSpiritGageAlpha,0x28,4);
          }
        }
        else {
                    /* inlined from /home/zero_rom/zero2np/src/common/zero2_util.h */
          iVar1 = (pCVar4->field0_0x0).play_id;
          if (iVar1 == 0x300000) {
                    /* inlined from finder.h */
            iVar2 = FinderBankPlay__FiiiiP11_SND_3D_SETii(0xf,1,1,10,(_SND_3D_SET *)0x0,iVar2,pitch)
            ;
            (pCVar4->field0_0x0).play_id = iVar2;
          }
          else {
                    /* inlined from /home/zero_rom/zero2np/src/common/zero2_util.h */
            SndBufVolFade(iVar1,iVar2,10);
            SndBufFadePitch((pCVar4->field0_0x0).play_id,pitch,0);
          }
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
          if ((this->mSpiritGageAlpha).mTarget != 0x50) {
            Fade__t13CFadeVariable1Ziii(&this->mSpiritGageAlpha,0x50,4);
          }
        }
        (this->mSpiritGageScale).mAdd = -0x10;
      }
    }
    else {
      this->mNoSpiritGageTimer = this->mNoSpiritGageTimer + -1;
      iVar2 = IsReady__13CPhotoCharger(this_01);
      if (iVar2 == 0) {
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
        (this->mSpiritGageAlpha).mValue = 0;
        (this->mSpiritGageAlpha).mTarget = 0;
        (this->mSpiritGageAlpha).mSpeed = 0;
      }
    }
                    /* end of inlined section */
    Work__t13CFadeVariable1Zi(&this->mSpiritGageAlpha);
    Work__t12CWrkVariable3Zci0i_64_(&this->mSpiritGageScale);
    if ((float)(int)(short)this->mCntFinder <= 20.0) {
      this->mCntFinder = this->mCntFinder + 1;
    }
  }
  return;
}

void CNPlyrCamera::CaptureCircleDraw(int fndr_mx, int fndr_my, int iAlpha) {
	DISP_SPRT ds;
	
  DISP_SPRT ds;
  
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ds,n_finder_dat + 0x39);
  ds.alpha = (uchar)iAlpha;
  ds.x = ds.x + (float)fndr_mx;
  ds.b = 0x80;
  ds.y = ds.y + (float)fndr_my;
  ds.r = 0x80;
  ds.g = 0x80;
  DispSprD__FP9DISP_SPRT(&ds);
  return;
}

void CNPlyrCamera::PhotoInfoDisp(int iDamage, int iScore, PHOTO_BONUS_SHOT bonus) {
  Req__11CDamageDispiii(&this->mDmgDisp,iDamage,iScore,0x3c);
  return;
}

void CNPlyrCamera::PhotoInfoDispNew(int iDamage, int iScore, BONUS_SHOT_SCORE bonus) {
  ushort *puVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  ulong *puVar6;
  uint *puVar7;
  ulong in_v0;
  ulong in_v1;
  ulong uVar8;
  undefined auStack_40 [7];
  undefined auStack_39 [8];
  undefined8 uStack_31;
  
  puVar2 = (undefined *)((int)(bonus->mScore).field0_0x0.m_aData + 7);
  uVar3 = (uint)puVar2 & 7;
  uVar4 = (uint)bonus & 7;
  _auStack_40 = (*(long *)(puVar2 + -uVar3) << (7 - uVar3) * 8 |
                in_v0 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
                *(ulong *)((int)bonus - uVar4) >> uVar4 * 8;
  puVar2 = (undefined *)((int)(bonus->mScore).field0_0x0.m_aData + 0xf);
  uVar3 = (uint)puVar2 & 7;
  puVar1 = (bonus->mScore).field0_0x0.m_aData + 4;
  uVar4 = (uint)puVar1 & 7;
  uVar8 = (*(long *)(puVar2 + -uVar3) << (7 - uVar3) * 8 |
          in_v1 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
          *(ulong *)((int)puVar1 - uVar4) >> uVar4 * 8;
  puVar2 = (undefined *)((int)&bonus->mSP + 1);
  uVar3 = (uint)puVar2 & 3;
  puVar1 = (bonus->mScore).field0_0x0.m_aData + 8;
  uVar4 = (uint)puVar1 & 3;
  uVar3 = (*(int *)(puVar2 + -uVar3) << (3 - uVar3) * 8 |
          (uint)this & 0xffffffffU >> (uVar3 + 1) * 8) & -1 << (4 - uVar4) * 8 |
          *(uint *)((int)puVar1 - uVar4) >> uVar4 * 8;
  uVar5 = bonus->mComboNum;
  puVar2 = auStack_40 + 7;
  uVar4 = (uint)puVar2 & 7;
  *(ulong *)(puVar2 + -uVar4) =
       *(ulong *)(puVar2 + -uVar4) & -1L << (uVar4 + 1) * 8 | _auStack_40 >> (7 - uVar4) * 8;
  uVar4 = (uint)&uStack_31 & 7;
  puVar6 = (ulong *)((int)&uStack_31 - uVar4);
  *puVar6 = *puVar6 & -1L << (uVar4 + 1) * 8 | uVar8 >> (7 - uVar4) * 8;
  uVar4 = (int)&uStack_31 + 4U & 3;
  puVar7 = (uint *)(((int)&uStack_31 + 4U) - uVar4);
  *puVar7 = *puVar7 & -1 << (uVar4 + 1) * 8 | uVar3 >> (3 - uVar4) * 8;
  unique0x10000116 = uVar8;
  uStack_31._1_4_ = uVar3;
  uStack_31._5_2_ = uVar5;
  SetDamage__8CEneLifei(&this->ene_life,iDamage);
  Req__10CBonusShotiG16BONUS_SHOT_SCOREi(&this->mBonusShot,iScore,(BONUS_SHOT_SCORE *)auStack_40,2);
  return;
}

void CNPlyrCamera::Draw() {
	float fx;
	float fy;
	int fndr_mx;
	int fndr_my;
	static char aFilmTypeNo[5] = {
		/* [0] = */ 7,
		/* [1] = */ 14,
		/* [2] = */ 61,
		/* [3] = */ 90,
		/* [4] = */ 0
	};
	int iSpiritGageAlpha;
	float iSpiritGageScale;
	
  char cVar1;
  int iVar2;
  int iVar3;
  CWrkVariable<int,0,128> *pCVar4;
  int iAlpha;
  int fndr_mx;
  float fVar5;
  int fndr_my;
  float fVar6;
  float fx;
  float fy;
  int local_68;
  CNEquipTrayWrk *local_64;
  
  local_68 = (uint)(byte)this->mDrawLockCnt << 0x18;
  if (this->mDrawLockCnt == 0) {
    GetFinderMovePos__12CNPlyrCameraPfT1(this,&fx,&fy);
    fndr_mx = (int)fx;
    fVar5 = GetFreqCamera__Fv();
    fndr_my = (int)(fy - fVar5 * 0.25);
    iVar2 = PlayerModeIsFinder__Fv();
    pCVar4 = &this->mMasterAlpha;
    if (iVar2 == 0) {
      PK2SendVram__FUiiii((uint)this->pl_life_buf,-1,-1,0);
      Draw__9CFilamentiiii(&this->filament,0x130,0x1a2,0x80,1);
      Draw__6CHpBariii(&this->hp,0x15,0x1b,0x80);
    }
    else {
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
      cVar1 = (this->mSpiritGageScale).mValue;
      iVar2 = (pCVar4->mValue * (int)(short)(this->mInAlpha).mValue) / 0x80;
                    /* end of inlined section */
      local_64 = &this->eq_tray;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
      iAlpha = ((this->mSpiritGageAlpha).mValue * iVar2) / 0x80;
                    /* end of inlined section */
      fVar5 = GetRadiusRate__14CCameraPowerUp(&this->camera_power_up);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
      fVar5 = ((float)((cVar1 * 0x14) / 0x40) / 100.0 + 1.0) * fVar5;
                    /* end of inlined section */
      if ((this->mSpiritGageScale).mValue == '@') {
        iAlpha = 0;
      }
      PK2SendVram__FUiiii((uint)this->finder_buf,-1,-1,0);
      RenzMarkDraw__14CNEquipTrayWrkiii(local_64,fndr_mx,fndr_my,iVar2);
      Draw__11CFinderBaseiii((CFinderBase *)&this->field_0x11a,fndr_mx,fndr_my,pCVar4->mValue);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
      iVar3 = GetPlyrItemHaveNum__Fi((int)(this->camera_film).mFilmType.mValue);
      Draw__7CFilmNoiiiii(&this->film_no,iVar3,
                          (int)*(char *)((int)&aFilmTypeNo_1222 +
                                        (int)(this->camera_film).mFilmType.mValue),fndr_mx,fndr_my,
                          pCVar4->mValue);
      iVar3 = local_68 >> 0x1d;
      if (((&(this->camera_power_up).mCamPartsSetFlg)[iVar3].flag_32[0] & 1U) != 0) {
                    /* end of inlined section */
        Draw__8CEneLifeiii(&this->ene_life,fndr_mx,fndr_my,pCVar4->mValue);
      }
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
      if (((&(this->camera_power_up).mAdditionFlg)[iVar3].flag_32[0] & 1U) != 0) {
                    /* end of inlined section */
        Draw__9CSPChanceiii(&this->sp,fndr_mx,fndr_my,pCVar4->mValue);
      }
      Draw__14CNEquipTrayWrkiii(local_64,fndr_mx,fndr_my,pCVar4->mValue);
      CaptureCircleDraw__12CNPlyrCameraiii(this,fndr_mx,fndr_my,iVar2);
      fVar6 = GetRadiusRate__14CCameraPowerUp(&this->camera_power_up);
      Draw__13CCenterCircleiiif(&this->center_circle,fndr_mx,fndr_my,iVar2,fVar6);
      Draw__12CCenterCrossiii(&this->center_cross,fndr_mx,fndr_my,iVar2);
      Draw__13CPhotoChargeriii(&this->charger,fndr_mx,fndr_my,pCVar4->mValue);
      iVar2 = pCVar4->mValue;
      fVar6 = GetRadiusRate__14CCameraPowerUp(&this->camera_power_up);
      Draw__11CSearchMarkiiif(&this->search_mark,fndr_mx,fndr_my,iVar2,fVar6);
      DrawSpiritGageBase__12CNPlyrCameraiiif(this,fndr_mx,fndr_my,iAlpha,fVar5);
      if (this->mpSpiritGage != (CSpiritGage *)0x0) {
        Draw__11CSpiritGageiiif(this->mpSpiritGage,fndr_mx,fndr_my,iAlpha,fVar5);
      }
      PK2SendVram__FUiiii((uint)this->pl_life_buf,-1,-1,0);
      Draw__9CFilamentiiii(&this->filament,fndr_mx,fndr_my,pCVar4->mValue,0);
      Draw__6CHpBariii(&this->hp,fndr_mx,fndr_my,pCVar4->mValue);
      Draw__10CBonusShotii(&this->mBonusShot,fndr_mx,fndr_my);
    }
  }
  return;
}

void CNPlyrCamera::FrameReset() {
  FrameReset__13CCenterCircle(&this->center_circle);
  FrameReset__9CFilament(&this->filament);
  return;
}

void CNPlyrCamera::GetFinderMovePos(float *fx, float *fy) {
	float fp[2];
	
  float fp [2];
  
  GetPlayerFinderPos__FPfT0(fp,fp + 1);
  *fx = (float)(int)(short)(int)(fp[0] - 320.0);
  *fy = (float)(int)(short)(int)(fp[1] - 224.0);
  return;
}

void CFadeVariable<float>::Fade(float tTarget, float tTime) {
  g3ddbgAssert__FbPCce(false,str_786);
  return;
}

void CWrkVariable<int, 0, 128>::Work() {
	int iVal;
	
  g3ddbgAssert__FbPCce(false,str_786);
  return;
}

void CWrkVariable<short, 0, 128>::Work() {
	int iVal;
	
  g3ddbgAssert__FbPCce(false,str_786);
  return;
}

int CWaitVariable<char>::Work() {
  g3ddbgAssert__FbPCce(false,str_786);
  return;
}

void CFadeVariable<float>::Work() {
  g3ddbgAssert__FbPCce(false,str_786);
  return;
}

int CWaitVariable<short>::Work() {
  g3ddbgAssert__FbPCce(false,str_786);
  return;
}

void CFadeVariable<int>::Work() {
  g3ddbgAssert__FbPCce(false,str_786);
  return;
}

void CWrkVariable<char, 0, 64>::Work() {
	int iVal;
	
  g3ddbgAssert__FbPCce(false,str_786);
  return;
}

void CFadeVariable<int>::Fade(int tTarget, int tTime) {
  g3ddbgAssert__FbPCce(false,str_786);
  return;
}
