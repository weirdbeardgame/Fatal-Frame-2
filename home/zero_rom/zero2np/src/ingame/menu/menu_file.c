// STATUS: NOT STARTED

#include "menu_file.h"

struct fixed_array_base<MENU_REF_CTRL,5,MENU_REF_CTRL[5]> {
protected:
	MENU_REF_CTRL m_aData[5];
	
public:
	fixed_array_base<MENU_REF_CTRL,5,MENU_REF_CTRL[5]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	MENU_REF_CTRL& operator[]();
	MENU_REF_CTRL& operator[]();
	MENU_REF_CTRL* data();
	MENU_REF_CTRL* begin();
	MENU_REF_CTRL* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<MENU_REF_CTRL,5> : fixed_array_base<MENU_REF_CTRL,5,MENU_REF_CTRL[5]> {
};

typedef struct {
	char sub_step;
	char mode;
	char next_mode;
	u_char cross_fade_flg;
	int tag_csr;
	fixed_array<int,5> top_csr;
	fixed_array<MENU_REF_CTRL,5> ref_ctrl;
} MENU_FILE_CTRL;

typedef struct {
	char anim_step;
	char anim_timer;
	u_char rgb;
	char scroll_timer;
	char sub_anim_step;
	char sub_anim_timer;
} MENU_FILE_DISP;

typedef struct {
	int file_id;
	char state;
} MENU_FILE_DATA;

struct fixed_array_base<MENU_FILE_DATA,42,MENU_FILE_DATA[42]> {
protected:
	MENU_FILE_DATA m_aData[42];
	
public:
	fixed_array_base<MENU_FILE_DATA,42,MENU_FILE_DATA[42]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	MENU_FILE_DATA& operator[]();
	MENU_FILE_DATA& operator[]();
	MENU_FILE_DATA* data();
	MENU_FILE_DATA* begin();
	MENU_FILE_DATA* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<MENU_FILE_DATA,42> : fixed_array_base<MENU_FILE_DATA,42,MENU_FILE_DATA[42]> {
};

struct fixed_array_base<MENU_FILE_DATA,40,MENU_FILE_DATA[40]> {
protected:
	MENU_FILE_DATA m_aData[40];
	
public:
	fixed_array_base<MENU_FILE_DATA,40,MENU_FILE_DATA[40]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	MENU_FILE_DATA& operator[]();
	MENU_FILE_DATA& operator[]();
	MENU_FILE_DATA* data();
	MENU_FILE_DATA* begin();
	MENU_FILE_DATA* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<MENU_FILE_DATA,40> : fixed_array_base<MENU_FILE_DATA,40,MENU_FILE_DATA[40]> {
};

struct fixed_array_base<MENU_FILE_DATA,26,MENU_FILE_DATA[26]> {
protected:
	MENU_FILE_DATA m_aData[26];
	
public:
	fixed_array_base<MENU_FILE_DATA,26,MENU_FILE_DATA[26]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	MENU_FILE_DATA& operator[]();
	MENU_FILE_DATA& operator[]();
	MENU_FILE_DATA* data();
	MENU_FILE_DATA* begin();
	MENU_FILE_DATA* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<MENU_FILE_DATA,26> : fixed_array_base<MENU_FILE_DATA,26,MENU_FILE_DATA[26]> {
};

struct fixed_array_base<MENU_FILE_DATA,10,MENU_FILE_DATA[10]> {
protected:
	MENU_FILE_DATA m_aData[10];
	
public:
	fixed_array_base<MENU_FILE_DATA,10,MENU_FILE_DATA[10]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	MENU_FILE_DATA& operator[]();
	MENU_FILE_DATA& operator[]();
	MENU_FILE_DATA* data();
	MENU_FILE_DATA* begin();
	MENU_FILE_DATA* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<MENU_FILE_DATA,10> : fixed_array_base<MENU_FILE_DATA,10,MENU_FILE_DATA[10]> {
};

typedef struct {
	fixed_array<MENU_FILE_DATA,42> pocketbook;
	fixed_array<MENU_FILE_DATA,42> scrap;
	fixed_array<MENU_FILE_DATA,40> oldbook;
	fixed_array<MENU_FILE_DATA,26> photograph;
	fixed_array<MENU_FILE_DATA,10> map;
} DISP_FILE_DATA;

static void *file_cmn_tex_addr = NULL;
static void *file_top_tex_addr = NULL;
static void *file_doc_tex_addr = NULL;
static void *file_photo_tex_addr = NULL;
static void *file_map_tex_addr = NULL;
static void *photo_small_tex_addr = NULL;
static void *map_small_tex_addr = NULL;

static void (*menu_file_pad[7])(/* parameters unknown */) = {
	/* [0] = */ MenuFilePocketBookPad,
	/* [1] = */ MenuFilePocketBookPad,
	/* [2] = */ MenuFilePocketBookPad,
	/* [3] = */ MenuFilePhotoGraphPad,
	/* [4] = */ MenuFileMapPad,
	/* [5] = */ MenuFileTopPad,
	/* [6] = */ MenuFileNoHavePad
};

static void (*file_mode_disp[7])(/* parameters unknown */) = {
	/* [0] = */ MenuFilePocketBookDisp,
	/* [1] = */ MenuFilePocketBookDisp,
	/* [2] = */ MenuFilePocketBookDisp,
	/* [3] = */ MenuFilePhotoDisp,
	/* [4] = */ MenuFileMapDisp,
	/* [5] = */ MenuFileTopDisp,
	/* [6] = */ MenuFileNoHaveDisp
};

static MENU_FILE_CTRL menu_file_ctrl;
static DISP_FILE_DATA disp_file_data;
unsigned char MENU_REF_CTRL type_info node[8];
unsigned char MENU_FILE_DATA type_info node[8];
static MENU_FILE_DISP menu_file_disp;

static int msg_type_tbl[5] = {
	/* [0] = */ 30,
	/* [1] = */ 32,
	/* [2] = */ 29,
	/* [3] = */ 31,
	/* [4] = */ 27
};

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3bd830;
	
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf14MENU_FILE_DATA(0x3f2d10,_max);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf14MENU_FILE_DATA(0x3f2d18,_max);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf14MENU_FILE_DATA(0x3bd878,_max);
  }
  return (uint **)0x0;
}

static void MenuFileInit() {
  uchar uVar1;
  
  MenuFileCtrlInit__Fv();
  MenuCrossFadeInit__Fv();
  if (file_cmn_tex_addr == (void *)0x0) {
    printf("<<<<<<<<<WARNING FILE[%s] LINE[%d]>>>>>>>>>>\n");
    PrintWarningReal("Menu File Cmn Tex Back reading failure\n");
    uVar1 = GetLanguage__Fv();
    MenuFileTexLoadReq__FPvi(file_cmn_tex_addr,(char)uVar1 + 0x35);
  }
  if (file_top_tex_addr == (void *)0x0) {
    printf("<<<<<<<<<WARNING FILE[%s] LINE[%d]>>>>>>>>>>\n");
    PrintWarningReal("Menu File Top Tex Back reading failure\n");
    uVar1 = GetLanguage__Fv();
    MenuFileTexLoadReq__FPvi(file_top_tex_addr,(char)uVar1 + 0x3a);
  }
  return;
}

static void MenuFileCtrlInit() {
	int i;
	
  int data_num;
  int file_type;
  MENU_REF_CTRL *ref_ctrl;
  fixed_array<int,5> *pfVar1;
  
  ref_ctrl = (MENU_REF_CTRL *)&menu_file_ctrl.ref_ctrl;
  pfVar1 = &menu_file_ctrl.top_csr;
  file_type = 0;
  menu_file_ctrl.sub_step = '\x02';
  menu_file_ctrl.next_mode = '\x05';
  menu_file_ctrl.mode = '\x05';
  menu_file_ctrl.tag_csr = 0;
  menu_file_ctrl.cross_fade_flg = '\0';
  do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(file_type,5);
    (pfVar1->field0_0x0).m_aData[0] = 0;
    _fixed_array_verifyrange__H1Z13MENU_REF_CTRL_UiUi_PX01(file_type,5);
    data_num = GetPlyrFileTotalNum__Fi(file_type);
    file_type = file_type + 1;
    MenuRefCtrlInit__FP13MENU_REF_CTRLi(ref_ctrl,data_num);
                    /* end of inlined section */
    ref_ctrl = ref_ctrl + 1;
    pfVar1 = (fixed_array<int,5> *)((pfVar1->field0_0x0).m_aData + 1);
  } while (file_type < 5);
  return;
}

void MenuFileTexBackGroundLoad() {
  uchar uVar1;
  
  if (file_cmn_tex_addr != (void *)0x0) {
    LiberateMenuFileTexMem__FPPv(&file_cmn_tex_addr);
  }
  uVar1 = GetLanguage__Fv();
  GetMenuFileTexMem__FPPvi(&file_cmn_tex_addr,(char)uVar1 + 0x35);
  uVar1 = GetLanguage__Fv();
  MenuFileTexLoadReq__FPvi(file_cmn_tex_addr,(char)uVar1 + 0x35);
  if (file_top_tex_addr != (void *)0x0) {
    LiberateMenuFileTexMem__FPPv(&file_top_tex_addr);
  }
  uVar1 = GetLanguage__Fv();
  GetMenuFileTexMem__FPPvi(&file_top_tex_addr,(char)uVar1 + 0x3a);
  uVar1 = GetLanguage__Fv();
  MenuFileTexLoadReq__FPvi(file_top_tex_addr,(char)uVar1 + 0x3a);
  return;
}

static void GetMenuFileTexMem(void **tex_addr, int data_label) {
  uint size;
  void *pvVar1;
  
  if (*tex_addr != (void *)0x0) {
    LiberateMenuFileTexMem__FPPv(tex_addr);
  }
  size = GetFileSize(data_label);
  pvVar1 = mem_utilGetMem__Fi(size);
  *tex_addr = pvVar1;
  return;
}

static void MenuFileTexLoadReq(void *tex_addr, int data_label) {
  FileLoadReqEE(data_label,tex_addr,2,(undefined1 *)0x0,(void *)0x0);
  return;
}

static int MenuFileTexLoadWait(void *tex_addr, int data_label) {
  int iVar1;
  
  iVar1 = FileLoadIsEnd2(data_label,tex_addr);
  return (int)(iVar1 != 0);
}

static void MenuFileLoadReq(char mode) {
	static char __FUNCTION__[16] = {
		/* [0] = */ 77,
		/* [1] = */ 101,
		/* [2] = */ 110,
		/* [3] = */ 117,
		/* [4] = */ 70,
		/* [5] = */ 105,
		/* [6] = */ 108,
		/* [7] = */ 101,
		/* [8] = */ 76,
		/* [9] = */ 111,
		/* [10] = */ 97,
		/* [11] = */ 100,
		/* [12] = */ 82,
		/* [13] = */ 101,
		/* [14] = */ 113,
		/* [15] = */ 0
	};
	
  switch(mode) {
  case '\0':
  case '\x01':
  case '\x02':
    if (file_doc_tex_addr != (void *)0x0) {
      LiberateMenuFileTexMem__FPPv(&file_doc_tex_addr);
    }
    GetMenuFileTexMem__FPPvi(&file_doc_tex_addr,0x40);
    MenuFileTexLoadReq__FPvi(file_doc_tex_addr,0x40);
    return;
  case '\x03':
    if (file_photo_tex_addr != (void *)0x0) {
      MenuFileTexLoadCancel__FPvi(file_photo_tex_addr,0x3f);
      LiberateMenuFileTexMem__FPPv(&file_photo_tex_addr);
    }
    if (photo_small_tex_addr != (void *)0x0) {
      MenuFileTexLoadCancel__FPvi(photo_small_tex_addr,file_tex_pack[0]);
      LiberateMenuFileTexMem__FPPv(&photo_small_tex_addr);
    }
    GetMenuFileTexMem__FPPvi(&file_photo_tex_addr,0x3f);
    MenuFileTexLoadReq__FPvi(file_photo_tex_addr,0x3f);
    GetMenuFileTexMem__FPPvi(&photo_small_tex_addr,file_tex_pack[0]);
    MenuFileTexLoadReq__FPvi(photo_small_tex_addr,file_tex_pack[0]);
    return;
  case '\x04':
    if (file_map_tex_addr != (void *)0x0) {
      MenuFileTexLoadCancel__FPvi(file_map_tex_addr,0x41);
      LiberateMenuFileTexMem__FPPv(&file_map_tex_addr);
    }
    if (map_small_tex_addr != (void *)0x0) {
      MenuFileTexLoadCancel__FPvi(map_small_tex_addr,file_tex_pack[1]);
      LiberateMenuFileTexMem__FPPv(&map_small_tex_addr);
    }
    GetMenuFileTexMem__FPPvi(&file_map_tex_addr,0x41);
    MenuFileTexLoadReq__FPvi(file_map_tex_addr,0x41);
    GetMenuFileTexMem__FPPvi(&map_small_tex_addr,file_tex_pack[1]);
    MenuFileTexLoadReq__FPvi(map_small_tex_addr,file_tex_pack[1]);
    return;
  case '\x05':
  case '\x06':
    break;
  default:
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error!! MenuFileLoadReq");
  }
  return;
}

static int MenuFileLoadWait(char mode) {
	static char __FUNCTION__[17] = {
		/* [0] = */ 77,
		/* [1] = */ 101,
		/* [2] = */ 110,
		/* [3] = */ 117,
		/* [4] = */ 70,
		/* [5] = */ 105,
		/* [6] = */ 108,
		/* [7] = */ 101,
		/* [8] = */ 76,
		/* [9] = */ 111,
		/* [10] = */ 97,
		/* [11] = */ 100,
		/* [12] = */ 87,
		/* [13] = */ 97,
		/* [14] = */ 105,
		/* [15] = */ 116,
		/* [16] = */ 0
	};
	int res;
	
  uchar uVar1;
  int iVar2;
  void *tex_addr;
  int iVar3;
  
  switch(mode) {
  case '\0':
  case '\x01':
  case '\x02':
    iVar3 = 0x40;
    tex_addr = file_doc_tex_addr;
    break;
  case '\x03':
    iVar2 = MenuFileTexLoadWait__FPvi(file_photo_tex_addr,0x3f);
    iVar3 = file_tex_pack[0];
    tex_addr = photo_small_tex_addr;
    goto joined_r0x001f4934;
  case '\x04':
    iVar2 = MenuFileTexLoadWait__FPvi(file_map_tex_addr,0x41);
    iVar3 = file_tex_pack[1];
    tex_addr = map_small_tex_addr;
joined_r0x001f4934:
    if (iVar2 == 0) {
      return 0;
    }
    break;
  case '\x05':
    uVar1 = GetLanguage__Fv();
    iVar3 = (char)uVar1 + 0x3a;
    tex_addr = file_top_tex_addr;
    break;
  case '\x06':
    goto switchD_001f48d8_caseD_6;
  default:
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error!! MenuFileLoadWait");
    return 0;
  }
  iVar3 = MenuFileTexLoadWait__FPvi(tex_addr,iVar3);
  iVar2 = 0;
  if (iVar3 != 0) {
switchD_001f48d8_caseD_6:
    iVar2 = 1;
  }
  return iVar2;
}

static void MenuFileSetDispData() {
	int file_type;
	int file_id;
	int count;
	char state;
	MENU_FILE_DATA *menu_file_data_tbl[5];
	
  uint uVar1;
  ulong *puVar2;
  undefined8 uVar3;
  char cVar4;
  int *piVar5;
  int iVar6;
  int file_id;
  int iVar7;
  int type;
  MENU_FILE_DATA **ppMVar8;
  MENU_FILE_DATA *menu_file_data_tbl [5];
  
  ppMVar8 = menu_file_data_tbl;
  type = 0;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z14MENU_FILE_DATA_UiUi_PX01(0,0x2a);
  _fixed_array_verifyrange__H1Z14MENU_FILE_DATA_UiUi_PX01(0,0x2a);
  _fixed_array_verifyrange__H1Z14MENU_FILE_DATA_UiUi_PX01(0,0x28);
  _fixed_array_verifyrange__H1Z14MENU_FILE_DATA_UiUi_PX01(0,0x1a);
  _fixed_array_verifyrange__H1Z14MENU_FILE_DATA_UiUi_PX01(0,10);
  menu_file_data_tbl[0] = (MENU_FILE_DATA *)0x4b54f0;
  menu_file_data_tbl[1] = (MENU_FILE_DATA *)0x4b5640;
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  uVar3._0_4_ = (MENU_FILE_DATA *)0x4b5790;
  uVar3._4_4_ = (MENU_FILE_DATA *)0x4b58d0;
  uVar1 = (int)menu_file_data_tbl + 7U & 7;
  puVar2 = (ulong *)(((int)menu_file_data_tbl + 7U) - uVar1);
  *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | 0x4b5640004b54f0U >> (7 - uVar1) * 8;
  uVar1 = (int)menu_file_data_tbl + 0xfU & 7;
  puVar2 = (ulong *)(((int)menu_file_data_tbl + 0xfU) - uVar1);
  *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | 0x4b58d0004b5790U >> (7 - uVar1) * 8;
  menu_file_data_tbl[4] = (MENU_FILE_DATA *)&disp_file_data.map;
  menu_file_data_tbl._8_8_ = uVar3;
  do {
                    /* end of inlined section */
    iVar7 = 0;
    for (file_id = 0; iVar6 = GetFileTypeMaxNum__Fi(type), file_id < iVar6; file_id = file_id + 1) {
      cVar4 = GetPlyrFileState__Fii(type,file_id);
      iVar6 = iVar7 * 8;
      if (cVar4 != '\0') {
        iVar7 = iVar7 + 1;
        piVar5 = (int *)(iVar6 + (int)*ppMVar8);
        *(char *)(piVar5 + 1) = cVar4;
        *piVar5 = file_id;
      }
    }
    type = type + 1;
    ppMVar8 = (MENU_FILE_DATA **)((int *)ppMVar8 + 1);
  } while (type < 5);
  return;
}

void MenuFile() {
	int i;
	int file_type;
	int file_id;
	
  int *piVar1;
  uchar uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (menu_wrk.step == '\0') {
    MenuFileInit__Fv();
    iVar5 = 0;
    MenuFileSetDispData__Fv();
    for (iVar4 = 0; iVar3 = menu_file_ctrl.tag_csr, iVar4 < 5; iVar4 = iVar4 + 1) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z13MENU_REF_CTRL_UiUi_PX01(iVar4,5);
      piVar1 = (int *)((int)&menu_file_ctrl.ref_ctrl.field0_0x0.m_aData[0].data_num + iVar5);
      iVar5 = iVar5 + 0xc;
      iVar3 = iVar4;
      if (*piVar1 != 0) break;
    }
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    menu_file_ctrl.tag_csr = iVar3;
    iVar5 = menu_file_ctrl.tag_csr;
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z13MENU_REF_CTRL_UiUi_PX01(menu_file_ctrl.tag_csr,5);
    iVar3 = GetMenuFileDispFileID__Fii
                      (iVar5,menu_file_ctrl.ref_ctrl.field0_0x0.m_aData[iVar5].data_pos);
                    /* end of inlined section */
    if (iVar4 < 5) {
      iVar4 = GetFileTexId__Fii(iVar5,iVar3);
      MenuCrossFadeInStart__Fii((uint)menu_file_ctrl.cross_fade_flg,iVar4);
    }
    else {
      menu_file_ctrl.mode = '\x06';
    }
    menu_wrk.step = '\x01';
  }
  if (menu_wrk.step == '\x01') {
    uVar2 = GetLanguage__Fv();
    iVar4 = MenuFileTexLoadWait__FPvi(file_cmn_tex_addr,(char)uVar2 + 0x35);
    if (iVar4 != 0) {
      uVar2 = GetLanguage__Fv();
      iVar4 = MenuFileTexLoadWait__FPvi(file_top_tex_addr,(char)uVar2 + 0x3a);
      if (iVar4 != 0) {
        MenuFileDispInit__Fv();
        menu_wrk.step = '\x02';
      }
    }
  }
  if (menu_wrk.step == '\x02') {
    MenuFileMode__Fv();
  }
  if ((menu_wrk.step == '\x03') && (menu_file_disp.anim_step == '\x04')) {
    SetNextMenuStep__Fi(8);
    MenuFileMemRelease__Fv();
    MenuCrossFadeTexLoadCancel__Fi(0);
    MenuCrossFadeTexLoadCancel__Fi(1);
    LiberateAllMenuCrossFadeTexMem__Fv();
  }
  return;
}

static void MenuFileMode() {
	int file_type;
	int file_id;
	int load_data;
	
  int file_type;
  int iVar1;
  int data_label;
  
  if (menu_file_ctrl.sub_step == '\0') {
    MenuFileSetDispData__Fv();
    MenuCrossFadeInit__Fv();
    menu_file_ctrl.cross_fade_flg = '\0';
    menu_file_ctrl.sub_step = '\x01';
  }
  if ((menu_file_ctrl.sub_step == '\x01') &&
     (iVar1 = MenuFileLoadWait__Fc(menu_file_ctrl.mode), file_type = menu_file_ctrl.tag_csr,
     iVar1 != 0)) {
    menu_file_disp.sub_anim_timer = '\0';
                    /* end of inlined section */
    menu_file_disp.sub_anim_step = '\0';
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z13MENU_REF_CTRL_UiUi_PX01(menu_file_ctrl.tag_csr,5);
    iVar1 = GetMenuFileDispFileID__Fii
                      (file_type,menu_file_ctrl.ref_ctrl.field0_0x0.m_aData[file_type].data_pos);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
    data_label = iVar1 + 0xf7b;
    if (menu_file_ctrl.mode != '\x04') {
      if (menu_file_ctrl.mode < '\x05') {
        data_label = iVar1 + 0xf56;
        if (menu_file_ctrl.mode != '\x03') {
          data_label = -1;
        }
      }
      else {
        data_label = -1;
        if (menu_file_ctrl.mode == '\x05') {
          data_label = GetFileTexId__Fii(file_type,iVar1);
        }
      }
    }
    if (data_label != -1) {
      MenuCrossFadeInStart__Fii((uint)menu_file_ctrl.cross_fade_flg,data_label);
    }
    menu_file_ctrl.sub_step = '\x02';
  }
  if (menu_file_ctrl.sub_step == '\x02') {
    if ((code *)menu_file_pad[menu_file_ctrl.mode] != (code *)0x0) {
      (*(code *)menu_file_pad[menu_file_ctrl.mode])();
    }
    if (menu_file_ctrl.mode != '\x06') {
      MenuCmnCrossFade__Fv();
    }
  }
  if ((menu_file_ctrl.sub_step == '\x03') && (menu_file_disp.sub_anim_step == '\x04')) {
    SetMsgFirstPage__Fv();
    MenuFileModeMoveLiberate__Fc(menu_file_ctrl.mode);
    MenuCrossFadeTexLoadCancel__Fi(0);
    MenuCrossFadeTexLoadCancel__Fi(1);
    LiberateAllMenuCrossFadeTexMem__Fv();
    menu_file_ctrl.sub_step = '\0';
    menu_file_ctrl.mode = menu_file_ctrl.next_mode;
  }
  return;
}

static void MenuFileTopPad() {
	int file_type;
	int file_id;
	int disp_num;
	u_char load_flg;
	int i;
	
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  MENU_REF_CTRL *ref_ctrl;
  
  iVar4 = menu_file_ctrl.tag_csr;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  bVar1 = false;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z13MENU_REF_CTRL_UiUi_PX01(menu_file_ctrl.tag_csr,5);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  ref_ctrl = menu_file_ctrl.ref_ctrl.field0_0x0.m_aData + iVar4;
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar3 = menu_file_ctrl.ref_ctrl.field0_0x0.m_aData[iVar4].data_num;
                    /* end of inlined section */
  if (6 < iVar3) {
    iVar3 = 6;
  }
  if (((pad[0].rpt & 0x1000U) == 0) && (iVar2 = GetPadAnalogRpt__Fi(0), iVar2 == 0)) {
    if (((pad[0].rpt & 0x4000U) == 0) && (iVar2 = GetPadAnalogRpt__Fi(1), iVar2 == 0)) {
      if (((CONCAT26(pad[0].rpt,pad[0]._384_6_) & 0x8000000400000000) == 0) &&
         (iVar3 = GetPadAnalogRpt__Fi(2), iVar3 == 0)) {
        if (((CONCAT26(pad[0].rpt,pad[0]._384_6_) & 0x2000000800000000) == 0) &&
           (iVar3 = GetPadAnalogRpt__Fi(3), iVar3 == 0)) {
          if (**paddat == 1) {
            SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
            _fixed_array_verifyrange__H1Z13MENU_REF_CTRL_UiUi_PX01(iVar4,5);
            iVar3 = GetMenuFileDispFileID__Fii
                              (iVar4,menu_file_ctrl.ref_ctrl.field0_0x0.m_aData[iVar4].data_pos);
                    /* end of inlined section */
            FileRead__Fii(iVar4,iVar3);
            MenuFileModeMoveReq__Fc((char)menu_file_ctrl.tag_csr);
          }
          else if (*paddat[1] == 1) {
            SystemBankPlay__FiiiiP11_SND_3D_SETii(1,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
            MenuFileOutReq__Fv();
          }
          goto LAB_001f5170;
        }
        iVar3 = 0;
        do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
          iVar4 = (menu_file_ctrl.tag_csr + 1) % 5;
          menu_file_ctrl.tag_csr = iVar4;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
          _fixed_array_verifyrange__H1Z13MENU_REF_CTRL_UiUi_PX01(iVar4,5);
          if (menu_file_ctrl.ref_ctrl.field0_0x0.m_aData[iVar4].data_num != 0) break;
                    /* end of inlined section */
          iVar3 = iVar3 + 1;
        } while (iVar3 < 5);
      }
      else {
        iVar3 = 0;
        do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
          iVar4 = (menu_file_ctrl.tag_csr + 4) % 5;
          menu_file_ctrl.tag_csr = iVar4;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
          _fixed_array_verifyrange__H1Z13MENU_REF_CTRL_UiUi_PX01(iVar4,5);
          if (menu_file_ctrl.ref_ctrl.field0_0x0.m_aData[iVar4].data_num != 0) break;
                    /* end of inlined section */
          iVar3 = iVar3 + 1;
        } while (iVar3 < 5);
      }
      if (iVar3 != 5) {
        bVar1 = true;
      }
      goto LAB_001f5170;
    }
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z13MENU_REF_CTRL_UiUi_PX01(iVar4,5);
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar4,5);
    iVar3 = MenuRefMovePadLdown__FP13MENU_REF_CTRLPiii
                      (ref_ctrl,menu_file_ctrl.top_csr.field0_0x0.m_aData + iVar4,iVar3,6);
  }
  else {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z13MENU_REF_CTRL_UiUi_PX01(iVar4,5);
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar4,5);
    iVar3 = MenuRefMovePadLup__FP13MENU_REF_CTRLPiii
                      (ref_ctrl,menu_file_ctrl.top_csr.field0_0x0.m_aData + iVar4,iVar3,6);
                    /* end of inlined section */
  }
  if (iVar3 != 0) {
    bVar1 = true;
  }
