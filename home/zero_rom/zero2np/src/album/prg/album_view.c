// STATUS: NOT STARTED

#include "album_view.h"

typedef struct {
	char step;
	char album_type;
	char photo_no_csr;
	char disp_photo_num;
	char photo_flg;
} ALBUM_VIEW_CTRL;

typedef struct {
	char anim_step;
	char anim_timer;
	char csr_anim_timer;
} ALBUM_VIEW_DISP;

struct fixed_array_base<char,16,char[16]> {
protected:
	char m_aData[16];
	
public:
	fixed_array_base<char,16,char[16]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	char& operator[]();
	char& operator[]();
	char* data();
	char* begin();
	char* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<char,16> : fixed_array_base<char,16,char[16]> {
};

static void *album_view_tex_addr = NULL;
static fixed_array<char,16> disp_photo_no;
static reference_fixed_array<int,7> album_view_tex_tbl;
unsigned char ALBUM_INFO type_info node[8];
unsigned char PICTURE_WRK type_info node[8];
unsigned char _PICTURE_SUBJECT type_info node[8];
static ALBUM_VIEW_CTRL album_view_ctrl;
static ALBUM_VIEW_DISP album_view_disp;

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3a1288;
	
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf16_PICTURE_SUBJECT(0x3ef470,_max);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf16_PICTURE_SUBJECT(0x3ef478,_max);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf16_PICTURE_SUBJECT(0x3a12d0,_max);
  }
  return (uint **)0x0;
}

void AlbumViewCtrlInit() {
  int iVar1;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  album_view_ctrl.step = '\0';
  iVar1 = GetCurrentAlbum__Fv();
  _fixed_array_verifyrange__H1Z10ALBUM_INFO_UiUi_PX01(iVar1,2);
                    /* end of inlined section */
  album_view_ctrl.photo_flg = '\0';
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  album_view_ctrl.photo_no_csr = '\0';
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  album_view_ctrl.disp_photo_num = '\0';
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  album_view_ctrl.album_type = *(char *)&album_info.field0_0x0.m_aData[iVar1].album_type;
                    /* end of inlined section */
  SetAlbumViewDispPhotoNo__Fv();
  return;
}

void AlbumViewBackGroundLoadReq(int album_type) {
  uchar uVar1;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  uVar1 = GetLanguage__Fv();
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Zi_UiUi_PX01(album_type,7);
  GetAlbumTexMem__FPPvi
            (&album_view_tex_addr,
             *(int *)((int)album_view_tex_tbl.field0_0x0.m_aData + album_type * 4) +
             (int)(char)uVar1);
                    /* end of inlined section */
  uVar1 = GetLanguage__Fv();
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Zi_UiUi_PX01(album_type,7);
  FileLoadReqEE(*(int *)((int)album_view_tex_tbl.field0_0x0.m_aData + album_type * 4) +
                (int)(char)uVar1,album_view_tex_addr,6,(undefined1 *)0x0,(void *)0x0);
  return;
}

static int AlbumViewTexLoadWait() {
  uchar uVar1;
  int iVar2;
  
  uVar1 = GetLanguage__Fv();
  iVar2 = (int)album_view_ctrl.album_type;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Zi_UiUi_PX01(album_view_ctrl.album_type,7);
  iVar2 = FileLoadIsEnd2(*(int *)((int)album_view_tex_tbl.field0_0x0.m_aData + iVar2 * 4) +
                         (int)(char)uVar1,album_view_tex_addr);
                    /* end of inlined section */
  return (int)(iVar2 != 0);
}

static void SetAlbumViewDispPhotoNo() {
	int i;
	int current_album;
	char photo_no;
	
  int iVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = 0;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zc_UiUi_PX01(iVar5,0x10);
    pcVar2 = disp_photo_no.field0_0x0.m_aData + iVar5;
                    /* end of inlined section */
    iVar5 = iVar5 + 1;
                    /* end of inlined section */
    *pcVar2 = -1;
  } while (iVar5 < 0x10);
  iVar6 = 0xf;
  iVar5 = GetCurrentAlbum__Fv();
  iVar1 = GetAlbumPhotoNo__Fv();
  iVar1 = (int)(char)iVar1;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z10ALBUM_INFO_UiUi_PX01(iVar5,2);
    _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(iVar1,0x10);
    if ((*(byte *)((int)(album_info.field0_0x0.m_aData[iVar5].album_info.pic.field0_0x0.m_aData +
                        iVar1) + 2) & 1) != 0) {
      iVar4 = (int)album_view_ctrl.disp_photo_num;
      _fixed_array_verifyrange__H1Zc_UiUi_PX01(album_view_ctrl.disp_photo_num,0x10);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      disp_photo_no.field0_0x0.m_aData[iVar4] = (char)iVar1;
                    /* end of inlined section */
      album_view_ctrl.disp_photo_num = album_view_ctrl.disp_photo_num + '\x01';
    }
    iVar3 = iVar1 + 1;
    iVar4 = iVar3;
    if (iVar3 < 0) {
      iVar4 = iVar1 + 0x10;
    }
    iVar6 = iVar6 + -1;
    iVar1 = (iVar3 + (iVar4 >> 4) * -0x10) * 0x1000000 >> 0x18;
  } while (-1 < iVar6);
  return;
}

