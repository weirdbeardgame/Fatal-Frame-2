// STATUS: NOT STARTED

#include "gra3dShadow.h"

struct fixed_array_base<SGDFILEHEADER *,40,SGDFILEHEADER *[40]> {
protected:
	SGDFILEHEADER *m_aData[40];
	
public:
	fixed_array_base<SGDFILEHEADER *,40,SGDFILEHEADER *[40]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	SGDFILEHEADER*& operator[]();
	SGDFILEHEADER*& operator[]();
	SGDFILEHEADER** data();
	SGDFILEHEADER** begin();
	SGDFILEHEADER** end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<SGDFILEHEADER *,40> : fixed_array_base<SGDFILEHEADER *,40,SGDFILEHEADER *[40]> {
};

struct fixed_stack<SGDFILEHEADER *,40> {
protected:
	fixed_array<SGDFILEHEADER *,40> c;
	SGDFILEHEADER *null;
	
public:
	fixed_stack<SGDFILEHEADER *,40>& operator=();
	fixed_stack();
	fixed_stack();
	bool empty();
	size_t size();
	SGDFILEHEADER*& top();
	SGDFILEHEADER*& top();
	void push();
	void pop();
	SGDFILEHEADER*& operator[]();
	void clear();
	void push_exclusive();
	size_t max_size();
};

typedef struct {
	int s;
	int e;
} BoundLine;

struct originholder<G3DLIGHT> {
private:
	G3DLIGHT *m_pOriginValue;
	G3DLIGHT m_OriginValue;
	
public:
	originholder<G3DLIGHT>& operator=();
	originholder();
	originholder();
	originholder(originholder<G3DLIGHT>*, int, void);
	void store();
	void restore();
};

GRA3DSHADOWDEBUG g_gra3dShadowDebug = {
	/* .bDrawShadowModelBB = */ 0,
	/* .bDrawCastShadowOnBB = */ 0,
	/* .bDrawLightDir = */ 0,
	/* .bTextureMapEnable = */ 1,
	/* .bFogEnable = */ 0,
	/* .bDrawCharShadow = */ 1,
	/* .bDrawObjectShadow = */ 1
};

static int shadow_apgnum = -1;

static GRA3DSCRATCHPADLAYOUT_MAPSHADOW s_gra3dScratchpadLayoutDefault = {
	/* .qwVif1Code = */ {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 16778244,
		/* [3] = */ 1813577728
	},
	/* .Vu1Mem = */ {
		/* .Direct = */ {
			/* ._vf01 = */ {
				/* [0] = */ 1.f,
				/* [1] = */ 1.f,
				/* [2] = */ 1.f,
				/* [3] = */ -1.f
			},
			/* ._vf02 = */ {
				/* [0] = */ 1.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* .DataAddress = */ {
				/* .uiContext0 = */ 96,
				/* .uiContext1 = */ 560,
				/* .auiPad = */ {
					/* [0] = */ 0,
					/* [1] = */ 0
				}
			},
			/* .vOffsetData = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 625.f,
				/* [3] = */ 0.f
			},
			/* .gtTRISTRIP = */ CCC_TYPE_LOOKUP_FAILED,
			/* .gtTRIFAN = */ CCC_TYPE_LOOKUP_FAILED,
			/* .qw0x06 = */ {
				/* [0] = */ 0,
				/* [1] = */ 0,
				/* [2] = */ 0,
				/* [3] = */ 0
			},
			/* .qw0x07 = */ {
				/* [0] = */ 0,
				/* [1] = */ 0,
				/* [2] = */ 0,
				/* [3] = */ 0
			},
			/* .matLocalScreen = */ {
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
				}
			},
			/* .matLocalClip = */ {
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
				}
			},
			/* .qw0x10 = */ {
				/* [0] = */ 0,
				/* [1] = */ 0,
				/* [2] = */ 0,
				/* [3] = */ 0
			},
			/* .qw0x11 = */ {
				/* [0] = */ 0,
				/* [1] = */ 0,
				/* [2] = */ 0,
				/* [3] = */ 0
			},
			/* .qw0x12 = */ {
				/* [0] = */ 0,
				/* [1] = */ 0,
				/* [2] = */ 0,
				/* [3] = */ 0
			},
			/* .matLIP = */ {
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
				}
			},
			/* .ivColor = */ {
				/* [0] = */ 128,
				/* [1] = */ 128,
				/* [2] = */ 128,
				/* [3] = */ 64
			},
			/* .Fog = */ {
				/* .fMin = */ 0.f,
				/* .fMax = */ 0.f,
				/* .FA = */ 0.f,
				/* .FB = */ 0.f
			}
		}
	}
};

static GRA3DSCRATCHPADLAYOUT_MAPSHADOW *s_pScratchpadLayout = NULL;

static GRA3DCAMERA s_Camera = {
	/* .fFov = */ 1.04719746f,
	/* .fNearZ = */ 0.099999994f,
	/* .fFarZ = */ 32768.f,
	/* .fAspectX = */ 1.f,
	/* .fAspectY = */ 1.f,
	/* .fCenterX = */ 2048.f,
	/* .fCenterY = */ 2048.f,
	/* .fZmin = */ 0.f,
	/* .fZmax = */ 1.6777e+07f,
	/* .type = */ PT_ORTHO,
	/* .aiPad = */ {
		/* [0] = */ 0,
		/* [1] = */ 0
	},
	/* .vTarget = */ {
		/* [0] = */ 0.f,
		/* [1] = */ 120.f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	},
	/* .vPositionOld = */ {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	},
	/* .vTargetOld = */ {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	},
	/* .matViewClipPolygon = */ {
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
		}
	},
	/* .matViewClipObject = */ {
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
		}
	},
	/* .matWorldScreen = */ {
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
		}
	},
	/* .matWorldClipPolygon = */ {
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
		}
	},
	/* .matWorldClipObject = */ {
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
		}
	},
	/* .matCoord = */ {
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
		}
	}
};

static CRenderTarget s_RenderTarget;
static fixed_stack<SGDFILEHEADER *,40> s_stackpProjectModel;
unsigned char SGDFILEHEADER * type_info node[12];
unsigned char SGDFILEHEADER type_info node[8];
static float s_vDirection[4];
static float s_matIP[4][4];
static float s_matCull[4][4];
static float s_avBB[9][4];
static SGDFILEHEADER *s_pSourceModel;
static G3DLIGHT s_Light;
static float s_fFundamentScale;
static float s_fTextureScale;
static int s_iMaxTextureWidth;
static int s_iMaxTextureHeight;

static float s_matTransTexture[4][4] = {
	/* [0] = */ {
		/* [0] = */ 1.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	},
	/* [1] = */ {
		/* [0] = */ 0.f,
		/* [1] = */ 1.f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	},
	/* [2] = */ {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 1.f,
		/* [3] = */ 0.f
	},
	/* [3] = */ {
		/* [0] = */ 0.5f,
		/* [1] = */ 0.5f,
		/* [2] = */ 0.f,
		/* [3] = */ 1.f
	}
};

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3b8170;
	
  g3ddbgAssert__FbPCce(false,str_595);
  return (type_info *)__first;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf13SGDFILEHEADER((SGDFILEHEADER **)s_void__003f1388,(SGDFILEHEADER **)_max,
                        (SGDFILEHEADER **)v);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf13SGDFILEHEADER((SGDFILEHEADER **)s_char__003f1390,(SGDFILEHEADER **)_max,
                        (SGDFILEHEADER **)v);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf13SGDFILEHEADER((SGDFILEHEADER **)"unsigned int*",(SGDFILEHEADER **)_max,(SGDFILEHEADER **)v
                       );
  }
  return (uint **)0x0;
}

static int _GetCurrentFBP() {
  int iVar1;
  
  iVar1 = 0x8c;
  if ((sys_wrk.count & 1) == 0) {
    iVar1 = 0;
  }
  return iVar1;
}

static int _IsDraw() {
  return (int)((s_pScratchpadLayout->Vu1Mem).Direct.ivColor[3] != 0);
}

static void SetVU1HeaderShadow() {
  g3dDmaCopyPacket__FPCvi(s_pScratchpadLayout,0x1a);
  return;
}

static void ShadowMeshDataVU(SGDPROCUNITHEADER *pPUHead) {
	int mtype;
	SGDVUMESHDESC &rVUMeshDesc;
	
  SGDPROCUNITHEADER *pSVar1;
  SGDPROCUNITHEADER *pSVar2;
  int iVar3;
  byte bVar4;
  
  bVar4 = (pPUHead->field2_0x8).VUVNDesc.ucVectorType & 0x53;
  if ((bVar4 == 0x12) || ((0x12 < bVar4 && (bVar4 == 0x32)))) {
    pSVar1 = _GetVUVNPRIM__Fv();
    pSVar2 = _GetVUVNPRIM__Fv();
    dmaVif1AddRefTag__FUii((uint)(pSVar1 + 1),(uint)(pSVar2->field2_0x8).VUVNDesc.ucSize);
    g3dDmaAddPacket__FPCvi(pPUHead + 2,(pPUHead->field2_0x8).VUMeshDesc.iTagSize);
    iVar3 = _GetEdgeCheck__Fv();
    if (iVar3 != 0) {
      gra3dCallMicroSubroutine3__FPCUi((uint *)0xb20);
      return;
    }
    gra3dCallMicroSubroutine4__FPCUi((uint *)0x1a68);
  }
  return;
}

static int ShadowBoundClip(float *v0, float *v1) {
  undefined8 uVar1;
  undefined4 in_vc2;
  undefined in_vf0 [16];
  undefined in_vf4 [16];
  undefined in_vf5 [16];
  undefined in_vf6 [16];
  undefined in_vf7 [16];
  undefined auVar2 [16];
  
  auVar2 = _lqc2(*(undefined (*) [16])v1);
  _vmulabc(in_vf4,auVar2);
  _vmaddabc(in_vf5,auVar2);
  _vmaddabc(in_vf6,auVar2);
  auVar2 = _vmaddbc(in_vf7,in_vf0);
  _vclip(auVar2,auVar2);
  auVar2 = _sqc2(auVar2);
  *(undefined (*) [16])v0 = auVar2;
  _vnop();
  _vnop();
  _vnop();
  _vnop();
  uVar1 = _cfc2(in_vc2);
  return (int)uVar1;
}

static int AppendShadowClipCheck(float *sts[4], BoundLine *bl) {
	float bmin;
	float bmax;
	float smin;
	float smax;
	int i;
	int s;
	int e;
	static float shadowtex[4][4] = {
		/* [0] = */ {
			/* [0] = */ -0.5f,
			/* [1] = */ -0.5f,
			/* [2] = */ 0.f,
			/* [3] = */ 1.f
		},
		/* [1] = */ {
			/* [0] = */ 0.5f,
			/* [1] = */ -0.5f,
			/* [2] = */ 0.f,
			/* [3] = */ 1.f
		},
		/* [2] = */ {
			/* [0] = */ -0.5f,
			/* [1] = */ 0.5f,
			/* [2] = */ 0.f,
			/* [3] = */ 1.f
		},
		/* [3] = */ {
			/* [0] = */ 0.5f,
			/* [1] = */ 0.5f,
			/* [2] = */ 0.f,
			/* [3] = */ 1.f
		}
	};
	float kei[4];
	
  undefined auVar1 [16];
  undefined auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  undefined (*pauVar7) [16];
  BoundLine *pBVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined in_vf1 [16];
  undefined auVar14 [16];
  undefined auVar15 [16];
  float kei [4];
  
  fVar10 = sts[bl->s][0];
  fVar11 = sts[bl->e][0];
  if (fVar11 == fVar10) {
    kei[0] = 0.0;
  }
  else {
    kei[0] = (sts[bl->e][1] - sts[bl->s][1]) / (fVar11 - fVar10);
  }
  iVar6 = 1;
  if (kei[0] != 0.0) {
                    /* inlined from ../../graphics/graph3d/g3dxVu0.h */
                    /* end of inlined section */
                    /* inlined from ../../graphics/graph3d/g3dxVu0.h */
                    /* end of inlined section */
                    /* inlined from ../../graphics/graph3d/g3dxVu0.h */
    auVar14 = _lqc2((undefined  [16])sts[bl->s]);
    auVar15._4_4_ = 0xbf800000;
    auVar15._0_4_ = kei[0];
    auVar15._8_8_ = 0;
    auVar15 = _lqc2(auVar15);
    auVar15 = _vmul(auVar14,auVar15);
    _vaddabc(auVar15,auVar15);
    auVar15 = _vmaddbc(in_vf1,auVar15);
    auVar15 = _qmfc2(auVar15._0_4_);
    fVar3 = auVar15._0_4_;
    auVar15 = _lqc2(shadowtex_1015._0_16_);
    auVar14._4_4_ = 0xbf800000;
    auVar14._0_4_ = kei[0];
    auVar14._8_8_ = 0;
    auVar14 = _lqc2(auVar14);
    auVar15 = _vmul(auVar15,auVar14);
    _vaddabc(auVar15,auVar15);
    auVar15 = _vmaddbc(in_vf1,auVar15);
    auVar15 = _qmfc2(auVar15._0_4_);
    fVar10 = auVar15._0_4_;
                    /* end of inlined section */
    pauVar7 = (undefined (*) [16])(shadowtex_1015 + 0x10);
    pBVar8 = bl + 1;
                    /* inlined from ../../graphics/graph3d/g3dxVu0.h */
                    /* end of inlined section */
    iVar9 = 2;
                    /* inlined from ../../graphics/graph3d/g3dxVu0.h */
    iVar6 = pBVar8->s;
    fVar11 = fVar10;
    fVar12 = fVar3;
    while( true ) {
      auVar15 = _lqc2((undefined  [16])sts[iVar6]);
      auVar1._4_4_ = 0xbf800000;
      auVar1._0_4_ = kei[0];
      auVar1._8_8_ = 0;
      auVar14 = _lqc2(auVar1);
      auVar15 = _vmul(auVar15,auVar14);
      _vaddabc(auVar15,auVar15);
      auVar15 = _vmaddbc(in_vf1,auVar15);
      auVar15 = _qmfc2(auVar15._0_4_);
      fVar4 = auVar15._0_4_;
      auVar15 = _lqc2(*pauVar7);
      auVar2._4_4_ = 0xbf800000;
      auVar2._0_4_ = kei[0];
      auVar2._8_8_ = 0;
      auVar14 = _lqc2(auVar2);
      auVar15 = _vmul(auVar15,auVar14);
      _vaddabc(auVar15,auVar15);
      auVar15 = _vmaddbc(in_vf1,auVar15);
      auVar15 = _qmfc2(auVar15._0_4_);
      fVar5 = auVar15._0_4_;
                    /* end of inlined section */
      iVar9 = iVar9 + -1;
      pauVar7 = pauVar7[1];
      pBVar8 = pBVar8 + 1;
      fVar13 = fVar4;
      if (fVar4 <= fVar12) {
        fVar13 = fVar12;
      }
      if (fVar4 < fVar3) {
        fVar3 = fVar4;
      }
      if (fVar11 < fVar5) {
        fVar11 = fVar5;
      }
      if (fVar5 < fVar10) {
        fVar10 = fVar5;
      }
      if (iVar9 < 0) break;
      iVar6 = pBVar8->s;
      fVar12 = fVar13;
    }
    iVar6 = 0;
    if ((fVar3 <= fVar11) && (iVar6 = 1, fVar13 < fVar10)) {
      iVar6 = 0;
    }
  }
  return iVar6;
}

