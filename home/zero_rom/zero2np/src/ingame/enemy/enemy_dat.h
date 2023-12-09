// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_ENEMY_ENEMY_DAT_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_ENEMY_ENEMY_DAT_H

typedef enum {
	ENE_RELEASE_NO_RELEASE = 0,
	ENE_RELEASE_TAKE_PICT = 1,
	ENE_RELEASE_TIME_OUT = 2,
	ENE_RELEASE_DIST = 3,
	ENE_RELEASE_DEAD = 4,
	ENE_RELEASE_REQ = 5,
	ENE_RELEASE_MAX_NO = 6,
	ENE_RELEASE_FORCE_DWORD = -1
} _ENE_RELASE_TYPE;

typedef _ENE_RELASE_TYPE ENE_RELASE_TYPE;
typedef _ENE_DAT_COMMON ENE_DAT_COMMON;

typedef struct {
	ENE_DAT_COMMON cmn;
	u_short dst_gthr;
	u_char way_gthr;
	u_char atk_ptn;
	float atk_rng;
	float hit_rng;
	float chance_rng;
	int dead_adpcm;
	short int hit_adjx;
	u_char hint_pic;
	u_char aura_alp;
	u_short trgt_chg;
	u_short hp;
	u_short atk_p;
	u_short atk_h;
	u_char atk;
	u_char atk_tm;
	u_char wspd;
	u_char rspd;
	u_char rotsp;
	u_short hitbk;
	u_int hp_recv_wait;
	float hp_recv_vol;
	short int fly_type[3];
	short int child_ene[3];
} ENE_DAT;

typedef struct {
	ENE_DAT_COMMON cmn;
	u_char dat_no;
	u_char soul_no;
	u_short adpcm_tm;
	short int next;
	u_short chgattr;
	float rng;
	short int time;
	int se_foot;
} AENE_DAT;

extern ENE_DAT jene_dat[312];
extern int g_iNumJeneDat;
extern AENE_DAT aene_dat[205];

void SetBattleEneDatPos(int dat_no, float *vec);
void SetBattleEneDatRot(int dat_no, int iRot);
void release_typeSetSaveJ(MC_SAVE_DATA *save);
void release_typeSetSaveA(MC_SAVE_DATA *save);
void release_typeClear();
void release_typeInit();
void release_typeRegister(int ene_type, int dat_no, ENE_RELASE_TYPE type);
ENE_RELASE_TYPE release_typeGetReleaseType(int ene_type, int dat_no);

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_ENEMY_ENEMY_DAT_H
