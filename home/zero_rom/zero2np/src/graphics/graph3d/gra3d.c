// STATUS: NOT STARTED

#include "gra3d.h"

struct G3DLIGHTMANAGE {
	fixed_array<GRA3DLIGHTSTATUS,39> aStatus;
};

struct iterator_traits<G3D_EMULATE_DIRECTIONALLIGHT_DATA *> {
};

struct _GT {
	long int l0_46 : 47;
	long int l47_51 : 5;
	long int lFogEnable : 1;
	long int l53_63 : 11;
	long int l64_127;
};

struct SETREGISTERPAIR {
	long int lAddress;
	LPFUNC_SETREGISTER_WITHCONTEXT pFuncWithContext;
	LPFUNC_SETREGISTER pFunc;
};

struct GETREGISTERPAIR {
	long int lAddress;
	LPFUNC_GETREGISTER_WITHCONTEXT pFuncWithContext;
	LPFUNC_GETREGISTER pFunc;
};

struct ___ {
	GRA3DSCRATCHPADLAYOUT gra3dSL;
	GRA3DSCRATCHPADLAYOUT_MAPSHADOW gra3dshadowSL;
	G3DCREATIONDATA g3dSL;
};

struct __type_traits<G3D_EMULATE_DIRECTIONALLIGHT_DATA> {
};

struct __copy_backward_dispatch<G3D_EMULATE_DIRECTIONALLIGHT_DATA *,G3D_EMULATE_DIRECTIONALLIGHT_DATA *,__false_type> {
	__copy_backward_dispatch<G3D_EMULATE_DIRECTIONALLIGHT_DATA *,G3D_EMULATE_DIRECTIONALLIGHT_DATA *,__false_type>& operator=();
	__copy_backward_dispatch();
	__copy_backward_dispatch();
	static G3D_EMULATE_DIRECTIONALLIGHT_DATA* copy(/* parameters unknown */);
};

CVu0Matrix g_Vu0Matrix = {
};

static int s_bEnableMonotoneDraw = 0;
static int s_bUseScratchpad = 1;

static GRA3DSCRATCHPADLAYOUT s_gra3dScratchpadLayoutDefault = {
	/* .qwVif1Code0 = */ {
		/* [0] = */ 0,
		/* [1] = */ 285212672,
		/* [2] = */ 16778244,
		/* [3] = */ -17891328
	},
	/* .Vu1Mem = */ {
		/* .Direct = */ {
			/* ._vVF1 = */ {
				/* [0] = */ 1.f,
				/* [1] = */ 1.f,
				/* [2] = */ 1.f,
				/* [3] = */ -1.f
			},
			/* ._vVF2 = */ {
				/* [0] = */ 1.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* .DBAddress = */ {
				/* .uiContext0 = */ 96,
				/* .uiContext1 = */ 560,
				/* .auiPad = */ {
					/* [0] = */ 0,
					/* [1] = */ 0
				}
			},
			/* .gtTRISTRIP_NOTEXTURE = */ CCC_TYPE_LOOKUP_FAILED,
			/* .gtTRISTRIP_TEXTURE = */ CCC_TYPE_LOOKUP_FAILED,
			/* .gtEOP = */ {
				/* .gtEOP = */ CCC_TYPE_LOOKUP_FAILED,
				/* .lightnum = */ {
					/* .iPad0 = */ 32768,
					/* .iNumSpotGroup = */ 0,
					/* .iNumPointGroup = */ 0,
					/* .iPad1 = */ 0
				}
			},
			/* .gtTRIFAN_NOTEXTURE = */ CCC_TYPE_LOOKUP_FAILED,
			/* .gtTRIFAN_TEXTURE = */ CCC_TYPE_LOOKUP_FAILED,
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
			/* .matWorldClip = */ {
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
			/* .matLocalWorld = */ {
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
			/* .matLocalWorldNoNormalized = */ {
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
			/* .Fog = */ {
				/* .fMin = */ 0.f,
				/* .fMax = */ 0.f,
				/* .FA = */ 0.f,
				/* .FB = */ 0.f
			},
			/* .lmatDiffuse_Directional = */ {
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
				}
			},
			/* .lmatSpecular_Directional = */ {
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
				}
			},
			/* .vPosition_Spot0 = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* .vPosition_Spot1 = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* .vPosition_Spot2 = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* .vIntension_Spot = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* .vIntensionB_Spot = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* .lmatDiffuse_Spot = */ {
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
				}
			},
			/* .lmatSpecular_Spot = */ {
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
				}
			},
			/* .vPosition_Point0 = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* .vPosition_Point1 = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* .vPosition_Point2 = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* ._vEyeDirection_Point = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* .vAmbient_Directional = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* .lmatDiffuse_Directional_Material = */ {
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
				}
			},
			/* .lmatSpecular_Directional_Material = */ {
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
				}
			},
			/* .vBTimes_Spot = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* .lmatDiffuse_Spot_Material = */ {
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
				}
			},
			/* .lmatSpecular_Spot_Material = */ {
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
				}
			},
			/* .vBTimes_Point = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* .lmatDiffuse_Point_Material = */ {
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
				}
			},
			/* .lmatSpecular_Point_Material = */ {
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
				}
			}
		},
		/* .Packed = */ {
			/* .Const = */ {
				/* ._vVF1 = */ {
					/* [0] = */ 1.f,
					/* [1] = */ 1.f,
					/* [2] = */ 1.f,
					/* [3] = */ -1.f
				},
				/* ._vVF2 = */ {
					/* [0] = */ 1.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* .DBAddress = */ {
					/* .uiContext0 = */ 96,
					/* .uiContext1 = */ 560,
					/* .auiPad = */ {
						/* [0] = */ 0,
						/* [1] = */ 0
					}
				},
				/* .gtTRISTRIP_NOTEXTURE = */ CCC_TYPE_LOOKUP_FAILED,
				/* .gtTRISTRIP_TEXTURE = */ CCC_TYPE_LOOKUP_FAILED,
				/* .gtEOP = */ {
					/* .gtEOP = */ CCC_TYPE_LOOKUP_FAILED,
					/* .lightnum = */ {
						/* .iPad0 = */ 32768,
						/* .iNumSpotGroup = */ 0,
						/* .iNumPointGroup = */ 0,
						/* .iPad1 = */ 0
					}
				},
				/* .gtTRIFAN_NOTEXTURE = */ CCC_TYPE_LOOKUP_FAILED,
				/* .gtTRIFAN_TEXTURE = */ CCC_TYPE_LOOKUP_FAILED
			},
			/* .Transform = */ {
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
				/* .matWorldClip = */ {
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
				/* .matLocalWorld = */ {
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
				/* .matLocalWorldNoNormalized = */ {
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
			},
			/* .Fog = */ {
				/* .fMin = */ 0.f,
				/* .fMax = */ 0.f,
				/* .FA = */ 0.f,
				/* .FB = */ 0.f
			},
			/* .Light = */ {
				/* .dir = */ {
					/* .lmDiffuse = */ {
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
						}
					},
					/* .lmSpecular = */ {
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
						}
					}
				},
				/* .spot = */ {
					/* .lmPosition = */ {
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
						}
					},
					/* .vIntens = */ {
						/* [0] = */ 0.f,
						/* [1] = */ 0.f,
						/* [2] = */ 0.f,
						/* [3] = */ 0.f
					},
					/* .vIntensB = */ {
						/* [0] = */ 0.f,
						/* [1] = */ 0.f,
						/* [2] = */ 0.f,
						/* [3] = */ 0.f
					},
					/* .lmDirection = */ {
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
						}
					},
					/* .lmSpecular = */ {
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
						}
					}
				},
				/* .point = */ {
					/* .lmPosition = */ {
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
						}
					},
					/* ._vDirectionInverse = */ {
						/* [0] = */ 0.f,
						/* [1] = */ 0.f,
						/* [2] = */ 0.f,
						/* [3] = */ 0.f
					}
				}
			},
			/* .Material = */ {
				/* .dir = */ {
					/* .vAmbient = */ {
						/* [0] = */ 0.f,
						/* [1] = */ 0.f,
						/* [2] = */ 0.f,
						/* [3] = */ 0.f
					},
					/* .lmDiffuse = */ {
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
						}
					},
					/* .lmSpecular = */ {
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
						}
					}
				},
				/* .spot = */ {
					/* .vPower = */ {
						/* [0] = */ 0.f,
						/* [1] = */ 0.f,
						/* [2] = */ 0.f,
						/* [3] = */ 0.f
					},
					/* .lmDiffuse = */ {
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
						}
					},
					/* .lmSpecular = */ {
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
						}
					}
				},
				/* .point = */ {
					/* .vPower = */ {
						/* [0] = */ 0.f,
						/* [1] = */ 0.f,
						/* [2] = */ 0.f,
						/* [3] = */ 0.f
					},
					/* .lmDiffuse = */ {
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
						}
					},
					/* .lmSpecular = */ {
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
						}
					}
				}
			}
		}
	}
};

static GRA3DSCRATCHPADLAYOUT *s_pScratchpadLayout = NULL;

Rep basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> >::nilRep = {
	/* .len = */ 0,
	/* .res = */ 0,
	/* .ref = */ 1,
	/* .selfish = */ false
};

size_t basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> >::npos = 65535;
static G3DLIGHTMANAGE s_LightManage;
static G3DLIGHTMANAGE s_WorkLightManage;
unsigned char GRA3DLIGHTSTATUS type_info node[8];
unsigned char G3DLIGHT type_info node[8];
static GRA3DCAMERA s_Camera;
static G3DFOG s_Fog;
static sceVu0IVECTOR s_ivFogColor;
static float clip_value[4];
static G3DLIGHT s_aLight[39];
static G3DLIGHT s_WorkaLight[39];
static float s_lmDiffuseLight[3][4];
static float s_lmSpecularLight[3][4];
static float s_lmDiffuseColor[3][4];
static float s_lmSpecularColor[3][4];
static unsigned int s_uiMaterialPrimType;
static SGDMATERIALCACHE s_aMaterialCache[3];
static GRA3DVU1MATERIALCACHE_POINT s_aVu1MaterialCache_Point[1];
static GRA3DVU1MATERIALCACHE_SPOT s_aVu1MaterialCache_Spot[1];
static GRA3DVU1MATERIALPACKET_DIRECTIONAL s_MaterialPacketDirectional;
static GRA3DVU1MATERIALPACKET_POINT s_MaterialPacketPoint;
static GRA3DVU1MATERIALPACKET_SPOT s_MaterialPacketSpot;
static int s_bFogEnable;

static float clip_volume[4] = {
	/* [0] = */ 1920.f,
	/* [1] = */ 1792.f,
	/* [2] = */ 256.f,
	/* [3] = */ 1.6777e+07f
};

static float clip_volumev[4] = {
	/* [0] = */ 320.f,
	/* [1] = */ 224.f,
	/* [2] = */ 0.099999994f,
	/* [3] = */ 1.6777e+07f
};

static G3DVIF1CMDDATA s_aVif1CmdData[6] = {
	/* [0] = */ {
		/* .uiCmd = */ 96,
		/* .auiSubPacket = */ {
			/* [0] = */ 0,
			/* [1] = */ 0,
			/* [2] = */ 0,
			/* [3] = */ 0
		}
	},
	/* [1] = */ {
		/* .uiCmd = */ 464,
		/* .auiSubPacket = */ {
			/* [0] = */ 0,
			/* [1] = */ 0,
			/* [2] = */ 0,
			/* [3] = */ 0
		}
	},
	/* [2] = */ {
		/* .uiCmd = */ 1028,
		/* .auiSubPacket = */ {
			/* [0] = */ 0,
			/* [1] = */ 0,
			/* [2] = */ 0,
			/* [3] = */ 0
		}
	},
	/* [3] = */ {
		/* .uiCmd = */ 0,
		/* .auiSubPacket = */ {
			/* [0] = */ 0,
			/* [1] = */ 0,
			/* [2] = */ 0,
			/* [3] = */ 0
		}
	},
	/* [4] = */ {
		/* .uiCmd = */ 0,
		/* .auiSubPacket = */ {
			/* [0] = */ 0,
			/* [1] = */ 0,
			/* [2] = */ 0,
			/* [3] = */ 0
		}
	},
	/* [5] = */ {
		/* .uiCmd = */ 0,
		/* .auiSubPacket = */ {
			/* [0] = */ 0,
			/* [1] = */ 0,
			/* [2] = */ 0,
			/* [3] = */ 0
		}
	}
};

static int s_bLightEnableList[39];

static LPFUNC_VIEWSCREENMATRIX s_apViewScreenMatrixFunc[2] = {
	/* [0] = */ g3dCalcViewScreenMatrixPerspective,
	/* [1] = */ g3dCalcViewScreenMatrixOrtho
};

static LPFUNC_VIEWCLIPMATRIX s_apViewClipMatrixFunc[2] = {
	/* [0] = */ g3dCalcViewClipMatrixPerspective,
	/* [1] = */ g3dCalcViewClipMatrixOrtho
};

static G3DINTFLOAT s_if_1_255 = {
	/* .i = */ 998277249,
	/* .f = */ 0.00392156886f
};

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3b4310;
	
  G3D_EMULATE_DIRECTIONALLIGHT_DATA __value;
  G3D_EMULATE_DIRECTIONALLIGHT_DATA __val;
  G3D_EMULATE_DIRECTIONALLIGHT_DATA *__a;
  G3D_EMULATE_DIRECTIONALLIGHT_DATA __tmp;
  
  g3ddbgAssert__FbPCce(false,str_906);
  return (type_info *)__first;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf8G3DLIGHT((G3D_EMULATE_DIRECTIONALLIGHT_DATA *)s_void__003f1070,
                  (G3D_EMULATE_DIRECTIONALLIGHT_DATA *)_max,SUB41(v,0));
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf8G3DLIGHT((G3D_EMULATE_DIRECTIONALLIGHT_DATA *)s_char__003f1078,
                  (G3D_EMULATE_DIRECTIONALLIGHT_DATA *)_max,SUB41(v,0));
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf8G3DLIGHT((G3D_EMULATE_DIRECTIONALLIGHT_DATA *)"unsigned int*",
                  (G3D_EMULATE_DIRECTIONALLIGHT_DATA *)_max,SUB41(v,0));
  }
  return (uint **)0x0;
}

static void _MakeColorToMonotone(float *v) {
	float fAverage;
	
  undefined in_vf1 [16];
  undefined auVar1 [16];
  float fAverage;
  
  if (s_bEnableMonotoneDraw != 0) {
                    /* inlined from g3dxVu0.h */
    auVar1 = _lqc2(*(undefined (*) [16])v);
    _vaddabc(auVar1,auVar1);
    auVar1 = _vmaddbc(in_vf1,auVar1);
    auVar1 = _qmfc2(auVar1._0_4_);
    fAverage = auVar1._0_4_ / 3.0;
    fill__H2ZPfZf_X01X01RCX11_v(v,v + 3,&fAverage);
  }
                    /* end of inlined section */
  return;
}

static void _MakeColorToMonotone(int *v) {
  int iVar1;
  
  if (s_bEnableMonotoneDraw != 0) {
    iVar1 = (*v + v[1] + v[2]) / 3;
    v[2] = iVar1;
    *v = iVar1;
    v[1] = iVar1;
  }
  return;
}

static void _InitLight() {
	int i;
	int i;
	int i;
	
  bool bVar1;
  G3DLIGHTTYPE GVar2;
  int iVar4;
  int iVar5;
  uint uVar6;
  G3DLIGHTMANAGE *pGVar7;
  G3DLIGHT *pLight;
  G3DLIGHTTYPE GVar3;
  
  GVar3 = G3DLIGHT_DIRECTIONAL;
  do {
    GVar2 = GVar3 + G3DLIGHT_POINT;
    gra3dEnableLightType__F12G3DLIGHTTYPEi(GVar3,0);
    GVar3 = GVar2;
  } while ((int)GVar2 < 3);
  pGVar7 = &s_LightManage;
  iVar4 = 0;
  do {
                    /* inlined from ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z16GRA3DLIGHTSTATUS_UiUi_PX01(iVar4,0x27);
    (((fixed_array<GRA3DLIGHTSTATUS,39> *)&((GRA3DLIGHTSTATUS *)pGVar7)->bEnable)->field0_0x0).
    m_aData[0].bEnable = 0;
    _fixed_array_verifyrange__H1Z16GRA3DLIGHTSTATUS_UiUi_PX01(iVar4,0x27);
    ((GRA3DLIGHTSTATUS *)pGVar7)->bEnableToChar = 0;
    _fixed_array_verifyrange__H1Z16GRA3DLIGHTSTATUS_UiUi_PX01(iVar4,0x27);
    ((GRA3DLIGHTSTATUS *)pGVar7)->bEnableToShadow = 0;
                    /* end of inlined section */
    iVar5 = iVar4 + 1;
                    /* inlined from ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z16GRA3DLIGHTSTATUS_UiUi_PX01(iVar4,0x27);
    ((GRA3DLIGHTSTATUS *)pGVar7)->bEmulateToDirectionalLight = 0;
                    /* end of inlined section */
    pGVar7 = (G3DLIGHTMANAGE *)((int)pGVar7 + 0x10);
    iVar4 = iVar5;
  } while (iVar5 < 0x27);
  uVar6 = 0;
                    /* inlined from gra3dTypes.h */
  bVar1 = true;
  pLight = s_aLight;
  while( true ) {
    GVar3 = G3DLIGHT_DIRECTIONAL;
    if (((!bVar1) && (GVar3 = G3DLIGHT_POINT, 0x12 < uVar6 - 3)) &&
       (GVar3 = G3DLIGHT_SPOT, 0x10 < uVar6 - 0x16)) {
      GVar3 = G3DLIGHTTYPE_FORCE_DWORD;
    }
                    /* end of inlined section */
                    /* inlined from gra3dTypes.h */
    uVar6 = uVar6 + 1;
    g3dutilSetLightDefault__FP8G3DLIGHT12G3DLIGHTTYPE(pLight,GVar3);
                    /* end of inlined section */
    if (0x26 < (int)uVar6) break;
    bVar1 = uVar6 < 3;
    pLight = pLight + 1;
  }
  return;
}

static void _InitFog() {
  s_Fog.fFar = DAT_003ee3a8;
  s_Fog.fMin = 0.0;
  s_Fog.fMax = 0.0;
  s_Fog.fNear = 0.0;
  gra3dEnableFog__Fi(1);
  return;
}

static void _InitCamera() {
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  GRA3DCAMERA *pGVar8;
  GRA3DCAMERA *pGVar9;
  
  pGVar8 = &g_CameraDefault;
  pGVar9 = &s_Camera;
  do {
    fVar1 = pGVar8->fNearZ;
    fVar2 = pGVar8->fFarZ;
    fVar3 = pGVar8->fAspectX;
    fVar4 = pGVar8->fAspectY;
    fVar5 = pGVar8->fCenterX;
    fVar6 = pGVar8->fCenterY;
    fVar7 = pGVar8->fZmin;
    pGVar9->fFov = pGVar8->fFov;
    pGVar9->fNearZ = fVar1;
    pGVar9->fFarZ = fVar2;
    pGVar9->fAspectX = fVar3;
    pGVar9->fAspectY = fVar4;
    pGVar9->fCenterX = fVar5;
    pGVar9->fCenterY = fVar6;
    pGVar9->fZmin = fVar7;
    pGVar8 = (GRA3DCAMERA *)&pGVar8->fZmax;
    pGVar9 = (GRA3DCAMERA *)&pGVar9->fZmax;
  } while (pGVar8 != (GRA3DCAMERA *)
                     "fixed_array<%s,%d>:illegal array access, out of range( nIndex:%d )");
  gra3dApplyCamera__FP11GRA3DCAMERAi((GRA3DCAMERA *)0x0,1);
  return;
}

void gra3dLightDataAddOffsetPosition(GRA3DLIGHTDATA *pDest, GRA3DLIGHTDATA *pSrc, float *vPosition) {
	static char __FUNCTION__[32] = {
		/* [0] = */ 103,
		/* [1] = */ 114,
		/* [2] = */ 97,
		/* [3] = */ 51,
		/* [4] = */ 100,
		/* [5] = */ 76,
		/* [6] = */ 105,
		/* [7] = */ 103,
		/* [8] = */ 104,
		/* [9] = */ 116,
		/* [10] = */ 68,
		/* [11] = */ 97,
		/* [12] = */ 116,
		/* [13] = */ 97,
		/* [14] = */ 65,
		/* [15] = */ 100,
		/* [16] = */ 100,
		/* [17] = */ 79,
		/* [18] = */ 102,
		/* [19] = */ 102,
		/* [20] = */ 115,
		/* [21] = */ 101,
		/* [22] = */ 116,
		/* [23] = */ 80,
		/* [24] = */ 111,
		/* [25] = */ 115,
		/* [26] = */ 105,
		/* [27] = */ 116,
		/* [28] = */ 105,
		/* [29] = */ 111,
		/* [30] = */ 110,
		/* [31] = */ 0
	};
	int i;
	
  GRA3DLIGHTDATA *pGVar1;
  GRA3DLIGHTDATA *pGVar2;
  float *pfVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  fixed_array<G3DLIGHT,39> *pfVar7;
  int iVar8;
  undefined auVar9 [16];
  undefined auVar10 [16];
  
  pGVar2 = pSrc + 1;
  pGVar1 = pDest;
  do {
    uVar4 = *(undefined8 *)(pSrc->vAmbient + 2);
    uVar5 = *(undefined8 *)(pSrc->aLight).field0_0x0.m_aData[0].vDiffuse;
    uVar6 = *(undefined8 *)((pSrc->aLight).field0_0x0.m_aData[0].vDiffuse + 2);
    *(undefined8 *)pGVar1->vAmbient = *(undefined8 *)pSrc->vAmbient;
    *(undefined8 *)(pGVar1->vAmbient + 2) = uVar4;
    *(undefined8 *)(pGVar1->aLight).field0_0x0.m_aData[0].vDiffuse = uVar5;
    *(undefined8 *)((pGVar1->aLight).field0_0x0.m_aData[0].vDiffuse + 2) = uVar6;
    pSrc = (GRA3DLIGHTDATA *)(pSrc->aLight).field0_0x0.m_aData[0].vSpecular;
    pGVar1 = (GRA3DLIGHTDATA *)(pGVar1->aLight).field0_0x0.m_aData[0].vSpecular;
  } while (pSrc != pGVar2);
  pfVar7 = &pDest->aLight;
  iVar8 = 0;
  do {
                    /* inlined from ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(iVar8,0x27);
                    /* end of inlined section */
    pfVar3 = (pfVar7->field0_0x0).m_aData[0].vPosition;
    if ((pfVar7->field0_0x0).m_aData[0].Type != G3DLIGHT_DIRECTIONAL) {
                    /* inlined from g3dxVu0.h */
      auVar9 = _lqc2(*(undefined (*) [16])pfVar3);
      auVar10 = _lqc2(*(undefined (*) [16])vPosition);
      auVar9 = _vadd(auVar9,auVar10);
      auVar9 = _sqc2(auVar9);
      *(undefined (*) [16])pfVar3 = auVar9;
                    /* end of inlined section */
      if ((pfVar7->field0_0x0).m_aData[0].vPosition[3] != 1.0) {
        _SetLineInfo__FPCciT0T0
                  (s_gra3d_c_003f1090,0x197,"gra3dLightDataAddOffsetPosition",
                   "rL.vPosition[3] == 1.0f");
        g3ddbgAssert__FbPCce
                  ((pfVar7->field0_0x0).m_aData[0].vPosition[3] == 1.0,"maybe lightdata is illegal")
        ;
      }
    }
    iVar8 = iVar8 + 1;
    pfVar7 = (fixed_array<G3DLIGHT,39> *)((pfVar7->field0_0x0).m_aData + 1);
  } while (iVar8 < 0x27);
  return;
}

void gra3dLightEnableAll(int bEnable) {
	int i;
	
  int iVar1;
  int iLightId;
  
  iLightId = 0;
  do {
    iVar1 = iLightId + 1;
    gra3dLightEnable__Fii(iLightId,bEnable);
    iLightId = iVar1;
  } while (iVar1 < 0x27);
  return;
}

void gra3dLightEnablePush() {
  return;
}

void gra3dLightEnablePop() {
  return;
}

void gra3dLightPushData() {
	int i;
	
  undefined *puVar1;
  ulong uVar2;
  uint uVar3;
  ulong *puVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  GRA3DLIGHTSTATUS *pGVar11;
  undefined8 uVar12;
  int iVar13;
  G3DLIGHT *pGVar14;
  GRA3DLIGHTSTATUS *pGVar15;
  GRA3DLIGHTSTATUS *pGVar16;
  GRA3DLIGHTSTATUS *pGVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  int iVar21;
  G3DLIGHT *pGVar22;
  
  pGVar17 = (GRA3DLIGHTSTATUS *)&s_WorkLightManage;
  pGVar11 = (GRA3DLIGHTSTATUS *)&s_LightManage;
  do {
    pGVar15 = pGVar11;
    pGVar16 = pGVar17;
    iVar21 = pGVar15->bEnableToChar;
    iVar13 = pGVar15->bEnableToShadow;
    iVar6 = pGVar15->bEmulateToDirectionalLight;
    iVar7 = pGVar15[1].bEnable;
    iVar8 = pGVar15[1].bEnableToChar;
    iVar9 = pGVar15[1].bEnableToShadow;
    iVar10 = pGVar15[1].bEmulateToDirectionalLight;
    pGVar16->bEnable = pGVar15->bEnable;
    pGVar16->bEnableToChar = iVar21;
    pGVar16->bEnableToShadow = iVar13;
    pGVar16->bEmulateToDirectionalLight = iVar6;
    pGVar16[1].bEnable = iVar7;
    pGVar16[1].bEnableToChar = iVar8;
    pGVar16[1].bEnableToShadow = iVar9;
    uVar5 = s_LightManage.aStatus.field0_0x0.m_aData[38]._0_8_;
    pGVar16[1].bEmulateToDirectionalLight = iVar10;
    pGVar17 = pGVar16 + 2;
    pGVar11 = pGVar15 + 2;
  } while (pGVar15 + 2 != s_LightManage.aStatus.field0_0x0.m_aData + 0x26);
  uVar2._0_4_ = pGVar15[2].bEnableToShadow;
  uVar2._4_4_ = pGVar15[2].bEmulateToDirectionalLight;
  puVar1 = (undefined *)((int)&pGVar16[2].bEnableToChar + 3);
  uVar3 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 |
            (ulong)s_LightManage.aStatus.field0_0x0.m_aData[38]._0_8_ >> (7 - uVar3) * 8;
  uVar12 = s_LightManage.aStatus.field0_0x0.m_aData[38]._0_8_;
  s_LightManage.aStatus.field0_0x0.m_aData[38].bEnable = (int)uVar5;
  s_LightManage.aStatus.field0_0x0.m_aData[38].bEnableToChar = SUB84(uVar5,4);
  iVar21 = s_LightManage.aStatus.field0_0x0.m_aData[38].bEnableToChar;
  pGVar17->bEnable = s_LightManage.aStatus.field0_0x0.m_aData[38].bEnable;
  s_LightManage.aStatus.field0_0x0.m_aData[38]._0_8_ = uVar12;
  pGVar17->bEnableToChar = iVar21;
  puVar1 = (undefined *)((int)&pGVar16[2].bEmulateToDirectionalLight + 3);
  uVar3 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | uVar2 >> (7 - uVar3) * 8;
  iVar21 = 0;
  pGVar16[2].bEnableToShadow = (int)uVar2;
  pGVar16[2].bEmulateToDirectionalLight = (int)(uVar2 >> 0x20);
  pGVar22 = s_WorkaLight;
  do {
    iVar13 = gra3dIsLightEnable__Fi(iVar21);
                    /* end of inlined section */
    if (iVar13 != 0) {
                    /* inlined from g3dLight.h */
      pGVar14 = gra3dGetLightRef__Fi(iVar21);
      uVar5 = *(undefined8 *)pGVar14->vDiffuse;
      fVar18 = pGVar14->vDiffuse[2];
      fVar19 = pGVar14->vDiffuse[3];
      pGVar22->vDiffuse[0] = (float)uVar5;
      pGVar22->vDiffuse[1] = (float)((ulong)uVar5 >> 0x20);
      pGVar22->vDiffuse[2] = fVar18;
      pGVar22->vDiffuse[3] = fVar19;
      fVar18 = pGVar14->vSpecular[1];
      fVar19 = pGVar14->vSpecular[2];
      fVar20 = pGVar14->vSpecular[3];
      pGVar22->vSpecular[0] = pGVar14->vSpecular[0];
      pGVar22->vSpecular[1] = fVar18;
      pGVar22->vSpecular[2] = fVar19;
      pGVar22->vSpecular[3] = fVar20;
      fVar18 = pGVar14->vAmbient[1];
      fVar19 = pGVar14->vAmbient[2];
      fVar20 = pGVar14->vAmbient[3];
      pGVar22->vAmbient[0] = pGVar14->vAmbient[0];
      pGVar22->vAmbient[1] = fVar18;
      pGVar22->vAmbient[2] = fVar19;
      pGVar22->vAmbient[3] = fVar20;
      fVar18 = pGVar14->vPosition[1];
      fVar19 = pGVar14->vPosition[2];
      fVar20 = pGVar14->vPosition[3];
      pGVar22->vPosition[0] = pGVar14->vPosition[0];
      pGVar22->vPosition[1] = fVar18;
      pGVar22->vPosition[2] = fVar19;
      pGVar22->vPosition[3] = fVar20;
      fVar18 = pGVar14->vDirection[1];
      fVar19 = pGVar14->vDirection[2];
      fVar20 = pGVar14->vDirection[3];
      pGVar22->vDirection[0] = pGVar14->vDirection[0];
      pGVar22->vDirection[1] = fVar18;
      pGVar22->vDirection[2] = fVar19;
      pGVar22->vDirection[3] = fVar20;
      fVar18 = pGVar14->fAngleInside;
      fVar19 = pGVar14->fAngleOutside;
      fVar20 = pGVar14->fMaxRange;
      pGVar22->Type = pGVar14->Type;
      pGVar22->fAngleInside = fVar18;
      pGVar22->fAngleOutside = fVar19;
      pGVar22->fMaxRange = fVar20;
      fVar18 = pGVar14->fFalloff;
      fVar19 = pGVar14->afPad0[0];
      fVar20 = pGVar14->afPad0[1];
      pGVar22->fMinRange = pGVar14->fMinRange;
      pGVar22->fFalloff = fVar18;
      pGVar22->afPad0[0] = fVar19;
      pGVar22->afPad0[1] = fVar20;
    }
                    /* end of inlined section */
    iVar21 = iVar21 + 1;
    pGVar22 = pGVar22 + 1;
  } while (iVar21 < 0x27);
  return;
}

void gra3dLightPopData() {
	int i;
	
  undefined *puVar1;
  ulong uVar2;
  uint uVar3;
  ulong *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  GRA3DLIGHTSTATUS *pGVar10;
  undefined8 uVar11;
  int iVar12;
  GRA3DLIGHTSTATUS *pGVar13;
  GRA3DLIGHTSTATUS *pGVar14;
  GRA3DLIGHTSTATUS *pGVar15;
  int iVar16;
  int iVar17;
  G3DLIGHT *pLight;
  
  pGVar15 = (GRA3DLIGHTSTATUS *)&s_LightManage;
  pGVar10 = (GRA3DLIGHTSTATUS *)&s_WorkLightManage;
  do {
    pGVar13 = pGVar10;
    pGVar14 = pGVar15;
    iVar16 = pGVar13->bEnableToChar;
    iVar12 = pGVar13->bEnableToShadow;
    iVar17 = pGVar13->bEmulateToDirectionalLight;
    iVar5 = pGVar13[1].bEnable;
    iVar6 = pGVar13[1].bEnableToChar;
    iVar7 = pGVar13[1].bEnableToShadow;
    iVar8 = pGVar13[1].bEmulateToDirectionalLight;
    pGVar14->bEnable = pGVar13->bEnable;
    pGVar14->bEnableToChar = iVar16;
    pGVar14->bEnableToShadow = iVar12;
    pGVar14->bEmulateToDirectionalLight = iVar17;
    pGVar14[1].bEnable = iVar5;
    pGVar14[1].bEnableToChar = iVar6;
    pGVar14[1].bEnableToShadow = iVar7;
    uVar9 = s_WorkLightManage.aStatus.field0_0x0.m_aData[38]._0_8_;
    pGVar14[1].bEmulateToDirectionalLight = iVar8;
    pGVar15 = pGVar14 + 2;
    pGVar10 = pGVar13 + 2;
  } while (pGVar13 + 2 != s_WorkLightManage.aStatus.field0_0x0.m_aData + 0x26);
  uVar2._0_4_ = pGVar13[2].bEnableToShadow;
  uVar2._4_4_ = pGVar13[2].bEmulateToDirectionalLight;
  puVar1 = (undefined *)((int)&pGVar14[2].bEnableToChar + 3);
  uVar3 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 |
            (ulong)s_WorkLightManage.aStatus.field0_0x0.m_aData[38]._0_8_ >> (7 - uVar3) * 8;
  uVar11 = s_WorkLightManage.aStatus.field0_0x0.m_aData[38]._0_8_;
  s_WorkLightManage.aStatus.field0_0x0.m_aData[38].bEnable = (int)uVar9;
  s_WorkLightManage.aStatus.field0_0x0.m_aData[38].bEnableToChar = SUB84(uVar9,4);
  iVar16 = s_WorkLightManage.aStatus.field0_0x0.m_aData[38].bEnableToChar;
  pGVar15->bEnable = s_WorkLightManage.aStatus.field0_0x0.m_aData[38].bEnable;
  s_WorkLightManage.aStatus.field0_0x0.m_aData[38]._0_8_ = uVar11;
  pGVar15->bEnableToChar = iVar16;
  puVar1 = (undefined *)((int)&pGVar14[2].bEmulateToDirectionalLight + 3);
  uVar3 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | uVar2 >> (7 - uVar3) * 8;
  pGVar14[2].bEnableToShadow = (int)uVar2;
  pGVar14[2].bEmulateToDirectionalLight = (int)(uVar2 >> 0x20);
  pLight = s_WorkaLight;
  iVar16 = 0;
  do {
    iVar12 = gra3dIsLightEnable__Fi(iVar16);
    iVar17 = iVar16 + 1;
    if (iVar12 != 0) {
      gra3dSetLight__FiPC8G3DLIGHT(iVar16,pLight);
    }
    pLight = pLight + 1;
    iVar16 = iVar17;
  } while (iVar17 < 0x27);
  return;
}

