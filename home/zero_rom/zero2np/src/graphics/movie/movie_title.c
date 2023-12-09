// STATUS: NOT STARTED

#include "movie_title.h"

typedef struct {
	int scene_no;
} MOVIE_TITLE_CTRL;

static MOVIE_TITLE_CTRL movie_title_ctrl;

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3c1928;
	
  g3ddbgAssert__FbPCce(false,str_849);
  return;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_void__003f3460,_max,v);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_char__003f3468,_max,v);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi("unsigned int*",_max,v);
  }
  return (uint **)0x0;
}

void MovieTitleInit(int scene_no) {
	static char __FUNCTION__[15] = {
		/* [0] = */ 77,
		/* [1] = */ 111,
		/* [2] = */ 118,
		/* [3] = */ 105,
		/* [4] = */ 101,
		/* [5] = */ 84,
		/* [6] = */ 105,
		/* [7] = */ 116,
		/* [8] = */ 108,
		/* [9] = */ 101,
		/* [10] = */ 73,
		/* [11] = */ 110,
		/* [12] = */ 105,
		/* [13] = */ 116,
		/* [14] = */ 0
	};
	
  if (0x46 < scene_no) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! MovieTitleInit scene_no %d");
  }
  movie_title_ctrl.scene_no = scene_no;
  return;
}

void MovieTitleMain(int movie_timer) {
	static char __FUNCTION__[15] = {
		/* [0] = */ 77,
		/* [1] = */ 111,
		/* [2] = */ 118,
		/* [3] = */ 105,
		/* [4] = */ 101,
		/* [5] = */ 84,
		/* [6] = */ 105,
		/* [7] = */ 116,
		/* [8] = */ 108,
		/* [9] = */ 101,
		/* [10] = */ 77,
		/* [11] = */ 97,
		/* [12] = */ 105,
		/* [13] = */ 110,
		/* [14] = */ 0
	};
	MOVIE_TITLE_DAT *data;
	int tbl_pos;
	
  MOVIE_TITLE_DAT *data;
  int iVar1;
  int msg_id;
  
  data = GetMovieTitleDat__Fi(movie_title_ctrl.scene_no);
  iVar1 = GetMovieTitleDatTblPos__FP15MOVIE_TITLE_DATi(data,movie_timer);
  if (iVar1 != -1) {
    msg_id = data[iVar1].msg_id;
    if (0x22d < msg_id) {
      SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
      PrintAssertReal("Error! MovieTitleMain scene_no %d msg_id %d");
      msg_id = data[iVar1].msg_id;
    }
    MovieTitleDispMain__Fiiiic(0x4d,msg_id,0x17c,0xc,'\x01');
  }
  return;
}

static MOVIE_TITLE_DAT* GetMovieTitleDat(int scene_no) {
  return movie_title_dat[scene_no];
}

int GetMovieTitleDatTblPos(MOVIE_TITLE_DAT *data, int timer) {
	int tbl_pos;
	int i;
	
  int iVar1;
  int iVar2;
  
  iVar1 = data->msg_id;
  iVar2 = 0;
  do {
    if (iVar1 == -1) {
      return -1;
    }
    iVar1 = GetPALMode__Fv();
    if (iVar1 == 0) {
      if (data->start_frame <= timer) {
        iVar1 = data->end_frame;
        goto joined_r0x00221b14;
      }
    }
    else if ((data->start_frame * 5) / 6 <= timer) {
      iVar1 = (data->end_frame * 5) / 6;
joined_r0x00221b14:
      if (timer < iVar1) {
        return iVar2;
      }
    }
    data = data + 1;
    iVar1 = data->msg_id;
    iVar2 = iVar2 + 1;
  } while( true );
}

