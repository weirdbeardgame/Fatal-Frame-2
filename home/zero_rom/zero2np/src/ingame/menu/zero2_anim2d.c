// STATUS: NOT STARTED

#include "zero2_anim2d.h"

u_char Zero2Anim2D_InOutAnimCtrl(char *anim_step, char *anim_timer, short int in_anim_time, short int out_anim_time) {
	static char __FUNCTION__[26] = {
		/* [0] = */ 90,
		/* [1] = */ 101,
		/* [2] = */ 114,
		/* [3] = */ 111,
		/* [4] = */ 50,
		/* [5] = */ 65,
		/* [6] = */ 110,
		/* [7] = */ 105,
		/* [8] = */ 109,
		/* [9] = */ 50,
		/* [10] = */ 68,
		/* [11] = */ 95,
		/* [12] = */ 73,
		/* [13] = */ 110,
		/* [14] = */ 79,
		/* [15] = */ 117,
		/* [16] = */ 116,
		/* [17] = */ 65,
		/* [18] = */ 110,
		/* [19] = */ 105,
		/* [20] = */ 109,
		/* [21] = */ 67,
		/* [22] = */ 116,
		/* [23] = */ 114,
		/* [24] = */ 108,
		/* [25] = */ 0
	};
	u_char alpha;
	ALPHA_ANIM_TBL in_alpha_tbl[2];
	ALPHA_ANIM_TBL out_alpha_tbl[2];
	
  undefined *puVar1;
  char cVar2;
  ulong *puVar3;
  uchar uVar4;
  int iVar5;
  uint uVar6;
  ALPHA_ANIM_TBL in_alpha_tbl [2];
  ALPHA_ANIM_TBL out_alpha_tbl [2];
  
  cVar2 = *anim_step;
  puVar1 = (undefined *)((int)&in_alpha_tbl[0].end_time + 1);
  uVar6 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar6);
  *puVar3 = *puVar3 & -1L << (uVar6 + 1) * 8 | DAT_003e6db8 >> (7 - uVar6) * 8;
  puVar1 = (undefined *)((int)&in_alpha_tbl[1].end_time + 1);
  uVar6 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar6);
  *puVar3 = *puVar3 & -1L << (uVar6 + 1) * 8 | (ulong)_PTR_003e6dc0 >> (7 - uVar6) * 8;
  in_alpha_tbl[1] = _PTR_003e6dc0;
  puVar1 = (undefined *)((int)&out_alpha_tbl[0].end_time + 1);
  uVar6 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar6);
  *puVar3 = *puVar3 & -1L << (uVar6 + 1) * 8 | DAT_003e6dc8 >> (7 - uVar6) * 8;
  puVar1 = (undefined *)((int)&out_alpha_tbl[1].end_time + 1);
  uVar6 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar6);
  *puVar3 = *puVar3 & -1L << (uVar6 + 1) * 8 | (ulong)_PTR_003e6dd0 >> (7 - uVar6) * 8;
  out_alpha_tbl[1] = _PTR_003e6dd0;
  in_alpha_tbl[0]._0_6_ = (undefined6)DAT_003e6db8;
  in_alpha_tbl[0].end_time = in_anim_time;
  out_alpha_tbl[0]._0_6_ = (undefined6)DAT_003e6dc8;
  out_alpha_tbl[0].end_time = out_anim_time;
  if (cVar2 == '\0') {
    *anim_timer = '\0';
    *anim_step = '\x01';
  }
  if (*anim_timer < '\0') {
    printf("<<<<<<<<<WARNING FILE[%s] LINE[%d]>>>>>>>>>>\n");
    PrintWarningReal("Warning!! %s");
    *anim_timer = '\0';
    cVar2 = *anim_step;
  }
  else {
    cVar2 = *anim_step;
  }
  uVar6 = (uint)(byte)*anim_step;
  if (cVar2 == '\x01') {
    iVar5 = uVar6 << 0x18;
    if ((long)*anim_timer < (long)(int)(short)in_anim_time) goto LAB_0026d1b4;
    printf("<<<<<<<<<WARNING FILE[%s] LINE[%d]>>>>>>>>>>\n");
    PrintWarningReal("IN ANIM Warning!! %s");
    *anim_timer = (char)in_anim_time;
  }
  else {
    iVar5 = uVar6 << 0x18;
    if ((cVar2 != '\x03') ||
       (iVar5 = uVar6 << 0x18, (long)*anim_timer < (long)(int)(short)out_anim_time))
    goto LAB_0026d1b4;
    printf("<<<<<<<<<WARNING FILE[%s] LINE[%d]>>>>>>>>>>\n");
    PrintWarningReal("OUT ANIM Warning!! %s");
    *anim_timer = (char)out_anim_time;
  }
  iVar5 = (uint)(byte)*anim_step << 0x18;
LAB_0026d1b4:
  iVar5 = iVar5 >> 0x18;
  if (iVar5 == 2) {
    return 0x80;
  }
  if (iVar5 < 3) {
    if (iVar5 == 1) {
      uVar4 = Anim2D_CalcNowAlpha__FPC14ALPHA_ANIM_TBLi(in_alpha_tbl,(int)*anim_timer);
      cVar2 = *anim_timer;
      *anim_timer = cVar2 + '\x01';
      if ((long)(int)(char)(cVar2 + '\x01') < (long)(int)(short)in_anim_time) {
        return uVar4;
      }
      *anim_step = '\x02';
      return uVar4;
    }
  }
  else {
    if (iVar5 == 3) {
      uVar4 = Anim2D_CalcNowAlpha__FPC14ALPHA_ANIM_TBLi(out_alpha_tbl,(int)*anim_timer);
      cVar2 = *anim_timer;
      *anim_timer = cVar2 + '\x01';
      if ((long)(int)(char)(cVar2 + '\x01') < (long)(int)(short)out_anim_time) {
        return uVar4;
      }
      *anim_step = '\x04';
      return uVar4;
    }
    if (iVar5 == 4) {
      return '\0';
    }
  }
  SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
  PrintAssertReal("Error! %s");
  return '\0';
}

