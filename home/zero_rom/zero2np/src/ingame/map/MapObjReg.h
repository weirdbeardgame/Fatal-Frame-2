// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MAP_MAPOBJREG_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MAP_MAPOBJREG_H

typedef struct {
	short unsigned int SecStID;
	short unsigned int size;
	unsigned int labelID;
} MB_OUT_SECTION;

typedef struct {
	int *lit_addr;
	MAPOBJ_DAT dat[300];
} MAPOBJ_HEAD;

extern unsigned char MAPOBJ_HEAD type_info node[8];

void MapObjRegSetSceneLoad(int flg);
MAPOBJ_HEAD* MapObjGetListPtr(int id);
int MapObjSetHit2(MDAT_OBJ *op, int hit_sw);
int MapObjSetHit(int labelID, int hit_sw);
int MapObjSetHitArea(int reg_id);
int MapObjGetLightFlg(char *name);
void MapObjCallbackBornAnim();
void MapObjBornDelete(int buff_id);
int MapObjCheckAnim(int buff_id, char *m_name, float *offset, float *rot, void *obj_hdl, int ani_type);
void MapObjRegistMot(int buff_id, MAPOBJ_DAT *dp, char *name, int action, int a_type, float *irot, float *ipos);
int MapObjRegistDoor(int buff_id, int reg_id, int stat, MB_OUT_SECTION *reg_p);
int MapObjRegistFurn(int buff_id, int reg_id, int stat, MB_OUT_SECTION *reg_p);
void MapObjRegistRegDatOne(int buff_id, int reg_id);
MDAT_DOOR* MapObjSetDoorDat(int b_id, int door_id);
void MapObjDeletDraw(int buff_id);
int MapObjRegistPhf(int buff_id, char *lit_addr);
void MapObjRegInit();
MAPOBJ_HEAD* MAPOBJ_HEAD * _fixed_array_verifyrange<MAPOBJ_HEAD>(size_t v, size_t _max);
char* char * _fixed_array_verifyrange<char>(size_t v, size_t _max);
type_info& MAPOBJ_HEAD type_info function();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MAP_MAPOBJREG_H