void MovieTitleDispMain(int msg_type, int msg_id, int y, int msg_col, char base_disp_flg) {
	int i;
	u_char disp_flg;
	float msg_x;
	float msg_length;
	float base_x;
	float base_length;
	unsigned char *p_next_line_adrs;
	unsigned char *p_now_line_adrs;
	
  bool bVar1;
  uchar *msg_addr;
  int iVar2;
  int iVar3;
  float x;
  float w;
  float fVar4;
  uchar *p_next_line_adrs;
  
  msg_addr = GetMsgDataAddr__Fii(msg_type,msg_id);
  bVar1 = false;
  if (opt_wrk.credits == '\x01') {
LAB_00221bf4:
    bVar1 = true;
  }
  else {
    iVar3 = 0;
    iVar2 = every_disp_subtitles[0];
    while (iVar2 != -1) {
      if (iVar2 == msg_id) goto LAB_00221bf4;
      iVar3 = iVar3 + 1;
      iVar2 = every_disp_subtitles[iVar3];
    }
  }
  if (bVar1) {
    fVar4 = 320.0;
    do {
      iVar2 = GetMsgLineLength__FPUcPPUc(msg_addr,&p_next_line_adrs);
      w = (float)iVar2 +
          (float)((uint)(ushort)movie_title_base_tex[0].w + (uint)(ushort)movie_title_base_tex[2].w)
      ;
      x = (fVar4 - (float)iVar2 * 0.5) - (float)(uint)(ushort)movie_title_base_tex[0].w;
      if (w < 204.0) {
        x = 218.0;
        w = 204.0;
      }
      if (base_disp_flg == '\x01') {
        MovieTitleBaseDisp__FfffUcUi(x,(float)(y + -2),w,0x80,0);
      }
      PrintMsg_ArrangeOneLine__FPUciiiiiiii(msg_addr,0x140,y,msg_col,0x80,0,0,0,2);
      y = y + (uint)(ushort)movie_title_base_tex[0].h;
      msg_addr = p_next_line_adrs;
    } while (p_next_line_adrs != (uchar *)0x0);
  }
  return;
}

void MovieTitleBaseDisp(float x, float y, float w, u_char alp, u_int pri) {
	DISP_SPRT ds;
	float line_w;
	float line_scr;
	
  uint uVar1;
  float fVar2;
  float fVar3;
  DISP_SPRT ds;
  
  fVar3 = 204.0;
  if (204.0 <= w) {
    fVar3 = w;
  }
  fVar2 = (float)(uint)(ushort)movie_title_base_tex[1].w;
  fVar3 = fVar3 - (float)((uint)(ushort)movie_title_base_tex[0].w +
                         (uint)(ushort)movie_title_base_tex[2].w);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ds,movie_title_base_tex);
  uVar1 = 0xfffff - (pri & 0xfffff);
  fVar2 = fVar3 / fVar2;
  fVar3 = x + fVar3;
  ds.alpha = (uchar)((int)((uint)ds.alpha * (uint)alp) >> 7);
  ds.x = x;
  ds.y = y;
  ds.z = uVar1;
  ds.pri = pri;
  DispSprD__FP9DISP_SPRT(&ds);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ds,movie_title_base_tex + 2);
  ds.x = fVar3 + (float)(uint)(ushort)movie_title_base_tex[0].w;
  ds.alpha = (uchar)((int)((uint)ds.alpha * (uint)alp) >> 7);
  ds.y = y;
  ds.z = uVar1;
  ds.pri = pri;
  DispSprD__FP9DISP_SPRT(&ds);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ds,movie_title_base_tex + 1);
  ds.csx = x + (float)(uint)(ushort)movie_title_base_tex[0].w;
  ds.sch = 1.0;
  ds.alpha = (uchar)((int)((uint)ds.alpha * (uint)alp) >> 7);
  ds.csy = y;
  ds.x = ds.csx;
  ds.y = y;
  ds.z = uVar1;
  ds.scw = fVar2;
  ds.pri = pri;
  DispSprD__FP9DISP_SPRT(&ds);
  return;
}

void MovieTitleEnd() {
  return;
}
