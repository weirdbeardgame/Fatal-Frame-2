// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MAP_MAPDOOR_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MAP_MAPDOOR_H

typedef struct {
	MB_OUT_SECTION head;
	char ModelName[36];
	int DatID;
	float Pos[3];
	float Rot[3];
	int HitCheck;
	int ActionType;
	int Attribute;
} MDAT_DOOR;

typedef struct {
	int doorID;
	int room_no[2];
	int attribute;
	u_short type;
	u_short se;
	float player_pos[4];
	float sister_bpos[4];
	float sister_pos[4];
	float player_rot;
	float sister_brot;
	float sister_rot;
} MLOAD_DOOR_DAT;

struct fixed_array<int,2> : fixed_array_base<int,2,int[2]> {
};

extern unsigned char MAPDOOR_HEAD type_info node[8];
extern unsigned char MDAT_DOOR * type_info node[12];
extern unsigned char MDAT_DOOR type_info node[8];

MLOAD_DOOR_DAT* MapDoorGetDatListPtr(int id);
void MapDoorMakeDualRoomLight(GRA3DLIGHTDATA *out, float *vPos, void *mdl_p);
void MapDoorDeleteBuff(int buff_id);
u_int MapDoorAdd(int buff_id, MDAT_DOOR *op);
void MapDoorSetStat(u_int ptr, void *hdl);
int MapDoorGetHitFlg(int door_id);
void* MapDoorGetHdl(int door_id);
void MapDoorInit();
void MapDoorRelease();
void MapDoorLoadReq(char *name);
int MapDoorCheckLoad();
int MapDoorAnimCallback(int id, float *mat[4], void *dat, void *dat2);
void MapDoorCopyMatrxSgd(SGDFILEHEADER *pOut, SGDFILEHEADER *pMst);
void MapDoorPutCallback();
GRA3DLIGHTDATA* MapDoorGetLight();
void MapDoorSetAnimID(int door_type);
int DoorSEIsReady();
int MapDoorAnimCheckPlay();
int MapDoorAnimOpen();
int MapDoorAnimClose(int door_id);
u_int MapDoorAnimInit(u_int *anim_addr);
int MapDoorGetModelSize(char *pModelName);
void MapDoorAllPreRender(int room_no);
int* int * _fixed_array_verifyrange<int>(size_t v, size_t _max);
MAPDOOR_HEAD* MAPDOOR_HEAD * _fixed_array_verifyrange<MAPDOOR_HEAD>(size_t v, size_t _max);
MDAT_DOOR** MDAT_DOOR * * _fixed_array_verifyrange<MDAT_DOOR *>(size_t v, size_t _max);
type_info& MAPDOOR_HEAD type_info function();
type_info& MDAT_DOOR * type_info function();
type_info& MDAT_DOOR type_info function();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MAP_MAPDOOR_H
