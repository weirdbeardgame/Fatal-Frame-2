// STATUS: NOT STARTED

#include "movie_room_menu.h"

typedef struct {
	u_char step;
	u_char mode;
	u_char cursor;
	u_char next_cursor;
	u_char conf_csr;
	u_char play_flg;
	u_char have_num;
} MOVIE_ROOM_MENU_CTRL;

typedef struct {
	char anim_step;
	char anim_timer;
	char cursor_timer;
	char move_anim_step;
	short int move_anim_timer;
	char move_rot;
} MOVIE_ROOM_MENU_DISP;

typedef struct {
	int item_label;
	int tex_label;
	void *data_addr;
} DISP_FILM_REEL;

static DISP_FILM_REEL disp_film_reel[7] = {
	/* [0] = */ {
		/* .item_label = */ -1,
		/* .tex_label = */ -1,
		/* .data_addr = */ NULL
	},
	/* [1] = */ {
		/* .item_label = */ -1,
		/* .tex_label = */ -1,
		/* .data_addr = */ NULL
	},
	/* [2] = */ {
		/* .item_label = */ -1,
		/* .tex_label = */ -1,
		/* .data_addr = */ NULL
	},
	/* [3] = */ {
		/* .item_label = */ -1,
		/* .tex_label = */ -1,
		/* .data_addr = */ NULL
	},
	/* [4] = */ {
		/* .item_label = */ 0,
		/* .tex_label = */ 0,
		/* .data_addr = */ NULL
	},
	/* [5] = */ {
		/* .item_label = */ 0,
		/* .tex_label = */ 0,
		/* .data_addr = */ NULL
	},
	/* [6] = */ {
		/* .item_label = */ 0,
		/* .tex_label = */ 0,
		/* .data_addr = */ NULL
	}
};

static void (*movie_room_menu_pad_func[6])(/* parameters unknown */) = {
	/* [0] = */ MovieRoomMenuMsgDispPad,
	/* [1] = */ MovieRoomMenuFilmSelPad,
	/* [2] = */ MovieRoomMenuFilmPlayConfPad,
	/* [3] = */ MovieRoomMenuExitConfPad,
	/* [4] = */ MovieRoomMenuNoHaveFilmPad,
	/* [5] = */ MovieRoomMenuFilmSetPad
};

static void (*movie_room_menu_disp_func[6])(/* parameters unknown */) = {
	/* [0] = */ MovieRoomMenuStartMsgDisp,
	/* [1] = */ MovieRoomMenuFilmSelDisp,
	/* [2] = */ MovieRoomMenuFilmPlayConfDisp,
	/* [3] = */ MovieRoomMenuExitConfDisp,
	/* [4] = */ MovieRoomMenuNoHaveFilmDisp,
	/* [5] = */ MovieRoomMenuFilmSetDisp
};

static MOVIE_ROOM_MENU_CTRL movie_room_menu_ctrl;
static MOVIE_ROOM_MENU_DISP movie_room_menu_disp;

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3c17b8;
	
  g3ddbgAssert__FbPCce(false,str_849);
  return;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_void__003f3418,_max,v);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_char__003f3420,_max,v);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi("unsigned int*",_max,v);
  }
  return (uint **)0x0;
}

static int GetItemNameFromPlayFilmNo(int iPlayFilm) {
  return (iPlayFilm + -0xd43) / 2 + 0x22;
}

static int GetPlayFilmNoFromItemNo(int iItem) {
  return iItem * 2 + 0xcff;
}

void MovieRoomMenuInit() {
  int iVar1;
  
  MovieRoomMenuCtrlInit__Fv();
  SetDispFilmData__Fv();
  MovieRoomMenuDispInit__Fv();
  iVar1 = movie_projecterGetFilmNo__Fv();
  if (iVar1 < 0) {
    if (movie_room_menu_ctrl.have_num == '\0') {
      movie_room_menu_ctrl.mode = '\x04';
      movie_room_menu_ctrl.step = '\x01';
    }
    else {
      movie_room_menu_ctrl.mode = '\0';
    }
  }
  else {
    movie_room_menu_ctrl.mode = '\x05';
  }
  return;
}

static void MovieRoomMenuCtrlInit() {
  movie_room_menu_ctrl.have_num = '\0';
  movie_room_menu_ctrl.step = '\0';
  movie_room_menu_ctrl.mode = '\0';
  movie_room_menu_ctrl.cursor = '\0';
  movie_room_menu_ctrl.next_cursor = '\0';
  movie_room_menu_ctrl.conf_csr = '\0';
  movie_room_menu_ctrl.play_flg = '\0';
  return;
}

