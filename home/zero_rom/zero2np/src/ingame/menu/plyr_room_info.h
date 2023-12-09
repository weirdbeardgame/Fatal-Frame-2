// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MENU_PLYR_ROOM_INFO_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MENU_PLYR_ROOM_INFO_H

typedef struct {
	char info;
} ROOM_IN_INFO;

extern unsigned char ROOM_IN_INFO type_info node[8];

void RoomInInfoInit();
void RoomInCheckMain();
int GetPlyrRoomLabel();
int GetRoomLabel(int area_label, int floor_label, float *pos);
void ChangeWorldPosToWinPos(float *pos_x, float *pos_y, int map_label, float *pos, int scall);
int GetMapLabelToRoomLabel(int room_label);
int GetRoomInfo(int room_label);
void SetSave_RoomInInfo(MC_SAVE_DATA *data);
void DebugAllMapDisp();
ROOM_IN_INFO* ROOM_IN_INFO * _fixed_array_verifyrange<ROOM_IN_INFO>(size_t v, size_t _max);
type_info& ROOM_IN_INFO type_info function();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MENU_PLYR_ROOM_INFO_H
