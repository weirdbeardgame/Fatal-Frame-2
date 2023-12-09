// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_ALBUM_PRG_ALBUM_DISP_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_ALBUM_PRG_ALBUM_DISP_H

extern unsigned char ALBUM_INFO type_info node[8];

void AlbumInOutAnimCtrl(char *anim_step, char *anim_timer, u_char *alpha);
void AlbumEditMenuAnimCtrl(char *anim_step, char *anim_timer, u_char *alpha, float *sel_scl, float *non_sel_scl);
void AlbumEditFrameDisp(int off_x, int off_y, u_char alpha);
void AlbumBlackBgDisp(int off_x, int off_y, u_char alpha, u_char max_alpha);
void AlbumTitleFrameDisp(int off_x, int off_y, u_char alpha);
void AlbumTitleDisp(int off_x, int off_y, u_char alpha);
void AlbumA_CurrentFrameFlareDisp(int off_x, int off_y, u_char alpha, u_char rgb);
void AlbumB_CurrentFrameFlareDisp(int off_x, int off_y, u_char alpha, u_char rgb);
void AlbumThumbnailBaseDisp(int data_label, int off_x, int off_y, u_char alpha);
void AlbumThumbnailBaseNumberDisp(int data_label, int off_x, int off_y, u_char alpha);
void AlbumEditAlbumACursorDisp(int photo_no, int off_x, int off_y, u_char alpha, u_char rgb);
void AlbumEditAlbumBCursorDisp(int photo_no, int off_x, int off_y, u_char alpha, u_char rgb);
void AlbumEditAlbumDisp(int data_label, int album_type, int off_x, int off_y, u_char alpha);
void AlbumEditAlbumInfoWinDisp(int album_type, int off_x, int off_y, u_char alpha);
void AlbumEditInfoNoDisp(int album_type, int off_x, int off_y, u_char alpha);
void AlbumEditInfoPhotoNoDisp(int album_type, int csr_num, int off_x, int off_y, u_char alpha);
void AlbumEditAlbumInfoWinItemDisp(int album_type, int off_x, int off_y, u_char alpha);
void AlbumEditPhotoFrameDisp(int off_x, int off_y, u_char alpha, void *pk2_addr);
void AlbumEditPhotoProtectionFrameDisp(int off_x, int off_y, u_char alpha);
void AlbumMenuSelFrameDisp(int data_label, int x, int y, u_char alpha, float scl, u_char rgb);
void AlbumMenuNonSelFrameDisp(int data_label, int x, int y, u_char alpha, float scl);
void AlbumConfYesNoDisp(int conf_csr, int off_x, int off_y, u_char alpha, u_char rgb);
void AlbumMenuItemDisp(int menu_label, int x, int y, u_char alpha);
void AlbumEditCaptionDisp(int off_x, int off_y, u_char alpha);
void AlbumSlotSelWinDisp(int cursor, int off_x, int off_y, u_char alpha);
void AlbumSlotSelCaptionDisp(int off_x, int off_y, u_char alpha);
void AlbumSaveSelAlbumDisp(int album_type, int off_x, int off_y, u_char alpha);
void AlbumSaveSelAlbumCsrDisp(int album_type, int off_x, int off_y, u_char alpha, u_char rgb);
void AlbumSaveNonSelAlbumCsrDisp(int album_type, int off_x, int off_y, u_char alpha, u_char rgb);
void AlbumSaveSelAlbumNameDisp(int album_type, int off_x, int off_y, u_char alpha, int col_label);
void AlbumSaveSelSlotDisp(int sel_slot, int off_x, int off_y, u_char alpha, u_char rgb);
void AlbumSaveSelAlbumCsrFlareDisp(int album_type, int off_x, int off_y, u_char alpha, u_char rgb);
void AlbumSaveAlbumMaskDisp(int album_type, int off_x, int off_y, u_char alpha, u_char rgb);
void AlbumSaveMsgWinDisp(int off_x, int off_y, u_char alpha);
void AlbumMcMsgWinDisp(int off_x, int off_y, u_char alpha);
ALBUM_INFO* ALBUM_INFO * _fixed_array_verifyrange<ALBUM_INFO>(size_t v, size_t _max);
type_info& ALBUM_INFO type_info function();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_ALBUM_PRG_ALBUM_DISP_H