int AlbumViewMain() {
	static char __FUNCTION__[14] = {
		/* [0] = */ 65,
		/* [1] = */ 108,
		/* [2] = */ 98,
		/* [3] = */ 117,
		/* [4] = */ 109,
		/* [5] = */ 86,
		/* [6] = */ 105,
		/* [7] = */ 101,
		/* [8] = */ 119,
		/* [9] = */ 77,
		/* [10] = */ 97,
		/* [11] = */ 105,
		/* [12] = */ 110,
		/* [13] = */ 0
	};
	int res;
	
  char cVar1;
  int iVar2;
  
  if (album_view_ctrl.step == '\x01') {
    iVar2 = AlbumViewTexLoadWait__Fv();
    if (iVar2 != 0) {
      album_view_ctrl.step = '\x02';
    }
  }
  else {
    if (album_view_ctrl.step < '\x02') {
      if (album_view_ctrl.step == '\0') {
        AlbumViewDispInit__Fv();
        album_view_ctrl.step = '\x01';
        return 0;
      }
    }
    else {
      if (album_view_ctrl.step == '\x02') {
        AlbumViewTopPad__Fv();
        return 0;
      }
      if (album_view_ctrl.step == '\x03') {
        if (album_view_disp.anim_step == '\x04') {
          LiberateAlbumViewTex__Fv();
          cVar1 = album_view_ctrl.photo_no_csr;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
          _fixed_array_verifyrange__H1Zc_UiUi_PX01(album_view_ctrl.photo_no_csr,0x10);
          SetAlbumPhotoNo__Fc(disp_photo_no.field0_0x0.m_aData[cVar1]);
          return 1;
                    /* end of inlined section */
        }
        return 0;
      }
    }
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! %s");
  }
  return 0;
}

