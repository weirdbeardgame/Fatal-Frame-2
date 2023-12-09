// STATUS: NOT STARTED

#include "effect_rain.h"

typedef float RectVECTOR[4][4];

typedef struct {
	float Position[4];
	float Velocity[4];
	float Length;
	float RotX;
	float RotY;
} EFFECT_RAIN_PARTICLE;

typedef struct {
	sceVu0IVECTOR Color0;
	sceVu0IVECTOR Color1;
	float Offset[4];
	int ParticleNum;
	EFFECT_RAIN_PARTICLE *pParticle;
} EFFECT_RAIN_CTRL;

typedef struct {
	float Position[4];
	float Velocity[4];
	int LifeTime;
	float StartScale;
	float LastScale;
} EFFECT_SPRAY_PARTICLE;

typedef struct {
	RectVECTOR Rect;
	int Rate;
} SPRAY_APPEAR_DATA;

typedef struct {
	float Offset[4];
	SPRAY_APPEAR_DATA *pAppearData;
	int RectNum;
	int ParticleNum;
	int R;
	int G;
	int B;
	int Alpha;
	float SpeedXMax;
	float SpeedXMin;
	float SpeedYMax;
	float SpeedYMin;
	float SpeedZMax;
	float SpeedZMin;
	int AppearNumMin;
	int AppearNumMax;
	int InitLifeTime;
	float StartScale;
	float LastScaleMax;
	float LastScaleMin;
	EFFECT_SPRAY_PARTICLE *pParticle;
} EFFECT_SPRAY_CTRL;

typedef struct {
	float Max[4];
	float Min[4];
} RAIN_HIT_BOX;

struct _EFFECT_DROP_PARTICLE {
	float Position[4];
	float Velocity[4];
	float Gravity;
	float GroundHeight;
};

typedef _EFFECT_DROP_PARTICLE EFFECT_DROP_PARTICLE;

typedef struct {
	float Offset[4];
	SINGLE_LINK_LIST *pList;
	float *pAppearPos[4];
	int AppearPosNum;
	float ScaleX;
	float ScaleY;
	int R;
	int G;
	int B;
	int Alpha;
} EFFECT_DROP_CTRL;

static EFFECT_RAIN_CTRL RainCtrl;
static EFFECT_SPRAY_CTRL SprayCtrl;
static EFFECT_SPRAY_CTRL SprayCtrl2;
static EFFECT_DROP_CTRL DropCtrl;

static SPRAY_APPEAR_DATA SprayRect[5] = {
	/* [0] = */ {
		/* .Rect = */ {
			/* [0] = */ {
				/* [0] = */ 778.470337f,
				/* [1] = */ -748.826965f,
				/* [2] = */ 2457.62842f,
				/* [3] = */ 1.f
			},
			/* [1] = */ {
				/* [0] = */ 778.470337f,
				/* [1] = */ -748.826965f,
				/* [2] = */ 779.411926f,
				/* [3] = */ 1.f
			},
			/* [2] = */ {
				/* [0] = */ 2351.46289f,
				/* [1] = */ -748.826965f,
				/* [2] = */ 779.411926f,
				/* [3] = */ 1.f
			},
			/* [3] = */ {
				/* [0] = */ 2351.46289f,
				/* [1] = */ -748.826965f,
				/* [2] = */ 2457.62842f,
				/* [3] = */ 1.f
			}
		},
		/* .Rate = */ 2000
	},
	/* [1] = */ {
		/* .Rect = */ {
			/* [0] = */ {
				/* [0] = */ 768.269348f,
				/* [1] = */ -5138.54053f,
				/* [2] = */ 800.050598f,
				/* [3] = */ 1.f
			},
			/* [1] = */ {
				/* [0] = */ -147.004745f,
				/* [1] = */ -6091.86621f,
				/* [2] = */ -115.223648f,
				/* [3] = */ 1.f
			},
			/* [2] = */ {
				/* [0] = */ 3261.60303f,
				/* [1] = */ -6091.86621f,
				/* [2] = */ -115.223274f,
				/* [3] = */ 1.f
			},
			/* [3] = */ {
				/* [0] = */ 2346.32886f,
				/* [1] = */ -5138.54053f,
				/* [2] = */ 800.050781f,
				/* [3] = */ 1.f
			}
		},
		/* .Rate = */ 2000
	},
	/* [2] = */ {
		/* .Rect = */ {
			/* [0] = */ {
				/* [0] = */ 2346.32886f,
				/* [1] = */ -5138.54053f,
				/* [2] = */ 800.050781f,
				/* [3] = */ 1.f
			},
			/* [1] = */ {
				/* [0] = */ 3261.60303f,
				/* [1] = */ -6091.86621f,
				/* [2] = */ -115.223274f,
				/* [3] = */ 1.f
			},
			/* [2] = */ {
				/* [0] = */ 3261.60303f,
				/* [1] = */ -6091.86621f,
				/* [2] = */ 3293.38452f,
				/* [3] = */ 1.f
			},
			/* [3] = */ {
				/* [0] = */ 2346.32861f,
				/* [1] = */ -5138.54053f,
				/* [2] = */ 2378.11f,
				/* [3] = */ 1.f
			}
		},
		/* .Rate = */ 2000
	},
	/* [3] = */ {
		/* .Rect = */ {
			/* [0] = */ {
				/* [0] = */ 2346.32861f,
				/* [1] = */ -5138.54053f,
				/* [2] = */ 2378.11f,
				/* [3] = */ 1.f
			},
			/* [1] = */ {
				/* [0] = */ 3261.60303f,
				/* [1] = */ -6091.86621f,
				/* [2] = */ 3293.38452f,
				/* [3] = */ 1.f
			},
			/* [2] = */ {
				/* [0] = */ -147.004944f,
				/* [1] = */ -6091.86621f,
				/* [2] = */ 3293.38403f,
				/* [3] = */ 1.f
			},
			/* [3] = */ {
				/* [0] = */ 768.269226f,
				/* [1] = */ -5138.54053f,
				/* [2] = */ 2378.11f,
				/* [3] = */ 1.f
			}
		},
		/* .Rate = */ 2000
	},
	/* [4] = */ {
		/* .Rect = */ {
			/* [0] = */ {
				/* [0] = */ 768.269226f,
				/* [1] = */ -5138.54053f,
				/* [2] = */ 2378.11f,
				/* [3] = */ 1.f
			},
			/* [1] = */ {
				/* [0] = */ -147.004944f,
				/* [1] = */ -6091.86621f,
				/* [2] = */ 3293.38403f,
				/* [3] = */ 1.f
			},
			/* [2] = */ {
				/* [0] = */ -147.004745f,
				/* [1] = */ -6091.86621f,
				/* [2] = */ -115.223648f,
				/* [3] = */ 1.f
			},
			/* [3] = */ {
				/* [0] = */ 768.269348f,
				/* [1] = */ -5138.54053f,
				/* [2] = */ 800.050598f,
				/* [3] = */ 1.f
			}
		},
		/* .Rate = */ 2000
	}
};

