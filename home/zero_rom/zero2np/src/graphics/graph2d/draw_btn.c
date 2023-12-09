// STATUS: NOT STARTED

#include "draw_btn.h"

void DrawCmnButton(u_char btn_label, float x, float y, u_char alp, u_int pri) {
	DISP_SPRT btn_ds;
	
  DISP_SPRT btn_ds;
  
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&btn_ds,btn_tex + btn_label);
  btn_ds.z = 0xfffff - (pri & 0xfffff);
  btn_ds.x = x;
  btn_ds.y = y;
  btn_ds.pri = pri;
  btn_ds.alpha = alp;
  DispSprD__FP9DISP_SPRT(&btn_ds);
  return;
}
