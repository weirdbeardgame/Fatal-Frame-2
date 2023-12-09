// STATUS: NOT STARTED

#include "morph.h"

typedef struct {
	MORPH_CODE *code;
	float cnt;
	int target;
	int value;
	int sta;
} MORPH_CODE_CTRL;

typedef struct {
	ANI_CTRL *ani_ctrl;
	MORPH_CODE_CTRL morph;
	float rate;
	int model_no;
	int old_anm;
	int obj1_id;
	int obj2_id;
	int flg;
	PHEAD ph1;
	PHEAD ph2;
	float *morph_buf[4];
} MORPH_CTRL;

struct fixed_array_base<MORPH_CTRL,15,MORPH_CTRL[15]> {
protected:
	MORPH_CTRL m_aData[15];
	
public:
	fixed_array_base<MORPH_CTRL,15,MORPH_CTRL[15]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	MORPH_CTRL& operator[]();
	MORPH_CTRL& operator[]();
	MORPH_CTRL* data();
	MORPH_CTRL* begin();
	MORPH_CTRL* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<MORPH_CTRL,15> : fixed_array_base<MORPH_CTRL,15,MORPH_CTRL[15]> {
};

MORPH_DAT ch017_morph[2] = {
	/* [0] = */ {
		/* .obj1_id = */ 9,
		/* .obj2_id = */ 10
	},
	/* [1] = */ {
		/* .obj1_id = */ -1,
		/* .obj2_id = */ -1
	}
};

MORPH_DAT ch020_morph[2] = {
	/* [0] = */ {
		/* .obj1_id = */ 8,
		/* .obj2_id = */ 9
	},
	/* [1] = */ {
		/* .obj1_id = */ -1,
		/* .obj2_id = */ -1
	}
};

MORPH_DAT ch030_morph[2] = {
	/* [0] = */ {
		/* .obj1_id = */ 1,
		/* .obj2_id = */ 2
	},
	/* [1] = */ {
		/* .obj1_id = */ -1,
		/* .obj2_id = */ -1
	}
};

MORPH_DAT ch041_morph[14] = {
	/* [0] = */ {
		/* .obj1_id = */ 1,
		/* .obj2_id = */ 2
	},
	/* [1] = */ {
		/* .obj1_id = */ 3,
		/* .obj2_id = */ 4
	},
	/* [2] = */ {
		/* .obj1_id = */ 5,
		/* .obj2_id = */ 6
	},
	/* [3] = */ {
		/* .obj1_id = */ 7,
		/* .obj2_id = */ 8
	},
	/* [4] = */ {
		/* .obj1_id = */ 9,
		/* .obj2_id = */ 10
	},
	/* [5] = */ {
		/* .obj1_id = */ 11,
		/* .obj2_id = */ 12
	},
	/* [6] = */ {
		/* .obj1_id = */ 13,
		/* .obj2_id = */ 14
	},
	/* [7] = */ {
		/* .obj1_id = */ 15,
		/* .obj2_id = */ 16
	},
	/* [8] = */ {
		/* .obj1_id = */ 17,
		/* .obj2_id = */ 18
	},
	/* [9] = */ {
		/* .obj1_id = */ 19,
		/* .obj2_id = */ 20
	},
	/* [10] = */ {
		/* .obj1_id = */ 21,
		/* .obj2_id = */ 22
	},
	/* [11] = */ {
		/* .obj1_id = */ 23,
		/* .obj2_id = */ 24
	},
	/* [12] = */ {
		/* .obj1_id = */ 25,
		/* .obj2_id = */ 26
	},
	/* [13] = */ {
		/* .obj1_id = */ -1,
		/* .obj2_id = */ -1
	}
};

MORPH_DAT *morph_dat[78] = {
	/* [0] = */ NULL,
	/* [1] = */ NULL,
	/* [2] = */ NULL,
	/* [3] = */ NULL,
	/* [4] = */ NULL,
	/* [5] = */ NULL,
	/* [6] = */ NULL,
	/* [7] = */ NULL,
	/* [8] = */ NULL,
	/* [9] = */ NULL,
	/* [10] = */ NULL,
	/* [11] = */ NULL,
	/* [12] = */ NULL,
	/* [13] = */ NULL,
	/* [14] = */ NULL,
	/* [15] = */ NULL,
	/* [16] = */ NULL,
	/* [17] = */ ch017_morph,
	/* [18] = */ NULL,
	/* [19] = */ NULL,
	/* [20] = */ ch020_morph,
	/* [21] = */ NULL,
	/* [22] = */ NULL,
	/* [23] = */ NULL,
	/* [24] = */ NULL,
	/* [25] = */ NULL,
	/* [26] = */ NULL,
	/* [27] = */ NULL,
	/* [28] = */ NULL,
	/* [29] = */ NULL,
	/* [30] = */ ch030_morph,
	/* [31] = */ NULL,
	/* [32] = */ NULL,
	/* [33] = */ NULL,
	/* [34] = */ NULL,
	/* [35] = */ NULL,
	/* [36] = */ NULL,
	/* [37] = */ NULL,
	/* [38] = */ NULL,
	/* [39] = */ NULL,
	/* [40] = */ NULL,
	/* [41] = */ ch041_morph,
	/* [42] = */ NULL,
	/* [43] = */ NULL,
	/* [44] = */ NULL,
	/* [45] = */ NULL,
	/* [46] = */ NULL,
	/* [47] = */ NULL,
	/* [48] = */ NULL,
	/* [49] = */ NULL,
	/* [50] = */ NULL,
	/* [51] = */ NULL,
	/* [52] = */ NULL,
	/* [53] = */ NULL,
	/* [54] = */ NULL,
	/* [55] = */ NULL,
	/* [56] = */ NULL,
	/* [57] = */ NULL,
	/* [58] = */ NULL,
	/* [59] = */ NULL,
	/* [60] = */ NULL,
	/* [61] = */ NULL,
	/* [62] = */ NULL,
	/* [63] = */ NULL,
	/* [64] = */ NULL,
	/* [65] = */ NULL,
	/* [66] = */ NULL,
	/* [67] = */ NULL,
	/* [68] = */ NULL,
	/* [69] = */ NULL,
	/* [70] = */ NULL,
	/* [71] = */ NULL,
	/* [72] = */ NULL,
	/* [73] = */ NULL,
	/* [74] = */ NULL,
	/* [75] = */ NULL,
	/* [76] = */ NULL,
	/* [77] = */ NULL
};

static fixed_array<MORPH_CTRL,15> morph_ctrl;
unsigned char MORPH_CTRL type_info node[8];
static ANI_CTRL *now_work;

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3c0b00;
	
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf10MORPH_CTRL(0x3f3280,_max);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf10MORPH_CTRL(0x3f3288,_max);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf10MORPH_CTRL(0x3c0b48,_max);
  }
  return (uint **)0x0;
}

