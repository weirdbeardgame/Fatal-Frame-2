// STATUS: NOT STARTED

#include "loading.h"

typedef struct {
	char step;
	char anim_step;
	short int anim_timer;
	short int fade_timer;
} LOADING_CTRL;

static void *loading_tex_addr = NULL;
static LOADING_CTRL loading_ctrl;

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3ba818;
	
  g3ddbgAssert__FbPCce(false,str_849);
  return;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_void__003f18c8,_max,v);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_char__003f18d0,_max,v);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi("unsigned int*",_max,v);
  }
  return (uint **)0x0;
}

void LoadingInit() {
  loading_tex_addr = (void *)0x0;
  return;
}

void GetLoadingTexMem() {
	static char __FUNCTION__[17] = {
		/* [0] = */ 71,
		/* [1] = */ 101,
		/* [2] = */ 116,
		/* [3] = */ 76,
		/* [4] = */ 111,
		/* [5] = */ 97,
		/* [6] = */ 100,
		/* [7] = */ 105,
		/* [8] = */ 110,
		/* [9] = */ 103,
		/* [10] = */ 84,
		/* [11] = */ 101,
		/* [12] = */ 120,
		/* [13] = */ 77,
		/* [14] = */ 101,
		/* [15] = */ 109,
		/* [16] = */ 0
	};
	
  uchar uVar1;
  uint file_size;
  
  if (loading_tex_addr == (void *)0x0) {
    uVar1 = GetLanguage__Fv();
    file_size = GetFileSize((char)uVar1 + 0x1167);
    loading_tex_addr = ol_loadGetHeap__Fi(file_size);
  }
  else {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! GetLoadingTexMem");
  }
  return;
}

void LoadingTexLoadReq() {
  uchar uVar1;
  
  if (loading_tex_addr != (void *)0x0) {
    uVar1 = GetLanguage__Fv();
    FileLoadReqEE((char)uVar1 + 0x1167,loading_tex_addr,5,(undefined1 *)0x0,(void *)0x0);
  }
  return;
}

int LoadingTexLoadWait() {
  uchar uVar1;
  int iVar2;
  
  uVar1 = GetLanguage__Fv();
  iVar2 = FileLoadIsEnd2((char)uVar1 + 0x1167,loading_tex_addr);
  return (int)(iVar2 != 0);
}

void LoadingCtrlInit() {
  loading_ctrl.fade_timer = 0;
  loading_ctrl.anim_step = '\0';
  loading_ctrl.anim_timer = 0;
  if (loading_tex_addr == (void *)0x0) {
    BackGroundLoadReq__Fv();
  }
  return;
}

void LoadingCtrlMain() {
  int iVar1;
  
  if (loading_ctrl.step == '\0') {
    iVar1 = LoadingTexLoadWait__Fv();
    if (iVar1 != 0) {
      loading_ctrl.step = '\x01';
      loading_ctrl.fade_timer = 0;
      loading_ctrl.anim_step = '\0';
    }
  }
  else if (loading_ctrl.step == '\x01') {
    if ((loading_ctrl.anim_step == '\0') &&
       (loading_ctrl.fade_timer = loading_ctrl.fade_timer + 1, 0xe < (short)loading_ctrl.fade_timer)
       ) {
      loading_ctrl.anim_step = loading_ctrl.step;
      loading_ctrl.fade_timer = 0;
    }
    LoadingAnimCtrl__Fv();
  }
  return;
}

static void LoadingAnimCtrl() {
  loading_ctrl.anim_timer = loading_ctrl.anim_timer + 1;
  if (0x1c1 < (short)loading_ctrl.anim_timer) {
    loading_ctrl.anim_timer = 0;
  }
  return;
}

void LoadingDispMain() {
  uchar alpha;
  
  if (loading_ctrl.step == '\x01') {
    LoadingBlackBgDisp__FUc(0x80);
    LoadingBgDisp__FiiUc(0,0,0x80);
    LoadingNowLoadingDisp__FiiUc(0,0,0x80);
    if (loading_ctrl.anim_step == '\0') {
      alpha = CalcLoadingBlackFadeAlpha__Fi((int)(short)loading_ctrl.fade_timer);
      LoadingBlackBgDisp__FUc(alpha);
    }
  }
  return;
}

