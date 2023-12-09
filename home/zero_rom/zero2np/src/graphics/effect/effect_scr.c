// STATUS: NOT STARTED

#include "effect_scr.h"

typedef enum {
	SCREEN_SAVER_LOAD_IDLE = 0,
	SCREEN_SAVER_LOAD_WAIT = 1,
	SCREEN_SAVER_LOAD_END = 2
} SCREEN_SAVER_LOAD_STATUS;

struct EFF_BLUR {
	u_int flow;
	u_int cnt;
	u_int in;
	u_int keep;
	u_int out;
	u_int alp;
	float scl;
	float rot;
	float cx;
	float cy;
};

struct EFF_FOCUS {
	u_int flow;
	u_int cnt;
	u_int in;
	u_int keep;
	u_int out;
	u_int max;
};

struct EFF_DEFORM {
	u_char type;
	u_char otype;
	u_char init;
	u_char pass;
};

typedef struct {
	u_char OldAlpha;
	u_char OldColor;
	u_char MakeFlg;
} MAKE_DITHER_PATTERN_CTRL;

typedef struct {
	float Scale;
	int BasePosX;
	int BasePosY;
	int PosX;
	int PosY;
	int AlphaInTime;
	int AlphaKeepTime;
	int AlphaOutTime;
	int DispTime;
	int DispTimeAll;
	int Alpha;
} SCREEN_SAVER_TEX;

struct fixed_array_base<SCREEN_SAVER_TEX,1,SCREEN_SAVER_TEX[1]> {
protected:
	SCREEN_SAVER_TEX m_aData[1];
	
public:
	fixed_array_base<SCREEN_SAVER_TEX,1,SCREEN_SAVER_TEX[1]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	SCREEN_SAVER_TEX& operator[]();
	SCREEN_SAVER_TEX& operator[]();
	SCREEN_SAVER_TEX* data();
	SCREEN_SAVER_TEX* begin();
	SCREEN_SAVER_TEX* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<SCREEN_SAVER_TEX,1> : fixed_array_base<SCREEN_SAVER_TEX,1,SCREEN_SAVER_TEX[1]> {
};

typedef struct {
	fixed_array<SCREEN_SAVER_TEX,1> TexData;
	u_int *pTexBuf;
	int Counter;
	int IntervalTime;
	int DispTime;
	int LoadStatus;
	int LoadId;
	int ScreenEffectNo;
	int DitherInterval;
	float DitherAlpha;
	int DitherChangeTime;
	int PlayId;
} SCREEN_SAVER_CTRL;

typedef struct {
	float rrr;
	float lll;
	float mm1;
	float mm2;
	float sss;
	float ccc;
} DEFWORK;

typedef struct {
	float stq[4];
	float vtw[4];
} SCRDEF;

EFF_BLUR eff_blur = {
	/* .flow = */ 3,
	/* .cnt = */ 0,
	/* .in = */ 0,
	/* .keep = */ 0,
	/* .out = */ 0,
	/* .alp = */ 0,
	/* .scl = */ 1.f,
	/* .rot = */ 180.f,
	/* .cx = */ 320.f,
	/* .cy = */ 224.f
};

EFF_FOCUS eff_focus = {
	/* .flow = */ 3,
	/* .cnt = */ 0,
	/* .in = */ 0,
	/* .keep = */ 0,
	/* .out = */ 0,
	/* .max = */ 0
};

EFF_DEFORM eff_deform = {
	/* .type = */ 0,
	/* .otype = */ 0,
	/* .init = */ 0,
	/* .pass = */ 0
};

short int overlap_passflg[2] = {
	/* [0] = */ 0,
	/* [1] = */ 0
};

static int SSC_BankNo = -1;
static SCREEN_SAVER_CTRL ScreenSaverCtrl;
unsigned char SCREEN_SAVER_TEX type_info node[8];
static MAKE_DITHER_PATTERN_CTRL MakeDitherPatternCtrl;
static DEFWORK dw[25][33];

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3a7ee0;
	
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf16SCREEN_SAVER_TEX(0x3eff48,_max);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf16SCREEN_SAVER_TEX(0x3eff50,_max);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf16SCREEN_SAVER_TEX(0x3a7f28,_max);
  }
  return (uint **)0x0;
}

void InitEffectScr() {
  MakeDitherPatternCtrl.OldAlpha = '@';
  MakeDitherPatternCtrl.OldColor = 0x80;
  MakeDitherPatternCtrl.MakeFlg = '\x01';
  MakeDitherPattern__FUiUi(0x40,0x80);
  SetParam__FiiUcUcUci(0,0,'\0','\0','\0',0);
  eff_focus.max = 0;
  eff_focus.flow = 3;
  eff_blur.scl = 1.0;
  eff_blur.cy = 224.0;
  eff_blur.rot = 180.0;
  eff_blur.cx = 320.0;
  eff_deform.init = '\x01';
  eff_deform.pass = '\0';
  eff_blur.flow = 3;
  eff_blur.cnt = 0;
  eff_blur.in = 0;
  eff_blur.keep = 0;
  eff_blur.out = 0;
  eff_blur.alp = 0;
  eff_focus.cnt = 0;
  eff_focus.in = 0;
  eff_focus.keep = 0;
  eff_focus.out = 0;
  eff_deform.type = '\0';
  eff_deform.otype = '\0';
  ScreenSaverInit__Fv();
  return;
}

void InitEffectScrEF() {
  overlap_passflg[1] = overlap_passflg[0];
  overlap_passflg[0] = 0;
  if (eff_deform.pass == '\0') {
    eff_deform.init = '\x01';
  }
  eff_deform.pass = '\0';
  eff_deform.otype = eff_deform.type;
  ScreenSaverMain__Fv();
  return;
}

void SetWhiteOut() {
  SetParam__FiiUcUcUci(0,0x20,0xff,0xff,0xff,2);
  return;
}

void SetWhiteIn() {
  SetParam__FiiUcUcUci(0x80,0x20,0xff,0xff,0xff,1);
  return;
}

void SetBlackOut() {
  SetParam__FiiUcUcUci(0,0x20,'\0','\0','\0',2);
  return;
}

void SetBlackIn() {
  SetParam__FiiUcUcUci(0x80,0x20,'\0','\0','\0',1);
  return;
}

void SetWhiteOut2(int time) {
  SetParam__FiiUcUcUci(0,time,0xff,0xff,0xff,2);
  return;
}

void SetWhiteIn2(int time) {
  SetParam__FiiUcUcUci(0x80,time,0xff,0xff,0xff,1);
  return;
}

void SetBlackOut2(int time) {
  SetParam__FiiUcUcUci(0,time,'\0','\0','\0',2);
  return;
}

void SetBlackIn2(int time) {
  SetParam__FiiUcUcUci(0x80,time,'\0','\0','\0',1);
  return;
}

void SetFlash() {
  SetParam__FiiUcUcUci(0x80,0x12,0xff,0xff,0xff,1);
  return;
}

void SetBlackFilter(EFFECT_CONT *ec) {
  SetPanel__FUiffffUcUcUcUc(0,0.0,0.0,640.0,448.0,'\0','\0','\0',(ec->dat).uc8[2]);
  if (((ec->dat).uc8[1] & 1) != 0) {
    ResetEffects__FPv(ec);
  }
  return;
}

void SubBlur(int type, u_char alpha, float scale, float rot, float cx, float cy, int bPhotoType) {
	u_char colcol;
	float yline;
	float xline;
	DISP_SPRT2 ds;
	SPRT_DAT2 sd2;
	SPRT_DAT2 sd3;
	
  float fVar1;
  DISP_SPRT2 ds;
  SPRT_DAT2 sd2;
  SPRT_DAT2 sd3;
  
  fVar1 = -0.5;
  sd2.tex0 = DAT_003a7f38;
  sd2._8_8_ = DAT_003a7f40;
  sd2._16_8_ = DAT_003a7f48;
  sd2._24_8_ = DAT_003a7f50;
  sd2._32_8_ = DAT_003a7f58;
  sd2._40_8_ = DAT_003a7f60;
  sd3.tex0 = DAT_003a7f68;
  sd3._8_8_ = DAT_003a7f70;
  sd3._16_8_ = DAT_003a7f78;
  sd3._24_8_ = DAT_003a7f80;
  sd3._32_8_ = DAT_003a7f88;
  sd3._40_8_ = DAT_003a7f90;
  if (bPhotoType == 0) {
    CopySprDToSpr2__FP10DISP_SPRT2P9SPRT_DAT2(&ds,&sd3);
    ds.tex0 = 0x2000000224117aa0;
  }
  else {
    CopySprDToSpr2__FP10DISP_SPRT2P9SPRT_DAT2(&ds,&sd2);
    ds.tex0 = (sys_wrk.count + 1 & 1) * 0x1180 | 0x2000000268128000;
  }
  ds.rot = rot - 180.0;
  ds.tex1 = 0x161;
  ds.pri = 0xa0;
  ds.z = 0xfff00;
  ds.crx = 320.0;
  ds.cry = 224.0;
  ds.csx = DAT_003edf6c;
  ds.csy = DAT_003edf70;
  ds.y = -0.5;
  if (type == 1) {
    ds.b = 'x';
  }
  else if (type < 2) {
    if (type == 0) {
      ds.b = 0x80;
    }
    else {
      ds.b = 0x80;
    }
  }
  else if (type == 2) {
    ds.b = 0x88;
  }
  else {
    ds.b = 0x80;
  }
  ds.x = fVar1;
  ds.scw = scale;
  ds.sch = scale;
  ds.r = ds.b;
  ds.g = ds.b;
  ds.alp = alpha;
  DispSprD2__FP10DISP_SPRT2(&ds);
  return;
}

void SetBlur(EFFECT_CONT *ec) {
  uint uVar1;
  float fVar2;
  float fVar3;
  
  if (ec->pnt[0] != (void *)0x0) {
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zf_UiUi_PX01(0,3);
    _fixed_array_verifyrange__H1Zf_UiUi_PX01(1,3);
    uVar1 = (ec->dat).iv[2];
                    /* WARNING: Load size is inaccurate */
    if ((int)uVar1 < 0) {
      fVar3 = (float)(uVar1 & 1 | uVar1 >> 1);
      fVar3 = fVar3 + fVar3;
    }
    else {
      fVar3 = (float)uVar1;
    }
    uVar1 = (ec->dat).iv[3];
    if ((int)uVar1 < 0) {
      fVar2 = (float)(uVar1 & 1 | uVar1 >> 1);
      fVar2 = fVar2 + fVar2;
    }
    else {
      fVar2 = (float)uVar1;
    }
    SubBlur__FiUcffffi((uint)(ec->dat).uc8[2],*ec->pnt[0],fVar3 / 1000.0,fVar2 / 10.0,
                       (ec->fw).field0_0x0.m_aData[0],(ec->fw).field0_0x0.m_aData[1],0);
  }
                    /* end of inlined section */
  if (((ec->dat).uc8[1] & 1) != 0) {
    ResetEffects__FPv(ec);
  }
  return;
}

void RunBlur(EFFECT_CONT *ec) {
	int ef;
	float phase;
	
  float fVar1;
  float fVar2;
  
  if (eff_blur.flow == 1) {
    eff_blur.cnt = eff_blur.cnt + 1;
    fVar1 = sinf(DAT_003edf78);
    if ((int)eff_blur.alp < 0) {
      fVar2 = (float)(eff_blur.alp & 1 | eff_blur.alp >> 1);
      fVar2 = fVar2 + fVar2;
    }
    else {
      fVar2 = (float)eff_blur.alp;
    }
    SubBlur__FiUcffffi(0,(uchar)(int)(fVar1 * fVar2),eff_blur.scl,eff_blur.rot,eff_blur.cx,
                       eff_blur.cy,0);
    if (eff_blur.cnt < eff_blur.keep) {
      return;
    }
    eff_blur.flow = 2;
    if (eff_blur.out == 0) {
      eff_blur.flow = 3;
    }
  }
  else if (eff_blur.flow == 0) {
    eff_blur.cnt = eff_blur.cnt + 1;
    if (eff_blur.in != 0) {
      if ((int)eff_blur.cnt < 0) {
        fVar1 = (float)(eff_blur.cnt & 1 | eff_blur.cnt >> 1);
        fVar1 = fVar1 + fVar1;
      }
      else {
        fVar1 = (float)eff_blur.cnt;
      }
      if ((int)eff_blur.in < 0) {
        fVar2 = (float)(eff_blur.in & 1 | eff_blur.in >> 1);
        fVar2 = fVar2 + fVar2;
      }
      else {
        fVar2 = (float)eff_blur.in;
      }
      fVar1 = sinf((((fVar1 * 90.0) / fVar2) * DAT_003edf74) / 180.0);
      if ((int)eff_blur.alp < 0) {
        fVar2 = (float)(eff_blur.alp & 1 | eff_blur.alp >> 1);
        fVar2 = fVar2 + fVar2;
      }
      else {
        fVar2 = (float)eff_blur.alp;
      }
      SubBlur__FiUcffffi(0,(uchar)(int)(fVar1 * fVar2),eff_blur.scl,eff_blur.rot,eff_blur.cx,
                         eff_blur.cy,0);
    }
    if (eff_blur.cnt < eff_blur.in) {
      return;
    }
    if (eff_blur.keep == 0) {
      eff_blur.flow = 2;
      if (eff_blur.out == 0) {
        eff_blur.flow = 3;
      }
    }
    else {
      eff_blur.flow = 1;
    }
  }
  else {
    if (eff_blur.flow != 2) {
      return;
    }
    eff_blur.cnt = eff_blur.cnt + 1;
    if (eff_blur.out != 0) {
      if ((int)eff_blur.cnt < 0) {
        fVar1 = (float)(eff_blur.cnt & 1 | eff_blur.cnt >> 1);
        fVar1 = fVar1 + fVar1;
      }
      else {
        fVar1 = (float)eff_blur.cnt;
      }
      if ((int)eff_blur.out < 0) {
        fVar2 = (float)(eff_blur.out & 1 | eff_blur.out >> 1);
        fVar2 = fVar2 + fVar2;
      }
      else {
        fVar2 = (float)eff_blur.out;
      }
      fVar1 = sinf((((fVar1 * 90.0) / fVar2 + 90.0) * DAT_003edf7c) / 180.0);
      if ((int)eff_blur.alp < 0) {
        fVar2 = (float)(eff_blur.alp & 1 | eff_blur.alp >> 1);
        fVar2 = fVar2 + fVar2;
      }
      else {
        fVar2 = (float)eff_blur.alp;
      }
      SubBlur__FiUcffffi(0,(uchar)(int)(fVar1 * fVar2),eff_blur.scl,eff_blur.rot,eff_blur.cx,
                         eff_blur.cy,0);
    }
    if (eff_blur.cnt < eff_blur.out) {
      return;
    }
    eff_blur.flow = 3;
  }
  eff_blur.cnt = 0;
  return;
}

void CallBlur(int type, int wait, u_char alpha, float scale, float rot) {
  eff_blur.flow = 3;
  if (wait != 0) {
    eff_blur.flow = (uint)(type != 0);
  }
  eff_blur.cy = 224.0;
  eff_blur.alp = (uint)alpha;
  eff_blur.scl = scale;
  eff_blur.rot = rot;
  eff_blur.keep = wait;
  eff_blur.out = 0x1e;
  eff_blur.cx = 320.0;
  eff_blur.cnt = 0;
  eff_blur.in = 0x1e;
  return;
}