int MorphInit() {
	int i;
	
  int iVar1;
  int iVar2;
  fixed_array<MORPH_CTRL,15> *pfVar3;
  
  now_work = (ANI_CTRL *)0x0;
  pfVar3 = &morph_ctrl;
  iVar1 = 0;
  do {
                    /* inlined from ../graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z10MORPH_CTRL_UiUi_PX01(iVar1,0xf);
    ((fixed_array_base<MORPH_CTRL,15,MORPH_CTRL[15]> *)&((MORPH_CTRL *)pfVar3)->ani_ctrl)->m_aData
    [0].ani_ctrl = (ANI_CTRL *)0x0;
    _fixed_array_verifyrange__H1Z10MORPH_CTRL_UiUi_PX01(iVar1,0xf);
    ((MORPH_CTRL *)pfVar3)->old_anm = -1;
    _fixed_array_verifyrange__H1Z10MORPH_CTRL_UiUi_PX01(iVar1,0xf);
    (((MORPH_CTRL *)pfVar3)->morph).code = (ulong *)0x0;
    _fixed_array_verifyrange__H1Z10MORPH_CTRL_UiUi_PX01(iVar1,0xf);
    (((MORPH_CTRL *)pfVar3)->morph).cnt = 0.0;
    _fixed_array_verifyrange__H1Z10MORPH_CTRL_UiUi_PX01(iVar1,0xf);
    (((MORPH_CTRL *)pfVar3)->morph).target = 0;
    _fixed_array_verifyrange__H1Z10MORPH_CTRL_UiUi_PX01(iVar1,0xf);
    (((MORPH_CTRL *)pfVar3)->morph).sta = 0;
                    /* end of inlined section */
    iVar2 = iVar1 + 1;
                    /* inlined from ../graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z10MORPH_CTRL_UiUi_PX01(iVar1,0xf);
    ((MORPH_CTRL *)pfVar3)->morph_buf = (float (*) [4])0x0;
                    /* end of inlined section */
    pfVar3 = (fixed_array<MORPH_CTRL,15> *)((int)pfVar3 + 0x9c);
    iVar1 = iVar2;
  } while (iVar2 < 0xf);
  return 1;
}

static int MorphDevCode(ANI_CTRL *ani_ctrl) {
	int i;
	float rate;
	float value;
	float target;
	
  int iVar1;
  bool bVar2;
  int iVar3;
  MORPH_CTRL *m_ctrl;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar10 = 100.0;
  iVar4 = 0;
  iVar5 = 0;
  do {
                    /* inlined from ../graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z10MORPH_CTRL_UiUi_PX01(iVar4,0xf);
    m_ctrl = (MORPH_CTRL *)((int)&morph_ctrl.field0_0x0.m_aData[0].ani_ctrl + iVar5);
    if (m_ctrl->ani_ctrl == ani_ctrl) {
      _fixed_array_verifyrange__H1Z10MORPH_CTRL_UiUi_PX01(iVar4,0xf);
                    /* end of inlined section */
      if (anm_tbl[ani_ctrl->anm_no].morph == (ulong **)0x0) {
        *(undefined4 *)((int)&morph_ctrl.field0_0x0.m_aData[0].rate + iVar5) = 0;
        return 0;
      }
      iVar1 = (ani_ctrl->anm).playnum;
      if (iVar1 == *(int *)((int)&morph_ctrl.field0_0x0.m_aData[0].old_anm + iVar5)) {
        fVar9 = *(float *)((int)&morph_ctrl.field0_0x0.m_aData[0].morph.cnt + iVar5);
        if (fVar9 == 0.0) {
          *(int *)((int)&morph_ctrl.field0_0x0.m_aData[0].morph.code + iVar5) =
               *(int *)((int)&morph_ctrl.field0_0x0.m_aData[0].morph.code + iVar5) + 8;
          goto LAB_00219170;
        }
        fVar8 = *(float *)((int)&morph_ctrl.field0_0x0.m_aData[0].rate + iVar5);
      }
      else {
        *(ulong **)((int)&morph_ctrl.field0_0x0.m_aData[0].morph.code + iVar5) =
             anm_tbl[ani_ctrl->anm_no].morph[iVar1];
LAB_00219170:
        MorphSetNewCode__FP15MORPH_CODE_CTRL
                  ((MORPH_CODE_CTRL *)((int)&morph_ctrl.field0_0x0.m_aData[0].morph.code + iVar5));
        fVar9 = *(float *)((int)&morph_ctrl.field0_0x0.m_aData[0].morph.cnt + iVar5);
        fVar8 = *(float *)((int)&morph_ctrl.field0_0x0.m_aData[0].rate + iVar5);
      }
      iVar1 = (ani_ctrl->mot).reso;
      fVar7 = (float)*(int *)((int)&morph_ctrl.field0_0x0.m_aData[0].morph.target + iVar5);
      fVar8 = fVar8 * fVar10;
      fVar6 = ((float)*(int *)((int)&morph_ctrl.field0_0x0.m_aData[0].morph.value + iVar5) *
              (float)iVar1) / 200.0;
      if (fVar8 == fVar7) {
        iVar3 = *(int *)((int)&morph_ctrl.field0_0x0.m_aData[0].morph.sta + iVar5);
      }
      else {
        if (fVar7 < fVar8) {
          fVar8 = fVar8 - fVar6;
          bVar2 = fVar8 < fVar7;
        }
        else {
          if (fVar7 <= fVar8) {
            iVar3 = *(int *)((int)&morph_ctrl.field0_0x0.m_aData[0].morph.sta + iVar5);
            goto LAB_002191f8;
          }
          fVar8 = fVar8 + fVar6;
          bVar2 = fVar7 < fVar8;
        }
        if (bVar2) {
          fVar8 = fVar7;
        }
        iVar3 = *(int *)((int)&morph_ctrl.field0_0x0.m_aData[0].morph.sta + iVar5);
      }
LAB_002191f8:
      if (iVar3 == 1) {
        fVar9 = fVar9 - (float)iVar1 / 200.0;
        *(float *)((int)&morph_ctrl.field0_0x0.m_aData[0].morph.cnt + iVar5) = fVar9;
      }
      if (fVar9 < 0.0) {
        *(undefined4 *)((int)&morph_ctrl.field0_0x0.m_aData[0].morph.cnt + iVar5) = 0;
      }
      MorphSetRateM__FP10MORPH_CTRLf(m_ctrl,fVar8 / fVar10);
      *(int *)((int)&morph_ctrl.field0_0x0.m_aData[0].old_anm + iVar5) = (ani_ctrl->anm).playnum;
    }
    iVar4 = iVar4 + 1;
    iVar5 = iVar5 + 0x9c;
    if (0xe < iVar4) {
      return 0;
    }
  } while( true );
}

static int MorphSetNewCode(MORPH_CODE_CTRL *morph) {
	int kind;
	int arg[4];
	
  ulong uVar1;
  uint uVar2;
  int arg [4];
  
  uVar1 = *morph->code;
  uVar2 = (uint)(uVar1 >> 0x10) & 0xff;
  if ((uVar1 >> 0x1c & 0xff) == 0) {
    if ((uVar1 & 0xf000000) != 0) {
      return 0;
    }
    morph->target = 0;
    morph->cnt = 1.0;
    morph->value = 0;
    morph->sta = 0;
  }
  else if (((uint)(uVar1 >> 0x1c) & 0xff) != 1) {
    return 0;
  }
  if ((uVar1 & 0xf000000) == 0) {
    morph->target = uVar2;
    morph->value = (uint)uVar1 & 0xff;
    morph->cnt = (float)((uint)(uVar1 >> 8) & 0xff);
    if ((uVar1 & 0xff00) != 0) {
      morph->sta = 1;
      return 0;
    }
  }
  else {
    if (((uint)(uVar1 >> 0x18) & 0xf) != 1) {
      return 0;
    }
    morph->target = 0;
    morph->value = 0;
    morph->cnt = (float)uVar2;
    if ((uVar1 & 0xff0000) != 0) {
      morph->sta = 1;
      return 0;
    }
  }
  morph->sta = 0;
  morph->cnt = 1.0;
  return 0;
}

int MorphSetRate(ANI_CTRL *ani_ctrl, float rate) {
	int i;
	
  int iVar1;
  int iVar2;
  fixed_array<MORPH_CTRL,15> *pfVar3;
  
  iVar2 = 0;
  pfVar3 = &morph_ctrl;
  do {
                    /* inlined from ../graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z10MORPH_CTRL_UiUi_PX01(iVar2,0xf);
    if (((fixed_array_base<MORPH_CTRL,15,MORPH_CTRL[15]> *)&((MORPH_CTRL *)pfVar3)->ani_ctrl)->
        m_aData[0].ani_ctrl == ani_ctrl) {
                    /* end of inlined section */
      iVar1 = dpcmp((long)(double)rate,0x3ff0000000000000);
      if (iVar1 < 1) {
        iVar1 = dpcmp((long)(double)rate,0);
        if (iVar1 < 0) {
          rate = 0.0;
        }
      }
      else {
        rate = 1.0;
      }
                    /* inlined from ../graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z10MORPH_CTRL_UiUi_PX01(iVar2,0xf);
      ((MORPH_CTRL *)pfVar3)->rate = rate;
    }
                    /* end of inlined section */
    iVar2 = iVar2 + 1;
    pfVar3 = (fixed_array<MORPH_CTRL,15> *)((int)pfVar3 + 0x9c);
  } while (iVar2 < 0xf);
  return 1;
}