static SPRAY_APPEAR_DATA SprayRect2[23] = {
	/* [0] = */ {
		/* .Rect = */ {
			/* [0] = */ {
				/* [0] = */ 784.541565f,
				/* [1] = */ -1298.8446f,
				/* [2] = */ 776.904f,
				/* [3] = */ 1.f
			},
			/* [1] = */ {
				/* [0] = */ 784.541504f,
				/* [1] = */ -1298.8446f,
				/* [2] = */ 1275.98071f,
				/* [3] = */ 1.f
			},
			/* [2] = */ {
				/* [0] = */ 751.425537f,
				/* [1] = */ -1299.56506f,
				/* [2] = */ 1276.91406f,
				/* [3] = */ 1.f
			},
			/* [3] = */ {
				/* [0] = */ 751.425537f,
				/* [1] = */ -1299.56506f,
				/* [2] = */ 758.779419f,
				/* [3] = */ 1.f
			}
		},
		/* .Rate = */ 585
	},
	/* [1] = */ {
		/* .Rect = */ {
			/* [0] = */ {
				/* [0] = */ 751.425537f,
				/* [1] = */ -1299.56506f,
				/* [2] = */ 758.779419f,
				/* [3] = */ 1.f
			},
			/* [1] = */ {
				/* [0] = */ 1258.02197f,
				/* [1] = */ -1299.56506f,
				/* [2] = */ 758.77948f,
				/* [3] = */ 1.f
			},
			/* [2] = */ {
				/* [0] = */ 1257.75415f,
				/* [1] = */ -1298.8446f,
				/* [2] = */ 776.904f,
				/* [3] = */ 1.f
			},
			/* [3] = */ {
				/* [0] = */ 784.541565f,
				/* [1] = */ -1298.8446f,
				/* [2] = */ 776.904f,
				/* [3] = */ 1.f
			}
		},
		/* .Rate = */ 308
	},
	/* [2] = */ {
		/* .Rect = */ {
			/* [0] = */ {
				/* [0] = */ 1830.12256f,
				/* [1] = */ -1299.56506f,
				/* [2] = */ 758.779602f,
				/* [3] = */ 1.f
			},
			/* [1] = */ {
				/* [0] = */ 2368.43872f,
				/* [1] = */ -1299.56506f,
				/* [2] = */ 758.779602f,
				/* [3] = */ 1.f
			},
			/* [2] = */ {
				/* [0] = */ 2325.61157f,
				/* [1] = */ -1298.8446f,
				/* [2] = */ 776.904f,
				/* [3] = */ 1.f
			},
			/* [3] = */ {
				/* [0] = */ 1829.73572f,
				/* [1] = */ -1298.8446f,
				/* [2] = */ 776.904f,
				/* [3] = */ 1.f
			}
		},
		/* .Rate = */ 325
	},
	/* [3] = */ {
		/* .Rect = */ {
			/* [0] = */ {
				/* [0] = */ 2368.43872f,
				/* [1] = */ -1299.56506f,
				/* [2] = */ 758.779602f,
				/* [3] = */ 1.f
			},
			/* [1] = */ {
				/* [0] = */ 2368.43872f,
				/* [1] = */ -1299.56506f,
				/* [2] = */ 2468.58984f,
				/* [3] = */ 1.f
			},
			/* [2] = */ {
				/* [0] = */ 2325.61157f,
				/* [1] = */ -1298.8446f,
				/* [2] = */ 2441.45483f,
				/* [3] = */ 1.f
			},
			/* [3] = */ {
				/* [0] = */ 2325.61157f,
				/* [1] = */ -1298.8446f,
				/* [2] = */ 776.904f,
				/* [3] = */ 1.f
			}
		},
		/* .Rate = */ 2510
	},
	/* [4] = */ {
		/* .Rect = */ {
			/* [0] = */ {
				/* [0] = */ 1683.88452f,
				/* [1] = */ -1298.8446f,
				/* [2] = */ 2441.45483f,
				/* [3] = */ 1.f
			},
			/* [1] = */ {
				/* [0] = */ 2325.61157f,
				/* [1] = */ -1298.8446f,
				/* [2] = */ 2441.45483f,
				/* [3] = */ 1.f
			},
			/* [2] = */ {
				/* [0] = */ 2368.43872f,
				/* [1] = */ -1299.56506f,
				/* [2] = */ 2468.58984f,
				/* [3] = */ 1.f
			},
			/* [3] = */ {
				/* [0] = */ 1689.3468f,
				/* [1] = */ -1299.56506f,
				/* [2] = */ 2468.5896f,
				/* [3] = */ 1.f
			}
		},
		/* .Rate = */ 622
	},
	/* [5] = */ {
		/* .Rect = */ {
			/* [0] = */ {
				/* [0] = */ 1187.27258f,
				/* [1] = */ -1366.4635f,
				/* [2] = */ 1191.55164f,
				/* [3] = */ 1.f
			},
			/* [1] = */ {
				/* [0] = */ 1069.9176f,
				/* [1] = */ -1287.33655f,
				/* [2] = */ 1074.19666f,
				/* [3] = */ 1.f
			},
			/* [2] = */ {
				/* [0] = */ 1304.62756f,
				/* [1] = */ -1287.33655f,
				/* [2] = */ 1074.19666f,
				/* [3] = */ 1.f
			},
			/* [3] = */ {
				/* [0] = */ 1187.27258f,
				/* [1] = */ -1366.4635f,
				/* [2] = */ 1191.55164f,
				/* [3] = */ 1.f
			}
		},
		/* .Rate = */ 478
	},
	/* [6] = */ {
		/* .Rect = */ {
			/* [0] = */ {
				/* [0] = */ 1187.27258f,
				/* [1] = */ -1366.4635f,
				/* [2] = */ 1191.55164f,
				/* [3] = */ 1.f
			},
			/* [1] = */ {
				/* [0] = */ 1304.62756f,
				/* [1] = */ -1287.33655f,
				/* [2] = */ 1074.19666f,
				/* [3] = */ 1.f
			},
			/* [2] = */ {
				/* [0] = */ 1304.62756f,
				/* [1] = */ -1287.33655f,
				/* [2] = */ 1308.90662f,
				/* [3] = */ 1.f
			},
			/* [3] = */ {
				/* [0] = */ 1187.27258f,
				/* [1] = */ -1366.4635f,
				/* [2] = */ 1191.55164f,
				/* [3] = */ 1.f
			}
		},
		/* .Rate = */ 478
	},
	/* [7] = */ {
		/* .Rect = */ {
			/* [0] = */ {
				/* [0] = */ 1187.27258f,
				/* [1] = */ -1366.4635f,
				/* [2] = */ 1191.55164f,
				/* [3] = */ 1.f
			},
			/* [1] = */ {
				/* [0] = */ 1304.62756f,
				/* [1] = */ -1287.33655f,
				/* [2] = */ 1308.90662f,
				/* [3] = */ 1.f
			},
			/* [2] = */ {
				/* [0] = */ 1069.9176f,
				/* [1] = */ -1287.33655f,
				/* [2] = */ 1308.90662f,
				/* [3] = */ 1.f
			},
			/* [3] = */ {
				/* [0] = */ 1187.27258f,
				/* [1] = */ -1366.4635f,
				/* [2] = */ 1191.55164f,
				/* [3] = */ 1.f
			}
		},
		/* .Rate = */ 478
	},
	/* [8] = */ {
		/* .Rect = */ {
			/* [0] = */ {
				/* [0] = */ 1187.27258f,
				/* [1] = */ -1366.4635f,
				/* [2] = */ 1191.55164f,
				/* [3] = */ 1.f
			},
			/* [1] = */ {
				/* [0] = */ 1069.9176f,
				/* [1] = */ -1287.33655f,
				/* [2] = */ 1308.90662f,
				/* [3] = */ 1.f
			},
			/* [2] = */ {
				/* [0] = */ 1069.9176f,
				/* [1] = */ -1287.33655f,
				/* [2] = */ 1074.19666f,
				/* [3] = */ 1.f
			},
			/* [3] = */ {
				/* [0] = */ 1187.27258f,
				/* [1] = */ -1366.4635f,
				/* [2] = */ 1191.55164f,
				/* [3] = */ 1.f
			}
		},
		/* .Rate = */ 478
	},
	/* [9] = */ {
		/* .Rect = */ {
			/* [0] = */ {
				/* [0] = */ 2054.55054f,
				/* [1] = */ -1366.4635f,
				/* [2] = */ 2146.72437f,
				/* [3] = */ 1.f
			},
			/* [1] = */ {
				/* [0] = */ 1937.19568f,
				/* [1] = */ -1287.33655f,
				/* [2] = */ 2029.36951f,
				/* [3] = */ 1.f
			},
			/* [2] = */ {
				/* [0] = */ 2171.90552f,
				/* [1] = */ -1287.33655f,
				/* [2] = */ 2029.36951f,
				/* [3] = */ 1.f
			},
			/* [3] = */ {
				/* [0] = */ 2054.55054f,
				/* [1] = */ -1366.4635f,
				/* [2] = */ 2146.72437f,
				/* [3] = */ 1.f
			}
		},
		/* .Rate = */ 478
	},
	/* [10] = */ {
		/* .Rect = */ {
			/* [0] = */ {
				/* [0] = */ 2054.55054f,
				/* [1] = */ -1366.4635f,
				/* [2] = */ 2146.72437f,
				/* [3] = */ 1.f
			},
			/* [1] = */ {
				/* [0] = */ 2171.90552f,
				/* [1] = */ -1287.33655f,
				/* [2] = */ 2029.36951f,
				/* [3] = */ 1.f
			},
			/* [2] = */ {
				/* [0] = */ 2171.90552f,
				/* [1] = */ -1287.33655f,
				/* [2] = */ 2264.07935f,
				/* [3] = */ 1.f
			},
			/* [3] = */ {
				/* [0] = */ 2054.55054f,
				/* [1] = */ -1366.4635f,
				/* [2] = */ 2146.72437f,
				/* [3] = */ 1.f
			}
		},
		/* .Rate = */ 478
	},
	/* [11] = */ {
		/* .Rect = */ {
			/* [0] = */ {
				/* [0] = */ 2054.55054f,
				/* [1] = */ -1366.4635f,
				/* [2] = */ 2146.72437f,
				/* [3] = */ 1.f
			},
			/* [1] = */ {
				/* [0] = */ 2171.90552f,
				/* [1] = */ -1287.33655f,
				/* [2] = */ 2264.07935f,
				/* [3] = */ 1.f
			},
			/* [2] = */ {
				/* [0] = */ 1937.19568f,
				/* [1] = */ -1287.33655f,
				/* [2] = */ 2264.07935f,
				/* [3] = */ 1.f
			},
			/* [3] = */ {
				/* [0] = */ 2054.55054f,
				/* [1] = */ -1366.4635f,
				/* [2] = */ 2146.72437f,
				/* [3] = */ 1.f
			}
		},
		/* .Rate = */ 478
	},
	/* [12] = */ {
		/* .Rect = */ {
			/* [0] = */ {
				/* [0] = */ 2054.55054f,
				/* [1] = */ -1366.4635f,
				/* [2] = */ 2146.72437f,
				/* [3] = */ 1.f
			},
			/* [1] = */ {
				/* [0] = */ 1937.19568f,
				/* [1] = */ -1287.33655f,
				/* [2] = */ 2264.07935f,
				/* [3] = */ 1.f
			},
			/* [2] = */ {
				/* [0] = */ 1937.19568f,
				/* [1] = */ -1287.33655f,
				/* [2] = */ 2029.36951f,
				/* [3] = */ 1.f
			},
			/* [3] = */ {
				/* [0] = */ 2054.55054f,
				/* [1] = */ -1366.4635f,
				/* [2] = */ 2146.72437f,
				/* [3] = */ 1.f
			}
		},
		/* .Rate = */ 478
	},
	/* [13] = */ {
		/* .Rect = */ {
			/* [0] = */ {
				/* [0] = */ 1223.99255f,
				/* [1] = */ -1587.09143f,
				/* [2] = */ 1573.25159f,
				/* [3] = */ 1.f
			},
			/* [1] = */ {
				/* [0] = */ 1259.07629f,
				/* [1] = */ -1599.96912f,
				/* [2] = */ 1573.16931f,
				/* [3] = */ 1.f
			},
			/* [2] = */ {
				/* [0] = */ 1282.26465f,
				/* [1] = */ -1596.14026f,
				/* [2] = */ 1605.84692f,
				/* [3] = */ 1.f
			},
			/* [3] = */ {
				/* [0] = */ 1221.55212f,
				/* [1] = */ -1593.23071f,
				/* [2] = */ 1607.38306f,
				/* [3] = */ 1.f
			}
		},
		/* .Rate = */ 56
	},
	/* [14] = */ {
		/* .Rect = */ {
			/* [0] = */ {
				/* [0] = */ 1259.07629f,
				/* [1] = */ -1599.96912f,
				/* [2] = */ 1573.16931f,
				/* [3] = */ 1.f
			},
			/* [1] = */ {
				/* [0] = */ 1364.58838f,
				/* [1] = */ -1618.06287f,
				/* [2] = */ 1535.97266f,
				/* [3] = */ 1.f
			},
			/* [2] = */ {
				/* [0] = */ 1375.31946f,
				/* [1] = */ -1615.98962f,
				/* [2] = */ 1572.46191f,
				/* [3] = */ 1.f
			},
			/* [3] = */ {
				/* [0] = */ 1282.26465f,
				/* [1] = */ -1596.14026f,
				/* [2] = */ 1605.84692f,
				/* [3] = */ 1.f
			}
		},
		/* .Rate = */ 241
	},
	/* [15] = */ {
		/* .Rect = */ {
			/* [0] = */ {
				/* [0] = */ 1364.58838f,
				/* [1] = */ -1618.06287f,
				/* [2] = */ 1535.97266f,
				/* [3] = */ 1.f
			},
			/* [1] = */ {
				/* [0] = */ 1490.88721f,
				/* [1] = */ -1555.18799f,
				/* [2] = */ 1515.43311f,
				/* [3] = */ 1.f
			},
			/* [2] = */ {
				/* [0] = */ 1497.69434f,
				/* [1] = */ -1560.99512f,
				/* [2] = */ 1548.13208f,
				/* [3] = */ 1.f
			},
			/* [3] = */ {
				/* [0] = */ 1375.31946f,
				/* [1] = */ -1615.98962f,
				/* [2] = */ 1572.46191f,
				/* [3] = */ 1.f
			}
		},
		/* .Rate = */ 246
	},
	/* [16] = */ {
		/* .Rect = */ {
			/* [0] = */ {
				/* [0] = */ 1490.88721f,
				/* [1] = */ -1555.18799f,
				/* [2] = */ 1515.43311f,
				/* [3] = */ 1.f
			},
			/* [1] = */ {
				/* [0] = */ 1612.32422f,
				/* [1] = */ -1538.9093f,
				/* [2] = */ 1497.86804f,
				/* [3] = */ 1.f
			},
			/* [2] = */ {
				/* [0] = */ 1618.57385f,
				/* [1] = */ -1550.61328f,
				/* [2] = */ 1524.96594f,
				/* [3] = */ 1.f
			},
			/* [3] = */ {
				/* [0] = */ 1497.69434f,
				/* [1] = */ -1560.99512f,
				/* [2] = */ 1548.13208f,
				/* [3] = */ 1.f
			}
		},
		/* .Rate = */ 211
	},
	/* [17] = */ {
		/* .Rect = */ {
			/* [0] = */ {
				/* [0] = */ 1612.32422f,
				/* [1] = */ -1538.9093f,
				/* [2] = */ 1497.86804f,
				/* [3] = */ 1.f
			},
			/* [1] = */ {
				/* [0] = */ 1732.01074f,
				/* [1] = */ -1501.59009f,
				/* [2] = */ 1486.66345f,
				/* [3] = */ 1.f
			},
			/* [2] = */ {
				/* [0] = */ 1735.50024f,
				/* [1] = */ -1508.79272f,
				/* [2] = */ 1527.36035f,
				/* [3] = */ 1.f
			},
			/* [3] = */ {
				/* [0] = */ 1618.57385f,
				/* [1] = */ -1550.61328f,
				/* [2] = */ 1524.96594f,
				/* [3] = */ 1.f
			}
		},
		/* .Rate = */ 167
	},
	/* [18] = */ {
		/* .Rect = */ {
			/* [0] = */ {
				/* [0] = */ 1732.01074f,
				/* [1] = */ -1501.59009f,
				/* [2] = */ 1486.66345f,
				/* [3] = */ 1.f
			},
			/* [1] = */ {
				/* [0] = */ 1821.33093f,
				/* [1] = */ -1536.56201f,
				/* [2] = */ 1553.99573f,
				/* [3] = */ 1.f
			},
			/* [2] = */ {
				/* [0] = */ 1807.56604f,
				/* [1] = */ -1535.84167f,
				/* [2] = */ 1576.81812f,
				/* [3] = */ 1.f
			},
			/* [3] = */ {
				/* [0] = */ 1735.50024f,
				/* [1] = */ -1508.79272f,
				/* [2] = */ 1527.36035f,
				/* [3] = */ 1.f
			}
		},
		/* .Rate = */ 252
	},
	/* [19] = */ {
		/* .Rect = */ {
			/* [0] = */ {
				/* [0] = */ 1821.33093f,
				/* [1] = */ -1536.56201f,
				/* [2] = */ 1553.99573f,
				/* [3] = */ 1.f
			},
			/* [1] = */ {
				/* [0] = */ 1931.15515f,
				/* [1] = */ -1519.82861f,
				/* [2] = */ 1579.8457f,
				/* [3] = */ 1.f
			},
			/* [2] = */ {
				/* [0] = */ 1930.75037f,
				/* [1] = */ -1521.25684f,
				/* [2] = */ 1601.22156f,
				/* [3] = */ 1.f
			},
			/* [3] = */ {
				/* [0] = */ 1807.56604f,
				/* [1] = */ -1535.84167f,
				/* [2] = */ 1576.81812f,
				/* [3] = */ 1.f
			}
		},
		/* .Rate = */ 191
	},
	/* [20] = */ {
		/* .Rect = */ {
			/* [0] = */ {
				/* [0] = */ 1931.15515f,
				/* [1] = */ -1519.82861f,
				/* [2] = */ 1579.8457f,
				/* [3] = */ 1.f
			},
			/* [1] = */ {
				/* [0] = */ 1955.52747f,
				/* [1] = */ -1536.81055f,
				/* [2] = */ 1585.28064f,
				/* [3] = */ 1.f
			},
			/* [2] = */ {
				/* [0] = */ 1955.61401f,
				/* [1] = */ -1530.59521f,
				/* [2] = */ 1606.89734f,
				/* [3] = */ 1.f
			},
			/* [3] = */ {
				/* [0] = */ 1930.75037f,
				/* [1] = */ -1521.25684f,
				/* [2] = */ 1601.22156f,
				/* [3] = */ 1.f
			}
		},
		/* .Rate = */ 45
	},
	/* [21] = */ {
		/* .Rect = */ {
			/* [0] = */ {
				/* [0] = */ 1955.52747f,
				/* [1] = */ -1536.81055f,
				/* [2] = */ 1585.28064f,
				/* [3] = */ 1.f
			},
			/* [1] = */ {
				/* [0] = */ 2142.43433f,
				/* [1] = */ -1558.30371f,
				/* [2] = */ 1628.11462f,
				/* [3] = */ 1.f
			},
			/* [2] = */ {
				/* [0] = */ 2139.17529f,
				/* [1] = */ -1558.30371f,
				/* [2] = */ 1642.24805f,
				/* [3] = */ 1.f
			},
			/* [3] = */ {
				/* [0] = */ 1955.61401f,
				/* [1] = */ -1530.59521f,
				/* [2] = */ 1606.89734f,
				/* [3] = */ 1.f
			}
		},
		/* .Rate = */ 366
	},
	/* [22] = */ {
		/* .Rect = */ {
			/* [0] = */ {
				/* [0] = */ 2142.43433f,
				/* [1] = */ -1558.30371f,
				/* [2] = */ 1628.11462f,
				/* [3] = */ 1.f
			},
			/* [1] = */ {
				/* [0] = */ 2202.5625f,
				/* [1] = */ -1582.38586f,
				/* [2] = */ 1613.13257f,
				/* [3] = */ 1.f
			},
			/* [2] = */ {
				/* [0] = */ 2201.22827f,
				/* [1] = */ -1582.38586f,
				/* [2] = */ 1625.80981f,
				/* [3] = */ 1.f
			},
			/* [3] = */ {
				/* [0] = */ 2139.17529f,
				/* [1] = */ -1558.30371f,
				/* [2] = */ 1642.24805f,
				/* [3] = */ 1.f
			}
		},
		/* .Rate = */ 61
	}
};

