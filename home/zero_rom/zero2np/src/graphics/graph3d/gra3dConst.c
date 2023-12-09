// STATUS: NOT STARTED

#include "gra3dConst.h"

unsigned int g_uiMustBeSetValue = 48879;
G3DCOLOR g_colWhite = 65535;
G3DCOLOR g_colBlack = 0;
G3DCOLOR g_colGray = 32896;
G3DCOLOR g_colRed = 255;
G3DCOLOR g_colGreen = 65280;
G3DCOLOR g_colBlue = 0;
G3DCOLOR g_colSkyblue = 65280;
G3DCOLOR g_colPurple = 255;
G3DCOLOR g_colYellow = 65535;

float g_v1000[4] = {
	/* [0] = */ 1.f,
	/* [1] = */ 0.f,
	/* [2] = */ 0.f,
	/* [3] = */ 0.f
};

float g_v0100[4] = {
	/* [0] = */ 0.f,
	/* [1] = */ 1.f,
	/* [2] = */ 0.f,
	/* [3] = */ 0.f
};

float g_v0010[4] = {
	/* [0] = */ 0.f,
	/* [1] = */ 0.f,
	/* [2] = */ 1.f,
	/* [3] = */ 0.f
};

float g_v1001[4] = {
	/* [0] = */ 1.f,
	/* [1] = */ 0.f,
	/* [2] = */ 0.f,
	/* [3] = */ 1.f
};

float g_v0101[4] = {
	/* [0] = */ 0.f,
	/* [1] = */ 1.f,
	/* [2] = */ 0.f,
	/* [3] = */ 1.f
};

float g_v0011[4] = {
	/* [0] = */ 0.f,
	/* [1] = */ 0.f,
	/* [2] = */ 1.f,
	/* [3] = */ 1.f
};

float g_v0111[4] = {
	/* [0] = */ 0.f,
	/* [1] = */ 1.f,
	/* [2] = */ 1.f,
	/* [3] = */ 1.f
};

float g_v1011[4] = {
	/* [0] = */ 1.f,
	/* [1] = */ 0.f,
	/* [2] = */ 1.f,
	/* [3] = */ 1.f
};

float g_v1101[4] = {
	/* [0] = */ 1.f,
	/* [1] = */ 1.f,
	/* [2] = */ 0.f,
	/* [3] = */ 1.f
};

float g_v0110[4] = {
	/* [0] = */ 0.f,
	/* [1] = */ 1.f,
	/* [2] = */ 1.f,
	/* [3] = */ 0.f
};

float g_v1010[4] = {
	/* [0] = */ 1.f,
	/* [1] = */ 0.f,
	/* [2] = */ 1.f,
	/* [3] = */ 0.f
};

float g_v1100[4] = {
	/* [0] = */ 1.f,
	/* [1] = */ 1.f,
	/* [2] = */ 0.f,
	/* [3] = */ 0.f
};

float g_v0001[4] = {
	/* [0] = */ 0.f,
	/* [1] = */ 0.f,
	/* [2] = */ 0.f,
	/* [3] = */ 1.f
};

float g_v1110[4] = {
	/* [0] = */ 1.f,
	/* [1] = */ 1.f,
	/* [2] = */ 1.f,
	/* [3] = */ 0.f
};

float g_v1111[4] = {
	/* [0] = */ 1.f,
	/* [1] = */ 1.f,
	/* [2] = */ 1.f,
	/* [3] = */ 1.f
};

float g_v0000[4] = {
	/* [0] = */ 0.f,
	/* [1] = */ 0.f,
	/* [2] = */ 0.f,
	/* [3] = */ 0.f
};

float g_v111_1[4] = {
	/* [0] = */ 1.f,
	/* [1] = */ 1.f,
	/* [2] = */ 1.f,
	/* [3] = */ -1.f
};

XVECTOR g_xv0000 = {
	/* .x = */ 0.f,
	/* .y = */ 0.f,
	/* .z = */ 0.f,
	/* .w = */ 0.f
};

float g_matUnit[4][4] = {
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
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 1.f
	}
};

float g_VUmatUnit[4][4] = {
	/* [0] = */ {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 1.f
	},
	/* [1] = */ {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 1.f,
		/* [3] = */ 0.f
	},
	/* [2] = */ {
		/* [0] = */ 0.f,
		/* [1] = */ 1.f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	},
	/* [3] = */ {
		/* [0] = */ 1.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	}
};