static void AlbumViewTopPad() {
	int current_album;
	
  int iVar1;
  int iVar2;
  
  iVar1 = GetCurrentAlbum__Fv();
  if (((pad[0].rpt & 0x8000U) == 0) && (iVar2 = GetPadAnalogRpt__Fi(2), iVar2 == 0)) {
    if (((pad[0].rpt & 0x2000U) == 0) && (iVar2 = GetPadAnalogRpt__Fi(3), iVar2 == 0)) {
      if (*paddat[1] == 1) {
        SystemBankPlay__FiiiiP11_SND_3D_SETii(1,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
        AlbumViewMoveEditReq__Fv();
      }
    }
    else {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z10ALBUM_INFO_UiUi_PX01(iVar1,2);
      if (1 < album_info.field0_0x0.m_aData[iVar1].album_info.pic_num) {
                    /* end of inlined section */
        SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
        if (album_view_ctrl.disp_photo_num == '\0') {
          trap(7);
        }
        album_view_ctrl.photo_flg = '\0';
        album_view_ctrl.photo_no_csr =
             (char)((album_view_ctrl.photo_no_csr + 1) % (int)album_view_ctrl.disp_photo_num);
      }
    }
  }
  else {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z10ALBUM_INFO_UiUi_PX01(iVar1,2);
    if (1 < album_info.field0_0x0.m_aData[iVar1].album_info.pic_num) {
                    /* end of inlined section */
      SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      if (album_view_ctrl.disp_photo_num == '\0') {
        trap(7);
      }
      album_view_ctrl.photo_flg = '\0';
      album_view_ctrl.photo_no_csr =
           (char)(((int)album_view_ctrl.photo_no_csr + (int)album_view_ctrl.disp_photo_num + -1) %
                 (int)album_view_ctrl.disp_photo_num);
    }
  }
  return;
}

static void AlbumViewMoveEditReq() {
  album_view_disp.anim_step = '\x03';
  album_view_disp.anim_timer = '\0';
  album_view_ctrl.step = '\x03';
  return;
}

void LiberateAlbumViewTex() {
  LiberateAlbumTexMem__FPPv(&album_view_tex_addr);
  return;
}

void AlbumViewTexLoadCancel() {
  uchar uVar1;
  int iVar2;
  
  uVar1 = GetLanguage__Fv();
  iVar2 = (int)album_view_ctrl.album_type;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Zi_UiUi_PX01(album_view_ctrl.album_type,7);
  AlbumTexLoadCancel__FPvi
            (album_view_tex_addr,
             *(int *)((int)album_view_tex_tbl.field0_0x0.m_aData + iVar2 * 4) + (int)(char)uVar1);
  return;
}

static void AlbumViewDispInit() {
  album_view_disp.csr_anim_timer = '\0';
  album_view_disp.anim_step = '\0';
  album_view_disp.anim_timer = '\0';
  return;
}

void AlbumViewDispMain() {
	u_char alpha;
	int current_album;
	char before_photo_no;
	char after_photo_no;
	void *album_cmn_tex_addr;
	static int num_tex_tbl[7] = {
		/* [0] = */ 49,
		/* [1] = */ 59,
		/* [2] = */ 69,
		/* [3] = */ 79,
		/* [4] = */ 89,
		/* [5] = */ 39,
		/* [6] = */ 99
	};
	
  int iVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  void *tm2_addr;
  int iVar5;
  uchar alpha;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  alpha = 0x80;
  iVar4 = GetCurrentAlbum__Fv();
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  if (album_view_ctrl.disp_photo_num == '\0') {
    trap(7);
  }
  iVar5 = ((int)album_view_ctrl.photo_no_csr + (int)album_view_ctrl.disp_photo_num + -1) %
          (int)album_view_ctrl.disp_photo_num;
  _fixed_array_verifyrange__H1Zc_UiUi_PX01(iVar5,0x10);
  iVar1 = (album_view_ctrl.photo_no_csr + 1) % (int)album_view_ctrl.disp_photo_num;
  if (album_view_ctrl.disp_photo_num == '\0') {
    trap(7);
  }
  cVar2 = disp_photo_no.field0_0x0.m_aData[iVar5];
  _fixed_array_verifyrange__H1Zc_UiUi_PX01(iVar1,0x10);
                    /* end of inlined section */
  cVar3 = disp_photo_no.field0_0x0.m_aData[iVar1];
  tm2_addr = GetAlbumCmnTexAddr__Fv();
  if (((byte)album_view_ctrl.step - 2 < 2) &&
     (AlbumInOutAnimCtrl__FPcT0PUc(&album_view_disp.anim_step,&album_view_disp.anim_timer,&alpha),
     album_view_disp.anim_step != '\x04')) {
    PK2SendVram__FUiiii((uint)tm2_addr,-1,-1,0);
    AlbumViewFrameDisp__FiiUc(0,0,alpha);
    PK2SendVram__FUiiii((uint)album_view_tex_addr,-1,-1,0);
    AlbumViewBaseDisp__FiiiUc((int)album_view_ctrl.album_type,0,0,alpha);
    iVar5 = (int)album_view_ctrl.photo_no_csr;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zc_UiUi_PX01(album_view_ctrl.photo_no_csr,0x10);
    if (disp_photo_no.field0_0x0.m_aData[iVar5] != -1) {
      iVar5 = (int)album_view_ctrl.photo_no_csr;
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Zc_UiUi_PX01(album_view_ctrl.photo_no_csr,0x10);
      AlbumViewPhotoDisp__FiiiiUc(iVar4,(int)disp_photo_no.field0_0x0.m_aData[iVar5],0,0,alpha);
      iVar5 = (int)album_view_ctrl.photo_no_csr;
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Zc_UiUi_PX01(album_view_ctrl.photo_no_csr,0x10);
      AlbumViewPhotoInfoDisp__FiiiiUc(iVar4,(int)disp_photo_no.field0_0x0.m_aData[iVar5],0,0,alpha);
    }
                    /* end of inlined section */
    if ('\x01' < album_view_ctrl.disp_photo_num) {
      AlbumViewLeftThumbnailDisp__FiiiiUc(iVar4,(int)cVar2,0,0,alpha);
      AlbumViewRightThumbnailDisp__FiiiiUc(iVar4,(int)cVar3,0,0,alpha);
    }
    AlbumViewNoDisp__FiiiUc((int)album_view_ctrl.album_type,0,0,alpha);
    AlbumViewAlbumTypeDisp__FiiiUc((int)album_view_ctrl.album_type,0,0,alpha);
    PK2SendVram__FUiiii((uint)tm2_addr,-1,-1,0);
    iVar4 = (int)album_view_ctrl.photo_no_csr;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zc_UiUi_PX01(album_view_ctrl.photo_no_csr,0x10);
    if (disp_photo_no.field0_0x0.m_aData[iVar4] != -1) {
      iVar4 = (int)album_view_ctrl.photo_no_csr;
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Zc_UiUi_PX01(album_view_ctrl.photo_no_csr,0x10);
      DrawCmnNumberTex__FiiP8SPRT_DATiiUciUc
                (disp_photo_no.field0_0x0.m_aData[iVar4] + 1,2,
                 album_tex + *(int *)(num_tex_tbl_1009 + album_view_ctrl.album_type * 4),0x143,0x51,
                 alpha,0,'\0');
    }
                    /* end of inlined section */
    if ('\x01' < album_view_ctrl.disp_photo_num) {
      AlbumViewCsrDisp__FiiUc(0,0,alpha);
      DrawCmnNumberTex__FiiP8SPRT_DATiiUciUc
                (cVar2 + 1,2,album_tex + *(int *)(num_tex_tbl_1009 + album_view_ctrl.album_type * 4)
                 ,0x5e,0xff,alpha,0,'\0');
      DrawCmnNumberTex__FiiP8SPRT_DATiiUciUc
                (cVar3 + 1,2,album_tex + *(int *)(num_tex_tbl_1009 + album_view_ctrl.album_type * 4)
                 ,0x229,0xff,alpha,0,'\0');
    }
    AlbumViewCaptionDisp__FiiUc(0,0,alpha);
  }
  return;
}

static void AlbumViewBaseDisp(int album_type, int off_x, int off_y, u_char alpha) {
	DISP_SPRT base_ds;
	int i;
	static int frame_tex_tbl[7][2] = {
		/* [0] = */ {
			/* [0] = */ 301,
			/* [1] = */ 308
		},
		/* [1] = */ {
			/* [0] = */ 309,
			/* [1] = */ 316
		},
		/* [2] = */ {
			/* [0] = */ 317,
			/* [1] = */ 324
		},
		/* [3] = */ {
			/* [0] = */ 325,
			/* [1] = */ 332
		},
		/* [4] = */ {
			/* [0] = */ 333,
			/* [1] = */ 340
		},
		/* [5] = */ {
			/* [0] = */ 293,
			/* [1] = */ 300
		},
		/* [6] = */ {
			/* [0] = */ 293,
			/* [1] = */ 300
		}
	};
	
  int iVar1;
  int iVar2;
  SPRT_DAT *d;
  float fVar3;
  DISP_SPRT base_ds;
  
  iVar2 = *(int *)(frame_tex_tbl_1013 + album_type * 8);
  iVar1 = *(int *)(frame_tex_tbl_1013 + album_type * 8 + 4);
  if (iVar2 <= iVar1) {
    fVar3 = (float)off_x;
    d = album_tex + iVar2;
    do {
      CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&base_ds,d);
      iVar2 = iVar2 + 1;
      d = d + 1;
      base_ds.x = base_ds.x + fVar3;
      base_ds.y = base_ds.y + (float)off_y;
      base_ds.alpha = (uchar)((int)((uint)base_ds.alpha * (uint)alpha) >> 7);
      DispSprD__FP9DISP_SPRT(&base_ds);
    } while (iVar2 <= iVar1);
  }
  return;
}

static void AlbumViewFrameDisp(int off_x, int off_y, u_char alpha) {
	DISP_SPRT frame_ds;
	int i;
	
  int iVar1;
  SPRT_DAT *d;
  float fVar2;
  DISP_SPRT frame_ds;
  
  fVar2 = (float)off_x;
  iVar1 = 0x1a;
  d = album_tex + 0x10a;
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&frame_ds,d);
    iVar1 = iVar1 + -1;
    d = d + 1;
    frame_ds.x = frame_ds.x + fVar2;
    frame_ds.y = frame_ds.y + (float)off_y;
    frame_ds.alpha = (uchar)((int)((uint)frame_ds.alpha * (uint)alpha) >> 7);
    DispSprD__FP9DISP_SPRT(&frame_ds);
  } while (-1 < iVar1);
  return;
}