static RAIN_HIT_BOX OutsideBox = {
	/* .Max = */ {
		/* [0] = */ 4508.17139f,
		/* [1] = */ -728.302063f,
		/* [2] = */ 4528.54346f,
		/* [3] = */ 0.f
	},
	/* .Min = */ {
		/* [0] = */ -1400.43628f,
		/* [1] = */ -4958.49756f,
		/* [2] = */ -1380.06384f,
		/* [3] = */ 0.f
	}
};

static RAIN_HIT_BOX InsideBox = {
	/* .Max = */ {
		/* [0] = */ 2427.59692f,
		/* [1] = */ -726.860107f,
		/* [2] = */ 2510.08179f,
		/* [3] = */ 0.f
	},
	/* .Min = */ {
		/* [0] = */ 685.784424f,
		/* [1] = */ -4957.05566f,
		/* [2] = */ 677.923523f,
		/* [3] = */ 0.f
	}
};

static float DropOfWaterPos[35][4] = {
	/* [0] = */ {
		/* [0] = */ 758.353394f,
		/* [1] = */ -1963.22937f,
		/* [2] = */ 730.225891f,
		/* [3] = */ 1.f
	},
	/* [1] = */ {
		/* [0] = */ 2353.93579f,
		/* [1] = */ -2451.03149f,
		/* [2] = */ 1410.36316f,
		/* [3] = */ 1.f
	},
	/* [2] = */ {
		/* [0] = */ 1296.66052f,
		/* [1] = */ -1282.85059f,
		/* [2] = */ 1084.05151f,
		/* [3] = */ 1.f
	},
	/* [3] = */ {
		/* [0] = */ 1833.10938f,
		/* [1] = */ -1424.46643f,
		/* [2] = */ 1443.23389f,
		/* [3] = */ 1.f
	},
	/* [4] = */ {
		/* [0] = */ 2352.07666f,
		/* [1] = */ -2452.25635f,
		/* [2] = */ 2216.84985f,
		/* [3] = */ 1.f
	},
	/* [5] = */ {
		/* [0] = */ 2359.91284f,
		/* [1] = */ -1939.95239f,
		/* [2] = */ 1198.15356f,
		/* [3] = */ 1.f
	},
	/* [6] = */ {
		/* [0] = */ 1858.10278f,
		/* [1] = */ -3585.59521f,
		/* [2] = */ 2357.52856f,
		/* [3] = */ 1.f
	},
	/* [7] = */ {
		/* [0] = */ 1638.75745f,
		/* [1] = */ -3955.47778f,
		/* [2] = */ 2387.81299f,
		/* [3] = */ 1.f
	},
	/* [8] = */ {
		/* [0] = */ 1417.91528f,
		/* [1] = */ -4112.82666f,
		/* [2] = */ 2332.05078f,
		/* [3] = */ 1.f
	},
	/* [9] = */ {
		/* [0] = */ 1076.5575f,
		/* [1] = */ -3653.65283f,
		/* [2] = */ 2342.29199f,
		/* [3] = */ 1.f
	},
	/* [10] = */ {
		/* [0] = */ 1904.54456f,
		/* [1] = */ -3880.92212f,
		/* [2] = */ 2503.19092f,
		/* [3] = */ 1.f
	},
	/* [11] = */ {
		/* [0] = */ 1906.21106f,
		/* [1] = */ -3976.05347f,
		/* [2] = */ 2344.54248f,
		/* [3] = */ 1.f
	},
	/* [12] = */ {
		/* [0] = */ 1728.50757f,
		/* [1] = */ -4290.61914f,
		/* [2] = */ 2348.02173f,
		/* [3] = */ 1.f
	},
	/* [13] = */ {
		/* [0] = */ 1867.7373f,
		/* [1] = */ -3787.74756f,
		/* [2] = */ 2407.68286f,
		/* [3] = */ 1.f
	},
	/* [14] = */ {
		/* [0] = */ 2100.01123f,
		/* [1] = */ -3553.50781f,
		/* [2] = */ 2265.53784f,
		/* [3] = */ 1.f
	},
	/* [15] = */ {
		/* [0] = */ 2131.66626f,
		/* [1] = */ -3518.44849f,
		/* [2] = */ 2344.26123f,
		/* [3] = */ 1.f
	},
	/* [16] = */ {
		/* [0] = */ 2172.24097f,
		/* [1] = */ -3499.90845f,
		/* [2] = */ 2344.49072f,
		/* [3] = */ 1.f
	},
	/* [17] = */ {
		/* [0] = */ 2117.6936f,
		/* [1] = */ -3712.6814f,
		/* [2] = */ 2401.89648f,
		/* [3] = */ 1.f
	},
	/* [18] = */ {
		/* [0] = */ 2178.73291f,
		/* [1] = */ -3482.22681f,
		/* [2] = */ 2459.42236f,
		/* [3] = */ 1.f
	},
	/* [19] = */ {
		/* [0] = */ 2173.66724f,
		/* [1] = */ -3222.70312f,
		/* [2] = */ 2277.79297f,
		/* [3] = */ 1.f
	},
	/* [20] = */ {
		/* [0] = */ 2081.23071f,
		/* [1] = */ -3103.05615f,
		/* [2] = */ 2435.96729f,
		/* [3] = */ 1.f
	},
	/* [21] = */ {
		/* [0] = */ 1342.78589f,
		/* [1] = */ -4095.08472f,
		/* [2] = */ 829.266235f,
		/* [3] = */ 1.f
	},
	/* [22] = */ {
		/* [0] = */ 923.22406f,
		/* [1] = */ -4095.08472f,
		/* [2] = */ 850.194824f,
		/* [3] = */ 1.f
	},
	/* [23] = */ {
		/* [0] = */ 1952.97119f,
		/* [1] = */ -4890.27686f,
		/* [2] = */ 2398.0415f,
		/* [3] = */ 1.f
	},
	/* [24] = */ {
		/* [0] = */ 2171.15869f,
		/* [1] = */ -4890.27686f,
		/* [2] = */ 2395.87231f,
		/* [3] = */ 1.f
	},
	/* [25] = */ {
		/* [0] = */ 2224.94336f,
		/* [1] = */ -4913.48877f,
		/* [2] = */ 2351.99902f,
		/* [3] = */ 1.f
	},
	/* [26] = */ {
		/* [0] = */ 2271.68091f,
		/* [1] = */ -4888.98047f,
		/* [2] = */ 2197.23291f,
		/* [3] = */ 1.f
	},
	/* [27] = */ {
		/* [0] = */ 2271.68091f,
		/* [1] = */ -4888.98047f,
		/* [2] = */ 2021.89636f,
		/* [3] = */ 1.f
	},
	/* [28] = */ {
		/* [0] = */ 2271.68091f,
		/* [1] = */ -4888.98047f,
		/* [2] = */ 1831.57385f,
		/* [3] = */ 1.f
	},
	/* [29] = */ {
		/* [0] = */ 1729.92676f,
		/* [1] = */ -4888.98047f,
		/* [2] = */ 2396.80664f,
		/* [3] = */ 1.f
	},
	/* [30] = */ {
		/* [0] = */ 1311.74097f,
		/* [1] = */ -2612.62402f,
		/* [2] = */ 2118.7146f,
		/* [3] = */ 1.f
	},
	/* [31] = */ {
		/* [0] = */ 1480.10913f,
		/* [1] = */ -2349.6604f,
		/* [2] = */ 2069.93481f,
		/* [3] = */ 1.f
	},
	/* [32] = */ {
		/* [0] = */ 2039.59326f,
		/* [1] = */ -4085.98779f,
		/* [2] = */ 2442.98f,
		/* [3] = */ 1.f
	},
	/* [33] = */ {
		/* [0] = */ 2346.55908f,
		/* [1] = */ -4301.06f,
		/* [2] = */ 2264.46753f,
		/* [3] = */ 1.f
	},
	/* [34] = */ {
		/* [0] = */ 2460.77734f,
		/* [1] = */ -4824.61768f,
		/* [2] = */ 2195.89258f,
		/* [3] = */ 1.f
	}
};

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3a7210;
	
  g3ddbgAssert__FbPCce(false,str_777);
  return;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_void__003efef0,_max,v);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_char__003efef8,_max,v);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi("unsigned int*",_max,v);
  }
  return (uint **)0x0;
}

