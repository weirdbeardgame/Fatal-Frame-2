// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_PLYR_SISTER_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_PLYR_SISTER_H

struct SIS_WRK {
	PLCMN_WRK cmn_wrk;
	SISALG_WRK alg;
	u_char on;
	u_char modedead;
	u_char anime_no;
	u_char trace_dist;
	u_char trace_dist_bak;
	u_short stop_tm;
	u_short walk_tm;
	u_short run_tm;
	u_short scared_rcvr_tm;
	u_short dmg_tm;
	u_short dmg_se_num;
	u_short dmg_se_cnt;
	u_short btl_recv_tm;
	u_short push_se_tm;
	u_short se_nanika2_tm;
	int se_deadly;
	u_char se_matte;
	u_char se_konaide;
	u_short cower_tm;
	u_short se_cower_cnt;
	short int se_door_fl;
	float pl_dist;
	float wpos[4];
	float spd[4];
	float old_spd[4];
	SND_3D_SET s3d;
	float bwp[4];
	int lock_cnt;
	u_char join_flg;
};

struct SIS_ANI_TBL {
	u_char ani_no;
	u_char frm;
	short int loop;
};

typedef struct {
	u_char amode;
} SIS_ALG_WORK;

struct fixed_array<float[4],64> : fixed_array_base<float[4],64,float[64][4]> {
};

struct fixed_array<float,64> : fixed_array_base<float,64,float[64]> {
};

struct fixed_array<unsigned char,64> : fixed_array_base<unsigned char,64,unsigned char[64]> {
};

struct SIS_TRACE {
	int top;
	int now;
	int num;
	int cnt;
	float trgt[4];
	int trgt_floor;
	float vwpos[4];
	int push_tm;
	int push_cnt;
	int push;
	int push_dir;
	int push_pldir;
	float push_dist;
	float push_rot;
	float push_orot;
	u_char view_hit;
	float dist;
	float wsdist;
	float wedist;
	float rsdist;
	float redist;
	fixed_array<float[4],64> p;
	fixed_array<float,64> l;
	fixed_array<unsigned char,64> fl;
};

extern SIS_TRACE sis_trace;
extern unsigned char float [3] type_info node[8];
extern unsigned char ENE_WRK type_info node[8];
extern unsigned char SIS_ANI_TBL * type_info node[12];
extern unsigned char SIS_ANI_TBL type_info node[8];
extern SIS_WRK sis_wrk;
extern SIS_ALG_WORK sis_algo;
extern SIS_SEARCH sis_search;
extern SIS_MOTION sis_motion;
extern float sistv[4];

void InitSister();
void InitSisterPos();
void InitSisterTracePos();
void InitSisterTrace();
void ChangeForceTraceMode();
void ChangeSisTraceDist(u_char type);
void SisterDisp(int sw);
void SisMepachiCtrl();
float GetDist_Sister2Player();
void SisterMain();
int SisterGameOver();
void ReqSisDead(int mode);
int SisDead();
int IsSisWrk();
void SetSisWrk(int flg);
void ModeSisTrace();
void ModeSisFind();
void ModeSisBattle();
void ModeSisTalk();
void ModeSisSearch();
int DistHitCheck(float *v1, float *v2, float dist);
void SetSisterHeight();
void CalcSisDist();
void SetSisterStatus();
void ClearSisWait();
int SisterHitCheck(float *v1, int floor1, float *v2, int floor2);
void SisterTracePlayer();
void SisterTraceMove();
void SetNowTracePos();
void DrawHitLCircle(float *mpos, u_char r, u_char g, u_char b, float rd);
void SisterPushCheck();
void ClearSisterPushMove();
float GetSisterRot();
void SisterPosUpdate();
void SisterNoMove();
void SetSisterPos(float *pos);
void SetSisterRot(float *rot);
void SetSisterRotY(float rot);
void SetSisterFloorPL();
void SisterDamageCtrl();
int CheckSisterNeckSW(u_char anime_no);
void SetSisterAnime(u_char anime_no, u_char frame);
void SisterNAnimeCtrl();
int SearchSearchPoint(float *pos, int floor1, float *tgt, int floor2);
int SearchTraceRoute(char *route);
int IsSisterTurn();
void SetSearchPoint(char *route, int floor1, int floor2);
void ReqModeSisMotion(u_int tbl_no);
void ModeSisMotion();
void SetModeSisAeneFind();
void EndModeSisAeneFind();
void ModeSisAeneFind();
void SetSearchMode();
void SetSisEscape();
void SetFindMode(float *tgt, int floor);
void MoveSisStairs();
void CheckSisGhost();
int SetSisTurn();
void SisCondCheck();
void SisDoorAct();
int GetSisAreaNo();
int CheckSisAnimeEnd(int anime_no);
int GetSisTraceStatus();
int GetSisStandAnm();
void DrawSisDummy();
void SisterDebug();
void SisterUnlock();
void SisterLock();
void SetSisAreaNo(int area_no);
void SetSisJoinFlg(u_char join_flg);
int GetSisJoinFlg();
void SetSave_SisWrk(MC_SAVE_DATA *data);
void SetSave_SisTrace(MC_SAVE_DATA *data);
void SetSave_SisAlgoWrk(MC_SAVE_DATA *data);
void SetSave_SisMotion(MC_SAVE_DATA *data);
void ChangeSisterExPos(int old, int now);
void ReqSisBankPlay(int no, int effect, int loop, int fade_time, SND_3D_SET *s3d);
float*[4] float [3] * _fixed_array_verifyrange<float [3]>(size_t v, size_t _max);
float* float * _fixed_array_verifyrange<float>(size_t v, size_t _max);
ENE_WRK* ENE_WRK * _fixed_array_verifyrange<ENE_WRK>(size_t v, size_t _max);
u_char* unsigned char * _fixed_array_verifyrange<unsigned char>(size_t v, size_t _max);
SIS_ANI_TBL** SIS_ANI_TBL * * _fixed_array_verifyrange<SIS_ANI_TBL *>(size_t v, size_t _max);
type_info& float [3] type_info function();
type_info& ENE_WRK type_info function();
type_info& SIS_ANI_TBL * type_info function();
type_info& SIS_ANI_TBL type_info function();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_PLYR_SISTER_H
