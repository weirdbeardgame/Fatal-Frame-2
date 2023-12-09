// STATUS: NOT STARTED

#include "player.h"

typedef void (*LPFUNC_SETFLASHLIGHT)(/* parameters unknown */);

PLYR_WRK plyr_wrk = {
	/* .cmn_wrk = */ {
		/* .mbox = */ {
			/* .mloop = */ 0.f,
			/* .pos = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* .bpos = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* .mv = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* .bmv = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* .rot = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* .brot = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* .spd = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* .rspd = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* .trot = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			}
		},
		/* .st = */ {
			/* .sta = */ 0,
			/* .sta_old = */ 0,
			/* .mvsta = */ 0,
			/* .hp = */ 0,
			/* .sp = */ 0,
			/* .hpmax = */ 0,
			/* .spmax = */ 0,
			/* .hp_recover_time = */ 0,
			/* .sp_recover_time = */ 0,
			/* .sp_down_fl = */ 0,
			/* .dmg = */ 0,
			/* .rhspdmg = */ 0,
			/* .rhpdmg = */ 0,
			/* .rspdmg = */ 0,
			/* .dmg_old = */ 0,
			/* .dmg_type = */ 0,
			/* .dmg_cam_flag = */ 0,
			/* .dwalk_tm = */ 0,
			/* .cond = */ 0,
			/* .cond_old = */ 0,
			/* .cond_tm = */ 0,
			/* .invisible_timer = */ 0
		},
		/* .pr_info = */ {
			/* .area_no = */ 0,
			/* .area_old = */ 0,
			/* .room_id = */ 0,
			/* .room_old = */ 0,
			/* .camera_no = */ 0,
			/* .camera_no_old = */ 0,
			/* .hight = */ 0.f
		},
		/* .mode = */ 0,
		/* .atk_eneno = */ 0,
		/* .atk_pos = */ 0,
		/* .atk_rot = */ 0,
		/* .near_ene_dist = */ 0.f,
		/* .near_ene_dist_old = */ 0.f,
		/* .near_ene_no = */ 0,
		/* .floor = */ 0,
		/* .headpos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		}
	},
	/* .modedead = */ 0,
	/* .anime_no = */ 0,
	/* .charge_num = */ 0,
	/* .charge_rate = */ 0.f,
	/* .charge_deg = */ 0.f,
	/* .frot_x = */ 0.f,
	/* .fp = */ {
		/* [0] = */ 0,
		/* [1] = */ 0
	},
	/* .no_photo_tm = */ 0,
	/* .shutter_tm = */ 0,
	/* .vib_time_sm = */ 0,
	/* .vib_time_bg = */ 0,
	/* .spd = */ {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	},
	/* .old_spd = */ {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	},
	/* .fhp = */ {
		/* [0] = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* [1] = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* [2] = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* [3] = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* [4] = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		}
	},
	/* .prot = */ 0.f,
	/* .fene_tm = */ 0,
	/* .bonus_sta = */ 0,
	/* .avoid_tm = */ 0,
	/* .avoid_flg = */ 0,
	/* .avoid_st = */ 0,
	/* .avoid_sp = */ 0,
	/* .door_flg = */ 0,
	/* .door_no = */ 0,
	/* .bwp = */ {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	},
	/* .spot_pos = */ {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	},
	/* .spot_rot = */ {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	},
	/* .fl = */ {
		/* .vDiffuse = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .vSpecular = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .vAmbient = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .vPosition = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .vDirection = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .Type = */ G3DLIGHT_DIRECTIONAL,
		/* .fAngleInside = */ 0.f,
		/* .fAngleOutside = */ 0.f,
		/* .fMaxRange = */ 0.f,
		/* .fMinRange = */ 0.f,
		/* .fFalloff = */ 0.f,
		/* .afPad0 = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f
		}
	},
	/* .fl2 = */ {
		/* .vDiffuse = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .vSpecular = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .vAmbient = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .vPosition = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .vDirection = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .Type = */ G3DLIGHT_DIRECTIONAL,
		/* .fAngleInside = */ 0.f,
		/* .fAngleOutside = */ 0.f,
		/* .fMaxRange = */ 0.f,
		/* .fMinRange = */ 0.f,
		/* .fFalloff = */ 0.f,
		/* .afPad0 = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f
		}
	},
	/* .reflectionlight = */ {
		/* .vDiffuse = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .vSpecular = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .vAmbient = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .vPosition = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .vDirection = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .Type = */ G3DLIGHT_DIRECTIONAL,
		/* .fAngleInside = */ 0.f,
		/* .fAngleOutside = */ 0.f,
		/* .fMaxRange = */ 0.f,
		/* .fMinRange = */ 0.f,
		/* .fFalloff = */ 0.f,
		/* .afPad0 = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f
		}
	},
	/* .maplight_scale = */ 0.f,
	/* .s3d = */ {
		/* .pos = */ NULL,
		/* .vel = */ NULL,
		/* .dir = */ NULL
	},
	/* .fl_pow = */ 0.f,
	/* .finder_tm = */ 0,
	/* .finder_lock_cnt = */ 0,
	/* .move_lock_cnt = */ 0,
	/* .action_lock_cnt = */ 0,
	/* .shutter_lock_cnt = */ 0,
	/* .run_lock_cnt = */ 0,
	/* .ene_tracer = */ {
		/* .mWaitCnt = */ {
			/* .mValue = */ 0
		},
		/* .mTraceEne = */ {
			/* .mValue = */ 0,
			/* .mAdd = */ 0
		}
	},
	/* .ane_curse_lock = */ 0,
	/* .hit_rad = */ 0.f,
	/* .preShutterChanceState = */ SHUTTER_CHANCE_NONE,
	/* .nowShutterChanceState = */ SHUTTER_CHANCE_NONE
};

PLCMN_WRK *pl_sta[2] = {
	/* [0] = */ &plyr_wrk,
	/* [1] = */ &sis_wrk
};

static u_short cam_cng_tm = 0;

CPLYR_SND_BUF_PLAY mio_deadly_player = {
	/* base class 0 = */ {
		/* .play_id = */ 0
	}
};

unsigned char ENE_WRK type_info node[8];
unsigned char CVariable<char, 0, 9> type_info node[8];
unsigned char CVariable<char, 0, 3> type_info node[8];
static int gbLenzShot;

static float aDmgRateByDifficulty[4] = {
	/* [0] = */ 1.5f,
	/* [1] = */ 1.f,
	/* [2] = */ 0.799999952f,
	/* [3] = */ 0.5f
};

static char look_at_pre_kaidan_flg;
static PLAYERFLASHLIGHTTYPE s_FlashlightType;
static int finder_off_lock_timer_cnt;
static int iBusterCountThisTime;

static float combo_point_mag[3] = {
	/* [0] = */ 1.3f,
	/* [1] = */ 3.5f,
	/* [2] = */ 4.5f
};

static float combo_sb_point_mag[3] = {
	/* [0] = */ 1.f,
	/* [1] = */ 1.f,
	/* [2] = */ 1.f
};

static int door_anime_no;

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3c3500;
	
  g3ddbgAssert__FbPCce(false,str_849);
  return (type_info *)this;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf7ENE_WRK((CWaitVariable<short_int> *)s_void__003f3950);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf7ENE_WRK((CWaitVariable<short_int> *)s_char__003f3958);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf7ENE_WRK((CWaitVariable<short_int> *)"unsigned int*");
  }
  return (uint **)0x0;
}

void InitPlayer() {
  G3DLIGHT *pGVar1;
  G3DLIGHT *pGVar2;
  undefined8 uVar3;
  G3DLIGHT *pGVar4;
  G3DLIGHT *pGVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  memset(&plyr_wrk,0,0x380);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  finder_off_lock_timer_cnt = 0;
  if (ingame_wrk.mDifficulty.mValue == '\x01') {
    plyr_wrk.cmn_wrk.st.hpmax = 10000;
    goto LAB_00235b4c;
  }
  if (ingame_wrk.mDifficulty.mValue < '\x02') {
    if (ingame_wrk.mDifficulty.mValue == '\0') {
                    /* end of inlined section */
      plyr_wrk.cmn_wrk.st.hpmax = 20000;
      goto LAB_00235b4c;
    }
  }
  else {
    if (ingame_wrk.mDifficulty.mValue == '\x02') {
      plyr_wrk.cmn_wrk.st.hpmax = 7000;
      goto LAB_00235b4c;
    }
    if (ingame_wrk.mDifficulty.mValue == '\x03') {
      plyr_wrk.cmn_wrk.st.hpmax = 4000;
      goto LAB_00235b4c;
    }
  }
  plyr_wrk.cmn_wrk.st.hpmax = 10000;
LAB_00235b4c:
  plyr_wrk.cmn_wrk.st.hp = plyr_wrk.cmn_wrk.st.hpmax;
  plyr_wrk.hit_rad = 150.0;
  plyr_wrk.spd[2] = 10.5;
  plyr_wrk.ane_curse_lock = 1;
  plyr_wrk.fl_pow = 1.0;
  plyr_wrk.maplight_scale = DAT_003ee6b4;
  plyr_wrk.cmn_wrk.st.spmax = 0;
  plyr_wrk.cmn_wrk.st.sp = 0;
  plyr_wrk.cmn_wrk.st.rhspdmg = 0;
  plyr_wrk.cmn_wrk.st.rhpdmg = 0;
  plyr_wrk.cmn_wrk.st.rspdmg = 0;
  plyr_wrk.finder_lock_cnt = '\0';
  plyr_wrk.move_lock_cnt = '\0';
  plyr_wrk.action_lock_cnt = '\0';
  plyr_wrk.shutter_lock_cnt = '\0';
  plyr_wrk.run_lock_cnt = '\0';
  look_at_pre_kaidan_flg = '\0';
  pGVar1 = &g_NullLight;
  pGVar2 = &plyr_wrk.fl;
  do {
    pGVar5 = pGVar2;
    pGVar4 = pGVar1;
    uVar3 = *(undefined8 *)(pGVar4->vDiffuse + 2);
    uVar6 = *(undefined8 *)pGVar4->vSpecular;
    uVar7 = *(undefined8 *)(pGVar4->vSpecular + 2);
    *(undefined8 *)pGVar5->vDiffuse = *(undefined8 *)pGVar4->vDiffuse;
    *(undefined8 *)(pGVar5->vDiffuse + 2) = uVar3;
    *(undefined8 *)pGVar5->vSpecular = uVar6;
    *(undefined8 *)(pGVar5->vSpecular + 2) = uVar7;
    pGVar1 = (G3DLIGHT *)pGVar4->vAmbient;
    pGVar2 = (G3DLIGHT *)pGVar5->vAmbient;
  } while (pGVar4->vAmbient != &g_NullLight.fMinRange);
  uVar3 = *(undefined8 *)(pGVar4->vAmbient + 2);
  *(undefined8 *)pGVar5->vAmbient = g_NullLight._96_8_;
  *(undefined8 *)(pGVar5->vAmbient + 2) = uVar3;
  pGVar1 = &g_NullLight;
  pGVar2 = &plyr_wrk.fl2;
  do {
    pGVar5 = pGVar2;
    pGVar4 = pGVar1;
    uVar3 = *(undefined8 *)(pGVar4->vDiffuse + 2);
    uVar6 = *(undefined8 *)pGVar4->vSpecular;
    uVar7 = *(undefined8 *)(pGVar4->vSpecular + 2);
    *(undefined8 *)pGVar5->vDiffuse = *(undefined8 *)pGVar4->vDiffuse;
    *(undefined8 *)(pGVar5->vDiffuse + 2) = uVar3;
    *(undefined8 *)pGVar5->vSpecular = uVar6;
    *(undefined8 *)(pGVar5->vSpecular + 2) = uVar7;
    pGVar1 = (G3DLIGHT *)pGVar4->vAmbient;
    pGVar2 = (G3DLIGHT *)pGVar5->vAmbient;
  } while (pGVar4->vAmbient != &g_NullLight.fMinRange);
                    /* end of inlined section */
  uVar3 = *(undefined8 *)(pGVar4->vAmbient + 2);
  *(undefined8 *)pGVar5->vAmbient = g_NullLight._96_8_;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
                    /* end of inlined section */
  *(undefined8 *)(pGVar5->vAmbient + 2) = uVar3;
  plyr_wrk.fl.vDirection[0] = (float)g_v0010._0_8_;
  plyr_wrk.fl.vDirection[1] = SUB84(g_v0010._0_8_,4);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
  plyr_wrk.fl.vDirection[2] = g_v0010[2];
  plyr_wrk.fl.vDirection[3] = g_v0010[3];
                    /* end of inlined section */
  plyr_wrk.fl.Type = G3DLIGHT_SPOT;
  pGVar1 = &g_NullLight;
  pGVar2 = &plyr_wrk.reflectionlight;
  do {
    pGVar5 = pGVar2;
    pGVar4 = pGVar1;
    uVar3 = *(undefined8 *)(pGVar4->vDiffuse + 2);
    uVar6 = *(undefined8 *)pGVar4->vSpecular;
    uVar7 = *(undefined8 *)(pGVar4->vSpecular + 2);
    *(undefined8 *)pGVar5->vDiffuse = *(undefined8 *)pGVar4->vDiffuse;
    *(undefined8 *)(pGVar5->vDiffuse + 2) = uVar3;
    *(undefined8 *)pGVar5->vSpecular = uVar6;
    *(undefined8 *)(pGVar5->vSpecular + 2) = uVar7;
    pGVar1 = (G3DLIGHT *)pGVar4->vAmbient;
    pGVar2 = (G3DLIGHT *)pGVar5->vAmbient;
  } while (pGVar4->vAmbient != &g_NullLight.fMinRange);
  uVar3 = *(undefined8 *)(pGVar4->vAmbient + 2);
  *(undefined8 *)pGVar5->vAmbient = g_NullLight._96_8_;
  *(undefined8 *)(pGVar5->vAmbient + 2) = uVar3;
  plyr_wrk.reflectionlight.Type = G3DLIGHT_POINT;
  Init__10CEneTracer(&plyr_wrk.ene_tracer);
  s_FlashlightType = PFT_HAND;
  return;
}

void ReleasePlayer() {
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/zero2_util.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/zero2_util.h */
  SndBufFadeStop((int)mio_deadly_player.field0_0x0.play_id,1);
  mio_deadly_player.field0_0x0.play_id = (CSND_BUF_PLAY)0x300000;
  return;
}

void ClrEneSta() {
	u_char i;
	
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(uVar1,10);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
    uVar2 = uVar1 + 1 & 0xff;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
    ene_wrk.field0_0x0.m_aData[uVar1].st.sta =
         ene_wrk.field0_0x0.m_aData[uVar1].st.sta & 0xfffffffffffff12b;
    uVar1 = uVar2;
  } while (uVar2 < 10);
  return;
}

void PlyrDebug() {
  return;
}

void PlayerMainCmn(int flight_sw) {
	ANI_CTRL *ani_ctrl;
	
  bool bVar1;
  ANI_CTRL *ani_ctrl;
  
  PlyrDebug__Fv();
  plyr_wrk.s3d.pos = (float (*) [4])plyr_wrk.cmn_wrk.mbox.pos;
  if (plyr_wrk.move_lock_cnt == '\0') {
    PlyrBattleCheck__Fv();
    PlyrRoomCheck__Fv();
    PlyrCondCheck__Fv();
    PlyrVibCheck__Fv();
    ClrEneSta__Fv();
    PlyrSPdownCtrl__FP9PLCMN_WRK(pl_sta[0]);
    PlyrHPdownCtrl__FP9PLCMN_WRK(pl_sta[0]);
    MovePlyrStairs__Fv();
    if ((3 < (byte)(plyr_wrk.cmn_wrk.mode - 1)) &&
       (bVar1 = plyr_wrk.cmn_wrk.st.invisible_timer == 0,
       plyr_wrk.cmn_wrk.st.invisible_timer = plyr_wrk.cmn_wrk.st.invisible_timer + -1, bVar1)) {
      plyr_wrk.cmn_wrk.st.invisible_timer = 0;
    }
    PlyrAttractSisMain__Fv();
    PlyrMepachiCtrl__Fv();
    CalcGirlCoord__Fi(0);
    PlyrAcsAlphaCtrl__Fv();
    ani_ctrl = plyr_mdlGetANI_CTRL__Fv();
    if (ani_ctrl != (ANI_CTRL *)0x0) {
      acsClothCtrl__FP8ANI_CTRLPUiUiUc(ani_ctrl,ani_ctrl->mpk_p,ani_ctrl->mdl_no,'\0');
    }
    if (flight_sw == 1) {
      PlyrFlashlight__Fi(1);
    }
  }
  return;
}

void PlyrNormalCtrl() {
  if (plyr_wrk.move_lock_cnt == '\0') {
    switch(plyr_wrk.cmn_wrk.mode) {
    case '\0':
      PlyrNModeCtrl__Fv();
      break;
    case '\x01':
    case '\x02':
    case '\x03':
    case '\x04':
    case '\b':
    default:
      if (plyr_wrk.cmn_wrk.mode == '\x02') {
        printf("<<<<<<<<<WARNING FILE[%s] LINE[%d]>>>>>>>>>>\n");
        PrintWarningReal("PMODE IS ILLEGAL %d");
        plyr_wrk.cmn_wrk.mode = '\0';
        PlyrNModeCtrl__Fv();
      }
      break;
    case '\x05':
      PlyrFinderIn__Fv();
      break;
    case '\x06':
      PlyrFinderCtrl__Fv();
      break;
    case '\a':
      PlyrFinderEnd__Fv();
      break;
    case '\t':
      goto LAB_00235fa4;
    }
    PlyrFlashlight__Fi(1);
  }
LAB_00235fa4:
  return;
}

void PlyrMotionMovement() {
	float tv[4];
	MOVE_BOX *mb;
	
  float tv [4];
  
  _ClearVector__FPf(tv);
  PlyrMoveChk__FP8MOVE_BOXPff((MOVE_BOX *)&plyr_wrk,tv,10.0);
  PlyrPosSet__FP8MOVE_BOXPf((MOVE_BOX *)&plyr_wrk,tv);
  PlyrFlashlight__Fi(0);
  return;
}

int PlayerGameOver() {
  int iVar1;
  
  if ((plyr_wrk.move_lock_cnt == '\0') && (plyr_wrk.cmn_wrk.mode == '\t')) {
    iVar1 = PlyrDead__Fv();
    return iVar1;
  }
  return 0;
}

void ReqPlyrDead(int mode) {
  SendIngameGameOverPre__Fi(1);
  plyr_wrk.modedead = (uchar)mode;
  plyr_wrk.cmn_wrk.mode = '\t';
  return;
}

int PlyrDead() {
	static int cnt = 0;
	int ret;
	DISP_SQAR dsq;
	SQAR_DAT fade_bg;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  uchar *puVar4;
  uchar uVar5;
  float *center;
  int iVar6;
  DISP_SQAR dsq;
  SQAR_DAT fade_bg;
  float afStack_50 [4];
  float afStack_40 [4];
  
  uVar5 = plyr_wrk.cmn_wrk.atk_eneno;
  puVar1 = (undefined *)((int)&fade_bg.h + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003c35d8 >> (7 - uVar2) * 8;
  fade_bg._0_8_ = DAT_003c35d8;
  puVar1 = (undefined *)((int)&fade_bg.y + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003c35e0 >> (7 - uVar2) * 8;
  fade_bg._8_8_ = DAT_003c35e0;
  uVar2 = (uint)&fade_bg.alpha & 7;
  puVar4 = &fade_bg.alpha + -uVar2;
  *(ulong *)puVar4 = *(ulong *)puVar4 & -1L << (uVar2 + 1) * 8 | DAT_003c35e8 >> (7 - uVar2) * 8;
  fade_bg._16_8_ = DAT_003c35e8;
  iVar6 = 0;
  switch(plyr_wrk.modedead) {
  default:
    goto switchD_0023610c_caseD_0;
  case '\x01':
  case '\x03':
    plyr_wrk.modedead = '\x1e';
    cnt_1138 = 0;
    return 0;
  case '\n':
    goto LAB_00236490;
  case '\x14':
  case '\x1e':
    break;
  case '\x15':
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(plyr_wrk.cmn_wrk.atk_eneno,10);
    center = afStack_50;
                    /* end of inlined section */
    goto LAB_00236238;
  case '\x16':
    cnt_1138 = cnt_1138 + 1;
    if (cnt_1138 < 0xf) {
      return 0;
    }
    FadeOutReq__FUcUcUcUi(0xff,0xff,0xff,0x1e);
    cnt_1138 = 0;
    break;
  case '\x17':
    if (cnt_1138 + 1 < 0x1e) {
      cnt_1138 = cnt_1138 + 1;
      return 0;
    }
    cnt_1138 = 0;
    break;
  case '\x18':
    cnt_1138 = cnt_1138 + 1;
    if (cnt_1138 < 0x1e) {
      return 0;
    }
    plyr_wrk.cmn_wrk.st.hp = 0;
    plyr_wrk.cmn_wrk.st.sp = 0;
    EndPlyrApproachCameraCtrl__Fv();
    FadeInReq__FUcUcUcUi(0xff,0xff,0xff,0x1e);
    SetPlyrAnime__FUcUc('@','\x02');
    cnt_1138 = 0;
    goto LAB_002363a4;
  case '\x19':
    cnt_1138 = cnt_1138 + 1;
    if (cnt_1138 < 0x1e) {
      return 0;
    }
    goto LAB_00236490;
  case '\x1f':
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(plyr_wrk.cmn_wrk.atk_eneno,10);
    center = afStack_40;
LAB_00236238:
    GetCenterPoint__FPfN20
              (center,plyr_wrk.cmn_wrk.mbox.pos,
               (float *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox +
                        ((uint)uVar5 * 0x48 + (uint)uVar5) * 0x10 + 0x10));
                    /* end of inlined section */
    ReqPlyrApproachCameraCtrl__FPfff(center,600.0,700.0);
    plyr_mdlBankPlay__FiiiiP11_SND_3D_SETii(2,1,1,0,&plyr_wrk.s3d,0x3200,0x1000);
    plyr_wrk.modedead = plyr_wrk.modedead + '\x01';
    cnt_1138 = 0;
    return 0;
  case ' ':
    if (cnt_1138 + 1 < 0x14) {
      cnt_1138 = cnt_1138 + 1;
      return 0;
    }
    cnt_1138 = 0;
    break;
  case '!':
    CopySqrDToSqr__FP9DISP_SQARP8SQAR_DAT(&dsq,&fade_bg);
    dsq.alpha = (uchar)((cnt_1138 << 7) / 0x1e);
    DispSqrD__FP9DISP_SQAR(&dsq);
    if (cnt_1138 + 1 < 0x1e) {
      cnt_1138 = cnt_1138 + 1;
      return 0;
    }
    cnt_1138 = 0;
    SetDrawFLG_PL_GameOver__Fv();
    EndPlyrApproachCameraCtrl__Fv();
    ReqPlyrDeadCameraCtrl__FPffffT0
              (plyr_wrk.cmn_wrk.mbox.pos,200.0,500.0,1000.0,plyr_wrk.cmn_wrk.mbox.rot);
    goto LAB_002363a4;
  case '\"':
    CopySqrDToSqr__FP9DISP_SQARP8SQAR_DAT(&dsq,&fade_bg);
    dsq.alpha = 0x80;
    DispSqrD__FP9DISP_SQAR(&dsq);
    cnt_1138 = cnt_1138 + 1;
    if (cnt_1138 < 0x1e) {
      return 0;
    }
    plyr_wrk.cmn_wrk.st.hp = 0;
    plyr_wrk.cmn_wrk.st.sp = 0;
    SetPlyrAnime__FUcUc('@','\x02');
    cnt_1138 = 0;
LAB_002363a4:
    plyr_wrk.modedead = plyr_wrk.modedead + '\x01';
    return 0;
  case '#':
    CopySqrDToSqr__FP9DISP_SQARP8SQAR_DAT(&dsq,&fade_bg);
    dsq.alpha = (uchar)(((0x1e - cnt_1138) * 0x80) / 0x1e);
    DispSqrD__FP9DISP_SQAR(&dsq);
    if (cnt_1138 == 0xe) {
      plyr_mdlBankPlay__FiiiiP11_SND_3D_SETii(4,1,1,0,&plyr_wrk.s3d,0x3200,0x1000);
    }
    if (cnt_1138 + 1 < 0x1e) {
      cnt_1138 = cnt_1138 + 1;
      return 0;
    }
    cnt_1138 = 0;
    break;
  case '$':
    cnt_1138 = cnt_1138 + 1;
    if (cnt_1138 < 0x14) {
      return 0;
    }
    FadeOutReq__FUcUcUcUi('\0','\0','\0',0x1e);
    cnt_1138 = 0;
    break;
  case '%':
    if (cnt_1138 + 1 < 0x32) {
      cnt_1138 = cnt_1138 + 1;
      return 0;
    }
    cnt_1138 = 0;
    EndPlyrApproachCameraCtrl__Fv();
LAB_00236490:
    iVar6 = 1;
    SetOpenCondSwitch__FUc('\x01');
  }
  plyr_wrk.modedead = plyr_wrk.modedead + '\x01';
switchD_0023610c_caseD_0:
  return iVar6;
}

void PlyrMepachiCtrl() {
	static int no;
	
  int iVar1;
  
  if (__tmp_10_1143 == 0) {
    no_1142 = GetRandValI__Fi(200);
    __tmp_10_1143 = 1;
  }
  iVar1 = IsPlayerMimParts__Fi(5);
  if ((iVar1 == 0) && (no_1142 = no_1142 + -1, no_1142 == -1)) {
    ReqPlayerMim__Fii(5,0);
    no_1142 = GetRandValI__Fi(200);
  }
  return;
}

static void PlyrAttractSisMain() {
	float dist;
	static int rand_sec;
	LOOK_AT_PARAM param;
	
  int iVar1;
  float fVar2;
  _LOOK_AT_PARAM param;
  
  fVar2 = GetDist_Sister2Player__Fv();
  if (__tmp_11_1148 == 0) {
    iVar1 = GetRandValI__Fi(4);
    __tmp_11_1148 = 1;
    rand_sec_1147 = iVar1 * 0x1e + 0x78;
  }
  iVar1 = IsSisterTurn__Fv();
  if (iVar1 == 0) {
    param.eye_spd = DAT_003ee6c4;
    param.head_spd = DAT_003ee6c8;
    param.chest_spd = DAT_003ee6cc;
  }
  else {
    param.eye_spd = DAT_003ee6b8;
    param.head_spd = DAT_003ee6bc;
    param.chest_spd = DAT_003ee6c0;
  }
  sceVu0CopyVector(&param,0x33ce90);
  if (DAT_003ee6d0 < fVar2) {
    SisNeckRegisterTarget__FP14_LOOK_AT_PARAM26_LOOK_TARGET_PRIORITY_MAYUf
              (&param,LTP_MAYU_MIO_FAR,DAT_003f3980);
  }
  else {
    iVar1 = dpcmp((long)(double)fVar2,_DAT_003c3690);
    if (iVar1 < 0) {
      SisNeckRegisterTarget__FP14_LOOK_AT_PARAM26_LOOK_TARGET_PRIORITY_MAYUf
                (&param,LTP_MAYU_MIO_NEAR,DAT_003f3980);
    }
    else {
      iVar1 = rand_sec_1147 + -1;
      if (rand_sec_1147 < 0) {
        rand_sec_1147 = iVar1;
        if (iVar1 < -900) {
          iVar1 = GetRandValI__Fi(4);
          rand_sec_1147 = iVar1 * 0x1e + 0x78;
        }
      }
      else {
        rand_sec_1147 = iVar1;
        SisNeckRegisterTarget__FP14_LOOK_AT_PARAM26_LOOK_TARGET_PRIORITY_MAYUf
                  (&param,LTP_MAYU_MIO_MIDDLE,DAT_003f3980);
      }
    }
  }
  return;
}

void PlyrBattleCheck() {
	int i;
	
  int iVar1;
  int wrk_no;
  uchar *puVar2;
  
  wrk_no = 0;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  plyr_wrk.cmn_wrk.st.sta = plyr_wrk.cmn_wrk.st.sta & 0xffffffffffffff9f;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(0,10);
                    /* end of inlined section */
  puVar2 = &ene_wrk.field0_0x0.m_aData[0].type;
  do {
    iVar1 = IsActEnemy__Fi(wrk_no);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    if ((iVar1 == 0) ||
       (_fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(wrk_no,10), *puVar2 == '\x02')) {
      iVar1 = IsActEnemy__Fi(wrk_no);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      if ((iVar1 != 0) &&
         (_fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(wrk_no,10), *puVar2 == '\x02')) {
                    /* end of inlined section */
        plyr_wrk.cmn_wrk.st.sta = plyr_wrk.cmn_wrk.st.sta | 0x40;
      }
    }
    else {
                    /* end of inlined section */
      plyr_wrk.cmn_wrk.st.sta = plyr_wrk.cmn_wrk.st.sta | 0x20;
    }
    wrk_no = wrk_no + 1;
    puVar2 = puVar2 + 0x490;
  } while (wrk_no < 10);
  return;
}

int PlyrDamageCtrl() {
	ENE_WRK *ew;
	int ret;
	u_char pani_dmgin_tbl[3][2];
	u_char pani_dmg_tbl[2];
	u_char pani_out_tbl[2];
	u_char pani_avo_tbl[2];
	float tv[4];
	
  uchar *puVar1;
  uint uVar2;
  uchar uVar3;
  int iVar4;
  ushort uVar5;
  int iVar6;
  ENE_WRK *pEneWrk;
  uchar *puVar7;
  float fVar8;
  float dist;
  uchar pani_dmgin_tbl [3] [2];
  uchar pani_dmg_tbl [2];
  uchar pani_out_tbl [2];
  uchar pani_avo_tbl [2];
  float tv [4];
  
  uVar3 = plyr_wrk.cmn_wrk.atk_eneno;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(plyr_wrk.cmn_wrk.atk_eneno,10);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar6 = (uint)uVar3 * 0x48 + (uint)uVar3;
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  puVar7 = pani_out_tbl;
  puVar1 = pani_dmgin_tbl[1] + 1;
  uVar2 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar2) =
       *(uint *)(puVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 | DAT_003f3988 >> (3 - uVar2) * 8;
  pani_dmgin_tbl[0][0] = (undefined)DAT_003f3988;
  pani_dmgin_tbl[0][1] = DAT_003f3988._1_1_;
  pani_dmgin_tbl[1][0] = DAT_003f3988._2_1_;
  pani_dmgin_tbl[1][1] = DAT_003f3988._3_1_;
  pani_dmgin_tbl[2][0] = DAT_003f398c;
  pani_dmgin_tbl[2][1] = DAT_003f398d;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  pEneWrk = (ENE_WRK *)(ene_wrk.field0_0x0.m_aData[0].bep + iVar6 * 4);
                    /* end of inlined section */
  pani_dmg_tbl[0] = DAT_003f3990;
  pani_dmg_tbl[1] = DAT_003f3991;
  pani_out_tbl[0] = DAT_003f3998;
  pani_out_tbl[1] = DAT_003f3999;
  pani_avo_tbl[0] = DAT_003f39a0;
  pani_avo_tbl[1] = DAT_003f39a1;
  if (plyr_wrk.cmn_wrk.st.hp == 0) {
    plyr_wrk.cmn_wrk.st.dwalk_tm = 0;
    if (plyr_wrk.cmn_wrk.st.dmg_type != 4) {
      ene_wrk.field0_0x0.m_aData[0].fp[iVar6 * 8 + -7] = 0;
    }
    if (plyr_wrk.cmn_wrk.mode == '\t') {
      EndPlyrApproachCameraCtrl__Fv();
      return 1;
    }
    if (plyr_wrk.cmn_wrk.mode != '\x04') {
      if (plyr_wrk.cmn_wrk.st.dmg_type == 3) {
        SetPlyrAnime__FUcUc(puVar7[plyr_wrk.cmn_wrk.atk_pos],'\x01');
        PlayerChangeMode__Fi(4);
        return 0;
      }
      if ((ushort)plyr_wrk.cmn_wrk.st.dmg_type < 4) {
        if (plyr_wrk.cmn_wrk.st.dmg_type == 0) {
          return 0;
        }
      }
      else if (plyr_wrk.cmn_wrk.st.dmg_type != 4) {
        return 0;
      }
      PlayerChangeMode__Fi(4);
      return 0;
    }
  }
  if ((plyr_wrk.cmn_wrk.st.dmg_type != 4) &&
     (ene_wrk.field0_0x0.m_aData[0].directionaldiffuse[iVar6 * 4 + -3] != 5.605194e-45)) {
    PlayerChangeMode__Fi(0);
    EndPlyrApproachCameraCtrl__Fv();
    plyr_wrk.cmn_wrk.st.sta = plyr_wrk.cmn_wrk.st.sta & 0xfffffffffffeffff;
    return 1;
  }
  if (plyr_wrk.cmn_wrk.mode == '\x02') {
LAB_00236b78:
    if ((plyr_wrk.cmn_wrk.st.dmg_type != 4) &&
       (((uint)ene_wrk.field0_0x0.m_aData[0].directionaldiffuse[iVar6 * 4 + -1] & 0x2000) != 0)) {
      SetOpenCondSwitch__FUc('\0');
      ReqPlyrDead__Fi(3);
      ene_wrk.field0_0x0.m_aData[0].fp[iVar6 * 8 + -7] = 0;
      if (plyr_wrk.cmn_wrk.st.dmg_type != 3) {
        return 1;
      }
      ReqAnm__FPviii((void *)ene_wrk.field0_0x0.m_aData[0].directionaldiffuse[iVar6 * 4 + -2],10,
                     (uint)*(ushort *)
                            ((int)ene_wrk.field0_0x0.m_aData[0].directionaldiffuse[iVar6 * 4 + 4] +
                            0x16),9);
      return 1;
    }
    if (plyr_wrk.cmn_wrk.st.dmg_type != 2) {
      if ((ushort)plyr_wrk.cmn_wrk.st.dmg_type < 3) {
        if (plyr_wrk.cmn_wrk.st.dmg_type != 1) {
          return 0;
        }
      }
      else {
        if (plyr_wrk.cmn_wrk.st.dmg_type == 3) {
          uVar3 = PlyrAvoidCheck__Fv();
          if (uVar3 == '\0') {
            return 0;
          }
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
          if (((plyr_wrk.avoid_flg == 1) &&
              (((uint)m_plyr_camera.camera_power_up.mAdditionFlg.flag_32[0] & 2) != 0)) &&
             (iVar4 = GetPlyrItemHaveNum__Fi(10), 0 < iVar4)) {
            iVar4 = CheckPlyrAnimeEnd__Fi
                              ((uint)pani_dmgin_tbl[plyr_wrk.cmn_wrk.atk_rot]
                                     [plyr_wrk.cmn_wrk.atk_pos]);
            uVar3 = plyr_wrk.cmn_wrk.atk_pos;
            if (iVar4 == 0) {
              return 0;
            }
            ene_wrk.field0_0x0.m_aData[0].fp[iVar6 * 8 + -7] = 0;
            plyr_wrk.cmn_wrk.st.sta = plyr_wrk.cmn_wrk.st.sta | 0x20000;
            plyr_wrk.cmn_wrk.st.dwalk_tm = 0;
            SetPlyrAnime__FUcUc(pani_avo_tbl[uVar3],'\x01');
            EndPlyrApproachCameraCtrl__Fv();
            EffectCameraFlashReq__Fv();
            PlayerChangeMode__Fi(4);
            plyr_wrk.cmn_wrk.st.sta = plyr_wrk.cmn_wrk.st.sta | 0x10000;
            plyr_mdlBankPlay__FiiiiP11_SND_3D_SETii(1,1,1,0,&plyr_wrk.s3d,0x3200,0x1000);
            FinderBankPlay__FiiiiP11_SND_3D_SETii(3,1,1,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
            plyr_wrk.cmn_wrk.st.dmg = 0;
            return 0;
          }
          iVar6 = CheckPlyrAnimeEnd__Fi
                            ((uint)pani_dmgin_tbl[plyr_wrk.cmn_wrk.atk_rot]
                                   [plyr_wrk.cmn_wrk.atk_pos]);
          if (iVar6 == 0) {
            return 0;
          }
          plyr_wrk.cmn_wrk.st.sta = plyr_wrk.cmn_wrk.st.sta | 0x20000;
          CallNega2__Fiii(0,0x2d,0x1e);
          ReqPlyrHPSPdown__FP9PLCMN_WRKUs(&plyr_wrk.cmn_wrk,plyr_wrk.cmn_wrk.st.dmg);
          PlayerChangeMode__Fi(3);
          SetPlyrAnime__FUcUc(pani_dmg_tbl[plyr_wrk.cmn_wrk.atk_pos],'\x01');
          FinderBankPlay__FiiiiP11_SND_3D_SETii(5,1,1,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
          plyr_mdlBankPlay__FiiiiP11_SND_3D_SETii(2,1,1,0,&plyr_wrk.s3d,0x3200,0x1000);
          plyr_wrk.cmn_wrk.st.dmg = 0;
          return 0;
        }
        if (plyr_wrk.cmn_wrk.st.dmg_type != 4) {
          return 0;
        }
      }
    }
    CallNega2__Fiii(0,0xf,0x1e);
    ReqPlyrHPSPdown__FP9PLCMN_WRKUs(&plyr_wrk.cmn_wrk,plyr_wrk.cmn_wrk.st.dmg);
    PlyrVibCtrl__FUc('\x0f');
    plyr_wrk.cmn_wrk.st.dmg = 0;
    PlayerChangeMode__Fi(4);
    FinderBankPlay__FiiiiP11_SND_3D_SETii(5,1,1,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    plyr_mdlBankPlay__FiiiiP11_SND_3D_SETii(0,1,1,0,&plyr_wrk.s3d,0x3200,0x1000);
    return 0;
  }
  if (plyr_wrk.cmn_wrk.mode < 3) {
    if (plyr_wrk.cmn_wrk.mode != '\x01') {
      return 0;
    }
    plyr_wrk.avoid_tm = 0;
    plyr_wrk.cmn_wrk.st.mvsta = plyr_wrk.cmn_wrk.st.mvsta & 0xffffffffffffe7ff;
    plyr_wrk.avoid_flg = 0;
    iVar4 = GetRandValI__Fi(6);
    plyr_wrk.avoid_st = (short)iVar4 + 0xf;
    iVar4 = GetRandValI__Fi(10);
    plyr_wrk.avoid_sp = (short)iVar4 + 5;
    iVar4 = GetPALMode__Fv();
    if (iVar4 != 0) {
      fVar8 = (float)(uint)(ushort)plyr_wrk.avoid_st / DAT_003ee6d4;
      plyr_wrk.avoid_st = (short)(int)fVar8;
      if (2.147484e+09 <= fVar8) {
        plyr_wrk.avoid_st = (short)(int)(fVar8 - 2.147484e+09);
      }
      fVar8 = (float)(uint)(ushort)plyr_wrk.avoid_sp / DAT_003ee6d8;
      if (2.147484e+09 <= fVar8) {
        plyr_wrk.avoid_sp = (short)(int)(fVar8 - 2.147484e+09);
      }
      else {
        plyr_wrk.avoid_sp = (short)(int)fVar8;
      }
    }
    printf("Avoid accept time [ %2d ~ %2d (%dfr) ]\n");
    if (plyr_wrk.cmn_wrk.st.dmg_type != 4) {
      GetCenterPoint__FPfN20
                (tv,plyr_wrk.cmn_wrk.mbox.pos,
                 (float *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox + iVar6 * 0x10 + 0x10));
      if (*(short *)((int)ene_wrk.field0_0x0.m_aData[0].directionaldiffuse[iVar6 * 4 + 4] + 0x14) ==
          0x27) {
        ReqPlyrDamageCameraCtrl__FPfffP7ENE_WRK(tv,450.0,DAT_003ee6dc,pEneWrk);
      }
      else {
        if (plyr_wrk.cmn_wrk.atk_pos == '\x01') {
          fVar8 = 320.0;
          dist = 800.0;
        }
        else {
          fVar8 = 450.0;
          dist = 700.0;
        }
        ReqPlyrDamageCameraCtrl__FPfffP7ENE_WRK(tv,fVar8,dist,pEneWrk);
      }
    }
    PlayerChangeMode__Fi(2);
    goto LAB_00236b78;
  }
  if (plyr_wrk.cmn_wrk.mode == '\x03') {
    if (plyr_wrk.cmn_wrk.st.dmg_type == 3) {
      ReqPlyrHPSPdown__FP9PLCMN_WRKUs
                (&plyr_wrk.cmn_wrk,
                 (ushort)*(byte *)((int)ene_wrk.field0_0x0.m_aData[0].dist_p_e[iVar6 * 4 + -2] +
                                  0x58));
      uVar3 = LeverGachaChk__Fv();
      uVar5 = ene_wrk.field0_0x0.m_aData[0].fp[iVar6 * 8 + -7];
      if (((*(ulong *)(ene_wrk.field0_0x0.m_aData[0].dist_p_e + iVar6 * 4 + -0x12) & 0x8000) != 0)
         && (uVar5 != 0)) {
        if ((uVar3 != '\0') && (0x16 < uVar5)) {
          ene_wrk.field0_0x0.m_aData[0].fp[iVar6 * 8 + -7] = uVar5 - 3;
        }
        VibrateRequest1__FUsUs(0,1);
        uVar5 = ene_wrk.field0_0x0.m_aData[0].fp[iVar6 * 8 + -7];
      }
      if (0x14 < uVar5) {
        CallDeform2__Fiiiii(0,0,(uint)ene_wrk.field0_0x0.m_aData[0].fp[iVar6 * 8 + -7],7,0xd);
        uVar5 = ene_wrk.field0_0x0.m_aData[0].fp[iVar6 * 8 + -7];
      }
      if (uVar5 != 0) {
        return 0;
      }
      SetPlyrAnime__FUcUc(puVar7[plyr_wrk.cmn_wrk.atk_pos],'\x01');
    }
    else if ((ushort)plyr_wrk.cmn_wrk.st.dmg_type < 4) {
      if (plyr_wrk.cmn_wrk.st.dmg_type == 0) {
        return 0;
      }
    }
    else if (plyr_wrk.cmn_wrk.st.dmg_type != 4) {
      return 0;
    }
    PlayerChangeMode__Fi(4);
    return 0;
  }
  if (plyr_wrk.cmn_wrk.mode != '\x04') {
    return 0;
  }
  if (plyr_wrk.cmn_wrk.st.dmg_type == 2) {
    PlayerChangeMode__Fi(0);
    EndPlyrApproachCameraCtrl__Fv();
    return 1;
  }
  if ((ushort)plyr_wrk.cmn_wrk.st.dmg_type < 3) {
    if (plyr_wrk.cmn_wrk.st.dmg_type != 1) {
      return 0;
    }
  }
  else {
    if (plyr_wrk.cmn_wrk.st.dmg_type == 3) {
      if ((plyr_wrk.cmn_wrk.st.sta & 0x10000) != 0) {
        puVar7 = pani_avo_tbl;
      }
      iVar6 = CheckPlyrAnimeEnd__Fi((uint)puVar7[plyr_wrk.cmn_wrk.atk_pos]);
      if (iVar6 == 0) {
        return 0;
      }
      goto LAB_00236fec;
    }
    if (plyr_wrk.cmn_wrk.st.dmg_type != 4) {
      return 0;
    }
  }
  if (((byte)(plyr_wrk.anime_no - 0x38) < 2) && ((plyr_wrk.cmn_wrk.st.sta & 0x2000) == 0)) {
    return 0;
  }
LAB_00236fec:
  PlayerChangeMode__Fi(0);
  EndPlyrApproachCameraCtrl__Fv();
  return 1;
}

u_char PlyrAvoidCheck() {
  plyr_wrk.avoid_tm = plyr_wrk.avoid_tm + 1;
  if ((((ushort)plyr_wrk.avoid_st <= (ushort)plyr_wrk.avoid_tm) &&
      ((uint)(ushort)plyr_wrk.avoid_tm <
       (uint)(ushort)plyr_wrk.avoid_st + (uint)(ushort)plyr_wrk.avoid_sp)) &&
     ((*paddat[0xd] == 1 || (*paddat[0xe] == 1)))) {
    plyr_wrk.avoid_flg = plyr_wrk.avoid_flg + 1;
  }
  return (uint)(ushort)plyr_wrk.avoid_st + (uint)(ushort)plyr_wrk.avoid_sp <=
         (uint)(ushort)plyr_wrk.avoid_tm;
}

u_char LeverGachaChk() {
	u_char result;
	static u_char lever_dir_old = 255;
	
  uint uVar1;
  uchar uVar2;
  
  uVar1 = PlyrLeverInputChk__Fv();
  uVar2 = '\0';
  if ((uVar1 == 2) && (uVar2 = '\0', lever_dir_old_1164 != pad[0].an_dir[0])) {
    lever_dir_old_1164 = pad[0].an_dir[0];
    uVar2 = '\x01';
  }
  return uVar2;
}

void RTSpiritsDownModeOn(int time) {
  m_plyr_camera.filament.rt_ev_wrk.sptype = '\x01';
  m_plyr_camera.filament.rt_ev_wrk.sptime = time;
  return;
}

void RTSpiritsDownModeOff() {
  m_plyr_camera.filament.rt_ev_wrk.sptype = '\0';
  return;
}

void ReqPlyrHPSPdownP(PLCMN_WRK *cmn, u_short per) {
  if (debug_var.muteki == 0) {
    (cmn->st).rhspdmg =
         (cmn->st).rhspdmg + (short)((int)((uint)(ushort)per * (uint)(ushort)(cmn->st).spmax) / 100)
    ;
  }
  return;
}

void ReqPlyrHPdownP(PLCMN_WRK *cmn, u_short per) {
  if (debug_var.muteki == 0) {
    (cmn->st).rhpdmg =
         (cmn->st).rhpdmg + (short)((int)((uint)(ushort)per * (uint)(ushort)(cmn->st).hpmax) / 100);
  }
  return;
}

void ReqPlyrSPdownP(PLCMN_WRK *cmn, u_short per) {
  if (debug_var.muteki == 0) {
    (cmn->st).rspdmg =
         (cmn->st).rspdmg + (short)((int)((uint)(ushort)per * (uint)(ushort)(cmn->st).spmax) / 100);
  }
  return;
}

void ReqPlyrHPSPdown(PLCMN_WRK *cmn, u_short deg) {
  if (debug_var.muteki == 0) {
    (cmn->st).rhspdmg = deg + (cmn->st).rhspdmg;
  }
  return;
}

void ReqPlyrHPdown(PLCMN_WRK *cmn, u_short deg) {
  if (debug_var.muteki == 0) {
    (cmn->st).rhpdmg = deg + (cmn->st).rhpdmg;
  }
  return;
}

void ReqPlyrSPdown(PLCMN_WRK *cmn, u_short deg) {
  if (debug_var.muteki == 0) {
    (cmn->st).rspdmg = deg + (cmn->st).rspdmg;
  }
  return;
}

void PlyrSPdownCtrl(PLCMN_WRK *cmn) {
	ENE_WRK *ew;
	STATUS_DAT *st;
	int i;
	float f;
	float dist;
	u_short down1;
	u_short down2;
	
  ushort uVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  int iVar8;
  fixed_array<ENE_WRK,10> *pfVar9;
  float fVar10;
  float fVar11;
  
  fVar10 = DAT_003ee6e0;
  if ((m_plyr_camera.filament.rt_ev_wrk.sptype == '\x01') && (cmn == pl_sta[0])) {
    if (m_plyr_camera.filament.rt_ev_wrk.sptime == 0) {
      trap(7);
    }
    (cmn->st).rspdmg = (cmn->st).rspdmg;
    (cmn->st).sta = (cmn->st).sta | 0x400;
  }
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(0,10);
  pfVar9 = &ene_wrk;
                    /* end of inlined section */
  iVar4 = 0;
  do {
    iVar8 = iVar4 + 1;
    iVar4 = IsActEnemy__Fi(iVar4);
    if (((iVar4 != 0) && ((((ENE_WRK *)pfVar9)->attr & 0x20) == 0)) &&
       (fVar11 = GetDistV__FPCfT0((cmn->mbox).pos,(((ENE_WRK *)pfVar9)->mbox).pos), fVar11 <= fVar10
       )) {
      fVar10 = fVar11;
    }
    pfVar9 = (fixed_array<ENE_WRK,10> *)((int)pfVar9 + 0x490);
    iVar4 = iVar8;
  } while (iVar8 < 10);
  if (debug_var.muteki != 0) {
    fVar10 = DAT_003ee6e4;
  }
  if (DAT_003ee6e8 < fVar10) {
    uVar6 = (cmn->st).sta;
    iVar4 = 0x800;
    iVar8 = -0x401;
    goto LAB_00237420;
  }
  if ((cmn->st).sp_down_fl == 0) {
    uVar6 = (cmn->st).sta;
  }
  else {
    if (fVar10 <= DAT_003ee6ec) {
      sVar3 = (cmn->st).rspdmg + 500;
LAB_002373fc:
      (cmn->st).rspdmg = sVar3;
      (cmn->st).sp_down_fl = 0;
    }
    else {
      if (fVar10 <= DAT_003ee6f0) {
        sVar3 = (cmn->st).rspdmg + 200;
        goto LAB_002373fc;
      }
      if (fVar10 <= DAT_003ee6e8) {
        sVar3 = (cmn->st).rspdmg + 0x14;
        goto LAB_002373fc;
      }
      (cmn->st).sp_down_fl = 0;
    }
    uVar6 = (cmn->st).sta;
  }
  iVar4 = 0x400;
  iVar8 = -0x801;
LAB_00237420:
  (cmn->st).sta = (uVar6 | (long)iVar4) & (long)iVar8;
  uVar1 = (cmn->st).rspdmg;
  if (uVar1 == 0) {
    uVar1 = (cmn->st).rhspdmg;
  }
  else {
    uVar2 = (cmn->st).sp;
    if (uVar2 == 0) {
      (cmn->st).rspdmg = 0;
      (cmn->st).sta = (cmn->st).sta & 0xfffffffffffffbff;
    }
    else {
      fVar11 = (float)(uint)uVar1;
      fVar10 = fVar11 * DAT_003ee6f4;
      (cmn->st).rspdmg = 0;
      if (2.147484e+09 <= fVar10) {
        fVar10 = fVar10 - 2.147484e+09;
      }
      sVar3 = 0;
      if (((int)fVar10 & 0xffffU) <= (uint)uVar2) {
        fVar11 = fVar11 * DAT_003ee6f8;
        if (2.147484e+09 <= fVar11) {
          sVar3 = uVar2 - (short)(int)(fVar11 - 2.147484e+09);
        }
        else {
          sVar3 = uVar2 - (short)(int)fVar11;
        }
      }
      (cmn->st).sp = sVar3;
    }
    (cmn->st).sp_recover_time = 0;
    uVar1 = (cmn->st).rhspdmg;
  }
  if (uVar1 == 0) {
    uVar6._0_2_ = (cmn->st).rhspdmg;
    uVar6._2_2_ = (cmn->st).rhpdmg;
    uVar6._4_2_ = (cmn->st).rspdmg;
    uVar6._6_2_ = (cmn->st).dmg_old;
  }
  else {
    uVar7 = (uint)(ushort)(cmn->st).sp;
    if (uVar7 == 0) {
      (cmn->st).sta = (cmn->st).sta | 0x100;
      uVar5 = 0;
    }
    else {
      fVar10 = (float)(uint)uVar1 * DAT_003ee6fc;
      (cmn->st).rhspdmg = 0;
      if (2.147484e+09 <= fVar10) {
        fVar10 = fVar10 - 2.147484e+09;
      }
      uVar5 = 0;
      if (((int)fVar10 & 0xffffU) <= uVar7) {
        fVar10 = (float)(uint)uVar1 * DAT_003ee700;
        if (2.147484e+09 <= fVar10) {
          uVar5 = uVar7 - (int)(fVar10 - 2.147484e+09);
        }
        else {
          uVar5 = uVar7 - (int)fVar10;
        }
      }
      (cmn->st).sp = (short)uVar5;
    }
    if ((uVar5 & 0xffff) == 0) {
      if ((cmn->st).rhspdmg != 0) {
        (cmn->st).sta = (cmn->st).sta & 0xfffffffffffffbff | 0x100;
      }
      (cmn->st).sp_recover_time = 0;
    }
    else {
      (cmn->st).sp_recover_time = 0;
    }
    uVar6._0_2_ = (cmn->st).rhspdmg;
    uVar6._2_2_ = (cmn->st).rhpdmg;
    uVar6._4_2_ = (cmn->st).rspdmg;
    uVar6._6_2_ = (cmn->st).dmg_old;
  }
  if ((uVar6 & 0xffff0000ffff) == 0) {
    (cmn->st).sta = (cmn->st).sta & 0xfffffffffffffbff;
    sVar3 = (cmn->st).rhpdmg;
  }
  else {
    sVar3 = (cmn->st).rhpdmg;
  }
  if (sVar3 != 0) {
    (cmn->st).sp_recover_time = 0;
  }
  uVar6 = (cmn->st).sta;
  if ((uVar6 & 0xd00) == 0x800) {
    if ((ushort)(cmn->st).sp < (ushort)(cmn->st).spmax) {
      uVar1 = (cmn->st).sp_recover_time;
      if (uVar1 < 0x5a) {
        (cmn->st).sp_recover_time = uVar1 + 1;
      }
      else {
        uVar7 = (uint)(ushort)(cmn->st).spmax;
        uVar5 = (ushort)(cmn->st).sp + 0x2d;
        if (uVar5 < uVar7) {
          uVar7 = uVar5;
        }
        (cmn->st).sp = (short)uVar7;
      }
    }
    else {
      (cmn->st).sta = uVar6 & 0xfffffffffffff7ff;
    }
  }
  return;
}

void PlyrHPdownCtrl(PLCMN_WRK *cmn) {
	u_short down1;
	u_short down2;
	STATUS_DAT *st;
	
  ushort uVar1;
  int iVar2;
  int iVar3;
  uchar uVar4;
  uint uVar5;
  ulong uVar6;
  ushort uVar7;
  uint uVar8;
  uint uVar9;
  
  if (cmn == pl_sta[1]) {
    if (3 < (byte)(sis_wrk.cmn_wrk.mode - 1)) {
      (cmn->st).sta = (cmn->st).sta | 0x200;
      goto LAB_00237704;
    }
    iVar2._0_2_ = (cmn->st).rhspdmg;
    iVar2._2_2_ = (cmn->st).rhpdmg;
  }
  else {
LAB_00237704:
    iVar2._0_2_ = (cmn->st).rhspdmg;
    iVar2._2_2_ = (cmn->st).rhpdmg;
  }
  if (iVar2 == 0) {
    uVar6 = (cmn->st).sta;
    if ((uVar6 & 0x200) == 0) {
      return;
    }
    uVar1 = (cmn->st).hpmax;
    uVar7 = (cmn->st).hp + 100;
    (cmn->st).hp = uVar7;
    if (uVar7 < uVar1) {
      return;
    }
    (cmn->st).hp = uVar1;
    uVar6 = uVar6 & 0xfffffffffffffdff;
    goto LAB_00237890;
  }
  uVar9 = 0;
  uVar5 = 0;
  if ((cmn->st).rhspdmg == 0) {
LAB_0023773c:
    uVar9 = uVar5;
    uVar5 = (uint)(ushort)(cmn->st).rhpdmg;
  }
  else if ((cmn->st).sp == 0) {
    if ((cmn->st).rspdmg == 0) {
      uVar1 = (cmn->st).rhspdmg;
      (cmn->st).rhspdmg = 0;
      uVar5 = (uint)uVar1;
      goto LAB_0023773c;
    }
    uVar5 = (uint)(ushort)(cmn->st).rhpdmg;
  }
  else {
    uVar5 = (uint)(ushort)(cmn->st).rhpdmg;
  }
  if (uVar5 == 0) {
    iVar3._0_2_ = (cmn->st).rhspdmg;
    iVar3._2_2_ = (cmn->st).rhpdmg;
    uVar5 = 0;
  }
  else {
    (cmn->st).rhpdmg = 0;
    iVar3._0_2_ = (cmn->st).rhspdmg;
    iVar3._2_2_ = (cmn->st).rhpdmg;
  }
  if (iVar3 == 0) {
    (cmn->st).sta = (cmn->st).sta & 0xfffffffffffffeff;
    uVar1 = (cmn->st).hp;
  }
  else {
    uVar1 = (cmn->st).hp;
  }
  uVar8 = (uint)uVar1 - (uVar9 + uVar5);
  if ((uint)uVar1 < uVar9 + uVar5) {
    uVar8 = 0;
  }
  (cmn->st).hp = (short)uVar8;
  if ((uVar8 & 0xffff) != 0) {
    return;
  }
  if (cmn == pl_sta[1]) {
    ReqSisDead__Fi(2);
    uVar6 = (cmn->st).sta & 0xfffffffffffffeff;
  }
  else {
    uVar4 = ItemUsePossible__FiUc(7,'\x01');
    if (uVar4 != '\0') {
      SystemBankPlay__FiiiiP11_SND_3D_SETii(8,1,1,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      SystemBankPlay__FiiiiP11_SND_3D_SETii(10,1,1,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      (cmn->st).hp = (cmn->st).hpmax;
      plyr_wrk.cmn_wrk.st.sta = plyr_wrk.cmn_wrk.st.sta & 0xfffffffffffffeff;
      ItemLost__FiUc(7,'\x01');
      plyr_wrk.cmn_wrk.st.rhspdmg = 0;
      plyr_wrk.cmn_wrk.st.rspdmg = 0;
      return;
    }
    ReqPlyrDead__Fi(1);
    uVar6 = (cmn->st).sta & 0xfffffffffffffeff;
  }
LAB_00237890:
  (cmn->st).sta = uVar6;
  return;
}

static void playerSetSearchEne(int iEneWrkNo) {
	float tv[4];
	
  float tv [4];
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
                    /* end of inlined section */
  plyr_wrk.cmn_wrk.st.sta = plyr_wrk.cmn_wrk.st.sta | 0x40000;
  tv[0] = (float)plyr_wrk.cmn_wrk.mbox.pos._0_8_;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
  tv[2] = plyr_wrk.cmn_wrk.mbox.pos[2];
  tv[3] = plyr_wrk.cmn_wrk.mbox.pos[3];
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  tv[1] = SUB84(plyr_wrk.cmn_wrk.mbox.pos._0_8_,4) + DAT_003ee704;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(iEneWrkNo,10);
  GetTrgtRot__FPCfT0Pfi
            (tv,ene_wrk.field0_0x0.m_aData[iEneWrkNo].mpos.p0,plyr_wrk.cmn_wrk.mbox.rspd,3);
                    /* end of inlined section */
  plyr_wrk.cmn_wrk.mbox.rspd[0] = plyr_wrk.cmn_wrk.mbox.rspd[0] - plyr_wrk.frot_x;
  RotLimitChk__FPf(plyr_wrk.cmn_wrk.mbox.rspd);
  plyr_wrk.cmn_wrk.mbox.rspd[1] = plyr_wrk.cmn_wrk.mbox.rspd[1] - plyr_wrk.cmn_wrk.mbox.rot[1];
  plyr_wrk.cmn_wrk.mbox.rspd[0] =
       (plyr_wrk.cmn_wrk.mbox.rspd[0] + plyr_wrk.cmn_wrk.mbox.rspd[0]) / 100.0;
  RotLimitChk__FPf(plyr_wrk.cmn_wrk.mbox.rspd + 1);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
                    /* end of inlined section */
  plyr_wrk.cmn_wrk.mbox.rspd[1] =
       (plyr_wrk.cmn_wrk.mbox.rspd[1] + plyr_wrk.cmn_wrk.mbox.rspd[1]) / 100.0;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
  plyr_wrk.cmn_wrk.mbox.trot[1] = plyr_wrk.cmn_wrk.mbox.rot[1];
  plyr_wrk.cmn_wrk.mbox.trot[2] = plyr_wrk.cmn_wrk.mbox.rot[2];
  plyr_wrk.cmn_wrk.mbox.trot[3] = plyr_wrk.cmn_wrk.mbox.rot[3];
                    /* end of inlined section */
  plyr_wrk.cmn_wrk.mbox.mloop = 0.0;
  plyr_wrk.cmn_wrk.mbox.trot[0] = plyr_wrk.frot_x;
  return;
}

void ReqCamTraceNearEne(void *ew) {
	ENE_WRK *ews;
	float dist[2];
	u_char i;
	u_char trgt;
	
  float fVar1;
  fixed_array<ENE_WRK,10> *pfVar2;
  uint uVar3;
  uint uVar4;
  uint iEneWrkNo;
  float fVar5;
  float fVar6;
  float dist [2];
  
  iEneWrkNo = 0xff;
  if (ew == (void *)0x0) {
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    dist[1] = 0.0;
    fVar6 = DAT_003ee708;
    _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(0,10);
                    /* end of inlined section */
    uVar3 = 0;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    pfVar2 = &ene_wrk;
                    /* end of inlined section */
    do {
      if (((ENE_WRK *)pfVar2)->status == 4) {
        if ((((ENE_WRK *)pfVar2)->st).hp == 0) {
          uVar3 = uVar3 + 1 & 0xff;
        }
        else {
          if (((((ENE_WRK *)pfVar2)->st).sta & 0x1000000) == 0) {
            if ((((ENE_WRK *)pfVar2)->tr_rate != '\0') &&
               (((fVar5 = GetDistV__FPCfT0(plyr_wrk.cmn_wrk.mbox.pos,(((ENE_WRK *)pfVar2)->mbox).pos
                                          ), uVar4 = iEneWrkNo, fVar1 = dist[1], fVar6 < fVar5 ||
                 (uVar4 = uVar3, fVar1 = fVar5, dist[1] == 0.0)) || (fVar5 < dist[1])))) {
              dist[1] = fVar1;
              iEneWrkNo = uVar4;
            }
            goto LAB_00237ab8;
          }
          uVar3 = uVar3 + 1 & 0xff;
        }
      }
      else {
LAB_00237ab8:
        uVar3 = uVar3 + 1 & 0xff;
      }
      pfVar2 = (fixed_array<ENE_WRK,10> *)((int)pfVar2 + 0x490);
    } while (uVar3 < 10);
    if (iEneWrkNo != 0xff) goto LAB_00237b78;
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    dist[1] = 0.0;
    fVar6 = DAT_003ee70c;
    _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(0,10);
    pfVar2 = &ene_wrk;
                    /* end of inlined section */
    uVar3 = 0;
    do {
      if (((((ENE_WRK *)pfVar2)->status == 4) && ((((ENE_WRK *)pfVar2)->st).hp != 0)) &&
         ((fVar5 = GetDistV__FPCfT0(plyr_wrk.cmn_wrk.mbox.pos,(((ENE_WRK *)pfVar2)->mbox).pos),
          uVar4 = iEneWrkNo, fVar1 = dist[1], fVar6 < fVar5 ||
          ((uVar4 = uVar3, fVar1 = fVar5, dist[1] == 0.0 || (fVar5 < dist[1])))))) {
        dist[1] = fVar1;
        iEneWrkNo = uVar4;
      }
      uVar3 = uVar3 + 1 & 0xff;
      pfVar2 = (fixed_array<ENE_WRK,10> *)((int)pfVar2 + 0x490);
    } while (uVar3 < 10);
  }
  else {
    iEneWrkNo = (uint)*(byte *)((int)ew + 0x194);
  }
  if (iEneWrkNo == 0xff) {
    _ClearVector__FPf(plyr_wrk.cmn_wrk.mbox.rspd);
    return;
  }
LAB_00237b78:
  playerSetSearchEne__Fi(iEneWrkNo);
  return;
}

void SetPlyrFinderIn() {
	ENE_WRK *ew;
	float tv[4];
	float dist[2];
	u_char i;
	u_char n;
	u_char trgt;
	
  float fVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  fixed_array<ENE_WRK,10> *pfVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float tv [4];
  float dist [2];
  
  iVar3 = InFinderMode__Fv();
  if (iVar3 == 0) {
    PlayerChangeMode__Fi(5);
    SetPlyrNeckFlg__Fi(0);
    plyr_wrk.fp[0] = 0x140;
    plyr_wrk.fp[1] = 0xe0;
    plyr_wrk.frot_x = 0.0;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
    plyr_wrk.finder_tm = 0;
    uVar6 = 0;
    cVar2 = '\0';
    SetPlyrAnime__FUcUc('0','\0');
    plyr_wrk.no_photo_tm = 8;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    pfVar5 = &ene_wrk;
                    /* end of inlined section */
    uVar7 = 0xff;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    dist[1] = 0.0;
    fVar9 = DAT_003ee710;
    _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(0,10);
                    /* end of inlined section */
    do {
      uVar4 = uVar6 + 1;
      if (((ENE_WRK *)pfVar5)->status == 4) {
        if ((((ENE_WRK *)pfVar5)->st).hp == 0) {
          uVar6 = uVar4 & 0xff;
        }
        else if (((((ENE_WRK *)pfVar5)->st).sta & 0x1000100) == 0x100) {
          if (((ENE_WRK *)pfVar5)->tr_rate == '\0') {
            uVar6 = uVar4 & 0xff;
          }
          else {
            if ((((ENE_WRK *)pfVar5)->attr & 0x40) == 0) {
              cVar2 = cVar2 + '\x01';
              fVar8 = GetDistV__FPCfT0(plyr_wrk.cmn_wrk.mbox.pos,(((ENE_WRK *)pfVar5)->mbox).pos);
              uVar4 = uVar7;
              fVar1 = dist[1];
              if (((fVar9 < fVar8) || (uVar4 = uVar6, fVar1 = fVar8, dist[1] == 0.0)) ||
                 (fVar8 < dist[1])) {
                dist[1] = fVar1;
                uVar7 = uVar4;
              }
              goto LAB_00237d14;
            }
            uVar6 = uVar4 & 0xff;
          }
        }
        else {
          uVar6 = uVar4 & 0xff;
        }
      }
      else {
LAB_00237d14:
        uVar6 = uVar6 + 1 & 0xff;
      }
      pfVar5 = (fixed_array<ENE_WRK,10> *)((int)pfVar5 + 0x490);
    } while (uVar6 < 10);
    if ((uVar7 == 0xff) || (cVar2 != '\x01')) {
      _ClearVector__FPf(plyr_wrk.cmn_wrk.mbox.rspd);
    }
    else {
      tv[0] = (float)plyr_wrk.cmn_wrk.mbox.pos._0_8_;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
      tv[2] = plyr_wrk.cmn_wrk.mbox.pos[2];
      tv[3] = plyr_wrk.cmn_wrk.mbox.pos[3];
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
      tv[1] = SUB84(plyr_wrk.cmn_wrk.mbox.pos._0_8_,4) + DAT_003ee714;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(uVar7,10);
      GetTrgtRot__FPCfT0Pfi
                (tv,ene_wrk.field0_0x0.m_aData[uVar7].mpos.p0,plyr_wrk.cmn_wrk.mbox.rspd,3);
                    /* end of inlined section */
      plyr_wrk.cmn_wrk.mbox.rspd[1] = plyr_wrk.cmn_wrk.mbox.rspd[1] - plyr_wrk.cmn_wrk.mbox.rot[1];
      RotLimitChk__FPf(plyr_wrk.cmn_wrk.mbox.rspd + 1);
      plyr_wrk.frot_x = plyr_wrk.cmn_wrk.mbox.rspd[0];
      plyr_wrk.cmn_wrk.mbox.rspd[0] = 0.0;
    }
    uVar7 = 0;
    do {
      IsActEnemy__Fi(uVar7);
      uVar7 = uVar7 + 1 & 0xff;
    } while (uVar7 < 10);
    ReqFinderCamera__Fv();
  }
  return;
}

void SetPlyrFinder() {
  PlayerChangeMode__Fi(6);
  PlayerDrawLock__Fv();
  ReqFinderFadeIn__Fv();
  return;
}

void SetPlyrFinderEnd() {
  if (plyr_wrk.finder_tm == 0) {
    plyr_wrk.finder_tm = 2;
  }
  return;
}

void SetPlyrFinderEnd1() {
  SetPlyrAnime__FUcUc('1','\0');
  return;
}

void SetPlyrFinderEnd2() {
	u_char i;
	
  uint wrk_no;
  
  wrk_no = 0;
  PlayerChangeMode__Fi(7);
  PlayerDrawUnlock__Fv();
  ReqFinderFadeOut__Fv();
  SetPlyrNeckFlg__Fi(1);
  do {
    IsActEnemy__Fi(wrk_no);
    wrk_no = wrk_no + 1 & 0xff;
  } while (wrk_no < 10);
  return;
}

void SetPlyrFinderQEnd() {
  if ((byte)(plyr_wrk.cmn_wrk.mode - 5) < 2) {
    if (plyr_wrk.cmn_wrk.mode == '\x06') {
      PlayerDrawUnlock__Fv();
    }
    ReqFinderFadeOut__Fv();
    FinderDispInit__Fv();
    PlayerChangeMode__Fi(0);
  }
  return;
}

void PlyrFinderIn() {
  plyr_wrk.finder_tm = plyr_wrk.finder_tm + 1;
  finder_off_lock_timer_cnt = 0;
  plyr_wrk.preShutterChanceState = SHUTTER_CHANCE_NONE;
  plyr_wrk.nowShutterChanceState = SHUTTER_CHANCE_NONE;
  if (10 < plyr_wrk.finder_tm) {
    ReqFinderInOverRap__FUs(8);
    SetPlyrFinder__Fv();
    plyr_wrk.finder_tm = 0;
  }
  PlyrMotionMovement__Fv();
  return;
}

void PlyrFinderEnd() {
  int iVar1;
  
  iVar1 = CheckPlyrAnimeEnd__Fi(0x31);
  if (iVar1 != 0) {
    PlayerChangeMode__Fi(0);
  }
  PlyrMotionMovement__Fv();
  return;
}

static void PlyrSpotLightLookAt() {
	float mtx[4][4];
	float offset[4];
	LOOK_AT_PARAM param;
	
  float mtx [4] [4];
  float offset [4];
  _LOOK_AT_PARAM param;
  
  if ((plyr_wrk.spot_rot[0] != 0.0) || (plyr_wrk.spot_rot[1] != 0.0)) {
    plyr_mdlGetMATRIX__FPA3_fi(mtx,7);
    sceVu0ScaleVector(0x43960000,offset,mtx);
    sceVu0AddVector(&param,offset,mtx[3]);
    param.eye_spd = DAT_003ee718;
    param.head_spd = DAT_003ee71c;
    param.chest_spd = DAT_003ee720;
    PlyrNeckRegisterTarget__FP14_LOOK_AT_PARAM25_LOOK_TARGET_PRIORITY_MIO(&param,LTP_MIO_SPOT_LIGHT)
    ;
  }
  return;
}

static void PlyrKaidanLookAt() {
	float mtx[4][4];
	float offset[4];
	LOOK_AT_PARAM param;
	
  float mtx [4] [4];
  float offset [4];
  _LOOK_AT_PARAM param;
  
  param.eye_spd = DAT_003ee724;
  param.head_spd = DAT_003ee728;
  param.chest_spd = DAT_003ee72c;
  plyr_mdlGetMATRIX__FPA3_fi(mtx,0);
  if ((((byte)(plyr_wrk.anime_no - 0x10) < 2) || (plyr_wrk.anime_no == '\x14')) ||
     (plyr_wrk.anime_no == '\x15')) {
    sceVu0ScaleVector(0x41f00000,offset,mtx[1]);
    sceVu0AddVector(&param,mtx[3],offset);
    sceVu0ScaleVector(0x41a00000,offset,mtx[2]);
    sceVu0AddVector(&param,&param,offset);
    PlyrNeckRegisterTarget__FP14_LOOK_AT_PARAM25_LOOK_TARGET_PRIORITY_MIO(&param,LTP_MIO_KAIDAN);
  }
  else {
    if (((1 < (byte)(plyr_wrk.anime_no - 0x12)) && (plyr_wrk.anime_no != '\x16')) &&
       (plyr_wrk.anime_no != '\x17')) {
      if (look_at_pre_kaidan_flg == '\0') {
        return;
      }
      sceVu0ScaleVector(0x42200000,offset,mtx[2]);
      plyr_mdlGetMATRIX__FPA3_fi(mtx,2);
      sceVu0AddVector(&param,mtx[3],offset);
      PlyrNeckRegisterTarget__FP14_LOOK_AT_PARAM25_LOOK_TARGET_PRIORITY_MIO(&param,LTP_MIO_KAIDAN);
      look_at_pre_kaidan_flg = '\0';
      return;
    }
    sceVu0ScaleVector(0x41200000,offset,mtx[2]);
    sceVu0AddVector(&param,mtx[3],offset);
  }
  PlyrNeckRegisterTarget__FP14_LOOK_AT_PARAM25_LOOK_TARGET_PRIORITY_MIO(&param,LTP_MIO_KAIDAN);
  look_at_pre_kaidan_flg = '\x01';
  return;
}

void PlyrNModeCtrl() {
	float tv[4];
	MOVE_BOX *mb;
	
  GRA3DCAMERA *pGVar1;
  int iVar2;
  float fVar3;
  float tv [4];
  
  pGVar1 = gra3dGetCamera__Fv();
  plyr_wrk.prot = GetTrgtRotY__FPCfT0((float *)pGVar1->matCoord[3],plyr_wrk.cmn_wrk.mbox.pos);
  _ClearVector__FPf(tv);
  PlyrDWalkTmCtrl__FP9PLCMN_WRK(&plyr_wrk.cmn_wrk);
  if (opt_wrk.move_operate == '\0') {
    fVar3 = PlyrMovePad__Fv();
    PlyrMoveChk__FP8MOVE_BOXPff((MOVE_BOX *)&plyr_wrk,tv,fVar3);
  }
  else if (opt_wrk.move_operate == '\x01') {
    fVar3 = PlyrMovePad__Fv();
    PlyrMoveChkV__FP8MOVE_BOXPff((MOVE_BOX *)&plyr_wrk,tv,fVar3);
  }
  else {
    fVar3 = PlyrMovePad__Fv();
    PlyrMoveChk__FP8MOVE_BOXPff((MOVE_BOX *)&plyr_wrk,tv,fVar3);
  }
  PlyrPosSet__FP8MOVE_BOXPf((MOVE_BOX *)&plyr_wrk,tv);
  PlyrNAnimeCtrl__Fv();
  NearAllEneInfo__FP9PLCMN_WRK(&plyr_wrk.cmn_wrk);
  PlyrSpotLightLookAt__Fv();
  PlyrKaidanLookAt__Fv();
  if ((((plyr_wrk.finder_lock_cnt == '\0') && (plyr_wrk.cmn_wrk.mode == '\0')) &&
      (iVar2 = GetPlyrItemHaveNum__Fi(10), iVar2 != 0)) && ((*paddat[6] == 1 && (7 < *pushdat[6]))))
  {
    printf("finder in\n");
    SetPlyrFinderIn__Fv();
  }
  return;
}

void PlyrFModeMoveCtrl() {
	float tv[4];
	MOVE_BOX *mb;
	
  float tv [4];
  
  plyr_wrk.cmn_wrk.st.mvsta = plyr_wrk.cmn_wrk.st.mvsta & 0xfffffffffffffff0;
  if ((plyr_wrk.cmn_wrk.st.cond != 1) && (plyr_wrk.cmn_wrk.st.cond != 3)) {
    _ClearVector__FPf(tv);
    PlyrMovePadFind__FP8MOVE_BOXPf((MOVE_BOX *)&plyr_wrk,tv);
    PlyrPosSet__FP8MOVE_BOXPf((MOVE_BOX *)&plyr_wrk,tv);
  }
  return;
}

float PlyrMovePad() {
  float fVar1;
  
  fVar1 = GetMovePad__FUc('\0');
  return fVar1;
}

void PlyrMoveChk(MOVE_BOX *mb, float *tv, float rot) {
	float fr[4];
	float rcng;
	u_char run_chk;
	static u_char no_rot_cng2 = 0;
	static float keep_rot = 0.f;
	static float rs[2] = {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f
	};
	static u_char ds[5] = {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0,
		/* [3] = */ 0,
		/* [4] = */ 0
	};
	ANI_CTRL *pAniCtrl;
	float rot_chg;
	
  uchar uVar1;
  ANI_CTRL *ani_ctrl;
  int iVar2;
  float fVar3;
  float local_80 [4];
  float fr [4];
  float rcng;
  
  local_80[0] = rot;
  memset(fr,0,0x10);
  if ((plyr_wrk.cmn_wrk.st.mvsta & 0x1800) != 0) {
    ani_ctrl = plyr_mdlGetANI_CTRL__Fv();
    if (ani_ctrl == (ANI_CTRL *)0x0) {
      return;
    }
    iVar2 = motCheckInterp__FP8ANI_CTRL(ani_ctrl);
    if (iVar2 != 0) {
      return;
    }
    if (1.0 < mb->mloop) {
      mb->rot[1] = mb->rot[1] + mb->rspd[1];
      RotLimitChk__FPf(mb->rot + 1);
      RotFvector__FPfT0(mb->rot,tv);
      mb->mloop = mb->mloop - 1.0;
      return;
    }
    mb->rot[1] = mb->rot[1] + mb->rspd[1];
    RotLimitChk__FPf(mb->rot + 1);
    RotFvector__FPfT0(mb->rot,tv);
    mb->rspd[1] = 0.0;
    plyr_wrk.cmn_wrk.st.mvsta = plyr_wrk.cmn_wrk.st.mvsta & 0xffffffffffffe7ff;
    return;
  }
  uVar1 = PlyrMoveStaChk__Ff(local_80[0]);
  GetMoveSpeed__FPf(tv);
  PadInfoTmpSave__FPUcUcPff((uchar *)&ds_1246,pad[0].an_dir[0],&rs_1245,local_80[0]);
  rcng = keep_rot_1244 - rs_1245;
  RotLimitChk__FPf(&rcng);
  rcng = ABS(rcng);
  if (local_80[0] == 10.0) {
    cam_cng_tm = 0;
    plyr_wrk.cmn_wrk.st.mvsta = plyr_wrk.cmn_wrk.st.mvsta & 0xfffffffffffffdff;
    no_rot_cng2_1243 = '\0';
    if (uVar1 != '\0') goto LAB_002385b8;
  }
  else {
LAB_002385b8:
    if (cam_cng_tm != 0) {
      iVar2 = GetPALMode__Fv();
      if (iVar2 == 0) {
        if (cam_cng_tm == 0x14) goto LAB_002385f4;
        mb->rspd[1] = 0.0;
      }
      else if (cam_cng_tm == 0x10) {
LAB_002385f4:
        keep_rot_1244 = rs_1245;
        mb->rspd[1] = 0.0;
      }
      else {
        mb->rspd[1] = 0.0;
      }
      RotFvector__FPfT0(mb->rot,tv);
      cam_cng_tm = cam_cng_tm + -1;
      if (rcng < DAT_003ee730) {
        if (cam_cng_tm != 0) {
          return;
        }
        plyr_wrk.cmn_wrk.st.mvsta = plyr_wrk.cmn_wrk.st.mvsta | 0x200;
        return;
      }
      iVar2 = -0x201;
      cam_cng_tm = 0;
      goto LAB_00238840;
    }
    if (((plyr_wrk.cmn_wrk.st.mvsta & 0x200) != 0) && (rcng <= DAT_003ee734)) {
      no_rot_cng2_1243 = 1;
      RotFvector__FPfT0(mb->rot,tv);
      return;
    }
    cam_cng_tm = 0;
    if (((DAT_003f39bc == local_80[0]) && ((plyr_wrk.cmn_wrk.st.mvsta & 0x400) == 0)) ||
       (uVar1 != '\0')) goto LAB_002387d8;
  }
  cam_cng_tm = 0;
  if ((plyr_wrk.cmn_wrk.st.mvsta & 0xf) == 0) {
    RotFvector__FPfT0(mb->rot,tv);
  }
  fVar3 = DAT_003ee738;
  plyr_wrk.cmn_wrk.st.mvsta = plyr_wrk.cmn_wrk.st.mvsta & 0xfffffffffffffdff;
  if (local_80[0] == 10.0) {
    return;
  }
  fr[1] = local_80[0] + plyr_wrk.prot;
  RotLimitChk__FPf(fr + 1);
  local_80[0] = fr[1] - mb->rot[1];
  RotLimitChk__FPf(local_80);
  iVar2 = GetPALMode__Fv();
  if (iVar2 == 0) {
    fVar3 = DAT_003ee73c;
  }
  rcng = fVar3;
  if (local_80[0] <= 0.0) {
    local_80[0] = ABS(local_80[0]);
    rcng = -fVar3;
  }
  if ((DAT_003ee740 < local_80[0]) && (no_rot_cng2_1243 == '\0')) {
    CngPlyrRotRapid__FP8MOVE_BOXf(mb,fr[1]);
    if ((plyr_wrk.cmn_wrk.st.mvsta & 1) == 0) {
      iVar2 = 0x800;
    }
    else {
      iVar2 = 0x1000;
    }
    plyr_wrk.cmn_wrk.st.mvsta = plyr_wrk.cmn_wrk.st.mvsta & 0xfffffffffffffbff | (long)iVar2;
    RotLimitChk__FPf(mb->rot + 1);
LAB_002387d8:
    RotFvector__FPfT0(mb->rot,tv);
    return;
  }
  RotFvector__FPfT0(fr,tv);
  if (fVar3 < local_80[0]) {
    mb->rot[1] = mb->rot[1] + rcng;
    RotLimitChk__FPf(mb->rot + 1);
    plyr_wrk.cmn_wrk.st.mvsta = plyr_wrk.cmn_wrk.st.mvsta | 0x400;
    return;
  }
  iVar2 = -0x401;
  mb->rot[1] = fr[1];
LAB_00238840:
  plyr_wrk.cmn_wrk.st.mvsta = plyr_wrk.cmn_wrk.st.mvsta & (long)iVar2;
  return;
}

void PlyrMoveChkV(MOVE_BOX *mb, float *tv, float mrot) {
	float delta;
	u_char dir;
	ANI_CTRL *pAniCtrl;
	
  bool bVar1;
  uchar uVar2;
  ANI_CTRL *ani_ctrl;
  int iVar3;
  ulong uVar4;
  float fVar5;
  
  uVar4 = 0xff;
  _ClearVector__FPf(tv);
  if ((plyr_wrk.cmn_wrk.st.mvsta & 0x1800) != 0) {
    ani_ctrl = plyr_mdlGetANI_CTRL__Fv();
    if (ani_ctrl == (ANI_CTRL *)0x0) {
      return;
    }
    iVar3 = motCheckInterp__FP8ANI_CTRL(ani_ctrl);
    if (iVar3 != 0) {
      return;
    }
    if (1.0 < mb->mloop) {
      mb->rot[1] = mb->rot[1] + mb->rspd[1];
      RotLimitChk__FPf(mb->rot + 1);
      RotFvector__FPfT0(mb->rot,tv);
      mb->mloop = mb->mloop - 1.0;
      return;
    }
    mb->rot[1] = mb->rot[1] + mb->rspd[1];
    RotLimitChk__FPf(mb->rot + 1);
    RotFvector__FPfT0(mb->rot,tv);
    mb->rspd[1] = 0.0;
    plyr_wrk.cmn_wrk.st.mvsta = plyr_wrk.cmn_wrk.st.mvsta & 0xffffffffffffe7ff;
    return;
  }
  fVar5 = DAT_003ee744;
  PlyrMoveStaChk__Ff(mrot);
  if (mrot == 10.0) {
LAB_00238a50:
    bVar1 = uVar4 < 2;
  }
  else {
    uVar2 = ConvertRot2Dir__FfUc(mrot,'\x01');
    uVar4 = (ulong)(char)uVar2;
    bVar1 = uVar4 < 2;
    switch(uVar2) {
    case '\x01':
    case '\x02':
    case '\x03':
      fVar5 = mb->rot[1] + fVar5;
      break;
    case '\x04':
      CngPlyrRotRapid__FP8MOVE_BOXf(mb,mb->rot[1] + DAT_003ee748);
      if ((plyr_wrk.cmn_wrk.st.mvsta & 1) == 0) {
        iVar3 = 0x800;
      }
      else {
        iVar3 = 0x1000;
      }
      plyr_wrk.cmn_wrk.st.mvsta = plyr_wrk.cmn_wrk.st.mvsta & 0xfffffffffffffbff | (long)iVar3;
      RotLimitChk__FPf(mb->rot + 1);
      RotFvector__FPfT0(mb->rot,tv);
      goto LAB_00238a50;
    case '\x05':
    case '\x06':
    case '\a':
      fVar5 = mb->rot[1] - fVar5;
      break;
    default:
      goto switchD_002389b8_caseD_7;
    }
    mb->rot[1] = fVar5;
    RotLimitChk__FPf(mb->rot + 1);
    bVar1 = uVar4 < 2;
  }
switchD_002389b8_caseD_7:
  if ((((bVar1) || (uVar4 == 7)) || ((plyr_wrk.cmn_wrk.st.mvsta & 1) != 0)) ||
     ((plyr_wrk.cmn_wrk.st.mvsta & 8) != 0)) {
    GetMoveSpeed__FPf(tv);
    RotFvector__FPfT0(mb->rot,tv);
  }
  return;
}

void PlyrMovePadFind(MOVE_BOX *mb, float *tv) {
	float rot;
	u_char anime;
	u_char anime_tbl[4];
	u_char rl_chk;
	
  uchar *puVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  uchar anime_no;
  float fVar5;
  float fVar6;
  uchar anime_tbl [4];
  
  anime_no = plyr_wrk.anime_no;
  puVar1 = anime_tbl + 3;
  uVar4 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar4) =
       *(uint *)(puVar1 + -uVar4) & -1 << (uVar4 + 1) * 8 | (uint)DAT_003f39c8 >> (3 - uVar4) * 8;
  anime_tbl = DAT_003f39c8;
  if (plyr_wrk.finder_tm == 0) {
    fVar5 = GetMovePad__FUc('\x01');
    if (fVar5 == 10.0) {
      anime_no = '\0';
    }
    else {
      sVar2 = GetPlyrFtype__Fv();
      uVar4 = (int)sVar2 & 0xff;
      plyr_wrk.cmn_wrk.st.mvsta = plyr_wrk.cmn_wrk.st.mvsta | 4;
      plyr_wrk.spd[2] = 10.5;
      if (uVar4 == 4) {
        uVar4 = 0;
      }
      iVar3 = GetPALMode__Fv();
      if (iVar3 != 0) {
        plyr_wrk.spd[2] = plyr_wrk.spd[2] * DAT_003ee74c;
      }
      fVar6 = sinf(fVar5);
      *tv = plyr_wrk.spd[2] * fVar6;
      fVar5 = cosf(fVar5);
      tv[2] = plyr_wrk.spd[2] * fVar5;
      RotFvector__FPfT0(mb->rot,tv);
      if ((((anime_tbl[0] != plyr_wrk.anime_no) && (anime_tbl[1] != plyr_wrk.anime_no)) &&
          (anime_tbl[2] != plyr_wrk.anime_no)) && (anime_tbl[3] != plyr_wrk.anime_no)) {
        anime_no = anime_tbl[uVar4];
      }
    }
    if (plyr_wrk.anime_no != anime_no) {
      SetPlyrAnime__FUcUc(anime_no,'\n');
    }
  }
  return;
}

float GetMovePad(u_char id) {
	float rot;
	u_char dir;
	
  uint uVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = 10.0;
  if (id == '\0') {
    fVar3 = 10.0;
    if (opt_wrk.move_operate == '\x01') {
      uVar1 = 0xff;
      if (*paddat[9] == 0) {
        if (*paddat[8] == 1) {
          uVar1 = 0;
        }
      }
      else {
        uVar1 = 4;
      }
      if (*paddat[0xb] == 0) {
        if (*paddat[10] != 0) {
          if (uVar1 == 0xff) {
            uVar1 = 6;
          }
          else {
            if (uVar1 == 0) {
              uVar1 = 8;
            }
            uVar1 = (uVar1 + 6) / 2;
          }
        }
      }
      else if (uVar1 == 0xff) {
        uVar1 = 2;
      }
      else {
        uVar1 = (uVar1 + 2) / 2;
      }
      fVar3 = fVar2;
      if (uVar1 != 0xff) {
        fVar3 = (float)uVar1 * DAT_003ee750 - DAT_003ee754;
      }
    }
    fVar2 = fVar3;
    if ((pad[0].id == 'y') && (pad[0].an_dir[0] != 0xff)) {
      return pad[0].an_rot[0];
    }
  }
  else if (opt_wrk.ana_replace == '\0') {
    if (pad[0].an_dir[1] != 0xff) {
      return pad[0].an_rot[1];
    }
  }
  else if (opt_wrk.ana_replace == '\x01') {
    if (pad[0].an_dir[0] != 0xff) {
      return pad[0].an_rot[0];
    }
  }
  else {
    fVar2 = 10.0;
    if (pad[0].an_dir[1] != 0xff) {
      fVar2 = pad[0].an_rot[1];
    }
  }
  return fVar2;
}

u_char PlyrMoveStaChk(float pad_chk) {
	u_char run_chk;
	u_int psta;
	
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  uchar uVar4;
  uchar uVar5;
  
  uVar4 = '\0';
  if ((plyr_wrk.cmn_wrk.st.mvsta & 0xf) == 0) {
    if (*paddat[4] != 1) goto LAB_00238e38;
  }
  else if (*paddat[4] == 0) {
LAB_00238e38:
    uVar2 = 0;
    uVar5 = '\0';
    if (pad_chk != 10.0) {
      uVar1 = PlyrLeverInputChk__Fv();
      uVar2 = 0;
      uVar5 = uVar4;
      if (uVar1 != 0) {
        uVar2 = 2;
      }
    }
    goto LAB_00238e64;
  }
  uVar2 = 1;
  uVar5 = uVar4;
  if (pad_chk == 10.0) {
    uVar5 = '\x01';
  }
LAB_00238e64:
  uVar3 = uVar2;
  if (plyr_wrk.cmn_wrk.st.dwalk_tm != 0) {
    uVar3 = 0x108;
    if (uVar2 == 0) {
      uVar3 = 0x100;
    }
  }
  plyr_wrk.cmn_wrk.st.mvsta = uVar3 | plyr_wrk.cmn_wrk.st.mvsta & 0xfffffffffffffef0;
  return uVar5;
}

u_int PlyrLeverInputChk() {
	u_char chkx;
	u_char chky;
	u_int result;
	
  uint uVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  
  uVar3 = 0;
  if ((((*paddat[9] != 0) || (*paddat[8] != 0)) || (*paddat[10] != 0)) || (*paddat[0xb] != 0)) {
    uVar3 = 1;
  }
  if (pad[0].id == 'y') {
    uVar1 = pad[0].analog[2] + 0x80;
    if ((pad[0].analog[2] & 0x80) == 0) {
      uVar1 = 0x7f - pad[0].analog[2];
    }
    uVar2 = pad[0].analog[3] + 0x80;
    if ((pad[0].analog[3] & 0x80) == 0) {
      uVar2 = 0x7f - pad[0].analog[3];
    }
    fVar4 = GetDist__Fff((float)(uVar1 & 0xff),(float)(uVar2 & 0xff));
    if (2.147484e+09 <= fVar4) {
      fVar4 = fVar4 - 2.147484e+09;
    }
    if (0x31 < ((int)fVar4 & 0xffU)) {
      uVar3 = 1;
    }
    if (0x7e < ((int)fVar4 & 0xffU)) {
      uVar3 = 2;
    }
  }
  return uVar3;
}

void GetMoveSpeed(float *tv) {
  float fVar1;
  
  if (plyr_wrk.cmn_wrk.mode != '\x02') {
    *tv = plyr_wrk.spd[0];
    fVar1 = plyr_wrk.spd[2];
    tv[2] = plyr_wrk.spd[2];
    if ((plyr_wrk.cmn_wrk.mode != '\b') && (debug_var.hi_spd != 0)) {
      tv[2] = fVar1 * 4.0;
    }
  }
  return;
}

void PlyrPosSet(MOVE_BOX *mb, float *tv) {
  undefined8 uVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
  pfVar2 = mb->pos;
  fVar3 = mb->pos[2];
  fVar4 = mb->pos[3];
  mb->bpos[0] = (float)*(undefined8 *)pfVar2;
  mb->bpos[1] = (float)((ulong)*(undefined8 *)pfVar2 >> 0x20);
  mb->bpos[2] = fVar3;
  mb->bpos[3] = fVar4;
  uVar1 = *(undefined8 *)mb->mv;
  fVar3 = mb->mv[2];
  fVar4 = mb->mv[3];
  mb->bmv[0] = (float)uVar1;
  mb->bmv[1] = (float)((ulong)uVar1 >> 0x20);
  mb->bmv[2] = fVar3;
  mb->bmv[3] = fVar4;
  uVar1 = *(undefined8 *)tv;
  fVar3 = tv[2];
  fVar4 = tv[3];
  mb->mv[0] = (float)uVar1;
  mb->mv[1] = (float)((ulong)uVar1 >> 0x20);
  mb->mv[2] = fVar3;
  mb->mv[3] = fVar4;
                    /* end of inlined section */
  sceVu0AddVector(pfVar2,pfVar2,tv);
  MapHitCheck__FPfN20fi
            (plyr_wrk.cmn_wrk.mbox.pos,plyr_wrk.cmn_wrk.mbox.pos,plyr_wrk.cmn_wrk.mbox.bpos,
             plyr_wrk.hit_rad,(int)(short)plyr_wrk.cmn_wrk.floor);
  PlyrHeightCtrl__FPf(tv);
  return;
}

void PlyrHeightCtrl(float *tv) {
	int w_area_no;
	int temp_room;
	
  int iVar1;
  int iVar2;
  uint room_id;
  
  iVar1 = MhCtlGetRoomNo__FiPf((int)(short)plyr_wrk.cmn_wrk.floor,plyr_wrk.cmn_wrk.mbox.pos);
  if ((-1 < iVar1) && (iVar2 = GetPlyrAreaNo__Fv(), iVar2 != iVar1)) {
    SetPlyrAreaNo__Fi(iVar1);
  }
  MhCtlGetMapHeight__FPfT0ii(tv,plyr_wrk.cmn_wrk.mbox.pos,(uint)plyr_wrk.cmn_wrk.pr_info.area_no,1);
  plyr_wrk.cmn_wrk.mbox.pos[1] = tv[1];
  iVar1 = GetPlyrAreaNo__Fv();
  room_id = GetRoomLabel__FiiPf(iVar1,(int)(short)plyr_wrk.cmn_wrk.floor,plyr_wrk.cmn_wrk.mbox.pos);
  if ((room_id != 0xffffffff) && (room_id != plyr_wrk.cmn_wrk.pr_info.room_id)) {
    plyr_wrk.cmn_wrk.pr_info.room_old = plyr_wrk.cmn_wrk.pr_info.room_id;
    SetPlyrRoomID__Fi(room_id);
  }
  return;
}

void PadInfoTmpSave(u_char *dir_save, u_char dir_now, float *rot_save, float rot_now) {
	u_char i;
	
  uchar *puVar1;
  float *pfVar2;
  uint uVar3;
  
  uVar3 = 4;
  do {
    puVar1 = dir_save + uVar3;
    uVar3 = uVar3 + 0xff & 0xff;
    *puVar1 = puVar1[-1];
  } while (uVar3 != 0);
  uVar3 = 1;
  do {
    pfVar2 = rot_save + uVar3;
    uVar3 = uVar3 + 0xff & 0xff;
    *pfVar2 = pfVar2[-1];
  } while (uVar3 != 0);
  *dir_save = dir_now;
  *rot_save = rot_now;
  return;
}

void CngPlyrRotRapid(MOVE_BOX *mb, float rot0) {
	float rot1;
	
  short sVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = rot0 - mb->rot[1];
  sVar1 = GetPlyrFtype__Fv();
  switch(sVar1) {
  case 0:
  case 3:
  case 4:
    if (fVar4 < 0.0) {
      fVar4 = fVar4 + DAT_003ee75c;
    }
    break;
  case 1:
  case 2:
    if (0.0 < fVar4) {
      fVar4 = fVar4 - DAT_003ee758;
    }
  }
  iVar2 = GetPALMode__Fv();
  fVar3 = DAT_003ee760;
  if (iVar2 == 0) {
    fVar3 = 13.0;
  }
  mb->mloop = fVar3;
  mb->rspd[1] = fVar4 / fVar3;
  return;
}

static void ShutterChanceChangeJob() {
  bool bVar1;
  int iVar2;
  
  bVar1 = false;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_relops.h */
                    /* end of inlined section */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_relops.h */
  if (plyr_wrk.nowShutterChanceState != SHUTTER_CHANCE_NONE) {
                    /* inlined from ../photo/n_plyr_camera.h */
    iVar2 = IsReady__13CPhotoCharger(&m_plyr_camera.charger);
    bVar1 = iVar2 != 0;
  }
  if (bVar1) {
                    /* end of inlined section */
    ReqZoomIn__12CNPlyrCamera(&m_plyr_camera);
  }
  else {
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_relops.h */
    if (plyr_wrk.preShutterChanceState != SHUTTER_CHANCE_NONE &&
        plyr_wrk.nowShutterChanceState == SHUTTER_CHANCE_NONE) {
                    /* end of inlined section */
      ReqZoomOut__12CNPlyrCamera(&m_plyr_camera);
    }
  }
  iVar2 = IsInCombo__Fv();
  if (iVar2 == 0) {
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_relops.h */
    if (plyr_wrk.nowShutterChanceState != SHUTTER_CHANCE_SP) {
                    /* end of inlined section */
      Set__9CSPChancei(&m_plyr_camera.sp,0);
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_relops.h */
    }
  }
  else if (plyr_wrk.nowShutterChanceState == SHUTTER_CHANCE_NONE) {
    Set__9CSPChancei(&m_plyr_camera.sp,0);
  }
                    /* end of inlined section */
  if ((plyr_wrk.preShutterChanceState != plyr_wrk.nowShutterChanceState) &&
     ((plyr_wrk.nowShutterChanceState == SHUTTER_CHANCE_SP ||
      ((plyr_wrk.nowShutterChanceState == SHUTTER_CHANCE_NORMAL &&
       (iVar2 = IsInCombo__Fv(), iVar2 != 0)))))) {
    Set__9CSPChancei(&m_plyr_camera.sp,1);
  }
  return;
}

static void SpiritGageCalc() {
	int ret;
	int iMinPercent;
	SHUTTER_CHANCE_STATE SState;
	int i;
	ENE_WRK *ew;
	float fDistanceRate;
	float fMaxDistance;
	
  byte bVar1;
  bool bVar2;
  _SHUTTER_CHANCE_STATE SPState;
  int iVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fDistanceRate;
  float fVar8;
  float fVar9;
  
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
  fVar9 = 1.0;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  bVar1 = _11CCameraFilm_aFilmMinPercentTbl[(char)m_plyr_camera.camera_film.mFilmType.mValue];
  bVar2 = false;
                    /* end of inlined section */
  SPState = ShutterChanceChk__Fv();
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar6 = 0;
  iVar3 = 0;
  do {
    _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(iVar3,10);
                    /* end of inlined section */
    iVar5 = iVar3 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
    iVar3 = IsActEnemy__Fi(iVar3);
                    /* end of inlined section */
    if (iVar3 != 0) {
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* inlined from ../photo/n_plyr_camera.h */
      fVar8 = _14CCameraPowerUp_aDistanceTbl[m_plyr_camera.camera_power_up.mSensitiveGrade.mValue];
      iVar3 = IsReady__13CPhotoCharger(&m_plyr_camera.charger);
                    /* end of inlined section */
                    /* inlined from ../photo/n_plyr_camera.h */
      if (((iVar3 == 0) ||
          (fVar7 = *(float *)((int)ene_wrk.field0_0x0.m_aData[0].dist_p_e + iVar6), fVar8 <= fVar7))
         || ((*(ulong *)((int)ene_wrk.field0_0x0.m_aData[0].dist_p_e + iVar6 + -0x48) & 0x80) == 0))
      {
        Work__11CSpiritGagefff21_SHUTTER_CHANCE_STATEi
                  ((CSpiritGage *)((int)ene_wrk.field0_0x0.m_aData[0].dist_p_e + iVar6 + -0x58),0.0,
                   0.0,0.0,SHUTTER_CHANCE_NONE,0);
        uVar4 = *(ulong *)((int)ene_wrk.field0_0x0.m_aData[0].dist_p_e + iVar6 + -0x48) &
                0xffffffffffffffef;
      }
      else {
                    /* end of inlined section */
        fDistanceRate = 1.0;
        if (800.0 < fVar7) {
          fDistanceRate = fVar9 - (fVar7 - 800.0) / (fVar8 - 800.0);
        }
        bVar2 = true;
                    /* inlined from ../photo/camera_power_up.h */
        fVar8 = GetRadiusRate__14CCameraPowerUp(&m_plyr_camera.camera_power_up);
        Work__11CSpiritGagefff21_SHUTTER_CHANCE_STATEi
                  ((CSpiritGage *)((int)ene_wrk.field0_0x0.m_aData[0].dist_p_e + iVar6 + -0x58),
                   fDistanceRate,
                   fVar9 - *(float *)((int)ene_wrk.field0_0x0.m_aData[0].dist_p_e_o + iVar6 + 8) /
                           (fVar8 * 108.0),
                   (float)(uint)*(byte *)((int)ene_wrk.field0_0x0.m_aData[0].dist_in_tm +
                                         iVar6 + 0x18) * 0.0078125,SPState,(uint)bVar1);
                    /* end of inlined section */
        uVar4 = *(ulong *)((int)ene_wrk.field0_0x0.m_aData[0].dist_p_e + iVar6 + -0x48) | 0x10;
      }
      *(ulong *)((int)ene_wrk.field0_0x0.m_aData[0].dist_p_e + iVar6 + -0x48) = uVar4;
    }
    iVar6 = iVar6 + 0x490;
    iVar3 = iVar5;
  } while (iVar5 < 10);
  plyr_wrk.preShutterChanceState = plyr_wrk.nowShutterChanceState;
  if (bVar2) {
    plyr_wrk.nowShutterChanceState = SPState;
    RenzMarkOn__14CNEquipTrayWrk(&m_plyr_camera.eq_tray);
  }
  else {
    plyr_wrk.nowShutterChanceState = SHUTTER_CHANCE_NONE;
    RenzMarkOff__14CNEquipTrayWrk(&m_plyr_camera.eq_tray);
  }
  ShutterChanceChangeJob__Fv();
  return;
}

static void FinderModeEndJob() {
  ReqZoomOut__12CNPlyrCamera(&m_plyr_camera);
  Set__9CSPChancei(&m_plyr_camera.sp,0);
  End__14CNEquipTrayWrk(&m_plyr_camera.eq_tray);
  _ClearVector__FPf(plyr_wrk.cmn_wrk.mbox.rspd);
  plyr_wrk.cmn_wrk.st.sta = plyr_wrk.cmn_wrk.st.sta & 0xfffffffffffbffff;
  return;
}

void PlyrFinderCtrl() {
	int photo_ok;
	
  int iVar1;
  short *psVar2;
  
  FModeScreenEffect__Fv();
  Work__10CEneTracer(&plyr_wrk.ene_tracer);
  EneFrameHitChk__Fv();
  SpiritGageCalc__Fv();
  SetUp__14CNEquipTrayWrk(&m_plyr_camera.eq_tray);
  iVar1 = PlyrPhotoChk2__Fv();
  PlyrCamTurnChk__Fv();
  PlyrFModeMoveCtrl__Fv();
  PlyrDWalkTmCtrl__FP9PLCMN_WRK(&plyr_wrk.cmn_wrk);
  NearAllEneInfo__FP9PLCMN_WRK(&plyr_wrk.cmn_wrk);
  if (finder_off_lock_timer_cnt != 0) {
    finder_off_lock_timer_cnt = finder_off_lock_timer_cnt + -1;
    return;
  }
  if (*paddat[0xf] == 1) {
    if (*pushdat[0xf] < 8) {
      psVar2 = paddat[0x11];
    }
    else {
      if (plyr_wrk.cmn_wrk.st.cond != 1) {
        if (plyr_wrk.cmn_wrk.st.cond == 3) {
          psVar2 = paddat[0x11];
          goto LAB_0023976c;
        }
        if (plyr_wrk.finder_lock_cnt != '\0') {
          psVar2 = paddat[0x11];
          goto LAB_0023976c;
        }
        if (iVar1 != 0) {
          psVar2 = paddat[0x11];
          goto LAB_0023976c;
        }
        plyr_wrk.finder_tm = 2;
        plyr_wrk.no_photo_tm = 0x1e;
      }
      psVar2 = paddat[0x11];
    }
  }
  else {
    psVar2 = paddat[0x11];
  }
LAB_0023976c:
  if (*psVar2 == 1) {
    Rotate__14CNEquipTrayWrk(&m_plyr_camera.eq_tray);
  }
  if (plyr_wrk.finder_tm != 0) {
    if (plyr_wrk.finder_tm == 2) {
      SetPlyrFinderEnd1__Fv();
    }
    else if (plyr_wrk.finder_tm == 1) {
      SetPlyrFinderEnd2__Fv();
    }
    plyr_wrk.finder_tm = plyr_wrk.finder_tm + -1;
  }
  return;
}

void EneFrameHitChk() {
	ENE_WRK *ew;
	float dpe;
	float dce;
	float tx;
	float ty;
	u_char i;
	
  short sVar1;
  ENE_WRK *pEVar2;
  uchar uVar3;
  GRA3DCAMERA *pGVar4;
  int iVar5;
  byte bVar6;
  int iVar7;
  ulong uVar8;
  MPOS *tp;
  float fVar9;
  float fVar10;
  float fVar11;
  float tx;
  float ty;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  bVar6 = 0;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(0,10);
                    /* end of inlined section */
  pEVar2 = ene_wrk.field0_0x0.m_aData;
  do {
    tp = &pEVar2->mpos;
    if (((*(int *)((int)(tp + 5) + 0x74) == 4) && (*(short *)((int)(tp + 4) + 0x68) != 0)) &&
       ((*(ulong *)((int)(tp + 4) + 0x50) & 0x1000000) == 0)) {
      fVar11 = *(float *)((int)(tp + 4) + 0x98);
      pGVar4 = gra3dGetCamera__Fv();
      uVar3 = OutSightChk__FPfT0fff
                        (tp->p0,(float *)pGVar4->matCoord[3],plyr_wrk.cmn_wrk.mbox.rot[1],
                         DAT_003ee764,photo_rng_tbl[0]);
      if (uVar3 == '\0') {
        iVar5 = FrameInsideChk__FPfN20(tp->p0,&tx,&ty);
        if (iVar5 == 0) {
          *(short *)((int)((FLY_WRK *(*) [5])(tp + 6))[4] + 10) = 0;
        }
        else {
          sVar1 = *(short *)((int)((FLY_WRK *(*) [5])(tp + 6))[4] + 10);
          *(ulong *)((int)(tp + 4) + 0x50) = *(ulong *)((int)(tp + 4) + 0x50) | 0x200;
          if (sVar1 != -1) {
            *(short *)((int)((FLY_WRK *(*) [5])(tp + 6))[4] + 10) = sVar1 + 1;
          }
          iVar7 = (int)(short)plyr_wrk.fp[0];
          iVar5 = (int)(short)plyr_wrk.fp[1];
          *(ushort *)((int)((FLY_WRK *(*) [5])(tp + 6))[4] + 0xe) = (ushort)(int)tx;
          *(ushort *)((int)((FLY_WRK *(*) [5])(tp + 6))[4] + 0x10) = (ushort)(int)ty;
          fVar9 = GetDist__Fff(tx - (float)iVar7,ty - (float)iVar5);
                    /* inlined from ../photo/camera_power_up.h */
          fVar10 = GetRadiusRate__14CCameraPowerUp(&m_plyr_camera.camera_power_up);
          if (fVar9 <= fVar10 * 108.0) {
                    /* end of inlined section */
            uVar8 = *(ulong *)((int)(tp + 4) + 0x50);
            *(float *)((int)(tp + 5) + 8) = fVar9;
            *(ulong *)((int)(tp + 4) + 0x50) = uVar8 | 0x400;
            uVar8 = *(ulong *)((int)(tp + 4) + 0x50);
          }
          else {
            uVar8 = *(ulong *)((int)(tp + 4) + 0x50);
          }
          if (((uVar8 & 0x80000) == 0) && (((*(uint *)((int)(tp + 4) + 0x50) ^ 1) & 1) != 0)) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
            _fixed_array_verifyrange__H1ZUc_UiUi_PX01(0,10);
            uVar8 = *(ulong *)((int)(tp + 4) + 0x50);
            if ((*(char *)((int)(tp + 2) + 0x31) != '\0') || (fVar11 <= 300.0)) {
                    /* end of inlined section */
              uVar8 = uVar8 | 0x40;
              *(ulong *)((int)(tp + 4) + 0x50) = uVar8;
            }
          }
          if (((((uVar8 & 0x400) != 0) || ((fVar11 <= 510.0 && ((uVar8 & 0x200) != 0)))) &&
              ((uVar8 & 0x40) != 0)) &&
             (*(uchar *)((int)((FLY_WRK *(*) [5])(tp + 6))[6] + 2) != '\0')) {
            *(ulong *)((int)(tp + 4) + 0x50) = uVar8 | 0x80;
          }
        }
      }
      else {
        *(short *)((int)((FLY_WRK *(*) [5])(tp + 6))[4] + 10) = 0;
      }
    }
    bVar6 = bVar6 + 1;
    pEVar2 = (ENE_WRK *)(tp + 7);
  } while (bVar6 < 10);
  return;
}

void FModeScreenEffect() {
  return;
}

void NearEneInfo(PLCMN_WRK *cmn) {
	ENE_WRK *ew;
	float dist[2];
	u_char i;
	u_char no;
	
  uint uVar1;
  ulong *puVar2;
  fixed_array<ENE_WRK,10> *pfVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  float fVar7;
  float fVar8;
  float dist [2];
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  bVar4 = 0;
  bVar6 = 0xff;
  uVar1 = (int)dist + 7U & 7;
  puVar2 = (ulong *)(((int)dist + 7U) - uVar1);
  *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | (ulong)DAT_003f39d0 >> (7 - uVar1) * 8;
  dist = DAT_003f39d0;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(0,10);
  pfVar3 = &ene_wrk;
  do {
                    /* end of inlined section */
    if ((((((ENE_WRK *)pfVar3)->type < 2) && (((ENE_WRK *)pfVar3)->status == 4)) &&
        ((((ENE_WRK *)pfVar3)->st).hp != 0)) && (((((ENE_WRK *)pfVar3)->st).sta & 0x1000000) == 0))
    {
      fVar8 = GetDistV__FPCfT0((cmn->mbox).pos,(((ENE_WRK *)pfVar3)->mbox).pos);
      bVar5 = bVar4;
      fVar7 = fVar8;
      if (dist[1] <= fVar8) {
        bVar5 = bVar6;
        fVar7 = dist[1];
      }
      dist[1] = fVar7;
      dist[0] = fVar8;
      bVar6 = bVar5;
    }
    bVar4 = bVar4 + 1;
    pfVar3 = (fixed_array<ENE_WRK,10> *)((int)pfVar3 + 0x490);
  } while (bVar4 < 10);
  fVar7 = cmn->near_ene_dist;
  cmn->near_ene_no = bVar6;
  cmn->near_ene_dist = dist[1];
  cmn->near_ene_dist_old = fVar7;
  return;
}

void NearAllEneInfo(PLCMN_WRK *cmn) {
	ENE_WRK *ew;
	float dist[2];
	u_char i;
	u_char no;
	
  uint uVar1;
  ulong *puVar2;
  fixed_array<ENE_WRK,10> *pfVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  float fVar7;
  float fVar8;
  float dist [2];
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  bVar4 = 0;
  bVar6 = 0xff;
  uVar1 = (int)dist + 7U & 7;
  puVar2 = (ulong *)(((int)dist + 7U) - uVar1);
  *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | (ulong)DAT_003f39d8 >> (7 - uVar1) * 8;
  dist = DAT_003f39d8;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(0,10);
  pfVar3 = &ene_wrk;
  do {
                    /* end of inlined section */
    if (((((ENE_WRK *)pfVar3)->status == 4) && ((((ENE_WRK *)pfVar3)->st).hp != 0)) &&
       (((((ENE_WRK *)pfVar3)->st).sta & 0x1000000) == 0)) {
      fVar8 = GetDistV__FPCfT0((cmn->mbox).pos,(((ENE_WRK *)pfVar3)->mbox).pos);
      bVar5 = bVar4;
      fVar7 = fVar8;
      if (dist[1] <= fVar8) {
        bVar5 = bVar6;
        fVar7 = dist[1];
      }
      dist[1] = fVar7;
      dist[0] = fVar8;
      bVar6 = bVar5;
    }
    bVar4 = bVar4 + 1;
    pfVar3 = (fixed_array<ENE_WRK,10> *)((int)pfVar3 + 0x490);
  } while (bVar4 < 10);
  fVar7 = cmn->near_ene_dist;
  cmn->near_ene_no = bVar6;
  cmn->near_ene_dist = dist[1];
  cmn->near_ene_dist_old = fVar7;
  return;
}

void PlyrDWalkTmCtrl(PLCMN_WRK *cmn) {
  short sVar1;
  
  sVar1 = (cmn->st).dwalk_tm;
  if (sVar1 != 0) {
    (cmn->st).dwalk_tm = sVar1 + -1;
  }
  return;
}

void PlyrCamTurnChk() {
  return;
}

static int PlyrPhotoChk2Sub(int bWithLenz) {
	int ret;
	int dmg;
	SHUTTER_CHANCE_STATE SPState;
	
  _SHUTTER_CHANCE_STATE _Var1;
  int iVar2;
  
  iVar2 = GetPlyrItemHaveNum__Fi((int)(char)m_plyr_camera.camera_film.mFilmType.mValue);
  _Var1 = plyr_wrk.nowShutterChanceState;
  if (iVar2 < 1) {
    SystemBankPlay__FiiiiP11_SND_3D_SETii(4,1,1,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    return 0;
  }
  gbLenzShot = 0;
  iBusterCountThisTime = 0;
  PhotoFlyChk__Fv();
  iVar2 = PhotoDmgChk2__Fi(bWithLenz);
  PlayerTakePictJob__Fii(iVar2,bWithLenz);
  printf("dmg = %d\n");
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  if (m_plyr_camera.camera_film.mFilmType.mValue != '\0') {
                    /* end of inlined section */
    ItemLost__FiUc((int)(char)m_plyr_camera.camera_film.mFilmType.mValue,'\x01');
  }
  if ((bWithLenz == 0) || (gbLenzShot == 0)) {
    iVar2 = 2;
    if ((plyr_wrk.cmn_wrk.st.sta & 0x20) != 0) {
      if (_Var1 != SHUTTER_CHANCE_NONE) {
        FinderBankPlay__FiiiiP11_SND_3D_SETii(4,1,1,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
        goto LAB_00239d78;
      }
      iVar2 = 3;
    }
  }
  else {
    Use2__14CNEquipTrayWrk(&m_plyr_camera.eq_tray);
    iVar2 = 4;
  }
  FinderBankPlay__FiiiiP11_SND_3D_SETii(iVar2,1,1,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
LAB_00239d78:
  plyr_wrk.no_photo_tm = 10;
  if (1 < (uint)(_Var1 + SHUTTER_CHANCE_FORCE_DWORD)) {
    iVar2 = IsChargeResetOK__14CNEquipTrayWrk(&m_plyr_camera.eq_tray);
    if ((iVar2 == 0) && (bWithLenz != 0)) {
      return 1;
    }
    ResetCharge__12CNPlyrCamera(&m_plyr_camera);
    ReqZoomOut__12CNPlyrCamera(&m_plyr_camera);
  }
  return 1;
}

int PlyrPhotoChk2() {
	int ret;
	
  int iVar1;
  short *psVar2;
  
  if ((plyr_wrk.cmn_wrk.st.cond == 1) || (plyr_wrk.cmn_wrk.st.cond == 3)) {
    return 0;
  }
  if (plyr_wrk.no_photo_tm != 0) {
    plyr_wrk.no_photo_tm = plyr_wrk.no_photo_tm + -1;
    return 0;
  }
  if ('\0' < plyr_wrk.shutter_lock_cnt) {
    return 0;
  }
                    /* inlined from ../photo/n_plyr_camera.h */
  iVar1 = IsReady__13CPhotoCharger(&m_plyr_camera.charger);
  if (iVar1 == 0) {
    if (*paddat[0xd] == 1) {
      if (7 < *pushdat[0xd]) goto LAB_00239fb4;
      psVar2 = paddat[0xe];
    }
    else {
      psVar2 = paddat[0xe];
    }
    if (*psVar2 != 1) {
      return 0;
    }
    if (*pushdat[0xe] < 8) {
      return 0;
    }
LAB_00239fb4:
    SystemBankPlay__FiiiiP11_SND_3D_SETii(4,1,1,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    plyr_wrk.shutter_tm = 0x3c;
    return 0;
  }
                    /* end of inlined section */
  if (*paddat[0xd] == 1) {
    if (7 < *pushdat[0xd]) goto LAB_00239ed4;
    psVar2 = paddat[0xe];
  }
  else {
    psVar2 = paddat[0xe];
  }
  if (*psVar2 == 1) {
    if (7 < *pushdat[0xe]) {
LAB_00239ed4:
      iVar1 = PlyrPhotoChk2Sub__Fi(0);
      plyr_wrk.shutter_tm = 0x3c;
      return iVar1;
    }
    psVar2 = paddat[0x10];
  }
  else {
    psVar2 = paddat[0x10];
  }
  if (*psVar2 != 1) {
    return 0;
  }
  if (*pushdat[0x10] < 8) {
    return 0;
  }
  iVar1 = IsSetUp__14CNEquipTrayWrk(&m_plyr_camera.eq_tray);
  if (iVar1 == 0) {
    SystemBankPlay__FiiiiP11_SND_3D_SETii(4,1,1,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    return 0;
  }
  iVar1 = PlyrPhotoChk2Sub__Fi(1);
  return iVar1;
}

void PlyrVibCheck() {
	ENE_WRK *ew;
	ENE_WRK *ewp;
	float dist;
	float dist_chk;
	u_char i;
	u_char chk;
	u_char no;
	static u_short mvib_time0 = 0;
	static u_short mvib_time1 = 0;
	static u_char mvib_degree;
	
  bool bVar1;
  ulong uVar2;
  uint uVar3;
  fixed_array<ENE_WRK,10> *pfVar4;
  ENE_WRK *pEVar5;
  uint uVar6;
  byte bVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  fVar10 = 0.0;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  uVar3 = 0;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  pfVar4 = &ene_wrk;
                    /* end of inlined section */
  bVar1 = false;
  pEVar5 = (ENE_WRK *)0x0;
  uVar6 = 0;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  fVar9 = 0.0;
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(0,10);
  do {
    _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(uVar3,10);
    if ((ene_wrk.field0_0x0.m_aData[uVar3].attr & 0x80) == 0) {
                    /* end of inlined section */
      if (((ENE_WRK *)pfVar4)->status == 4) {
        if ((((ENE_WRK *)pfVar4)->st).hp != 0) {
          uVar2 = (((ENE_WRK *)pfVar4)->st).sta;
          if ((((uVar2 & 0x1000000) == 0) &&
              (((uVar2 & 0x8000) == 0 || (((ENE_WRK *)pfVar4)->target_n == '\x01')))) &&
             ((fVar8 = GetDistV2__FPCfT0(plyr_wrk.cmn_wrk.mbox.pos,(((ENE_WRK *)pfVar4)->mbox).pos),
              fVar10 == fVar9 || (fVar8 < fVar10)))) {
            bVar1 = true;
            fVar10 = fVar8;
            pEVar5 = (ENE_WRK *)pfVar4;
            uVar6 = uVar3;
          }
          goto LAB_0023a11c;
        }
        uVar3 = uVar3 + 1 & 0xff;
      }
      else {
        uVar3 = uVar3 + 1 & 0xff;
      }
    }
    else {
LAB_0023a11c:
      uVar3 = uVar3 + 1 & 0xff;
    }
    pfVar4 = (fixed_array<ENE_WRK,10> *)((int)pfVar4 + 0x490);
    if (9 < uVar3) {
      if (((bVar1) && (1.0 <= fVar10)) && (fVar10 <= 4000.0)) {
        if (mvib_time1_1326 == 0) {
          if (mvib_time0_1325 == 0) {
            fVar9 = DAT_003ee768;
            if ((DAT_003ee768 < fVar10) || (fVar9 = 300.0, fVar10 < 300.0)) {
              fVar10 = fVar9;
            }
            fVar9 = ((fVar10 - 300.0) * 90.0) / DAT_003ee76c;
            mvib_time0_1325 = (short)(int)fVar9;
            if (2.147484e+09 <= fVar9) {
              mvib_time0_1325 = (short)(int)(fVar9 - 2.147484e+09);
            }
            mvib_time1_1326 = 0x12;
            fVar10 = ((fVar10 - 300.0) * 128.0) / DAT_003ee770;
            bVar7 = (byte)(int)fVar10;
            if (2.147484e+09 <= fVar10) {
              bVar7 = (byte)(int)(fVar10 - 2.147484e+09);
            }
            mvib_degree_1327 = ~bVar7;
            plyr_wrk.cmn_wrk.st.sp_down_fl = 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
            _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(uVar6,10);
            if (ene_wrk.field0_0x0.m_aData[uVar6].type == '\x02') {
                    /* end of inlined section */
              mvib_degree_1327 = mvib_degree_1327 >> 1;
            }
          }
          else {
            mvib_time0_1325 = mvib_time0_1325 + -1;
          }
        }
        else if ((pEVar5->attr & 0x80) == 0) {
          mvib_time1_1326 = mvib_time1_1326 + -1;
          if (mvib_time1_1326 == 0x11) {
            SystemBankPlay__FiiiiP11_SND_3D_SETii(0xd,1,1,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
          }
          VibrateRequest2__FUsUs(0,(ushort)mvib_degree_1327);
        }
      }
      PlyrVibCtrl__FUc('\0');
      PlyrVibCtrlBig__FUcUc('\0','\0');
      return;
    }
  } while( true );
}

void PlyrVibCtrl(u_char time) {
  if ((time != 0) && ((ushort)plyr_wrk.vib_time_sm < (ushort)time)) {
    plyr_wrk.vib_time_sm = (short)time;
  }
  if (plyr_wrk.vib_time_sm != 0) {
    VibrateRequest1__FUsUs(0,1);
    plyr_wrk.vib_time_sm = plyr_wrk.vib_time_sm + -1;
  }
  return;
}

void PlyrVibCtrlBig(u_char pow, u_char time) {
	static u_char mpow = 0;
	
  if ((time != 0) && ((ushort)plyr_wrk.vib_time_bg < (ushort)time)) {
    plyr_wrk.vib_time_bg = (short)time;
    mpow_1334 = pow;
  }
  if (plyr_wrk.vib_time_bg != 0) {
    VibrateRequest2__FUsUs(0,(ushort)mpow_1334);
    plyr_wrk.vib_time_bg = plyr_wrk.vib_time_bg + -1;
  }
  return;
}

int PhotoDmgChk2(int bWithLenz) {
	ENE_WRK *ew;
	int i;
	u_short dmg;
	int bParticleFlg;
	int dmg_one;
	ENE_DMG_PARTICLE_REQ EneDmgParticleReq;
	int iPercent;
	int iSuctionPower;
	int HitEffectLabel;
	
  uchar uVar1;
  byte bVar2;
  ushort uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  uint uVar8;
  fixed_array<ENE_WRK,10> *ew;
  int iVar9;
  uint uVar10;
  int bParticleFlg;
  ENE_DMG_PARTICLE_REQ EneDmgParticleReq;
  
  iVar9 = 9;
  uVar10 = 0;
  SetEffectsPre__14CNEquipTrayWrk(&m_plyr_camera.eq_tray);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  plyr_wrk.cmn_wrk.st.sta = plyr_wrk.cmn_wrk.st.sta & 0xffffffffffffff7f;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(0,10);
  ew = &ene_wrk;
  do {
    if ((((((ENE_WRK *)ew)->attr & 0x40) == 0) &&
        (uVar7 = (((ENE_WRK *)ew)->st).sta, (uVar7 & 0x80080) == 0x80)) &&
       (((*(uint *)&(((ENE_WRK *)ew)->st).sta ^ 1) & 1) != 0)) {
      uVar1 = ((ENE_WRK *)ew)->type;
      (((ENE_WRK *)ew)->st).sta = uVar7 | 0x10000000000;
      if (uVar1 == '\x02') {
        (((ENE_WRK *)ew)->st).sta = uVar7 | 0x10001000000;
      }
      else if ((uVar7 & 0x10) != 0) {
        iVar5 = PhotoDmgChkSub2__FP7ENE_WRKiPi((ENE_WRK *)ew,bWithLenz,&bParticleFlg);
        if (iVar5 != 0) {
                    /* inlined from ../photo/spirit_gage.h */
          iVar6 = (((ENE_WRK *)ew)->spirit_gage).mPercent;
                    /* end of inlined section */
          uVar8 = 0x41a;
          if (((iVar6 < 0x5b) && (uVar8 = 700, iVar6 < 0x47)) &&
             ((uVar8 = 0x1c2, iVar6 < 0x29 &&
              ((uVar8 = 300, iVar6 < 0x15 && (uVar8 = 200, iVar6 < 1)))))) {
            uVar8 = 0;
          }
          uVar8 = uVar8 / 0x2d;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
          uVar4 = *(undefined8 *)(((ENE_WRK *)ew)->mpos).p0;
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
          EneDmgParticleReq.StartPos[2] = (((ENE_WRK *)ew)->mpos).p0[2];
          EneDmgParticleReq.StartPos[3] = (((ENE_WRK *)ew)->mpos).p0[3];
          EneDmgParticleReq.StartPos[0] = (float)uVar4;
          EneDmgParticleReq.StartPos[1] = (float)((ulong)uVar4 >> 0x20);
                    /* end of inlined section */
          EneDmgParticleReq.pEndPos = IgEffectParticleEndPosFinderGet__Fv();
          EneDmgParticleReq.DistPE = ((ENE_WRK *)ew)->dist_p_e[0];
          EneDmgParticleReq.ParticleNum = uVar8;
          if (bParticleFlg == 0) {
            EneDmgParticleReq.SuctionFlg = 0;
            EneDmgParticleEffectReq__FPC20ENE_DMG_PARTICLE_REQ(&EneDmgParticleReq);
            bVar2 = ((ENE_WRK *)ew)->combo_counter;
          }
          else {
            EneDmgParticleReq.SuctionFlg = 1;
            iVar6 = EneDmgParticleEffectReq__FPC20ENE_DMG_PARTICLE_REQ(&EneDmgParticleReq);
            if (iVar6 == 0) {
              AbsorbImmediately__14CNEquipTrayWrki(&m_plyr_camera.eq_tray,uVar8 * 0x2d);
              uVar3 = (((ENE_WRK *)ew)->st).dmg_type;
            }
            else {
              SetRemainParticle__14CNEquipTrayWrki(&m_plyr_camera.eq_tray,uVar8);
              uVar3 = (((ENE_WRK *)ew)->st).dmg_type;
            }
            uVar8 = 2;
            if (uVar3 < 4) {
              uVar8 = (uint)(uVar3 == 2);
            }
            EneHitEffectReq__FiPfi
                      ((uint)(((ENE_WRK *)ew)->alg).idx,(((ENE_WRK *)ew)->mpos).p0,uVar8);
            bVar2 = ((ENE_WRK *)ew)->combo_counter;
          }
          if (bVar2 < 3) {
            AbsorbImmediately__14CNEquipTrayWrki(&m_plyr_camera.eq_tray,0x154);
          }
        }
        InCircleDrawLock__12CNPlyrCamerai(&m_plyr_camera,0x14);
        uVar10 = uVar10 + iVar5 & 0xffff;
      }
    }
    iVar9 = iVar9 + -1;
    ew = (fixed_array<ENE_WRK,10> *)((int)ew + 0x490);
  } while (-1 < iVar9);
  return uVar10;
}

int PhotoDmgChkSub2(ENE_WRK *ew, int bWithLenz, int *pbParticleFlg) {
	STATUS_DAT *ews;
	float sub_func_dmg_rate;
	int bClear;
	SHUTTER_CHANCE_STATE SState;
	SHUTTER_CHANCE_STATE SState;
	
  short sVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  byte bVar9;
  ulong uVar10;
  _SHUTTER_CHANCE_STATE _Var11;
  float fVar12;
  float fVar13;
  
  printf("========= Damage Information ==========\n");
  if ((ew->attr & 0x4000) == 0) {
    if (bWithLenz == 0) {
      fVar12 = 1.0;
      *pbParticleFlg = 1;
    }
    else {
      *pbParticleFlg = 0;
      fVar12 = GetDmgRate__14CNEquipTrayWrk21_SHUTTER_CHANCE_STATE
                         (&m_plyr_camera.eq_tray,plyr_wrk.nowShutterChanceState);
      printf("### SUB FUNC DAMAGE RATE = %f\n");
    }
    uVar3 = SetEneMahiClear__FP7ENE_WRK(ew);
    uVar4 = SetEneSlowClear__FP7ENE_WRK(ew);
    uVar5 = SetEneSealClear__FP7ENE_WRK(ew);
    uVar6 = Init__10CEneTracer(&plyr_wrk.ene_tracer);
    uVar7 = SetEneViewClear__FP7ENE_WRK(ew);
    IgEffectSubFuncPDeformClear__Fi((uint)(ew->alg).idx);
    if (fVar12 == 0.0) {
      uVar10 = (ew->st).sta;
      _Var11 = SHUTTER_CHANCE_SP;
      if ((uVar10 & 0x2000) == 0) {
        _Var11 = (_SHUTTER_CHANCE_STATE)((uVar10 & 0x1000) != 0);
      }
      (ew->st).dmg = 0;
      gbLenzShot = 1;
      SetEffect__14CNEquipTrayWrkP7ENE_WRK21_SHUTTER_CHANCE_STATE(&m_plyr_camera.eq_tray,ew,_Var11);
    }
    else {
      uVar10 = (ew->st).sta;
      (ew->st).sta = uVar10 & 0xffffffffffefffff;
      if ((uVar10 & 0x2000) == 0) {
        if ((uVar10 & 0x1000) == 0) {
          _Var11 = SHUTTER_CHANCE_NONE;
          if ((bWithLenz == 0) ||
             (iVar8 = IsHitBackON__14CNEquipTrayWrk(&m_plyr_camera.eq_tray), iVar8 == 0)) {
            (ew->st).dmg_type = 0;
          }
          else {
            (ew->st).dmg_type = 2;
          }
          (ew->st).sta = (ew->st).sta | 0x100000;
          printf("Hit back Type : No Hit back\n");
          bVar9 = ew->combo_counter;
        }
        else {
          _Var11 = SHUTTER_CHANCE_NORMAL;
          if ((byte)ew->combo_counter < 3) {
            iVar8 = EneComboReq__FP7ENE_WRKi(ew,bWithLenz);
            (ew->st).dmg_type = (short)iVar8;
          }
          else {
            (ew->st).dmg_type = 2;
          }
          (ew->st).sta = (ew->st).sta | 0x100000;
          printf("Hit back Type : Big\n");
          bVar9 = ew->combo_counter;
        }
      }
      else {
        iVar8 = EneComboReq__FP7ENE_WRKi(ew,bWithLenz);
        (ew->st).dmg_type = (short)iVar8;
        (ew->st).sta = (ew->st).sta | 0x100000;
        _Var11 = SHUTTER_CHANCE_SP;
        printf("Hit back Type : Combo Big\n");
        bVar9 = ew->combo_counter;
      }
      if ((bVar9 < 3) && (0 < (int)((uint)bVar9 << 0x18))) {
        fVar13 = CalcDamageRate__11CSpiritGage21_SHUTTER_CHANCE_STATE
                           (&ew->spirit_gage,SHUTTER_CHANCE_NONE);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* inlined from ../photo/camera_power_up.h */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* inlined from ../photo/camera_film.h */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* inlined from ../photo/camera_film.h */
        fVar13 = _14CCameraPowerUp_aDmgTbl[m_plyr_camera.camera_power_up.mSensitiveGrade.mValue] *
                 fVar13 * aDmgRateByDifficulty[ingame_wrk.mDifficulty.mValue] *
                 (float)(uint)_11CCameraFilm_aFilmDamageTbl
                              [(char)m_plyr_camera.camera_film.mFilmType.mValue];
        if (2.147484e+09 <= fVar13) {
          (ew->st).dmg = (short)(int)(fVar13 - 2.147484e+09);
        }
        else {
          (ew->st).dmg = (short)(int)fVar13;
        }
      }
      else {
                    /* end of inlined section */
        fVar13 = CalcDamageRate__11CSpiritGage21_SHUTTER_CHANCE_STATE(&ew->spirit_gage,_Var11);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* inlined from ../photo/camera_power_up.h */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* inlined from ../photo/camera_film.h */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* inlined from ../photo/camera_film.h */
        fVar13 = _14CCameraPowerUp_aDmgTbl[m_plyr_camera.camera_power_up.mSensitiveGrade.mValue] *
                 fVar13 * aDmgRateByDifficulty[ingame_wrk.mDifficulty.mValue] *
                 (float)(uint)_11CCameraFilm_aFilmDamageTbl
                              [(char)m_plyr_camera.camera_film.mFilmType.mValue];
        if (2.147484e+09 <= fVar13) {
          (ew->st).dmg = (short)(int)(fVar13 - 2.147484e+09);
        }
        else {
          (ew->st).dmg = (short)(int)fVar13;
        }
      }
                    /* end of inlined section */
      if (((*key_now[8] != 0) && (*key_now[10] == 1)) && (sVar1 = (ew->st).hp, sVar1 != 0)) {
        (ew->st).dmg = sVar1;
      }
      if ((uVar3 | uVar4 | uVar5 | uVar6 | uVar7) != 0) {
        *pbParticleFlg = 0;
      }
      uVar2 = (ew->st).dmg;
      uVar3 = (uint)uVar2;
      if ((uVar2 != 0) && (bWithLenz != 0)) {
        gbLenzShot = 1;
        SetEffect__14CNEquipTrayWrkP7ENE_WRK21_SHUTTER_CHANCE_STATE
                  (&m_plyr_camera.eq_tray,ew,_Var11);
        uVar3 = (uint)(ushort)(ew->st).dmg;
      }
      (ew->st).dmg = (short)(int)((float)uVar3 * fVar12);
    }
    if ((ushort)(ew->st).dmg < (ushort)(ew->st).hp) {
      uVar3 = ew->attr;
    }
    else {
      plyr_wrk.cmn_wrk.st.sta = plyr_wrk.cmn_wrk.st.sta | 0x80;
      PlayData_BusterNumCount__Fv();
      iBusterCountThisTime = iBusterCountThisTime + 1;
      if (ew->dat_no == 0x28) {
        finder_off_lock_timer_cnt = 300;
      }
      uVar3 = ew->attr;
    }
    if ((uVar3 & 0x800) != 0) {
      (ew->st).dmg = 0;
    }
  }
  else {
    (ew->st).dmg = 0;
    (ew->st).dmg_type = 0;
    (ew->st).sta = (ew->st).sta | 0x100000;
    printf("MUTEKI!!\n");
    printf("=======================================\n");
  }
  printf("### Damage type = %d ###\n");
  printf("### Enemy Damage = %d ###\n");
  printf("### HP before damage culc = %d ###\n");
  return (int)(ushort)(ew->st).dmg;
}

static void PlayerTakePictJob(int iDmg, int bWithLenz) {
	static char __FUNCTION__[18] = {
		/* [0] = */ 80,
		/* [1] = */ 108,
		/* [2] = */ 97,
		/* [3] = */ 121,
		/* [4] = */ 101,
		/* [5] = */ 114,
		/* [6] = */ 84,
		/* [7] = */ 97,
		/* [8] = */ 107,
		/* [9] = */ 101,
		/* [10] = */ 80,
		/* [11] = */ 105,
		/* [12] = */ 99,
		/* [13] = */ 116,
		/* [14] = */ 74,
		/* [15] = */ 111,
		/* [16] = */ 98,
		/* [17] = */ 0
	};
	int i;
	PHOTO_WRK_DEF def;
	BONUS_SHOT_SCORE bonus;
	SUBJECT_WRK subjects[15];
	int cnt;
	int iBaseScore;
	int iTotalScore;
	int iAutoEneCnt;
	int iRareEneNo;
	int no_effect_mes_flg;
	int bHint3D;
	int ane_curse_flg;
	int i;
	BONUS_SHOT_SCORE no_bonus;
	BONUS_SHOT_SCORE *this;
	int i;
	int iBattleEneCnt;
	float base;
	int i;
	MDAT_OBJ *sp;
	int ghost_list_no;
	float tx;
	float ty;
	float dist[2];
	float bpos[4];
	float vw[4];
	float psrot;
	float *pv0;
	sceCdCLOCK rtc;
	int i;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  bool bVar4;
  uint *puVar5;
  fixed_array<short_int,9> *pfVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  MDAT_OBJ *pMVar10;
  int iVar11;
  double arg_a;
  int iVar12;
  BONUS_SHOT_SCORE *pBVar13;
  int iVar14;
  uint iTotalScore;
  int iVar15;
  int obj_num;
  float fVar16;
  _PHOTO_WRK_DEF def;
  BONUS_SHOT_SCORE bonus;
  SUBJECT_WRK subjects [15];
  BONUS_SHOT_SCORE no_bonus;
  float tx;
  float ty;
  float dist [2];
  float bpos [4];
  float vw [4];
  float psrot;
  sceCdCLOCK rtc;
  undefined local_90 [16];
  int local_80;
  int iBaseScore;
  int iRareEneNo;
  int no_effect_mes_flg;
  int bHint3D;
  int ane_curse_flg;
  
                    /* inlined from ../photo/bonus_shot.h */
  pBVar13 = &bonus;
                    /* end of inlined section */
                    /* inlined from ../photo/bonus_shot.h */
                    /* end of inlined section */
                    /* inlined from ../photo/bonus_shot.h */
                    /* end of inlined section */
  iVar11 = 0;
  local_80 = iDmg;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* inlined from ../photo/bonus_shot.h */
    iVar12 = iVar11 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zs_UiUi_PX01(iVar11,9);
    (pBVar13->mScore).field0_0x0.m_aData[0] = 0;
                    /* inlined from ../photo/bonus_shot.h */
    pBVar13 = (BONUS_SHOT_SCORE *)((pBVar13->mScore).field0_0x0.m_aData + 1);
    iVar11 = iVar12;
  } while (iVar12 < 9);
                    /* end of inlined section */
  iRareEneNo = -1;
                    /* inlined from ../photo/bonus_shot.h */
  bonus.mComboNum = 0;
                    /* end of inlined section */
                    /* inlined from ../photo/bonus_shot.h */
  bonus._16_4_ = bonus._16_4_ & 0xffff;
                    /* end of inlined section */
  iTotalScore = 0;
  def.hint_cnt = 0;
  iVar15 = 0;
  iBaseScore = 0;
  iVar14 = 0;
  def.msg_name = -1;
  def.msg_type = -1;
  def.unlock_ghost = 0;
  printf("========= Score Information ===========\n");
  no_effect_mes_flg = 0;
  ane_curse_flg = 0;
  bHint3D = 0;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar11 = 0;
  iVar12 = 0;
  do {
    _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(iVar14,10);
    obj_num = iVar12;
    if (((*(ulong *)((int)ene_wrk.field0_0x0.m_aData[0].dist_p_e + iVar11 + -0x48) & 0x80) != 0) &&
       (_fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(iVar14),
       (*(uint *)((int)ene_wrk.field0_0x0.m_aData[0].directionaldiffuse + iVar11 + -4) & 0x40) == 0)
       ) {
      _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(iVar14);
      if ((*(uint *)((int)ene_wrk.field0_0x0.m_aData[0].directionaldiffuse + iVar11 + -4) & 0x4000)
          != 0) {
                    /* inlined from ../photo/bonus_shot.h */
        pBVar13 = &no_bonus;
        iVar11 = 0;
        do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* inlined from ../photo/bonus_shot.h */
          iVar12 = iVar11 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
          _fixed_array_verifyrange__H1Zs_UiUi_PX01(iVar11);
          (pBVar13->mScore).field0_0x0.m_aData[0] = 0;
                    /* inlined from ../photo/bonus_shot.h */
          pBVar13 = (BONUS_SHOT_SCORE *)((pBVar13->mScore).field0_0x0.m_aData + 1);
          iVar11 = iVar12;
        } while (iVar12 < 9);
                    /* end of inlined section */
                    /* inlined from ../photo/bonus_shot.h */
        no_bonus.mComboNum = 0;
                    /* end of inlined section */
        def.hint_cnt = 0;
        no_effect_mes_flg = 1;
                    /* inlined from ../photo/bonus_shot.h */
        no_bonus._16_4_ = no_bonus._16_4_ & 0xffff;
        uVar7 = no_bonus._16_4_;
                    /* end of inlined section */
        iBaseScore = 0;
        puVar1 = (undefined *)((int)bonus.mScore.field0_0x0.m_aData + 7);
        uVar2 = (uint)puVar1 & 7;
        puVar3 = (ulong *)(puVar1 + -uVar2);
        *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 |
                  (ulong)no_bonus.mScore.field0_0x0.m_aData._0_8_ >> (7 - uVar2) * 8;
        bonus.mScore.field0_0x0.m_aData[0] = no_bonus.mScore.field0_0x0.m_aData[0];
        bonus.mScore.field0_0x0.m_aData[1] = no_bonus.mScore.field0_0x0.m_aData[1];
        bonus.mScore.field0_0x0.m_aData[2] = no_bonus.mScore.field0_0x0.m_aData[2];
        bonus.mScore.field0_0x0.m_aData[3] = no_bonus.mScore.field0_0x0.m_aData[3];
        puVar1 = (undefined *)((int)bonus.mScore.field0_0x0.m_aData + 0xf);
        uVar2 = (uint)puVar1 & 7;
        puVar3 = (ulong *)(puVar1 + -uVar2);
        *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 |
                  (ulong)no_bonus.mScore.field0_0x0.m_aData._8_8_ >> (7 - uVar2) * 8;
        bonus.mScore.field0_0x0.m_aData[4] = no_bonus.mScore.field0_0x0.m_aData[4];
        bonus.mScore.field0_0x0.m_aData[5] = no_bonus.mScore.field0_0x0.m_aData[5];
        bonus.mScore.field0_0x0.m_aData[6] = no_bonus.mScore.field0_0x0.m_aData[6];
        bonus.mScore.field0_0x0.m_aData[7] = no_bonus.mScore.field0_0x0.m_aData[7];
        puVar1 = (undefined *)((int)&bonus.mSP + 1);
        uVar2 = (uint)puVar1 & 3;
        puVar5 = (uint *)(puVar1 + -uVar2);
        *puVar5 = *puVar5 & -1 << (uVar2 + 1) * 8 | (uint)uVar7 >> (3 - uVar2) * 8;
        uVar8 = no_bonus._16_4_;
        no_bonus.mScore.field0_0x0.m_aData[8] = (ushort)uVar7;
        no_bonus.mSP = SUB42(uVar7,2);
        bonus.mScore.field0_0x0.m_aData[8] = no_bonus.mScore.field0_0x0.m_aData[8];
        bonus.mSP = no_bonus.mSP;
        bonus.mComboNum = 0;
        obj_num = 0;
        no_bonus._16_4_ = uVar8;
LAB_0023ae2c:
        if (no_effect_mes_flg != 0) goto LAB_0023b364;
        fVar16 = (float)iBaseScore;
        printf("=======================================\n");
        if (obj_num - iVar15 < 3) {
                    /* end of inlined section */
          if (1 < obj_num - iVar15) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
            _fixed_array_verifyrange__H1Zs_UiUi_PX01(5,9);
            bonus.mScore.field0_0x0.m_aData._8_4_ =
                 CONCAT22((ushort)(int)(fVar16 * DAT_003ee778),bonus.mScore.field0_0x0.m_aData[4]);
            _fixed_array_verifyrange__H1Zs_UiUi_PX01(5,9);
            printf("[Double Shot] : %d\n");
                    /* end of inlined section */
          }
        }
        else {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
          _fixed_array_verifyrange__H1Zs_UiUi_PX01(6,9);
          bonus.mScore.field0_0x0.m_aData._8_6_ =
               CONCAT24((ushort)(int)(fVar16 * DAT_003ee774),bonus.mScore.field0_0x0.m_aData._8_4_);
          _fixed_array_verifyrange__H1Zs_UiUi_PX01(6,9);
          printf("[Triple Shot] : %d\n");
        }
        if (iBusterCountThisTime < 3) {
                    /* end of inlined section */
          if (1 < iBusterCountThisTime) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
            _fixed_array_verifyrange__H1Zs_UiUi_PX01(7,9);
            bonus.mScore.field0_0x0.m_aData[7] = (ushort)(int)(fVar16 * DAT_003ee780);
            _fixed_array_verifyrange__H1Zs_UiUi_PX01(7,9);
            printf("[Double Kill] : %d\n");
                    /* end of inlined section */
          }
        }
        else {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
          _fixed_array_verifyrange__H1Zs_UiUi_PX01(8,9);
          bonus.mScore.field0_0x0.m_aData[8] = (ushort)(int)(fVar16 * DAT_003ee77c);
          _fixed_array_verifyrange__H1Zs_UiUi_PX01(8,9);
          printf("[Triple Kill] : %d\n");
        }
        pBVar13 = &bonus;
        iVar11 = 0;
        iTotalScore = iBaseScore;
        do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
          iVar12 = iVar11 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
          _fixed_array_verifyrange__H1Zs_UiUi_PX01(iVar11,9);
          pfVar6 = &pBVar13->mScore;
                    /* end of inlined section */
          pBVar13 = (BONUS_SHOT_SCORE *)((pBVar13->mScore).field0_0x0.m_aData + 1);
                    /* end of inlined section */
          iTotalScore = iTotalScore + (int)(short)(pfVar6->field0_0x0).m_aData[0];
          iVar11 = iVar12;
        } while (iVar12 < 9);
        if (99999 < (int)iTotalScore) {
          iTotalScore = 99999;
        }
        if (plyr_wrk.nowShutterChanceState == SHUTTER_CHANCE_SP) {
          bonus.mSP = 1;
        }
        printf("Total        Score : %d\n");
        printf("=======================================\n");
        MisSetScore__Fi(iTotalScore);
        PhotoWrkPreInit__Fv();
        if ((obj_num == 0) && (pMVar10 = photo_datObjIsPhotoAble__Fv(), pMVar10 != (MDAT_OBJ *)0x0))
        {
          if (pMVar10->Visible - 4U < 2) {
            bHint3D = 1;
            FurnPhotoFlgUp__Fv();
            iVar11 = pMVar10->PhotoAble;
          }
          else {
            iVar11 = pMVar10->PhotoAble;
          }
          if (iVar11 != 0) {
            def.hint_pict[def.hint_cnt].no = iVar11;
            iVar11 = pMVar10->PhotoAble;
            if ((*(uint *)&photo_dat[iVar11].field_0x14 >> 5 & 1) != 0) {
              def.unlock_ghost = 1;
              iVar11 = pMVar10->PhotoAble;
            }
            subjects[0].no = *(short *)&pMVar10->type;
            subjects[0].type = 0xffff;
            iTotalScore = (uint)(ushort)photo_dat[iVar11].Point;
            if (photo_dat[iVar11].ghost_list_rel_no < 0xb0) {
              iVar12 = -1;
              iRareEneNo = (int)(short)photo_dat[iVar11].ghost_list_rel_no;
              if (iRareEneNo < 0xb5) {
                iVar12 = iRareEneNo * 3;
              }
              if (iVar12 < 0) {
                def.msg_type = -1;
              }
              else {
                subjects[0].no = 0xffff;
                if ((short)photo_dat[iVar11].ghost_list_rel_no < 0xb5) {
                  subjects[0].no = photo_dat[iVar11].ghost_list_rel_no * 3;
                }
                def.msg_name = (int)(ushort)subjects[0].no;
                subjects[0].type = 0x3b;
                def.msg_type = 0x3b;
              }
              def.pos[0] = pMVar10->Pos[0];
              def.pos[1] = pMVar10->Pos[1];
              def.pos[2] = pMVar10->Pos[2];
              def.pos[3] = 1.0;
            }
            obj_num = 1;
            def.hint_cnt = def.hint_cnt + 1;
          }
        }
        iVar12 = IsSisWrk__Fv();
        iVar11 = obj_num;
        if (iVar12 == 0) {
LAB_0023b328:
                    /* end of inlined section */
          bVar4 = iVar11 < 0x10;
          obj_num = iVar11;
        }
        else {
          dist[1] = DAT_003ee784;
          iVar12 = FrameInsideChk__FPfN20(sis_wrk.cmn_wrk.headpos,&tx,&ty);
          if (iVar12 == 0) goto LAB_0023b328;
          dist[0] = GetDist__Fff((float)(int)(short)plyr_wrk.fp[0] - tx,
                                 (float)(int)(short)plyr_wrk.fp[1] - ty);
                    /* inlined from ../photo/camera_power_up.h */
          fVar16 = GetRadiusRate__14CCameraPowerUp(&m_plyr_camera.camera_power_up);
          bVar4 = obj_num < 0x10;
          if (dist[0] <= fVar16 * 108.0) {
                    /* end of inlined section */
            GetTrgtRot__FPCfT0Pfi(plyr_wrk.cmn_wrk.mbox.pos,sis_wrk.cmn_wrk.mbox.pos,vw,2);
            psrot = vw[1] - plyr_wrk.cmn_wrk.mbox.rot[1];
            RotLimitChk__FPf(&psrot);
            arg_a = (double)psrot;
            iVar11 = dpcmp((long)arg_a,0);
            if (iVar11 < 0) {
              arg_a = 0.0 - arg_a;
            }
            iVar11 = dpcmp((long)arg_a,_DAT_003c3a00);
            fVar16 = dist[0];
            bVar4 = obj_num < 0x10;
            if ((iVar11 < 0) && (dist[0] < dist[1])) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
                    /* end of inlined section */
              if (plyr_wrk.ane_curse_lock == 0) {
                ane_curse_flg = (uint)(obj_num == 0);
              }
              iVar11 = obj_num + 1;
              subjects[obj_num].type = 5;
              dist[1] = fVar16;
              subjects[obj_num].no = 0;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
              goto LAB_0023b328;
            }
          }
        }
        if (!bVar4) {
          SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
          PrintAssertReal("PICTURE_SUBJECT IS TOO LARGE");
        }
LAB_0023b364:
        sceCdReadClock(&rtc);
        def.adr_no = GetSavePhotoNo__Fv();
        iVar11 = GetPlyrRoomID__Fv();
        puVar1 = local_90 + 7;
        uVar2 = (uint)puVar1 & 7;
        *(ulong *)(puVar1 + -uVar2) =
             *(ulong *)(puVar1 + -uVar2) & -1L << (uVar2 + 1) * 8 | (ulong)rtc >> (7 - uVar2) * 8;
        local_90._0_8_ = rtc;
        iVar11 = AddPhotoData__FiiiiG10sceCdCLOCKP11SUBJECT_WRKi
                           (def.adr_no,iTotalScore,iVar11,(int)ingame_wrk.mChapterNo.mValue,rtc,
                            subjects,obj_num);
        if (iVar11 != 0) {
          PlayData_MaxScoreUpdate__Fi(iTotalScore);
        }
        PlayData_ScoreCount__Fi(iTotalScore);
        PlayData_PhotoNumCount__Fv();
        if (0 < obj_num) {
          iVar11 = 0;
          do {
            if (*(short *)((int)&subjects[0].type + iVar11) == 0x3b) {
              GetSoulList__Fii(*(ushort *)((int)&subjects[0].no + iVar11) / 3,iTotalScore);
              if (plyr_wrk.nowShutterChanceState == SHUTTER_CHANCE_SP) {
                GetSoulList__Fii(*(ushort *)((int)&subjects[0].sp_no + iVar11) / 3,iTotalScore);
              }
            }
            obj_num = obj_num + -1;
            iVar11 = iVar11 + 6;
          } while (obj_num != 0);
        }
        if (iBaseScore != 0) {
          PhotoInfoDispNew__12CNPlyrCameraiiG16BONUS_SHOT_SCORE
                    (&m_plyr_camera,local_80,iBaseScore,&bonus);
        }
        ReqNoiseUp__12CNPlyrCamera(&m_plyr_camera);
        if (no_effect_mes_flg == 0) {
          if (ane_curse_flg == 0) {
            if (iRareEneNo < 0) {
              if (bHint3D == 0) {
                def.type = PHOTO_TYPE_HINT;
              }
              else {
                def.type = PHOTO_TYPE_HINT3D;
              }
            }
            else {
              def.type = PHOTO_TYPE_RARE;
              GetSoulList__Fii(iRareEneNo,iTotalScore);
            }
          }
          else {
            def.type = PHOTO_TYPE_MAYU_CURSE;
          }
        }
        else {
          def.type = PHOTO_TYPE_INVALID;
        }
        PhotoWrkInit__FPC14_PHOTO_WRK_DEF(&def);
        SetIngamePhoto__Fi(1);
        return;
      }
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(iVar14,10);
      iVar9 = PhotoPointCulcEne2__FP7ENE_WRKP16BONUS_SHOT_SCOREP11SUBJECT_WRKP15_HINT_PHOTO_REQi
                        ((ENE_WRK *)((int)ene_wrk.field0_0x0.m_aData[0].bep + iVar11),&bonus,
                         subjects + iVar12,def.hint_pict + def.hint_cnt,bWithLenz);
                    /* end of inlined section */
      obj_num = iVar12 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      iBaseScore = iBaseScore + iVar9;
                    /* end of inlined section */
      if (-1 < def.hint_pict[def.hint_cnt].no) {
        def.hint_cnt = def.hint_cnt + 1;
      }
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(iVar14);
      if ((*(char *)((int)ene_wrk.field0_0x0.m_aData[0].dist_in_tm + iVar11 + 0x1e) == '\x02') &&
         (-1 < (short)subjects[iVar12].type)) {
                    /* end of inlined section */
        iVar15 = iVar15 + 1;
        def.msg_type = 0x3b;
        def.msg_name = (int)(ushort)subjects[iVar12].no;
      }
    }
    iVar14 = iVar14 + 1;
    iVar11 = iVar11 + 0x490;
    iVar12 = obj_num;
    if (9 < iVar14) goto LAB_0023ae2c;
  } while( true );
}

int PhotoPointCulcEne2(ENE_WRK *ew, BONUS_SHOT_SCORE *bonus, SUBJECT_WRK *subjects, HINT_PHOTO_REQ *hint_picture, int bWithLenz) {
	STATUS_DAT *ews;
	int i;
	int point;
	float ratio;
	int total;
	float base_point;
	float rate;
	float sb_rate;
	int ghost_list_no;
	int ghost_list_no;
	int ghost_list_no;
	int ghost_list_no;
	int ghost_list_no;
	int ghost_list_no;
	
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  ENE_DAT *pEVar4;
  ulong uVar5;
  short sVar6;
  ushort *puVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  
  hint_picture->no = -1;
  if (ew->type < 2) {
    printf("***************************************\n");
    printf("Enemy%d --------------------------------\n");
    fVar10 = 1.0;
    uVar2 = (ew->st).dmg;
    bVar1 = ew->combo_counter;
    if (bVar1 < 3) {
      if ((long)(short)bonus->mComboNum < (long)((char)bVar1 + 1)) {
        bonus->mComboNum = (ushort)((char)bVar1 + 1);
        bVar1 = ew->combo_counter;
      }
      fVar10 = *(float *)((int)combo_point_mag + ((int)((uint)bVar1 << 0x18) >> 0x16));
    }
    if ((byte)ew->combo_sb_counter < 3) {
      fVar11 = *(float *)((int)combo_sb_point_mag +
                         ((int)((uint)(byte)ew->combo_sb_counter << 0x18) >> 0x16));
    }
    else {
      fVar11 = 1.0;
    }
    fVar11 = (float)(uint)uVar2 * 10.0 * fVar10 * fVar11;
    iVar8 = (int)fVar11;
    printf("Base Point : %d = %d * [combo ratio = %f] * [combo sb ratio = %f]\n");
    if (ew->dist_c_e <= 20.0) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Zs_UiUi_PX01(2,9);
      puVar7 = (bonus->mScore).field0_0x0.m_aData + 2;
      *puVar7 = *puVar7 + (short)(int)(fVar11 * DAT_003ee788);
      _fixed_array_verifyrange__H1Zs_UiUi_PX01(2,9);
      printf("CoreShot     : %d\n");
                    /* end of inlined section */
      pEVar4 = ew->dat;
    }
    else {
      pEVar4 = ew->dat;
    }
    if (ew->dist_p_e[0] <= pEVar4->hit_rng) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Zs_UiUi_PX01(1,9);
      puVar7 = (bonus->mScore).field0_0x0.m_aData + 1;
      *puVar7 = *puVar7 + (short)(int)(fVar11 * DAT_003ee78c);
      _fixed_array_verifyrange__H1Zs_UiUi_PX01(1,9);
      printf("CloseShot    : %d\n");
                    /* end of inlined section */
      uVar2 = (ew->st).dmg;
    }
    else {
      uVar2 = (ew->st).dmg;
    }
    uVar3 = (ew->st).hp;
    if ((int)((uint)uVar2 - (uint)uVar3) < 0xb) {
      if (uVar3 < uVar2) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        _fixed_array_verifyrange__H1Zs_UiUi_PX01(4,9);
        puVar7 = (bonus->mScore).field0_0x0.m_aData + 4;
        *puVar7 = *puVar7 + (short)(int)(fVar11 * DAT_003ee790);
        _fixed_array_verifyrange__H1Zs_UiUi_PX01(4,9);
        printf("JustKill    : %d\n");
                    /* end of inlined section */
        uVar5 = (ew->st).sta;
      }
      else {
        uVar5 = (ew->st).sta;
      }
    }
    else {
      uVar5 = (ew->st).sta;
    }
    if ((uVar5 & 0x3000) != 0) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Zs_UiUi_PX01(0,9);
      (bonus->mScore).field0_0x0.m_aData[0] =
           (bonus->mScore).field0_0x0.m_aData[0] + (short)(int)(fVar11 * 0.5);
      _fixed_array_verifyrange__H1Zs_UiUi_PX01(0,9);
      printf("ShutterChanceShot    : %d\n");
                    /* end of inlined section */
      if (bWithLenz != 0) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        _fixed_array_verifyrange__H1Zs_UiUi_PX01(3,9);
        puVar7 = (bonus->mScore).field0_0x0.m_aData + 3;
        *puVar7 = *puVar7 + (short)(int)(fVar11 * DAT_003ee794);
        _fixed_array_verifyrange__H1Zs_UiUi_PX01(3,9);
        printf("SpecialShot  : %d\n");
                    /* end of inlined section */
      }
    }
    printf("---------------------------------------\n");
    printf("Enemy%d       Score : %d\n");
    bVar1 = (&jene_dat[0].cmn)[(short)ew->dat_no * 2].def_type[(short)ew->dat_no * 4 + -2];
    iVar9 = -1;
    if (bVar1 < 0xb5) {
      iVar9 = (uint)bVar1 * 3;
    }
    if (iVar9 < 0) {
      subjects->type = 0xffff;
    }
    else {
      subjects->type = 0x3b;
      bVar1 = (&jene_dat[0].cmn)[(short)ew->dat_no * 2].def_type[(short)ew->dat_no * 4 + -2];
      sVar6 = -1;
      if (bVar1 < 0xb5) {
        sVar6 = (ushort)bVar1 * 3;
      }
      subjects->no = sVar6;
      bVar1 = (&jene_dat[0].cmn)[(short)ew->dat_no * 2].def_type[(short)ew->dat_no * 4 + -1];
      sVar6 = -1;
      if (bVar1 < 0xb5) {
        sVar6 = (ushort)bVar1 * 3;
      }
      subjects->sp_no = sVar6;
    }
    if (((ew->type == '\0') && (ew->dat->hint_pic != 0xff)) &&
       ((ushort)(ew->st).hp <= (ushort)(ew->st).dmg)) {
      hint_picture->no = (uint)ew->dat->hint_pic;
    }
  }
  else if (ew->type == 2) {
    bVar1 = *(byte *)((int)aene_dat + ((short)ew->dat_no * 0x14 - (int)(short)ew->dat_no) * 4 + 0x30
                     );
    iVar8 = (int)(ew->dist_p_e[0] / 500.0);
    if (9 < iVar8) {
      iVar8 = 9;
    }
    iVar9 = (int)(ew->dist_c_e / 10.0);
    if (10 < iVar9) {
      iVar9 = 10;
    }
    iVar8 = (int)((float)(uint)(ushort)ew->cmn_dat->point_base *
                 photo_dist_ratio[iVar8] * photo_center_ratio[iVar9]);
    iVar9 = -1;
    if (bVar1 < 0xb5) {
      iVar9 = (uint)bVar1 * 3;
    }
    if (iVar9 < 0) {
      subjects->type = 0xffff;
    }
    else {
      subjects->type = 0x3b;
      bVar1 = *(byte *)((int)aene_dat +
                       ((short)ew->dat_no * 0x14 - (int)(short)ew->dat_no) * 4 + 0x30);
      sVar6 = -1;
      if (bVar1 < 0xb5) {
        sVar6 = (ushort)bVar1 * 3;
      }
      subjects->no = sVar6;
      bVar1 = *(byte *)((int)aene_dat +
                       ((short)ew->dat_no * 0x14 - (int)(short)ew->dat_no) * 4 + 0x31);
      sVar6 = -1;
      if (bVar1 < 0xb5) {
        sVar6 = (ushort)bVar1 * 3;
      }
      subjects->sp_no = sVar6;
    }
    if ((ew->dat_no == 0) || (ew->dat_no == 0x2f)) {
      finder_off_lock_timer_cnt = 300;
    }
  }
  else {
    iVar8 = 0;
  }
  return iVar8;
}

void GetPlayerPos(float *pos) {
	float *pv1;
	
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = plyr_wrk.cmn_wrk.mbox.pos[3];
  fVar2 = plyr_wrk.cmn_wrk.mbox.pos[2];
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
  fVar1 = plyr_wrk.cmn_wrk.mbox.pos[1];
  *pos = plyr_wrk.cmn_wrk.mbox.pos[0];
  pos[1] = fVar1;
  pos[2] = fVar2;
  pos[3] = fVar3;
  return;
}

void GetPlayerFinderPos(float *fx, float *fy) {
  int iVar1;
  
  iVar1 = (int)(short)plyr_wrk.fp[1];
  *fx = (float)(int)(short)plyr_wrk.fp[0];
  *fy = (float)iVar1;
  return;
}

void SetPlayerPos(float *pos) {
	float vw[4];
	
  float vw [4];
  
  sceVu0SubVector(vw,pos,0x33cda0);
  sceVu0AddVector(0x33ce90,0x33ce90,vw);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
  plyr_wrk.cmn_wrk.mbox.pos[0] = (float)*(undefined8 *)pos;
  plyr_wrk.cmn_wrk.mbox.pos[1] = (float)((ulong)*(undefined8 *)pos >> 0x20);
  plyr_wrk.cmn_wrk.mbox.pos[2] = pos[2];
  plyr_wrk.cmn_wrk.mbox.pos[3] = pos[3];
  return;
}

void SetPlayerRot(float *rot) {
	float *pv0;
	
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
  plyr_wrk.cmn_wrk.mbox.rot[0] = *rot;
  plyr_wrk.cmn_wrk.mbox.rot[1] = rot[1];
  plyr_wrk.cmn_wrk.mbox.rot[2] = rot[2];
  plyr_wrk.cmn_wrk.mbox.rot[3] = rot[3];
  return;
}

void SetPlayerFloor(int floor) {
  plyr_wrk.cmn_wrk.floor = (ushort)floor;
  return;
}

void SetPlayerHitRadius(float fLen) {
  plyr_wrk.hit_rad = fLen;
  return;
}

void SetPlyrAnime(u_char anime_no, u_char frame) {
  int flg;
  
  if ((anime_no != '\0') || (plyr_wrk.anime_no != '\0')) {
    plyr_wrk.cmn_wrk.st.sta = plyr_wrk.cmn_wrk.st.sta & 0xffffffffffffdfff;
    flg = CheckPlayerNeckSW__FUc(anime_no);
    SetPlyrNeckFlg__Fi(flg);
    plyr_wrk.anime_no = anime_no;
    ReqPlayerAnime__FUc(frame);
  }
  return;
}

void PlyrNAnimeCtrl() {
	u_int psta;
	u_char anime_no;
	u_char rl_chk;
	u_char i;
	u_int psta_chk_tbl[10];
	u_char pmani_no_tbl[10][4];
	
  uchar *puVar1;
  ulong *puVar2;
  undefined8 uVar3;
  char cVar4;
  short sVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint psta_chk_tbl [10];
  uchar pmani_no_tbl [10] [4];
  
  uVar8 = (int)psta_chk_tbl + 7U & 7;
  puVar2 = (ulong *)(((int)psta_chk_tbl + 7U) - uVar8);
  *puVar2 = *puVar2 & -1L << (uVar8 + 1) * 8 | DAT_003c3b80 >> (7 - uVar8) * 8;
  psta_chk_tbl._0_8_ = DAT_003c3b80;
  uVar3 = psta_chk_tbl._0_8_;
  uVar8 = (int)psta_chk_tbl + 0xfU & 7;
  puVar2 = (ulong *)(((int)psta_chk_tbl + 0xfU) - uVar8);
  *puVar2 = *puVar2 & -1L << (uVar8 + 1) * 8 | DAT_003c3b88 >> (7 - uVar8) * 8;
  psta_chk_tbl._8_8_ = DAT_003c3b88;
  uVar8 = (int)psta_chk_tbl + 0x17U & 7;
  puVar2 = (ulong *)(((int)psta_chk_tbl + 0x17U) - uVar8);
  *puVar2 = *puVar2 & -1L << (uVar8 + 1) * 8 | DAT_003c3b90 >> (7 - uVar8) * 8;
  psta_chk_tbl._16_8_ = DAT_003c3b90;
  uVar8 = (int)psta_chk_tbl + 0x1fU & 7;
  puVar2 = (ulong *)(((int)psta_chk_tbl + 0x1fU) - uVar8);
  *puVar2 = *puVar2 & -1L << (uVar8 + 1) * 8 | DAT_003c3b98 >> (7 - uVar8) * 8;
  psta_chk_tbl._24_8_ = DAT_003c3b98;
  uVar8 = (int)psta_chk_tbl + 0x27U & 7;
  puVar2 = (ulong *)(((int)psta_chk_tbl + 0x27U) - uVar8);
  *puVar2 = *puVar2 & -1L << (uVar8 + 1) * 8 | DAT_003c3ba0 >> (7 - uVar8) * 8;
  psta_chk_tbl._32_8_ = DAT_003c3ba0;
  puVar1 = pmani_no_tbl[1] + 3;
  uVar8 = (uint)puVar1 & 7;
  *(ulong *)(puVar1 + -uVar8) =
       *(ulong *)(puVar1 + -uVar8) & -1L << (uVar8 + 1) * 8 | DAT_003c3ba8 >> (7 - uVar8) * 8;
  pmani_no_tbl._0_8_ = DAT_003c3ba8;
  puVar1 = pmani_no_tbl[3] + 3;
  uVar8 = (uint)puVar1 & 7;
  *(ulong *)(puVar1 + -uVar8) =
       *(ulong *)(puVar1 + -uVar8) & -1L << (uVar8 + 1) * 8 | DAT_003c3bb0 >> (7 - uVar8) * 8;
  pmani_no_tbl._8_8_ = DAT_003c3bb0;
  puVar1 = pmani_no_tbl[5] + 3;
  uVar8 = (uint)puVar1 & 7;
  *(ulong *)(puVar1 + -uVar8) =
       *(ulong *)(puVar1 + -uVar8) & -1L << (uVar8 + 1) * 8 | DAT_003c3bb8 >> (7 - uVar8) * 8;
  pmani_no_tbl._16_8_ = DAT_003c3bb8;
  puVar1 = pmani_no_tbl[7] + 3;
  uVar8 = (uint)puVar1 & 7;
  *(ulong *)(puVar1 + -uVar8) =
       *(ulong *)(puVar1 + -uVar8) & -1L << (uVar8 + 1) * 8 | DAT_003c3bc0 >> (7 - uVar8) * 8;
  pmani_no_tbl._24_8_ = DAT_003c3bc0;
  puVar1 = pmani_no_tbl[9] + 3;
  uVar8 = (uint)puVar1 & 7;
  *(ulong *)(puVar1 + -uVar8) =
       *(ulong *)(puVar1 + -uVar8) & -1L << (uVar8 + 1) * 8 | DAT_003c3bc8 >> (7 - uVar8) * 8;
  pmani_no_tbl._32_8_ = DAT_003c3bc8;
  uVar8 = 0;
  if (plyr_wrk.cmn_wrk.mode != '\t') {
    psta_chk_tbl[0] = (uint)DAT_003c3b80;
    if ((plyr_wrk.cmn_wrk.st.mvsta & 0x10ff) != 0) {
      uVar9 = 0;
      if (((uint)plyr_wrk.cmn_wrk.st.mvsta & psta_chk_tbl[0]) == 0) {
        uVar6 = 1;
        do {
          uVar9 = uVar6 & 0xff;
          uVar8 = uVar9 * 4;
          if (9 < uVar9) break;
          uVar6 = uVar9 + 1;
        } while (((uint)plyr_wrk.cmn_wrk.st.mvsta & psta_chk_tbl[uVar9]) == 0);
      }
      psta_chk_tbl._0_8_ = uVar3;
      iVar7 = PlyrOutsideCheck__Fv();
      if ((iVar7 != 0) && (*(int *)((int)psta_chk_tbl + uVar8) == 1)) {
        uVar9 = uVar9 + 1 & 0xff;
        uVar8 = uVar9 << 2;
      }
      if ((((pmani_no_tbl[uVar8] == plyr_wrk.anime_no) ||
           (pmani_no_tbl[uVar8 + 1] == plyr_wrk.anime_no)) ||
          (pmani_no_tbl[uVar8 + 2] == plyr_wrk.anime_no)) ||
         (pmani_no_tbl[uVar8 + 3] == plyr_wrk.anime_no)) {
        uVar8 = (uint)plyr_wrk.anime_no;
        uVar3 = psta_chk_tbl._0_8_;
      }
      else {
        sVar5 = GetPlyrFtype__Fv();
        uVar6 = (int)sVar5 & 0xff;
        if (uVar6 == 4) {
          uVar6 = 0;
        }
        uVar3 = psta_chk_tbl._0_8_;
        if (uVar9 < 10) {
          uVar8 = (uint)pmani_no_tbl[uVar6 + uVar8];
        }
        else {
          uVar8 = (uint)plyr_wrk.anime_no;
        }
      }
    }
    psta_chk_tbl._0_8_ = uVar3;
    if ((uVar8 == 0) && (cVar4 = GetSynchroModeFlg__Fv(), cVar4 == '\0')) {
      uVar8 = (uint)((ushort)(plyr_wrk.cmn_wrk.st.hp - 1U) < 0x4b0);
    }
    if (plyr_wrk.anime_no != uVar8) {
      SetPlyrAnime__FUcUc((uchar)uVar8,'\n');
    }
  }
  return;
}

int GetPlyrFloor() {
  return (int)(short)plyr_wrk.cmn_wrk.floor;
}

int GetPlyrEquipmentFilmType() {
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  return (int)(char)m_plyr_camera.camera_film.mFilmType.mValue;
}

float PlayerGetNowHPPercentage() {
  return (float)(uint)(ushort)plyr_wrk.cmn_wrk.st.hp /
         (float)(uint)(ushort)plyr_wrk.cmn_wrk.st.hpmax;
}

float PlayerGetNowMPPercentage() {
  return (float)(uint)(ushort)plyr_wrk.cmn_wrk.st.sp /
         (float)(uint)(ushort)plyr_wrk.cmn_wrk.st.spmax;
}

int GetPlyrOldAreaNo() {
  return (int)plyr_wrk.cmn_wrk.pr_info.area_old;
}

int GetPlyrAreaNo() {
  return (int)plyr_wrk.cmn_wrk.pr_info.area_no;
}

int GetPlyrRoomID() {
  return (int)plyr_wrk.cmn_wrk.pr_info.room_id;
}

void SetPlyrAreaNo(int area_no) {
  AreaChange__10CFEneEntryii(&fene_entry,area_no,(uint)plyr_wrk.cmn_wrk.pr_info.area_no);
  plyr_wrk.cmn_wrk.pr_info.area_no = (uchar)area_no;
  PlyrFlashlight__Fi(1);
  return;
}

void SetPlyrRoomID(int room_id) {
  int iVar1;
  
  plyr_wrk.cmn_wrk.pr_info.room_id = (uchar)room_id;
  iVar1 = IsPlayerInBattle__Fv();
  if ((iVar1 == 0) && (iVar1 = movie_projecterIsReq__Fv(), iVar1 != 0)) {
    movie_projecterPlay__Fv();
    return;
  }
  movie_projecterStop__Fv();
  return;
}

int InFinderMode() {
  return (int)((byte)(plyr_wrk.cmn_wrk.mode - 5) < 3);
}

int PlayerModeIsFinder() {
  return (int)(plyr_wrk.cmn_wrk.mode == '\x06');
}

int InDamageState() {
  return (int)((byte)(plyr_wrk.cmn_wrk.mode - 1) < 4);
}

int IsPlayerInBattle() {
  return (int)((plyr_wrk.cmn_wrk.st.sta & 0x20) != 0);
}

int FrameInsideChk(float *tv, float *tx, float *ty) {
	float minx;
	float maxx;
	float miny;
	float maxy;
	int result;
	
  int iVar1;
  int iVar2;
  
  GetCamI2DPos__FPCfPfT1(tv,tx,ty);
  iVar2 = 0;
  iVar1 = iVar2;
  if (((float)(int)(short)plyr_wrk.fp[0] - (float)(uint)(ushort)photo_frame_tbl[0][0] * 0.5 <= *tx)
     && (*tx <= (float)(int)(short)plyr_wrk.fp[0] + (float)(uint)(ushort)photo_frame_tbl[0][0] * 0.5
        )) {
    iVar1 = 0;
    if (((float)(int)(short)plyr_wrk.fp[1] - (float)(uint)(ushort)photo_frame_tbl[0][1] * 0.5 <= *ty
        ) && (iVar1 = iVar2,
             *ty <= (float)(int)(short)plyr_wrk.fp[1] +
                    (float)(uint)(ushort)photo_frame_tbl[0][1] * 0.5)) {
      iVar1 = 1;
    }
  }
  return iVar1;
}

static void _SetFlashlightHand(int move_sw) {
	float y;
	float z;
	float py;
	float pz;
	float rfy;
	float rfz;
	float range;
	float intens;
	float rfrange;
	int out_info;
	static int old_out_info = -1;
	float vref[4];
	float mpos1[4];
	float mpos2[4];
	float wpos11[4];
	float wpos21[4];
	float wpos12[4];
	float wpos22[4];
	float wlm[4][4];
	float xrot;
	float yrot;
	
  float y;
  float z;
  float y_00;
  G3DLIGHT *pGVar1;
  undefined *puVar2;
  G3DLIGHT *pGVar3;
  G3DLIGHT *pGVar4;
  G3DLIGHT *pGVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  G3DLIGHT *pGVar9;
  float x;
  float y_01;
  float fVar10;
  float z_00;
  float fVar11;
  float fIntens;
  float fVar12;
  float z_01;
  undefined in_vf0 [16];
  undefined extraout_vf1 [16];
  undefined extraout_vf1_00 [16];
  undefined auVar13 [16];
  undefined auVar14 [16];
  undefined auVar15 [16];
  undefined4 uVar16;
  float vref [4];
  float mpos1 [4];
  float mpos2 [4];
  float wpos11 [4];
  float wpos21 [4];
  float wpos12 [4];
  float wpos22 [4];
  float wlm [4] [4];
  float yrot;
  
  puVar2 = (undefined *)PlyrOutsideCheck__Fv();
  if (old_out_info_1434 != puVar2) {
    if (puVar2 == (undefined *)0x0) {
      debug_var.fl_py = -23.0;
      debug_var.fl_pz = -130.0;
      debug_var.fl_y = 65.0;
      debug_var.fl2_range = 1000.0;
      debug_var.fl_intens = DAT_003ee7a0;
      debug_var.fl_range = DAT_003ee79c;
    }
    else {
      debug_var.fl_py = -39.0;
      debug_var.fl_pz = -204.0;
      debug_var.fl_y = 90.0;
      debug_var.fl2_range = 1520.0;
      debug_var.fl_intens = DAT_003ee798;
      debug_var.fl_range = 1440.0;
    }
    debug_var.flrf_range = 240.0;
    debug_var.fl_z = 200.0;
    debug_var.flrf_y = 82.0;
    debug_var.flrf_z = 145.0;
  }
  y_00 = debug_var.flrf_y;
  z = debug_var.fl_z;
  y = debug_var.fl_py;
  fVar11 = debug_var.fl_range * plyr_wrk.fl_pow;
  fVar12 = debug_var.flrf_range * plyr_wrk.fl_pow;
  old_out_info_1434 = puVar2;
  if ((debug_var.fl_sw == 0) && ((plyr_wrk.cmn_wrk.st.sta & 0x8000) == 0)) {
    plyr_wrk.spot_rot[1] = 0.0;
    plyr_wrk.spot_rot[0] = 0.0;
    plyr_wrk.fl2.Type = G3DLIGHTTYPE_FORCE_DWORD;
    plyr_wrk.fl.Type = G3DLIGHTTYPE_FORCE_DWORD;
  }
  else {
    y_01 = debug_var.fl_y;
    z_00 = debug_var.fl_pz;
    fIntens = debug_var.fl_intens;
    z_01 = debug_var.flrf_z;
    if ((((move_sw != 0) && (3 < (byte)(plyr_wrk.cmn_wrk.mode - 1))) &&
        (plyr_wrk.cmn_wrk.mode != '\b')) && (plyr_wrk.move_lock_cnt == '\0')) {
      PlyrSpotMoveCtrl__Fv();
    }
    fVar10 = plyr_wrk.spot_rot[0];
    if (plyr_wrk.cmn_wrk.mode == '\x06') {
      y_01 = 42.0;
      yrot = plyr_wrk.cmn_wrk.mbox.rot[1];
      fVar10 = plyr_wrk.frot_x;
    }
    else {
      yrot = plyr_wrk.spot_rot[1] + plyr_wrk.cmn_wrk.mbox.rot[1];
      RotLimitChk__FPf(&yrot);
    }
    plyr_wrk.fl.Type = G3DLIGHT_SPOT;
    pGVar3 = gra3dGetLightRef__Fi(0x26);
    pGVar1 = &plyr_wrk.fl;
    pGVar5 = pGVar3;
    do {
      pGVar4 = pGVar5;
      pGVar9 = pGVar1;
      uVar6 = *(undefined8 *)(pGVar4->vDiffuse + 2);
      uVar7 = *(undefined8 *)pGVar4->vSpecular;
      uVar8 = *(undefined8 *)(pGVar4->vSpecular + 2);
      *(undefined8 *)pGVar9->vDiffuse = *(undefined8 *)pGVar4->vDiffuse;
      *(undefined8 *)(pGVar9->vDiffuse + 2) = uVar6;
      *(undefined8 *)pGVar9->vSpecular = uVar7;
      *(undefined8 *)(pGVar9->vSpecular + 2) = uVar8;
      pGVar5 = (G3DLIGHT *)pGVar4->vAmbient;
      pGVar1 = (G3DLIGHT *)pGVar9->vAmbient;
    } while (pGVar5 != (G3DLIGHT *)&pGVar3->fMinRange);
    uVar6 = *(undefined8 *)(pGVar4->vAmbient + 2);
    *(undefined8 *)pGVar9->vAmbient = *(undefined8 *)pGVar5;
    x = 0.0;
    *(undefined8 *)(pGVar9->vAmbient + 2) = uVar6;
    _SetVector__FPfffff(wpos11,0.0,0.0,z,1.0);
    _SetVector__FPfffff(wpos12,x,y_01,x,1.0);
    sceVu0UnitMatrix(wlm);
    sceVu0RotMatrixX(fVar10,wlm,wlm);
    sceVu0RotMatrixY(yrot,wlm,wlm);
    sceVu0TransMatrix(wlm,wlm,wpos12);
    sceVu0ApplyMatrix(mpos1,wlm,wpos11);
    _SetVector__FPfffff(wpos21,x,x,z_00,1.0);
    _SetVector__FPfffff(wpos22,x,y,x,1.0);
    sceVu0UnitMatrix(wlm);
    sceVu0RotMatrixX(fVar10,wlm,wlm);
    sceVu0RotMatrixY(plyr_wrk.cmn_wrk.mbox.rot[1],wlm,wlm);
    sceVu0TransMatrix(wlm,wlm,wpos22);
    sceVu0ApplyMatrix(mpos2,wlm,wpos21);
    sceVu0AddVector(mpos2,0x33cf50,mpos2);
    mpos2[3] = 1.0;
    mpos1[3] = 1.0;
    auVar15 = extraout_vf1;
    if (debug_var.fl_line != 0) {
      sceVu0AddVector(wpos21,mpos2,mpos1);
      auVar15 = extraout_vf1_00;
    }
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
    plyr_wrk.fl.vPosition[2] = mpos2[2];
    plyr_wrk.fl.vPosition[3] = mpos2[3];
    plyr_wrk.fl.vPosition[0] = (float)mpos2._0_8_;
    plyr_wrk.fl.vPosition[1] = SUB84(mpos2._0_8_,4);
    auVar13._12_4_ = mpos1[3];
    auVar13._0_4_ = mpos1[0];
    auVar13._4_4_ = mpos1[1];
    auVar13._8_4_ = mpos1[2];
    auVar13 = _lqc2(auVar13);
    auVar14 = _vmul(auVar13,auVar13);
    _vnop();
    _vnop();
    _vnop();
    _vaddabc(auVar14,auVar14);
    auVar15 = _vmaddbc(auVar15,auVar14);
    _vnop();
    _vnop();
    _vnop();
    uVar16 = _vrsqrt(in_vf0,auVar15);
    _vsubbc(in_vf0,in_vf0);
    _vnop();
    _vnop();
    _vnop();
    _vnop();
    _vnop();
    _vnop();
    _vnop();
    _vnop();
    _vnop();
    _vnop();
    _vnop();
    auVar15 = _vmulq(auVar13,uVar16);
    plyr_wrk.fl.vDirection = (float  [4])_sqc2(auVar15);
                    /* end of inlined section */
    if (debug_var.fl_line != 0) {
      DrawLine__FPCfUcUcUcUcT0UcUcUcUc(mpos2,0xff,0x80,0x80,0x80,wpos21,0xff,0x80,0x80,0x80);
    }
    plyr_wrk.fl2.Type = G3DLIGHTTYPE_FORCE_DWORD;
    plyr_wrk.fl.vDiffuse[0] = 1.0;
    plyr_wrk.fl.vDiffuse[1] = 1.0;
    plyr_wrk.fl.vDiffuse[2] = 1.0;
    plyr_wrk.fl.vDiffuse[3] = 1.0;
    plyr_wrk.fl.vSpecular[0] = 1.0;
    plyr_wrk.fl.vSpecular[1] = 1.0;
    plyr_wrk.fl.vSpecular[2] = 1.0;
    plyr_wrk.fl.vSpecular[3] = 1.0;
    gra3dSetLightIntens__FPC8G3DLIGHTf(&plyr_wrk.fl,fIntens);
    plyr_wrk.fl.fMinRange = fVar11 * 0.125;
    plyr_wrk.fl.fFalloff = 1.0;
    plyr_wrk.fl.fMaxRange = fVar11;
    _SetVector__FPfffff(vref,x,y_00,z_01,1.0);
    sceVu0UnitMatrix(wlm);
    sceVu0RotMatrixX(fVar10,wlm,wlm);
    sceVu0RotMatrixY(yrot,wlm,wlm);
    sceVu0TransMatrix(wlm,wlm,0x33cf50);
    sceVu0ApplyMatrix(vref,wlm,vref);
    if (debug_var.fl_line != 0) {
      DrawCrossLine__FPCf(vref);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
    }
    plyr_wrk.reflectionlight.vPosition[2] = vref[2];
    plyr_wrk.reflectionlight.vPosition[3] = vref[3];
    plyr_wrk.reflectionlight.vPosition[0] = (float)vref._0_8_;
    plyr_wrk.reflectionlight.vPosition[1] = SUB84(vref._0_8_,4);
    plyr_wrk.reflectionlight.vDiffuse[0] = plyr_wrk.fl.vDiffuse[0];
    plyr_wrk.reflectionlight.vDiffuse[1] = plyr_wrk.fl.vDiffuse[1];
    plyr_wrk.reflectionlight.vDiffuse[2] = plyr_wrk.fl.vDiffuse[2];
    plyr_wrk.reflectionlight.vDiffuse[3] = plyr_wrk.fl.vDiffuse[3];
                    /* end of inlined section */
    plyr_wrk.reflectionlight.Type = G3DLIGHT_POINT;
    plyr_wrk.reflectionlight.fMinRange = fVar12 * 0.5;
    plyr_wrk.reflectionlight.fMaxRange = fVar12;
  }
  return;
}

static void _SetFlashlightStep(int move_sw) {
	float fRange;
	float fIntens;
	float fY;
	float *pv0;
	
  float fVar1;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
                    /* end of inlined section */
  plyr_wrk.fl.Type = G3DLIGHT_POINT;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
  plyr_wrk.fl.vDirection[0] = g_v0000[0];
  plyr_wrk.fl.vDirection[1] = g_v0000[1];
  plyr_wrk.fl.vDirection[2] = g_v0000[2];
  plyr_wrk.fl.vDirection[3] = g_v0000[3];
                    /* end of inlined section */
  plyr_wrk.reflectionlight.Type = G3DLIGHT_POINT;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
                    /* end of inlined section */
  plyr_wrk.fl2.Type = G3DLIGHTTYPE_FORCE_DWORD;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
  plyr_wrk.reflectionlight.vDirection[0] = g_v0000[0];
  plyr_wrk.reflectionlight.vDirection[1] = g_v0000[1];
  plyr_wrk.reflectionlight.vDirection[2] = g_v0000[2];
  plyr_wrk.reflectionlight.vDirection[3] = g_v0000[3];
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
                    /* end of inlined section */
  plyr_wrk.fl.vPosition[1] = plyr_wrk.cmn_wrk.mbox.pos[1] + debug_var.fYFlashlightStep;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
  plyr_wrk.fl.vDiffuse[0] = g_v1111[0];
  plyr_wrk.fl.vDiffuse[1] = g_v1111[1];
  plyr_wrk.fl.vDiffuse[2] = g_v1111[2];
  plyr_wrk.fl.vDiffuse[3] = g_v1111[3];
  plyr_wrk.fl.vSpecular[0] = g_v1111[0];
  plyr_wrk.fl.vSpecular[1] = g_v1111[1];
  plyr_wrk.fl.vSpecular[2] = g_v1111[2];
  plyr_wrk.fl.vSpecular[3] = g_v1111[3];
  plyr_wrk.fl.vPosition[0] = plyr_wrk.cmn_wrk.mbox.pos[0];
  plyr_wrk.fl.vPosition[2] = plyr_wrk.cmn_wrk.mbox.pos[2];
                    /* end of inlined section */
  plyr_wrk.fl.vPosition[3] = 1.0;
  fVar1 = debug_var.fRangeFlashlightStep;
  gra3dSetLightIntens__FPC8G3DLIGHTf(&plyr_wrk.fl,debug_var.fl_intens);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
                    /* end of inlined section */
  plyr_wrk.fl.fFalloff = 1.0;
  plyr_wrk.fl.fMaxRange = fVar1;
  plyr_wrk.fl.fMinRange = fVar1 * 0.5;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
  plyr_wrk.reflectionlight.vPosition[0] = plyr_wrk.fl.vPosition[0];
  plyr_wrk.reflectionlight.vPosition[1] = plyr_wrk.fl.vPosition[1];
  plyr_wrk.reflectionlight.vPosition[2] = plyr_wrk.fl.vPosition[2];
  plyr_wrk.reflectionlight.vPosition[3] = plyr_wrk.fl.vPosition[3];
  return;
}

void PlyrFlashlight(int move_sw) {
	static char __FUNCTION__[15] = {
		/* [0] = */ 80,
		/* [1] = */ 108,
		/* [2] = */ 121,
		/* [3] = */ 114,
		/* [4] = */ 70,
		/* [5] = */ 108,
		/* [6] = */ 97,
		/* [7] = */ 115,
		/* [8] = */ 104,
		/* [9] = */ 108,
		/* [10] = */ 105,
		/* [11] = */ 103,
		/* [12] = */ 104,
		/* [13] = */ 116,
		/* [14] = */ 0
	};
	LPFUNC_SETFLASHLIGHT apFunc[2];
	
  uint uVar1;
  ulong *puVar2;
  undefined1 *apFunc [2];
  
  uVar1 = (int)apFunc + 7U & 7;
  puVar2 = (ulong *)(((int)apFunc + 7U) - uVar1);
  *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 |
            (ulong)_PTR__SetFlashlightHand__Fi_003f39f0 >> (7 - uVar1) * 8;
  apFunc = _PTR__SetFlashlightHand__Fi_003f39f0;
  if (1 < (int)s_FlashlightType) {
    _SetLineInfo__FPCciT0T0
              ("player.c",0x122f,"PlyrFlashlight","s_FlashlightType < NUM_PLAYERFLASHLIGHTTYPE");
    g3ddbgAssert__FbPCce((int)s_FlashlightType < 2,&DAT_003f39f8);
    if (1 < (int)s_FlashlightType) {
      g3ddbgPrintf__FPCce("[G3DRETURN]%s(%d)(%s):%s\n");
      return;
    }
  }
  (*(code *)apFunc[s_FlashlightType])(move_sw);
  return;
}

void PlyrSpotMoveCtrl() {
	float rv[4];
	float r;
	float rcng_adj;
	u_char d;
	
  bool bVar1;
  GRA3DCAMERA *pGVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float rv [4];
  
  if ((plyr_wrk.cmn_wrk.st.cond != 1) && (plyr_wrk.cmn_wrk.st.cond != 3)) {
    fVar3 = DAT_003ee7a4;
    fVar5 = 0.0;
    if ((0xa0 < (pad[0].analog[1] + 0xd0 & 0xff)) &&
       ((fVar4 = -(((float)(pad[0].analog[1] - 0x80) * DAT_003ee7a8) / 127.0), fVar3 = DAT_003ee7b0,
        fVar5 = DAT_003ee7ac, fVar4 <= DAT_003ee7ac && (fVar5 = fVar4, fVar4 < DAT_003ee7b4)))) {
      fVar5 = DAT_003ee7b4;
    }
    if (plyr_wrk.spot_rot[0] < fVar5) {
      fVar3 = plyr_wrk.spot_rot[0] + fVar3;
      bVar1 = fVar3 < fVar5;
    }
    else {
      fVar3 = plyr_wrk.spot_rot[0] - fVar3;
      bVar1 = fVar5 < fVar3;
    }
    plyr_wrk.spot_rot[0] = fVar5;
    if (bVar1) {
      plyr_wrk.spot_rot[0] = fVar3;
    }
    fVar5 = 0.0;
    fVar3 = DAT_003ee7b8;
    if (0xa0 < (pad[0].analog[0] + 0xd0 & 0xff)) {
      fVar3 = ((float)(pad[0].analog[0] - 0x80) * DAT_003ee7bc) / 127.0;
      fVar5 = DAT_003ee7c0;
      if ((fVar3 <= DAT_003ee7c0) && (fVar5 = fVar3, fVar3 < DAT_003ee7c8)) {
        fVar5 = DAT_003ee7c8;
      }
      fVar3 = DAT_003ee7c4;
      pGVar2 = gra3dGetCamera__Fv();
      GetTrgtRot__FPCfT0Pfi(plyr_wrk.cmn_wrk.mbox.pos,(float *)pGVar2->matCoord[3],rv,2);
      rv[1] = rv[1] - plyr_wrk.cmn_wrk.mbox.rot[1];
      RotLimitChk__FPf(rv + 1);
    }
    if (plyr_wrk.spot_rot[1] < fVar5) {
      fVar3 = plyr_wrk.spot_rot[1] + fVar3;
      bVar1 = fVar3 < fVar5;
    }
    else {
      fVar3 = plyr_wrk.spot_rot[1] - fVar3;
      bVar1 = fVar5 < fVar3;
    }
    plyr_wrk.spot_rot[1] = fVar5;
    if (bVar1) {
      plyr_wrk.spot_rot[1] = fVar3;
    }
  }
  return;
}

float GetEnePowerDegree() {
	ENE_WRK *ew;
	float sv[4];
	float dist[2];
	float degree;
	u_char i;
	
  GRA3DCAMERA *pGVar1;
  fixed_array<ENE_WRK,10> *pfVar2;
  byte bVar3;
  float fVar4;
  float fVar5;
  float sv [4];
  float dist [2];
  
  if (plyr_wrk.cmn_wrk.mode == '\x06') {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    dist[0] = 0.0;
    _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(0,10);
                    /* end of inlined section */
    bVar3 = 0;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    pfVar2 = &ene_wrk;
                    /* end of inlined section */
    fVar5 = 0.0;
    do {
      if (((((ENE_WRK *)pfVar2)->status == 4) && ((((ENE_WRK *)pfVar2)->st).hp != 0)) &&
         ((((((ENE_WRK *)pfVar2)->st).sta & 0x1000000) == 0 &&
          ((((ENE_WRK *)pfVar2)->attr & 0x80) == 0)))) {
        pGVar1 = gra3dGetCamera__Fv();
        fVar4 = GetDistV__FPCfT0((float *)pGVar1->matCoord[3],(((ENE_WRK *)pfVar2)->mpos).p0);
        if ((dist[0] == fVar5) || (fVar4 < dist[0])) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
          sv[0] = (((ENE_WRK *)pfVar2)->mpos).p0[0];
          sv[1] = (((ENE_WRK *)pfVar2)->mpos).p0[1];
          sv[2] = (((ENE_WRK *)pfVar2)->mpos).p0[2];
          sv[3] = (((ENE_WRK *)pfVar2)->mpos).p0[3];
                    /* end of inlined section */
          dist[0] = fVar4;
        }
      }
      bVar3 = bVar3 + 1;
      pfVar2 = (fixed_array<ENE_WRK,10> *)((int)pfVar2 + 0x490);
    } while (bVar3 < 10);
    fVar5 = 0.0;
    if (1.0 <= dist[0]) {
      if (4000.0 < dist[0]) {
        fVar5 = 0.0;
      }
      else {
        pGVar1 = gra3dGetCamera__Fv();
        fVar5 = CulcEP__FPfT0((float *)pGVar1->matCoord[3],sv);
      }
    }
  }
  else {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    dist[0] = 0.0;
    _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(0,10);
                    /* end of inlined section */
    bVar3 = 0;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    pfVar2 = &ene_wrk;
                    /* end of inlined section */
    fVar5 = 0.0;
    do {
      if ((((((ENE_WRK *)pfVar2)->status == 4) && ((((ENE_WRK *)pfVar2)->st).hp != 0)) &&
          (((((ENE_WRK *)pfVar2)->st).sta & 0x1000000) == 0)) &&
         ((((ENE_WRK *)pfVar2)->attr & 0x80) == 0)) {
        fVar4 = GetDistV__FPCfT0(plyr_wrk.cmn_wrk.mbox.pos,(((ENE_WRK *)pfVar2)->mpos).p0);
        if ((dist[0] == fVar5) || (fVar4 < dist[0])) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
          sv[0] = (((ENE_WRK *)pfVar2)->mpos).p0[0];
          sv[1] = (((ENE_WRK *)pfVar2)->mpos).p0[1];
          sv[2] = (((ENE_WRK *)pfVar2)->mpos).p0[2];
          sv[3] = (((ENE_WRK *)pfVar2)->mpos).p0[3];
                    /* end of inlined section */
          dist[0] = fVar4;
        }
      }
      bVar3 = bVar3 + 1;
      pfVar2 = (fixed_array<ENE_WRK,10> *)((int)pfVar2 + 0x490);
    } while (bVar3 < 10);
    fVar5 = 0.0;
    if (1.0 <= dist[0]) {
      if (4000.0 < dist[0]) {
        fVar5 = 0.0;
      }
      else {
        fVar5 = CulcEP2__FPfT0(plyr_wrk.cmn_wrk.mbox.pos,sv);
      }
    }
  }
  return fVar5;
}

int ChkPhotoAble() {
	int result;
	u_char i;
	
  bool bVar1;
  ENE_WRK *pEVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = 0;
  do {
    uVar5 = uVar4 + 1 & 0xff;
    plyr_wrk.fhp[uVar4][3] = 0.0;
    uVar4 = uVar5;
  } while (uVar5 < 5);
  iVar3 = 0;
  if ((plyr_wrk.cmn_wrk.mode == '\x06') && (iVar3 = 0, plyr_wrk.cmn_wrk.st.cond != 1)) {
    bVar1 = true;
    uVar4 = 0;
    do {
      if (!bVar1) {
        if ((plyr_wrk.cmn_wrk.st.sta & 0x20) != 0) {
          return 0;
        }
        iVar3 = photo_datObjIsRespondFilament__Fv();
        if ((iVar3 != 0) == 0) {
          return 0;
        }
        plyr_wrk.fhp[0][3] = 1.0;
        return (uint)(iVar3 != 0);
      }
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(uVar4,10);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
      uVar5 = uVar4 + 1 & 0xff;
      pEVar2 = ene_wrk.field0_0x0.m_aData + uVar4;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      bVar1 = uVar5 < 10;
      uVar4 = uVar5;
    } while (((pEVar2->st).sta & 0x80) == 0);
    iVar3 = 1;
                    /* end of inlined section */
  }
  return iVar3;
}

float CulcEP(float *v0, float *v1) {
	float rv[4];
	float degree;
	float dx;
	float dy;
	
  float fVar1;
  float fVar2;
  float rv [4];
  
  GetTrgtRot__FPCfT0Pfi(v0,v1,rv,3);
  rv[1] = rv[1] - plyr_wrk.cmn_wrk.mbox.rot[1];
  fVar2 = 0.0;
  RotLimitChk__FPf(rv + 1);
  rv[1] = ABS(rv[1]);
  if (rv[1] <= DAT_003ee7cc) {
    fVar2 = (DAT_003ee7cc - rv[1]) / DAT_003ee7cc;
  }
  rv[0] = rv[0] - plyr_wrk.frot_x;
  RotLimitChk__FPf(rv);
  fVar1 = 0.0;
  if (ABS(rv[0]) <= 60.0) {
    fVar1 = (60.0 - ABS(rv[0])) / 60.0;
  }
  return fVar1 * fVar2 * 100.0;
}

float CulcEP2(float *v0, float *v1) {
	float rv[4];
	float degree;
	
  float fVar1;
  float rv [4];
  
  GetTrgtRot__FPCfT0Pfi(v0,v1,rv,2);
  fVar1 = 0.0;
  rv[1] = rv[1] - plyr_wrk.cmn_wrk.mbox.rot[1];
  RotLimitChk__FPf(rv + 1);
  if (ABS(rv[1]) <= DAT_003ee7d0) {
    fVar1 = ((DAT_003ee7d0 - ABS(rv[1])) * 100.0) / DAT_003ee7d0;
  }
  return fVar1;
}

float CulcEP3(float *v1) {
	float rv[4];
	float degree;
	float v0[4];
	float dist;
	float multi;
	
  GRA3DCAMERA *pGVar1;
  float fVar2;
  float fVar3;
  float rv [4];
  float v0 [4];
  
  fVar3 = 0.0;
  if (plyr_wrk.cmn_wrk.mode == '\x06') {
    pGVar1 = gra3dGetCamera__Fv();
    sceVu0CopyVector(v0,pGVar1->matCoord[3]);
  }
  else {
    sceVu0CopyVector(v0,0x33cda0);
  }
  GetTrgtRot__FPCfT0Pfi(v0,v1,rv,2);
  rv[1] = rv[1] - plyr_wrk.cmn_wrk.mbox.rot[1];
  RotLimitChk__FPf(rv + 1);
  rv[1] = ABS(rv[1]);
  if (rv[1] <= DAT_003ee7d4) {
    fVar3 = (DAT_003ee7d4 - rv[1]) / DAT_003ee7d4;
  }
  fVar2 = GetDistV__FPCfT0(plyr_wrk.cmn_wrk.mbox.pos,v1);
  if (600.0 < fVar2) {
    if (fVar2 < DAT_003ee7d8) {
      fVar3 = fVar3 * (1.0 - (fVar2 - 600.0) / DAT_003ee7dc);
    }
    else {
      fVar3 = fVar3 * 0.0;
    }
  }
  else {
    fVar3 = fVar3 * 1.0;
  }
  return fVar3;
}

int InFinderFrameSub(float *pos, float *p_dist, float sight_range, float limit_dist) {
	float tx;
	float ty;
	int ret;
	
  uchar uVar1;
  GRA3DCAMERA *pGVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float tx;
  float ty;
  
  pGVar2 = gra3dGetCamera__Fv();
  uVar1 = OutSightChk__FPfT0fff
                    (pos,(float *)pGVar2->matCoord[3],plyr_wrk.cmn_wrk.mbox.rot[1],sight_range,
                     limit_dist);
  if (uVar1 == '\0') {
    iVar4 = 1;
    iVar3 = FrameInsideChk__FPfN20(pos,&tx,&ty);
    if (iVar3 != 0) goto LAB_0023d218;
  }
  iVar4 = 0;
LAB_0023d218:
  fVar5 = GetDist__Fff((float)(int)(short)plyr_wrk.fp[0] - tx,(float)(int)(short)plyr_wrk.fp[1] - ty
                      );
  *p_dist = fVar5;
  return iVar4;
}

void PlyrRoomCheck() {
  int iVar1;
  
  if (plyr_wrk.cmn_wrk.pr_info.camera_no_old != plyr_wrk.cmn_wrk.pr_info.camera_no) {
    iVar1 = GetPALMode__Fv();
    if (iVar1 == 0) {
      cam_cng_tm = 0x14;
    }
    else {
      cam_cng_tm = 0x10;
    }
    if (plyr_wrk.cmn_wrk.pr_info.area_no != plyr_wrk.cmn_wrk.pr_info.area_old) {
      plyr_wrk.cmn_wrk.st.mvsta = plyr_wrk.cmn_wrk.st.mvsta | 0x200;
    }
  }
  plyr_wrk.cmn_wrk.pr_info.camera_no_old = plyr_wrk.cmn_wrk.pr_info.camera_no;
  iVar1 = MrecIsCameraChange__Fv();
  plyr_wrk.cmn_wrk.pr_info.camera_no = (uchar)iVar1;
  plyr_wrk.cmn_wrk.pr_info.area_old = plyr_wrk.cmn_wrk.pr_info.area_no;
  return;
}

float GetNearestDistFromPlyrToEnemy() {
	float l;
	float ll;
	int i;
	
  int iVar1;
  int wrk_no;
  int iVar2;
  float *p1;
  float fVar3;
  float fVar4;
  
  p1 = ene_wrk.field0_0x0.m_aData[0].mbox.pos;
  fVar4 = DAT_003ee7e0;
  wrk_no = 0;
  do {
    iVar1 = IsAliveEnemy__Fi(wrk_no);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
    iVar2 = wrk_no + 1;
    if (iVar1 != 0) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(wrk_no,10);
      fVar3 = GetDistV__FPCfT0(plyr_wrk.cmn_wrk.mbox.pos,p1);
                    /* end of inlined section */
      if (fVar3 < fVar4) {
        fVar4 = fVar3;
      }
    }
    p1 = p1 + 0x124;
    wrk_no = iVar2;
  } while (iVar2 < 10);
  return fVar4;
}

