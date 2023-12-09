// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MAP_MAP_HEIGHT_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MAP_MAP_HEIGHT_H

typedef struct {
	sceVu0FVECTOR v;
} SgmVERTEX;

typedef struct {
	sceVu0IVECTOR n;
} SgmIDX;

typedef struct {
	int num;
	int *e_idx;
} SgmAREA;

typedef struct {
	int inf[4];
	int w;
	int h;
	int v_count;
	int f_count;
	float *x;
	float *z;
	SgmAREA *area;
	SgmIDX *v_idx;
	SgmVERTEX *V;
	int dmy[3];
} MhCtrl;

extern unsigned char MhCtrl * type_info node[12];
extern unsigned char float [3] type_info node[8];
extern unsigned char MhCtrl type_info node[8];

void MhFirstInit();
int MhInitMapHeight(int addr, float *offset, int id);
int MhGetMapHeight(float *pos_h, float *pos, int id, int limit_flg);
int MhDrawHeight(int id);
int MhHitLineCheck(float *pos1, float *pos2, int id);
int MhSetOffset2(int id, float *in_offset);
MhCtrl** MhCtrl * * _fixed_array_verifyrange<MhCtrl *>(size_t v, size_t _max);
float*[4] float [3] * _fixed_array_verifyrange<float [3]>(size_t v, size_t _max);
type_info& MhCtrl * type_info function();
type_info& float [3] type_info function();
type_info& MhCtrl type_info function();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MAP_MAP_HEIGHT_H