void gra3dSetLightData(GRA3DLIGHTDATA *pLightData, float *vTrans) {
	static char __FUNCTION__[18] = {
		/* [0] = */ 103,
		/* [1] = */ 114,
		/* [2] = */ 97,
		/* [3] = */ 51,
		/* [4] = */ 100,
		/* [5] = */ 83,
		/* [6] = */ 101,
		/* [7] = */ 116,
		/* [8] = */ 76,
		/* [9] = */ 105,
		/* [10] = */ 103,
		/* [11] = */ 104,
		/* [12] = */ 116,
		/* [13] = */ 68,
		/* [14] = */ 97,
		/* [15] = */ 116,
		/* [16] = */ 97,
		/* [17] = */ 0
	};
	int i;
	G3DLIGHT L;
	float *pv0;
	
  G3DLIGHT *pGVar1;
  fixed_array<G3DLIGHT,39> *pfVar2;
  fixed_array<G3DLIGHT,39> *pfVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  GRA3DLIGHTSTATUS *pS;
  fixed_array<G3DLIGHT,39> *pfVar8;
  int iLightId;
  undefined auVar9 [16];
  undefined auVar10 [16];
  G3DLIGHT L;
  
  pS = (GRA3DLIGHTSTATUS *)&pLightData->aStatus;
  pfVar8 = &pLightData->aLight;
  iLightId = 0;
  do {
                    /* inlined from ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z16GRA3DLIGHTSTATUS_UiUi_PX01(iLightId,0x27);
                    /* end of inlined section */
    gra3dSetLightStatus__FiPC16GRA3DLIGHTSTATUS(iLightId,pS);
    if (pS->bEnable != 0) {
                    /* inlined from ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(iLightId,0x27);
      pGVar1 = &L;
      pfVar3 = pfVar8;
      do {
        pfVar2 = pfVar3;
        puVar4 = (undefined8 *)pGVar1;
        uVar5 = *(undefined8 *)((pfVar2->field0_0x0).m_aData[0].vDiffuse + 2);
        uVar6 = *(undefined8 *)(pfVar2->field0_0x0).m_aData[0].vSpecular;
        uVar7 = *(undefined8 *)((pfVar2->field0_0x0).m_aData[0].vSpecular + 2);
        *puVar4 = *(undefined8 *)(pfVar2->field0_0x0).m_aData[0].vDiffuse;
        puVar4[1] = uVar5;
        puVar4[2] = uVar6;
        puVar4[3] = uVar7;
        pfVar3 = (fixed_array<G3DLIGHT,39> *)(pfVar2->field0_0x0).m_aData[0].vAmbient;
        pGVar1 = (G3DLIGHT *)(puVar4 + 4);
      } while (pfVar3 != (fixed_array<G3DLIGHT,39> *)&(pfVar8->field0_0x0).m_aData[0].fMinRange);
      uVar5 = *(undefined8 *)((pfVar2->field0_0x0).m_aData[0].vAmbient + 2);
      puVar4[4] = *(undefined8 *)pfVar3;
                    /* end of inlined section */
      puVar4[5] = uVar5;
      if (vTrans == (float *)0x0) {
LAB_001b058c:
                    /* end of inlined section */
      }
      else {
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_relops.h */
        if (L.Type != G3DLIGHT_DIRECTIONAL) {
                    /* inlined from g3dxVu0.h */
          auVar9 = _lqc2((undefined  [16])L.vPosition);
          auVar10 = _lqc2(*(undefined (*) [16])vTrans);
          auVar9 = _vadd(auVar9,auVar10);
          L.vPosition = (float  [4])_sqc2(auVar9);
          goto LAB_001b058c;
        }
      }
      if (L.vPosition[3] != 1.0) {
        _SetLineInfo__FPCciT0T0
                  (s_gra3d_c_003f1090,0x1fa,"gra3dSetLightData","L.vPosition[3] == 1.0f");
        g3ddbgAssert__FbPCce(L.vPosition[3] == 1.0,"L.vPosition[3] : %f");
      }
      gra3dSetLight__FiPC8G3DLIGHT(iLightId,&L);
    }
    iLightId = iLightId + 1;
    pfVar8 = (fixed_array<G3DLIGHT,39> *)((pfVar8->field0_0x0).m_aData + 1);
    pS = pS + 1;
    if (0x26 < iLightId) {
      g3dSetAmbient__FPCf(pLightData->vAmbient);
      gra3dApplyLight__Fv();
      return;
    }
  } while( true );
}