void EffectRainInit() {
	EFFECT_RAIN_CTRL *pRainCtrl;
	
  RainCtrl.Color0[1] = 0xf;
  RainCtrl.Color1[3] = 0x23;
  RainCtrl.Color0[2] = 0x10;
  RainCtrl.Color0[3] = 0x28;
  RainCtrl.Color1[2] = 0x14;
  RainCtrl.pParticle = (EFFECT_RAIN_PARTICLE *)0x0;
  RainCtrl.ParticleNum = 0;
  RainCtrl.Offset[0] = 0.0;
  RainCtrl.Offset[1] = 0.0;
  RainCtrl.Offset[2] = 0.0;
  RainCtrl.Offset[3] = 0.0;
  RainCtrl.Color0[0] = 0xf;
  RainCtrl.Color1[0] = 0x14;
  RainCtrl.Color1[1] = 0x14;
  return;
}

void EffectRainReq(float *Offset) {
  EffectRainReqNum__FiPf(0x132,Offset);
  return;
}

static void EffectRainReqNum(int RainNum, float *Offset) {
	EFFECT_RAIN_CTRL *pRainCtrl;
	int i;
	
  float fVar1;
  int iVar2;
  EFFECT_RAIN_PARTICLE *pParticle;
  int iVar3;
  float fVar4;
  
  if (((RainCtrl.pParticle == (EFFECT_RAIN_PARTICLE *)0x0) && (0 < RainNum)) &&
     (RainCtrl.pParticle = (EFFECT_RAIN_PARTICLE *)EFFECT_MALLOC__Fi(RainNum * 0x30),
     fVar1 = DAT_003edeec, RainCtrl.pParticle != (EFFECT_RAIN_PARTICLE *)0x0)) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
    RainCtrl.Offset[0] = *Offset;
    RainCtrl.Offset[1] = Offset[1];
    RainCtrl.Offset[2] = Offset[2];
                    /* end of inlined section */
    RainCtrl.Offset[3] = 0.0;
    RainCtrl.ParticleNum = RainNum;
    if (0 < RainNum) {
      iVar3 = 0;
      fVar4 = DAT_003edef0;
      do {
                    /* inlined from effect.h */
        RainNum = RainNum + -1;
        iVar2 = rand();
                    /* end of inlined section */
                    /* inlined from effect.h */
                    /* end of inlined section */
        pParticle = (EFFECT_RAIN_PARTICLE *)((int)(RainCtrl.pParticle)->Position + iVar3);
        iVar3 = iVar3 + 0x30;
                    /* inlined from effect.h */
                    /* end of inlined section */
        EffectRainParticleInit__FP20EFFECT_RAIN_PARTICLEPff
                  (pParticle,Offset,((float)iVar2 / fVar1) * fVar4 + -8000.0);
      } while (RainNum != 0);
    }
  }
  return;
}

