// STATUS: NOT STARTED

#include "m_plyr_camera.h"

CNPlyrCamera m_plyr_camera = {
	/* .camera_power_up = */ {
		/* .mSensitiveGrade = */ {
			/* .mValue = */ 0
		},
		/* .mRadiusGrade = */ {
			/* .mValue = */ 0
		},
		/* .mRadiusGem = */ {
			/* .mValue = */ 0
		},
		/* .mSensiteiveGem = */ {
			/* .mValue = */ 0
		},
		/* .mAccumGem = */ {
			/* .mValue = */ 0
		},
		/* .mSubFuncGem = */ {
			/* [0] = */ {
				/* .mValue = */ 0
			},
			/* [1] = */ {
				/* .mValue = */ 0
			},
			/* [2] = */ {
				/* .mValue = */ 0
			},
			/* [3] = */ {
				/* .mValue = */ 0
			},
			/* [4] = */ {
				/* .mValue = */ 0
			},
			/* [5] = */ {
				/* .mValue = */ 0
			},
			/* [6] = */ {
				/* .mValue = */ 0
			},
			/* [7] = */ {
				/* .mValue = */ 0
			},
			/* [8] = */ {
				/* .mValue = */ 0
			},
			/* [9] = */ {
				/* .mValue = */ 0
			}
		},
		/* .mAdditionFlg = */ {
			/* .flag_32 = */ {
				/* [0] = */ 0
			}
		},
		/* .mCamPartsFlg = */ {
			/* .flag_32 = */ {
				/* [0] = */ 0
			}
		},
		/* .mCamPartsSetFlg = */ {
			/* .flag_32 = */ {
				/* [0] = */ 0
			}
		},
		/* .mTemperedRenzFlg = */ {
			/* .flag_32 = */ {
				/* [0] = */ 0
			}
		}
	},
	/* .camera_film = */ {
		/* .mFilmType = */ {
			/* .mValue = */ 0
		}
	},
	/* .eq_tray = */ {
		/* .mSave = */ {
			/* .mSubFuncLv = */ {
				/* base class 0 = */ {
					/* .m_aData = */ {
						/* [0] = */ {
							/* .mValue = */ 0
						},
						/* [1] = */ {
							/* .mValue = */ 0
						},
						/* [2] = */ {
							/* .mValue = */ 0
						},
						/* [3] = */ {
							/* .mValue = */ 0
						},
						/* [4] = */ {
							/* .mValue = */ 0
						},
						/* [5] = */ {
							/* .mValue = */ 0
						},
						/* [6] = */ {
							/* .mValue = */ 0
						},
						/* [7] = */ {
							/* .mValue = */ 0
						},
						/* [8] = */ {
							/* .mValue = */ 0
						},
						/* [9] = */ {
							/* .mValue = */ 0
						}
					}
				}
			},
			/* .mStockGrade = */ {
				/* .mValue = */ 0
			},
			/* .mEquipFunc = */ {
				/* base class 0 = */ {
					/* .m_aData = */ {
						/* [0] = */ {
							/* .mValue = */ 0
						},
						/* [1] = */ {
							/* .mValue = */ 0
						},
						/* [2] = */ {
							/* .mValue = */ 0
						}
					}
				}
			},
			/* .mSlctNo = */ {
				/* .mValue = */ 0
			},
			/* .mDispGage = */ 0,
			/* .mBankGage = */ 0,
			/* .mStockNum = */ 0,
			/* .mAbsorbMultiRate = */ 0.f
		},
		/* .mRemainParticleNum = */ 0,
		/* .mFOV = */ {
			/* .mValue = */ 0.f,
			/* .mSpeed = */ 0.f,
			/* .mTarget = */ 0.f
		},
		/* .mStockAnm = */ {
			/* .mValue = */ 0,
			/* .mSpeed = */ 0
		},
		/* .mSubFuncAnmShot = */ {
			/* .mValue = */ 0,
			/* .mSpeed = */ 0
		},
		/* .mSubFuncAnmBlink = */ {
			/* .mValue = */ 0,
			/* .mOn = */ BITFIELD,
			/* .mUp = */ BITFIELD
		},
		/* .mSubFuncAnmBlinkNoSetup = */ {
			/* .mValue = */ 0,
			/* .mOn = */ BITFIELD,
			/* .mUp = */ BITFIELD
		},
		/* .mGageAnmAlpha = */ {
			/* .mValue = */ 0,
			/* .mSpeed = */ 0,
			/* .mTarget = */ 0
		},
		/* .mMode = */ 0,
		/* .mRot = */ 0.f,
		/* .mRotSpd = */ 0.f,
		/* .mRemainTime = */ 0,
		/* .mFcs = */ {
			/* .mValue = */ 0,
			/* .mAdd = */ 0
		},
		/* .mRenzMarkBlink = */ {
			/* .mValue = */ 0,
			/* .mAdd = */ 0
		},
		/* .mAccumulateBollFlare = */ {
			/* .mValue = */ 0,
			/* .mOn = */ BITFIELD,
			/* .mUp = */ BITFIELD
		},
		/* .mAccumulateBollRot = */ {
			/* .mValue = */ 0.f,
			/* .m_fMax = */ 0.f,
			/* .m_fMin = */ 0.f
		},
		/* .mRenzMarkAlpha = */ {
			/* .mValue = */ 0,
			/* .mAdd = */ 0
		},
		/* .mSuckMouthScale = */ {
			/* .mValue = */ 0,
			/* .mAdd = */ 0
		},
		/* .mSuckMouthAlpha = */ {
			/* .mValue = */ 0,
			/* .mAdd = */ 0
		},
		/* .mPreSlctAlpha = */ {
			/* .mValue = */ 0,
			/* .mSpeed = */ 0,
			/* .mTarget = */ 0
		},
		/* .mPreSlctYOffset = */ 0,
		/* .mNowOffset = */ {
			/* .mValue = */ 0,
			/* .mSpeed = */ 0,
			/* .mTarget = */ 0
		},
		/* .mSetupFlg = */ BITFIELD,
		/* .mGageUpFlg = */ BITFIELD,
		/* .mBattleFlg = */ BITFIELD,
		/* .mShotAble = */ BITFIELD,
		/* .mFirstFlg = */ BITFIELD
	},
	/* .filament = */ {
		/* .rt_ev_wrk = */ {
			/* .time = */ 0,
			/* .cnt = */ 0,
			/* .type = */ 0,
			/* .sptime = */ 0,
			/* .sptype = */ 0
		},
		/* .mMasterAlp = */ {
			/* .mValue = */ 0,
			/* .mAdd = */ 0
		},
		/* .mRate = */ 0.f,
		/* .mMode = */ 0,
		/* .mLockCnt = */ 0,
		/* .mRTTime = */ 0,
		/* .mHintRate = */ 0.f,
		/* .mAutoRate = */ 0.f,
		/* .mBattleRate = */ 0.f,
		/* .mRTFlg = */ BITFIELD,
		/* .fillament_wrk = */ {
			/* .mode = */ 0,
			/* .cnt = */ 0,
			/* .flow = */ 0,
			/* .bright = */ 0.f,
			/* .flg = */ 0
		}
	},
	/* .center_circle = */ {
		/* .maScale = */ {
			/* [0] = */ {
				/* .mValue = */ 0,
				/* .mAdd = */ 0
			},
			/* [1] = */ {
				/* .mValue = */ 0,
				/* .mAdd = */ 0
			},
			/* [2] = */ {
				/* .mValue = */ 0,
				/* .mAdd = */ 0
			},
			/* [3] = */ {
				/* .mValue = */ 0,
				/* .mAdd = */ 0
			}
		},
		/* .mRippleAlpha = */ {
			/* .mValue = */ 0,
			/* .mAdd = */ 0
		},
		/* .mR = */ {
			/* .mValue = */ 0,
			/* .mSpeed = */ 0,
			/* .mTarget = */ 0
		},
		/* .mG = */ {
			/* .mValue = */ 0,
			/* .mSpeed = */ 0,
			/* .mTarget = */ 0
		},
		/* .mB = */ {
			/* .mValue = */ 0,
			/* .mSpeed = */ 0,
			/* .mTarget = */ 0
		},
		/* .mMainAlpha = */ {
			/* .mValue = */ 0,
			/* .mSpeed = */ 0,
			/* .mTarget = */ 0
		},
		/* .mHintFlg = */ BITFIELD,
		/* .mAutoFlg = */ BITFIELD,
		/* .mBattleFlg = */ BITFIELD,
		/* .mEnemyFlg = */ BITFIELD
	},
	/* .hp = */ {
		/* .mAlpha = */ {
			/* .mValue = */ 0,
			/* .mAdd = */ 0
		},
		/* .mFadeWaitCnt = */ {
			/* .mValue = */ 0
		}
	},
	/* .finder_base = */ {
	},
	/* .sp = */ {
		/* .mbSeFlg = */ BITFIELD,
		/* .mSPFlg = */ BITFIELD,
		/* .mSe = */ {
			/* base class 0 = */ {
				/* .play_id = */ 0
			}
		},
		/* .mLampAlpha = */ {
			/* .mValue = */ 0,
			/* .mAdd = */ 0
		},
		/* .mAlpha = */ {
			/* .mValue = */ 0,
			/* .mOn = */ BITFIELD,
			/* .mUp = */ BITFIELD
		}
	},
	/* .ene_life = */ {
		/* .red_bar_wait = */ 0,
		/* .now_hp_percent = */ 0.f,
		/* .disp_hp_percent = */ 0.f,
		/* .old_hp_percent = */ 0.f,
		/* .ene_hp_len = */ 0.f,
		/* .mDamageAlpha = */ {
			/* .mValue = */ 0,
			/* .mAdd = */ 0
		},
		/* .mDamage = */ 0
	},
	/* .search_mark = */ {
		/* .mRot = */ 0.f,
		/* .mAlpha = */ {
			/* .mValue = */ 0,
			/* .mAdd = */ 0
		}
	},
	/* .mFcs = */ {
		/* .mValue = */ 0,
		/* .mAdd = */ 0
	},
	/* .mFOV = */ {
		/* .mValue = */ 0.f,
		/* .mSpeed = */ 0.f,
		/* .mTarget = */ 0.f
	},
	/* .mZoomRate = */ 0.f,
	/* .finder_buf = */ NULL,
	/* .pl_life_buf = */ NULL,
	/* .mBattleFlg = */ BITFIELD,
	/* .mHintFlg = */ BITFIELD,
	/* .mNoSpiritGageTimer = */ 0,
	/* .mDrawLockCnt = */ 0,
	/* .mSpiritGageScale = */ {
		/* .mValue = */ 0,
		/* .mAdd = */ 0
	},
	/* .mFOVTimer = */ {
		/* .mValue = */ 0
	},
	/* .mInWaiter = */ {
		/* .mValue = */ 0
	},
	/* .mMasterAlpha = */ {
		/* .mValue = */ 0,
		/* .mAdd = */ 0
	},
	/* .mInAlpha = */ {
		/* .mValue = */ 0,
		/* .mAdd = */ 0
	},
	/* .mCntFinder = */ 0,
	/* .center_cross = */ {
		/* .center_cercle = */ {
			/* [0] = */ {
				/* .cnt = */ 0,
				/* .tx = */ 0,
				/* .ty = */ 0,
				/* .alp = */ 0
			},
			/* [1] = */ {
				/* .cnt = */ 0,
				/* .tx = */ 0,
				/* .ty = */ 0,
				/* .alp = */ 0
			},
			/* [2] = */ {
				/* .cnt = */ 0,
				/* .tx = */ 0,
				/* .ty = */ 0,
				/* .alp = */ 0
			},
			/* [3] = */ {
				/* .cnt = */ 0,
				/* .tx = */ 0,
				/* .ty = */ 0,
				/* .alp = */ 0
			},
			/* [4] = */ {
				/* .cnt = */ 0,
				/* .tx = */ 0,
				/* .ty = */ 0,
				/* .alp = */ 0
			},
			/* [5] = */ {
				/* .cnt = */ 0,
				/* .tx = */ 0,
				/* .ty = */ 0,
				/* .alp = */ 0
			},
			/* [6] = */ {
				/* .cnt = */ 0,
				/* .tx = */ 0,
				/* .ty = */ 0,
				/* .alp = */ 0
			},
			/* [7] = */ {
				/* .cnt = */ 0,
				/* .tx = */ 0,
				/* .ty = */ 0,
				/* .alp = */ 0
			},
			/* [8] = */ {
				/* .cnt = */ 0,
				/* .tx = */ 0,
				/* .ty = */ 0,
				/* .alp = */ 0
			},
			/* [9] = */ {
				/* .cnt = */ 0,
				/* .tx = */ 0,
				/* .ty = */ 0,
				/* .alp = */ 0
			}
		}
	},
	/* .film_no = */ {
		/* .mBlinkAlpha = */ {
			/* .mValue = */ 0,
			/* .mOn = */ BITFIELD,
			/* .mUp = */ BITFIELD
		}
	},
	/* .mpSpiritGage = */ NULL,
	/* .mSpiritGageAlpha = */ {
		/* .mValue = */ 0,
		/* .mSpeed = */ 0,
		/* .mTarget = */ 0
	},
	/* .charger = */ {
		/* .mNowWaitCnt = */ {
			/* .mValue = */ 0
		},
		/* .mFlare = */ {
			/* .mValue = */ 0,
			/* .mSpeed = */ 0
		},
		/* .mWaitCnt = */ 0,
		/* .mReady = */ 0
	},
	/* .mSpiritNoise = */ {
		/* base class 0 = */ {
			/* .play_id = */ 0
		}
	},
	/* .mDmgDisp = */ {
		/* .mWaiter = */ {
			/* .mValue = */ 0
		},
		/* .mOneBlink = */ {
			/* .mValue = */ 0,
			/* .mSpeed = */ 0
		},
		/* .mDamage = */ 0,
		/* .mScore = */ 0
	},
	/* .mBonusShot = */ {
		/* .mFadeOutWaiter = */ {
			/* .mValue = */ 0
		},
		/* .mNewScoreAlpha = */ {
			/* .mValue = */ 0,
			/* .mAdd = */ 0
		},
		/* .mOldScoreAlpha = */ {
			/* .mValue = */ 0,
			/* .mAdd = */ 0
		},
		/* .mScorePtsAlpha = */ {
			/* .mValue = */ 0,
			/* .mAdd = */ 0
		},
		/* .mComboAlpha = */ {
			/* .mValue = */ 0,
			/* .mAdd = */ 0
		},
		/* .mDispNum = */ 0,
		/* .mReqUnderLineCnt = */ 0,
		/* .mReqUnderLineTimer = */ 0,
		/* .mInReqCnt = */ 0,
		/* .mInReqTimer = */ 0,
		/* .mOutReqCnt = */ 0,
		/* .mOutReqTimer = */ 0,
		/* .mTimer = */ {
			/* .mValue = */ 0
		},
		/* .mBonus = */ {
			/* .mScore = */ {
				/* base class 0 = */ {
					/* .m_aData = */ {
						/* [0] = */ 0,
						/* [1] = */ 0,
						/* [2] = */ 0,
						/* [3] = */ 0,
						/* [4] = */ 0,
						/* [5] = */ 0,
						/* [6] = */ 0,
						/* [7] = */ 0,
						/* [8] = */ 0
					}
				}
			},
			/* .mSP = */ 0,
			/* .mComboNum = */ 0
		},
		/* .mAnim = */ {
			/* base class 0 = */ {
				/* .m_aData = */ {
					/* [0] = */ {
						/* .mIndex = */ {
							/* .mValue = */ 0
						},
						/* .mYPosSave = */ 0,
						/* .mYPos = */ {
							/* .mValue = */ 0,
							/* .mSpeed = */ 0,
							/* .mTarget = */ 0
						},
						/* .mXOffset = */ {
							/* .mValue = */ 0,
							/* .mSpeed = */ 0,
							/* .mTarget = */ 0
						},
						/* .mAlpha = */ {
							/* .mValue = */ 0,
							/* .mAdd = */ 0
						},
						/* .mUnderLineAlpha = */ {
							/* .mValue = */ 0,
							/* .mAdd = */ 0
						},
						/* .mUnderLineScale = */ {
							/* .mValue = */ 0,
							/* .mAdd = */ 0
						}
					},
					/* [1] = */ {
						/* .mIndex = */ {
							/* .mValue = */ 0
						},
						/* .mYPosSave = */ 0,
						/* .mYPos = */ {
							/* .mValue = */ 0,
							/* .mSpeed = */ 0,
							/* .mTarget = */ 0
						},
						/* .mXOffset = */ {
							/* .mValue = */ 0,
							/* .mSpeed = */ 0,
							/* .mTarget = */ 0
						},
						/* .mAlpha = */ {
							/* .mValue = */ 0,
							/* .mAdd = */ 0
						},
						/* .mUnderLineAlpha = */ {
							/* .mValue = */ 0,
							/* .mAdd = */ 0
						},
						/* .mUnderLineScale = */ {
							/* .mValue = */ 0,
							/* .mAdd = */ 0
						}
					},
					/* [2] = */ {
						/* .mIndex = */ {
							/* .mValue = */ 0
						},
						/* .mYPosSave = */ 0,
						/* .mYPos = */ {
							/* .mValue = */ 0,
							/* .mSpeed = */ 0,
							/* .mTarget = */ 0
						},
						/* .mXOffset = */ {
							/* .mValue = */ 0,
							/* .mSpeed = */ 0,
							/* .mTarget = */ 0
						},
						/* .mAlpha = */ {
							/* .mValue = */ 0,
							/* .mAdd = */ 0
						},
						/* .mUnderLineAlpha = */ {
							/* .mValue = */ 0,
							/* .mAdd = */ 0
						},
						/* .mUnderLineScale = */ {
							/* .mValue = */ 0,
							/* .mAdd = */ 0
						}
					},
					/* [3] = */ {
						/* .mIndex = */ {
							/* .mValue = */ 0
						},
						/* .mYPosSave = */ 0,
						/* .mYPos = */ {
							/* .mValue = */ 0,
							/* .mSpeed = */ 0,
							/* .mTarget = */ 0
						},
						/* .mXOffset = */ {
							/* .mValue = */ 0,
							/* .mSpeed = */ 0,
							/* .mTarget = */ 0
						},
						/* .mAlpha = */ {
							/* .mValue = */ 0,
							/* .mAdd = */ 0
						},
						/* .mUnderLineAlpha = */ {
							/* .mValue = */ 0,
							/* .mAdd = */ 0
						},
						/* .mUnderLineScale = */ {
							/* .mValue = */ 0,
							/* .mAdd = */ 0
						}
					},
					/* [4] = */ {
						/* .mIndex = */ {
							/* .mValue = */ 0
						},
						/* .mYPosSave = */ 0,
						/* .mYPos = */ {
							/* .mValue = */ 0,
							/* .mSpeed = */ 0,
							/* .mTarget = */ 0
						},
						/* .mXOffset = */ {
							/* .mValue = */ 0,
							/* .mSpeed = */ 0,
							/* .mTarget = */ 0
						},
						/* .mAlpha = */ {
							/* .mValue = */ 0,
							/* .mAdd = */ 0
						},
						/* .mUnderLineAlpha = */ {
							/* .mValue = */ 0,
							/* .mAdd = */ 0
						},
						/* .mUnderLineScale = */ {
							/* .mValue = */ 0,
							/* .mAdd = */ 0
						}
					},
					/* [5] = */ {
						/* .mIndex = */ {
							/* .mValue = */ 0
						},
						/* .mYPosSave = */ 0,
						/* .mYPos = */ {
							/* .mValue = */ 0,
							/* .mSpeed = */ 0,
							/* .mTarget = */ 0
						},
						/* .mXOffset = */ {
							/* .mValue = */ 0,
							/* .mSpeed = */ 0,
							/* .mTarget = */ 0
						},
						/* .mAlpha = */ {
							/* .mValue = */ 0,
							/* .mAdd = */ 0
						},
						/* .mUnderLineAlpha = */ {
							/* .mValue = */ 0,
							/* .mAdd = */ 0
						},
						/* .mUnderLineScale = */ {
							/* .mValue = */ 0,
							/* .mAdd = */ 0
						}
					},
					/* [6] = */ {
						/* .mIndex = */ {
							/* .mValue = */ 0
						},
						/* .mYPosSave = */ 0,
						/* .mYPos = */ {
							/* .mValue = */ 0,
							/* .mSpeed = */ 0,
							/* .mTarget = */ 0
						},
						/* .mXOffset = */ {
							/* .mValue = */ 0,
							/* .mSpeed = */ 0,
							/* .mTarget = */ 0
						},
						/* .mAlpha = */ {
							/* .mValue = */ 0,
							/* .mAdd = */ 0
						},
						/* .mUnderLineAlpha = */ {
							/* .mValue = */ 0,
							/* .mAdd = */ 0
						},
						/* .mUnderLineScale = */ {
							/* .mValue = */ 0,
							/* .mAdd = */ 0
						}
					},
					/* [7] = */ {
						/* .mIndex = */ {
							/* .mValue = */ 0
						},
						/* .mYPosSave = */ 0,
						/* .mYPos = */ {
							/* .mValue = */ 0,
							/* .mSpeed = */ 0,
							/* .mTarget = */ 0
						},
						/* .mXOffset = */ {
							/* .mValue = */ 0,
							/* .mSpeed = */ 0,
							/* .mTarget = */ 0
						},
						/* .mAlpha = */ {
							/* .mValue = */ 0,
							/* .mAdd = */ 0
						},
						/* .mUnderLineAlpha = */ {
							/* .mValue = */ 0,
							/* .mAdd = */ 0
						},
						/* .mUnderLineScale = */ {
							/* .mValue = */ 0,
							/* .mAdd = */ 0
						}
					},
					/* [8] = */ {
						/* .mIndex = */ {
							/* .mValue = */ 0
						},
						/* .mYPosSave = */ 0,
						/* .mYPos = */ {
							/* .mValue = */ 0,
							/* .mSpeed = */ 0,
							/* .mTarget = */ 0
						},
						/* .mXOffset = */ {
							/* .mValue = */ 0,
							/* .mSpeed = */ 0,
							/* .mTarget = */ 0
						},
						/* .mAlpha = */ {
							/* .mValue = */ 0,
							/* .mAdd = */ 0
						},
						/* .mUnderLineAlpha = */ {
							/* .mValue = */ 0,
							/* .mAdd = */ 0
						},
						/* .mUnderLineScale = */ {
							/* .mValue = */ 0,
							/* .mAdd = */ 0
						}
					}
				}
			}
		},
		/* .mOldScore = */ 0,
		/* .mNewScore = */ 0
	}
};

