// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_PHOTO_N_PLYR_CAMERA_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_PHOTO_N_PLYR_CAMERA_H

struct CFINDER_SND_BUF_PLAY : CSND_BUF_PLAY {
	CFINDER_SND_BUF_PLAY& operator=();
	CFINDER_SND_BUF_PLAY();
	CFINDER_SND_BUF_PLAY();
	void Play();
};

struct CWaitVariable<char> {
private:
	char mValue;
	
public:
	CWaitVariable<char>& operator=();
	CWaitVariable();
	CWaitVariable();
	void Reset();
	void Wait();
	int Work();
	char Get();
};

struct CFadeVariable<float> {
private:
	float mValue;
	float mSpeed;
	float mTarget;
	
public:
	CFadeVariable<float>& operator=();
	CFadeVariable();
	CFadeVariable();
	void Set();
	void Fade(float tTarget, float tTime);
	void Fade2();
	int IsEnd();
	int GetState();
	void Work();
	float Get();
};

struct CCameraFilm {
	CVariable<char,0,4> mFilmType;
private:
	static unsigned char aFilmDamageTbl[5];
	static unsigned char aFilmMinPercentTbl[5];
	static unsigned char aFilmChargeSpdTbl[5];
	
public:
	CCameraFilm& operator=();
	CCameraFilm();
	CCameraFilm();
	int GetFilmDamage();
	int GetFilmMinPercent();
	int GetFilmChargeSpd();
};

struct _PHOTO_BONUS_SHOT {
	unsigned int triple : 1;
	unsigned int dbl : 1;
	unsigned int core : 1;
	unsigned int close : 1;
	unsigned int SP : 1;
	unsigned int chance : 1;
};

typedef _PHOTO_BONUS_SHOT PHOTO_BONUS_SHOT;

struct CFinderBase {
	CFinderBase& operator=();
	CFinderBase();
	CFinderBase();
	void Draw(int off_x, int off_y, int iAlpha);
private:
	void DrawKakiwari(int off_x, int off_y, int iAlpha);
};

struct CWrkVariable<char,0,64> {
private:
	char mValue;
	char mAdd;
	
public:
	CWrkVariable<char,0,64>& operator=();
	CWrkVariable();
	CWrkVariable();
	void Init();
	void SetMax();
	void SetMin();
	char GetMax();
	char GetMin();
	char GetWidth();
	void SetAddVal();
	void Set();
	void Work();
	int LoopWork();
	char Get();
	int GetState();
};

struct CWrkVariable<int,0,128> {
private:
	int mValue;
	int mAdd;
	
public:
	CWrkVariable<int,0,128>& operator=();
	CWrkVariable();
	CWrkVariable();
	void Init();
	void SetMax();
	void SetMin();
	int GetMax();
	int GetMin();
	int GetWidth();
	void SetAddVal();
	void Set();
	void Work();
	int LoopWork();
	int Get();
	int GetState();
};

struct CFadeVariable<int> {
private:
	int mValue;
	int mSpeed;
	int mTarget;
	
public:
	CFadeVariable<int>& operator=();
	CFadeVariable();
	CFadeVariable();
	void Set();
	void Fade(int tTarget, int tTime);
	void Fade2();
	int IsEnd();
	int GetState();
	void Work();
	int Get();
};

struct CNPlyrCamera {
	CCameraPowerUp camera_power_up;
	CCameraFilm camera_film;
	CNEquipTrayWrk eq_tray;
	CFilament filament;
	CCenterCircle center_circle;
	CHpBar hp;
	CFinderBase finder_base;
	CSPChance sp;
	CEneLife ene_life;
	CSearchMark search_mark;
private:
	CWrkVariable<short int,0,128> mFcs;
	CFadeVariable<float> mFOV;
	float mZoomRate;
	void *finder_buf;
	void *pl_life_buf;
	unsigned char mBattleFlg : 1;
	unsigned char mHintFlg : 1;
	char mNoSpiritGageTimer;
	char mDrawLockCnt;
	CWrkVariable<char,0,64> mSpiritGageScale;
	CWaitVariable<char> mFOVTimer;
	CWaitVariable<short int> mInWaiter;
	CWrkVariable<int,0,128> mMasterAlpha;
	CWrkVariable<short int,0,128> mInAlpha;
	short int mCntFinder;
	CCenterCross center_cross;
	CFilmNo film_no;
	CSpiritGage *mpSpiritGage;
	CFadeVariable<int> mSpiritGageAlpha;
	CPhotoCharger charger;
	CFINDER_SND_BUF_PLAY mSpiritNoise;
	CDamageDisp mDmgDisp;
	CBonusShot mBonusShot;
	
public:
	CNPlyrCamera& operator=();
	CNPlyrCamera();
	CNPlyrCamera();
	void SetUp();
	void FinderIn();
	void FinderOut();
	void DrawLock();
	void DrawUnlock();
	void Init();
	void Release();
	void Main();
	void Draw();
	void SetSpiritGage();
	int IsPhotoAble();
	void ResetCharge();
	void SetBattleFlg();
	void SetHintFlg();
	void FrameReset();
	void InCircleDrawLock(int iCnt);
	void ReqNoiseUp();
	void ReqNoiseReset();
	float GetFOVRate();
	void ReqZoomIn();
	void ReqZoomOut();
	void PhotoInfoDisp(int iDamage, int iScore, PHOTO_BONUS_SHOT bonus);
	void PhotoInfoDispNew(int iDamage, int iScore, BONUS_SHOT_SCORE bonus);
private:
	void ZoomWork();
	void DrawSpiritGageBase(int off_x, int off_y, int iAlpha, float fMasterScale);
	void CaptureCircleDraw(int fndr_mx, int fndr_my, int iAlpha);
	void GetFinderMovePos(float *fx, float *fy);
};

extern unsigned char CVariable<char, 0, 9> type_info node[8];
extern unsigned char CVariable<char, 0, 3> type_info node[8];

void CWrkVariable<int, 0, 128>::Work();
void CWrkVariable<short, 0, 128>::Work();
int CWaitVariable<short>::Work();
void CWrkVariable<char, 0, 64>::Work();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_PHOTO_N_PLYR_CAMERA_H