void gra3dEmulateLightData(GRA3DLIGHTDATA *pLDDest, GRA3DLIGHTDATA *pLDSrc, float *vPosition, float fMagnification) {
	G3D_EMULATE_DIRECTIONALLIGHT_DATA raEmuDirLight[39];
	int iNumLightEnable;
	int i;
	G3D_EMULATE_DIRECTIONALLIGHT_DATA *__first;
	G3D_EMULATE_DIRECTIONALLIGHT_DATA *__last;
	greater __comp;
	int i;
	int i;
	int bEnable;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  ulong uVar10;
  uint uVar11;
  ulong *puVar12;
  int iVar13;
  GRA3DLIGHTSTATUS *pGVar14;
  fixed_array<GRA3DLIGHTSTATUS,39> *pfVar16;
  ulong uVar17;
  ulong uVar18;
  float fVar19;
  float fVar20;
  int iVar21;
  ulong in_a3;
  ulong in_t0;
  G3D_EMULATE_DIRECTIONALLIGHT_DATA *pGVar22;
  fixed_array<G3DLIGHT,39> *aDest;
  int iVar23;
  int *piVar24;
  G3DLIGHT *pLight;
  fixed_array<GRA3DLIGHTSTATUS,39> *pfVar25;
  fixed_array<GRA3DLIGHTSTATUS,39> *pfVar27;
  undefined auVar28 [16];
  undefined auVar29 [16];
  G3D_EMULATE_DIRECTIONALLIGHT_DATA raEmuDirLight [39];
  int iNumLightEnable;
  G3D_EMULATE_DIRECTIONALLIGHT_DATA *__first;
  greater__2_1751 __comp;
  int local_74;
  float *local_70;
  int *local_6c;
  ulong uVar15;
  ulong uVar26;
  
  local_70 = vPosition;
  if (fMagnification < 0.0) {
    in_a3 = 0x3b4488;
    _SetLineInfo__FPCciT0T0
              (s_gra3d_c_003f1090,0x20e,"gra3dEmulateLightDataSub","fMagnification >= 0.0f");
    g3ddbgAssert__FbPCce(0.0 <= fMagnification,&DAT_003f1098);
  }
                    /* end of inlined section */
  uVar17 = 0;
  memset(raEmuDirLight,0,0x750);
  iNumLightEnable = 0;
  uVar18 = *(ulong *)pLDSrc->vAmbient;
                    /* inlined from g3dxVu0.h */
  fVar19 = pLDSrc->vAmbient[2];
  fVar20 = pLDSrc->vAmbient[3];
  pLDDest->vAmbient[0] = (float)uVar18;
  pLDDest->vAmbient[1] = (float)(uVar18 >> 0x20);
  pLDDest->vAmbient[2] = fVar19;
  pLDDest->vAmbient[3] = fVar20;
                    /* end of inlined section */
  pfVar27 = &pLDDest->aStatus;
  pfVar25 = &pLDSrc->aStatus;
  uVar26 = (ulong)(int)pfVar25;
  pfVar16 = pfVar27;
  if ((((uint)pfVar25 | (uint)pfVar27) & 7) == 0) {
    uVar10 = (ulong)(int)((pLDSrc->aStatus).field0_0x0.m_aData + 0x26);
    uVar18 = uVar26;
    do {
      puVar12 = (ulong *)uVar18;
      uVar17 = *puVar12;
      uVar4 = *(undefined4 *)(puVar12 + 1);
      uVar5 = *(undefined4 *)((int)(puVar12 + 1) + 4);
      uVar6 = *(undefined4 *)(puVar12 + 2);
      uVar7 = *(undefined4 *)((int)(puVar12 + 2) + 4);
      uVar8 = *(undefined4 *)(puVar12 + 3);
      uVar9 = *(undefined4 *)((int)(puVar12 + 3) + 4);
      (pfVar16->field0_0x0).m_aData[0].bEnable = (int)uVar17;
      (pfVar16->field0_0x0).m_aData[0].bEnableToChar = (int)(uVar17 >> 0x20);
      (pfVar16->field0_0x0).m_aData[0].bEnableToShadow = uVar4;
      (pfVar16->field0_0x0).m_aData[0].bEmulateToDirectionalLight = uVar5;
      (pfVar16->field0_0x0).m_aData[1].bEnable = uVar6;
      (pfVar16->field0_0x0).m_aData[1].bEnableToChar = uVar7;
      (pfVar16->field0_0x0).m_aData[1].bEnableToShadow = uVar8;
      (pfVar16->field0_0x0).m_aData[1].bEmulateToDirectionalLight = uVar9;
      puVar12 = puVar12 + 4;
      uVar18 = (ulong)(int)puVar12;
      pfVar16 = (fixed_array<GRA3DLIGHTSTATUS,39> *)((pfVar16->field0_0x0).m_aData + 2);
    } while (uVar18 != uVar10);
  }
  else {
    uVar10 = (ulong)(int)((pLDSrc->aStatus).field0_0x0.m_aData + 0x26);
    uVar15 = uVar26;
    do {
      uVar11 = (uint)uVar15;
      uVar2 = uVar11 + 7 & 7;
      uVar3 = uVar11 & 7;
      uVar17 = (*(long *)((uVar11 + 7) - uVar2) << (7 - uVar2) * 8 |
               uVar17 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
               *(ulong *)(uVar11 - uVar3) >> uVar3 * 8;
      uVar2 = uVar11 + 0xf & 7;
      uVar3 = uVar11 + 8 & 7;
      uVar18 = (*(long *)((uVar11 + 0xf) - uVar2) << (7 - uVar2) * 8 |
               uVar18 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
               *(ulong *)((uVar11 + 8) - uVar3) >> uVar3 * 8;
      uVar2 = uVar11 + 0x17 & 7;
      uVar3 = uVar11 + 0x10 & 7;
      in_a3 = (*(long *)((uVar11 + 0x17) - uVar2) << (7 - uVar2) * 8 |
              in_a3 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
              *(ulong *)((uVar11 + 0x10) - uVar3) >> uVar3 * 8;
      uVar2 = uVar11 + 0x1f & 7;
      uVar3 = uVar11 + 0x18 & 7;
      in_t0 = (*(long *)((uVar11 + 0x1f) - uVar2) << (7 - uVar2) * 8 |
              in_t0 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
              *(ulong *)((uVar11 + 0x18) - uVar3) >> uVar3 * 8;
      puVar1 = (undefined *)((int)&(pfVar16->field0_0x0).m_aData[0].bEnableToChar + 3);
      uVar2 = (uint)puVar1 & 7;
      puVar12 = (ulong *)(puVar1 + -uVar2);
      *puVar12 = *puVar12 & -1L << (uVar2 + 1) * 8 | uVar17 >> (7 - uVar2) * 8;
      uVar2 = (uint)pfVar16 & 7;
      *(ulong *)((int)pfVar16 - uVar2) =
           uVar17 << uVar2 * 8 |
           *(ulong *)((int)pfVar16 - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
      puVar1 = (undefined *)((int)&(pfVar16->field0_0x0).m_aData[0].bEmulateToDirectionalLight + 3);
      uVar2 = (uint)puVar1 & 7;
      puVar12 = (ulong *)(puVar1 + -uVar2);
      *puVar12 = *puVar12 & -1L << (uVar2 + 1) * 8 | uVar18 >> (7 - uVar2) * 8;
      piVar24 = &(pfVar16->field0_0x0).m_aData[0].bEnableToShadow;
      uVar2 = (uint)piVar24 & 7;
      puVar12 = (ulong *)((int)piVar24 - uVar2);
      *puVar12 = uVar18 << uVar2 * 8 | *puVar12 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
      puVar1 = (undefined *)((int)&(pfVar16->field0_0x0).m_aData[1].bEnableToChar + 3);
      uVar2 = (uint)puVar1 & 7;
      puVar12 = (ulong *)(puVar1 + -uVar2);
      *puVar12 = *puVar12 & -1L << (uVar2 + 1) * 8 | in_a3 >> (7 - uVar2) * 8;
      pGVar14 = (pfVar16->field0_0x0).m_aData + 1;
      uVar2 = (uint)pGVar14 & 7;
      puVar12 = (ulong *)((int)pGVar14 - uVar2);
      *puVar12 = in_a3 << uVar2 * 8 | *puVar12 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
      puVar1 = (undefined *)((int)&(pfVar16->field0_0x0).m_aData[1].bEmulateToDirectionalLight + 3);
      uVar2 = (uint)puVar1 & 7;
      puVar12 = (ulong *)(puVar1 + -uVar2);
      *puVar12 = *puVar12 & -1L << (uVar2 + 1) * 8 | in_t0 >> (7 - uVar2) * 8;
      piVar24 = &(pfVar16->field0_0x0).m_aData[1].bEnableToShadow;
      uVar2 = (uint)piVar24 & 7;
      puVar12 = (ulong *)((int)piVar24 - uVar2);
      *puVar12 = in_t0 << uVar2 * 8 | *puVar12 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
      puVar12 = (ulong *)(uVar11 + 0x20);
      uVar15 = (ulong)(int)puVar12;
      pfVar16 = (fixed_array<GRA3DLIGHTSTATUS,39> *)((pfVar16->field0_0x0).m_aData + 2);
    } while (uVar15 != uVar10);
  }
  uVar2 = (int)puVar12 + 7U & 7;
  uVar3 = (uint)puVar12 & 7;
  uVar18 = (*(long *)(((int)puVar12 + 7U) - uVar2) << (7 - uVar2) * 8 |
           uVar10 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
           *(ulong *)((int)puVar12 - uVar3) >> uVar3 * 8;
  uVar2 = (int)puVar12 + 0xfU & 7;
  uVar3 = (uint)(puVar12 + 1) & 7;
  uVar17 = (*(long *)(((int)puVar12 + 0xfU) - uVar2) << (7 - uVar2) * 8 |
           uVar17 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
           *(ulong *)((int)(puVar12 + 1) - uVar3) >> uVar3 * 8;
  puVar1 = (undefined *)((int)&(pfVar16->field0_0x0).m_aData[0].bEnableToChar + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar2);
  *puVar12 = *puVar12 & -1L << (uVar2 + 1) * 8 | uVar18 >> (7 - uVar2) * 8;
  uVar2 = (uint)pfVar16 & 7;
  *(ulong *)((int)pfVar16 - uVar2) =
       uVar18 << uVar2 * 8 |
       *(ulong *)((int)pfVar16 - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  puVar1 = (undefined *)((int)&(pfVar16->field0_0x0).m_aData[0].bEmulateToDirectionalLight + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar2);
  *puVar12 = *puVar12 & -1L << (uVar2 + 1) * 8 | uVar17 >> (7 - uVar2) * 8;
  local_6c = &iNumLightEnable;
  pLight = (G3DLIGHT *)&pLDSrc->aLight;
  piVar24 = &(pfVar16->field0_0x0).m_aData[0].bEnableToShadow;
  uVar2 = (uint)piVar24 & 7;
  puVar12 = (ulong *)((int)piVar24 - uVar2);
  *puVar12 = uVar17 << uVar2 * 8 | *puVar12 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  iVar13 = 0;
  do {
                    /* inlined from ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z16GRA3DLIGHTSTATUS_UiUi_PX01(iVar13,0x27);
    iVar21 = iNumLightEnable;
    piVar24 = (int *)uVar26;
                    /* end of inlined section */
    if (((*piVar24 != 0) && (piVar24[3] != 0)) && (piVar24[1] != 0)) {
      pGVar22 = raEmuDirLight + iNumLightEnable;
                    /* inlined from ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(iVar13,0x27);
      g3dEmulateDirectionalLight__FP33G3D_EMULATE_DIRECTIONALLIGHT_DATAPC8G3DLIGHTPCf
                (pGVar22,pLight,local_70);
                    /* end of inlined section */
      if (0.0 < raEmuDirLight[iVar21].fLength) {
        iNumLightEnable = iNumLightEnable + 1;
      }
    }
    iVar13 = iVar13 + 1;
    pLight = pLight + 1;
    uVar26 = (ulong)(int)(piVar24 + 4);
  } while (iVar13 < 0x27);
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_algo.h */
  pGVar22 = raEmuDirLight + iNumLightEnable;
  __comp = (greater__2_1751)0x0;
  __first = raEmuDirLight;
  if (raEmuDirLight != pGVar22) {
    iVar21 = 0;
    for (iVar13 = ((int)pGVar22 - (int)raEmuDirLight >> 4) * -0x55555555; iVar13 != 1;
        iVar13 = iVar13 >> 1) {
      iVar21 = iVar21 + 1;
    }
    __first = raEmuDirLight;
    __introsort_loop__H4ZP33G3D_EMULATE_DIRECTIONALLIGHT_DATAZ33G3D_EMULATE_DIRECTIONALLIGHT_DATAZiZQ233G3D_EMULATE_DIRECTIONALLIGHT_DATA7greater_X01X01PX11X21X31_v
              (raEmuDirLight,pGVar22,0,iVar21 << 1,0);
    __final_insertion_sort__H2ZP33G3D_EMULATE_DIRECTIONALLIGHT_DATAZQ233G3D_EMULATE_DIRECTIONALLIGHT_DATA7greater_X01X01X11_v
              (__first,pGVar22,__comp);
  }
                    /* inlined from ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(0,0x27);
                    /* end of inlined section */
  aDest = &pLDDest->aLight;
  iVar13 = 0;
                    /* inlined from ctl/fixed_array.h */
  g3dGenerateDirectionalLightByEmulatedData__FP8G3DLIGHTPC33G3D_EMULATE_DIRECTIONALLIGHT_DATAi
            ((G3DLIGHT *)aDest,raEmuDirLight,iNumLightEnable);
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_algobase.h */
  local_74 = 3;
  piVar24 = local_6c;
  if (3 < *local_6c) {
    piVar24 = &local_74;
  }
  iNumLightEnable = *piVar24;
                    /* end of inlined section */
  if (0 < iNumLightEnable) {
    do {
                    /* inlined from ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(iVar13,0x27);
                    /* inlined from g3dxVu0.h */
      auVar29 = _qmtc2(fMagnification);
      auVar28 = _lqc2(*(undefined (*) [16])(aDest->field0_0x0).m_aData[0].vDiffuse);
      auVar28 = _vmulbc(auVar28,auVar29);
      auVar28 = _sqc2(auVar28);
      *(undefined (*) [16])(aDest->field0_0x0).m_aData[0].vDiffuse = auVar28;
                    /* end of inlined section */
      iVar13 = iVar13 + 1;
      aDest = (fixed_array<G3DLIGHT,39> *)((aDest->field0_0x0).m_aData + 1);
    } while (iVar13 < iNumLightEnable);
  }
  iVar13 = 0;
  do {
                    /* inlined from ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z16GRA3DLIGHTSTATUS_UiUi_PX01(iVar13,0x27);
    pGVar14 = (pfVar25->field0_0x0).m_aData + iVar13;
                    /* end of inlined section */
                    /* end of inlined section */
    if ((pGVar14->bEmulateToDirectionalLight == 0) && (pGVar14->bEnable != 0)) {
      iVar21 = 1;
    }
    else if (iVar13 < 0) {
      iVar21 = 0;
    }
    else if (iVar13 < iNumLightEnable) {
      iVar21 = 1;
    }
    else {
      iVar21 = 0;
    }
                    /* inlined from ctl/fixed_array.h */
    iVar23 = iVar13 + 1;
    _fixed_array_verifyrange__H1Z16GRA3DLIGHTSTATUS_UiUi_PX01(iVar13,0x27);
                    /* end of inlined section */
                    /* end of inlined section */
    (pfVar27->field0_0x0).m_aData[iVar13].bEnable = iVar21;
    iVar13 = iVar23;
  } while (iVar23 < 0x27);
  return;
}

void gra3dEmulateLightDataObj(GRA3DLIGHTDATA *pLDDest, GRA3DLIGHTDATA *pLDSrc, float *vPosition, float fMagnification) {
	G3D_EMULATE_DIRECTIONALLIGHT_DATA raEmuDirLight[39];
	int iNumLightEnable;
	int i;
	G3D_EMULATE_DIRECTIONALLIGHT_DATA *__first;
	G3D_EMULATE_DIRECTIONALLIGHT_DATA *__last;
	greater __comp;
	int i;
	int i;
	int bEnable;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  ulong uVar10;
  uint uVar11;
  ulong *puVar12;
  int iVar13;
  GRA3DLIGHTSTATUS *pGVar14;
  fixed_array<GRA3DLIGHTSTATUS,39> *pfVar16;
  ulong uVar17;
  ulong uVar18;
  float fVar19;
  float fVar20;
  int iVar21;
  ulong in_a3;
  ulong in_t0;
  G3D_EMULATE_DIRECTIONALLIGHT_DATA *pGVar22;
  fixed_array<G3DLIGHT,39> *aDest;
  int iVar23;
  int *piVar24;
  G3DLIGHT *pLight;
  fixed_array<GRA3DLIGHTSTATUS,39> *pfVar25;
  fixed_array<GRA3DLIGHTSTATUS,39> *pfVar27;
  undefined auVar28 [16];
  undefined auVar29 [16];
  G3D_EMULATE_DIRECTIONALLIGHT_DATA raEmuDirLight [39];
  int iNumLightEnable;
  G3D_EMULATE_DIRECTIONALLIGHT_DATA *__first;
  greater__2_1751 __comp;
  int local_74;
  float *local_70;
  int *local_6c;
  ulong uVar15;
  ulong uVar26;
  
  local_70 = vPosition;
  if (fMagnification < 0.0) {
    in_a3 = 0x3b4488;
    _SetLineInfo__FPCciT0T0
              (s_gra3d_c_003f1090,0x20e,"gra3dEmulateLightDataSub","fMagnification >= 0.0f");
    g3ddbgAssert__FbPCce(0.0 <= fMagnification,&DAT_003f1098);
  }
                    /* end of inlined section */
  uVar17 = 0;
  memset(raEmuDirLight,0,0x750);
  iNumLightEnable = 0;
  uVar18 = *(ulong *)pLDSrc->vAmbient;
                    /* inlined from g3dxVu0.h */
  fVar19 = pLDSrc->vAmbient[2];
  fVar20 = pLDSrc->vAmbient[3];
  pLDDest->vAmbient[0] = (float)uVar18;
  pLDDest->vAmbient[1] = (float)(uVar18 >> 0x20);
  pLDDest->vAmbient[2] = fVar19;
  pLDDest->vAmbient[3] = fVar20;
                    /* end of inlined section */
  pfVar27 = &pLDDest->aStatus;
  pfVar25 = &pLDSrc->aStatus;
  uVar26 = (ulong)(int)pfVar25;
  pfVar16 = pfVar27;
  if ((((uint)pfVar25 | (uint)pfVar27) & 7) == 0) {
    uVar10 = (ulong)(int)((pLDSrc->aStatus).field0_0x0.m_aData + 0x26);
    uVar18 = uVar26;
    do {
      puVar12 = (ulong *)uVar18;
      uVar17 = *puVar12;
      uVar4 = *(undefined4 *)(puVar12 + 1);
      uVar5 = *(undefined4 *)((int)(puVar12 + 1) + 4);
      uVar6 = *(undefined4 *)(puVar12 + 2);
      uVar7 = *(undefined4 *)((int)(puVar12 + 2) + 4);
      uVar8 = *(undefined4 *)(puVar12 + 3);
      uVar9 = *(undefined4 *)((int)(puVar12 + 3) + 4);
      (pfVar16->field0_0x0).m_aData[0].bEnable = (int)uVar17;
      (pfVar16->field0_0x0).m_aData[0].bEnableToChar = (int)(uVar17 >> 0x20);
      (pfVar16->field0_0x0).m_aData[0].bEnableToShadow = uVar4;
      (pfVar16->field0_0x0).m_aData[0].bEmulateToDirectionalLight = uVar5;
      (pfVar16->field0_0x0).m_aData[1].bEnable = uVar6;
      (pfVar16->field0_0x0).m_aData[1].bEnableToChar = uVar7;
      (pfVar16->field0_0x0).m_aData[1].bEnableToShadow = uVar8;
      (pfVar16->field0_0x0).m_aData[1].bEmulateToDirectionalLight = uVar9;
      puVar12 = puVar12 + 4;
      uVar18 = (ulong)(int)puVar12;
      pfVar16 = (fixed_array<GRA3DLIGHTSTATUS,39> *)((pfVar16->field0_0x0).m_aData + 2);
    } while (uVar18 != uVar10);
  }
  else {
    uVar10 = (ulong)(int)((pLDSrc->aStatus).field0_0x0.m_aData + 0x26);
    uVar15 = uVar26;
    do {
      uVar11 = (uint)uVar15;
      uVar2 = uVar11 + 7 & 7;
      uVar3 = uVar11 & 7;
      uVar17 = (*(long *)((uVar11 + 7) - uVar2) << (7 - uVar2) * 8 |
               uVar17 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
               *(ulong *)(uVar11 - uVar3) >> uVar3 * 8;
      uVar2 = uVar11 + 0xf & 7;
      uVar3 = uVar11 + 8 & 7;
      uVar18 = (*(long *)((uVar11 + 0xf) - uVar2) << (7 - uVar2) * 8 |
               uVar18 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
               *(ulong *)((uVar11 + 8) - uVar3) >> uVar3 * 8;
      uVar2 = uVar11 + 0x17 & 7;
      uVar3 = uVar11 + 0x10 & 7;
      in_a3 = (*(long *)((uVar11 + 0x17) - uVar2) << (7 - uVar2) * 8 |
              in_a3 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
              *(ulong *)((uVar11 + 0x10) - uVar3) >> uVar3 * 8;
      uVar2 = uVar11 + 0x1f & 7;
      uVar3 = uVar11 + 0x18 & 7;
      in_t0 = (*(long *)((uVar11 + 0x1f) - uVar2) << (7 - uVar2) * 8 |
              in_t0 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
              *(ulong *)((uVar11 + 0x18) - uVar3) >> uVar3 * 8;
      puVar1 = (undefined *)((int)&(pfVar16->field0_0x0).m_aData[0].bEnableToChar + 3);
      uVar2 = (uint)puVar1 & 7;
      puVar12 = (ulong *)(puVar1 + -uVar2);
      *puVar12 = *puVar12 & -1L << (uVar2 + 1) * 8 | uVar17 >> (7 - uVar2) * 8;
      uVar2 = (uint)pfVar16 & 7;
      *(ulong *)((int)pfVar16 - uVar2) =
           uVar17 << uVar2 * 8 |
           *(ulong *)((int)pfVar16 - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
      puVar1 = (undefined *)((int)&(pfVar16->field0_0x0).m_aData[0].bEmulateToDirectionalLight + 3);
      uVar2 = (uint)puVar1 & 7;
      puVar12 = (ulong *)(puVar1 + -uVar2);
      *puVar12 = *puVar12 & -1L << (uVar2 + 1) * 8 | uVar18 >> (7 - uVar2) * 8;
      piVar24 = &(pfVar16->field0_0x0).m_aData[0].bEnableToShadow;
      uVar2 = (uint)piVar24 & 7;
      puVar12 = (ulong *)((int)piVar24 - uVar2);
      *puVar12 = uVar18 << uVar2 * 8 | *puVar12 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
      puVar1 = (undefined *)((int)&(pfVar16->field0_0x0).m_aData[1].bEnableToChar + 3);
      uVar2 = (uint)puVar1 & 7;
      puVar12 = (ulong *)(puVar1 + -uVar2);
      *puVar12 = *puVar12 & -1L << (uVar2 + 1) * 8 | in_a3 >> (7 - uVar2) * 8;
      pGVar14 = (pfVar16->field0_0x0).m_aData + 1;
      uVar2 = (uint)pGVar14 & 7;
      puVar12 = (ulong *)((int)pGVar14 - uVar2);
      *puVar12 = in_a3 << uVar2 * 8 | *puVar12 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
      puVar1 = (undefined *)((int)&(pfVar16->field0_0x0).m_aData[1].bEmulateToDirectionalLight + 3);
      uVar2 = (uint)puVar1 & 7;
      puVar12 = (ulong *)(puVar1 + -uVar2);
      *puVar12 = *puVar12 & -1L << (uVar2 + 1) * 8 | in_t0 >> (7 - uVar2) * 8;
      piVar24 = &(pfVar16->field0_0x0).m_aData[1].bEnableToShadow;
      uVar2 = (uint)piVar24 & 7;
      puVar12 = (ulong *)((int)piVar24 - uVar2);
      *puVar12 = in_t0 << uVar2 * 8 | *puVar12 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
      puVar12 = (ulong *)(uVar11 + 0x20);
      uVar15 = (ulong)(int)puVar12;
      pfVar16 = (fixed_array<GRA3DLIGHTSTATUS,39> *)((pfVar16->field0_0x0).m_aData + 2);
    } while (uVar15 != uVar10);
  }
  uVar2 = (int)puVar12 + 7U & 7;
  uVar3 = (uint)puVar12 & 7;
  uVar18 = (*(long *)(((int)puVar12 + 7U) - uVar2) << (7 - uVar2) * 8 |
           uVar10 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
           *(ulong *)((int)puVar12 - uVar3) >> uVar3 * 8;
  uVar2 = (int)puVar12 + 0xfU & 7;
  uVar3 = (uint)(puVar12 + 1) & 7;
  uVar17 = (*(long *)(((int)puVar12 + 0xfU) - uVar2) << (7 - uVar2) * 8 |
           uVar17 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
           *(ulong *)((int)(puVar12 + 1) - uVar3) >> uVar3 * 8;
  puVar1 = (undefined *)((int)&(pfVar16->field0_0x0).m_aData[0].bEnableToChar + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar2);
  *puVar12 = *puVar12 & -1L << (uVar2 + 1) * 8 | uVar18 >> (7 - uVar2) * 8;
  uVar2 = (uint)pfVar16 & 7;
  *(ulong *)((int)pfVar16 - uVar2) =
       uVar18 << uVar2 * 8 |
       *(ulong *)((int)pfVar16 - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  puVar1 = (undefined *)((int)&(pfVar16->field0_0x0).m_aData[0].bEmulateToDirectionalLight + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar2);
  *puVar12 = *puVar12 & -1L << (uVar2 + 1) * 8 | uVar17 >> (7 - uVar2) * 8;
  local_6c = &iNumLightEnable;
  pLight = (G3DLIGHT *)&pLDSrc->aLight;
  piVar24 = &(pfVar16->field0_0x0).m_aData[0].bEnableToShadow;
  uVar2 = (uint)piVar24 & 7;
  puVar12 = (ulong *)((int)piVar24 - uVar2);
  *puVar12 = uVar17 << uVar2 * 8 | *puVar12 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  iVar13 = 0;
  do {
                    /* inlined from ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z16GRA3DLIGHTSTATUS_UiUi_PX01(iVar13,0x27);
    iVar21 = iNumLightEnable;
    piVar24 = (int *)uVar26;
                    /* end of inlined section */
    if ((*piVar24 != 0) && (piVar24[3] != 0)) {
      pGVar22 = raEmuDirLight + iNumLightEnable;
                    /* inlined from ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(iVar13,0x27);
      g3dEmulateDirectionalLight__FP33G3D_EMULATE_DIRECTIONALLIGHT_DATAPC8G3DLIGHTPCf
                (pGVar22,pLight,local_70);
                    /* end of inlined section */
      if (0.0 < raEmuDirLight[iVar21].fLength) {
        iNumLightEnable = iNumLightEnable + 1;
      }
    }
    iVar13 = iVar13 + 1;
    pLight = pLight + 1;
    uVar26 = (ulong)(int)(piVar24 + 4);
  } while (iVar13 < 0x27);
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_algo.h */
  pGVar22 = raEmuDirLight + iNumLightEnable;
  __comp = (greater__2_1751)0x0;
  __first = raEmuDirLight;
  if (raEmuDirLight != pGVar22) {
    iVar21 = 0;
    for (iVar13 = ((int)pGVar22 - (int)raEmuDirLight >> 4) * -0x55555555; iVar13 != 1;
        iVar13 = iVar13 >> 1) {
      iVar21 = iVar21 + 1;
    }
    __first = raEmuDirLight;
    __introsort_loop__H4ZP33G3D_EMULATE_DIRECTIONALLIGHT_DATAZ33G3D_EMULATE_DIRECTIONALLIGHT_DATAZiZQ233G3D_EMULATE_DIRECTIONALLIGHT_DATA7greater_X01X01PX11X21X31_v
              (raEmuDirLight,pGVar22,0,iVar21 << 1,0);
    __final_insertion_sort__H2ZP33G3D_EMULATE_DIRECTIONALLIGHT_DATAZQ233G3D_EMULATE_DIRECTIONALLIGHT_DATA7greater_X01X01X11_v
              (__first,pGVar22,__comp);
  }
                    /* inlined from ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(0,0x27);
                    /* end of inlined section */
  aDest = &pLDDest->aLight;
  iVar13 = 0;
                    /* inlined from ctl/fixed_array.h */
  g3dGenerateDirectionalLightByEmulatedData__FP8G3DLIGHTPC33G3D_EMULATE_DIRECTIONALLIGHT_DATAi
            ((G3DLIGHT *)aDest,raEmuDirLight,iNumLightEnable);
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_algobase.h */
  local_74 = 3;
  piVar24 = local_6c;
  if (3 < *local_6c) {
    piVar24 = &local_74;
  }
  iNumLightEnable = *piVar24;
                    /* end of inlined section */
  if (0 < iNumLightEnable) {
    do {
                    /* inlined from ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(iVar13,0x27);
                    /* inlined from g3dxVu0.h */
      auVar29 = _qmtc2(fMagnification);
      auVar28 = _lqc2(*(undefined (*) [16])(aDest->field0_0x0).m_aData[0].vDiffuse);
      auVar28 = _vmulbc(auVar28,auVar29);
      auVar28 = _sqc2(auVar28);
      *(undefined (*) [16])(aDest->field0_0x0).m_aData[0].vDiffuse = auVar28;
                    /* end of inlined section */
      iVar13 = iVar13 + 1;
      aDest = (fixed_array<G3DLIGHT,39> *)((aDest->field0_0x0).m_aData + 1);
    } while (iVar13 < iNumLightEnable);
  }
  iVar13 = 0;
  do {
                    /* inlined from ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z16GRA3DLIGHTSTATUS_UiUi_PX01(iVar13,0x27);
    pGVar14 = (pfVar25->field0_0x0).m_aData + iVar13;
                    /* end of inlined section */
                    /* end of inlined section */
    if ((pGVar14->bEmulateToDirectionalLight == 0) && (pGVar14->bEnable != 0)) {
      iVar21 = 1;
    }
    else if (iVar13 < 0) {
      iVar21 = 0;
    }
    else if (iVar13 < iNumLightEnable) {
      iVar21 = 1;
    }
    else {
      iVar21 = 0;
    }
                    /* inlined from ctl/fixed_array.h */
    iVar23 = iVar13 + 1;
    _fixed_array_verifyrange__H1Z16GRA3DLIGHTSTATUS_UiUi_PX01(iVar13,0x27);
                    /* end of inlined section */
                    /* end of inlined section */
    (pfVar27->field0_0x0).m_aData[iVar13].bEnable = iVar21;
    iVar13 = iVar23;
  } while (iVar23 < 0x27);
  return;
}

static void _SetClipValue(float minx, float maxx, float miny, float maxy) {
  clip_value[3] = maxy;
  clip_value[0] = minx;
  clip_value[1] = maxx;
  clip_value[2] = miny;
  return;
}

static int _GetClipValueCheck() {
	float vClip[4];
	
  int iVar1;
  float vClip [4];
  
  vClip._8_8_ = _DAT_003b44a8;
  vClip._0_8_ = DAT_003b44a0;
  iVar1 = memcmp(vClip,clip_value,0x10);
  return (int)(iVar1 != 0);
}

int gra3dIsBBInViewvolume(float *avBBTransformed[4], float *avBBClipped[4], float *avBBWorld[4]) {
	static char __FUNCTION__[22] = {
		/* [0] = */ 103,
		/* [1] = */ 114,
		/* [2] = */ 97,
		/* [3] = */ 51,
		/* [4] = */ 100,
		/* [5] = */ 73,
		/* [6] = */ 115,
		/* [7] = */ 66,
		/* [8] = */ 66,
		/* [9] = */ 73,
		/* [10] = */ 110,
		/* [11] = */ 86,
		/* [12] = */ 105,
		/* [13] = */ 101,
		/* [14] = */ 119,
		/* [15] = */ 118,
		/* [16] = */ 111,
		/* [17] = */ 108,
		/* [18] = */ 117,
		/* [19] = */ 109,
		/* [20] = */ 101,
		/* [21] = */ 0
	};
	
  int iVar1;
  
  iVar1 = _GetClipValueCheck__Fv();
  if (iVar1 != 0) {
    _SetLineInfo__FPCciT0T0
              (s_gra3d_c_003f1090,0x2a3,"gra3dIsBBInViewvolume","!_GetClipValueCheck()");
    iVar1 = _GetClipValueCheck__Fv();
    g3ddbgAssert__FbPCce(iVar1 == 0,&DAT_003f1098);
  }
  iVar1 = gra3dbbIsInViewvolume__FPA3_fPA3_Cf(avBBTransformed,avBBWorld);
  return (int)(iVar1 != 0);
}

int CheckModelBoundingBox(float *avBBWorld[4]) {
	float avWork[16][4];
	
  float afVar1 [4];
  float afVar2 [4];
  float afVar3 [4];
  float afVar4 [4];
  GRA3DCAMERA *pGVar5;
  int iVar6;
  float avWork [16] [4];
  
  pGVar5 = gra3dGetCamera__Fv();
  afVar1[0] = *(float *)((int)pGVar5->matWorldClipObject[0] + 0);
  afVar1[1] = *(float *)((int)pGVar5->matWorldClipObject[0] + 4);
  afVar1[2] = *(float *)((int)pGVar5->matWorldClipObject[0] + 8);
  afVar1[3] = *(float *)((int)pGVar5->matWorldClipObject[0] + 0xc);
  _lqc2((undefined  [16])afVar1);
  afVar2[0] = *(float *)((int)pGVar5->matWorldClipObject[1] + 0);
  afVar2[1] = *(float *)((int)pGVar5->matWorldClipObject[1] + 4);
  afVar2[2] = *(float *)((int)pGVar5->matWorldClipObject[1] + 8);
  afVar2[3] = *(float *)((int)pGVar5->matWorldClipObject[1] + 0xc);
  _lqc2((undefined  [16])afVar2);
  afVar3[0] = *(float *)((int)pGVar5->matWorldClipObject[2] + 0);
  afVar3[1] = *(float *)((int)pGVar5->matWorldClipObject[2] + 4);
  afVar3[2] = *(float *)((int)pGVar5->matWorldClipObject[2] + 8);
  afVar3[3] = *(float *)((int)pGVar5->matWorldClipObject[2] + 0xc);
  _lqc2((undefined  [16])afVar3);
  afVar4[0] = *(float *)((int)pGVar5->matWorldClipObject[3] + 0);
  afVar4[1] = *(float *)((int)pGVar5->matWorldClipObject[3] + 4);
  afVar4[2] = *(float *)((int)pGVar5->matWorldClipObject[3] + 8);
  afVar4[3] = *(float *)((int)pGVar5->matWorldClipObject[3] + 0xc);
  _lqc2((undefined  [16])afVar4);
  iVar6 = gra3dIsBBInViewvolume__FPA3_fT0PA3_Cf(avWork[8],avWork,avBBWorld);
  return (int)(iVar6 != 0);
}

void gra3dExecPrelight(SGDFILEHEADER *pSGDHead, float *vTrans, float *vRot) {
	static char __FUNCTION__[18] = {
		/* [0] = */ 103,
		/* [1] = */ 114,
		/* [2] = */ 97,
		/* [3] = */ 51,
		/* [4] = */ 100,
		/* [5] = */ 69,
		/* [6] = */ 120,
		/* [7] = */ 101,
		/* [8] = */ 99,
		/* [9] = */ 80,
		/* [10] = */ 114,
		/* [11] = */ 101,
		/* [12] = */ 108,
		/* [13] = */ 105,
		/* [14] = */ 103,
		/* [15] = */ 104,
		/* [16] = */ 116,
		/* [17] = */ 0
	};
	float *pm1[4];
	float vRot[4];
	float f;
	float f1;
	float f2;
	float f;
	float fRange;
	float f1;
	float f2;
	float f;
	float fRange;
	float f1;
	float f2;
	
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float local_50;
  float local_4c;
  float local_48;
  
  fVar2 = DAT_003ee3ac;
  if (pSGDHead == (SGDFILEHEADER *)0x0) {
    _SetLineInfo__FPCciT0T0(s_gra3d_c_003f1090,0x2df,"gra3dExecPrelight","(pSGDHead)");
    g3ddbgWarning__FbPCce(false,&DAT_003f1098);
    g3ddbgPrintf__FPCce("[G3DRETURN]%s(%d)(%s):%s\n");
  }
  else {
                    /* inlined from g3dMath.h */
    fVar1 = *vRot;
                    /* inlined from g3dxVu0.h */
                    /* inlined from g3dMath.h */
    fVar4 = DAT_003ee3ac;
    if (DAT_003ee3ac < fVar1) {
      fVar3 = DAT_003ee3b0;
      fVar1 = fmodf(fVar1,DAT_003ee3b0);
      fVar4 = DAT_003ee3b4;
      if (fVar2 < fVar1) {
        fVar1 = fVar1 - fVar3;
      }
      else if (fVar1 < -fVar2) {
        fVar1 = fVar1 + fVar3;
      }
    }
    fVar2 = vRot[1];
    local_50 = fVar1;
    if (fVar4 < fVar2) {
      fVar1 = DAT_003ee3b8;
      fVar2 = fmodf(fVar2,DAT_003ee3b8);
      if (fVar4 < fVar2) {
        fVar2 = fVar2 - fVar1;
      }
      else if (fVar2 < -fVar4) {
        fVar2 = fVar2 + fVar1;
      }
    }
    fVar4 = DAT_003ee3bc;
    fVar1 = vRot[2];
    local_4c = fVar2;
    if (DAT_003ee3bc < fVar1) {
      fVar2 = DAT_003ee3c0;
      fVar1 = fmodf(fVar1,DAT_003ee3c0);
      if (fVar4 < fVar1) {
        fVar1 = fVar1 - fVar2;
      }
      else if (fVar1 < -fVar4) {
        fVar1 = fVar1 + fVar2;
      }
    }
                    /* inlined from g3dxVu0.h */
    local_48 = fVar1;
                    /* inlined from g3dxVu0.h */
    sceVu0RotMatrix(0x70003900,0x3b50d0,&local_50);
    DAT_70003938 = vTrans[2];
    DAT_70003930 = (undefined4)*(undefined8 *)vTrans;
    DAT_70003934 = (undefined4)((ulong)*(undefined8 *)vTrans >> 0x20);
                    /* end of inlined section */
    DAT_7000393c = 0x3f800000;
    gra3dExecPrelight__FP13SGDFILEHEADERPA3_Cf(pSGDHead,(float (*) [4])&DAT_70003900);
  }
  return;
}

void gra3dExecPrelight(SGDFILEHEADER *pSGDHead, float *mat[4]) {
	static char __FUNCTION__[18] = {
		/* [0] = */ 103,
		/* [1] = */ 114,
		/* [2] = */ 97,
		/* [3] = */ 51,
		/* [4] = */ 100,
		/* [5] = */ 69,
		/* [6] = */ 120,
		/* [7] = */ 101,
		/* [8] = */ 99,
		/* [9] = */ 80,
		/* [10] = */ 114,
		/* [11] = */ 101,
		/* [12] = */ 108,
		/* [13] = */ 105,
		/* [14] = */ 103,
		/* [15] = */ 104,
		/* [16] = */ 116,
		/* [17] = */ 0
	};
	
  if (pSGDHead == (SGDFILEHEADER *)0x0) {
    _SetLineInfo__FPCciT0T0(s_gra3d_c_003f1090,0x2f6,"gra3dExecPrelight","(pSGDHead)");
    g3ddbgWarning__FbPCce(false,&DAT_003f1098);
    g3ddbgPrintf__FPCce("[G3DRETURN]%s(%d)(%s):%s\n");
    return;
  }
  if (pSGDHead->uiVersionId != 0x1050) {
    _SetLineInfo__FPCciT0T0
              (s_gra3d_c_003f1090,0x2f8,"gra3dExecPrelight",
               "pSGDHead->uiVersionId == SGD_VALID_VERSIONID");
    g3ddbgWarning__FbPCce(pSGDHead->uiVersionId == 0x1050,&DAT_003f1098);
    if (pSGDHead->uiVersionId != 0x1050) {
      g3ddbgPrintf__FPCce("[G3DRETURN]%s(%d)(%s):%s\n");
      return;
    }
  }
  if (mat[3][3] != 1.0) {
    _SetLineInfo__FPCciT0T0(s_gra3d_c_003f1090,0x2fb,"gra3dExecPrelight","mat[3][3] == 1.0f");
    g3ddbgAssert__FbPCce(mat[3][3] == 1.0,"mat[3][3] : %f");
  }
  if (pSGDHead->pCoord == (SGDCOORDINATE *)0x0) {
    _SetLineInfo__FPCciT0T0(s_gra3d_c_003f1090,0x2fc,"gra3dExecPrelight","pSGDHead->pCoord");
    g3ddbgAssert__FbPCce(pSGDHead->pCoord != (SGDCOORDINATE *)0x0,"no coord data");
  }
  sgdCalcCoordinate__FP13SGDFILEHEADERPA3_Cf(pSGDHead,mat);
  _gra3dDrawSGD__FP13SGDFILEHEADER13SGDRENDERTYPEP13SGDCOORDINATEi
            (pSGDHead,SRT_PRELIGHTING,(SGDCOORDINATE *)0x0,-1);
  pSGDHead->pCoord->bCalc = 0;
  return;
}

GRA3DCAMERA* gra3dGetCamera() {
  return &s_Camera;
}

float&[4] gra3dcamGetPosition() {
  GRA3DCAMERA *pGVar1;
  
  pGVar1 = gra3dGetCamera__Fv();
  return pGVar1->matCoord[3];
}

float&[4] gra3dcamGetDirection() {
  GRA3DCAMERA *pGVar1;
  
  pGVar1 = gra3dGetCamera__Fv();
  return pGVar1->matCoord[2];
}

float&[4] gra3dcamGetTarget() {
  GRA3DCAMERA *pGVar1;
  
  pGVar1 = gra3dGetCamera__Fv();
  return (float (*) [4])pGVar1->vTarget;
}

void gra3dcamSetPosition(float *vPos) {
                    /* inlined from g3dxVu0.h */
                    /* end of inlined section */
                    /* inlined from g3dxVu0.h */
                    /* end of inlined section */
                    /* inlined from g3dxVu0.h */
  s_Camera.vPositionOld[0] = s_Camera.matCoord[3][0];
  s_Camera.vPositionOld[1] = s_Camera.matCoord[3][1];
  s_Camera.vPositionOld[2] = s_Camera.matCoord[3][2];
  s_Camera.vPositionOld[3] = s_Camera.matCoord[3][3];
                    /* end of inlined section */
  g3dMatrixSetPosition__FPA3_fPCf(s_Camera.matCoord,vPos);
  return;
}

void gra3dcamSetPosition(float x, float y, float z) {
	float v[4];
	
  float v [4];
  
  v[3] = 1.0;
  v[0] = x;
  v[1] = y;
  v[2] = z;
  gra3dcamSetPosition__FPCf(v);
  return;
}

float&[4] gra3dcamGetPositionOld() {
  return (float (*) [4])s_Camera.vPositionOld;
}

static void _ResetCameraTarget() {
	float *pvDir;
	
  undefined in_vf1 [16];
  undefined auVar1 [16];
  undefined auVar2 [16];
  
                    /* inlined from g3dxVu0.h */
  auVar1 = _lqc2((undefined  [16])s_Camera.matCoord[3]);
  auVar2 = _lqc2((undefined  [16])s_Camera.vTarget);
  auVar1 = _vsub(auVar1,auVar2);
  auVar1 = _vmul(auVar1,auVar1);
  _vaddabc(auVar1,auVar1);
  _vmaddbc(in_vf1,auVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

void gra3dcamSetCoord(float *mat[4]) {
                    /* inlined from g3dxVu0.h */
                    /* end of inlined section */
                    /* inlined from g3dxVu0.h */
  s_Camera.matCoord[0][0] = (*mat)[0];
  s_Camera.matCoord[0][1] = (*mat)[1];
  s_Camera.matCoord[0][2] = (*mat)[2];
  s_Camera.matCoord[0][3] = (*mat)[3];
  s_Camera.matCoord[1][0] = mat[1][0];
  s_Camera.matCoord[1][1] = mat[1][1];
  s_Camera.matCoord[1][2] = mat[1][2];
  s_Camera.matCoord[1][3] = mat[1][3];
  s_Camera.matCoord[2][0] = mat[2][0];
  s_Camera.matCoord[2][1] = mat[2][1];
  s_Camera.matCoord[2][2] = mat[2][2];
  s_Camera.matCoord[2][3] = mat[2][3];
                    /* end of inlined section */
  _ResetCameraTarget__Fv();
  return;
}

void gra3dcamSetTarget(float *vTarget, int bFixUp) {
	float *pv0;
	
                    /* end of inlined section */
  g3dMatrixSetTarget__FPA3_fPCfi(s_Camera.matCoord,vTarget,bFixUp);
                    /* inlined from g3dxVu0.h */
  s_Camera.vTarget[0] = (float)*(undefined8 *)vTarget;
  s_Camera.vTarget[1] = (float)((ulong)*(undefined8 *)vTarget >> 0x20);
  s_Camera.vTarget[2] = vTarget[2];
  s_Camera.vTarget[3] = vTarget[3];
  return;
}

void gra3dcamSetTarget(float x, float y, float z, int bFixUp) {
	float v[4];
	
  float v [4];
  
  v[3] = 1.0;
  v[0] = x;
  v[1] = y;
  v[2] = z;
  gra3dcamSetTarget__FPCfi(v,bFixUp);
  return;
}

void gra3dcamSetRoll(float fRad) {
  g3dMatrixSetRoll__FPA3_ff(s_Camera.matCoord,fRad);
  _ResetCameraTarget__Fv();
  return;
}

float gra3dcamGetRoll() {
  float fVar1;
  
  fVar1 = g3dMatrixGetRoll__FPA3_Cf(s_Camera.matCoord);
  return fVar1;
}

void gra3dcamRotationByAxis(float *vAxis, float fAngle) {
  g3dMatrixRotationByAxis__FPA3_fPCff(s_Camera.matCoord,vAxis,fAngle);
  _ResetCameraTarget__Fv();
  return;
}

int gra3dGetNumLightEnable(GRA3DLIGHTDATA *pLD, int iLightType) {
	int iRet;
	int iEnd;
	int i;
	
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  GRA3DLIGHTSTATUS *pGVar6;
  
  if (iLightType == 3) {
    return 1;
  }
                    /* end of inlined section */
                    /* inlined from gra3dTypes.h */
  iVar3 = 3;
  if (iLightType != 1) {
    if (iLightType < 2) {
      iVar3 = 0;
      if (iLightType == 0) goto LAB_001b1674;
    }
    else {
      iVar3 = 0x16;
      if (iLightType == 2) goto LAB_001b1674;
    }
    iVar3 = 0x7fffffff;
  }
LAB_001b1674:
  iVar2 = 0x13;
  if (iLightType != 1) {
    if (iLightType < 2) {
      iVar2 = 3;
      if (iLightType != 0) {
        iVar2 = 0;
      }
    }
    else {
      iVar2 = 0x11;
      if (iLightType != 2) {
        iVar2 = 0;
      }
    }
  }
                    /* end of inlined section */
  iVar1 = 0;
  if (iVar3 < iVar3 + iVar2) {
    pGVar6 = (pLD->aStatus).field0_0x0.m_aData + iVar3;
    iVar1 = 0;
    iVar4 = iVar3;
    do {
                    /* inlined from ctl/fixed_array.h */
                    /* end of inlined section */
      iVar5 = iVar4 + 1;
                    /* inlined from ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z16GRA3DLIGHTSTATUS_UiUi_PX01(iVar4,0x27);
                    /* end of inlined section */
                    /* inlined from ctl/fixed_array.h */
      if (pGVar6->bEnable != 0) {
        iVar1 = iVar1 + 1;
      }
      pGVar6 = pGVar6 + 1;
      iVar4 = iVar5;
                    /* end of inlined section */
    } while (iVar5 < iVar3 + iVar2);
  }
  return iVar1;
}

int gra3dGetNumLightInitial(GRA3DLIGHTDATA *pLD, int iLightType) {
  int iVar1;
  
  iVar1 = 1;
  if ((iLightType != 3) && (iVar1 = 0, pLD != (GRA3DLIGHTDATA *)0x0)) {
                    /* inlined from ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(iLightType,3);
    iVar1 = (pLD->aiNumInitial).field0_0x0.m_aData[iLightType];
  }
                    /* end of inlined section */
  return iVar1;
}

void utilSetGRA3DLIGHTDATADefault(GRA3DLIGHTDATA *pLD) {
	int i;
	
  G3DLIGHTTYPE iLightType;
  uint uVar1;
  G3DLIGHT *pLight;
  
  memset(pLD,0,0x13a0);
  pLight = (G3DLIGHT *)&pLD->aLight;
  uVar1 = 0;
  do {
                    /* inlined from ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(uVar1,0x27);
                    /* inlined from gra3dTypes.h */
    iLightType = G3DLIGHT_DIRECTIONAL;
    if (((2 < uVar1) && (iLightType = G3DLIGHT_POINT, 0x12 < uVar1 - 3)) &&
       (iLightType = G3DLIGHT_SPOT, 0x10 < uVar1 - 0x16)) {
      iLightType = G3DLIGHTTYPE_FORCE_DWORD;
    }
    uVar1 = uVar1 + 1;
    g3dutilSetLightDefault__FP8G3DLIGHT12G3DLIGHTTYPE(pLight,iLightType);
                    /* end of inlined section */
    pLight = pLight + 1;
  } while ((int)uVar1 < 0x27);
  return;
}

void gra3dSetGsRegisterDefault() {
	sceGifPackAd aGPA[5];
	
  _sceGifPackAd *p_Var1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  _sceGifPackAd aGPA [5];
  
  p_Var1 = aGPA;
  puVar2 = &DAT_003b4600;
  do {
    puVar3 = puVar2;
    puVar4 = &p_Var1->DATA;
    uVar5 = puVar3[1];
    uVar6 = puVar3[2];
    uVar7 = puVar3[3];
    *puVar4 = *puVar3;
    puVar4[1] = uVar5;
    puVar4[2] = uVar6;
    puVar4[3] = uVar7;
    p_Var1 = (_sceGifPackAd *)(puVar4 + 4);
    puVar2 = puVar3 + 4;
  } while (puVar3 + 4 != (undefined8 *)&UNK_003b4640);
  uVar5 = puVar3[5];
  puVar4[4] = _UNK_003b4640;
  puVar4[5] = uVar5;
  gra3dSetGsRegisters__FPC13_sceGifPackAdii(aGPA,5);
  return;
}

static void _GetCameraDirectionInverse(float *v) {
	float sc;
	
  undefined in_vf0 [16];
  undefined in_vf1 [16];
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined4 uVar3;
  
                    /* inlined from g3dxVu0.h */
  auVar1 = _lqc2((undefined  [16])s_Camera.matCoord[2]);
  auVar2 = _vmul(auVar1,auVar1);
  _vnop();
  _vnop();
  _vnop();
  _vaddabc(auVar2,auVar2);
  auVar2 = _vmaddbc(in_vf1,auVar2);
  _vnop();
  _vnop();
  _vnop();
  uVar3 = _vrsqrt(in_vf0,auVar2);
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
  auVar1 = _vmulq(auVar1,uVar3);
  auVar1 = _sqc2(auVar1);
  *(undefined (*) [16])v = auVar1;
  auVar2 = _qmtc2(0xbf800000);
  auVar1 = _lqc2(*(undefined (*) [16])v);
  auVar1 = _vmulbc(auVar1,auVar2);
  auVar1 = _sqc2(auVar1);
  *(undefined (*) [16])v = auVar1;
  return;
}

static void _StabilizeCamera(GRA3DCAMERA *pCam, int bFixup) {
  float afVar1 [4];
  float afVar2 [4];
  float afVar3 [4];
  float (*pafVar4) [4];
  float (*mat) [4];
  undefined in_vf0 [16];
  undefined in_vf1 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined4 uVar7;
  
                    /* inlined from g3dxVu0.h */
  mat = pCam->matCoord;
  afVar3[0] = *(float *)((int)mat + 0);
  afVar3[1] = *(float *)((int)mat + 4);
  afVar3[2] = *(float *)((int)mat + 8);
  afVar3[3] = *(float *)((int)mat + 0xc);
  auVar5 = _lqc2((undefined  [16])afVar3);
  auVar6 = _vmul(auVar5,auVar5);
  _vaddabc(auVar6,auVar6);
  auVar6 = _vmaddbc(in_vf1,auVar6);
  _vrsqrt(in_vf0,auVar6);
  _vmul(auVar5,in_vf0);
  uVar7 = _vwaitq();
  auVar5 = _vmulq(auVar5,uVar7);
  afVar3 = (float  [4])_sqc2(auVar5);
  *(float *)((int)mat + 0) = afVar3[0];
  *(float *)((int)mat + 4) = afVar3[1];
  *(float *)((int)mat + 8) = afVar3[2];
  *(float *)((int)mat + 0xc) = afVar3[3];
  pafVar4 = pCam->matCoord[1];
  afVar1[0] = *(float *)((int)pafVar4 + 0);
  afVar1[1] = *(float *)((int)pafVar4 + 4);
  afVar1[2] = *(float *)((int)pafVar4 + 8);
  afVar1[3] = *(float *)((int)pafVar4 + 0xc);
  auVar5 = _lqc2((undefined  [16])afVar1);
  auVar6 = _vmul(auVar5,auVar5);
  _vaddabc(auVar6,auVar6);
  auVar6 = _vmaddbc(in_vf1,auVar6);
  _vrsqrt(in_vf0,auVar6);
  _vmul(auVar5,in_vf0);
  uVar7 = _vwaitq();
  auVar5 = _vmulq(auVar5,uVar7);
  afVar3 = (float  [4])_sqc2(auVar5);
  *(float *)((int)pafVar4 + 0) = afVar3[0];
  *(float *)((int)pafVar4 + 4) = afVar3[1];
  *(float *)((int)pafVar4 + 8) = afVar3[2];
  *(float *)((int)pafVar4 + 0xc) = afVar3[3];
  pafVar4 = pCam->matCoord[2];
  afVar2[0] = *(float *)((int)pafVar4 + 0);
  afVar2[1] = *(float *)((int)pafVar4 + 4);
  afVar2[2] = *(float *)((int)pafVar4 + 8);
  afVar2[3] = *(float *)((int)pafVar4 + 0xc);
  auVar5 = _lqc2((undefined  [16])afVar2);
  auVar6 = _vmul(auVar5,auVar5);
  _vaddabc(auVar6,auVar6);
  auVar6 = _vmaddbc(in_vf1,auVar6);
  _vrsqrt(in_vf0,auVar6);
  _vmul(auVar5,in_vf0);
  uVar7 = _vwaitq();
  auVar5 = _vmulq(auVar5,uVar7);
  afVar3 = (float  [4])_sqc2(auVar5);
  *(float *)((int)pafVar4 + 0) = afVar3[0];
  *(float *)((int)pafVar4 + 4) = afVar3[1];
  *(float *)((int)pafVar4 + 8) = afVar3[2];
  *(float *)((int)pafVar4 + 0xc) = afVar3[3];
                    /* end of inlined section */
  pCam->matCoord[3][3] = 1.0;
  g3dMatrixSetTarget__FPA3_fPCfi(mat,pCam->vTarget,bFixup);
  return;
}

void gra3dCalcWorldScreenMatrix(float *mat[4], GRA3DCAMERA *pCam, int bFixup) {
	static char __FUNCTION__[27] = {
		/* [0] = */ 103,
		/* [1] = */ 114,
		/* [2] = */ 97,
		/* [3] = */ 51,
		/* [4] = */ 100,
		/* [5] = */ 67,
		/* [6] = */ 97,
		/* [7] = */ 108,
		/* [8] = */ 99,
		/* [9] = */ 87,
		/* [10] = */ 111,
		/* [11] = */ 114,
		/* [12] = */ 108,
		/* [13] = */ 100,
		/* [14] = */ 83,
		/* [15] = */ 99,
		/* [16] = */ 114,
		/* [17] = */ 101,
		/* [18] = */ 101,
		/* [19] = */ 110,
		/* [20] = */ 77,
		/* [21] = */ 97,
		/* [22] = */ 116,
		/* [23] = */ 114,
		/* [24] = */ 105,
		/* [25] = */ 120,
		/* [26] = */ 0
	};
	float fScrZ;
	
  G3DCAMPROJECTIONTYPE GVar1;
  float fVar2;
  
  _StabilizeCamera__FP11GRA3DCAMERAi(pCam,bFixup);
  fVar2 = tanf(pCam->fFov * 0.5);
  sceVu0CameraMatrix(0x70003900,pCam->matCoord[3],pCam->matCoord[2],pCam->matCoord[1]);
  GVar1 = pCam->type;
  if (1 < (uint)GVar1) {
    _SetLineInfo__FPCciT0T0
              (s_gra3d_c_003f1090,0x40c,"gra3dCalcWorldScreenMatrix",
               "pCam->type < NUM_G3DCAMPROJECTIONTYPE");
    g3ddbgAssert__FbPCce((uint)pCam->type < 2,&DAT_003f1098);
    GVar1 = pCam->type;
  }
  (*(code *)s_apViewScreenMatrixFunc[GVar1])
            (224.0 / fVar2,pCam->fAspectX,pCam->fAspectY,pCam->fCenterX,pCam->fCenterY,pCam->fZmin,
             pCam->fZmax,pCam->fNearZ,0x70003940);
  sceVu0MulMatrix(mat,0x70003940,0x70003900);
  return;
}

void gra3dApplyCamera(GRA3DCAMERA *pCam, int bFixup) {
	static char __FUNCTION__[17] = {
		/* [0] = */ 103,
		/* [1] = */ 114,
		/* [2] = */ 97,
		/* [3] = */ 51,
		/* [4] = */ 100,
		/* [5] = */ 65,
		/* [6] = */ 112,
		/* [7] = */ 112,
		/* [8] = */ 108,
		/* [9] = */ 121,
		/* [10] = */ 67,
		/* [11] = */ 97,
		/* [12] = */ 109,
		/* [13] = */ 101,
		/* [14] = */ 114,
		/* [15] = */ 97,
		/* [16] = */ 0
	};
	float fScrZ;
	
  G3DCAMPROJECTIONTYPE GVar1;
  float fVar2;
  float fVar3;
  
  if (pCam == (GRA3DCAMERA *)0x0) {
    pCam = &s_Camera;
  }
  fVar3 = 224.0;
  _StabilizeCamera__FP11GRA3DCAMERAi(pCam,bFixup);
  fVar2 = tanf(pCam->fFov * 0.5);
  fVar2 = fVar3 / fVar2;
  sceVu0CameraMatrix(0x70003900,pCam->matCoord[3],pCam->matCoord[2],pCam->matCoord[1]);
  GVar1 = pCam->type;
  if (1 < (uint)GVar1) {
    _SetLineInfo__FPCciT0T0
              (s_gra3d_c_003f1090,0x436,"gra3dApplyCamera","pCam->type < NUM_G3DCAMPROJECTIONTYPE");
    g3ddbgAssert__FbPCce((uint)pCam->type < 2,&DAT_003f1098);
    GVar1 = pCam->type;
  }
  (*(code *)s_apViewScreenMatrixFunc[GVar1])
            (fVar2,pCam->fAspectX,pCam->fAspectY,pCam->fCenterX,pCam->fCenterY,pCam->fZmin,
             pCam->fZmax,pCam->fNearZ,0x70003940);
  (*(code *)s_apViewClipMatrixFunc[pCam->type])
            (fVar2,pCam->fAspectX,pCam->fAspectY,pCam->fNearZ,pCam->fFarZ,0x44f00000,0x44e00000,
             pCam->matViewClipPolygon);
  (*(code *)s_apViewClipMatrixFunc[pCam->type])
            (fVar2,pCam->fAspectX,pCam->fAspectY,pCam->fNearZ,pCam->fFarZ,0x43a00000,fVar3,
             pCam->matViewClipObject);
  sceVu0MulMatrix(pCam->matWorldScreen,0x70003940,0x70003900);
  sceVu0MulMatrix(pCam->matWorldClipPolygon,pCam->matViewClipPolygon,0x70003900);
  sceVu0MulMatrix(pCam->matWorldClipObject,pCam->matViewClipObject,0x70003900);
  gra3dSetTransform__F23GRA3DTRANSFORMSTATETYPEPA3_Cf(GRA3DTS_VIEW,(float (*) [4])&DAT_70003900);
  gra3dSetTransform__F23GRA3DTRANSFORMSTATETYPEPA3_Cf
            (GRA3DTS_PROJECTION,(float (*) [4])&DAT_70003940);
  return;
}

void _gra3dSetCameraForce(GRA3DCAMERA *pCamera) {
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  GRA3DCAMERA *pGVar8;
  GRA3DCAMERA *pGVar9;
  
  pGVar9 = pCamera + 1;
  pGVar8 = &s_Camera;
  do {
    fVar1 = pCamera->fNearZ;
    fVar2 = pCamera->fFarZ;
    fVar3 = pCamera->fAspectX;
    fVar4 = pCamera->fAspectY;
    fVar5 = pCamera->fCenterX;
    fVar6 = pCamera->fCenterY;
    fVar7 = pCamera->fZmin;
    pGVar8->fFov = pCamera->fFov;
    pGVar8->fNearZ = fVar1;
    pGVar8->fFarZ = fVar2;
    pGVar8->fAspectX = fVar3;
    pGVar8->fAspectY = fVar4;
    pGVar8->fCenterX = fVar5;
    pGVar8->fCenterY = fVar6;
    pGVar8->fZmin = fVar7;
    pCamera = (GRA3DCAMERA *)&pCamera->fZmax;
    pGVar8 = (GRA3DCAMERA *)&pGVar8->fZmax;
  } while (pCamera != pGVar9);
  return;
}

void gra3dcamSetFov(float fFov) {
  s_Camera.fFov = fFov;
  return;
}

float gra3dcamGetFov() {
  return s_Camera.fFov;
}

void gra3dcamSetAspect(float fX, float fY) {
  int iVar1;
  
  s_Camera.fAspectX = fX;
  s_Camera.fAspectY = fY;
  iVar1 = GetPALMode__Fv();
  if (iVar1 != 0) {
    s_Camera.fAspectY = s_Camera.fAspectY * DAT_003ee3c4;
  }
  return;
}

void gra3dcamSetDepth(float fMinZ, float fMaxZ) {
  s_Camera.fZmax = fMaxZ;
  s_Camera.fZmin = fMinZ;
  return;
}

void gra3dcamSetClip(float fNearZ, float fFarZ) {
  s_Camera.fFarZ = fFarZ;
  s_Camera.fNearZ = fNearZ;
  return;
}

void gra3dcamSetType(G3DCAMPROJECTIONTYPE type) {
	static char __FUNCTION__[16] = {
		/* [0] = */ 103,
		/* [1] = */ 114,
		/* [2] = */ 97,
		/* [3] = */ 51,
		/* [4] = */ 100,
		/* [5] = */ 99,
		/* [6] = */ 97,
		/* [7] = */ 109,
		/* [8] = */ 83,
		/* [9] = */ 101,
		/* [10] = */ 116,
		/* [11] = */ 84,
		/* [12] = */ 121,
		/* [13] = */ 112,
		/* [14] = */ 101,
		/* [15] = */ 0
	};
	
  if (1 < (uint)type) {
    _SetLineInfo__FPCciT0T0
              (s_gra3d_c_003f1090,0x4b1,"gra3dcamSetType",
               "type == PT_PERSPECTIVE || type == PT_ORTHO");
    g3ddbgAssert__FbPCce(false,s_type__d_003f10a0);
  }
  s_Camera.type = type;
  return;
}

float&[4] _GetClipVolume() {
  return (float (*) [4])clip_volume;
}

float&[4] _GetClipVolumeV() {
  return (float (*) [4])clip_volumev;
}

void gra3dSetFog(float fMin, float fMax, float fNear, float fFar) {
  s_Fog.fFar = fFar;
  s_Fog.fMin = fMin;
  s_Fog.fMax = fMax;
  s_Fog.fNear = fNear;
  return;
}

void gra3dSetFog(G3DFOG *pFog) {
  s_Fog.fMin = pFog->fMin;
  s_Fog.fMax = pFog->fMax;
  s_Fog.fNear = pFog->fNear;
  s_Fog.fFar = pFog->fFar;
  return;
}

void gra3dSetFogColor(int r, int g, int b) {
  s_ivFogColor[3] = 0;
  s_ivFogColor[0] = r;
  s_ivFogColor[1] = g;
  s_ivFogColor[2] = b;
  _MakeColorToMonotone__FPi(s_ivFogColor);
  gra3dSetGsRegister__Flli
            ((long)s_ivFogColor[0] | (long)s_ivFogColor[1] << 8 | (long)s_ivFogColor[2] << 0x10,0x3d
            );
  return;
}

void gra3dApplyFog() {
  g3dCalcVu1Fog__FP9G3DVU1FOGPC6G3DFOG(&(s_pScratchpadLayout->Vu1Mem).Direct.Fog,&s_Fog);
  return;
}

G3DFOG& gra3dGetFogRef() {
  return &s_Fog;
}

int gra3dIsFogEnable() {
  return s_bFogEnable;
}

static void _ModifyFogParam() {
  GRA3DVU1MEMLAYOUT *pGVar1;
  GRA3DSCRATCHPADLAYOUT *pGVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  pGVar2 = s_pScratchpadLayout;
  pGVar1 = &s_pScratchpadLayout->Vu1Mem;
  uVar5 = *(ulong *)((int)&s_pScratchpadLayout->Vu1Mem + 0x40);
  uVar3 = ((long)s_bFogEnable & 1U) << 0x34;
  uVar4 = *(ulong *)((int)&s_pScratchpadLayout->Vu1Mem + 0x60);
  *(ulong *)((int)&s_pScratchpadLayout->Vu1Mem + 0x70) =
       *(ulong *)((int)&s_pScratchpadLayout->Vu1Mem + 0x70) & 0xffefffffffffffff | uVar3;
  *(ulong *)((int)&pGVar2->Vu1Mem + 0x30) =
       *(ulong *)((int)pGVar1 + 0x30) & 0xffefffffffffffff | uVar3;
  *(ulong *)((int)&pGVar2->Vu1Mem + 0x40) = uVar5 & 0xffefffffffffffff | uVar3;
  *(ulong *)((int)&pGVar2->Vu1Mem + 0x60) = uVar4 & 0xffefffffffffffff | uVar3;
  return;
}

void gra3dEnableFog(int b) {
  if (s_bFogEnable != b) {
    s_bFogEnable = b;
    _ModifyFogParam__Fv();
  }
  return;
}

void g3dCalcVu1Fog(G3DVU1FOG *pVu1Fog, G3DFOG *pFog) {
  float fVar1;
  
  pVu1Fog->fMin = pFog->fMin;
  pVu1Fog->fMax = pFog->fMax;
  fVar1 = g3dCalcFA__FPC6G3DFOG(pFog);
  pVu1Fog->FA = fVar1;
  fVar1 = g3dCalcFB__FPC6G3DFOG(pFog);
  pVu1Fog->FB = fVar1;
  return;
}

float g3dCalcFA(G3DFOG *pFog) {
  return (((pFog->fMin - pFog->fMax) * (pFog->fFar + pFog->fNear)) / (pFog->fFar - pFog->fNear) +
         pFog->fMin + pFog->fMax) * 0.5;
}

float g3dCalcFB(G3DFOG *pFog) {
  return (pFog->fFar * pFog->fNear * (pFog->fMax - pFog->fMin)) / (pFog->fFar - pFog->fNear);
}

int gra3dIsMonotoneDrawEnable() {
  return s_bEnableMonotoneDraw;
}

void gra3dMonotoneDrawEnable(int bEnable) {
  s_bEnableMonotoneDraw = bEnable;
  return;
}

void _ClearMaterialData(void *pMatData) {
  memset(pMatData,0,0x150);
  return;
}

void gra3dSetValidLightId(int iLightType, unsigned int iIndex, int iLightTypeIndex) {
  if (iLightType == 1) {
    if (iLightTypeIndex == 0x7fffffff) {
      g3dLightEnable__Fii(iIndex + 3,0);
      return;
    }
    g3dSetLight__FiPC8G3DLIGHT(iIndex + 3,s_aLight + iLightTypeIndex + 3);
    g3dLightEnable__Fii(iIndex + 3,1);
  }
  else if (iLightType == 2) {
    if (iLightTypeIndex == 0x7fffffff) {
      g3dLightEnable__Fii(iIndex + 6,0);
      return;
    }
    g3dSetLight__FiPC8G3DLIGHT(iIndex + 6,s_aLight + iLightTypeIndex + 0x16);
    g3dLightEnable__Fii(iIndex + 6,1);
    return;
  }
  return;
}

static void _UpdateLight_Directional() {
	float vCamDirInverse[4];
	int i;
	float vNormalizedDir[4];
	float vTemp[4];
	G3DLIGHT &rLight;
	
  float afVar1 [4];
  undefined8 uVar2;
  GRA3DCAMERA *pGVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  int iCol;
  int iVar11;
  undefined4 uVar12;
  undefined in_vf0 [16];
  undefined extraout_vf1 [16];
  undefined extraout_vf1_00 [16];
  undefined auVar13 [16];
  undefined auVar14 [16];
  undefined auVar15 [16];
  float vCamDirInverse [4];
  float vNormalizedDir [4];
  float vTemp [4];
  
  pGVar3 = gra3dGetCamera__Fv();
                    /* inlined from g3dxVu0.h */
  auVar15 = _qmtc2(0xbf800000);
  afVar1[0] = *(float *)((int)pGVar3->matCoord[2] + 0);
  afVar1[1] = *(float *)((int)pGVar3->matCoord[2] + 4);
  afVar1[2] = *(float *)((int)pGVar3->matCoord[2] + 8);
  afVar1[3] = *(float *)((int)pGVar3->matCoord[2] + 0xc);
  auVar14 = _lqc2((undefined  [16])afVar1);
  auVar14 = _vmulbc(auVar14,auVar15);
  auVar14 = _sqc2(auVar14);
                    /* inlined from gra3dVu0.h */
  s_lmDiffuseLight[0] = (float  [4])_sqc2(in_vf0);
  s_lmDiffuseLight[1] = (float  [4])_sqc2(in_vf0);
  s_lmDiffuseLight[2] = (float  [4])_sqc2(in_vf0);
  s_lmSpecularLight[0] = (float  [4])_sqc2(in_vf0);
  s_lmSpecularLight[1] = (float  [4])_sqc2(in_vf0);
  s_lmSpecularLight[2] = (float  [4])_sqc2(in_vf0);
  s_lmDiffuseColor[0] = (float  [4])_sqc2(in_vf0);
  s_lmDiffuseColor[1] = (float  [4])_sqc2(in_vf0);
  s_lmDiffuseColor[2] = (float  [4])_sqc2(in_vf0);
  s_lmSpecularColor[0] = (float  [4])_sqc2(in_vf0);
  s_lmSpecularColor[1] = (float  [4])_sqc2(in_vf0);
  s_lmSpecularColor[2] = (float  [4])_sqc2(in_vf0);
                    /* end of inlined section */
  iCol = 0;
  iVar11 = 0;
  do {
                    /* inlined from ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z16GRA3DLIGHTSTATUS_UiUi_PX01(iCol,0x27);
                    /* end of inlined section */
    if (s_LightManage.aStatus.field0_0x0.m_aData[iCol].bEnable != 0) {
      iVar8 = 3;
      puVar6 = (undefined8 *)((int)s_aLight[0].vDiffuse + iVar11);
      puVar7 = (undefined8 *)((int)s_aLight[0].vSpecular + iVar11);
      puVar5 = puVar6;
      puVar4 = puVar7;
      do {
        uVar12 = *(undefined4 *)puVar5;
        puVar5 = (undefined8 *)((int)puVar5 + 4);
        iVar8 = iVar8 + -1;
        *(undefined4 *)puVar4 = uVar12;
        puVar4 = (undefined8 *)((int)puVar4 + 4);
      } while (iVar8 != -1);
                    /* inlined from g3dxVu0.h */
      uVar2 = *puVar6;
      fVar9 = *(float *)((int)s_aLight[0].vDiffuse + iVar11 + 8);
      fVar10 = *(float *)((int)s_aLight[0].vDiffuse + iVar11 + 0xc);
      s_lmDiffuseColor[iCol][0] = (float)uVar2;
      s_lmDiffuseColor[iCol][1] = (float)((ulong)uVar2 >> 0x20);
      s_lmDiffuseColor[iCol][2] = fVar9;
      s_lmDiffuseColor[iCol][3] = fVar10;
      uVar2 = *puVar7;
      fVar9 = *(float *)((int)s_aLight[0].vSpecular + iVar11 + 8);
      fVar10 = *(float *)((int)s_aLight[0].vSpecular + iVar11 + 0xc);
      s_lmSpecularColor[iCol][0] = (float)uVar2;
      s_lmSpecularColor[iCol][1] = (float)((ulong)uVar2 >> 0x20);
      s_lmSpecularColor[iCol][2] = fVar9;
      s_lmSpecularColor[iCol][3] = fVar10;
      auVar15 = _lqc2(*(undefined (*) [16])((int)s_aLight[0].vDirection + iVar11));
      auVar13 = _vmul(auVar15,auVar15);
      _vnop();
      _vnop();
      _vnop();
      _vaddabc(auVar13,auVar13);
      auVar13 = _vmaddbc(extraout_vf1,auVar13);
      _vnop();
      _vnop();
      _vnop();
      uVar12 = _vrsqrt(in_vf0,auVar13);
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
      auVar15 = _vmulq(auVar15,uVar12);
      vNormalizedDir = (float  [4])_sqc2(auVar15);
                    /* end of inlined section */
      g3dMatrixSetColumnXYZ__FPA3_fPCfi(s_lmDiffuseLight,vNormalizedDir,iCol);
                    /* inlined from g3dxVu0.h */
      auVar15 = _lqc2(auVar14);
      auVar13 = _lqc2((undefined  [16])vNormalizedDir);
      auVar15 = _vadd(auVar15,auVar13);
      auVar15 = _sqc2(auVar15);
      auVar15 = _lqc2(auVar15);
      auVar13 = _vmul(auVar15,auVar15);
      _vnop();
      _vnop();
      _vnop();
      _vaddabc(auVar13,auVar13);
      auVar13 = _vmaddbc(extraout_vf1_00,auVar13);
      _vnop();
      _vnop();
      _vnop();
      uVar12 = _vrsqrt(in_vf0,auVar13);
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
      auVar15 = _vmulq(auVar15,uVar12);
      vTemp = (float  [4])_sqc2(auVar15);
                    /* end of inlined section */
      g3dMatrixSetColumnXYZ__FPA3_fPCfi(s_lmSpecularLight,vTemp,iCol);
    }
    iCol = iCol + 1;
    iVar11 = iVar11 + 0x70;
  } while (iCol < 3);
  s_lmDiffuseColor[0][3] = 1.0;
  return;
}

static void _UpdateLight_Point() {
	int i;
	G3DLIGHT &rLight;
	
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  GRA3DLIGHTSTATUS *pGVar6;
  undefined4 uVar7;
  
  iVar4 = 0;
  iVar5 = 0x150;
  pGVar6 = s_LightManage.aStatus.field0_0x0.m_aData + 3;
  do {
                    /* inlined from ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z16GRA3DLIGHTSTATUS_UiUi_PX01(iVar4 + 3,0x27);
                    /* end of inlined section */
    puVar1 = (undefined4 *)((int)s_aLight[0].vDiffuse + iVar5);
    if (pGVar6->bEnable != 0) {
      iVar3 = 3;
      puVar2 = (undefined4 *)((int)s_aLight[0].vSpecular + iVar5);
      do {
        uVar7 = *puVar1;
        puVar1 = puVar1 + 1;
        iVar3 = iVar3 + -1;
        *puVar2 = uVar7;
        puVar2 = puVar2 + 1;
      } while (iVar3 != -1);
      *(undefined4 *)((int)s_aLight[0].vSpecular + iVar5 + 0xc) = 0;
      *(undefined4 *)((int)s_aLight[0].vDiffuse + iVar5 + 0xc) = 0;
    }
    iVar4 = iVar4 + 1;
    iVar5 = iVar5 + 0x70;
    pGVar6 = pGVar6 + 1;
  } while (iVar4 < 0x13);
  return;
}

static void _UpdateLight_Spot() {
	int i;
	G3DLIGHT &rL;
	float *pv0;
	
  undefined4 *puVar1;
  undefined (*pauVar2) [16];
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  GRA3DLIGHTSTATUS *pGVar7;
  undefined4 uVar8;
  undefined in_vf0 [16];
  undefined extraout_vf1 [16];
  undefined auVar9 [16];
  undefined auVar10 [16];
  
  iVar5 = 0;
  iVar6 = 0x9a0;
  pGVar7 = s_LightManage.aStatus.field0_0x0.m_aData + 0x16;
  do {
                    /* inlined from ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z16GRA3DLIGHTSTATUS_UiUi_PX01(iVar5 + 0x16,0x27);
                    /* end of inlined section */
    puVar1 = (undefined4 *)((int)s_aLight[0].vDiffuse + iVar6);
    if (pGVar7->bEnable != 0) {
      iVar4 = 3;
      puVar3 = (undefined4 *)((int)s_aLight[0].vSpecular + iVar6);
      do {
        uVar8 = *puVar1;
        puVar1 = puVar1 + 1;
        iVar4 = iVar4 + -1;
        *puVar3 = uVar8;
        puVar3 = puVar3 + 1;
      } while (iVar4 != -1);
      *(undefined4 *)((int)s_aLight[0].vDiffuse + iVar6 + 0xc) = 0;
                    /* inlined from g3dxVu0.h */
      pauVar2 = (undefined (*) [16])((int)s_aLight[0].vDirection + iVar6);
                    /* end of inlined section */
      *(undefined4 *)((int)s_aLight[0].vSpecular + iVar6 + 0xc) = 0;
                    /* inlined from g3dxVu0.h */
      auVar9 = _lqc2(*pauVar2);
      auVar10 = _vmul(auVar9,auVar9);
      _vnop();
      _vnop();
      _vnop();
      _vaddabc(auVar10,auVar10);
      auVar10 = _vmaddbc(extraout_vf1,auVar10);
      _vnop();
      _vnop();
      _vnop();
      uVar8 = _vrsqrt(in_vf0,auVar10);
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
      auVar9 = _vmulq(auVar9,uVar8);
      auVar9 = _sqc2(auVar9);
      *pauVar2 = auVar9;
    }
                    /* end of inlined section */
    iVar5 = iVar5 + 1;
    iVar6 = iVar6 + 0x70;
    pGVar7 = pGVar7 + 1;
  } while (iVar5 < 0x11);
  return;
}

int gra3dGetNumEnableLight(int iLightType) {
	int iRet;
	int i;
	
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  GRA3DLIGHTSTATUS *pGVar5;
  int iVar6;
  
                    /* inlined from gra3dTypes.h */
                    /* end of inlined section */
                    /* inlined from gra3dTypes.h */
  iVar2 = 3;
                    /* end of inlined section */
                    /* inlined from gra3dTypes.h */
  if (iLightType != 1) {
    if (iLightType < 2) {
      iVar2 = 0;
      if (iLightType == 0) goto LAB_001b26ac;
    }
    else {
      iVar2 = 0x16;
      if (iLightType == 2) goto LAB_001b26ac;
    }
    iVar2 = 0x7fffffff;
  }
LAB_001b26ac:
  iVar1 = 0x13;
  if (iLightType != 1) {
    if (iLightType < 2) {
      iVar1 = 3;
      if (iLightType != 0) {
        iVar1 = 0;
      }
    }
    else {
      iVar1 = 0x11;
      if (iLightType != 2) {
        iVar1 = 0;
      }
    }
  }
                    /* end of inlined section */
  iVar6 = 0;
  if (iVar2 < iVar2 + iVar1) {
    pGVar5 = s_LightManage.aStatus.field0_0x0.m_aData + iVar2;
    iVar6 = 0;
    iVar3 = iVar2;
    do {
                    /* inlined from ctl/fixed_array.h */
                    /* end of inlined section */
      iVar4 = iVar3 + 1;
                    /* inlined from ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z16GRA3DLIGHTSTATUS_UiUi_PX01(iVar3,0x27);
                    /* end of inlined section */
                    /* inlined from ctl/fixed_array.h */
      if (pGVar5->bEnable != 0) {
        iVar6 = iVar6 + 1;
      }
      pGVar5 = pGVar5 + 1;
      iVar3 = iVar4;
                    /* end of inlined section */
    } while (iVar4 < iVar2 + iVar1);
  }
  return iVar6;
}

static void _SetVu1LightData_Point(GRA3DVU1LIGHTDATA_POINT *pVu1LightDataPoint) {
	int gnum;
	int gcount;
	int i;
	G3DLIGHT &rL;
	
  float afVar1 [4];
  int iVar2;
  G3DLIGHT *pGVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iLightId;
  GRA3DVU1LIGHTDATA_POINT *pGVar8;
  float *pfVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined in_vf0 [16];
  undefined extraout_vf1 [16];
  undefined auVar14 [16];
  int gnum;
  
  _ClearMaterialData__FPv(s_aVu1MaterialCache_Point);
                    /* inlined from gra3dVu0.h */
  afVar1 = (float  [4])_sqc2(in_vf0);
  *(float *)((int)pVu1LightDataPoint->lmPosition[0] + 0) = afVar1[0];
  *(float *)((int)pVu1LightDataPoint->lmPosition[0] + 4) = afVar1[1];
  *(float *)((int)pVu1LightDataPoint->lmPosition[0] + 8) = afVar1[2];
  *(float *)((int)pVu1LightDataPoint->lmPosition[0] + 0xc) = afVar1[3];
  afVar1 = (float  [4])_sqc2(in_vf0);
  *(float *)((int)pVu1LightDataPoint->lmPosition[1] + 0) = afVar1[0];
  *(float *)((int)pVu1LightDataPoint->lmPosition[1] + 4) = afVar1[1];
  *(float *)((int)pVu1LightDataPoint->lmPosition[1] + 8) = afVar1[2];
  *(float *)((int)pVu1LightDataPoint->lmPosition[1] + 0xc) = afVar1[3];
  afVar1 = (float  [4])_sqc2(in_vf0);
  *(float *)((int)pVu1LightDataPoint->lmPosition[2] + 0) = afVar1[0];
  *(float *)((int)pVu1LightDataPoint->lmPosition[2] + 4) = afVar1[1];
  *(float *)((int)pVu1LightDataPoint->lmPosition[2] + 8) = afVar1[2];
  *(float *)((int)pVu1LightDataPoint->lmPosition[2] + 0xc) = afVar1[3];
                    /* end of inlined section */
  gnum = 0;
  pfVar9 = pVu1LightDataPoint->lmPosition + 3;
  iVar11 = 0;
  iVar13 = 0x70;
  iVar12 = 0;
  iVar10 = 0;
  iLightId = 3;
  pGVar8 = pVu1LightDataPoint;
  iVar4 = 0;
  do {
    iVar2 = g3dIsLightEnable__Fi(iLightId);
    if (iVar2 != 0) {
      pGVar3 = g3dGetLightRef__Fi(iLightId);
                    /* inlined from g3dxVu0.h */
      fVar5 = pGVar3->vPosition[1];
      fVar6 = pGVar3->vPosition[2];
      fVar7 = pGVar3->vPosition[3];
      pGVar8->lmPosition[0] = pGVar3->vPosition[0];
      pGVar8->lmPosition[1] = fVar5;
      pGVar8->lmPosition[2] = fVar6;
      pGVar8->lmPosition[3] = fVar7;
                    /* end of inlined section */
      if (pGVar3->afPad0[0] == 0.0) {
                    /* end of inlined section */
        *(undefined4 *)((int)pVu1LightDataPoint->lmPosition + iVar10 + 0xc) = 0;
      }
      else {
                    /* inlined from g3dxVu0.h */
        auVar14 = _lqc2(*(undefined (*) [16])pGVar3->vDiffuse);
        _vaddabc(auVar14,auVar14);
        auVar14 = _vmaddbc(extraout_vf1,auVar14);
        auVar14 = _qmfc2(auVar14._0_4_);
        *pfVar9 = 1.0 / (pGVar3->fMaxRange * pGVar3->afPad0[0] * auVar14._0_4_);
      }
                    /* inlined from g3dxVu0.h */
                    /* end of inlined section */
      *(float *)((int)s_aVu1MaterialCache_Point[gnum].Data.vPower + iVar12) = pGVar3->fMaxRange;
                    /* inlined from g3dxVu0.h */
      fVar5 = pGVar3->vDiffuse[1];
      fVar6 = pGVar3->vDiffuse[2];
      fVar7 = pGVar3->vDiffuse[3];
      *(float *)((int)s_aVu1MaterialCache_Point[gnum].Data.lmDiffuse + iVar10) = pGVar3->vDiffuse[0]
      ;
      *(float *)((int)s_aVu1MaterialCache_Point[gnum].Data.lmDiffuse + iVar10 + 4) = fVar5;
      *(float *)((int)s_aVu1MaterialCache_Point[gnum].Data.lmDiffuse + iVar10 + 8) = fVar6;
      *(float *)((int)s_aVu1MaterialCache_Point[gnum].Data.lmDiffuse + iVar10 + 0xc) = fVar7;
      fVar5 = pGVar3->vSpecular[1];
      fVar6 = pGVar3->vSpecular[2];
      fVar7 = pGVar3->vSpecular[3];
      *(float *)((int)s_aVu1MaterialCache_Point[gnum].Data.lmSpecular + iVar10) =
           pGVar3->vSpecular[0];
      *(float *)((int)s_aVu1MaterialCache_Point[gnum].Data.lmSpecular + iVar10 + 4) = fVar5;
      *(float *)((int)s_aVu1MaterialCache_Point[gnum].Data.lmSpecular + iVar10 + 8) = fVar6;
      *(float *)((int)s_aVu1MaterialCache_Point[gnum].Data.lmSpecular + iVar10 + 0xc) = fVar7;
                    /* end of inlined section */
      iVar11 = iVar11 + 1;
      *(int *)((int)s_aVu1MaterialCache_Point[gnum].Data.vPower + iVar13 + 4) = iVar4;
      iVar13 = iVar13 + 4;
      iVar12 = iVar12 + 4;
      pfVar9 = pfVar9 + 4;
      iVar10 = iVar10 + 0x10;
      pGVar8 = (GRA3DVU1LIGHTDATA_POINT *)pGVar8->lmPosition[1];
      if (2 < iVar11) {
        iVar13 = 0x70;
        iVar12 = 0;
        pfVar9 = pVu1LightDataPoint->lmPosition + 3;
        gnum = gnum + 1;
        iVar10 = 0;
        iVar11 = 0;
        pGVar8 = pVu1LightDataPoint;
        if (0 < gnum) {
          iVar4 = gra3dGetNumEnableLight__Fi(1);
          iVar4 = iVar4 + 100;
        }
      }
    }
    iVar2 = iVar4 + 1;
    iLightId = iVar4 + 4;
    iVar4 = iVar2;
  } while (iVar2 < 3);
  return;
}

static void _SetVu1LightData_Spot(GRA3DVU1LIGHTDATA_SPOT *pVu1LightDataSpot, float *wlmtx[4]) {
	int gnum;
	int gcount;
	float dtmp[4];
	float stmp[4];
	float vCamDirInv[4];
	int i;
	G3DLIGHT &rL;
	float vNorm[4];
	
  float afVar1 [4];
  undefined8 uVar2;
  float (*mat) [4];
  int iVar3;
  G3DLIGHT *pGVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  float *pfVar8;
  GRA3DVU1LIGHTDATA_SPOT *pGVar9;
  float *pfVar10;
  float (*pafVar11) [4];
  int iVar12;
  int iVar13;
  int iCol;
  int iVar14;
  undefined in_vf0 [16];
  undefined extraout_vf1 [16];
  undefined extraout_vf1_00 [16];
  undefined auVar15 [16];
  undefined auVar16 [16];
  undefined auVar17 [16];
  undefined4 uVar18;
  float dtmp [4];
  float stmp [4];
  float vCamDirInv [4];
  float vNorm [4];
  int gnum;
  int local_64;
  int local_60;
  
  _GetCameraDirectionInverse__FPf(vCamDirInv);
  _ClearMaterialData__FPv(s_aVu1MaterialCache_Spot);
                    /* inlined from gra3dVu0.h */
  afVar1 = (float  [4])_sqc2(in_vf0);
  *(float *)((int)pVu1LightDataSpot->lmPosition[0] + 0) = afVar1[0];
  *(float *)((int)pVu1LightDataSpot->lmPosition[0] + 4) = afVar1[1];
  *(float *)((int)pVu1LightDataSpot->lmPosition[0] + 8) = afVar1[2];
  *(float *)((int)pVu1LightDataSpot->lmPosition[0] + 0xc) = afVar1[3];
  afVar1 = (float  [4])_sqc2(in_vf0);
  *(float *)((int)pVu1LightDataSpot->lmPosition[1] + 0) = afVar1[0];
  *(float *)((int)pVu1LightDataSpot->lmPosition[1] + 4) = afVar1[1];
  *(float *)((int)pVu1LightDataSpot->lmPosition[1] + 8) = afVar1[2];
  *(float *)((int)pVu1LightDataSpot->lmPosition[1] + 0xc) = afVar1[3];
  afVar1 = (float  [4])_sqc2(in_vf0);
  *(float *)((int)pVu1LightDataSpot->lmPosition[2] + 0) = afVar1[0];
  *(float *)((int)pVu1LightDataSpot->lmPosition[2] + 4) = afVar1[1];
  *(float *)((int)pVu1LightDataSpot->lmPosition[2] + 8) = afVar1[2];
  *(float *)((int)pVu1LightDataSpot->lmPosition[2] + 0xc) = afVar1[3];
                    /* end of inlined section */
  auVar15 = _sqc2(in_vf0);
  *(undefined (*) [16])pVu1LightDataSpot->vIntens = auVar15;
  pfVar10 = pVu1LightDataSpot->vIntensB;
  auVar15 = _sqc2(in_vf0);
  *(undefined (*) [16])pfVar10 = auVar15;
                    /* inlined from gra3dVu0.h */
  pafVar11 = pVu1LightDataSpot->lmDirection;
  afVar1 = (float  [4])_sqc2(in_vf0);
  *(float *)((int)pafVar11 + 0) = afVar1[0];
  *(float *)((int)pafVar11 + 4) = afVar1[1];
  *(float *)((int)pafVar11 + 8) = afVar1[2];
  *(float *)((int)pafVar11 + 0xc) = afVar1[3];
  afVar1 = (float  [4])_sqc2(in_vf0);
  *(float *)((int)pVu1LightDataSpot->lmDirection[1] + 0) = afVar1[0];
  *(float *)((int)pVu1LightDataSpot->lmDirection[1] + 4) = afVar1[1];
  *(float *)((int)pVu1LightDataSpot->lmDirection[1] + 8) = afVar1[2];
  *(float *)((int)pVu1LightDataSpot->lmDirection[1] + 0xc) = afVar1[3];
  afVar1 = (float  [4])_sqc2(in_vf0);
  *(float *)((int)pVu1LightDataSpot->lmDirection[2] + 0) = afVar1[0];
  *(float *)((int)pVu1LightDataSpot->lmDirection[2] + 4) = afVar1[1];
  *(float *)((int)pVu1LightDataSpot->lmDirection[2] + 8) = afVar1[2];
  *(float *)((int)pVu1LightDataSpot->lmDirection[2] + 0xc) = afVar1[3];
  mat = pVu1LightDataSpot->lmSpecular;
  afVar1 = (float  [4])_sqc2(in_vf0);
  *(float *)((int)mat + 0) = afVar1[0];
  *(float *)((int)mat + 4) = afVar1[1];
  *(float *)((int)mat + 8) = afVar1[2];
  *(float *)((int)mat + 0xc) = afVar1[3];
  afVar1 = (float  [4])_sqc2(in_vf0);
  *(float *)((int)pVu1LightDataSpot->lmSpecular[1] + 0) = afVar1[0];
  *(float *)((int)pVu1LightDataSpot->lmSpecular[1] + 4) = afVar1[1];
  *(float *)((int)pVu1LightDataSpot->lmSpecular[1] + 8) = afVar1[2];
  *(float *)((int)pVu1LightDataSpot->lmSpecular[1] + 0xc) = afVar1[3];
  afVar1 = (float  [4])_sqc2(in_vf0);
  *(float *)((int)pVu1LightDataSpot->lmSpecular[2] + 0) = afVar1[0];
  *(float *)((int)pVu1LightDataSpot->lmSpecular[2] + 4) = afVar1[1];
  *(float *)((int)pVu1LightDataSpot->lmSpecular[2] + 8) = afVar1[2];
  *(float *)((int)pVu1LightDataSpot->lmSpecular[2] + 0xc) = afVar1[3];
                    /* end of inlined section */
  gnum = 0;
  local_64 = 0x70;
  local_60 = 0;
  iCol = 0;
  iVar12 = 0;
  iVar14 = 0;
  iVar7 = 6;
  pGVar9 = pVu1LightDataSpot;
  do {
    iVar3 = g3dIsLightEnable__Fi(iVar7);
    iVar13 = iVar12;
    if (iVar3 != 0) {
      pGVar4 = g3dGetLightRef__Fi(iVar7);
                    /* inlined from g3dxVu0.h */
      uVar2 = *(undefined8 *)pGVar4->vPosition;
      fVar5 = pGVar4->vPosition[2];
      fVar6 = pGVar4->vPosition[3];
      pGVar9->lmPosition[0] = (float)uVar2;
      pGVar9->lmPosition[1] = (float)((ulong)uVar2 >> 0x20);
      pGVar9->lmPosition[2] = fVar5;
      pGVar9->lmPosition[3] = fVar6;
                    /* end of inlined section */
                    /* inlined from g3dxVu0.h */
      pfVar8 = pGVar4->vDirection;
                    /* end of inlined section */
      pfVar10[-4] = pGVar4->afPad0[0];
      *pfVar10 = 1.0 / (1.0 - pGVar4->afPad0[0]);
      uVar2 = *(undefined8 *)pfVar8;
                    /* inlined from g3dxVu0.h */
      fVar5 = pGVar4->vDirection[2];
      fVar6 = pGVar4->vDirection[3];
      (*pafVar11)[0] = (float)uVar2;
      (*pafVar11)[1] = (float)((ulong)uVar2 >> 0x20);
      (*pafVar11)[2] = fVar5;
      (*pafVar11)[3] = fVar6;
                    /* end of inlined section */
      if (wlmtx == (float (*) [4])0x0) {
                    /* inlined from g3dxVu0.h */
        dtmp[2] = pGVar4->vDirection[2];
        dtmp[3] = pGVar4->vDirection[3];
        dtmp[0] = (float)*(undefined8 *)pfVar8;
        dtmp[1] = (float)((ulong)*(undefined8 *)pfVar8 >> 0x20);
        stmp[2] = vCamDirInv[2];
        stmp[0] = vCamDirInv[0];
        stmp[1] = vCamDirInv[1];
        stmp[3] = vCamDirInv[3];
        auVar15 = extraout_vf1;
      }
      else {
                    /* inlined from g3dVu0Instance.h */
        if (_10CVu0Matrix_s_pFuncLoadMatrix == (undefined1 *)0x0) {
          _SetLineInfo__FPCciT0T0
                    ("g3dVu0Instance.h",0x3d,(char *)&__FUNCTION___864,"s_pFuncLoadMatrix");
          g3ddbgAssert__FbPCce(_10CVu0Matrix_s_pFuncLoadMatrix != (undefined1 *)0x0,&DAT_003f1098);
        }
        (*(code *)_10CVu0Matrix_s_pFuncLoadMatrix)(wlmtx);
        if (_10CVu0Matrix_s_pFuncApplyMatrixWithoutTrans == (undefined1 *)0x0) {
          _SetLineInfo__FPCciT0T0
                    ("g3dVu0Instance.h",0x50,"ApplyWithoutTrans","s_pFuncApplyMatrixWithoutTrans");
          g3ddbgAssert__FbPCce
                    (_10CVu0Matrix_s_pFuncApplyMatrixWithoutTrans != (undefined1 *)0x0,&DAT_003f1098
                    );
        }
        (*(code *)_10CVu0Matrix_s_pFuncApplyMatrixWithoutTrans)(dtmp,pfVar8);
        if (_10CVu0Matrix_s_pFuncApplyMatrixWithoutTrans == (undefined1 *)0x0) {
          _SetLineInfo__FPCciT0T0
                    ("g3dVu0Instance.h",0x50,"ApplyWithoutTrans","s_pFuncApplyMatrixWithoutTrans");
          g3ddbgAssert__FbPCce
                    (_10CVu0Matrix_s_pFuncApplyMatrixWithoutTrans != (undefined1 *)0x0,&DAT_003f1098
                    );
        }
        (*(code *)_10CVu0Matrix_s_pFuncApplyMatrixWithoutTrans)(stmp,vCamDirInv);
        auVar15 = extraout_vf1_00;
      }
      auVar16._4_4_ = dtmp[1];
      auVar16._0_4_ = dtmp[0];
      auVar16._8_4_ = dtmp[2];
      auVar16._12_4_ = dtmp[3];
      auVar16 = _lqc2(auVar16);
      auVar17 = _lqc2((undefined  [16])stmp);
      auVar16 = _vsub(auVar16,auVar17);
      stmp = (float  [4])_sqc2(auVar16);
      auVar17._4_4_ = dtmp[1];
      auVar17._0_4_ = dtmp[0];
      auVar17._8_4_ = dtmp[2];
      auVar17._12_4_ = dtmp[3];
      auVar16 = _lqc2(auVar17);
      auVar17 = _vmul(auVar16,auVar16);
      _vnop();
      _vnop();
      _vnop();
      _vaddabc(auVar17,auVar17);
      auVar15 = _vmaddbc(auVar15,auVar17);
      _vnop();
      _vnop();
      _vnop();
      uVar18 = _vrsqrt(in_vf0,auVar15);
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
      auVar15 = _vmulq(auVar16,uVar18);
      vNorm = (float  [4])_sqc2(auVar15);
                    /* end of inlined section */
      g3dMatrixSetColumnXYZ__FPA3_fPCfi(mat,vNorm,iCol);
                    /* inlined from g3dxVu0.h */
                    /* end of inlined section */
                    /* inlined from g3dxVu0.h */
                    /* end of inlined section */
      *(float *)((int)s_aVu1MaterialCache_Spot[gnum].Data.vPower + local_60) = pGVar4->fMaxRange;
      uVar2 = *(undefined8 *)pGVar4->vDiffuse;
                    /* inlined from g3dxVu0.h */
      fVar5 = pGVar4->vDiffuse[2];
      fVar6 = pGVar4->vDiffuse[3];
      *(int *)((int)s_aVu1MaterialCache_Spot[gnum].Data.lmDiffuse + iVar14) = (int)uVar2;
      *(int *)((int)s_aVu1MaterialCache_Spot[gnum].Data.lmDiffuse + iVar14 + 4) =
           (int)((ulong)uVar2 >> 0x20);
      *(float *)((int)s_aVu1MaterialCache_Spot[gnum].Data.lmDiffuse + iVar14 + 8) = fVar5;
      *(float *)((int)s_aVu1MaterialCache_Spot[gnum].Data.lmDiffuse + iVar14 + 0xc) = fVar6;
      uVar2 = *(undefined8 *)pGVar4->vSpecular;
      fVar5 = pGVar4->vSpecular[2];
      fVar6 = pGVar4->vSpecular[3];
      *(int *)((int)s_aVu1MaterialCache_Spot[gnum].Data.lmSpecular + iVar14) = (int)uVar2;
      *(int *)((int)s_aVu1MaterialCache_Spot[gnum].Data.lmSpecular + iVar14 + 4) =
           (int)((ulong)uVar2 >> 0x20);
      *(float *)((int)s_aVu1MaterialCache_Spot[gnum].Data.lmSpecular + iVar14 + 8) = fVar5;
      *(float *)((int)s_aVu1MaterialCache_Spot[gnum].Data.lmSpecular + iVar14 + 0xc) = fVar6;
                    /* end of inlined section */
      iCol = iCol + 1;
      pafVar11 = pafVar11[1];
      *(int *)((int)s_aVu1MaterialCache_Spot[gnum].Data.vPower + local_64 + 4) = iVar12;
      pfVar10 = pfVar10 + 1;
      iVar14 = iVar14 + 0x10;
      local_60 = local_60 + 4;
      pGVar9 = (GRA3DVU1LIGHTDATA_SPOT *)pGVar9->lmPosition[1];
      local_64 = local_64 + 4;
      if (2 < iCol) {
        local_64 = 0x70;
        pafVar11 = pVu1LightDataSpot->lmDirection;
        gnum = gnum + 1;
        local_60 = 0;
        pfVar10 = pVu1LightDataSpot->vIntensB;
        iVar14 = 0;
        iCol = 0;
        pGVar9 = pVu1LightDataSpot;
        if (0 < gnum) {
          iVar7 = gra3dGetNumEnableLight__Fi(2);
          iVar13 = iVar7 + 100;
        }
      }
    }
    iVar12 = iVar13 + 1;
    iVar7 = iVar13 + 7;
  } while (iVar12 < 3);
  return;
}

static void _SetVu1LightData_Directional(GRA3DVU1LIGHTDATA_DIRECTIONAL *pVu1LightDataDirectional, float *mat[4]) {
	float *pm0[4];
	float *pm1[4];
	
  float afVar1 [4];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined auVar13 [16];
  undefined auVar14 [16];
  undefined auVar15 [16];
  undefined auVar16 [16];
  undefined auVar17 [16];
  undefined auVar18 [16];
  
  fVar12 = s_lmDiffuseLight[2][3];
  fVar11 = s_lmDiffuseLight[2][2];
  fVar10 = s_lmDiffuseLight[2][1];
  fVar9 = s_lmDiffuseLight[2][0];
  fVar8 = s_lmDiffuseLight[1][3];
  fVar7 = s_lmDiffuseLight[1][2];
  fVar6 = s_lmDiffuseLight[1][1];
  fVar5 = s_lmDiffuseLight[1][0];
  fVar4 = s_lmDiffuseLight[0][3];
  fVar3 = s_lmDiffuseLight[0][2];
  fVar2 = s_lmDiffuseLight[0][1];
  if (mat != (float (*) [4])0x0) {
    auVar13._4_4_ = s_lmDiffuseLight[0][1];
    auVar13._0_4_ = s_lmDiffuseLight[0][0];
    auVar13._8_4_ = s_lmDiffuseLight[0][2];
    auVar13._12_4_ = s_lmDiffuseLight[0][3];
                    /* inlined from g3dxVu0.h */
    auVar13 = _lqc2(auVar13);
    auVar14._4_4_ = s_lmDiffuseLight[1][1];
    auVar14._0_4_ = s_lmDiffuseLight[1][0];
    auVar14._8_4_ = s_lmDiffuseLight[1][2];
    auVar14._12_4_ = s_lmDiffuseLight[1][3];
    auVar14 = _lqc2(auVar14);
    auVar15._4_4_ = s_lmDiffuseLight[2][1];
    auVar15._0_4_ = s_lmDiffuseLight[2][0];
    auVar15._8_4_ = s_lmDiffuseLight[2][2];
    auVar15._12_4_ = s_lmDiffuseLight[2][3];
    auVar15 = _lqc2(auVar15);
    auVar16 = _lqc2((undefined  [16])*mat);
    auVar17 = _lqc2((undefined  [16])mat[1]);
    auVar18 = _lqc2((undefined  [16])mat[2]);
    _vmulabc(auVar13,auVar16);
    _vmaddabc(auVar14,auVar16);
    auVar16 = _vmaddbc(auVar15,auVar16);
    _vmulabc(auVar13,auVar17);
    _vmaddabc(auVar14,auVar17);
    auVar17 = _vmaddbc(auVar15,auVar17);
    _vmulabc(auVar13,auVar18);
    _vmaddabc(auVar14,auVar18);
    auVar13 = _vmaddbc(auVar15,auVar18);
    afVar1 = (float  [4])_sqc2(auVar16);
    *(float *)((int)pVu1LightDataDirectional->lmDiffuse[0] + 0) = afVar1[0];
    *(float *)((int)pVu1LightDataDirectional->lmDiffuse[0] + 4) = afVar1[1];
    *(float *)((int)pVu1LightDataDirectional->lmDiffuse[0] + 8) = afVar1[2];
    *(float *)((int)pVu1LightDataDirectional->lmDiffuse[0] + 0xc) = afVar1[3];
    afVar1 = (float  [4])_sqc2(auVar17);
    *(float *)((int)pVu1LightDataDirectional->lmDiffuse[1] + 0) = afVar1[0];
    *(float *)((int)pVu1LightDataDirectional->lmDiffuse[1] + 4) = afVar1[1];
    *(float *)((int)pVu1LightDataDirectional->lmDiffuse[1] + 8) = afVar1[2];
    *(float *)((int)pVu1LightDataDirectional->lmDiffuse[1] + 0xc) = afVar1[3];
    afVar1 = (float  [4])_sqc2(auVar13);
    *(float *)((int)pVu1LightDataDirectional->lmDiffuse[2] + 0) = afVar1[0];
    *(float *)((int)pVu1LightDataDirectional->lmDiffuse[2] + 4) = afVar1[1];
    *(float *)((int)pVu1LightDataDirectional->lmDiffuse[2] + 8) = afVar1[2];
    *(float *)((int)pVu1LightDataDirectional->lmDiffuse[2] + 0xc) = afVar1[3];
    auVar16._4_4_ = s_lmSpecularLight[0][1];
    auVar16._0_4_ = s_lmSpecularLight[0][0];
    auVar16._8_4_ = s_lmSpecularLight[0][2];
    auVar16._12_4_ = s_lmSpecularLight[0][3];
    auVar13 = _lqc2(auVar16);
    auVar17._4_4_ = s_lmSpecularLight[1][1];
    auVar17._0_4_ = s_lmSpecularLight[1][0];
    auVar17._8_4_ = s_lmSpecularLight[1][2];
    auVar17._12_4_ = s_lmSpecularLight[1][3];
    auVar14 = _lqc2(auVar17);
    auVar18._4_4_ = s_lmSpecularLight[2][1];
    auVar18._0_4_ = s_lmSpecularLight[2][0];
    auVar18._8_4_ = s_lmSpecularLight[2][2];
    auVar18._12_4_ = s_lmSpecularLight[2][3];
    auVar15 = _lqc2(auVar18);
    auVar16 = _lqc2((undefined  [16])*mat);
    auVar17 = _lqc2((undefined  [16])mat[1]);
    auVar18 = _lqc2((undefined  [16])mat[2]);
    _vmulabc(auVar13,auVar16);
    _vmaddabc(auVar14,auVar16);
    auVar16 = _vmaddbc(auVar15,auVar16);
    _vmulabc(auVar13,auVar17);
    _vmaddabc(auVar14,auVar17);
    auVar17 = _vmaddbc(auVar15,auVar17);
    _vmulabc(auVar13,auVar18);
    _vmaddabc(auVar14,auVar18);
    auVar13 = _vmaddbc(auVar15,auVar18);
    afVar1 = (float  [4])_sqc2(auVar16);
    *(float *)((int)pVu1LightDataDirectional->lmSpecular[0] + 0) = afVar1[0];
    *(float *)((int)pVu1LightDataDirectional->lmSpecular[0] + 4) = afVar1[1];
    *(float *)((int)pVu1LightDataDirectional->lmSpecular[0] + 8) = afVar1[2];
    *(float *)((int)pVu1LightDataDirectional->lmSpecular[0] + 0xc) = afVar1[3];
    afVar1 = (float  [4])_sqc2(auVar17);
    *(float *)((int)pVu1LightDataDirectional->lmSpecular[1] + 0) = afVar1[0];
    *(float *)((int)pVu1LightDataDirectional->lmSpecular[1] + 4) = afVar1[1];
    *(float *)((int)pVu1LightDataDirectional->lmSpecular[1] + 8) = afVar1[2];
    *(float *)((int)pVu1LightDataDirectional->lmSpecular[1] + 0xc) = afVar1[3];
    afVar1 = (float  [4])_sqc2(auVar13);
    *(float *)((int)pVu1LightDataDirectional->lmSpecular[2] + 0) = afVar1[0];
    *(float *)((int)pVu1LightDataDirectional->lmSpecular[2] + 4) = afVar1[1];
    *(float *)((int)pVu1LightDataDirectional->lmSpecular[2] + 8) = afVar1[2];
    *(float *)((int)pVu1LightDataDirectional->lmSpecular[2] + 0xc) = afVar1[3];
    return;
  }
                    /* inlined from gra3dVu0.h */
  pVu1LightDataDirectional->lmDiffuse[0] = s_lmDiffuseLight[0][0];
  pVu1LightDataDirectional->lmDiffuse[1] = fVar2;
  pVu1LightDataDirectional->lmDiffuse[2] = fVar3;
  pVu1LightDataDirectional->lmDiffuse[3] = fVar4;
  pVu1LightDataDirectional->lmDiffuse[1][0] = fVar5;
  pVu1LightDataDirectional->lmDiffuse[1][1] = fVar6;
  pVu1LightDataDirectional->lmDiffuse[1][2] = fVar7;
  pVu1LightDataDirectional->lmDiffuse[1][3] = fVar8;
  pVu1LightDataDirectional->lmDiffuse[2][0] = fVar9;
  pVu1LightDataDirectional->lmDiffuse[2][1] = fVar10;
  pVu1LightDataDirectional->lmDiffuse[2][2] = fVar11;
  pVu1LightDataDirectional->lmDiffuse[2][3] = fVar12;
  fVar12 = s_lmSpecularLight[2][3];
  fVar11 = s_lmSpecularLight[2][2];
  fVar10 = s_lmSpecularLight[2][1];
  fVar9 = s_lmSpecularLight[2][0];
  fVar8 = s_lmSpecularLight[1][3];
  fVar7 = s_lmSpecularLight[1][2];
  fVar6 = s_lmSpecularLight[1][1];
  fVar5 = s_lmSpecularLight[1][0];
  fVar4 = s_lmSpecularLight[0][3];
  fVar3 = s_lmSpecularLight[0][2];
  fVar2 = s_lmSpecularLight[0][1];
  pVu1LightDataDirectional->lmSpecular[0] = s_lmSpecularLight[0][0];
  pVu1LightDataDirectional->lmSpecular[1] = fVar2;
  pVu1LightDataDirectional->lmSpecular[2] = fVar3;
  pVu1LightDataDirectional->lmSpecular[3] = fVar4;
  pVu1LightDataDirectional->lmSpecular[1][0] = fVar5;
  pVu1LightDataDirectional->lmSpecular[1][1] = fVar6;
  pVu1LightDataDirectional->lmSpecular[1][2] = fVar7;
  pVu1LightDataDirectional->lmSpecular[1][3] = fVar8;
  pVu1LightDataDirectional->lmSpecular[2][0] = fVar9;
  pVu1LightDataDirectional->lmSpecular[2][1] = fVar10;
  pVu1LightDataDirectional->lmSpecular[2][2] = fVar11;
  pVu1LightDataDirectional->lmSpecular[2][3] = fVar12;
  return;
}

void g3dSetVu1LightData(GRA3DVU1LIGHTDATA *pVu1LightData, SGDCOORDINATE *cp0, SGDCOORDINATE *cp1) {
	static char __FUNCTION__[19] = {
		/* [0] = */ 103,
		/* [1] = */ 51,
		/* [2] = */ 100,
		/* [3] = */ 83,
		/* [4] = */ 101,
		/* [5] = */ 116,
		/* [6] = */ 86,
		/* [7] = */ 117,
		/* [8] = */ 49,
		/* [9] = */ 76,
		/* [10] = */ 105,
		/* [11] = */ 103,
		/* [12] = */ 104,
		/* [13] = */ 116,
		/* [14] = */ 68,
		/* [15] = */ 97,
		/* [16] = */ 116,
		/* [17] = */ 97,
		/* [18] = */ 0
	};
	float matWork[4][4];
	float matSpot[4][4];
	float matDirectional[4][4];
	float *matDest[4];
	float *matSrc[4];
	int i;
	
  float afVar1 [4];
  float afVar2 [4];
  float afVar3 [4];
  float afVar4 [4];
  float afVar5 [4];
  GRA3DVU1MEMLAYOUT *pGVar6;
  GRA3DVU1MEMLAYOUT *pGVar7;
  GRA3DVU1MEMLAYOUT *pGVar8;
  GRA3DSCRATCHPADLAYOUT *pGVar9;
  undefined (*pauVar10) [16];
  int iVar11;
  int iVar12;
  float (*pafVar13) [4];
  float afVar14 [4];
  float afVar15 [4];
  float afVar16 [4];
  undefined auVar17 [16];
  undefined in_vf0 [16];
  undefined in_vf1 [16];
  undefined extraout_vf1 [16];
  undefined extraout_vf1_00 [16];
  undefined extraout_vf1_01 [16];
  undefined extraout_vf1_02 [16];
  undefined auVar18 [16];
  undefined auVar19 [16];
  undefined auVar20 [16];
  undefined auVar21 [16];
  undefined4 uVar22;
  float matWork [4] [4];
  float matSpot [4] [4];
  float matDirectional [4] [4];
  
  if (((uint)cp0 & 0xf) != 0) {
    _SetLineInfo__FPCciT0T0(s_gra3d_c_003f1090,0x770,"g3dSetVu1LightData","!((int)cp0 & 0xf)");
    g3ddbgAssert__FbPCce(((uint)cp0 & 0xf) == 0,&DAT_003f1098);
    in_vf1 = extraout_vf1;
  }
  if (((uint)cp1 & 0xf) != 0) {
    _SetLineInfo__FPCciT0T0(s_gra3d_c_003f1090,0x771,"g3dSetVu1LightData","!((int)cp1 & 0xf)");
    g3ddbgAssert__FbPCce(((uint)cp1 & 0xf) == 0,&DAT_003f1098);
    in_vf1 = extraout_vf1_00;
  }
  if (cp1 == (SGDCOORDINATE *)0x0) {
    if (cp0 == (SGDCOORDINATE *)0x0) {
      _SetLineInfo__FPCciT0T0(s_gra3d_c_003f1090,0x779,"g3dSetVu1LightData",&DAT_003f10b0);
      g3ddbgAssert__FbPCce(false,&DAT_003f1098);
      in_vf1 = extraout_vf1_01;
    }
    if (s_pScratchpadLayout == (GRA3DSCRATCHPADLAYOUT *)0x0) {
      _SetLineInfo__FPCciT0T0(s_gra3d_c_003f1090,0x77a,"g3dSetVu1LightData","s_pScratchpadLayout");
      g3ddbgAssert__FbPCce(s_pScratchpadLayout != (GRA3DSCRATCHPADLAYOUT *)0x0,&DAT_003f1098);
                    /* inlined from g3dxVu0.h */
      in_vf1 = extraout_vf1_02;
    }
    pGVar9 = s_pScratchpadLayout;
    pafVar13 = cp0->matLocalWorld;
    afVar14[0] = *(float *)((int)pafVar13 + 0);
    afVar14[1] = *(float *)((int)pafVar13 + 4);
    afVar14[2] = *(float *)((int)pafVar13 + 8);
    afVar14[3] = *(float *)((int)pafVar13 + 0xc);
    auVar18 = _lqc2((undefined  [16])afVar14);
    afVar15[0] = *(float *)((int)cp0->matLocalWorld[1] + 0);
    afVar15[1] = *(float *)((int)cp0->matLocalWorld[1] + 4);
    afVar15[2] = *(float *)((int)cp0->matLocalWorld[1] + 8);
    afVar15[3] = *(float *)((int)cp0->matLocalWorld[1] + 0xc);
    auVar19 = _lqc2((undefined  [16])afVar15);
    afVar16[0] = *(float *)((int)cp0->matLocalWorld[2] + 0);
    afVar16[1] = *(float *)((int)cp0->matLocalWorld[2] + 4);
    afVar16[2] = *(float *)((int)cp0->matLocalWorld[2] + 8);
    afVar16[3] = *(float *)((int)cp0->matLocalWorld[2] + 0xc);
    auVar20 = _lqc2((undefined  [16])afVar16);
    afVar1[0] = *(float *)((int)cp0->matLocalWorld[3] + 0);
    afVar1[1] = *(float *)((int)cp0->matLocalWorld[3] + 4);
    afVar1[2] = *(float *)((int)cp0->matLocalWorld[3] + 8);
    afVar1[3] = *(float *)((int)cp0->matLocalWorld[3] + 0xc);
    auVar21 = _lqc2((undefined  [16])afVar1);
    auVar18 = _sqc2(auVar18);
    auVar19 = _sqc2(auVar19);
    auVar20 = _sqc2(auVar20);
    _sqc2(auVar21);
                    /* end of inlined section */
    auVar21 = _sqc2(in_vf0);
                    /* inlined from g3dxVu0.h */
    auVar17 = _pextlw(auVar19._0_8_,auVar18._0_8_);
    auVar18 = _pextuw(auVar19,auVar18);
    auVar19 = _pextlw(auVar21._0_8_,auVar20._0_8_);
    auVar20 = _pextuw(auVar21,auVar20);
    afVar14 = (float  [4])_pcpyld(auVar19,auVar17);
    afVar15 = (float  [4])_pcpyud(auVar17,auVar19);
    afVar16 = (float  [4])_pcpyld(auVar20,auVar18);
    matWork[3] = (float  [4])_pcpyud(auVar18,auVar20);
    matWork[0][0] = afVar14[0];
    matWork[0][1] = afVar14[1];
    matWork[0][2] = afVar14[2];
    matWork[0][3] = afVar14[3];
    matWork[1][0] = afVar15[0];
    matWork[1][1] = afVar15[1];
    matWork[1][2] = afVar15[2];
    matWork[1][3] = afVar15[3];
    matWork[2][0] = afVar16[0];
    matWork[2][1] = afVar16[1];
    matWork[2][2] = afVar16[2];
    matWork[2][3] = afVar16[3];
                    /* end of inlined section */
                    /* inlined from g3dxVu0.h */
    auVar18 = _lqc2((undefined  [16])afVar14);
    auVar19 = _vmul(auVar18,auVar18);
    _vaddabc(auVar19,auVar19);
    auVar19 = _vmaddbc(in_vf1,auVar19);
    _vrsqrt(in_vf0,auVar19);
    _vmul(auVar18,in_vf0);
    uVar22 = _vwaitq();
    auVar18 = _vmulq(auVar18,uVar22);
    auVar18 = _sqc2(auVar18);
    auVar19 = _lqc2((undefined  [16])afVar15);
    auVar20 = _vmul(auVar19,auVar19);
    _vaddabc(auVar20,auVar20);
    auVar20 = _vmaddbc(in_vf1,auVar20);
    _vrsqrt(in_vf0,auVar20);
    _vmul(auVar19,in_vf0);
    uVar22 = _vwaitq();
    auVar19 = _vmulq(auVar19,uVar22);
    auVar19 = _sqc2(auVar19);
    auVar20 = _lqc2((undefined  [16])afVar16);
    auVar21 = _vmul(auVar20,auVar20);
    _vaddabc(auVar21,auVar21);
    auVar21 = _vmaddbc(in_vf1,auVar21);
    _vrsqrt(in_vf0,auVar21);
    _vmul(auVar20,in_vf0);
    uVar22 = _vwaitq();
    auVar20 = _vmulq(auVar20,uVar22);
    auVar20 = _sqc2(auVar20);
    matDirectional[1]._0_8_ = auVar19._0_8_;
    matDirectional[2]._0_8_ = auVar20._0_8_;
    auVar21._4_4_ = matDirectional[3][1];
    auVar21._0_4_ = matDirectional[3][0];
    auVar21._8_4_ = matDirectional[3][2];
    auVar21._12_4_ = matDirectional[3][3];
    auVar17 = _pextlw(matDirectional[1]._0_8_,auVar18._0_8_);
    auVar18 = _pextuw(auVar19,auVar18);
    auVar19 = _pextlw(CONCAT44(matDirectional[3][1],matDirectional[3][0]),matDirectional[2]._0_8_);
    auVar20 = _pextuw(auVar21,auVar20);
    matDirectional[0] = (float  [4])_pcpyld(auVar19,auVar17);
    matDirectional[1] = (float  [4])_pcpyud(auVar17,auVar19);
    matDirectional[2] = (float  [4])_pcpyld(auVar20,auVar18);
    auVar18 = _pcpyud(auVar18,auVar20);
    matDirectional[3][0] = auVar18._0_4_;
    matDirectional[3][1] = auVar18._4_4_;
    matDirectional[3][2] = auVar18._8_4_;
    matDirectional[3][3] = auVar18._12_4_;
                    /* end of inlined section */
    iVar12 = 0;
    iVar11 = 0;
    while( true ) {
      pauVar10 = (undefined (*) [16])((int)matWork + iVar11);
                    /* inlined from g3dxVu0.h */
      auVar19 = _lqc2(*pauVar10);
      auVar20 = _lqc2(*pauVar10);
      auVar19 = _vmul(auVar19,auVar20);
      _vaddabc(auVar19,auVar19);
      auVar19 = _vmaddbc(in_vf1,auVar19);
      auVar19 = _qmfc2(auVar19._0_4_);
      auVar19 = _qmtc2(auVar19._0_4_);
      _vrsqrt(in_vf0,auVar19);
      uVar22 = _vwaitq();
      auVar19 = _vaddq(in_vf0,uVar22);
      auVar19 = _qmfc2(auVar19._0_4_);
      auVar20 = _qmtc2(auVar19._0_4_);
      auVar19 = _lqc2(*pauVar10);
      auVar19 = _vmulbc(auVar19,auVar20);
      auVar19 = _sqc2(auVar19);
      *(undefined (*) [16])((int)matSpot + iVar11) = auVar19;
                    /* end of inlined section */
      iVar12 = iVar12 + 1;
      if (2 < iVar12) break;
      iVar11 = iVar12 * 0x10;
    }
    matSpot[3] = (float  [4])_sqc2(in_vf0);
    afVar2[0] = *(float *)((int)pafVar13 + 0);
    afVar2[1] = *(float *)((int)pafVar13 + 4);
    afVar2[2] = *(float *)((int)pafVar13 + 8);
    afVar2[3] = *(float *)((int)pafVar13 + 0xc);
                    /* inlined from g3dxVu0.h */
    auVar19 = _lqc2((undefined  [16])afVar2);
    afVar3[0] = *(float *)((int)cp0->matLocalWorld[1] + 0);
    afVar3[1] = *(float *)((int)cp0->matLocalWorld[1] + 4);
    afVar3[2] = *(float *)((int)cp0->matLocalWorld[1] + 8);
    afVar3[3] = *(float *)((int)cp0->matLocalWorld[1] + 0xc);
    auVar20 = _lqc2((undefined  [16])afVar3);
    afVar4[0] = *(float *)((int)cp0->matLocalWorld[2] + 0);
    afVar4[1] = *(float *)((int)cp0->matLocalWorld[2] + 4);
    afVar4[2] = *(float *)((int)cp0->matLocalWorld[2] + 8);
    afVar4[3] = *(float *)((int)cp0->matLocalWorld[2] + 0xc);
    auVar21 = _lqc2((undefined  [16])afVar4);
    afVar5[0] = *(float *)((int)cp0->matLocalWorld[3] + 0);
    afVar5[1] = *(float *)((int)cp0->matLocalWorld[3] + 4);
    afVar5[2] = *(float *)((int)cp0->matLocalWorld[3] + 8);
    afVar5[3] = *(float *)((int)cp0->matLocalWorld[3] + 0xc);
    auVar17 = _lqc2((undefined  [16])afVar5);
    afVar14 = (float  [4])_sqc2(auVar19);
    pGVar6 = &s_pScratchpadLayout->Vu1Mem;
    pGVar7 = &s_pScratchpadLayout->Vu1Mem;
    pGVar8 = &s_pScratchpadLayout->Vu1Mem;
    *(float *)((int)&s_pScratchpadLayout->Vu1Mem + 0x140) = afVar14[0];
    *(float *)((int)pGVar6 + 0x144) = afVar14[1];
    *(float *)((int)pGVar7 + 0x148) = afVar14[2];
    *(float *)((int)pGVar8 + 0x14c) = afVar14[3];
    pGVar6 = &pGVar9->Vu1Mem;
    afVar14 = (float  [4])_sqc2(auVar20);
    *(float *)((int)((float (*) [4])((int)&pGVar6->Direct + 0x140))[1] + 0) = afVar14[0];
    *(float *)((int)((float (*) [4])((int)&pGVar6->Direct + 0x140))[1] + 4) = afVar14[1];
    *(float *)((int)((float (*) [4])((int)&pGVar6->Direct + 0x140))[1] + 8) = afVar14[2];
    *(float *)((int)((float (*) [4])((int)&pGVar6->Direct + 0x140))[1] + 0xc) = afVar14[3];
    pGVar6 = &pGVar9->Vu1Mem;
    afVar14 = (float  [4])_sqc2(auVar21);
    *(float *)((int)((float (*) [4])((int)&pGVar6->Direct + 0x140))[2] + 0) = afVar14[0];
    *(float *)((int)((float (*) [4])((int)&pGVar6->Direct + 0x140))[2] + 4) = afVar14[1];
    *(float *)((int)((float (*) [4])((int)&pGVar6->Direct + 0x140))[2] + 8) = afVar14[2];
    *(float *)((int)((float (*) [4])((int)&pGVar6->Direct + 0x140))[2] + 0xc) = afVar14[3];
    pGVar6 = &pGVar9->Vu1Mem;
    afVar14 = (float  [4])_sqc2(auVar17);
    *(float *)((int)((float (*) [4])((int)&pGVar6->Direct + 0x140))[3] + 0) = afVar14[0];
    pGVar9 = s_pScratchpadLayout;
    *(float *)((int)((float (*) [4])((int)&pGVar6->Direct + 0x140))[3] + 4) = afVar14[1];
    *(float *)((int)((float (*) [4])((int)&pGVar6->Direct + 0x140))[3] + 8) = afVar14[2];
    *(float *)((int)((float (*) [4])((int)&pGVar6->Direct + 0x140))[3] + 0xc) = afVar14[3];
    auVar19 = _lqc2((undefined  [16])matDirectional[0]);
    auVar20 = _lqc2((undefined  [16])matDirectional[1]);
    auVar21 = _lqc2((undefined  [16])matDirectional[2]);
    auVar18 = _lqc2(auVar18);
    afVar14 = (float  [4])_sqc2(auVar19);
    pGVar6 = &s_pScratchpadLayout->Vu1Mem;
    pGVar7 = &s_pScratchpadLayout->Vu1Mem;
    pGVar8 = &s_pScratchpadLayout->Vu1Mem;
    *(float *)((int)&s_pScratchpadLayout->Vu1Mem + 0x100) = afVar14[0];
    *(float *)((int)pGVar6 + 0x104) = afVar14[1];
    *(float *)((int)pGVar7 + 0x108) = afVar14[2];
    *(float *)((int)pGVar8 + 0x10c) = afVar14[3];
    pGVar6 = &pGVar9->Vu1Mem;
    afVar14 = (float  [4])_sqc2(auVar20);
    *(float *)((int)((float (*) [4])((int)&pGVar6->Direct + 0x100))[1] + 0) = afVar14[0];
    *(float *)((int)((float (*) [4])((int)&pGVar6->Direct + 0x100))[1] + 4) = afVar14[1];
    *(float *)((int)((float (*) [4])((int)&pGVar6->Direct + 0x100))[1] + 8) = afVar14[2];
    *(float *)((int)((float (*) [4])((int)&pGVar6->Direct + 0x100))[1] + 0xc) = afVar14[3];
    pGVar6 = &pGVar9->Vu1Mem;
    afVar14 = (float  [4])_sqc2(auVar21);
    *(float *)((int)((float (*) [4])((int)&pGVar6->Direct + 0x100))[2] + 0) = afVar14[0];
    *(float *)((int)((float (*) [4])((int)&pGVar6->Direct + 0x100))[2] + 4) = afVar14[1];
    *(float *)((int)((float (*) [4])((int)&pGVar6->Direct + 0x100))[2] + 8) = afVar14[2];
    *(float *)((int)((float (*) [4])((int)&pGVar6->Direct + 0x100))[2] + 0xc) = afVar14[3];
    pGVar6 = &pGVar9->Vu1Mem;
    afVar14 = (float  [4])_sqc2(auVar18);
    *(float *)((int)((float (*) [4])((int)&pGVar6->Direct + 0x100))[3] + 0) = afVar14[0];
    *(float *)((int)((float (*) [4])((int)&pGVar6->Direct + 0x100))[3] + 4) = afVar14[1];
    *(float *)((int)((float (*) [4])((int)&pGVar6->Direct + 0x100))[3] + 8) = afVar14[2];
    *(float *)((int)((float (*) [4])((int)&pGVar6->Direct + 0x100))[3] + 0xc) = afVar14[3];
                    /* end of inlined section */
    _SetVu1LightData_Directional__FP29GRA3DVU1LIGHTDATA_DIRECTIONALPA3_Cf
              (&pVu1LightData->dir,matDirectional);
    _SetVu1LightData_Point__FP23GRA3DVU1LIGHTDATA_POINT(&pVu1LightData->point);
    _SetVu1LightData_Spot__FP22GRA3DVU1LIGHTDATA_SPOTPA3_Cf(&pVu1LightData->spot,matSpot);
  }
  else {
    if (s_pScratchpadLayout == (GRA3DSCRATCHPADLAYOUT *)0x0) {
      _SetLineInfo__FPCciT0T0(s_gra3d_c_003f1090,0x795,"g3dSetVu1LightData","s_pScratchpadLayout");
      g3ddbgAssert__FbPCce(s_pScratchpadLayout != (GRA3DSCRATCHPADLAYOUT *)0x0,&DAT_003f1098);
                    /* inlined from g3dxVu0.h */
    }
    pGVar9 = s_pScratchpadLayout;
    auVar18 = _lqc2((undefined  [16])g_matUnit[0]);
    auVar19 = _lqc2((undefined  [16])g_matUnit[1]);
    auVar20 = _lqc2((undefined  [16])g_matUnit[2]);
    auVar21 = _lqc2((undefined  [16])g_matUnit[3]);
    afVar14 = (float  [4])_sqc2(auVar18);
    pGVar6 = &s_pScratchpadLayout->Vu1Mem;
    pGVar7 = &s_pScratchpadLayout->Vu1Mem;
    pGVar8 = &s_pScratchpadLayout->Vu1Mem;
    *(float *)((int)&s_pScratchpadLayout->Vu1Mem + 0x140) = afVar14[0];
    *(float *)((int)pGVar6 + 0x144) = afVar14[1];
    *(float *)((int)pGVar7 + 0x148) = afVar14[2];
    *(float *)((int)pGVar8 + 0x14c) = afVar14[3];
    pGVar6 = &pGVar9->Vu1Mem;
    afVar14 = (float  [4])_sqc2(auVar19);
    *(float *)((int)((float (*) [4])((int)&pGVar6->Direct + 0x140))[1] + 0) = afVar14[0];
    *(float *)((int)((float (*) [4])((int)&pGVar6->Direct + 0x140))[1] + 4) = afVar14[1];
    *(float *)((int)((float (*) [4])((int)&pGVar6->Direct + 0x140))[1] + 8) = afVar14[2];
    *(float *)((int)((float (*) [4])((int)&pGVar6->Direct + 0x140))[1] + 0xc) = afVar14[3];
    pGVar6 = &pGVar9->Vu1Mem;
    afVar14 = (float  [4])_sqc2(auVar20);
    *(float *)((int)((float (*) [4])((int)&pGVar6->Direct + 0x140))[2] + 0) = afVar14[0];
    *(float *)((int)((float (*) [4])((int)&pGVar6->Direct + 0x140))[2] + 4) = afVar14[1];
    *(float *)((int)((float (*) [4])((int)&pGVar6->Direct + 0x140))[2] + 8) = afVar14[2];
    *(float *)((int)((float (*) [4])((int)&pGVar6->Direct + 0x140))[2] + 0xc) = afVar14[3];
    pGVar6 = &pGVar9->Vu1Mem;
    afVar14 = (float  [4])_sqc2(auVar21);
    *(float *)((int)((float (*) [4])((int)&pGVar6->Direct + 0x140))[3] + 0) = afVar14[0];
    pGVar9 = s_pScratchpadLayout;
    *(float *)((int)((float (*) [4])((int)&pGVar6->Direct + 0x140))[3] + 4) = afVar14[1];
    *(float *)((int)((float (*) [4])((int)&pGVar6->Direct + 0x140))[3] + 8) = afVar14[2];
    *(float *)((int)((float (*) [4])((int)&pGVar6->Direct + 0x140))[3] + 0xc) = afVar14[3];
    auVar18 = _lqc2((undefined  [16])g_matUnit[0]);
    auVar19 = _lqc2((undefined  [16])g_matUnit[1]);
    auVar20 = _lqc2((undefined  [16])g_matUnit[2]);
    auVar21 = _lqc2((undefined  [16])g_matUnit[3]);
    afVar14 = (float  [4])_sqc2(auVar18);
    pGVar6 = &s_pScratchpadLayout->Vu1Mem;
    pGVar7 = &s_pScratchpadLayout->Vu1Mem;
    pGVar8 = &s_pScratchpadLayout->Vu1Mem;
    *(float *)((int)&s_pScratchpadLayout->Vu1Mem + 0x100) = afVar14[0];
    *(float *)((int)pGVar6 + 0x104) = afVar14[1];
    *(float *)((int)pGVar7 + 0x108) = afVar14[2];
    *(float *)((int)pGVar8 + 0x10c) = afVar14[3];
    pGVar6 = &pGVar9->Vu1Mem;
    afVar14 = (float  [4])_sqc2(auVar19);
    *(float *)((int)((float (*) [4])((int)&pGVar6->Direct + 0x100))[1] + 0) = afVar14[0];
    *(float *)((int)((float (*) [4])((int)&pGVar6->Direct + 0x100))[1] + 4) = afVar14[1];
    *(float *)((int)((float (*) [4])((int)&pGVar6->Direct + 0x100))[1] + 8) = afVar14[2];
    *(float *)((int)((float (*) [4])((int)&pGVar6->Direct + 0x100))[1] + 0xc) = afVar14[3];
    pGVar6 = &pGVar9->Vu1Mem;
    afVar14 = (float  [4])_sqc2(auVar20);
    *(float *)((int)((float (*) [4])((int)&pGVar6->Direct + 0x100))[2] + 0) = afVar14[0];
    *(float *)((int)((float (*) [4])((int)&pGVar6->Direct + 0x100))[2] + 4) = afVar14[1];
    *(float *)((int)((float (*) [4])((int)&pGVar6->Direct + 0x100))[2] + 8) = afVar14[2];
    *(float *)((int)((float (*) [4])((int)&pGVar6->Direct + 0x100))[2] + 0xc) = afVar14[3];
    pGVar6 = &pGVar9->Vu1Mem;
    afVar14 = (float  [4])_sqc2(auVar21);
    *(float *)((int)((float (*) [4])((int)&pGVar6->Direct + 0x100))[3] + 0) = afVar14[0];
    *(float *)((int)((float (*) [4])((int)&pGVar6->Direct + 0x100))[3] + 4) = afVar14[1];
    *(float *)((int)((float (*) [4])((int)&pGVar6->Direct + 0x100))[3] + 8) = afVar14[2];
    *(float *)((int)((float (*) [4])((int)&pGVar6->Direct + 0x100))[3] + 0xc) = afVar14[3];
                    /* end of inlined section */
    _SetVu1LightData_Directional__FP29GRA3DVU1LIGHTDATA_DIRECTIONALPA3_Cf
              (&pVu1LightData->dir,(float (*) [4])0x0);
    _SetVu1LightData_Point__FP23GRA3DVU1LIGHTDATA_POINT(&pVu1LightData->point);
    _SetVu1LightData_Spot__FP22GRA3DVU1LIGHTDATA_SPOTPA3_Cf(&pVu1LightData->spot,(float (*) [4])0x0)
    ;
  }
  return;
}

void gra3dVu1TransGTEOP() {
  GRA3DSCRATCHPADLAYOUT *pGVar1;
  int iVar2;
  
  pGVar1 = s_pScratchpadLayout;
  iVar2 = gra3dIsLightTypeEnable__F12G3DLIGHTTYPE(G3DLIGHT_SPOT);
  *(uint *)((int)&pGVar1->Vu1Mem + 0x54) = (uint)(iVar2 != 0);
  iVar2 = gra3dIsLightTypeEnable__F12G3DLIGHTTYPE(G3DLIGHT_POINT);
  *(uint *)((int)&pGVar1->Vu1Mem + 0x58) = (uint)(iVar2 != 0);
  g3dVif1Unpack__FiPCvi(5,(void *)((int)&pGVar1->Vu1Mem + 0x50),1);
  return;
}

void SetVU1Header() {
  gra3dSetVif1Code_Unpack__FPiiii(s_pScratchpadLayout->qwVif1Code0,0,0x19,0x6c);
  g3dDmaCopyPacket__FPCvi(s_pScratchpadLayout,0x1a);
  return;
}

int gra3dIsLightTypeEnable(G3DLIGHTTYPE type) {
	static char __FUNCTION__[23] = {
		/* [0] = */ 103,
		/* [1] = */ 114,
		/* [2] = */ 97,
		/* [3] = */ 51,
		/* [4] = */ 100,
		/* [5] = */ 73,
		/* [6] = */ 115,
		/* [7] = */ 76,
		/* [8] = */ 105,
		/* [9] = */ 103,
		/* [10] = */ 104,
		/* [11] = */ 116,
		/* [12] = */ 84,
		/* [13] = */ 121,
		/* [14] = */ 112,
		/* [15] = */ 101,
		/* [16] = */ 69,
		/* [17] = */ 110,
		/* [18] = */ 97,
		/* [19] = */ 98,
		/* [20] = */ 108,
		/* [21] = */ 101,
		/* [22] = */ 0
	};
	
  int iVar1;
  int iVar2;
  
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_relops.h */
                    /* end of inlined section */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_relops.h */
  if (2 < (int)type) {
                    /* end of inlined section */
    _SetLineInfo__FPCciT0T0
              (s_gra3d_c_003f1090,0x7e5,"gra3dIsLightTypeEnable","NUM_G3DLIGHTTYPE > type");
    g3ddbgWarning__FbPCce((int)type < 3,"type is invalid");
                    /* end of inlined section */
    g3ddbgPrintf__FPCce("[G3DRETURN:%d]%s(%d)(%s):%s\n");
    return 0;
  }
                    /* inlined from g3dTypes.h */
  if (G3DLIGHT_SPOT < type) {
                    /* end of inlined section */
    _SetLineInfo__FPCciT0T0
              (s_gra3d_c_003f1090,0x7e7,"gra3dIsLightTypeEnable","g3dIsValidLightType( type )");
                    /* inlined from g3dTypes.h */
                    /* end of inlined section */
                    /* inlined from g3dTypes.h */
    g3ddbgAssert__FbPCce(type < G3DLIGHT_AMBIENT,"type : %d");
  }
  iVar2 = 3;
  if (type != G3DLIGHT_POINT) {
    if ((int)type < 2) {
      iVar2 = 0;
      if (type == G3DLIGHT_DIRECTIONAL) goto LAB_001b33a0;
    }
    else {
      iVar2 = 6;
      if (type == G3DLIGHT_SPOT) goto LAB_001b33a0;
    }
    iVar2 = 0x7fffffff;
  }
LAB_001b33a0:
                    /* end of inlined section */
  iVar1 = g3dIsLightEnable__Fi(iVar2);
  if (iVar1 == 0) {
    iVar1 = g3dIsLightEnable__Fi(iVar2 + 1);
    if (iVar1 == 0) {
      iVar2 = g3dIsLightEnable__Fi(iVar2 + 2);
      if (iVar2 != 0) {
        iVar2 = 1;
      }
    }
    else {
      iVar2 = 1;
    }
  }
  else {
    iVar2 = 1;
  }
  return iVar2;
}

void gra3dEnableLightType(G3DLIGHTTYPE type, int bEnable) {
  return;
}

void gra3dSetAmbient(float *vAmbient) {
  g3dSetAmbient__FPCf(vAmbient);
  return;
}

float&[4] gra3dGetAmbientRef() {
  float (*pafVar1) [4];
  
  pafVar1 = g3dGetAmbientRef__Fv();
  return pafVar1;
}

void gra3dSetLight(int iLightId, G3DLIGHT *pLight) {
	static char __FUNCTION__[14] = {
		/* [0] = */ 103,
		/* [1] = */ 114,
		/* [2] = */ 97,
		/* [3] = */ 51,
		/* [4] = */ 100,
		/* [5] = */ 83,
		/* [6] = */ 101,
		/* [7] = */ 116,
		/* [8] = */ 76,
		/* [9] = */ 105,
		/* [10] = */ 103,
		/* [11] = */ 104,
		/* [12] = */ 116,
		/* [13] = */ 0
	};
	G3DLIGHT *pDest;
	
  undefined8 uVar1;
  int iVar2;
  bool bVar3;
  G3DLIGHTTYPE GVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  G3DLIGHTTYPE GVar8;
  G3DLIGHTTYPE *pGVar9;
  
  if (pLight == (G3DLIGHT *)0x0) {
    _SetLineInfo__FPCciT0T0(s_gra3d_c_003f1090,0x814,"gra3dSetLight",s_pLight_003f10b8);
    g3ddbgAssert__FbPCce(false,&DAT_003f1098);
  }
  if (0x26 < iLightId) {
    _SetLineInfo__FPCciT0T0(s_gra3d_c_003f1090,0x815,"gra3dSetLight","NUM_GRA3DLIGHTID > iLightId");
    g3ddbgAssert__FbPCce(false,"iLightId(%d) is invalid\n");
                    /* inlined from gra3dTypes.h */
  }
  GVar4 = G3DLIGHT_DIRECTIONAL;
  if ((2U < (uint)iLightId) && (GVar4 = G3DLIGHT_POINT, 0x12 < iLightId - 3U)) {
    GVar4 = G3DLIGHT_SPOT;
    if (0x10 < iLightId - 0x16U) {
      GVar4 = G3DLIGHTTYPE_FORCE_DWORD;
    }
  }
  GVar8 = pLight->Type;
  if (GVar4 != GVar8) {
                    /* end of inlined section */
    _SetLineInfo__FPCciT0T0
              (s_gra3d_c_003f1090,0x817,"gra3dSetLight",
               "gra3dGetLightType( iLightId ) == pLight->Type");
    GVar4 = G3DLIGHT_DIRECTIONAL;
                    /* inlined from gra3dTypes.h */
    if ((2U < (uint)iLightId) && (GVar4 = G3DLIGHT_POINT, 0x12 < iLightId - 3U)) {
      GVar4 = G3DLIGHT_SPOT;
      if (0x10 < iLightId - 0x16U) {
        GVar4 = G3DLIGHTTYPE_FORCE_DWORD;
      }
    }
    g3ddbgAssert__FbPCce(GVar4 == pLight->Type,"%d != %d LightId[%d]");
    GVar8 = pLight->Type;
  }
                    /* end of inlined section */
  if (GVar8 != G3DLIGHT_DIRECTIONAL) {
    if (pLight->fMinRange <= pLight->fMaxRange) {
      GVar4 = pLight->Type;
      goto LAB_001b3614;
    }
    _SetLineInfo__FPCciT0T0
              (s_gra3d_c_003f1090,0x81a,"gra3dSetLight",
               "pLight->Type == G3DLIGHT_DIRECTIONAL || pLight->fMaxRange >= pLight->fMinRange");
    bVar3 = false;
    if ((pLight->Type == G3DLIGHT_DIRECTIONAL) || (pLight->fMinRange <= pLight->fMaxRange)) {
      bVar3 = true;
    }
    g3ddbgWarning__FbPCce(bVar3,&DAT_003f1098);
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_relops.h */
  }
  GVar4 = pLight->Type;
LAB_001b3614:
  pGVar9 = &pLight->Type;
  bVar3 = false;
  if ((GVar4 == G3DLIGHT_SPOT) && (pLight->fAngleOutside < pLight->fAngleInside)) {
    bVar3 = true;
  }
  if (bVar3) {
                    /* end of inlined section */
    _SetLineInfo__FPCciT0T0
              (s_gra3d_c_003f1090,0x81c,"gra3dSetLight",
               "pLight->Type != G3DLIGHT_SPOT || pLight->fAngleOutside >= pLight->fAngleInside");
    bVar3 = false;
    if ((*pGVar9 != G3DLIGHT_SPOT) || (pLight->fAngleInside <= pLight->fAngleOutside)) {
      bVar3 = true;
    }
    g3ddbgWarning__FbPCce(bVar3,&DAT_003f1098);
  }
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_relops.h */
  bVar3 = false;
  if (*pGVar9 == G3DLIGHT_POINT) {
    iVar2 = memcmp(pLight->vDirection,g_v0000,0x10);
    bVar3 = iVar2 != 0;
  }
  if (bVar3) {
    bVar3 = false;
                    /* end of inlined section */
    _SetLineInfo__FPCciT0T0
              (s_gra3d_c_003f1090,0x81e,"gra3dSetLight",
               "pLight->Type != G3DLIGHT_POINT || EqualMemory128(pLight->vDirection,g_v0000,1 )");
    if ((*pGVar9 != G3DLIGHT_POINT) || (iVar2 = memcmp(pLight->vDirection,g_v0000,0x10), iVar2 == 0)
       ) {
      bVar3 = true;
    }
    g3ddbgWarning__FbPCce(bVar3,&DAT_003f1098);
  }
  if (pLight->fFalloff != 1.0) {
    _SetLineInfo__FPCciT0T0(s_gra3d_c_003f1090,0x820,"gra3dSetLight","pLight->fFalloff == 1.0f");
    g3ddbgWarning__FbPCce(pLight->fFalloff == 1.0,&DAT_003f1098);
  }
                    /* inlined from g3dLight.h */
  uVar1 = *(undefined8 *)pLight->vDiffuse;
  fVar5 = pLight->vDiffuse[2];
  fVar6 = pLight->vDiffuse[3];
  s_aLight[iLightId].vDiffuse[0] = (float)uVar1;
  s_aLight[iLightId].vDiffuse[1] = (float)((ulong)uVar1 >> 0x20);
  s_aLight[iLightId].vDiffuse[2] = fVar5;
  s_aLight[iLightId].vDiffuse[3] = fVar6;
  fVar5 = pLight->vSpecular[1];
  fVar6 = pLight->vSpecular[2];
  fVar7 = pLight->vSpecular[3];
  s_aLight[iLightId].vSpecular[0] = pLight->vSpecular[0];
  s_aLight[iLightId].vSpecular[1] = fVar5;
  s_aLight[iLightId].vSpecular[2] = fVar6;
  s_aLight[iLightId].vSpecular[3] = fVar7;
  fVar5 = pLight->vAmbient[1];
  fVar6 = pLight->vAmbient[2];
  fVar7 = pLight->vAmbient[3];
  s_aLight[iLightId].vAmbient[0] = pLight->vAmbient[0];
  s_aLight[iLightId].vAmbient[1] = fVar5;
  s_aLight[iLightId].vAmbient[2] = fVar6;
  s_aLight[iLightId].vAmbient[3] = fVar7;
  fVar5 = pLight->vPosition[1];
  fVar6 = pLight->vPosition[2];
  fVar7 = pLight->vPosition[3];
  s_aLight[iLightId].vPosition[0] = pLight->vPosition[0];
  s_aLight[iLightId].vPosition[1] = fVar5;
  s_aLight[iLightId].vPosition[2] = fVar6;
  s_aLight[iLightId].vPosition[3] = fVar7;
  fVar5 = pLight->vDirection[1];
  fVar6 = pLight->vDirection[2];
  fVar7 = pLight->vDirection[3];
  s_aLight[iLightId].vDirection[0] = pLight->vDirection[0];
  s_aLight[iLightId].vDirection[1] = fVar5;
  s_aLight[iLightId].vDirection[2] = fVar6;
  s_aLight[iLightId].vDirection[3] = fVar7;
  fVar5 = pLight->fAngleInside;
  fVar6 = pLight->fAngleOutside;
  fVar7 = pLight->fMaxRange;
  s_aLight[iLightId].Type = pLight->Type;
  s_aLight[iLightId].fAngleInside = fVar5;
  s_aLight[iLightId].fAngleOutside = fVar6;
  s_aLight[iLightId].fMaxRange = fVar7;
  fVar5 = pLight->fFalloff;
  fVar6 = pLight->afPad0[0];
  fVar7 = pLight->afPad0[1];
  s_aLight[iLightId].fMinRange = pLight->fMinRange;
  s_aLight[iLightId].fFalloff = fVar5;
  s_aLight[iLightId].afPad0[0] = fVar6;
  s_aLight[iLightId].afPad0[1] = fVar7;
  return;
}

G3DLIGHT& gra3dGetLightRef(int iLightId) {
	static char __FUNCTION__[17] = {
		/* [0] = */ 103,
		/* [1] = */ 114,
		/* [2] = */ 97,
		/* [3] = */ 51,
		/* [4] = */ 100,
		/* [5] = */ 71,
		/* [6] = */ 101,
		/* [7] = */ 116,
		/* [8] = */ 76,
		/* [9] = */ 105,
		/* [10] = */ 103,
		/* [11] = */ 104,
		/* [12] = */ 116,
		/* [13] = */ 82,
		/* [14] = */ 101,
		/* [15] = */ 102,
		/* [16] = */ 0
	};
	
  G3DLIGHTTYPE GVar1;
  
  if (0x26 < iLightId) {
    _SetLineInfo__FPCciT0T0
              (s_gra3d_c_003f1090,0x839,"gra3dGetLightRef","NUM_GRA3DLIGHTID > iLightId");
    g3ddbgAssert__FbPCce(false,"iLightId(%d) is invalid\n");
  }
                    /* inlined from gra3dTypes.h */
  GVar1 = G3DLIGHT_DIRECTIONAL;
  if ((2U < (uint)iLightId) && (GVar1 = G3DLIGHT_POINT, 0x12 < iLightId - 3U)) {
    GVar1 = G3DLIGHT_SPOT;
    if (0x10 < iLightId - 0x16U) {
      GVar1 = G3DLIGHTTYPE_FORCE_DWORD;
    }
  }
  if (GVar1 != s_aLight[iLightId].Type) {
                    /* end of inlined section */
    _SetLineInfo__FPCciT0T0
              (s_gra3d_c_003f1090,0x83c,"gra3dGetLightRef",
               "gra3dGetLightType( iLightId ) == s_aLight[ iLightId ].Type");
    GVar1 = G3DLIGHT_DIRECTIONAL;
                    /* inlined from gra3dTypes.h */
    if ((2U < (uint)iLightId) && (GVar1 = G3DLIGHT_POINT, 0x12 < iLightId - 3U)) {
      GVar1 = G3DLIGHT_SPOT;
      if (0x10 < iLightId - 0x16U) {
        GVar1 = G3DLIGHTTYPE_FORCE_DWORD;
      }
    }
    g3ddbgAssert__FbPCce
              (GVar1 == s_aLight[iLightId].Type,"gra3dGetLightType( iLightId ) : %d, pLight->Type");
  }
                    /* end of inlined section */
  return s_aLight + iLightId;
}

void gra3dLightEnable(int iLightId, int bEnable) {
	static char __FUNCTION__[17] = {
		/* [0] = */ 103,
		/* [1] = */ 114,
		/* [2] = */ 97,
		/* [3] = */ 51,
		/* [4] = */ 100,
		/* [5] = */ 76,
		/* [6] = */ 105,
		/* [7] = */ 103,
		/* [8] = */ 104,
		/* [9] = */ 116,
		/* [10] = */ 69,
		/* [11] = */ 110,
		/* [12] = */ 97,
		/* [13] = */ 98,
		/* [14] = */ 108,
		/* [15] = */ 101,
		/* [16] = */ 0
	};
	
  if (0x26 < iLightId) {
    _SetLineInfo__FPCciT0T0
              (s_gra3d_c_003f1090,0x846,"gra3dLightEnable","NUM_GRA3DLIGHTID > iLightId");
    g3ddbgWarning__FbPCce(false,"iLightId(%d) is invalid");
  }
                    /* inlined from ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z16GRA3DLIGHTSTATUS_UiUi_PX01(iLightId,0x27);
  s_LightManage.aStatus.field0_0x0.m_aData[iLightId].bEnable = bEnable;
  return;
}

int gra3dIsLightEnable(int iLightId) {
	static char __FUNCTION__[19] = {
		/* [0] = */ 103,
		/* [1] = */ 114,
		/* [2] = */ 97,
		/* [3] = */ 51,
		/* [4] = */ 100,
		/* [5] = */ 73,
		/* [6] = */ 115,
		/* [7] = */ 76,
		/* [8] = */ 105,
		/* [9] = */ 103,
		/* [10] = */ 104,
		/* [11] = */ 116,
		/* [12] = */ 69,
		/* [13] = */ 110,
		/* [14] = */ 97,
		/* [15] = */ 98,
		/* [16] = */ 108,
		/* [17] = */ 101,
		/* [18] = */ 0
	};
	
  if (0x26 < iLightId) {
    _SetLineInfo__FPCciT0T0
              (s_gra3d_c_003f1090,0x850,"gra3dIsLightEnable","NUM_GRA3DLIGHTID > iLightId");
    g3ddbgWarning__FbPCce(false,"iLightId(%d) is invalid");
  }
                    /* inlined from ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z16GRA3DLIGHTSTATUS_UiUi_PX01(iLightId,0x27);
  return s_LightManage.aStatus.field0_0x0.m_aData[iLightId].bEnable;
}

void gra3dSetLightStatus(int iLightId, GRA3DLIGHTSTATUS *pS) {
	static char __FUNCTION__[20] = {
		/* [0] = */ 103,
		/* [1] = */ 114,
		/* [2] = */ 97,
		/* [3] = */ 51,
		/* [4] = */ 100,
		/* [5] = */ 83,
		/* [6] = */ 101,
		/* [7] = */ 116,
		/* [8] = */ 76,
		/* [9] = */ 105,
		/* [10] = */ 103,
		/* [11] = */ 104,
		/* [12] = */ 116,
		/* [13] = */ 83,
		/* [14] = */ 116,
		/* [15] = */ 97,
		/* [16] = */ 116,
		/* [17] = */ 117,
		/* [18] = */ 115,
		/* [19] = */ 0
	};
	
  undefined *puVar1;
  GRA3DLIGHTSTATUS *pGVar2;
  uint uVar3;
  uint uVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar7 = (ulong)iLightId;
  if (0x26 < (long)uVar7) {
    _SetLineInfo__FPCciT0T0
              (s_gra3d_c_003f1090,0x85a,"gra3dSetLightStatus","NUM_GRA3DLIGHTID > iLightId");
    g3ddbgWarning__FbPCce(false,"iLightId(%d) is invalid");
  }
                    /* inlined from ctl/fixed_array.h */
  uVar6 = _fixed_array_verifyrange__H1Z16GRA3DLIGHTSTATUS_UiUi_PX01(uVar7,0x27);
  puVar1 = (undefined *)((int)&pS->bEnableToChar + 3);
  uVar3 = (uint)puVar1 & 7;
  uVar4 = (uint)pS & 7;
  uVar6 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
          uVar6 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
          *(ulong *)((int)pS - uVar4) >> uVar4 * 8;
  puVar1 = (undefined *)((int)&pS->bEmulateToDirectionalLight + 3);
  uVar3 = (uint)puVar1 & 7;
  uVar4 = (uint)&pS->bEnableToShadow & 7;
  uVar7 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
          uVar7 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
          *(ulong *)((int)&pS->bEnableToShadow - uVar4) >> uVar4 * 8;
  uVar3 = iLightId * 0x10 + 0x4b0e87;
  uVar4 = uVar3 & 7;
  puVar5 = (ulong *)(uVar3 - uVar4);
  *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | uVar6 >> (7 - uVar4) * 8;
  pGVar2 = s_LightManage.aStatus.field0_0x0.m_aData + iLightId;
  pGVar2->bEnable = (int)uVar6;
  pGVar2->bEnableToChar = (int)(uVar6 >> 0x20);
  uVar3 = iLightId * 0x10 + 0x4b0e8f;
  uVar4 = uVar3 & 7;
  puVar5 = (ulong *)(uVar3 - uVar4);
  *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | uVar7 >> (7 - uVar4) * 8;
  pGVar2 = s_LightManage.aStatus.field0_0x0.m_aData + iLightId;
  pGVar2->bEnableToShadow = (int)uVar7;
  pGVar2->bEmulateToDirectionalLight = (int)(uVar7 >> 0x20);
  return;
}

GRA3DLIGHTSTATUS& gra3dGetLightStatusRef(int iLightId) {
	static char __FUNCTION__[23] = {
		/* [0] = */ 103,
		/* [1] = */ 114,
		/* [2] = */ 97,
		/* [3] = */ 51,
		/* [4] = */ 100,
		/* [5] = */ 71,
		/* [6] = */ 101,
		/* [7] = */ 116,
		/* [8] = */ 76,
		/* [9] = */ 105,
		/* [10] = */ 103,
		/* [11] = */ 104,
		/* [12] = */ 116,
		/* [13] = */ 83,
		/* [14] = */ 116,
		/* [15] = */ 97,
		/* [16] = */ 116,
		/* [17] = */ 117,
		/* [18] = */ 115,
		/* [19] = */ 82,
		/* [20] = */ 101,
		/* [21] = */ 102,
		/* [22] = */ 0
	};
	
  if (0x26 < iLightId) {
    _SetLineInfo__FPCciT0T0
              (s_gra3d_c_003f1090,0x864,"gra3dGetLightStatusRef","NUM_GRA3DLIGHTID > iLightId");
    g3ddbgWarning__FbPCce(false,"iLightId(%d) is invalid");
  }
                    /* inlined from ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z16GRA3DLIGHTSTATUS_UiUi_PX01(iLightId,0x27);
  return s_LightManage.aStatus.field0_0x0.m_aData + iLightId;
}

void gra3dApplyLight() {
  _UpdateLight_Directional__Fv();
  _UpdateLight_Point__Fv();
  _UpdateLight_Spot__Fv();
  return;
}

void gra3dDrawPrimitive(void *pData, int iSize) {
  return;
}

void* g3dGetVu1MaterialCache(G3DLIGHTTYPE type, int iIndex) {
	static char __FUNCTION__[23] = {
		/* [0] = */ 103,
		/* [1] = */ 51,
		/* [2] = */ 100,
		/* [3] = */ 71,
		/* [4] = */ 101,
		/* [5] = */ 116,
		/* [6] = */ 86,
		/* [7] = */ 117,
		/* [8] = */ 49,
		/* [9] = */ 77,
		/* [10] = */ 97,
		/* [11] = */ 116,
		/* [12] = */ 101,
		/* [13] = */ 114,
		/* [14] = */ 105,
		/* [15] = */ 97,
		/* [16] = */ 108,
		/* [17] = */ 67,
		/* [18] = */ 97,
		/* [19] = */ 99,
		/* [20] = */ 104,
		/* [21] = */ 101,
		/* [22] = */ 0
	};
	
  GRA3DVU1MATERIALCACHE_POINT *pGVar1;
  
  pGVar1 = s_aVu1MaterialCache_Point + iIndex;
  if (type != G3DLIGHT_POINT) {
    if (type == G3DLIGHT_SPOT) {
      pGVar1 = (GRA3DVU1MATERIALCACHE_POINT *)(s_aVu1MaterialCache_Spot + iIndex);
    }
    else {
      _SetLineInfo__FPCciT0T0(s_gra3d_c_003f1090,0x887,"g3dGetVu1MaterialCache",&DAT_003f10c0);
      g3ddbgAssert__FbPCce(false,&DAT_003f1098);
      pGVar1 = (GRA3DVU1MATERIALCACHE_POINT *)0x0;
    }
  }
  return pGVar1;
}

static float SetMaxColor255(float *dcol, float *col) {
	float fDiv;
	
  float *pfVar1;
  float fVar2;
  undefined auVar3 [16];
  undefined auVar4 [16];
  
  pfVar1 = (float *)max_element__H1ZPCf_X01X01_X01(col,col + 3);
  fVar2 = *pfVar1 * DAT_003ee3c8;
  if (fVar2 == 0.0) {
    fVar2 = 1.0;
  }
                    /* inlined from g3dxVu0.h */
  auVar4 = _qmtc2(1.0 / fVar2);
  auVar3 = _lqc2(*(undefined (*) [16])col);
  auVar3 = _vmulbc(auVar3,auVar4);
  auVar3 = _sqc2(auVar3);
  *(undefined (*) [16])dcol = auVar3;
                    /* end of inlined section */
  return fVar2;
}

void gra3dCalcVu1MaterialDataDirectional(GRA3DVU1MATERIALDATA_DIRECTIONAL *_pDirectionalData) {
	float fAmbientScale;
	G3DMATERIAL &rMat;
	float &rvAmbient[4];
	float vWork[4];
	float &lmatParallel_DiffuseColor[3][4];
	float &lmatParallel_SpecularColor[3][4];
	int i;
	float *pv0;
	float sc;
	
  GRA3DVU1MATERIALDATA_DIRECTIONAL *pGVar1;
  G3DMATERIAL *pGVar2;
  float (*pafVar3) [4];
  int iVar4;
  GRA3DVU1MATERIALDATA_DIRECTIONAL *pGVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  GRA3DVU1MATERIALDATA_DIRECTIONAL *pGVar10;
  int iLightId;
  undefined4 uVar11;
  undefined in_vf0 [16];
  undefined auVar12 [16];
  undefined auVar13 [16];
  float vWork [4];
  
  uVar11 = 0x43000000;
  if (s_uiMaterialPrimType != 1) {
    uVar11 = 0x437f0000;
  }
  pGVar2 = g3dGetMaterialRef__Fv();
  pafVar3 = gra3dGetAmbientRef__Fv();
                    /* inlined from g3dxVu0.h */
                    /* end of inlined section */
                    /* inlined from g3dxVu0.h */
  auVar12 = _lqc2((undefined  [16])*pafVar3);
  auVar13 = _lqc2(*(undefined (*) [16])pGVar2->vAmbient);
  auVar12 = _vmul(auVar12,auVar13);
  auVar12 = _sqc2(auVar12);
  auVar12 = _lqc2(auVar12);
  auVar13 = _lqc2(*(undefined (*) [16])pGVar2->vEmissive);
  auVar12 = _vadd(auVar12,auVar13);
  vWork = (float  [4])_sqc2(auVar12);
                    /* end of inlined section */
  _MakeColorToMonotone__FPf(vWork);
                    /* inlined from g3dxVu0.h */
  auVar13 = _qmtc2(uVar11);
  auVar12 = _lqc2((undefined  [16])vWork);
  auVar12 = _vmulbc(auVar12,auVar13);
  auVar12 = _sqc2(auVar12);
                    /* end of inlined section */
  s_MaterialPacketDirectional.Data.vAmbient._0_12_ = auVar12._0_12_;
  s_MaterialPacketDirectional.Data.vAmbient[3] = 255.0;
  iVar9 = 0;
  iLightId = 0;
  do {
    iVar4 = gra3dIsLightEnable__Fi(iLightId);
                    /* inlined from g3dxVu0.h */
                    /* end of inlined section */
    if (iVar4 == 0) {
      auVar12 = _sqc2(in_vf0);
      *(undefined (*) [16])((int)s_MaterialPacketDirectional.Data.lmDiffuse + iVar9) = auVar12;
      auVar12 = _sqc2(in_vf0);
      *(undefined (*) [16])((int)s_MaterialPacketDirectional.Data.lmSpecular + iVar9) = auVar12;
    }
    else {
                    /* inlined from g3dxVu0.h */
      auVar12 = _lqc2(*(undefined (*) [16])((int)s_lmDiffuseColor + iVar9));
      auVar13 = _lqc2(*(undefined (*) [16])pGVar2->vDiffuse);
      auVar12 = _vmul(auVar12,auVar13);
      vWork = (float  [4])_sqc2(auVar12);
                    /* end of inlined section */
      _MakeColorToMonotone__FPf(vWork);
                    /* inlined from g3dxVu0.h */
      auVar13 = _qmtc2(s_lmDiffuseColor[0][3]);
      auVar12 = _lqc2((undefined  [16])vWork);
      auVar12 = _vmulbc(auVar12,auVar13);
      auVar12 = _sqc2(auVar12);
      *(undefined (*) [16])((int)s_MaterialPacketDirectional.Data.lmDiffuse + iVar9) = auVar12;
      auVar12 = _lqc2(*(undefined (*) [16])((int)s_lmSpecularColor + iVar9));
      auVar13 = _lqc2(*(undefined (*) [16])pGVar2->vSpecular);
      auVar12 = _vmul(auVar12,auVar13);
      vWork = (float  [4])_sqc2(auVar12);
                    /* end of inlined section */
      _MakeColorToMonotone__FPf(vWork);
                    /* inlined from g3dxVu0.h */
      auVar13 = _qmtc2(s_lmSpecularColor[1][3]);
      auVar12 = _lqc2((undefined  [16])vWork);
      auVar12 = _vmulbc(auVar12,auVar13);
      auVar12 = _sqc2(auVar12);
      *(undefined (*) [16])((int)s_MaterialPacketDirectional.Data.lmSpecular + iVar9) = auVar12;
                    /* end of inlined section */
    }
    iLightId = iLightId + 1;
    iVar9 = iVar9 + 0x10;
  } while (iLightId < 3);
  s_MaterialPacketDirectional.Data.lmDiffuse[0][3] = pGVar2->vDiffuse[3];
  s_MaterialPacketDirectional.Data.lmSpecular[0][3] = pGVar2->vDiffuse[3];
  pGVar1 = &s_MaterialPacketDirectional.Data;
  do {
    pGVar10 = pGVar1;
    pGVar5 = _pDirectionalData;
    uVar6 = *(undefined8 *)(pGVar10->vAmbient + 2);
    uVar7 = *(undefined8 *)pGVar10->lmDiffuse;
    uVar8 = *(undefined8 *)(pGVar10->lmDiffuse + 2);
    *(undefined8 *)pGVar5->vAmbient = *(undefined8 *)pGVar10->vAmbient;
    *(undefined8 *)(pGVar5->vAmbient + 2) = uVar6;
    *(undefined8 *)pGVar5->lmDiffuse = uVar7;
    *(undefined8 *)(pGVar5->lmDiffuse + 2) = uVar8;
    _pDirectionalData = (GRA3DVU1MATERIALDATA_DIRECTIONAL *)pGVar5->lmDiffuse[1];
    pGVar1 = (GRA3DVU1MATERIALDATA_DIRECTIONAL *)pGVar10->lmDiffuse[1];
  } while ((GRA3DVU1MATERIALDATA_DIRECTIONAL *)pGVar10->lmDiffuse[1] !=
           (GRA3DVU1MATERIALDATA_DIRECTIONAL *)s_MaterialPacketDirectional.Data.lmSpecular[2]);
  uVar6 = *(undefined8 *)(pGVar10->lmDiffuse[1] + 2);
  *(undefined8 *)((GRA3DVU1MATERIALDATA_DIRECTIONAL *)pGVar5->lmDiffuse[1])->vAmbient =
       s_MaterialPacketDirectional.Data.lmSpecular[2]._0_8_;
  *(undefined8 *)(pGVar5->lmDiffuse[1] + 2) = uVar6;
  return;
}

void gra3dCalcVu1MaterialDataPoint(GRA3DVU1MATERIALDATA_POINT *_pPointData) {
	G3DMATERIAL &rMat;
	float fSpecularScale;
	float fDiffuseScale;
	int i;
	GRA3DVU1MATERIALCACHE_POINT *pMatCache;
	int j;
	
  int iVar1;
  float afVar2 [4];
  GRA3DVU1MATERIALDATA_POINT *pGVar3;
  G3DMATERIAL *pGVar4;
  void *pvVar5;
  int iVar6;
  GRA3DVU1MATERIALDATA_POINT *pGVar7;
  GRA3DVU1MATERIALDATA_POINT *pGVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  float (*pafVar12) [4];
  int *piVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  undefined extraout_vf1 [16];
  undefined auVar19 [16];
  undefined auVar20 [16];
  undefined auVar21 [16];
  int i;
  
  pGVar4 = g3dGetMaterialRef__Fv();
                    /* inlined from g3dxVu0.h */
  auVar19 = _lqc2(*(undefined (*) [16])pGVar4->vSpecular);
  _vaddabc(auVar19,auVar19);
  auVar19 = _vmaddbc(extraout_vf1,auVar19);
  auVar19 = _qmfc2(auVar19._0_4_);
                    /* end of inlined section */
  if (s_uiMaterialPrimType == 1) {
    fVar15 = 43.0;
    uVar18 = 0x43400000;
  }
  else {
    fVar15 = 86.0;
    uVar18 = 0x437f0000;
  }
  i = 0;
  s_aMaterialCache[1].bEnable = gra3dIsLightTypeEnable__F12G3DLIGHTTYPE(G3DLIGHT_POINT);
  while( true ) {
    iVar6 = gra3dIsLightTypeEnable__F12G3DLIGHTTYPE(G3DLIGHT_POINT);
    if (iVar6 <= i) break;
    pvVar5 = g3dGetVu1MaterialCache__F12G3DLIGHTTYPEi(G3DLIGHT_POINT,i);
    piVar13 = (int *)((int)pvVar5 + 0x74);
    iVar6 = 0;
    do {
                    /* inlined from g3dxVu0.h */
      auVar20 = _lqc2(*(undefined (*) [16])((int)pvVar5 + iVar6 * 0x10 + 0x10));
      auVar21 = _lqc2(*(undefined (*) [16])pGVar4->vDiffuse);
      auVar20 = _vmul(auVar20,auVar21);
      _DAT_70003900 = _sqc2(auVar20);
                    /* end of inlined section */
      _MakeColorToMonotone__FPf((float *)&DAT_70003900);
                    /* inlined from g3dxVu0.h */
      auVar21 = _qmtc2(uVar18);
      auVar20 = _lqc2(_DAT_70003900);
      auVar20 = _vmulbc(auVar20,auVar21);
      _DAT_70003900 = _sqc2(auVar20);
                    /* end of inlined section */
      fVar16 = SetMaxColor255__FPfPCf
                         ((float *)s_MaterialPacketPoint.Data.lmDiffuse[iVar6],
                          (float *)&DAT_70003900);
                    /* inlined from g3dxVu0.h */
                    /* end of inlined section */
                    /* inlined from g3dxVu0.h */
      auVar20 = _lqc2(*(undefined (*) [16])((int)pvVar5 + iVar6 * 0x10 + 0x40));
      auVar21 = _lqc2(*(undefined (*) [16])pGVar4->vSpecular);
      auVar20 = _vmul(auVar20,auVar21);
      _DAT_70003900 = _sqc2(auVar20);
                    /* end of inlined section */
      _MakeColorToMonotone__FPf((float *)&DAT_70003900);
                    /* inlined from g3dxVu0.h */
      pafVar12 = s_MaterialPacketPoint.Data.lmSpecular[iVar6];
      auVar21 = _qmtc2((auVar19._0_4_ * fVar15) / fVar16);
      auVar20 = _lqc2(_DAT_70003900);
      auVar20 = _vmulbc(auVar20,auVar21);
      afVar2 = (float  [4])_sqc2(auVar20);
      *(float *)((int)pafVar12 + 0) = afVar2[0];
      *(float *)((int)pafVar12 + 4) = afVar2[1];
      *(float *)((int)pafVar12 + 8) = afVar2[2];
      *(float *)((int)pafVar12 + 0xc) = afVar2[3];
                    /* end of inlined section */
      iVar14 = iVar6 + 1;
      fVar17 = *(float *)((int)pvVar5 + iVar6 * 4);
      iVar1 = *piVar13;
      piVar13 = piVar13 + 1;
      s_aMaterialCache[1].aiIndex[iVar6] = iVar1;
      s_MaterialPacketPoint.Data.vPower[iVar6] = fVar17 * fVar16;
      iVar6 = iVar14;
    } while (iVar14 < 3);
    i = i + 1;
  }
  pGVar3 = &s_MaterialPacketPoint.Data;
  do {
    pGVar7 = pGVar3;
    pGVar8 = _pPointData;
    uVar9 = *(undefined8 *)(pGVar7->vPower + 2);
    uVar10 = *(undefined8 *)pGVar7->lmDiffuse;
    uVar11 = *(undefined8 *)(pGVar7->lmDiffuse + 2);
    *(undefined8 *)pGVar8->vPower = *(undefined8 *)pGVar7->vPower;
    *(undefined8 *)(pGVar8->vPower + 2) = uVar9;
    *(undefined8 *)pGVar8->lmDiffuse = uVar10;
    *(undefined8 *)(pGVar8->lmDiffuse + 2) = uVar11;
    _pPointData = (GRA3DVU1MATERIALDATA_POINT *)pGVar8->lmDiffuse[1];
    pGVar3 = (GRA3DVU1MATERIALDATA_POINT *)pGVar7->lmDiffuse[1];
  } while ((GRA3DVU1MATERIALDATA_POINT *)pGVar7->lmDiffuse[1] !=
           (GRA3DVU1MATERIALDATA_POINT *)s_MaterialPacketPoint.Data.lmSpecular[2]);
  uVar9 = *(undefined8 *)(pGVar7->lmDiffuse[1] + 2);
  *(undefined8 *)((GRA3DVU1MATERIALDATA_POINT *)pGVar8->lmDiffuse[1])->vPower =
       s_MaterialPacketPoint.Data.lmSpecular[2]._0_8_;
  *(undefined8 *)(pGVar8->lmDiffuse[1] + 2) = uVar9;
  return;
}

void gra3dCalcVu1MaterialDataSpot(GRA3DVU1MATERIALDATA_SPOT *_pSpotData) {
	G3DMATERIAL &rMat;
	float fSpecularScale;
	float fDiffuseScale;
	int i;
	GRA3DVU1MATERIALCACHE_SPOT *pMatCache;
	int j;
	
  float fVar1;
  float afVar2 [4];
  float *pfVar3;
  int iVar4;
  GRA3DVU1MATERIALDATA_SPOT *pGVar5;
  GRA3DVU1MATERIALDATA_SPOT *pGVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  float (*pafVar10) [4];
  float *pfVar11;
  float *pfVar12;
  int *piVar13;
  GRA3DVU1MATERIALDATA_SPOT *pGVar14;
  float *pfVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  undefined extraout_vf1 [16];
  undefined auVar20 [16];
  undefined auVar21 [16];
  undefined auVar22 [16];
  undefined local_90 [16];
  GRA3DVU1MATERIALDATA_SPOT *local_80;
  G3DMATERIAL *rMat;
  int i;
  
  local_80 = _pSpotData;
  rMat = g3dGetMaterialRef__Fv();
                    /* inlined from g3dxVu0.h */
  pfVar15 = rMat->vSpecular;
  auVar20 = _lqc2(*(undefined (*) [16])pfVar15);
  _vaddabc(auVar20,auVar20);
  auVar20 = _vmaddbc(extraout_vf1,auVar20);
  auVar20 = _qmfc2(auVar20._0_4_);
                    /* end of inlined section */
  if (s_uiMaterialPrimType == 1) {
    fVar17 = 43.0;
    uVar19 = 0x43400000;
  }
  else {
    fVar17 = 86.0;
    uVar19 = 0x437f0000;
  }
  i = 0;
  s_aMaterialCache[2].bEnable = gra3dIsLightTypeEnable__F12G3DLIGHTTYPE(G3DLIGHT_SPOT);
  while( true ) {
    iVar4 = gra3dIsLightTypeEnable__F12G3DLIGHTTYPE(G3DLIGHT_SPOT);
    if (iVar4 <= i) break;
    iVar4 = 0;
    pfVar3 = (float *)g3dGetVu1MaterialCache__F12G3DLIGHTTYPEi(G3DLIGHT_SPOT,i);
    piVar13 = s_aMaterialCache[2].aiIndex;
    pfVar12 = pfVar3 + 0x1d;
    pGVar14 = &s_MaterialPacketSpot.Data;
    pfVar11 = pfVar3;
    do {
                    /* inlined from g3dxVu0.h */
      auVar21 = _lqc2(*(undefined (*) [16])(pfVar3 + iVar4 * 4 + 4));
      auVar22 = _lqc2(*(undefined (*) [16])rMat->vDiffuse);
      auVar21 = _vmul(auVar21,auVar22);
      local_90 = _sqc2(auVar21);
                    /* end of inlined section */
      _MakeColorToMonotone__FPf((float *)local_90);
                    /* inlined from g3dxVu0.h */
      auVar22 = _qmtc2(uVar19);
      auVar21 = _lqc2(local_90);
      auVar21 = _vmulbc(auVar21,auVar22);
      local_90 = _sqc2(auVar21);
                    /* end of inlined section */
                    /* end of inlined section */
      fVar18 = SetMaxColor255__FPfPCf
                         ((float *)s_MaterialPacketSpot.Data.lmDiffuse[iVar4],(float *)local_90);
                    /* inlined from g3dxVu0.h */
      auVar21 = _lqc2(*(undefined (*) [16])(pfVar3 + iVar4 * 4 + 0x10));
      auVar22 = _lqc2(*(undefined (*) [16])pfVar15);
      auVar21 = _vmul(auVar21,auVar22);
      local_90 = _sqc2(auVar21);
                    /* end of inlined section */
      _MakeColorToMonotone__FPf((float *)local_90);
                    /* inlined from g3dxVu0.h */
      pafVar10 = s_MaterialPacketSpot.Data.lmSpecular[iVar4];
      auVar22 = _qmtc2((auVar20._0_4_ * fVar17) / fVar18);
      auVar21 = _lqc2(local_90);
      auVar21 = _vmulbc(auVar21,auVar22);
      afVar2 = (float  [4])_sqc2(auVar21);
      *(float *)((int)pafVar10 + 0) = afVar2[0];
      *(float *)((int)pafVar10 + 4) = afVar2[1];
      *(float *)((int)pafVar10 + 8) = afVar2[2];
      *(float *)((int)pafVar10 + 0xc) = afVar2[3];
                    /* end of inlined section */
      fVar16 = *pfVar11;
      pfVar11 = pfVar11 + 1;
      fVar1 = *pfVar12;
      pfVar12 = pfVar12 + 1;
      iVar4 = iVar4 + 1;
      *piVar13 = (int)fVar1;
      piVar13 = piVar13 + 1;
      pGVar14->vPower[0] = fVar16 * fVar18;
      pGVar14 = (GRA3DVU1MATERIALDATA_SPOT *)(pGVar14->vPower + 1);
    } while (iVar4 < 3);
    i = i + 1;
  }
  pGVar14 = &s_MaterialPacketSpot.Data;
  do {
    pGVar5 = pGVar14;
    pGVar6 = local_80;
    uVar8 = *(undefined8 *)(pGVar5->vPower + 2);
    uVar9 = *(undefined8 *)pGVar5->lmDiffuse;
    uVar7 = *(undefined8 *)(pGVar5->lmDiffuse + 2);
    *(undefined8 *)pGVar6->vPower = *(undefined8 *)pGVar5->vPower;
    *(undefined8 *)(pGVar6->vPower + 2) = uVar8;
    *(undefined8 *)pGVar6->lmDiffuse = uVar9;
    *(undefined8 *)(pGVar6->lmDiffuse + 2) = uVar7;
    local_80 = (GRA3DVU1MATERIALDATA_SPOT *)pGVar6->lmDiffuse[1];
    pGVar14 = (GRA3DVU1MATERIALDATA_SPOT *)pGVar5->lmDiffuse[1];
  } while ((GRA3DVU1MATERIALDATA_SPOT *)pGVar5->lmDiffuse[1] !=
           (GRA3DVU1MATERIALDATA_SPOT *)s_MaterialPacketSpot.Data.lmSpecular[2]);
  uVar7 = *(undefined8 *)(pGVar5->lmDiffuse[1] + 2);
  *(undefined8 *)((GRA3DVU1MATERIALDATA_SPOT *)pGVar6->lmDiffuse[1])->vPower =
       s_MaterialPacketSpot.Data.lmSpecular[2]._0_8_;
  *(undefined8 *)(pGVar6->lmDiffuse[1] + 2) = uVar7;
  return;
}

void gra3dSetMaterial(SGDMATERIAL *pMat) {
	float fDiffuseScale;
	float fSpecularScale;
	G3DMATERIAL mat;
	
  undefined *puVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong in_a2;
  ulong in_t0;
  float fVar6;
  undefined in_vf1 [16];
  undefined auVar7 [16];
  G3DMATERIAL mat;
  
  pMat->iCacheStatus = 1;
  s_uiMaterialPrimType = pMat->uiPrimType;
  puVar1 = (undefined *)((int)pMat->aCache[0].aiIndex + 3);
  uVar3 = (uint)puVar1 & 7;
  uVar4 = (uint)pMat->aCache & 7;
  s_aMaterialCache[0]._0_8_ =
       (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
       (long)(int)s_uiMaterialPrimType & 0xffffffffffffffffU >> (uVar3 + 1) * 8) &
       -1L << (8 - uVar4) * 8 | *(ulong *)((int)pMat->aCache - uVar4) >> uVar4 * 8;
  puVar1 = (undefined *)((int)pMat->aCache[0].aiIndex + 0xb);
  uVar3 = (uint)puVar1 & 7;
  piVar2 = pMat->aCache[0].aiIndex + 1;
  uVar4 = (uint)piVar2 & 7;
  s_aMaterialCache[0].aiIndex._4_8_ =
       (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
       in_a2 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
       *(ulong *)((int)piVar2 - uVar4) >> uVar4 * 8;
  puVar1 = (undefined *)((int)pMat->aCache[1].aiIndex + 3);
  uVar3 = (uint)puVar1 & 7;
  uVar4 = (uint)(pMat->aCache + 1) & 7;
  s_aMaterialCache[1]._0_8_ =
       (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
       in_t0 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
       *(ulong *)((int)(pMat->aCache + 1) - uVar4) >> uVar4 * 8;
  puVar1 = (undefined *)((int)pMat->aCache[1].aiIndex + 0xb);
  uVar3 = (uint)puVar1 & 7;
  piVar2 = pMat->aCache[1].aiIndex + 1;
  uVar4 = (uint)piVar2 & 7;
  s_aMaterialCache[1].aiIndex._4_8_ =
       (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
       s_aMaterialCache[0]._0_8_ & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8
       | *(ulong *)((int)piVar2 - uVar4) >> uVar4 * 8;
  puVar1 = (undefined *)((int)pMat->aCache[2].aiIndex + 3);
  uVar3 = (uint)puVar1 & 7;
  uVar4 = (uint)(pMat->aCache + 2) & 7;
  s_aMaterialCache[2]._0_8_ =
       (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
       s_aMaterialCache[0].aiIndex._4_8_ & 0xffffffffffffffffU >> (uVar3 + 1) * 8) &
       -1L << (8 - uVar4) * 8 | *(ulong *)((int)(pMat->aCache + 2) - uVar4) >> uVar4 * 8;
  puVar1 = (undefined *)((int)pMat->aCache[2].aiIndex + 0xb);
  uVar3 = (uint)puVar1 & 7;
  piVar2 = pMat->aCache[2].aiIndex + 1;
  uVar4 = (uint)piVar2 & 7;
  s_aMaterialCache[2].aiIndex._4_8_ =
       (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
       s_aMaterialCache[1]._0_8_ & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8
       | *(ulong *)((int)piVar2 - uVar4) >> uVar4 * 8;
                    /* inlined from g3dxVu0.h */
  auVar7 = _lqc2(*(undefined (*) [16])pMat->vSpecular);
  _vaddabc(auVar7,auVar7);
  auVar7 = _vmaddbc(in_vf1,auVar7);
  auVar7 = _qmfc2(auVar7._0_4_);
                    /* end of inlined section */
                    /* end of inlined section */
  if (pMat->uiPrimType == 1) {
    fVar6 = 43.0;
    s_lmDiffuseColor[0][3] = 192.0;
  }
  else {
    fVar6 = 86.0;
    s_lmDiffuseColor[0][3] = 255.0;
  }
  s_lmSpecularColor[1][3] = auVar7._0_4_ * fVar6;
  s_lmSpecularColor[0][3] = 255.0;
                    /* inlined from g3dxVu0.h */
  mat.vDiffuse[2] = pMat->vDiffuse[2];
  mat.vDiffuse[3] = pMat->vDiffuse[3];
  mat.vDiffuse[0] = (float)*(undefined8 *)pMat->vDiffuse;
  mat.vDiffuse[1] = (float)((ulong)*(undefined8 *)pMat->vDiffuse >> 0x20);
  mat.vAmbient[2] = pMat->vAmbient[2];
  mat.vAmbient[3] = pMat->vAmbient[3];
  mat.vAmbient[0] = (float)*(undefined8 *)pMat->vAmbient;
  mat.vAmbient[1] = (float)((ulong)*(undefined8 *)pMat->vAmbient >> 0x20);
  uVar5 = *(undefined8 *)pMat->vSpecular;
  mat.vSpecular[2] = pMat->vSpecular[2];
  mat.vSpecular[3] = pMat->vSpecular[3];
  mat.vSpecular[0] = (float)uVar5;
  mat.vSpecular[1] = (float)((ulong)uVar5 >> 0x20);
  mat.vEmissive[2] = pMat->vEmission[2];
  mat.vEmissive[3] = pMat->vEmission[3];
  mat.vEmissive[0] = (float)*(undefined8 *)pMat->vEmission;
  mat.vEmissive[1] = (float)((ulong)*(undefined8 *)pMat->vEmission >> 0x20);
                    /* end of inlined section */
  mat.fPower = 1.0;
  g3dSetMaterial__FPC11G3DMATERIAL(&mat);
  return;
}

int gra3dSetTransform(GRA3DTRANSFORMSTATETYPE state, float *mat[4]) {
	float *pm0[4];
	
  float afVar1 [4];
  GRA3DVU1MEMLAYOUT *pGVar2;
  GRA3DVU1MEMLAYOUT *pGVar3;
  GRA3DVU1MEMLAYOUT *pGVar4;
  GRA3DSCRATCHPADLAYOUT *pGVar5;
  int iVar6;
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined auVar10 [16];
  
  pGVar5 = s_pScratchpadLayout;
  if (state == GRA3DTS_WORLDCLIP) {
                    /* inlined from g3dxVu0.h */
    auVar7 = _lqc2((undefined  [16])*mat);
    auVar8 = _lqc2((undefined  [16])mat[1]);
    auVar9 = _lqc2((undefined  [16])mat[2]);
    auVar10 = _lqc2((undefined  [16])mat[3]);
    afVar1 = (float  [4])_sqc2(auVar7);
    pGVar2 = &s_pScratchpadLayout->Vu1Mem;
    pGVar3 = &s_pScratchpadLayout->Vu1Mem;
    pGVar4 = &s_pScratchpadLayout->Vu1Mem;
    *(float *)((int)&s_pScratchpadLayout->Vu1Mem + 0xc0) = afVar1[0];
    *(float *)((int)pGVar2 + 0xc4) = afVar1[1];
    *(float *)((int)pGVar3 + 200) = afVar1[2];
    *(float *)((int)pGVar4 + 0xcc) = afVar1[3];
    pGVar2 = &pGVar5->Vu1Mem;
    afVar1 = (float  [4])_sqc2(auVar8);
    *(float *)((int)((float (*) [4])((int)&pGVar2->Direct + 0xc0))[1] + 0) = afVar1[0];
    *(float *)((int)((float (*) [4])((int)&pGVar2->Direct + 0xc0))[1] + 4) = afVar1[1];
    *(float *)((int)((float (*) [4])((int)&pGVar2->Direct + 0xc0))[1] + 8) = afVar1[2];
    *(float *)((int)((float (*) [4])((int)&pGVar2->Direct + 0xc0))[1] + 0xc) = afVar1[3];
    pGVar2 = &pGVar5->Vu1Mem;
    afVar1 = (float  [4])_sqc2(auVar9);
    *(float *)((int)((float (*) [4])((int)&pGVar2->Direct + 0xc0))[2] + 0) = afVar1[0];
    *(float *)((int)((float (*) [4])((int)&pGVar2->Direct + 0xc0))[2] + 4) = afVar1[1];
    *(float *)((int)((float (*) [4])((int)&pGVar2->Direct + 0xc0))[2] + 8) = afVar1[2];
    *(float *)((int)((float (*) [4])((int)&pGVar2->Direct + 0xc0))[2] + 0xc) = afVar1[3];
    pGVar2 = &pGVar5->Vu1Mem;
    afVar1 = (float  [4])_sqc2(auVar10);
    *(float *)((int)((float (*) [4])((int)&pGVar2->Direct + 0xc0))[3] + 0) = afVar1[0];
    *(float *)((int)((float (*) [4])((int)&pGVar2->Direct + 0xc0))[3] + 4) = afVar1[1];
    *(float *)((int)((float (*) [4])((int)&pGVar2->Direct + 0xc0))[3] + 8) = afVar1[2];
    *(float *)((int)((float (*) [4])((int)&pGVar2->Direct + 0xc0))[3] + 0xc) = afVar1[3];
                    /* end of inlined section */
  }
  else if (state == GRA3DTS_WORLDSCREEN) {
                    /* inlined from g3dxVu0.h */
    auVar7 = _lqc2((undefined  [16])*mat);
    auVar8 = _lqc2((undefined  [16])mat[1]);
    auVar9 = _lqc2((undefined  [16])mat[2]);
    auVar10 = _lqc2((undefined  [16])mat[3]);
    afVar1 = (float  [4])_sqc2(auVar7);
    pGVar2 = &s_pScratchpadLayout->Vu1Mem;
    pGVar3 = &s_pScratchpadLayout->Vu1Mem;
    pGVar4 = &s_pScratchpadLayout->Vu1Mem;
    *(float *)((int)&s_pScratchpadLayout->Vu1Mem + 0x80) = afVar1[0];
    *(float *)((int)pGVar2 + 0x84) = afVar1[1];
    *(float *)((int)pGVar3 + 0x88) = afVar1[2];
    *(float *)((int)pGVar4 + 0x8c) = afVar1[3];
    pGVar2 = &pGVar5->Vu1Mem;
    afVar1 = (float  [4])_sqc2(auVar8);
    *(float *)((int)((float (*) [4])((int)&pGVar2->Direct + 0x80))[1] + 0) = afVar1[0];
    *(float *)((int)((float (*) [4])((int)&pGVar2->Direct + 0x80))[1] + 4) = afVar1[1];
    *(float *)((int)((float (*) [4])((int)&pGVar2->Direct + 0x80))[1] + 8) = afVar1[2];
    *(float *)((int)((float (*) [4])((int)&pGVar2->Direct + 0x80))[1] + 0xc) = afVar1[3];
    pGVar2 = &pGVar5->Vu1Mem;
    afVar1 = (float  [4])_sqc2(auVar9);
    *(float *)((int)((float (*) [4])((int)&pGVar2->Direct + 0x80))[2] + 0) = afVar1[0];
    *(float *)((int)((float (*) [4])((int)&pGVar2->Direct + 0x80))[2] + 4) = afVar1[1];
    *(float *)((int)((float (*) [4])((int)&pGVar2->Direct + 0x80))[2] + 8) = afVar1[2];
    *(float *)((int)((float (*) [4])((int)&pGVar2->Direct + 0x80))[2] + 0xc) = afVar1[3];
    pGVar2 = &pGVar5->Vu1Mem;
    afVar1 = (float  [4])_sqc2(auVar10);
    *(float *)((int)((float (*) [4])((int)&pGVar2->Direct + 0x80))[3] + 0) = afVar1[0];
    *(float *)((int)((float (*) [4])((int)&pGVar2->Direct + 0x80))[3] + 4) = afVar1[1];
    *(float *)((int)((float (*) [4])((int)&pGVar2->Direct + 0x80))[3] + 8) = afVar1[2];
    *(float *)((int)((float (*) [4])((int)&pGVar2->Direct + 0x80))[3] + 0xc) = afVar1[3];
                    /* end of inlined section */
    return 1;
  }
  iVar6 = g3dSetTransform__F21G3DTRANSFORMSTATETYPEPA3_Cf(state,mat);
  return iVar6;
}

float&[4][4] gra3dGetTransformRef(GRA3DTRANSFORMSTATETYPE state) {
  float (*paafVar1) [4] [4];
  
  if ((state != GRA3DTS_WORLDCLIP) && (state == GRA3DTS_WORLDSCREEN)) {
    return (float (*) [4] [4])(s_pScratchpadLayout->Vu1Mem).Direct.matWorldScreen;
  }
  paafVar1 = g3dGetTransformRef__F21G3DTRANSFORMSTATETYPE(state);
  return paafVar1;
}

void _gra3dEnableTextureForce(int bEnable) {
  GRA3DSCRATCHPADLAYOUT *pGVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  pGVar1 = s_pScratchpadLayout;
  uVar6 = *(ulong *)((int)&s_pScratchpadLayout->Vu1Mem + 0x70);
  uVar4 = uVar6 >> 0x2f;
  uVar5 = uVar4 & 0x7ef;
  if (bEnable != 0) {
    uVar5 = uVar4 & 0x7ff | 0x10;
  }
  uVar2 = *(ulong *)((int)&s_pScratchpadLayout->Vu1Mem + 0x40);
  uVar3 = uVar2 >> 0x2f;
  uVar4 = uVar3 & 0x7ff;
  if (bEnable == 0) {
    uVar4 = uVar3 & 0x7ef;
  }
  *(ulong *)((int)&s_pScratchpadLayout->Vu1Mem + 0x70) = uVar6 & 0xfc007fffffffffff | uVar5 << 0x2f;
  if (bEnable != 0) {
    uVar4 = uVar4 | 0x10;
  }
  *(ulong *)((int)&pGVar1->Vu1Mem + 0x40) = uVar2 & 0xfc007fffffffffff | uVar4 << 0x2f;
  return;
}

void gra3dCalcVertexColor(float *vDest, float *vVertex, float *vNormal, float *vSrcColor) {
	float vFirst[4];
	
  undefined auVar1 [16];
  undefined auVar2 [16];
  float vFirst [4];
  
                    /* inlined from g3dxVu0.h */
                    /* end of inlined section */
                    /* inlined from g3dxVu0.h */
  auVar2 = _qmtc2(s_if_1_255.i);
  auVar1 = _lqc2(*(undefined (*) [16])vSrcColor);
  auVar1 = _vmulbc(auVar1,auVar2);
  vFirst = (float  [4])_sqc2(auVar1);
                    /* end of inlined section */
  g3dCalcVertexColor__FPfPCfN21(vDest,vVertex,vNormal,vFirst);
                    /* inlined from g3dxVu0.h */
  auVar2 = _qmtc2(0x437f0000);
  auVar1 = _lqc2(*(undefined (*) [16])vDest);
  auVar1 = _vmulbc(auVar1,auVar2);
  auVar1 = _sqc2(auVar1);
  *(undefined (*) [16])vDest = auVar1;
                    /* end of inlined section */
  _MakeColorToMonotone__FPf(vDest);
  return;
}

static int _SetRegisterSpecified(long int lData, long int lAddress) {
	static SETREGISTERPAIR s_aSRPair[7] = {
		/* [0] = */ {
			/* .lAddress = */ 66,
			/* .pFuncWithContext = */ SetAlphaRegister,
			/* .pFunc = */ NULL
		},
		/* [1] = */ {
			/* .lAddress = */ 71,
			/* .pFuncWithContext = */ SetTestRegister,
			/* .pFunc = */ NULL
		},
		/* [2] = */ {
			/* .lAddress = */ 78,
			/* .pFuncWithContext = */ SetZbufRegister,
			/* .pFunc = */ NULL
		},
		/* [3] = */ {
			/* .lAddress = */ 20,
			/* .pFuncWithContext = */ SetTex1Register,
			/* .pFunc = */ NULL
		},
		/* [4] = */ {
			/* .lAddress = */ 1,
			/* .pFuncWithContext = */ SetClampRegister,
			/* .pFunc = */ NULL
		},
		/* [5] = */ {
			/* .lAddress = */ 64,
			/* .pFuncWithContext = */ SetScissorRegister,
			/* .pFunc = */ NULL
		},
		/* [6] = */ {
			/* .lAddress = */ 59,
			/* .pFuncWithContext = */ NULL,
			/* .pFunc = */ SetTexaRegister
		}
	};
	int i;
	SETREGISTERPAIR &rSRPair;
	
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = 0;
  do {
    iVar2 = iVar2 + 1;
    if (*(long *)((int)&s_aSRPair_1687 + iVar1) == lAddress) {
      if (*(code **)((int)&PTR_SetAlphaRegister__Fil_003b4b38 + iVar1) != (code *)0x0) {
        (**(code **)((int)&PTR_SetAlphaRegister__Fil_003b4b38 + iVar1))(0);
        return 1;
      }
      (**(code **)((int)&DAT_003b4b3c + iVar1))(lData,lData);
      return 1;
    }
    iVar1 = iVar2 * 0x10;
  } while (iVar2 < 7);
  return 0;
}

static int _GetRegisterSpecified(long int &rlData, long int lAddress) {
	static GETREGISTERPAIR s_aGRPair[7] = {
		/* [0] = */ {
			/* .lAddress = */ 66,
			/* .pFuncWithContext = */ GET_ALPHA_REGISTER,
			/* .pFunc = */ NULL
		},
		/* [1] = */ {
			/* .lAddress = */ 71,
			/* .pFuncWithContext = */ GET_TEST_REGISTER,
			/* .pFunc = */ NULL
		},
		/* [2] = */ {
			/* .lAddress = */ 78,
			/* .pFuncWithContext = */ GET_ZBUF_REGISTER,
			/* .pFunc = */ NULL
		},
		/* [3] = */ {
			/* .lAddress = */ 20,
			/* .pFuncWithContext = */ GET_TEX1_REGISTER,
			/* .pFunc = */ NULL
		},
		/* [4] = */ {
			/* .lAddress = */ 1,
			/* .pFuncWithContext = */ GET_CLAMP_REGISTER,
			/* .pFunc = */ NULL
		},
		/* [5] = */ {
			/* .lAddress = */ 64,
			/* .pFuncWithContext = */ GET_SCISSOR_REGISTER,
			/* .pFunc = */ NULL
		},
		/* [6] = */ {
			/* .lAddress = */ 59,
			/* .pFuncWithContext = */ NULL,
			/* .pFunc = */ GET_TEXA_REGISTER
		}
	};
	int i;
	GETREGISTERPAIR &rGRPair;
	
  int iVar1;
  long lVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = 0;
  do {
    iVar3 = iVar3 + 1;
    if (*(long *)((int)&s_aGRPair_1691 + iVar1) == lAddress) {
      if (*(code **)((int)&PTR_GET_ALPHA_REGISTER__Fi_003b4ba8 + iVar1) == (code *)0x0) {
        lVar2 = (**(code **)((int)&DAT_003b4bac + iVar1))();
        *rlData = lVar2;
      }
      else {
        lVar2 = (**(code **)((int)&PTR_GET_ALPHA_REGISTER__Fi_003b4ba8 + iVar1))(0);
        *rlData = lVar2;
      }
      return 1;
    }
    iVar1 = iVar3 * 0x10;
  } while (iVar3 < 7);
  return 0;
}

int gra3dSetGsRegister(long int lData, long int lAddress) {
	int iDmaChan;
	
  int iVar1;
  int iDmaChan;
  
  iVar1 = _SetRegisterSpecified__Fll(lData,lAddress);
  iDmaChan = 1;
  if (iVar1 != 0) {
    iDmaChan = -1;
  }
  iVar1 = g3dSetGsRegister__Flli(lData,lAddress,iDmaChan);
  return iVar1;
}

int gra3dSetGsRegisters(sceGifPackAd *aGPA, int iNum) {
	int i;
	
  ulong *puVar1;
  ulong lData;
  
  if (0 < iNum) {
    lData = aGPA->DATA;
    while( true ) {
      iNum = iNum + -1;
      puVar1 = &aGPA->ADDR;
      aGPA = aGPA + 1;
      gra3dSetGsRegister__Flli(lData,*puVar1);
      if (iNum == 0) break;
      lData = aGPA->DATA;
    }
  }
  return 1;
}

long int& gra3dGetGsRegisterRef(long int lAddress) {
	static long int lRet;
	
  int iVar1;
  long *plVar2;
  
  iVar1 = _GetRegisterSpecified__FRll((long *)&lRet_1701,lAddress);
  if (iVar1 != 0) {
    return (long *)&lRet_1701;
  }
  plVar2 = g3dGetGsRegisterRef__Fl(lAddress);
  return plVar2;
}

static void _ModifyGra3dScratchpadDefault() {
  GRA3DSCRATCHPADLAYOUT *pGVar1;
  GRA3DSCRATCHPADLAYOUT *pGVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  pGVar1 = &s_gra3dScratchpadLayoutDefault;
  pGVar2 = s_pScratchpadLayout;
  do {
    uVar3 = *(undefined8 *)(pGVar1->qwVif1Code0 + 2);
    uVar4 = *(undefined8 *)&pGVar1->Vu1Mem;
    uVar5 = *(undefined8 *)((int)&pGVar1->Vu1Mem + 8);
    *(undefined8 *)pGVar2->qwVif1Code0 = *(undefined8 *)pGVar1->qwVif1Code0;
    *(undefined8 *)(pGVar2->qwVif1Code0 + 2) = uVar3;
    *(undefined8 *)&pGVar2->Vu1Mem = uVar4;
    *(undefined8 *)((int)&pGVar2->Vu1Mem + 8) = uVar5;
    pGVar1 = (GRA3DSCRATCHPADLAYOUT *)(pGVar1->Vu1Mem).Packed.Const._vVF2;
    pGVar2 = (GRA3DSCRATCHPADLAYOUT *)(pGVar2->Vu1Mem).Packed.Const._vVF2;
  } while (pGVar1 != (GRA3DSCRATCHPADLAYOUT *)&g_xv0000);
  _ModifyFogParam__Fv();
  return;
}

static void _ModifyScratchpad() {
	G3DCREATIONDATA g3dCD;
	G3DCOREOBJECT *pScratchpad;
	G3DCOREOBJECT *pStatic;
	GRA3DSCRATCHPADLAYOUT *pScratchpad;
	GRA3DSCRATCHPADLAYOUT *pStatic;
	GRA3DSHADOWCREATIONDATA gra3dshadowCD;
	GRA3DSCRATCHPADLAYOUT_MAPSHADOW *pScratchpad;
	GRA3DSCRATCHPADLAYOUT_MAPSHADOW *pStatic;
	
  G3DCOREOBJECT *pGVar1;
  G3DCOREOBJECT *pGVar2;
  GRA3DSCRATCHPADLAYOUT_MAPSHADOW *pGVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  GRA3DSCRATCHPADLAYOUT *pGVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  G3DCREATIONDATA g3dCD;
  GRA3DSHADOWCREATIONDATA gra3dshadowCD;
  
  g3dCD.pObj = (G3DCOREOBJECT *)GetStaticInstance__H1Z13G3DCOREOBJECT_v_PX01();
  if (s_bUseScratchpad == 0) {
    puVar5 = &DAT_700005e0;
    pGVar2 = g3dCD.pObj;
    do {
      pGVar1 = pGVar2;
      puVar4 = puVar5;
      uVar7 = puVar4[1];
      uVar8 = puVar4[2];
      uVar9 = puVar4[3];
      *(undefined8 *)pGVar1->auiRenderState = *puVar4;
      *(undefined8 *)(pGVar1->auiRenderState + 2) = uVar7;
      *(undefined8 *)(pGVar1->auiRenderState + 4) = uVar8;
      *(undefined8 *)(pGVar1->auiRenderState + 6) = uVar9;
      puVar5 = puVar4 + 4;
      pGVar2 = (G3DCOREOBJECT *)pGVar1->auiGlobalState;
    } while (puVar4 + 4 != (undefined8 *)0x70001740);
    uVar7 = puVar4[5];
    *(undefined8 *)pGVar1->auiGlobalState = uRam70001740;
    *(undefined8 *)&pGVar1->field_0x28 = uVar7;
  }
  else {
    puVar5 = &DAT_700005e0;
    pGVar2 = g3dCD.pObj;
    do {
      pGVar1 = pGVar2;
      puVar4 = puVar5;
      uVar7 = *(undefined8 *)(pGVar1->auiRenderState + 2);
      uVar8 = *(undefined8 *)(pGVar1->auiRenderState + 4);
      uVar9 = *(undefined8 *)(pGVar1->auiRenderState + 6);
      *puVar4 = *(undefined8 *)pGVar1->auiRenderState;
      puVar4[1] = uVar7;
      puVar4[2] = uVar8;
      puVar4[3] = uVar9;
      pGVar2 = (G3DCOREOBJECT *)pGVar1->auiGlobalState;
      puVar5 = puVar4 + 4;
    } while (pGVar2 != (G3DCOREOBJECT *)((int)&(g3dCD.pObj)->GsRegister + 0x3f0));
    uVar7 = *(undefined8 *)&pGVar1->field_0x28;
    puVar4[4] = *(undefined8 *)pGVar2;
    puVar4[5] = uVar7;
    g3dCD.pObj = (G3DCOREOBJECT *)&DAT_700005e0;
  }
  g3dInitialize__FPC15G3DCREATIONDATA(&g3dCD);
  s_pScratchpadLayout =
       (GRA3DSCRATCHPADLAYOUT *)GetStaticInstance__H1Z21GRA3DSCRATCHPADLAYOUT_v_PX01();
  if (s_bUseScratchpad == 0) {
    puVar5 = &DAT_70000000;
    pGVar6 = s_pScratchpadLayout;
    do {
      uVar8 = puVar5[1];
      uVar9 = puVar5[2];
      uVar7 = puVar5[3];
      *(undefined8 *)pGVar6->qwVif1Code0 = *puVar5;
      *(undefined8 *)(pGVar6->qwVif1Code0 + 2) = uVar8;
      *(undefined8 *)&pGVar6->Vu1Mem = uVar9;
      *(undefined8 *)((int)&pGVar6->Vu1Mem + 8) = uVar7;
      puVar5 = puVar5 + 4;
      pGVar6 = (GRA3DSCRATCHPADLAYOUT *)(pGVar6->Vu1Mem).Packed.Const._vVF2;
    } while (puVar5 != &DAT_70000440);
  }
  else {
    puVar5 = &DAT_70000000;
    pGVar6 = s_pScratchpadLayout + 1;
    do {
      uVar9 = *(undefined8 *)(s_pScratchpadLayout->qwVif1Code0 + 2);
      uVar7 = *(undefined8 *)&s_pScratchpadLayout->Vu1Mem;
      uVar8 = *(undefined8 *)((int)&s_pScratchpadLayout->Vu1Mem + 8);
      *puVar5 = *(undefined8 *)s_pScratchpadLayout->qwVif1Code0;
      puVar5[1] = uVar9;
      puVar5[2] = uVar7;
      puVar5[3] = uVar8;
      s_pScratchpadLayout =
           (GRA3DSCRATCHPADLAYOUT *)(s_pScratchpadLayout->Vu1Mem).Packed.Const._vVF2;
      puVar5 = puVar5 + 4;
    } while (s_pScratchpadLayout != pGVar6);
    s_pScratchpadLayout = (GRA3DSCRATCHPADLAYOUT *)&DAT_70000000;
    _ModifyGra3dScratchpadDefault__Fv();
  }
  gra3dshadowCD.pSL =
       (GRA3DSCRATCHPADLAYOUT_MAPSHADOW *)
       GetStaticInstance__H1Z31GRA3DSCRATCHPADLAYOUT_MAPSHADOW_v_PX01();
  puVar5 = &DAT_70000440;
  if (s_bUseScratchpad == 0) {
    puVar5 = &DAT_70000440;
    pGVar3 = gra3dshadowCD.pSL;
    do {
      uVar7 = puVar5[1];
      uVar8 = puVar5[2];
      uVar9 = puVar5[3];
      *(undefined8 *)pGVar3->qwVif1Code = *puVar5;
      *(undefined8 *)(pGVar3->qwVif1Code + 2) = uVar7;
      *(undefined8 *)&pGVar3->Vu1Mem = uVar8;
      *(undefined8 *)((int)&pGVar3->Vu1Mem + 8) = uVar9;
      puVar5 = puVar5 + 4;
      pGVar3 = (GRA3DSCRATCHPADLAYOUT_MAPSHADOW *)((int)&pGVar3->Vu1Mem + 0x10);
    } while (puVar5 != &DAT_700005e0);
  }
  else {
    pGVar3 = gra3dshadowCD.pSL + 1;
    do {
      uVar8 = *(undefined8 *)((gra3dshadowCD.pSL)->qwVif1Code + 2);
      uVar9 = *(undefined8 *)&(gra3dshadowCD.pSL)->Vu1Mem;
      uVar7 = *(undefined8 *)((int)&(gra3dshadowCD.pSL)->Vu1Mem + 8);
      *puVar5 = *(undefined8 *)(gra3dshadowCD.pSL)->qwVif1Code;
      puVar5[1] = uVar8;
      puVar5[2] = uVar9;
      puVar5[3] = uVar7;
      gra3dshadowCD.pSL =
           (GRA3DSCRATCHPADLAYOUT_MAPSHADOW *)((int)&(gra3dshadowCD.pSL)->Vu1Mem + 0x10);
      puVar5 = puVar5 + 4;
    } while (gra3dshadowCD.pSL != pGVar3);
    gra3dshadowCD.pSL = (GRA3DSCRATCHPADLAYOUT_MAPSHADOW *)&DAT_70000440;
  }
  gra3dshadowInit__FPC23GRA3DSHADOWCREATIONDATA(&gra3dshadowCD);
  return;
}

void gra3dUseScratchpad(int b) {
  if (b != s_bUseScratchpad) {
    s_bUseScratchpad = b;
    _ModifyScratchpad__Fv();
  }
  return;
}

int gra3dIsUsingScratchpad() {
  return s_bUseScratchpad;
}

static void _OnExitApp() {
  printf("-- Application Exit --\n");
  return;
}

void gra3dInit(void *pPacket, int iSize) {
	GRA3DSGDCREATIONDATA gra3dsgdCD;
	
  GRA3DSGDCREATIONDATA gra3dsgdCD;
  
  atexit(_OnExitApp__Fv);
  _ModifyScratchpad__Fv();
  g3dVif1Init__Fv();
  g3dVif1SetRegister__FPC14G3DVIF1CMDDATAi(s_aVif1CmdData,6);
  gra3ddbgVerifyVu1MemAddress__Fv();
  _InitCamera__Fv();
  _InitLight__Fv();
  _InitFog__Fv();
  _SetClipValue__Fffff(-1.0,1.0,-1.0,1.0);
  gra3dsgdCD.vnarray = (float (*) [4])pPacket;
  gra3dsgdCD.size = (uint)iSize >> 4;
  gra3dsgdInit__FPC20GRA3DSGDCREATIONDATA(&gra3dsgdCD);
  _14IG3DCompatible_s_pFuncSetGsRegister = gra3dSetGsRegister__Flli;
  _14IG3DCompatible_s_pFuncSetGsRegisters = gra3dSetGsRegisters__FPC13_sceGifPackAdii;
  _14IG3DCompatible_s_pFuncGetGsRegisterRef = gra3dGetGsRegisterRef__Fl;
  _14IG3DCompatible_s_pFuncSetTransform = gra3dSetTransform__F23GRA3DTRANSFORMSTATETYPEPA3_Cf;
  _14IG3DCompatible_s_pFuncGetTransformRef = gra3dGetTransformRef__F23GRA3DTRANSFORMSTATETYPE;
  _10CVu0Matrix_s_pFuncLoadMatrix = _Vu0LoadMatrix_4_5_6_7__FPA3_Cf;
  _10CVu0Matrix_s_pFuncApplyMatrixWithoutTrans = _Vu0ApplyMatrixWithoutTrans_4_5_6_7__FPfPCf;
  return;
}

void gra3dDraw() {
  gra3dcamSetAspect__Fff(1.0,0.875);
  MhCtlDraw__Fv();
  return;
}

void void fill<float *, float>(float *__first, float *__last, float &__value) {
  G3D_EMULATE_DIRECTIONALLIGHT_DATA __value;
  G3D_EMULATE_DIRECTIONALLIGHT_DATA __val;
  G3D_EMULATE_DIRECTIONALLIGHT_DATA *__a;
  G3D_EMULATE_DIRECTIONALLIGHT_DATA __tmp;
  
  g3ddbgAssert__FbPCce(false,str_906);
  return (type_info *)__first;
}

GRA3DLIGHTSTATUS* GRA3DLIGHTSTATUS * _fixed_array_verifyrange<GRA3DLIGHTSTATUS>(size_t v, size_t _max) {
  G3D_EMULATE_DIRECTIONALLIGHT_DATA __value;
  G3D_EMULATE_DIRECTIONALLIGHT_DATA __val;
  G3D_EMULATE_DIRECTIONALLIGHT_DATA *__a;
  G3D_EMULATE_DIRECTIONALLIGHT_DATA __tmp;
  
  g3ddbgAssert__FbPCce(false,str_906);
  return (type_info *)__first;
}

G3DLIGHT* G3DLIGHT * _fixed_array_verifyrange<G3DLIGHT>(size_t v, size_t _max) {
  G3D_EMULATE_DIRECTIONALLIGHT_DATA __value;
  G3D_EMULATE_DIRECTIONALLIGHT_DATA __val;
  G3D_EMULATE_DIRECTIONALLIGHT_DATA *__a;
  G3D_EMULATE_DIRECTIONALLIGHT_DATA __tmp;
  
  g3ddbgAssert__FbPCce(false,str_906);
  return (type_info *)__first;
}

void void __introsort_loop<G3D_EMULATE_DIRECTIONALLIGHT_DATA *, G3D_EMULATE_DIRECTIONALLIGHT_DATA, int, G3D_EMULATE_DIRECTIONALLIGHT_DATA::greater>(G3D_EMULATE_DIRECTIONALLIGHT_DATA *__first, G3D_EMULATE_DIRECTIONALLIGHT_DATA *__last, int __depth_limit, greater __comp) {
	G3D_EMULATE_DIRECTIONALLIGHT_DATA *__cut;
	G3D_EMULATE_DIRECTIONALLIGHT_DATA *this;
	G3D_EMULATE_DIRECTIONALLIGHT_DATA &__b;
	G3D_EMULATE_DIRECTIONALLIGHT_DATA &__c;
	greater __comp;
	
  G3D_EMULATE_DIRECTIONALLIGHT_DATA __value;
  G3D_EMULATE_DIRECTIONALLIGHT_DATA __val;
  G3D_EMULATE_DIRECTIONALLIGHT_DATA *__a;
  G3D_EMULATE_DIRECTIONALLIGHT_DATA __tmp;
  
  g3ddbgAssert__FbPCce(false,str_906);
  return (type_info *)__first;
}

void void __final_insertion_sort<G3D_EMULATE_DIRECTIONALLIGHT_DATA *, G3D_EMULATE_DIRECTIONALLIGHT_DATA::greater>(G3D_EMULATE_DIRECTIONALLIGHT_DATA *__first, G3D_EMULATE_DIRECTIONALLIGHT_DATA *__last, greater __comp) {
  G3D_EMULATE_DIRECTIONALLIGHT_DATA __value;
  G3D_EMULATE_DIRECTIONALLIGHT_DATA __val;
  G3D_EMULATE_DIRECTIONALLIGHT_DATA *__a;
  G3D_EMULATE_DIRECTIONALLIGHT_DATA __tmp;
  
  g3ddbgAssert__FbPCce(false,str_906);
  return (type_info *)__first;
}

int* int * _fixed_array_verifyrange<int>(size_t v, size_t _max) {
  G3D_EMULATE_DIRECTIONALLIGHT_DATA __value;
  G3D_EMULATE_DIRECTIONALLIGHT_DATA __val;
  G3D_EMULATE_DIRECTIONALLIGHT_DATA *__a;
  G3D_EMULATE_DIRECTIONALLIGHT_DATA __tmp;
  
  g3ddbgAssert__FbPCce(false,str_906);
  return (type_info *)__first;
}

float* float * max_element<float *>(float *__first, float *__last) {
	float *__result;
	
  G3D_EMULATE_DIRECTIONALLIGHT_DATA __value;
  G3D_EMULATE_DIRECTIONALLIGHT_DATA __val;
  G3D_EMULATE_DIRECTIONALLIGHT_DATA *__a;
  G3D_EMULATE_DIRECTIONALLIGHT_DATA __tmp;
  
  g3ddbgAssert__FbPCce(false,str_906);
  return (type_info *)__first;
}

G3DCOREOBJECT* G3DCOREOBJECT * GetStaticInstance<G3DCOREOBJECT>() {
	static G3DCOREOBJECT obj;
	
  G3D_EMULATE_DIRECTIONALLIGHT_DATA __value;
  G3D_EMULATE_DIRECTIONALLIGHT_DATA __val;
  G3D_EMULATE_DIRECTIONALLIGHT_DATA *__a;
  G3D_EMULATE_DIRECTIONALLIGHT_DATA __tmp;
  
  g3ddbgAssert__FbPCce(false,str_906);
  return (type_info *)__first;
}

GRA3DSCRATCHPADLAYOUT* GRA3DSCRATCHPADLAYOUT * GetStaticInstance<GRA3DSCRATCHPADLAYOUT>() {
	static GRA3DSCRATCHPADLAYOUT obj;
	
  G3D_EMULATE_DIRECTIONALLIGHT_DATA __value;
  G3D_EMULATE_DIRECTIONALLIGHT_DATA __val;
  G3D_EMULATE_DIRECTIONALLIGHT_DATA *__a;
  G3D_EMULATE_DIRECTIONALLIGHT_DATA __tmp;
  
  g3ddbgAssert__FbPCce(false,str_906);
  return (type_info *)__first;
}

GRA3DSCRATCHPADLAYOUT_MAPSHADOW* GRA3DSCRATCHPADLAYOUT_MAPSHADOW * GetStaticInstance<GRA3DSCRATCHPADLAYOUT_MAPSHADOW>() {
	static GRA3DSCRATCHPADLAYOUT_MAPSHADOW obj;
	
  G3D_EMULATE_DIRECTIONALLIGHT_DATA __value;
  G3D_EMULATE_DIRECTIONALLIGHT_DATA __val;
  G3D_EMULATE_DIRECTIONALLIGHT_DATA *__a;
  G3D_EMULATE_DIRECTIONALLIGHT_DATA __tmp;
  
  g3ddbgAssert__FbPCce(false,str_906);
  return (type_info *)__first;
}

G3D_EMULATE_DIRECTIONALLIGHT_DATA* G3D_EMULATE_DIRECTIONALLIGHT_DATA * __unguarded_partition<G3D_EMULATE_DIRECTIONALLIGHT_DATA *, G3D_EMULATE_DIRECTIONALLIGHT_DATA, G3D_EMULATE_DIRECTIONALLIGHT_DATA::greater>(G3D_EMULATE_DIRECTIONALLIGHT_DATA *__first, G3D_EMULATE_DIRECTIONALLIGHT_DATA *__last, G3D_EMULATE_DIRECTIONALLIGHT_DATA __pivot, greater __comp) {
	G3D_EMULATE_DIRECTIONALLIGHT_DATA *__a;
	G3D_EMULATE_DIRECTIONALLIGHT_DATA __tmp;
	G3D_EMULATE_DIRECTIONALLIGHT_DATA *this;
	
  G3D_EMULATE_DIRECTIONALLIGHT_DATA __value;
  G3D_EMULATE_DIRECTIONALLIGHT_DATA __val;
  G3D_EMULATE_DIRECTIONALLIGHT_DATA *__a;
  G3D_EMULATE_DIRECTIONALLIGHT_DATA __tmp;
  
  g3ddbgAssert__FbPCce(false,str_906);
  return (type_info *)__first;
}

void void __partial_sort<G3D_EMULATE_DIRECTIONALLIGHT_DATA *, G3D_EMULATE_DIRECTIONALLIGHT_DATA, G3D_EMULATE_DIRECTIONALLIGHT_DATA::greater>(G3D_EMULATE_DIRECTIONALLIGHT_DATA *__first, G3D_EMULATE_DIRECTIONALLIGHT_DATA *__middle, G3D_EMULATE_DIRECTIONALLIGHT_DATA *__last, greater __comp) {
	G3D_EMULATE_DIRECTIONALLIGHT_DATA *__i;
	G3D_EMULATE_DIRECTIONALLIGHT_DATA __value;
	greater __comp;
	G3D_EMULATE_DIRECTIONALLIGHT_DATA *this;
	G3D_EMULATE_DIRECTIONALLIGHT_DATA *this;
	
  G3D_EMULATE_DIRECTIONALLIGHT_DATA __value;
  G3D_EMULATE_DIRECTIONALLIGHT_DATA __val;
  G3D_EMULATE_DIRECTIONALLIGHT_DATA *__a;
  G3D_EMULATE_DIRECTIONALLIGHT_DATA __tmp;
  
  g3ddbgAssert__FbPCce(false,str_906);
  return (type_info *)__first;
}

void void __insertion_sort<G3D_EMULATE_DIRECTIONALLIGHT_DATA *, G3D_EMULATE_DIRECTIONALLIGHT_DATA::greater>(G3D_EMULATE_DIRECTIONALLIGHT_DATA *__first, G3D_EMULATE_DIRECTIONALLIGHT_DATA *__last, greater __comp) {
	G3D_EMULATE_DIRECTIONALLIGHT_DATA *__i;
	G3D_EMULATE_DIRECTIONALLIGHT_DATA *__first;
	greater __comp;
	G3D_EMULATE_DIRECTIONALLIGHT_DATA __val;
	G3D_EMULATE_DIRECTIONALLIGHT_DATA *__last;
	G3D_EMULATE_DIRECTIONALLIGHT_DATA *__result;
	ptrdiff_t __n;
	G3D_EMULATE_DIRECTIONALLIGHT_DATA *this;
	
  G3D_EMULATE_DIRECTIONALLIGHT_DATA __value;
  G3D_EMULATE_DIRECTIONALLIGHT_DATA __val;
  G3D_EMULATE_DIRECTIONALLIGHT_DATA *__a;
  G3D_EMULATE_DIRECTIONALLIGHT_DATA __tmp;
  
  g3ddbgAssert__FbPCce(false,str_906);
  return (type_info *)__first;
}

void void __unguarded_insertion_sort_aux<G3D_EMULATE_DIRECTIONALLIGHT_DATA *, G3D_EMULATE_DIRECTIONALLIGHT_DATA, G3D_EMULATE_DIRECTIONALLIGHT_DATA::greater>(G3D_EMULATE_DIRECTIONALLIGHT_DATA *__first, G3D_EMULATE_DIRECTIONALLIGHT_DATA *__last, greater __comp) {
	G3D_EMULATE_DIRECTIONALLIGHT_DATA *__i;
	
  G3D_EMULATE_DIRECTIONALLIGHT_DATA __value;
  G3D_EMULATE_DIRECTIONALLIGHT_DATA __val;
  G3D_EMULATE_DIRECTIONALLIGHT_DATA *__a;
  G3D_EMULATE_DIRECTIONALLIGHT_DATA __tmp;
  
  g3ddbgAssert__FbPCce(false,str_906);
  return (type_info *)__first;
}

void void sort_heap<G3D_EMULATE_DIRECTIONALLIGHT_DATA *, G3D_EMULATE_DIRECTIONALLIGHT_DATA::greater>(G3D_EMULATE_DIRECTIONALLIGHT_DATA *__first, G3D_EMULATE_DIRECTIONALLIGHT_DATA *__last, greater __comp) {
	G3D_EMULATE_DIRECTIONALLIGHT_DATA *__first;
	G3D_EMULATE_DIRECTIONALLIGHT_DATA *__last;
	greater __comp;
	G3D_EMULATE_DIRECTIONALLIGHT_DATA *__first;
	greater __comp;
	G3D_EMULATE_DIRECTIONALLIGHT_DATA *__last;
	G3D_EMULATE_DIRECTIONALLIGHT_DATA __value;
	greater __comp;
	
  G3D_EMULATE_DIRECTIONALLIGHT_DATA __value;
  G3D_EMULATE_DIRECTIONALLIGHT_DATA __val;
  G3D_EMULATE_DIRECTIONALLIGHT_DATA *__a;
  G3D_EMULATE_DIRECTIONALLIGHT_DATA __tmp;
  
  g3ddbgAssert__FbPCce(false,str_906);
  return (type_info *)__first;
}

void void __make_heap<G3D_EMULATE_DIRECTIONALLIGHT_DATA *, G3D_EMULATE_DIRECTIONALLIGHT_DATA::greater, G3D_EMULATE_DIRECTIONALLIGHT_DATA, int>(G3D_EMULATE_DIRECTIONALLIGHT_DATA *__first, G3D_EMULATE_DIRECTIONALLIGHT_DATA *__last, greater __comp) {
	ptrdiff_t __parent;
	
  G3D_EMULATE_DIRECTIONALLIGHT_DATA __value;
  G3D_EMULATE_DIRECTIONALLIGHT_DATA __val;
  G3D_EMULATE_DIRECTIONALLIGHT_DATA *__a;
  G3D_EMULATE_DIRECTIONALLIGHT_DATA __tmp;
  
  g3ddbgAssert__FbPCce(false,str_906);
  return (type_info *)__first;
}

void void __adjust_heap<G3D_EMULATE_DIRECTIONALLIGHT_DATA *, int, G3D_EMULATE_DIRECTIONALLIGHT_DATA, G3D_EMULATE_DIRECTIONALLIGHT_DATA::greater>(G3D_EMULATE_DIRECTIONALLIGHT_DATA *__first, int __holeIndex, int __len, G3D_EMULATE_DIRECTIONALLIGHT_DATA __value, greater __comp) {
	int __topIndex;
	int __secondChild;
	G3D_EMULATE_DIRECTIONALLIGHT_DATA &__X;
	G3D_EMULATE_DIRECTIONALLIGHT_DATA *this;
	G3D_EMULATE_DIRECTIONALLIGHT_DATA &_ctor_arg;
	G3D_EMULATE_DIRECTIONALLIGHT_DATA *this;
	G3D_EMULATE_DIRECTIONALLIGHT_DATA &_ctor_arg;
	G3D_EMULATE_DIRECTIONALLIGHT_DATA *this;
	
  G3D_EMULATE_DIRECTIONALLIGHT_DATA __value;
  G3D_EMULATE_DIRECTIONALLIGHT_DATA __val;
  G3D_EMULATE_DIRECTIONALLIGHT_DATA *__a;
  G3D_EMULATE_DIRECTIONALLIGHT_DATA __tmp;
  
  g3ddbgAssert__FbPCce(false,str_906);
  return (type_info *)__first;
}

void void __unguarded_linear_insert<G3D_EMULATE_DIRECTIONALLIGHT_DATA *, G3D_EMULATE_DIRECTIONALLIGHT_DATA, G3D_EMULATE_DIRECTIONALLIGHT_DATA::greater>(G3D_EMULATE_DIRECTIONALLIGHT_DATA *__last, G3D_EMULATE_DIRECTIONALLIGHT_DATA __val, greater __comp) {
	G3D_EMULATE_DIRECTIONALLIGHT_DATA *__next;
	
  G3D_EMULATE_DIRECTIONALLIGHT_DATA __value;
  G3D_EMULATE_DIRECTIONALLIGHT_DATA __val;
  G3D_EMULATE_DIRECTIONALLIGHT_DATA *__a;
  G3D_EMULATE_DIRECTIONALLIGHT_DATA __tmp;
  
  g3ddbgAssert__FbPCce(false,str_906);
  return (type_info *)__first;
}

void void __push_heap<G3D_EMULATE_DIRECTIONALLIGHT_DATA *, int, G3D_EMULATE_DIRECTIONALLIGHT_DATA, G3D_EMULATE_DIRECTIONALLIGHT_DATA::greater>(G3D_EMULATE_DIRECTIONALLIGHT_DATA *__first, int __holeIndex, int __topIndex, G3D_EMULATE_DIRECTIONALLIGHT_DATA __value, greater __comp) {
	int __parent;
	G3D_EMULATE_DIRECTIONALLIGHT_DATA *this;
	G3D_EMULATE_DIRECTIONALLIGHT_DATA *this;
	
  G3D_EMULATE_DIRECTIONALLIGHT_DATA __value;
  G3D_EMULATE_DIRECTIONALLIGHT_DATA __val;
  G3D_EMULATE_DIRECTIONALLIGHT_DATA *__a;
  G3D_EMULATE_DIRECTIONALLIGHT_DATA __tmp;
  
  g3ddbgAssert__FbPCce(false,str_906);
  return (type_info *)__first;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  return;
}

static void _Vu0LoadMatrix_4_5_6_7(float *mat[4]) {
  _lqc2((undefined  [16])*mat);
  _lqc2((undefined  [16])mat[1]);
  _lqc2((undefined  [16])mat[2]);
  _lqc2((undefined  [16])mat[3]);
  return;
}

static void _Vu0ApplyMatrixWithoutTrans_4_5_6_7(float *vDest, float *vSrc) {
  undefined in_vf0 [16];
  undefined in_vf4 [16];
  undefined in_vf5 [16];
  undefined in_vf6 [16];
  undefined in_vf7 [16];
  undefined auVar1 [16];
  
  auVar1 = _lqc2(*(undefined (*) [16])vSrc);
  _vmulabc(in_vf4,auVar1);
  _vmaddabc(in_vf5,auVar1);
  _vmaddabc(in_vf6,auVar1);
  auVar1 = _vmaddbc(in_vf7,in_vf0);
  auVar1 = _sqc2(auVar1);
  *(undefined (*) [16])vDest = auVar1;
  return;
}

type_info& GRA3DLIGHTSTATUS type_info function() {
  G3D_EMULATE_DIRECTIONALLIGHT_DATA __value;
  G3D_EMULATE_DIRECTIONALLIGHT_DATA __val;
  G3D_EMULATE_DIRECTIONALLIGHT_DATA *__a;
  G3D_EMULATE_DIRECTIONALLIGHT_DATA __tmp;
  
  g3ddbgAssert__FbPCce(false,str_906);
  return (type_info *)__first;
}

type_info& G3DLIGHT type_info function() {
  G3D_EMULATE_DIRECTIONALLIGHT_DATA __value;
  G3D_EMULATE_DIRECTIONALLIGHT_DATA __val;
  G3D_EMULATE_DIRECTIONALLIGHT_DATA *__a;
  G3D_EMULATE_DIRECTIONALLIGHT_DATA __tmp;
  
  g3ddbgAssert__FbPCce(false,str_906);
  return (type_info *)__first;
}

static void global constructors keyed to g_Vu0Matrix() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
