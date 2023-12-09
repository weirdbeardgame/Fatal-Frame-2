// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MENU_TIM_DAT_MAP_AREA_DAT_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MENU_TIM_DAT_MAP_AREA_DAT_H

typedef struct {
	char map_label;
	char area_label;
	short int room_label;
	float pos[4][2];
} MAP_AREA_DAT;

extern MAP_AREA_DAT map_area_dat[260];


#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MENU_TIM_DAT_MAP_AREA_DAT_H