void CallBlur2(int in, int keep, int out, u_char alpha, float scale, float rot) {
  eff_blur.flow = 0;
  if (in < 1) {
    if (keep < 1) {
      eff_blur.flow = 2;
      if (out < 1) {
        eff_blur.flow = 3;
      }
    }
    else {
      eff_blur.flow = 1;
    }
  }
  eff_blur.cy = 224.0;
  eff_blur.in = in;
  eff_blur.keep = keep;
  eff_blur.out = out;
  eff_blur.alp = (uint)alpha;
  eff_blur.scl = scale;
  eff_blur.rot = rot;
  eff_blur.cx = 320.0;
  eff_blur.cnt = 0;
  return;
}

void CallBlur3(int in, int keep, int out, u_char alpha, float scale, float rot, float cx, float cy) {
  eff_blur.flow = 0;
  if (in < 1) {
    if (keep < 1) {
      eff_blur.flow = 2;
      if (out < 1) {
        eff_blur.flow = 3;
      }
    }
    else {
      eff_blur.flow = 1;
    }
  }
  eff_blur.cy = cy;
  eff_blur.in = in;
  eff_blur.keep = keep;
  eff_blur.out = out;
  eff_blur.alp = (uint)alpha;
  eff_blur.scl = scale;
  eff_blur.rot = rot;
  eff_blur.cx = cx;
  eff_blur.cnt = 0;
  return;
}

static void SubFocus(int ef) {
	SPRT_DAT2 sd;
	DISP_SPRT2 ds;
	float hw;
	
  float fVar1;
  float fVar2;
  SPRT_DAT2 sd;
  DISP_SPRT2 ds;
  
  sd.tex0 = DAT_003a7f98;
  sd._8_8_ = DAT_003a7fa0;
  sd._16_8_ = DAT_003a7fa8;
  sd._24_8_ = DAT_003a7fb0;
  sd._32_8_ = DAT_003a7fb8;
  sd._40_8_ = DAT_003a7fc0;
  if (0 < ef) {
    CopySprDToSpr2__FP10DISP_SPRT2P9SPRT_DAT2(&ds,&sd);
    if (ef < 0xb) {
      ds.alp = (uchar)(ef << 2);
    }
    else {
      ds.alp = '(';
    }
    fVar2 = -0.5 - (float)ef / 40.0;
    ds.z = 0xfff00;
    fVar1 = (float)ef / 40.0 + -0.5;
    ds.tex0 = (sys_wrk.count & 1) * 0x1180 | 0x2000000268128000;
    ds.x = fVar2;
    ds.y = fVar2;
    DispSprD2__FP10DISP_SPRT2(&ds);
    ds.x = fVar1;
    ds.y = fVar2;
    DispSprD2__FP10DISP_SPRT2(&ds);
    ds.x = fVar2;
    ds.y = fVar1;
    DispSprD2__FP10DISP_SPRT2(&ds);
    ds.x = fVar1;
    ds.y = fVar1;
    DispSprD2__FP10DISP_SPRT2(&ds);
  }
  return;
}

void SetFocus(EFFECT_CONT *ec) {
  if ((((ec->dat).uc8[2] != '\0') && (eff_focus.flow == 3)) &&
     (SubFocus__Fi((uint)(ec->dat).uc8[2]), ((ec->dat).uc8[1] & 1) != 0)) {
    ResetEffects__FPv(ec);
  }
  return;
}

void RunFocus(EFFECT_CONT *ec) {
	int ef;
	float phase;
	
  float fVar1;
  float fVar2;
  
  if (eff_focus.flow == 1) {
    eff_focus.cnt = eff_focus.cnt + 1;
    fVar1 = sinf(DAT_003edf84);
    if ((int)eff_focus.max < 0) {
      fVar2 = (float)(eff_focus.max & 1 | eff_focus.max >> 1);
      fVar2 = fVar2 + fVar2;
    }
    else {
      fVar2 = (float)eff_focus.max;
    }
    SubFocus__Fi((uint)(ec->dat).uc8[2] + (int)(fVar1 * fVar2));
    if (eff_focus.cnt < eff_focus.keep) {
      return;
    }
    if (eff_focus.out != 0) {
      eff_focus.flow = 2;
      eff_focus.cnt = 0;
      return;
    }
    eff_focus.flow = 3;
    eff_focus.cnt = 0;
    return;
  }
  if (eff_focus.flow == 0) {
    eff_focus.cnt = eff_focus.cnt + 1;
    if (eff_focus.in != 0) {
      if ((int)eff_focus.cnt < 0) {
        fVar1 = (float)(eff_focus.cnt & 1 | eff_focus.cnt >> 1);
        fVar1 = fVar1 + fVar1;
      }
      else {
        fVar1 = (float)eff_focus.cnt;
      }
      if ((int)eff_focus.in < 0) {
        fVar2 = (float)(eff_focus.in & 1 | eff_focus.in >> 1);
        fVar2 = fVar2 + fVar2;
      }
      else {
        fVar2 = (float)eff_focus.in;
      }
      fVar1 = sinf((((fVar1 * 90.0) / fVar2) * DAT_003edf80) / 180.0);
      if ((int)eff_focus.max < 0) {
        fVar2 = (float)(eff_focus.max & 1 | eff_focus.max >> 1);
        fVar2 = fVar2 + fVar2;
      }
      else {
        fVar2 = (float)eff_focus.max;
      }
      SubFocus__Fi((uint)(ec->dat).uc8[2] + (int)(fVar1 * fVar2));
    }
    if (eff_focus.cnt < eff_focus.in) {
      return;
    }
    if (eff_focus.keep == 0) {
      eff_focus.flow = 2;
      if (eff_focus.out == 0) {
        eff_focus.flow = 3;
      }
    }
    else {
      eff_focus.flow = 1;
    }
  }
  else {
    if (eff_focus.flow != 2) {
      return;
    }
    eff_focus.cnt = eff_focus.cnt + 1;
    if (eff_focus.out != 0) {
      if ((int)eff_focus.cnt < 0) {
        fVar1 = (float)(eff_focus.cnt & 1 | eff_focus.cnt >> 1);
        fVar1 = fVar1 + fVar1;
      }
      else {
        fVar1 = (float)eff_focus.cnt;
      }
      if ((int)eff_focus.out < 0) {
        fVar2 = (float)(eff_focus.out & 1 | eff_focus.out >> 1);
        fVar2 = fVar2 + fVar2;
      }
      else {
        fVar2 = (float)eff_focus.out;
      }
      fVar1 = sinf((((fVar1 * 90.0) / fVar2 + 90.0) * DAT_003edf88) / 180.0);
      if ((int)eff_focus.max < 0) {
        fVar2 = (float)(eff_focus.max & 1 | eff_focus.max >> 1);
        fVar2 = fVar2 + fVar2;
      }
      else {
        fVar2 = (float)eff_focus.max;
      }
      SubFocus__Fi((uint)(ec->dat).uc8[2] + (int)(fVar1 * fVar2));
    }
    if (eff_focus.cnt < eff_focus.out) {
      return;
    }
    eff_focus.flow = 3;
  }
  eff_focus.cnt = 0;
  return;
}

void CallFocus(int type, int wait, int gap) {
  eff_focus.out = 0x1e;
  eff_focus.flow = (uint)(type != 0);
  eff_focus.max = gap;
  eff_focus.keep = wait;
  eff_focus.cnt = 0;
  eff_focus.in = 0x1e;
  return;
}

void CallFocus2(int in, int keep, int out, int max) {
  eff_focus.flow = 0;
  if (in < 1) {
    if (keep < 1) {
      eff_focus.flow = 2;
      if (out < 1) {
        eff_focus.flow = 3;
      }
    }
    else {
      eff_focus.flow = 1;
    }
  }
  eff_focus.out = out;
  eff_focus.max = max;
  eff_focus.in = in;
  eff_focus.keep = keep;
  eff_focus.cnt = 0;
  return;
}

void SubDeform(int type, float rate, u_char alp) {
  switch(type) {
  case 1:
    SetDeform0__FifUc(type,rate,alp);
    return;
  case 2:
    SetDeform0__FifUc(type,rate,alp);
    return;
  case 3:
    SetDeform2__FifUc(type,rate,alp);
    return;
  case 4:
    SetDeform3__FifUc(type,rate,alp);
    return;
  case 5:
    SetDeform4__FifUc(type,rate,alp);
    return;
  case 6:
    SetDeform5__FifUc(type,rate,alp);
    return;
  case 7:
    SetDeform6__FifUc(type,rate,alp);
  }
  return;
}

void SetDeform(EFFECT_CONT *ec) {
	float ef;
	float phase;
	
  byte bVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = 0.0;
  if ((ec->dat).uc8[2] != eff_deform.otype) {
    eff_deform.init = '\x01';
  }
  if (((ec->dat).uc8[1] & 4) == 0) {
    fVar5 = (float)(uint)(ec->dat).uc8[3];
    bVar1 = (ec->dat).uc8[2];
    goto LAB_0015fc14;
  }
  uVar2 = ec->flow;
  if (uVar2 == 0) {
    uVar2 = ec->in;
    if (uVar2 == 0) goto LAB_0015fbf8;
    uVar3 = ec->cnt;
    if ((int)uVar3 < 0) {
      fVar5 = (float)(uVar3 & 1 | uVar3 >> 1);
      fVar5 = fVar5 + fVar5;
    }
    else {
      fVar5 = (float)uVar3;
    }
    if ((int)uVar2 < 0) {
      fVar4 = (float)(uVar2 & 1 | uVar2 >> 1);
      fVar4 = fVar4 + fVar4;
    }
    else {
      fVar4 = (float)uVar2;
    }
    fVar4 = (((fVar5 * 90.0) / fVar4) * DAT_003edf8c) / 180.0;
LAB_0015fbc4:
    fVar5 = sinf(fVar4);
    fVar5 = fVar5 * (float)(uint)(ec->dat).uc8[3];
  }
  else {
    fVar4 = DAT_003edf90;
    if (uVar2 == 1) goto LAB_0015fbc4;
    if (uVar2 == 2) {
      uVar2 = ec->out;
      if (uVar2 != 0) {
        uVar3 = ec->cnt;
        if ((int)uVar3 < 0) {
          fVar5 = (float)(uVar3 & 1 | uVar3 >> 1);
          fVar5 = fVar5 + fVar5;
        }
        else {
          fVar5 = (float)uVar3;
        }
        if ((int)uVar2 < 0) {
          fVar4 = (float)(uVar2 & 1 | uVar2 >> 1);
          fVar4 = fVar4 + fVar4;
        }
        else {
          fVar4 = (float)uVar2;
        }
        fVar4 = (((fVar5 * 90.0) / fVar4 + 90.0) * DAT_003edf94) / 180.0;
        goto LAB_0015fbc4;
      }
    }
    else if (uVar2 == 3) {
      ResetEffects__FPv(ec);
      return;
    }
  }
LAB_0015fbf8:
  EffInKeepOutFlowCtrl__FP11EFFECT_CONT(ec);
  bVar1 = (ec->dat).uc8[2];
LAB_0015fc14:
  SubDeform__FifUc((uint)bVar1,fVar5,0x80);
  if (((ec->dat).uc8[1] & 1) != 0) {
    ResetEffects__FPv(ec);
  }
  return;
}

void CallDeform2(int in, int keep, int out, int type, int max) {
  SetEffects__Fiie(6,4);
  return;
}

static void _SetScrData(Q_WORDDATA *dst, SCRDEF *src) {
  undefined in_vf0 [16];
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  
  auVar1 = _lqc2(*(undefined (*) [16])src->stq);
  auVar2 = _lqc2(*(undefined (*) [16])src->vtw);
  auVar1 = _vftoi4(auVar1);
  auVar3 = _vftoi4(auVar2);
  auVar2 = _vmulbc(auVar1,in_vf0);
  auVar1 = _sqc2(auVar3);
  dst[1].ul128 = (uint16)auVar1;
  auVar1 = _sqc2(auVar2);
  dst->ul128 = (uint16)auVar1;
  return;
}

static void MakeScrDeformPacket(int pnumw, int pnumh, u_long tex0, SCRDEF *scrdef[33], int alp) {
	int i;
	int j;
	Q_WORDDATA *ppbuf;
	
  Q_WORDDATA *pQVar1;
  SCRDEF *src;
  SCRDEF *src_00;
  int iVar2;
  SCRDEF *src_01;
  int iVar3;
  SCRDEF *pSVar4;
  int iVar5;
  int iVar6;
  _DRAW_ENV_5 local_90;
  int local_60;
  SCRDEF *local_5c;
  int local_58;
  int local_54;
  
  iVar6 = 0;
  local_58 = pnumw << 1;
  local_90.test = DAT_003a8008;
  local_90.alpha = DAT_003a7ff0;
  local_90.tex1 = DAT_003a7ff8;
  local_90.clamp = DAT_003a8000;
  local_90.zbuf = DAT_003a8010;
  local_60 = pnumh;
  local_5c = (SCRDEF *)scrdef;
  SetDrawEnv__FiPC11_DRAW_ENV_5(0,&local_90);
  Reserve2DPacket__FUi(0x10);
  pQVar1 = StartDmaDirectTrans__Fv();
  pQVar1->ul64[0] = 0x1000000000008003;
  pQVar1->ul64[1] = 0xe;
  *(undefined8 *)((int)pQVar1 + 0x18) = 0x3f;
  pQVar1[1].ul64[0] = 0;
  *(undefined8 *)((int)pQVar1 + 0x28) = 6;
  pQVar1[2].ul64[0] = tex0;
  *(undefined8 *)((int)pQVar1 + 0x38) = 1;
  pQVar1[3].ul64[0] = (long)alp << 0x18 | 0x100808080;
  *(undefined8 *)((int)pQVar1 + 0x48) = 0x43;
  pQVar1[4].ul64[0] = (long)(local_60 * (local_58 + 2)) | 0x20ae400000008000;
  pQVar1 = pQVar1 + 5;
  if (0 < local_60) {
    iVar5 = 0;
    pSVar4 = local_5c + 0x22;
    src_01 = local_5c;
    local_54 = local_58 + 2;
    do {
      _SetScrData__FP10Q_WORDDATAP6SCRDEF(pQVar1,src_01);
      iVar2 = 2;
      _SetScrData__FP10Q_WORDDATAP6SCRDEF(pQVar1 + 2,src_01 + 0x21);
      *(undefined4 *)((int)pQVar1 + 0x1c) = 0x8000;
      *(undefined4 *)((int)pQVar1 + 0x3c) = 0x8000;
      pQVar1 = pQVar1 + 4;
      if (2 < local_54) {
        iVar3 = local_58 + 2;
        src = local_5c + iVar5 + iVar6;
        src_00 = (SCRDEF *)((int)pSVar4->stq + iVar5);
        do {
          src = src + 1;
          _SetScrData__FP10Q_WORDDATAP6SCRDEF(pQVar1,src);
          iVar2 = iVar2 + 2;
          _SetScrData__FP10Q_WORDDATAP6SCRDEF(pQVar1 + 2,src_00);
          pQVar1 = pQVar1 + 4;
          src_00 = src_00 + 1;
        } while (iVar2 < iVar3);
      }
      iVar6 = iVar6 + 1;
      src_01 = src_01 + 0x21;
      pSVar4 = pSVar4 + 0x20;
      iVar5 = iVar5 + 0x20;
    } while (iVar6 < local_60);
  }
  EndDmaDirectTrans__FP10Q_WORDDATA(pQVar1);
  return;
}

