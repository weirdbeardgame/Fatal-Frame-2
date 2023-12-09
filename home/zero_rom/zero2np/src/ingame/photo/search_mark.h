// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_PHOTO_SEARCH_MARK_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_PHOTO_SEARCH_MARK_H

struct CSearchMark {
private:
	float mRot;
	CWrkVariable<short int,0,128> mAlpha;
	
public:
	CSearchMark& operator=();
	CSearchMark();
	CSearchMark();
	void Init();
	void Work();
	void SetRot(float fRot);
	void FadeIn();
	void FadeOut();
	void Draw(int fndr_mx, int fndr_my, int iAlpha, float fScale);
	void Release();
};

void CWrkVariable<short, 0, 128>::Work();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_PHOTO_SEARCH_MARK_H
