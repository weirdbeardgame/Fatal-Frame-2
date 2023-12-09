// STATUS: NOT STARTED

#include "clear_flg.h"

CLEAR_FLG_CTRL clear_flg_ctrl = {
	/* .clear_cnt = */ {
		/* base class 0 = */ {
			/* .m_aData = */ {
				/* [0] = */ 0,
				/* [1] = */ 0,
				/* [2] = */ 0,
				/* [3] = */ 0
			}
		}
	},
	/* .clear_flg = */ 0,
	/* .comp_soul_list_flg = */ 0,
	/* .accessory_flg = */ {
		/* .flag_32 = */ {
			/* [0] = */ 0
		}
	},
	/* .ending_movie_flg = */ {
		/* .flag_32 = */ {
			/* [0] = */ 0
		}
	},
	/* .costume_flg = */ {
		/* .flag_32 = */ {
			/* [0] = */ 0
		}
	},
	/* .difficulty_flg = */ {
		/* .flag_32 = */ {
			/* [0] = */ 0
		}
	}
};

unsigned char CVariable<char, 0, 9> type_info node[8];
unsigned char CVariable<char, 0, 3> type_info node[8];

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3a32d0;
	
  g3ddbgAssert__FbPCce(false,str_688);
  return (char *)v;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_verifyrange__H1Zc_UiUi_PX01(0x3ef790,_max);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_verifyrange__H1Zc_UiUi_PX01(0x3ef798,_max);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_verifyrange__H1Zc_UiUi_PX01(0x3a3318,_max);
  }
  return (uint **)0x0;
}

void ClearFlgCtrlInit() {
	int i;
	
  char *pcVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zc_UiUi_PX01(iVar2,4);
    pcVar1 = clear_flg_ctrl.clear_cnt.field0_0x0.m_aData + iVar2;
                    /* end of inlined section */
    iVar2 = iVar2 + 1;
    *pcVar1 = '\0';
  } while (iVar2 < 4);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  clear_flg_ctrl.costume_flg.flag_32[0] = (int  [1])1;
  clear_flg_ctrl.difficulty_flg.flag_32[0] = (int  [1])3;
                    /* end of inlined section */
  clear_flg_ctrl.clear_flg = '\0';
  clear_flg_ctrl.comp_soul_list_flg = '\0';
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  clear_flg_ctrl.ending_movie_flg.flag_32[0] = (int  [1])0;
  clear_flg_ctrl.accessory_flg.flag_32[0] = (int  [1])1;
  return;
}

