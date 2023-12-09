// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_ENEMY_ENEMY_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_ENEMY_ENEMY_H

struct STATUS_DAT {
	u_long sta;
	u_long sta_old;
	u_long mvsta;
	u_short hp;
	u_short sp;
	u_short hpmax;
	u_short spmax;
	u_short hp_recover_time;
	u_short sp_recover_time;
	u_short sp_down_fl;
	u_short dmg;
	u_short rhspdmg;
	u_short rhpdmg;
	u_short rspdmg;
	u_short dmg_old;
	u_short dmg_type;
	u_char dmg_cam_flag;
	u_short dwalk_tm;
	u_short cond;
	u_short cond_old;
	u_short cond_tm;
	u_short invisible_timer;
};

typedef struct {
	sceVu0FVECTOR p0;
	sceVu0FVECTOR p1;
	sceVu0FVECTOR p2;
	sceVu0FVECTOR p3;
	sceVu0FVECTOR p4;
	sceVu0FVECTOR p5;
	sceVu0FVECTOR p6;
	sceVu0FVECTOR p7;
	sceVu0FVECTOR p8;
	sceVu0FVECTOR p9;
} MPOS;

typedef enum {
	ENE_STATUS_NO_USE = 0,
	ENE_STATUS_LOADING = 1,
	ENE_STATUS_WAIT_ANI_CTRL = 2,
	ENE_STATUS_READY = 3,
	ENE_STATUS_ACT = 4,
	ENE_STATUS_RELEASE = 5,
	ENE_STATUS_FORCE_DWORD = -1
} _ENE_STATUS;

typedef _ENE_STATUS ENE_STATUS;

struct ENE_WRK {
	float bep[4];
	float neck_rot[4];
	float adjp[4];
	MPOS mpos;
	ENEALG_WRK alg;
	PP_JUDGE ppj;
	MOVE_BOX mbox;
	CSpiritGage spirit_gage;
	STATUS_DAT st;
	ENE_DAT *dat;
	AENE_DAT *aie;
	float dist_p_e[2];
	float dist_p_e_o[2];
	float dist_c_e;
	u_int hp_recv_tm;
	float hp_recv_pt;
	float reso;
	float wlk_reso_chg;
	float wlk_reso;
	PLCMN_WRK *target;
	float tr_frate;
	float tr_common;
	void *pdf;
	void *pdf2;
	float d_pd;
	float d_pd2;
	float d_pda;
	float d_pda2;
	float d_pdc;
	float d_pdc2;
	float d_mpd;
	float d_mpd2;
	void *nee;
	float nee_rate;
	float nee_size;
	u_int nee_col;
	void *efpw;
	float effw;
	float slow_hb_reso;
	int stream_id;
	int status;
	void *ani_ctrl_p;
	u_int attr;
	float directionaldiffuse[4];
	ENE_DAT_COMMON *cmn_dat;
	int anm_jibaku_p;
	int se_bank_jibaku_no;
	int se_bank_no;
	FLY_WRK *fw[3][5];
	void *wrkp[3];
	ENE_RELASE_TYPE rel_type;
	CWaitVariable<short int> adpcm_tm;
	short int reso_tm;
	u_short atk_tm;
	u_short atk_type;
	short int combo_time;
	u_short tr_time;
	u_short tr2_cnt;
	u_short in_finder_tm;
	short int dat_no;
	short int fp[2];
	short int dist_in_tm[2];
	short int stm_slow;
	short int stm_view;
	short int mahi_total_time;
	short int mahi_cnt;
	short int mahi_one_stop_time;
	short int mahi_one_act_time;
	unsigned char bWithSearcher : 1;
	u_char anime_no;
	u_char target_n;
	u_char tr_max;
	u_char tr2_rate_alg;
	u_char tr2_base;
	u_char tr2_freq;
	u_char tr2_add;
	u_char tr_rate;
	u_char tr_rate_in;
	u_char tr_rate_out;
	u_char tr_rate_alg;
	u_char tr_rate_alg_sp;
	u_char ppj_check;
	u_char type;
	u_char act_no;
	u_char recog_tm;
	u_char room_no;
	u_char wlk_reso_frm;
	u_char wlk_reso_wait;
	char act_flg;
	char slow_hb_wait_frame;
	char slow_hb_frame;
	int ani_reso;
	char combo_counter;
	char combo_sb_counter;
};

