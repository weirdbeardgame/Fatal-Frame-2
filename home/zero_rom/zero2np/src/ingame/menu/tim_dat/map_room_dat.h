// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MENU_TIM_DAT_MAP_ROOM_DAT_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MENU_TIM_DAT_MAP_ROOM_DAT_H

typedef struct {
	int map_label;
	int map_tex_id;
} MAP_INFO_DAT;

typedef struct {
	int map_label;
	int room_label;
	int room_group_label;
	int snap_tex_label;
	int room_tex_label;
} ROOM_INFO_DAT;

typedef struct {
	int room_label;
	int house_tex_label;
	int start_room_label;
	int end_room_label;
} HOUSE_INFO_DAT;

typedef struct {
	int area_label;
	int floor_label;
	int map_label;
} AREA_MAP_TBL;

extern MAP_INFO_DAT map_info_dat[17];
extern ROOM_INFO_DAT room_info_dat[265];
extern HOUSE_INFO_DAT house_info_dat[11];
extern AREA_MAP_TBL area_map_tbl[80];


#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MENU_TIM_DAT_MAP_ROOM_DAT_H