static int MorphSetRateM(MORPH_CTRL *m_ctrl, float rate) {
  float fVar1;
  
  fVar1 = 1.0;
  if (rate <= 1.0) {
    if (0.0 <= rate) {
      m_ctrl->rate = rate;
      return 1;
    }
    fVar1 = 0.0;
  }
  m_ctrl->rate = fVar1;
  return 1;
}

float MorphGetRate(ANI_CTRL *ani_ctrl) {
	int i;
	
  int iVar1;
  fixed_array<MORPH_CTRL,15> *pfVar2;
  
  iVar1 = 0;
  pfVar2 = &morph_ctrl;
  do {
                    /* inlined from ../graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z10MORPH_CTRL_UiUi_PX01(iVar1,0xf);
    if (((fixed_array_base<MORPH_CTRL,15,MORPH_CTRL[15]> *)&((MORPH_CTRL *)pfVar2)->ani_ctrl)->
        m_aData[0].ani_ctrl == ani_ctrl) {
      _fixed_array_verifyrange__H1Z10MORPH_CTRL_UiUi_PX01(iVar1,0xf);
      return ((MORPH_CTRL *)pfVar2)->rate;
    }
    iVar1 = iVar1 + 1;
    pfVar2 = (fixed_array<MORPH_CTRL,15> *)((int)pfVar2 + 0x9c);
  } while (iVar1 < 0xf);
  return -1.0;
}

int IsMorphEnable(ANI_CTRL *ani_ctrl) {
	int i;
	
  int iVar1;
  fixed_array<MORPH_CTRL,15> *pfVar2;
  
  iVar1 = 0;
  pfVar2 = &morph_ctrl;
                    /* inlined from ../graph3d/ctl/fixed_array.h */
  while (_fixed_array_verifyrange__H1Z10MORPH_CTRL_UiUi_PX01(iVar1,0xf),
        ((fixed_array_base<MORPH_CTRL,15,MORPH_CTRL[15]> *)&((MORPH_CTRL *)pfVar2)->ani_ctrl)->
        m_aData[0].ani_ctrl != ani_ctrl) {
    iVar1 = iVar1 + 1;
    pfVar2 = (fixed_array<MORPH_CTRL,15> *)((int)pfVar2 + 0x9c);
    if (0xe < iVar1) {
      return 0;
    }
  }
  _fixed_array_verifyrange__H1Z10MORPH_CTRL_UiUi_PX01(iVar1,0xf);
  if ((undefined *)((MORPH_CTRL *)pfVar2)->obj1_id == &_heap_size) {
    return 0;
  }
  _fixed_array_verifyrange__H1Z10MORPH_CTRL_UiUi_PX01(iVar1,0xf);
  if ((undefined *)((MORPH_CTRL *)pfVar2)->obj2_id == &_heap_size) {
    return 0;
  }
  return 1;
}

float MorphGetAlpha2(float alpha) {
	float m_alpha;
	int i;
	
  int iVar1;
  float fVar2;
  
  fVar2 = 0.0;
  if (now_work != (ANI_CTRL *)0x0) {
                    /* inlined from ../graph3d/ctl/fixed_array.h */
    for (iVar1 = 0;
        (iVar1 < 0xf &&
        (_fixed_array_verifyrange__H1Z10MORPH_CTRL_UiUi_PX01(iVar1,0xf),
        morph_ctrl.field0_0x0.m_aData[iVar1].ani_ctrl != now_work)); iVar1 = iVar1 + 1) {
    }
    _fixed_array_verifyrange__H1Z10MORPH_CTRL_UiUi_PX01(iVar1,0xf);
    if (morph_ctrl.field0_0x0.m_aData[iVar1].flg == 0) {
                    /* end of inlined section */
      fVar2 = 0.0;
    }
    else {
      _fixed_array_verifyrange__H1Z10MORPH_CTRL_UiUi_PX01(iVar1,0xf);
      fVar2 = morph_ctrl.field0_0x0.m_aData[iVar1].rate * alpha;
    }
  }
  return fVar2;
}

float MorphGetAlpha1(float alpha) {
	MORPH_CTRL *m_ctrl;
	float m_alpha1;
	float m_alpha2;
	float rate;
	int i;
	
  fixed_array_base<MORPH_CTRL,15,MORPH_CTRL[15]> *pfVar1;
  int iVar2;
  fixed_array<MORPH_CTRL,15> *pfVar3;
  MORPH_CTRL *pMVar4;
  MORPH_CTRL *pMVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar6 = 0.0;
  pfVar3 = &morph_ctrl;
  iVar2 = 0;
  fVar8 = 0.0;
  pMVar4 = (MORPH_CTRL *)pfVar3;
  if (now_work != (ANI_CTRL *)0x0) {
    do {
                    /* inlined from ../graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z10MORPH_CTRL_UiUi_PX01(iVar2,0xf);
      pfVar1 = (fixed_array_base<MORPH_CTRL,15,MORPH_CTRL[15]> *)&((MORPH_CTRL *)pfVar3)->ani_ctrl;
      pfVar3 = (fixed_array<MORPH_CTRL,15> *)((int)pfVar3 + 0x9c);
      if (pfVar1->m_aData[0].ani_ctrl == now_work) {
                    /* inlined from ../graph3d/ctl/fixed_array.h */
        _fixed_array_verifyrange__H1Z10MORPH_CTRL_UiUi_PX01(iVar2,0xf);
                    /* end of inlined section */
        fVar8 = pMVar4->rate;
        pMVar5 = pMVar4;
        break;
      }
                    /* end of inlined section */
      iVar2 = iVar2 + 1;
      pMVar4 = pMVar4 + 1;
      pMVar5 = (MORPH_CTRL *)0x0;
    } while (iVar2 < 0xf);
    fVar6 = alpha;
    if (pMVar5->flg != 0) {
      fVar7 = MorphGetAlpha2__Ff(alpha);
      fVar6 = 0.0;
      if ((fVar7 != 1.0) && (fVar6 = alpha, fVar8 != 0.0)) {
        fVar6 = ((1.0 - fVar8) * fVar7) / (fVar8 * (1.0 - fVar7));
      }
    }
  }
  return fVar6;
}

int MorphCheckId1(int id) {
	int i;
	
  int iVar1;
  int iVar2;
  fixed_array<MORPH_CTRL,15> *pfVar3;
  
  pfVar3 = &morph_ctrl;
  iVar1 = 0;
  if (now_work != (ANI_CTRL *)0x0) {
    do {
                    /* inlined from ../graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z10MORPH_CTRL_UiUi_PX01(iVar1,0xf);
      iVar2 = iVar1 + 1;
      if ((((fixed_array_base<MORPH_CTRL,15,MORPH_CTRL[15]> *)&((MORPH_CTRL *)pfVar3)->ani_ctrl)->
           m_aData[0].ani_ctrl == now_work) &&
         (_fixed_array_verifyrange__H1Z10MORPH_CTRL_UiUi_PX01(iVar1,0xf),
         ((MORPH_CTRL *)pfVar3)->obj1_id == id)) {
        return 1;
      }
                    /* end of inlined section */
      pfVar3 = (fixed_array<MORPH_CTRL,15> *)((int)pfVar3 + 0x9c);
      iVar1 = iVar2;
    } while (iVar2 < 0xf);
  }
  return 0;
}