static void SetDispFilmData() {
	int i;
	int i;
	
  int iVar1;
  uint uVar2;
  void **ppvVar3;
  int item_id;
  int iVar4;
  
  item_id = 0x22;
  iVar4 = 0;
  do {
    iVar1 = GetPlyrItemHaveNum__Fi(item_id);
    if (0 < iVar1) {
      iVar1 = iVar4 + 0xe81;
      uVar2 = (uint)movie_room_menu_ctrl.have_num;
      disp_film_reel[uVar2].item_label = item_id;
      disp_film_reel[uVar2].tex_label = iVar1;
      GetMovieRoomMenuTexMem__FPPvi(&disp_film_reel[uVar2].data_addr,iVar1);
      MovieRoomMenuTexLoadReq__FPvi(disp_film_reel[movie_room_menu_ctrl.have_num].data_addr,iVar1);
      movie_room_menu_ctrl.have_num = movie_room_menu_ctrl.have_num + '\x01';
    }
    iVar1 = iVar4 + 1;
    item_id = iVar4 + 0x23;
    iVar4 = iVar1;
  } while (iVar1 < 7);
  uVar2 = (uint)movie_room_menu_ctrl.have_num;
  if (uVar2 < 7) {
    ppvVar3 = &disp_film_reel[movie_room_menu_ctrl.have_num].data_addr;
    do {
      uVar2 = uVar2 + 1;
      *ppvVar3 = (void *)0x0;
      ppvVar3 = ppvVar3 + 3;
    } while ((int)uVar2 < 7);
  }
  return;
}

static void GetMovieRoomMenuTexMem(void **data_addr, int data_label) {
  uint file_size;
  void *pvVar1;
  
  if (*data_addr != (void *)0x0) {
    LiberateMovieRoomMenuTexMem__FPPv(data_addr);
  }
  file_size = GetFileSize(data_label);
  pvVar1 = ol_loadGetHeap__Fi(file_size);
  *data_addr = pvVar1;
  return;
}

static void MovieRoomMenuTexLoadReq(void *tex_addr, int data_label) {
  if (tex_addr != (void *)0x0) {
    FileLoadReqEE(data_label,tex_addr,6,(undefined1 *)0x0,(void *)0x0);
  }
  return;
}

static int MovieRoomMenuTexLoadWait() {
	int i;
	
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  if (movie_room_menu_ctrl.have_num != '\0') {
    piVar2 = &disp_film_reel[0].tex_label;
    do {
      if (((void *)piVar2[1] != (void *)0x0) &&
         (iVar1 = FileLoadIsEnd2(*piVar2,(void *)piVar2[1]), iVar1 == 0)) break;
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 3;
    } while (iVar3 < (int)(uint)movie_room_menu_ctrl.have_num);
  }
  return iVar3 < (int)(uint)movie_room_menu_ctrl.have_num ^ 1;
}

int MovieRoomMenuMain() {
  int iVar1;
  
  if (movie_room_menu_ctrl.step == '\0') {
    iVar1 = MovieRoomMenuTexLoadWait__Fv();
    if (iVar1 != 0) {
      movie_room_menu_ctrl.step = '\x01';
    }
    iVar1 = 1;
  }
  else if (movie_room_menu_ctrl.step == '\x01') {
    if (movie_room_menu_disp.move_anim_step != '\x02') {
      MovieRoomMenuFilmSelAnimCtrl__FPcPs
                (&movie_room_menu_disp.move_anim_step,&movie_room_menu_disp.move_anim_timer);
    }
    (*(code *)movie_room_menu_pad_func[movie_room_menu_ctrl.mode])();
    iVar1 = 1;
  }
  else if (movie_room_menu_ctrl.step == '\x02') {
    MovieRoomMenuEnd__Fv();
    iVar1 = 0;
  }
  else {
    iVar1 = 1;
  }
  return iVar1;
}

static void MovieRoomMenuFilmSelAnimCtrl(char *anim_step, short int *anim_timer) {
  ushort uVar1;
  char cVar2;
  
  cVar2 = *anim_step;
  if (*anim_step == '\0') {
    *anim_timer = 0;
    *anim_step = '\x01';
    cVar2 = '\x01';
  }
  if ((cVar2 == '\x01') && (uVar1 = *anim_timer, *anim_timer = uVar1 + 1, 7 < (short)(uVar1 + 1))) {
    *anim_step = '\x02';
    movie_room_menu_ctrl.cursor = movie_room_menu_ctrl.next_cursor;
  }
  return;
}