CLEAR_FLG_CTRL ClearFlgMerging(CLEAR_FLG_CTRL buff1, CLEAR_FLG_CTRL buff2) {
	int i;
	CLEAR_FLG_CTRL result_flg;
	int idx;
	int bit;
	BIT_FLAGS<3> *this;
	int bit;
	int idx;
	int bit;
	BIT_FLAGS<2> *this;
	BIT_FLAGS<2> *this;
	int bit;
	int idx;
	int bit;
	BIT_FLAGS<9> *this;
	BIT_FLAGS<9> *this;
	int bit;
	int idx;
	int bit;
	BIT_FLAGS<4> *this;
	BIT_FLAGS<4> *this;
	int bit;
	
  undefined *puVar1;
  ulong *puVar2;
  bool bVar3;
  ulong in_v0;
  char cVar4;
  ulong in_v1;
  ulong uVar5;
  ulong uVar6;
  ulong in_a3;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  CLEAR_FLG_CTRL *__s;
  undefined local_d0 [8];
  undefined local_c8 [8];
  undefined local_c0 [16];
  undefined local_b0 [8];
  undefined local_a8 [8];
  undefined local_a0 [16];
  CLEAR_FLG_CTRL result_flg;
  CLEAR_FLG_CTRL *local_70;
  undefined *local_6c;
  undefined *local_68;
  undefined *local_64;
  undefined *local_60;
  
  iVar9 = 0;
  uVar10 = (uint)&buff1->field_0x7 & 7;
  uVar11 = (uint)buff1 & 7;
  local_d0 = (undefined  [8])
             ((*(long *)(&buff1->field_0x7 + -uVar10) << (7 - uVar10) * 8 |
              in_v0 & 0xffffffffffffffffU >> (uVar10 + 1) * 8) & -1L << (8 - uVar11) * 8 |
             *(ulong *)((int)buff1 - uVar11) >> uVar11 * 8);
  puVar1 = (undefined *)((int)(buff1->ending_movie_flg).flag_32 + 3);
  uVar10 = (uint)puVar1 & 7;
  uVar11 = (uint)&buff1->accessory_flg & 7;
  uVar5 = (*(long *)(puVar1 + -uVar10) << (7 - uVar10) * 8 |
          in_v1 & 0xffffffffffffffffU >> (uVar10 + 1) * 8) & -1L << (8 - uVar11) * 8 |
          *(ulong *)((int)&buff1->accessory_flg - uVar11) >> uVar11 * 8;
  puVar1 = (undefined *)((int)(buff1->difficulty_flg).flag_32 + 3);
  uVar10 = (uint)puVar1 & 7;
  uVar11 = (uint)&buff1->costume_flg & 7;
  uVar7 = (*(long *)(puVar1 + -uVar10) << (7 - uVar10) * 8 |
          in_a3 & 0xffffffffffffffffU >> (uVar10 + 1) * 8) & -1L << (8 - uVar11) * 8 |
          *(ulong *)((int)&buff1->costume_flg - uVar11) >> uVar11 * 8;
  puVar1 = local_d0 + 7;
  uVar10 = (uint)puVar1 & 7;
  *(ulong *)(puVar1 + -uVar10) =
       *(ulong *)(puVar1 + -uVar10) & -1L << (uVar10 + 1) * 8 | (ulong)local_d0 >> (7 - uVar10) * 8;
  puVar1 = local_c8 + 7;
  uVar10 = (uint)puVar1 & 7;
  *(ulong *)(puVar1 + -uVar10) =
       *(ulong *)(puVar1 + -uVar10) & -1L << (uVar10 + 1) * 8 | uVar5 >> (7 - uVar10) * 8;
  puVar1 = local_c0 + 7;
  uVar10 = (uint)puVar1 & 7;
  *(ulong *)(puVar1 + -uVar10) =
       *(ulong *)(puVar1 + -uVar10) & -1L << (uVar10 + 1) * 8 | uVar7 >> (7 - uVar10) * 8;
  uVar10 = (uint)&buff2->field_0x7 & 7;
  uVar11 = (uint)buff2 & 7;
  local_b0 = (undefined  [8])
             ((*(long *)(&buff2->field_0x7 + -uVar10) << (7 - uVar10) * 8 |
              (ulong)local_d0 & 0xffffffffffffffffU >> (uVar10 + 1) * 8) & -1L << (8 - uVar11) * 8 |
             *(ulong *)((int)buff2 - uVar11) >> uVar11 * 8);
  puVar1 = (undefined *)((int)(buff2->ending_movie_flg).flag_32 + 3);
  uVar10 = (uint)puVar1 & 7;
  uVar11 = (uint)&buff2->accessory_flg & 7;
  uVar6 = (*(long *)(puVar1 + -uVar10) << (7 - uVar10) * 8 |
          uVar5 & 0xffffffffffffffffU >> (uVar10 + 1) * 8) & -1L << (8 - uVar11) * 8 |
          *(ulong *)((int)&buff2->accessory_flg - uVar11) >> uVar11 * 8;
  puVar1 = (undefined *)((int)(buff2->difficulty_flg).flag_32 + 3);
  uVar10 = (uint)puVar1 & 7;
  uVar11 = (uint)&buff2->costume_flg & 7;
  uVar8 = (*(long *)(puVar1 + -uVar10) << (7 - uVar10) * 8 |
          uVar7 & 0xffffffffffffffffU >> (uVar10 + 1) * 8) & -1L << (8 - uVar11) * 8 |
          *(ulong *)((int)&buff2->costume_flg - uVar11) >> uVar11 * 8;
  puVar1 = local_b0 + 7;
  uVar10 = (uint)puVar1 & 7;
  *(ulong *)(puVar1 + -uVar10) =
       *(ulong *)(puVar1 + -uVar10) & -1L << (uVar10 + 1) * 8 | (ulong)local_b0 >> (7 - uVar10) * 8;
  puVar1 = local_a8 + 7;
  uVar10 = (uint)puVar1 & 7;
  *(ulong *)(puVar1 + -uVar10) =
       *(ulong *)(puVar1 + -uVar10) & -1L << (uVar10 + 1) * 8 | uVar6 >> (7 - uVar10) * 8;
  puVar1 = local_a0 + 7;
  uVar10 = (uint)puVar1 & 7;
  *(ulong *)(puVar1 + -uVar10) =
       *(ulong *)(puVar1 + -uVar10) & -1L << (uVar10 + 1) * 8 | uVar8 >> (7 - uVar10) * 8;
  __s = &result_flg;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  result_flg.accessory_flg.flag_32[0] = (int  [1])0;
  result_flg.ending_movie_flg.flag_32[0] = (int  [1])0;
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  result_flg.costume_flg.flag_32[0] = (int  [1])0;
                    /* end of inlined section */
  result_flg.difficulty_flg.flag_32[0] = (int  [1])0;
  local_c8 = (undefined  [8])uVar5;
  local_c0._0_8_ = uVar7;
  local_a8 = (undefined  [8])uVar6;
  local_a0._0_8_ = uVar8;
  memset(__s,0,0x18);
  local_70 = __return_storage_ptr__;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zc_UiUi_PX01(iVar9,4);
    _fixed_array_verifyrange__H1Zc_UiUi_PX01(iVar9,4);
    if ((char)local_b0[iVar9] < (char)local_d0[iVar9]) {
      _fixed_array_verifyrange__H1Zc_UiUi_PX01(iVar9,4);
      _fixed_array_verifyrange__H1Zc_UiUi_PX01(iVar9);
      cVar4 = local_d0[iVar9];
    }
    else {
      _fixed_array_verifyrange__H1Zc_UiUi_PX01(iVar9,4);
      _fixed_array_verifyrange__H1Zc_UiUi_PX01(iVar9);
      cVar4 = local_b0[iVar9];
    }
    (__s->clear_cnt).field0_0x0.m_aData[0] = cVar4;
                    /* end of inlined section */
    iVar9 = iVar9 + 1;
    __s = (CLEAR_FLG_CTRL *)((__s->clear_cnt).field0_0x0.m_aData + 1);
  } while (iVar9 < 4);
  if ((local_d0[4] == '\x01') || (local_b0[4] == '\x01')) {
    result_flg.clear_flg = '\x01';
  }
  if ((local_d0[5] == '\x01') || (local_b0[5] == '\x01')) {
    result_flg.comp_soul_list_flg = '\x01';
  }
  local_6c = local_c8;
  uVar10 = 0;
  bVar3 = true;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    iVar9 = ((int)uVar10 >> 5) * 4;
    if (!bVar3) {
      SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
      PrintAssertReal("IsUp Illegal Access %d MAX %d");
    }
    uVar11 = 1 << (uVar10 & 0x1f);
    if ((*(uint *)(local_6c + iVar9) & uVar11) == 0) {
      if (!bVar3) {
        SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
        PrintAssertReal("IsUp Illegal Access %d MAX %d");
      }
      if ((*(uint *)(local_a8 + iVar9) & uVar11) != 0) goto LAB_0012f138;
    }
    else {
LAB_0012f138:
      if (!bVar3) {
        SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
        PrintAssertReal("FlgUp Illegal Access %d MAX %d");
      }
      (&result_flg.accessory_flg)[(int)uVar10 >> 5].flag_32[0] =
           (&result_flg.accessory_flg)[(int)uVar10 >> 5].flag_32[0] | 1 << (uVar10 & 0x1f);
    }
                    /* end of inlined section */
    uVar10 = uVar10 + 1;
    bVar3 = (int)uVar10 < 3;
  } while (bVar3);
  local_68 = local_c8 + 4;
  uVar10 = 0;
  bVar3 = true;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    iVar9 = ((int)uVar10 >> 5) * 4;
    if (!bVar3) {
      SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
      PrintAssertReal("IsUp Illegal Access %d MAX %d");
    }
    uVar11 = 1 << (uVar10 & 0x1f);
    if ((*(uint *)(local_68 + iVar9) & uVar11) == 0) {
      if (!bVar3) {
        SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
        PrintAssertReal("IsUp Illegal Access %d MAX %d");
      }
      if ((*(uint *)(local_a8 + iVar9 + 4) & uVar11) != 0) goto LAB_0012f250;
    }
    else {
LAB_0012f250:
      if (!bVar3) {
        SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
        PrintAssertReal("FlgUp Illegal Access %d MAX %d");
      }
      (&result_flg.ending_movie_flg)[(int)uVar10 >> 5].flag_32[0] =
           (&result_flg.ending_movie_flg)[(int)uVar10 >> 5].flag_32[0] | 1 << (uVar10 & 0x1f);
    }
                    /* end of inlined section */
    uVar10 = uVar10 + 1;
    bVar3 = (int)uVar10 < 2;
  } while (bVar3);
  local_64 = local_c0;
  uVar10 = 0;
  bVar3 = true;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    iVar9 = ((int)uVar10 >> 5) * 4;
    if (!bVar3) {
      SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
      PrintAssertReal("IsUp Illegal Access %d MAX %d");
    }
    uVar11 = 1 << (uVar10 & 0x1f);
    if ((*(uint *)(local_64 + iVar9) & uVar11) == 0) {
      if (!bVar3) {
        SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
        PrintAssertReal("IsUp Illegal Access %d MAX %d");
      }
      if ((*(uint *)(local_a0 + iVar9) & uVar11) != 0) goto LAB_0012f368;
    }
    else {
LAB_0012f368:
      if (!bVar3) {
        SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
        PrintAssertReal("FlgUp Illegal Access %d MAX %d");
      }
      (&result_flg.costume_flg)[(int)uVar10 >> 5].flag_32[0] =
           (&result_flg.costume_flg)[(int)uVar10 >> 5].flag_32[0] | 1 << (uVar10 & 0x1f);
    }
                    /* end of inlined section */
    uVar10 = uVar10 + 1;
    bVar3 = (int)uVar10 < 9;
  } while (bVar3);
  local_60 = local_c0 + 4;
  uVar10 = 0;
  bVar3 = true;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    iVar9 = ((int)uVar10 >> 5) * 4;
    if (!bVar3) {
      SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
      PrintAssertReal("IsUp Illegal Access %d MAX %d");
    }
    uVar11 = 1 << (uVar10 & 0x1f);
    if ((*(uint *)(local_60 + iVar9) & uVar11) == 0) {
      if (!bVar3) {
        SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
        PrintAssertReal("IsUp Illegal Access %d MAX %d");
      }
      if ((*(uint *)(local_a0 + iVar9 + 4) & uVar11) != 0) goto LAB_0012f480;
    }
    else {
LAB_0012f480:
      if (!bVar3) {
        SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
        PrintAssertReal("FlgUp Illegal Access %d MAX %d");
      }
      (&result_flg.difficulty_flg)[(int)uVar10 >> 5].flag_32[0] =
           (&result_flg.difficulty_flg)[(int)uVar10 >> 5].flag_32[0] | 1 << (uVar10 & 0x1f);
    }
                    /* end of inlined section */
    uVar10 = uVar10 + 1;
    bVar3 = (int)uVar10 < 4;
    if (!bVar3) {
      uVar5 = CONCAT26(result_flg._6_2_,
                       CONCAT15(result_flg.comp_soul_list_flg,
                                CONCAT14(result_flg.clear_flg,
                                         result_flg.clear_cnt.field0_0x0.m_aData)));
      uVar10 = (uint)&local_70->field_0x7 & 7;
      puVar2 = (ulong *)(&local_70->field_0x7 + -uVar10);
      *puVar2 = *puVar2 & -1L << (uVar10 + 1) * 8 | uVar5 >> (7 - uVar10) * 8;
      uVar10 = (uint)local_70 & 7;
      *(ulong *)((int)local_70 - uVar10) =
           uVar5 << uVar10 * 8 |
           *(ulong *)((int)local_70 - uVar10) & 0xffffffffffffffffU >> (8 - uVar10) * 8;
      puVar1 = (undefined *)((int)(local_70->ending_movie_flg).flag_32 + 3);
      uVar10 = (uint)puVar1 & 7;
      puVar2 = (ulong *)(puVar1 + -uVar10);
      *puVar2 = *puVar2 & -1L << (uVar10 + 1) * 8 |
                CONCAT44(result_flg.ending_movie_flg.flag_32[0],result_flg.accessory_flg.flag_32[0])
                >> (7 - uVar10) * 8;
      uVar10 = (uint)&local_70->accessory_flg & 7;
      puVar2 = (ulong *)((int)&local_70->accessory_flg - uVar10);
      *puVar2 = CONCAT44(result_flg.ending_movie_flg.flag_32[0],result_flg.accessory_flg.flag_32[0])
                << uVar10 * 8 | *puVar2 & 0xffffffffffffffffU >> (8 - uVar10) * 8;
      puVar1 = (undefined *)((int)(local_70->difficulty_flg).flag_32 + 3);
      uVar10 = (uint)puVar1 & 7;
      puVar2 = (ulong *)(puVar1 + -uVar10);
      *puVar2 = *puVar2 & -1L << (uVar10 + 1) * 8 |
                CONCAT44(result_flg.difficulty_flg.flag_32[0],result_flg.costume_flg.flag_32[0]) >>
                (7 - uVar10) * 8;
      uVar10 = (uint)&local_70->costume_flg & 7;
      puVar2 = (ulong *)((int)&local_70->costume_flg - uVar10);
      *puVar2 = CONCAT44(result_flg.difficulty_flg.flag_32[0],result_flg.costume_flg.flag_32[0]) <<
                uVar10 * 8 | *puVar2 & 0xffffffffffffffffU >> (8 - uVar10) * 8;
      return local_70;
    }
  } while( true );
}

