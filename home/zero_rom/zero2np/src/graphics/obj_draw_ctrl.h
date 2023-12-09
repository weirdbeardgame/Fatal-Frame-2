// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_OBJ_DRAW_CTRL_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_OBJ_DRAW_CTRL_H

struct OBJ_DRAW_FLG {
	int player;
	int sister;
	int enemy;
	int effect;
	int room;
	int obj;
	int sky;
	int shadow;
	int shadow_src;
};

extern OBJ_DRAW_FLG obj_draw_ctrl;

void InitDrawFLG();
void SetDrawFLGAllON();
void SetDrawFLGAllOFF();
int GetPlyrDrawFLG();
void SetPlyrDrawFLG(int sw);
int GetSisDrawFLG();
void SetSisDrawFLG(int sw);
int GetEneDrawFLG();
void SetEneDrawFLG(int sw);
int GetEffDrawFLG();
void SetEffDrawFLG(int sw);
int GetRoomDrawFLG();
void SetRoomDrawFLG(int sw);
int GetObjDrawFLG();
void SetObjDrawFLG(int sw);
int GetSkyDrawFLG();
void SetSkyDrawFLG(int sw);
int GetSdwDrawFLG();
void SetSdwDrawFLG(int sw);
int GetSdwSrcDrawFLG();
void SetSdwSrcDrawFLG(int sw);
void SetDrawFLG_PL_GameOver();
void SetDrawFLG_SI_GameOver();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_OBJ_DRAW_CTRL_H
