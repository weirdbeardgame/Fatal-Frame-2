// STATUS: NOT STARTED

#include "menu_cmn_disp.h"

unsigned char CVariable<char, 0, 3> type_info node[8];
unsigned char CVariable<char, 0, 9> type_info node[8];

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3bd618;
	
  g3ddbgAssert__FbPCce(false,str_849);
  return (type_info *)v;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tft9CVariable3Zci0i3(0x3f2cb8,_max);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tft9CVariable3Zci0i3(0x3f2cc0,_max);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tft9CVariable3Zci0i3(0x3bd660,_max);
  }
  return (uint **)0x0;
}

void MenuPlyrDataDisp(int x, int y, u_char alpha) {
	DISP_SPRT plyr_ds;
	
  int iVar1;
  float fVar2;
  DISP_SPRT plyr_ds;
  
  PK2SendVram__FUiiii(0x19981c0,-1,-1,0);
  MenuPlyrHPDisp__FiiUc(x,y,alpha);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  plyr_ds.alpha = alpha;
  if (((uint)m_plyr_camera.camera_power_up.mCamPartsSetFlg.flag_32[0] & 2) == 0) {
    fVar2 = (float)x;
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&plyr_ds,menu_cmn_dat);
    plyr_ds.x = plyr_ds.x + fVar2;
    plyr_ds.y = plyr_ds.y + (float)y;
    DispSprD__FP9DISP_SPRT(&plyr_ds);
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&plyr_ds,menu_cmn_dat + 1);
    plyr_ds.x = plyr_ds.x + fVar2;
    plyr_ds.y = plyr_ds.y + (float)y;
    plyr_ds.alpha = alpha;
    DispSprD__FP9DISP_SPRT(&plyr_ds);
  }
  else {
                    /* end of inlined section */
    fVar2 = (float)x;
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&plyr_ds,menu_cmn_dat + 2);
    plyr_ds.x = plyr_ds.x + fVar2;
    plyr_ds.y = plyr_ds.y + (float)y;
    DispSprD__FP9DISP_SPRT(&plyr_ds);
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&plyr_ds,menu_cmn_dat + 3);
    plyr_ds.x = plyr_ds.x + fVar2;
    plyr_ds.y = plyr_ds.y + (float)y;
    plyr_ds.alpha = alpha;
    DispSprD__FP9DISP_SPRT(&plyr_ds);
  }
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&plyr_ds,menu_cmn_dat + 4);
  plyr_ds.x = plyr_ds.x + fVar2;
  plyr_ds.y = plyr_ds.y + (float)y;
  plyr_ds.alpha = alpha;
  DispSprD__FP9DISP_SPRT(&plyr_ds);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&plyr_ds,menu_cmn_dat + 5);
  plyr_ds.x = plyr_ds.x + fVar2;
  plyr_ds.y = plyr_ds.y + (float)y;
  plyr_ds.alpha = alpha;
  DispSprD__FP9DISP_SPRT(&plyr_ds);
  MenuCmnPlyrEquipReinforcedLensDisp__FiiUc(x,y,alpha);
  iVar1 = GetPlyrItemHaveNum__Fi(10);
  if (iVar1 < 1) {
    iVar1 = y + 0x29;
    MenuCmnHyphenDisp__FiiUcUi(x + 0xd8,iVar1,alpha,0);
    MenuCmnHyphenDisp__FiiUcUi((uint)(ushort)menu_cmn_dat[25].w + x + 0xd8,iVar1,alpha,0);
    MenuCmnHyphenDisp__FiiUcUi(x + 0xfd,iVar1,alpha,0);
    MenuCmnHyphenDisp__FiiUcUi((uint)(ushort)menu_cmn_dat[25].w + x + 0xfd,iVar1,alpha,0);
  }
  else {
    MenuFilmDisp__FiiUc(x,y,alpha);
  }
  return;
}