int DoorMotionIsEnd() {
  int iVar1;
  
  iVar1 = CheckPlyrAnimeEnd__Fi(door_anime_no);
  return iVar1;
}

void ReqPlyrDoorMotion(int door_type, int phase) {
	int anime_no;
	static int ani_tbl[16][2] = {
		/* [0] = */ {
			/* [0] = */ 30,
			/* [1] = */ 31
		},
		/* [1] = */ {
			/* [0] = */ 26,
			/* [1] = */ 27
		},
		/* [2] = */ {
			/* [0] = */ 28,
			/* [1] = */ 29
		},
		/* [3] = */ {
			/* [0] = */ 24,
			/* [1] = */ 25
		},
		/* [4] = */ {
			/* [0] = */ 38,
			/* [1] = */ 39
		},
		/* [5] = */ {
			/* [0] = */ 36,
			/* [1] = */ 37
		},
		/* [6] = */ {
			/* [0] = */ 38,
			/* [1] = */ 39
		},
		/* [7] = */ {
			/* [0] = */ 36,
			/* [1] = */ 37
		},
		/* [8] = */ {
			/* [0] = */ 32,
			/* [1] = */ 33
		},
		/* [9] = */ {
			/* [0] = */ 34,
			/* [1] = */ 35
		},
		/* [10] = */ {
			/* [0] = */ 40,
			/* [1] = */ 41
		},
		/* [11] = */ {
			/* [0] = */ 40,
			/* [1] = */ 41
		},
		/* [12] = */ {
			/* [0] = */ 42,
			/* [1] = */ 43
		},
		/* [13] = */ {
			/* [0] = */ 42,
			/* [1] = */ 43
		},
		/* [14] = */ {
			/* [0] = */ 44,
			/* [1] = */ 45
		},
		/* [15] = */ {
			/* [0] = */ 46,
			/* [1] = */ 47
		}
	};
	
  int iVar1;
  
  iVar1 = -1;
  if (door_type < 0x10) {
    iVar1 = *(int *)(ani_tbl_1477 + (door_type * 2 + phase) * 4);
  }
  if (iVar1 < 1) {
    printf("ERR! NO PLAYER_ANIM[%d]\n");
  }
  else {
    SetPlyrAnime__FUcUc((uchar)iVar1,'\n');
    door_anime_no = iVar1;
    PlayerChangeMode__Fi(8);
    if (phase == 0) {
      EnemyAnimLock__Fv();
      plyr_wrk.cmn_wrk.st.sta = plyr_wrk.cmn_wrk.st.sta | 8;
      ClearPlyrMoveStatus__Fv();
      return;
    }
    if (phase == 1) {
      plyr_wrk.cmn_wrk.st.sta = plyr_wrk.cmn_wrk.st.sta | 0x10;
    }
  }
  return;
}