void EffectRainCut() {
	EFFECT_RAIN_CTRL *pRainCtrl;
	
  if (RainCtrl.pParticle != (EFFECT_RAIN_PARTICLE *)0x0) {
    EFFECT_FREE__FPv(RainCtrl.pParticle);
    EffectRainInit__Fv();
  }
  return;
}

static void EffectRainParticleInit(EFFECT_RAIN_PARTICLE *pParticle, float *Offset, float PosY) {
	float PosX;
	float PosZ;
	float VeloX;
	float VeloY;
	float VeloZ;
	
  float fVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
                    /* inlined from effect.h */
  iVar3 = rand();
  fVar2 = DAT_003edf00;
  fVar1 = DAT_003edef4;
  fVar8 = 20.0;
  fVar7 = 1000.0;
  fVar6 = ((float)iVar3 / DAT_003edef4) * DAT_003edef8 + DAT_003edefc;
  iVar3 = rand();
  fVar5 = DAT_003edf08;
  fVar4 = DAT_003edf04;
                    /* end of inlined section */
  pParticle->Position[0] = fVar6;
                    /* inlined from effect.h */
                    /* end of inlined section */
  pParticle->Position[3] = 1.0;
  pParticle->Position[1] = PosY;
                    /* inlined from effect.h */
                    /* end of inlined section */
  pParticle->Position[2] = ((float)iVar3 / fVar1) * fVar4 + fVar5;
  sceVu0AddVector(pParticle,pParticle,Offset);
                    /* inlined from effect.h */
  iVar3 = rand();
  fVar4 = (float)iVar3;
  iVar3 = rand();
  fVar5 = ((fVar4 / fVar1) * fVar8 + fVar2) - fVar7;
  fVar6 = ((float)iVar3 / fVar1) * 466.0 + DAT_003edf0c;
  iVar3 = rand();
  fVar4 = DAT_003edf10;
                    /* end of inlined section */
  pParticle->Velocity[0] = fVar5;
  pParticle->Length = fVar4;
                    /* inlined from effect.h */
                    /* end of inlined section */
  pParticle->Velocity[3] = 0.0;
                    /* inlined from effect.h */
                    /* end of inlined section */
  pParticle->Velocity[1] = fVar6 - fVar7;
                    /* inlined from effect.h */
                    /* end of inlined section */
  pParticle->Velocity[2] = (((float)iVar3 / fVar1) * fVar8 + fVar2) - fVar7;
  Vector2Rot__FPCfPfT1(pParticle->Velocity,&pParticle->RotX,&pParticle->RotY);
  return;
}

static void EffectRainParticleDraw(EFFECT_RAIN_PARTICLE *pParticle, int *Color0, int *Color1) {
	float matWorldLocal[4][4];
	float matLocalScreen[4][4];
	float vLinePos[2][4];
	int ivLinePos[2][4];
	GRA3DCAMERA *pCam;
	int ClipFlg;
	int i;
	int *Pos1;
	Q_WORDDATA *pBuf;
	
  bool bVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  GRA3DCAMERA *pGVar5;
  Q_WORDDATA *pQVar6;
  int (*paiVar7) [4];
  int iVar8;
  float matWorldLocal [4] [4];
  float matLocalScreen [4] [4];
  float vLinePos [2] [4];
  int ivLinePos [2] [4];
  
  bVar1 = false;
  pGVar5 = gra3dGetCamera__Fv();
  vLinePos[0][2] = pParticle->Length * 0.5;
  vLinePos[0][0] = 0.0;
  vLinePos[1][3] = 1.0;
  vLinePos[0][1] = 0.0;
  vLinePos[1][2] = -pParticle->Length * 0.5;
  vLinePos[0][3] = 1.0;
  vLinePos[1][0] = 0.0;
  vLinePos[1][1] = 0.0;
  sceVu0UnitMatrix(matWorldLocal);
  sceVu0RotMatrixX(pParticle->RotX,matWorldLocal,matWorldLocal);
  sceVu0RotMatrixY(pParticle->RotY,matWorldLocal,matWorldLocal);
  sceVu0TransMatrix(matWorldLocal,matWorldLocal,pParticle);
  sceVu0MulMatrix(matLocalScreen,pGVar5->matWorldScreen,matWorldLocal);
  paiVar7 = ivLinePos;
  sceVu0RotTransPersN(paiVar7,matLocalScreen,vLinePos,2,0);
  iVar8 = 1;
  do {
    piVar2 = *paiVar7;
    iVar8 = iVar8 + -1;
    piVar3 = *paiVar7;
    piVar4 = *paiVar7;
    paiVar7 = paiVar7[1];
    if (64000 < *piVar2 - 0x300U) {
      bVar1 = true;
    }
    if (64000 < piVar3[1] - 0x300U) {
      bVar1 = true;
    }
    if (0xffff0 < piVar4[2] - 0xfU) {
      bVar1 = true;
    }
  } while (-1 < iVar8);
  if (!bVar1) {
    pQVar6 = StartDmaDirectTrans__Fv();
    pQVar6->ul64[1] = 0x4141;
    pQVar6->ul64[0] = 0x4024c00000008001;
    pQVar6[1].iv[0] = *Color0;
    *(int *)((int)pQVar6 + 0x14) = Color0[1];
    *(int *)((int)pQVar6 + 0x18) = Color0[2];
    *(int *)((int)pQVar6 + 0x1c) = Color0[3];
    pQVar6[2].iv[0] = ivLinePos[0][0];
    *(int *)((int)pQVar6 + 0x24) = ivLinePos[0][1];
    *(undefined4 *)((int)pQVar6 + 0x2c) = 0;
    *(int *)((int)pQVar6 + 0x28) = ivLinePos[0][2];
    pQVar6[3].iv[0] = *Color1;
    *(int *)((int)pQVar6 + 0x34) = Color1[1];
    *(int *)((int)pQVar6 + 0x38) = Color1[2];
    *(int *)((int)pQVar6 + 0x3c) = Color1[3];
    pQVar6[4].iv[0] = ivLinePos[1][0];
    *(int *)((int)pQVar6 + 0x44) = ivLinePos[1][1];
    *(undefined4 *)((int)pQVar6 + 0x4c) = 0;
    *(int *)((int)pQVar6 + 0x48) = ivLinePos[1][2];
    EndDmaDirectTrans__FP10Q_WORDDATA(pQVar6 + 5);
  }
  return;
}

static void EffectRainParticleUpdate(EFFECT_RAIN_PARTICLE *pParticle, float *Offset) {
  int iVar1;
  
  sceVu0AddVector(pParticle,pParticle,pParticle->Velocity);
  iVar1 = EffectRainParticleHitCheck__FPC20EFFECT_RAIN_PARTICLEPf(pParticle,Offset);
  if (iVar1 != 0) {
    EffectRainParticleInit__FP20EFFECT_RAIN_PARTICLEPff(pParticle,Offset,-8000.0);
  }
  return;
}

void EffectRainDraw() {
	EFFECT_RAIN_CTRL *pRainCtrl;
	int i;
	DRAW_ENV_NOTEX EnvNoTex;
	
  EFFECT_RAIN_PARTICLE *pParticle;
  int iVar1;
  int iVar2;
  _DRAW_ENV_NOTEX EnvNoTex;
  
  if (RainCtrl.pParticle != (EFFECT_RAIN_PARTICLE *)0x0) {
    iVar2 = 0;
    EnvNoTex.alpha = DAT_003a7268;
    EnvNoTex.test = DAT_003a7270;
    EnvNoTex.zbuf = DAT_003a7278;
    SetDrawEnvNoTex__FiPC15_DRAW_ENV_NOTEX(0,&EnvNoTex);
    if (0 < RainCtrl.ParticleNum) {
      iVar1 = 0;
      do {
        iVar2 = iVar2 + 1;
        EffectRainParticleDraw__FPC20EFFECT_RAIN_PARTICLEPCiT1
                  ((EFFECT_RAIN_PARTICLE *)((int)(RainCtrl.pParticle)->Position + iVar1),
                   RainCtrl.Color0,RainCtrl.Color1);
        pParticle = (EFFECT_RAIN_PARTICLE *)((int)(RainCtrl.pParticle)->Position + iVar1);
        iVar1 = iVar1 + 0x30;
        EffectRainParticleUpdate__FP20EFFECT_RAIN_PARTICLEPf(pParticle,RainCtrl.Offset);
      } while (iVar2 < RainCtrl.ParticleNum);
    }
  }
  return;
}

static int EffectRainParticleHitCheck(EFFECT_RAIN_PARTICLE *pParticle, float *Offset) {
	int Hit;
	RAIN_HIT_BOX *pBox;
	int Inside;
	RAIN_HIT_BOX *pBox;
	int Inside;
	
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = pParticle->Position[1];
  if (fVar3 < 0.0) {
    fVar4 = *Offset;
    fVar2 = pParticle->Position[0];
    bVar1 = false;
    if ((((OutsideBox.Min[0] + fVar4 <= fVar2) && (fVar2 <= OutsideBox.Max[0] + fVar4)) &&
        (OutsideBox.Min[1] + Offset[1] <= fVar3)) && (fVar3 <= OutsideBox.Max[1] + Offset[1])) {
      if ((OutsideBox.Min[2] + Offset[2] <= pParticle->Position[2]) &&
         (pParticle->Position[2] <= OutsideBox.Max[2] + Offset[2])) {
        bVar1 = true;
      }
    }
    if (!bVar1) {
      return 0;
    }
    bVar1 = false;
    if (((InsideBox.Min[0] + fVar4 <= fVar2) && (fVar2 <= InsideBox.Max[0] + fVar4)) &&
       ((InsideBox.Min[1] + Offset[1] <= fVar3 && (fVar3 <= InsideBox.Max[1] + Offset[1])))) {
      if ((InsideBox.Min[2] + Offset[2] <= pParticle->Position[2]) &&
         (pParticle->Position[2] <= InsideBox.Max[2] + Offset[2])) {
        bVar1 = true;
      }
    }
    if (bVar1) {
      return 0;
    }
  }
  return 1;
}

