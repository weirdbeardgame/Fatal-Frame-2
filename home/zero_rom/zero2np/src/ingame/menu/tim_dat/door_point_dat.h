// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MENU_TIM_DAT_DOOR_POINT_DAT_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MENU_TIM_DAT_DOOR_POINT_DAT_H

typedef struct {
	float x;
	float y;
	int ghost_seal_door_label;
	int room_label1;
	int room_label2;
	int door_type_label;
} MAP_DOOR_POINT;

extern MAP_DOOR_POINT *menu_map_door_data[18];


#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MENU_TIM_DAT_DOOR_POINT_DAT_H