int MorphCheckId2(int id) {
	int i;
	
  int iVar1;
  int iVar2;
  fixed_array<MORPH_CTRL,15> *pfVar3;
  
  pfVar3 = &morph_ctrl;
  iVar1 = 0;
  if (now_work != (ANI_CTRL *)0x0) {
    do {
                    /* inlined from ../graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z10MORPH_CTRL_UiUi_PX01(iVar1,0xf);
      iVar2 = iVar1 + 1;
      if ((((fixed_array_base<MORPH_CTRL,15,MORPH_CTRL[15]> *)&((MORPH_CTRL *)pfVar3)->ani_ctrl)->
           m_aData[0].ani_ctrl == now_work) &&
         (_fixed_array_verifyrange__H1Z10MORPH_CTRL_UiUi_PX01(iVar1,0xf),
         ((MORPH_CTRL *)pfVar3)->obj2_id == id)) {
        return 1;
      }
                    /* end of inlined section */
      pfVar3 = (fixed_array<MORPH_CTRL,15> *)((int)pfVar3 + 0x9c);
      iVar1 = iVar2;
    } while (iVar2 < 0xf);
  }
  return 0;
}

int MorphSetCtrl(void *ani_hndl, int mdl_no) {
	int i;
	int j;
	int obj1;
	int obj2;
	HeaderSection *my_hs1;
	u_int *mpk_p;
	float *v1[4];
	float *n[4];
	
  undefined *puVar1;
  float (**ppafVar2) [4];
  uint **ppuVar3;
  uint uVar4;
  uint uVar5;
  MORPH_DAT *pMVar6;
  int num;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  ulong *puVar10;
  int iVar11;
  void *pvVar12;
  void *pvVar13;
  float (*pafVar14) [4];
  MORPH_DAT **ppMVar15;
  float (*pafVar16) [4];
  ulong in_a2;
  ulong uVar17;
  ulong in_a3;
  ulong uVar18;
  ulong uVar19;
  fixed_array<MORPH_CTRL,15> *pfVar20;
  int iVar21;
  int iVar22;
  
  pfVar20 = &morph_ctrl;
  iVar22 = 0;
  ppMVar15 = morph_dat + mdl_no;
  iVar11 = 0;
  if (*ppMVar15 == (MORPH_DAT *)0x0) {
    iVar11 = 1;
  }
  else {
    do {
      if ((*ppMVar15)[iVar22].obj1_id == -1) {
        return 1;
      }
                    /* inlined from ../graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z10MORPH_CTRL_UiUi_PX01(iVar11,0xf);
      iVar21 = iVar11 + 1;
      if (((fixed_array_base<MORPH_CTRL,15,MORPH_CTRL[15]> *)&((MORPH_CTRL *)pfVar20)->ani_ctrl)->
          m_aData[0].ani_ctrl == (ANI_CTRL *)0x0) {
        _fixed_array_verifyrange__H1Z10MORPH_CTRL_UiUi_PX01(iVar11,0xf);
                    /* end of inlined section */
        ((fixed_array_base<MORPH_CTRL,15,MORPH_CTRL[15]> *)&((MORPH_CTRL *)pfVar20)->ani_ctrl)->
        m_aData[0].ani_ctrl = (ANI_CTRL *)ani_hndl;
        pMVar6 = *ppMVar15;
        pvVar13 = *(void **)((int)ani_hndl + 0xd8);
        uVar19 = (ulong)(int)pvVar13;
        ((MORPH_CTRL *)pfVar20)->rate = 0.0;
        iVar11 = pMVar6[iVar22].obj1_id;
        num = pMVar6[iVar22].obj2_id;
        uVar18 = (ulong)num;
        ((MORPH_CTRL *)pfVar20)->obj1_id = iVar11;
        (((MORPH_CTRL *)pfVar20)->morph).code = (ulong *)0x0;
        ((MORPH_CTRL *)pfVar20)->old_anm = (int)&_heap_size;
        ((MORPH_CTRL *)pfVar20)->model_no = mdl_no;
        ((MORPH_CTRL *)pfVar20)->obj2_id = num;
        ((MORPH_CTRL *)pfVar20)->flg = 0;
        (((MORPH_CTRL *)pfVar20)->morph).cnt = 0.0;
        (((MORPH_CTRL *)pfVar20)->morph).target = 0;
        (((MORPH_CTRL *)pfVar20)->morph).sta = 0;
        pvVar12 = GetFileInPak__FPvi(pvVar13,iVar11);
        pvVar13 = GetFileInPak__FPvi(pvVar13,num);
        uVar7 = *(uint *)((int)pvVar12 + 0x10);
        uVar4 = uVar7 + 7 & 7;
        uVar5 = uVar7 & 7;
        uVar19 = (*(long *)((uVar7 + 7) - uVar4) << (7 - uVar4) * 8 |
                 uVar19 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar5) * 8 |
                 *(ulong *)(uVar7 - uVar5) >> uVar5 * 8;
        uVar4 = uVar7 + 0xf & 7;
        uVar5 = uVar7 + 8 & 7;
        uVar18 = (*(long *)((uVar7 + 0xf) - uVar4) << (7 - uVar4) * 8 |
                 uVar18 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar5) * 8 |
                 *(ulong *)((uVar7 + 8) - uVar5) >> uVar5 * 8;
        uVar4 = uVar7 + 0x17 & 7;
        uVar5 = uVar7 + 0x10 & 7;
        uVar17 = (*(long *)((uVar7 + 0x17) - uVar4) << (7 - uVar4) * 8 |
                 in_a2 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar5) * 8 |
                 *(ulong *)((uVar7 + 0x10) - uVar5) >> uVar5 * 8;
        uVar4 = uVar7 + 0x1f & 7;
        uVar5 = uVar7 + 0x18 & 7;
        in_a3 = (*(long *)((uVar7 + 0x1f) - uVar4) << (7 - uVar4) * 8 |
                in_a3 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar5) * 8 |
                *(ulong *)((uVar7 + 0x18) - uVar5) >> uVar5 * 8;
        puVar1 = (undefined *)((int)&(((MORPH_CTRL *)pfVar20)->ph1).UniqHeaderSize + 3);
        uVar4 = (uint)puVar1 & 7;
        puVar10 = (ulong *)(puVar1 + -uVar4);
        *puVar10 = *puVar10 & -1L << (uVar4 + 1) * 8 | uVar19 >> (7 - uVar4) * 8;
        uVar4 = (uint)&((MORPH_CTRL *)pfVar20)->ph1 & 7;
        puVar10 = (ulong *)((int)&((MORPH_CTRL *)pfVar20)->ph1 - uVar4);
        *puVar10 = uVar19 << uVar4 * 8 | *puVar10 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
        puVar1 = (undefined *)((int)&(((MORPH_CTRL *)pfVar20)->ph1).pUniqNormal + 3);
        uVar4 = (uint)puVar1 & 7;
        puVar10 = (ulong *)(puVar1 + -uVar4);
        *puVar10 = *puVar10 & -1L << (uVar4 + 1) * 8 | uVar18 >> (7 - uVar4) * 8;
        ppafVar2 = &(((MORPH_CTRL *)pfVar20)->ph1).pUniqVertex;
        uVar4 = (uint)ppafVar2 & 7;
        puVar10 = (ulong *)((int)ppafVar2 - uVar4);
        *puVar10 = uVar18 << uVar4 * 8 | *puVar10 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
        puVar1 = (undefined *)((int)&(((MORPH_CTRL *)pfVar20)->ph1).CommonHeaderSize + 3);
        uVar4 = (uint)puVar1 & 7;
        puVar10 = (ulong *)(puVar1 + -uVar4);
        *puVar10 = *puVar10 & -1L << (uVar4 + 1) * 8 | uVar17 >> (7 - uVar4) * 8;
        ppuVar3 = &(((MORPH_CTRL *)pfVar20)->ph1).pUniqList;
        uVar4 = (uint)ppuVar3 & 7;
        puVar10 = (ulong *)((int)ppuVar3 - uVar4);
        *puVar10 = uVar17 << uVar4 * 8 | *puVar10 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
        puVar1 = (undefined *)((int)&(((MORPH_CTRL *)pfVar20)->ph1).pCommonNormal + 3);
        uVar4 = (uint)puVar1 & 7;
        puVar10 = (ulong *)(puVar1 + -uVar4);
        *puVar10 = *puVar10 & -1L << (uVar4 + 1) * 8 | in_a3 >> (7 - uVar4) * 8;
        ppafVar2 = &(((MORPH_CTRL *)pfVar20)->ph1).pCommonVertex;
        uVar4 = (uint)ppafVar2 & 7;
        puVar10 = (ulong *)((int)ppafVar2 - uVar4);
        *puVar10 = in_a3 << uVar4 * 8 | *puVar10 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
        uVar4 = uVar7 + 0x27 & 7;
        uVar5 = uVar7 + 0x20 & 7;
        uVar19 = (*(long *)((uVar7 + 0x27) - uVar4) << (7 - uVar4) * 8 |
                 uVar19 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar5) * 8 |
                 *(ulong *)((uVar7 + 0x20) - uVar5) >> uVar5 * 8;
        uVar4 = uVar7 + 0x2f & 7;
        uVar5 = uVar7 + 0x28 & 7;
        uVar17 = (*(long *)((uVar7 + 0x2f) - uVar4) << (7 - uVar4) * 8 |
                 uVar18 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar5) * 8 |
                 *(ulong *)((uVar7 + 0x28) - uVar5) >> uVar5 * 8;
        puVar8 = *(uint **)(uVar7 + 0x30);
        puVar1 = (undefined *)((int)&(((MORPH_CTRL *)pfVar20)->ph1).WeightedHeaderSize + 3);
        uVar4 = (uint)puVar1 & 7;
        puVar10 = (ulong *)(puVar1 + -uVar4);
        *puVar10 = *puVar10 & -1L << (uVar4 + 1) * 8 | uVar19 >> (7 - uVar4) * 8;
        ppuVar3 = &(((MORPH_CTRL *)pfVar20)->ph1).pCommonList;
        uVar4 = (uint)ppuVar3 & 7;
        puVar10 = (ulong *)((int)ppuVar3 - uVar4);
        *puVar10 = uVar19 << uVar4 * 8 | *puVar10 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
        puVar1 = (undefined *)((int)&(((MORPH_CTRL *)pfVar20)->ph1).pWeightedNormal + 3);
        uVar4 = (uint)puVar1 & 7;
        puVar10 = (ulong *)(puVar1 + -uVar4);
        *puVar10 = *puVar10 & -1L << (uVar4 + 1) * 8 | uVar17 >> (7 - uVar4) * 8;
        ppafVar2 = &(((MORPH_CTRL *)pfVar20)->ph1).pWeightedVertex;
        uVar4 = (uint)ppafVar2 & 7;
        puVar10 = (ulong *)((int)ppafVar2 - uVar4);
        *puVar10 = uVar17 << uVar4 * 8 | *puVar10 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
        (((MORPH_CTRL *)pfVar20)->ph1).pWeightedList = puVar8;
        uVar9 = *(uint *)((int)pvVar13 + 0x10);
        uVar4 = uVar9 + 7 & 7;
        uVar5 = uVar9 & 7;
        uVar19 = (*(long *)((uVar9 + 7) - uVar4) << (7 - uVar4) * 8 |
                 (long)(int)pvVar13 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) &
                 -1L << (8 - uVar5) * 8 | *(ulong *)(uVar9 - uVar5) >> uVar5 * 8;
        uVar4 = uVar9 + 0xf & 7;
        uVar5 = uVar9 + 8 & 7;
        uVar18 = (*(long *)((uVar9 + 0xf) - uVar4) << (7 - uVar4) * 8 |
                 (long)(int)uVar7 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar5) * 8
                 | *(ulong *)((uVar9 + 8) - uVar5) >> uVar5 * 8;
        uVar4 = uVar9 + 0x17 & 7;
        uVar5 = uVar9 + 0x10 & 7;
        uVar17 = (*(long *)((uVar9 + 0x17) - uVar4) << (7 - uVar4) * 8 |
                 uVar17 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar5) * 8 |
                 *(ulong *)((uVar9 + 0x10) - uVar5) >> uVar5 * 8;
        uVar4 = uVar9 + 0x1f & 7;
        uVar5 = uVar9 + 0x18 & 7;
        in_a2 = (*(long *)((uVar9 + 0x1f) - uVar4) << (7 - uVar4) * 8 |
                (long)(int)puVar8 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar5) * 8
                | *(ulong *)((uVar9 + 0x18) - uVar5) >> uVar5 * 8;
        puVar1 = (undefined *)((int)&(((MORPH_CTRL *)pfVar20)->ph2).UniqHeaderSize + 3);
        uVar4 = (uint)puVar1 & 7;
        puVar10 = (ulong *)(puVar1 + -uVar4);
        *puVar10 = *puVar10 & -1L << (uVar4 + 1) * 8 | uVar19 >> (7 - uVar4) * 8;
        uVar4 = (uint)&((MORPH_CTRL *)pfVar20)->ph2 & 7;
        puVar10 = (ulong *)((int)&((MORPH_CTRL *)pfVar20)->ph2 - uVar4);
        *puVar10 = uVar19 << uVar4 * 8 | *puVar10 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
        puVar1 = (undefined *)((int)&(((MORPH_CTRL *)pfVar20)->ph2).pUniqNormal + 3);
        uVar4 = (uint)puVar1 & 7;
        puVar10 = (ulong *)(puVar1 + -uVar4);
        *puVar10 = *puVar10 & -1L << (uVar4 + 1) * 8 | uVar18 >> (7 - uVar4) * 8;
        ppafVar2 = &(((MORPH_CTRL *)pfVar20)->ph2).pUniqVertex;
        uVar4 = (uint)ppafVar2 & 7;
        puVar10 = (ulong *)((int)ppafVar2 - uVar4);
        *puVar10 = uVar18 << uVar4 * 8 | *puVar10 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
        puVar1 = (undefined *)((int)&(((MORPH_CTRL *)pfVar20)->ph2).CommonHeaderSize + 3);
        uVar4 = (uint)puVar1 & 7;
        puVar10 = (ulong *)(puVar1 + -uVar4);
        *puVar10 = *puVar10 & -1L << (uVar4 + 1) * 8 | uVar17 >> (7 - uVar4) * 8;
        ppuVar3 = &(((MORPH_CTRL *)pfVar20)->ph2).pUniqList;
        uVar4 = (uint)ppuVar3 & 7;
        puVar10 = (ulong *)((int)ppuVar3 - uVar4);
        *puVar10 = uVar17 << uVar4 * 8 | *puVar10 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
        puVar1 = (undefined *)((int)&(((MORPH_CTRL *)pfVar20)->ph2).pCommonNormal + 3);
        uVar4 = (uint)puVar1 & 7;
        puVar10 = (ulong *)(puVar1 + -uVar4);
        *puVar10 = *puVar10 & -1L << (uVar4 + 1) * 8 | in_a2 >> (7 - uVar4) * 8;
        ppafVar2 = &(((MORPH_CTRL *)pfVar20)->ph2).pCommonVertex;
        uVar4 = (uint)ppafVar2 & 7;
        puVar10 = (ulong *)((int)ppafVar2 - uVar4);
        *puVar10 = in_a2 << uVar4 * 8 | *puVar10 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
        uVar4 = uVar9 + 0x27 & 7;
        uVar5 = uVar9 + 0x20 & 7;
        uVar19 = (*(long *)((uVar9 + 0x27) - uVar4) << (7 - uVar4) * 8 |
                 uVar19 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar5) * 8 |
                 *(ulong *)((uVar9 + 0x20) - uVar5) >> uVar5 * 8;
        uVar4 = uVar9 + 0x2f & 7;
        uVar5 = uVar9 + 0x28 & 7;
        uVar18 = (*(long *)((uVar9 + 0x2f) - uVar4) << (7 - uVar4) * 8 |
                 uVar18 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar5) * 8 |
                 *(ulong *)((uVar9 + 0x28) - uVar5) >> uVar5 * 8;
        puVar8 = *(uint **)(uVar9 + 0x30);
        puVar1 = (undefined *)((int)&(((MORPH_CTRL *)pfVar20)->ph2).WeightedHeaderSize + 3);
        uVar4 = (uint)puVar1 & 7;
        puVar10 = (ulong *)(puVar1 + -uVar4);
        *puVar10 = *puVar10 & -1L << (uVar4 + 1) * 8 | uVar19 >> (7 - uVar4) * 8;
        ppuVar3 = &(((MORPH_CTRL *)pfVar20)->ph2).pCommonList;
        uVar4 = (uint)ppuVar3 & 7;
        puVar10 = (ulong *)((int)ppuVar3 - uVar4);
        *puVar10 = uVar19 << uVar4 * 8 | *puVar10 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
        puVar1 = (undefined *)((int)&(((MORPH_CTRL *)pfVar20)->ph2).pWeightedNormal + 3);
        uVar4 = (uint)puVar1 & 7;
        puVar10 = (ulong *)(puVar1 + -uVar4);
        *puVar10 = *puVar10 & -1L << (uVar4 + 1) * 8 | uVar18 >> (7 - uVar4) * 8;
        ppafVar2 = &(((MORPH_CTRL *)pfVar20)->ph2).pWeightedVertex;
        uVar4 = (uint)ppafVar2 & 7;
        puVar10 = (ulong *)((int)ppafVar2 - uVar4);
        *puVar10 = uVar18 << uVar4 * 8 | *puVar10 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
        (((MORPH_CTRL *)pfVar20)->ph2).pWeightedList = puVar8;
        pafVar14 = (((MORPH_CTRL *)pfVar20)->ph1).pUniqVertex;
        if (pafVar14 == (float (*) [4])0x0) {
          pafVar14 = (((MORPH_CTRL *)pfVar20)->ph1).pWeightedVertex;
LAB_00219b38:
          pafVar16 = (((MORPH_CTRL *)pfVar20)->ph1).pWeightedNormal;
        }
        else {
          if ((((MORPH_CTRL *)pfVar20)->ph2).pUniqVertex == (float (*) [4])0x0) {
            pafVar14 = (((MORPH_CTRL *)pfVar20)->ph1).pWeightedVertex;
            goto LAB_00219b38;
          }
          pafVar16 = (((MORPH_CTRL *)pfVar20)->ph1).pUniqNormal;
        }
        iVar22 = iVar22 + 1;
        pafVar14 = (float (*) [4])ol_loadGetHeap__Fi(((int)pafVar16 - (int)pafVar14 >> 4) << 4);
        ((MORPH_CTRL *)pfVar20)->morph_buf = pafVar14;
      }
      pfVar20 = (fixed_array<MORPH_CTRL,15> *)((int)pfVar20 + 0x9c);
      iVar11 = iVar21;
    } while (iVar21 < 0xf);
    iVar11 = 0;
  }
  return iVar11;
}

