// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_SCENE_SCENE_DAT_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_SCENE_SCENE_DAT_H

struct _SCENE_DATA_CMN {
	unsigned char vol;
};

typedef _SCENE_DATA_CMN SCENE_DATA_CMN;
extern SCENE_DATA_CMN scene_data_cmn[72];
extern int *scene_cut_timing[71];


#endif // HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_SCENE_SCENE_DAT_H