static void AlbumViewNoDisp(int album_type, int off_x, int off_y, u_char alpha) {
	static char __FUNCTION__[16] = {
		/* [0] = */ 65,
		/* [1] = */ 108,
		/* [2] = */ 98,
		/* [3] = */ 117,
		/* [4] = */ 109,
		/* [5] = */ 86,
		/* [6] = */ 105,
		/* [7] = */ 101,
		/* [8] = */ 119,
		/* [9] = */ 78,
		/* [10] = */ 111,
		/* [11] = */ 68,
		/* [12] = */ 105,
		/* [13] = */ 115,
		/* [14] = */ 112,
		/* [15] = */ 0
	};
	DISP_SPRT type_ds;
	int i;
	static int type_tex_tbl[7][3] = {
		/* [0] = */ {
			/* [0] = */ 373,
			/* [1] = */ 379,
			/* [2] = */ 385
		},
		/* [1] = */ {
			/* [0] = */ 374,
			/* [1] = */ 380,
			/* [2] = */ 386
		},
		/* [2] = */ {
			/* [0] = */ 375,
			/* [1] = */ 381,
			/* [2] = */ 387
		},
		/* [3] = */ {
			/* [0] = */ 376,
			/* [1] = */ 382,
			/* [2] = */ 388
		},
		/* [4] = */ {
			/* [0] = */ 377,
			/* [1] = */ 383,
			/* [2] = */ 389
		},
		/* [5] = */ {
			/* [0] = */ 372,
			/* [1] = */ 378,
			/* [2] = */ 384
		},
		/* [6] = */ {
			/* [0] = */ 372,
			/* [1] = */ 378,
			/* [2] = */ 384
		}
	};
	
  void *tm2_addr;
  int iVar1;
  int *piVar2;
  int iVar3;
  float fVar4;
  DISP_SPRT type_ds;
  
  if (6 < (uint)album_type) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! %s");
  }
  tm2_addr = GetAlbumEditTexAddr__Fv();
  PK2SendVram__FUiiii((uint)tm2_addr,-1,-1,0);
  iVar3 = 2;
  fVar4 = (float)off_x;
  piVar2 = (int *)(type_tex_tbl_1020 + album_type * 0xc);
  iVar1 = *piVar2;
  while( true ) {
    piVar2 = piVar2 + 1;
    iVar3 = iVar3 + -1;
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&type_ds,album_tex + iVar1);
    type_ds.x = type_ds.x + fVar4;
    type_ds.y = type_ds.y + (float)off_y;
    type_ds.alpha = (uchar)((int)((uint)type_ds.alpha * (uint)alpha) >> 7);
    DispSprD__FP9DISP_SPRT(&type_ds);
    if (iVar3 < 0) break;
    iVar1 = *piVar2;
  }
  return;
}

static void AlbumViewAlbumTypeDisp(int album_type, int off_x, int off_y, u_char alpha) {
	static char __FUNCTION__[23] = {
		/* [0] = */ 65,
		/* [1] = */ 108,
		/* [2] = */ 98,
		/* [3] = */ 117,
		/* [4] = */ 109,
		/* [5] = */ 86,
		/* [6] = */ 105,
		/* [7] = */ 101,
		/* [8] = */ 119,
		/* [9] = */ 65,
		/* [10] = */ 108,
		/* [11] = */ 98,
		/* [12] = */ 117,
		/* [13] = */ 109,
		/* [14] = */ 84,
		/* [15] = */ 121,
		/* [16] = */ 112,
		/* [17] = */ 101,
		/* [18] = */ 68,
		/* [19] = */ 105,
		/* [20] = */ 115,
		/* [21] = */ 112,
		/* [22] = */ 0
	};
	DISP_SPRT type_ds;
	int i;
	static int type_tex_tbl[7][3] = {
		/* [0] = */ {
			/* [0] = */ 364,
			/* [1] = */ 365,
			/* [2] = */ 366
		},
		/* [1] = */ {
			/* [0] = */ 364,
			/* [1] = */ 365,
			/* [2] = */ 367
		},
		/* [2] = */ {
			/* [0] = */ 364,
			/* [1] = */ 365,
			/* [2] = */ 368
		},
		/* [3] = */ {
			/* [0] = */ 364,
			/* [1] = */ 365,
			/* [2] = */ 369
		},
		/* [4] = */ {
			/* [0] = */ 364,
			/* [1] = */ 365,
			/* [2] = */ 370
		},
		/* [5] = */ {
			/* [0] = */ 363,
			/* [1] = */ -1,
			/* [2] = */ -1
		},
		/* [6] = */ {
			/* [0] = */ 371,
			/* [1] = */ -1,
			/* [2] = */ -1
		}
	};
	
  void *tm2_addr;
  int iVar1;
  int *piVar2;
  int iVar3;
  DISP_SPRT type_ds;
  
  if (6 < (uint)album_type) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! %s");
  }
  tm2_addr = GetAlbumEditTexAddr__Fv();
  PK2SendVram__FUiiii((uint)tm2_addr,-1,-1,0);
  iVar3 = 2;
  piVar2 = (int *)(type_tex_tbl_1024 + album_type * 0xc);
  iVar1 = *piVar2;
  while( true ) {
    piVar2 = piVar2 + 1;
    if (iVar1 != -1) {
      CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&type_ds,album_tex + iVar1);
      type_ds.x = type_ds.x + (float)off_x;
      type_ds.y = type_ds.y + (float)off_y;
      type_ds.alpha = (uchar)((int)((uint)type_ds.alpha * (uint)alpha) >> 7);
      DispSprD__FP9DISP_SPRT(&type_ds);
    }
    iVar3 = iVar3 + -1;
    if (iVar3 < 0) break;
    iVar1 = *piVar2;
  }
  return;
}

