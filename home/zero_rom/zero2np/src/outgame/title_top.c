// STATUS: NOT STARTED

#include "title_top.h"

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3e6c68;
	
  g3ddbgAssert__FbPCce(false,str_849);
  return;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_void__003f4870,_max,v);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_char__003f4878,_max,v);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi("unsigned int*",_max,v);
  }
  return (uint **)0x0;
}

void TitleTopMain() {
  TitleTopPad__Fv();
  return;
}

static void TitleTopPad() {
  if ((*paddat[7] == 1) || (**paddat == 1)) {
    SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    SetNextGPhase__F14GPHASE_ID_ENUM(GID_TITLE_MENU);
  }
  return;
}

void TitleTopDispMain(int off_x, int off_y, u_char alpha) {
  uchar rgb;
  
  DispTitleZeroLogo__FiiUc(off_x,off_y,alpha);
  DispTitleTecmoLogo__FiiUc(off_x,off_y,alpha);
  rgb = GetTitleAnimRGB__Fv();
  TitleTopPressStartDisp__FUc(rgb);
  return;
}

static void TitleTopPressStartDisp(u_char rgb) {
	DISP_SPRT ds;
	
  void *tm2_addr;
  DISP_SPRT ds;
  
  tm2_addr = GetTitleLogoTexAddr__Fv();
  PK2SendVram__FUiiii((uint)tm2_addr,-1,-1,0);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ds,title_top + 0xe);
  ds.alphar = 0x48;
  ds.r = rgb;
  ds.g = rgb;
  ds.b = rgb;
  DispSprD__FP9DISP_SPRT(&ds);
  return;
}