static void MenuPlyrHPDisp(int x, int y, u_char alpha) {
	DISP_SPRT plyr_ds;
	int i;
	static int hp_tex_tbl[4] = {
		/* [0] = */ 9,
		/* [1] = */ 8,
		/* [2] = */ 7,
		/* [3] = */ 6
	};
	int hp_all_w;
	int hp_w;
	
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  uint uVar7;
  float fVar8;
  DISP_SPRT plyr_ds;
  
  iVar4 = 0;
  iVar5 = 3;
  piVar3 = &hp_tex_tbl_1078;
  do {
    iVar1 = *piVar3;
    piVar3 = piVar3 + 1;
    iVar5 = iVar5 + -1;
    iVar4 = iVar4 + (uint)(ushort)menu_cmn_dat[iVar1].w;
  } while (-1 < iVar5);
  fVar8 = (float)y;
  uVar7 = (uint)((float)iVar4 *
                ((float)(uint)(ushort)plyr_wrk.cmn_wrk.st.hp /
                (float)(uint)(ushort)plyr_wrk.cmn_wrk.st.hpmax));
  iVar5 = 0;
  PK2SendVram__FUiiii(0x19981c0,-1,-1,0);
  piVar3 = &hp_tex_tbl_1078;
  iVar4 = hp_tex_tbl_1078;
  while( true ) {
    piVar3 = piVar3 + 1;
    if ((int)(uVar7 - (ushort)menu_cmn_dat[iVar4].w) < 0) {
      CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&plyr_ds,menu_cmn_dat + iVar4);
      uVar2 = plyr_ds.w - uVar7;
      if ((int)uVar2 < 0) {
        fVar6 = (float)(uVar2 & 1 | uVar2 >> 1);
        fVar6 = fVar6 + fVar6;
      }
      else {
        fVar6 = (float)uVar2;
      }
      plyr_ds.x = plyr_ds.x + (float)x + fVar6;
      plyr_ds.y = plyr_ds.y + fVar8;
      plyr_ds.u = (plyr_ds.u + plyr_ds.w) - uVar7;
      plyr_ds.w = uVar7;
      plyr_ds.alpha = alpha;
      DispSprD__FP9DISP_SPRT(&plyr_ds);
      return;
    }
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&plyr_ds,menu_cmn_dat + iVar4);
    plyr_ds.x = plyr_ds.x + (float)x;
    plyr_ds.y = plyr_ds.y + fVar8;
    plyr_ds.alpha = alpha;
    DispSprD__FP9DISP_SPRT(&plyr_ds);
    uVar7 = uVar7 - (ushort)menu_cmn_dat[iVar4].w;
    iVar5 = iVar5 + 1;
    if (3 < iVar5) break;
    iVar4 = *piVar3;
  }
  return;
}