static void AlbumViewPhotoDisp(int album_data, int photo_no, int off_x, int off_y, u_char alpha) {
	void *album_cmn_tex_addr;
	
  void *tm2_addr;
  void *addr;
  byte *pbVar1;
  int iVar2;
  
  tm2_addr = GetAlbumCmnTexAddr__Fv();
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  if (album_view_ctrl.photo_flg == '\0') {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z10ALBUM_INFO_UiUi_PX01(album_data,2);
    _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(photo_no,0x10);
    pbVar1 = (byte *)(album_data * 0x20c + 0x2d4378 + photo_no * 0x20);
    if ((pbVar1[2] & 1) != 0) {
      _fixed_array_verifyrange__H1Z10ALBUM_INFO_UiUi_PX01(album_data,2);
      _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(photo_no,0x10);
      UncompressPhoto__Fi((uint)*pbVar1);
                    /* end of inlined section */
      album_view_ctrl.photo_flg = '\x01';
    }
  }
  if (album_view_ctrl.photo_flg == '\x01') {
    addr = GetAlbumDataAddr__Fi(album_data);
    DrawPhotoFromWorkAreaAddr__FiiiiiiiUc((int)addr,0,1,0x91,0x6f,0x15a,0xe6,alpha);
    PK2SendVram__FUiiii((uint)tm2_addr,-1,-1,0);
    AlbumViewPhotoFrameDisp__FiiUc(0,0,alpha);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z10ALBUM_INFO_UiUi_PX01(album_data,2);
    if (album_info.field0_0x0.m_aData[album_data].album_type == 5) {
      _fixed_array_verifyrange__H1Z10ALBUM_INFO_UiUi_PX01(album_data,2);
      _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(photo_no,0x10);
      iVar2 = album_data * 0x20c + 0x2d4378 + photo_no * 0x20;
      if ((*(byte *)(iVar2 + 2) & 1) != 0) {
        _fixed_array_verifyrange__H1Z10ALBUM_INFO_UiUi_PX01(album_data,2);
        _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(photo_no,0x10);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        if ((*(byte *)(iVar2 + 2) & 2) != 0) {
                    /* end of inlined section */
          AlbumViewPhotoProtectionFrameDisp__FiiUc(0,0,alpha);
        }
      }
    }
  }
  return;
}

static void AlbumViewPhotoFrameDisp(int off_x, int off_y, u_char alpha) {
	DISP_SPRT frame_ds;
	int i;
	
  uint uVar1;
  SPRT_DAT *d;
  int iVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  DISP_SPRT frame_ds;
  
  fVar6 = (float)off_x;
  fVar7 = (float)off_y;
  iVar2 = 0;
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&frame_ds,album_tex + 0x15b);
    uVar3 = frame_ds.h * iVar2;
    frame_ds.x = frame_ds.x + fVar6;
    if ((int)uVar3 < 0) {
      fVar4 = (float)(uVar3 & 1 | uVar3 >> 1);
      fVar4 = fVar4 + fVar4;
    }
    else {
      fVar4 = (float)uVar3;
    }
    frame_ds.y = frame_ds.y + fVar4 + fVar7;
    frame_ds.alpha = (uchar)((int)((uint)frame_ds.alpha * (uint)alpha) >> 7);
    DispSprD__FP9DISP_SPRT(&frame_ds);
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&frame_ds,album_tex + 0x15c);
    uVar3 = frame_ds.h * iVar2;
    iVar2 = iVar2 + 1;
    frame_ds.x = frame_ds.x + fVar6;
    if ((int)uVar3 < 0) {
      fVar4 = (float)(uVar3 & 1 | uVar3 >> 1);
      fVar4 = fVar4 + fVar4;
    }
    else {
      fVar4 = (float)uVar3;
    }
    frame_ds.y = frame_ds.y + fVar4 + fVar7;
    frame_ds.alpha = (uchar)((int)((uint)frame_ds.alpha * (uint)alpha) >> 7);
    DispSprD__FP9DISP_SPRT(&frame_ds);
  } while (iVar2 < 3);
  iVar2 = 0;
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&frame_ds,album_tex + 0x15d);
    if ((int)frame_ds.h < 0) {
      fVar4 = (float)(frame_ds.h & 1 | frame_ds.h >> 1);
      fVar4 = fVar4 + fVar4;
    }
    else {
      fVar4 = (float)frame_ds.h;
    }
    uVar3 = frame_ds.h * iVar2;
    if ((int)uVar3 < 0) {
      fVar5 = (float)(uVar3 & 1 | uVar3 >> 1);
      fVar5 = fVar5 + fVar5;
    }
    else {
      fVar5 = (float)uVar3;
    }
    frame_ds.cry = frame_ds.y + fVar7;
    frame_ds.rot = 90.0;
    uVar3 = (uint)alpha;
    frame_ds.crx = frame_ds.x + fVar4 + fVar5 + fVar6;
    frame_ds.alpha = (uchar)((int)(frame_ds.alpha * uVar3) >> 7);
    frame_ds.x = frame_ds.crx;
    frame_ds.y = frame_ds.cry;
    DispSprD__FP9DISP_SPRT(&frame_ds);
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&frame_ds,album_tex + 0x15e);
    if ((int)frame_ds.h < 0) {
      fVar4 = (float)(frame_ds.h & 1 | frame_ds.h >> 1);
      fVar4 = fVar4 + fVar4;
    }
    else {
      fVar4 = (float)frame_ds.h;
    }
    uVar1 = frame_ds.h * iVar2;
    if ((int)uVar1 < 0) {
      fVar5 = (float)(uVar1 & 1 | uVar1 >> 1);
      fVar5 = fVar5 + fVar5;
    }
    else {
      fVar5 = (float)uVar1;
    }
    frame_ds.cry = frame_ds.y + fVar7;
    iVar2 = iVar2 + 1;
    frame_ds.rot = 90.0;
    frame_ds.crx = frame_ds.x + fVar4 + fVar5 + fVar6;
    frame_ds.alpha = (uchar)((int)(frame_ds.alpha * uVar3) >> 7);
    frame_ds.x = frame_ds.crx;
    frame_ds.y = frame_ds.cry;
    DispSprD__FP9DISP_SPRT(&frame_ds);
  } while (iVar2 < 8);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&frame_ds,album_tex + 0x15f);
  if ((int)frame_ds.h < 0) {
    fVar4 = (float)(frame_ds.h & 1 | frame_ds.h >> 1);
    fVar4 = fVar4 + fVar4;
  }
  else {
    fVar4 = (float)frame_ds.h;
  }
  frame_ds.rot = 90.0;
  frame_ds.cry = frame_ds.y + fVar7;
  frame_ds.crx = frame_ds.x + fVar4 + fVar6;
  frame_ds.alpha = (uchar)((int)(frame_ds.alpha * uVar3) >> 7);
  frame_ds.x = frame_ds.crx;
  frame_ds.y = frame_ds.cry;
  DispSprD__FP9DISP_SPRT(&frame_ds);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&frame_ds,album_tex + 0x160);
  if ((int)frame_ds.h < 0) {
    fVar4 = (float)(frame_ds.h & 1 | frame_ds.h >> 1);
    fVar4 = fVar4 + fVar4;
  }
  else {
    fVar4 = (float)frame_ds.h;
  }
  iVar2 = 5;
  frame_ds.rot = 90.0;
  frame_ds.cry = frame_ds.y + fVar7;
  frame_ds.crx = frame_ds.x + fVar4 + fVar6;
  frame_ds.alpha = (uchar)((int)(frame_ds.alpha * uVar3) >> 7);
  frame_ds.x = frame_ds.crx;
  frame_ds.y = frame_ds.cry;
  DispSprD__FP9DISP_SPRT(&frame_ds);
  d = album_tex + 0x155;
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&frame_ds,d);
    iVar2 = iVar2 + -1;
    d = d + 1;
    frame_ds.x = frame_ds.x + fVar6;
    frame_ds.y = frame_ds.y + fVar7;
    frame_ds.alpha = (uchar)((int)((uint)frame_ds.alpha * (uint)alpha) >> 7);
    DispSprD__FP9DISP_SPRT(&frame_ds);
  } while (-1 < iVar2);
  return;
}

