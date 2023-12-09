// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MENU_MENU_CMN_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MENU_MENU_CMN_H

typedef struct {
	char csr;
} MENU_YES_NO_CTRL;

typedef struct {
	int disp_start_pos;
	int data_pos;
	int data_num;
} MENU_REF_CTRL;

extern MENU_YES_NO_CTRL menu_yes_no_ctrl;

void MenuYesNoCtrlInit(int csr);
void MenuRefCtrlInit(MENU_REF_CTRL *ref_ctrl, int data_num);
int MenuRefMovePadLup(MENU_REF_CTRL *ref_ctrl, int *cursor, int disp_num, int disp_num_max);
int MenuRefMovePadLdown(MENU_REF_CTRL *ref_ctrl, int *cursor, int disp_num, int disp_num_max);
int MenuRefMovePageUp(MENU_REF_CTRL *ref_ctrl, int *cursor, int disp_num, int disp_num_max);
int MenuRefMovePageDown(MENU_REF_CTRL *ref_ctrl, int *cursor, int disp_num, int disp_num_max);
int MenuCmnConfirmPad();
int MenuCmnYesNoPad();
int MenuLoadWait();
void MenuCrossFadeInit();
void MenuCmnCrossFade();
void MenuCrossFadeInStart(int buff_label, int data_label);
void MenuCrossFadeOutStart(int buff_label);
void LiberateAllMenuCrossFadeTexMem();
void LiberateMenuCrossFadeTexMem(int buff_label);
void MenuCrossFadeTexLoadCancel(int buff_label);
void GetMenuCrossFadeAlpha(u_char *fade_alpha);
void* GetCrossFadeDataAddr(int buff_label);
int CheckCrossFadeDisp(int buff_label);
void MenuDBuffCtrlInit();
void MenuDBuffChange();
void MenuDBuffLoadReq(int load_file);
void MenuDBuffRelease(u_char flg);
void MenuDBuffAllRelease();
u_char GetMenuDBuffFlg();
u_int* GetMenuDBuffAddr(u_char flg);
void MenuTim2SendVram(u_int *tim2_addr, int tbp, int cbp);
void MenuInOutAnimCtrl(char *anim_step, char *anim_timer, u_char *alpha);
void MenuCsrAnimCtrl(char *timer, u_char *rgb);

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MENU_MENU_CMN_H
