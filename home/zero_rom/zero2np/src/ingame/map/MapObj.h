// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MAP_MAPOBJ_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MAP_MAPOBJ_H

typedef struct {
	int stat;
	int flg;
	int *mdl_addr;
	int anim_id;
	void *obj_ptr;
	void *obj_hdl;
	void *obj_save;
} MAPOBJ_DAT;

extern int MapObjSimiEnd;
extern int MapObjSimiTime;

void MapObjDrawON();
MAPOBJ_DAT* MapObjGetDat(int type, int id);
GRA3DLIGHTDATA* MapObjGetLight(int type, int id);
int* MapObjGetModelAddr(int type, int id);
char* MapObjGetModelName(MAPOBJ_DAT *dp);
int MapObjCheckEffect(char *name);
void MapObjSetDrawEffect(MAPOBJ_DAT *dp, int sw);
void MapObjEffCallback();
void MapObjItemOff();
void MapObjItemOn();
void MapObjNunoCtl(void *pHdl, int iAction, int iActionType);
int MapObjBoneCtl(int iFurnID, int action, int a_type);
void MapObjUpdateFlg(void *hdl, int v_flg);
void MapObjProc();
void MapObjInit();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MAP_MAPOBJ_H