LAB_001f5170:
  if (bVar1) {
    SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    iVar3 = menu_file_ctrl.tag_csr;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z13MENU_REF_CTRL_UiUi_PX01(menu_file_ctrl.tag_csr,5);
    iVar4 = GetMenuFileDispFileID__Fii
                      (iVar3,menu_file_ctrl.ref_ctrl.field0_0x0.m_aData[iVar3].data_pos);
                    /* end of inlined section */
                    /* end of inlined section */
    MenuCrossFadeOutStart__Fi((uint)menu_file_ctrl.cross_fade_flg);
    menu_file_ctrl.cross_fade_flg = menu_file_ctrl.cross_fade_flg ^ 1;
    iVar3 = GetFileTexId__Fii(iVar3,iVar4);
    MenuCrossFadeInStart__Fii((uint)menu_file_ctrl.cross_fade_flg,iVar3);
  }
  return;
}

static void MenuFilePocketBookPad() {
	int file_type;
	int file_id;
	int page_num;
	
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = menu_file_ctrl.tag_csr;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z13MENU_REF_CTRL_UiUi_PX01(menu_file_ctrl.tag_csr,5);
  iVar1 = GetMenuFileDispFileID__Fii
                    (iVar4,menu_file_ctrl.ref_ctrl.field0_0x0.m_aData[iVar4].data_pos);
                    /* end of inlined section */
  iVar2 = GetNowMsgPageNum__Fv();
  if (((pad[0]._384_8_ & 0x800400000000) == 0) && (iVar3 = GetPadAnalogRpt__Fi(2), iVar3 == 0)) {
    if (((**paddat == 1) || ((pad[0]._384_8_ & 0x200800000000) != 0)) ||
       (iVar3 = GetPadAnalogRpt__Fi(3), iVar3 != 0)) {
      iVar3 = GetNowMsgPageNum__Fv();
      iVar4 = GetMsgPageNum__Fii(msg_type_tbl[iVar4],iVar1 * 3 + 2);
      if (iVar3 == iVar4 + -1) {
        SetMsgPage__Fc('\0');
      }
      else {
        MesSetNextPage__Fv();
      }
      iVar4 = GetNowMsgPageNum__Fv();
      if (iVar2 != iVar4) {
        SystemBankPlay__FiiiiP11_SND_3D_SETii(6,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
        return;
      }
    }
    else if (*paddat[1] == 1) {
      SystemBankPlay__FiiiiP11_SND_3D_SETii(1,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      MenuFileModeMoveReq__Fc('\x05');
    }
  }
  else {
    iVar3 = GetNowMsgPageNum__Fv();
    if (iVar3 == 0) {
      iVar4 = GetMsgPageNum__Fii(msg_type_tbl[iVar4],iVar1 * 3 + 2);
      SetMsgPage__Fc((char)((uint)((iVar4 + -1) * 0x1000000) >> 0x18));
    }
    else {
      MesSetBeforePage__Fv();
    }
    iVar4 = GetNowMsgPageNum__Fv();
    if (iVar2 != iVar4) {
      SystemBankPlay__FiiiiP11_SND_3D_SETii(6,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      return;
    }
  }
  return;
}

static void MenuFilePhotoGraphPad() {
	u_char load_flg;
	int file_type;
	int file_id;
	int disp_num;
	
  bool bVar1;
  int file_type;
  int iVar2;
  int iVar3;
  MENU_REF_CTRL *ref_ctrl;
  
  file_type = menu_file_ctrl.tag_csr;
  bVar1 = false;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z13MENU_REF_CTRL_UiUi_PX01(menu_file_ctrl.tag_csr,5);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  ref_ctrl = menu_file_ctrl.ref_ctrl.field0_0x0.m_aData + file_type;
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar3 = menu_file_ctrl.ref_ctrl.field0_0x0.m_aData[file_type].data_num;
                    /* end of inlined section */
  if (6 < iVar3) {
    iVar3 = 6;
  }
  if (((pad[0]._384_8_ & 0x8000000400000000) == 0) && (iVar2 = GetPadAnalogRpt__Fi(2), iVar2 == 0))
  {
    if (((pad[0]._384_8_ & 0x2000000800000000) == 0) && (iVar2 = GetPadAnalogRpt__Fi(3), iVar2 == 0)
       ) {
      if (*paddat[1] == 1) {
        SystemBankPlay__FiiiiP11_SND_3D_SETii(1,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
        MenuFileModeMoveReq__Fc('\x05');
      }
      goto LAB_001f5600;
    }
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z13MENU_REF_CTRL_UiUi_PX01(file_type,5);
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(file_type,5);
    iVar3 = MenuRefMovePadLdown__FP13MENU_REF_CTRLPiii
                      (ref_ctrl,menu_file_ctrl.top_csr.field0_0x0.m_aData + file_type,iVar3,6);
  }
  else {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z13MENU_REF_CTRL_UiUi_PX01(file_type,5);
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(file_type,5);
    iVar3 = MenuRefMovePadLup__FP13MENU_REF_CTRLPiii
                      (ref_ctrl,menu_file_ctrl.top_csr.field0_0x0.m_aData + file_type,iVar3,6);
                    /* end of inlined section */
  }
  bVar1 = iVar3 != 0;
  _fixed_array_verifyrange__H1Z13MENU_REF_CTRL_UiUi_PX01(file_type,5);
  iVar3 = GetMenuFileDispFileID__Fii
                    (file_type,menu_file_ctrl.ref_ctrl.field0_0x0.m_aData[file_type].data_pos);
                    /* end of inlined section */
  FileRead__Fii(file_type,iVar3);
LAB_001f5600:
  if (bVar1) {
    SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    iVar3 = menu_file_ctrl.tag_csr;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z13MENU_REF_CTRL_UiUi_PX01(menu_file_ctrl.tag_csr,5);
    iVar3 = GetMenuFileDispFileID__Fii
                      (iVar3,menu_file_ctrl.ref_ctrl.field0_0x0.m_aData[iVar3].data_pos);
                    /* end of inlined section */
                    /* end of inlined section */
    MenuCrossFadeOutStart__Fi((uint)menu_file_ctrl.cross_fade_flg);
    menu_file_ctrl.cross_fade_flg = menu_file_ctrl.cross_fade_flg ^ 1;
    MenuCrossFadeInStart__Fii((uint)menu_file_ctrl.cross_fade_flg,iVar3 + 0xf56);
  }
  return;
}

static void MenuFileMapPad() {
	u_char load_flg;
	int file_type;
	int file_id;
	int disp_num;
	
  bool bVar1;
  int file_type;
  int iVar2;
  int iVar3;
  MENU_REF_CTRL *ref_ctrl;
  
  file_type = menu_file_ctrl.tag_csr;
  bVar1 = false;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z13MENU_REF_CTRL_UiUi_PX01(menu_file_ctrl.tag_csr,5);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  ref_ctrl = menu_file_ctrl.ref_ctrl.field0_0x0.m_aData + file_type;
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar3 = menu_file_ctrl.ref_ctrl.field0_0x0.m_aData[file_type].data_num;
                    /* end of inlined section */
  if (6 < iVar3) {
    iVar3 = 6;
  }
  if (((pad[0]._384_8_ & 0x8000000400000000) == 0) && (iVar2 = GetPadAnalogRpt__Fi(2), iVar2 == 0))
  {
    if (((pad[0]._384_8_ & 0x2000000800000000) == 0) && (iVar2 = GetPadAnalogRpt__Fi(3), iVar2 == 0)
       ) {
      if (*paddat[1] == 1) {
        SystemBankPlay__FiiiiP11_SND_3D_SETii(1,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
        MenuFileModeMoveReq__Fc('\x05');
      }
      goto LAB_001f5830;
    }
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z13MENU_REF_CTRL_UiUi_PX01(file_type,5);
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(file_type,5);
    iVar3 = MenuRefMovePadLdown__FP13MENU_REF_CTRLPiii
                      (ref_ctrl,menu_file_ctrl.top_csr.field0_0x0.m_aData + file_type,iVar3,6);
  }
  else {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z13MENU_REF_CTRL_UiUi_PX01(file_type,5);
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(file_type,5);
    iVar3 = MenuRefMovePadLup__FP13MENU_REF_CTRLPiii
                      (ref_ctrl,menu_file_ctrl.top_csr.field0_0x0.m_aData + file_type,iVar3,6);
                    /* end of inlined section */
  }
  bVar1 = iVar3 != 0;
  _fixed_array_verifyrange__H1Z13MENU_REF_CTRL_UiUi_PX01(file_type,5);
  iVar3 = GetMenuFileDispFileID__Fii
                    (file_type,menu_file_ctrl.ref_ctrl.field0_0x0.m_aData[file_type].data_pos);
                    /* end of inlined section */
  FileRead__Fii(file_type,iVar3);
LAB_001f5830:
  if (bVar1) {
    SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    iVar3 = menu_file_ctrl.tag_csr;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z13MENU_REF_CTRL_UiUi_PX01(menu_file_ctrl.tag_csr,5);
    iVar3 = GetMenuFileDispFileID__Fii
                      (iVar3,menu_file_ctrl.ref_ctrl.field0_0x0.m_aData[iVar3].data_pos);
                    /* end of inlined section */
                    /* end of inlined section */
    MenuCrossFadeOutStart__Fi((uint)menu_file_ctrl.cross_fade_flg);
    menu_file_ctrl.cross_fade_flg = menu_file_ctrl.cross_fade_flg ^ 1;
    MenuCrossFadeInStart__Fii((uint)menu_file_ctrl.cross_fade_flg,iVar3 + 0xf7b);
  }
  return;
}

static void MenuFileNoHavePad() {
  if (*paddat[1] == 1) {
    SystemBankPlay__FiiiiP11_SND_3D_SETii(1,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    MenuFileOutReq__Fv();
  }
  return;
}

static void MenuFileModeMoveLiberate(char mode) {
	static char __FUNCTION__[25] = {
		/* [0] = */ 77,
		/* [1] = */ 101,
		/* [2] = */ 110,
		/* [3] = */ 117,
		/* [4] = */ 70,
		/* [5] = */ 105,
		/* [6] = */ 108,
		/* [7] = */ 101,
		/* [8] = */ 77,
		/* [9] = */ 111,
		/* [10] = */ 100,
		/* [11] = */ 101,
		/* [12] = */ 77,
		/* [13] = */ 111,
		/* [14] = */ 118,
		/* [15] = */ 101,
		/* [16] = */ 76,
		/* [17] = */ 105,
		/* [18] = */ 98,
		/* [19] = */ 101,
		/* [20] = */ 114,
		/* [21] = */ 97,
		/* [22] = */ 116,
		/* [23] = */ 101,
		/* [24] = */ 0
	};
	
  switch(mode) {
  case '\0':
  case '\x01':
  case '\x02':
    if (file_doc_tex_addr != (void *)0x0) {
      MenuFileTexLoadCancel__FPvi(file_doc_tex_addr,0x40);
      LiberateMenuFileTexMem__FPPv(&file_doc_tex_addr);
      return;
    }
    break;
  case '\x03':
    if (file_photo_tex_addr != (void *)0x0) {
      MenuFileTexLoadCancel__FPvi(file_photo_tex_addr,0x3f);
      LiberateMenuFileTexMem__FPPv(&file_photo_tex_addr);
    }
    if (photo_small_tex_addr != (void *)0x0) {
      MenuFileTexLoadCancel__FPvi(photo_small_tex_addr,file_tex_pack[0]);
      LiberateMenuFileTexMem__FPPv(&photo_small_tex_addr);
      return;
    }
    break;
  case '\x04':
    if (file_map_tex_addr != (void *)0x0) {
      MenuFileTexLoadCancel__FPvi(file_map_tex_addr,0x41);
      LiberateMenuFileTexMem__FPPv(&file_map_tex_addr);
    }
    if (map_small_tex_addr != (void *)0x0) {
      MenuFileTexLoadCancel__FPvi(map_small_tex_addr,file_tex_pack[1]);
      LiberateMenuFileTexMem__FPPv(&map_small_tex_addr);
      return;
    }
    break;
  case '\x05':
  case '\x06':
    break;
  default:
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! MenuFileModeMoveLiberate");
  }
  return;
}

static void MenuFileModeMoveReq(char next_mode) {
  MenuFileLoadReq__Fc(next_mode);
  menu_file_ctrl.next_mode = next_mode;
  menu_file_ctrl.sub_step = '\x03';
  menu_file_disp.sub_anim_step = '\x03';
  menu_file_disp.sub_anim_timer = '\0';
  return;
}

static void MenuFileOutReq() {
  menu_file_disp.sub_anim_step = '\x03';
  menu_wrk.step = '\x03';
  menu_file_disp.sub_anim_timer = '\0';
  menu_file_disp.anim_step = '\x03';
  menu_file_disp.anim_timer = '\0';
  return;
}

static MENU_FILE_DATA* GetMenuFileDispData(int file_type, int num) {
	static char __FUNCTION__[20] = {
		/* [0] = */ 71,
		/* [1] = */ 101,
		/* [2] = */ 116,
		/* [3] = */ 77,
		/* [4] = */ 101,
		/* [5] = */ 110,
		/* [6] = */ 117,
		/* [7] = */ 70,
		/* [8] = */ 105,
		/* [9] = */ 108,
		/* [10] = */ 101,
		/* [11] = */ 68,
		/* [12] = */ 105,
		/* [13] = */ 115,
		/* [14] = */ 112,
		/* [15] = */ 68,
		/* [16] = */ 97,
		/* [17] = */ 116,
		/* [18] = */ 97,
		/* [19] = */ 0
	};
	MENU_FILE_DATA *data;
	
  MENU_FILE_DATA *pMVar1;
  
  switch(file_type) {
  case 0:
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z14MENU_FILE_DATA_UiUi_PX01(num,0x2a);
    pMVar1 = disp_file_data.pocketbook.field0_0x0.m_aData + num;
                    /* end of inlined section */
    break;
  case 1:
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z14MENU_FILE_DATA_UiUi_PX01(num,0x2a);
    pMVar1 = disp_file_data.scrap.field0_0x0.m_aData + num;
                    /* end of inlined section */
    break;
  case 2:
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z14MENU_FILE_DATA_UiUi_PX01(num,0x28);
    pMVar1 = disp_file_data.oldbook.field0_0x0.m_aData + num;
                    /* end of inlined section */
    break;
  case 3:
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z14MENU_FILE_DATA_UiUi_PX01(num,0x1a);
    pMVar1 = disp_file_data.photograph.field0_0x0.m_aData + num;
                    /* end of inlined section */
    break;
  case 4:
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z14MENU_FILE_DATA_UiUi_PX01(num,10);
    pMVar1 = disp_file_data.map.field0_0x0.m_aData + num;
                    /* end of inlined section */
    break;
  default:
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! GetMenuFileDispData");
    pMVar1 = (MENU_FILE_DATA *)0x0;
  }
  return pMVar1;
}

static int GetMenuFileDispFileID(int file_type, int num) {
  MENU_FILE_DATA *pMVar1;
  
  pMVar1 = GetMenuFileDispData__Fii(file_type,num);
  return pMVar1->file_id;
}

static char GetMenuFileDispFileState(int file_type, int num) {
  MENU_FILE_DATA *pMVar1;
  
  pMVar1 = GetMenuFileDispData__Fii(file_type,num);
  return pMVar1->state;
}

void MenuFileMemRelease() {
  uchar uVar1;
  
  MenuFileTexLoadCancel__FPvi(photo_small_tex_addr,file_tex_pack[0]);
  MenuFileTexLoadCancel__FPvi(map_small_tex_addr,file_tex_pack[1]);
  uVar1 = GetLanguage__Fv();
  MenuFileTexLoadCancel__FPvi(file_cmn_tex_addr,(char)uVar1 + 0x35);
  uVar1 = GetLanguage__Fv();
  MenuFileTexLoadCancel__FPvi(file_top_tex_addr,(char)uVar1 + 0x3a);
  MenuFileTexLoadCancel__FPvi(file_doc_tex_addr,0x40);
  MenuFileTexLoadCancel__FPvi(file_photo_tex_addr,0x3f);
  MenuFileTexLoadCancel__FPvi(file_map_tex_addr,0x41);
  LiberateMenuFileTexMem__FPPv(&photo_small_tex_addr);
  LiberateMenuFileTexMem__FPPv(&map_small_tex_addr);
  LiberateMenuFileTexMem__FPPv(&file_cmn_tex_addr);
  LiberateMenuFileTexMem__FPPv(&file_top_tex_addr);
  LiberateMenuFileTexMem__FPPv(&file_doc_tex_addr);
  LiberateMenuFileTexMem__FPPv(&file_photo_tex_addr);
  LiberateMenuFileTexMem__FPPv(&file_map_tex_addr);
  return;
}

static void LiberateMenuFileTexMem(void **tex_addr) {
  if (*tex_addr != (void *)0x0) {
    mem_utilFreeMem__FPv(*tex_addr);
    *tex_addr = (void *)0x0;
  }
  return;
}

static void MenuFileTexLoadCancel(void *tex_addr, int data_label) {
  int iVar1;
  
  if ((tex_addr != (void *)0x0) &&
     (iVar1 = MenuFileTexLoadWait__FPvi(tex_addr,data_label), iVar1 == 0)) {
    FileLoadCancel2(data_label,tex_addr,(undefined1 *)0x0,(void *)0x0);
  }
  return;
}

static void MenuFileDispInit() {
  menu_file_disp.rgb = '@';
  menu_file_disp.sub_anim_timer = '\0';
  menu_file_disp.anim_step = '\0';
  menu_file_disp.anim_timer = '\0';
  menu_file_disp.scroll_timer = '\0';
  menu_file_disp.sub_anim_step = '\0';
  return;
}

void MenuFileDisp() {
	u_char alpha;
	
  uchar alpha;
  
  alpha = '\0';
  if (((byte)(menu_wrk.step - 2) < 2) && (menu_file_disp.anim_step != '\x04')) {
    MenuInOutAnimCtrl__FPcT0PUc(&menu_file_disp.anim_step,&menu_file_disp.anim_timer,&alpha);
    Zero2Anim2D_CsrAnimCtrl__FPcPUc(&menu_file_disp.scroll_timer,&menu_file_disp.rgb);
    MenuFileTitleDisp__FiiUc(0,0,alpha);
    MenuInOutAnimCtrl__FPcT0PUc(&menu_file_disp.sub_anim_step,&menu_file_disp.sub_anim_timer,&alpha)
    ;
    if (((byte)menu_file_ctrl.sub_step - 2 < 2) &&
       ((menu_file_disp.sub_anim_step != '\x04' &&
        ((code *)file_mode_disp[menu_file_ctrl.mode] != (code *)0x0)))) {
      (*(code *)file_mode_disp[menu_file_ctrl.mode])(alpha);
    }
  }
  return;
}

static void MenuFileTitleDisp(int off_x, int off_y, u_char alpha) {
	DISP_SPRT title_ds;
	
  float fVar1;
  float fVar2;
  DISP_SPRT title_ds;
  
  fVar1 = (float)off_x;
  PK2SendVram__FUiiii(0x19368c0,-1,-1,0);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&title_ds,menu_file_tex + 1);
  fVar2 = (float)off_y;
  title_ds.x = title_ds.x + fVar1;
  title_ds.y = title_ds.y + fVar2;
  title_ds.alpha = (uchar)((int)((uint)title_ds.alpha * (uint)alpha) >> 7);
  DispSprD__FP9DISP_SPRT(&title_ds);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&title_ds,menu_file_tex + 2);
  title_ds.x = title_ds.x + fVar1;
  title_ds.y = title_ds.y + fVar2;
  title_ds.alpha = (uchar)((int)((uint)title_ds.alpha * (uint)alpha) >> 7);
  DispSprD__FP9DISP_SPRT(&title_ds);
  PK2SendVram__FUiiii((uint)file_cmn_tex_addr,-1,-1,0);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&title_ds,menu_file_tex);
  title_ds.x = title_ds.x + fVar1;
  title_ds.y = title_ds.y + fVar2;
  title_ds.alpha = (uchar)((int)((uint)title_ds.alpha * (uint)alpha) >> 7);
  DispSprD__FP9DISP_SPRT(&title_ds);
  return;
}

static void MenuFileTopDisp(u_char alpha) {
	int file_type;
	
  int file_type;
  char cVar1;
  
  file_type = menu_file_ctrl.tag_csr;
  MenuFileTopPictureDisp__FiiUc(0,0,alpha);
  MenuFileTopWinDisp__FiiUc(0,0,alpha);
  MenuFileTopScrollFrameDisp__FiiUc(0,0,alpha);
  MenuFileTopScrollDisp__FiiUc(0,0,alpha);
  MenuFileTopLensDisp__FiiUc(0,0,alpha);
  MenuFileTopTagDisp__FiiUc(0,0,alpha);
  MenuFileTopArrowDisp__FiiUc(0,0,alpha);
  MenuFileTopListFrameDisp__FiiUc(0,0,alpha);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Zi_UiUi_PX01(file_type,5);
  cVar1 = GetMenuFileDispFileState__Fii
                    (file_type,menu_file_ctrl.top_csr.field0_0x0.m_aData[file_type]);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  if (cVar1 != '\0') {
                    /* end of inlined section */
    MenuFileTopMsgWinDisp__FiiUc(0,0,alpha);
  }
  MenuFileTopCaptionDisp__FiiUc(0,0,alpha);
  return;
}

static void MenuFilePocketBookDisp(u_char alpha) {
	int file_type;
	int file_id;
	
  int iVar1;
  int iVar2;
  
  iVar2 = menu_file_ctrl.tag_csr;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z13MENU_REF_CTRL_UiUi_PX01(menu_file_ctrl.tag_csr,5);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar1 = GetMenuFileDispFileID__Fii
                    (iVar2,menu_file_ctrl.ref_ctrl.field0_0x0.m_aData[iVar2].data_pos);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  MenuFileDocumentWinDisp__FiiUc(0,0,alpha);
  iVar2 = GetMsgPageNum__Fii(msg_type_tbl[iVar2],iVar1 * 3 + 2);
  if (1 < iVar2) {
    MenuFileDocumentArrowDisp__FiiUc(0,0,alpha);
  }
  MenuFileDocumentCaptionDisp__FiiUc(0,0,alpha);
  MenuFileDocumentNameDisp__FiiUc(0,0,alpha);
  MenuFileDocumentDataDisp__FiiUc(0,0,alpha);
  MenuFileDocumentPageDisp__FiiUc(0,0,alpha);
  return;
}

static void MenuFilePhotoDisp(u_char alpha) {
	int file_type;
	
  int iVar1;
  
  iVar1 = menu_file_ctrl.tag_csr;
  MenuFilePhotoWinDisp__FiiUc(0,0,alpha);
  MenuFilePhotoSmallTexDisp__FiiUc(0,0,alpha);
  MenuFilePhotoCenterTexDisp__FiiUc(0,0,alpha);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z13MENU_REF_CTRL_UiUi_PX01(iVar1,5);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  if (1 < menu_file_ctrl.ref_ctrl.field0_0x0.m_aData[iVar1].data_num) {
                    /* end of inlined section */
    MenuFilePhotoArrowDisp__FiiUc(0,0,alpha);
  }
  MenuFilePhotoMsgWinDisp__FiiUc(0,0,alpha);
  MenuFilePhotoCaptionDisp__FiiUc(0,0,alpha);
  MenuFilePhotoNameDisp__FiiUc(0,0,alpha);
  return;
}

static void MenuFileMapDisp(u_char alpha) {
	int file_type;
	
  int iVar1;
  
  iVar1 = menu_file_ctrl.tag_csr;
  MenuFileMapWinDisp__FiiUc(0,0,alpha);
  MenuFileMapSmallTexDisp__FiiUc(0,0,alpha);
  MenuFileMapCenterTexDisp__FiiUc(0,0,alpha);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z13MENU_REF_CTRL_UiUi_PX01(iVar1,5);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  if (1 < menu_file_ctrl.ref_ctrl.field0_0x0.m_aData[iVar1].data_num) {
                    /* end of inlined section */
    MenuFileMapArrowDisp__FiiUc(0,0,alpha);
  }
  MenuFileMapMsgWinDisp__FiiUc(0,0,alpha);
  MenuFileCaptionDisp__FiiUc(0,0,alpha);
  MenuFileMapNameDisp__FiiUc(0,0,alpha);
  return;
}

static void MenuFileNoHaveDisp(u_char alpha) {
	DISP_STR msg_data;
	MSG_WIN_DAT msg_win;
	
  DISP_STR msg_data;
  MSG_WIN_DAT msg_win;
  
  SetMsgDefData__FP8DISP_STRi(&msg_data,0x36);
  SetMsgWinDefData__FP11MSG_WIN_DATi(&msg_win,0x36);
  DrawCmnWindow__FUiffffUcUc(0,msg_win.x,msg_win.y,msg_win.w,msg_win.h,alpha,'f');
  PrintMsg__Fiiiiiii(0x36,2,msg_data.pos_x,msg_data.pos_y,1,(uint)alpha,0);
  DrawCmnCapGroup_W__FiiUcUi(0xc,0xc,alpha,0);
  return;
}

static void MenuFileTopWinDisp(int off_x, int off_y, u_char alpha) {
	int i;
	DISP_SPRT win_ds;
	DISP_SQAR dsq;
	SQAR_DAT file_list_bg;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  uchar *puVar4;
  SPRT_DAT *d;
  int iVar5;
  float fVar6;
  DISP_SPRT win_ds;
  DISP_SQAR dsq;
  SQAR_DAT file_list_bg;
  
  fVar6 = (float)off_x;
  puVar1 = (undefined *)((int)&file_list_bg.h + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003bdaa8 >> (7 - uVar2) * 8;
  file_list_bg._0_8_ = DAT_003bdaa8;
  puVar1 = (undefined *)((int)&file_list_bg.y + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003bdab0 >> (7 - uVar2) * 8;
  file_list_bg._8_8_ = DAT_003bdab0;
  uVar2 = (uint)&file_list_bg.alpha & 7;
  puVar4 = &file_list_bg.alpha + -uVar2;
  *(ulong *)puVar4 = *(ulong *)puVar4 & -1L << (uVar2 + 1) * 8 | DAT_003bdab8 >> (7 - uVar2) * 8;
  file_list_bg._16_8_ = DAT_003bdab8;
  PK2SendVram__FUiiii((uint)file_top_tex_addr,-1,-1,0);
  iVar5 = 7;
  CopySqrDToSqr__FP9DISP_SQARP8SQAR_DAT(&dsq,&file_list_bg);
  dsq.alpha = (uchar)((int)((uint)dsq.alpha * (uint)alpha) >> 7);
  DispSqrD__FP9DISP_SQAR(&dsq);
  d = menu_file_tex + 3;
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&win_ds,d);
    iVar5 = iVar5 + -1;
    d = d + 1;
    win_ds.x = win_ds.x + fVar6;
    win_ds.y = win_ds.y + (float)off_y;
    win_ds.alpha = (uchar)((int)((uint)win_ds.alpha * (uint)alpha) >> 7);
    DispSprD__FP9DISP_SPRT(&win_ds);
  } while (-1 < iVar5);
  return;
}

static void MenuFileTopScrollFrameDisp(int off_x, int off_y, u_char alpha) {
	int i;
	DISP_SPRT scroll_ds;
	
  uint uVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  DISP_SPRT scroll_ds;
  
  fVar4 = (float)off_x;
  fVar5 = (float)off_y;
  PK2SendVram__FUiiii((uint)file_top_tex_addr,-1,-1,0);
  iVar2 = 0;
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&scroll_ds,menu_file_tex + 0x21);
  scroll_ds.x = scroll_ds.x + fVar4;
  scroll_ds.y = scroll_ds.y + fVar5;
  scroll_ds.alpha = (uchar)((int)((uint)scroll_ds.alpha * (uint)alpha) >> 7);
  DispSprD__FP9DISP_SPRT(&scroll_ds);
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&scroll_ds,menu_file_tex + 0x23);
    uVar1 = scroll_ds.h * iVar2;
    iVar2 = iVar2 + 1;
    scroll_ds.x = scroll_ds.x + fVar4;
    if ((int)uVar1 < 0) {
      fVar3 = (float)(uVar1 & 1 | uVar1 >> 1);
      fVar3 = fVar3 + fVar3;
    }
    else {
      fVar3 = (float)uVar1;
    }
    scroll_ds.y = scroll_ds.y + fVar3 + fVar5;
    scroll_ds.alpha = (uchar)((int)((uint)scroll_ds.alpha * (uint)alpha) >> 7);
    DispSprD__FP9DISP_SPRT(&scroll_ds);
  } while (iVar2 < 0xc);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&scroll_ds,menu_file_tex + 0x24);
  scroll_ds.x = scroll_ds.x + fVar4;
  scroll_ds.y = scroll_ds.y + fVar5;
  scroll_ds.alpha = (uchar)((int)((uint)scroll_ds.alpha * (uint)alpha) >> 7);
  DispSprD__FP9DISP_SPRT(&scroll_ds);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&scroll_ds,menu_file_tex + 0x22);
  scroll_ds.x = scroll_ds.x + fVar4;
  scroll_ds.y = scroll_ds.y + fVar5;
  scroll_ds.alpha = (uchar)((int)((uint)scroll_ds.alpha * (uint)alpha) >> 7);
  DispSprD__FP9DISP_SPRT(&scroll_ds);
  return;
}