int PlyrOpenDoor() {
	int ret;
	
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (plyr_wrk.cmn_wrk.mode == '\b') {
    iVar1 = DoorMotionIsEnd__Fv();
    iVar2 = 0;
    if ((iVar1 != 0) && (iVar2 = 0, (plyr_wrk.cmn_wrk.st.sta & 0x10) != 0)) {
      plyr_wrk.cmn_wrk.st.sta = plyr_wrk.cmn_wrk.st.sta & 0xffffffffffffdfe7;
      iVar2 = 1;
      PlayerChangeMode__Fi(0);
      plyr_wrk.door_flg = '\x01';
      EnemyAnimUnlock__Fv();
      MapHitDeleteDoorFlg__Fi(1);
      SetPlayerHitRadius__Ff(150.0);
    }
  }
  return iVar2;
}

void ClearPlyrDoorFlg() {
  plyr_wrk.door_flg = '\0';
  return;
}

u_char GetPlyrDoorFlg() {
  return plyr_wrk.door_flg;
}

int GetPlyrDoorMoveFlg() {
  int iVar1;
  
  iVar1 = DoorMotionIsEnd__Fv();
  if ((iVar1 == 0) || (iVar1 = 0, (plyr_wrk.cmn_wrk.st.sta & 8) == 0)) {
    iVar1 = 1;
  }
  return iVar1;
}