unsigned char CVariable<char, 0, 9> type_info node[8];
unsigned char CVariable<char, 0, 3> type_info node[8];

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3baac8;
	
  g3ddbgAssert__FbPCce(false,str_786);
  return (ushort *)v;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_verifyrange__H1Zs_UiUi_PX01(0x3f1930,_max);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_verifyrange__H1Zs_UiUi_PX01(0x3f1938,_max);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_verifyrange__H1Zs_UiUi_PX01(0x3bab10,_max);
  }
  return (uint **)0x0;
}

void m_plyr_cameraSetSaveEQ(MC_SAVE_DATA *save) {
  SetSave__14CNEquipTrayWrkP12MC_SAVE_DATA(&m_plyr_camera.eq_tray,save);
  return;
}

void m_plyr_cameraSetSavePowrUp(MC_SAVE_DATA *save) {
  save->size = 0x20;
  save->addr = (uchar *)&m_plyr_camera;
  return;
}

void m_plyr_cameraSetSaveFilament(MC_SAVE_DATA *save) {
  SetSave__9CFilamentP12MC_SAVE_DATA(&m_plyr_camera.filament,save);
  return;
}

void m_plyr_cameraSetSaveFilmType(MC_SAVE_DATA *save) {
  save->size = 1;
  save->addr = (uchar *)0x319af8;
  return;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
	CCameraPowerUp *this;
	CNEquipTraySave *this;
	int i;
	
  CVariable<char,0,3> *pCVar1;
  fixed_array<CVariable<char,_0,_9>,3> *pfVar2;
  CNEquipTrayWrk *pCVar3;
  int iVar4;
  fixed_array<CBonusShotOne,9> *pfVar5;
  CCenterCircle *pCVar6;
  int iVar7;
  BONUS_SHOT_SCORE *pBVar8;
  
  if ((__priority == 0xffff) && (__initialize_p == 1)) {
                    /* inlined from n_plyr_camera.h */
    iVar4 = 9;
                    /* end of inlined section */
    m_plyr_camera.camera_power_up.mSensitiveGrade.mValue = '\0';
                    /* inlined from n_plyr_camera.h */
    pCVar1 = m_plyr_camera.camera_power_up.mSubFuncGem;
                    /* end of inlined section */
    m_plyr_camera.camera_power_up.mRadiusGrade.mValue = '\0';
    m_plyr_camera.camera_power_up.mRadiusGem.mValue = '\0';
    m_plyr_camera.camera_power_up.mSensiteiveGem.mValue = '\0';
    m_plyr_camera.camera_power_up.mAccumGem.mValue = '\0';
    do {
                    /* inlined from n_plyr_camera.h */
      iVar4 = iVar4 + -1;
                    /* end of inlined section */
      pCVar1->mValue = '\0';
                    /* inlined from n_plyr_camera.h */
      pCVar1 = pCVar1 + 1;
    } while (iVar4 != -1);
                    /* end of inlined section */
    m_plyr_camera.camera_power_up.mTemperedRenzFlg.flag_32[0] = (int  [1])0;
    m_plyr_camera.camera_power_up.mAdditionFlg.flag_32[0] = (int  [1])0;
                    /* inlined from n_plyr_camera.h */
    pCVar3 = &m_plyr_camera.eq_tray;
                    /* end of inlined section */
    m_plyr_camera.camera_power_up.mCamPartsFlg.flag_32[0] = (int  [1])0;
    m_plyr_camera.camera_power_up.mCamPartsSetFlg.flag_32[0] = (int  [1])0;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
    m_plyr_camera.camera_film.mFilmType.mValue = (CVariable<char,0,4>)'\0';
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    iVar4 = 9;
    do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      iVar4 = iVar4 + -1;
                    /* end of inlined section */
      (pCVar3->mSave).mSubFuncLv.field0_0x0.m_aData[0].mValue = '\0';
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      pCVar3 = (CNEquipTrayWrk *)((pCVar3->mSave).mSubFuncLv.field0_0x0.m_aData + 1);
    } while (iVar4 != -1);
                    /* end of inlined section */
    m_plyr_camera.eq_tray.mSave.mStockGrade.mValue = '\0';
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    pfVar2 = &m_plyr_camera.eq_tray.mSave.mEquipFunc;
    iVar4 = 2;
    do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      iVar4 = iVar4 + -1;
                    /* end of inlined section */
      (pfVar2->field0_0x0).m_aData[0].mValue = '\0';
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      pfVar2 = (fixed_array<CVariable<char,_0,_9>,3> *)((pfVar2->field0_0x0).m_aData + 1);
    } while (iVar4 != -1);
                    /* end of inlined section */
    m_plyr_camera.eq_tray.mAccumulateBollRot.mValue = DAT_003ee498;
                    /* inlined from n_plyr_camera.h */
    pCVar6 = &m_plyr_camera.center_circle;
                    /* end of inlined section */
    m_plyr_camera.eq_tray.mSave.mSlctNo.mValue = '\0';
                    /* inlined from n_plyr_camera.h */
    iVar4 = 3;
                    /* end of inlined section */
    m_plyr_camera.eq_tray.mRenzMarkBlink.mValue = 0x14;
                    /* inlined from n_plyr_camera.h */
                    /* end of inlined section */
    m_plyr_camera.eq_tray.mRenzMarkBlink.mAdd = 0;
    m_plyr_camera.eq_tray.mAccumulateBollRot.m_fMax = DAT_003f1940;
    m_plyr_camera.eq_tray.mRenzMarkAlpha.mAdd = 0;
    m_plyr_camera.eq_tray.mSuckMouthScale.mAdd = '\0';
    m_plyr_camera.eq_tray.mSuckMouthAlpha.mAdd = 0;
    m_plyr_camera.eq_tray.mAccumulateBollRot.m_fMin = DAT_003ee498;
    m_plyr_camera.filament.mMasterAlp.mAdd = 0;
    m_plyr_camera.eq_tray.mFcs.mValue = 0;
    m_plyr_camera.eq_tray.mFcs.mAdd = 0;
    m_plyr_camera.eq_tray.mRenzMarkAlpha.mValue = 0;
    m_plyr_camera.eq_tray.mSuckMouthScale.mValue = '\0';
    m_plyr_camera.eq_tray.mSuckMouthAlpha.mValue = 0;
    m_plyr_camera.filament.mMasterAlp.mValue = 0;
    do {
                    /* inlined from n_plyr_camera.h */
      iVar4 = iVar4 + -1;
                    /* end of inlined section */
      pCVar6->maScale[0].mValue = '\0';
      pCVar6->maScale[0].mAdd = '\0';
                    /* inlined from n_plyr_camera.h */
      pCVar6 = (CCenterCircle *)(pCVar6->maScale + 1);
    } while (iVar4 != -1);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/zero2_util.h */
                    /* end of inlined section */
                    /* inlined from bonus_shot.h */
                    /* end of inlined section */
    m_plyr_camera.hp.mAlpha.mAdd = 0;
                    /* inlined from bonus_shot.h */
    pBVar8 = &m_plyr_camera.mBonusShot.mBonus;
                    /* end of inlined section */
    m_plyr_camera.sp.mLampAlpha.mAdd = 0;
    m_plyr_camera.ene_life.mDamageAlpha.mAdd = 0;
    m_plyr_camera.search_mark.mAlpha.mAdd = 0;
    m_plyr_camera.mFcs.mAdd = 0;
    m_plyr_camera.mSpiritGageScale.mAdd = '\0';
    m_plyr_camera.mInAlpha.mAdd = 0;
    m_plyr_camera.mMasterAlpha.mAdd = 0;
                    /* inlined from /home/zero_rom/zero2np/src/common/zero2_util.h */
    m_plyr_camera.mSpiritNoise.field0_0x0.play_id = (CSND_BUF_PLAY)0x300000;
                    /* end of inlined section */
    m_plyr_camera.mBonusShot.mNewScoreAlpha.mAdd = '\0';
    m_plyr_camera.mBonusShot.mOldScoreAlpha.mAdd = '\0';
    m_plyr_camera.mBonusShot.mScorePtsAlpha.mAdd = '\0';
    m_plyr_camera.center_circle.mRippleAlpha.mValue = 0;
    m_plyr_camera.center_circle.mRippleAlpha.mAdd = 0;
                    /* inlined from /home/zero_rom/zero2np/src/common/zero2_util.h */
    m_plyr_camera.sp.mSe.field0_0x0.play_id = (CSND_BUF_PLAY)0x300000;
                    /* end of inlined section */
    m_plyr_camera.hp.mAlpha.mValue = 0;
    m_plyr_camera.hp.mFadeWaitCnt.mValue = 0;
    m_plyr_camera.sp.mLampAlpha.mValue = 0;
    m_plyr_camera.ene_life.mDamageAlpha.mValue = 0;
    m_plyr_camera.search_mark.mAlpha.mValue = 0;
    m_plyr_camera.mFcs.mValue = 0;
    m_plyr_camera.mSpiritGageScale.mValue = '\0';
    m_plyr_camera.mFOVTimer.mValue = '\0';
    m_plyr_camera.mInWaiter.mValue = 0;
    m_plyr_camera.mMasterAlpha.mValue = 0;
    m_plyr_camera.mInAlpha.mValue = 0;
    m_plyr_camera.charger.mNowWaitCnt.mValue = 0;
    m_plyr_camera.mDmgDisp.mWaiter.mValue = 0;
    m_plyr_camera.mBonusShot.mFadeOutWaiter.mValue = '\0';
    m_plyr_camera.mBonusShot.mNewScoreAlpha.mValue = '\0';
    m_plyr_camera.mBonusShot.mOldScoreAlpha.mValue = '\0';
    m_plyr_camera.mBonusShot.mScorePtsAlpha.mValue = '\0';
    m_plyr_camera.mBonusShot.mComboAlpha.mValue = '\0';
    m_plyr_camera.mBonusShot.mComboAlpha.mAdd = '\0';
    m_plyr_camera.mBonusShot.mTimer.mValue = 0;
    iVar4 = 0;
    do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* inlined from bonus_shot.h */
      iVar7 = iVar4 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Zs_UiUi_PX01(iVar4,9);
      (pBVar8->mScore).field0_0x0.m_aData[0] = 0;
                    /* inlined from bonus_shot.h */
      pBVar8 = (BONUS_SHOT_SCORE *)((pBVar8->mScore).field0_0x0.m_aData + 1);
      iVar4 = iVar7;
    } while (iVar7 < 9);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    iVar4 = 8;
                    /* inlined from bonus_shot.h */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* inlined from bonus_shot.h */
    m_plyr_camera.mBonusShot.mBonus.mComboNum = 0;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* inlined from bonus_shot.h */
    m_plyr_camera.mBonusShot.mBonus.mSP = 0;
    pfVar5 = &m_plyr_camera.mBonusShot.mAnim;
    do {
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      iVar4 = iVar4 + -1;
                    /* end of inlined section */
      (pfVar5->field0_0x0).m_aData[0].mIndex.mValue = '\0';
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
      (pfVar5->field0_0x0).m_aData[0].mAlpha.mAdd = '\0';
      (pfVar5->field0_0x0).m_aData[0].mAlpha.mValue = '\0';
      (pfVar5->field0_0x0).m_aData[0].mUnderLineAlpha.mAdd = '\0';
      (pfVar5->field0_0x0).m_aData[0].mUnderLineAlpha.mValue = '\0';
      (pfVar5->field0_0x0).m_aData[0].mUnderLineScale.mAdd = '\0';
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      (pfVar5->field0_0x0).m_aData[0].mUnderLineScale.mValue = '\0';
      pfVar5 = (fixed_array<CBonusShotOne,9> *)((pfVar5->field0_0x0).m_aData + 1);
    } while (iVar4 != -1);
                    /* inlined from n_plyr_camera.h */
    Init__12CNPlyrCamera(&m_plyr_camera);
  }
  return;
}

short int* short * _fixed_array_verifyrange<short>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_786);
  return (ushort *)v;
}

static void global constructors keyed to m_plyr_camera() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