static void MenuCmnPlyrEquipReinforcedLensDisp(int x, int y, u_char alpha) {
	int i;
	char equip_special[3];
	
  char cVar1;
  char *pcVar2;
  int x_00;
  int x_01;
  int x_02;
  int iVar3;
  char equip_special [3];
  
  iVar3 = 0;
  GetSubFuncArray__14CNEquipTrayWrkPc(&m_plyr_camera.eq_tray,equip_special);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  x_00 = x + 0x1f;
  if (((uint)m_plyr_camera.camera_power_up.mCamPartsSetFlg.flag_32[0] & 2) == 0) {
    if (equip_special[0] == '\0') {
                    /* end of inlined section */
      MenuCmnHyphenDisp__FiiUcUi(x + 0x7d,y + 0x2b,alpha,0);
    }
    else {
      MenuCmnReinforcedLensDisp__FiiUci(x + 0x4b,y + 0x10,alpha,(int)equip_special[0]);
      PK2SendVram__FUiiii(0x19981c0,-1,-1,0);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Zt9CVariable3Zci0i3_UiUi_PX01(equip_special[0],10);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
      MenuNumberDisp__FiiiiUciUc
                ((int)m_plyr_camera.eq_tray.mSave.mSubFuncLv.field0_0x0.m_aData[equip_special[0]].
                      mValue,1,x + 0x7d,y + 0x2b,alpha,0,'\0');
    }
  }
  else {
                    /* end of inlined section */
    x_02 = x + 9;
    x_01 = x_00;
    do {
      pcVar2 = equip_special + iVar3;
      iVar3 = iVar3 + 1;
      cVar1 = *pcVar2;
      if (cVar1 == '\0') {
                    /* end of inlined section */
        MenuCmnHyphenDisp__FiiUcUi(x_00,y + 0x2d,alpha,0);
      }
      else {
        MenuCmnReinforcedLensDisp__FiiUci(x_02,y + 0xf,alpha,(int)cVar1);
        PK2SendVram__FUiiii(0x19981c0,-1,-1,0);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        cVar1 = *pcVar2;
        _fixed_array_verifyrange__H1Zt9CVariable3Zci0i3_UiUi_PX01(cVar1,10);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
        MenuNumberDisp__FiiiiUciUc
                  ((int)m_plyr_camera.eq_tray.mSave.mSubFuncLv.field0_0x0.m_aData[cVar1].mValue,1,
                   x_01,y + 0x2d,alpha,0,'\0');
      }
      x_00 = x_00 + 0x27;
      x_01 = x_01 + 0x27;
      x_02 = x_02 + 0x25;
    } while (iVar3 < 3);
  }
  return;
}

static void MenuCmnReinforcedLensDisp(int x, int y, u_char alpha, int lens_label) {
	DISP_SPRT lens_ds;
	static int lens_tbl[10] = {
		/* [0] = */ -1,
		/* [1] = */ 28,
		/* [2] = */ 27,
		/* [3] = */ 30,
		/* [4] = */ 35,
		/* [5] = */ 31,
		/* [6] = */ 33,
		/* [7] = */ 29,
		/* [8] = */ 32,
		/* [9] = */ 34
	};
	
  DISP_SPRT lens_ds;
  
  PK2SendVram__FUiiii(0x19368c0,-1,-1,0);
  if (*(int *)(lens_tbl_1091 + lens_label * 4) != -1) {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT
              (&lens_ds,menu_cmn_dat + *(int *)(lens_tbl_1091 + lens_label * 4));
    lens_ds.x = (float)x;
    lens_ds.y = (float)y;
    lens_ds.b = _14CNEquipTrayWrk_equip_func_tbl[lens_label].b;
    lens_ds.r = _14CNEquipTrayWrk_equip_func_tbl[lens_label].r;
    lens_ds.g = _14CNEquipTrayWrk_equip_func_tbl[lens_label].g;
    lens_ds.alpha = (uchar)((int)((uint)lens_ds.alpha * (uint)alpha) >> 7);
    DispSprD__FP9DISP_SPRT(&lens_ds);
  }
  return;
}

