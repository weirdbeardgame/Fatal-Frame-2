// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_PLYR_UNIT_CTL_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_PLYR_UNIT_CTL_H

extern unsigned char ENE_WRK type_info node[8];

void RotLimitChk(float *rot);
void GetTrgtRotFromPlyr(float *p, float *rot, int id);
void GetTrgtRot(float *p0, float *p1, float *rot, int id);
float GetTrgtRotY(float *p0, float *p1);
int RotRngChk(float *vp, float *tp, float rot, float rng);
u_char OutSightChk(float *tp, float *vp, float rot, float sight, float dist);
int GetRndSP(u_int min, u_int lng);
u_char ConvertRot2Dir(float rot, u_char id);
void ReqEneStop(u_char req, u_char except);
ENE_WRK* ENE_WRK * _fixed_array_verifyrange<ENE_WRK>(size_t v, size_t _max);
type_info& ENE_WRK type_info function();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_PLYR_UNIT_CTL_H