static void MovieRoomMenuMsgDispPad() {
  if (**paddat == 1) {
    SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    movie_room_menu_ctrl.mode = '\x01';
  }
  else if (*paddat[1] == 1) {
    SystemBankPlay__FiiiiP11_SND_3D_SETii(1,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    movie_room_menu_ctrl.mode = '\x01';
  }
  return;
}

static void MovieRoomMenuFilmSelPad() {
  int iVar1;
  
  if (((pad[0].rpt & 0x8000U) == 0) && (iVar1 = GetPadAnalogRpt__Fi(2), iVar1 == 0)) {
    if (((pad[0].rpt & 0x2000U) == 0) && (iVar1 = GetPadAnalogRpt__Fi(3), iVar1 == 0)) {
      if (**paddat == 1) {
        SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
        movie_room_menu_disp.move_anim_step = '\x02';
        movie_room_menu_ctrl.mode = '\x02';
        movie_room_menu_ctrl.conf_csr = '\x01';
      }
      else if (*paddat[1] == 1) {
        SystemBankPlay__FiiiiP11_SND_3D_SETii(1,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
        movie_room_menu_ctrl.mode = '\x03';
        movie_room_menu_disp.move_anim_step = '\x02';
        movie_room_menu_ctrl.conf_csr = '\x01';
      }
    }
    else if ((movie_room_menu_disp.move_anim_step == '\x02') &&
            (SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000),
            1 < movie_room_menu_ctrl.have_num)) {
      if (movie_room_menu_ctrl.have_num == '\0') {
        trap(7);
      }
      movie_room_menu_disp.move_rot = '\x01';
      movie_room_menu_disp.move_anim_step = '\0';
      movie_room_menu_disp.move_anim_timer = 0;
      movie_room_menu_ctrl.next_cursor =
           (uchar)((movie_room_menu_ctrl.cursor + 1) % (uint)movie_room_menu_ctrl.have_num);
    }
  }
  else if ((movie_room_menu_disp.move_anim_step == '\x02') &&
          (SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000),
          1 < movie_room_menu_ctrl.have_num)) {
    if (movie_room_menu_ctrl.have_num == '\0') {
      trap(7);
    }
    movie_room_menu_disp.move_anim_step = '\0';
    movie_room_menu_disp.move_rot = '\0';
    movie_room_menu_disp.move_anim_timer = 0;
    movie_room_menu_ctrl.next_cursor =
         (uchar)((int)((uint)movie_room_menu_ctrl.cursor + (uint)movie_room_menu_ctrl.have_num + -1)
                % (int)(uint)movie_room_menu_ctrl.have_num);
  }
  return;
}

