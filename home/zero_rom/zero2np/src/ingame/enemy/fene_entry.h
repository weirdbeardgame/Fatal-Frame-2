// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_ENEMY_FENE_ENTRY_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_ENEMY_FENE_ENTRY_H

struct FUYU_GHOST_ONE_DATA {
	short int mGhostLabel[3];
private:
	static int mAppearNum;
	
public:
	FUYU_GHOST_ONE_DATA& operator=();
	FUYU_GHOST_ONE_DATA();
	FUYU_GHOST_ONE_DATA();
	int FuyuIsReady();
	int FuyuIsDead();
	int FuyuLoadReq();
	void FuyuActReq(sceVu0FVECTOR *pFirstEnePos);
	void FuyuReleaseReq();
	static void Init(/* parameters unknown */);
	static void SetAppearNum(/* parameters unknown */);
};

struct FUYU_GHOST_DATA {
	FUYU_GHOST_ONE_DATA *pOne;
	int iNum;
};

struct BIT_FLAGS<66> {
protected:
	int flag_32[3];
	
public:
	BIT_FLAGS<66>& operator=();
	BIT_FLAGS();
	BIT_FLAGS();
	void AllDown();
	void AllUp();
	int GetUpNum();
	void FlgUp();
	void FlgDown();
	int IsUp();
};

struct CWaitVariable<int> {
private:
	int mValue;
	
public:
	CWaitVariable<int>& operator=();
	CWaitVariable();
	CWaitVariable();
	void Reset();
	void Wait();
	int Work();
	int Get();
};

struct CFEneEntry {
	BIT_FLAGS<66> mAreaLockFlg;
private:
	char mMode;
	char mApparType;
	char mNowAreaNo;
	char mLockCnt;
	unsigned char mCamChangeFlg : 1;
	unsigned char mMultiEnemyDisable : 1;
	FUYU_GHOST_ONE_DATA *mpFD;
	CWaitVariable<int> mWaitCnt;
	int mWaitSave;
	static short int aResionAreaTbl[0];
	static FUYU_GHOST_DATA aFuyuGhostTbl[6][11];
	static float aFuyuAppearTbl[66][3][4];
	
public:
	CFEneEntry& operator=();
	CFEneEntry();
	CFEneEntry();
	void Init();
	void Lock();
	void Unlock();
	void AreaChange(int iNewAreaNo, int iOldAreaNo);
	int Release();
	void Work();
	void CamChangeFlg(int bSwitch);
	void MultiAppearDisable();
	void MultiAppearEnable();
private:
	int IsValidPosData();
	sceVu0FVECTOR* GetNearestAppearPos(int iNowAreaNo, float *PlyrPos);
	FUYU_GHOST_ONE_DATA* GetPbyRand(int iAreaNo, int iChapterNo);
	int GetResionId(int iAreaNo);
};

extern int dbg_random_ghost;
extern short int CFEneEntry::aResionAreaTbl[6];
extern FUYU_GHOST_DATA CFEneEntry::aFuyuGhostTbl[6][11];
extern float CFEneEntry::aFuyuAppearTbl[66][3][4];
extern int FUYU_GHOST_ONE_DATA::mAppearNum;


#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_ENEMY_FENE_ENTRY_H
