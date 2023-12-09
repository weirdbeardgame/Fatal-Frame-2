// STATUS: NOT STARTED

#include "gallery.h"

static void (*GalleryCtrlModule[3])(/* parameters unknown */) = {
	/* [0] = */ GalleryTopPad,
	/* [1] = */ GalleryViewPad,
	/* [2] = */ GalleryMoviePad
};

static void (*GalleryDispModule[3])(/* parameters unknown */) = {
	/* [0] = */ GalleryDispTop,
	/* [1] = */ GalleryDispView,
	/* [2] = */ GalleryDispMovie
};

void *gal_og_tex_addr = NULL;
void *gal_cmn_tex_addr = NULL;
void *gal_top_tex_addr = NULL;
void *gal_view_tex_addr = NULL;
void *gal_pic_tex_addr = NULL;

GAL_CTRL gal_ctrl = {
	/* .setup_pic_flg = */ 0,
	/* .game_clear_flg = */ 0,
	/* .ending1_mov_flg = */ 0,
	/* .ending2_mov_flg = */ 0,
	/* .movie_no = */ 0,
	/* .end1_mov_cnt = */ 0,
	/* .main_step = */ 0,
	/* .now_place = */ 0,
	/* .next_place = */ 0,
	/* .now_tex = */ 0,
	/* .csr_map = */ {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0,
		/* [3] = */ 0,
		/* [4] = */ 0,
		/* [5] = */ 0,
		/* [6] = */ 0,
		/* [7] = */ 0
	},
	/* .cursor = */ 0,
	/* .next_csr = */ 0,
	/* .old_csr = */ 0,
	/* .anm_step = */ 0,
	/* .anm_alpha = */ 0,
	/* .pic_mode = */ 0,
	/* .pic_step = */ 0,
	/* .pic_no = */ 0,
	/* .next_pic_no = */ 0,
	/* .pic_max = */ 0,
	/* .file_no = */ 0,
	/* .pic_anm_alpha = */ 0
};

GAL_CTRL *gc = NULL;

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3b31f0;
	
  g3ddbgAssert__FbPCce(false,str_849);
  return;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_void__003f0dc0,_max,v);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_char__003f0dc8,_max,v);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi("unsigned int*",_max,v);
  }
  return (uint **)0x0;
}

void GalleryInit() {
	int i;
	
  GAL_CTRL *pGVar1;
  int iVar2;
  int *piVar3;
  
  gal_ctrl.anm_step = 1;
  iVar2 = 7;
  gal_ctrl.now_tex = 5;
  piVar3 = gal_ctrl.csr_map;
  gc = &gal_ctrl;
  gal_ctrl.main_step = 0;
  gal_ctrl.now_place = 0;
  gal_ctrl.next_place = 0;
  gal_ctrl.anm_alpha = 0;
  gal_ctrl.cursor = 0;
  gal_ctrl.old_csr = 0;
  gal_ctrl.next_csr = 0;
  gal_ctrl.pic_mode = 0;
  gal_ctrl.pic_step = 0;
  gal_ctrl.pic_anm_alpha = 0;
  gal_ctrl.pic_no = 0;
  gal_ctrl.next_pic_no = 0;
  gal_ctrl.pic_max = 0;
  gal_ctrl.movie_no = 0;
  gal_ctrl.end1_mov_cnt = 0;
  do {
    iVar2 = iVar2 + -1;
    *piVar3 = 0;
    pGVar1 = gc;
    piVar3 = piVar3 + 1;
  } while (-1 < iVar2);
  gc->csr_map[3] = 1;
  pGVar1->csr_map[4] = 1;
  pGVar1->csr_map[5] = 1;
  if (clear_flg_ctrl.clear_flg == '\x01') {
    pGVar1->csr_map[1] = 1;
    pGVar1->cursor = 0;
    pGVar1->game_clear_flg = 1;
    pGVar1->csr_map[0] = 1;
  }
  else {
    pGVar1->game_clear_flg = 0;
    pGVar1->cursor = 3;
  }
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  pGVar1 = gc;
  if (((uint)clear_flg_ctrl.ending_movie_flg.flag_32[0] & 1) == 0) {
    gc->ending1_mov_flg = 0;
  }
  else {
                    /* end of inlined section */
    gc->csr_map[6] = 1;
    pGVar1->ending1_mov_flg = 1;
  }
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  pGVar1 = gc;
  if (((uint)clear_flg_ctrl.ending_movie_flg.flag_32[0] & 2) == 0) {
    gc->ending2_mov_flg = 0;
  }
  else {
                    /* end of inlined section */
    gc->csr_map[7] = 1;
    pGVar1->ending2_mov_flg = 1;
  }
  pGVar1 = gc;
  if (clear_flg_ctrl.comp_soul_list_flg == '\0') {
    gc->setup_pic_flg = 0;
  }
  else {
    gc->csr_map[2] = 1;
    pGVar1->setup_pic_flg = 1;
  }
  pGVar1 = gc;
  piVar3 = &gc->cursor;
  gc->next_csr = *piVar3;
  pGVar1->old_csr = *piVar3;
  return;
}

