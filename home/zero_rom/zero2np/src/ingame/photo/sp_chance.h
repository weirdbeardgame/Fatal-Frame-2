// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_PHOTO_SP_CHANCE_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_PHOTO_SP_CHANCE_H

struct CWrkVariable<short int,0,128> {
private:
	short int mValue;
	short int mAdd;
	
public:
	CWrkVariable<short int,0,128>& operator=();
	CWrkVariable();
	CWrkVariable();
	void Init();
	void SetMax();
	void SetMin();
	short int GetMax();
	short int GetMin();
	short int GetWidth();
	void SetAddVal();
	void Set();
	void Work();
	int LoopWork();
	short int Get();
	int GetState();
};

struct CBlinkSwitchVariable<short int,0,128,1,0> {
private:
	short int mValue;
	unsigned char mOn : 1;
	unsigned char mUp : 1;
	
public:
	CBlinkSwitchVariable<short int,0,128,1,0>& operator=();
	CBlinkSwitchVariable();
	CBlinkSwitchVariable();
	void Init();
	void BlinkOn();
	void BlinkOff();
	int IsOn();
	void Work();
	short int Get();
	void Set();
	short int GetMax();
	short int GetMin();
	short int GetInitVal();
};

struct CSPChance {
private:
	unsigned int mbSeFlg : 1;
	unsigned int mSPFlg : 1;
	CFINDER_SND_BUF_PLAY mSe;
	CWrkVariable<short int,0,128> mLampAlpha;
	CBlinkSwitchVariable<short int,0,128,1,0> mAlpha;
	
public:
	CSPChance& operator=();
	CSPChance();
	CSPChance();
	void Init();
	void Work(int bSeFlg);
	void Draw(int fndr_mx, int fndr_my, int iAlpha);
	void Release();
	void Set(int bFlg);
	void SEEnable();
	void SEDisable();
};

void CBlinkSwitchVariable<short, 0, 128, 1, 0>::Work();
void CWrkVariable<short, 0, 128>::Work();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_PHOTO_SP_CHANCE_H
