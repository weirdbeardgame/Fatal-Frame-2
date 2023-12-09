// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MOVIE_ROOM_MENU_PRG_MOVIE_PROJECTER_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MOVIE_ROOM_MENU_PRG_MOVIE_PROJECTER_H


void movie_projecterInit();
void movie_projecterRelease();
void movie_projecterSetSave(MC_SAVE_DATA *save);
void movie_projecterSetFilmNo(int iFilmNo);
int movie_projecterGetFilmNo();
int movie_projecterTakeFilm();
void movie_projecterStop();
int movie_projecterIsReq();
int movie_projecterPlay();
int movie_projecterWork();
void movie_projecterDraw();
int* int * _fixed_array_verifyrange<int>(size_t v, size_t _max);

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MOVIE_ROOM_MENU_PRG_MOVIE_PROJECTER_H
