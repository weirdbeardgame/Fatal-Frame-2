// STATUS: NOT STARTED

#include "soul_list.h"

typedef struct {
	char state;
	int max_score;
} PLYR_SOUL_LIST;

struct fixed_array_base<PLYR_SOUL_LIST,176,PLYR_SOUL_LIST[176]> {
protected:
	PLYR_SOUL_LIST m_aData[176];
	
public:
	fixed_array_base<PLYR_SOUL_LIST,176,PLYR_SOUL_LIST[176]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	PLYR_SOUL_LIST& operator[]();
	PLYR_SOUL_LIST& operator[]();
	PLYR_SOUL_LIST* data();
	PLYR_SOUL_LIST* begin();
	PLYR_SOUL_LIST* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<PLYR_SOUL_LIST,176> : fixed_array_base<PLYR_SOUL_LIST,176,PLYR_SOUL_LIST[176]> {
};

static fixed_array<PLYR_SOUL_LIST,176> plyr_soul_list;
unsigned char PLYR_SOUL_LIST type_info node[8];
unsigned char CVariable<char, 0, 9> type_info node[8];
unsigned char CVariable<char, 0, 3> type_info node[8];

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3c77b8;
	
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf14PLYR_SOUL_LIST(0x3f4488,_max);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf14PLYR_SOUL_LIST(0x3f4490,_max);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf14PLYR_SOUL_LIST(0x3c7800,_max);
  }
  return (uint **)0x0;
}

void PlyrSoulListInit() {
	int i;
	
  int iVar1;
  int iVar2;
  fixed_array<PLYR_SOUL_LIST,176> *pfVar3;
  
  pfVar3 = &plyr_soul_list;
  iVar1 = 0;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z14PLYR_SOUL_LIST_UiUi_PX01(iVar1,0xb0);
    ((fixed_array_base<PLYR_SOUL_LIST,176,PLYR_SOUL_LIST[176]> *)&((PLYR_SOUL_LIST *)pfVar3)->state)
    ->m_aData[0].state = '\0';
                    /* end of inlined section */
    iVar2 = iVar1 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z14PLYR_SOUL_LIST_UiUi_PX01(iVar1,0xb0);
    ((PLYR_SOUL_LIST *)pfVar3)->max_score = 0;
                    /* end of inlined section */
    pfVar3 = (fixed_array<PLYR_SOUL_LIST,176> *)((int)pfVar3 + 8);
    iVar1 = iVar2;
  } while (iVar2 < 0xb0);
  MenuSoulListCompFlgInit__Fv();
  return;
}

int GetSoulList(int ghost_list_label, int get_score) {
	static char __FUNCTION__[12] = {
		/* [0] = */ 71,
		/* [1] = */ 101,
		/* [2] = */ 116,
		/* [3] = */ 83,
		/* [4] = */ 111,
		/* [5] = */ 117,
		/* [6] = */ 108,
		/* [7] = */ 76,
		/* [8] = */ 105,
		/* [9] = */ 115,
		/* [10] = */ 116,
		/* [11] = */ 0
	};
	
  char cVar1;
  int iVar2;
  int iVar3;
  
  if ((uint)ghost_list_label < 0xb0) {
    if (get_score < 0) {
      SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
      PrintAssertReal("Error! GetSoulList get_score %d");
    }
    cVar1 = GetPlyrSoulListState__Fi(ghost_list_label);
    if (cVar1 == '\0') {
      SetPlyrSoulListState__Fic(ghost_list_label,'\x01');
      SetPlyrSoulListMaxScore__Fii(ghost_list_label,get_score);
    }
    else {
      SetPlyrSoulListMaxScore__Fii(ghost_list_label,get_score);
    }
    iVar2 = GetSoulListAccomplishmentRate__Fv();
    iVar3 = 1;
    if (iVar2 == 100) {
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
      clear_flg_ctrl.comp_soul_list_flg = '\x01';
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
      m_plyr_camera.camera_power_up.mTemperedRenzFlg.flag_32[0] =
           (int  [1])((uint)m_plyr_camera.camera_power_up.mTemperedRenzFlg.flag_32[0] | 0x200);
                    /* end of inlined section */
      FileGet__Fii(1,0x1e);
      iVar3 = 1;
    }
  }
  else {
    printf("Not Found! Soul List Data! ghost list label[%d]\n");
    iVar3 = 0;
  }
  return iVar3;
}