int MorphDell(void *ani_hndl) {
	ANI_CTRL *ani_ctrl;
	int i;
	
  int iVar1;
  fixed_array<MORPH_CTRL,15> *pfVar2;
  
  if ((morph_dat[*(int *)((int)ani_hndl + 0x124)] != (MORPH_DAT *)0x0) &&
     (iVar1 = 0, ani_hndl != (void *)0x0)) {
    pfVar2 = &morph_ctrl;
    do {
                    /* inlined from ../graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z10MORPH_CTRL_UiUi_PX01(iVar1,0xf);
      if (((fixed_array_base<MORPH_CTRL,15,MORPH_CTRL[15]> *)&((MORPH_CTRL *)pfVar2)->ani_ctrl)->
          m_aData[0].ani_ctrl == (ANI_CTRL *)ani_hndl) {
        _fixed_array_verifyrange__H1Z10MORPH_CTRL_UiUi_PX01(iVar1,0xf);
        ((fixed_array_base<MORPH_CTRL,15,MORPH_CTRL[15]> *)&((MORPH_CTRL *)pfVar2)->ani_ctrl)->
        m_aData[0].ani_ctrl = (ANI_CTRL *)0x0;
        _fixed_array_verifyrange__H1Z10MORPH_CTRL_UiUi_PX01(iVar1,0xf);
        ol_loadFreeHeap__FPv(((MORPH_CTRL *)pfVar2)->morph_buf);
      }
                    /* end of inlined section */
      iVar1 = iVar1 + 1;
      pfVar2 = (fixed_array<MORPH_CTRL,15> *)((int)pfVar2 + 0x9c);
    } while (iVar1 < 0xf);
  }
  return 1;
}