void SetClearFlgCtrl(CLEAR_FLG_CTRL new_flg_ctrl) {
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  ulong *puVar4;
  ulong in_v0;
  ulong uVar5;
  ulong in_v1;
  ulong uVar6;
  ulong in_a1;
  ulong uVar7;
  ulong auStack_19 [3];
  
  uVar2 = (uint)&new_flg_ctrl->field_0x7 & 7;
  uVar3 = (uint)new_flg_ctrl & 7;
  uVar5 = (*(long *)(&new_flg_ctrl->field_0x7 + -uVar2) << (7 - uVar2) * 8 |
          in_v0 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
          *(ulong *)((int)new_flg_ctrl - uVar3) >> uVar3 * 8;
  puVar1 = (undefined *)((int)(new_flg_ctrl->ending_movie_flg).flag_32 + 3);
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)&new_flg_ctrl->accessory_flg & 7;
  uVar6 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
          in_v1 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
          *(ulong *)((int)&new_flg_ctrl->accessory_flg - uVar3) >> uVar3 * 8;
  puVar1 = (undefined *)((int)(new_flg_ctrl->difficulty_flg).flag_32 + 3);
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)&new_flg_ctrl->costume_flg & 7;
  uVar7 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
          in_a1 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
          *(ulong *)((int)&new_flg_ctrl->costume_flg - uVar3) >> uVar3 * 8;
  uVar2 = (uint)auStack_19 & 7;
  puVar4 = (ulong *)((int)auStack_19 - uVar2);
  *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | uVar5 >> (7 - uVar2) * 8;
  uVar2 = (uint)(auStack_19 + 1) & 7;
  puVar4 = (ulong *)((int)(auStack_19 + 1) - uVar2);
  *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | uVar6 >> (7 - uVar2) * 8;
  uVar2 = (uint)(auStack_19 + 2) & 7;
  puVar4 = (ulong *)((int)(auStack_19 + 2) - uVar2);
  *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | uVar7 >> (7 - uVar2) * 8;
  clear_flg_ctrl.clear_cnt.field0_0x0.m_aData =
       (fixed_array_base<char,4,char[4]>)(fixed_array_base<char,4,char[4]>)(int)uVar5;
  clear_flg_ctrl.clear_flg = (char)(uVar5 >> 0x20);
  clear_flg_ctrl.comp_soul_list_flg = (char)(uVar5 >> 0x28);
  clear_flg_ctrl._6_2_ = (short)(uVar5 >> 0x30);
  clear_flg_ctrl.accessory_flg.flag_32[0] = (int  [1])(int  [1])(int)uVar6;
  clear_flg_ctrl.ending_movie_flg.flag_32[0] = (int  [1])(int  [1])(int)(uVar6 >> 0x20);
  clear_flg_ctrl.costume_flg.flag_32[0] = (int  [1])(int  [1])(int)uVar7;
  clear_flg_ctrl.difficulty_flg.flag_32[0] = (int  [1])(int  [1])(int)(uVar7 >> 0x20);
  return;
}