static void MovieRoomMenuFilmPlayConfPad() {
	int iPlayFilm;
	
  int iVar1;
  
  if (((((pad[0].rpt & 0x8000U) == 0) && (iVar1 = GetPadAnalogRpt__Fi(2), iVar1 == 0)) &&
      ((pad[0].rpt & 0x2000U) == 0)) && (iVar1 = GetPadAnalogRpt__Fi(3), iVar1 == 0)) {
    if (**paddat == 1) {
      SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      if (movie_room_menu_ctrl.conf_csr == '\0') {
        iVar1 = movie_projecterTakeFilm__Fv();
        if (-1 < iVar1) {
          iVar1 = GetItemNameFromPlayFilmNo__Fi(iVar1);
          ItemGet__FiUc(iVar1,'\x01');
        }
        ItemLost__FiUc(disp_film_reel[movie_room_menu_ctrl.cursor].item_label,'\x01');
        iVar1 = GetPlayFilmNoFromItemNo__Fi(disp_film_reel[movie_room_menu_ctrl.cursor].item_label);
        movie_projecterSetFilmNo__Fi(iVar1);
        movie_projecterPlay__Fv();
        movie_room_menu_ctrl.step = '\x02';
      }
      else {
        movie_room_menu_ctrl.mode = '\x01';
      }
    }
    else if (*paddat[1] == 1) {
      SystemBankPlay__FiiiiP11_SND_3D_SETii(1,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      movie_room_menu_ctrl.mode = '\x01';
    }
  }
  else {
    SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    movie_room_menu_ctrl.conf_csr = movie_room_menu_ctrl.conf_csr ^ 1;
  }
  return;
}

static void MovieRoomMenuExitConfPad() {
  int iVar1;
  
  if (((((pad[0].rpt & 0x8000U) == 0) && (iVar1 = GetPadAnalogRpt__Fi(2), iVar1 == 0)) &&
      ((pad[0].rpt & 0x2000U) == 0)) && (iVar1 = GetPadAnalogRpt__Fi(3), iVar1 == 0)) {
    if (**paddat == 1) {
      SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      if (movie_room_menu_ctrl.conf_csr == '\0') {
        movie_room_menu_ctrl.step = '\x02';
      }
      else {
        movie_room_menu_ctrl.mode = '\x01';
      }
    }
    else if (*paddat[1] == 1) {
      SystemBankPlay__FiiiiP11_SND_3D_SETii(1,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      movie_room_menu_ctrl.mode = '\x01';
    }
  }
  else {
    SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    movie_room_menu_ctrl.conf_csr = movie_room_menu_ctrl.conf_csr ^ 1;
  }
  return;
}

static void MovieRoomMenuNoHaveFilmPad() {
  if ((**paddat == 1) || (*paddat[1] == 1)) {
    SystemBankPlay__FiiiiP11_SND_3D_SETii(1,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    movie_room_menu_ctrl.step = '\x02';
  }
  return;
}

static void MovieRoomMenuFilmSetPad() {
  int iVar1;
  short *psVar2;
  
  if (movie_room_menu_ctrl.have_num == '\0') {
    if (((pad[0].rpt & 0x8000U) != 0) || (iVar1 = GetPadAnalogRpt__Fi(2), iVar1 != 0))
    goto LAB_002208f4;
    if (((pad[0].rpt & 0x2000U) != 0) || (iVar1 = GetPadAnalogRpt__Fi(3), iVar1 != 0)) {
      if (movie_room_menu_ctrl.conf_csr != '\0') {
        return;
      }
      goto LAB_0022095c;
    }
    if (**paddat != 1) {
      psVar2 = paddat[1];
      goto LAB_00220a08;
    }
    SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    if (movie_room_menu_ctrl.conf_csr != '\0') {
      if (movie_room_menu_ctrl.conf_csr == '\x01') {
        movie_room_menu_ctrl.step = '\x02';
        return;
      }
      return;
    }
  }
  else {
    if (((pad[0].rpt & 0x8000U) != 0) || (iVar1 = GetPadAnalogRpt__Fi(2), iVar1 != 0)) {
LAB_002208f4:
      if (movie_room_menu_ctrl.conf_csr != '\0') {
        SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
        movie_room_menu_ctrl.conf_csr = movie_room_menu_ctrl.conf_csr + 0xff;
        return;
      }
      return;
    }
    if (((pad[0].rpt & 0x2000U) != 0) || (iVar1 = GetPadAnalogRpt__Fi(3), iVar1 != 0)) {
      if (1 < movie_room_menu_ctrl.conf_csr) {
        return;
      }
LAB_0022095c:
      SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      movie_room_menu_ctrl.conf_csr = movie_room_menu_ctrl.conf_csr + '\x01';
      return;
    }
    if (**paddat != 1) {
      psVar2 = paddat[1];
LAB_00220a08:
      if (*psVar2 == 1) {
        SystemBankPlay__FiiiiP11_SND_3D_SETii(1,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
        movie_room_menu_ctrl.step = '\x02';
      }
      return;
    }
    SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    if (movie_room_menu_ctrl.conf_csr != '\x01') {
      if (1 < movie_room_menu_ctrl.conf_csr) {
        if (movie_room_menu_ctrl.conf_csr != '\x02') {
          return;
        }
        movie_room_menu_ctrl.step = movie_room_menu_ctrl.conf_csr;
        return;
      }
      if (movie_room_menu_ctrl.conf_csr == '\0') {
        movie_room_menu_ctrl.mode = '\x01';
        return;
      }
      return;
    }
  }
  iVar1 = movie_projecterTakeFilm__Fv();
  iVar1 = GetItemNameFromPlayFilmNo__Fi(iVar1);
  ItemGet__FiUc(iVar1,'\x01');
  movie_room_menu_ctrl.step = '\x02';
  return;
}

void MovieRoomMenuEnd() {
	int i;
	
  void **tex_addr;
  int iVar1;
  
  iVar1 = 0;
  if (movie_room_menu_ctrl.have_num != '\0') {
    tex_addr = &disp_film_reel[0].data_addr;
    do {
      LiberateMovieRoomMenuTexMem__FPPv(tex_addr);
      iVar1 = iVar1 + 1;
      tex_addr = tex_addr + 3;
    } while (iVar1 < (int)(uint)movie_room_menu_ctrl.have_num);
  }
  return;
}

static void LiberateMovieRoomMenuTexMem(void **tex_addr) {
  if (*tex_addr != (void *)0x0) {
    ol_loadFreeHeap__FPv(*tex_addr);
    *tex_addr = (void *)0x0;
  }
  return;
}

static void MovieRoomMenuDispInit() {
  movie_room_menu_disp.move_anim_step = '\x02';
  movie_room_menu_disp.move_rot = '\0';
  movie_room_menu_disp.anim_step = '\0';
  movie_room_menu_disp.anim_timer = '\0';
  movie_room_menu_disp.cursor_timer = '\0';
  movie_room_menu_disp.move_anim_timer = 0;
  return;
}

void MovieRoomMenuDisp() {
  if ((movie_room_menu_ctrl.step == '\x01') && (movie_room_menu_disp.anim_step != '\x04')) {
    (*(code *)movie_room_menu_disp_func[movie_room_menu_ctrl.mode])(0,0,0x80);
  }
  return;
}

static void MovieRoomMenuStartMsgDisp(int off_x, int off_y, u_char alpha) {
	DISP_STR msg_data;
	MSG_WIN_DAT msg_win;
	
  DISP_STR msg_data;
  MSG_WIN_DAT msg_win;
  
  SetMsgDefData__FP8DISP_STRi(&msg_data,0xc);
  SetMsgWinDefData__FP11MSG_WIN_DATi(&msg_win,0xc);
  DrawCmnWindow__FUiffffUcUc(0,msg_win.x,msg_win.y,msg_win.w,msg_win.h,alpha,'f');
  PrintMsg__Fiiiiiii(0xc,1,msg_data.pos_x,msg_data.pos_y,1,(uint)alpha,0);
  return;
}

static void MovieRoomMenuFilmSelDisp(int off_x, int off_y, u_char alpha) {
	DISP_STR msg_data;
	MSG_WIN_DAT msg_win;
	
  DISP_STR msg_data;
  MSG_WIN_DAT msg_win;
  
  SetMsgDefData__FP8DISP_STRi(&msg_data,0xc);
  SetMsgWinDefData__FP11MSG_WIN_DATi(&msg_win,0xc);
  DrawCmnWindow__FUiffffUcUc(0,176.0,45.0,DAT_003ee600,262.0,alpha,'l');
  MovieRoomMenuFilmReelDisp__FiiUc(off_x,off_y,alpha);
  MovieRoomMenuCursorDisp__FiiUc(off_x,off_y,alpha);
  MovieRoomMenuFilmReelNameDisp__Fiiii
            (off_x,off_y,(uint)alpha,disp_film_reel[movie_room_menu_ctrl.cursor].item_label);
  DrawCmnWindow__FUiffffUcUc(0,msg_win.x,msg_win.y,msg_win.w,msg_win.h,alpha,'f');
  PrintMsg__Fiiiiiii(0xc,4,msg_data.pos_x,msg_data.pos_y,1,(uint)alpha,0);
  return;
}

static void MovieRoomMenuFilmPlayConfDisp(int off_x, int off_y, u_char alpha) {
	DISP_STR msg_data;
	MSG_WIN_DAT msg_win;
	
  DISP_STR msg_data;
  MSG_WIN_DAT msg_win;
  
  SetMsgDefData__FP8DISP_STRi(&msg_data,0xc);
  SetMsgWinDefData__FP11MSG_WIN_DATi(&msg_win,0xc);
  DrawCmnWindow__FUiffffUcUc(0,176.0,45.0,DAT_003ee604,262.0,alpha,'l');
  MovieRoomMenuFilmReelDisp__FiiUc(off_x,off_y,alpha);
  MovieRoomMenuFilmReelNameDisp__Fiiii
            (off_x,off_y,(uint)alpha,disp_film_reel[movie_room_menu_ctrl.cursor].item_label);
  DrawCmnWindow__FUiffffUcUc(0,msg_win.x,msg_win.y,msg_win.w,msg_win.h,alpha,'f');
  PrintMsg__Fiiiiiii(0xc,2,msg_data.pos_x,msg_data.pos_y,1,(uint)alpha,0);
  DrawCmnSelCsr__FUiffUcfUc
            (0,(float)((uint)movie_room_menu_ctrl.conf_csr * 0xcf + off_x + 0x9b),
             (float)(off_y + 0x183),alpha,0.0,'\0');
  DrawCmnSelYes__FUiffUc(0,(float)(off_x + 0x99),(float)(off_y + 0x185),alpha);
  DrawCmnSelNo__FUiffUc(0,(float)(off_x + 0x169),(float)(off_y + 0x185),alpha);
  return;
}

static void MovieRoomMenuExitConfDisp(int off_x, int off_y, u_char alpha) {
	DISP_STR msg_data;
	MSG_WIN_DAT msg_win;
	
  DISP_STR msg_data;
  MSG_WIN_DAT msg_win;
  
  SetMsgDefData__FP8DISP_STRi(&msg_data,0xc);
  SetMsgWinDefData__FP11MSG_WIN_DATi(&msg_win,0xc);
  DrawCmnWindow__FUiffffUcUc(0,176.0,45.0,DAT_003ee608,262.0,alpha,'l');
  MovieRoomMenuFilmReelDisp__FiiUc(off_x,off_y,alpha);
  MovieRoomMenuFilmReelNameDisp__Fiiii
            (off_x,off_y,(uint)alpha,disp_film_reel[movie_room_menu_ctrl.cursor].item_label);
  DrawCmnWindow__FUiffffUcUc(0,msg_win.x,msg_win.y,msg_win.w,msg_win.h,alpha,'f');
  PrintMsg__Fiiiiiii(0xc,3,msg_data.pos_x,msg_data.pos_y,1,(uint)alpha,0);
  DrawCmnSelCsr__FUiffUcfUc
            (0,(float)((uint)movie_room_menu_ctrl.conf_csr * 0xcf + off_x + 0x9b),
             (float)(off_y + 0x183),alpha,0.0,'\0');
  DrawCmnSelYes__FUiffUc(0,(float)(off_x + 0x99),(float)(off_y + 0x185),alpha);
  DrawCmnSelNo__FUiffUc(0,(float)(off_x + 0x169),(float)(off_y + 0x185),alpha);
  return;
}

static void MovieRoomMenuNoHaveFilmDisp(int off_x, int off_y, u_char alpha) {
	DISP_STR msg_data;
	MSG_WIN_DAT msg_win;
	
  DISP_STR msg_data;
  MSG_WIN_DAT msg_win;
  
  SetMsgDefData__FP8DISP_STRi(&msg_data,0xc);
  SetMsgWinDefData__FP11MSG_WIN_DATi(&msg_win,0xc);
  DrawCmnWindow__FUiffffUcUc(0,msg_win.x,msg_win.y,msg_win.w,msg_win.h,alpha,'f');
  PrintMsg__Fiiiiiii(0xc,0,msg_data.pos_x,msg_data.pos_y,1,(uint)alpha,0);
  return;
}

static void MovieRoomMenuFilmSetDisp(int off_x, int off_y, u_char alpha) {
	DISP_STR msg_data;
	MSG_WIN_DAT msg_win;
	int x;
	int y;
	static int msg_lbl[2] = {
		/* [0] = */ 7,
		/* [1] = */ 8
	};
	int i;
	int x;
	int y;
	static int msg_lbl[3] = {
		/* [0] = */ 6,
		/* [1] = */ 7,
		/* [2] = */ 8
	};
	int i;
	
  int iVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  DISP_STR msg_data;
  MSG_WIN_DAT msg_win;
  
  SetMsgDefData__FP8DISP_STRi(&msg_data,0xc);
  SetMsgWinDefData__FP11MSG_WIN_DATi(&msg_win,0xc);
  DrawCmnWindow__FUiffffUcUc(0,msg_win.x,msg_win.y,msg_win.w,msg_win.h,0x80,'f');
  PrintMsg__Fiiiiiii(0xc,0xc,msg_data.pos_x,msg_data.pos_y,1,0x80,0);
  if (movie_room_menu_ctrl.have_num == '\0') {
    piVar3 = &msg_lbl_1048;
    iVar1 = off_x + 0x9b;
    uVar2 = 0;
    piVar4 = piVar3;
    do {
      if (uVar2 == movie_room_menu_ctrl.conf_csr) {
        DrawSelItemMsg__Fiiiiiiii(0xc,*piVar3,iVar1,off_y + 0x185,(uint)alpha,1,1,0);
      }
      else {
        DrawSelItemMsg__Fiiiiiiii(0xc,*piVar4,iVar1,off_y + 0x185,(uint)alpha,0,1,0);
      }
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 0xcf;
      piVar4 = piVar4 + 1;
      piVar3 = piVar3 + 1;
    } while ((int)uVar2 < 2);
  }
  else {
    iVar1 = off_x + 0x8c;
    piVar4 = &msg_lbl_1049;
    uVar2 = 0;
    do {
      if (uVar2 == movie_room_menu_ctrl.conf_csr) {
        DrawSelItemMsg__Fiiiiiiii(0xc,*piVar4,iVar1,off_y + 0x185,(uint)alpha,1,1,0);
      }
      else {
        DrawSelItemMsg__Fiiiiiiii(0xc,*piVar4,iVar1,off_y + 0x185,(uint)alpha,0,1,0);
      }
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 0xaa;
      piVar4 = piVar4 + 1;
    } while ((int)uVar2 < 3);
  }
  return;
}

static void MovieRoomMenuFilmReelDisp(int off_x, int off_y, u_char alpha) {
	DISP_SPRT win_ds;
	long int scissor_backup;
	float anim_off_x;
	u_char film_alpha;
	u_char next_alpha;
	SPRT_DAT film_reel_base;
	static ALPHA_ANIM_TBL move_alpha_tbl1[5] = {
		/* [0] = */ {
			/* .start_alpha = */ 0,
			/* .end_alpha = */ 6,
			/* .start_time = */ 0,
			/* .end_time = */ 2
		},
		/* [1] = */ {
			/* .start_alpha = */ 6,
			/* .end_alpha = */ 25,
			/* .start_time = */ 2,
			/* .end_time = */ 4
		},
		/* [2] = */ {
			/* .start_alpha = */ 25,
			/* .end_alpha = */ 64,
			/* .start_time = */ 4,
			/* .end_time = */ 6
		},
		/* [3] = */ {
			/* .start_alpha = */ 64,
			/* .end_alpha = */ 128,
			/* .start_time = */ 6,
			/* .end_time = */ 8
		},
		/* [4] = */ {
			/* .start_alpha = */ -1,
			/* .end_alpha = */ -1,
			/* .start_time = */ -1,
			/* .end_time = */ -1
		}
	};
	static ALPHA_ANIM_TBL move_alpha_tbl2[5] = {
		/* [0] = */ {
			/* .start_alpha = */ 128,
			/* .end_alpha = */ 64,
			/* .start_time = */ 0,
			/* .end_time = */ 2
		},
		/* [1] = */ {
			/* .start_alpha = */ 64,
			/* .end_alpha = */ 25,
			/* .start_time = */ 2,
			/* .end_time = */ 4
		},
		/* [2] = */ {
			/* .start_alpha = */ 25,
			/* .end_alpha = */ 6,
			/* .start_time = */ 4,
			/* .end_time = */ 6
		},
		/* [3] = */ {
			/* .start_alpha = */ 6,
			/* .end_alpha = */ 0,
			/* .start_time = */ 6,
			/* .end_time = */ 8
		},
		/* [4] = */ {
			/* .start_alpha = */ -1,
			/* .end_alpha = */ -1,
			/* .start_time = */ -1,
			/* .end_time = */ -1
		}
	};
	
  uchar uVar1;
  uchar uVar2;
  long scissor;
  float fVar3;
  DISP_SPRT win_ds;
  float anim_off_x;
  SPRT_DAT film_reel_base;
  long scissor_backup;
  
  film_reel_base._8_8_ = DAT_003c1828;
  film_reel_base.tex0 = DAT_003c1820;
  film_reel_base._16_8_ = DAT_003c1830;
  film_reel_base._24_8_ = DAT_003c1838;
  anim_off_x = 0.0;
  scissor = GET_SCISSOR_REGISTER__Fi(0);
  SetScissorRegister__Fil(0,0x126003a01c500c0);
  if ((byte)movie_room_menu_disp.move_anim_step < 2) {
    MovieRoomMenuFilmMoveAnim__FPcPsPf
              (&movie_room_menu_disp.move_anim_step,&movie_room_menu_disp.move_anim_timer,
               &anim_off_x);
    uVar1 = Anim2D_CalcNowAlpha__FPC14ALPHA_ANIM_TBLi
                      ((ALPHA_ANIM_TBL *)move_alpha_tbl1_1053,
                       (int)(short)movie_room_menu_disp.move_anim_timer);
    uVar2 = Anim2D_CalcNowAlpha__FPC14ALPHA_ANIM_TBLi
                      ((ALPHA_ANIM_TBL *)move_alpha_tbl2_1054,
                       (int)(short)movie_room_menu_disp.move_anim_timer);
    win_ds.alpha = uVar2;
    if (movie_room_menu_disp.move_rot == '\0') {
      fVar3 = (float)off_y;
      MenuTim2SendVram__FPUiii
                ((uint *)disp_film_reel[movie_room_menu_ctrl.cursor].data_addr,0x2bc0,12000);
      CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&win_ds,&film_reel_base);
      win_ds.y = win_ds.y + fVar3;
      win_ds.tex0 = 0x2005dc066932abc0;
      win_ds.x = (win_ds.x + (float)off_x) - anim_off_x;
      DispSprD__FP9DISP_SPRT(&win_ds);
      MenuTim2SendVram__FPUiii
                ((uint *)disp_film_reel[movie_room_menu_ctrl.next_cursor].data_addr,0x2bc0,12000);
      CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&win_ds,&film_reel_base);
      win_ds.tex0 = 0x2005dc066932abc0;
      win_ds.y = win_ds.y + fVar3;
      win_ds.x = win_ds.x + (float)off_x + (DAT_003ee60c - anim_off_x);
      win_ds.alpha = uVar1;
      DispSprD__FP9DISP_SPRT(&win_ds);
    }
    else {
      fVar3 = (float)off_y;
      MenuTim2SendVram__FPUiii
                ((uint *)disp_film_reel[movie_room_menu_ctrl.cursor].data_addr,0x2bc0,12000);
      CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&win_ds,&film_reel_base);
      win_ds.y = win_ds.y + fVar3;
      win_ds.tex0 = 0x2005dc066932abc0;
      win_ds.x = win_ds.x + (float)off_x + anim_off_x;
      DispSprD__FP9DISP_SPRT(&win_ds);
      MenuTim2SendVram__FPUiii
                ((uint *)disp_film_reel[movie_room_menu_ctrl.next_cursor].data_addr,0x2bc0,12000);
      CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&win_ds,&film_reel_base);
      win_ds.y = win_ds.y + fVar3;
      win_ds.tex0 = 0x2005dc066932abc0;
      win_ds.x = ((win_ds.x + (float)off_x) - DAT_003ee610) + anim_off_x;
      win_ds.alpha = uVar1;
      DispSprD__FP9DISP_SPRT(&win_ds);
    }
  }
  if (movie_room_menu_disp.move_anim_step == '\x02') {
    MenuTim2SendVram__FPUiii
              ((uint *)disp_film_reel[movie_room_menu_ctrl.cursor].data_addr,0x2bc0,12000);
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&win_ds,&film_reel_base);
    win_ds.x = win_ds.x + (float)off_x;
    win_ds.y = win_ds.y + (float)off_y;
    win_ds.tex0 = 0x2005dc066932abc0;
    win_ds.alpha = (uchar)((int)((uint)win_ds.alpha * (uint)alpha) >> 7);
    DispSprD__FP9DISP_SPRT(&win_ds);
  }
  SetScissorRegister__Fil(0,scissor);
  return;
}