static void MenuFilmDisp(int x, int y, u_char alpha) {
	DISP_SPRT film_ds;
	static int film_tex[5] = {
		/* [0] = */ 10,
		/* [1] = */ 11,
		/* [2] = */ 12,
		/* [3] = */ 13,
		/* [4] = */ 14
	};
	static int film_num_tex[5] = {
		/* [0] = */ 7,
		/* [1] = */ 14,
		/* [2] = */ 61,
		/* [3] = */ 90,
		/* [4] = */ 0
	};
	
  int iVar1;
  int y_00;
  float fVar2;
  DISP_SPRT film_ds;
  
  y_00 = y + 0x29;
  fVar2 = (float)y;
  PK2SendVram__FUiiii(0x19981c0,-1,-1,0);
  iVar1 = GetPlyrEquipmentFilmType__Fv();
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&film_ds,menu_cmn_dat + *(int *)(film_tex_1095 + iVar1 * 4))
  ;
  film_ds.x = film_ds.x + (float)x;
  film_ds.y = film_ds.y + fVar2;
  film_ds.alpha = alpha;
  DispSprD__FP9DISP_SPRT(&film_ds);
  iVar1 = GetPlyrEquipmentFilmType__Fv();
  if (iVar1 == 4) {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&film_ds,menu_cmn_dat + 0x1a);
    film_ds.x = film_ds.x + (float)x;
    film_ds.y = film_ds.y + fVar2;
    film_ds.alpha = alpha;
    DispSprD__FP9DISP_SPRT(&film_ds);
  }
  else {
    iVar1 = GetPlyrEquipmentFilmType__Fv();
    MenuNumberDisp__FiiiiUciUc
              (*(int *)(film_num_tex_1096 + iVar1 * 4),2,x + 0xd8,y_00,alpha,0xa0,'\x01');
  }
  iVar1 = GetPlyrEquipmentFilmType__Fv();
  if (iVar1 == 0) {
    MenuCmnHyphenDisp__FiiUcUi(x + 0xfd,y_00,alpha,0);
    MenuCmnHyphenDisp__FiiUcUi((uint)(ushort)menu_cmn_dat[25].w + x + 0xfd,y_00,alpha,0);
  }
  else {
    iVar1 = GetPlyrEquipmentFilmType__Fv();
    iVar1 = GetPlyrItemHaveNum__Fi(iVar1);
    MenuNumberDisp__FiiiiUciUc(iVar1,2,x + 0xfd,y_00,alpha,0,'\0');
  }
  return;
}

void MenuNumberDisp(int data, int num, int x, int y, u_char alpha, int pri, u_char zero_flg) {
  DrawCmnNumberTex__FiiP8SPRT_DATiiUciUc(data,num,menu_cmn_dat + 0xf,x,y,alpha,pri,zero_flg);
  return;
}

static void MenuCmnHyphenDisp(int x, int y, u_char alpha, u_int pri) {
	DISP_SPRT hyphen_ds;
	
  DISP_SPRT hyphen_ds;
  
  PK2SendVram__FUiiii(0x19981c0,-1,-1,0);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&hyphen_ds,menu_cmn_dat + 0x19);
  hyphen_ds.x = (float)x;
  hyphen_ds.y = (float)y;
  hyphen_ds.z = 0xfffff - (pri & 0xfffff);
  hyphen_ds.pri = pri;
  hyphen_ds.alpha = alpha;
  DispSprD__FP9DISP_SPRT(&hyphen_ds);
  return;
}

void MenuCmnConfirmWinDisp(int off_x, int off_y, u_char alpha, u_int pri) {
  DrawCmnWindow__FUiffffUcUc(pri,(float)(off_x + 0x18),(float)(off_y + 0xb2),592.0,112.0,alpha,0x80)
  ;
  return;
}

void MenuCmnYesNoWinDisp(int off_x, int off_y, u_char alpha, u_int pri) {
  DrawCmnWindow__FUiffffUcUc(pri,(float)(off_x + 0x18),(float)(off_y + 0xb2),592.0,112.0,alpha,0x80)
  ;
  DrawCmnSelCsr__FUiffUcfUc
            (pri,(float)(menu_yes_no_ctrl.csr * 0xcf + off_x + 0x9b),(float)(off_y + 0xe6),alpha,0.0
             ,'\0');
  DrawCmnSelYes__FUiffUc(pri,(float)(off_x + 0x99),(float)(off_y + 0xe8),alpha);
  DrawCmnSelNo__FUiffUc(pri,(float)(off_x + 0x169),(float)(off_y + 0xe8),alpha);
  return;
}