static void MenuFileTopScrollDisp(int off_x, int off_y, u_char alpha) {
	DISP_SPRT scroll_ds;
	int scroll_size;
	int scroll_y;
	int center_size;
	int file_type;
	
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  DISP_SPRT scroll_ds;
  
  iVar3 = menu_file_ctrl.tag_csr;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z13MENU_REF_CTRL_UiUi_PX01(menu_file_ctrl.tag_csr,5);
  if (menu_file_ctrl.ref_ctrl.field0_0x0.m_aData[iVar3].data_num < 6) {
                    /* end of inlined section */
    iVar6 = 0xb4;
    iVar3 = 0x81;
  }
  else {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z13MENU_REF_CTRL_UiUi_PX01(iVar3,5);
    iVar6 = menu_file_ctrl.ref_ctrl.field0_0x0.m_aData[iVar3].data_num;
    if (iVar6 == 0) {
      trap(7);
    }
    _fixed_array_verifyrange__H1Z13MENU_REF_CTRL_UiUi_PX01(iVar3,5);
    iVar4 = menu_file_ctrl.ref_ctrl.field0_0x0.m_aData[iVar3].data_num;
    _fixed_array_verifyrange__H1Z13MENU_REF_CTRL_UiUi_PX01(iVar3,5);
    iVar1 = menu_file_ctrl.ref_ctrl.field0_0x0.m_aData[iVar3].data_num;
    if (iVar1 == 0) {
      trap(7);
    }
    iVar6 = 0xb4 - (0xb4 / iVar6) * (iVar4 + -6);
    _fixed_array_verifyrange__H1Z13MENU_REF_CTRL_UiUi_PX01(iVar3,5);
    iVar3 = (0xb4 / iVar1) * menu_file_ctrl.ref_ctrl.field0_0x0.m_aData[iVar3].disp_start_pos + 0x81
    ;
  }
                    /* end of inlined section */
  iVar4 = iVar6 - ((uint)(ushort)menu_file_tex[30].h + (uint)(ushort)menu_file_tex[32].h);
  PK2SendVram__FUiiii((uint)file_cmn_tex_addr,-1,-1,0);
  uVar5 = (uint)alpha;
  if (iVar4 < 0) {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&scroll_ds,menu_file_tex + 0x1e);
    fVar9 = (float)off_x;
    uVar2 = (iVar6 / 2) / (int)scroll_ds.h;
    scroll_ds.csy = (float)(iVar3 + off_y);
    scroll_ds.csx = scroll_ds.x + fVar9;
    scroll_ds.scw = 1.0;
    scroll_ds.alpha = (uchar)((int)(scroll_ds.alpha * uVar5) >> 7);
    if (scroll_ds.h == 0) {
      trap(7);
    }
    if ((int)uVar2 < 0) {
      fVar8 = (float)(uVar2 & 1 | uVar2 >> 1);
      scroll_ds.sch = fVar8 + fVar8;
    }
    else {
      scroll_ds.sch = (float)uVar2;
    }
    fVar8 = fVar9;
    scroll_ds.x = scroll_ds.csx;
    scroll_ds.y = scroll_ds.csy;
    DispSprD__FP9DISP_SPRT(&scroll_ds);
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&scroll_ds,menu_file_tex + 0x20);
    uVar2 = (iVar6 / 2) / (int)scroll_ds.h;
    scroll_ds.csx = scroll_ds.x + fVar9;
    scroll_ds.csy = (float)(iVar3 + iVar6 / 2 + off_y);
    scroll_ds.scw = 1.0;
    if (scroll_ds.h == 0) {
      trap(7);
    }
    if ((int)uVar2 < 0) {
      fVar9 = (float)(uVar2 & 1 | uVar2 >> 1);
      scroll_ds.sch = fVar9 + fVar9;
    }
    else {
      scroll_ds.sch = (float)uVar2;
    }
    scroll_ds.alpha = (uchar)((int)(scroll_ds.alpha * uVar5) >> 7);
    scroll_ds.x = scroll_ds.csx;
    scroll_ds.y = scroll_ds.csy;
    DispSprD__FP9DISP_SPRT(&scroll_ds);
  }
  else {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&scroll_ds,menu_file_tex + 0x1e);
    fVar9 = (float)off_x;
    scroll_ds.y = (float)(iVar3 + off_y);
    scroll_ds.x = scroll_ds.x + fVar9;
    scroll_ds.alpha = (uchar)((int)((uint)scroll_ds.alpha * (uint)alpha) >> 7);
    fVar8 = fVar9;
    DispSprD__FP9DISP_SPRT(&scroll_ds);
    iVar3 = iVar3 + (uint)(ushort)menu_file_tex[30].h;
    if (-1 < (int)(iVar4 - (uint)(ushort)menu_file_tex[31].h)) {
      uVar2 = (uint)(ushort)menu_file_tex[31].h;
      do {
        iVar4 = iVar4 - uVar2;
        CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&scroll_ds,menu_file_tex + 0x1f);
        scroll_ds.y = (float)(iVar3 + off_y);
        scroll_ds.x = scroll_ds.x + fVar9;
        scroll_ds.alpha = (uchar)((int)((uint)scroll_ds.alpha * (uint)alpha) >> 7);
        DispSprD__FP9DISP_SPRT(&scroll_ds);
        uVar2 = (uint)(ushort)menu_file_tex[31].h;
        iVar3 = iVar3 + uVar2;
      } while (-1 < (int)(iVar4 - uVar2));
    }
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&scroll_ds,menu_file_tex + 0x1f);
    scroll_ds.csy = (float)(iVar3 + off_y);
    scroll_ds.csx = scroll_ds.x + fVar9;
    scroll_ds.scw = 1.0;
    scroll_ds.alpha = (uchar)((int)(scroll_ds.alpha * uVar5) >> 7);
    if ((int)scroll_ds.h < 0) {
      fVar7 = (float)(scroll_ds.h & 1 | scroll_ds.h >> 1);
      fVar7 = fVar7 + fVar7;
    }
    else {
      fVar7 = (float)scroll_ds.h;
    }
    scroll_ds.sch = (float)iVar4 / fVar7;
    scroll_ds.x = scroll_ds.csx;
    scroll_ds.y = scroll_ds.csy;
    DispSprD__FP9DISP_SPRT(&scroll_ds);
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&scroll_ds,menu_file_tex + 0x20);
    scroll_ds.y = (float)(iVar3 + iVar4 + off_y);
    scroll_ds.x = scroll_ds.x + fVar9;
    scroll_ds.alpha = (uchar)((int)(scroll_ds.alpha * uVar5) >> 7);
    DispSprD__FP9DISP_SPRT(&scroll_ds);
  }
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&scroll_ds,menu_file_tex + 0x1c);
  scroll_ds.x = scroll_ds.x + fVar8;
  scroll_ds.b = menu_file_disp.rgb;
  scroll_ds.y = scroll_ds.y + (float)off_y;
  scroll_ds.r = menu_file_disp.rgb;
  scroll_ds.g = menu_file_disp.rgb;
  scroll_ds.alpha = (uchar)((int)(scroll_ds.alpha * uVar5) >> 7);
  DispSprD__FP9DISP_SPRT(&scroll_ds);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&scroll_ds,menu_file_tex + 0x1d);
  scroll_ds.x = scroll_ds.x + fVar8;
  scroll_ds.b = menu_file_disp.rgb;
  scroll_ds.y = scroll_ds.y + (float)off_y;
  scroll_ds.r = menu_file_disp.rgb;
  scroll_ds.g = menu_file_disp.rgb;
  scroll_ds.alpha = (uchar)((int)(scroll_ds.alpha * uVar5) >> 7);
  DispSprD__FP9DISP_SPRT(&scroll_ds);
  return;
}

