// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MENU_TIM_DAT_MAP_SIZE_DAT_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MENU_TIM_DAT_MAP_SIZE_DAT_H

typedef struct {
	float x;
	float y;
} MAP_WORLD_POINT;

typedef struct {
	int w;
	int h;
} MAP_SIZE_DAT;

typedef struct {
	float normal;
	float big;
} MAP_SCALL_DAT;

extern MAP_WORLD_POINT map_world_point[17];
extern MAP_SIZE_DAT map_size_dat[17];
extern MAP_SCALL_DAT map_scall_dat[17];


#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MENU_TIM_DAT_MAP_SIZE_DAT_H