void ClearFlg_EasyGameClearExe() {
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
  clear_flg_ctrl.clear_flg = '\x01';
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  m_plyr_camera.camera_power_up.mAdditionFlg.flag_32[0] =
       (int  [1])((uint)m_plyr_camera.camera_power_up.mAdditionFlg.flag_32[0] | 8);
                    /* end of inlined section */
  FileGet__Fii(1,0x23);
  return;
}

void ClearFlg_NormalGameClearExe() {
  ClearFlg_EasyGameClearExe__Fv();
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  m_plyr_camera.camera_power_up.mTemperedRenzFlg.flag_32[0] =
       (int  [1])((uint)m_plyr_camera.camera_power_up.mTemperedRenzFlg.flag_32[0] | 0x10);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  clear_flg_ctrl.costume_flg.flag_32[0] =
       (int  [1])((uint)clear_flg_ctrl.costume_flg.flag_32[0] | 6);
  clear_flg_ctrl.accessory_flg.flag_32[0] =
       (int  [1])((uint)clear_flg_ctrl.accessory_flg.flag_32[0] | 2);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  clear_flg_ctrl.difficulty_flg.flag_32[0] =
       (int  [1])((uint)clear_flg_ctrl.difficulty_flg.flag_32[0] | 4);
                    /* end of inlined section */
  FileGet__Fii(1,0x19);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  m_plyr_camera.camera_power_up.mCamPartsFlg.flag_32[0] =
       (int  [1])((uint)m_plyr_camera.camera_power_up.mCamPartsFlg.flag_32[0] | 8);
                    /* end of inlined section */
  FileGet__Fii(1,0x27);
  return;
}