void EffectSprayInit() {
	EFFECT_SPRAY_CTRL *pSprayCtrl;
	EFFECT_SPRAY_CTRL *pSprayCtrl2;
	
  SprayCtrl.SpeedYMax = 5.0;
  SprayCtrl.SpeedYMin = -1.0;
  SprayCtrl.StartScale = 1.0;
  SprayCtrl.LastScaleMax = 10.0;
  SprayCtrl.LastScaleMin = 2.5;
  SprayCtrl.G = 0x47;
  SprayCtrl.B = 0x48;
  SprayCtrl.Alpha = 0x14;
  SprayCtrl.AppearNumMin = 2;
  SprayCtrl.AppearNumMax = 5;
  SprayCtrl.InitLifeTime = 0x26;
  SprayCtrl2.LastScaleMin = DAT_003edf14;
  SprayCtrl2.B = 0x3d;
  SprayCtrl.SpeedXMax = 0.0;
  SprayCtrl.SpeedXMin = 0.0;
  SprayCtrl.SpeedZMax = 0.0;
  SprayCtrl.SpeedZMin = 0.0;
  SprayCtrl2.Alpha = 0x16;
  SprayCtrl2.AppearNumMin = 1;
  SprayCtrl2.AppearNumMax = 0xc;
  SprayCtrl2.InitLifeTime = 0xf;
  SprayCtrl2.SpeedXMax = 0.0;
  SprayCtrl.R = 0x48;
  SprayCtrl2.SpeedXMin = 0.0;
  SprayCtrl2.R = 0x3d;
  SprayCtrl2.G = 0x3d;
  SprayCtrl2.SpeedYMax = 0.0;
  SprayCtrl2.SpeedYMin = 0.0;
  SprayCtrl2.SpeedZMax = 0.0;
  SprayCtrl2.SpeedZMin = 0.0;
  SprayCtrl2.StartScale = DAT_003edf14;
  SprayCtrl2.LastScaleMax = DAT_003edf14;
  SprayCtrl.pAppearData = (SPRAY_APPEAR_DATA *)0x0;
  SprayCtrl.RectNum = 0;
  SprayCtrl.Offset[3] = 0.0;
  SprayCtrl.ParticleNum = 0;
  SprayCtrl2.Offset[3] = 0.0;
  SprayCtrl.pParticle = (EFFECT_SPRAY_PARTICLE *)0x0;
  SprayCtrl.Offset[0] = 0.0;
  SprayCtrl.Offset[1] = 0.0;
  SprayCtrl.Offset[2] = 0.0;
  SprayCtrl2.pAppearData = (SPRAY_APPEAR_DATA *)0x0;
  SprayCtrl2.RectNum = 0;
  SprayCtrl2.ParticleNum = 0;
  SprayCtrl2.pParticle = (EFFECT_SPRAY_PARTICLE *)0x0;
  SprayCtrl2.Offset[0] = 0.0;
  SprayCtrl2.Offset[1] = 0.0;
  SprayCtrl2.Offset[2] = 0.0;
  return;
}

void EffectSprayReq(float *Offset) {
  EffectSprayReqNumRect__FP17EFFECT_SPRAY_CTRLPfiPC17SPRAY_APPEAR_DATAi
            (&SprayCtrl,Offset,100,SprayRect,5);
  EffectSprayReqNumRect__FP17EFFECT_SPRAY_CTRLPfiPC17SPRAY_APPEAR_DATAi
            (&SprayCtrl2,Offset,0x34,SprayRect2,0x17);
  return;
}

static void EffectSprayReqNumRect(EFFECT_SPRAY_CTRL *pSprayCtrl, float *Offset, int SprayNum, SPRAY_APPEAR_DATA *pRect, int RectNum) {
	int i;
	
  undefined8 uVar1;
  EFFECT_SPRAY_PARTICLE *pEVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  
  if ((((pSprayCtrl->pParticle == (EFFECT_SPRAY_PARTICLE *)0x0) &&
       (pRect != (SPRAY_APPEAR_DATA *)0x0)) && (0 < SprayNum)) && (0 < RectNum)) {
    pEVar2 = (EFFECT_SPRAY_PARTICLE *)EFFECT_MALLOC__Fi(SprayNum * 0x30);
    pSprayCtrl->pParticle = pEVar2;
    if (pEVar2 != (EFFECT_SPRAY_PARTICLE *)0x0) {
      uVar1 = *(undefined8 *)Offset;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
      fVar3 = Offset[2];
      fVar4 = Offset[3];
      pSprayCtrl->Offset[0] = (float)uVar1;
      pSprayCtrl->Offset[1] = (float)((ulong)uVar1 >> 0x20);
      pSprayCtrl->Offset[2] = fVar3;
      pSprayCtrl->Offset[3] = fVar4;
                    /* end of inlined section */
      pSprayCtrl->pAppearData = pRect;
      pSprayCtrl->RectNum = RectNum;
      pSprayCtrl->Offset[3] = 0.0;
      pSprayCtrl->ParticleNum = SprayNum;
      if (0 < SprayNum) {
        iVar5 = 0;
        pEVar2 = pSprayCtrl->pParticle;
        while( true ) {
          SprayNum = SprayNum + -1;
          pEVar2 = (EFFECT_SPRAY_PARTICLE *)((int)pEVar2->Position + iVar5);
          iVar5 = iVar5 + 0x30;
          EffectSprayParticleClear__FP21EFFECT_SPRAY_PARTICLE(pEVar2);
          if (SprayNum == 0) break;
          pEVar2 = pSprayCtrl->pParticle;
        }
      }
      EffectSprayParticleReqOneFrame__FP17EFFECT_SPRAY_CTRLPf(pSprayCtrl,Offset);
    }
  }
  return;
}

void EffectSprayAllCut() {
  EffectSprayCut__FP17EFFECT_SPRAY_CTRL(&SprayCtrl);
  EffectSprayCut__FP17EFFECT_SPRAY_CTRL(&SprayCtrl2);
  return;
}

static void EffectSprayCut(EFFECT_SPRAY_CTRL *pSprayCtrl) {
  if (pSprayCtrl->pParticle != (EFFECT_SPRAY_PARTICLE *)0x0) {
    EFFECT_FREE__FPv(pSprayCtrl->pParticle);
    pSprayCtrl->ParticleNum = 0;
    pSprayCtrl->pParticle = (EFFECT_SPRAY_PARTICLE *)0x0;
    pSprayCtrl->pAppearData = (SPRAY_APPEAR_DATA *)0x0;
    pSprayCtrl->RectNum = 0;
  }
  return;
}

static EFFECT_SPRAY_PARTICLE* EffectSprayParticleBufferGet(EFFECT_SPRAY_CTRL *pSprayCtrl) {
	EFFECT_SPRAY_PARTICLE *pRet;
	int i;
	
  EFFECT_SPRAY_PARTICLE *pEVar1;
  int iVar2;
  EFFECT_SPRAY_PARTICLE *pEVar3;
  
  pEVar3 = (EFFECT_SPRAY_PARTICLE *)0x0;
  if ((0 < pSprayCtrl->ParticleNum) &&
     (pEVar1 = pSprayCtrl->pParticle, pEVar3 = pEVar1, pEVar1->LifeTime != -1)) {
    for (iVar2 = 1;
        (pEVar3 = (EFFECT_SPRAY_PARTICLE *)0x0, iVar2 < pSprayCtrl->ParticleNum &&
        (pEVar3 = pEVar1 + iVar2, pEVar3->LifeTime != -1)); iVar2 = iVar2 + 1) {
    }
  }
  return pEVar3;
}