void GalleryMain() {
	int end_flg;
	
  int *piVar1;
  bool bVar2;
  int iVar3;
  GAL_CTRL *pGVar4;
  
  bVar2 = false;
  if (gc->main_step == 0) {
    iVar3 = GalleryTexLoadWait__Fv();
    pGVar4 = gc;
    if (iVar3 != 0) {
      gc->main_step = 1;
    }
  }
  else {
    if (gc->main_step != 1) {
      iVar3 = gc->main_step;
      goto LAB_001a608c;
    }
    if (gc->anm_step != 0) {
      iVar3 = gc->main_step;
      goto LAB_001a608c;
    }
    (*(code *)GalleryCtrlModule[gc->now_place])();
    if (gc->now_place != 1) {
      iVar3 = gc->main_step;
      goto LAB_001a608c;
    }
    GalPictureManage__Fv();
    pGVar4 = gc;
  }
  iVar3 = pGVar4->main_step;
LAB_001a608c:
  if (iVar3 != 0) {
    iVar3 = GalAnimation__Fv();
    bVar2 = iVar3 != 0;
    piVar1 = &gc->now_place;
    gc->now_tex = 5;
    (*(code *)GalleryDispModule[*piVar1])();
  }
  if (bVar2) {
    SetNextGPhase__F14GPHASE_ID_ENUM(GID_TITLE_MENU);
  }
  return;
}

void GalleryEnd() {
  EndMovieWithTitle__Fv();
  return;
}