static void MenuFileTopLensDisp(int off_x, int off_y, u_char alpha) {
	DISP_SPRT lens_ds;
	
  DISP_SPRT lens_ds;
  
  PK2SendVram__FUiiii((uint)file_top_tex_addr,-1,-1,0);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&lens_ds,menu_file_tex + 0x10);
  lens_ds.csx = lens_ds.x + (float)off_x;
  lens_ds.csy = lens_ds.y + (float)off_y;
  lens_ds.sch = 2.0;
  lens_ds.alphar = 0x48;
  lens_ds.alpha = (uchar)((int)((uint)lens_ds.alpha * (uint)alpha) >> 7);
  lens_ds.scw = 2.0;
  lens_ds.x = lens_ds.csx;
  lens_ds.y = lens_ds.csy;
  DispSprD__FP9DISP_SPRT(&lens_ds);
  return;
}

static void MenuFileTopPictureDisp(int off_x, int off_y, u_char alpha) {
	DISP_SPRT file_ds;
	int disp_num;
	int file_type;
	u_char fade_alpha[2];
	
  int iVar1;
  uint *puVar2;
  DISP_SPRT file_ds;
  uchar fade_alpha [2];
  
  iVar1 = menu_file_ctrl.tag_csr;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z13MENU_REF_CTRL_UiUi_PX01(menu_file_ctrl.tag_csr,5);
  GetMenuFileDispFileID__Fii(iVar1,menu_file_ctrl.ref_ctrl.field0_0x0.m_aData[iVar1].data_pos);
  _fixed_array_verifyrange__H1Z13MENU_REF_CTRL_UiUi_PX01(iVar1,5);
  iVar1 = menu_file_ctrl.ref_ctrl.field0_0x0.m_aData[iVar1].data_num;
                    /* end of inlined section */
  fade_alpha[1] = '\0';
  if (6 < iVar1) {
    iVar1 = 6;
  }
  fade_alpha[0] = '\0';
  if (iVar1 != 0) {
    GetMenuCrossFadeAlpha__FPUc(fade_alpha);
    if (menu_wrk.step != '\x02') {
      fade_alpha[menu_file_ctrl.cross_fade_flg ^ 1] = '\0';
    }
    iVar1 = CheckCrossFadeDisp__Fi(menu_file_ctrl.cross_fade_flg ^ 1);
    if ((iVar1 != 0) && (fade_alpha[menu_file_ctrl.cross_fade_flg ^ 1] != '\0')) {
      puVar2 = (uint *)GetCrossFadeDataAddr__Fi(menu_file_ctrl.cross_fade_flg ^ 1);
      MenuTim2SendVram__FPUiii(puVar2,0x2bc0,14000);
      CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&file_ds,menu_file_tex + 0x25);
      file_ds.tex0 = 0x2006d6066932abc0;
      file_ds.alpha =
           (uchar)((int)((uint)file_ds.alpha * (uint)fade_alpha[menu_file_ctrl.cross_fade_flg ^ 1])
                  >> 7);
      DispSprD__FP9DISP_SPRT(&file_ds);
    }
    if (menu_wrk.step != '\x02') {
      fade_alpha[menu_file_ctrl.cross_fade_flg] = alpha;
    }
    iVar1 = CheckCrossFadeDisp__Fi((uint)menu_file_ctrl.cross_fade_flg);
    if ((iVar1 != 0) && (fade_alpha[menu_file_ctrl.cross_fade_flg] != '\0')) {
      puVar2 = (uint *)GetCrossFadeDataAddr__Fi((uint)menu_file_ctrl.cross_fade_flg);
      MenuTim2SendVram__FPUiii(puVar2,0x2bc0,14000);
      CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&file_ds,menu_file_tex + 0x25);
      file_ds.tex0 = 0x2006d6066932abc0;
      file_ds.alpha =
           (uchar)((int)((uint)file_ds.alpha * (uint)fade_alpha[menu_file_ctrl.cross_fade_flg]) >> 7
                  );
      DispSprD__FP9DISP_SPRT(&file_ds);
    }
  }
  return;
}