void ClearFlg_HardGameClearExe() {
  ClearFlg_NormalGameClearExe__Fv();
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  m_plyr_camera.camera_power_up.mTemperedRenzFlg.flag_32[0] =
       (int  [1])((uint)m_plyr_camera.camera_power_up.mTemperedRenzFlg.flag_32[0] | 0x100);
  clear_flg_ctrl.costume_flg.flag_32[0] =
       (int  [1])((uint)clear_flg_ctrl.costume_flg.flag_32[0] | 0x18);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  clear_flg_ctrl.difficulty_flg.flag_32[0] =
       (int  [1])((uint)clear_flg_ctrl.difficulty_flg.flag_32[0] | 8);
                    /* end of inlined section */
  FileGet__Fii(1,0x1d);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  m_plyr_camera.camera_power_up.mTemperedRenzFlg.flag_32[0] =
       (int  [1])((uint)m_plyr_camera.camera_power_up.mTemperedRenzFlg.flag_32[0] | 0x20);
                    /* end of inlined section */
  FileGet__Fii(1,0x1a);
  return;
}

void ClearFlg_NightMareGameClearExe() {
  ClearFlg_HardGameClearExe__Fv();
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  clear_flg_ctrl.costume_flg.flag_32[0] =
       (int  [1])(int  [1])(clear_flg_ctrl.costume_flg.flag_32[0] | 0x100);
  return;
}