int MorphRun(ANI_CTRL *ani_ctrl, u_int *mpk_p) {
	float *v1[4];
	float *v2[4];
	float *n[4];
	float rate;
	int i;
	
  fixed_array_base<MORPH_CTRL,15,MORPH_CTRL[15]> *pfVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  fixed_array<MORPH_CTRL,15> *pfVar7;
  MORPH_CTRL *m_ctrl;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined extraout_vf1 [16];
  undefined auVar11 [16];
  undefined auVar12 [16];
  undefined auVar13 [16];
  undefined auVar14 [16];
  
  if (ani_ctrl->anm_no == -1) {
    pfVar7 = &morph_ctrl;
                    /* inlined from ../graph3d/ctl/fixed_array.h */
    iVar9 = 0;
    do {
      iVar8 = iVar9 + 1;
                    /* inlined from ../graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z10MORPH_CTRL_UiUi_PX01(iVar9,0xf);
      pfVar1 = (fixed_array_base<MORPH_CTRL,15,MORPH_CTRL[15]> *)&((MORPH_CTRL *)pfVar7)->ani_ctrl;
                    /* end of inlined section */
                    /* inlined from ../graph3d/ctl/fixed_array.h */
      pfVar7 = (fixed_array<MORPH_CTRL,15> *)((int)pfVar7 + 0x9c);
      if (pfVar1->m_aData[0].ani_ctrl == ani_ctrl) {
                    /* end of inlined section */
        MorphSetWorkNo__FP8ANI_CTRL(ani_ctrl);
      }
      iVar9 = iVar8;
    } while (iVar8 < 0xf);
  }
  else {
    iVar9 = 0;
    MorphDevCode__FP8ANI_CTRL(ani_ctrl);
    iVar8 = 0;
    do {
                    /* inlined from ../graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z10MORPH_CTRL_UiUi_PX01(iVar9,0xf);
      m_ctrl = (MORPH_CTRL *)((int)&morph_ctrl.field0_0x0.m_aData[0].ani_ctrl + iVar8);
      if (m_ctrl->ani_ctrl == ani_ctrl) {
        _fixed_array_verifyrange__H1Z10MORPH_CTRL_UiUi_PX01(iVar9,0xf);
                    /* end of inlined section */
        if (*(int *)((int)&morph_ctrl.field0_0x0.m_aData[0].obj1_id + iVar8) == -1) {
          *(undefined4 *)((int)&morph_ctrl.field0_0x0.m_aData[0].flg + iVar8) = 0;
          return 0;
        }
        if (*(int *)((int)&morph_ctrl.field0_0x0.m_aData[0].obj2_id + iVar8) == -1) {
          *(undefined4 *)((int)&morph_ctrl.field0_0x0.m_aData[0].flg + iVar8) = 0;
          return 0;
        }
        uVar4 = *(uint *)((int)&morph_ctrl.field0_0x0.m_aData[0].ph1.pUniqVertex + iVar8);
        if (uVar4 == 0) {
          uVar4 = *(uint *)((int)&morph_ctrl.field0_0x0.m_aData[0].ph1.pWeightedVertex + iVar8);
LAB_00219d48:
          if (uVar4 == 0) {
            *(undefined4 *)((int)&morph_ctrl.field0_0x0.m_aData[0].flg + iVar8) = 0;
            return 0;
          }
          iVar6 = *(int *)((int)&morph_ctrl.field0_0x0.m_aData[0].ph2.pWeightedVertex + iVar8);
          if (iVar6 == 0) {
            *(undefined4 *)((int)&morph_ctrl.field0_0x0.m_aData[0].flg + iVar8) = 0;
            return 0;
          }
          uVar10 = *(undefined4 *)((int)&morph_ctrl.field0_0x0.m_aData[0].rate + iVar8);
          uVar5 = *(uint *)((int)&morph_ctrl.field0_0x0.m_aData[0].ph1.pWeightedNormal + iVar8);
        }
        else {
          iVar6 = *(int *)((int)&morph_ctrl.field0_0x0.m_aData[0].ph2.pUniqVertex + iVar8);
          if (iVar6 == 0) {
            uVar4 = *(uint *)((int)&morph_ctrl.field0_0x0.m_aData[0].ph1.pWeightedVertex + iVar8);
            goto LAB_00219d48;
          }
          uVar10 = *(undefined4 *)((int)&morph_ctrl.field0_0x0.m_aData[0].rate + iVar8);
          uVar5 = *(uint *)((int)&morph_ctrl.field0_0x0.m_aData[0].ph1.pUniqNormal + iVar8);
        }
        auVar13 = _qmtc2(uVar10);
        auVar14 = _vsub(extraout_vf1,auVar13);
        if (uVar4 < uVar5) {
          iVar3 = 0;
          iVar2 = *(int *)((int)&morph_ctrl.field0_0x0.m_aData[0].morph_buf + iVar8);
          while( true ) {
            prefetch(((undefined (*) [16])(uVar4 + iVar3))[1],0);
            auVar11 = _lqc2(*(undefined (*) [16])(uVar4 + iVar3));
            auVar12 = _lqc2(*(undefined (*) [16])(iVar6 + iVar3));
            _vmulabc(auVar12,auVar13);
            auVar11 = _vmaddbc(auVar11,auVar14);
            auVar11 = _sqc2(auVar11);
            *(undefined (*) [16])(iVar2 + iVar3) = auVar11;
            iVar3 = iVar3 + 0x10;
            if (uVar5 <= uVar4 + iVar3) break;
            iVar2 = *(int *)((int)&morph_ctrl.field0_0x0.m_aData[0].morph_buf + iVar8);
          }
        }
        *(undefined4 *)((int)&morph_ctrl.field0_0x0.m_aData[0].flg + iVar8) = 1;
        MorphSetWorkNo__FP8ANI_CTRL(ani_ctrl);
        MorphSetP__FP10MORPH_CTRLPUiPA3_f
                  (m_ctrl,mpk_p,
                   *(float (**) [4])((int)&morph_ctrl.field0_0x0.m_aData[0].morph_buf + iVar8));
      }
      iVar9 = iVar9 + 1;
      iVar8 = iVar8 + 0x9c;
    } while (iVar9 < 0xf);
  }
  return 0;
}