static void GalleryTopPad() {
	int pic_num[3];
	int pic_mode[3];
	int mov_no[5];
	int ncsr;
	int end_flg;
	
  uint uVar1;
  ulong *puVar2;
  bool bVar3;
  GAL_CTRL *pGVar4;
  int iVar5;
  int pic_num [3];
  int pic_mode [3];
  int mov_no [5];
  
  uVar1 = (int)pic_num + 7U & 7;
  puVar2 = (ulong *)(((int)pic_num + 7U) - uVar1);
  *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | DAT_003b32c8 >> (7 - uVar1) * 8;
  pic_num._0_8_ = DAT_003b32c8;
  pic_num[2] = DAT_003b32d0;
  uVar1 = (int)pic_mode + 7U & 7;
  puVar2 = (ulong *)(((int)pic_mode + 7U) - uVar1);
  *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | DAT_003b32d8 >> (7 - uVar1) * 8;
  pic_mode._0_8_ = DAT_003b32d8;
  pic_mode[2] = DAT_003b32e0;
  uVar1 = (int)mov_no + 7U & 7;
  puVar2 = (ulong *)(((int)mov_no + 7U) - uVar1);
  *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | DAT_003b32e8 >> (7 - uVar1) * 8;
  mov_no._0_8_ = DAT_003b32e8;
  uVar1 = (int)mov_no + 0xfU & 7;
  puVar2 = (ulong *)(((int)mov_no + 0xfU) - uVar1);
  *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | DAT_003b32f0 >> (7 - uVar1) * 8;
  mov_no._8_8_ = DAT_003b32f0;
  mov_no[4] = DAT_003b32f8;
  bVar3 = false;
  if (*paddat[1] == 1) {
    SystemBankPlay__FiiiiP11_SND_3D_SETii(1,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    pGVar4 = gc;
    gc->next_place = 3;
    pGVar4->anm_step = 2;
  }
  else if (((pad[0].rpt & 0x1000U) == 0) && (iVar5 = GetPadAnalogRpt__Fi(0), iVar5 == 0)) {
    if (((pad[0].rpt & 0x4000U) == 0) && (iVar5 = GetPadAnalogRpt__Fi(1), iVar5 == 0)) {
      if (**paddat == 1) {
        gc->old_csr = gc->cursor;
        SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
        pGVar4 = gc;
        iVar5 = gc->cursor;
        if (iVar5 < 3) {
          gc->next_place = 1;
          pGVar4->anm_step = 2;
          pGVar4->pic_mode = pic_mode[iVar5];
          iVar5 = pic_num[iVar5];
          pGVar4->pic_step = 0;
          pGVar4->pic_max = iVar5;
          pGVar4->pic_no = 0;
        }
        else {
          iVar5 = GetTitleStreamID__Fv();
          StreamAutoFadeOut(iVar5,0x1e);
          pGVar4 = gc;
          iVar5 = gc->cursor;
          gc->anm_step = 2;
          pGVar4->next_place = 2;
          pGVar4->movie_no = pic_mode[iVar5 + 1];
        }
      }
    }
    else {
      SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      iVar5 = gc->cursor + 1;
      do {
        if (7 < iVar5) {
          iVar5 = 0;
        }
        if (gc->csr_map[iVar5] == 0) {
          iVar5 = iVar5 + 1;
        }
        else {
          bVar3 = true;
        }
      } while (!bVar3);
      gc->cursor = iVar5;
    }
  }
  else {
    SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    iVar5 = gc->cursor + -1;
    do {
      if (iVar5 < 0) {
        iVar5 = 7;
      }
      if (gc->csr_map[iVar5] == 0) {
        iVar5 = iVar5 + -1;
      }
      else {
        bVar3 = true;
      }
    } while (!bVar3);
    gc->cursor = iVar5;
  }
  return;
}

static void GalleryViewPad() {
  int *piVar1;
  GAL_CTRL *pGVar2;
  int iVar3;
  
  pGVar2 = gc;
  if (1 < gc->pic_step) {
    if (*paddat[1] == 1) {
      SystemBankPlay__FiiiiP11_SND_3D_SETii(1,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      pGVar2 = gc;
      gc->anm_step = 2;
      pGVar2->next_place = 0;
    }
    else if ((pad[0].one & 0x2000U) == 0) {
      if ((pad[0].one & 0x8000U) != 0) {
        iVar3 = gc->pic_no + -1;
        gc->next_pic_no = iVar3;
        if (iVar3 < 0) {
          pGVar2->next_pic_no = pGVar2->pic_max + -1;
        }
        gc->pic_step = 4;
        SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      }
    }
    else {
      piVar1 = &gc->pic_max;
      iVar3 = gc->pic_no + 1;
      gc->next_pic_no = iVar3;
      if (*piVar1 <= iVar3) {
        pGVar2->next_pic_no = 0;
      }
      gc->pic_step = 4;
      SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    }
  }
  return;
}

void GalPictureManage() {
  GAL_CTRL *pGVar1;
  int iVar2;
  
  pGVar1 = gc;
  switch(gc->pic_step) {
  case 0:
    iVar2 = GalPictureLoadReq__Fii(gc->pic_mode,gc->pic_no);
    pGVar1 = gc;
    gc->pic_step = 1;
    pGVar1->file_no = iVar2;
    pGVar1->pic_anm_alpha = 0;
    break;
  case 1:
    iVar2 = GalPictureLoadWait__Fi(gc->file_no);
    pGVar1 = gc;
    if (iVar2 != 0) {
      gc->pic_step = 3;
      pGVar1->pic_anm_alpha = 0;
    }
    break;
  case 3:
    iVar2 = gc->pic_anm_alpha + 0xc;
    gc->pic_anm_alpha = iVar2;
    if (0x7f < iVar2) {
      pGVar1->pic_step = 2;
      pGVar1->pic_anm_alpha = 0x80;
    }
    break;
  case 4:
    iVar2 = gc->pic_anm_alpha + -0xc;
    gc->pic_anm_alpha = iVar2;
    if (iVar2 < 1) {
      pGVar1->pic_no = pGVar1->next_pic_no;
      pGVar1->pic_anm_alpha = 0;
      pGVar1->pic_step = 0;
      GalleryTexLoadCancel__FPvi(gal_pic_tex_addr,pGVar1->file_no);
      LiberateGalleryTexMem__FPPv(&gal_pic_tex_addr);
      gal_pic_tex_addr = (void *)0x0;
    }
  }
  return;
}

static void GalleryMoviePad() {
	int end_flg;
	
  bool bVar1;
  GAL_CTRL *pGVar2;
  int iVar3;
  
  iVar3 = PlayMovieWithTitle__Fv();
  if (iVar3 != 0) {
    EndMovieWithTitle__Fv();
    pGVar2 = gc;
    bVar1 = true;
    if ((gc->cursor == 6) && (gc->end1_mov_cnt == 0)) {
      gc->anm_step = 2;
      pGVar2->movie_no = 0x35;
      pGVar2->next_place = 2;
      pGVar2->end1_mov_cnt = 1;
      bVar1 = false;
    }
    if (bVar1) {
      SetTitleBgSendLock__FUc('\0');
      iVar3 = StreamAutoPlay(0xa13,0xa12,0xc,0,1,0x3200,0,(_SND_3D_SET *)0x0);
      SetTitleStreamID__Fi(iVar3);
      pGVar2 = gc;
      gc->anm_step = 1;
      pGVar2->end1_mov_cnt = 0;
      pGVar2->next_place = 0;
      pGVar2->now_place = 0;
      pGVar2->anm_alpha = 0;
    }
  }
  return;
}

void GalPK2SendVram(int tex_id, void *tex_addr) {
  if (tex_addr == (void *)0x0) {
    printf("Warning NULL tex pointer!!\n");
    return;
  }
  if (tex_id != gc->now_tex) {
    PK2SendVram__FUiiii((uint)tex_addr,-1,-1,0);
    gc->now_tex = tex_id;
  }
  return;
}

int GalPictureLoadReq(int id, int no) {
	int pic_top[3];
	int file_no;
	
  uint uVar1;
  ulong *puVar2;
  int data_label;
  int pic_top [3];
  
  uVar1 = (int)pic_top + 7U & 7;
  puVar2 = (ulong *)(((int)pic_top + 7U) - uVar1);
  *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | DAT_003b3338 >> (7 - uVar1) * 8;
  pic_top._0_8_ = DAT_003b3338;
  pic_top[2] = DAT_003b3340;
  data_label = pic_top[id] + no;
  if (gal_pic_tex_addr != (void *)0x0) {
    LiberateGalleryTexMem__FPPv(&gal_pic_tex_addr);
  }
  GetGalleryTexMem__FPPvi(&gal_pic_tex_addr,data_label);
  GalleryTexLoadReq__FPvi(gal_pic_tex_addr,data_label);
  return data_label;
}

int GalPictureLoadWait(int file_no) {
  int iVar1;
  
  iVar1 = FileLoadIsEnd2(file_no,gal_pic_tex_addr);
  return (int)(iVar1 != 0);
}

void GalPictureMemFree() {
  GalleryTexLoadCancel__FPvi(gal_pic_tex_addr,gc->file_no);
  LiberateGalleryTexMem__FPPv(&gal_pic_tex_addr);
  return;
}

void GalleryBackGroundLoadReq() {
  uchar uVar1;
  
  if (gal_og_tex_addr != (void *)0x0) {
    LiberateGalleryTexMem__FPPv(&gal_og_tex_addr);
  }
  if (gal_top_tex_addr != (void *)0x0) {
    LiberateGalleryTexMem__FPPv(&gal_top_tex_addr);
  }
  if (gal_cmn_tex_addr != (void *)0x0) {
    LiberateGalleryTexMem__FPPv(&gal_cmn_tex_addr);
  }
  if (gal_view_tex_addr != (void *)0x0) {
    LiberateGalleryTexMem__FPPv(&gal_view_tex_addr);
  }
  GetGalleryTexMem__FPPvi(&gal_og_tex_addr,0x13);
  uVar1 = GetLanguage__Fv();
  GetGalleryTexMem__FPPvi(&gal_top_tex_addr,(char)uVar1 + 0x112f);
  uVar1 = GetLanguage__Fv();
  GetGalleryTexMem__FPPvi(&gal_cmn_tex_addr,(char)uVar1 + 0x112a);
  GetGalleryTexMem__FPPvi(&gal_view_tex_addr,0x1134);
  GalleryTexLoadReq__FPvi(gal_og_tex_addr,0x13);
  uVar1 = GetLanguage__Fv();
  GalleryTexLoadReq__FPvi(gal_top_tex_addr,(char)uVar1 + 0x112f);
  uVar1 = GetLanguage__Fv();
  GalleryTexLoadReq__FPvi(gal_cmn_tex_addr,(char)uVar1 + 0x112a);
  GalleryTexLoadReq__FPvi(gal_view_tex_addr,0x1134);
  return;
}

static void GetGalleryTexMem(void **tex_addr, int data_label) {
  uint file_size;
  void *pvVar1;
  
  if (*tex_addr != (void *)0x0) {
    LiberateGalleryTexMem__FPPv(tex_addr);
  }
  file_size = GetFileSize(data_label);
  pvVar1 = ol_loadGetHeap__Fi(file_size);
  *tex_addr = pvVar1;
  return;
}

static void GalleryTexLoadReq(void *tex_addr, int data_label) {
  FileLoadReqEE(data_label,tex_addr,5,(undefined1 *)0x0,(void *)0x0);
  return;
}

static int GalleryTexLoadWait() {
	int res;
	
  uchar uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  iVar2 = FileLoadIsEnd2(0x13,gal_og_tex_addr);
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar1 = GetLanguage__Fv();
    iVar2 = FileLoadIsEnd2((char)uVar1 + 0x112f,gal_top_tex_addr);
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar1 = GetLanguage__Fv();
      iVar2 = FileLoadIsEnd2((char)uVar1 + 0x112a,gal_cmn_tex_addr);
      if (iVar2 != 0) {
        iVar2 = FileLoadIsEnd2(0x1134,gal_view_tex_addr);
        uVar3 = (uint)(iVar2 != 0);
      }
    }
  }
  return uVar3;
}

