// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_MAIN_GLOB_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_MAIN_GLOB_H

struct SYS_WRK {
	u_long count;
	sceCdCLOCK rtc;
	short int sreset_count;
	u_char sreset_ng;
	u_char video_mode;
	u_char language;
	int game_mode;
	u_char interrupt;
};

typedef struct {
	u_char charge_range;
	u_char charge_max;
	u_char charge_speed;
	u_long point;
} CAM_CUSTOM_WRK;

struct DEBUG_WRK {
	u_char fr_30;
	int mode;
	int menu_csr;
	int comp_mode;
	int init_movieviewer;
	int init_msg_viewer;
	int init_sndtest;
	int init_scntest;
	int init_screen_calib;
	int init_test2d;
	int init_motionviewer;
	int init_func;
	int init_subtitle_test;
	int dbg_menu_sw;
};

extern PAD_STRUCT pad[2];
extern short unsigned int *key_now[32];
extern short unsigned int *key_bak[32];
extern SYS_WRK sys_wrk;
extern OPTION_WRK opt_wrk;
extern CAM_CUSTOM_WRK cam_custom_wrk;
extern DEBUG_WRK debug_wrk;


#endif // HOME_ZERO_ROM_ZERO2NP_SRC_MAIN_GLOB_H