static int CheckBoundingBoxShadowTrace(float *lwmtx[4], float *tmpv[4], float *dir) {
	int i;
	int clip;
	float tmpmat[4][4];
	float setmat[4][4];
	static float clipmtx[4][4] = {
		/* [0] = */ {
			/* [0] = */ 1.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* [1] = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 1.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* [2] = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 1.f,
			/* [3] = */ 0.f
		},
		/* [3] = */ {
			/* [0] = */ -0.5f,
			/* [1] = */ -0.5f,
			/* [2] = */ -0.5f,
			/* [3] = */ 0.5f
		}
	};
	static BoundLine boundline[12] = {
		/* [0] = */ {
			/* .s = */ 0,
			/* .e = */ 1
		},
		/* [1] = */ {
			/* .s = */ 4,
			/* .e = */ 5
		},
		/* [2] = */ {
			/* .s = */ 2,
			/* .e = */ 3
		},
		/* [3] = */ {
			/* .s = */ 6,
			/* .e = */ 7
		},
		/* [4] = */ {
			/* .s = */ 0,
			/* .e = */ 4
		},
		/* [5] = */ {
			/* .s = */ 1,
			/* .e = */ 5
		},
		/* [6] = */ {
			/* .s = */ 2,
			/* .e = */ 6
		},
		/* [7] = */ {
			/* .s = */ 3,
			/* .e = */ 7
		},
		/* [8] = */ {
			/* .s = */ 1,
			/* .e = */ 3
		},
		/* [9] = */ {
			/* .s = */ 5,
			/* .e = */ 7
		},
		/* [10] = */ {
			/* .s = */ 4,
			/* .e = */ 6
		},
		/* [11] = */ {
			/* .s = */ 0,
			/* .e = */ 2
		}
	};
	int clip0;
	int clip1;
	
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  float (*v1) [4];
  int iVar10;
  undefined auVar11 [16];
  undefined auVar12 [16];
  undefined auVar13 [16];
  undefined auVar14 [16];
  undefined auVar15 [16];
  undefined auVar16 [16];
  undefined auVar17 [16];
  undefined auVar18 [16];
  float tmpmat [4] [4];
  float setmat [4] [4];
  
                    /* inlined from gra3dVu0.h */
                    /* end of inlined section */
                    /* inlined from gra3dVu0.h */
                    /* end of inlined section */
                    /* inlined from gra3dVu0.h */
  auVar11 = _lqc2((undefined  [16])s_matCull[0]);
  auVar12 = _lqc2((undefined  [16])s_matCull[1]);
  auVar13 = _lqc2((undefined  [16])s_matCull[2]);
  auVar14 = _lqc2((undefined  [16])s_matCull[3]);
  auVar15 = _lqc2((undefined  [16])*lwmtx);
  auVar16 = _lqc2((undefined  [16])lwmtx[1]);
  auVar17 = _lqc2((undefined  [16])lwmtx[2]);
  auVar18 = _lqc2((undefined  [16])lwmtx[3]);
  _vmulabc(auVar11,auVar15);
  _vmaddabc(auVar12,auVar15);
  _vmaddabc(auVar13,auVar15);
  _vmaddbc(auVar14,auVar15);
  _vmulabc(auVar11,auVar16);
  _vmaddabc(auVar12,auVar16);
  _vmaddabc(auVar13,auVar16);
  _vmaddbc(auVar14,auVar16);
  _vmulabc(auVar11,auVar17);
  _vmaddabc(auVar12,auVar17);
  _vmaddabc(auVar13,auVar17);
  _vmaddbc(auVar14,auVar17);
  _vmulabc(auVar11,auVar18);
  _vmaddabc(auVar12,auVar18);
  _vmaddabc(auVar13,auVar18);
  _vmaddbc(auVar14,auVar18);
                    /* end of inlined section */
  uVar2 = ShadowBoundClip__FPfPCf((float *)&DAT_70003900,(float *)tmpv);
  uVar3 = ShadowBoundClip__FPfPCf((float *)&DAT_70003910,(float *)tmpv[1]);
  uVar4 = ShadowBoundClip__FPfPCf((float *)&DAT_70003920,(float *)tmpv[2]);
  uVar5 = ShadowBoundClip__FPfPCf((float *)&DAT_70003930,(float *)tmpv[3]);
  uVar6 = ShadowBoundClip__FPfPCf((float *)&DAT_70003940,(float *)tmpv[4]);
  uVar7 = ShadowBoundClip__FPfPCf((float *)&DAT_70003950,(float *)tmpv[5]);
  uVar8 = ShadowBoundClip__FPfPCf((float *)&DAT_70003960,(float *)tmpv[6]);
  uVar9 = ShadowBoundClip__FPfPCf((float *)&DAT_70003970,(float *)tmpv[7]);
  iVar10 = 0;
  if ((uVar2 & 0x2a & uVar3 & uVar4 & uVar5 & uVar6 & uVar7 & uVar8 & uVar9) == 0) {
                    /* inlined from ../../graphics/graph3d/g3dxVu0.h */
    auVar11 = _lqc2((undefined  [16])s_matIP[0]);
    auVar12 = _lqc2((undefined  [16])s_matIP[1]);
    auVar13 = _lqc2((undefined  [16])s_matIP[2]);
    auVar14 = _lqc2((undefined  [16])s_matIP[3]);
    auVar15 = _lqc2((undefined  [16])*lwmtx);
    auVar16 = _lqc2((undefined  [16])lwmtx[1]);
    auVar17 = _lqc2((undefined  [16])lwmtx[2]);
    auVar18 = _lqc2((undefined  [16])lwmtx[3]);
    _vmulabc(auVar11,auVar15);
    _vmaddabc(auVar12,auVar15);
    _vmaddabc(auVar13,auVar15);
    auVar15 = _vmaddbc(auVar14,auVar15);
    _vmulabc(auVar11,auVar16);
    _vmaddabc(auVar12,auVar16);
    _vmaddabc(auVar13,auVar16);
    auVar16 = _vmaddbc(auVar14,auVar16);
    _vmulabc(auVar11,auVar17);
    _vmaddabc(auVar12,auVar17);
    _vmaddabc(auVar13,auVar17);
    auVar17 = _vmaddbc(auVar14,auVar17);
    _vmulabc(auVar11,auVar18);
    _vmaddabc(auVar12,auVar18);
    _vmaddabc(auVar13,auVar18);
    auVar14 = _vmaddbc(auVar14,auVar18);
    auVar11 = _sqc2(auVar15);
    auVar12 = _sqc2(auVar16);
    auVar13 = _sqc2(auVar17);
    auVar14 = _sqc2(auVar14);
    auVar15 = _lqc2(clipmtx_1022._0_16_);
    auVar16 = _lqc2(clipmtx_1022._16_16_);
    auVar17 = _lqc2(clipmtx_1022._32_16_);
    auVar18 = _lqc2(clipmtx_1022._48_16_);
    auVar11 = _lqc2(auVar11);
    auVar12 = _lqc2(auVar12);
    auVar13 = _lqc2(auVar13);
    auVar14 = _lqc2(auVar14);
    _vmulabc(auVar15,auVar11);
    _vmaddabc(auVar16,auVar11);
    _vmaddabc(auVar17,auVar11);
    auVar11 = _vmaddbc(auVar18,auVar11);
    _vmulabc(auVar15,auVar12);
    _vmaddabc(auVar16,auVar12);
    _vmaddabc(auVar17,auVar12);
    auVar12 = _vmaddbc(auVar18,auVar12);
    _vmulabc(auVar15,auVar13);
    _vmaddabc(auVar16,auVar13);
    _vmaddabc(auVar17,auVar13);
    auVar13 = _vmaddbc(auVar18,auVar13);
    _vmulabc(auVar15,auVar14);
    _vmaddabc(auVar16,auVar14);
    _vmaddabc(auVar17,auVar14);
    auVar14 = _vmaddbc(auVar18,auVar14);
    auVar11 = _sqc2(auVar11);
    auVar12 = _sqc2(auVar12);
    auVar13 = _sqc2(auVar13);
    auVar14 = _sqc2(auVar14);
                    /* inlined from gra3dVu0.h */
    _lqc2(auVar11);
    _lqc2(auVar12);
    _lqc2(auVar13);
    _lqc2(auVar14);
                    /* end of inlined section */
    uVar2 = 0x2f;
    uVar3 = 0;
    iVar10 = 0;
    do {
      v1 = tmpv[iVar10];
      iVar1 = iVar10 * 4;
      iVar10 = iVar10 + 1;
      uVar4 = ShadowBoundClip__FPfPCf((float *)(&DAT_70003900 + iVar1),(float *)v1);
      uVar4 = uVar4 & 0xf;
      if (uVar4 == 0) {
        return 1;
      }
      uVar3 = uVar3 | uVar4;
      uVar2 = uVar2 & uVar4;
    } while (iVar10 < 8);
    iVar10 = 0;
    if ((uVar2 == 0) && (iVar10 = 1, uVar3 != 0xf)) {
      iVar10 = AppendShadowClipCheck__FPA3_CfPC9BoundLine
                         ((float (*) [4])&DAT_70003900,(BoundLine *)boundline_1023);
      if ((iVar10 == 0) ||
         (iVar10 = AppendShadowClipCheck__FPA3_CfPC9BoundLine
                             ((float (*) [4])&DAT_70003900,(BoundLine *)(boundline_1023 + 0x20)),
         iVar10 == 0)) {
        iVar10 = 0;
      }
      else {
        iVar10 = 1;
      }
    }
  }
  return iVar10;
}

static int CheckBoundingBoxShadow(SGDPROCUNITHEADER *pPUHead) {
	SGDCOORDINATE *pCoord;
	
  SGDCOORDINATE *pSVar1;
  int iVar2;
  
  pSVar1 = gra3dsgdGetCoordinate__Fi((pPUHead->field2_0x8).VUMeshDesc.iTagSize);
  iVar2 = CheckBoundingBoxShadowTrace__FPA3_CfT0PCf
                    (pSVar1->matLocalWorld,(float (*) [4])(pPUHead + 1),s_vDirection);
  if (iVar2 != 0) {
    _SetEdgeCheck__Fi(pSVar1->edge_check);
  }
  return (uint)(iVar2 != 0);
}

static void _CalcTarget(float *vTarget, float *avBB[4]) {
  gra3dbbCalcCenterBase__FPfPA3_Cf(vTarget,avBB);
  return;
}

