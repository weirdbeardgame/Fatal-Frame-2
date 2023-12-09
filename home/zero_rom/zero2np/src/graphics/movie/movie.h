// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_MOVIE_MOVIE_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_MOVIE_MOVIE_H


int iopalloc(unsigned int size, char *desc);
void InitMovie(int no, int vol_percentage, int audio_flg);
void MovieCancel();
int PlayMovie();
void EndMovie();
void InitMovieWithTitle(int scene_no, int audio_flg);
int PlayMovieWithTitle();
void EndMovieWithTitle();
int MovieCountGet();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_MOVIE_MOVIE_H