static void MovieRoomMenuFilmMoveAnim(char *anim_step, short int *anim_timer, float *pos) {
	static char __FUNCTION__[26] = {
		/* [0] = */ 77,
		/* [1] = */ 111,
		/* [2] = */ 118,
		/* [3] = */ 105,
		/* [4] = */ 101,
		/* [5] = */ 82,
		/* [6] = */ 111,
		/* [7] = */ 111,
		/* [8] = */ 109,
		/* [9] = */ 77,
		/* [10] = */ 101,
		/* [11] = */ 110,
		/* [12] = */ 117,
		/* [13] = */ 70,
		/* [14] = */ 105,
		/* [15] = */ 108,
		/* [16] = */ 109,
		/* [17] = */ 77,
		/* [18] = */ 111,
		/* [19] = */ 118,
		/* [20] = */ 101,
		/* [21] = */ 65,
		/* [22] = */ 110,
		/* [23] = */ 105,
		/* [24] = */ 109,
		/* [25] = */ 0
	};
	static POS_ANIM_TBL move_pos_tbl[2] = {
		/* [0] = */ {
			/* .start_pos = */ 0.f,
			/* .end_pos = */ 269.f,
			/* .start_time = */ 0,
			/* .end_time = */ 8,
			/* .anim_label = */ 0
		},
		/* [1] = */ {
			/* .start_pos = */ -1.f,
			/* .end_pos = */ -1.f,
			/* .start_time = */ -1,
			/* .end_time = */ -1,
			/* .anim_label = */ 0
		}
	};
	
  char cVar1;
  float fVar2;
  
  if ((short)*anim_timer < 0) {
    printf("<<<<<<<<<WARNING FILE[%s] LINE[%d]>>>>>>>>>>\n");
    PrintWarningReal("Warning!! %s");
    *anim_timer = 0;
  }
  cVar1 = *anim_step;
  if (-1 < cVar1) {
    if (cVar1 < '\x02') {
      fVar2 = Anim2D_CalcNowPos__FPC12POS_ANIM_TBLi
                        ((POS_ANIM_TBL *)move_pos_tbl_1058,(int)(short)*anim_timer);
      *pos = fVar2;
    }
    else if (cVar1 == '\x02') {
      *pos = 0.0;
    }
  }
  return;
}

static void MovieRoomMenuCursorDisp(int off_x, int off_y, u_char alpha) {
	u_char rgb;
	
  float fVar1;
  uchar rgb;
  
  fVar1 = (float)off_x;
  rgb = '\0';
  Zero2Anim2D_CsrAnimCtrl__FPcPUc(&movie_room_menu_disp.cursor_timer,&rgb);
  DrawCmnTriCsrL__FUiffUcUc(0,fVar1 + 209.0,(float)off_y + 172.0,alpha,rgb);
  DrawCmnTriCsrR__FUiffUcUc(0,fVar1 + 422.0,(float)off_y + 172.0,alpha,rgb);
  return;
}

static void MovieRoomMenuFilmReelNameDisp(int off_x, int off_y, int alpha, int item_label) {
  DrawCmnTwoLineWindow__FUiffffUcUc(0,174.0,DAT_003ee614,DAT_003ee618,60.0,(uchar)alpha,0x80);
  PrintMsg_Arrange__Fiiiiiiiiii(0x2c,item_label,0x140,0x130,1,alpha,0,0,0,2);
  return;
}
