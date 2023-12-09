// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_SAVE_LOAD_PRG_SAVE_LOAD_DISP_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_SAVE_LOAD_PRG_SAVE_LOAD_DISP_H

void SaveLoadCmnBaseDisp(int off_x, int off_y, u_char alpha, void *pk2_addr, int disp_slot);
void SaveLoadMcCheckDisp(int off_x, int off_y, u_char alpha, void *pk2_addr);
void SaveLoadTitleFrameDisp(int off_x, int off_y, u_char alpha, void *pk2_addr);
void SaveLoadTitleSaveDisp(int off_x, int off_y, u_char alpha, void *pk2_addr);
void SaveLoadTitleLoadDisp(int off_x, int off_y, u_char alpha, void *pk2_addr);
void SaveLoadFrameDisp(int off_x, int off_y, u_char alpha, void *pk2_addr);
void SaveLoadClearFrameDisp(int off_x, int off_y, u_char alpha, void *pk2_addr, int disp_label);
void SaveLoadCursorDisp(int off_x, int off_y, u_char alpha, u_char rgb, void *pk2_addr, int disp_label);
void SaveLoadSelFlareDisp(int off_x, int off_y, u_char alpha, void *pk2_addr, int disp_label);
void SaveLoadSnapShadowDisp(int off_x, int off_y, u_char alpha, void *pk2_addr, int disp_label);
void SaveLoadSnapShotDisp(int off_x, int off_y, u_char alpha, void *pk2_addr, int disp_label);
void SaveLoadNonSelNoDisp(int off_x, int off_y, u_char alpha, void *pk2_addr, int disp_label);
void SaveLoadNonSelDataNumDisp(int off_x, int off_y, u_char alpha, void *pk2_addr, int disp_label);
void SaveLoadNonSelLineDisp(int off_x, int off_y, u_char alpha, void *pk2_addr, int disp_label);
void SaveLoadSelNoDisp(int off_x, int off_y, u_char alpha, void *pk2_addr, int disp_label);
void SaveLoadSelDataNumDisp(int off_x, int off_y, u_char alpha, void *pk2_addr, int disp_label);
void SaveLoadSelLineDisp(int off_x, int off_y, u_char alpha, void *pk2_addr, int disp_label);
void SaveLoadClearFlareDisp(int off_x, int off_y, u_char alpha, void *pk2_addr, int disp_label);
void SaveLoadNonClearMaskDisp(int off_x, int off_y, u_char alpha, void *pk2_addr, int disp_label);
void SaveLoadMemoryCardSlotDisp(int off_x, int off_y, u_char alpha, void *pk2_addr, int slot_label);
void SaveLoadCaptionDisp(int off_x, int off_y, u_char alpha);
void SaveLoadMcPlayDataInfoDisp(int off_x, int off_y, u_char alpha, int chapter, int room, TIME_INFO play_time);
void SaveLoadMcClearPlayDataInfoDisp(int off_x, int off_y, u_char alpha, TIME_INFO play_time);
void SaveLoadMcStateMsgWinDisp(int off_x, int off_y, u_char alpha);
void SaveLoadMcSelYesNoWinDisp(int off_x, int off_y, u_char alpha, int csr);
void SaveLoadFileSelMsgWinDisp(int off_x, int off_y, u_char alpha);
void SaveLoadFileSelYesNoWinDisp(int off_x, int off_y, u_char alpha, int csr);
void SaveLoadMcStateMsgDisp(int off_x, int off_y, u_char alpha, int msg_id);
void SaveLoadFileSelMsgDisp(int off_x, int off_y, u_char alpha, int msg_id);
void SaveLoadClearNumberDisp(int data, int off_x, int off_y, u_char alpha, int pri, u_char zero_flg, int disp_label, void *pk2_addr);
void SaveLoadClearNumberDisp_One(int data, int x, int y, u_char alpha, int pri, void *pk2_addr);

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_SAVE_LOAD_PRG_SAVE_LOAD_DISP_H
