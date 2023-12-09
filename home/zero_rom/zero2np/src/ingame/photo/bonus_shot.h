// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_PHOTO_BONUS_SHOT_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_PHOTO_BONUS_SHOT_H

struct fixed_array<short int,9> : fixed_array_base<short int,9,short int[9]> {
};

struct BONUS_SHOT_SCORE {
	fixed_array<short int,9> mScore;
	short int mSP;
	short int mComboNum;
};

struct CWrkVariable<char,0,127> {
private:
	char mValue;
	char mAdd;
	
public:
	CWrkVariable<char,0,127>& operator=();
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

struct CBonusShotOne {
	CVariable<char,0,9> mIndex;
private:
	short int mYPosSave;
	CFadeVariable<short int> mYPos;
	CFadeVariable<char> mXOffset;
	CWrkVariable<char,0,127> mAlpha;
	CWrkVariable<char,0,127> mUnderLineAlpha;
	CWrkVariable<char,0,100> mUnderLineScale;
	
public:
	CBonusShotOne& operator=();
	CBonusShotOne();
	CBonusShotOne();
	void Init();
	void InReqUnderLine(int iYPos);
	void InReq();
	void OutReq(int iTargetYPos);
	void Work();
	void Draw(int iOffX, int iOffY, int iPreSprtDat, int iAfterSprtDat);
};

struct fixed_array<CBonusShotOne,9> : fixed_array_base<CBonusShotOne,9,CBonusShotOne[9]> {
};

struct CBonusShot {
private:
	CWaitVariable<char> mFadeOutWaiter;
	CWrkVariable<char,0,127> mNewScoreAlpha;
	CWrkVariable<char,0,127> mOldScoreAlpha;
	CWrkVariable<char,0,127> mScorePtsAlpha;
	CWrkVariable<char,0,127> mComboAlpha;
	char mDispNum;
	char mReqUnderLineCnt;
	char mReqUnderLineTimer;
	char mInReqCnt;
	char mInReqTimer;
	char mOutReqCnt;
	char mOutReqTimer;
	CWaitVariable<short int> mTimer;
	BONUS_SHOT_SCORE mBonus;
	fixed_array<CBonusShotOne,9> mAnim;
	int mOldScore;
	int mNewScore;
	
public:
	CBonusShot& operator=();
	CBonusShot();
	CBonusShot();
	void Req(int iBaseScore, BONUS_SHOT_SCORE BonusScore, int iWaitTime);
	void Work();
	void Draw(int fndr_mx, int fndr_my);
	void Init();
private:
	void ReqUnderLineWrk();
	void InReqWrk();
	void OutReqWrk();
};

extern unsigned char CBonusShotOne type_info node[8];

void CFadeVariable<short>::Fade(short int tTarget, short int tTime);
void CFadeVariable<short>::Work();
void CWrkVariable<char, 0, 127>::Work();
void CWrkVariable<char, 0, 100>::Work();
short int* short * _fixed_array_verifyrange<short>(size_t v, size_t _max);
CBonusShotOne* CBonusShotOne * _fixed_array_verifyrange<CBonusShotOne>(size_t v, size_t _max);
int CWaitVariable<short>::Work();
type_info& CBonusShotOne type_info function();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_PHOTO_BONUS_SHOT_H