int MorphReset(ANI_CTRL *ani_ctrl, u_int *mpk_p) {
	int i;
	
  fixed_array<MORPH_CTRL,15> *m_ctrl;
  int iVar1;
  int iVar2;
  
  now_work = (ANI_CTRL *)0x0;
  m_ctrl = &morph_ctrl;
  iVar1 = 0;
  do {
                    /* inlined from ../graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z10MORPH_CTRL_UiUi_PX01(iVar1,0xf);
    iVar2 = iVar1 + 1;
                    /* end of inlined section */
    if ((((MORPH_CTRL *)m_ctrl)->ani_ctrl == ani_ctrl) &&
       (_fixed_array_verifyrange__H1Z10MORPH_CTRL_UiUi_PX01(iVar1,0xf),
       ((MORPH_CTRL *)m_ctrl)->flg != 0)) {
      MorphResetP__FP10MORPH_CTRLPUiPA3_f
                ((MORPH_CTRL *)m_ctrl,mpk_p,((MORPH_CTRL *)m_ctrl)->morph_buf);
      ((MORPH_CTRL *)m_ctrl)->flg = 0;
    }
    m_ctrl = (fixed_array<MORPH_CTRL,15> *)((int)m_ctrl + 0x9c);
    iVar1 = iVar2;
  } while (iVar2 < 0xf);
  return 0;
}

static int MorphSetP(MORPH_CTRL *m_ctrl, u_int *mpk_p, float *morph_v[4]) {
	u_int i;
	int k;
	int obj2;
	int w_num;
	int c_num;
	HeaderSection *my_hs1;
	HeaderSection *my_hs2;
	PHEAD *ph1;
	PHEAD *ph2;
	u_int *pk1;
	u_int *pk2;
	u_int *intpointer1;
	u_int *intpointer2;
	u_int *nextprim1;
	u_int *nextprim2;
	float *vp2[4];
	VUVN_PRIM *vh;
	
  int iVar1;
  int iVar2;
  int *piVar3;
  void *pvVar4;
  void *pvVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  int **ppiVar9;
  int **ppiVar10;
  int iVar11;
  uint uVar12;
  
  iVar1 = m_ctrl->obj2_id;
  pvVar4 = GetFileInPak__FPvi(mpk_p,m_ctrl->obj1_id);
  pvVar5 = GetFileInPak__FPvi(mpk_p,iVar1);
  iVar1 = *(int *)((int)pvVar4 + 0x10);
  iVar2 = *(int *)((int)pvVar5 + 0x10);
  uVar12 = 0;
  if (*(int *)((int)pvVar4 + 0x14) != 0) {
    iVar7 = *(int *)(iVar1 + 8);
    iVar11 = 0;
    do {
      ppiVar10 = *(int ***)((int)pvVar4 + iVar11 + 0x18);
      if (ppiVar10 != (int **)0x0) {
        piVar3 = *ppiVar10;
        while (piVar3 != (int *)0x0) {
          if (ppiVar10[1] == (int *)0x0) {
            ppiVar9 = ppiVar10 + 0xc;
            if (*(char *)((int)ppiVar10 + 0xd) == '\0') {
              lVar8 = (long)*(short *)(ppiVar10 + 2);
              if (lVar8 < 1) {
                ppiVar10 = (int **)*ppiVar10;
                goto LAB_00219fb8;
              }
              do {
                lVar8 = (long)((int)lVar8 + -1);
                *ppiVar9 = (int *)(((int)*ppiVar9 - iVar7) + (int)morph_v);
                ppiVar9 = ppiVar9 + 2;
              } while (lVar8 != 0);
            }
            ppiVar10 = (int **)*ppiVar10;
          }
          else {
            ppiVar10 = (int **)*ppiVar10;
          }
LAB_00219fb8:
          piVar3 = *ppiVar10;
        }
      }
      ppiVar10 = *(int ***)((int)pvVar5 + iVar11 + 0x18);
      if (ppiVar10 == (int **)0x0) {
        uVar6 = *(uint *)((int)pvVar4 + 0x14);
      }
      else if (*ppiVar10 == (int *)0x0) {
        uVar6 = *(uint *)((int)pvVar4 + 0x14);
      }
      else {
        do {
          if (ppiVar10[1] == (int *)0x0) {
            ppiVar9 = ppiVar10 + 0xc;
            if (*(char *)((int)ppiVar10 + 0xd) == '\0') {
              lVar8 = (long)*(short *)(ppiVar10 + 2);
              iVar11 = *(int *)(iVar2 + 8);
              if (0 < lVar8) {
                do {
                  lVar8 = (long)((int)lVar8 + -1);
                  *ppiVar9 = (int *)(((int)*ppiVar9 - iVar11) + (int)morph_v);
                  ppiVar9 = ppiVar9 + 2;
                } while (lVar8 != 0);
              }
            }
            ppiVar10 = (int **)*ppiVar10;
          }
          else {
            ppiVar10 = (int **)*ppiVar10;
          }
        } while (*ppiVar10 != (int *)0x0);
        uVar6 = *(uint *)((int)pvVar4 + 0x14);
      }
      uVar12 = uVar12 + 1;
      if (uVar6 <= uVar12) goto code_r0x0021a058;
      iVar11 = uVar12 * 4;
    } while( true );
  }
  iVar7 = *(int *)(iVar1 + 8);
  iVar11 = *(int *)(iVar1 + 0x28);
LAB_0021a068:
  if (iVar11 == 0) {
    iVar11 = *(int *)(iVar1 + 0x18);
  }
  else {
    if (iVar7 == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = iVar11 - iVar7 >> 4;
    }
    *(float (**) [4])(iVar1 + 0x28) = morph_v[iVar7];
    *(float (**) [4])(iVar2 + 0x28) = morph_v[iVar7];
    iVar7 = *(int *)(iVar1 + 8);
    iVar11 = *(int *)(iVar1 + 0x18);
  }
  if (iVar11 != 0) {
    if (iVar7 == 0) {
      if (*(int *)(iVar1 + 0x28) == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = iVar11 - *(int *)(iVar1 + 0x28) >> 4;
      }
    }
    else {
      iVar7 = iVar11 - iVar7 >> 4;
    }
    *(float (**) [4])(iVar1 + 0x18) = morph_v[iVar7];
    *(float (**) [4])(iVar2 + 0x18) = morph_v[iVar7];
    iVar7 = *(int *)(iVar1 + 8);
  }
  if ((iVar7 != 0) && (*(int *)(iVar2 + 8) != 0)) {
    *(float (**) [4])(iVar1 + 8) = morph_v;
    *(float (**) [4])(iVar2 + 8) = morph_v;
  }
  return 1;
code_r0x0021a058:
  iVar11 = *(int *)(iVar1 + 0x28);
  goto LAB_0021a068;
}