void GalleryMemFree() {
  uchar uVar1;
  
  GalleryTexLoadCancel__FPvi(gal_og_tex_addr,0x13);
  uVar1 = GetLanguage__Fv();
  GalleryTexLoadCancel__FPvi(gal_top_tex_addr,(char)uVar1 + 0x112f);
  uVar1 = GetLanguage__Fv();
  GalleryTexLoadCancel__FPvi(gal_cmn_tex_addr,(char)uVar1 + 0x112a);
  GalleryTexLoadCancel__FPvi(gal_view_tex_addr,0x1134);
  LiberateGalleryTexMem__FPPv(&gal_og_tex_addr);
  LiberateGalleryTexMem__FPPv(&gal_top_tex_addr);
  LiberateGalleryTexMem__FPPv(&gal_cmn_tex_addr);
  LiberateGalleryTexMem__FPPv(&gal_view_tex_addr);
  LiberateGalleryTexMem__FPPv(&gal_pic_tex_addr);
  return;
}

static void LiberateGalleryTexMem(void **tex_addr) {
  if (*tex_addr != (void *)0x0) {
    ol_loadFreeHeap__FPv(*tex_addr);
    *tex_addr = (void *)0x0;
  }
  return;
}

static void GalleryTexLoadCancel(void *tex_addr, int data_label) {
  int iVar1;
  
  if ((tex_addr != (void *)0x0) && (iVar1 = FileLoadIsEnd2(data_label,tex_addr), iVar1 == 0)) {
    FileLoadCancel2(data_label,tex_addr,(undefined1 *)0x0,(void *)0x0);
  }
  return;
}
