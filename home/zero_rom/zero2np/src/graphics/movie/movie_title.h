// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_MOVIE_MOVIE_TITLE_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_MOVIE_MOVIE_TITLE_H


void MovieTitleInit(int scene_no);
void MovieTitleMain(int movie_timer);
int GetMovieTitleDatTblPos(MOVIE_TITLE_DAT *data, int timer);
void MovieTitleDispMain(int msg_type, int msg_id, int y, int msg_col, char base_disp_flg);
void MovieTitleBaseDisp(float x, float y, float w, u_char alp, u_int pri);
void MovieTitleEnd();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_MOVIE_MOVIE_TITLE_H