void ReadSoulList(int ghost_list_label) {
	static char __FUNCTION__[13] = {
		/* [0] = */ 82,
		/* [1] = */ 101,
		/* [2] = */ 97,
		/* [3] = */ 100,
		/* [4] = */ 83,
		/* [5] = */ 111,
		/* [6] = */ 117,
		/* [7] = */ 108,
		/* [8] = */ 76,
		/* [9] = */ 105,
		/* [10] = */ 115,
		/* [11] = */ 116,
		/* [12] = */ 0
	};
	
  char cVar1;
  
  if (0xaf < (uint)ghost_list_label) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! ReadSoulList ghost_list_label %d");
  }
  cVar1 = GetPlyrSoulListState__Fi(ghost_list_label);
  if (cVar1 != '\x01') {
    if (cVar1 < '\x02') {
      if (cVar1 == '\0') {
        printf("<<<<<<<<<WARNING FILE[%s] LINE[%d]>>>>>>>>>>\n");
        PrintWarningReal("Warning! ReadSoulList No Have List %d");
        return;
      }
    }
    else if (cVar1 == '\x02') {
      return;
    }
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! ReadSoulList");
    return;
  }
  SetPlyrSoulListState__Fic(ghost_list_label,'\x02');
  return;
}

char GetPlyrSoulListState(int ghost_list_label) {
	static char __FUNCTION__[21] = {
		/* [0] = */ 71,
		/* [1] = */ 101,
		/* [2] = */ 116,
		/* [3] = */ 80,
		/* [4] = */ 108,
		/* [5] = */ 121,
		/* [6] = */ 114,
		/* [7] = */ 83,
		/* [8] = */ 111,
		/* [9] = */ 117,
		/* [10] = */ 108,
		/* [11] = */ 76,
		/* [12] = */ 105,
		/* [13] = */ 115,
		/* [14] = */ 116,
		/* [15] = */ 83,
		/* [16] = */ 116,
		/* [17] = */ 97,
		/* [18] = */ 116,
		/* [19] = */ 101,
		/* [20] = */ 0
	};
	
  if (0xaf < (uint)ghost_list_label) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! GetPlyrSoulListState ghost_list_label %d");
  }
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z14PLYR_SOUL_LIST_UiUi_PX01(ghost_list_label,0xb0);
  return plyr_soul_list.field0_0x0.m_aData[ghost_list_label].state;
}

int GetPlyrSoulListMaxScore(int ghost_list_label) {
	static char __FUNCTION__[24] = {
		/* [0] = */ 71,
		/* [1] = */ 101,
		/* [2] = */ 116,
		/* [3] = */ 80,
		/* [4] = */ 108,
		/* [5] = */ 121,
		/* [6] = */ 114,
		/* [7] = */ 83,
		/* [8] = */ 111,
		/* [9] = */ 117,
		/* [10] = */ 108,
		/* [11] = */ 76,
		/* [12] = */ 105,
		/* [13] = */ 115,
		/* [14] = */ 116,
		/* [15] = */ 77,
		/* [16] = */ 97,
		/* [17] = */ 120,
		/* [18] = */ 83,
		/* [19] = */ 99,
		/* [20] = */ 111,
		/* [21] = */ 114,
		/* [22] = */ 101,
		/* [23] = */ 0
	};
	
  if (0xaf < (uint)ghost_list_label) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! GetPlyrSoulListMaxScore ghost_list_label %d");
  }
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z14PLYR_SOUL_LIST_UiUi_PX01(ghost_list_label,0xb0);
  return plyr_soul_list.field0_0x0.m_aData[ghost_list_label].max_score;
}

int GetPlyrHaveSoulListNum() {
  int iVar1;
  int iVar2;
  
  iVar1 = GetPlyrHaveBaseSoulListNum__Fv();
  iVar2 = GetPlyrHaveEnhancingSoulListNum__Fv();
  return iVar1 + iVar2;
}

int GetPlyrHaveBaseSoulListNum() {
	int i;
	int have_num;
	
  char cVar1;
  int ghost_list_label;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  ghost_list_label = 0;
  do {
    iVar2 = ghost_list_label + 1;
    cVar1 = GetPlyrSoulListState__Fi(ghost_list_label);
    if (cVar1 != '\0') {
      iVar3 = iVar3 + 1;
    }
    ghost_list_label = iVar2;
  } while (iVar2 < 0x98);
  return iVar3;
}

