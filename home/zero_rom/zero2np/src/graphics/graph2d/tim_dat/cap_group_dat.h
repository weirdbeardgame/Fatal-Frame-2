// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_GRAPH2D_TIM_DAT_CAP_GROUP_DAT_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_GRAPH2D_TIM_DAT_CAP_GROUP_DAT_H

typedef struct {
	char cap_label;
	int x[5];
} CAP_GROUP;

typedef struct {
	char btn_label;
	int x[5];
} BTN_GROUP;

typedef struct {
	CAP_GROUP *cap_group;
	BTN_GROUP *btn_group;
} CAP_BTN_GROUP_CTRL;

extern CAP_GROUP cap_group_A[3];
extern BTN_GROUP btn_group_A[3];
extern CAP_GROUP cap_group_B1[4];
extern BTN_GROUP btn_group_B1[4];
extern CAP_GROUP cap_group_B2[4];
extern BTN_GROUP btn_group_B2[4];
extern CAP_GROUP cap_group_C[4];
extern BTN_GROUP btn_group_C[4];
extern CAP_GROUP cap_group_D[4];
extern BTN_GROUP btn_group_D[5];
extern CAP_GROUP cap_group_E1[3];
extern BTN_GROUP btn_group_E1[4];
extern CAP_GROUP cap_group_E2[3];
extern BTN_GROUP btn_group_E2[3];
extern CAP_GROUP cap_group_F[2];
extern BTN_GROUP btn_group_F[2];
extern CAP_GROUP cap_group_H[5];
extern BTN_GROUP btn_group_H[5];
extern CAP_GROUP cap_group_I[4];
extern BTN_GROUP btn_group_I[5];
extern CAP_GROUP cap_group_J[5];
extern BTN_GROUP btn_group_J[5];
extern CAP_GROUP cap_group_K[3];
extern BTN_GROUP btn_group_K[4];
extern CAP_GROUP cap_group_L[2];
extern BTN_GROUP btn_group_L[2];
extern CAP_GROUP cap_group_M[4];
extern BTN_GROUP btn_group_M[4];
extern CAP_GROUP cap_group_N[2];
extern BTN_GROUP btn_group_N[2];
extern int cap_world_pos_x[15][5];
extern int cap_world_pos_y[15][5];
extern CAP_BTN_GROUP_CTRL cap_btn_group_ctrl[15];


#endif // HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_GRAPH2D_TIM_DAT_CAP_GROUP_DAT_H