static void MenuFileTopTagDisp(int off_x, int off_y, u_char alpha) {
	DISP_SPRT tag_ds;
	
  DISP_SPRT tag_ds;
  
  PK2SendVram__FUiiii((uint)file_top_tex_addr,-1,-1,0);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&tag_ds,menu_file_tex + menu_file_ctrl.tag_csr + 0xb);
  tag_ds.x = tag_ds.x + (float)off_x;
  tag_ds.y = tag_ds.y + (float)off_y;
  tag_ds.alpha = (uchar)((int)((uint)tag_ds.alpha * (uint)alpha) >> 7);
  DispSprD__FP9DISP_SPRT(&tag_ds);
  return;
}

static void MenuFileTopArrowDisp(int off_x, int off_y, u_char alpha) {
  MenuFileSmallArrowDisp__FffUcUcc(41.0,66.0,alpha,menu_file_disp.rgb,'\0');
  MenuFileSmallArrowDisp__FffUcUcc(DAT_003ee55c,66.0,alpha,menu_file_disp.rgb,'\x01');
  return;
}

static void MenuFileTopListFrameDisp(int off_x, int off_y, u_char alpha) {
	int i;
	int file_type;
	int disp_num;
	int col_label;
	
  int file_type;
  char cVar1;
  int iVar2;
  MENU_REF_CTRL *pMVar3;
  int iVar4;
  int y;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_54;
  
  file_type = menu_file_ctrl.tag_csr;
  iVar4 = 0;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z13MENU_REF_CTRL_UiUi_PX01(menu_file_ctrl.tag_csr,5);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar5 = menu_file_ctrl.ref_ctrl.field0_0x0.m_aData[file_type].data_num;
                    /* end of inlined section */
  if (6 < iVar5) {
    iVar5 = 6;
  }
  if (0 < iVar5) {
    local_54 = 0x75;
    iVar8 = 0x75;
    y = off_y + 0x77;
    iVar7 = 0x74;
    do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      iVar6 = menu_file_ctrl.tag_csr;
      _fixed_array_verifyrange__H1Zi_UiUi_PX01(menu_file_ctrl.tag_csr,5);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      if (iVar4 == menu_file_ctrl.top_csr.field0_0x0.m_aData[iVar6]) {
                    /* end of inlined section */
        iVar6 = 4;
        MenuFileSelFrameDisp__FffUc(73.0,(float)iVar7,alpha);
      }
      else {
        iVar6 = 3;
        MenuFileNonSelFrameDisp__FffUc(76.0,(float)iVar8,alpha);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      }
      _fixed_array_verifyrange__H1Z13MENU_REF_CTRL_UiUi_PX01(file_type,5);
      pMVar3 = menu_file_ctrl.ref_ctrl.field0_0x0.m_aData + file_type;
      cVar1 = GetMenuFileDispFileState__Fii(file_type,pMVar3->disp_start_pos + iVar4);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      if (cVar1 == '\x01') {
                    /* end of inlined section */
        MenuFileNoReadFrameDisp__FffUc(81.0,(float)local_54,alpha);
      }
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z13MENU_REF_CTRL_UiUi_PX01(file_type,5);
                    /* end of inlined section */
      iVar8 = iVar8 + 0x23;
      iVar7 = iVar7 + 0x23;
      local_54 = local_54 + 0x23;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      iVar2 = pMVar3->disp_start_pos + iVar4;
      iVar4 = iVar4 + 1;
      iVar2 = GetMenuFileDispFileID__Fii(file_type,iVar2);
                    /* end of inlined section */
      PrintMsg__Fiiiiiii(msg_type_tbl[file_type],iVar2 * 3,off_x + 0x5f,y,iVar6,(uint)alpha,0xa0);
      y = y + 0x23;
    } while (iVar4 < iVar5);
  }
  return;
}