static void EffectSprayParticleReqOneFrame(EFFECT_SPRAY_CTRL *pSprayCtrl, float *Offset) {
	float Velocity[4];
	EFFECT_SPRAY_PARTICLE *pParticle;
	int AppearNum;
	int i;
	int j;
	int RectNo;
	int Count;
	int RandVal;
	float StartScale;
	float LastScale;
	
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  int iVar5;
  EFFECT_SPRAY_PARTICLE *pParticle;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float StartScale;
  float fVar18;
  float Velocity [4];
  
  iVar1 = pSprayCtrl->AppearNumMin;
  iVar2 = pSprayCtrl->AppearNumMax;
  iVar9 = 0;
                    /* inlined from effect.h */
  iVar5 = rand();
  fVar4 = DAT_003edf18;
  iVar3 = pSprayCtrl->AppearNumMin;
                    /* end of inlined section */
                    /* inlined from effect.h */
  fVar11 = (float)iVar5 / DAT_003edf18;
                    /* end of inlined section */
  while ((iVar9 < (int)((float)(iVar2 - iVar1) * fVar11) + iVar3 &&
         (pParticle = EffectSprayParticleBufferGet__FP17EFFECT_SPRAY_CTRL(pSprayCtrl),
         pParticle != (EFFECT_SPRAY_PARTICLE *)0x0))) {
                    /* inlined from effect.h */
    iVar8 = pSprayCtrl->RectNum + -1;
    iVar5 = rand();
                    /* end of inlined section */
                    /* inlined from effect.h */
    iVar10 = (int)(((float)iVar5 / fVar4) * DAT_003edf1c);
                    /* end of inlined section */
    iVar5 = iVar8;
    if (0 < pSprayCtrl->RectNum) {
      iVar6 = pSprayCtrl->pAppearData->Rate;
      iVar7 = 1;
      if (iVar6 < iVar10) {
        while ((iVar5 = iVar8, iVar7 < pSprayCtrl->RectNum &&
               (iVar6 = iVar6 + pSprayCtrl->pAppearData[iVar7].Rate, iVar5 = iVar7, iVar6 < iVar10))
              ) {
          iVar7 = iVar7 + 1;
        }
      }
      else {
        iVar5 = 0;
      }
    }
    iVar9 = iVar9 + 1;
    StartScale = pSprayCtrl->StartScale;
                    /* inlined from effect.h */
    fVar14 = pSprayCtrl->LastScaleMax - pSprayCtrl->LastScaleMin;
    iVar8 = rand();
                    /* end of inlined section */
    fVar17 = pSprayCtrl->SpeedXMin;
    fVar16 = pSprayCtrl->SpeedYMin;
    fVar18 = pSprayCtrl->SpeedZMin;
                    /* inlined from effect.h */
                    /* end of inlined section */
    fVar13 = pSprayCtrl->SpeedXMax;
    fVar15 = pSprayCtrl->SpeedZMax;
    fVar12 = pSprayCtrl->SpeedYMax - fVar16;
                    /* inlined from effect.h */
    fVar14 = fVar14 * ((float)iVar8 / fVar4) + pSprayCtrl->LastScaleMin;
    iVar8 = rand();
    Velocity[0] = (fVar13 - fVar17) * ((float)iVar8 / fVar4) + fVar17;
    iVar8 = rand();
    Velocity[1] = fVar12 * ((float)iVar8 / fVar4) + fVar16;
    iVar8 = rand();
                    /* end of inlined section */
                    /* inlined from effect.h */
                    /* end of inlined section */
    Velocity[3] = 0.0;
                    /* inlined from effect.h */
    Velocity[2] = (fVar15 - fVar18) * ((float)iVar8 / fVar4) + fVar18;
                    /* end of inlined section */
    EffectSprayParticleInit__FP21EFFECT_SPRAY_PARTICLEPA3_CfPfT2iff
              (pParticle,(float (*) [4])(pSprayCtrl->pAppearData + iVar5),pSprayCtrl->Offset,
               Velocity,pSprayCtrl->InitLifeTime,StartScale,fVar14);
  }
  return;
}

static void EffectSprayParticleUpdate(EFFECT_SPRAY_PARTICLE *pParticle) {
  sceVu0AddVector(pParticle,pParticle,pParticle->Velocity);
  if (pParticle->LifeTime == 0) {
    pParticle->LifeTime = -1;
  }
  else {
    pParticle->LifeTime = pParticle->LifeTime + -1;
  }
  return;
}

void EffectSprayAllDraw() {
  EffectSprayDraw__FP17EFFECT_SPRAY_CTRL(&SprayCtrl);
  EffectSprayDraw__FP17EFFECT_SPRAY_CTRL(&SprayCtrl2);
  return;
}

static void EffectSprayDraw(EFFECT_SPRAY_CTRL *pSprayCtrl) {
	GRA3DCAMERA *pCam;
	float RotX;
	float RotY;
	int i;
	float Progress;
	float Scale;
	
  GRA3DCAMERA *pGVar1;
  float (*v1) [4];
  float *Position;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float ScaleX;
  float RotX;
  float RotY;
  
  pGVar1 = gra3dGetCamera__Fv();
  v1 = gra3dcamGetPosition__Fv();
  if (pSprayCtrl->pParticle != (EFFECT_SPRAY_PARTICLE *)0x0) {
    iVar4 = 0;
    Get2PosRot__FPCfT0PfT2((float *)v1,pGVar1->vTarget,&RotX,&RotY);
    iVar2 = pSprayCtrl->ParticleNum;
    if (0 < iVar2) {
      iVar3 = 0;
      do {
        Position = (float *)((int)pSprayCtrl->pParticle->Position + iVar3);
        if (Position[8] != -NAN) {
          fVar5 = (float)(pSprayCtrl->InitLifeTime - (int)Position[8]) /
                  (float)pSprayCtrl->InitLifeTime;
          ScaleX = (Position[10] - Position[9]) * fVar5 + Position[9];
          EffectSprayParticleDraw__FPCfffiiiiff
                    (Position,RotX,RotY,pSprayCtrl->R,pSprayCtrl->G,pSprayCtrl->B,
                     (int)((float)pSprayCtrl->Alpha * (1.0 - fVar5)),ScaleX,ScaleX);
          EffectSprayParticleUpdate__FP21EFFECT_SPRAY_PARTICLE
                    ((EFFECT_SPRAY_PARTICLE *)((int)pSprayCtrl->pParticle->Position + iVar3));
          iVar2 = pSprayCtrl->ParticleNum;
        }
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + 0x30;
      } while (iVar4 < iVar2);
    }
    EffectSprayParticleReqOneFrame__FP17EFFECT_SPRAY_CTRLPf(pSprayCtrl,pSprayCtrl->Offset);
  }
  return;
}

static void EffectSprayParticleDraw(float *Position, float RotX, float RotY, int R, int G, int B, int Alpha, float ScaleX, float ScaleY) {
	float matWorldLocal[4][4];
	DRAW_ENV DrawEnv;
	
  float matWorldLocal [4] [4];
  DRAW_ENV DrawEnv;
  
  DrawEnv.tex1 = DAT_003a7280;
  DrawEnv.alpha = DAT_003a7288;
  DrawEnv.zbuf = DAT_003a7290;
  DrawEnv.test = DAT_003a7298;
  DrawEnv.clamp = DAT_003a72a0;
  DrawEnv.prim = DAT_003a72a8;
  sceVu0UnitMatrix(matWorldLocal);
  sceVu0RotMatrixX(RotX,matWorldLocal,matWorldLocal);
  sceVu0RotMatrixY(RotY,matWorldLocal,matWorldLocal);
  sceVu0TransMatrix(matWorldLocal,matWorldLocal,Position);
  Set3DPosTexure__FPA3_fP8DRAW_ENViffUcUcUcUc
            (matWorldLocal,&DrawEnv,0x40,ScaleX * 100.0,ScaleY * 100.0,(uchar)R,(uchar)G,(uchar)B,
             (uchar)Alpha);
  return;
}

static void EffectSprayParticleClear(EFFECT_SPRAY_PARTICLE *pParticle) {
  pParticle->LifeTime = -1;
  return;
}

static void EffectSprayParticleInit(EFFECT_SPRAY_PARTICLE *pParticle, float *pRectVec[4], float *Offset, float *Velocity, int LifeTime, float StartScale, float LastScale) {
	float SideVector[2][4];
	float InsideVector[4];
	
  undefined8 uVar1;
  int iVar2;
  float fVar3;
  float (*pafVar4) [4];
  float fVar5;
  float SideVector [2] [4];
  float InsideVector [4];
  
  if (pParticle != (EFFECT_SPRAY_PARTICLE *)0x0) {
                    /* inlined from effect.h */
    iVar2 = rand();
                    /* end of inlined section */
                    /* inlined from effect.h */
    fVar3 = DAT_003edf20;
                    /* end of inlined section */
    sceVu0SubVector(SideVector,pRectVec[1],pRectVec);
                    /* inlined from effect.h */
    fVar5 = (float)iVar2 / fVar3;
                    /* end of inlined section */
    sceVu0ScaleVector(fVar5,SideVector,SideVector);
    sceVu0AddVector(SideVector,SideVector,pRectVec);
    pafVar4 = SideVector[1];
    sceVu0SubVector(pafVar4,pRectVec[2],pRectVec[3]);
    sceVu0ScaleVector(fVar5,pafVar4,pafVar4);
    sceVu0AddVector(pafVar4,pafVar4,pRectVec[3]);
                    /* inlined from effect.h */
    iVar2 = rand();
                    /* end of inlined section */
    sceVu0SubVector(InsideVector,pafVar4,SideVector);
                    /* inlined from effect.h */
                    /* end of inlined section */
    sceVu0ScaleVector((float)iVar2 / fVar3,InsideVector,InsideVector);
    sceVu0AddVector(pParticle,InsideVector,SideVector);
    sceVu0AddVector(pParticle,pParticle,Offset);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
    uVar1 = *(undefined8 *)Velocity;
    fVar3 = Velocity[2];
    fVar5 = Velocity[3];
    pParticle->Velocity[0] = (float)uVar1;
    pParticle->Velocity[1] = (float)((ulong)uVar1 >> 0x20);
    pParticle->Velocity[2] = fVar3;
    pParticle->Velocity[3] = fVar5;
                    /* end of inlined section */
    pParticle->LastScale = LastScale;
    pParticle->LifeTime = LifeTime;
    pParticle->StartScale = StartScale;
  }
  return;
}

void EffectDropOfWaterInit() {
	EFFECT_DROP_CTRL *pDropCtrl;
	
  memset(&DropCtrl,0,0x40);
  DropCtrl.pList = (SINGLE_LINK_LIST *)0x0;
  DropCtrl.Offset[3] = 0.0;
  DropCtrl.pAppearPos = (float (*) [4])0x0;
  DropCtrl.Offset[0] = 0.0;
  DropCtrl.Offset[1] = 0.0;
  DropCtrl.Offset[2] = 0.0;
  return;
}

