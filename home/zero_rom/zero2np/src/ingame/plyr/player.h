// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_PLYR_PLAYER_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_PLYR_PLAYER_H

struct MOVE_BOX {
	float mloop;
	sceVu0FVECTOR pos;
	sceVu0FVECTOR bpos;
	sceVu0FVECTOR mv;
	sceVu0FVECTOR bmv;
	sceVu0FVECTOR rot;
	sceVu0FVECTOR brot;
	sceVu0FVECTOR spd;
	sceVu0FVECTOR rspd;
	sceVu0FVECTOR trot;
};

struct CPLYR_SND_BUF_PLAY : CSND_BUF_PLAY {
	CPLYR_SND_BUF_PLAY& operator=();
	CPLYR_SND_BUF_PLAY();
	CPLYR_SND_BUF_PLAY();
	void Play();
};

struct CWaitVariable<short int> {
private:
	short int mValue;
	
public:
	CWaitVariable<short int>& operator=();
	CWaitVariable();
	CWaitVariable();
	void Reset();
	void Wait();
	int Work();
	short int Get();
};

typedef struct {
	u_char area_no;
	u_char area_old;
	u_char room_id;
	u_char room_old;
	u_char camera_no;
	u_char camera_no_old;
	float hight;
} PROOM_INFO;

