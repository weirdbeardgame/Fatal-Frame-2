// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MAP_MAPLOAD_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MAP_MAPLOAD_H

extern unsigned char MLOAD_HEAD type_info node[8];

int MapLoadGetLabel(int _room_no);
int MapLoadCheckDrawFlg(int buff_id);
int MapLoadCheckLoadNow();
char* MapLoadInitFreeMem(int buff_id);
char* MapLoadGetFreeMemAddr(int buff_id);
void MapLoadSetFreeMemAddr(int buff_id, char *addr);
void* MapLoadGetDoorBuffPtr();
int MapLoadGetFileID(int stat);
MLOAD_HEAD* MapLoadGetHeadPtr(int id);
int MapLoadGetBuffID4Label(int label);
void MapLoadSetNoRegList();
MLOAD_HEAD* MapLoadGetHeader();
int MapLoadGetRegBuffID(int room_no, int kai);
void MapLoadSetNowRoom(int room_no);
void MapLoadSetDrawFlgSub(int buff_id, int sw);
void MapLoadSetDrawFlg(int flg, int sw);
void MapLoadSetDrawFlg2(int buff_id, int sw);
void MapLoadSetDrawFlg3(int room_no, int sw);
void MapLoadSetDrawOnly(int room_no);
int* MapLoadGetFreeArea();
void MapLoadSetOffSet(int room_no, float x, float y, float z);
float* MapLoadGetOffset(int room_no);
void MapLoadGetOffsetVector(float *Center, int RoomNo);
int MapLoadGetBuffID4Pos(int kai, float *vPos);
int MapLoadGetBuffID(int room_no);
int MapLoadGetRoomNo4BuffID(int buff_id);
int MapLoadGetRoomNoNow();
int MapLoadSwitch();
void MapLoadBg(int room_no);
int MapLoadDrawRoomOne(int room_no);
int MapLoadInitRoom();
void MapLoadDeleteRoom(int b_id);
void MapLoadDeleteRoomAll();
int MapLoadMoveRoom(int room_no);
int MapLoadReload(int room_no);
int MapLoadUpdatRoomDat(int door_id);
int MapLoadMain();
u_int MapLoadSetMemSpace(u_int st_addr, u_int en_addr);
int MapLoadInit(int room_no);
MLOAD_HEAD* MLOAD_HEAD * _fixed_array_verifyrange<MLOAD_HEAD>(size_t v, size_t _max);
char* char * _fixed_array_verifyrange<char>(size_t v, size_t _max);
type_info& MLOAD_HEAD type_info function();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MAP_MAPLOAD_H
