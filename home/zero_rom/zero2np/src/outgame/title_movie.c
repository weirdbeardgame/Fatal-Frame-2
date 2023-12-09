// STATUS: NOT STARTED

#include "title_movie.h"

typedef struct {
	short int move_movie_timer;
	char title_movie_flg;
	char play_demo_cnt;
	char movie_lock_flg;
} TITLE_MOVIE_WRK;

static TITLE_MOVIE_WRK title_movie_wrk;

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3e6c10;
	
  g3ddbgAssert__FbPCce(false,str_646);
  return;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_void__003f4808,_max,v);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_char__003f4810,_max,v);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi("unsigned int*",_max,v);
  }
  return (uint **)0x0;
}

void TitleMovieInit() {
  title_movie_wrk.movie_lock_flg = '\0';
  title_movie_wrk.title_movie_flg = '\0';
  title_movie_wrk.play_demo_cnt = '\0';
  title_movie_wrk.move_movie_timer = 0;
  return;
}

int CheckMoveTitleMovie() {
	int res;
	
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (title_movie_wrk.movie_lock_flg == '\0') {
    title_movie_wrk.move_movie_timer = title_movie_wrk.move_movie_timer + 1;
    iVar2 = GetPALMode__Fv();
    if (iVar2 == 0) {
      bVar1 = (short)title_movie_wrk.move_movie_timer < 900;
    }
    else {
      bVar1 = (short)title_movie_wrk.move_movie_timer < 0x2ee;
    }
    if (bVar1) {
      iVar2 = 0;
    }
    else {
      iVar2 = 1;
    }
  }
  else {
    iVar3 = CheckIngameMission__Fv();
    if (iVar3 == 0) {
      iVar3 = GetTitleStreamID__Fv();
      iVar3 = StreamAutoIsPlaying(iVar3);
      if (iVar3 == 0) {
        iVar3 = StreamAutoPlay(0x8be,0x8bd,0xc,0,0,0x3200,0,(_SND_3D_SET *)0x0);
        SetTitleStreamID__Fi(iVar3);
      }
      else {
        iVar2 = 0;
      }
    }
    else {
      iVar2 = GetTitleStreamID__Fv();
      iVar2 = StreamAutoIsPlaying(iVar2);
      if (iVar2 == 0) {
        iVar2 = StreamAutoPlay(0x9d3,0x9d2,0x15,0,0,0x3200,0,(_SND_3D_SET *)0x0);
        SetTitleStreamID__Fi(iVar2);
        iVar2 = 0;
      }
      else {
        iVar2 = 0;
      }
    }
  }
  return iVar2;
}

void MoveTitleMovieTimerRestart() {
  title_movie_wrk.move_movie_timer = 0;
  return;
}

void LockMoveTitleMovie() {
  title_movie_wrk.movie_lock_flg = '\x01';
  MoveTitleMovieTimerRestart__Fv();
  return;
}

void UnlockMoveTitleMovie() {
  title_movie_wrk.movie_lock_flg = '\0';
  return;
}

void init_Title_Movie_Mode() {
	int play_demo_movie[3];
	
  int id;
  int play_demo_movie [3];
  
  memset(play_demo_movie,0,0xc);
  id = GetTitleStreamID__Fv();
  StreamAutoFadeOut(id,0);
  if (title_movie_wrk.title_movie_flg == '\0') {
    InitMovieWithTitle__Fii(0x43,1);
  }
  else if (title_movie_wrk.title_movie_flg == '\x01') {
    InitMovieWithTitle__Fii(play_demo_movie[title_movie_wrk.play_demo_cnt],1);
    title_movie_wrk.play_demo_cnt = (char)((title_movie_wrk.play_demo_cnt + 1) % 3);
  }
  title_movie_wrk.title_movie_flg = title_movie_wrk.title_movie_flg ^ 1;
  return;
}

GPHASE_ENUM one_Title_Movie_Mode(GPHASE_ENUM dummy) {
  int iVar1;
  
  if (pad[0].one != 0) {
    MovieCancel__Fv();
  }
  iVar1 = PlayMovieWithTitle__Fv();
  if (iVar1 != 0) {
    SetNextGPhase__F14GPHASE_ID_ENUM(GID_TITLE_MODE);
  }
  return GPHASE_CONTINUE;
}

void end_Title_Movie_Mode() {
  EndMovieWithTitle__Fv();
  MoveTitleMovieTimerRestart__Fv();
  return;
}