void MenuCmnSelFrameDisp(float x, float y, float w, u_char alpha, u_int pri) {
	DISP_SPRT frame_ds;
	float one_size;
	float frame_scl_l;
	float frame_scl_r;
	
  uint uVar1;
  uint uVar2;
  float fVar3;
  DISP_SPRT frame_ds;
  
  uVar1 = (uint)(ushort)menu_cmn_dat[37].w;
  fVar3 = (w * 0.5) / (float)(uint)(ushort)menu_cmn_dat[36].w;
  PK2SendVram__FUiiii(0x19368c0,-1,-1,0);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&frame_ds,menu_cmn_dat + 0x24);
  uVar2 = 0xfffff - (pri & 0xfffff);
  frame_ds.sch = 1.0;
  frame_ds.alpha = (uchar)((int)((uint)frame_ds.alpha * (uint)alpha) >> 7);
  frame_ds.csx = x;
  frame_ds.csy = y;
  frame_ds.x = x;
  frame_ds.y = y;
  frame_ds.z = uVar2;
  frame_ds.scw = fVar3;
  frame_ds.pri = pri;
  DispSprD__FP9DISP_SPRT(&frame_ds);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&frame_ds,menu_cmn_dat + 0x25);
  frame_ds.sch = 1.0;
  frame_ds.alpha = (uchar)((int)((uint)frame_ds.alpha * (uint)alpha) >> 7);
  frame_ds.csx = x + (float)(uint)(ushort)menu_cmn_dat[36].w * fVar3;
  frame_ds.csy = y;
  frame_ds.x = frame_ds.csx;
  frame_ds.y = y;
  frame_ds.z = uVar2;
  frame_ds.scw = (w * 0.5) / (float)uVar1;
  frame_ds.pri = pri;
  DispSprD__FP9DISP_SPRT(&frame_ds);
  return;
}

void MenuCmnNonSelFrameDisp(float x, float y, float w, u_char alpha, u_int pri) {
	DISP_SPRT frame_ds;
	float one_size;
	float frame_scl_l;
	float frame_scl_r;
	
  uint uVar1;
  uint uVar2;
  float fVar3;
  DISP_SPRT frame_ds;
  
  uVar1 = (uint)(ushort)menu_cmn_dat[39].w;
  fVar3 = (w * 0.5) / (float)(uint)(ushort)menu_cmn_dat[38].w;
  PK2SendVram__FUiiii(0x1973cc0,-1,-1,0);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&frame_ds,menu_cmn_dat + 0x26);
  uVar2 = 0xfffff - (pri & 0xfffff);
  frame_ds.sch = 1.0;
  frame_ds.alpha = (uchar)((int)((uint)frame_ds.alpha * (uint)alpha) >> 7);
  frame_ds.csx = x;
  frame_ds.csy = y;
  frame_ds.x = x;
  frame_ds.y = y;
  frame_ds.z = uVar2;
  frame_ds.scw = fVar3;
  frame_ds.pri = pri;
  DispSprD__FP9DISP_SPRT(&frame_ds);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&frame_ds,menu_cmn_dat + 0x27);
  frame_ds.sch = 1.0;
  frame_ds.alpha = (uchar)((int)((uint)frame_ds.alpha * (uint)alpha) >> 7);
  frame_ds.csx = x + (float)(uint)(ushort)menu_cmn_dat[38].w * fVar3;
  frame_ds.csy = y;
  frame_ds.x = frame_ds.csx;
  frame_ds.y = y;
  frame_ds.z = uVar2;
  frame_ds.scw = (w * 0.5) / (float)uVar1;
  frame_ds.pri = pri;
  DispSprD__FP9DISP_SPRT(&frame_ds);
  return;
}

