// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_PHOTO_N_EQUIP_TRAY_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_PHOTO_N_EQUIP_TRAY_H

struct CFVariable {
private:
	float mValue;
	float m_fMax;
	float m_fMin;
	
public:
	CFVariable& operator=();
	CFVariable();
	CFVariable();
	void Init();
	void Set();
	void SetMax();
	void SetMin();
	float GetMax();
	float GetMin();
	float GetWidth();
	int Offset();
	int Add();
	int Sub();
	int LoopAdd();
	int LoopSub();
	float Get();
};

typedef enum {
	SHUTTER_CHANCE_NONE = 0,
	SHUTTER_CHANCE_NORMAL = 1,
	SHUTTER_CHANCE_SP = 2,
	SHUTTER_CHANCE_STATE_MAX = 3,
	SHUTTER_CHANCE_FORCE_DWORD = -1
} _SHUTTER_CHANCE_STATE;

typedef _SHUTTER_CHANCE_STATE SHUTTER_CHANCE_STATE;

struct CVariable<char,0,9> {
private:
	char mValue;
	
public:
	CVariable<char,0,9>& operator=();
	CVariable();
	CVariable();
	void Init();
	void SetMax();
	void SetMin();
	char GetMax();
	char GetMin();
	char GetWidth();
	void Set();
	int Increment();
	int Decrement();
	int LoopIncrement();
	int LoopDecrement();
	int Offset();
	int Add();
	int Sub();
	int LoopAdd();
	int LoopSub();
	int Get();
};

struct CFadeVariable<short int> {
private:
	short int mValue;
	short int mSpeed;
	short int mTarget;
	
public:
	CFadeVariable<short int>& operator=();
	CFadeVariable();
	CFadeVariable();
	void Set();
	void Fade();
	void Fade2();
	int IsEnd();
	int GetState();
	void Work();
	short int Get();
};

struct CFadeVariable<char> {
private:
	char mValue;
	char mSpeed;
	char mTarget;
	
public:
	CFadeVariable<char>& operator=();
	CFadeVariable();
	CFadeVariable();
	void Set();
	void Fade(char tTarget, char tTime);
	void Fade2();
	int IsEnd();
	int GetState();
	void Work();
	char Get();
};