G3DMATERIAL g_NullMaterial = {
	/* .vDiffuse = */ {
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
	/* .vSpecular = */ {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	},
	/* .vEmissive = */ {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	},
	/* .fPower = */ 1.f,
	/* .aiPad = */ {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0
	}
};

G3DLIGHT g_NullLight = {
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
		/* [3] = */ 1.f
	},
	/* .vDirection = */ {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	},
	/* .Type = */ INVALID_G3DLIGHTTYPE,
	/* .fAngleInside = */ 0.f,
	/* .fAngleOutside = */ 0.f,
	/* .fMaxRange = */ 0.f,
	/* .fMinRange = */ 0.f,
	/* .fFalloff = */ 1.f,
	/* .afPad0 = */ {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f
	}
};

float g_matUnitScaled[4][4] = {
	/* [0] = */ {
		/* [0] = */ 25.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	},
	/* [1] = */ {
		/* [0] = */ 0.f,
		/* [1] = */ 25.f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	},
	/* [2] = */ {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 25.f,
		/* [3] = */ 0.f
	},
	/* [3] = */ {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 1.f
	}
};

float g_vConvertSI2PS[4] = {
	/* [0] = */ 25.f,
	/* [1] = */ -25.f,
	/* [2] = */ -25.f,
	/* [3] = */ 1.f
};

float g_vConvertPS2SI[4] = {
	/* [0] = */ 0.04f,
	/* [1] = */ -0.04f,
	/* [2] = */ -0.04f,
	/* [3] = */ 1.f
};

float g_matConvertSI2PS[4][4] = {
	/* [0] = */ {
		/* [0] = */ 25.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	},
	/* [1] = */ {
		/* [0] = */ 0.f,
		/* [1] = */ -25.f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	},
	/* [2] = */ {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ -25.f,
		/* [3] = */ 0.f
	},
	/* [3] = */ {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 1.f
	}
};

float g_matConvertPS2SI[4][4] = {
	/* [0] = */ {
		/* [0] = */ 0.04f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	},
	/* [1] = */ {
		/* [0] = */ 0.f,
		/* [1] = */ -0.04f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	},
	/* [2] = */ {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ -0.04f,
		/* [3] = */ 0.f
	},
	/* [3] = */ {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 1.f
	}
};

