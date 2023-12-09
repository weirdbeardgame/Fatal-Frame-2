// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_DEBUG_DEBUG_MENU_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_DEBUG_DEBUG_MENU_H

struct DEBUG_SUB_MENU {
	char *name;
	u_int attr;
	void *child;
	float nmin;
	float nmax;
	float nadd;
};

struct DEBUG_MENU {
	void *parent;
	int *off_num;
	char *title;
	DEBUG_SUB_MENU submenu[20];
	int mnum;
	int kai;
	int max;
	int pos;
};

struct DEBUG_VAR {
	int hit_disp;
	int ene_stop;
	int fog_sw;
	int near;
	int far;
	int min;
	int max;
	int fog_r;
	int fog_g;
	int fog_b;
	int hi_spd;
	int perf_count_sw;
	int move_speed;
	int cut_len;
	int muteki;
	int fl_sw;
	float fl_intens;
	float fl_range;
	float fl_py;
	float fl_pz;
	float fl_y;
	float fl_z;
	int fl_line;
	float flrf_y;
	float flrf_z;
	float flrf_range;
	float flrf_si_rate;
	float pl_amb;
	float sis_para_r;
	float sis_para_g;
	float sis_para_b;
	float fStaticDirLightColStepR;
	float fStaticDirLightColStepG;
	float fStaticDirLightColStepB;
	float fYFlashlightStep;
	float fRangeFlashlightStep;
	float fl2_range;
	int shadow_model_disp;
	int sis_tr_point;
	float dummy[4];
};

extern DEBUG_MENU dbg_menu_main;
extern DEBUG_MENU dbg_disp_main;
extern DEBUG_MENU dbg_item_main;
extern DEBUG_MENU dbg_film_item;
extern DEBUG_MENU dbg_recovery_item;
extern DEBUG_MENU dbg_event_item;
extern DEBUG_MENU dbg_event_item2;
extern DEBUG_MENU dbg_event_item3;
extern DEBUG_MENU dbg_event_item4;
extern DEBUG_MENU dbg_mem_main;
extern DEBUG_MENU dbg_ene_main;
extern unsigned char CVariable<char, 0, 9> type_info node[8];
extern unsigned char CVariable<char, 0, 3> type_info node[8];
extern unsigned char PLYR_ITEM type_info node[8];
extern DEBUG_VAR debug_var;

void DebugInit();
int getFStrLength(float f);
DEBUG_MENU* GetNowMenu();
void DrawDbgMenuSub(DEBUG_MENU *wlp, int fl);
int DrawDbgMenu();
PLYR_ITEM* PLYR_ITEM * _fixed_array_verifyrange<PLYR_ITEM>(size_t v, size_t _max);
type_info& PLYR_ITEM type_info function();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_DEBUG_DEBUG_MENU_H