struct CWrkVariable<char,0,10> {
private:
	char mValue;
	char mAdd;
	
public:
	CWrkVariable<char,0,10>& operator=();
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

struct CEneTracer {
private:
	CWaitVariable<short int> mWaitCnt;
	CWrkVariable<char,0,10> mTraceEne;
	
public:
	CEneTracer& operator=();
	CEneTracer();
	CEneTracer();
	int Init();
	void Work();
	void Req(int iEneNo, int iFrame);
};

struct PLCMN_WRK {
	MOVE_BOX mbox;
	STATUS_DAT st;
	PROOM_INFO pr_info;
	u_char mode;
	u_char atk_eneno;
	u_char atk_pos;
	u_char atk_rot;
	float near_ene_dist;
	float near_ene_dist_old;
	u_char near_ene_no;
	short int floor;
	float headpos[4];
};

struct PLYR_WRK {
	PLCMN_WRK cmn_wrk;
	u_char modedead;
	u_char anime_no;
	u_char charge_num;
	float charge_rate;
	float charge_deg;
	float frot_x;
	short int fp[2];
	u_short no_photo_tm;
	u_short shutter_tm;
	u_short vib_time_sm;
	u_short vib_time_bg;
	float spd[4];
	float old_spd[4];
	float fhp[5][4];
	float prot;
	u_short fene_tm;
	u_short bonus_sta;
	u_short avoid_tm;
	u_short avoid_flg;
	u_short avoid_st;
	u_short avoid_sp;
	u_char door_flg;
	u_short door_no;
	float bwp[4];
	float spot_pos[4];
	float spot_rot[4];
	G3DLIGHT fl;
	G3DLIGHT fl2;
	G3DLIGHT reflectionlight;
	float maplight_scale;
	SND_3D_SET s3d;
	float fl_pow;
	int finder_tm;
	char finder_lock_cnt;
	char move_lock_cnt;
	char action_lock_cnt;
	char shutter_lock_cnt;
	char run_lock_cnt;
	CEneTracer ene_tracer;
	int ane_curse_lock;
	float hit_rad;
	SHUTTER_CHANCE_STATE preShutterChanceState;
	SHUTTER_CHANCE_STATE nowShutterChanceState;
};

typedef enum {
	PFT_HAND = 0,
	PFT_STEP = 1,
	NUM_PLAYERFLASHLIGHTTYPE = 2
} PLAYERFLASHLIGHTTYPE;

extern PLYR_WRK plyr_wrk;
extern PLCMN_WRK *pl_sta[2];
extern CPLYR_SND_BUF_PLAY mio_deadly_player;
extern unsigned char ENE_WRK type_info node[8];
extern unsigned char CVariable<char, 0, 9> type_info node[8];
extern unsigned char CVariable<char, 0, 3> type_info node[8];

void InitPlayer();
void ReleasePlayer();
void ClrEneSta();
void PlyrDebug();
void PlayerMainCmn(int flight_sw);
void PlyrNormalCtrl();
void PlyrMotionMovement();
int PlayerGameOver();
void ReqPlyrDead(int mode);
int PlyrDead();
void PlyrMepachiCtrl();
void PlyrBattleCheck();
int PlyrDamageCtrl();
u_char PlyrAvoidCheck();
u_char LeverGachaChk();
void RTSpiritsDownModeOn(int time);
void RTSpiritsDownModeOff();
void ReqPlyrHPSPdownP(PLCMN_WRK *cmn, u_short per);
void ReqPlyrHPdownP(PLCMN_WRK *cmn, u_short per);
void ReqPlyrSPdownP(PLCMN_WRK *cmn, u_short per);
void ReqPlyrHPSPdown(PLCMN_WRK *cmn, u_short deg);
void ReqPlyrHPdown(PLCMN_WRK *cmn, u_short deg);
void ReqPlyrSPdown(PLCMN_WRK *cmn, u_short deg);
void PlyrSPdownCtrl(PLCMN_WRK *cmn);
void PlyrHPdownCtrl(PLCMN_WRK *cmn);
void ReqCamTraceNearEne(void *ew);
void SetPlyrFinderIn();
void SetPlyrFinder();
void SetPlyrFinderEnd();
void SetPlyrFinderEnd1();
void SetPlyrFinderEnd2();
void SetPlyrFinderQEnd();
void PlyrFinderIn();
void PlyrFinderEnd();
void PlyrNModeCtrl();
void PlyrFModeMoveCtrl();
float PlyrMovePad();
void PlyrMoveChk(MOVE_BOX *mb, float *tv, float rot);
void PlyrMoveChkV(MOVE_BOX *mb, float *tv, float mrot);
void PlyrMovePadFind(MOVE_BOX *mb, float *tv);
float GetMovePad(u_char id);
u_char PlyrMoveStaChk(float pad_chk);
u_int PlyrLeverInputChk();
void GetMoveSpeed(float *tv);
void PlyrPosSet(MOVE_BOX *mb, float *tv);
void PlyrHeightCtrl(float *tv);
void PadInfoTmpSave(u_char *dir_save, u_char dir_now, float *rot_save, float rot_now);
void CngPlyrRotRapid(MOVE_BOX *mb, float rot0);
void PlyrFinderCtrl();
void EneFrameHitChk();
void FModeScreenEffect();
void NearEneInfo(PLCMN_WRK *cmn);
void NearAllEneInfo(PLCMN_WRK *cmn);
void PlyrDWalkTmCtrl(PLCMN_WRK *cmn);
void PlyrCamTurnChk();
int PlyrPhotoChk2();
void PlyrVibCheck();
void PlyrVibCtrl(u_char time);
void PlyrVibCtrlBig(u_char pow, u_char time);
int PhotoDmgChk2(int bWithLenz);
int PhotoDmgChkSub2(ENE_WRK *ew, int bWithLenz, int *pbParticleFlg);
int PhotoPointCulcEne2(ENE_WRK *ew, BONUS_SHOT_SCORE *bonus, SUBJECT_WRK *subjects, HINT_PHOTO_REQ *hint_picture, int bWithLenz);
void GetPlayerPos(float *pos);
void GetPlayerFinderPos(float *fx, float *fy);
void SetPlayerPos(float *pos);
void SetPlayerRot(float *rot);
void SetPlayerFloor(int floor);
void SetPlayerHitRadius(float fLen);
void SetPlyrAnime(u_char anime_no, u_char frame);
void PlyrNAnimeCtrl();
int GetPlyrFloor();
int GetPlyrEquipmentFilmType();
float PlayerGetNowHPPercentage();
float PlayerGetNowMPPercentage();
int GetPlyrOldAreaNo();
int GetPlyrAreaNo();
int GetPlyrRoomID();
void SetPlyrAreaNo(int area_no);
void SetPlyrRoomID(int room_id);
int InFinderMode();
int PlayerModeIsFinder();
int InDamageState();
int IsPlayerInBattle();
int FrameInsideChk(float *tv, float *tx, float *ty);
void PlyrFlashlight(int move_sw);
void PlyrSpotMoveCtrl();
float GetEnePowerDegree();
int ChkPhotoAble();
float CulcEP(float *v0, float *v1);
float CulcEP2(float *v0, float *v1);
float CulcEP3(float *v1);
int InFinderFrameSub(float *pos, float *p_dist, float sight_range, float limit_dist);
void PlyrRoomCheck();
float GetNearestDistFromPlyrToEnemy();
int DoorMotionIsEnd();
void ReqPlyrDoorMotion(int door_type, int phase);
int PlyrOpenDoor();
void ClearPlyrDoorFlg();
u_char GetPlyrDoorFlg();
int GetPlyrDoorMoveFlg();
void PlayerChangeMode(int iMode);
void MovePlyrStairs();
int CheckPlyrAnimeEnd(int anime_no);
void PlyrCondCheck();
void PlyrSEStop();
int PlyrOutsideCheck();
void playerSetFlashlightType(PLAYERFLASHLIGHTTYPE pft);
PLAYERFLASHLIGHTTYPE playerGetFlashlightType();
void GetCenterPoint(float *center, float *t1, float *t2);
void ClearPlyrMoveStatus();
int IsFinderLocked();
int PlayerFinderLock();
void PlayerFinderUnlock();
void PlayerShutterLock();
void PlayerShutterUnlock();
void PlayerMoveLock();
void PlayerMoveUnlock();
void PlayerActionLock();
void PlayerActionUnlock();
void PlayerRunLock();
void PlayerRunUnlock();
void PlayerCurseLock();
void PlayerCurseUnlock();
void PlayerLock();
void PlayerUnlock();
void SetSave_PlyrWrk(MC_SAVE_DATA *data);
int CheckPlayerNeckSW(u_char anime_no);
ENE_WRK* ENE_WRK * _fixed_array_verifyrange<ENE_WRK>(size_t v, size_t _max);
u_char* unsigned char * _fixed_array_verifyrange<unsigned char>(size_t v, size_t _max);
short int* short * _fixed_array_verifyrange<short>(size_t v, size_t _max);
int CWaitVariable<short>::Work();
type_info& ENE_WRK type_info function();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_PLYR_PLAYER_H