static void AlbumViewLeftThumbnailDisp(int album_data, int photo_no, int off_x, int off_y, u_char alpha) {
	DISP_SPRT frame_ds;
	int i;
	static int protect_x_tbl[4] = {
		/* [0] = */ 62,
		/* [1] = */ 62,
		/* [2] = */ 104,
		/* [3] = */ 104
	};
	static int protect_y_tbl[4] = {
		/* [0] = */ 208,
		/* [1] = */ 234,
		/* [2] = */ 208,
		/* [3] = */ 234
	};
	
  void *addr;
  int *piVar1;
  int *piVar2;
  SPRT_DAT *pSVar3;
  ALBUM_INFO *pAVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  DISP_SPRT frame_ds;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  pbVar5 = (byte *)(album_data * 0x20c + 0x2d4378 + photo_no * 0x20);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z10ALBUM_INFO_UiUi_PX01(album_data,2);
  _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(photo_no,0x10);
  if ((pbVar5[2] & 1) != 0) {
                    /* end of inlined section */
    fVar8 = (float)off_x;
    addr = GetAlbumDataAddr__Fi(album_data);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z10ALBUM_INFO_UiUi_PX01(album_data,2);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(photo_no,0x10);
    DrawSPhotoFromSmallPhotoAreaAddr2__FiiiiiiiiUc
              ((int)addr,(uint)*pbVar5,0,0,off_x + 0x43,off_y + 0xd4,0x2d,0x1e,(uint)alpha);
                    /* end of inlined section */
    iVar6 = 3;
    pSVar3 = album_tex + 0x163;
    do {
      CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&frame_ds,pSVar3);
      iVar6 = iVar6 + -1;
      pSVar3 = pSVar3 + 1;
      frame_ds.x = frame_ds.x + fVar8;
      frame_ds.y = frame_ds.y + (float)off_y;
      frame_ds.alpha = (uchar)((int)((uint)frame_ds.alpha * (uint)alpha) >> 7);
      DispSprD__FP9DISP_SPRT(&frame_ds);
    } while (-1 < iVar6);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z10ALBUM_INFO_UiUi_PX01(album_data,2);
    pAVar4 = album_info.field0_0x0.m_aData + album_data;
    if (pAVar4->album_type == 5) {
      _fixed_array_verifyrange__H1Z10ALBUM_INFO_UiUi_PX01(album_data,2);
      _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(photo_no,0x10);
      if ((*(byte *)((int)((pAVar4->album_info).pic.field0_0x0.m_aData + photo_no) + 2) & 2) != 0) {
                    /* end of inlined section */
        iVar6 = 0;
        iVar7 = 3;
        pSVar3 = album_tex + 0x7e;
        do {
          iVar7 = iVar7 + -1;
          CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&frame_ds,pSVar3);
          piVar1 = (int *)((int)&protect_x_tbl_1034 + iVar6);
          piVar2 = (int *)((int)&protect_y_tbl_1035 + iVar6);
          iVar6 = iVar6 + 4;
          frame_ds.x = (float)(*piVar1 + off_x);
          frame_ds.y = (float)(*piVar2 + off_y);
          frame_ds.alpha = (uchar)((int)((uint)frame_ds.alpha * (uint)alpha) >> 7);
          DispSprD__FP9DISP_SPRT(&frame_ds);
          pSVar3 = pSVar3 + 1;
        } while (-1 < iVar7);
      }
    }
  }
  return;
}