static void SetDeform0(int type, float rate, u_char alp) {
	static float r = 0.f;
	static float add = 6.f;
	static int swch = 0;
	int ndpkt;
	int i;
	int j;
	int c;
	Q_WORDDATA *pbuf;
	float ll;
	float fw;
	float tx[17][25];
	float ty[17][25];
	float vtw[17][25][4];
	
  float *pfVar1;
  Q_WORDDATA *pQVar2;
  int iVar3;
  float *pfVar4;
  ulong uVar5;
  float *pfVar6;
  int iVar7;
  undefined4 uVar8;
  float *pfVar9;
  Q_WORDDATA *pQVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  float (*pafVar14) [25];
  int iVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float tx [17] [25];
  float ty [17] [25];
  float vtw [17] [25] [4];
  _DRAW_ENV_5 local_b0;
  int local_80;
  
  pafVar14 = tx;
  iVar16 = 0;
  local_80 = type;
  LocalCopyLtoL__Fiii(3,(int)(((sys_wrk.count & 1) * 0x23 << 0x27) >> 0x20),0x2bc0);
  iVar13 = 0;
  iVar11 = 0;
  do {
    pfVar4 = (float *)((int)vtw[iVar16 * 0x10] + iVar11);
    iVar15 = 0;
    fVar18 = ((float)iVar16 * 448.0) / 16.0;
    iVar7 = iVar13 << 2;
    pfVar9 = (float *)ty;
    do {
      pfVar1 = (float *)((int)tx + iVar7);
      pfVar6 = (float *)((int)ty + iVar7);
      iVar7 = iVar7 + 4;
      pfVar4[1] = fVar18 + 1824.0 + -0.5;
      pfVar4[2] = 0.0;
      pfVar4[3] = 1.0;
      *pfVar4 = ((float)iVar15 * 640.0) / 24.0 + 1728.0 + -0.5;
      pfVar4 = pfVar4 + 4;
      *pfVar1 = ((float)iVar15 * 320.0) / 24.0;
      *pfVar6 = fVar18;
      if (iVar15 == 0) {
        *(float *)pafVar14 = *(float *)pafVar14 + 1.0;
      }
      if (iVar15 == 0x18) {
        *pfVar1 = *pfVar1 - 1.0;
      }
      if (iVar16 == 0) {
        *pfVar9 = *pfVar9 + 1.0;
      }
      iVar15 = iVar15 + 1;
      if (iVar16 == 0x10) {
        *pfVar6 = *pfVar6 - 1.0;
      }
      pfVar9 = pfVar9 + 1;
    } while (iVar15 < 0x19);
    iVar16 = iVar16 + 1;
    pafVar14 = (float (*) [25])((int)pafVar14 + 100);
    iVar13 = iVar13 + 0x19;
    iVar11 = iVar11 + 0x90;
  } while (iVar16 < 0x11);
  iVar11 = 0;
  iVar13 = 0;
  fVar18 = rate / 10.0;
  add_1067 = 2.0;
  do {
    iVar7 = 0;
    iVar16 = iVar13;
    do {
      if ((((iVar7 != 0) && (iVar7 != 0x18)) && (iVar11 != 0)) && (iVar11 != 0x10)) {
        fVar19 = DAT_003edf98;
        fVar17 = sinf(((r_1066 + (float)iVar11 * 50.0) * DAT_003edf98) / 180.0);
        fVar17 = fVar17 * fVar18;
        pfVar9 = (float *)((int)vtw + iVar16);
        *pfVar9 = *pfVar9 + fVar17;
        if (local_80 == 2) {
          fVar17 = sinf(((r_1066 + (float)iVar7 * 50.0) * fVar19) / 180.0);
          fVar17 = fVar17 * fVar18;
        }
        pfVar9 = (float *)((int)vtw + iVar16 + 4);
        *pfVar9 = *pfVar9 + fVar17;
      }
      iVar7 = iVar7 + 1;
      iVar16 = iVar16 + 0x10;
    } while (iVar7 < 0x19);
    iVar11 = iVar11 + 1;
    iVar13 = iVar13 + 400;
  } while (iVar11 < 0x11);
  iVar11 = EffWrkStopFlgGet__Fv();
  if ((iVar11 == 0) && (r_1066 = r_1066 + add_1067, 360.0 < r_1066)) {
    r_1066 = r_1066 - 360.0;
  }
  local_b0.alpha = DAT_003a7ff0;
  local_b0.tex1 = DAT_003a7ff8;
  local_b0.clamp = DAT_003a8000;
  local_b0.test = DAT_003a8008;
  local_b0.zbuf = DAT_003a8010;
  SetDrawEnv__FiPC11_DRAW_ENV_5(0,&local_b0);
  pQVar2 = StartDmaDirectTrans__Fv();
  Reserve2DPacket__FUi(0x10);
  iVar11 = swch_1068;
  pQVar2->ul64[0] = 0x1000000000008002;
  pQVar2->ul64[1] = 0xe;
  *(undefined8 *)((int)pQVar2 + 0x18) = 0x3f;
  pQVar2[1].ul64[0] = 0;
  *(undefined8 *)((int)pQVar2 + 0x28) = 6;
  pQVar2[2].ul64[0] = 0x2000000264016bc0;
  if (iVar11 == 0) {
    uVar5 = 0x30ae400000000000;
  }
  else {
    uVar5 = 0x30e2400000000000;
  }
  pQVar2[3].ul64[0] = uVar5 | 0x8320;
  iVar13 = 4;
  *(undefined8 *)((int)pQVar2 + 0x38) = 0x431;
  iVar11 = swch_1068;
  iVar16 = 0;
  do {
    iVar7 = 0;
    uVar12 = 0;
    pQVar10 = pQVar2 + iVar13;
    do {
      if (iVar11 == 0) {
        pQVar10->ui32[0] = 0x80;
        pQVar10->ui32[1] = 0x80;
        pQVar10->ui32[2] = 0x80;
      }
      else {
        pQVar10->ui32[0] = uVar12;
        pQVar10->ui32[1] = uVar12;
        pQVar10->ui32[2] = uVar12;
      }
      pQVar10->ui32[3] = (uint)alp;
      uVar8 = 0x8000;
      iVar15 = iVar7 / 2;
      if (1 < iVar7) {
        uVar8 = 0;
      }
      iVar13 = iVar13 + 3;
      iVar3 = iVar7 % 2;
      iVar7 = iVar7 + 1;
      iVar3 = iVar3 + iVar16;
      uVar12 = uVar12 + 2;
      pQVar10[1].ui32[0] = (int)(tx[iVar3][iVar15] * 16.0);
      fVar18 = ty[iVar3][iVar15];
      *(undefined4 *)((int)pQVar10 + 0x18) = 0;
      *(undefined4 *)((int)pQVar10 + 0x1c) = 0;
      *(int *)((int)pQVar10 + 0x14) = (int)(fVar18 * 16.0);
      pQVar10[2].ui32[0] = (int)(vtw[iVar3][iVar15][0] * 16.0);
      *(int *)((int)pQVar10 + 0x24) = (int)(vtw[iVar3][iVar15][1] * 16.0);
      *(int *)((int)pQVar10 + 0x28) = (int)(vtw[iVar3][iVar15][2] * 16.0);
      *(undefined4 *)((int)pQVar10 + 0x2c) = uVar8;
      pQVar10 = pQVar10 + 3;
    } while (iVar7 < 0x32);
    iVar16 = iVar16 + 1;
  } while (iVar16 < 0x10);
  eff_deform.type = (uchar)local_80;
  eff_deform.pass = '\x01';
  eff_deform.init = '\x01';
  EndDmaDirectTrans__FP10Q_WORDDATA(pQVar2 + iVar13);
  return;
}