int GetPlyrHaveEnhancingSoulListNum() {
	int i;
	int have_num;
	
  char cVar1;
  int ghost_list_label;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  ghost_list_label = 0x98;
  do {
    iVar2 = ghost_list_label + 1;
    cVar1 = GetPlyrSoulListState__Fi(ghost_list_label);
    if (cVar1 != '\0') {
      iVar3 = iVar3 + 1;
    }
    ghost_list_label = iVar2;
  } while (iVar2 < 0xb0);
  return iVar3;
}

void GetSoulListOrderScore(int *order, int get_num) {
	int i;
	int j;
	int k;
	int score[176];
	
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int score [176];
  
  piVar6 = score;
  piVar2 = order;
  iVar3 = get_num;
  if (0 < get_num) {
    do {
      iVar3 = iVar3 + -1;
      *piVar2 = 0;
      piVar2 = piVar2 + 1;
    } while (iVar3 != 0);
  }
  iVar3 = 0;
  do {
    iVar4 = iVar3 + 1;
    iVar3 = GetPlyrSoulListMaxScore__Fi(iVar3);
    *piVar6 = iVar3;
    piVar6 = piVar6 + 1;
    iVar3 = iVar4;
  } while (iVar4 < 0xb0);
  iVar3 = 0xaf;
  do {
    iVar4 = -1;
    iVar5 = 1;
    piVar2 = score;
    if (0 < iVar3) {
      do {
        iVar1 = *piVar2;
        if (piVar2[1] < iVar1) {
          *piVar2 = piVar2[1];
          iVar4 = iVar5 + -1;
          piVar2[1] = iVar1;
        }
        iVar5 = iVar5 + 1;
        piVar2 = piVar2 + 1;
      } while (iVar5 <= iVar3);
    }
    iVar3 = iVar4;
  } while (-1 < iVar3);
  iVar4 = 0xaf;
  piVar2 = score + 0xaf;
  iVar3 = 700;
  *order = score[175];
  do {
    iVar5 = 0;
    if ((0 < get_num) && (*order != *piVar2)) {
      iVar5 = 1;
      piVar6 = order;
      while ((piVar6 = piVar6 + 1, iVar5 < get_num && (*piVar6 != *(int *)((int)score + iVar3)))) {
        iVar5 = iVar5 + 1;
      }
    }
    if ((iVar5 == get_num) && (0 < get_num)) {
      if (*order < *piVar2) {
        *order = *piVar2;
      }
      else {
        for (iVar5 = 1; iVar5 < get_num; iVar5 = iVar5 + 1) {
          if (order[iVar5] < *piVar2) {
            order[iVar5] = *piVar2;
            break;
          }
        }
      }
    }
    iVar4 = iVar4 + -1;
    piVar2 = piVar2 + -1;
    iVar3 = iVar3 + -4;
    if (iVar4 < 0) {
      return;
    }
  } while( true );
}

int GetSoulListAccomplishmentRate() {
	static char __FUNCTION__[30] = {
		/* [0] = */ 71,
		/* [1] = */ 101,
		/* [2] = */ 116,
		/* [3] = */ 83,
		/* [4] = */ 111,
		/* [5] = */ 117,
		/* [6] = */ 108,
		/* [7] = */ 76,
		/* [8] = */ 105,
		/* [9] = */ 115,
		/* [10] = */ 116,
		/* [11] = */ 65,
		/* [12] = */ 99,
		/* [13] = */ 99,
		/* [14] = */ 111,
		/* [15] = */ 109,
		/* [16] = */ 112,
		/* [17] = */ 108,
		/* [18] = */ 105,
		/* [19] = */ 115,
		/* [20] = */ 104,
		/* [21] = */ 109,
		/* [22] = */ 101,
		/* [23] = */ 110,
		/* [24] = */ 116,
		/* [25] = */ 82,
		/* [26] = */ 97,
		/* [27] = */ 116,
		/* [28] = */ 101,
		/* [29] = */ 0
	};
	int rate;
	
  int iVar1;
  
  iVar1 = GetPlyrHaveSoulListNum__Fv();
  iVar1 = (iVar1 * 100) / 0xb0;
  if (iVar1 < 0x65) {
    if (iVar1 < 0) {
      SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
      iVar1 = 0;
      PrintAssertReal("Error! GetSoulListAccomplishmentRate rate %d");
    }
  }
  else {
    iVar1 = 100;
  }
  if (iVar1 == 100) {
    clear_flg_ctrl.comp_soul_list_flg = '\x01';
  }
  return iVar1;
}