void MenuCmnLineTateDisp(float x, float y, float h, u_char alpha, u_int pri) {
	DISP_SPRT ds;
	float line_h;
	float line_scr;
	
  uint uVar1;
  float fVar2;
  float fVar3;
  DISP_SPRT ds;
  
  fVar3 = 1.0;
  fVar2 = h - (float)((uint)(ushort)menu_cmn_dat[40].h + (uint)(ushort)menu_cmn_dat[42].h);
  PK2SendVram__FUiiii(0x19368c0,-1,-1,0);
  if (fVar2 < 0.0) {
    fVar2 = 0.0;
  }
  else {
    fVar3 = fVar2 / (float)(uint)(ushort)menu_cmn_dat[41].h;
  }
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ds,menu_cmn_dat + 0x28);
  uVar1 = 0xfffff - (pri & 0xfffff);
  ds.alpha = (uchar)((int)((uint)ds.alpha * (uint)alpha) >> 7);
  ds.x = x;
  ds.y = y;
  ds.z = uVar1;
  ds.pri = pri;
  DispSprD__FP9DISP_SPRT(&ds);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ds,menu_cmn_dat + 0x2a);
  ds.y = y + fVar2 + (float)(uint)(ushort)menu_cmn_dat[40].h;
  ds.alpha = (uchar)((int)((uint)ds.alpha * (uint)alpha) >> 7);
  ds.x = x;
  ds.z = uVar1;
  ds.pri = pri;
  DispSprD__FP9DISP_SPRT(&ds);
  if (0.0 < fVar2) {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ds,menu_cmn_dat + 0x29);
    ds.scw = 1.0;
    ds.csy = y + (float)(uint)(ushort)menu_cmn_dat[40].h;
    ds.alpha = (uchar)((int)((uint)ds.alpha * (uint)alpha) >> 7);
    ds.csx = x;
    ds.x = x;
    ds.y = ds.csy;
    ds.z = uVar1;
    ds.sch = fVar3;
    ds.pri = pri;
    DispSprD__FP9DISP_SPRT(&ds);
  }
  return;
}

void MenuCmnLineYokoDisp(float x, float y, float w, u_char alpha, u_int pri) {
	DISP_SPRT ds;
	float line_w;
	float line_scr;
	
  uint uVar1;
  float fVar2;
  float fVar3;
  DISP_SPRT ds;
  
  fVar3 = 1.0;
  fVar2 = w - (float)((uint)(ushort)menu_cmn_dat[43].w + (uint)(ushort)menu_cmn_dat[45].w);
  PK2SendVram__FUiiii(0x19368c0,-1,-1,0);
  if (fVar2 < 0.0) {
    fVar2 = 0.0;
  }
  else {
    fVar3 = fVar2 / (float)(uint)(ushort)menu_cmn_dat[44].w;
  }
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ds,menu_cmn_dat + 0x2b);
  uVar1 = 0xfffff - (pri & 0xfffff);
  ds.alpha = (uchar)((int)((uint)ds.alpha * (uint)alpha) >> 7);
  ds.x = x;
  ds.y = y;
  ds.z = uVar1;
  ds.pri = pri;
  DispSprD__FP9DISP_SPRT(&ds);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ds,menu_cmn_dat + 0x2d);
  ds.x = x + fVar2 + (float)(uint)(ushort)menu_cmn_dat[43].w;
  ds.alpha = (uchar)((int)((uint)ds.alpha * (uint)alpha) >> 7);
  ds.y = y;
  ds.z = uVar1;
  ds.pri = pri;
  DispSprD__FP9DISP_SPRT(&ds);
  if (0.0 < fVar2) {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ds,menu_cmn_dat + 0x2c);
    ds.sch = 1.0;
    ds.csx = x + (float)(uint)(ushort)menu_cmn_dat[43].w;
    ds.alpha = (uchar)((int)((uint)ds.alpha * (uint)alpha) >> 7);
    ds.csy = y;
    ds.x = ds.csx;
    ds.y = y;
    ds.z = uVar1;
    ds.scw = fVar3;
    ds.pri = pri;
    DispSprD__FP9DISP_SPRT(&ds);
  }
  return;
}

CVariable<char,0,3>* CVariable<char, 0, 3> * _fixed_array_verifyrange<CVariable<char, 0, 3> >(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_849);
  return (type_info *)v;
}

type_info& CVariable<char, 0, 3> type_info function() {
  g3ddbgAssert__FbPCce(false,str_849);
  return (type_info *)v;
}