void PlayerChangeMode(int iMode) {
	int bBack;
	
  int iVar1;
  int iVar2;
  
  iVar1 = InFinderMode__Fv();
  printf("Plyr Mode Transfer From %d To ");
  plyr_wrk.cmn_wrk.mode = (uchar)iMode;
  printf(s__d___003f3a00);
  iVar2 = InFinderMode__Fv();
  if ((iVar2 == 0) && (iVar1 != 0)) {
    FinderModeEndJob__Fv();
  }
  return;
}

void MovePlyrStairs() {
	float fw;
	float rotw;
	
  int iVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  float fVar5;
  float fw;
  float rotw;
  
  iVar1 = MrecGetStaInfo__FPfiPCf
                    (&rotw,(int)(short)plyr_wrk.cmn_wrk.floor,plyr_wrk.cmn_wrk.mbox.pos);
  if (iVar1 < 1) {
    uVar2 = 0xffffffffffffff0f;
    uVar4 = plyr_wrk.cmn_wrk.st.mvsta;
    if ((plyr_wrk.cmn_wrk.st.mvsta & 0xf0) == 0) {
      return;
    }
  }
  else {
    fw = rotw - plyr_wrk.cmn_wrk.mbox.rot[1];
    RotLimitChk__FPf(&fw);
    fVar5 = (fw * 180.0) / DAT_003ee7e4;
    if ((fVar5 <= -65.0) || (65.0 <= fVar5)) {
      if (((fVar5 < -180.0) || (-115.0 <= fVar5)) && ((fVar5 <= 115.0 || (180.0 < fVar5)))) {
        if ((plyr_wrk.cmn_wrk.st.mvsta & 0xf0) == 0) {
          return;
        }
        plyr_wrk.cmn_wrk.st.mvsta = plyr_wrk.cmn_wrk.st.mvsta & 0xffffffffffffff0f;
        return;
      }
      iVar1 = 0x80;
      if ((plyr_wrk.cmn_wrk.st.mvsta & 1) == 0) {
        iVar1 = 0x20;
        if ((plyr_wrk.cmn_wrk.st.mvsta & 2) == 0) {
          plyr_wrk.cmn_wrk.st.mvsta = plyr_wrk.cmn_wrk.st.mvsta & 0xffffffffffffff0f;
          return;
        }
        iVar3 = -0x81;
      }
      else {
        iVar3 = -0x21;
      }
      plyr_wrk.cmn_wrk.st.mvsta = (plyr_wrk.cmn_wrk.st.mvsta | (long)iVar1) & (long)iVar3;
      return;
    }
    if ((plyr_wrk.cmn_wrk.st.mvsta & 1) == 0) {
      uVar4 = 0xffffffffffffffbf;
      if ((plyr_wrk.cmn_wrk.st.mvsta & 2) == 0) {
        plyr_wrk.cmn_wrk.st.mvsta = plyr_wrk.cmn_wrk.st.mvsta & 0xffffffffffffff0f;
        return;
      }
      uVar2 = plyr_wrk.cmn_wrk.st.mvsta | 0x10;
    }
    else {
      uVar4 = 0xffffffffffffffef;
      uVar2 = plyr_wrk.cmn_wrk.st.mvsta | 0x40;
    }
  }
  plyr_wrk.cmn_wrk.st.mvsta = uVar4 & uVar2;
  return;
}

