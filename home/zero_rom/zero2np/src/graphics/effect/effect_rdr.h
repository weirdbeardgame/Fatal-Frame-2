// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_EFFECT_EFFECT_RDR_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_EFFECT_EFFECT_RDR_H

typedef struct {
	float Position[4];
	float CenterPos[4];
	void *adr;
	int furn_id;
	int Type;
	float RotY;
	float WavePos;
} EFFRDR_RSV;

typedef struct {
	float ligdiff[4];
	float ligpos[4];
	float fpos[4];
	void *ebuf;
	float ligpow;
	float wavew;
	float rate;
	float szw;
	float szh;
	float sw;
	float sh;
	int furn_id;
	u_char lignum;
	u_char usefl;
	u_char sta;
	u_char pat;
} BURN_FIRE;

extern fixed_array<BURN_FIRE,30> burn_fire;
extern fixed_array<EFFRDR_RSV,10> pfire_rsv;
extern unsigned char EFFRDR_RSV type_info node[8];
extern unsigned char BURN_FIRE type_info node[8];

void InitEffectRdr(int tex_id);
void InitEffectRdrEF();
void SetRDLongFire2(float *pos, u_char sta, float szw, float szh, float sw, float sh, float r, float g, float b, float room, int furn_id);
void SetRDLongFire(float *pos, float r, float g, float b, float room, int furn_id);
void ResetRDLongFire(int furn_id);
void RDLongFireFlareUpReq(int furn_id);
short int GetRDPFireWork();
short int SearchRDPFireWork(int furn_id);
void SetRDPFire(float *pos, int furn_id, int Type);
void SetRDPFireMove(float *pos, float *rot, int furn_id);
void ResetRDPFire(int furn_id);
void RDPFireMoveCtrl();
EFFRDR_RSV* EFFRDR_RSV * _fixed_array_verifyrange<EFFRDR_RSV>(size_t v, size_t _max);
BURN_FIRE* BURN_FIRE * _fixed_array_verifyrange<BURN_FIRE>(size_t v, size_t _max);
type_info& EFFRDR_RSV type_info function();
type_info& BURN_FIRE type_info function();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_EFFECT_EFFECT_RDR_H