static int MorphResetP(MORPH_CTRL *m_ctrl, u_int *mpk_p, float *morph_v[4]) {
	u_int i;
	int k;
	int obj2;
	HeaderSection *my_hs1;
	HeaderSection *my_hs2;
	PHEAD *ph1;
	PHEAD *ph2;
	PHEAD *ori_ph1;
	PHEAD *ori_ph2;
	u_int *pk1;
	u_int *pk2;
	u_int *intpointer1;
	u_int *intpointer2;
	u_int *nextprim1;
	u_int *nextprim2;
	float *vp2[4];
	VUVN_PRIM *vh;
	
  int iVar1;
  int iVar2;
  float (*pafVar3) [4];
  int *piVar4;
  float (*pafVar5) [4];
  void *pvVar6;
  void *pvVar7;
  uint uVar8;
  long lVar9;
  int **ppiVar10;
  int **ppiVar11;
  int iVar12;
  uint uVar13;
  
  iVar1 = m_ctrl->obj2_id;
  pvVar6 = GetFileInPak__FPvi(mpk_p,m_ctrl->obj1_id);
  pvVar7 = GetFileInPak__FPvi(mpk_p,iVar1);
  iVar1 = *(int *)((int)pvVar6 + 0x10);
  iVar2 = *(int *)((int)pvVar7 + 0x10);
  uVar13 = 0;
  if (*(int *)((int)pvVar6 + 0x14) != 0) {
    pafVar3 = (m_ctrl->ph1).pUniqVertex;
    iVar12 = 0;
    do {
      ppiVar11 = *(int ***)((int)pvVar6 + iVar12 + 0x18);
      if (ppiVar11 != (int **)0x0) {
        piVar4 = *ppiVar11;
        while (piVar4 != (int *)0x0) {
          if (ppiVar11[1] == (int *)0x0) {
            ppiVar10 = ppiVar11 + 0xc;
            if (*(char *)((int)ppiVar11 + 0xd) == '\0') {
              lVar9 = (long)*(short *)(ppiVar11 + 2);
              if (lVar9 < 1) {
                ppiVar11 = (int **)*ppiVar11;
                goto LAB_0021a210;
              }
              do {
                lVar9 = (long)((int)lVar9 + -1);
                *ppiVar10 = (int *)(((int)*ppiVar10 + (int)pafVar3) - (int)morph_v);
                ppiVar10 = ppiVar10 + 2;
              } while (lVar9 != 0);
            }
            ppiVar11 = (int **)*ppiVar11;
          }
          else {
            ppiVar11 = (int **)*ppiVar11;
          }
LAB_0021a210:
          piVar4 = *ppiVar11;
        }
      }
      ppiVar11 = *(int ***)((int)pvVar7 + iVar12 + 0x18);
      if (ppiVar11 == (int **)0x0) {
        uVar8 = *(uint *)((int)pvVar6 + 0x14);
      }
      else if (*ppiVar11 == (int *)0x0) {
        uVar8 = *(uint *)((int)pvVar6 + 0x14);
      }
      else {
        do {
          if (ppiVar11[1] == (int *)0x0) {
            ppiVar10 = ppiVar11 + 0xc;
            if (*(char *)((int)ppiVar11 + 0xd) == '\0') {
              lVar9 = (long)*(short *)(ppiVar11 + 2);
              pafVar5 = (m_ctrl->ph2).pUniqVertex;
              if (0 < lVar9) {
                do {
                  lVar9 = (long)((int)lVar9 + -1);
                  *ppiVar10 = (int *)(((int)*ppiVar10 + (int)pafVar5) - (int)morph_v);
                  ppiVar10 = ppiVar10 + 2;
                } while (lVar9 != 0);
              }
            }
            ppiVar11 = (int **)*ppiVar11;
          }
          else {
            ppiVar11 = (int **)*ppiVar11;
          }
        } while (*ppiVar11 != (int *)0x0);
        uVar8 = *(uint *)((int)pvVar6 + 0x14);
      }
      uVar13 = uVar13 + 1;
      if (uVar8 <= uVar13) goto code_r0x0021a2b0;
      iVar12 = uVar13 * 4;
    } while( true );
  }
  *(float (**) [4])(iVar1 + 8) = (m_ctrl->ph1).pUniqVertex;
LAB_0021a2c0:
  *(float (**) [4])(iVar2 + 8) = (m_ctrl->ph2).pUniqVertex;
  *(float (**) [4])(iVar1 + 0x28) = (m_ctrl->ph1).pWeightedVertex;
  *(float (**) [4])(iVar2 + 0x28) = (m_ctrl->ph2).pWeightedVertex;
  *(float (**) [4])(iVar1 + 0x18) = (m_ctrl->ph1).pCommonVertex;
  *(float (**) [4])(iVar2 + 0x18) = (m_ctrl->ph2).pCommonVertex;
  return 1;
code_r0x0021a2b0:
  *(float (**) [4])(iVar1 + 8) = pafVar3;
  goto LAB_0021a2c0;
}

static int MorphSetWorkNo(ANI_CTRL *ani_ctrl) {
  now_work = ani_ctrl;
  return 1;
}

MORPH_CTRL* MORPH_CTRL * _fixed_array_verifyrange<MORPH_CTRL>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  return;
}

type_info& MORPH_CTRL type_info function() {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

static void global constructors keyed to ch017_morph() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