static void MenuFileTopMsgWinDisp(int off_x, int off_y, u_char alpha) {
	int file_type;
	
  int file_type;
  int iVar1;
  
  file_type = menu_file_ctrl.tag_csr;
  DrawCmnWindow__FUiffffUcUc
            (0xa0,(float)(off_x + 0x18),(float)(off_y + 0x15a),592.0,100.0,alpha,'f');
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z13MENU_REF_CTRL_UiUi_PX01(file_type,5);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar1 = GetMenuFileDispFileID__Fii
                    (file_type,menu_file_ctrl.ref_ctrl.field0_0x0.m_aData[file_type].data_pos);
                    /* end of inlined section */
  PrintMsg__Fiiiiiii(msg_type_tbl[file_type],iVar1 * 3 + 1,off_x + 0x30,off_y + 0x172,1,(uint)alpha,
                     0xa0);
  return;
}

static void MenuFileTopCaptionDisp(int off_x, int off_y, u_char alpha) {
  DrawCmnCapGroup_W__FiiUcUi(4,4,alpha,0);
  return;
}

static void MenuFileDocumentWinDisp(int off_x, int off_y, u_char alpha) {
	int i;
	DISP_SPRT win_ds;
	DISP_SQAR dsq;
	SQAR_DAT document_bg;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  uchar *puVar4;
  SPRT_DAT *d;
  int iVar5;
  float fVar6;
  DISP_SPRT win_ds;
  DISP_SQAR dsq;
  SQAR_DAT document_bg;
  
  fVar6 = (float)off_x;
  puVar1 = (undefined *)((int)&document_bg.h + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003bdac0 >> (7 - uVar2) * 8;
  document_bg._0_8_ = DAT_003bdac0;
  puVar1 = (undefined *)((int)&document_bg.y + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003bdac8 >> (7 - uVar2) * 8;
  document_bg._8_8_ = DAT_003bdac8;
  uVar2 = (uint)&document_bg.alpha & 7;
  puVar4 = &document_bg.alpha + -uVar2;
  *(ulong *)puVar4 = *(ulong *)puVar4 & -1L << (uVar2 + 1) * 8 | _DAT_003bdad0 >> (7 - uVar2) * 8;
  document_bg._16_8_ = _DAT_003bdad0;
  PK2SendVram__FUiiii((uint)file_doc_tex_addr,-1,-1,0);
  iVar5 = 6;
  CopySqrDToSqr__FP9DISP_SQARP8SQAR_DAT(&dsq,&document_bg);
  dsq.alpha = (uchar)((int)((uint)dsq.alpha * (uint)alpha) >> 7);
  DispSqrD__FP9DISP_SQAR(&dsq);
  d = menu_file_tex + 0x26;
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&win_ds,d);
    iVar5 = iVar5 + -1;
    d = d + 1;
    win_ds.x = win_ds.x + fVar6;
    win_ds.y = win_ds.y + (float)off_y;
    win_ds.alpha = (uchar)((int)((uint)win_ds.alpha * (uint)alpha) >> 7);
    DispSprD__FP9DISP_SPRT(&win_ds);
  } while (-1 < iVar5);
  return;
}

static void MenuFileDocumentArrowDisp(int off_x, int off_y, u_char alpha) {
  MenuFileBigArrowDisp__FffUcUcc(16.0,243.0,alpha,menu_file_disp.rgb,'\0');
  MenuFileBigArrowDisp__FffUcUcc(DAT_003ee560,243.0,alpha,menu_file_disp.rgb,'\x01');
  return;
}

static void MenuFileDocumentCaptionDisp(int off_x, int off_y, u_char alpha) {
	int file_type;
	
  int iVar1;
  int iVar2;
  
  iVar2 = menu_file_ctrl.tag_csr;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z13MENU_REF_CTRL_UiUi_PX01(menu_file_ctrl.tag_csr,5);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar1 = GetMenuFileDispFileID__Fii
                    (iVar2,menu_file_ctrl.ref_ctrl.field0_0x0.m_aData[iVar2].data_pos);
                    /* end of inlined section */
  iVar2 = GetMsgPageNum__Fii(msg_type_tbl[iVar2],iVar1 * 3 + 2);
  if (1 < iVar2) {
    DrawCmnCapGroup_W__FiiUcUi(9,9,alpha,0);
    return;
  }
  DrawCmnCapGroup_W__FiiUcUi(0xc,0xc,alpha,0);
  return;
}

static void MenuFileDocumentNameDisp(int off_x, int off_y, u_char alpha) {
	int i;
	int file_type;
	int file_id;
	
  int file_type;
  int iVar1;
  uint uVar2;
  int col_label;
  uint uVar3;
  int x;
  int y;
  
  file_type = menu_file_ctrl.tag_csr;
  uVar3 = 0;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z13MENU_REF_CTRL_UiUi_PX01(menu_file_ctrl.tag_csr,5);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar1 = GetMenuFileDispFileID__Fii
                    (file_type,menu_file_ctrl.ref_ctrl.field0_0x0.m_aData[file_type].data_pos);
                    /* end of inlined section */
  uVar2 = 2;
  x = off_x + 0x142;
  y = off_y + 0x47;
  do {
    uVar3 = uVar3 + 1;
    col_label = 0xb;
    if (uVar2 == 0) {
      col_label = 10;
    }
    PrintMsg_Arrange__Fiiiiiiiiii
              (msg_type_tbl[file_type],iVar1 * 3,x,y,col_label,(uint)alpha,0xa0,0,0,2);
    uVar2 = uVar3 ^ 2;
    x = x + -1;
    y = y + -1;
  } while ((int)uVar3 < 3);
  return;
}

static void MenuFileDocumentDataDisp(int off_x, int off_y, u_char alpha) {
	int file_type;
	
  int file_type;
  int iVar1;
  
  file_type = menu_file_ctrl.tag_csr;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z13MENU_REF_CTRL_UiUi_PX01(menu_file_ctrl.tag_csr,5);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar1 = GetMenuFileDispFileID__Fii
                    (file_type,menu_file_ctrl.ref_ctrl.field0_0x0.m_aData[file_type].data_pos);
                    /* end of inlined section */
  PrintMsg_P__Fiiiiiiiii
            (msg_type_tbl[file_type],iVar1 * 3 + 2,off_x + 0x50,off_y + 0x89,1,(uint)alpha,0xa0,0,0)
  ;
  return;
}

static void MenuFileDocumentPageDisp(int off_x, int off_y, u_char alpha) {
	int file_type;
	int file_id;
	
  int iVar1;
  int iVar2;
  int iVar3;
  int y;
  
  iVar3 = menu_file_ctrl.tag_csr;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  y = off_y + 0x18b;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z13MENU_REF_CTRL_UiUi_PX01(menu_file_ctrl.tag_csr,5);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar1 = GetMenuFileDispFileID__Fii
                    (iVar3,menu_file_ctrl.ref_ctrl.field0_0x0.m_aData[iVar3].data_pos);
                    /* end of inlined section */
  iVar2 = GetNowMsgPageNum__Fv();
  PrintNumber_N__FiiiiUcUciUcUc(iVar2 + 1,1,off_x + 0x126,y,'\x01',alpha,0,'\x01',1);
  PrintMsg__Fiiiiiii(8,1,off_x + 0x138,y,1,(uint)alpha,0xa0);
  iVar3 = GetMsgPageNum__Fii(msg_type_tbl[iVar3],iVar1 * 3 + 2);
  PrintNumber_N__FiiiiUcUciUcUc(iVar3,1,off_x + 0x146,y,'\x01',alpha,0,'\x01',1);
  return;
}

static void MenuFilePhotoWinDisp(int off_x, int off_y, u_char alpha) {
	int i;
	DISP_SPRT win_ds;
	
  SPRT_DAT *d;
  int iVar1;
  float fVar2;
  DISP_SPRT win_ds;
  
  fVar2 = (float)off_x;
  iVar1 = 2;
  PK2SendVram__FUiiii((uint)file_photo_tex_addr,-1,-1,0);
  d = menu_file_tex + 0x31;
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&win_ds,d);
    iVar1 = iVar1 + -1;
    d = d + 1;
    win_ds.x = win_ds.x + fVar2;
    win_ds.y = win_ds.y + (float)off_y;
    win_ds.alpha = (uchar)((int)((uint)win_ds.alpha * (uint)alpha) >> 7);
    DispSprD__FP9DISP_SPRT(&win_ds);
  } while (-1 < iVar1);
  return;
}