struct CWrkVariable<char,0,100> {
private:
	char mValue;
	char mAdd;
	
public:
	CWrkVariable<char,0,100>& operator=();
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

struct _SUB_FUNC_SI_PARAM {
	char EffTime;
	char SearchFlg;
};

typedef _SUB_FUNC_SI_PARAM SUB_FUNC_SI_PARAM;

struct _SUB_FUNC_SUB_PARAM {
	char EffTime;
};

typedef _SUB_FUNC_SUB_PARAM SUB_FUNC_SUB_PARAM;

struct _SUB_FUNC_MAHI_PARAM {
	char EffTime;
	char StopTime;
	char ActTime;
};

typedef _SUB_FUNC_MAHI_PARAM SUB_FUNC_MAHI_PARAM;

struct _SUB_FUNC_KOUGEKI_PARAM {
	float NDmgMag;
	float SDmgMag;
	int SlowHTTime;
	float SlowHTRate;
};

typedef _SUB_FUNC_KOUGEKI_PARAM SUB_FUNC_KOUGEKI_PARAM;

struct NEQUIP_FUNC_DAT {
	int need_stock_num;
	int pk2_no;
	unsigned char r;
	unsigned char g;
	unsigned char b;
	char bHitBack;
};

struct fixed_array<CVariable<char, 0, 3>,10> : fixed_array_base<CVariable<char, 0, 3>,10,CVariable<char, 0, 3>[10]> {
};

struct fixed_array<CVariable<char, 0, 9>,3> : fixed_array_base<CVariable<char, 0, 9>,3,CVariable<char, 0, 9>[3]> {
};

struct CVariable<char,0,2> {
private:
	char mValue;
	
public:
	CVariable<char,0,2>& operator=();
	CVariable();
	CVariable();
	void Init();
	void SetMax();
	void SetMin();
	char GetMax();
	char GetMin();
	char GetWidth();
	void Set();
	int Increment();
	int Decrement();
	int LoopIncrement();
	int LoopDecrement();
	int Offset();
	int Add();
	int Sub();
	int LoopAdd();
	int LoopSub();
	int Get();
};

struct CNEquipTraySave {
	fixed_array<CVariable<char, 0, 3>,10> mSubFuncLv;
	CVariable<char,0,3> mStockGrade;
	fixed_array<CVariable<char, 0, 9>,3> mEquipFunc;
	CVariable<char,0,2> mSlctNo;
private:
	int mDispGage;
	int mBankGage;
	int mStockNum;
	static char aStockMaxTbl[4];
	float mAbsorbMultiRate;
	static SUB_FUNC_SI_PARAM sub_func_si_param[4];
	static SUB_FUNC_MAHI_PARAM sub_func_mahi_param[4];
	static SUB_FUNC_SUB_PARAM sub_func_oso_param[4];
	static SUB_FUNC_SUB_PARAM sub_func_seal_param[4];
	static SUB_FUNC_SUB_PARAM sub_func_trace_param[4];
	static SUB_FUNC_KOUGEKI_PARAM sub_func_rei_param[4];
	static SUB_FUNC_KOUGEKI_PARAM sub_func_koku_param[4];
	static SUB_FUNC_KOUGEKI_PARAM sub_func_metsu_param[4];
	static SUB_FUNC_KOUGEKI_PARAM sub_func_ren_param[4];
	
public:
	CNEquipTraySave& operator=();
	CNEquipTraySave();
	CNEquipTraySave();
	int NextFuncSet();
	void Absorb(int power);
	void End(int iRemainParticle);
	int ConvertGage2StockNum(int iGage);
	int StockAdd();
	int IsStockMax();
	void Init();
	void ResetGage();
	void PushGage(int *iGageDat);
	void PopGage(int *iGageDat);
};

struct CBlinkVariable<char,0,127> {
private:
	char mValue;
	char mSpeed;
	
public:
	CBlinkVariable<char,0,127>& operator=();
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

struct CBlinkVariable<char,0,100> {
private:
	char mValue;
	char mSpeed;
	
public:
	CBlinkVariable<char,0,100>& operator=();
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

struct CBlinkSwitchVariable<unsigned char,50,100,1,0> {
private:
	unsigned char mValue;
	unsigned char mOn : 1;
	unsigned char mUp : 1;
	
public:
	CBlinkSwitchVariable<unsigned char,50,100,1,0>& operator=();
	CBlinkSwitchVariable();
	CBlinkSwitchVariable();
	void Init();
	void BlinkOn();
	void BlinkOff();
	int IsOn();
	void Work();
	unsigned char Get();
	void Set();
	unsigned char GetMax();
	unsigned char GetMin();
	unsigned char GetInitVal();
};

struct CBlinkSwitchVariable<unsigned char,0,60,20,0> {
private:
	unsigned char mValue;
	unsigned char mOn : 1;
	unsigned char mUp : 1;
	
public:
	CBlinkSwitchVariable<unsigned char,0,60,20,0>& operator=();
	CBlinkSwitchVariable();
	CBlinkSwitchVariable();
	void Init();
	void BlinkOn();
	void BlinkOff();
	int IsOn();
	void Work();
	unsigned char Get();
	void Set();
	unsigned char GetMax();
	unsigned char GetMin();
	unsigned char GetInitVal();
};

struct CWrkVariable<short int,20,128> {
private:
	short int mValue;
	short int mAdd;
	
public:
	CWrkVariable<short int,20,128>& operator=();
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

struct CBlinkSwitchVariable<short int,20,60,15,0> {
private:
	short int mValue;
	unsigned char mOn : 1;
	unsigned char mUp : 1;
	
public:
	CBlinkSwitchVariable<short int,20,60,15,0>& operator=();
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

struct CWrkVariable<short int,0,76> {
private:
	short int mValue;
	short int mAdd;
	
public:
	CWrkVariable<short int,0,76>& operator=();
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

struct CNEquipTrayWrk {
	CNEquipTraySave mSave;
	static NEQUIP_FUNC_DAT equip_func_tbl[0];
private:
	int mRemainParticleNum;
	CFadeVariable<float> mFOV;
	CBlinkVariable<char,0,127> mStockAnm;
	CBlinkVariable<char,0,100> mSubFuncAnmShot;
	CBlinkSwitchVariable<unsigned char,50,100,1,0> mSubFuncAnmBlink;
	CBlinkSwitchVariable<unsigned char,0,60,20,0> mSubFuncAnmBlinkNoSetup;
	CFadeVariable<char> mGageAnmAlpha;
	int mMode;
	float mRot;
	float mRotSpd;
	int mRemainTime;
	CWrkVariable<short int,0,128> mFcs;
	CWrkVariable<short int,20,128> mRenzMarkBlink;
	CBlinkSwitchVariable<short int,20,60,15,0> mAccumulateBollFlare;
	CFVariable mAccumulateBollRot;
	CWrkVariable<short int,0,76> mRenzMarkAlpha;
	CWrkVariable<char,0,100> mSuckMouthScale;
	CWrkVariable<short int,0,128> mSuckMouthAlpha;
	CFadeVariable<short int> mPreSlctAlpha;
	int mPreSlctYOffset;
	CFadeVariable<short int> mNowOffset;
	unsigned int mSetupFlg : 1;
	unsigned int mGageUpFlg : 1;
	unsigned int mBattleFlg : 1;
	unsigned int mShotAble : 1;
	unsigned int mFirstFlg : 1;
	
public:
	CNEquipTrayWrk& operator=();
	CNEquipTrayWrk();
	CNEquipTrayWrk();
	void Init();
	void End();
	void Work();
	float GetDmgRate(SHUTTER_CHANCE_STATE SState);
	void FinderConvertGage2StockNum(int iAddGage);
	void Draw(int fndr_mx, int fndr_my, int master_alp);
	void AbsorbImmediately(int power);
	int Use2();
	int SetUp();
	void PutOut();
	int IsSetUp();
	void Rotate();
	void SetEffect(ENE_WRK *ew, SHUTTER_CHANCE_STATE SState);
	int Use();
	void Reset();
	void Draw(int fndr_mx, int fndr_my, int master_alp);
	void RangeDrawSub();
	void SetRangeFlg();
	int IsMoving();
	float GetTargetFOV();
	float GetFOV();
	void SetRemainParticle(int iParticleNum);
	void SetSave(MC_SAVE_DATA *save);
	void SetBattleFlg(int iFlg);
	void GetSubFuncArray(char *equip_func);
	void SetSubFuncArray(char *equip_func);
	void RenzMarkDraw(int fndr_mx, int fndr_my, int master_alp);
	void SetAbsorbMultiRate(float fRate);
	int IsChargeResetOK();
	int IsHitBackON();
	void RenzMarkOn();
	void RenzMarkOff();
	void SetEffectsPre();
private:
	int IsReady();
	void BaseDraw(int fndr_mx, int fndr_my, int master_alp);
	void AccumulaterDraw(int fndr_mx, int fndr_my, int master_alp);
	int GetNowSubFuncNo();
	int EquipTrayFuncCostNum();
	void DispOneSub();
	void BarFlareDisp();
	int GetNowEquipFuncNum();
	int GetNowSubFuncLv();
};

extern SUB_FUNC_SI_PARAM CNEquipTraySave::sub_func_si_param[4];
extern SUB_FUNC_MAHI_PARAM CNEquipTraySave::sub_func_mahi_param[4];
extern SUB_FUNC_SUB_PARAM CNEquipTraySave::sub_func_oso_param[4];
extern SUB_FUNC_SUB_PARAM CNEquipTraySave::sub_func_seal_param[4];
extern SUB_FUNC_SUB_PARAM CNEquipTraySave::sub_func_trace_param[4];
extern SUB_FUNC_KOUGEKI_PARAM CNEquipTraySave::sub_func_rei_param[4];
extern SUB_FUNC_KOUGEKI_PARAM CNEquipTraySave::sub_func_koku_param[4];
extern SUB_FUNC_KOUGEKI_PARAM CNEquipTraySave::sub_func_metsu_param[4];
extern SUB_FUNC_KOUGEKI_PARAM CNEquipTraySave::sub_func_ren_param[4];
extern NEQUIP_FUNC_DAT CNEquipTrayWrk::equip_func_tbl[10];
extern char CNEquipTraySave::aStockMaxTbl[4];
extern unsigned char CVariable<char, 0, 9> type_info node[8];
extern unsigned char CVariable<char, 0, 3> type_info node[8];
extern int dbg_stock_num;

CVariable<char,0,9>* CVariable<char, 0, 9> * _fixed_array_verifyrange<CVariable<char, 0, 9> >(size_t v, size_t _max);
CVariable<char,0,3>* CVariable<char, 0, 3> * _fixed_array_verifyrange<CVariable<char, 0, 3> >(size_t v, size_t _max);
void CBlinkVariable<char, 0, 100>::Blink(char tTime);
void CFadeVariable<short>::Fade(short int tTarget, short int tTime);
void CBlinkVariable<char, 0, 127>::Blink(char tTime);
void CBlinkVariable<char, 0, 127>::Work();
void CBlinkVariable<char, 0, 100>::Work();
void CBlinkSwitchVariable<unsigned char, 50, 100, 1, 0>::Work();
void CBlinkSwitchVariable<unsigned char, 0, 60, 20, 0>::Work();
void CWrkVariable<char, 0, 100>::Work();
void CWrkVariable<short, 0, 128>::Work();
void CWrkVariable<short, 0, 76>::Work();
void CWrkVariable<short, 20, 128>::Work();
void CBlinkSwitchVariable<short, 20, 60, 15, 0>::Work();
void CFadeVariable<short>::Work();
type_info& CVariable<char, 0, 9> type_info function();
type_info& CVariable<char, 0, 3> type_info function();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_PHOTO_N_EQUIP_TRAY_H