void EffectDropOfWaterDraw() {
	EFFECT_DROP_CTRL *pDropCtrl;
	EFFECT_DROP_PARTICLE *pParticle;
	float RotX;
	float RotY;
	GRA3DCAMERA *pCam;
	SLL_CELL *pCell;
	SINGLE_LINK_LIST *pSLL;
	
  GRA3DCAMERA *pGVar1;
  float (*v1) [4];
  _EFFECT_DROP_PARTICLE *pParticle;
  int iVar2;
  uint uVar3;
  _SLL_CELL *pCell;
  _SLL_CELL *p_Var4;
  float RotX;
  float RotY;
  
  pGVar1 = gra3dGetCamera__Fv();
  v1 = gra3dcamGetPosition__Fv();
  if (DropCtrl.pList != (SINGLE_LINK_LIST *)0x0) {
    Get2PosRot__FPCfT0PfT2((float *)v1,pGVar1->vTarget,&RotX,&RotY);
                    /* inlined from ../../common/SingleLinkList.h */
    uVar3 = 0;
    if (DropCtrl.pList != (SINGLE_LINK_LIST *)0x0) {
      uVar3 = (DropCtrl.pList)->RegCount;
    }
    pCell = (_SLL_CELL *)0x0;
    if (uVar3 != 0) {
      pCell = (DropCtrl.pList)->pBeginCell;
    }
                    /* end of inlined section */
    if (pCell != (_SLL_CELL *)0x0) {
                    /* inlined from ../../common/SingleLinkList.h */
      p_Var4 = (_SLL_CELL *)0x0;
      if (pCell != (_SLL_CELL *)0x0) {
        p_Var4 = pCell->pNext;
      }
      while( true ) {
                    /* end of inlined section */
        pParticle = (_EFFECT_DROP_PARTICLE *)SingleLinkListCellBodyPtr__FPC9_SLL_CELL(pCell);
        EffectSprayParticleDraw__FPCfffiiiiff
                  ((float *)pParticle,RotX,RotY,DropCtrl.R,DropCtrl.G,DropCtrl.B,DropCtrl.Alpha,
                   DropCtrl.ScaleX,DropCtrl.ScaleY);
        iVar2 = EffectDropParticleUpdate__FP21_EFFECT_DROP_PARTICLE(pParticle);
        if (iVar2 == 0) {
          SingleLinkListRemove__FP16SINGLE_LINK_LISTP9_SLL_CELL(DropCtrl.pList,pCell);
        }
        if (p_Var4 == (_SLL_CELL *)0x0) break;
        pCell = p_Var4;
        p_Var4 = p_Var4->pNext;
      }
    }
    EffectDropParticleReqOneFrame__FP16EFFECT_DROP_CTRL(&DropCtrl);
  }
  return;
}

static int EffectDropParticleUpdate(EFFECT_DROP_PARTICLE *pParticle) {
	int RetVal;
	
  bool bVar1;
  
  bVar1 = pParticle->Position[1] < pParticle->GroundHeight;
  if (bVar1) {
    sceVu0AddVector(pParticle,pParticle,pParticle->Velocity);
    pParticle->Velocity[1] = pParticle->Velocity[1] + pParticle->Gravity;
  }
  return (uint)bVar1;
}

void EffectDropOfWaterReq(float *Offset) {
  EffectDropOfWaterReqAppearPos__FP16EFFECT_DROP_CTRLPA3_CfPfiffiiii
            (&DropCtrl,DropOfWaterPos,Offset,0x23,DAT_003edf24,DAT_003edf28,0x4b,0x4b,0x4b,0x3b);
  EffectSndFileReadyReq__Fi(0xcc7);
  return;
}

static void EffectDropOfWaterReqAppearPos(EFFECT_DROP_CTRL *pCtrl, float *pAppearPos[4], float *Offset, int AppearPosNum, float ScaleX, float ScaleY, int R, int G, int B, int Alpha) {
	SINGLE_LINK_LIST *pNewList;
	
  undefined8 uVar1;
  SINGLE_LINK_LIST *pSVar2;
  float fVar3;
  float fVar4;
  
  if ((((pCtrl->pList == (SINGLE_LINK_LIST *)0x0) && (pCtrl != (EFFECT_DROP_CTRL *)0x0)) &&
      (pAppearPos != (float (*) [4])0x0)) &&
     ((pCtrl->pAppearPos == (float (*) [4])0x0 &&
      (pSVar2 = SingleLinkListAlloc__FUi(0x30), pSVar2 != (SINGLE_LINK_LIST *)0x0)))) {
    uVar1 = *(undefined8 *)Offset;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
    fVar3 = Offset[2];
    fVar4 = Offset[3];
    pCtrl->Offset[0] = (float)uVar1;
    pCtrl->Offset[1] = (float)((ulong)uVar1 >> 0x20);
    pCtrl->Offset[2] = fVar3;
    pCtrl->Offset[3] = fVar4;
                    /* end of inlined section */
    pCtrl->Alpha = Alpha;
    pCtrl->pList = pSVar2;
    pCtrl->pAppearPos = pAppearPos;
    pCtrl->AppearPosNum = AppearPosNum;
    pCtrl->ScaleX = ScaleX;
    pCtrl->ScaleY = ScaleY;
    pCtrl->R = R;
    pCtrl->G = G;
    pCtrl->B = B;
    pCtrl->Offset[3] = 0.0;
  }
  return;
}

void EffectDropOfWaterCut() {
	EFFECT_DROP_CTRL *pDropCtrl;
	
  if (DropCtrl.pList != (SINGLE_LINK_LIST *)0x0) {
    SingleLinkListFree__FP16SINGLE_LINK_LIST(DropCtrl.pList);
    DropCtrl.pAppearPos = (float (*) [4])0x0;
    DropCtrl.pList = (SINGLE_LINK_LIST *)0x0;
  }
  EffectSndFileRelease__Fi(0xcc7);
  return;
}

static void EffectDropParticleReqOneFrame(EFFECT_DROP_CTRL *pDropCtrl) {
	float Position[4];
	float Frequency;
	float RandVal;
	int ReqNum;
	int i;
	EFFECT_DROP_PARTICLE Particle;
	float Velocity[4];
	int PosNo;
	
  float fVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  int iVar5;
  float Position [4];
  _EFFECT_DROP_PARTICLE Particle;
  float Velocity [4];
  
                    /* inlined from effect.h */
  iVar2 = rand();
  fVar1 = DAT_003edf2c;
                    /* end of inlined section */
                    /* inlined from effect.h */
                    /* end of inlined section */
  uVar3 = (uint)(((float)iVar2 / DAT_003edf2c) * 100.0 <= 53.0);
  if (uVar3 != 0) {
    fVar4 = 0.0;
    do {
      iVar5 = pDropCtrl->AppearPosNum;
                    /* inlined from effect.h */
      iVar2 = rand();
                    /* end of inlined section */
                    /* inlined from effect.h */
      iVar2 = (int)((float)iVar5 * ((float)iVar2 / fVar1));
                    /* end of inlined section */
      if (pDropCtrl->AppearPosNum <= iVar2) {
        iVar2 = pDropCtrl->AppearPosNum + -1;
      }
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
      Position[2] = DropOfWaterPos[iVar2][2];
      Position[3] = DropOfWaterPos[iVar2][3];
      Position[0] = (float)*(undefined8 *)DropOfWaterPos[iVar2];
      Position[1] = (float)((ulong)*(undefined8 *)DropOfWaterPos[iVar2] >> 0x20);
                    /* end of inlined section */
      uVar3 = uVar3 - 1;
      sceVu0AddVector(Position,Position,pDropCtrl);
                    /* inlined from effect.h */
      iVar5 = rand();
      Velocity[0] = ((float)iVar5 / fVar1) * fVar4 + fVar4;
      iVar5 = rand();
      Velocity[1] = ((float)iVar5 / fVar1) * fVar4 + fVar4;
      iVar5 = rand();
                    /* end of inlined section */
                    /* inlined from effect.h */
      Velocity[2] = ((float)iVar5 / fVar1) * fVar4 + fVar4;
      Velocity[3] = fVar4;
                    /* end of inlined section */
      EffectDropParticleInit__FP21_EFFECT_DROP_PARTICLEPCfT1ff
                (&Particle,Position,Velocity,DAT_003edf30,-800.0);
      SingleLinkListAddEnd__FP16SINGLE_LINK_LISTPCv(pDropCtrl->pList,&Particle);
      if (iVar2 == 0x22) {
        EffectSndPlay__FiiiiPA3_f(0xcc7,0,1,0,(float (*) [4])Position);
      }
    } while (uVar3 != 0);
  }
  return;
}

static void EffectDropParticleInit(EFFECT_DROP_PARTICLE *pParticle, float *Position, float *Velocity, float Gravity, float GroundHeight) {
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  
  if (pParticle != (_EFFECT_DROP_PARTICLE *)0x0) {
    uVar1 = *(undefined8 *)Position;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
    fVar2 = Position[2];
    fVar3 = Position[3];
    pParticle->Position[0] = (float)uVar1;
    pParticle->Position[1] = (float)((ulong)uVar1 >> 0x20);
    pParticle->Position[2] = fVar2;
    pParticle->Position[3] = fVar3;
    uVar1 = *(undefined8 *)Velocity;
    fVar2 = Velocity[2];
    fVar3 = Velocity[3];
    pParticle->Velocity[0] = (float)uVar1;
    pParticle->Velocity[1] = (float)((ulong)uVar1 >> 0x20);
    pParticle->Velocity[2] = fVar2;
    pParticle->Velocity[3] = fVar3;
                    /* end of inlined section */
    pParticle->GroundHeight = GroundHeight;
    pParticle->Gravity = Gravity;
  }
  return;
}