static void MenuFilePhotoSmallTexDisp(int off_x, int off_y, u_char alpha) {
	DISP_SPRT photo_ds;
	int file_type;
	int disp_num;
	
  int file_type;
  int iVar1;
  int *cursor;
  MENU_REF_CTRL *ref_ctrl;
  int disp_num;
  float fVar2;
  DISP_SPRT photo_ds;
  
  file_type = menu_file_ctrl.tag_csr;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z13MENU_REF_CTRL_UiUi_PX01(menu_file_ctrl.tag_csr,5);
  ref_ctrl = menu_file_ctrl.ref_ctrl.field0_0x0.m_aData + file_type;
  GetMenuFileDispFileID__Fii
            (file_type,menu_file_ctrl.ref_ctrl.field0_0x0.m_aData[file_type].data_pos);
  _fixed_array_verifyrange__H1Z13MENU_REF_CTRL_UiUi_PX01(file_type,5);
  disp_num = menu_file_ctrl.ref_ctrl.field0_0x0.m_aData[file_type].data_num;
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  if (6 < disp_num) {
    disp_num = 6;
  }
  _fixed_array_verifyrange__H1Z13MENU_REF_CTRL_UiUi_PX01(file_type,5);
  if (1 < menu_file_ctrl.ref_ctrl.field0_0x0.m_aData[file_type].data_num) {
    _fixed_array_verifyrange__H1Z13MENU_REF_CTRL_UiUi_PX01(file_type,5);
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(file_type,5);
    cursor = menu_file_ctrl.top_csr.field0_0x0.m_aData + file_type;
    MenuRefMovePadLup__FP13MENU_REF_CTRLPiii(ref_ctrl,cursor,disp_num,6);
    _fixed_array_verifyrange__H1Z13MENU_REF_CTRL_UiUi_PX01(file_type,5);
                    /* end of inlined section */
    fVar2 = (float)off_x;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    iVar1 = GetMenuFileDispFileID__Fii
                      (file_type,menu_file_ctrl.ref_ctrl.field0_0x0.m_aData[file_type].data_pos);
                    /* end of inlined section */
    PK2SendVramOne__FUiiiii((uint)photo_small_tex_addr,iVar1,-1,-1,0);
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&photo_ds,menu_file_tex + 0x35);
    photo_ds.x = photo_ds.x + fVar2;
    photo_ds.y = photo_ds.y + (float)off_y;
    photo_ds.alpha = (uchar)((int)((uint)photo_ds.alpha * (uint)alpha) >> 7);
    DispSprD__FP9DISP_SPRT(&photo_ds);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z13MENU_REF_CTRL_UiUi_PX01(file_type,5);
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(file_type,5);
    MenuRefMovePadLdown__FP13MENU_REF_CTRLPiii(ref_ctrl,cursor,disp_num,6);
    _fixed_array_verifyrange__H1Z13MENU_REF_CTRL_UiUi_PX01(file_type,5);
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(file_type,5);
    MenuRefMovePadLdown__FP13MENU_REF_CTRLPiii(ref_ctrl,cursor,disp_num,6);
    _fixed_array_verifyrange__H1Z13MENU_REF_CTRL_UiUi_PX01(file_type,5);
    iVar1 = GetMenuFileDispFileID__Fii
                      (file_type,menu_file_ctrl.ref_ctrl.field0_0x0.m_aData[file_type].data_pos);
                    /* end of inlined section */
    PK2SendVramOne__FUiiiii((uint)photo_small_tex_addr,iVar1,-1,-1,0);
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&photo_ds,menu_file_tex + 0x36);
    photo_ds.x = photo_ds.x + fVar2;
    photo_ds.y = photo_ds.y + (float)off_y;
    photo_ds.alpha = (uchar)((int)((uint)photo_ds.alpha * (uint)alpha) >> 7);
    DispSprD__FP9DISP_SPRT(&photo_ds);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z13MENU_REF_CTRL_UiUi_PX01(file_type,5);
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(file_type,5);
    MenuRefMovePadLup__FP13MENU_REF_CTRLPiii(ref_ctrl,cursor,disp_num,6);
  }
  return;
}

static void MenuFilePhotoCenterTexDisp(int off_x, int off_y, u_char alpha) {
	int file_type;
	DISP_SPRT photo_ds;
	u_char fade_alpha[2];
	
  int iVar1;
  uint *puVar2;
  DISP_SPRT photo_ds;
  uchar fade_alpha [2];
  
  iVar1 = menu_file_ctrl.tag_csr;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z13MENU_REF_CTRL_UiUi_PX01(menu_file_ctrl.tag_csr,5);
  GetMenuFileDispFileID__Fii(iVar1,menu_file_ctrl.ref_ctrl.field0_0x0.m_aData[iVar1].data_pos);
                    /* end of inlined section */
  fade_alpha[1] = '\0';
  fade_alpha[0] = '\0';
  GetMenuCrossFadeAlpha__FPUc(fade_alpha);
  if (menu_file_ctrl.sub_step != '\x02') {
    fade_alpha[menu_file_ctrl.cross_fade_flg ^ 1] = '\0';
  }
  iVar1 = CheckCrossFadeDisp__Fi(menu_file_ctrl.cross_fade_flg ^ 1);
  if ((iVar1 != 0) && (fade_alpha[menu_file_ctrl.cross_fade_flg ^ 1] != '\0')) {
    puVar2 = (uint *)GetCrossFadeDataAddr__Fi(menu_file_ctrl.cross_fade_flg ^ 1);
    MenuTim2SendVram__FPUiii(puVar2,0x2bc0,14000);
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&photo_ds,menu_file_tex + 0x34);
    photo_ds.tex0 = 0x2006d6066932abc0;
    photo_ds.alpha =
         (uchar)((int)((uint)photo_ds.alpha * (uint)fade_alpha[menu_file_ctrl.cross_fade_flg ^ 1])
                >> 7);
    DispSprD__FP9DISP_SPRT(&photo_ds);
  }
  if (menu_file_ctrl.sub_step != '\x02') {
    fade_alpha[menu_file_ctrl.cross_fade_flg] = alpha;
  }
  iVar1 = CheckCrossFadeDisp__Fi((uint)menu_file_ctrl.cross_fade_flg);
  if ((iVar1 != 0) && (fade_alpha[menu_file_ctrl.cross_fade_flg] != '\0')) {
    puVar2 = (uint *)GetCrossFadeDataAddr__Fi((uint)menu_file_ctrl.cross_fade_flg);
    MenuTim2SendVram__FPUiii(puVar2,0x2bc0,14000);
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&photo_ds,menu_file_tex + 0x34);
    photo_ds.tex0 = 0x2006d6066932abc0;
    photo_ds.alpha =
         (uchar)((int)((uint)photo_ds.alpha * (uint)fade_alpha[menu_file_ctrl.cross_fade_flg]) >> 7)
    ;
    DispSprD__FP9DISP_SPRT(&photo_ds);
  }
  return;
}

static void MenuFilePhotoArrowDisp(int off_x, int off_y, u_char alpha) {
  MenuFileBigArrowDisp__FffUcUcc(27.0,210.0,alpha,menu_file_disp.rgb,'\0');
  MenuFileBigArrowDisp__FffUcUcc(584.0,210.0,alpha,menu_file_disp.rgb,'\x01');
  return;
}

static void MenuFilePhotoMsgWinDisp(int off_x, int off_y, u_char alpha) {
	int file_type;
	
  int file_type;
  int iVar1;
  
  file_type = menu_file_ctrl.tag_csr;
  DrawCmnWindow__FUiffffUcUc
            (0xa0,(float)(off_x + 0x18),(float)(off_y + 0x15a),592.0,100.0,alpha,'f');
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z13MENU_REF_CTRL_UiUi_PX01(file_type,5);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar1 = GetMenuFileDispFileID__Fii
                    (file_type,menu_file_ctrl.ref_ctrl.field0_0x0.m_aData[file_type].data_pos);
                    /* end of inlined section */
  PrintMsg__Fiiiiiii(msg_type_tbl[file_type],iVar1 * 3 + 1,off_x + 0x30,off_y + 0x172,1,(uint)alpha,
                     0xa0);
  return;
}

static void MenuFilePhotoCaptionDisp(int off_x, int off_y, u_char alpha) {
  DrawCmnCapGroup_W__FiiUcUi(0xb,0xb,alpha,0);
  return;
}

static void MenuFilePhotoNameDisp(int off_x, int off_y, u_char alpha) {
	int i;
	int file_type;
	int file_id;
	
  int file_type;
  int iVar1;
  uint uVar2;
  int col_label;
  uint uVar3;
  int y;
  
  file_type = menu_file_ctrl.tag_csr;
  uVar3 = 0;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z13MENU_REF_CTRL_UiUi_PX01(menu_file_ctrl.tag_csr,5);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar1 = GetMenuFileDispFileID__Fii
                    (file_type,menu_file_ctrl.ref_ctrl.field0_0x0.m_aData[file_type].data_pos);
                    /* end of inlined section */
  uVar2 = 2;
  y = off_y + 0x46;
  do {
    uVar3 = uVar3 + 1;
    col_label = 0xb;
    if (uVar2 == 0) {
      col_label = 10;
    }
    PrintMsg_Arrange__Fiiiiiiiiii
              (msg_type_tbl[file_type],iVar1 * 3,off_x + 0x141,y,col_label,(uint)alpha,0xa0,0,0,2);
    uVar2 = uVar3 ^ 2;
    y = y + -1;
  } while ((int)uVar3 < 3);
  return;
}

static void MenuFileMapWinDisp(int off_x, int off_y, u_char alpha) {
	int i;
	DISP_SPRT win_ds;
	
  SPRT_DAT *d;
  int iVar1;
  float fVar2;
  DISP_SPRT win_ds;
  
  fVar2 = (float)off_x;
  iVar1 = 0xc;
  PK2SendVram__FUiiii((uint)file_map_tex_addr,-1,-1,0);
  d = menu_file_tex + 0x37;
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&win_ds,d);
    iVar1 = iVar1 + -1;
    d = d + 1;
    win_ds.x = win_ds.x + fVar2;
    win_ds.y = win_ds.y + (float)off_y;
    win_ds.alpha = (uchar)((int)((uint)win_ds.alpha * (uint)alpha) >> 7);
    DispSprD__FP9DISP_SPRT(&win_ds);
  } while (-1 < iVar1);
  return;
}

static void MenuFileMapSmallTexDisp(int off_x, int off_y, u_char alpha) {
	DISP_SPRT map_ds;
	int file_type;
	int disp_num;
	
  int file_type;
  int iVar1;
  int *cursor;
  MENU_REF_CTRL *ref_ctrl;
  int disp_num;
  float fVar2;
  DISP_SPRT map_ds;
  
  file_type = menu_file_ctrl.tag_csr;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z13MENU_REF_CTRL_UiUi_PX01(menu_file_ctrl.tag_csr,5);
  ref_ctrl = menu_file_ctrl.ref_ctrl.field0_0x0.m_aData + file_type;
  GetMenuFileDispFileID__Fii
            (file_type,menu_file_ctrl.ref_ctrl.field0_0x0.m_aData[file_type].data_pos);
  _fixed_array_verifyrange__H1Z13MENU_REF_CTRL_UiUi_PX01(file_type,5);
  disp_num = menu_file_ctrl.ref_ctrl.field0_0x0.m_aData[file_type].data_num;
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  if (6 < disp_num) {
    disp_num = 6;
  }
  _fixed_array_verifyrange__H1Z13MENU_REF_CTRL_UiUi_PX01(file_type,5);
  if (1 < menu_file_ctrl.ref_ctrl.field0_0x0.m_aData[file_type].data_num) {
    _fixed_array_verifyrange__H1Z13MENU_REF_CTRL_UiUi_PX01(file_type,5);
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(file_type,5);
    cursor = menu_file_ctrl.top_csr.field0_0x0.m_aData + file_type;
    MenuRefMovePadLup__FP13MENU_REF_CTRLPiii(ref_ctrl,cursor,disp_num,6);
    _fixed_array_verifyrange__H1Z13MENU_REF_CTRL_UiUi_PX01(file_type,5);
                    /* end of inlined section */
    fVar2 = (float)off_x;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    iVar1 = GetMenuFileDispFileID__Fii
                      (file_type,menu_file_ctrl.ref_ctrl.field0_0x0.m_aData[file_type].data_pos);
                    /* end of inlined section */
    PK2SendVramOne__FUiiiii((uint)map_small_tex_addr,iVar1,-1,-1,0);
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&map_ds,menu_file_tex + 0x49);
    map_ds.x = map_ds.x + fVar2;
    map_ds.y = map_ds.y + (float)off_y;
    map_ds.alpha = (uchar)((int)((uint)map_ds.alpha * (uint)alpha) >> 7);
    DispSprD__FP9DISP_SPRT(&map_ds);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z13MENU_REF_CTRL_UiUi_PX01(file_type,5);
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(file_type,5);
    MenuRefMovePadLdown__FP13MENU_REF_CTRLPiii(ref_ctrl,cursor,disp_num,6);
    _fixed_array_verifyrange__H1Z13MENU_REF_CTRL_UiUi_PX01(file_type,5);
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(file_type,5);
    MenuRefMovePadLdown__FP13MENU_REF_CTRLPiii(ref_ctrl,cursor,disp_num,6);
    _fixed_array_verifyrange__H1Z13MENU_REF_CTRL_UiUi_PX01(file_type,5);
    iVar1 = GetMenuFileDispFileID__Fii
                      (file_type,menu_file_ctrl.ref_ctrl.field0_0x0.m_aData[file_type].data_pos);
                    /* end of inlined section */
    PK2SendVramOne__FUiiiii((uint)map_small_tex_addr,iVar1,-1,-1,0);
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&map_ds,menu_file_tex + 0x4a);
    map_ds.x = map_ds.x + fVar2;
    map_ds.y = map_ds.y + (float)off_y;
    map_ds.alpha = (uchar)((int)((uint)map_ds.alpha * (uint)alpha) >> 7);
    DispSprD__FP9DISP_SPRT(&map_ds);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z13MENU_REF_CTRL_UiUi_PX01(file_type,5);
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(file_type,5);
    MenuRefMovePadLup__FP13MENU_REF_CTRLPiii(ref_ctrl,cursor,disp_num,6);
  }
  return;
}

static void MenuFileMapCenterTexDisp(int off_x, int off_y, u_char alpha) {
	int file_type;
	DISP_SPRT map_ds;
	u_char fade_alpha[2];
	
  int iVar1;
  uint *puVar2;
  DISP_SPRT map_ds;
  uchar fade_alpha [2];
  
  iVar1 = menu_file_ctrl.tag_csr;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z13MENU_REF_CTRL_UiUi_PX01(menu_file_ctrl.tag_csr,5);
  GetMenuFileDispFileID__Fii(iVar1,menu_file_ctrl.ref_ctrl.field0_0x0.m_aData[iVar1].data_pos);
                    /* end of inlined section */
  fade_alpha[1] = '\0';
  fade_alpha[0] = '\0';
  GetMenuCrossFadeAlpha__FPUc(fade_alpha);
  if (menu_file_ctrl.sub_step != '\x02') {
    fade_alpha[menu_file_ctrl.cross_fade_flg ^ 1] = '\0';
  }
  iVar1 = CheckCrossFadeDisp__Fi(menu_file_ctrl.cross_fade_flg ^ 1);
  if ((iVar1 != 0) && (fade_alpha[menu_file_ctrl.cross_fade_flg ^ 1] != '\0')) {
    puVar2 = (uint *)GetCrossFadeDataAddr__Fi(menu_file_ctrl.cross_fade_flg ^ 1);
    MenuTim2SendVram__FPUiii(puVar2,0x2bc0,14000);
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&map_ds,menu_file_tex + 0x48);
    map_ds.tex0 = 0x2006d6066932abc0;
    map_ds.alpha = (uchar)((int)((uint)map_ds.alpha *
                                (uint)fade_alpha[menu_file_ctrl.cross_fade_flg ^ 1]) >> 7);
    DispSprD__FP9DISP_SPRT(&map_ds);
  }
  if (menu_file_ctrl.sub_step != '\x02') {
    fade_alpha[menu_file_ctrl.cross_fade_flg] = alpha;
  }
  iVar1 = CheckCrossFadeDisp__Fi((uint)menu_file_ctrl.cross_fade_flg);
  if ((iVar1 != 0) && (fade_alpha[menu_file_ctrl.cross_fade_flg] != '\0')) {
    puVar2 = (uint *)GetCrossFadeDataAddr__Fi((uint)menu_file_ctrl.cross_fade_flg);
    MenuTim2SendVram__FPUiii(puVar2,0x2bc0,14000);
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&map_ds,menu_file_tex + 0x48);
    map_ds.tex0 = 0x2006d6066932abc0;
    map_ds.alpha = (uchar)((int)((uint)map_ds.alpha *
                                (uint)fade_alpha[menu_file_ctrl.cross_fade_flg]) >> 7);
    DispSprD__FP9DISP_SPRT(&map_ds);
  }
  return;
}