static void AlbumViewRightThumbnailDisp(int album_data, int photo_no, int off_x, int off_y, u_char alpha) {
	DISP_SPRT frame_ds;
	int i;
	static int protect_x_tbl[4] = {
		/* [0] = */ 520,
		/* [1] = */ 520,
		/* [2] = */ 562,
		/* [3] = */ 562
	};
	static int protect_y_tbl[4] = {
		/* [0] = */ 208,
		/* [1] = */ 234,
		/* [2] = */ 208,
		/* [3] = */ 234
	};
	
  void *addr;
  int *piVar1;
  int *piVar2;
  SPRT_DAT *pSVar3;
  ALBUM_INFO *pAVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  DISP_SPRT frame_ds;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  pbVar5 = (byte *)(album_data * 0x20c + 0x2d4378 + photo_no * 0x20);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z10ALBUM_INFO_UiUi_PX01(album_data,2);
  _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(photo_no,0x10);
  if ((pbVar5[2] & 1) != 0) {
                    /* end of inlined section */
    fVar8 = (float)off_x;
    addr = GetAlbumDataAddr__Fi(album_data);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z10ALBUM_INFO_UiUi_PX01(album_data,2);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(photo_no,0x10);
    DrawSPhotoFromSmallPhotoAreaAddr2__FiiiiiiiiUc
              ((int)addr,(uint)*pbVar5,0,0,off_x + 0x20d,off_y + 0xd4,0x2d,0x1e,(uint)alpha);
                    /* end of inlined section */
    iVar6 = 3;
    pSVar3 = album_tex + 0x167;
    do {
      CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&frame_ds,pSVar3);
      iVar6 = iVar6 + -1;
      pSVar3 = pSVar3 + 1;
      frame_ds.x = frame_ds.x + fVar8;
      frame_ds.y = frame_ds.y + (float)off_y;
      frame_ds.alpha = (uchar)((int)((uint)frame_ds.alpha * (uint)alpha) >> 7);
      DispSprD__FP9DISP_SPRT(&frame_ds);
    } while (-1 < iVar6);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z10ALBUM_INFO_UiUi_PX01(album_data,2);
    pAVar4 = album_info.field0_0x0.m_aData + album_data;
    if (pAVar4->album_type == 5) {
      _fixed_array_verifyrange__H1Z10ALBUM_INFO_UiUi_PX01(album_data,2);
      _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(photo_no,0x10);
      if ((*(byte *)((int)((pAVar4->album_info).pic.field0_0x0.m_aData + photo_no) + 2) & 2) != 0) {
                    /* end of inlined section */
        iVar6 = 0;
        iVar7 = 3;
        pSVar3 = album_tex + 0x7e;
        do {
          iVar7 = iVar7 + -1;
          CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&frame_ds,pSVar3);
          piVar1 = (int *)((int)&protect_x_tbl_1039 + iVar6);
          piVar2 = (int *)((int)&protect_y_tbl_1040 + iVar6);
          iVar6 = iVar6 + 4;
          frame_ds.x = (float)(*piVar1 + off_x);
          frame_ds.y = (float)(*piVar2 + off_y);
          frame_ds.alpha = (uchar)((int)((uint)frame_ds.alpha * (uint)alpha) >> 7);
          DispSprD__FP9DISP_SPRT(&frame_ds);
          pSVar3 = pSVar3 + 1;
        } while (-1 < iVar7);
      }
    }
  }
  return;
}

static void AlbumViewPhotoInfoDisp(int album_data, int photo_no, int off_x, int off_y, u_char alpha) {
	static char __FUNCTION__[23] = {
		/* [0] = */ 65,
		/* [1] = */ 108,
		/* [2] = */ 98,
		/* [3] = */ 117,
		/* [4] = */ 109,
		/* [5] = */ 86,
		/* [6] = */ 105,
		/* [7] = */ 101,
		/* [8] = */ 119,
		/* [9] = */ 80,
		/* [10] = */ 104,
		/* [11] = */ 111,
		/* [12] = */ 116,
		/* [13] = */ 111,
		/* [14] = */ 73,
		/* [15] = */ 110,
		/* [16] = */ 102,
		/* [17] = */ 111,
		/* [18] = */ 68,
		/* [19] = */ 105,
		/* [20] = */ 115,
		/* [21] = */ 112,
		/* [22] = */ 0
	};
	int i;
	int subject_num;
	int msg_y;
	DATE_INFO date;
	
  short sVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  short *psVar6;
  DATE_INFO date;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  iVar5 = 0;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z10ALBUM_INFO_UiUi_PX01(album_data,2);
  _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(photo_no,0x10);
  psVar6 = (short *)(album_data * 0x20c + 0x2d4378 + photo_no * 0x20);
  if ((*(byte *)(psVar6 + 1) & 1) != 0) {
    _fixed_array_verifyrange__H1Z10ALBUM_INFO_UiUi_PX01(album_data,2);
    _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(photo_no,0x10);
                    /* end of inlined section */
    SetDateInfoType__FP9DATE_INFOP10sceCdCLOCK(&date,(sceCdCLOCK *)(psVar6 + 10));
    if ((ushort)psVar6[0xe] < 0xf0) {
      PrintMsg__Fiiiiiii(0x4a,(int)psVar6[0xe],off_x + 0x50,off_y + 0x15b,2,(uint)alpha,0);
    }
    iVar2 = off_y + 0x175;
    PrintNumber_N__FiiiiUcUciUcUc(date.day.year,2,off_x + 0xa6,iVar2,'\x02',alpha,0,'\x01',1);
    PrintMsg__Fiiiiiii(8,1,off_x + 0x6e,iVar2,2,(uint)alpha,0xa0);
    PrintNumber_N__FiiiiUcUciUcUc(date.day.month,2,off_x + 0x7c,iVar2,'\x02',alpha,0,'\x01',1);
    PrintMsg__Fiiiiiii(8,1,off_x + 0x98,iVar2,2,(uint)alpha,0xa0);
    PrintNumber_N__FiiiiUcUciUcUc(date.day.day,2,off_x + 0x52,iVar2,'\x02',alpha,0,'\x01',1);
    PrintNumber_N__FiiiiUcUciUcUc(date.time.hour,2,off_x + 0xcc,iVar2,'\x02',alpha,0,'\x01',1);
    PrintMsg__Fiiiiiii(8,0,off_x + 0xe9,iVar2,2,(uint)alpha,0xa0);
    PrintNumber_N__FiiiiUcUciUcUc(date.time.min,2,off_x + 0xf4,iVar2,'\x02',alpha,0,'\x01',1);
    PrintMsg__Fiiiiiii(8,0,off_x + 0x111,iVar2,2,(uint)alpha,0xa0);
    PrintNumber_N__FiiiiUcUciUcUc(date.time.sec,2,off_x + 0x11c,iVar2,'\x02',alpha,0,'\x01',1);
    PrintNumber_N__FiiiiUcUciUcUc
              (*(int *)(psVar6 + 8),5,off_x + 0xb6,off_y + 0x18d,'\x02',alpha,0,'\0',0);
    PrintMsg__Fiiiiiii(8,2,off_x + 0x112,off_y + 0x18d,2,(uint)alpha,0);
    psVar3 = psVar6;
    iVar2 = 0;
    while (psVar3 = psVar3 + 2, iVar2 < 3) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z16_PICTURE_SUBJECT_UiUi_PX01(iVar2,3);
      if (*psVar3 < 0) break;
      iVar5 = iVar5 + 1;
      iVar2 = iVar2 + 1;
    }
    iVar2 = 0x167;
    if (iVar5 != 2) {
      if (iVar5 < 3) {
        iVar4 = 1;
        iVar2 = 0x173;
      }
      else {
        iVar4 = 3;
        iVar2 = 0x15b;
      }
      if (iVar5 != iVar4) {
        iVar2 = 0x15b;
      }
    }
    iVar5 = iVar2 + off_y;
                    /* end of inlined section */
    for (iVar4 = 0; iVar4 < 3; iVar4 = iVar4 + 1) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      psVar3 = psVar6 + iVar4 * 2 + 2;
      _fixed_array_verifyrange__H1Z16_PICTURE_SUBJECT_UiUi_PX01(iVar4,3);
      if (*psVar3 < 0) {
        return;
      }
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z16_PICTURE_SUBJECT_UiUi_PX01(iVar4,3);
      if (psVar3[1] < 0) {
LAB_0012a134:
                    /* end of inlined section */
        SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        _fixed_array_verifyrange__H1Z16_PICTURE_SUBJECT_UiUi_PX01(iVar4,3);
        PrintAssertReal("Error! %s msg_id %d");
      }
      else {
        _fixed_array_verifyrange__H1Z16_PICTURE_SUBJECT_UiUi_PX01(iVar4,3);
        sVar1 = psVar3[1];
        _fixed_array_verifyrange__H1Z16_PICTURE_SUBJECT_UiUi_PX01(iVar4,3);
        iVar2 = GetMsgIDNumMax__Fi((int)*psVar3);
        if ((long)iVar2 <= (long)sVar1) goto LAB_0012a134;
      }
      _fixed_array_verifyrange__H1Z16_PICTURE_SUBJECT_UiUi_PX01(iVar4,3);
      sVar1 = *psVar3;
      _fixed_array_verifyrange__H1Z16_PICTURE_SUBJECT_UiUi_PX01(iVar4,3);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      PrintMsg__Fiiiiiii((int)sVar1,(int)psVar3[1],off_x + 0x168,iVar5,2,(uint)alpha,0);
      iVar5 = iVar5 + 0x18;
    }
  }
  return;
}

