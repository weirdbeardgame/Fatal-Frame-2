// STATUS: NOT STARTED

#include "framerate.h"

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3ae8c0;
	
  g3ddbgAssert__FbPCce(false,str_849);
  return;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_void__003f0990,_max,v);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_char__003f0998,_max,v);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi("unsigned int*",_max,v);
  }
  return (uint **)0x0;
}

void FrameRateSelMain() {
  FrameRateSelPad__Fv();
  return;
}

static void FrameRateSelPad() {
  int iVar1;
  
  if (((((pad[0].rpt & 0x8000U) == 0) && (iVar1 = GetPadAnalogRpt__Fi(2), iVar1 == 0)) &&
      ((pad[0].rpt & 0x2000U) == 0)) && (iVar1 = GetPadAnalogRpt__Fi(3), iVar1 == 0)) {
    if (**paddat == 1) {
      SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      SetNextGPhase__F14GPHASE_ID_ENUM(GID_TITLE_MENU);
      return;
    }
    if (*paddat[1] == 1) {
      SystemBankPlay__FiiiiP11_SND_3D_SETii(1,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      SetNextGPhase__F14GPHASE_ID_ENUM(GID_TITLE_MENU);
    }
    return;
  }
  SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
  iVar1 = GetPALMode__Fv();
  if (iVar1 == 0) {
    ChangeVideoMode__FUc('\x03');
    return;
  }
  ChangeVideoMode__FUc('\x02');
  return;
}

void FrameRateSelDispMain() {
  DispTitleZeroLogo__FiiUc(0,0,0x80);
  FrameRateSelTitleDisp__FiiUc(0,0,0x80);
  FrameRateSelItemDisp__FiiUc(0,0,0x80);
  FrameRateSelCursorDisp__FiiUc(0,0,0x80);
  TitleCaptionDisp__FiiUc(0,0,0x80);
  return;
}

static void FrameRateSelTitleDisp(int off_x, int off_y, u_char alpha) {
	DISP_SPRT ds;
	int i;
	
  void *tm2_addr;
  int iVar1;
  SPRT_DAT *d;
  DISP_SPRT ds;
  
  iVar1 = 1;
  tm2_addr = GetTitleLogoTexAddr__Fv();
  PK2SendVram__FUiiii((uint)tm2_addr,-1,-1,0);
  d = title_top + 0x1b;
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ds,d);
    iVar1 = iVar1 + -1;
    ds.alphar = 0x48;
    d = d + 1;
    DispSprD__FP9DISP_SPRT(&ds);
  } while (-1 < iVar1);
  return;
}

static void FrameRateSelItemDisp(int off_x, int off_y, u_char alpha) {
	DISP_SPRT rate_ds;
	
  byte bVar1;
  void *tm2_addr;
  int iVar2;
  float fVar3;
  DISP_SPRT rate_ds;
  
  fVar3 = (float)off_x;
  tm2_addr = GetTitleLogoTexAddr__Fv();
  PK2SendVram__FUiiii((uint)tm2_addr,-1,-1,0);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&rate_ds,title_top + 0x19);
  rate_ds.x = rate_ds.x + fVar3;
  rate_ds.alphar = 0x48;
  rate_ds.y = rate_ds.y + (float)off_y;
  iVar2 = GetPALMode__Fv();
  bVar1 = alpha >> 1;
  if (iVar2 != 0) {
    bVar1 = (uchar)((int)((uint)rate_ds.alpha * (uint)alpha) >> 7);
  }
  rate_ds.alpha = bVar1;
  DispSprD__FP9DISP_SPRT(&rate_ds);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&rate_ds,title_top + 0x1a);
  rate_ds.x = rate_ds.x + fVar3;
  rate_ds.alphar = 0x48;
  rate_ds.y = rate_ds.y + (float)off_y;
  iVar2 = GetPALMode__Fv();
  bVar1 = alpha >> 1;
  if (iVar2 == 0) {
    bVar1 = (uchar)((int)((uint)rate_ds.alpha * (uint)alpha) >> 7);
  }
  rate_ds.alpha = bVar1;
  DispSprD__FP9DISP_SPRT(&rate_ds);
  return;
}

static void FrameRateSelCursorDisp(int off_x, int off_y, u_char alpha) {
  float y;
  float y_00;
  uchar uVar1;
  int iVar2;
  
  iVar2 = GetPALMode__Fv();
  y_00 = DAT_003ee340;
  y = DAT_003ee338;
  if (iVar2 != 0) {
    uVar1 = GetTitleAnimRGB__Fv();
    DispTitleCursorL__FffUcUc(189.0,y,0x80,uVar1);
    uVar1 = GetTitleAnimRGB__Fv();
    DispTitleCursorR__FffUcUc(DAT_003ee33c,y,0x80,uVar1);
    return;
  }
  uVar1 = GetTitleAnimRGB__Fv();
  DispTitleCursorL__FffUcUc(DAT_003ee344,y_00,0x80,uVar1);
  uVar1 = GetTitleAnimRGB__Fv();
  DispTitleCursorR__FffUcUc(DAT_003ee348,y_00,0x80,uVar1);
  return;
}
