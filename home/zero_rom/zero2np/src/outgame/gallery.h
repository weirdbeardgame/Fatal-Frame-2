// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_OUTGAME_GALLERY_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_OUTGAME_GALLERY_H

typedef struct {
	int setup_pic_flg;
	int game_clear_flg;
	int ending1_mov_flg;
	int ending2_mov_flg;
	int movie_no;
	int end1_mov_cnt;
	int main_step;
	int now_place;
	int next_place;
	int now_tex;
	int csr_map[8];
	int cursor;
	int next_csr;
	int old_csr;
	int anm_step;
	int anm_alpha;
	int pic_mode;
	int pic_step;
	int pic_no;
	int next_pic_no;
	int pic_max;
	int file_no;
	int pic_anm_alpha;
} GAL_CTRL;

extern void *gal_og_tex_addr;
extern void *gal_cmn_tex_addr;
extern void *gal_top_tex_addr;
extern void *gal_view_tex_addr;
extern void *gal_pic_tex_addr;
extern GAL_CTRL gal_ctrl;
extern GAL_CTRL *gc;

void GalleryInit();
void GalleryMain();
void GalleryEnd();
void GalPictureManage();
void GalPK2SendVram(int tex_id, void *tex_addr);
int GalPictureLoadReq(int id, int no);
int GalPictureLoadWait(int file_no);
void GalPictureMemFree();
void GalleryBackGroundLoadReq();
void GalleryMemFree();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_OUTGAME_GALLERY_H