void ClearFlg_MissionAllClearExe() {
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  clear_flg_ctrl.costume_flg.flag_32[0] =
       (int  [1])(int  [1])(clear_flg_ctrl.costume_flg.flag_32[0] | 0x80);
  clear_flg_ctrl.accessory_flg.flag_32[0] =
       (int  [1])(int  [1])(clear_flg_ctrl.accessory_flg.flag_32[0] | 4);
  return;
}

int ClearFlg_CheckMissionAllClear() {
  uint uVar1;
  
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  uVar1 = 0;
  if (((uint)clear_flg_ctrl.costume_flg.flag_32[0] & 0x80) != 0) {
    uVar1 = (uint)(((uint)clear_flg_ctrl.accessory_flg.flag_32[0] & 4) != 0);
  }
                    /* end of inlined section */
  return uVar1;
}

void ClearFlg_AllRankS_MissionClearExe() {
  ClearFlg_MissionAllClearExe__Fv();
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  clear_flg_ctrl.costume_flg.flag_32[0] =
       (int  [1])(int  [1])(clear_flg_ctrl.costume_flg.flag_32[0] | 0x60);
  return;
}

int ClearFlg_CheckAllRankS_MissionClear() {
  uint uVar1;
  
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  uVar1 = 0;
  if (((uint)clear_flg_ctrl.costume_flg.flag_32[0] & 0x20) != 0) {
    uVar1 = (uint)(((uint)clear_flg_ctrl.costume_flg.flag_32[0] & 0x40) != 0);
  }
                    /* end of inlined section */
  return uVar1;
}

