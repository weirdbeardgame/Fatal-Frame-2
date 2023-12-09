// STATUS: NOT STARTED

#include "draw_cmn_num.h"

void DrawCmnNumberTex(int data, int num, SPRT_DAT *zero_dat, int x, int y, u_char alpha, int pri, u_char zero_flg) {
	int i;
	int j;
	int tmp;
	int ten_tmp;
	int off_x;
	u_char set_flg;
	
  ushort uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  bVar2 = zero_flg == '\x01';
  uVar1 = zero_dat->w;
  if (0 < num) {
    do {
      iVar4 = 1;
      iVar5 = num + -1;
      iVar3 = iVar5;
      if (iVar5 < 1) {
        iVar4 = 1;
      }
      else {
        do {
          iVar3 = iVar3 + -1;
          iVar4 = iVar4 * 10;
        } while (iVar3 != 0);
      }
      if (iVar4 == 0) {
        trap(7);
      }
      if (data / iVar4 != 0) {
        bVar2 = true;
      }
      if (((zero_flg == '\0') && (data == 0)) && (num == 1)) {
        bVar2 = true;
      }
      if (num == 1) {
        iVar3 = data % 10;
      }
      else {
        iVar3 = (data / iVar4) % 10;
      }
      if (bVar2) {
        DrawCmnNumberTex_One__FiP8SPRT_DATiiUci(iVar3,zero_dat,x,y,alpha,pri);
      }
      x = x + (uint)uVar1;
      num = iVar5;
    } while (0 < iVar5);
  }
  return;
}

static void DrawCmnNumberTex_One(int data, SPRT_DAT *zero_dat, int x, int y, u_char alpha, int pri) {
	static char __FUNCTION__[21] = {
		/* [0] = */ 68,
		/* [1] = */ 114,
		/* [2] = */ 97,
		/* [3] = */ 119,
		/* [4] = */ 67,
		/* [5] = */ 109,
		/* [6] = */ 110,
		/* [7] = */ 78,
		/* [8] = */ 117,
		/* [9] = */ 109,
		/* [10] = */ 98,
		/* [11] = */ 101,
		/* [12] = */ 114,
		/* [13] = */ 84,
		/* [14] = */ 101,
		/* [15] = */ 120,
		/* [16] = */ 95,
		/* [17] = */ 79,
		/* [18] = */ 110,
		/* [19] = */ 101,
		/* [20] = */ 0
	};
	DISP_SPRT num_ds;
	
  DISP_SPRT num_ds;
  
  if (9 < data) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error!! %s");
  }
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&num_ds,zero_dat + data);
  num_ds.x = (float)x;
  num_ds.y = (float)y;
  num_ds.z = 0xfffff - (pri & 0xfffffU);
  num_ds.pri = pri;
  num_ds.alpha = alpha;
  DispSprD__FP9DISP_SPRT(&num_ds);
  return;
}
