// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MENU_MENU_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MENU_MENU_H

typedef struct {
	u_char menu_step;
	u_char top_cursor;
	u_char step;
	u_char menu_out_flg;
	u_char menu_sys_flg;
	char next_menu_step;
	int cursor;
	int stream_id;
} MENU_WRK;

extern MENU_WRK menu_wrk;
extern char map_view_flg;

int MenuMain();
void MenuIn();
void MenuOutReq();
int MenuOutCheck();
void SetNextMenuStep(int next_step);
void SetMenuStep();
void MenuRelease();
void MenuDispInit();
void MenuDispMain();
void MapViewInit();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MENU_MENU_H