XMATRIX g_xmatConvertSI2PS = {
	/* . = */ {
		/* . = */ {
			/* .__11 = */ 0.f,
			/* .__12 = */ 0.f,
			/* .__13 = */ 0.f,
			/* .__14 = */ 0.f,
			/* .__21 = */ 0.f,
			/* .__22 = */ 0.f,
			/* .__23 = */ 0.f,
			/* .__24 = */ 0.f,
			/* .__31 = */ 0.f,
			/* .__32 = */ 0.f,
			/* .__33 = */ 0.f,
			/* .__34 = */ 0.f,
			/* .__41 = */ 0.f,
			/* .__42 = */ 0.f,
			/* .__43 = */ 0.f,
			/* .__44 = */ 0.f
		},
		/* .m = */ {
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
	}
};

XMATRIX g_xmatConvertPS2SI = {
	/* . = */ {
		/* . = */ {
			/* .__11 = */ 0.f,
			/* .__12 = */ 0.f,
			/* .__13 = */ 0.f,
			/* .__14 = */ 0.f,
			/* .__21 = */ 0.f,
			/* .__22 = */ 0.f,
			/* .__23 = */ 0.f,
			/* .__24 = */ 0.f,
			/* .__31 = */ 0.f,
			/* .__32 = */ 0.f,
			/* .__33 = */ 0.f,
			/* .__34 = */ 0.f,
			/* .__41 = */ 0.f,
			/* .__42 = */ 0.f,
			/* .__43 = */ 0.f,
			/* .__44 = */ 0.f
		},
		/* .m = */ {
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
	}
};

GRA3DCAMERA g_CameraDefault = {
	/* .fFov = */ 0.768370688f,
	/* .fNearZ = */ 0.099999994f,
	/* .fFarZ = */ 65535.f,
	/* .fAspectX = */ 1.f,
	/* .fAspectY = */ 0.875f,
	/* .fCenterX = */ 2048.f,
	/* .fCenterY = */ 2048.f,
	/* .fZmin = */ 0.f,
	/* .fZmax = */ 16777215.f,
	/* .type = */ PT_PERSPECTIVE,
	/* .aiPad = */ {
		/* [0] = */ 0,
		/* [1] = */ 0
	},
	/* .vTarget = */ {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 1.f
	},
	/* .vPositionOld = */ {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 1.f
	},
	/* .vTargetOld = */ {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 1.f
	},
	/* .matViewClipPolygon = */ {
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
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 1.f
		}
	},
	/* .matViewClipObject = */ {
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
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 1.f
		}
	},
	/* .matWorldScreen = */ {
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
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 1.f
		}
	},
	/* .matWorldClipPolygon = */ {
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
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 1.f
		}
	},
	/* .matWorldClipObject = */ {
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
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 1.f
		}
	},
	/* .matCoord = */ {
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
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 1.f
		}
	}
};

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3b4dc0;
	
  g3ddbgAssert__FbPCce(false,str_690);
  return;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_void__003f1160,_max,v);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_char__003f1168,_max,v);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi("unsigned int*",_max,v);
  }
  return (uint **)0x0;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
	float f11;
	float f12;
	float f22;
	float f44;
	
  if ((__priority == 0xffff) && (__initialize_p == 1)) {
    g_xv0000.w = 0.0;
    g_xv0000.x = 0.0;
    g_xv0000.y = 0.0;
    g_xv0000.z = 0.0;
    g_xmatConvertSI2PS.field0_0x0.field0.__44 = 1.0;
    g_xmatConvertSI2PS.field0_0x0.field0.__11 = 25.0;
    g_xmatConvertSI2PS.field0_0x0.field0.__33 = -25.0;
    g_xmatConvertSI2PS.field0_0x0.field0.__43 = 0.0;
    g_xmatConvertSI2PS.field0_0x0.field0.__12 = 0.0;
    g_xmatConvertSI2PS.field0_0x0.field0.__13 = 0.0;
    g_xmatConvertSI2PS.field0_0x0.field0.__14 = 0.0;
    g_xmatConvertSI2PS.field0_0x0.field0.__21 = 0.0;
    g_xmatConvertSI2PS.field0_0x0.field0.__22 = -25.0;
    g_xmatConvertSI2PS.field0_0x0.field0.__23 = 0.0;
    g_xmatConvertSI2PS.field0_0x0.field0.__24 = 0.0;
    g_xmatConvertSI2PS.field0_0x0.field0.__31 = 0.0;
    g_xmatConvertSI2PS.field0_0x0.field0.__32 = 0.0;
    g_xmatConvertSI2PS.field0_0x0.field0.__34 = 0.0;
    g_xmatConvertSI2PS.field0_0x0.field0.__41 = 0.0;
    g_xmatConvertSI2PS.field0_0x0.field0.__42 = 0.0;
    g_xmatConvertPS2SI.field0_0x0.field0.__11 = DAT_003ee3cc;
    g_xmatConvertPS2SI.field0_0x0.field0.__33 = DAT_003ee3d0;
    g_xmatConvertPS2SI.field0_0x0.field0.__12 = 0.0;
    g_xmatConvertPS2SI.field0_0x0.field0.__13 = 0.0;
    g_xmatConvertPS2SI.field0_0x0.field0.__14 = 0.0;
    g_xmatConvertPS2SI.field0_0x0.field0.__21 = 0.0;
    g_xmatConvertPS2SI.field0_0x0.field0.__22 = DAT_003ee3d0;
    g_xmatConvertPS2SI.field0_0x0.field0.__23 = 0.0;
    g_xmatConvertPS2SI.field0_0x0.field0.__24 = 0.0;
    g_xmatConvertPS2SI.field0_0x0.field0.__31 = 0.0;
    g_xmatConvertPS2SI.field0_0x0.field0.__32 = 0.0;
    g_xmatConvertPS2SI.field0_0x0.field0.__34 = 0.0;
    g_xmatConvertPS2SI.field0_0x0.field0.__41 = 0.0;
    g_xmatConvertPS2SI.field0_0x0.field0.__42 = 0.0;
    g_xmatConvertPS2SI.field0_0x0.field0.__44 = 1.0;
    g_xmatConvertPS2SI.field0_0x0.field0.__43 = 0.0;
  }
  return;
}

static void global constructors keyed to g_uiMustBeSetValue() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
