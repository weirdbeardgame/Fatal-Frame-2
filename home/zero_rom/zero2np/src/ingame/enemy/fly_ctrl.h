// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_ENEMY_FLY_CTRL_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_ENEMY_FLY_CTRL_H

typedef struct {
	u_char attr;
	u_char alp;
	u_short mdl_no;
	u_short anm_no;
	u_short dmg;
	u_short hit_rng;
	u_short cond;
	u_int blifetime;
	u_short chg_cnt;
	float fstmove;
	float fstrot;
	float fdist;
	float fmove;
	float frot;
	float ndist;
	float nmove;
	float nrot;
} FLY_DATA;

typedef struct {
	u_short sta;
	void *ew;
	FLY_DATA *dat;
	PLCMN_WRK *target;
	GRA3DLIGHTDATA light;
	float npos[4];
	float opos[4];
	float nrot[4];
	float tpos[4];
	float trot[4];
	float spd;
	u_int life_time;
	u_int life_cnt;
	float trace_ang;
	u_int trace_time;
	u_short now_cnt;
	u_char alp;
	void *efpw;
	void *ani_ctrl;
	int mdl_p;
	int mdl_no;
	int anm_p;
	int anm_no;
	int init_flow;
	float adjp_cnt;
	float adjp_span;
	float adjp_add;
	float adjp_ang;
	float adjv[4];
} FLY_WRK;

extern FLY_DATA fly_dat[6];
extern unsigned char FLY_WRK type_info node[8];
extern unsigned char G3DLIGHT type_info node[8];

FLY_WRK* FlyInit(u_char type);
int FlyAct(FLY_WRK *fw, u_char type, float *pos, float *rot, PLCMN_WRK *target);
void EneFlyInit(ENE_WRK *ew);
int EneFlyModelInitWait(ENE_WRK *ew);
void EneFlyAct(ENE_WRK *ew, u_char type, float *pos, float *rot, PLCMN_WRK *target);
void EneFlyAnmctrlRelease(ENE_WRK *ew);
void FlyModelRelease(FLY_WRK *fw);
void FlyEffectRelease(FLY_WRK *fw);
void FlyRelease(FLY_WRK *fw);
void PhotoFlyChk();
void SetFlyOne(FLY_WRK *fw, ENE_WRK *ew, u_char type, float *pos, float *rot, PLCMN_WRK *target);
void EraseEneFlyWork(ENE_WRK *ew);
void FlyRule();
void SetFlyLight(FLY_WRK *fw);
FLY_WRK* FLY_WRK * _fixed_array_verifyrange<FLY_WRK>(size_t v, size_t _max);
G3DLIGHT* G3DLIGHT * _fixed_array_verifyrange<G3DLIGHT>(size_t v, size_t _max);
type_info& FLY_WRK type_info function();
type_info& G3DLIGHT type_info function();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_ENEMY_FLY_CTRL_H