struct fixed_array_base<ENE_WRK,10,ENE_WRK[10]> {
protected:
	ENE_WRK m_aData[10];
	
public:
	fixed_array_base<ENE_WRK,10,ENE_WRK[10]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	ENE_WRK& operator[]();
	ENE_WRK& operator[]();
	ENE_WRK* data();
	ENE_WRK* begin();
	ENE_WRK* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<ENE_WRK,10> : fixed_array_base<ENE_WRK,10,ENE_WRK[10]> {
};

struct fixed_array_base<int,3,int *> {
protected:
	int *m_aData;
	
public:
	fixed_array_base<int,3,int *>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	int& operator[]();
	int& operator[]();
	int* data();
	int* begin();
	int* end();
	void fill();
	size_t size();
	bool empty();
};

struct reference_fixed_array<int,3> : fixed_array_base<int,3,int *> {
};

extern fixed_array<ENE_WRK,10> ene_wrk;
extern reference_fixed_array<int,3> ew_combo_tbl;
extern unsigned char ENE_WRK type_info node[8];
extern unsigned char G3DLIGHT type_info node[8];
extern unsigned char GRA3DLIGHTSTATUS type_info node[8];
extern unsigned char float [3] type_info node[8];
extern unsigned char EFFECT_CONT type_info node[8];
extern unsigned char CVariable<char, 0, 9> type_info node[8];
extern unsigned char CVariable<char, 0, 3> type_info node[8];

void InitEnemy();
int IsEnemyOn();
int IsEnemyOn(int ene_type, int dat_no);
void EnemyEffectPosUpdate();
void EnemyDrawLock();
void EnemyDrawUnlock();
void EnemyLock();
void EnemyUnlock();
void EnemyAnimLock();
void EnemyAnimUnlock();
void EnemyAnimOne(int iEneID);
void EnemyMain();
void EnemyDoorMain();
void EnemyPhotoMain();
void AutoEnemyMain();
ENE_STATUS GetEneDatStatus(int ene_type, int dat_no);
int IsActEnemy(int wrk_no);
int IsAliveEnemy(int wrk_no);
int IsReadyAllEnemy();
int SearchEneWrkNo(int ene_type, int dat_no);
int PreloadedEneAllRelease(int wrk_no);
void EneAllRelease();
MMANAGE_ERR EneLoadReq(int ene_type, int ene_dat_no, int *pWrkNo);
int EneActReq(int ene_type, int dat_no);
int EneComboReq(ENE_WRK *ew, int sw_flg);
int IsInCombo();
void EneReleaseReq(int ene_type, int dat_no);
void EnemyMotionWork();
float*[4][4] EnemyGetMatrix(ENE_WRK *ew);
float*[4][4] FlyGetMatrix(FLY_WRK *fw);
void EnemyDrawOne(ENE_WRK *ew);
void flyAnimationProc(FLY_WRK *fw);
int enemyIsFlyDraw(FLY_WRK *fw);
int FlyDrawOne(FLY_WRK *fw);
SHUTTER_CHANCE_STATE ShutterChanceChk();
void EneActSet(ENE_WRK *ew, u_char act_no);
void EneBlinkSet(ENE_WRK *ew);
void EneInDispChk(ENE_WRK *ew);
void SetEneDepth(ENE_WRK *ew, float *pos);
void CheckEneDepth();
void ChangeAtkTargetRnd(ENE_WRK *ew);
int ChangeEneAlgorithm(int ene_type, int dat_no, int algo_no);
void EneAlphaCtrl(ENE_WRK *ew);
void EneAlphaClear();
void SetEneView(ENE_WRK *ew, int time, int bWithSearcher);
int SetEneViewClear(ENE_WRK *ew);
void SetEneSlow(ENE_WRK *ew, int time, float reso);
void SetEneSlowMode(ENE_WRK *ew, int time, float reso);
int SetEneSlowClear(ENE_WRK *ew);
void SetEneSlowHitBack(ENE_WRK *ew, int wait_frame, int hit_back_frame, float reso);
void SetEneMahiMode(ENE_WRK *ew, int all_time, int one_stop_time, int one_act_time);
int SetEneMahiClear(ENE_WRK *ew);
void SetEneSealMode(ENE_WRK *ew, int iEffFrame);
int SetEneSealClear(ENE_WRK *ew);
int GetEnePos(float *pos, u_char obj_type, int obj_id);
void EnePosInfoSet(ENE_WRK *ew);
int CheckEneView(ENE_WRK *ew, float dist, float rot);
ENE_WRK* ENE_WRK * _fixed_array_verifyrange<ENE_WRK>(size_t v, size_t _max);
int CWaitVariable<short>::Work();
int* int * _fixed_array_verifyrange<int>(size_t v, size_t _max);
G3DLIGHT* G3DLIGHT * _fixed_array_verifyrange<G3DLIGHT>(size_t v, size_t _max);
GRA3DLIGHTSTATUS* GRA3DLIGHTSTATUS * _fixed_array_verifyrange<GRA3DLIGHTSTATUS>(size_t v, size_t _max);
u_char* unsigned char * _fixed_array_verifyrange<unsigned char>(size_t v, size_t _max);
float*[4] float [3] * _fixed_array_verifyrange<float [3]>(size_t v, size_t _max);
EFFECT_CONT* EFFECT_CONT * _fixed_array_verifyrange<EFFECT_CONT>(size_t v, size_t _max);
void EnemyStart(int wrk_no);
type_info& ENE_WRK type_info function();
type_info& G3DLIGHT type_info function();
type_info& GRA3DLIGHTSTATUS type_info function();
type_info& float [3] type_info function();
type_info& EFFECT_CONT type_info function();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_ENEMY_ENEMY_H