static u_char CalcLoadingBlackFadeAlpha(int timer) {
	u_char alpha;
	static ALPHA_ANIM_TBL alpha_tbl[2] = {
		/* [0] = */ {
			/* .start_alpha = */ 128,
			/* .end_alpha = */ 0,
			/* .start_time = */ 0,
			/* .end_time = */ 15
		},
		/* [1] = */ {
			/* .start_alpha = */ -1,
			/* .end_alpha = */ -1,
			/* .start_time = */ -1,
			/* .end_time = */ -1
		}
	};
	
  uchar uVar1;
  
  uVar1 = 0x80;
  if (timer < 0xf) {
    uVar1 = Anim2D_CalcNowAlpha__FPC14ALPHA_ANIM_TBLi((ALPHA_ANIM_TBL *)alpha_tbl_985,timer);
  }
  return uVar1;
}

static void LoadingBlackBgDisp(u_char alpha) {
	DISP_SQAR dsq;
	SQAR_DAT loading_bg;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  uchar *puVar4;
  DISP_SQAR dsq;
  SQAR_DAT loading_bg;
  
  puVar1 = (undefined *)((int)&loading_bg.h + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003ba8f0 >> (7 - uVar2) * 8;
  loading_bg._0_8_ = DAT_003ba8f0;
  puVar1 = (undefined *)((int)&loading_bg.y + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003ba8f8 >> (7 - uVar2) * 8;
  loading_bg._8_8_ = DAT_003ba8f8;
  uVar2 = (uint)&loading_bg.alpha & 7;
  puVar4 = &loading_bg.alpha + -uVar2;
  *(ulong *)puVar4 = *(ulong *)puVar4 & -1L << (uVar2 + 1) * 8 | DAT_003ba900 >> (7 - uVar2) * 8;
  loading_bg._16_8_ = DAT_003ba900;
  CopySqrDToSqr__FP9DISP_SQARP8SQAR_DAT(&dsq,&loading_bg);
  dsq.alpha = (uchar)((int)((uint)dsq.alpha * (uint)alpha) >> 7);
  DispSqrD__FP9DISP_SQAR(&dsq);
  return;
}

static void LoadingBgDisp(int off_x, int off_y, u_char alpha) {
	DISP_SPRT loading_ds;
	long int scissor_backup;
	float moyou_off_x;
	float kumo_off_x;
	int i;
	POS_ANIM_TBL moyou_x_tbl[2];
	POS_ANIM_TBL kumo_x_tbl[2];
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  int iVar4;
  long scissor;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  DISP_SPRT loading_ds;
  POS_ANIM_TBL moyou_x_tbl [2];
  POS_ANIM_TBL kumo_x_tbl [2];
  
  fVar9 = (float)off_x;
  fVar10 = (float)off_y;
  puVar1 = (undefined *)((int)&moyou_x_tbl[0].end_pos + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003ba908 >> (7 - uVar2) * 8;
  moyou_x_tbl[0]._0_8_ = DAT_003ba908;
  puVar1 = (undefined *)((int)&moyou_x_tbl[0].anim_label + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003ba910 >> (7 - uVar2) * 8;
  moyou_x_tbl[0]._8_8_ = DAT_003ba910;
  puVar1 = (undefined *)((int)&moyou_x_tbl[1].end_pos + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003ba918 >> (7 - uVar2) * 8;
  moyou_x_tbl[1]._0_8_ = DAT_003ba918;
  puVar1 = (undefined *)((int)&moyou_x_tbl[1].anim_label + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | _PTR_003ba920 >> (7 - uVar2) * 8;
  moyou_x_tbl[1]._8_8_ = _PTR_003ba920;
  puVar1 = (undefined *)((int)&kumo_x_tbl[0].end_pos + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003ba928 >> (7 - uVar2) * 8;
  kumo_x_tbl[0]._0_8_ = DAT_003ba928;
  puVar1 = (undefined *)((int)&kumo_x_tbl[0].anim_label + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003ba930 >> (7 - uVar2) * 8;
  kumo_x_tbl[0]._8_8_ = DAT_003ba930;
  puVar1 = (undefined *)((int)&kumo_x_tbl[1].end_pos + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003ba938 >> (7 - uVar2) * 8;
  kumo_x_tbl[1]._0_8_ = DAT_003ba938;
  puVar1 = (undefined *)((int)&kumo_x_tbl[1].anim_label + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | _PTR_003ba940 >> (7 - uVar2) * 8;
  kumo_x_tbl[1]._8_8_ = _PTR_003ba940;
  scissor = GET_SCISSOR_REGISTER__Fi(0);
  SetScissorRegister__Fil(0,0x1c000c2027f0082);
  iVar5 = 0;
  fVar6 = Anim2D_CalcNowPos__FPC12POS_ANIM_TBLi(moyou_x_tbl,(int)(short)loading_ctrl.anim_timer);
  fVar7 = Anim2D_CalcNowPos__FPC12POS_ANIM_TBLi(kumo_x_tbl,(int)(short)loading_ctrl.anim_timer);
  PK2SendVram__FUiiii((uint)loading_tex_addr,-1,-1,0);
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&loading_ds,loading_tex);
    uVar2 = loading_ds.w * iVar5;
    iVar5 = iVar5 + 1;
    if ((int)uVar2 < 0) {
      fVar8 = (float)(uVar2 & 1 | uVar2 >> 1);
      fVar8 = fVar8 + fVar8;
    }
    else {
      fVar8 = (float)uVar2;
    }
    loading_ds.x = (loading_ds.x + fVar9 + fVar6) - fVar8;
    loading_ds.y = loading_ds.y + fVar10;
    loading_ds.alpha = (uchar)((int)((uint)loading_ds.alpha * (uint)alpha) >> 7);
    DispSprD__FP9DISP_SPRT(&loading_ds);
  } while (iVar5 < 2);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&loading_ds,loading_tex + 1);
  iVar5 = 0;
  loading_ds.x = loading_ds.x + fVar9;
  loading_ds.y = loading_ds.y + fVar10;
  loading_ds.alpha = (uchar)((int)((uint)loading_ds.alpha * (uint)alpha) >> 7);
  DispSprD__FP9DISP_SPRT(&loading_ds);
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&loading_ds,loading_tex + 2);
    iVar4 = iVar5 << 9;
    uVar2 = 0x200 / (int)loading_ds.w;
    iVar5 = iVar5 + 1;
    loading_ds.csy = loading_ds.y + fVar10;
    loading_ds.csx = ((loading_ds.x + fVar9) - fVar7) + (float)iVar4;
    loading_ds.alpha = (uchar)((int)((uint)loading_ds.alpha * (uint)alpha) >> 7);
    if (loading_ds.w == 0) {
      trap(7);
    }
    if ((int)uVar2 < 0) {
      fVar6 = (float)(uVar2 & 1 | uVar2 >> 1);
      loading_ds.scw = fVar6 + fVar6;
    }
    else {
      loading_ds.scw = (float)uVar2;
    }
    loading_ds.sch = 1.0;
    loading_ds.x = loading_ds.csx;
    loading_ds.y = loading_ds.csy;
    DispSprD__FP9DISP_SPRT(&loading_ds);
  } while (iVar5 < 2);
  SetScissorRegister__Fil(0,scissor);
  return;
}

static void LoadingNowLoadingDisp(int off_x, int off_y, u_char alpha) {
	DISP_SPRT loading_ds;
	int i;
	ALPHA_ANIM_TBL loading_alpha_tbl[3];
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  uchar uVar4;
  SPRT_DAT *d;
  int iVar5;
  float fVar6;
  DISP_SPRT loading_ds;
  ALPHA_ANIM_TBL loading_alpha_tbl [3];
  
  iVar5 = 1;
  fVar6 = (float)off_x;
  puVar1 = (undefined *)((int)&loading_alpha_tbl[0].end_time + 1);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | (ulong)DAT_003ba948 >> (7 - uVar2) * 8;
  loading_alpha_tbl[0] = DAT_003ba948;
  puVar1 = (undefined *)((int)&loading_alpha_tbl[1].end_time + 1);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | (ulong)DAT_003ba950 >> (7 - uVar2) * 8;
  loading_alpha_tbl[1] = DAT_003ba950;
  puVar1 = (undefined *)((int)&loading_alpha_tbl[2].end_time + 1);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | (ulong)_PTR_003ba958 >> (7 - uVar2) * 8;
  loading_alpha_tbl[2] = _PTR_003ba958;
  uVar4 = Anim2D_CalcNowAlpha__FPC14ALPHA_ANIM_TBLi
                    (loading_alpha_tbl,(int)(short)loading_ctrl.anim_timer % 0x3c);
  PK2SendVram__FUiiii((uint)loading_tex_addr,-1,-1,0);
  d = loading_tex + 3;
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&loading_ds,d);
    iVar5 = iVar5 + -1;
    d = d + 1;
    loading_ds.x = loading_ds.x + fVar6;
    loading_ds.y = loading_ds.y + (float)off_y;
    loading_ds.alphar = 0x48;
    loading_ds.alpha = uVar4;
    DispSprD__FP9DISP_SPRT(&loading_ds);
  } while (-1 < iVar5);
  return;
}

void ReleaseLoadingTexMem() {
  if (loading_tex_addr != (void *)0x0) {
    ol_loadFreeHeap__FPv(loading_tex_addr);
    loading_tex_addr = (void *)0x0;
  }
  return;
}