static int _IsSamePositionAsTarget(float *vPosition) {
  undefined auVar1 [16];
  undefined auVar2 [16];
  
                    /* inlined from ../../graphics/graph3d/g3dxVu0.h */
  auVar1 = _lqc2(*(undefined (*) [16])vPosition);
  auVar2 = _lqc2((undefined  [16])s_avBB[8]);
  auVar1 = _vsub(auVar1,auVar2);
  auVar1 = _vmul(auVar1,auVar1);
  _vaddbc(auVar1,auVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

void AssignShadowPrim(SGDPROCUNITHEADER *pPUHead) {
	int i;
	int cn;
	float tmpvec[4];
	CoordCache CC;
	GRA3DSCRATCHPADLAYOUT_MAPSHADOW *pSL;
	CoordCache CC;
	
  undefined *puVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  ulong *puVar5;
  float afVar6 [4];
  float afVar7 [4];
  float afVar8 [4];
  float afVar9 [4];
  float afVar10 [4];
  float afVar11 [4];
  float afVar12 [4];
  float afVar13 [4];
  float afVar14 [4];
  float afVar15 [4];
  float afVar16 [4];
  float afVar17 [4];
  float afVar18 [4];
  float afVar19 [4];
  float afVar20 [4];
  float afVar21 [4];
  float afVar22 [4];
  float afVar23 [4];
  float afVar24 [4];
  float afVar25 [4];
  GRA3DVU1MEMLAYOUT_MAPSHADOW *pGVar26;
  float fVar27;
  GRA3DSCRATCHPADLAYOUT_MAPSHADOW *pGVar28;
  int iVar29;
  SGDCOORDINATE *pSVar30;
  int iVar31;
  CoordCache *pCVar32;
  SGDCOORDINATE *pSVar33;
  GRA3DCAMERA *pGVar34;
  ulong uVar35;
  ulong uVar36;
  ulong uVar37;
  ulong uVar38;
  ulong uVar39;
  ulong uVar40;
  float (*matSrc) [4];
  ulong uVar41;
  int iVar42;
  undefined auVar43 [16];
  undefined auVar44 [16];
  undefined auVar45 [16];
  undefined auVar46 [16];
  undefined auVar47 [16];
  undefined auVar48 [16];
  undefined auVar49 [16];
  undefined auVar50 [16];
  undefined auVar51 [16];
  float tmpvec [4];
  undefined local_c0 [7];
  undefined auStack_b9 [8];
  undefined auStack_b1 [8];
  undefined auStack_a9 [8];
  undefined auStack_a1 [8];
  undefined8 uStack_99;
  CoordCache CC;
  undefined (*local_60) [16];
  
  if (pPUHead == (SGDPROCUNITHEADER *)0x0) {
    return;
  }
  local_60 = (undefined (*) [16])&DAT_70003900;
  iVar29 = pPUHead->iCategory;
  do {
    if (iVar29 == 3) {
LAB_001be300:
      pPUHead = pPUHead->pNext;
    }
    else if (iVar29 < 4) {
      if (iVar29 == 0) {
        _SetVUVNPRIM__FPC17SGDPROCUNITHEADER(pPUHead);
        pPUHead = pPUHead->pNext;
      }
      else if (iVar29 == 1) {
        ShadowMeshDataVU__FP17SGDPROCUNITHEADER(pPUHead);
        pPUHead = pPUHead->pNext;
      }
      else {
        pPUHead = pPUHead->pNext;
      }
    }
    else {
      if (iVar29 == 4) {
        iVar29 = CheckBoundingBoxShadow__FP17SGDPROCUNITHEADER(pPUHead);
        if (iVar29 == 0) {
          return;
        }
        iVar29 = (pPUHead->field2_0x8).VUMeshDesc.iTagSize;
        uVar41 = (ulong)iVar29;
        pSVar30 = gra3dsgdGetCoordinate__Fi(iVar29);
        gra3dbbApplyMatrix__FPA3_fPA3_CfT1
                  ((float (*) [4])&DAT_70003900,(float (*) [4])(pPUHead + 1),pSVar30->matLocalWorld)
        ;
        uVar35 = 0x70003900;
        gra3dbbCalcCenterBase__FPfPA3_Cf((float *)&DAT_70003980,(float (*) [4])&DAT_70003900);
        iVar31 = _IsSamePositionAsTarget__FPCf((float *)&DAT_70003980);
        if (iVar31 != 0) {
          return;
        }
        uVar37 = 0x318210;
        if (g_gra3dShadowDebug.bDrawCastShadowOnBB != 0) {
          uVar35 = 0xffffffffff00ffff;
          gra3ddbgDrawBB__FPA3_CfUi((float (*) [4])&DAT_70003900,0xff00ffff);
        }
        pCVar32 = _GetCoordCache__Fv();
        uVar39 = 1;
        if (pCVar32->cache_on == 1) {
          pCVar32 = _GetCoordCache__Fv();
          iVar31 = _GetEdgeCheck__Fv();
          if (pCVar32->edge_check == iVar31) {
            iVar42 = 0;
            iVar31 = 0;
            do {
              iVar42 = iVar42 + 1;
              pSVar30 = gra3dsgdGetCoordinate__Fi(iVar29);
              pCVar32 = _GetCoordCache__Fv();
              pSVar33 = gra3dsgdGetCoordinate__Fi(pCVar32->cn0);
              if (*(float *)((int)pSVar30->matLocalWorld + iVar31) !=
                  *(float *)((int)pSVar33->matLocalWorld + iVar31)) {
LAB_001bdfec:
                pCVar32 = _GetCoordCache__Fv();
                puVar1 = (undefined *)((int)&pCVar32->edge_check + 3);
                uVar3 = (uint)puVar1 & 7;
                uVar4 = (uint)pCVar32 & 7;
                uVar36 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
                         uVar35 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
                         *(ulong *)((int)pCVar32 - uVar4) >> uVar4 * 8;
                puVar1 = (undefined *)((int)&(pCVar32->Point).bEnable + 3);
                uVar3 = (uint)puVar1 & 7;
                uVar4 = (uint)&pCVar32->cn0 & 7;
                uVar38 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
                         uVar37 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
                         *(ulong *)((int)&pCVar32->cn0 - uVar4) >> uVar4 * 8;
                puVar1 = (undefined *)((int)(pCVar32->Point).aiIndex + 7);
                uVar3 = (uint)puVar1 & 7;
                piVar2 = (pCVar32->Point).aiIndex;
                uVar4 = (uint)piVar2 & 7;
                uVar39 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
                         uVar39 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
                         *(ulong *)((int)piVar2 - uVar4) >> uVar4 * 8;
                puVar1 = (undefined *)((int)&(pCVar32->Spot).bEnable + 3);
                uVar3 = (uint)puVar1 & 7;
                piVar2 = (pCVar32->Point).aiIndex + 2;
                uVar4 = (uint)piVar2 & 7;
                uVar40 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
                         (long)(int)(CoordCache *)local_c0 & 0xffffffffffffffffU >> (uVar3 + 1) * 8)
                         & -1L << (8 - uVar4) * 8 | *(ulong *)((int)piVar2 - uVar4) >> uVar4 * 8;
                puVar1 = local_c0 + 7;
                uVar3 = (uint)puVar1 & 7;
                *(ulong *)(puVar1 + -uVar3) =
                     *(ulong *)(puVar1 + -uVar3) & -1L << (uVar3 + 1) * 8 |
                     uVar36 >> (7 - uVar3) * 8;
                uVar3 = (uint)auStack_b1 & 7;
                puVar5 = (ulong *)(auStack_b1 + -uVar3);
                *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar38 >> (7 - uVar3) * 8;
                uVar3 = (uint)auStack_a9 & 7;
                puVar5 = (ulong *)(auStack_a9 + -uVar3);
                *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar39 >> (7 - uVar3) * 8;
                uVar3 = (uint)auStack_a1 & 7;
                puVar5 = (ulong *)(auStack_a1 + -uVar3);
                *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar40 >> (7 - uVar3) * 8;
                puVar1 = (undefined *)((int)(pCVar32->Spot).aiIndex + 7);
                uVar3 = (uint)puVar1 & 7;
                piVar2 = (pCVar32->Spot).aiIndex;
                uVar4 = (uint)piVar2 & 7;
                uVar35 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
                         uVar36 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
                         *(ulong *)((int)piVar2 - uVar4) >> uVar4 * 8;
                iVar31 = (pCVar32->Spot).aiIndex[2];
                uVar37 = (ulong)iVar31;
                uVar3 = (uint)&uStack_99 & 7;
                puVar5 = (ulong *)((int)&uStack_99 - uVar3);
                *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar35 >> (7 - uVar3) * 8;
                stack0xffffff44 = (int)(uVar36 >> 0x20);
                local_c0._0_4_ = -1;
                unique0x10000cb4 = uVar38;
                unique0x10000cbc = uVar39;
                unique0x10000cc4 = uVar40;
                unique0x10000ccc = uVar35;
                uStack_99._1_4_ = iVar31;
                _SetCoordCache__FRC10CoordCache((CoordCache *)local_c0);
                break;
              }
              pSVar30 = gra3dsgdGetCoordinate__Fi(iVar29);
              pCVar32 = _GetCoordCache__Fv();
              pSVar33 = gra3dsgdGetCoordinate__Fi(pCVar32->cn0);
              if (*(float *)((int)pSVar30->matLocalWorld + iVar31 + 4) !=
                  *(float *)((int)pSVar33->matLocalWorld + iVar31 + 4)) goto LAB_001bdfec;
              pSVar30 = gra3dsgdGetCoordinate__Fi(iVar29);
              pCVar32 = _GetCoordCache__Fv();
              pSVar33 = gra3dsgdGetCoordinate__Fi(pCVar32->cn0);
              if (*(float *)((int)pSVar30->matLocalWorld + iVar31 + 8) !=
                  *(float *)((int)pSVar33->matLocalWorld + iVar31 + 8)) goto LAB_001bdfec;
              pSVar30 = gra3dsgdGetCoordinate__Fi(iVar29);
              pCVar32 = _GetCoordCache__Fv();
              pSVar33 = gra3dsgdGetCoordinate__Fi(pCVar32->cn0);
              if (*(float *)((int)pSVar30->matLocalWorld + iVar31 + 0xc) !=
                  *(float *)((int)pSVar33->matLocalWorld + iVar31 + 0xc)) goto LAB_001bdfec;
              iVar31 = iVar42 * 0x10;
            } while (iVar42 < 4);
          }
        }
        pCVar32 = _GetCoordCache__Fv();
        pGVar28 = s_pScratchpadLayout;
        uVar39 = (ulong)pCVar32->cache_on;
        if (uVar39 != 1) {
          pSVar30 = gra3dsgdGetCoordinate__Fi(iVar29);
          matSrc = pSVar30->matLocalWorld;
          pCVar32 = _GetCoordCache__Fv();
          puVar1 = (undefined *)((int)&pCVar32->edge_check + 3);
          uVar3 = (uint)puVar1 & 7;
          uVar4 = (uint)pCVar32 & 7;
          uVar39 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
                   uVar39 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
                   *(ulong *)((int)pCVar32 - uVar4) >> uVar4 * 8;
          puVar1 = (undefined *)((int)&(pCVar32->Point).bEnable + 3);
          uVar3 = (uint)puVar1 & 7;
          uVar4 = (uint)&pCVar32->cn0 & 7;
          uVar41 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
                   uVar41 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
                   *(ulong *)((int)&pCVar32->cn0 - uVar4) >> uVar4 * 8;
          puVar1 = (undefined *)((int)(pCVar32->Point).aiIndex + 7);
          uVar3 = (uint)puVar1 & 7;
          piVar2 = (pCVar32->Point).aiIndex;
          uVar4 = (uint)piVar2 & 7;
          uVar35 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
                   uVar35 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
                   *(ulong *)((int)piVar2 - uVar4) >> uVar4 * 8;
          puVar1 = (undefined *)((int)&(pCVar32->Spot).bEnable + 3);
          uVar3 = (uint)puVar1 & 7;
          piVar2 = (pCVar32->Point).aiIndex + 2;
          uVar4 = (uint)piVar2 & 7;
          uVar37 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
                   uVar37 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
                   *(ulong *)((int)piVar2 - uVar4) >> uVar4 * 8;
          puVar1 = (undefined *)((int)&CC.edge_check + 3);
          uVar3 = (uint)puVar1 & 7;
          puVar5 = (ulong *)(puVar1 + -uVar3);
          *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar39 >> (7 - uVar3) * 8;
          puVar1 = (undefined *)((int)&CC.Point.bEnable + 3);
          uVar3 = (uint)puVar1 & 7;
          puVar5 = (ulong *)(puVar1 + -uVar3);
          *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar41 >> (7 - uVar3) * 8;
          puVar1 = (undefined *)((int)CC.Point.aiIndex + 7);
          uVar3 = (uint)puVar1 & 7;
          puVar5 = (ulong *)(puVar1 + -uVar3);
          *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar35 >> (7 - uVar3) * 8;
          puVar1 = (undefined *)((int)&CC.Spot.bEnable + 3);
          uVar3 = (uint)puVar1 & 7;
          puVar5 = (ulong *)(puVar1 + -uVar3);
          *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar37 >> (7 - uVar3) * 8;
          puVar1 = (undefined *)((int)(pCVar32->Spot).aiIndex + 7);
          uVar3 = (uint)puVar1 & 7;
          piVar2 = (pCVar32->Spot).aiIndex;
          uVar4 = (uint)piVar2 & 7;
          CC.Spot.aiIndex._0_8_ =
               (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
               uVar39 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
               *(ulong *)((int)piVar2 - uVar4) >> uVar4 * 8;
          iVar31 = (pCVar32->Spot).aiIndex[2];
          puVar1 = (undefined *)((int)CC.Spot.aiIndex + 7);
          uVar3 = (uint)puVar1 & 7;
          puVar5 = (ulong *)(puVar1 + -uVar3);
          *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 |
                    (ulong)CC.Spot.aiIndex._0_8_ >> (7 - uVar3) * 8;
          CC.edge_check = (int)(uVar39 >> 0x20);
          CC.cache_on = 1;
          CC._8_8_ = uVar41;
          CC.Point.aiIndex._0_8_ = uVar35;
          CC._24_8_ = uVar37;
          CC.Spot.aiIndex[2] = iVar31;
          iVar31 = _GetEdgeCheck__Fv();
          CC.edge_check = iVar31;
          CC.cn0 = iVar29;
          _SetCoordCache__FRC10CoordCache(&CC);
          g3dMatrixInverseTransform__FPA3_fPA3_Cf((float (*) [4])&DAT_70003900,matSrc);
                    /* inlined from ../../graphics/graph3d/g3dxVu0.h */
                    /* end of inlined section */
                    /* inlined from ../../graphics/graph3d/g3dxVu0.h */
          auVar43 = _lqc2((undefined  [16])s_vDirection);
          auVar44 = _lqc2(*local_60);
          auVar45 = _lqc2(local_60[1]);
          auVar46 = _lqc2(local_60[2]);
          _vmulabc(auVar44,auVar43);
          _vmaddabc(auVar45,auVar43);
          auVar43 = _vmaddbc(auVar46,auVar43);
          auVar43 = _sqc2(auVar43);
          auVar44 = _lqc2((undefined  [16])s_matIP[0]);
          auVar45 = _lqc2((undefined  [16])s_matIP[1]);
          auVar46 = _lqc2((undefined  [16])s_matIP[2]);
          auVar47 = _lqc2((undefined  [16])s_matIP[3]);
          afVar25[0] = *(float *)((int)matSrc + 0);
          afVar25[1] = *(float *)((int)matSrc + 4);
          afVar25[2] = *(float *)((int)matSrc + 8);
          afVar25[3] = *(float *)((int)matSrc + 0xc);
          auVar48 = _lqc2((undefined  [16])afVar25);
          afVar6[0] = *(float *)((int)pSVar30->matLocalWorld[1] + 0);
          afVar6[1] = *(float *)((int)pSVar30->matLocalWorld[1] + 4);
          afVar6[2] = *(float *)((int)pSVar30->matLocalWorld[1] + 8);
          afVar6[3] = *(float *)((int)pSVar30->matLocalWorld[1] + 0xc);
          auVar49 = _lqc2((undefined  [16])afVar6);
          afVar7[0] = *(float *)((int)pSVar30->matLocalWorld[2] + 0);
          afVar7[1] = *(float *)((int)pSVar30->matLocalWorld[2] + 4);
          afVar7[2] = *(float *)((int)pSVar30->matLocalWorld[2] + 8);
          afVar7[3] = *(float *)((int)pSVar30->matLocalWorld[2] + 0xc);
          auVar50 = _lqc2((undefined  [16])afVar7);
          afVar8[0] = *(float *)((int)pSVar30->matLocalWorld[3] + 0);
          afVar8[1] = *(float *)((int)pSVar30->matLocalWorld[3] + 4);
          afVar8[2] = *(float *)((int)pSVar30->matLocalWorld[3] + 8);
          afVar8[3] = *(float *)((int)pSVar30->matLocalWorld[3] + 0xc);
          auVar51 = _lqc2((undefined  [16])afVar8);
          _vmulabc(auVar44,auVar48);
          _vmaddabc(auVar45,auVar48);
          _vmaddabc(auVar46,auVar48);
          auVar48 = _vmaddbc(auVar47,auVar48);
          _vmulabc(auVar44,auVar49);
          _vmaddabc(auVar45,auVar49);
          _vmaddabc(auVar46,auVar49);
          auVar49 = _vmaddbc(auVar47,auVar49);
          _vmulabc(auVar44,auVar50);
          _vmaddabc(auVar45,auVar50);
          _vmaddabc(auVar46,auVar50);
          auVar50 = _vmaddbc(auVar47,auVar50);
          _vmulabc(auVar44,auVar51);
          _vmaddabc(auVar45,auVar51);
          _vmaddabc(auVar46,auVar51);
          auVar44 = _vmaddbc(auVar47,auVar51);
          afVar25 = (float  [4])_sqc2(auVar48);
          *(float *)((int)&pGVar28->Vu1Mem + 0x130) = afVar25[0];
          *(float *)((int)&pGVar28->Vu1Mem + 0x134) = afVar25[1];
          *(float *)((int)&pGVar28->Vu1Mem + 0x138) = afVar25[2];
          *(float *)((int)&pGVar28->Vu1Mem + 0x13c) = afVar25[3];
          pGVar26 = &pGVar28->Vu1Mem;
          afVar25 = (float  [4])_sqc2(auVar49);
          *(float *)((int)((float (*) [4])((int)&pGVar26->Direct + 0x130))[1] + 0) = afVar25[0];
          *(float *)((int)((float (*) [4])((int)&pGVar26->Direct + 0x130))[1] + 4) = afVar25[1];
          *(float *)((int)((float (*) [4])((int)&pGVar26->Direct + 0x130))[1] + 8) = afVar25[2];
          *(float *)((int)((float (*) [4])((int)&pGVar26->Direct + 0x130))[1] + 0xc) = afVar25[3];
          pGVar26 = &pGVar28->Vu1Mem;
          afVar25 = (float  [4])_sqc2(auVar50);
          *(float *)((int)((float (*) [4])((int)&pGVar26->Direct + 0x130))[2] + 0) = afVar25[0];
          *(float *)((int)((float (*) [4])((int)&pGVar26->Direct + 0x130))[2] + 4) = afVar25[1];
          *(float *)((int)((float (*) [4])((int)&pGVar26->Direct + 0x130))[2] + 8) = afVar25[2];
          *(float *)((int)((float (*) [4])((int)&pGVar26->Direct + 0x130))[2] + 0xc) = afVar25[3];
          pGVar26 = &pGVar28->Vu1Mem;
          afVar25 = (float  [4])_sqc2(auVar44);
          *(float *)((int)((float (*) [4])((int)&pGVar26->Direct + 0x130))[3] + 0) = afVar25[0];
          *(float *)((int)((float (*) [4])((int)&pGVar26->Direct + 0x130))[3] + 4) = afVar25[1];
          *(float *)((int)((float (*) [4])((int)&pGVar26->Direct + 0x130))[3] + 8) = afVar25[2];
          *(float *)((int)((float (*) [4])((int)&pGVar26->Direct + 0x130))[3] + 0xc) = afVar25[3];
          pGVar34 = gra3dGetCamera__Fv();
          afVar9[0] = *(float *)((int)pGVar34->matWorldScreen[0] + 0);
          afVar9[1] = *(float *)((int)pGVar34->matWorldScreen[0] + 4);
          afVar9[2] = *(float *)((int)pGVar34->matWorldScreen[0] + 8);
          afVar9[3] = *(float *)((int)pGVar34->matWorldScreen[0] + 0xc);
          auVar44 = _lqc2((undefined  [16])afVar9);
          afVar10[0] = *(float *)((int)pGVar34->matWorldScreen[1] + 0);
          afVar10[1] = *(float *)((int)pGVar34->matWorldScreen[1] + 4);
          afVar10[2] = *(float *)((int)pGVar34->matWorldScreen[1] + 8);
          afVar10[3] = *(float *)((int)pGVar34->matWorldScreen[1] + 0xc);
          auVar45 = _lqc2((undefined  [16])afVar10);
          afVar11[0] = *(float *)((int)pGVar34->matWorldScreen[2] + 0);
          afVar11[1] = *(float *)((int)pGVar34->matWorldScreen[2] + 4);
          afVar11[2] = *(float *)((int)pGVar34->matWorldScreen[2] + 8);
          afVar11[3] = *(float *)((int)pGVar34->matWorldScreen[2] + 0xc);
          auVar46 = _lqc2((undefined  [16])afVar11);
          afVar12[0] = *(float *)((int)pGVar34->matWorldScreen[3] + 0);
          afVar12[1] = *(float *)((int)pGVar34->matWorldScreen[3] + 4);
          afVar12[2] = *(float *)((int)pGVar34->matWorldScreen[3] + 8);
          afVar12[3] = *(float *)((int)pGVar34->matWorldScreen[3] + 0xc);
          auVar47 = _lqc2((undefined  [16])afVar12);
          afVar13[0] = *(float *)((int)matSrc + 0);
          afVar13[1] = *(float *)((int)matSrc + 4);
          afVar13[2] = *(float *)((int)matSrc + 8);
          afVar13[3] = *(float *)((int)matSrc + 0xc);
          auVar48 = _lqc2((undefined  [16])afVar13);
          afVar14[0] = *(float *)((int)pSVar30->matLocalWorld[1] + 0);
          afVar14[1] = *(float *)((int)pSVar30->matLocalWorld[1] + 4);
          afVar14[2] = *(float *)((int)pSVar30->matLocalWorld[1] + 8);
          afVar14[3] = *(float *)((int)pSVar30->matLocalWorld[1] + 0xc);
          auVar49 = _lqc2((undefined  [16])afVar14);
          afVar15[0] = *(float *)((int)pSVar30->matLocalWorld[2] + 0);
          afVar15[1] = *(float *)((int)pSVar30->matLocalWorld[2] + 4);
          afVar15[2] = *(float *)((int)pSVar30->matLocalWorld[2] + 8);
          afVar15[3] = *(float *)((int)pSVar30->matLocalWorld[2] + 0xc);
          auVar50 = _lqc2((undefined  [16])afVar15);
          afVar16[0] = *(float *)((int)pSVar30->matLocalWorld[3] + 0);
          afVar16[1] = *(float *)((int)pSVar30->matLocalWorld[3] + 4);
          afVar16[2] = *(float *)((int)pSVar30->matLocalWorld[3] + 8);
          afVar16[3] = *(float *)((int)pSVar30->matLocalWorld[3] + 0xc);
          auVar51 = _lqc2((undefined  [16])afVar16);
          _vmulabc(auVar44,auVar48);
          _vmaddabc(auVar45,auVar48);
          _vmaddabc(auVar46,auVar48);
          auVar48 = _vmaddbc(auVar47,auVar48);
          _vmulabc(auVar44,auVar49);
          _vmaddabc(auVar45,auVar49);
          _vmaddabc(auVar46,auVar49);
          auVar49 = _vmaddbc(auVar47,auVar49);
          _vmulabc(auVar44,auVar50);
          _vmaddabc(auVar45,auVar50);
          _vmaddabc(auVar46,auVar50);
          auVar50 = _vmaddbc(auVar47,auVar50);
          _vmulabc(auVar44,auVar51);
          _vmaddabc(auVar45,auVar51);
          _vmaddabc(auVar46,auVar51);
          auVar44 = _vmaddbc(auVar47,auVar51);
          afVar25 = (float  [4])_sqc2(auVar48);
          *(float *)((int)&pGVar28->Vu1Mem + 0x80) = afVar25[0];
          *(float *)((int)&pGVar28->Vu1Mem + 0x84) = afVar25[1];
          *(float *)((int)&pGVar28->Vu1Mem + 0x88) = afVar25[2];
          *(float *)((int)&pGVar28->Vu1Mem + 0x8c) = afVar25[3];
          pGVar26 = &pGVar28->Vu1Mem;
          afVar25 = (float  [4])_sqc2(auVar49);
          *(float *)((int)((float (*) [4])((int)&pGVar26->Direct + 0x80))[1] + 0) = afVar25[0];
          *(float *)((int)((float (*) [4])((int)&pGVar26->Direct + 0x80))[1] + 4) = afVar25[1];
          *(float *)((int)((float (*) [4])((int)&pGVar26->Direct + 0x80))[1] + 8) = afVar25[2];
          *(float *)((int)((float (*) [4])((int)&pGVar26->Direct + 0x80))[1] + 0xc) = afVar25[3];
          pGVar26 = &pGVar28->Vu1Mem;
          afVar25 = (float  [4])_sqc2(auVar50);
          *(float *)((int)((float (*) [4])((int)&pGVar26->Direct + 0x80))[2] + 0) = afVar25[0];
          *(float *)((int)((float (*) [4])((int)&pGVar26->Direct + 0x80))[2] + 4) = afVar25[1];
          *(float *)((int)((float (*) [4])((int)&pGVar26->Direct + 0x80))[2] + 8) = afVar25[2];
          *(float *)((int)((float (*) [4])((int)&pGVar26->Direct + 0x80))[2] + 0xc) = afVar25[3];
          pGVar26 = &pGVar28->Vu1Mem;
          afVar25 = (float  [4])_sqc2(auVar44);
          *(float *)((int)((float (*) [4])((int)&pGVar26->Direct + 0x80))[3] + 0) = afVar25[0];
          *(float *)((int)((float (*) [4])((int)&pGVar26->Direct + 0x80))[3] + 4) = afVar25[1];
          *(float *)((int)((float (*) [4])((int)&pGVar26->Direct + 0x80))[3] + 8) = afVar25[2];
          *(float *)((int)((float (*) [4])((int)&pGVar26->Direct + 0x80))[3] + 0xc) = afVar25[3];
          pGVar34 = gra3dGetCamera__Fv();
          afVar17[0] = *(float *)((int)pGVar34->matWorldClipPolygon[0] + 0);
          afVar17[1] = *(float *)((int)pGVar34->matWorldClipPolygon[0] + 4);
          afVar17[2] = *(float *)((int)pGVar34->matWorldClipPolygon[0] + 8);
          afVar17[3] = *(float *)((int)pGVar34->matWorldClipPolygon[0] + 0xc);
          auVar44 = _lqc2((undefined  [16])afVar17);
          afVar18[0] = *(float *)((int)pGVar34->matWorldClipPolygon[1] + 0);
          afVar18[1] = *(float *)((int)pGVar34->matWorldClipPolygon[1] + 4);
          afVar18[2] = *(float *)((int)pGVar34->matWorldClipPolygon[1] + 8);
          afVar18[3] = *(float *)((int)pGVar34->matWorldClipPolygon[1] + 0xc);
          auVar45 = _lqc2((undefined  [16])afVar18);
          afVar19[0] = *(float *)((int)pGVar34->matWorldClipPolygon[2] + 0);
          afVar19[1] = *(float *)((int)pGVar34->matWorldClipPolygon[2] + 4);
          afVar19[2] = *(float *)((int)pGVar34->matWorldClipPolygon[2] + 8);
          afVar19[3] = *(float *)((int)pGVar34->matWorldClipPolygon[2] + 0xc);
          auVar46 = _lqc2((undefined  [16])afVar19);
          afVar20[0] = *(float *)((int)pGVar34->matWorldClipPolygon[3] + 0);
          afVar20[1] = *(float *)((int)pGVar34->matWorldClipPolygon[3] + 4);
          afVar20[2] = *(float *)((int)pGVar34->matWorldClipPolygon[3] + 8);
          afVar20[3] = *(float *)((int)pGVar34->matWorldClipPolygon[3] + 0xc);
          auVar47 = _lqc2((undefined  [16])afVar20);
          afVar21[0] = *(float *)((int)matSrc + 0);
          afVar21[1] = *(float *)((int)matSrc + 4);
          afVar21[2] = *(float *)((int)matSrc + 8);
          afVar21[3] = *(float *)((int)matSrc + 0xc);
          auVar48 = _lqc2((undefined  [16])afVar21);
          afVar22[0] = *(float *)((int)pSVar30->matLocalWorld[1] + 0);
          afVar22[1] = *(float *)((int)pSVar30->matLocalWorld[1] + 4);
          afVar22[2] = *(float *)((int)pSVar30->matLocalWorld[1] + 8);
          afVar22[3] = *(float *)((int)pSVar30->matLocalWorld[1] + 0xc);
          auVar49 = _lqc2((undefined  [16])afVar22);
          afVar23[0] = *(float *)((int)pSVar30->matLocalWorld[2] + 0);
          afVar23[1] = *(float *)((int)pSVar30->matLocalWorld[2] + 4);
          afVar23[2] = *(float *)((int)pSVar30->matLocalWorld[2] + 8);
          afVar23[3] = *(float *)((int)pSVar30->matLocalWorld[2] + 0xc);
          auVar50 = _lqc2((undefined  [16])afVar23);
          afVar24[0] = *(float *)((int)pSVar30->matLocalWorld[3] + 0);
          afVar24[1] = *(float *)((int)pSVar30->matLocalWorld[3] + 4);
          afVar24[2] = *(float *)((int)pSVar30->matLocalWorld[3] + 8);
          afVar24[3] = *(float *)((int)pSVar30->matLocalWorld[3] + 0xc);
          auVar51 = _lqc2((undefined  [16])afVar24);
          _vmulabc(auVar44,auVar48);
          _vmaddabc(auVar45,auVar48);
          _vmaddabc(auVar46,auVar48);
          auVar48 = _vmaddbc(auVar47,auVar48);
          _vmulabc(auVar44,auVar49);
          _vmaddabc(auVar45,auVar49);
          _vmaddabc(auVar46,auVar49);
          auVar49 = _vmaddbc(auVar47,auVar49);
          _vmulabc(auVar44,auVar50);
          _vmaddabc(auVar45,auVar50);
          _vmaddabc(auVar46,auVar50);
          auVar50 = _vmaddbc(auVar47,auVar50);
          _vmulabc(auVar44,auVar51);
          _vmaddabc(auVar45,auVar51);
          _vmaddabc(auVar46,auVar51);
          auVar44 = _vmaddbc(auVar47,auVar51);
          afVar25 = (float  [4])_sqc2(auVar48);
          *(float *)((int)&pGVar28->Vu1Mem + 0xc0) = afVar25[0];
          *(float *)((int)&pGVar28->Vu1Mem + 0xc4) = afVar25[1];
          *(float *)((int)&pGVar28->Vu1Mem + 200) = afVar25[2];
          *(float *)((int)&pGVar28->Vu1Mem + 0xcc) = afVar25[3];
          pGVar26 = &pGVar28->Vu1Mem;
          afVar25 = (float  [4])_sqc2(auVar49);
          *(float *)((int)((float (*) [4])((int)&pGVar26->Direct + 0xc0))[1] + 0) = afVar25[0];
          *(float *)((int)((float (*) [4])((int)&pGVar26->Direct + 0xc0))[1] + 4) = afVar25[1];
          *(float *)((int)((float (*) [4])((int)&pGVar26->Direct + 0xc0))[1] + 8) = afVar25[2];
          *(float *)((int)((float (*) [4])((int)&pGVar26->Direct + 0xc0))[1] + 0xc) = afVar25[3];
          pGVar26 = &pGVar28->Vu1Mem;
          afVar25 = (float  [4])_sqc2(auVar50);
          *(float *)((int)((float (*) [4])((int)&pGVar26->Direct + 0xc0))[2] + 0) = afVar25[0];
          *(float *)((int)((float (*) [4])((int)&pGVar26->Direct + 0xc0))[2] + 4) = afVar25[1];
          *(float *)((int)((float (*) [4])((int)&pGVar26->Direct + 0xc0))[2] + 8) = afVar25[2];
          *(float *)((int)((float (*) [4])((int)&pGVar26->Direct + 0xc0))[2] + 0xc) = afVar25[3];
          pGVar26 = &pGVar28->Vu1Mem;
          afVar25 = (float  [4])_sqc2(auVar44);
          *(float *)((int)((float (*) [4])((int)&pGVar26->Direct + 0xc0))[3] + 0) = afVar25[0];
          fVar27 = DAT_003ee3ec;
          *(float *)((int)((float (*) [4])((int)&pGVar26->Direct + 0xc0))[3] + 4) = afVar25[1];
          *(float *)((int)((float (*) [4])((int)&pGVar26->Direct + 0xc0))[3] + 8) = afVar25[2];
          *(float *)((int)((float (*) [4])((int)&pGVar26->Direct + 0xc0))[3] + 0xc) = afVar25[3];
                    /* end of inlined section */
          tmpvec[0] = auVar43._0_4_;
          (pGVar28->Vu1Mem).Direct.matLIP[3] = -tmpvec[0];
          tmpvec[1] = auVar43._4_4_;
          (pGVar28->Vu1Mem).Direct.matLIP[1][3] = -tmpvec[1];
          tmpvec[2] = auVar43._8_4_;
          (pGVar28->Vu1Mem).Direct.matLIP[3][3] = 0.0;
          (pGVar28->Vu1Mem).Direct.matLIP[2][3] = -tmpvec[2];
          (pGVar28->Vu1Mem).Direct.matLocalScreen[3][2] =
               (pGVar28->Vu1Mem).Direct.matLocalScreen[3][2] + fVar27;
          SetVU1HeaderShadow__Fv();
        }
        goto LAB_001be300;
      }
      pPUHead = pPUHead->pNext;
    }
    if (pPUHead == (SGDPROCUNITHEADER *)0x0) {
      return;
    }
    iVar29 = pPUHead->iCategory;
  } while( true );
}

static void SetUpShadow() {
	GRA3DVU1MEMLAYOUT_MAPSHADOW_DIRECT &rVu1Mem;
	sceGifPackAd aGPA[3];
	
  GRA3DSCRATCHPADLAYOUT_MAPSHADOW *pGVar1;
  G3DFOG *pFog;
  ulong uVar2;
  ulong uVar3;
  _sceGifPackAd aGPA [3];
  
  pGVar1 = s_pScratchpadLayout;
  pFog = gra3dGetFogRef__Fv();
  g3dCalcVu1Fog__FP9G3DVU1FOGPC6G3DFOG(&(pGVar1->Vu1Mem).Direct.Fog,pFog);
  if (g_gra3dShadowDebug.bTextureMapEnable == 0) {
    *(ulong *)((int)&pGVar1->Vu1Mem + 0x40) =
         *(ulong *)((int)&pGVar1->Vu1Mem + 0x40) & 0xfff7ffffffffffff;
    *(ulong *)((int)&pGVar1->Vu1Mem + 0x50) =
         *(ulong *)((int)&pGVar1->Vu1Mem + 0x50) & 0xfff7ffffffffffff;
  }
  else {
    uVar3 = *(ulong *)((int)&pGVar1->Vu1Mem + 0x40);
    uVar2 = *(ulong *)((int)&pGVar1->Vu1Mem + 0x50);
    *(ulong *)((int)&pGVar1->Vu1Mem + 0x40) =
         uVar3 & 0xfc007fffffffffff | (uVar3 >> 0x2f & 0x7ff | 0x10) << 0x2f;
    *(ulong *)((int)&pGVar1->Vu1Mem + 0x50) =
         uVar2 & 0xfc007fffffffffff | (uVar2 >> 0x2f & 0x7ff | 0x10) << 0x2f;
  }
  if (g_gra3dShadowDebug.bFogEnable == 0) {
    *(ulong *)((int)&pGVar1->Vu1Mem + 0x40) =
         *(ulong *)((int)&pGVar1->Vu1Mem + 0x40) & 0xffefffffffffffff;
    *(ulong *)((int)&pGVar1->Vu1Mem + 0x50) =
         *(ulong *)((int)&pGVar1->Vu1Mem + 0x50) & 0xffefffffffffffff;
  }
  else {
    uVar3 = *(ulong *)((int)&pGVar1->Vu1Mem + 0x40);
    uVar2 = *(ulong *)((int)&pGVar1->Vu1Mem + 0x50);
    *(ulong *)((int)&pGVar1->Vu1Mem + 0x40) =
         uVar3 & 0xfc007fffffffffff | (uVar3 >> 0x2f & 0x7ff | 0x20) << 0x2f;
    *(ulong *)((int)&pGVar1->Vu1Mem + 0x50) =
         uVar2 & 0xfc007fffffffffff | (uVar2 >> 0x2f & 0x7ff | 0x20) << 0x2f;
  }
  gra3dDmaLoadVu1MicroProgram__FPCUii((uint *)&_dma_1);
  gra3dSetGsRegisterDefault__Fv();
                    /* inlined from g3dRenderTarget.h */
                    /* end of inlined section */
                    /* inlined from g3dRenderTarget.h */
                    /* end of inlined section */
                    /* inlined from g3dRenderTarget.h */
                    /* end of inlined section */
                    /* inlined from g3dRenderTarget.h */
  aGPA[0].DATA = (ulong)s_RenderTarget.m_gsTex0;
  aGPA[0].ADDR = 6;
  aGPA[1].DATA = 5;
  aGPA[1].ADDR = 8;
  aGPA[2].DATA = 0x5801b;
  aGPA[2].ADDR = 0x47;
                    /* end of inlined section */
  gra3dSetGsRegisters__FPC13_sceGifPackAdii(aGPA,3);
  return;
}

static void GetRotMatrixZAxis(float *matDest[4], float *vSrc) {
	float vWork[4];
	float *pm1[4];
	float ry;
	float f;
	float f1;
	float f2;
	float rx;
	float f;
	float f1;
	float f2;
	
  undefined auVar1 [12];
  float fVar2;
  float fVar3;
  float fVar4;
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  float vWork [4];
  
                    /* inlined from ../../graphics/graph3d/g3dxVu0.h */
  auVar1 = *(undefined (*) [12])vSrc;
  auVar9 = *(undefined (*) [16])vSrc;
                    /* end of inlined section */
  sceVu0UnitMatrix();
  vWork[0] = auVar1._0_4_;
  if (vWork[0] == 0.0) {
    vWork[2] = auVar1._8_4_;
    vWork[1] = auVar1._4_4_;
    if (vWork[2] == 0.0) goto LAB_001be678;
    fVar3 = *vSrc;
  }
  else {
    fVar3 = *vSrc;
  }
                    /* inlined from ../../graphics/graph3d/g3dMath.h */
                    /* end of inlined section */
  fVar4 = DAT_003ee3f0;
  fVar2 = g3dAtan2f__Fff(fVar3,vSrc[2]);
  fVar3 = DAT_003ee3f4;
                    /* inlined from ../../graphics/graph3d/g3dxVu0.h */
  fVar2 = -fVar2;
                    /* inlined from ../../graphics/graph3d/g3dMath.h */
  if (fVar4 < fVar2) {
    fVar2 = fmodf(fVar2,DAT_003ee3f4);
    if (fVar4 < fVar2) {
      fVar2 = fVar2 - fVar3;
    }
    else if (fVar2 < -fVar4) {
      fVar2 = fVar2 + fVar3;
    }
  }
                    /* inlined from ../../graphics/graph3d/g3dxVu0.h */
  sceVu0RotMatrixY(fVar2,matDest,0x3b4f30);
  auVar5 = _lqc2((undefined  [16])*matDest);
  auVar6 = _lqc2((undefined  [16])matDest[1]);
  auVar7 = _lqc2((undefined  [16])matDest[2]);
  auVar8 = _lqc2((undefined  [16])matDest[3]);
  auVar9 = _lqc2(auVar9);
  _vmulabc(auVar5,auVar9);
  _vmaddabc(auVar6,auVar9);
  _vmaddabc(auVar7,auVar9);
  auVar9 = _vmaddbc(auVar8,auVar9);
  auVar9 = _sqc2(auVar9);
  vWork[2] = auVar9._8_4_;
                    /* end of inlined section */
  vWork[1] = auVar9._4_4_;
LAB_001be678:
  if ((vWork[1] != 0.0) || (vWork[2] != 0.0)) {
    fVar4 = DAT_003ee3f8;
                    /* inlined from ../../graphics/graph3d/g3dMath.h */
                    /* end of inlined section */
    fVar2 = g3dAtan2f__Fff(vWork[1],vWork[2]);
    fVar3 = DAT_003ee3fc;
                    /* inlined from ../../graphics/graph3d/g3dMath.h */
    if (fVar4 < fVar2) {
      fVar2 = fmodf(fVar2,DAT_003ee3fc);
      if (fVar4 < fVar2) {
        fVar2 = fVar2 - fVar3;
      }
      else if (fVar2 < -fVar4) {
        fVar2 = fVar2 + fVar3;
      }
    }
                    /* inlined from ../../graphics/graph3d/g3dxVu0.h */
    sceVu0RotMatrixX(fVar2,matDest,matDest);
  }
  return;
}

static void _CalcProjectionShadowMatrix(float *matProjection[4], float ax, float ay, float fTextureScale, int iTexWidth, int iTexHeight, float *vLightDir, float *avBBWorld[4]) {
	float vScale[4];
	float matRot[4][4];
	float vTransInverse[4];
	float planeCull[4];
	int aiBBIndex[8];
	float culval[8];
	int i;
	
  uint uVar1;
  ulong *puVar2;
  float afVar3 [4];
  float *pfVar4;
  int iVar5;
  undefined extraout_vf1 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined auVar10 [16];
  float vScale [4];
  float matRot [4] [4];
  float vTransInverse [4];
  float planeCull [4];
  int aiBBIndex [8];
  float culval [8];
  
                    /* inlined from ../../graphics/graph3d/g3dxVu0.h */
                    /* end of inlined section */
                    /* inlined from ../../graphics/graph3d/g3dxVu0.h */
                    /* end of inlined section */
  auVar6._4_4_ = (-fTextureScale / (float)iTexHeight) * ay;
  auVar6._0_4_ = (fTextureScale / (float)iTexWidth) * ax;
  auVar6._8_4_ = 0xbf800000;
  auVar6._12_4_ = 0;
                    /* inlined from ../../graphics/graph3d/g3dxVu0.h */
  auVar10 = _lqc2(auVar6);
  auVar6 = _lqc2((undefined  [16])s_matTransTexture[0]);
  auVar7 = _lqc2((undefined  [16])s_matTransTexture[1]);
  auVar8 = _lqc2((undefined  [16])s_matTransTexture[2]);
  auVar9 = _lqc2((undefined  [16])s_matTransTexture[3]);
  auVar6 = _vmulbc(auVar6,auVar10);
  auVar7 = _vmulbc(auVar7,auVar10);
  auVar8 = _vmulbc(auVar8,auVar10);
  afVar3 = (float  [4])_sqc2(auVar9);
  matProjection[3] = afVar3;
  afVar3 = (float  [4])_sqc2(auVar6);
  *matProjection = afVar3;
  afVar3 = (float  [4])_sqc2(auVar7);
  matProjection[1] = afVar3;
  afVar3 = (float  [4])_sqc2(auVar8);
  matProjection[2] = afVar3;
                    /* end of inlined section */
  GetRotMatrixZAxis__FPA3_fPCf(matRot,vLightDir);
  sceVu0MulMatrix(matProjection,matProjection);
                    /* inlined from ../../graphics/graph3d/g3dxVu0.h */
  auVar6 = _lqc2((undefined  [16])g_v0001);
  auVar7 = _lqc2((undefined  [16])s_avBB[8]);
  auVar6 = _vsub(auVar6,auVar7);
  auVar6 = _sqc2(auVar6);
  auVar10 = _lqc2(auVar6);
  auVar6 = _lqc2((undefined  [16])*matProjection);
  auVar7 = _lqc2((undefined  [16])matProjection[1]);
  auVar8 = _lqc2((undefined  [16])matProjection[2]);
  auVar9 = _lqc2((undefined  [16])matProjection[3]);
  _vmulabc(auVar6,auVar10);
  _vmaddabc(auVar7,auVar10);
  _vmaddabc(auVar8,auVar10);
  auVar9 = _vmaddbc(auVar9,auVar10);
  afVar3 = (float  [4])_sqc2(auVar6);
  *matProjection = afVar3;
  afVar3 = (float  [4])_sqc2(auVar7);
  matProjection[1] = afVar3;
  afVar3 = (float  [4])_sqc2(auVar8);
  matProjection[2] = afVar3;
  afVar3 = (float  [4])_sqc2(auVar9);
  matProjection[3] = afVar3;
                    /* end of inlined section */
  g3dPlaneFromMatrixZ__FPfPA3_Cf(planeCull,matProjection);
  uVar1 = (int)aiBBIndex + 7U & 7;
  puVar2 = (ulong *)(((int)aiBBIndex + 7U) - uVar1);
  *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | DAT_003b81c8 >> (7 - uVar1) * 8;
  aiBBIndex[0] = (undefined4)DAT_003b81c8;
  aiBBIndex[1] = DAT_003b81c8._4_4_;
  uVar1 = (int)aiBBIndex + 0xfU & 7;
  puVar2 = (ulong *)(((int)aiBBIndex + 0xfU) - uVar1);
  *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | DAT_003b81d0 >> (7 - uVar1) * 8;
  aiBBIndex[2] = (undefined4)DAT_003b81d0;
  aiBBIndex[3] = DAT_003b81d0._4_4_;
  uVar1 = (int)aiBBIndex + 0x17U & 7;
  puVar2 = (ulong *)(((int)aiBBIndex + 0x17U) - uVar1);
  *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | DAT_003b81d8 >> (7 - uVar1) * 8;
  aiBBIndex[4] = (undefined4)DAT_003b81d8;
  aiBBIndex[5] = DAT_003b81d8._4_4_;
  uVar1 = (int)aiBBIndex + 0x1fU & 7;
  puVar2 = (ulong *)(((int)aiBBIndex + 0x1fU) - uVar1);
  *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | DAT_003b81e0 >> (7 - uVar1) * 8;
  aiBBIndex[6] = (undefined4)DAT_003b81e0;
  aiBBIndex[7] = DAT_003b81e0._4_4_;
  iVar5 = 0;
  do {
                    /* inlined from ../../graphics/graph3d/g3dxVu0.h */
                    /* end of inlined section */
    pfVar4 = culval + iVar5;
                    /* inlined from ../../graphics/graph3d/g3dxVu0.h */
    auVar6 = _lqc2((undefined  [16])planeCull);
    auVar7 = _lqc2((undefined  [16])avBBWorld[aiBBIndex[iVar5]]);
    auVar6 = _vmul(auVar6,auVar7);
    _vaddabc(auVar6,auVar6);
    auVar6 = _vmaddbc(extraout_vf1,auVar6);
    auVar6 = _qmfc2(auVar6._0_4_);
                    /* end of inlined section */
    iVar5 = iVar5 + 1;
                    /* end of inlined section */
    *pfVar4 = auVar6._0_4_;
  } while (iVar5 < 8);
  pfVar4 = (float *)min_element__H1ZPf_X01X01_X01(culval,&stack0xffffffe0);
  matProjection[3][2] = -*pfVar4;
  return;
}

static void CalcShadowHeight(float *bbox[4]) {
	static char __FUNCTION__[17] = {
		/* [0] = */ 67,
		/* [1] = */ 97,
		/* [2] = */ 108,
		/* [3] = */ 99,
		/* [4] = */ 83,
		/* [5] = */ 104,
		/* [6] = */ 97,
		/* [7] = */ 100,
		/* [8] = */ 111,
		/* [9] = */ 119,
		/* [10] = */ 72,
		/* [11] = */ 101,
		/* [12] = */ 105,
		/* [13] = */ 103,
		/* [14] = */ 104,
		/* [15] = */ 116,
		/* [16] = */ 0
	};
	u_int tmp;
	float tmpvec[4];
	sceVu0IVECTOR itmp;
	
  undefined auVar1 [16];
  undefined auVar2 [16];
  float tmpvec [4];
  int itmp [4];
  
                    /* inlined from ../../graphics/graph3d/g3dxVu0.h */
                    /* end of inlined section */
                    /* inlined from ../../graphics/graph3d/g3dxVu0.h */
  auVar1 = _lqc2((undefined  [16])*bbox);
  auVar2 = _lqc2((undefined  [16])bbox[7]);
  auVar1 = _vsub(auVar1,auVar2);
  tmpvec = (float  [4])_sqc2(auVar1);
                    /* end of inlined section */
  sceVu0MulVector(tmpvec,tmpvec,tmpvec);
                    /* inlined from ../../graphics/graph3d/g3dxVu0.h */
  _qmtc2(tmpvec[0] + tmpvec[1] + tmpvec[2]);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

static void _CalcCullingMatrix() {
	float tmpmat[4][4];
	float tmpvec[4];
	int i;
	float *pm0[4];
	
  float *pfVar1;
  float afVar2 [4];
  float *pfVar3;
  int iVar4;
  float fVar5;
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  float tmpmat [4] [4];
  float tmpvec [4];
  
  sceVu0UnitMatrix(tmpmat);
  if (0.0 < s_vDirection[0]) {
    tmpmat[0][0] = -1.0;
  }
  if (0.0 < s_vDirection[1]) {
    tmpmat[1][1] = -1.0;
  }
  if (0.0 < s_vDirection[2]) {
    tmpmat[2][2] = -1.0;
  }
  gra3dbbApplyMatrix__FPA3_fPA3_CfT1((float (*) [4])&DAT_70003900,s_avBB,tmpmat);
  tmpvec[0] = (float)_DAT_70003900;
  tmpvec[1] = (float)((ulong)_DAT_70003900 >> 0x20);
                    /* inlined from ../../graphics/graph3d/g3dxVu0.h */
  tmpvec[2] = DAT_70003908;
                    /* end of inlined section */
  pfVar3 = &DAT_70003910;
  iVar4 = 6;
  fVar5 = DAT_70003910;
  while( true ) {
    if (fVar5 < tmpvec[0]) {
      tmpvec[0] = fVar5;
    }
    if (pfVar3[1] < tmpvec[1]) {
      tmpvec[1] = pfVar3[1];
    }
    pfVar1 = pfVar3 + 2;
    pfVar3 = pfVar3 + 4;
    fVar5 = *pfVar1;
    if (tmpvec[2] <= *pfVar1) {
      fVar5 = tmpvec[2];
    }
    tmpvec[2] = fVar5;
    iVar4 = iVar4 + -1;
    if (iVar4 < 0) break;
    fVar5 = *pfVar3;
  }
                    /* inlined from ../../graphics/graph3d/g3dxVu0.h */
                    /* end of inlined section */
                    /* inlined from ../../graphics/graph3d/g3dxVu0.h */
  auVar7 = _qmtc2(0xbf800000);
  auVar6._4_4_ = tmpvec[1];
  auVar6._0_4_ = tmpvec[0];
  auVar6._8_4_ = tmpvec[2];
  auVar6._12_4_ = 0;
  auVar6 = _lqc2(auVar6);
  auVar6 = _vmulbc(auVar6,auVar7);
  auVar6 = _sqc2(auVar6);
  auVar7._4_4_ = tmpmat[0][1];
  auVar7._8_4_ = tmpmat[0][2];
  auVar7._12_4_ = tmpmat[0][3];
  auVar7._0_4_ = tmpmat[0][0];
  auVar7 = _lqc2(auVar7);
  auVar8._4_4_ = tmpmat[1][1];
  auVar8._0_4_ = tmpmat[1][0];
  auVar8._8_4_ = tmpmat[1][2];
  auVar8._12_4_ = tmpmat[1][3];
  auVar8 = _lqc2(auVar8);
  auVar9._8_4_ = tmpmat[2][2];
  auVar9._0_4_ = tmpmat[2][0];
  auVar9._4_4_ = tmpmat[2][1];
  auVar9._12_4_ = tmpmat[2][3];
  auVar9 = _lqc2(auVar9);
  auVar6 = _lqc2(auVar6);
  afVar2 = (float  [4])_sqc2(auVar7);
  s_matCull[0][0] = afVar2[0];
  s_matCull[0][1] = afVar2[1];
  s_matCull[0][2] = afVar2[2];
  s_matCull[0][3] = afVar2[3];
  afVar2 = (float  [4])_sqc2(auVar8);
  s_matCull[1][0] = afVar2[0];
  s_matCull[1][1] = afVar2[1];
  s_matCull[1][2] = afVar2[2];
  s_matCull[1][3] = afVar2[3];
  afVar2 = (float  [4])_sqc2(auVar9);
  s_matCull[2][0] = afVar2[0];
  s_matCull[2][1] = afVar2[1];
  s_matCull[2][2] = afVar2[2];
  s_matCull[2][3] = afVar2[3];
  afVar2 = (float  [4])_sqc2(auVar6);
  s_matCull[3][0] = afVar2[0];
  s_matCull[3][1] = afVar2[1];
  s_matCull[3][2] = afVar2[2];
  s_matCull[3][3] = afVar2[3];
  return;
}

static void _SetCameraCoord() {
	float tmpvec[4];
	
  float tmpvec [4];
  
                    /* inlined from ../../graphics/graph3d/g3dxVu0.h */
                    /* end of inlined section */
                    /* inlined from ../../graphics/graph3d/g3dxVu0.h */
                    /* end of inlined section */
                    /* inlined from ../../graphics/graph3d/g3dxVu0.h */
  s_Camera.vTarget[2] = s_avBB[8][2];
  s_Camera.vTarget[3] = s_avBB[8][3];
  s_Camera.vTarget._0_8_ = s_avBB[8]._0_8_;
                    /* end of inlined section */
  sceVu0ScaleVector(0x447a0000,tmpvec,0x4b3da0);
  sceVu0AddVector(0x3185a0,0x318400,tmpvec);
  return;
}

static void _CalcAspectRatioForRenderShadow(float *pAX, float *pAY) {
	float matWorldScreen[4][4];
	float xmax;
	float ymax;
	float tmpvec[4];
	int i;
	
  float *pfVar1;
  int iVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float matWorldScreen [4] [4];
  float tmpvec [4];
  
  iVar2 = _IsSamePositionAsTarget__FPCf((float *)s_Camera.matCoord[3]);
  if (iVar2 == 0) {
    s_Camera.fAspectX = 1.0;
    s_Camera.fAspectY = 1.0;
    fVar7 = 0.0;
    gra3dCalcWorldScreenMatrix__FPA3_fP11GRA3DCAMERAi(matWorldScreen,&s_Camera,1);
    fVar6 = 0.0;
    gra3dbbApplyMatrix__FPA3_fPA3_CfT1((float (*) [4])&DAT_70003900,s_avBB,matWorldScreen);
    pfVar3 = &DAT_70003900;
    iVar2 = 7;
    fVar5 = DAT_70003900;
    while( true ) {
      fVar4 = ABS(fVar5 - s_Camera.fCenterX);
      pfVar1 = pfVar3 + 1;
      pfVar3 = pfVar3 + 4;
      if (fVar4 <= fVar6) {
        fVar4 = fVar6;
      }
      if (fVar7 < ABS(*pfVar1 - s_Camera.fCenterY)) {
        fVar7 = ABS(*pfVar1 - s_Camera.fCenterY);
      }
      iVar2 = iVar2 + -1;
      if (iVar2 < 0) break;
      fVar5 = *pfVar3;
      fVar6 = fVar4;
    }
    CalcShadowHeight__FPA3_Cf(s_avBB);
    iVar2 = GetWidth__13CRenderTarget(&s_RenderTarget);
    *pAX = ((float)iVar2 * 0.5) / fVar4;
    iVar2 = GetHeight__13CRenderTarget(&s_RenderTarget);
    fVar7 = ((float)iVar2 * 0.5) / fVar7;
  }
  else {
    fVar7 = 1.0;
    *pAX = 1.0;
  }
  *pAY = fVar7;
  return;
}

static void SetShadowCamera() {
  _SetCameraCoord__Fv();
  _CalcAspectRatioForRenderShadow__FPfT0(&s_Camera.fAspectX,&s_Camera.fAspectY);
  _CalcCullingMatrix__Fv();
  return;
}

static void _ApplyCamera(GRA3DCAMERA *pCamera, int bFixUp) {
  gra3dcamSetPosition__FPCf((float *)pCamera->matCoord[3]);
  gra3dcamSetTarget__FPCfi(pCamera->vTarget,bFixUp);
  gra3dcamSetAspect__Fff(pCamera->fAspectX,pCamera->fAspectY);
  gra3dcamSetFov__Ff(pCamera->fFov);
  gra3dcamSetDepth__Fff(pCamera->fZmin,pCamera->fZmax);
  gra3dcamSetType__F20G3DCAMPROJECTIONTYPE(pCamera->type);
  gra3dApplyCamera__FP11GRA3DCAMERAi((GRA3DCAMERA *)0x0,bFixUp);
  return;
}

static void _RenderShadow(SGDFILEHEADER *pSGDTop, SGDCOORDINATE *pCoord, int iObjectIndex) {
	static char __FUNCTION__[14] = {
		/* [0] = */ 95,
		/* [1] = */ 82,
		/* [2] = */ 101,
		/* [3] = */ 110,
		/* [4] = */ 100,
		/* [5] = */ 101,
		/* [6] = */ 114,
		/* [7] = */ 83,
		/* [8] = */ 104,
		/* [9] = */ 97,
		/* [10] = */ 100,
		/* [11] = */ 111,
		/* [12] = */ 119,
		/* [13] = */ 0
	};
	sceGifPackAd aGPA0[5];
	int iWidth;
	int iHeight;
	sceGifPackAd aGPA1[2];
	
  _sceGifPackAd *p_Var1;
  int iVar2;
  ulong *puVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong *puVar9;
  _sceGifPackAd aGPA0 [5];
  ulong local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  ulong local_70;
  undefined8 local_68;
  _sceGifPackAd aGPA1 [2];
  
                    /* inlined from g3dRenderTarget.h */
                    /* end of inlined section */
                    /* inlined from g3dRenderTarget.h */
                    /* end of inlined section */
                    /* inlined from g3dRenderTarget.h */
                    /* end of inlined section */
                    /* inlined from g3dRenderTarget.h */
  if (((ulong)s_RenderTarget.m_gsTex0 & 0x3f00000) != 0) {
                    /* end of inlined section */
    _SetLineInfo__FPCciT0T0
              ("gra3dShadow.c",0x4cf,"_RenderShadow",
               "GRA3D_SHADOWTEXTURE_FORMAT == s_RenderTarget.GetGsTex0Ref().PSM");
    g3ddbgAssert__FbPCce(((ulong)s_RenderTarget.m_gsTex0 & 0x3f00000) == 0,&DAT_003f13c8);
  }
  iVar2 = _GetCurrentFBP__Fv();
  gra3dSetGsRegister__Flli((long)iVar2 | 0x10a0000,0x4c);
  SetShadowCamera__Fv();
  _ApplyCamera__FPC11GRA3DCAMERAi(&s_Camera,1);
  puVar3 = (ulong *)gra3dGetGsRegisterRef__Fl(0x4e);
  local_a8 = 0x42;
  local_a0 = 0x60;
  local_88 = 8;
  local_80 = 0x30803;
  local_b0 = 0x44;
  local_98 = 0x14;
  local_90 = 0;
  local_78 = 0x47;
  local_68 = 0x4e;
  local_70 = *puVar3 & 0xf000000 | 0x100000000;
  p_Var1 = aGPA0;
  puVar3 = &local_b0;
  do {
    puVar8 = puVar3;
    puVar9 = &p_Var1->DATA;
    uVar5 = puVar8[1];
    uVar6 = puVar8[2];
    uVar7 = puVar8[3];
    *puVar9 = *puVar8;
    puVar9[1] = uVar5;
    puVar9[2] = uVar6;
    puVar9[3] = uVar7;
    puVar3 = puVar8 + 4;
    p_Var1 = (_sceGifPackAd *)(puVar9 + 4);
  } while (puVar3 != &local_70);
  uVar5 = puVar8[5];
  puVar9[4] = *puVar3;
  puVar9[5] = uVar5;
  gra3dSetGsRegisters__FPC13_sceGifPackAdii(aGPA0,5);
  iVar2 = GetWidth__13CRenderTarget(&s_RenderTarget);
  iVar4 = GetHeight__13CRenderTarget(&s_RenderTarget);
  Begin__13CRenderTarget(&s_RenderTarget);
  Clear__13CRenderTarget(&s_RenderTarget);
  aGPA1[1].DATA = (long)(iVar2 + -2) << 0x10 | (long)(iVar4 + -2) << 0x30 | 0x100000001;
  aGPA1[1].ADDR = 0x40;
  aGPA1[0].DATA = 0x3001b;
  aGPA1[0].ADDR = 0x47;
  gra3dSetGsRegisters__FPC13_sceGifPackAdii(aGPA1,2);
  _gra3dDrawSGD__FP13SGDFILEHEADER13SGDRENDERTYPEP13SGDCOORDINATEi
            (pSGDTop,SRT_REALTIME,pCoord,iObjectIndex);
  End__13CRenderTarget(&s_RenderTarget);
  return;
}

static void _DrawShadow(GRA3DCAMERA *pCamera, float ax, float ay) {
	int i;
	size_t i;
	
  SGDFILEHEADER *pSGDTop;
  fixed_array<SGDFILEHEADER_*,40> *pfVar1;
  int iTexWidth;
  int iTexHeight;
  fixed_stack<SGDFILEHEADER_*,40> *pfVar2;
  uint uVar3;
  fixed_stack<SGDFILEHEADER_*,40> *pfVar4;
  int iVar5;
  
  iVar5 = 0;
  _gra3dSetCameraForce__FPC11GRA3DCAMERA(pCamera);
  iTexWidth = GetWidth__13CRenderTarget(&s_RenderTarget);
  iTexHeight = GetHeight__13CRenderTarget(&s_RenderTarget);
  _CalcProjectionShadowMatrix__FPA3_ffffiiPCfPA3_Cf
            (s_matIP,ax,ay,s_fTextureScale,iTexWidth,iTexHeight,s_vDirection,s_avBB);
  SetUpShadow__Fv();
  pfVar4 = &s_stackpProjectModel;
  do {
                    /* inlined from ctl/fixed_stack.h */
    uVar3 = 0;
                    /* inlined from ctl/fixed_array.h */
    pfVar2 = &s_stackpProjectModel;
    do {
      _fixed_array_verifyrange__H1ZP13SGDFILEHEADER_UiUi_PX01(uVar3,0x28);
      pfVar1 = &pfVar2->c;
      pfVar2 = (fixed_stack<SGDFILEHEADER_*,40> *)((pfVar2->c).field0_0x0.m_aData + 1);
      if ((pfVar1->field0_0x0).m_aData[0] == s_stackpProjectModel.null) goto LAB_001bf184;
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x28);
    uVar3 = 0x28;
LAB_001bf184:
                    /* inlined from ctl/fixed_stack.h */
    if ((int)uVar3 <= iVar5) {
      return;
    }
                    /* inlined from ctl/fixed_array.h */
    _fixed_array_verifyrange__H1ZP13SGDFILEHEADER_UiUi_PX01(iVar5,0x28);
                    /* end of inlined section */
    pSGDTop = (pfVar4->c).field0_0x0.m_aData[0];
    if (pSGDTop != s_pSourceModel) {
      _gra3dDrawSGD__FP13SGDFILEHEADER13SGDRENDERTYPEP13SGDCOORDINATEi
                (pSGDTop,SRT_MAPSHADOW,(SGDCOORDINATE *)0x0,-1);
    }
    pfVar4 = (fixed_stack<SGDFILEHEADER_*,40> *)((pfVar4->c).field0_0x0.m_aData + 1);
    iVar5 = iVar5 + 1;
  } while( true );
}

void gra3dshadowInit(GRA3DSHADOWCREATIONDATA *pCD) {
	sceGsTex0 gsTex0;
	RENDERTARGETCREATIONDATA rtCD;
	
  GRA3DSCRATCHPADLAYOUT_MAPSHADOW *pGVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  GRA3DSCRATCHPADLAYOUT_MAPSHADOW *pGVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  sceGsTex0 gsTex0;
  RENDERTARGETCREATIONDATA rtCD;
  
  pGVar1 = &s_gra3dScratchpadLayoutDefault;
  pGVar5 = pCD->pSL;
  s_pScratchpadLayout = pGVar5;
  do {
    uVar6 = *(undefined8 *)pGVar1->qwVif1Code;
    uVar7 = *(undefined8 *)&pGVar1->Vu1Mem;
    uVar8 = *(undefined8 *)&pGVar1->Vu1Mem;
    *(undefined8 *)pGVar5->qwVif1Code = *(undefined8 *)pGVar1->qwVif1Code;
    *(undefined8 *)(pGVar5->qwVif1Code + 2) = uVar6;
    *(undefined8 *)&pGVar5->Vu1Mem = uVar7;
    *(undefined8 *)((int)&pGVar5->Vu1Mem + 8) = uVar8;
    pGVar1 = (GRA3DSCRATCHPADLAYOUT_MAPSHADOW *)&pGVar1->Vu1Mem;
    pGVar5 = (GRA3DSCRATCHPADLAYOUT_MAPSHADOW *)((int)&pGVar5->Vu1Mem + 0x10);
  } while ((GRA3DCAMERA *)pGVar1 != &s_Camera);
  uVar2 = g3dLogi2__Fii(2,0x100);
  uVar3 = g3dLogi2__Fii(2,0x100);
  iVar4 = 1 << (uVar2 & 0xf);
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0x3f;
  }
  s_iMaxTextureWidth = g3dLogi2__Fii(2,0x100);
  s_iMaxTextureHeight = g3dLogi2__Fii(2,0x100);
                    /* inlined from ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from ctl/fixed_array.h */
                    /* end of inlined section */
  s_fTextureScale = DAT_003ee400;
                    /* inlined from ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from ctl/fixed_array.h */
  s_fFundamentScale = 1000.0;
  fill__H2ZPP13SGDFILEHEADERZP13SGDFILEHEADER_X01X01RCX11_v(0x4b3cf0,0x4b3d90,0x4b3d90);
                    /* end of inlined section */
  rtCD._8_8_ = (ulong)DAT_003ee404 << 0x20;
  rtCD.gsTex0 = (sceGsTex0)
                ((long)(int)(uVar2 & 0xf) << 0x1a | 0x3000U | (long)(int)(uVar3 & 0xf) << 0x1e |
                 ((long)(iVar4 >> 6) & 0x3fU) << 0xe | 0x2006000400000000);
  Create__13CRenderTargetPC24RENDERTARGETCREATIONDATA(&s_RenderTarget,&rtCD);
  return;
}

void gra3dshadowAddProjectModel(SGDFILEHEADER *pSGDTop) {
	static char __FUNCTION__[27] = {
		/* [0] = */ 103,
		/* [1] = */ 114,
		/* [2] = */ 97,
		/* [3] = */ 51,
		/* [4] = */ 100,
		/* [5] = */ 115,
		/* [6] = */ 104,
		/* [7] = */ 97,
		/* [8] = */ 100,
		/* [9] = */ 111,
		/* [10] = */ 119,
		/* [11] = */ 65,
		/* [12] = */ 100,
		/* [13] = */ 100,
		/* [14] = */ 80,
		/* [15] = */ 114,
		/* [16] = */ 111,
		/* [17] = */ 106,
		/* [18] = */ 101,
		/* [19] = */ 99,
		/* [20] = */ 116,
		/* [21] = */ 77,
		/* [22] = */ 111,
		/* [23] = */ 100,
		/* [24] = */ 101,
		/* [25] = */ 108,
		/* [26] = */ 0
	};
	size_t i;
	size_t i;
	SGDFILEHEADER *&x;
	size_t i;
	size_t i;
	size_t i;
	
  fixed_array<SGDFILEHEADER_*,40> *pfVar1;
  uint uVar2;
  uint uVar3;
  fixed_stack<SGDFILEHEADER_*,40> *pfVar5;
  uint uVar4;
  
  if (pSGDTop != (SGDFILEHEADER *)0x0) {
                    /* inlined from ctl/fixed_stack.h */
    uVar2 = 0;
                    /* inlined from ctl/fixed_array.h */
    pfVar5 = &s_stackpProjectModel;
    do {
      _fixed_array_verifyrange__H1ZP13SGDFILEHEADER_UiUi_PX01(uVar2,0x28);
      pfVar1 = &pfVar5->c;
      pfVar5 = (fixed_stack<SGDFILEHEADER_*,40> *)((pfVar5->c).field0_0x0.m_aData + 1);
      if ((pfVar1->field0_0x0).m_aData[0] == s_stackpProjectModel.null) goto LAB_001bf4a4;
      uVar2 = uVar2 + 1;
    } while (uVar2 < 0x28);
    uVar2 = 0x28;
LAB_001bf4a4:
                    /* inlined from ctl/fixed_array.h */
                    /* inlined from ctl/fixed_stack.h */
    if (uVar2 == 0x28) {
      uVar2 = 0;
                    /* inlined from ctl/fixed_array.h */
      pfVar5 = &s_stackpProjectModel;
      do {
        _fixed_array_verifyrange__H1ZP13SGDFILEHEADER_UiUi_PX01(uVar2,0x28);
        pfVar1 = &pfVar5->c;
        pfVar5 = (fixed_stack<SGDFILEHEADER_*,40> *)((pfVar5->c).field0_0x0.m_aData + 1);
        if ((pfVar1->field0_0x0).m_aData[0] == s_stackpProjectModel.null) goto LAB_001bf4ec;
        uVar2 = uVar2 + 1;
      } while (uVar2 < 0x28);
      uVar2 = 0x28;
LAB_001bf4ec:
                    /* inlined from ctl/fixed_array.h */
                    /* inlined from ctl/fixed_stack.h */
      if (uVar2 == 0x28) {
        uVar2 = 0;
                    /* end of inlined section */
                    /* end of inlined section */
        _SetLineInfo__FPCciT0T0
                  ("gra3dShadow.c",0x56b,"gra3dshadowAddProjectModel",
                   "(s_stackpProjectModel.size() != s_stackpProjectModel.max_size())");
                    /* inlined from ctl/fixed_array.h */
        pfVar5 = &s_stackpProjectModel;
        do {
          _fixed_array_verifyrange__H1ZP13SGDFILEHEADER_UiUi_PX01(uVar2,0x28);
          pfVar1 = &pfVar5->c;
          pfVar5 = (fixed_stack<SGDFILEHEADER_*,40> *)((pfVar5->c).field0_0x0.m_aData + 1);
          if ((pfVar1->field0_0x0).m_aData[0] == s_stackpProjectModel.null) goto LAB_001bf554;
          uVar2 = uVar2 + 1;
        } while (uVar2 < 0x28);
        uVar2 = 0x28;
LAB_001bf554:
                    /* inlined from ctl/fixed_stack.h */
        g3ddbgWarning__FbPCce(uVar2 != 0x28,"Number of ProjectModel is over");
      }
      g3ddbgPrintf__FPCce("[G3DRETURN]%s(%d)(%s):%s\n");
    }
    else {
                    /* inlined from ctl/fixed_array.h */
      pfVar5 = &s_stackpProjectModel;
                    /* inlined from ctl/fixed_stack.h */
      uVar2 = 0;
                    /* inlined from ctl/fixed_array.h */
      do {
        _fixed_array_verifyrange__H1ZP13SGDFILEHEADER_UiUi_PX01(uVar2,0x28);
        pfVar1 = &pfVar5->c;
        pfVar5 = (fixed_stack<SGDFILEHEADER_*,40> *)((pfVar5->c).field0_0x0.m_aData + 1);
        if ((pfVar1->field0_0x0).m_aData[0] == s_stackpProjectModel.null) goto LAB_001bf604;
        uVar2 = uVar2 + 1;
      } while (uVar2 < 0x28);
      uVar2 = 0x28;
LAB_001bf604:
                    /* inlined from ctl/fixed_stack.h */
      if (uVar2 != 0) {
        pfVar5 = &s_stackpProjectModel;
                    /* inlined from ctl/fixed_array.h */
        uVar4 = 0;
        do {
                    /* inlined from ctl/fixed_stack.h */
          uVar3 = uVar4 + 1;
                    /* inlined from ctl/fixed_array.h */
          _fixed_array_verifyrange__H1ZP13SGDFILEHEADER_UiUi_PX01(uVar4,0x28);
                    /* inlined from ctl/fixed_stack.h */
          pfVar1 = &pfVar5->c;
                    /* inlined from ctl/fixed_array.h */
                    /* inlined from ctl/fixed_array.h */
          pfVar5 = (fixed_stack<SGDFILEHEADER_*,40> *)((pfVar5->c).field0_0x0.m_aData + 1);
          if ((pfVar1->field0_0x0).m_aData[0] == pSGDTop) {
            return;
          }
          uVar4 = uVar3;
                    /* inlined from ctl/fixed_stack.h */
        } while (uVar3 < uVar2);
      }
                    /* inlined from ctl/fixed_array.h */
                    /* inlined from ctl/fixed_stack.h */
      uVar2 = 0;
                    /* inlined from ctl/fixed_array.h */
      pfVar5 = &s_stackpProjectModel;
      do {
        _fixed_array_verifyrange__H1ZP13SGDFILEHEADER_UiUi_PX01(uVar2,0x28);
        pfVar1 = &pfVar5->c;
        pfVar5 = (fixed_stack<SGDFILEHEADER_*,40> *)((pfVar5->c).field0_0x0.m_aData + 1);
        if ((pfVar1->field0_0x0).m_aData[0] == s_stackpProjectModel.null) goto LAB_001bf684;
        uVar2 = uVar2 + 1;
      } while (uVar2 < 0x28);
      uVar2 = 0x28;
LAB_001bf684:
                    /* inlined from ctl/fixed_array.h */
      _fixed_array_verifyrange__H1ZP13SGDFILEHEADER_UiUi_PX01(uVar2,0x28);
      s_stackpProjectModel.c.field0_0x0.m_aData[uVar2] = pSGDTop;
    }
  }
  return;
}

void gra3dshadowSetSourceModel(SGDFILEHEADER *pSM) {
  s_pSourceModel = pSM;
  return;
}

void gra3dshadowSetAssignGroup(int gnum) {
  shadow_apgnum = gnum;
  return;
}

int gra3dshadowGetAssignGroup() {
  return shadow_apgnum;
}

void gra3dshadowClearProjectModel() {
	SGDFILEHEADER *&val;
	
                    /* inlined from ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from ctl/fixed_array.h */
  fill__H2ZPP13SGDFILEHEADERZP13SGDFILEHEADER_X01X01RCX11_v(0x4b3cf0,0x4b3d90,0x4b3d90);
  return;
}

static void _CalcColor() {
	float vWork[4];
	originholder<G3DLIGHT> oh;
	originholder<G3DLIGHT> *this;
	float *pv0;
	float *pv1;
	
  G3DLIGHT *pGVar1;
  G3DLIGHT *pGVar2;
  G3DLIGHT *pGVar3;
  G3DLIGHT *pGVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  undefined extraout_vf1 [16];
  undefined auVar9 [16];
  undefined auVar10 [16];
  float vWork [4];
  originholder<G3DLIGHT> oh;
  
                    /* inlined from ctl/originholder.h */
                    /* end of inlined section */
                    /* inlined from ctl/originholder.h */
                    /* end of inlined section */
                    /* inlined from ctl/originholder.h */
                    /* end of inlined section */
                    /* inlined from ctl/originholder.h */
                    /* end of inlined section */
                    /* inlined from ctl/originholder.h */
  oh.m_pOriginValue = &s_Light;
  pGVar1 = &s_Light;
  pGVar2 = &oh.m_OriginValue;
  do {
    pGVar3 = pGVar2;
    pGVar4 = pGVar1;
    uVar5 = *(undefined8 *)(pGVar4->vDiffuse + 2);
    uVar6 = *(undefined8 *)pGVar4->vSpecular;
    uVar7 = *(undefined8 *)(pGVar4->vSpecular + 2);
    *(undefined8 *)pGVar3->vDiffuse = *(undefined8 *)pGVar4->vDiffuse;
    *(undefined8 *)(pGVar3->vDiffuse + 2) = uVar5;
    *(undefined8 *)pGVar3->vSpecular = uVar6;
    *(undefined8 *)(pGVar3->vSpecular + 2) = uVar7;
    pGVar1 = (G3DLIGHT *)pGVar4->vAmbient;
    pGVar2 = (G3DLIGHT *)pGVar3->vAmbient;
  } while (pGVar4->vAmbient != &s_Light.fMinRange);
  uVar5 = *(undefined8 *)(pGVar4->vAmbient + 2);
  *(undefined8 *)pGVar3->vAmbient = s_Light._96_8_;
  *(undefined8 *)(pGVar3->vAmbient + 2) = uVar5;
                    /* end of inlined section */
  if (s_Light.Type == G3DLIGHT_SPOT) {
    s_Light.fAngleOutside = s_Light.fAngleOutside + s_Light.fAngleOutside;
    s_Light.fAngleInside = s_Light.fAngleInside * 0.5;
  }
                    /* inlined from ../../graphics/graph3d/g3dxVu0.h */
  fVar8 = g3dCalcLightAttenuation__FPC8G3DLIGHTPCf(&s_Light,(float *)s_avBB[8]);
  auVar10 = _qmtc2(fVar8);
  auVar9 = _lqc2((undefined  [16])s_Light.vDiffuse);
  auVar9 = _vmulbc(auVar9,auVar10);
  auVar9 = _sqc2(auVar9);
  auVar9 = _lqc2(auVar9);
  auVar9 = _vmul(auVar9,auVar9);
  _vaddabc(auVar9,auVar9);
  _vmaddbc(extraout_vf1,auVar9);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

static void _CalcDirection() {
	static char __FUNCTION__[15] = {
		/* [0] = */ 95,
		/* [1] = */ 67,
		/* [2] = */ 97,
		/* [3] = */ 108,
		/* [4] = */ 99,
		/* [5] = */ 68,
		/* [6] = */ 105,
		/* [7] = */ 114,
		/* [8] = */ 101,
		/* [9] = */ 99,
		/* [10] = */ 116,
		/* [11] = */ 105,
		/* [12] = */ 111,
		/* [13] = */ 110,
		/* [14] = */ 0
	};
	float *pv0;
	float *pv1;
	float *pvRet;
	float *pvEnd;
	float *pvStart;
	float *pv0;
	float *pv1;
	
  float afVar1 [4];
  undefined in_vf0 [16];
  undefined in_vf1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined4 uVar4;
  
  if (s_Light.Type == G3DLIGHT_POINT) {
                    /* end of inlined section */
    _SetLineInfo__FPCciT0T0("gra3dShadow.c",0x5c6,"_CalcDirection",&DAT_003f13d0);
    g3ddbgAssert__FbPCce(false,&DAT_003f13c8);
    return;
  }
  if ((int)s_Light.Type < 2) {
    if (s_Light.Type == G3DLIGHT_DIRECTIONAL) {
      s_vDirection[2] = s_Light.vDirection[2];
      s_vDirection._0_8_ = s_Light.vDirection._0_8_;
                    /* inlined from ../../graphics/graph3d/g3dxVu0.h */
      s_vDirection[3] = s_Light.vDirection[3];
      return;
    }
  }
  else {
    if (s_Light.Type == G3DLIGHT_SPOT) {
                    /* inlined from ../../graphics/graph3d/g3dxVu0.h */
      auVar2 = _lqc2((undefined  [16])s_Light.vPosition);
      auVar3 = _lqc2((undefined  [16])s_avBB[8]);
      auVar2 = _vsub(auVar2,auVar3);
      auVar3 = _vmul(auVar2,auVar2);
      _vaddabc(auVar3,auVar3);
      auVar3 = _vmaddbc(in_vf1,auVar3);
      _vnop();
      _vnop();
      _vnop();
      _vrsqrt(in_vf0,auVar3);
      _vmul(auVar2,in_vf0);
      uVar4 = _vwaitq();
      auVar2 = _vmulq(auVar2,uVar4);
      afVar1 = (float  [4])_sqc2(auVar2);
      s_vDirection[0] = afVar1[0];
      s_vDirection[1] = afVar1[1];
      s_vDirection[2] = afVar1[2];
      s_vDirection[3] = afVar1[3];
      return;
    }
    if (s_Light.Type == G3DLIGHTTYPE_FORCE_DWORD) {
      s_vDirection[2] = g_v0000[2];
      s_vDirection._0_8_ = g_v0000._0_8_;
      s_vDirection[3] = g_v0000[3];
      return;
    }
  }
                    /* end of inlined section */
  _SetLineInfo__FPCciT0T0("gra3dShadow.c",0x5cf,"_CalcDirection",&DAT_003f13d0);
  g3ddbgAssert__FbPCce(false,&DAT_003f13c8);
  return;
}

void gra3dshadowSetBoundingBox(float *avBB[4], float *mat[4]) {
  gra3dbbApplyMatrix__FPA3_fPA3_CfT1(s_avBB,avBB,mat);
  _CalcTarget__FPfPA3_Cf((float *)s_avBB[8],s_avBB);
  _CalcDirection__Fv();
  _CalcColor__Fv();
  return;
}

void gra3dshadowSetLight(G3DLIGHT *pLight) {
	static char __FUNCTION__[20] = {
		/* [0] = */ 103,
		/* [1] = */ 114,
		/* [2] = */ 97,
		/* [3] = */ 51,
		/* [4] = */ 100,
		/* [5] = */ 115,
		/* [6] = */ 104,
		/* [7] = */ 97,
		/* [8] = */ 100,
		/* [9] = */ 111,
		/* [10] = */ 119,
		/* [11] = */ 83,
		/* [12] = */ 101,
		/* [13] = */ 116,
		/* [14] = */ 76,
		/* [15] = */ 105,
		/* [16] = */ 103,
		/* [17] = */ 104,
		/* [18] = */ 116,
		/* [19] = */ 0
	};
	float *pv;
	float fAllowableError;
	
  G3DLIGHT *pGVar1;
  G3DLIGHT *pGVar2;
  G3DLIGHT *pGVar3;
  G3DLIGHT *pGVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined in_vf1 [16];
  undefined auVar8 [16];
  
  pGVar4 = pLight;
  pGVar1 = &s_Light;
  do {
    pGVar2 = pGVar1;
    pGVar3 = pGVar4;
    uVar5 = *(undefined8 *)(pGVar3->vDiffuse + 2);
    uVar6 = *(undefined8 *)pGVar3->vSpecular;
    uVar7 = *(undefined8 *)(pGVar3->vSpecular + 2);
    *(undefined8 *)pGVar2->vDiffuse = *(undefined8 *)pGVar3->vDiffuse;
    *(undefined8 *)(pGVar2->vDiffuse + 2) = uVar5;
    *(undefined8 *)pGVar2->vSpecular = uVar6;
    *(undefined8 *)(pGVar2->vSpecular + 2) = uVar7;
    pGVar4 = (G3DLIGHT *)pGVar3->vAmbient;
    pGVar1 = (G3DLIGHT *)pGVar2->vAmbient;
  } while (pGVar4 != (G3DLIGHT *)&pLight->fMinRange);
                    /* end of inlined section */
  uVar5 = *(undefined8 *)(pGVar3->vAmbient + 2);
  *(undefined8 *)pGVar2->vAmbient = *(undefined8 *)pGVar4;
                    /* inlined from ../../graphics/graph3d/g3dxVu0.h */
                    /* end of inlined section */
  *(undefined8 *)(pGVar2->vAmbient + 2) = uVar5;
                    /* inlined from ../../graphics/graph3d/g3dxVu0.h */
  auVar8 = _lqc2((undefined  [16])s_Light.vDirection);
  auVar8 = _vmul(auVar8,auVar8);
  _vaddabc(auVar8,auVar8);
  _vmaddbc(in_vf1,auVar8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

float&[4] gra3dshadowGetTarget() {
  return s_avBB[8];
}

void gra3dshadowDrawSGD(SGDFILEHEADER *pSGDTop, SGDCOORDINATE *pCoord, int iObjectIndex) {
	static char __FUNCTION__[19] = {
		/* [0] = */ 103,
		/* [1] = */ 114,
		/* [2] = */ 97,
		/* [3] = */ 51,
		/* [4] = */ 100,
		/* [5] = */ 115,
		/* [6] = */ 104,
		/* [7] = */ 97,
		/* [8] = */ 100,
		/* [9] = */ 111,
		/* [10] = */ 119,
		/* [11] = */ 68,
		/* [12] = */ 114,
		/* [13] = */ 97,
		/* [14] = */ 119,
		/* [15] = */ 83,
		/* [16] = */ 71,
		/* [17] = */ 68,
		/* [18] = */ 0
	};
	GRA3DCAMERA camOrigin;
	float vvv[4];
	
  GRA3DCAMERA *pGVar1;
  SGDCOORDINATE *pSVar2;
  int iVar3;
  GRA3DCAMERA *pGVar4;
  GRA3DCAMERA *pGVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined in_vf0 [16];
  undefined extraout_vf1 [16];
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined4 uVar11;
  GRA3DCAMERA camOrigin;
  float vvv [4];
  
  pGVar4 = &camOrigin;
  pGVar1 = gra3dGetCamera__Fv();
  pGVar5 = pGVar1 + 1;
  do {
    uVar6 = *(undefined8 *)&pGVar1->fFarZ;
    uVar7 = *(undefined8 *)&pGVar1->fAspectY;
    uVar8 = *(undefined8 *)&pGVar1->fCenterY;
    *(undefined8 *)pGVar4 = *(undefined8 *)pGVar1;
    *(undefined8 *)((int)pGVar4 + 8) = uVar6;
    *(undefined8 *)((int)pGVar4 + 0x10) = uVar7;
    *(undefined8 *)((int)pGVar4 + 0x18) = uVar8;
    pGVar1 = (GRA3DCAMERA *)&pGVar1->fZmax;
    pGVar4 = (GRA3DCAMERA *)((int)pGVar4 + 0x20);
  } while (pGVar1 != pGVar5);
  if (g_gra3dShadowDebug.bDrawLightDir != 0) {
    gra3dSetGsRegisterDefault__Fv();
                    /* inlined from ../../graphics/graph3d/g3dxVu0.h */
    auVar9 = _lqc2((undefined  [16])s_vDirection);
    auVar10 = _vmul(auVar9,auVar9);
    _vaddabc(auVar10,auVar10);
    auVar10 = _vmaddbc(extraout_vf1,auVar10);
    _vrsqrt(in_vf0,auVar10);
    _vmul(auVar9,in_vf0);
    prefetch(0x4b3eb0,0);
    uVar11 = _vwaitq();
    auVar10 = _vmulq(auVar9,uVar11);
    auVar9 = _qmtc2(0x447a0000);
    auVar9 = _vmulbc(auVar10,auVar9);
    auVar10 = _lqc2((undefined  [16])s_avBB[8]);
    auVar9 = _vadd(auVar10,auVar9);
    vvv = (float  [4])_sqc2(auVar9);
                    /* end of inlined section */
    gra3ddbgDrawLine__FPCfT0Ui((float *)s_avBB[8],vvv,0xffffffff);
  }
  if (g_gra3dShadowDebug.bDrawShadowModelBB != 0) {
    gra3ddbgDrawBB__FPA3_CfUi(s_avBB,0xffff00ff);
  }
  if (pSGDTop == (SGDFILEHEADER *)0x0) {
    _SetLineInfo__FPCciT0T0("gra3dShadow.c",0x623,"gra3dshadowDrawSGD",s_pSGDTop_003f13d8);
    g3ddbgAssert__FbPCce(false,&DAT_003f13c8);
    pSVar2 = _o_cu;
  }
  else {
    pSVar2 = pSGDTop->pCoord;
  }
  if (pSVar2 == (SGDCOORDINATE *)0x0) {
    _SetLineInfo__FPCciT0T0("gra3dShadow.c",0x624,"gra3dshadowDrawSGD","pSGDTop->pCoord");
    g3ddbgAssert__FbPCce(pSGDTop->pCoord != (SGDCOORDINATE *)0x0,&DAT_003b8408);
  }
  iVar3 = _IsDraw__Fv();
  if (iVar3 != 0) {
    _RenderShadow__FP13SGDFILEHEADERP13SGDCOORDINATEi(pSGDTop,pCoord,iObjectIndex);
    _DrawShadow__FPC11GRA3DCAMERAff(&camOrigin,-s_Camera.fAspectX,-s_Camera.fAspectY);
    gra3dSetGsRegister__Flli(0,8);
  }
  return;
}

void DispShadowSprite() {
	qword *base;
	sceVu0IVECTOR urp;
	sceVu0IVECTOR dlp;
	
  int (*paiVar1) [4];
  int urp [4];
  int dlp [4];
  
  paiVar1 = dmaVif1GetPacketFLUSH_DIRECT__Fv();
  *(undefined8 *)*paiVar1 = 0x3003400000008001;
  *(undefined8 *)(*paiVar1 + 2) = 0x441;
  paiVar1[1][0] = 0;
  paiVar1[1][1] = 0x40;
  paiVar1[1][2] = 0;
  paiVar1[1][3] = 0x80;
                    /* inlined from g3dRenderTarget.h */
                    /* end of inlined section */
  paiVar1[2][0] = 0x7ff0;
  paiVar1[2][1] = 0x7970;
  paiVar1[2][3] = 0;
  paiVar1[2][2] = 240000;
  paiVar1[3][0] = 0x8810;
  paiVar1[3][1] = 0x7d90;
  paiVar1[3][3] = 0;
  paiVar1[3][2] = 240000;
  *(undefined8 *)paiVar1[4] = 0x702b400000008001;
  *(undefined8 *)(paiVar1[4] + 2) = 0x4124126;
                    /* inlined from g3dRenderTarget.h */
  *(sceGsTex0 *)paiVar1[5] = s_RenderTarget.m_gsTex0;
                    /* end of inlined section */
  paiVar1[6][0] = 0;
                    /* inlined from ../../graphics/graph3d/g3dxVu0.h */
                    /* end of inlined section */
  paiVar1[6][1] = 0;
  paiVar1[6][2] = 0x3f800000;
  paiVar1[6][3] = 0;
  paiVar1[7][0] = 0x80;
  paiVar1[7][1] = 0x80;
  paiVar1[7][2] = 0x80;
  paiVar1[7][3] = 0x80;
                    /* inlined from ../../graphics/graph3d/g3dxVu0.h */
  paiVar1[8][0] = 0x8000;
  paiVar1[8][1] = 0x7980;
  paiVar1[8][2] = 240000;
  paiVar1[8][3] = 0;
                    /* end of inlined section */
                    /* inlined from ../../graphics/graph3d/g3dxVu0.h */
                    /* end of inlined section */
  paiVar1[9][2] = 0x3f800000;
                    /* inlined from ../../graphics/graph3d/g3dxVu0.h */
                    /* end of inlined section */
  paiVar1[10][3] = 0x80;
  paiVar1[9][0] = 0x3f800000;
  paiVar1[9][1] = 0x3f800000;
  paiVar1[9][3] = 0;
  paiVar1[10][0] = 0x80;
  paiVar1[10][1] = 0x80;
  paiVar1[10][2] = 0x80;
                    /* inlined from ../../graphics/graph3d/g3dxVu0.h */
  paiVar1[0xb][0] = 0x8800;
  paiVar1[0xb][1] = 0x7d80;
  paiVar1[0xb][2] = 240000;
  paiVar1[0xb][3] = 0;
                    /* end of inlined section */
  dmaVif1SetPacketFLUSH_DIRECT__FPA3_i(paiVar1[0xc]);
  return;
}

float* float * min_element<float *>(float *__first, float *__last) {
	float *__result;
	
  g3ddbgAssert__FbPCce(false,str_595);
  return (type_info *)__first;
}

SGDFILEHEADER** SGDFILEHEADER * * _fixed_array_verifyrange<SGDFILEHEADER *>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_595);
  return (type_info *)__first;
}

void void fill<SGDFILEHEADER **, SGDFILEHEADER *>(SGDFILEHEADER **__first, SGDFILEHEADER **__last, SGDFILEHEADER *&__value) {
  g3ddbgAssert__FbPCce(false,str_595);
  return (type_info *)__first;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
	SGDFILEHEADER *&val;
	
  if (__priority == 0xffff) {
    if (__initialize_p == 1) {
      __tf14IG3DCompatible((CAutoTransform<G3DTS_VIEW> *)&s_RenderTarget);
                    /* inlined from ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from ctl/fixed_stack.h */
      s_stackpProjectModel.null = (SGDFILEHEADER *)0x0;
                    /* inlined from ctl/fixed_array.h */
      fill__H2ZPP13SGDFILEHEADERZP13SGDFILEHEADER_X01X01RCX11_v(0x4b3cf0,0x4b3d90,0x4b3d90);
    }
                    /* end of inlined section */
    if (__initialize_p == 0) {
      ___13CRenderTarget(&s_RenderTarget,2);
    }
  }
  return;
}

type_info& SGDFILEHEADER * type_info function() {
  g3ddbgAssert__FbPCce(false,str_595);
  return (type_info *)__first;
}

type_info& SGDFILEHEADER type_info function() {
  g3ddbgAssert__FbPCce(false,str_595);
  return (type_info *)__first;
}

static void global constructors keyed to g_gra3dShadowDebug() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}

static void global destructors keyed to g_gra3dShadowDebug() {
  __static_initialization_and_destruction_0(0,0xffff);
  return;
}
