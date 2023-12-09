// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_PHOTO_PHOTO_CHARGER_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_PHOTO_PHOTO_CHARGER_H

struct CBlinkVariable<char,50,127> {
private:
	char mValue;
	char mSpeed;
	
public:
	CBlinkVariable<char,50,127>& operator=();
	CBlinkVariable();
	CBlinkVariable();
	void Init();
	void Blink();
	int IsOn();
	void Work();
	char Get();
	char Set();
	void SetMax();
	void SetMin();
	char GetMax();
	char GetMin();
	char GetWidth();
};

struct CPhotoCharger {
private:
	CWaitVariable<short int> mNowWaitCnt;
	CBlinkVariable<char,50,127> mFlare;
	short int mWaitCnt;
	short unsigned int mReady;
	
public:
	CPhotoCharger& operator=();
	CPhotoCharger();
	CPhotoCharger();
	void Init();
	void Reset(int iWaitCnt);
	void Work(int bSeFlg);
	int IsReady();
	void Draw(int fndr_mx, int fndr_my, int iAlpha);
};

int CWaitVariable<short>::Work();
void CBlinkVariable<char, 50, 127>::Blink(char tTime);
void CBlinkVariable<char, 50, 127>::Work();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_PHOTO_PHOTO_CHARGER_H