static void SetDeform2(int type, float rate, u_char alp) {
	static float rrr[825];
	static float lll[825];
	static float mm1[825];
	static float mm2[825];
	static float sss[825];
	static float ccc[825];
	static float r = 0.f;
	static float add = 6.f;
	static int swch = 0;
	int i;
	int k;
	int m;
	int vnumw;
	int wix;
	int pnumh;
	int wiy;
	int ndpkt;
	float wfw;
	float wfh;
	float fw;
	float lm;
	float cntw;
	float cnth;
	float fx;
	float fy;
	float rot_x;
	float rot_y;
	float tx[825];
	float ty[825];
	float slm[4][4];
	float wlm[4][4];
	float pos[4];
	float vt[825][4];
	float vtw[825][4];
	Q_WORDDATA *pbuf;
	GRA3DCAMERA *pCam;
	
  float *pfVar1;
  int iVar2;
  GRA3DCAMERA *pGVar3;
  float (*pafVar4) [4];
  float (*pafVar5) [4];
  Q_WORDDATA *pQVar6;
  Q_WORDDATA *pQVar7;
  ulong uVar8;
  undefined4 uVar9;
  int iVar10;
  float *pfVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  float *pfVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float rot_x;
  float rot_y;
  float tx [825];
  float ty [825];
  float slm [4] [4];
  float wlm [4] [4];
  float pos [4];
  float vt [825] [4];
  float vtw [825] [4];
  _DRAW_ENV_5 local_d0;
  int local_a0;
  uint local_9c;
  
  iVar12 = 0;
  local_9c = (uint)alp;
  fVar20 = 24.0;
  pos._8_8_ = DAT_003a8028;
  pos._0_8_ = DAT_003a8020;
  local_a0 = type;
  pGVar3 = gra3dGetCamera__Fv();
  pafVar4 = gra3dcamGetDirection__Fv();
  pafVar5 = gra3dcamGetPosition__Fv();
  fVar16 = 2048.0;
  fVar21 = 32.0;
  Vector2Rot__FPCfPfT1((float *)pafVar4,&rot_x,&rot_y);
  pos[1] = (*pafVar5)[1] + (*pafVar4)[1] * 2000.0;
  pos[0] = (*pafVar5)[0] + (*pafVar4)[0] * 2000.0;
  pos[2] = (*pafVar5)[2] + (*pafVar4)[2] * 2000.0;
  LocalCopyLtoL__Fiii(3,(int)(((sys_wrk.count & 1) * 0x23 << 0x27) >> 0x20),0x2bc0);
  sceVu0UnitMatrix(wlm);
  wlm[0][0] = 25.0;
  wlm[2][2] = 25.0;
  wlm[1][1] = 25.0;
  sceVu0TransMatrix(wlm,wlm,pos);
  sceVu0MulMatrix(slm,pGVar3->matWorldScreen,wlm);
  pfVar11 = tx;
  pafVar5 = vtw;
  pfVar15 = ty;
  pafVar4 = vt;
  do {
    iVar13 = iVar12 / 0x21;
    iVar10 = iVar12 % 0x21;
    iVar12 = iVar12 + 1;
    (*pafVar4)[2] = 0.0;
    (*pafVar4)[3] = 1.0;
    (*pafVar4)[0] = ((float)iVar10 + (float)iVar10) - 32.0;
    (*pafVar4)[1] = ((float)iVar13 + (float)iVar13) - fVar20;
    sceVu0ApplyMatrix(pafVar5,slm,pafVar4);
    sceVu0DivVector((*pafVar5)[3],pafVar5,pafVar5);
    fVar18 = 0.0;
    fVar19 = 0.0;
    *pfVar11 = ((*pafVar5)[0] - fVar16) + 320.0;
    *pfVar15 = ((*pafVar5)[1] - fVar16) + 224.0;
    fVar17 = *pfVar11;
    pafVar5 = pafVar5[1];
    if ((0.0 <= fVar17) && (fVar18 = DAT_003edf9c, fVar17 <= DAT_003edf9c)) {
      fVar18 = fVar17;
    }
    *pfVar11 = fVar18;
    fVar18 = *pfVar15;
    if ((0.0 <= fVar18) && (fVar19 = DAT_003edfa0, fVar18 <= DAT_003edfa0)) {
      fVar19 = fVar18;
    }
    *pfVar15 = fVar19;
    *pfVar11 = *pfVar11 * 0.5;
    pfVar11 = pfVar11 + 1;
    pfVar15 = pfVar15 + 1;
    pafVar4 = pafVar4[1];
  } while (iVar12 < 0x339);
  fVar20 = rate / 25.0;
  if (eff_deform.init == '\0') {
    pafVar4 = vt;
    iVar12 = 0;
    do {
      iVar13 = iVar12 + 1;
      fVar19 = (float)(&lll_1073)[iVar12];
      fVar21 = sinf((float)(&mm1_1074)[iVar12] - r_1078);
      fVar18 = (float)(&sss_1076)[iVar12];
      fVar16 = (float)(&ccc_1077)[iVar12];
      fVar21 = fVar21 * fVar20 * (float)(&mm2_1075)[iVar12];
      (*pafVar4)[0] = fVar18 * fVar19 - fVar16 * fVar21;
      (*pafVar4)[1] = fVar16 * fVar19 + fVar18 * fVar21;
      pafVar4 = pafVar4[1];
      iVar12 = iVar13;
    } while (iVar13 < 0x339);
    add_1079 = DAT_003edfa8;
    iVar12 = EffWrkStopFlgGet__Fv();
    if ((iVar12 == 0) && (r_1078 = r_1078 + add_1079, DAT_003edfac < r_1078)) {
      r_1078 = r_1078 - DAT_003edfac;
    }
    iVar12 = 0;
    pafVar5 = vt;
    pafVar4 = vtw;
    do {
      iVar12 = iVar12 + 1;
      sceVu0ApplyMatrix(pafVar4,slm,pafVar5);
      pafVar5 = pafVar5[1];
      sceVu0DivVector((*pafVar4)[3],pafVar4,pafVar4);
      pafVar4 = pafVar4[1];
    } while (iVar12 < 0x339);
    local_d0.alpha = DAT_003a7ff0;
    local_d0.tex1 = DAT_003a7ff8;
    local_d0.clamp = DAT_003a8000;
    local_d0.test = DAT_003a8008;
    local_d0.zbuf = DAT_003a8010;
    SetDrawEnv__FiPC11_DRAW_ENV_5(0,&local_d0);
    Reserve2DPacket__FUi(0x10);
    pQVar6 = StartDmaDirectTrans__Fv();
    iVar12 = swch_1080;
    pQVar6->ul64[0] = 0x1000000000008002;
    pQVar6->ul64[1] = 0xe;
    *(undefined8 *)((int)pQVar6 + 0x18) = 0x3f;
    pQVar6[1].ul64[0] = 0;
    *(undefined8 *)((int)pQVar6 + 0x28) = 6;
    pQVar6[2].ul64[0] = 0x2000000264016bc0;
    if (iVar12 == 0) {
      uVar8 = 0x60ae0000;
    }
    else {
      uVar8 = 0x60e20000;
    }
    pQVar6[3].ul64[0] = (uVar8 | 0x4000) << 0x20 | 0x8318;
    *(undefined8 *)((int)pQVar6 + 0x38) = 0x413413;
    iVar12 = swch_1080;
    iVar13 = 4;
    iVar14 = 0;
    pfVar15 = tx;
    pafVar4 = vtw;
    pfVar11 = ty;
    pQVar7 = pQVar6 + 4;
    iVar10 = 0x21;
    do {
      uVar9 = 0x8000;
      pQVar7->ui32[0] = (int)(*pfVar15 * 16.0);
      fVar20 = *pfVar11;
      pQVar7->ui32[2] = 0;
      pQVar7->ui32[3] = 0;
      pQVar7->ui32[1] = (int)(fVar20 * 16.0);
      if (iVar14 % 0x21 != 0) {
        uVar9 = 0;
      }
      if (iVar12 == 0) {
        pQVar7[1].ui32[0] = 0x80;
        *(undefined4 *)((int)pQVar7 + 0x14) = 0x80;
        *(undefined4 *)((int)pQVar7 + 0x18) = 0x80;
      }
      else {
        iVar2 = iVar14 % 0xff;
        pQVar7[1].iv[0] = iVar2;
        *(int *)((int)pQVar7 + 0x14) = iVar2;
        *(int *)((int)pQVar7 + 0x18) = iVar2;
      }
      *(undefined4 *)((int)pQVar7 + 0x1c) = 0x80;
      pQVar7[2].ui32[0] = (int)((*pafVar4)[0] * 16.0);
      *(int *)((int)pQVar7 + 0x24) = (int)((*pafVar4)[1] * 16.0);
      fVar20 = (*pafVar4)[2];
      *(undefined4 *)((int)pQVar7 + 0x2c) = uVar9;
      *(int *)((int)pQVar7 + 0x28) = (int)(fVar20 * 16.0);
      pfVar1 = pfVar15 + 0x21;
      pfVar15 = pfVar15 + 1;
      pQVar7[3].ui32[0] = (int)(*pfVar1 * 16.0);
      fVar20 = pfVar11[0x21];
      pfVar11 = pfVar11 + 1;
      *(undefined4 *)((int)pQVar7 + 0x38) = 0;
      *(undefined4 *)((int)pQVar7 + 0x3c) = 0;
      *(int *)((int)pQVar7 + 0x34) = (int)(fVar20 * 16.0);
      if (iVar12 == 0) {
        pQVar7[4].ui32[0] = 0x80;
        *(undefined4 *)((int)pQVar7 + 0x44) = 0x80;
        *(undefined4 *)((int)pQVar7 + 0x48) = 0x80;
      }
      else {
        iVar2 = iVar10 % 0xff;
        pQVar7[4].iv[0] = iVar2;
        *(int *)((int)pQVar7 + 0x44) = iVar2;
        *(int *)((int)pQVar7 + 0x48) = iVar2;
      }
      *(uint *)((int)pQVar7 + 0x4c) = local_9c;
      iVar14 = iVar14 + 1;
      iVar13 = iVar13 + 6;
      iVar10 = iVar10 + 1;
      pQVar7[5].ui32[0] = (int)(pafVar4[0x21][0] * 16.0);
      *(int *)((int)pQVar7 + 0x54) = (int)(pafVar4[0x21][1] * 16.0);
      fVar20 = pafVar4[0x21][2];
      pafVar4 = pafVar4[1];
      *(undefined4 *)((int)pQVar7 + 0x5c) = uVar9;
      *(int *)((int)pQVar7 + 0x58) = (int)(fVar20 * 16.0);
      pQVar7 = pQVar7 + 6;
    } while (iVar14 < 0x318);
    EndDmaDirectTrans__FP10Q_WORDDATA(pQVar6 + iVar13);
    eff_deform.type = (uchar)local_a0;
    eff_deform.pass = '\x01';
    return;
  }
                    /* inlined from ../../graphics/graph3d/g3dxVu0.h */
  _qmtc2((0.0 - fVar21) * (0.0 - fVar21) + 576.0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

static void SetDeform3(int type, float rate, u_char alp) {
	static float r = 0.f;
	static float add = 6.f;
	static int swch = 0;
	int i;
	int j;
	int c;
	int pnumw;
	int pnumh;
	int ndpkt;
	float wfw;
	float wfh;
	float fw;
	float lm;
	float cntw;
	float cnth;
	float fx;
	float fy;
	float tx[25][33];
	float ty[25][33];
	float vt[25][33][4];
	float vtw[25][33][4];
	Q_WORDDATA *pbuf;
	
  float *pfVar1;
  Q_WORDDATA *pQVar2;
  int iVar3;
  float (*pafVar4) [4];
  ulong uVar5;
  float *pfVar6;
  int iVar7;
  float *pfVar8;
  undefined4 uVar9;
  int iVar10;
  Q_WORDDATA *pQVar11;
  float (*pafVar12) [33];
  uint uVar13;
  int iVar14;
  DEFWORK *pDVar15;
  int iVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float tx [25] [33];
  float ty [25] [33];
  float vt [25] [33] [4];
  float vtw [25] [33] [4];
  _DRAW_ENV_5 local_f0;
  int local_c0;
  int local_b0;
  
  pafVar12 = tx;
  iVar17 = 0;
  fVar20 = 320.0;
  local_c0 = type;
  LocalCopyLtoL__Fiii(3,(int)(((sys_wrk.count & 1) * 0x23 << 0x27) >> 0x20),0x2bc0);
  iVar14 = 0;
  iVar10 = 0;
  do {
    pafVar4 = vt[iVar10 + iVar17];
    iVar16 = 0;
    iVar7 = iVar14 << 2;
    pfVar8 = (float *)ty;
    do {
      pfVar1 = (float *)((int)tx + iVar7);
      pfVar6 = (float *)((int)ty + iVar7);
      iVar7 = iVar7 + 4;
      (*pafVar4)[0] = 2048.0;
      (*pafVar4)[1] = 2048.0;
      (*pafVar4)[2] = 0.0;
      (*pafVar4)[3] = 1.0;
      pafVar4 = pafVar4[1];
      *pfVar1 = ((float)iVar16 * 320.0) / 32.0;
      *pfVar6 = ((float)iVar17 * 448.0) / 24.0;
      if (iVar16 == 0) {
        *(float *)pafVar12 = *(float *)pafVar12 + 1.0;
      }
      if (iVar16 == 0x20) {
        *pfVar1 = *pfVar1 - 1.0;
      }
      if (iVar17 == 0) {
        *pfVar8 = *pfVar8 + 1.0;
      }
      iVar16 = iVar16 + 1;
      if (iVar17 == 0x18) {
        *pfVar6 = *pfVar6 - 1.0;
      }
      pfVar8 = pfVar8 + 1;
    } while (iVar16 < 0x21);
    iVar17 = iVar17 + 1;
    pafVar12 = (float (*) [33])((int)pafVar12 + 0x84);
    iVar14 = iVar14 + 0x21;
    iVar10 = iVar10 + 0x20;
  } while (iVar17 < 0x19);
  if (eff_deform.init != '\0') {
    fVar21 = (DAT_003edfb0 * 0.0 - 224.0) + -0.5;
    fVar20 = (0.0 - fVar20) + -0.5;
                    /* inlined from ../../graphics/graph3d/g3dxVu0.h */
    _qmtc2(fVar20 * fVar20 + fVar21 * fVar21);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar14 = 0;
  iVar10 = 0;
  do {
    pafVar4 = (float (*) [4])vtw[iVar14];
    pDVar15 = dw + (iVar10 + iVar14) * 0xb;
    iVar10 = 0x20;
    do {
      iVar10 = iVar10 + -1;
      fVar22 = pDVar15->lll;
      fVar20 = sinf(pDVar15->mm1 - r_1084);
      pfVar8 = &pDVar15->mm2;
      fVar19 = pDVar15->ccc;
      fVar18 = pDVar15->sss;
      fVar21 = pDVar15->sss;
      pDVar15 = pDVar15 + 1;
      fVar20 = fVar20 * rate * 0.25 * *pfVar8;
      (*(float (*) [4])*pafVar4)[2] = 0.0;
      (*(float (*) [4])*pafVar4)[1] = fVar19 * fVar22 + fVar21 * fVar20;
      (*(float (*) [4])*pafVar4)[0] = fVar18 * fVar22 - fVar19 * fVar20;
      pafVar4 = pafVar4[1];
    } while (-1 < iVar10);
    iVar14 = iVar14 + 1;
    iVar10 = iVar14 * 2;
  } while (iVar14 < 0x19);
  add_1085 = DAT_003edfb8;
  iVar10 = EffWrkStopFlgGet__Fv();
  if ((iVar10 == 0) && (r_1084 = r_1084 + add_1085, DAT_003edfbc < r_1084)) {
    r_1084 = r_1084 - DAT_003edfbc;
  }
  local_f0.alpha = DAT_003a7ff0;
  local_f0.tex1 = DAT_003a7ff8;
  local_f0.clamp = DAT_003a8000;
  local_f0.test = DAT_003a8008;
  local_f0.zbuf = DAT_003a8010;
  SetDrawEnv__FiPC11_DRAW_ENV_5(0,&local_f0);
  pQVar2 = StartDmaDirectTrans__Fv();
  Reserve2DPacket__FUi(0x10);
  iVar10 = swch_1086;
  pQVar2->ul64[0] = 0x1000000000008002;
  pQVar2->ul64[1] = 0xe;
  *(undefined8 *)((int)pQVar2 + 0x18) = 0x3f;
  pQVar2[1].ul64[0] = 0;
  *(undefined8 *)((int)pQVar2 + 0x28) = 6;
  pQVar2[2].ul64[0] = 0x2000000264016bc0;
  if (iVar10 == 0) {
    uVar5 = 0x30ae400000000000;
  }
  else {
    uVar5 = 0x30e2400000000000;
  }
  pQVar2[3].ul64[0] = uVar5 | 0x8630;
  iVar14 = 4;
  *(undefined8 *)((int)pQVar2 + 0x38) = 0x431;
  iVar10 = swch_1086;
  iVar17 = 0;
  local_b0 = swch_1086;
  do {
    iVar7 = 0;
    uVar13 = 0;
    pQVar11 = pQVar2 + iVar14;
    do {
      if (iVar10 == 0) {
        pQVar11->ui32[0] = 0x80;
        pQVar11->ui32[1] = 0x80;
        pQVar11->ui32[2] = 0x80;
      }
      else {
        pQVar11->ui32[0] = uVar13;
        pQVar11->ui32[1] = uVar13;
        pQVar11->ui32[2] = uVar13;
      }
      pQVar11->ui32[3] = (uint)alp;
      uVar9 = 0x8000;
      iVar16 = iVar7 / 2;
      if (1 < iVar7) {
        uVar9 = 0;
      }
      iVar14 = iVar14 + 3;
      iVar3 = iVar7 % 2;
      iVar7 = iVar7 + 1;
      iVar3 = iVar3 + iVar17;
      uVar13 = uVar13 + 1;
      pQVar11[1].ui32[0] = (int)(tx[iVar3][iVar16] * 16.0);
      fVar20 = ty[iVar3][iVar16];
      *(undefined4 *)((int)pQVar11 + 0x18) = 0;
      *(undefined4 *)((int)pQVar11 + 0x1c) = 0;
      *(int *)((int)pQVar11 + 0x14) = (int)(fVar20 * 16.0);
      pQVar11[2].ui32[0] = (int)((vt[iVar3][iVar16][0] + vtw[iVar3][iVar16][0]) * 16.0);
      *(int *)((int)pQVar11 + 0x24) = (int)((vt[iVar3][iVar16][1] + vtw[iVar3][iVar16][1]) * 16.0);
      *(int *)((int)pQVar11 + 0x28) = (int)((vt[iVar3][iVar16][2] + vtw[iVar3][iVar16][2]) * 16.0);
      *(undefined4 *)((int)pQVar11 + 0x2c) = uVar9;
      pQVar11 = pQVar11 + 3;
    } while (iVar7 < 0x42);
    iVar17 = iVar17 + 1;
  } while (iVar17 < 0x18);
  EndDmaDirectTrans__FP10Q_WORDDATA(pQVar2 + iVar14);
  eff_deform.type = (uchar)local_c0;
  eff_deform.pass = '\x01';
  return;
}

static void SetDeform4(int type, float rate, u_char alp) {
	static float r = 0.f;
	static float add = 6.f;
	int i;
	int j;
	float wfw;
	float wfh;
	float f;
	float lw;
	float fw;
	float fx;
	float fy;
	float fz;
	SCRDEF scrdef[25][33];
	DEFWORK *pdef;
	sceGsTex0 sd1;
	
  float *pfVar1;
  SCRDEF *pSVar2;
  float *pfVar3;
  SCRDEF *pSVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  SCRDEF scrdef [25] [33];
  sceGsTex0 sd1;
  
  iVar7 = 0;
  LocalCopyLtoL__Fiii(3,(int)(((sys_wrk.count & 1) * 0x23 << 0x27) >> 0x20),0x2bc0);
  pSVar4 = scrdef + 0x20;
  iVar5 = 0;
  do {
    pSVar2 = scrdef + iVar5 + iVar7;
    iVar6 = 0;
    do {
      fVar8 = (float)iVar6;
      iVar6 = iVar6 + 1;
      pSVar2->stq[1] = ((float)iVar7 * 448.0) / 24.0;
      pSVar2->stq[0] = fVar8 * 320.0 * 0.03125;
      pSVar2 = pSVar2 + 1;
    } while (iVar6 < 0x21);
    iVar7 = iVar7 + 1;
    fVar8 = pSVar4->stq[0];
    iVar5 = iVar5 + 0x20;
    (*(SCRDEF (*) [33])(pSVar4 + -0x20))[0].stq[0] =
         (*(SCRDEF (*) [33])(pSVar4 + -0x20))[0].stq[0] + 1.0;
    pSVar4->stq[0] = fVar8 - 1.0;
    pSVar4 = pSVar4 + 0x21;
  } while (iVar7 < 0x19);
  pfVar3 = scrdef[0x18][0].stq + 1;
  pfVar1 = scrdef[0].stq + 1;
  iVar5 = 0x20;
  do {
    iVar5 = iVar5 + -1;
    *pfVar1 = *pfVar1 + 1.0;
    pfVar1 = pfVar1 + 8;
    *pfVar3 = *pfVar3 - 1.0;
    pfVar3 = pfVar3 + 8;
  } while (-1 < iVar5);
                    /* inlined from ../../graphics/graph3d/g3dxVu0.h */
                    /* end of inlined section */
                    /* inlined from ../../graphics/graph3d/g3dxVu0.h */
  _qmtc2(0x48150000);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

static void SetDeform5(int type, float rate, u_char alp) {
	static float r = 0.f;
	static float add = 6.f;
	int i;
	int j;
	int vnumw;
	int wix;
	int wiy;
	float wfw;
	float wfh;
	float f;
	float lw;
	float fw;
	float fx;
	float fy;
	float fz;
	SCRDEF scrdef[25][33];
	float xx;
	float yy;
	sceGsTex0 sd1;
	DEFWORK *pdef;
	
  SCRDEF *pSVar1;
  float *pfVar2;
  SCRDEF *pSVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  SCRDEF scrdef [25] [33];
  sceGsTex0 sd1;
  
  iVar7 = 0;
  LocalCopyLtoL__Fiii(3,(int)(((sys_wrk.count & 1) * 0x23 << 0x27) >> 0x20),0x2bc0);
  pSVar3 = scrdef + 0x20;
  iVar5 = 0;
  fVar9 = 0.0;
  do {
    fVar8 = 0.0;
    iVar6 = 0x20;
    pSVar1 = scrdef + iVar5 + iVar7;
    do {
      iVar6 = iVar6 + -1;
      pSVar1->stq[0] = fVar8;
      pSVar1->stq[1] = fVar9;
      pSVar1 = pSVar1 + 1;
      fVar8 = fVar8 + 10.0;
    } while (-1 < iVar6);
    iVar7 = iVar7 + 1;
    fVar8 = pSVar3->stq[0];
    iVar5 = iVar5 + 0x20;
    fVar9 = fVar9 + DAT_003edfd4;
    (*(SCRDEF (*) [33])(pSVar3 + -0x20))[0].stq[0] =
         (*(SCRDEF (*) [33])(pSVar3 + -0x20))[0].stq[0] + 1.0;
    pSVar3->stq[0] = fVar8 - 1.0;
    pSVar3 = pSVar3 + 0x21;
  } while (iVar7 < 0x19);
  pfVar4 = scrdef[0x18][0].stq + 1;
  pfVar2 = scrdef[0].stq + 1;
  iVar5 = 0x20;
  do {
    iVar5 = iVar5 + -1;
    *pfVar2 = *pfVar2 + 1.0;
    pfVar2 = pfVar2 + 8;
    *pfVar4 = *pfVar4 - 1.0;
    pfVar4 = pfVar4 + 8;
  } while (-1 < iVar5);
                    /* inlined from ../../graphics/graph3d/g3dxVu0.h */
                    /* end of inlined section */
                    /* inlined from ../../graphics/graph3d/g3dxVu0.h */
  _qmtc2(0x48150000);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

static void SetDeform6(int type, float rate, u_char alp) {
	static float r = 0.f;
	static float add = 6.f;
	int i;
	int j;
	int vnumw;
	int wix;
	int wiy;
	float wfw;
	float wfh;
	float f;
	float lw;
	float fw;
	float fx;
	float fy;
	float fz;
	SCRDEF scrdef[25][33];
	DEFWORK *pdef;
	sceGsTex0 sd1;
	
  float *pfVar1;
  SCRDEF *pSVar2;
  float *pfVar3;
  SCRDEF *pSVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  SCRDEF scrdef [25] [33];
  sceGsTex0 sd1;
  
  iVar7 = 0;
  LocalCopyLtoL__Fiii(3,(int)(((sys_wrk.count & 1) * 0x23 << 0x27) >> 0x20),0x2bc0);
  pSVar4 = scrdef + 0x20;
  iVar5 = 0;
  do {
    pSVar2 = scrdef + iVar5 + iVar7;
    iVar6 = 0;
    do {
      fVar8 = (float)iVar6;
      iVar6 = iVar6 + 1;
      pSVar2->stq[1] = ((float)iVar7 * 448.0) / 24.0;
      pSVar2->stq[0] = fVar8 * 320.0 * 0.03125;
      pSVar2 = pSVar2 + 1;
    } while (iVar6 < 0x21);
    iVar7 = iVar7 + 1;
    fVar8 = pSVar4->stq[0];
    iVar5 = iVar5 + 0x20;
    (*(SCRDEF (*) [33])(pSVar4 + -0x20))[0].stq[0] =
         (*(SCRDEF (*) [33])(pSVar4 + -0x20))[0].stq[0] + 1.0;
    pSVar4->stq[0] = fVar8 - 1.0;
    pSVar4 = pSVar4 + 0x21;
  } while (iVar7 < 0x19);
  pfVar3 = scrdef[0x18][0].stq + 1;
  pfVar1 = scrdef[0].stq + 1;
  iVar5 = 0x20;
  do {
    iVar5 = iVar5 + -1;
    *pfVar1 = *pfVar1 + 1.0;
    pfVar1 = pfVar1 + 8;
    *pfVar3 = *pfVar3 - 1.0;
    pfVar3 = pfVar3 + 8;
  } while (-1 < iVar5);
                    /* inlined from ../../graphics/graph3d/g3dxVu0.h */
                    /* end of inlined section */
                    /* inlined from ../../graphics/graph3d/g3dxVu0.h */
  _qmtc2(0x48150000);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

void SubContrast2(u_char col, u_char alp) {
	SPRT_DAT2 sd;
	DISP_SPRT2 ds;
	
  SPRT_DAT2 sd;
  DISP_SPRT2 ds;
  
  sd._8_8_ = DAT_003a8038;
  sd._16_8_ = DAT_003a8040;
  sd._24_8_ = DAT_003a8048;
  sd._32_8_ = DAT_003a8050;
  sd.tex0 = DAT_003a8030;
  sd._40_8_ = DAT_003a8058;
  CopySprDToSpr2__FP10DISP_SPRT2P9SPRT_DAT2(&ds,&sd);
  ds.tex0 = (sys_wrk.count & 1) * 0x1180 | 0x2000000268128000;
  ds.z = 0xfff00;
  ds.alpreg = 0x48;
  ds.tex1 = 0x141;
  ds.r = col;
  ds.g = col;
  ds.b = col;
  ds.alp = alp;
  DispSprD2__FP10DISP_SPRT2(&ds);
  return;
}

void SetContrast2(EFFECT_CONT *ec) {
  SubContrast2__FUcUc((ec->dat).uc8[2],(ec->dat).uc8[3]);
  if (((ec->dat).uc8[1] & 1) != 0) {
    ResetEffects__FPv(ec);
  }
  return;
}

void SubContrast3(u_char col, u_char alp) {
	SPRT_DAT2 sd;
	DISP_SPRT2 ds;
	
  SPRT_DAT2 sd;
  DISP_SPRT2 ds;
  
  sd.tex0 = DAT_003a8030;
  sd._16_8_ = DAT_003a8040;
  sd._8_8_ = DAT_003a8038;
  sd._24_8_ = DAT_003a8048;
  sd._32_8_ = DAT_003a8050;
  sd._40_8_ = DAT_003a8058;
  CopySprDToSpr2__FP10DISP_SPRT2P9SPRT_DAT2(&ds,&sd);
  ds.gftg = 0x144;
  ds.z = 0xfff00;
  ds.alpreg = 0x84;
  ds.r = col;
  ds.g = col;
  ds.b = col;
  ds.alp = alp;
  DispSprD2__FP10DISP_SPRT2(&ds);
  DispSprD2__FP10DISP_SPRT2(&ds);
  return;
}

void SetContrast3(EFFECT_CONT *ec) {
  SubContrast3__FUcUc((ec->dat).uc8[2],(ec->dat).uc8[3]);
  if (((ec->dat).uc8[1] & 1) != 0) {
    ResetEffects__FPv(ec);
  }
  return;
}

void SubNega(u_char r, u_char g, u_char b, u_char alp, u_char alp2) {
	SPRT_DAT2 sd;
	DISP_SPRT2 ds;
	
  SPRT_DAT2 sd;
  DISP_SPRT2 ds;
  
  sd.tex0 = DAT_003a8060;
  sd._8_8_ = DAT_003a8068;
  sd._16_8_ = DAT_003a8070;
  sd._24_8_ = DAT_003a8078;
  sd._32_8_ = DAT_003a8080;
  sd._40_8_ = DAT_003a8088;
  LocalCopyLtoL__Fiii(3,(int)(((sys_wrk.count & 1) * 0x23 << 0x27) >> 0x20),0x2bc0);
  CopySprDToSpr2__FP10DISP_SPRT2P9SPRT_DAT2(&ds,&sd);
  ds.z = 0xfff00;
  ds.alpreg = 0x84;
  ds.gftg = 0x144;
  ds.r = r;
  ds.g = g;
  ds.b = b;
  ds.alp = alp;
  DispSprD2__FP10DISP_SPRT2(&ds);
  ds.alp = 0x80 - alp2;
  ds.b = 0x80;
  ds.r = 0x80;
  ds.g = 0x80;
  if ((int)((uint)alp2 << 0x18) < 0) {
    ds.alp = '\0';
  }
  ds.alpreg = 0x44;
  ds.test = 0x30003;
  ds.gftg = 0x154;
  ds.tex0 = 0x2000000264116bc0;
  DispSprD2__FP10DISP_SPRT2(&ds);
  return;
}

void SetNega(EFFECT_CONT *ec) {
	u_char col;
	u_char alp;
	u_char alp2;
	
  uint uVar1;
  uchar r;
  uchar alp2;
  uchar alp;
  
  alp2 = '\0';
  if (((ec->dat).uc8[1] & 4) == 0) {
    r = (ec->dat).uc8[2];
                    /* WARNING: Load size is inaccurate */
    alp2 = *ec->pnt[0];
    alp = (ec->dat).uc8[3];
  }
  else {
    uVar1 = ec->flow;
    r = (ec->dat).uc8[2];
    alp = (ec->dat).uc8[3];
    if (uVar1 == 0) {
      if (ec->in == 0) {
        trap(7);
      }
      alp2 = (uchar)((int)(ec->cnt << 7) / (int)ec->in);
    }
    else if (uVar1 == 1) {
      alp2 = 0x80;
    }
    else if (uVar1 == 2) {
      uVar1 = ec->out;
      if (uVar1 == 0) {
        trap(7);
      }
      alp2 = (uchar)((int)((uVar1 - ec->cnt) * 0x80) / (int)uVar1);
    }
    else if (uVar1 == 3) {
      ResetEffects__FPv(ec);
    }
    EffInKeepOutFlowCtrl__FP11EFFECT_CONT(ec);
  }
  SubNega__FUcUcUcUcUc(r,r,r,alp,alp2);
  if (((ec->dat).uc8[1] & 1) != 0) {
    ResetEffects__FPv(ec);
  }
  return;
}

void* CallNega2(int in, int keep, int out) {
  void *pvVar1;
  
  pvVar1 = SetEffects__Fiie(0xc,4);
  return pvVar1;
}

void* CallNega(int time) {
  void *pvVar1;
  
  pvVar1 = CallNega2__Fiii(0,time,0);
  return pvVar1;
}

void SetOverRap(EFFECT_CONT *ec) {
	static float cx = 0.f;
	static float cy = 0.f;
	static float cz = 0.f;
	static float alp = 0.f;
	float x;
	float y;
	float z;
	float fn;
	int fl;
	SPRT_DAT2 sd;
	DISP_SPRT2 ds;
	
  byte bVar1;
  bool bVar2;
  float (*pafVar3) [4];
  int iVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined local_200 [48];
  DISP_SPRT2 DStack_1d0;
  _DRAW_ENV_5 local_140;
  SPRT_DAT2 sd;
  DISP_SPRT2 ds;
  
  bVar2 = false;
  pafVar3 = gra3dcamGetPosition__Fv();
  fVar8 = (*pafVar3)[0];
  overlap_passflg[0] = 1;
  fVar6 = (*pafVar3)[2];
  fVar7 = (*pafVar3)[1];
  dVar5 = (double)(cx_1129 - fVar8);
  iVar4 = dpcmp((long)dVar5,0);
  if (iVar4 < 0) {
    dVar5 = 0.0 - dVar5;
  }
  iVar4 = dpcmp((long)dVar5,0x4060000000000000);
  if (iVar4 < 1) {
    dVar5 = (double)(cy_1130 - fVar7);
    iVar4 = dpcmp((long)dVar5,0);
    if (iVar4 < 0) {
      dVar5 = 0.0 - dVar5;
    }
    iVar4 = dpcmp((long)dVar5,0x4060000000000000);
    if (iVar4 < 1) {
      dVar5 = (double)(cz_1131 - fVar6);
      iVar4 = dpcmp((long)dVar5,0);
      if (iVar4 < 0) {
        dVar5 = 0.0 - dVar5;
      }
      iVar4 = dpcmp((long)dVar5,0x4060000000000000);
      if (0 < iVar4) {
        bVar2 = true;
      }
    }
    else {
      bVar2 = true;
    }
  }
  else {
    bVar2 = true;
  }
  iVar4 = GetApproachCameraCrossFade__Fv();
  if (iVar4 != 0) {
    bVar2 = true;
    ApproachCameraCrossFadeSW__Fi(0);
  }
  cx_1129 = fVar8;
  cy_1130 = fVar7;
  cz_1131 = fVar6;
  if (((bVar2) && (alp_1132 <= 0.0)) || (overlap_passflg[0] != overlap_passflg[1])) {
    LocalCopyLtoB__Fiii(0,0,(int)(((sys_wrk.count + 1 & 1) * 0x23 << 0x27) >> 0x20));
    EffImageHalf32__FPUiUiUi((uint *)0x1e79b00,0x280,0x1c0);
    alp_1132 = 128.0;
  }
  if (alp_1132 == 128.0) {
    local_200._0_8_ = DAT_003a8030;
    local_200._8_4_ = (float)DAT_003a8038;
    local_200._12_4_ = DAT_003a8038._4_4_;
    local_200._16_4_ = (float)DAT_003a8040;
    local_200._20_4_ = DAT_003a8040._4_4_;
    local_140.tex1 = DAT_003a8098;
    local_200._24_4_ = (float)DAT_003a8048;
    local_200._28_4_ = DAT_003a8048._4_4_;
    local_200._32_4_ = (float)DAT_003a8050;
    local_200._36_4_ = DAT_003a8050._4_4_;
    local_200._40_4_ = (int)DAT_003a8058;
    local_200[44] = DAT_003a8058._4_1_;
    local_200._45_3_ = DAT_003a8058._5_3_;
    local_140.alpha = DAT_003a8090;
    local_140.clamp = DAT_003a80a0;
    local_140.test = DAT_003a80a8;
    local_140.zbuf = DAT_003a80b0;
    SetDrawEnv__FiPC11_DRAW_ENV_5(0,&local_140);
    CopySprDToSpr2__FP10DISP_SPRT2P9SPRT_DAT2(&DStack_1d0,(SPRT_DAT2 *)local_200);
    DStack_1d0.z = 0xfff00;
    DStack_1d0.alpreg = 0x44;
    DStack_1d0.tex1 = 0x141;
    DStack_1d0.tex0 = (sys_wrk.count + 1 & 1) * 0x1180 | 0x2000000268128000;
    DispSprD2__FP10DISP_SPRT2(&DStack_1d0);
  }
  else {
    if (alp_1132 <= 0.0) {
      bVar1 = (ec->dat).uc8[2];
      goto LAB_00162d68;
    }
    LocalCopyBtoL__Fiii(2,0,0x2bc0);
    sd.u1 = (float)DAT_003a8068;
    sd.v1 = DAT_003a8068._4_4_;
    sd.tex0 = DAT_003a8060;
    sd.u2 = (float)DAT_003a8070;
    sd.v2 = DAT_003a8070._4_4_;
    sd.w = (float)DAT_003a8078;
    sd.h = DAT_003a8078._4_4_;
    sd.x = (float)DAT_003a8080;
    sd.y = DAT_003a8080._4_4_;
    sd.pri = (int)DAT_003a8088;
    sd.alpha = DAT_003a8088._4_1_;
    sd._45_3_ = DAT_003a8088._5_3_;
    CopySprDToSpr2__FP10DISP_SPRT2P9SPRT_DAT2(&ds,&sd);
    ds.tex0 = 0x2000000264116bc0;
    ds.z = 0xfff00;
    fVar6 = alp_1132;
    if (2.147484e+09 <= alp_1132) {
      fVar6 = alp_1132 - 2.147484e+09;
    }
    ds.alpreg = ((long)(int)fVar6 & 0xffU) << 0x20 | 100;
    DispSprD2__FP10DISP_SPRT2(&ds);
  }
  bVar1 = (ec->dat).uc8[2];
LAB_00162d68:
  if (bVar1 == 0) {
    fVar6 = 8.0;
  }
  else {
    fVar6 = 128.0 / (float)(uint)bVar1;
  }
  alp_1132 = alp_1132 - fVar6;
  if (alp_1132 <= 0.0) {
    alp_1132 = 0.0;
  }
  if (((ec->dat).uc8[1] & 1) != 0) {
    ResetEffects__FPv(ec);
  }
  return;
}

void SetForcusDepth(EFFECT_CONT *ec) {
	int i;
	int zi[2];
	float bai[2];
	float wlm[4][4];
	float slm[4][4];
	float vt[4];
	float vtww[4];
	sceVu0IVECTOR ivec;
	GRA3DCAMERA *pCam;
	float &cam_pos[4];
	
  uint uVar1;
  ulong *puVar2;
  GRA3DCAMERA *pGVar3;
  float (*pafVar4) [4];
  float *pfVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  int zi [2];
  float bai [2];
  float wlm [4] [4];
  float slm [4] [4];
  float vt [4];
  float vtww [4];
  int ivec [4];
  undefined local_130 [48];
  DISP_SPRT2 DStack_100;
  EFFECT_CONT *local_70;
  
  local_70 = ec;
  uVar1 = (int)bai + 7U & 7;
  puVar2 = (ulong *)(((int)bai + 7U) - uVar1);
  *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | (ulong)DAT_003effe0 >> (7 - uVar1) * 8;
  bai = DAT_003effe0;
  memset(vt,0,0x10);
  vt[3] = 1.0;
  pGVar3 = gra3dGetCamera__Fv();
  pafVar4 = gra3dcamGetPosition__Fv();
  fVar8 = 25.0;
  iVar6 = 0;
  do {
    pfVar5 = bai + iVar6;
    iVar7 = iVar6 + 1;
    vtww[0] = (pGVar3->vTarget[0] - (*pafVar4)[0]) * *pfVar5 + (*pafVar4)[0];
    vtww[1] = (pGVar3->vTarget[1] - (*pafVar4)[1]) * *pfVar5 + (*pafVar4)[1];
    vtww[3] = 1.0;
    vtww[2] = (pGVar3->vTarget[2] - (*pafVar4)[2]) * *pfVar5 + (*pafVar4)[2];
    sceVu0UnitMatrix(wlm);
    wlm[0][0] = fVar8;
    wlm[1][1] = fVar8;
    wlm[2][2] = fVar8;
    sceVu0TransMatrix(wlm,wlm,vtww);
    sceVu0MulMatrix(slm,pGVar3->matWorldScreen,wlm);
    sceVu0RotTransPers(ivec,slm,vt,0);
    zi[iVar6] = ivec[2];
    iVar6 = iVar7;
  } while (iVar7 < 2);
  local_130._0_8_ = DAT_003a80b8;
  local_130._8_4_ = (float)DAT_003a80c0;
  local_130._12_4_ = DAT_003a80c0._4_4_;
  local_130._16_4_ = (float)DAT_003a80c8;
  local_130._20_4_ = DAT_003a80c8._4_4_;
  local_130._24_4_ = (float)DAT_003a80d0;
  local_130._28_4_ = DAT_003a80d0._4_4_;
  local_130._32_4_ = (float)DAT_003a80d8;
  local_130._36_4_ = DAT_003a80d8._4_4_;
  local_130._40_4_ = (int)DAT_003a80e0;
  local_130[44] = DAT_003a80e0._4_1_;
  local_130._45_3_ = DAT_003a80e0._5_3_;
  CopySprDToSpr2__FP10DISP_SPRT2P9SPRT_DAT2(&DStack_100,(SPRT_DAT2 *)local_130);
  DStack_100.alp = '@';
  DStack_100.zbuf = 0xa000118;
  DStack_100.test = 0x5000d;
  DStack_100.z = zi[1];
  DStack_100.tex0 = (sys_wrk.count & 1) * 0x1180 | 0x2000000268128000;
  DispSprD2__FP10DISP_SPRT2(&DStack_100);
  DStack_100.alp = '(';
  DStack_100.z = zi[0];
  DispSprD2__FP10DISP_SPRT2(&DStack_100);
  if (((local_70->dat).uc8[1] & 1) != 0) {
    ResetEffects__FPv(local_70);
  }
  return;
}

static void MakeDitherPattern(u_int alpmx, u_int colmx) {
	MAKE_DITHER_PATTERN_CTRL *pCtrl;
	
  uchar alpmx_00;
  uchar colmx_00;
  uint uVar1;
  
  if ((alpmx < 0x100) && (colmx < 0x100)) {
    uVar1 = (uint)MakeDitherPatternCtrl.OldAlpha;
    alpmx_00 = (uchar)alpmx;
    colmx_00 = (uchar)colmx;
    if (uVar1 == alpmx) {
      if ((MakeDitherPatternCtrl.OldColor == colmx) && (MakeDitherPatternCtrl.MakeFlg != '\0')) {
        MakeDitherPatternCtrl.MakeFlg = '\0';
        MakeRDither3__FUcUc(alpmx_00,colmx_00);
        uVar1 = (uint)MakeDitherPatternCtrl.OldAlpha;
      }
      if ((uVar1 == alpmx) && (MakeDitherPatternCtrl.OldColor == colmx)) {
        MakeDitherPatternCtrl.OldAlpha = alpmx_00;
        MakeDitherPatternCtrl.OldColor = colmx_00;
        return;
      }
    }
    MakeDitherPatternCtrl.MakeFlg = '\x01';
    MakeDitherPatternCtrl.OldAlpha = alpmx_00;
    MakeDitherPatternCtrl.OldColor = colmx_00;
  }
  return;
}

static void MakeRDither3(u_char alpmx, u_char colmx) {
	u_char pat[16384];
	u_int pal[256];
	int i;
	static sceGsLoadImage gs_limage1;
	static sceGsLoadImage gs_limage2;
	
  float fVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uchar *puVar6;
  uint *puVar7;
  uchar uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  uchar pat [16384];
  uint pal [256];
  
  fVar11 = DAT_003ee000;
  fVar10 = (float)(uint)alpmx;
  iVar5 = 0;
  do {
    puVar6 = pat + iVar5;
                    /* inlined from ../../graphics/effect/effect.h */
    iVar5 = iVar5 + 1;
    iVar2 = rand();
    fVar1 = DAT_003ee004;
    fVar9 = fVar10 * ((float)iVar2 / fVar11);
    uVar8 = (uchar)(int)fVar9;
    if (2.147484e+09 <= fVar9) {
      uVar8 = (uchar)(int)(fVar9 - 2.147484e+09);
    }
                    /* end of inlined section */
    *puVar6 = uVar8;
  } while (iVar5 < 0x4000);
  fVar11 = (float)(uint)colmx;
  iVar5 = 0;
  puVar7 = pal;
  do {
                    /* inlined from ../../graphics/effect/effect.h */
    iVar2 = rand();
                    /* end of inlined section */
    uVar4 = iVar5 << 0x18;
    iVar5 = iVar5 + 1;
                    /* inlined from ../../graphics/effect/effect.h */
    fVar10 = fVar11 * ((float)iVar2 / fVar1);
    if (2.147484e+09 <= fVar10) {
      fVar10 = fVar10 - 2.147484e+09;
    }
    uVar3 = (int)fVar10 & 0xff;
                    /* end of inlined section */
    *puVar7 = uVar4 | uVar3 | uVar3 << 8 | uVar3 << 0x10;
    puVar7 = puVar7 + 1;
  } while (iVar5 < 0x100);
  sceGsSetDefLoadImage(0x473660,0x2200,2,0x1b,0,0,0x80,0x80);
  sceGsSetDefLoadImage(0x4736c0,0x3ffc,1,0,0,0,0x10,0x10);
  FlushCache(0);
  sceGsExecLoadImage(0x473660,pat);
  sceGsExecLoadImage(0x4736c0,pal);
  g3dGsSyncPath__FiUs(0,0);
  return;
}

void SubDither3(int type, float alp, float spd, u_char alpmx, u_char colmx) {
	static float old_cam_i[4] = {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	};
	static float cnf = 0.f;
	static float cx = 0.f;
	static float cy = 0.f;
	static int fl = 1;
	int alpr;
	float tx;
	float ty;
	float otx;
	float oty;
	float mvx;
	float mvy;
	u_char r;
	u_char g;
	u_char b;
	GRA3DCAMERA *pCam;
	SPRT_DAT2 sd;
	DISP_SPRT2 ds;
	float *pv0;
	float *pv0;
	
  undefined8 uVar1;
  uchar uVar2;
  uchar uVar3;
  GRA3DCAMERA *pGVar4;
  int iVar5;
  ulong uVar6;
  uchar uVar7;
  uchar uVar8;
  float fVar9;
  float fVar10;
  float tx;
  float ty;
  float otx;
  float oty;
  SPRT_DAT2 sd;
  DISP_SPRT2 ds;
  
  uVar6 = 0x44;
  pGVar4 = gra3dGetCamera__Fv();
  sd.tex0 = DAT_003a80e8;
  sd.u1 = (float)DAT_003a80f0;
  sd.v1 = DAT_003a80f0._4_4_;
  sd.u2 = (float)DAT_003a80f8;
  sd.v2 = DAT_003a80f8._4_4_;
  sd.w = (float)DAT_003a8100;
  sd.h = DAT_003a8100._4_4_;
  sd.x = (float)DAT_003a8108;
  sd.y = DAT_003a8108._4_4_;
  sd.pri = (int)DAT_003a8110;
  sd.alpha = DAT_003a8110._4_1_;
  sd._45_3_ = DAT_003a8110._5_3_;
  iVar5 = EffWrkDithOffGet__Fv();
  if (iVar5 != 0) {
    return;
  }
  iVar5 = PlayerModeIsFinder__Fv();
  if (iVar5 == 0) {
    if ((fl_1151 == 1) || (iVar5 = CamChangeCheck__Fv(), iVar5 != 0)) {
                    /* inlined from ../../graphics/graph3d/g3dxVu0.h */
      DAT_002fd548 = pGVar4->vTarget[2];
      DAT_002fd54c = pGVar4->vTarget[3];
      old_cam_i_1147 = (undefined4)*(undefined8 *)pGVar4->vTarget;
      DAT_002fd544 = (undefined4)((ulong)*(undefined8 *)pGVar4->vTarget >> 0x20);
      fl_1151 = 0;
    }
    else {
                    /* end of inlined section */
      fl_1151 = 0;
    }
  }
  else {
    if (fl_1151 == 0) {
                    /* inlined from ../../graphics/graph3d/g3dxVu0.h */
      DAT_002fd548 = pGVar4->vTarget[2];
      DAT_002fd54c = pGVar4->vTarget[3];
      old_cam_i_1147 = (undefined4)*(undefined8 *)pGVar4->vTarget;
      DAT_002fd544 = (undefined4)((ulong)*(undefined8 *)pGVar4->vTarget >> 0x20);
    }
    fl_1151 = 1;
  }
  uVar8 = 0x80;
  uVar7 = 0x80;
  uVar2 = 0x80;
  uVar3 = 0x80;
  switch(type) {
  case 1:
    uVar6 = 0x44;
    break;
  case 2:
    uVar6 = 0x48;
    break;
  case 3:
    goto switchD_00163454_caseD_3;
  case 4:
    uVar2 = '\0';
    uVar3 = 0x80;
    goto switchD_00163454_caseD_3;
  case 5:
    uVar2 = 0x80;
    uVar3 = '\0';
switchD_00163454_caseD_3:
    uVar8 = uVar3;
    uVar7 = uVar2;
    uVar6 = 0x41;
    break;
  case 6:
    uVar6 = 0x49;
    break;
  case 7:
    uVar6 = 0x42;
  }
  MakeDitherPattern__FUiUi((uint)alpmx,(uint)colmx);
  GetCamI2DPos__FPCfPfT1(pGVar4->vTarget,&tx,&ty);
  GetCamI2DPos__FPCfPfT1((float *)&old_cam_i_1147,&otx,&oty);
  uVar1 = *(undefined8 *)pGVar4->vTarget;
                    /* inlined from ../../graphics/graph3d/g3dxVu0.h */
  DAT_002fd548 = pGVar4->vTarget[2];
  DAT_002fd54c = pGVar4->vTarget[3];
  old_cam_i_1147 = (undefined4)uVar1;
  DAT_002fd544 = (undefined4)((ulong)uVar1 >> 0x20);
                    /* end of inlined section */
  if (tx < -2048.0) {
    tx = 0.0;
  }
  if (ty < -2048.0) {
    ty = 0.0;
  }
  if (otx < -2048.0) {
    otx = 0.0;
  }
  if (oty < -2048.0) {
    oty = 0.0;
  }
  if (2048.0 < tx) {
    tx = 0.0;
  }
  if (2048.0 < ty) {
    ty = 0.0;
  }
  if (2048.0 < otx) {
    otx = 0.0;
  }
  if (2048.0 < oty) {
    oty = 0.0;
  }
  iVar5 = isnan((long)(double)tx);
  if ((((iVar5 == 0) && (iVar5 = isnan((long)(double)ty), iVar5 == 0)) &&
      (iVar5 = isnan((long)(double)otx), iVar5 == 0)) &&
     (iVar5 = isnan((long)(double)oty), iVar5 == 0)) {
    fVar9 = (tx - otx) * DAT_003ee008;
    fVar10 = (ty - oty) * DAT_003ee00c;
  }
  else {
    fVar10 = 0.0;
    fVar9 = 0.0;
  }
  iVar5 = EffWrkStopFlgGet__Fv();
  if (iVar5 == 0) {
    cy_1150 = (cy_1150 + fVar10) - (float)((int)((cy_1150 + fVar10) * 0.0078125) << 7);
    for (cx_1149 = (cx_1149 + fVar9) - (float)((int)((cx_1149 + fVar9) * 0.0078125) << 7);
        128.0 < cx_1149; cx_1149 = cx_1149 - 128.0) {
    }
    for (; cx_1149 < 0.0; cx_1149 = cx_1149 + 128.0) {
    }
    for (; 128.0 < cy_1150; cy_1150 = cy_1150 - 128.0) {
    }
    for (; cy_1150 < 0.0; cy_1150 = cy_1150 + 128.0) {
    }
  }
  CopySprDToSpr2__FP10DISP_SPRT2P9SPRT_DAT2(&ds,&sd);
  fVar9 = cx_1149 * 16.0;
  ds.tex0 = 0x2007ff85ddb0a200;
  ds.tex1 = 0x141;
  ds.r = 0x80;
  ds.u1 = (short)(int)fVar9;
  ds.z = 0xfff00;
  ds.zbuf = 0x10a000118;
  ds.clmp = 0;
  if (2.147484e+09 <= fVar9) {
    ds.u1 = (short)(int)(fVar9 - 2.147484e+09);
  }
  fVar9 = cy_1150 * 16.0;
  ds.v1 = (short)(int)fVar9;
  if (2.147484e+09 <= fVar9) {
    ds.v1 = (short)(int)(fVar9 - 2.147484e+09);
  }
  fVar9 = (cx_1149 + 640.0) * 16.0;
  ds.u2 = (short)(int)fVar9;
  if (2.147484e+09 <= fVar9) {
    ds.u2 = (short)(int)(fVar9 - 2.147484e+09);
  }
  fVar9 = (cy_1150 + 512.0) * 16.0;
  ds.v2 = (short)(int)fVar9;
  if (2.147484e+09 <= fVar9) {
    ds.v2 = (short)(int)(fVar9 - 2.147484e+09);
  }
  ds.alpreg = uVar6;
  ds.g = uVar7;
  ds.b = uVar8;
  fVar9 = sinf((cnf_1148 * DAT_003ee010) / 180.0);
  fVar9 = fVar9 * alp + alp;
  ds.alp = (uchar)(int)fVar9;
  if (2.147484e+09 <= fVar9) {
    ds.alp = (uchar)(int)(fVar9 - 2.147484e+09);
  }
  DispSprD2__FP10DISP_SPRT2(&ds);
  fVar9 = (cx_1149 + 64.0) * 16.0;
  ds.u1 = (short)(int)fVar9;
  if (2.147484e+09 <= fVar9) {
    ds.u1 = (short)(int)(fVar9 - 2.147484e+09);
  }
  fVar9 = cy_1150 * 16.0;
  ds.v1 = (short)(int)fVar9;
  if (2.147484e+09 <= fVar9) {
    ds.v1 = (short)(int)(fVar9 - 2.147484e+09);
  }
  fVar9 = (cx_1149 + 640.0 + 64.0) * 16.0;
  ds.u2 = (short)(int)fVar9;
  if (2.147484e+09 <= fVar9) {
    ds.u2 = (short)(int)(fVar9 - 2.147484e+09);
  }
  fVar9 = (cy_1150 + 512.0) * 16.0;
  ds.v2 = (short)(int)fVar9;
  if (2.147484e+09 <= fVar9) {
    ds.v2 = (short)(int)(fVar9 - 2.147484e+09);
  }
  fVar9 = sinf(((cnf_1148 + 120.0) * DAT_003ee014) / 180.0);
  fVar9 = fVar9 * alp + alp;
  ds.alp = (uchar)(int)fVar9;
  if (2.147484e+09 <= fVar9) {
    ds.alp = (uchar)(int)(fVar9 - 2.147484e+09);
  }
  DispSprD2__FP10DISP_SPRT2(&ds);
  fVar9 = cx_1149 * 16.0;
  ds.u1 = (short)(int)fVar9;
  if (2.147484e+09 <= fVar9) {
    ds.u1 = (short)(int)(fVar9 - 2.147484e+09);
  }
  fVar9 = (cy_1150 + 64.0) * 16.0;
  ds.v1 = (short)(int)fVar9;
  if (2.147484e+09 <= fVar9) {
    ds.v1 = (short)(int)(fVar9 - 2.147484e+09);
  }
  fVar9 = (cx_1149 + 640.0) * 16.0;
  ds.u2 = (short)(int)fVar9;
  if (2.147484e+09 <= fVar9) {
    ds.u2 = (short)(int)(fVar9 - 2.147484e+09);
  }
  fVar9 = (cy_1150 + 512.0 + 64.0) * 16.0;
  ds.v2 = (short)(int)fVar9;
  if (2.147484e+09 <= fVar9) {
    ds.v2 = (short)(int)(fVar9 - 2.147484e+09);
  }
  fVar9 = sinf(((cnf_1148 + 240.0) * DAT_003ee018) / 180.0);
  fVar9 = fVar9 * alp + alp;
  ds.alp = (uchar)(int)fVar9;
  if (2.147484e+09 <= fVar9) {
    ds.alp = (uchar)(int)(fVar9 - 2.147484e+09);
  }
  DispSprD2__FP10DISP_SPRT2(&ds);
  iVar5 = EffWrkStopFlgGet__Fv();
  if (iVar5 == 0) {
    cnf_1148 = cnf_1148 + spd;
  }
  return;
}

void SetDither3(EFFECT_CONT *ec) {
	u_char alpmx;
	u_char colmx;
	int type;
	float spd;
	float alp;
	
  byte bVar1;
  byte alpmx;
  byte colmx;
  uint uVar2;
  uint uVar3;
  float fVar4;
  float spd;
  float fVar5;
  
  fVar5 = (ec->dat).fl32[2];
  bVar1 = (ec->dat).uc8[2];
  spd = (ec->dat).fl32[3];
  alpmx = (ec->dat).uc8[3];
  colmx = (ec->dat).uc8[4];
  if (((ec->dat).uc8[1] & 4) == 0) goto LAB_00163e80;
  uVar2 = ec->flow;
  if (uVar2 == 0) {
    uVar2 = ec->cnt;
    if ((int)uVar2 < 0) {
      fVar4 = (float)(uVar2 & 1 | uVar2 >> 1);
      fVar4 = fVar4 + fVar4;
      uVar2 = ec->in;
    }
    else {
      fVar4 = (float)uVar2;
      uVar2 = ec->in;
    }
    fVar5 = fVar5 * fVar4;
    if ((int)uVar2 < 0) {
LAB_00163e44:
      fVar4 = (float)(uVar2 & 1 | uVar2 >> 1);
      fVar4 = fVar4 + fVar4;
    }
    else {
      fVar4 = (float)uVar2;
    }
code_r0x00163e5c:
    fVar5 = fVar5 / fVar4;
  }
  else if (uVar2 != 1) {
    if (uVar2 == 2) {
      uVar2 = ec->out;
      uVar3 = uVar2 - ec->cnt;
      if ((int)uVar3 < 0) {
        fVar4 = (float)(uVar3 & 1 | uVar3 >> 1);
        fVar4 = fVar4 + fVar4;
      }
      else {
        fVar4 = (float)uVar3;
      }
      fVar5 = fVar5 * fVar4;
      if ((int)uVar2 < 0) goto LAB_00163e44;
      fVar4 = (float)uVar2;
      goto code_r0x00163e5c;
    }
    fVar5 = 0.0;
    if (uVar2 == 3) {
      ResetEffects__FPv(ec);
    }
  }
  EffInKeepOutFlowCtrl__FP11EFFECT_CONT(ec);
LAB_00163e80:
  if (bVar1 < 8) {
    SubDither3__FiffUcUc((uint)bVar1,fVar5,spd,alpmx,colmx);
    bVar1 = (ec->dat).uc8[1];
  }
  else {
    SubDither4__Fffii(fVar5,spd,(uint)alpmx,(uint)colmx);
    bVar1 = (ec->dat).uc8[1];
  }
  if ((bVar1 & 1) != 0) {
    ResetEffects__FPv(ec);
  }
  return;
}

static void SubDither4(float alp, float spd, int alpmx, int colmx) {
	static float old_cam_i[4] = {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	};
	static float cnf = 0.f;
	static float cx = 0.f;
	static float cy = -9908638.f;
	static int fl = 1;
	int clamp_u;
	int clamp_v;
	float tx;
	float ty;
	float otx;
	float oty;
	float mvx;
	float mvy;
	SPRT_DAT2 sd;
	DISP_SPRT2 ds;
	GRA3DCAMERA *pCam;
	float *pv0;
	
  undefined8 uVar1;
  GRA3DCAMERA *pGVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float tx;
  float ty;
  float otx;
  float oty;
  SPRT_DAT2 sd;
  DISP_SPRT2 ds;
  
  sd.tex0 = DAT_003a80e8;
  sd._8_8_ = DAT_003a80f0;
  sd._16_8_ = DAT_003a80f8;
  sd._24_8_ = DAT_003a8100;
  sd._32_8_ = DAT_003a8108;
  sd._40_8_ = DAT_003a8110;
  pGVar2 = gra3dGetCamera__Fv();
  fVar4 = cy_1164 - 1024.0;
  if (fVar4 <= DAT_003ee01c) {
    fVar4 = cy_1164;
  }
  cy_1164 = fVar4;
  if ((fl_1165 == 1) || (iVar3 = CamChangeCheck__Fv(), iVar3 != 0)) {
                    /* inlined from ../../graphics/graph3d/g3dxVu0.h */
    DAT_002fd558 = pGVar2->vTarget[2];
    DAT_002fd55c = pGVar2->vTarget[3];
    old_cam_i_1161 = (undefined4)*(undefined8 *)pGVar2->vTarget;
    DAT_002fd554 = (undefined4)((ulong)*(undefined8 *)pGVar2->vTarget >> 0x20);
  }
  fl_1165 = 0;
  GetCamI2DPos__FPCfPfT1(pGVar2->vTarget,&tx,&ty);
  GetCamI2DPos__FPCfPfT1((float *)&old_cam_i_1161,&otx,&oty);
  uVar1 = *(undefined8 *)pGVar2->vTarget;
                    /* inlined from ../../graphics/graph3d/g3dxVu0.h */
  DAT_002fd558 = pGVar2->vTarget[2];
  DAT_002fd55c = pGVar2->vTarget[3];
  old_cam_i_1161 = (undefined4)uVar1;
  DAT_002fd554 = (undefined4)((ulong)uVar1 >> 0x20);
                    /* end of inlined section */
  iVar3 = isnan((long)(double)tx);
  if ((((iVar3 == 0) && (iVar3 = isnan((long)(double)ty), iVar3 == 0)) &&
      (iVar3 = isnan((long)(double)otx), iVar3 == 0)) &&
     (iVar3 = isnan((long)(double)oty), iVar3 == 0)) {
    fVar4 = (tx - otx) * DAT_003ee024;
    fVar5 = (ty - oty) * DAT_003ee020;
  }
  else {
    fVar5 = 0.0;
    fVar4 = 0.0;
  }
  cx_1163 = cx_1163 + fVar4 + fVar4;
  if (128.0 < cx_1163) {
    cx_1163 = cx_1163 - 128.0;
  }
  else if (cx_1163 < 0.0) {
    cx_1163 = cx_1163 + 128.0;
  }
  cy_1164 = cy_1164 + fVar5 + fVar5;
  if (128.0 < cy_1164) {
    cy_1164 = cy_1164 - 128.0;
  }
  else if (cy_1164 < 0.0) {
    cy_1164 = cy_1164 + 128.0;
  }
  MakeDitherPattern__FUiUi(alpmx,colmx);
  CopySprDToSpr2__FP10DISP_SPRT2P9SPRT_DAT2(&ds,&sd);
  ds.tex1 = 0x141;
  ds.zbuf = 0x10a000118;
  ds.z = 0xfff00;
  ds.tex0 = 0x2007ff85ddb0a200;
  ds.clmp = 0;
  ds.u2 = (ushort)(int)((cx_1163 + 640.0) * 16.0) | (ushort)((uint)(int)(cx_1163 * 16.0) >> 0x10);
  ds.v2 = (ushort)(int)((cy_1164 + 512.0) * 16.0) | (ushort)((uint)(int)(cy_1164 * 16.0) >> 0x10);
  ds.u1 = (short)(int)(cx_1163 * 16.0);
  ds.v1 = (short)(int)(cy_1164 * 16.0);
  fVar4 = sinf((cnf_1162 * DAT_003ee028) / 180.0);
  fVar4 = fVar4 * alp + alp;
  ds.alp = (uchar)(int)fVar4;
  if (2.147484e+09 <= fVar4) {
    ds.alp = (uchar)(int)(fVar4 - 2.147484e+09);
  }
  DispSprD2__FP10DISP_SPRT2(&ds);
  iVar3 = (int)((cx_1163 + 64.0) * 16.0);
  ds.u2 = (ushort)(int)((cx_1163 + 640.0 + 64.0) * 16.0) | (ushort)((uint)iVar3 >> 0x10);
  ds.v2 = (ushort)(int)((cy_1164 + 512.0) * 16.0) | (ushort)((uint)(int)(cy_1164 * 16.0) >> 0x10);
  ds.u1 = (short)iVar3;
  ds.v1 = (short)(int)(cy_1164 * 16.0);
  fVar4 = sinf(((cnf_1162 + 120.0) * DAT_003ee02c) / 180.0);
  fVar4 = fVar4 * alp + alp;
  ds.alp = (uchar)(int)fVar4;
  if (2.147484e+09 <= fVar4) {
    ds.alp = (uchar)(int)(fVar4 - 2.147484e+09);
  }
  DispSprD2__FP10DISP_SPRT2(&ds);
  iVar3 = (int)((cy_1164 + 64.0) * 16.0);
  ds.u2 = (ushort)(int)((cx_1163 + 640.0) * 16.0) | (ushort)((uint)(int)(cx_1163 * 16.0) >> 0x10);
  ds.v2 = (ushort)(int)((cy_1164 + 512.0 + 64.0) * 16.0) | (ushort)((uint)iVar3 >> 0x10);
  ds.u1 = (short)(int)(cx_1163 * 16.0);
  ds.v1 = (short)iVar3;
  fVar4 = sinf(((cnf_1162 + 240.0) * DAT_003ee030) / 180.0);
  fVar4 = fVar4 * alp + alp;
  ds.alp = (uchar)(int)fVar4;
  if (2.147484e+09 <= fVar4) {
    ds.alp = (uchar)(int)(fVar4 - 2.147484e+09);
  }
  DispSprD2__FP10DISP_SPRT2(&ds);
  iVar3 = EffWrkStopFlgGet__Fv();
  if (iVar3 == 0) {
    cnf_1162 = cnf_1162 + spd;
  }
  return;
}

void SubFadeFrame(u_char alp, u_int pri) {
	SPRT_DAT2 sd;
	DISP_SPRT2 ds;
	
  float fVar1;
  SPRT_DAT2 sd;
  DISP_SPRT2 ds;
  
  sd._8_8_ = DAT_003a8148;
  sd._16_8_ = DAT_003a8150;
  sd.tex0 = DAT_003a8140;
  sd._24_8_ = DAT_003a8158;
  sd._32_8_ = DAT_003a8160;
  sd._40_8_ = DAT_003a8168;
  CopySprDToSpr2__FP10DISP_SPRT2P9SPRT_DAT2(&ds,&sd);
  ds.u1 = 0;
  fVar1 = (float)(uint)(ushort)effdat[74].w * 16.0;
  ds.u2 = (short)(int)fVar1;
  ds.v1 = 0;
  if (2.147484e+09 <= fVar1) {
    ds.u2 = (short)(int)(fVar1 - 2.147484e+09);
  }
  fVar1 = (float)(uint)(ushort)effdat[74].h * 16.0;
  ds.v2 = (short)(int)fVar1;
  if (2.147484e+09 <= fVar1) {
    ds.v2 = (short)(int)(fVar1 - 2.147484e+09);
  }
  ds.tex0 = effdat[74].tex0;
  ds.alp = alp;
  DispSprD2__FP10DISP_SPRT2(&ds);
  return;
}

void SetFadeFrame(EFFECT_CONT *ec) {
  SubFadeFrame__FUcUi((ec->dat).uc8[2],(ec->dat).ui32[1]);
  if (((ec->dat).uc8[1] & 1) != 0) {
    ResetEffects__FPv(ec);
  }
  return;
}

void ChangeMonochrome(int sw) {
  return;
}

static void ScreenSaverInit() {
  memset(&ScreenSaverCtrl,0,0x58);
  ScreenSaverCtrl.LoadStatus = 0;
  ScreenSaverCtrl.PlayId = -1;
  ScreenSaverCtrl.LoadId = -1;
  return;
}

static void ScreenSaverOneTexInit(SCREEN_SAVER_TEX *pTex, int DispTime) {
	float ScaleMin;
	
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
                    /* inlined from ../../graphics/effect/effect.h */
  iVar2 = rand();
  fVar1 = DAT_003ee034;
                    /* end of inlined section */
  fVar3 = 62.0;
                    /* inlined from ../../graphics/effect/effect.h */
                    /* end of inlined section */
  fVar4 = 36.0;
                    /* inlined from ../../graphics/effect/effect.h */
  pTex->Scale = ((float)iVar2 / DAT_003ee034) * DAT_003ee038 + DAT_003ee03c;
  iVar2 = rand();
  pTex->BasePosX = (int)(((float)iVar2 / fVar1) * DAT_003ee040);
  iVar2 = rand();
                    /* end of inlined section */
  pTex->DispTime = DispTime;
  pTex->PosX = pTex->BasePosX;
  pTex->DispTimeAll = DispTime;
                    /* inlined from ../../graphics/effect/effect.h */
  iVar2 = (int)(((float)iVar2 / fVar1) * 398.0);
                    /* end of inlined section */
  pTex->PosY = iVar2;
                    /* inlined from ../../graphics/effect/effect.h */
  pTex->BasePosY = iVar2;
  iVar2 = rand();
  pTex->AlphaInTime = (int)(((float)iVar2 / fVar1) * fVar3 + 5.0);
  iVar2 = rand();
  pTex->AlphaKeepTime = (int)(((float)iVar2 / fVar1) * 37.0 + 3.0);
  iVar2 = rand();
                    /* end of inlined section */
  pTex->Alpha = 0;
                    /* inlined from ../../graphics/effect/effect.h */
  pTex->AlphaOutTime = (int)(((float)iVar2 / fVar1) * fVar4 + 10.0);
  return;
}

static int ScreenSaverTexFileNoGet() {
  int iVar1;
  
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  iVar1 = 0x14;
                    /* end of inlined section */
  if ((ingame_wrk.mChapterNo.mValue & 1U) == 0) {
    iVar1 = 0x15;
  }
  return iVar1;
}

static void ScreenSaverMain() {
	SCREEN_SAVER_CTRL *pCtrl;
	int i;
	int DispTimeMin;
	int IntervalMin;
	int DitherIntervalMin;
	int Count;
	float Progress;
	int Count;
	int DitherAlphaMin;
	float Progress;
	float Alpha;
	
  uint size;
  int iVar1;
  int iVar2;
  SCREEN_SAVER_CTRL *pSVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  
  fVar5 = DAT_003ee048;
  pSVar3 = &ScreenSaverCtrl;
  if ((uint)(ushort)*key_now[0] + (uint)(ushort)*key_now[7] +
      (uint)(ushort)*key_now[3] + (uint)(ushort)*key_now[5] +
      (uint)(ushort)*key_now[1] + (uint)(ushort)*key_now[2] +
      (uint)(ushort)*key_now[4] + (uint)(ushort)*key_now[6] + (uint)(ushort)*key_now[8] +
      (uint)(ushort)*key_now[9] + (uint)(ushort)*key_now[10] + (uint)(ushort)*key_now[11] +
      (uint)(ushort)*key_now[13] + (uint)(ushort)*key_now[12] +
      (pad[0].analog[0] - 0x45 < 0x77 ^ 1) + (pad[0].analog[1] - 0x45 < 0x77 ^ 1) +
      (pad[0].analog[2] - 0x45 < 0x77 ^ 1) + (pad[0].analog[3] - 0x45 < 0x77 ^ 1) == 0) {
    ScreenSaverCtrl.Counter = ScreenSaverCtrl.Counter + 1;
  }
  else {
    ScreenSaverCtrl.Counter = 0;
  }
  if (ScreenSaverCtrl.LoadStatus == 1) {
    iVar4 = IsLoadEnd__Fi(ScreenSaverCtrl.LoadId);
    if ((iVar4 != 0) && (iVar4 = SndBankIsReady(SSC_BankNo), iVar4 != 0)) {
      ScreenSaverCtrl.ScreenEffectNo = EffectGetScreenEffectNo__Fv();
      ScreenSaverCtrl.IntervalTime = 0;
                    /* inlined from ../../graphics/effect/effect.h */
      iVar4 = rand();
      fVar5 = DAT_003ee044;
                    /* end of inlined section */
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
                    /* inlined from ../../graphics/effect/effect.h */
                    /* end of inlined section */
      fVar6 = 240.0;
                    /* inlined from ../../graphics/effect/effect.h */
      ScreenSaverCtrl.DispTime = (int)(((float)iVar4 / DAT_003ee044) * 158.0 + 16.0);
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z16SCREEN_SAVER_TEX_UiUi_PX01(0,1);
      ScreenSaverOneTexInit__FP16SCREEN_SAVER_TEXi
                ((SCREEN_SAVER_TEX *)&ScreenSaverCtrl,ScreenSaverCtrl.DispTime);
                    /* inlined from ../../graphics/effect/effect.h */
      iVar4 = rand();
                    /* end of inlined section */
                    /* inlined from ../../graphics/effect/effect.h */
                    /* end of inlined section */
      ScreenSaverCtrl.LoadStatus = 2;
                    /* inlined from ../../graphics/effect/effect.h */
                    /* end of inlined section */
      ScreenSaverCtrl.DitherAlpha = 42.0;
      ScreenSaverCtrl.DitherChangeTime = 0;
                    /* inlined from ../../graphics/effect/effect.h */
      ScreenSaverCtrl.DitherInterval = (int)(((float)iVar4 / fVar5) * fVar6 + 150.0);
                    /* end of inlined section */
    }
  }
  else if (ScreenSaverCtrl.LoadStatus < 2) {
    if ((ScreenSaverCtrl.LoadStatus == 0) && (8999 < ScreenSaverCtrl.Counter)) {
      ScreenSaverCtrl.Counter = 9000;
      iVar4 = ScreenSaverTexFileNoGet__Fv();
      size = GetFileSize(iVar4);
      ScreenSaverCtrl.pTexBuf = (uint *)EFFECT_MALLOC__Fi(size);
      if (ScreenSaverCtrl.pTexBuf != (uint *)0x0) {
        iVar4 = ScreenSaverTexFileNoGet__Fv();
        ScreenSaverCtrl.LoadId = LoadReq__FiUi(iVar4,(uint)ScreenSaverCtrl.pTexBuf);
        if (SSC_BankNo == -1) {
          SSC_BankNo = SndBankNew(0xd17,0xd16,-1);
        }
        ScreenSaverCtrl.LoadStatus = 1;
      }
    }
  }
  else if (ScreenSaverCtrl.LoadStatus == 2) {
    if (ScreenSaverCtrl.Counter < 9000) {
      EFFECT_FREE__FPv(ScreenSaverCtrl.pTexBuf);
      if ((ScreenSaverCtrl.PlayId != -1) &&
         (iVar4 = SndBufIsPlaying(ScreenSaverCtrl.PlayId), iVar4 != 0)) {
        SndBufStop(ScreenSaverCtrl.PlayId);
      }
      ScreenSaverCtrl.pTexBuf = (uint *)0x0;
      ScreenSaverCtrl.PlayId = -1;
      ScreenSaverCtrl.LoadStatus = 0;
      ScreenSaverCtrl.LoadId = -1;
    }
    else {
      ScreenSaverCtrl.Counter = 9000;
      iVar4 = 0;
      fVar6 = 6.0;
      do {
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
        _fixed_array_verifyrange__H1Z16SCREEN_SAVER_TEX_UiUi_PX01(iVar4,1);
                    /* end of inlined section */
        if ((pSVar3->TexData).field0_0x0.m_aData[0].DispTime != 0) {
          iVar8 = (pSVar3->TexData).field0_0x0.m_aData[0].BasePosX;
                    /* inlined from ../../graphics/effect/effect.h */
          iVar1 = rand();
                    /* end of inlined section */
          fVar7 = (float)(pSVar3->TexData).field0_0x0.m_aData[0].BasePosY;
                    /* inlined from ../../graphics/effect/effect.h */
          (pSVar3->TexData).field0_0x0.m_aData[0].PosX =
               (int)((float)iVar8 + ((float)iVar1 / fVar5) * 10.0);
          iVar8 = rand();
                    /* end of inlined section */
                    /* inlined from ../../graphics/effect/effect.h */
                    /* end of inlined section */
          iVar1 = (pSVar3->TexData).field0_0x0.m_aData[0].AlphaInTime;
          iVar2 = (pSVar3->TexData).field0_0x0.m_aData[0].DispTimeAll -
                  (pSVar3->TexData).field0_0x0.m_aData[0].DispTime;
                    /* inlined from ../../graphics/effect/effect.h */
          (pSVar3->TexData).field0_0x0.m_aData[0].PosY =
               (int)(fVar7 + fVar6 * ((float)iVar8 / fVar5));
                    /* end of inlined section */
          if (iVar2 < iVar1) {
            if (iVar1 == 0) {
              fVar7 = 1.0;
            }
            else {
              fVar7 = (float)iVar2 / (float)iVar1;
            }
          }
          else {
            fVar7 = 1.0;
            iVar1 = iVar1 + (pSVar3->TexData).field0_0x0.m_aData[0].AlphaKeepTime;
            if (iVar1 <= iVar2) {
              iVar8 = (pSVar3->TexData).field0_0x0.m_aData[0].AlphaOutTime;
              fVar7 = 0.0;
              if ((iVar2 < iVar1 + iVar8) && (iVar8 != 0)) {
                fVar7 = 1.0 - (float)(iVar2 - iVar1) / (float)iVar8;
              }
            }
          }
          (pSVar3->TexData).field0_0x0.m_aData[0].DispTime =
               (pSVar3->TexData).field0_0x0.m_aData[0].DispTime + -1;
          (pSVar3->TexData).field0_0x0.m_aData[0].Alpha = (int)((fVar7 * 2688.0) / 100.0);
        }
        iVar4 = iVar4 + 1;
        pSVar3 = (SCREEN_SAVER_CTRL *)&pSVar3->pTexBuf;
      } while (iVar4 < 1);
      if (ScreenSaverCtrl.DispTime == 0) {
                    /* end of inlined section */
        if ((ScreenSaverCtrl.IntervalTime == 0) ||
           (ScreenSaverCtrl.IntervalTime = ScreenSaverCtrl.IntervalTime + -1,
           ScreenSaverCtrl.IntervalTime == 0)) {
                    /* inlined from ../../graphics/effect/effect.h */
          iVar4 = rand();
                    /* end of inlined section */
                    /* inlined from ../../graphics/effect/effect.h */
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
                    /* inlined from ../../graphics/effect/effect.h */
          ScreenSaverCtrl.DispTime = (int)(((float)iVar4 / DAT_003ee050) * 158.0 + 16.0);
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
          _fixed_array_verifyrange__H1Z16SCREEN_SAVER_TEX_UiUi_PX01(0,1);
          ScreenSaverOneTexInit__FP16SCREEN_SAVER_TEXi
                    ((SCREEN_SAVER_TEX *)&ScreenSaverCtrl,ScreenSaverCtrl.DispTime);
        }
      }
      else {
        ScreenSaverCtrl.DispTime = ScreenSaverCtrl.DispTime + -1;
        if (ScreenSaverCtrl.DispTime == 0) {
                    /* inlined from ../../graphics/effect/effect.h */
          iVar4 = rand();
                    /* end of inlined section */
                    /* inlined from ../../graphics/effect/effect.h */
          ScreenSaverCtrl.IntervalTime = (int)(((float)iVar4 / DAT_003ee04c) * 208.0 + 8.0);
        }
      }
      if (ScreenSaverCtrl.DitherChangeTime == 0) {
        iVar4 = ScreenSaverCtrl.DitherInterval + -1;
        if ((ScreenSaverCtrl.DitherInterval == 0) ||
           (ScreenSaverCtrl.DitherInterval = iVar4, iVar4 == 0)) {
          ScreenSaverCtrl.DitherChangeTime = 0x1e;
          ScreenSaverCtrl.PlayId = SndBankPlay(SSC_BankNo,0,1,0,0x3200,0x1000,0,(_SND_3D_SET *)0x0);
        }
        ScreenSaverCtrl.DitherAlpha = 42.0;
      }
      else {
        ScreenSaverCtrl.DitherChangeTime = ScreenSaverCtrl.DitherChangeTime + -1;
        if (ScreenSaverCtrl.DitherChangeTime == 0) {
                    /* inlined from ../../graphics/effect/effect.h */
          iVar4 = rand();
                    /* end of inlined section */
                    /* inlined from ../../graphics/effect/effect.h */
          ScreenSaverCtrl.DitherInterval = (int)(((float)iVar4 / DAT_003ee054) * 240.0 + 150.0);
        }
                    /* end of inlined section */
        iVar4 = -ScreenSaverCtrl.DitherChangeTime + 0x1e;
        if (iVar4 < 5) {
          fVar5 = (float)iVar4 / 5.0;
        }
        else {
          fVar5 = 1.0;
          if (0x18 < iVar4) {
            if (iVar4 < 0x1e) {
              fVar5 = 1.0 - (float)(-ScreenSaverCtrl.DitherChangeTime + 5) / 5.0;
            }
            else {
              fVar5 = 0.0;
            }
          }
        }
        ScreenSaverCtrl.DitherAlpha = fVar5 * 85.0 + 42.0;
      }
    }
  }
  return;
}

static void ScreenSaverSetDITHER(EFFECT_CONT *ec, int DitherType, float Alpha, float Speed, int AlphaMax, int ColorMax) {
  (ec->dat).uc8[4] = (uchar)ColorMax;
  (ec->dat).uc8[1] = '\x02';
  (ec->dat).uc8[2] = (uchar)DitherType;
  (ec->dat).fl32[2] = Alpha;
  (ec->dat).fl32[3] = Speed;
  (ec->dat).uc8[3] = (uchar)AlphaMax;
  (ec->dat).uc8[0] = '\x02';
  return;
}

void ScreenSaverDraw() {
	SCREEN_SAVER_CTRL *pCtrl;
	SPRT_DAT sprt_dat;
	DISP_SPRT DispSprt;
	EFFECT_CONT EffectCont;
	
  SCREEN_EFFECT_PARAMETER *pSVar1;
  SPRT_DAT sprt_dat;
  DISP_SPRT DispSprt;
  EFFECT_CONT EffectCont;
  
  sprt_dat.tex0 = DAT_003a8170;
  sprt_dat._8_8_ = DAT_003a8178;
  sprt_dat._16_8_ = DAT_003a8180;
  sprt_dat._24_8_ = DAT_003a8188;
  if (ScreenSaverCtrl.LoadStatus == 2) {
    SetSprFile__FUi((uint)ScreenSaverCtrl.pTexBuf);
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z16SCREEN_SAVER_TEX_UiUi_PX01(0,1);
                    /* end of inlined section */
    if (ScreenSaverCtrl.TexData.field0_0x0.m_aData[0].DispTime != 0) {
      CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&DispSprt,&sprt_dat);
      DispSprt.csx = (float)ScreenSaverCtrl.TexData.field0_0x0.m_aData[0].PosX;
      DispSprt.csy = (float)ScreenSaverCtrl.TexData.field0_0x0.m_aData[0].PosY;
      DispSprt.x = (float)(ScreenSaverCtrl.TexData.field0_0x0.m_aData[0].PosX -
                          (uint)((ushort)sprt_dat.w >> 1));
      DispSprt.y = (float)(ScreenSaverCtrl.TexData.field0_0x0.m_aData[0].PosY -
                          (uint)((ushort)sprt_dat.h >> 1));
      DispSprt.pri = 0x10;
      DispSprt.tex1 = 0x161;
      DispSprt.z = 0xfffef;
      DispSprt.zbuf = 0x10a000118;
      DispSprt.alphar = 0x48;
      DispSprt.alpha = (uchar)ScreenSaverCtrl.TexData.field0_0x0.m_aData[0].Alpha;
      DispSprt.sch = ScreenSaverCtrl.TexData.field0_0x0.m_aData[0].Scale;
      DispSprt.scw = ScreenSaverCtrl.TexData.field0_0x0.m_aData[0].Scale;
      DispSprD__FP9DISP_SPRT(&DispSprt);
    }
    pSVar1 = EffectGetScreenEffectParamPtr__Fi(5);
    if (pSVar1->Dither - 1U < 8) {
      ScreenSaverSetDITHER__FP11EFFECT_CONTiffii
                (&EffectCont,8,ScreenSaverCtrl.DitherAlpha,8.0,0x40,0x32);
      SetDither3__FP11EFFECT_CONT(&EffectCont);
    }
  }
  return;
}

void BrightnessAdjustmentFilterDraw() {
	DISP_SQAR DispSqar;
	SQAR_DAT SqarDat;
	int BrightnessFilterAlpha;
	
  int iVar1;
  int iVar2;
  DISP_SQAR DispSqar;
  SQAR_DAT SqarDat;
  
  memset(&SqarDat,0,0x18);
  iVar1 = opt_wrk.brightness;
  SqarDat.w = 0x280;
  SqarDat.h = 0x1c0;
  CopySqrDToSqr__FP9DISP_SQARP8SQAR_DAT(&DispSqar,&SqarDat);
  DispSqar.alpha = (char)(iVar1 << 1) + 0xff;
  DispSqar.test = 0x30003;
  if (iVar1 < 0x81) {
    iVar2 = 0x44;
    DispSqar.alpha = 0x80 - (char)iVar1;
  }
  else {
    iVar2 = 0x49;
  }
  DispSqar.alphar = (ulong)iVar2;
  DispSqrD__FP9DISP_SQAR(&DispSqar);
  return;
}

float* float * _fixed_array_verifyrange<float>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

SCREEN_SAVER_TEX* SCREEN_SAVER_TEX * _fixed_array_verifyrange<SCREEN_SAVER_TEX>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
                    /* inlined from effect_scr.c */
  return;
}

type_info& SCREEN_SAVER_TEX type_info function() {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

static void global constructors keyed to eff_blur() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
