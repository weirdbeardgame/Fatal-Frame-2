// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_PHOTO_FILM_NO_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_PHOTO_FILM_NO_H

struct CBlinkSwitchVariable<char,70,90,15,40> {
private:
	char mValue;
	unsigned char mOn : 1;
	unsigned char mUp : 1;
	
public:
	CBlinkSwitchVariable<char,70,90,15,40>& operator=();
	CBlinkSwitchVariable();
	CBlinkSwitchVariable();
	void Init();
	void BlinkOn();
	void BlinkOff();
	int IsOn();
	void Work();
	char Get();
	void Set();
	char GetMax();
	char GetMin();
	char GetInitVal();
};

struct CFilmNo {
private:
	CBlinkSwitchVariable<char,70,90,15,40> mBlinkAlpha;
	
public:
	CFilmNo& operator=();
	CFilmNo();
	CFilmNo();
	void Init();
	void Work();
	void Draw(int number, int iFilmTypeNo, int fndr_mx, int fndr_my, int iAlpha);
	void BlinkOn();
	void BlinkOff();
};


void CBlinkSwitchVariable<char, 70, 90, 15, 40>::Work();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_PHOTO_FILM_NO_H
