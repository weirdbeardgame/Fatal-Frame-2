// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_PHOTO_FILAMENT_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_PHOTO_FILAMENT_H

struct RT_EV_WRK {
	int time;
	int cnt;
	char type;
	int sptime;
	char sptype;
};

typedef struct {
	int mode;
	int cnt;
	int flow;
	float bright;
	int flg;
} FILLAMENT_WRK;

struct CFilament {
	RT_EV_WRK rt_ev_wrk;
private:
	CWrkVariable<short int,0,128> mMasterAlp;
	float mRate;
	char mMode;
	int mLockCnt;
	int mRTTime;
	float mHintRate;
	float mAutoRate;
	float mBattleRate;
	unsigned int mRTFlg : 1;
	FILLAMENT_WRK fillament_wrk;
	
public:
	CFilament& operator=();
	CFilament();
	CFilament();
	void DrawLock();
	void DrawUnlock();
	void RTModeOn(int type, int time);
	void RTModeOff();
	void SetBattle(float fRate);
	void SetHint(float fRate);
	void SetAuto(float fRate);
	void FadeOut();
	void FadeIn();
	void Work();
	void Draw(int off_x, int off_y, int iAlpha, int bFlip);
	void FrameReset();
	void Init();
	void SetSave(MC_SAVE_DATA *save);
};

extern CBlinkSwitchVariable<char,90,118,6,90> mBlinkAlphaCore1;
extern CBlinkSwitchVariable<char,90,112,11,90> mBlinkAlphaCore2;
extern CBlinkSwitchVariable<char,90,116,13,90> mBlinkAlphaWhole1;
extern CBlinkSwitchVariable<char,75,112,17,75> mBlinkAlphaWhole2;

void CWrkVariable<short, 0, 128>::Work();
void CBlinkSwitchVariable<char, 90, 118, 6, 90>::Work();
void CBlinkSwitchVariable<char, 90, 112, 11, 90>::Work();
void CBlinkSwitchVariable<char, 90, 116, 13, 90>::Work();
void CBlinkSwitchVariable<char, 75, 112, 17, 75>::Work();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_PHOTO_FILAMENT_H