void Zero2Anim2D_CsrAnimCtrl(char *timer, u_char *rgb) {
	static RGB_ANIM_TBL rgb_tbl[4] = {
		/* [0] = */ {
			/* .start_rgb = */ 64,
			/* .end_rgb = */ 128,
			/* .start_time = */ 0,
			/* .end_time = */ 15
		},
		/* [1] = */ {
			/* .start_rgb = */ 128,
			/* .end_rgb = */ 128,
			/* .start_time = */ 15,
			/* .end_time = */ 30
		},
		/* [2] = */ {
			/* .start_rgb = */ 128,
			/* .end_rgb = */ 64,
			/* .start_time = */ 30,
			/* .end_time = */ 45
		},
		/* [3] = */ {
			/* .start_rgb = */ -1,
			/* .end_rgb = */ -1,
			/* .start_time = */ -1,
			/* .end_time = */ -1
		}
	};
	
  char cVar1;
  uchar uVar2;
  
  uVar2 = Anim2D_CalcNowRGB__FPC12RGB_ANIM_TBLi((RGB_ANIM_TBL *)rgb_tbl_15,(int)*timer);
  *rgb = uVar2;
  cVar1 = *timer;
  *timer = cVar1 + '\x01';
  if (',' < (char)(cVar1 + '\x01')) {
    *timer = '\0';
  }
  return;
}

u_char Zero2Anim2D_SelAnimCtrl(char *timer) {
	static ALPHA_ANIM_TBL alpha_tbl[3] = {
		/* [0] = */ {
			/* .start_alpha = */ 128,
			/* .end_alpha = */ 64,
			/* .start_time = */ 0,
			/* .end_time = */ 15
		},
		/* [1] = */ {
			/* .start_alpha = */ 64,
			/* .end_alpha = */ 128,
			/* .start_time = */ 15,
			/* .end_time = */ 30
		},
		/* [2] = */ {
			/* .start_alpha = */ -1,
			/* .end_alpha = */ -1,
			/* .start_time = */ -1,
			/* .end_time = */ -1
		}
	};
	
  char cVar1;
  uchar uVar2;
  
  uVar2 = Anim2D_CalcNowAlpha__FPC14ALPHA_ANIM_TBLi((ALPHA_ANIM_TBL *)alpha_tbl_19,(int)*timer);
  cVar1 = *timer;
  *timer = cVar1 + '\x01';
  if ('\x1d' < (char)(cVar1 + '\x01')) {
    *timer = '\0';
  }
  return uVar2;
}

u_char Zero2Anim2D_FadeInAnimCtrl(int *timer, short int fade_in_time) {
	ALPHA_ANIM_TBL fade_in_tbl[2];
	u_char alpha;
	
  undefined *puVar1;
  int timer_00;
  uint uVar2;
  ulong *puVar3;
  uchar uVar4;
  ALPHA_ANIM_TBL fade_in_tbl [2];
  
  timer_00 = *timer;
  puVar1 = (undefined *)((int)&fade_in_tbl[0].end_time + 1);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003e6ed0 >> (7 - uVar2) * 8;
  puVar1 = (undefined *)((int)&fade_in_tbl[1].end_time + 1);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | (ulong)_PTR_003e6ed8 >> (7 - uVar2) * 8;
  fade_in_tbl[1] = _PTR_003e6ed8;
  fade_in_tbl[0]._0_6_ = (undefined6)DAT_003e6ed0;
  fade_in_tbl[0].end_time = fade_in_time;
  if (timer_00 < (short)fade_in_time) {
    uVar4 = Anim2D_CalcNowAlpha__FPC14ALPHA_ANIM_TBLi(fade_in_tbl,timer_00);
  }
  else {
    *timer = (int)(short)fade_in_time;
    uVar4 = 0x80;
  }
  *timer = *timer + 1;
  return uVar4;
}

u_char Zero2Anim2D_FadeOutAnimCtrl(int *timer, short int fade_out_time) {
	ALPHA_ANIM_TBL fade_out_tbl[2];
	u_char alpha;
	
  undefined *puVar1;
  int timer_00;
  uint uVar2;
  ulong *puVar3;
  uchar uVar4;
  ALPHA_ANIM_TBL fade_out_tbl [2];
  
  timer_00 = *timer;
  puVar1 = (undefined *)((int)&fade_out_tbl[0].end_time + 1);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003e6ee0 >> (7 - uVar2) * 8;
  puVar1 = (undefined *)((int)&fade_out_tbl[1].end_time + 1);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | (ulong)_PTR_003e6ee8 >> (7 - uVar2) * 8;
  fade_out_tbl[1] = _PTR_003e6ee8;
  fade_out_tbl[0]._0_6_ = (undefined6)DAT_003e6ee0;
  fade_out_tbl[0].end_time = fade_out_time;
  if (timer_00 < (short)fade_out_time) {
    uVar4 = Anim2D_CalcNowAlpha__FPC14ALPHA_ANIM_TBLi(fade_out_tbl,timer_00);
  }
  else {
    *timer = (int)(short)fade_out_time;
    uVar4 = 0x80;
  }
  *timer = *timer + 1;
  return uVar4;
}