static void MenuFileMapArrowDisp(int off_x, int off_y, u_char alpha) {
	int i;
	DISP_SPRT arrow_ds;
	u_char arrow_alpha;
	
  int iVar1;
  SPRT_DAT *pSVar2;
  uint uVar3;
  float fVar4;
  DISP_SPRT arrow_ds;
  
  uVar3 = (uint)alpha;
  if (menu_file_disp.sub_anim_step == '\x02') {
    uVar3 = (uint)menu_file_disp.rgb;
  }
  fVar4 = (float)off_x;
  PK2SendVram__FUiiii((uint)file_map_tex_addr,-1,-1,0);
  iVar1 = 1;
  pSVar2 = menu_file_tex + 0x46;
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&arrow_ds,pSVar2);
    iVar1 = iVar1 + -1;
    pSVar2 = pSVar2 + 1;
    arrow_ds.x = arrow_ds.x + fVar4;
    arrow_ds.y = arrow_ds.y + (float)off_y;
    arrow_ds.alpha = (uchar)((int)(arrow_ds.alpha * uVar3) >> 7);
    DispSprD__FP9DISP_SPRT(&arrow_ds);
  } while (-1 < iVar1);
  iVar1 = 1;
  pSVar2 = menu_file_tex + 0x44;
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&arrow_ds,pSVar2);
    iVar1 = iVar1 + -1;
    pSVar2 = pSVar2 + 1;
    arrow_ds.x = arrow_ds.x + fVar4;
    arrow_ds.y = arrow_ds.y + (float)off_y;
    arrow_ds.alpha = (uchar)((int)((uint)arrow_ds.alpha * (uint)alpha) >> 7);
    DispSprD__FP9DISP_SPRT(&arrow_ds);
  } while (-1 < iVar1);
  return;
}

static void MenuFileMapMsgWinDisp(int off_x, int off_y, u_char alpha) {
	int file_type;
	
  int file_type;
  int iVar1;
  
  file_type = menu_file_ctrl.tag_csr;
  DrawCmnWindow__FUiffffUcUc
            (0xa0,(float)(off_x + 0x18),(float)(off_y + 0x15a),592.0,100.0,alpha,'f');
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z13MENU_REF_CTRL_UiUi_PX01(file_type,5);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar1 = GetMenuFileDispFileID__Fii
                    (file_type,menu_file_ctrl.ref_ctrl.field0_0x0.m_aData[file_type].data_pos);
                    /* end of inlined section */
  PrintMsg__Fiiiiiii(msg_type_tbl[file_type],iVar1 * 3 + 1,off_x + 0x30,off_y + 0x172,1,(uint)alpha,
                     0xa0);
  return;
}

static void MenuFileCaptionDisp(int off_x, int off_y, u_char alpha) {
  DrawCmnCapGroup_W__FiiUcUi(0xb,0xb,alpha,0);
  return;
}

static void MenuFileMapNameDisp(int off_x, int off_y, u_char alpha) {
	int i;
	int file_type;
	int file_id;
	
  int file_type;
  int iVar1;
  uint uVar2;
  int col_label;
  uint uVar3;
  int y;
  
  file_type = menu_file_ctrl.tag_csr;
  uVar3 = 0;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z13MENU_REF_CTRL_UiUi_PX01(menu_file_ctrl.tag_csr,5);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar1 = GetMenuFileDispFileID__Fii
                    (file_type,menu_file_ctrl.ref_ctrl.field0_0x0.m_aData[file_type].data_pos);
                    /* end of inlined section */
  uVar2 = 2;
  y = off_y + 0x44;
  do {
    uVar3 = uVar3 + 1;
    col_label = 0xb;
    if (uVar2 == 0) {
      col_label = 10;
    }
    PrintMsg_Arrange__Fiiiiiiiiii
              (msg_type_tbl[file_type],iVar1 * 3,off_x + 0x141,y,col_label,(uint)alpha,0xa0,0,0,2);
    uVar2 = uVar3 ^ 2;
    y = y + -1;
  } while ((int)uVar3 < 3);
  return;
}

static void MenuFileNoReadFrameDisp(float x, float y, u_char alpha) {
	DISP_SPRT frame_ds;
	static int frame_tbl[2] = {
		/* [0] = */ 26,
		/* [1] = */ 27
	};
	int i;
	
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  float fVar5;
  DISP_SPRT frame_ds;
  
  piVar3 = &frame_tbl_1156;
  iVar4 = 0;
  iVar2 = 1;
  PK2SendVram__FUiiii((uint)file_cmn_tex_addr,-1,-1,0);
  iVar1 = frame_tbl_1156;
  while( true ) {
    piVar3 = piVar3 + 1;
    iVar2 = iVar2 + -1;
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&frame_ds,menu_file_tex + iVar1);
    fVar5 = (float)iVar4;
    iVar4 = iVar4 + 0x118;
    frame_ds.x = x + fVar5;
    frame_ds.alpha = (uchar)((int)((uint)frame_ds.alpha * (uint)alpha) >> 7);
    frame_ds.y = y;
    DispSprD__FP9DISP_SPRT(&frame_ds);
    if (iVar2 < 0) break;
    iVar1 = *piVar3;
  }
  return;
}

static void MenuFileBigArrowDisp(float x, float y, u_char alpha, u_char rgb, char flg) {
	DISP_SPRT arrow_ds;
	static int arrow_tbl[2] = {
		/* [0] = */ 45,
		/* [1] = */ 46
	};
	static int shadow_tbl[2] = {
		/* [0] = */ 47,
		/* [1] = */ 48
	};
	static int off_x_tbl[2] = {
		/* [0] = */ 4,
		/* [1] = */ 6
	};
	static int off_y_tbl[2] = {
		/* [0] = */ 5,
		/* [1] = */ 5
	};
	
  int iVar1;
  DISP_SPRT arrow_ds;
  
  iVar1 = flg * 4;
  PK2SendVram__FUiiii((uint)file_cmn_tex_addr,-1,-1,0);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT
            (&arrow_ds,menu_file_tex + *(int *)((int)&shadow_tbl_1161 + iVar1));
  arrow_ds.alpha = (uchar)((int)((uint)arrow_ds.alpha * (uint)alpha) >> 7);
  arrow_ds.x = x;
  arrow_ds.y = y;
  arrow_ds.r = rgb;
  arrow_ds.g = rgb;
  arrow_ds.b = rgb;
  DispSprD__FP9DISP_SPRT(&arrow_ds);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT
            (&arrow_ds,menu_file_tex + *(int *)((int)&arrow_tbl_1160 + iVar1));
  arrow_ds.x = x + (float)*(int *)((int)&off_x_tbl_1162 + iVar1);
  arrow_ds.y = y + (float)*(int *)((int)&off_y_tbl_1163 + iVar1);
  arrow_ds.alpha = (uchar)((int)((uint)arrow_ds.alpha * (uint)alpha) >> 7);
  DispSprD__FP9DISP_SPRT(&arrow_ds);
  return;
}

static void MenuFileSmallArrowDisp(float x, float y, u_char alpha, u_char rgb, char flg) {
	DISP_SPRT arrow_ds;
	int arrow_tbl[2];
	
  uint uVar1;
  ulong *puVar2;
  DISP_SPRT arrow_ds;
  int arrow_tbl [2];
  
  uVar1 = (int)arrow_tbl + 7U & 7;
  puVar2 = (ulong *)(((int)arrow_tbl + 7U) - uVar1);
  *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | (ulong)DAT_003f2d90 >> (7 - uVar1) * 8;
  arrow_tbl = DAT_003f2d90;
  PK2SendVram__FUiiii((uint)file_cmn_tex_addr,-1,-1,0);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&arrow_ds,menu_file_tex + arrow_tbl[flg]);
  arrow_ds.alpha = (uchar)((int)((uint)arrow_ds.alpha * (uint)alpha) >> 7);
  arrow_ds.x = x;
  arrow_ds.y = y;
  arrow_ds.r = rgb;
  arrow_ds.g = rgb;
  arrow_ds.b = rgb;
  DispSprD__FP9DISP_SPRT(&arrow_ds);
  return;
}

static void MenuFileSelFrameDisp(float x, float y, u_char alpha) {
	int i;
	DISP_SPRT ds;
	
  int iVar1;
  float fVar2;
  float fVar3;
  DISP_SPRT ds;
  
  PK2SendVram__FUiiii((uint)file_cmn_tex_addr,-1,-1,0);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ds,menu_file_tex + 0x17);
  ds.alpha = (uchar)((int)((uint)ds.alpha * (uint)alpha) >> 7);
  ds.x = x;
  ds.y = y;
  DispSprD__FP9DISP_SPRT(&ds);
  if ((int)ds.w < 0) {
    fVar2 = (float)(ds.w & 1 | ds.w >> 1);
    fVar2 = fVar2 + fVar2;
  }
  else {
    fVar2 = (float)ds.w;
  }
  fVar2 = x + fVar2;
  iVar1 = 0x11;
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ds,menu_file_tex + 0x18);
    ds.alpha = (uchar)((int)((uint)ds.alpha * (uint)alpha) >> 7);
    ds.x = fVar2;
    ds.y = y;
    DispSprD__FP9DISP_SPRT(&ds);
    if ((int)ds.w < 0) {
      fVar3 = (float)(ds.w & 1 | ds.w >> 1);
      fVar3 = fVar3 + fVar3;
    }
    else {
      fVar3 = (float)ds.w;
    }
    iVar1 = iVar1 + -1;
    fVar2 = fVar2 + fVar3;
  } while (-1 < iVar1);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ds,menu_file_tex + 0x19);
  ds.alpha = (uchar)((int)((uint)ds.alpha * (uint)alpha) >> 7);
  ds.x = fVar2;
  ds.y = y;
  DispSprD__FP9DISP_SPRT(&ds);
  return;
}

static void MenuFileNonSelFrameDisp(float x, float y, u_char alpha) {
	int i;
	DISP_SPRT ds;
	
  int iVar1;
  float fVar2;
  float fVar3;
  DISP_SPRT ds;
  
  PK2SendVram__FUiiii((uint)file_cmn_tex_addr,-1,-1,0);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ds,menu_file_tex + 0x13);
  ds.alpha = (uchar)((int)((uint)ds.alpha * (uint)alpha) >> 7);
  ds.x = x;
  ds.y = y;
  DispSprD__FP9DISP_SPRT(&ds);
  if ((int)ds.w < 0) {
    fVar2 = (float)(ds.w & 1 | ds.w >> 1);
    fVar2 = fVar2 + fVar2;
  }
  else {
    fVar2 = (float)ds.w;
  }
  fVar2 = x + fVar2;
  iVar1 = 0x13;
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ds,menu_file_tex + 0x14);
    ds.alpha = (uchar)((int)((uint)ds.alpha * (uint)alpha) >> 7);
    ds.x = fVar2;
    ds.y = y;
    DispSprD__FP9DISP_SPRT(&ds);
    if ((int)ds.w < 0) {
      fVar3 = (float)(ds.w & 1 | ds.w >> 1);
      fVar3 = fVar3 + fVar3;
    }
    else {
      fVar3 = (float)ds.w;
    }
    iVar1 = iVar1 + -1;
    fVar2 = fVar2 + fVar3;
  } while (-1 < iVar1);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ds,menu_file_tex + 0x15);
  ds.alpha = (uchar)((int)((uint)ds.alpha * (uint)alpha) >> 7);
  ds.x = fVar2;
  ds.y = y;
  DispSprD__FP9DISP_SPRT(&ds);
  if ((int)ds.w < 0) {
    fVar3 = (float)(ds.w & 1 | ds.w >> 1);
    fVar3 = fVar3 + fVar3;
  }
  else {
    fVar3 = (float)ds.w;
  }
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ds,menu_file_tex + 0x16);
  ds.alpha = (uchar)((int)((uint)ds.alpha * (uint)alpha) >> 7);
  ds.x = fVar2 + fVar3;
  ds.y = y;
  DispSprD__FP9DISP_SPRT(&ds);
  return;
}

int* int * _fixed_array_verifyrange<int>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

MENU_REF_CTRL* MENU_REF_CTRL * _fixed_array_verifyrange<MENU_REF_CTRL>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

MENU_FILE_DATA* MENU_FILE_DATA * _fixed_array_verifyrange<MENU_FILE_DATA>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  return;
}

type_info& MENU_REF_CTRL type_info function() {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

type_info& MENU_FILE_DATA type_info function() {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

static void global constructors keyed to MenuFileTexBackGroundLoad() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
