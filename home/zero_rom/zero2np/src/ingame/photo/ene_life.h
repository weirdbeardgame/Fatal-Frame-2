// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_PHOTO_ENE_LIFE_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_PHOTO_ENE_LIFE_H

struct CWrkVariable<short int,0,127> {
private:
	short int mValue;
	short int mAdd;
	
public:
	CWrkVariable<short int,0,127>& operator=();
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

struct CEneLife {
private:
	int red_bar_wait;
	float now_hp_percent;
	float disp_hp_percent;
	float old_hp_percent;
	float ene_hp_len;
	CWrkVariable<short int,0,127> mDamageAlpha;
	short int mDamage;
	
public:
	CEneLife& operator=();
	CEneLife();
	CEneLife();
	void Decrease(float new_hp_per);
	void Set(float new_hp_per);
	void FrameLenSet(float len);
	void Work();
	void SetDamage(int iDamage);
	void Draw(int fndr_mx, int fndr_my, int iAlpha);
};

void CWrkVariable<short, 0, 127>::Work();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_PHOTO_ENE_LIFE_H