int CheckEnhancingSoulListCondition() {
  int iVar1;
  
  iVar1 = GetSoulListAccomplishmentRate__Fv();
  return iVar1 < 0x5a ^ 1;
}

static void SetPlyrSoulListState(int ghost_list_label, char set_state) {
	static char __FUNCTION__[21] = {
		/* [0] = */ 83,
		/* [1] = */ 101,
		/* [2] = */ 116,
		/* [3] = */ 80,
		/* [4] = */ 108,
		/* [5] = */ 121,
		/* [6] = */ 114,
		/* [7] = */ 83,
		/* [8] = */ 111,
		/* [9] = */ 117,
		/* [10] = */ 108,
		/* [11] = */ 76,
		/* [12] = */ 105,
		/* [13] = */ 115,
		/* [14] = */ 116,
		/* [15] = */ 83,
		/* [16] = */ 116,
		/* [17] = */ 97,
		/* [18] = */ 116,
		/* [19] = */ 101,
		/* [20] = */ 0
	};
	
  if (0xaf < (uint)ghost_list_label) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! SetPlyrSoulListState ghost_list_label %d");
  }
  if (2 < (byte)set_state) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! SetPlyrSoulListState set_state %d");
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  }
  _fixed_array_verifyrange__H1Z14PLYR_SOUL_LIST_UiUi_PX01(ghost_list_label,0xb0);
  plyr_soul_list.field0_0x0.m_aData[ghost_list_label].state = set_state;
  return;
}

static void SetPlyrSoulListMaxScore(int ghost_list_label, int set_score) {
	static char __FUNCTION__[24] = {
		/* [0] = */ 83,
		/* [1] = */ 101,
		/* [2] = */ 116,
		/* [3] = */ 80,
		/* [4] = */ 108,
		/* [5] = */ 121,
		/* [6] = */ 114,
		/* [7] = */ 83,
		/* [8] = */ 111,
		/* [9] = */ 117,
		/* [10] = */ 108,
		/* [11] = */ 76,
		/* [12] = */ 105,
		/* [13] = */ 115,
		/* [14] = */ 116,
		/* [15] = */ 77,
		/* [16] = */ 97,
		/* [17] = */ 120,
		/* [18] = */ 83,
		/* [19] = */ 99,
		/* [20] = */ 111,
		/* [21] = */ 114,
		/* [22] = */ 101,
		/* [23] = */ 0
	};
	
  int iVar1;
  
  if (99999 < set_score) {
    set_score = 99999;
  }
  if (0xaf < (uint)ghost_list_label) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! SetPlyrSoulListMaxScore ghost_list_label %d");
  }
  if (set_score < 0) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! SetPlyrSoulListMaxScore set_score %d");
  }
  iVar1 = GetPlyrSoulListMaxScore__Fi(ghost_list_label);
                    /* end of inlined section */
  if (iVar1 < set_score) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z14PLYR_SOUL_LIST_UiUi_PX01(ghost_list_label,0xb0);
    plyr_soul_list.field0_0x0.m_aData[ghost_list_label].max_score = set_score;
  }
  return;
}

void SetSave_PlyrSoulList(MC_SAVE_DATA *data) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z14PLYR_SOUL_LIST_UiUi_PX01(0,0xb0);
                    /* end of inlined section */
  data->size = 0x580;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  data->addr = (uchar *)&plyr_soul_list;
  return;
}

void DebugGetAllSoulList() {
	int i;
	
  int iVar1;
  int iVar2;
  fixed_array<PLYR_SOUL_LIST,176> *pfVar3;
  
  pfVar3 = &plyr_soul_list;
  iVar1 = 0;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
    iVar2 = iVar1 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z14PLYR_SOUL_LIST_UiUi_PX01(iVar1,0xb0);
    ((fixed_array_base<PLYR_SOUL_LIST,176,PLYR_SOUL_LIST[176]> *)&((PLYR_SOUL_LIST *)pfVar3)->state)
    ->m_aData[0].state = '\x01';
                    /* end of inlined section */
    pfVar3 = (fixed_array<PLYR_SOUL_LIST,176> *)((int)pfVar3 + 8);
    iVar1 = iVar2;
  } while (iVar2 < 0xb0);
  return;
}

PLYR_SOUL_LIST* PLYR_SOUL_LIST * _fixed_array_verifyrange<PLYR_SOUL_LIST>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  return;
}

type_info& PLYR_SOUL_LIST type_info function() {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

static void global constructors keyed to PlyrSoulListInit() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
