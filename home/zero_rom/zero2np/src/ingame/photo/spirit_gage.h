// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_PHOTO_SPIRIT_GAGE_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_PHOTO_SPIRIT_GAGE_H

struct CWrkVariable<char,0,60> {
private:
	char mValue;
	char mAdd;
	
public:
	CWrkVariable<char,0,60>& operator=();
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

struct CSpiritGage {
private:
	int mPercent;
	CWrkVariable<char,0,60> mAlpha;
	int mFlg;
	static CMIN_MAX<float> aDmgMultipleTbl[3];
	
public:
	CSpiritGage& operator=();
	CSpiritGage();
	CSpiritGage();
	void Init();
	void FadeIn();
	void FadeOut();
	int GetPercent();
	void Work(float fDistanceRate, float fCenterRate, float fAlphaRate, SHUTTER_CHANCE_STATE SPState, int iMinPercent);
	float CalcDamageRate(SHUTTER_CHANCE_STATE SPState);
	void Draw(int fndr_mx, int fndr_my, int iMasterAlpha, float fScale);
};

extern CMIN_MAX<float> CSpiritGage::aDmgMultipleTbl[3];

void CWrkVariable<char, 0, 60>::Work();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_PHOTO_SPIRIT_GAGE_H
