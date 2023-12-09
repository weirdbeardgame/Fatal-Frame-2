// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MAP_MAPDRAW_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MAP_MAPDRAW_H

struct fixed_array<char,4> : fixed_array_base<char,4,char[4]> {
};

typedef struct {
	int labelID;
	int buff_id;
	int stat;
	char *addr;
	float pos[4];
	u_int model_addr;
	u_int reg_dat_top;
	u_int free_mem_top;
	u_int high_addr;
	u_int model_pak_addr;
	u_int lit_addr;
	u_int shadow_addr;
	u_int shadow_s_addr;
	GRA3DLIGHTDATA lit_dat;
	fixed_array<char,4> reg_id;
} MLOAD_HEAD;


void MapDrawCalcRoomCoord(void *sgd_top, float *pos);
void MapDrawSetMatrixSGD(void *sgd_top, float *mat[4]);
void MapDrawSGD(void *sgd_top);
int MapDrawGetCenPos(void *sgd_top, float *rvec[4]);
void MapDrawSetSpRoomLight(GRA3DLIGHTDATA *lp);
GRA3DLIGHTDATA* MapDrawGetLightPtr4BuffID2(int buff_id);
GRA3DLIGHTDATA* MapDrawGetLightPtr4BuffID(int buff_id);
GRA3DLIGHTDATA* MapDrawGetLightPtr(int room_no);
int MapDrawInitRegDat(MLOAD_HEAD *hp);
int MapDrawRegistModel(MLOAD_HEAD *hp);
int MapDrawInitRoom(MLOAD_HEAD *hp);
void MapDrawInitFurn(MLOAD_HEAD *hp);
void MapDrawPreLight(MLOAD_HEAD *hp);
void MapDrawDelRegDatAll(MLOAD_HEAD *hp);
void MapDrawDeleteNoDraw(int buff_id);
void MapDrawDeleteRoom(MLOAD_HEAD *hp);
void MapDrawDeleteRoomAll();
void MapDrawObj(void *top, float *mat[4]);
void MapDrawObjNoShadow(void *top, float *mat[4]);
void MapDrawSetUpRoomCoordinate(MLOAD_HEAD *hp);
void MapDrawShadowOne(MLOAD_HEAD *hp, GRA3DLIGHTDATA *lp);
void MapDrawRoomOne(MLOAD_HEAD *hp, GRA3DLIGHTDATA *lp);
void MapDrawRoom();
void MapDrawEnableFlashlightOnly(int b);
int MapDrawIsEnableFlashlightOnly();
char* char * _fixed_array_verifyrange<char>(size_t v, size_t _max);

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MAP_MAPDRAW_H