static void AlbumViewPhotoProtectionFrameDisp(int off_x, int off_y, u_char alpha) {
	int i;
	DISP_SPRT photo_ds;
	
  int iVar1;
  SPRT_DAT *d;
  float fVar2;
  DISP_SPRT photo_ds;
  
  fVar2 = (float)off_x;
  iVar1 = 3;
  d = album_tex + 0x86;
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&photo_ds,d);
    iVar1 = iVar1 + -1;
    d = d + 1;
    photo_ds.x = photo_ds.x + fVar2;
    photo_ds.y = photo_ds.y + (float)off_y;
    photo_ds.alpha = (uchar)((int)((uint)photo_ds.alpha * (uint)alpha) >> 7);
    DispSprD__FP9DISP_SPRT(&photo_ds);
  } while (-1 < iVar1);
  return;
}

static void AlbumViewCsrDisp(int off_x, int off_y, u_char alpha) {
	DISP_SPRT csr_ds;
	u_char rgb;
	int i;
	
  SPRT_DAT *d;
  int iVar1;
  float fVar2;
  DISP_SPRT csr_ds;
  uchar rgb;
  
  iVar1 = 1;
  fVar2 = (float)off_x;
  Zero2Anim2D_CsrAnimCtrl__FPcPUc(&album_view_disp.csr_anim_timer,&rgb);
  d = album_tex + 0x161;
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&csr_ds,d);
    iVar1 = iVar1 + -1;
    d = d + 1;
    csr_ds.x = csr_ds.x + fVar2;
    csr_ds.y = csr_ds.y + (float)off_y;
    csr_ds.b = rgb;
    csr_ds.r = rgb;
    csr_ds.alpha = (uchar)((int)((uint)csr_ds.alpha * (uint)alpha) >> 7);
    csr_ds.g = rgb;
    DispSprD__FP9DISP_SPRT(&csr_ds);
  } while (-1 < iVar1);
  return;
}

static void AlbumViewCaptionDisp(int off_x, int off_y, u_char alpha) {
  DrawCmnCapGroup_W__FiiUcUi(0xc,0xc,alpha,0);
  return;
}

ALBUM_INFO* ALBUM_INFO * _fixed_array_verifyrange<ALBUM_INFO>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

int* int * _fixed_array_verifyrange<int>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

char* char * _fixed_array_verifyrange<char>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

PICTURE_WRK* PICTURE_WRK * _fixed_array_verifyrange<PICTURE_WRK>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

PICTURE_SUBJECT* _PICTURE_SUBJECT * _fixed_array_verifyrange<_PICTURE_SUBJECT>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
	int *ra;
	
  if ((__priority == 0xffff) && (__initialize_p == 1)) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    album_view_tex_tbl.field0_0x0.m_aData = (fixed_array_base<int,7,int_*>)&DAT_003a14e0;
  }
  return;
}

type_info& ALBUM_INFO type_info function() {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

type_info& PICTURE_WRK type_info function() {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

type_info& _PICTURE_SUBJECT type_info function() {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

static void global constructors keyed to AlbumViewCtrlInit() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
