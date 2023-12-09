// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MAP_MAPHIT_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MAP_MAPHIT_H

typedef struct {
	int id;
	int flg;
	int stat;
	int key;
	float *rec;
} MAPHIT_HEAD;

typedef struct {
	float *pos[4];
	float r;
	int call_work;
} MAPHIT_DAT;

extern float MapHitDoorZ;
extern unsigned char MAPHIT_HEAD type_info node[8];

float MapHitGetColLen();
float*[4] MapHitGetColPoint();
void MapHitSetFlg(int id, int flg);
void MapHitDeleteFlg(int id, int flg);
int MapHitRegistRec(int id, int stat, int key, float *rec);
void MapHitDeleteOne(int id);
void MapHitDeleteAll();
void MapHitDeleteGroup(int a_id);
void MapHitRegistCallback(int type, int (*func)(/* parameters unknown */));
int MapHitCheckCol(float *pos, float r, int call_work, int key);
void MapHitInit();
void MapHitTerm();
void MapHitSetDoorRec(int id, int door_id, int key);
void MapHitDeleteDoorFlg(int flg);
void MapHitSetDoorFlg(int flg);
void MapHitRegistDoorVec(int door_id, int vec_id, float *vec);
void MapHitDeleteDoorRec();
void MapHitSetDoorHit(int id, int type, float *mat[4]);
void MapHitSetDoorZ(float num);
int MapTesCallbackHit(MAPHIT_HEAD *hp, MAPHIT_DAT *dp, int type);
MAPHIT_HEAD* MAPHIT_HEAD * _fixed_array_verifyrange<MAPHIT_HEAD>(size_t v, size_t _max);
type_info& MAPHIT_HEAD type_info function();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MAP_MAPHIT_H