void ClearFlgEndingNormalExe() {
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  clear_flg_ctrl.ending_movie_flg.flag_32[0] =
       (int  [1])(int  [1])(clear_flg_ctrl.ending_movie_flg.flag_32[0] | 1);
  return;
}

void ClearFlgEndingHardExe() {
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  clear_flg_ctrl.ending_movie_flg.flag_32[0] =
       (int  [1])(int  [1])(clear_flg_ctrl.ending_movie_flg.flag_32[0] | 2);
  return;
}

void ClearFlg_AddClearCnt(int difficulty_label) {
  char *pcVar1;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  pcVar1 = clear_flg_ctrl.clear_cnt.field0_0x0.m_aData + difficulty_label;
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Zc_UiUi_PX01(difficulty_label,4);
  *pcVar1 = *pcVar1 + '\x01';
  _fixed_array_verifyrange__H1Zc_UiUi_PX01(difficulty_label,4);
  if ('c' < *pcVar1) {
    _fixed_array_verifyrange__H1Zc_UiUi_PX01(difficulty_label,4);
    *pcVar1 = 'c';
  }
  return;
}

void SetSave_ClearFlg(MC_SAVE_DATA *data) {
  data->size = 0x18;
  data->addr = (uchar *)&clear_flg_ctrl;
  return;
}

void DebugAllClearFlgUp() {
	int i;
	
  char *pcVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zc_UiUi_PX01(iVar2,4);
    pcVar1 = clear_flg_ctrl.clear_cnt.field0_0x0.m_aData + iVar2;
                    /* end of inlined section */
    iVar2 = iVar2 + 1;
                    /* end of inlined section */
    *pcVar1 = '\x01';
  } while (iVar2 < 4);
  clear_flg_ctrl.comp_soul_list_flg = '\x01';
  ClearFlg_NightMareGameClearExe__Fv();
  ClearFlg_AllRankS_MissionClearExe__Fv();
  ClearFlgEndingNormalExe__Fv();
  ClearFlgEndingHardExe__Fv();
  return;
}

char* char * _fixed_array_verifyrange<char>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_688);
  return (char *)v;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if ((__priority == 0xffff) && (__initialize_p == 1)) {
                    /* end of inlined section */
    clear_flg_ctrl.difficulty_flg.flag_32[0] = (int  [1])0;
    clear_flg_ctrl.accessory_flg.flag_32[0] = (int  [1])0;
    clear_flg_ctrl.ending_movie_flg.flag_32[0] = (int  [1])0;
    clear_flg_ctrl.costume_flg.flag_32[0] = (int  [1])0;
  }
                    /* inlined from clear_flg.c */
  return;
}

static void global constructors keyed to clear_flg_ctrl() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
