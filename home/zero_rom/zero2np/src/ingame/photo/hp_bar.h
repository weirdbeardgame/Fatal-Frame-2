// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_PHOTO_HP_BAR_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_PHOTO_HP_BAR_H

struct CHpBar {
private:
	CWrkVariable<short int,0,128> mAlpha;
	CWaitVariable<short int> mFadeWaitCnt;
	
public:
	CHpBar& operator=();
	CHpBar();
	CHpBar();
	void Init();
	void FadeIn();
	void FadeOut();
	void Work();
	void Draw(int fndr_mx, int fndr_my, int iAlpha);
};


void SyncHpBar();
int CWaitVariable<short>::Work();
void CWrkVariable<short, 0, 128>::Work();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_PHOTO_HP_BAR_H
