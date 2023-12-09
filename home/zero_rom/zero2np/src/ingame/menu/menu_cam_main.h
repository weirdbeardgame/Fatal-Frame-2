// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MENU_MENU_CAM_MAIN_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MENU_MENU_CAM_MAIN_H

extern unsigned char CVariable<char, 0, 9> type_info node[8];
extern unsigned char CVariable<char, 0, 3> type_info node[8];

void MenuCamMainInit(char init_type);
void MenuCamMainBackGroundLoadReq(void* (*mem_get)(/* parameters unknown */), void (*mem_free)(/* parameters unknown */));
int MenuCamMain();
void MenuCamExitReq();
void MenuCamGoToTopReq();
void MenuCamGoToEditReq();
int GetMenuCamInitType();
void* GetMenuCameraPk2Addr();
void* GetMenuCameraEdtPk2Addr();
int GetHaveAddFuncNum();
int GetHaveEquipFuncNum();
int GetHaveReinforcedLensNum();
int GetEquipReinforcedLensNum();
void MenuCamMainMemFree();
void MenuCamMainDisp();
void MenuCamCmnReinforcedLensDisp(float x, float y, u_char alpha, int lens_label);
void MenuCamNumberDisp(int data, int num, int x, int y, u_char alpha, int pri, u_char type, u_char zero_flg);
void MenuCamCmnAdditionalFunctionDisp(float x, float y, u_char alpha, int add_label);
void MenuCamCmnEquipFunctionDisp(float x, float y, u_char alpha, int parts_label, u_char flg);
char* char * _fixed_array_verifyrange<char>(size_t v, size_t _max);
int* int * _fixed_array_verifyrange<int>(size_t v, size_t _max);

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MENU_MENU_CAM_MAIN_H