int CheckPlyrAnimeEnd(int anime_no) {
  int iVar1;
  
  iVar1 = 1;
  if (((plyr_wrk.cmn_wrk.st.sta & 0x2000) == 0) && (iVar1 = 0, anime_no != (uint)plyr_wrk.anime_no))
  {
    iVar1 = 1;
  }
  return iVar1;
}

void PlyrCondCheck() {
  char cVar1;
  uchar uVar2;
  int iVar3;
  
  if (((ushort)(plyr_wrk.cmn_wrk.st.hp - 1U) < 0x4b0) &&
     (cVar1 = GetSynchroModeFlg__Fv(), cVar1 != '\x01')) {
                    /* inlined from /home/zero_rom/zero2np/src/common/zero2_util.h */
    if (mio_deadly_player.field0_0x0.play_id == 0x300000) {
                    /* inlined from plyr_mdl.h */
      mio_deadly_player.field0_0x0.play_id =
           (CSND_BUF_PLAY)
           plyr_mdlBankPlay__FiiiiP11_SND_3D_SETii(3,1,1,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    }
  }
  else if (mio_deadly_player.field0_0x0.play_id != 0x300000) {
    SndBufFadeStop((int)mio_deadly_player.field0_0x0.play_id,10);
    mio_deadly_player.field0_0x0.play_id = (CSND_BUF_PLAY)0x300000;
  }
  plyr_wrk.cmn_wrk.st.sta_old = plyr_wrk.cmn_wrk.st.sta;
  if (plyr_wrk.cmn_wrk.st.cond_tm != 0) {
    iVar3 = (ushort)plyr_wrk.cmn_wrk.st.cond_tm - 1;
    if (iVar3 < 0) {
      iVar3 = 0;
    }
    plyr_wrk.cmn_wrk.st.cond_tm = (short)iVar3;
  }
  if (plyr_wrk.cmn_wrk.st.cond == 1) {
    VibrateRequest2__FUsUs(0,0xff);
    if ((plyr_wrk.cmn_wrk.st.cond_tm != 0) && (uVar2 = LeverGachaChk__Fv(), uVar2 != '\0')) {
      iVar3 = (ushort)plyr_wrk.cmn_wrk.st.cond_tm - 1;
      if (iVar3 < 0) {
        iVar3 = 0;
      }
      plyr_wrk.cmn_wrk.st.cond_tm = (short)iVar3;
    }
  }
  else if ((1 < (ushort)plyr_wrk.cmn_wrk.st.cond) && (plyr_wrk.cmn_wrk.st.cond == 2)) {
    if (plyr_wrk.cmn_wrk.st.cond_old != 2) {
      MapFogStartFogEv__Fiiiiiii(4,4,4,500,0x226,10,0xff);
    }
    if ((byte)(plyr_wrk.cmn_wrk.mode - 1) < 4) {
      plyr_wrk.cmn_wrk.st.cond_tm = 0;
    }
    if (plyr_wrk.cmn_wrk.st.cond_tm == 0) {
      MapFogEndFogEv__Fi(0x1e);
    }
  }
  plyr_wrk.cmn_wrk.st.cond_old = plyr_wrk.cmn_wrk.st.cond;
  if (plyr_wrk.cmn_wrk.st.cond_tm == 0) {
    plyr_wrk.cmn_wrk.st.cond = 0;
  }
  if (plyr_wrk.shutter_tm != 0) {
    plyr_wrk.shutter_tm = plyr_wrk.shutter_tm + -1;
  }
  return;
}

void PlyrSEStop() {
                    /* inlined from /home/zero_rom/zero2np/src/common/zero2_util.h */
  if (((ushort)(plyr_wrk.cmn_wrk.st.hp - 1U) < 0x4b0) &&
     (mio_deadly_player.field0_0x0.play_id != 0x300000)) {
    SndBufFadeStop((int)mio_deadly_player.field0_0x0.play_id,10);
    mio_deadly_player.field0_0x0.play_id = (CSND_BUF_PLAY)0x300000;
  }
  return;
}

int PlyrOutsideCheck() {
  int iVar1;
  
  iVar1 = 1;
  if ((0xc < plyr_wrk.cmn_wrk.pr_info.area_no) &&
     (iVar1 = 0, plyr_wrk.cmn_wrk.pr_info.area_no == 'A')) {
    iVar1 = 1;
  }
  return iVar1;
}

void playerSetFlashlightType(PLAYERFLASHLIGHTTYPE pft) {
	static char __FUNCTION__[24] = {
		/* [0] = */ 112,
		/* [1] = */ 108,
		/* [2] = */ 97,
		/* [3] = */ 121,
		/* [4] = */ 101,
		/* [5] = */ 114,
		/* [6] = */ 83,
		/* [7] = */ 101,
		/* [8] = */ 116,
		/* [9] = */ 70,
		/* [10] = */ 108,
		/* [11] = */ 97,
		/* [12] = */ 115,
		/* [13] = */ 104,
		/* [14] = */ 108,
		/* [15] = */ 105,
		/* [16] = */ 103,
		/* [17] = */ 104,
		/* [18] = */ 116,
		/* [19] = */ 84,
		/* [20] = */ 121,
		/* [21] = */ 112,
		/* [22] = */ 101,
		/* [23] = */ 0
	};
	
  if (1 < (int)s_FlashlightType) {
    _SetLineInfo__FPCciT0T0
              ("player.c",0x1500,"playerSetFlashlightType",
               "s_FlashlightType < NUM_PLAYERFLASHLIGHTTYPE");
    g3ddbgAssert__FbPCce((int)s_FlashlightType < 2,&DAT_003f39f8);
  }
  s_FlashlightType = pft;
  return;
}

PLAYERFLASHLIGHTTYPE playerGetFlashlightType() {
	static char __FUNCTION__[24] = {
		/* [0] = */ 112,
		/* [1] = */ 108,
		/* [2] = */ 97,
		/* [3] = */ 121,
		/* [4] = */ 101,
		/* [5] = */ 114,
		/* [6] = */ 71,
		/* [7] = */ 101,
		/* [8] = */ 116,
		/* [9] = */ 70,
		/* [10] = */ 108,
		/* [11] = */ 97,
		/* [12] = */ 115,
		/* [13] = */ 104,
		/* [14] = */ 108,
		/* [15] = */ 105,
		/* [16] = */ 103,
		/* [17] = */ 104,
		/* [18] = */ 116,
		/* [19] = */ 84,
		/* [20] = */ 121,
		/* [21] = */ 112,
		/* [22] = */ 101,
		/* [23] = */ 0
	};
	
  if (1 < (int)s_FlashlightType) {
    _SetLineInfo__FPCciT0T0
              ("player.c",0x1507,"playerGetFlashlightType",
               "s_FlashlightType < NUM_PLAYERFLASHLIGHTTYPE");
    g3ddbgAssert__FbPCce((int)s_FlashlightType < 2,&DAT_003f39f8);
  }
  return s_FlashlightType;
}

void GetCenterPoint(float *center, float *t1, float *t2) {
  float fVar1;
  float fVar2;
  
  *center = (*t1 + *t2) * 0.5;
  center[1] = (t1[1] + t2[1]) * 0.5;
  fVar1 = t1[2];
  fVar2 = t2[2];
  center[3] = 1.0;
  center[2] = (fVar1 + fVar2) * 0.5;
  return;
}

void ClearPlyrMoveStatus() {
  plyr_wrk.cmn_wrk.mbox.rspd[1] = 0.0;
  plyr_wrk.cmn_wrk.st.mvsta = plyr_wrk.cmn_wrk.st.mvsta & 0xffffffffffffe7ff;
  return;
}

int IsFinderLocked() {
  return (int)(plyr_wrk.finder_lock_cnt != '\0');
}

int PlayerFinderLock() {
  int iVar1;
  int iVar2;
  
  DrawLock__9CFilament(&m_plyr_camera.filament);
  plyr_wrk.finder_lock_cnt = plyr_wrk.finder_lock_cnt + '\x01';
  iVar1 = InFinderMode__Fv();
  iVar2 = -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  return iVar2;
}

void PlayerFinderUnlock() {
	static char __FUNCTION__[19] = {
		/* [0] = */ 80,
		/* [1] = */ 108,
		/* [2] = */ 97,
		/* [3] = */ 121,
		/* [4] = */ 101,
		/* [5] = */ 114,
		/* [6] = */ 70,
		/* [7] = */ 105,
		/* [8] = */ 110,
		/* [9] = */ 100,
		/* [10] = */ 101,
		/* [11] = */ 114,
		/* [12] = */ 85,
		/* [13] = */ 110,
		/* [14] = */ 108,
		/* [15] = */ 111,
		/* [16] = */ 99,
		/* [17] = */ 107,
		/* [18] = */ 0
	};
	
  plyr_wrk.finder_lock_cnt = plyr_wrk.finder_lock_cnt + -1;
  DrawUnlock__9CFilament(&m_plyr_camera.filament);
  if (plyr_wrk.finder_lock_cnt < '\0') {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("finder_lock_cnt is under 0");
  }
  return;
}

void PlayerShutterLock() {
  plyr_wrk.shutter_lock_cnt = plyr_wrk.shutter_lock_cnt + '\x01';
  return;
}

void PlayerShutterUnlock() {
  plyr_wrk.shutter_lock_cnt = plyr_wrk.shutter_lock_cnt + -1;
  return;
}

void PlayerMoveLock() {
  plyr_wrk.move_lock_cnt = plyr_wrk.move_lock_cnt + '\x01';
  return;
}

void PlayerMoveUnlock() {
  plyr_wrk.move_lock_cnt = plyr_wrk.move_lock_cnt + -1;
  return;
}

void PlayerActionLock() {
  plyr_wrk.action_lock_cnt = plyr_wrk.action_lock_cnt + '\x01';
  return;
}

void PlayerActionUnlock() {
  plyr_wrk.action_lock_cnt = plyr_wrk.action_lock_cnt + -1;
  return;
}

void PlayerRunLock() {
  plyr_wrk.run_lock_cnt = plyr_wrk.run_lock_cnt + '\x01';
  return;
}

void PlayerRunUnlock() {
  plyr_wrk.run_lock_cnt = plyr_wrk.run_lock_cnt + -1;
  return;
}

void PlayerCurseLock() {
  plyr_wrk.ane_curse_lock = plyr_wrk.ane_curse_lock + 1;
  return;
}

void PlayerCurseUnlock() {
  plyr_wrk.ane_curse_lock = plyr_wrk.ane_curse_lock + -1;
  return;
}

void PlayerLock() {
  PlayerMoveLock__Fv();
  PlayerActionLock__Fv();
  PlayerFinderLock__Fv();
  return;
}

void PlayerUnlock() {
  PlayerMoveUnlock__Fv();
  PlayerActionUnlock__Fv();
  PlayerFinderUnlock__Fv();
  return;
}

void SetSave_PlyrWrk(MC_SAVE_DATA *data) {
  data->size = 0x380;
  data->addr = (uchar *)&plyr_wrk;
  return;
}

int CheckPlayerNeckSW(u_char anime_no) {
	int sw;
	
  int iVar1;
  
  iVar1 = 0;
  if ((0x3b < anime_no) || (anime_no < 0x32)) {
    iVar1 = 1;
  }
  return iVar1;
}

int CEneTracer::Init() {
  char cVar1;
  
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  cVar1 = (this->mTraceEne).mValue;
  (this->mWaitCnt).mValue = 0;
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  (this->mTraceEne).mValue = '\n';
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  (this->mTraceEne).mAdd = '\0';
                    /* end of inlined section */
  _ClearVector__FPf(plyr_wrk.cmn_wrk.mbox.rspd);
  plyr_wrk.cmn_wrk.st.sta = plyr_wrk.cmn_wrk.st.sta & 0xfffffffffffbffff;
  return (int)(cVar1 != '\n');
}

void CEneTracer::Work() {
	float tv[4];
	float DiffVec[4];
	float DiffVecUnit[4];
	float *pv0;
	
  char cVar1;
  int iVar2;
  long lVar3;
  CWrkVariable<char,0,10> *pCVar4;
  float fVar5;
  float tv [4];
  float DiffVec [4];
  float DiffVecUnit [4];
  
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  pCVar4 = &this->mTraceEne;
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  if ((pCVar4->mValue == '\n') || (iVar2 = IsActEnemy__Fi((int)pCVar4->mValue), iVar2 == 0)) {
                    /* end of inlined section */
    Init__10CEneTracer(this);
  }
  else {
    lVar3 = Work__t13CWaitVariable1Zs(this);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
    if (lVar3 == 0) {
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
                    /* end of inlined section */
      plyr_wrk.cmn_wrk.st.sta = plyr_wrk.cmn_wrk.st.sta | 0x40000;
      tv[0] = (float)plyr_wrk.cmn_wrk.mbox.pos._0_8_;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
      tv[2] = plyr_wrk.cmn_wrk.mbox.pos[2];
      tv[3] = plyr_wrk.cmn_wrk.mbox.pos[3];
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
      cVar1 = pCVar4->mValue;
                    /* end of inlined section */
      tv[1] = SUB84(plyr_wrk.cmn_wrk.mbox.pos._0_8_,4) + DAT_003ee7e8;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(cVar1,10);
      GetTrgtRot__FPCfT0Pfi
                (tv,(float *)((int)&ene_wrk.field0_0x0.m_aData[0].mpos +
                             (cVar1 * 0x48 + (int)cVar1) * 0x10),DiffVec,3);
                    /* end of inlined section */
      DiffVec[0] = DiffVec[0] - plyr_wrk.frot_x;
      RotLimitChk__FPf(DiffVec);
      DiffVec[1] = DiffVec[1] - plyr_wrk.cmn_wrk.mbox.rot[1];
      RotLimitChk__FPf(DiffVec + 1);
      fVar5 = GetLenUnitFromVec__FPfT0(DiffVecUnit,DiffVec);
                    /* end of inlined section */
      if (fVar5 < DAT_003ee7ec) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
        plyr_wrk.cmn_wrk.mbox.rspd[2] = DiffVec[2];
        plyr_wrk.cmn_wrk.mbox.rspd[3] = DiffVec[3];
        plyr_wrk.cmn_wrk.mbox.rspd[0] = DiffVec[0];
        plyr_wrk.cmn_wrk.mbox.rspd[1] = DiffVec[1];
      }
      else {
                    /* end of inlined section */
        sceVu0ScaleVector(0x33ce10,DiffVecUnit);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
      }
      plyr_wrk.cmn_wrk.mbox.trot[1] = plyr_wrk.cmn_wrk.mbox.rot[1];
      plyr_wrk.cmn_wrk.mbox.trot[2] = plyr_wrk.cmn_wrk.mbox.rot[2];
      plyr_wrk.cmn_wrk.mbox.trot[3] = plyr_wrk.cmn_wrk.mbox.rot[3];
                    /* end of inlined section */
      plyr_wrk.cmn_wrk.mbox.mloop = 0.0;
      plyr_wrk.cmn_wrk.mbox.trot[0] = plyr_wrk.frot_x;
    }
    else {
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
      cVar1 = pCVar4->mValue;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(cVar1,10);
      IgEffectEffectEndParticleReq__FPfi
                ((float *)((int)&ene_wrk.field0_0x0.m_aData[0].mpos +
                          (cVar1 * 0x48 + (int)cVar1) * 0x10 + 0x10),3);
                    /* end of inlined section */
      _ClearVector__FPf(plyr_wrk.cmn_wrk.mbox.rspd);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
      pCVar4->mValue = '\n';
      (this->mTraceEne).mAdd = '\0';
    }
  }
  return;
}

