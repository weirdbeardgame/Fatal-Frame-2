// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_PHOTO_DAMAGE_DISP_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_PHOTO_DAMAGE_DISP_H

struct CDamageDisp {
private:
	CWaitVariable<short int> mWaiter;
	CBlinkVariable<char,0,127> mOneBlink;
	short int mDamage;
	int mScore;
	
public:
	CDamageDisp& operator=();
	CDamageDisp();
	CDamageDisp();
	void Init();
	void Work();
	void Req(int iDamage, int iScore, int iWaitCnt);
	void Draw(int fndr_mx, int fndr_my, int iAlpha);
};

int CWaitVariable<short>::Work();
void CBlinkVariable<char, 0, 127>::Blink(char tTime);
void CBlinkVariable<char, 0, 127>::Work();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_PHOTO_DAMAGE_DISP_H
