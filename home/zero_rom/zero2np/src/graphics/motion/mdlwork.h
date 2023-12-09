// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_MOTION_MDLWORK_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_MOTION_MDLWORK_H

typedef struct {
	u_char map_flg;
	u_short anm_no;
	u_int *anm_p;
	u_char pkt_no;
} ANI_MDL_CTRL;

extern u_int *plyr_clut_addr;
extern u_int *plyr_bwc_addr;

void ManmdlSetAlpha(void *sgd_top, u_char alpha);
char motCheckTrRateMdl(u_int mdl_no);
u_int* MpkMapUnit(u_int *mpk_p);
void DrawGirlSubObj(u_int *mpk_p, u_char alpha);
void DrawEneSubObj(u_int *mpk_p, u_char alpha1, u_char alpha2);
void InitEneVramCtrl();
void InitEneVramCtrlSub(ENE_VRAM_CTRL *ev_ctrl);
void SetEneVram(u_int *mdl_p, int offset);
int SendEneVram(u_int *mdl_p, int offset);
int SendEneVramMono(u_int *mdl_p, int offset, u_int *bwc_p);
void SendManMdlTex();
void SetTextureToScene();
void SetTextureAfterScene();
void MpkAddTexOffset(u_int *mpk_p, int offset);
void SetManmdlTm2(u_int *pak_addr, int offset, char mode);
void SetManmdlTm2_Mono(u_int *pak_addr, int offset, char mode, u_int *mono_addr);
void BackupEneVramCtrl();
void SetupEneVramCtrl();
void SgdAddTexOffset(void *sgd_top, int offset);
void motInitMsn();
void motInitAniMdlBufSub(ANI_MDL_CTRL *am_ctrl);
void motEneTexAnm(ANI_CTRL *ani_ctrl, u_int work_id);
void SetPlyrClut(int bw_flg);
int SendItemVram(u_int *pPk2, int offset);

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_MOTION_MDLWORK_H
