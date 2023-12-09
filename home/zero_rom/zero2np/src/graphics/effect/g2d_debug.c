// STATUS: NOT STARTED

#include "g2d_debug.h"

int dither_alp = 64;
int dither_col = 128;
static int sbtset_old = 0;
int hint_test_sw = 0;
int hint_test_posx = 0;

void InitShibataSet() {
  sbtset_old = 0;
  return;
}

void SetShibataSet() {
  return;
}

void CheckHintTex() {
  return;
}

void DrawPerformanceCounter2(int draw_counter) {
	float percount;
	float draw_percount;
	static float perf_max = 0.f;
	u_char r;
	u_char g;
	u_char b;
	int x1;
	int x2;
	int x3;
	int x4;
	int x5;
	int xx1;
	int xx2;
	
  int iVar1;
  uchar g;
  uchar b;
  int iVar2;
  byte b_00;
  byte g_00;
  uchar uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if (debug_var.perf_count_sw != 0) {
    if (*key_now[14] == 1) {
      perf_max_105 = 0.0;
    }
    fVar4 = GetPercent__16C_ZERO2_PERF_CNT(&c_zero2_perf_cnt);
    fVar6 = fVar4;
    if (fVar4 <= perf_max_105) {
      fVar6 = perf_max_105;
    }
    perf_max_105 = fVar6;
    fVar6 = perf_max_105;
    if (fVar4 < 1.0) {
      fVar5 = fVar4 * 255.0;
      if (2.147484e+09 <= fVar5) {
        fVar5 = fVar5 - 2.147484e+09;
      }
      fVar7 = fVar4 * 255.0;
      uVar3 = (uchar)(int)fVar5;
      if (2.147484e+09 <= fVar7) {
        fVar7 = fVar7 - 2.147484e+09;
      }
      fVar5 = fVar4 * 255.0;
      g_00 = (byte)(int)fVar7;
      if (2.147484e+09 <= fVar5) {
        fVar5 = fVar5 - 2.147484e+09;
      }
      b_00 = ~(byte)(int)fVar5;
    }
    else {
      iVar1 = dpcmp((long)(double)fVar4,0x4000000000000000);
      uVar3 = 0xff;
      if (iVar1 < 0) {
        fVar5 = (fVar4 - 1.0) * 255.0;
        if (2.147484e+09 <= fVar5) {
          fVar5 = fVar5 - 2.147484e+09;
        }
        g_00 = ~(byte)(int)fVar5;
      }
      else {
        g_00 = 0;
      }
      b_00 = 0;
    }
    fVar5 = 190.0;
    fVar7 = 248.0;
    iVar1 = (int)(fVar6 * 200.0) + -0x98;
    iVar2 = (int)(fVar4 * 200.0) + -0x98;
    if (0x7ff < iVar1) {
      iVar1 = 0x7ff;
    }
    if (0x7ff < iVar2) {
      iVar2 = 0x7ff;
    }
    SetSquareS__FiffffUcUcUcUc(0x10,-152.0,204.0,(float)iVar1,214.0,'@','@','@',0x80);
    SetSquareS__FiffffUcUcUcUc(0x10,-152.0,198.0,(float)iVar2,208.0,uVar3,g_00,b_00,0x80);
    SetLine2__FiffffUcUcUcUc(0x10,-152.0,fVar5,fVar7,fVar5,0x80,0x80,0x80,0x80);
    SetLine2__FiffffUcUcUcUc(0x10,-152.0,fVar5,-152.0,220.0,0x80,0x80,0x80,0x80);
    SetLine2__FiffffUcUcUcUc(0x10,fVar7,fVar5,fVar7,220.0,0x80,0x80,0x80,0x80);
    SetLine2__FiffffUcUcUcUc(0x10,-152.0,220.0,fVar7,220.0,0x80,0x80,0x80,0x80);
    SetLine2__FiffffUcUcUcUc(0x10,48.0,fVar5,48.0,220.0,'`','`',0x80,0x80);
    SetLine2__FiffffUcUcUcUc(0x10,-52.0,fVar5,-52.0,220.0,'@','@','`',0x80);
    SetLine2__FiffffUcUcUcUc(0x10,148.0,fVar5,148.0,220.0,'@','@','`',0x80);
    SetString2__FiffiUcUcUcPCce(0x10,12.0,DAT_003ee350,0,0x80,0x80,0x80,s__4d_448_003f09f0);
    SetString2__FiffiUcUcUcPCce(0x10,12.0,416.0,0,0x80,0x80,0x80,&DAT_003ae970);
    SetString2__FiffiUcUcUcPCce(0x10,12.0,DAT_003ee354,0,0x80,0x80,0x80,&DAT_003ae980);
    if (80.0 < (float)draw_counter / 20480.0) {
      uVar3 = 'P';
      g = 0x80;
      b = 0x80;
    }
    else {
      if ((float)draw_counter / 20480.0 <= 100.0) {
        SetString2__FiffiUcUcUcPCce(0,120.0,400.0,0,0x80,0x80,0x80,"Draw Perf:%4d.%2d%%");
        return;
      }
      uVar3 = 0x80;
      g = '\0';
      b = '\0';
    }
    SetString2__FiffiUcUcUcPCce(0,120.0,400.0,0,uVar3,g,b,"Draw Perf:%4d.%2d%%");
  }
  return;
}
