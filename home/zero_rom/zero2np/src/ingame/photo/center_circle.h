// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_PHOTO_CENTER_CIRCLE_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_PHOTO_CENTER_CIRCLE_H

struct CCenterCircle {
private:
	CWrkVariable<char,0,100> maScale[4];
	CWrkVariable<short int,0,128> mRippleAlpha;
	CFadeVariable<short int> mR;
	CFadeVariable<short int> mG;
	CFadeVariable<short int> mB;
	CFadeVariable<char> mMainAlpha;
	unsigned int mHintFlg : 1;
	unsigned int mAutoFlg : 1;
	unsigned int mBattleFlg : 1;
	unsigned int mEnemyFlg : 1;
	static char aMainAlpha[4];
	static unsigned char aRgb[4][3];
	
public:
	CCenterCircle& operator=();
	CCenterCircle();
	CCenterCircle();
	void Init();
	void FrameReset();
	void Work();
	void Draw(int fndr_mx, int fndr_my, int iMasterAlpha, float fMasterScale);
	void SetMode(int iMode);
	void SetHintFlg(int flg);
	void SetAutoFlg(int flg);
	void SetBattleFlg(int flg);
	void SetEneCatchFlg(int flg);
};

extern unsigned char CCenterCircle::aRgb[4][3];
extern char CCenterCircle::aMainAlpha[4];

int CWrkVariable<char, 0, 100>::LoopWork();
void CFadeVariable<short>::Work();
void CWrkVariable<short, 0, 128>::Work();
void CFadeVariable<short>::Fade(short int tTarget, short int tTime);

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_PHOTO_CENTER_CIRCLE_H
