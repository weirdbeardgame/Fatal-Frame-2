// STATUS: NOT STARTED

#include "draw_caption.h"

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3a5070;
	
  g3ddbgAssert__FbPCce(false,str_849);
  return;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_void__003efb98,_max,v);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_char__003efba0,_max,v);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi("unsigned int*",_max,v);
  }
  return (uint **)0x0;
}

void DrawCmnCaption(u_char cap_label, float x, float y, u_char alp, u_int pri) {
	DISP_SPRT cap_ds;
	
  DISP_SPRT cap_ds;
  
  cap_ds.x = x;
  cap_ds.pri = pri;
  cap_ds.alpha = alp;
  if (cap_label == '\0') {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&cap_ds,caption_tex + 3);
    cap_ds.z = 0xfffff - (pri & 0xfffff);
    cap_ds.y = y;
    DispSprD__FP9DISP_SPRT(&cap_ds);
  }
  else {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&cap_ds,caption_tex + cap_label);
    cap_ds.z = 0xfffff - (pri & 0xfffff);
    cap_ds.y = y;
    DispSprD__FP9DISP_SPRT(&cap_ds);
  }
  return;
}

void DrawCmnCapGroup(int group_label, int x, int y, u_char alp, u_int pri) {
	static char __FUNCTION__[16] = {
		/* [0] = */ 68,
		/* [1] = */ 114,
		/* [2] = */ 97,
		/* [3] = */ 119,
		/* [4] = */ 67,
		/* [5] = */ 109,
		/* [6] = */ 110,
		/* [7] = */ 67,
		/* [8] = */ 97,
		/* [9] = */ 112,
		/* [10] = */ 71,
		/* [11] = */ 114,
		/* [12] = */ 111,
		/* [13] = */ 117,
		/* [14] = */ 112,
		/* [15] = */ 0
	};
	
  int iVar1;
  uchar uVar2;
  uchar *puVar3;
  BTN_GROUP **ppBVar4;
  CAP_BTN_GROUP_CTRL *pCVar5;
  int iVar6;
  int iVar7;
  
  if (0xe < group_label) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! %s group label[%d]");
  }
  ppBVar4 = &cap_btn_group_ctrl[group_label].btn_group;
  if (-1 < (*ppBVar4)->btn_label) {
    iVar6 = 0;
    iVar7 = 0;
    do {
      uVar2 = GetLanguage__Fv();
      puVar3 = (uchar *)((int)(*ppBVar4)->x + iVar6 + -4);
      iVar6 = iVar6 + 0x18;
      DrawCmnButton__FUcffUcUi
                (*puVar3,(float)(x + *(int *)(puVar3 + (char)uVar2 * 4 + 4)),(float)y,alp,pri);
      iVar1 = iVar7 + -4;
      iVar7 = iVar7 + 0x18;
    } while (-1 < *(char *)((int)(*ppBVar4)[1].x + iVar1));
  }
  pCVar5 = cap_btn_group_ctrl + group_label;
  if (-1 < pCVar5->cap_group->cap_label) {
    iVar6 = 0;
    iVar7 = 0;
    do {
      uVar2 = GetLanguage__Fv();
      puVar3 = (uchar *)((int)pCVar5->cap_group->x + iVar6 + -4);
      iVar6 = iVar6 + 0x18;
      DrawCmnCaption__FUcffUcUi
                (*puVar3,(float)(x + *(int *)(puVar3 + (char)uVar2 * 4 + 4)),(float)y,alp,pri);
      iVar1 = iVar7 + -4;
      iVar7 = iVar7 + 0x18;
    } while (-1 < *(char *)((int)pCVar5->cap_group[1].x + iVar1));
  }
  return;
}

void DrawCmnCapGroup_W(int group_label, int world_label, u_char alp, u_int pri) {
	static char __FUNCTION__[18] = {
		/* [0] = */ 68,
		/* [1] = */ 114,
		/* [2] = */ 97,
		/* [3] = */ 119,
		/* [4] = */ 67,
		/* [5] = */ 109,
		/* [6] = */ 110,
		/* [7] = */ 67,
		/* [8] = */ 97,
		/* [9] = */ 112,
		/* [10] = */ 71,
		/* [11] = */ 114,
		/* [12] = */ 111,
		/* [13] = */ 117,
		/* [14] = */ 112,
		/* [15] = */ 95,
		/* [16] = */ 87,
		/* [17] = */ 0
	};
	
  uchar uVar1;
  uchar uVar2;
  
  if (0xe < group_label) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! %s group label[%d]");
  }
  if (0xe < world_label) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! %s world label[%d]");
  }
  uVar1 = GetLanguage__Fv();
  uVar2 = GetLanguage__Fv();
  DrawCmnCapGroup__FiiiUcUi
            (group_label,cap_world_pos_x[world_label][(char)uVar1],
             cap_world_pos_y[world_label][(char)uVar2],alp,pri);
  return;
}