void CEneTracer::Req(int iEneNo, int iFrame) {
	CWrkVariable<char,0,10> *this;
	
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  if ((this->mWaitCnt).mValue == 0) {
    (this->mWaitCnt).mValue = (ushort)iFrame;
  }
  (this->mTraceEne).mValue = (char)iEneNo;
  (this->mTraceEne).mAdd = '\0';
  return;
}

ENE_WRK* ENE_WRK * _fixed_array_verifyrange<ENE_WRK>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_849);
  return (type_info *)this;
}

u_char* unsigned char * _fixed_array_verifyrange<unsigned char>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_849);
  return (type_info *)this;
}

short int* short * _fixed_array_verifyrange<short>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_849);
  return (type_info *)this;
}

int CWaitVariable<short>::Work() {
  g3ddbgAssert__FbPCce(false,str_849);
  return (type_info *)this;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if ((__priority == 0xffff) && (__initialize_p == 1)) {
                    /* end of inlined section */
    plyr_wrk.ene_tracer.mWaitCnt.mValue = 0;
    plyr_wrk.ene_tracer.mTraceEne.mAdd = '\0';
    plyr_wrk.ene_tracer.mTraceEne.mValue = '\0';
                    /* inlined from /home/zero_rom/zero2np/src/common/zero2_util.h */
    mio_deadly_player.field0_0x0.play_id = (CSND_BUF_PLAY)0x300000;
  }
                    /* inlined from player.c */
  return;
}

type_info& ENE_WRK type_info function() {
  g3ddbgAssert__FbPCce(false,str_849);
  return (type_info *)this;
}

static void global constructors keyed to plyr_wrk() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
