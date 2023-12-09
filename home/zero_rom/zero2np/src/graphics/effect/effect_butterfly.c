// STATUS: NOT STARTED

#include "effect_butterfly.h"

typedef enum {
	BUTTERFLY_TARGET_PARAMETER_TYPE00 = 0,
	BUTTERFLY_TARGET_PARAMETER_TYPE01 = 1,
	BUTTERFLY_TARGET_PARAMETER_TYPE02 = 2,
	BUTTERFLY_TARGET_PARAMETER_TYPE03 = 3,
	BUTTERFLY_TARGET_PARAMETER_TYPE04 = 4,
	BUTTERFLY_TARGET_PARAMETER_NUM = 5
} BUTTERFLY_TARGET_PARAMETER_TYPE;

struct _BUTTERFLY_DISP {
	float Position[4];
	float OldPosition[4];
	float Target[4];
	float Rot[4];
	float Velocity[4];
	ANI_CTRL AniCtrl;
	int LifeTime;
	int MoveInterval;
	float AlphaRate;
	int MoveType;
	int InTime;
	int OutTime;
	int Count;
	int Type;
	int Id;
};

typedef _BUTTERFLY_DISP BUTTERFLY_DISP;

typedef struct {
	SINGLE_LINK_LIST ButterflyList;
} BUTTERFLY_DISP_CTRL;

struct _BUTTERFLY_PARTICLE {
	float Position[4];
	float Velocity[4];
	float Acceleration[4];
	int LifeTime;
	float AlphaRate;
};

typedef _BUTTERFLY_PARTICLE BUTTERFLY_PARTICLE;

typedef struct {
	SINGLE_LINK_LIST ParticleList;
} BUTTERFLY_PARTICLE_CTRL;

struct fixed_array_base<BUTTERFLY_TARGET_PARAMETER *,5,BUTTERFLY_TARGET_PARAMETER **> {
protected:
	BUTTERFLY_TARGET_PARAMETER **m_aData;
	
public:
	fixed_array_base<BUTTERFLY_TARGET_PARAMETER *,5,BUTTERFLY_TARGET_PARAMETER **>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	BUTTERFLY_TARGET_PARAMETER*& operator[]();
	BUTTERFLY_TARGET_PARAMETER*& operator[]();
	BUTTERFLY_TARGET_PARAMETER** data();
	BUTTERFLY_TARGET_PARAMETER** begin();
	BUTTERFLY_TARGET_PARAMETER** end();
	void fill();
	size_t size();
	bool empty();
};

struct reference_fixed_array<BUTTERFLY_TARGET_PARAMETER *,5> : fixed_array_base<BUTTERFLY_TARGET_PARAMETER *,5,BUTTERFLY_TARGET_PARAMETER **> {
};

BUTTERFLY_TARGET_PARAMETER ButterflyTargetType00 = {
	/* .Speed = */ 500,
	/* .TurnMax = */ 45,
	/* .BureLeftRight = */ 120,
	/* .BureUpDown = */ 120,
	/* .InTime = */ 30,
	/* .OutTime = */ 30,
	/* .LockOnIntervalNear = */ 0,
	/* .LockOnIntervalMiddle = */ 4,
	/* .LockOnIntervalFar = */ 8,
	/* .NearDistance = */ 750,
	/* .FarDistance = */ 3000
};

BUTTERFLY_TARGET_PARAMETER ButterflyTargetType01 = {
	/* .Speed = */ 500,
	/* .TurnMax = */ 45,
	/* .BureLeftRight = */ 120,
	/* .BureUpDown = */ 120,
	/* .InTime = */ 30,
	/* .OutTime = */ 30,
	/* .LockOnIntervalNear = */ 0,
	/* .LockOnIntervalMiddle = */ 4,
	/* .LockOnIntervalFar = */ 8,
	/* .NearDistance = */ 750,
	/* .FarDistance = */ 3000
};

BUTTERFLY_TARGET_PARAMETER ButterflyTargetType02 = {
	/* .Speed = */ 1000,
	/* .TurnMax = */ 45,
	/* .BureLeftRight = */ 120,
	/* .BureUpDown = */ 120,
	/* .InTime = */ 30,
	/* .OutTime = */ 30,
	/* .LockOnIntervalNear = */ 0,
	/* .LockOnIntervalMiddle = */ 4,
	/* .LockOnIntervalFar = */ 8,
	/* .NearDistance = */ 750,
	/* .FarDistance = */ 3000
};

BUTTERFLY_TARGET_PARAMETER ButterflyTargetType03 = {
	/* .Speed = */ 500,
	/* .TurnMax = */ 45,
	/* .BureLeftRight = */ 120,
	/* .BureUpDown = */ 120,
	/* .InTime = */ 30,
	/* .OutTime = */ 30,
	/* .LockOnIntervalNear = */ 0,
	/* .LockOnIntervalMiddle = */ 4,
	/* .LockOnIntervalFar = */ 8,
	/* .NearDistance = */ 750,
	/* .FarDistance = */ 3000
};

BUTTERFLY_TARGET_PARAMETER ButterflyTargetType04 = {
	/* .Speed = */ 500,
	/* .TurnMax = */ 45,
	/* .BureLeftRight = */ 120,
	/* .BureUpDown = */ 120,
	/* .InTime = */ 30,
	/* .OutTime = */ 30,
	/* .LockOnIntervalNear = */ 0,
	/* .LockOnIntervalMiddle = */ 4,
	/* .LockOnIntervalFar = */ 8,
	/* .NearDistance = */ 750,
	/* .FarDistance = */ 3000
};

GRA3DLIGHTDATA ButterflyLight = {
	/* .vAmbient = */ {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	},
	/* .aLight = */ {
		/* base class 0 = */ {
			/* .m_aData = */ {
				/* [0] = */ {
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
				/* [1] = */ {
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
				/* [2] = */ {
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
				/* [3] = */ {
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
				/* [4] = */ {
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
				/* [5] = */ {
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
				/* [6] = */ {
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
				/* [7] = */ {
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
				/* [8] = */ {
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
				/* [9] = */ {
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
				/* [10] = */ {
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
				/* [11] = */ {
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
				/* [12] = */ {
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
				/* [13] = */ {
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
				/* [14] = */ {
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
				/* [15] = */ {
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
				/* [16] = */ {
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
				/* [17] = */ {
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
				/* [18] = */ {
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
				/* [19] = */ {
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
				/* [20] = */ {
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
				/* [21] = */ {
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
				/* [22] = */ {
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
				/* [23] = */ {
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
				/* [24] = */ {
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
				/* [25] = */ {
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
				/* [26] = */ {
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
				/* [27] = */ {
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
				/* [28] = */ {
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
				/* [29] = */ {
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
				/* [30] = */ {
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
				/* [31] = */ {
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
				/* [32] = */ {
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
				/* [33] = */ {
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
				/* [34] = */ {
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
				/* [35] = */ {
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
				/* [36] = */ {
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
				/* [37] = */ {
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
				/* [38] = */ {
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
				}
			}
		}
	},
	/* .aStatus = */ {
		/* base class 0 = */ {
			/* .m_aData = */ {
				/* [0] = */ {
					/* .bEnable = */ 0,
					/* .bEnableToChar = */ 0,
					/* .bEnableToShadow = */ 0,
					/* .bEmulateToDirectionalLight = */ 0
				},
				/* [1] = */ {
					/* .bEnable = */ 0,
					/* .bEnableToChar = */ 0,
					/* .bEnableToShadow = */ 0,
					/* .bEmulateToDirectionalLight = */ 0
				},
				/* [2] = */ {
					/* .bEnable = */ 0,
					/* .bEnableToChar = */ 0,
					/* .bEnableToShadow = */ 0,
					/* .bEmulateToDirectionalLight = */ 0
				},
				/* [3] = */ {
					/* .bEnable = */ 0,
					/* .bEnableToChar = */ 0,
					/* .bEnableToShadow = */ 0,
					/* .bEmulateToDirectionalLight = */ 0
				},
				/* [4] = */ {
					/* .bEnable = */ 0,
					/* .bEnableToChar = */ 0,
					/* .bEnableToShadow = */ 0,
					/* .bEmulateToDirectionalLight = */ 0
				},
				/* [5] = */ {
					/* .bEnable = */ 0,
					/* .bEnableToChar = */ 0,
					/* .bEnableToShadow = */ 0,
					/* .bEmulateToDirectionalLight = */ 0
				},
				/* [6] = */ {
					/* .bEnable = */ 0,
					/* .bEnableToChar = */ 0,
					/* .bEnableToShadow = */ 0,
					/* .bEmulateToDirectionalLight = */ 0
				},
				/* [7] = */ {
					/* .bEnable = */ 0,
					/* .bEnableToChar = */ 0,
					/* .bEnableToShadow = */ 0,
					/* .bEmulateToDirectionalLight = */ 0
				},
				/* [8] = */ {
					/* .bEnable = */ 0,
					/* .bEnableToChar = */ 0,
					/* .bEnableToShadow = */ 0,
					/* .bEmulateToDirectionalLight = */ 0
				},
				/* [9] = */ {
					/* .bEnable = */ 0,
					/* .bEnableToChar = */ 0,
					/* .bEnableToShadow = */ 0,
					/* .bEmulateToDirectionalLight = */ 0
				},
				/* [10] = */ {
					/* .bEnable = */ 0,
					/* .bEnableToChar = */ 0,
					/* .bEnableToShadow = */ 0,
					/* .bEmulateToDirectionalLight = */ 0
				},
				/* [11] = */ {
					/* .bEnable = */ 0,
					/* .bEnableToChar = */ 0,
					/* .bEnableToShadow = */ 0,
					/* .bEmulateToDirectionalLight = */ 0
				},
				/* [12] = */ {
					/* .bEnable = */ 0,
					/* .bEnableToChar = */ 0,
					/* .bEnableToShadow = */ 0,
					/* .bEmulateToDirectionalLight = */ 0
				},
				/* [13] = */ {
					/* .bEnable = */ 0,
					/* .bEnableToChar = */ 0,
					/* .bEnableToShadow = */ 0,
					/* .bEmulateToDirectionalLight = */ 0
				},
				/* [14] = */ {
					/* .bEnable = */ 0,
					/* .bEnableToChar = */ 0,
					/* .bEnableToShadow = */ 0,
					/* .bEmulateToDirectionalLight = */ 0
				},
				/* [15] = */ {
					/* .bEnable = */ 0,
					/* .bEnableToChar = */ 0,
					/* .bEnableToShadow = */ 0,
					/* .bEmulateToDirectionalLight = */ 0
				},
				/* [16] = */ {
					/* .bEnable = */ 0,
					/* .bEnableToChar = */ 0,
					/* .bEnableToShadow = */ 0,
					/* .bEmulateToDirectionalLight = */ 0
				},
				/* [17] = */ {
					/* .bEnable = */ 0,
					/* .bEnableToChar = */ 0,
					/* .bEnableToShadow = */ 0,
					/* .bEmulateToDirectionalLight = */ 0
				},
				/* [18] = */ {
					/* .bEnable = */ 0,
					/* .bEnableToChar = */ 0,
					/* .bEnableToShadow = */ 0,
					/* .bEmulateToDirectionalLight = */ 0
				},
				/* [19] = */ {
					/* .bEnable = */ 0,
					/* .bEnableToChar = */ 0,
					/* .bEnableToShadow = */ 0,
					/* .bEmulateToDirectionalLight = */ 0
				},
				/* [20] = */ {
					/* .bEnable = */ 0,
					/* .bEnableToChar = */ 0,
					/* .bEnableToShadow = */ 0,
					/* .bEmulateToDirectionalLight = */ 0
				},
				/* [21] = */ {
					/* .bEnable = */ 0,
					/* .bEnableToChar = */ 0,
					/* .bEnableToShadow = */ 0,
					/* .bEmulateToDirectionalLight = */ 0
				},
				/* [22] = */ {
					/* .bEnable = */ 0,
					/* .bEnableToChar = */ 0,
					/* .bEnableToShadow = */ 0,
					/* .bEmulateToDirectionalLight = */ 0
				},
				/* [23] = */ {
					/* .bEnable = */ 0,
					/* .bEnableToChar = */ 0,
					/* .bEnableToShadow = */ 0,
					/* .bEmulateToDirectionalLight = */ 0
				},
				/* [24] = */ {
					/* .bEnable = */ 0,
					/* .bEnableToChar = */ 0,
					/* .bEnableToShadow = */ 0,
					/* .bEmulateToDirectionalLight = */ 0
				},
				/* [25] = */ {
					/* .bEnable = */ 0,
					/* .bEnableToChar = */ 0,
					/* .bEnableToShadow = */ 0,
					/* .bEmulateToDirectionalLight = */ 0
				},
				/* [26] = */ {
					/* .bEnable = */ 0,
					/* .bEnableToChar = */ 0,
					/* .bEnableToShadow = */ 0,
					/* .bEmulateToDirectionalLight = */ 0
				},
				/* [27] = */ {
					/* .bEnable = */ 0,
					/* .bEnableToChar = */ 0,
					/* .bEnableToShadow = */ 0,
					/* .bEmulateToDirectionalLight = */ 0
				},
				/* [28] = */ {
					/* .bEnable = */ 0,
					/* .bEnableToChar = */ 0,
					/* .bEnableToShadow = */ 0,
					/* .bEmulateToDirectionalLight = */ 0
				},
				/* [29] = */ {
					/* .bEnable = */ 0,
					/* .bEnableToChar = */ 0,
					/* .bEnableToShadow = */ 0,
					/* .bEmulateToDirectionalLight = */ 0
				},
				/* [30] = */ {
					/* .bEnable = */ 0,
					/* .bEnableToChar = */ 0,
					/* .bEnableToShadow = */ 0,
					/* .bEmulateToDirectionalLight = */ 0
				},
				/* [31] = */ {
					/* .bEnable = */ 0,
					/* .bEnableToChar = */ 0,
					/* .bEnableToShadow = */ 0,
					/* .bEmulateToDirectionalLight = */ 0
				},
				/* [32] = */ {
					/* .bEnable = */ 0,
					/* .bEnableToChar = */ 0,
					/* .bEnableToShadow = */ 0,
					/* .bEmulateToDirectionalLight = */ 0
				},
				/* [33] = */ {
					/* .bEnable = */ 0,
					/* .bEnableToChar = */ 0,
					/* .bEnableToShadow = */ 0,
					/* .bEmulateToDirectionalLight = */ 0
				},
				/* [34] = */ {
					/* .bEnable = */ 0,
					/* .bEnableToChar = */ 0,
					/* .bEnableToShadow = */ 0,
					/* .bEmulateToDirectionalLight = */ 0
				},
				/* [35] = */ {
					/* .bEnable = */ 0,
					/* .bEnableToChar = */ 0,
					/* .bEnableToShadow = */ 0,
					/* .bEmulateToDirectionalLight = */ 0
				},
				/* [36] = */ {
					/* .bEnable = */ 0,
					/* .bEnableToChar = */ 0,
					/* .bEnableToShadow = */ 0,
					/* .bEmulateToDirectionalLight = */ 0
				},
				/* [37] = */ {
					/* .bEnable = */ 0,
					/* .bEnableToChar = */ 0,
					/* .bEnableToShadow = */ 0,
					/* .bEmulateToDirectionalLight = */ 0
				},
				/* [38] = */ {
					/* .bEnable = */ 0,
					/* .bEnableToChar = */ 0,
					/* .bEnableToShadow = */ 0,
					/* .bEmulateToDirectionalLight = */ 0
				}
			}
		}
	},
	/* .aiNumInitial = */ {
		/* base class 0 = */ {
			/* .m_aData = */ {
				/* [0] = */ 0,
				/* [1] = */ 0,
				/* [2] = */ 0
			}
		}
	},
	/* .aiPad = */ {
		/* [0] = */ 0
	}
};

reference_fixed_array<BUTTERFLY_TARGET_PARAMETER *,5> pButterflyTargetParamPtr = {
	/* base class 0 = */ {
		/* .m_aData = */ NULL
	}
};

unsigned char GRA3DLIGHTSTATUS type_info node[8];
unsigned char BUTTERFLY_TARGET_PARAMETER * type_info node[12];
unsigned char BUTTERFLY_TARGET_PARAMETER type_info node[8];

BUTTERFLY_DISP_CTRL ButterFlyDispCtrl = {
	/* .ButterflyList = */ {
		/* .ElemSize = */ 0,
		/* .RegCount = */ 0,
		/* .pBeginCell = */ NULL,
		/* .pEndCell = */ NULL
	}
};

BUTTERFLY_PARTICLE_CTRL ButterFlyParticleCtrl = {
	/* .ParticleList = */ {
		/* .ElemSize = */ 0,
		/* .RegCount = */ 0,
		/* .pBeginCell = */ NULL,
		/* .pEndCell = */ NULL
	}
};

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3a5ce0;
	
  g3ddbgAssert__FbPCce(false,str_777);
  return (type_info *)v;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf26BUTTERFLY_TARGET_PARAMETER(0x3efd00,_max);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf26BUTTERFLY_TARGET_PARAMETER(0x3efd08,_max);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf26BUTTERFLY_TARGET_PARAMETER(0x3a5d28,_max);
  }
  return (uint **)0x0;
}

void EffectButterflyInit() {
	int i;
	
  int iVar1;
  int iVar2;
  fixed_array<GRA3DLIGHTSTATUS,39> *pfVar3;
  
  SingleLinkListInit__FP16SINGLE_LINK_LISTUi(&ButterFlyDispCtrl.ButterflyList,0x2c0);
  pfVar3 = &ButterflyLight.aStatus;
  iVar1 = 0;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
    iVar2 = iVar1 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z16GRA3DLIGHTSTATUS_UiUi_PX01(iVar1,0x27);
    (pfVar3->field0_0x0).m_aData[0].bEnable = 0;
                    /* end of inlined section */
    pfVar3 = (fixed_array<GRA3DLIGHTSTATUS,39> *)((pfVar3->field0_0x0).m_aData + 1);
    iVar1 = iVar2;
  } while (iVar2 < 0x27);
  ButterflyLight.vAmbient[2] = 3.0;
  ButterflyLight.vAmbient[3] = 1.0;
  ButterflyLight.vAmbient[0] = 3.0;
  ButterflyLight.vAmbient[1] = 3.0;
  return;
}

void EffectSetupButterflyModel() {
  mmanageReqMdl__Fi(5);
  mmanageReqAnm__Fi(8);
  return;
}

void EffectReleaseButterflyModel() {
  mmanageClearMdl__Fi(5);
  mmanageClearAnm__Fi(8);
  return;
}

int EffectIsReadyButterflyModel() {
	int IsReady;
	int ModelAddr;
	int AnimAddr;
	
  int iVar1;
  uint uVar2;
  int ModelAddr;
  int AnimAddr;
  
  uVar2 = 0;
  iVar1 = mmanageIsReadyMdl__FiPii(5,&ModelAddr,0);
  if (iVar1 != 0) {
    iVar1 = mmanageIsReadyAnm__FiPii(8,&AnimAddr,0);
    uVar2 = (uint)(iVar1 != 0);
  }
  return uVar2;
}

void EffectInitAniCtrlButterflyOne(ANI_CTRL *pAniCtrl) {
	int ModelAddr;
	int AnimAddr;
	
  int ModelAddr;
  int AnimAddr;
  
  mmanageIsReadyMdl__FiPii(5,&ModelAddr,0);
  mmanageIsReadyAnm__FiPii(8,&AnimAddr,0);
  motClearANI_CTRL__FP8ANI_CTRL(pAniCtrl);
  motInitAniCtrlMalloc__FP8ANI_CTRLPUiT1UiUi(pAniCtrl,(uint *)AnimAddr,(uint *)ModelAddr,5,8);
  return;
}

static void EffectButterflyMakeMatrix(ANI_CTRL *pAniCtrl, float *Pos, float *Rot) {
	int MotNo;
	
  uchar uVar1;
  int iVar2;
  
  uVar1 = motSetCoord__FP8ANI_CTRLUcUc(pAniCtrl,0xff,'\0');
  if (((uVar1 != '\x01') && (uVar1 == '\x02')) && ((uint)(pAniCtrl->anm).playnum < 2)) {
                    /* inlined from effect.h */
    iVar2 = rand();
                    /* end of inlined section */
                    /* inlined from effect.h */
    ReqAnm__FPviii(pAniCtrl,0,8,
                   (uint)(1.0 <= (float)iVar2 / DAT_003ed944 + (float)iVar2 / DAT_003ed944));
  }
  mimSetVertex__FP8ANI_CTRL(pAniCtrl);
  SetCoordinate__FP8ANI_CTRLPfT1(pAniCtrl,Pos,Rot);
  return;
}

static void EffectDrawButterflyOne(ANI_CTRL *pAniCtrl, GRA3DLIGHTDATA *pLight, int Alpha) {
	HeaderSection *hs;
	
  SGDFILEHEADER *pSGDTop;
  
  pSGDTop = (SGDFILEHEADER *)pAniCtrl->base_p;
  SendEneVram__FPUii(pAniCtrl->mdl_p,0x2bc0);
  _gra3dDrawSGD__FP13SGDFILEHEADER13SGDRENDERTYPEP13SGDCOORDINATEi
            (pSGDTop,SRT_REALTIME,(SGDCOORDINATE *)0x0,-1);
  DrawEneSubObj__FPUiUcUc(pAniCtrl->mpk_p,(uchar)Alpha,(uchar)Alpha);
  _SetPREVIOUSTRI2PRIM__FP17SGDPROCUNITHEADER((SGDPROCUNITHEADER *)0x0);
  return;
}

static void EffectDrawButterflyFrea(float *Pos, float RotX, float RotY, u_int Alpha) {
	float matWorldLocal[4][4];
	DRAW_ENV DrawEnv;
	
  float matWorldLocal [4] [4];
  DRAW_ENV DrawEnv;
  
  DrawEnv.tex1 = DAT_003a5d38;
  DrawEnv.alpha = DAT_003a5d40;
  DrawEnv.test = DAT_003a5d50;
  DrawEnv.clamp = DAT_003a5d58;
  DrawEnv.prim = DAT_003a5d60;
  DrawEnv.zbuf = DAT_003a5d48;
  sceVu0UnitMatrix(matWorldLocal);
  sceVu0RotMatrixX(RotX,matWorldLocal,matWorldLocal);
  sceVu0RotMatrixY(RotY,matWorldLocal,matWorldLocal);
  sceVu0TransMatrix(matWorldLocal,matWorldLocal,Pos);
  Set3DPosTexure2__FPA3_fP8DRAW_ENViffUcUcUcUci
            (matWorldLocal,&DrawEnv,0x58,DAT_003ed948,DAT_003ed94c,0x80,0x80,0x80,(uchar)Alpha,0);
  return;
}

void EffectButterflyMain() {
	BUTTERFLY_DISP_CTRL *pCtrl;
	SLL_CELL *pCell;
	SINGLE_LINK_LIST *pParticleList;
	float Pos[4];
	float RotX;
	float RotY;
	GRA3DCAMERA *pCam;
	BUTTERFLY_DISP *pButterfly;
	float FreaAlpha;
	
  float fVar1;
  GRA3DCAMERA *pGVar2;
  float (*v1) [4];
  _BUTTERFLY_DISP *pButterfly;
  int iVar3;
  _SLL_CELL *pCell;
  _SLL_CELL *p_Var4;
  uint Alpha;
  float fVar5;
  float Pos [4];
  float RotX;
  float RotY;
  
                    /* inlined from ../../common/SingleLinkList.h */
                    /* end of inlined section */
                    /* inlined from ../../common/SingleLinkList.h */
  pCell = (_SLL_CELL *)0x0;
  if (ButterFlyDispCtrl.ButterflyList.RegCount != 0) {
    pCell = ButterFlyDispCtrl.ButterflyList.pBeginCell;
  }
                    /* end of inlined section */
                    /* inlined from ../../common/SingleLinkList.h */
                    /* end of inlined section */
  pGVar2 = gra3dGetCamera__Fv();
  v1 = gra3dcamGetPosition__Fv();
  Get2PosRot__FPCfT0PfT2((float *)v1,pGVar2->vTarget,&RotX,&RotY);
  fVar1 = DAT_003ed950;
  if (pCell != (_SLL_CELL *)0x0) {
                    /* inlined from ../../common/SingleLinkList.h */
    p_Var4 = (_SLL_CELL *)0x0;
    if (pCell != (_SLL_CELL *)0x0) {
      p_Var4 = pCell->pNext;
    }
    while( true ) {
                    /* end of inlined section */
      pButterfly = (_BUTTERFLY_DISP *)SingleLinkListCellBodyPtr__FPC9_SLL_CELL(pCell);
      EffectButterflyMakeMatrix__FP8ANI_CTRLPfT1
                (&pButterfly->AniCtrl,(float *)pButterfly,pButterfly->Rot);
      EffectGetButterflyPosition__FPfP15_BUTTERFLY_DISP(Pos,pButterfly);
                    /* inlined from effect.h */
      iVar3 = rand();
                    /* end of inlined section */
                    /* inlined from effect.h */
                    /* end of inlined section */
                    /* inlined from effect.h */
                    /* end of inlined section */
      fVar5 = pButterfly->AlphaRate * (((float)iVar3 / fVar1) * 10.0 + 8.0);
      Alpha = (uint)fVar5;
      if (2.147484e+09 <= fVar5) {
        Alpha = (int)(fVar5 - 2.147484e+09) | 0x80000000;
      }
      EffectDrawButterflyFrea__FPCfffUi(Pos,RotX,RotY,Alpha);
      EffectDrawButterflyOne__FP8ANI_CTRLPC14GRA3DLIGHTDATAi
                (&pButterfly->AniCtrl,&ButterflyLight,(int)(pButterfly->AlphaRate * 128.0));
      iVar3 = EffectButterflyUpdate__FP15_BUTTERFLY_DISP(pButterfly);
      if (iVar3 == 0) {
        ButterflyDelete__FP16SINGLE_LINK_LISTP9_SLL_CELL(&ButterFlyDispCtrl.ButterflyList,pCell);
      }
      else {
                    /* inlined from effect.h */
        iVar3 = rand();
        if (((float)iVar3 / fVar1) * 20.0 <= 1.0) {
                    /* end of inlined section */
          EffectButterflyParticleReqAdjustParam__FP16SINGLE_LINK_LISTPCfT1
                    (&ButterFlyParticleCtrl.ParticleList,Pos,pButterfly->Rot);
        }
      }
      if (p_Var4 == (_SLL_CELL *)0x0) break;
      pCell = p_Var4;
      p_Var4 = p_Var4->pNext;
    }
  }
  return;
}

static int EffectButterflyUpdate(BUTTERFLY_DISP *pButterfly) {
	int Update;
	
  int iVar1;
  
  iVar1 = 0;
  if (pButterfly->MoveType == 0) {
    iVar1 = EffectButterflyUpdateTypeDefault__FP15_BUTTERFLY_DISP(pButterfly);
  }
  else if (pButterfly->MoveType == 1) {
    iVar1 = EffectButterflyUpdateTypeMoveToTarget__FP15_BUTTERFLY_DISP(pButterfly);
  }
  return iVar1;
}

static int EffectButterflyUpdateTypeDefault(BUTTERFLY_DISP *pButterfly) {
	float mtx[4][4];
	float pos[4];
	float VelWrkX;
	float VelWrkY;
	float VelWrkZ;
	int RetVal;
	float SpeedRate;
	
  int iVar1;
  float fVar2;
  float *rot;
  float fVar3;
  float fVar4;
  float fVar5;
  float mtx [4] [4];
  float pos [4];
  
  if (pButterfly->LifeTime < 1) {
    return 0;
  }
  if ((0 < pButterfly->MoveInterval) || (fVar4 = 0.0, pButterfly->Velocity[2] == 0.0))
  goto LAB_00140690;
                    /* inlined from effect.h */
  iVar1 = rand();
  fVar2 = DAT_003ed954;
                    /* end of inlined section */
                    /* inlined from effect.h */
                    /* end of inlined section */
                    /* inlined from effect.h */
  fVar5 = 0.5;
  fVar3 = (float)iVar1 / DAT_003ed954;
                    /* end of inlined section */
                    /* inlined from effect.h */
                    /* end of inlined section */
  if (200.0 < pButterfly->Position[1]) {
                    /* inlined from effect.h */
    iVar1 = rand();
    fVar2 = (float)iVar1 / fVar2;
LAB_00140614:
    fVar5 = (fVar2 - 1.0) * fVar5;
  }
  else {
                    /* end of inlined section */
    if (fVar4 <= pButterfly->Position[1]) {
      iVar1 = rand();
      fVar2 = (float)iVar1 / fVar2 + (float)iVar1 / fVar2;
      goto LAB_00140614;
    }
                    /* inlined from effect.h */
    iVar1 = rand();
    fVar5 = ((float)iVar1 / fVar2) * fVar5;
  }
                    /* end of inlined section */
  fVar4 = pButterfly->Velocity[0];
  fVar2 = fVar4 + ((fVar3 + fVar3) - 1.0) * 0.5;
  if (fVar2 <= DAT_003ed958) {
    if (DAT_003ed95c <= fVar2) {
      fVar4 = fVar2;
    }
    fVar2 = pButterfly->Velocity[1];
    fVar3 = DAT_003ed960;
  }
  else {
    fVar2 = pButterfly->Velocity[1];
    fVar3 = DAT_003ed958;
  }
  fVar5 = fVar2 + fVar5;
  pButterfly->Velocity[0] = fVar4;
  if ((fVar5 <= fVar3) && (DAT_003ed964 <= fVar5)) {
    fVar2 = fVar5;
  }
  fVar4 = pButterfly->Velocity[0];
  pButterfly->MoveInterval = 10;
  pButterfly->Velocity[1] = fVar2 * 0.5;
  pButterfly->Velocity[0] = fVar4 * 0.5;
LAB_00140690:
  rot = pButterfly->Rot;
  GetTrgtRotType2__FPfN20i(pButterfly->OldPosition,pButterfly->Position,rot,3);
  fVar4 = *rot;
  if (fVar4 < DAT_003ed968) {
    do {
      fVar4 = fVar4 + DAT_003ed96c;
    } while (fVar4 < DAT_003ed968);
    pButterfly->Rot[0] = fVar4;
    fVar4 = pButterfly->Rot[0];
  }
  else {
    fVar4 = pButterfly->Rot[0];
  }
  if (DAT_003ed970 <= fVar4) {
    do {
      fVar4 = fVar4 - DAT_003ed974;
    } while (DAT_003ed970 <= fVar4);
    pButterfly->Rot[0] = fVar4;
    fVar4 = pButterfly->Rot[1];
  }
  else {
    fVar4 = pButterfly->Rot[1];
  }
  if (fVar4 < DAT_003ed978) {
    do {
      fVar4 = fVar4 + DAT_003ed97c;
    } while (fVar4 < DAT_003ed978);
    pButterfly->Rot[1] = fVar4;
  }
  if (DAT_003ed980 <= fVar4) {
    do {
      fVar4 = fVar4 - DAT_003ed984;
    } while (DAT_003ed980 <= fVar4);
    pButterfly->Rot[1] = fVar4;
  }
  sceVu0UnitMatrix(mtx);
  sceVu0RotMatrix(mtx,mtx,rot);
  sceVu0TransMatrix(mtx,mtx,pButterfly);
  sceVu0ApplyMatrix(pos,mtx,pButterfly->Velocity);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
  fVar4 = pButterfly->Position[2];
  fVar2 = pButterfly->Position[3];
  pButterfly->OldPosition[0] = (float)*(undefined8 *)pButterfly->Position;
  pButterfly->OldPosition[1] = (float)((ulong)*(undefined8 *)pButterfly->Position >> 0x20);
  pButterfly->OldPosition[2] = fVar4;
  pButterfly->OldPosition[3] = fVar2;
  pButterfly->Position[0] = (float)pos._0_8_;
  pButterfly->Position[1] = SUB84(pos._0_8_,4);
  pButterfly->Position[2] = pos[2];
  pButterfly->Position[3] = pos[3];
                    /* end of inlined section */
  if (pButterfly->Velocity[2] == 0.0) {
    iVar1 = pButterfly->LifeTime;
  }
  else {
                    /* inlined from effect.h */
    iVar1 = rand();
                    /* end of inlined section */
                    /* inlined from effect.h */
                    /* end of inlined section */
    fVar4 = 8.0;
                    /* inlined from effect.h */
                    /* end of inlined section */
    fVar2 = pButterfly->Velocity[2] +
            (((float)iVar1 / DAT_003ed988 + (float)iVar1 / DAT_003ed988) - 1.0) / 5.0;
    if ((10.0 <= fVar2) && (fVar4 = 12.0, fVar2 <= 12.0)) {
      fVar4 = fVar2;
    }
    pButterfly->Velocity[2] = fVar4 * 0.5;
    iVar1 = pButterfly->LifeTime;
  }
  if (iVar1 < 0x1a2) {
    if (iVar1 < 0x21) {
      fVar4 = (float)iVar1 * 0.03125;
    }
    else {
      fVar4 = 1.0;
    }
  }
  else {
    fVar4 = (float)(0x1c2 - iVar1) * 0.03125;
  }
  pButterfly->AlphaRate = fVar4;
  pButterfly->LifeTime = iVar1 + -1;
  pButterfly->MoveInterval = pButterfly->MoveInterval + -1;
  return 1;
}

static int EffectButterflyGetLockOnInterval(int Type, float *Position, float *Target) {
	int Interval;
	float Distance;
	BUTTERFLY_TARGET_PARAMETER *pButterflyTarget;
	float NearDistance;
	float FarDistance;
	
  BUTTERFLY_TARGET_PARAMETER *pBVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  
  pBVar1 = EffectButterflyTargetParameterPtrGetPublic__Fi(Type);
  iVar4 = pBVar1->NearDistance;
  fVar3 = (float)pBVar1->FarDistance;
  fVar2 = GetDistV2__FPCfT0(Position,Target);
  if (fVar2 < (float)iVar4) {
    iVar4 = pBVar1->LockOnIntervalNear;
  }
  else if (fVar2 < fVar3) {
    iVar4 = pBVar1->LockOnIntervalMiddle;
  }
  else {
    iVar4 = pBVar1->LockOnIntervalFar;
  }
  return iVar4;
}

static int EffectButterflyUpdateTypeMoveToTarget(BUTTERFLY_DISP *pButterfly) {
	float pos[4];
	int RetVal;
	float RandVal;
	float Speed;
	int LockOnFlg;
	
  BUTTERFLY_TARGET_PARAMETER *pBVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float pos [4];
  
  iVar5 = 1;
  pBVar1 = EffectButterflyTargetParameterPtrGetPublic__Fi(pButterfly->Type);
  iVar6 = pBVar1->Speed;
  if (pButterfly->LifeTime < 1) {
    iVar5 = 0;
  }
  else {
    if (pButterfly->MoveInterval < 1) {
      iVar2 = EffectButterflyGetLockOnInterval__FiPCfT1
                        (pButterfly->Type,pButterfly->Position,pButterfly->Target);
                    /* inlined from effect.h */
      iVar3 = rand();
                    /* end of inlined section */
      EffectButterflyGetVelocity__FPfPCfN21ifi
                (pButterfly->Velocity,pButterfly->Position,pButterfly->Target,pButterfly->Velocity,
                 pButterfly->Type,(float)iVar6 / 100.0,
                 (uint)(((float)iVar3 / DAT_003ed98c) * (float)iVar2 * 10.0 < 10.0));
      pButterfly->MoveInterval = 10;
    }
    GetTrgtRotType2__FPfN20i(pButterfly->OldPosition,pButterfly->Position,pButterfly->Rot,3);
    fVar7 = pButterfly->Rot[0];
    if (fVar7 < DAT_003ed990) {
      do {
        fVar7 = fVar7 + DAT_003ed994;
      } while (fVar7 < DAT_003ed990);
      pButterfly->Rot[0] = fVar7;
      fVar7 = pButterfly->Rot[0];
    }
    else {
      fVar7 = pButterfly->Rot[0];
    }
    if (DAT_003ed998 <= fVar7) {
      do {
        fVar7 = fVar7 - DAT_003ed99c;
      } while (DAT_003ed998 <= fVar7);
      pButterfly->Rot[0] = fVar7;
      fVar7 = pButterfly->Rot[1];
    }
    else {
      fVar7 = pButterfly->Rot[1];
    }
    if (fVar7 < DAT_003ed9a0) {
      do {
        fVar7 = fVar7 + DAT_003ed9a4;
      } while (fVar7 < DAT_003ed9a0);
      pButterfly->Rot[1] = fVar7;
    }
    if (DAT_003ed9a8 <= fVar7) {
      do {
        fVar7 = fVar7 - DAT_003ed9ac;
      } while (DAT_003ed9a8 <= fVar7);
      pButterfly->Rot[1] = fVar7;
    }
    sceVu0AddVector(pos,pButterfly,pButterfly->Velocity);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
    fVar7 = pButterfly->Position[2];
    fVar4 = pButterfly->Position[3];
    pButterfly->OldPosition[0] = (float)*(undefined8 *)pButterfly->Position;
    pButterfly->OldPosition[1] = (float)((ulong)*(undefined8 *)pButterfly->Position >> 0x20);
    pButterfly->OldPosition[2] = fVar7;
    pButterfly->OldPosition[3] = fVar4;
    pButterfly->Position[0] = (float)pos._0_8_;
    pButterfly->Position[1] = SUB84(pos._0_8_,4);
    pButterfly->Position[2] = pos[2];
    pButterfly->Position[3] = pos[3];
                    /* end of inlined section */
    iVar6 = pButterfly->OutTime;
    if (iVar6 == 0) {
      iVar6 = pButterfly->InTime;
      if (iVar6 == 0) {
        pButterfly->AlphaRate = 1.0;
      }
      else {
        iVar2 = pButterfly->Count;
        iVar3 = iVar2 + 1;
        pButterfly->Count = iVar3;
        pButterfly->AlphaRate = (float)iVar2 / (float)iVar6;
        if (iVar6 < iVar3) {
          pButterfly->InTime = 0;
          pButterfly->Count = 0;
        }
      }
    }
    else {
      iVar2 = pButterfly->Count;
      iVar3 = iVar2 + 1;
      pButterfly->Count = iVar3;
      pButterfly->AlphaRate = 1.0 - (float)iVar2 / (float)iVar6;
      if (iVar6 < iVar3) {
        pButterfly->LifeTime = 0;
        pButterfly->OutTime = 0;
        pButterfly->Count = 0;
      }
    }
    pButterfly->MoveInterval = pButterfly->MoveInterval + -1;
  }
  return iVar5;
}

void EffectButterflyReq(float *Position) {
	BUTTERFLY_DISP_CTRL *pCtrl;
	BUTTERFLY_DISP Butterfly;
	SLL_CELL *pCell;
	float mtx[4][4];
	float pos[4];
	float RotX;
	float RotY;
	int MotNo;
	float SpeedRate;
	
  int iVar1;
  _SLL_CELL *pCell;
  void *pvVar2;
  float fVar3;
  _BUTTERFLY_DISP Butterfly;
  float mtx [4] [4];
  float pos [4];
  float RotX;
  float RotY;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
  Butterfly.Position[2] = Position[2];
  Butterfly.Position[3] = Position[3];
  Butterfly.Position[0] = (float)*(undefined8 *)Position;
  Butterfly.Position[1] = (float)((ulong)*(undefined8 *)Position >> 0x20);
                    /* inlined from effect.h */
  iVar1 = rand();
                    /* end of inlined section */
                    /* inlined from effect.h */
  Butterfly.Velocity[0] = (((float)iVar1 / DAT_003ed9b0 + (float)iVar1 / DAT_003ed9b0) - 1.0) * 0.5;
  fVar3 = DAT_003ed9b0;
  iVar1 = rand();
  Butterfly.Velocity[1] = (((float)iVar1 / fVar3 + (float)iVar1 / fVar3) - 1.0) * 0.5;
  iVar1 = rand();
                    /* end of inlined section */
                    /* inlined from effect.h */
  Butterfly.Velocity[2] = (((float)iVar1 / fVar3) * 5.0 + 10.0) * 0.5;
                    /* end of inlined section */
  Vector2Rot__FPCfPfT1(Butterfly.Velocity,&RotX,&RotY);
  Butterfly.Velocity[3] = 1.0;
  sceVu0UnitMatrix(mtx);
  sceVu0TransMatrix(mtx,mtx,&Butterfly);
  sceVu0ApplyMatrix(pos,mtx,Butterfly.Velocity);
  Butterfly.OldPosition[0] = Butterfly.Position[0];
  Butterfly.OldPosition[1] = Butterfly.Position[1];
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
  Butterfly.OldPosition[2] = Butterfly.Position[2];
  Butterfly.OldPosition[3] = Butterfly.Position[3];
  Butterfly.Position[0] = (float)pos._0_8_;
  Butterfly.Position[1] = SUB84(pos._0_8_,4);
  Butterfly.Position[2] = pos[2];
  Butterfly.Position[3] = pos[3];
                    /* end of inlined section */
  Butterfly.LifeTime = 0x1c2;
  Butterfly.MoveInterval = 10;
  Butterfly.Rot[1] = RotY;
  Butterfly.AlphaRate = 0.0;
  Butterfly.MoveType = 0;
  Butterfly.Rot[0] = 0.0;
  Butterfly.Rot[2] = 0.0;
  Butterfly.Rot[3] = 0.0;
  pCell = SingleLinkListAddEnd__FP16SINGLE_LINK_LISTPCv(&ButterFlyDispCtrl.ButterflyList,&Butterfly)
  ;
  if (pCell != (_SLL_CELL *)0x0) {
    pvVar2 = SingleLinkListCellBodyPtr__FPC9_SLL_CELL(pCell);
    EffectInitAniCtrlButterflyOne__FP8ANI_CTRL((ANI_CTRL *)((int)pvVar2 + 0x50));
                    /* inlined from effect.h */
    iVar1 = rand();
                    /* end of inlined section */
                    /* inlined from effect.h */
    ReqAnm__FPviii((ANI_CTRL *)((int)pvVar2 + 0x50),0,8,
                   (uint)(1.0 <= (float)iVar1 / fVar3 + (float)iVar1 / fVar3));
  }
  return;
}

void EffectButterflyReqTarget(int Id, int Type, float *Position, float *Target) {
	BUTTERFLY_DISP_CTRL *pCtrl;
	BUTTERFLY_DISP Butterfly;
	SLL_CELL *pCell;
	float pos[4];
	float DirVector[4];
	float RotX;
	float RotY;
	int MotNo;
	float Speed;
	BUTTERFLY_TARGET_PARAMETER *pButterflyTarget;
	
  BUTTERFLY_TARGET_PARAMETER *pBVar1;
  _SLL_CELL *pCell;
  void *pvVar2;
  float *Velocity;
  int iVar3;
  _BUTTERFLY_DISP Butterfly;
  float pos [4];
  float DirVector [4];
  float RotX;
  float RotY;
  
  pBVar1 = EffectButterflyTargetParameterPtrGet__Fi(Type);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
  Butterfly.Position[2] = Position[2];
  Butterfly.Position[3] = Position[3];
  Butterfly.Position[0] = (float)*(undefined8 *)Position;
  Butterfly.Position[1] = (float)((ulong)*(undefined8 *)Position >> 0x20);
  Butterfly.Target[2] = Target[2];
  Butterfly.Target[3] = Target[3];
  Butterfly.Target[0] = (float)*(undefined8 *)Target;
  Butterfly.Target[1] = (float)((ulong)*(undefined8 *)Target >> 0x20);
                    /* end of inlined section */
  iVar3 = pBVar1->Speed;
  sceVu0SubVector(DirVector,Target,Position);
  Velocity = Butterfly.Velocity;
  EffectButterflyGetVelocity__FPfPCfN21ifi
            (Velocity,Position,Target,DirVector,Type,(float)iVar3 / 100.0,0);
  sceVu0AddVector(pos,&Butterfly,Velocity);
  Butterfly.OldPosition[0] = Butterfly.Position[0];
  Butterfly.OldPosition[1] = Butterfly.Position[1];
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
  Butterfly.OldPosition[2] = Butterfly.Position[2];
  Butterfly.OldPosition[3] = Butterfly.Position[3];
  Butterfly.Position[0] = (float)pos._0_8_;
  Butterfly.Position[1] = SUB84(pos._0_8_,4);
  Butterfly.Position[2] = pos[2];
  Butterfly.Position[3] = pos[3];
                    /* end of inlined section */
  Butterfly.LifeTime = 0x1c2;
  Butterfly.MoveInterval = 10;
  Butterfly.InTime = pBVar1->InTime;
  Butterfly.MoveType = 1;
  Butterfly.OutTime = 0;
  Butterfly.Count = 0;
  Butterfly.AlphaRate = 0.0;
  Butterfly.Type = Type;
  Butterfly.Id = Id;
  Vector2Rot__FPCfPfT1(Velocity,&RotX,&RotY);
  Butterfly.Rot[0] = 0.0;
  Butterfly.Rot[1] = RotY;
  Butterfly.Rot[2] = 0.0;
  Butterfly.Rot[3] = 0.0;
  pCell = SingleLinkListAddEnd__FP16SINGLE_LINK_LISTPCv(&ButterFlyDispCtrl.ButterflyList,&Butterfly)
  ;
  if (pCell != (_SLL_CELL *)0x0) {
    pvVar2 = SingleLinkListCellBodyPtr__FPC9_SLL_CELL(pCell);
    EffectInitAniCtrlButterflyOne__FP8ANI_CTRL((ANI_CTRL *)((int)pvVar2 + 0x50));
                    /* inlined from effect.h */
    iVar3 = rand();
                    /* end of inlined section */
                    /* inlined from effect.h */
    ReqAnm__FPviii((ANI_CTRL *)((int)pvVar2 + 0x50),0,8,
                   (uint)(1.0 <= (float)iVar3 / DAT_003ed9b4 + (float)iVar3 / DAT_003ed9b4));
  }
  return;
}

static void EffectButterflyGetVelocity(float *Velocity, float *Position, float *Target, float *Direction, int Type, float Speed, int LockOn) {
	float TgtPosVector[4];
	float WrkVelocity[4];
	float VelRotX;
	float VelRotY;
	float DirRotX;
	float DirRotY;
	float TurnMax;
	BUTTERFLY_TARGET_PARAMETER *pButterflyTarget;
	float TmpMat[4][4];
	float NormalTgtPosVector[4];
	float NormalTgtPosVectorY0[4];
	float RotX;
	float RotY;
	float InnerProduct;
	float Angle;
	float TmpMat[4][4];
	float Sabun;
	float RotY;
	
  BUTTERFLY_TARGET_PARAMETER *pBVar1;
  int iVar2;
  double arg_a;
  double arg_a_00;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined in_vf0 [16];
  undefined extraout_vf1 [16];
  undefined extraout_vf1_00 [16];
  undefined extraout_vf1_01 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined4 uVar10;
  float TgtPosVector [4];
  float WrkVelocity [4];
  float VelRotX;
  float VelRotY;
  float DirRotX;
  float DirRotY;
  float NormalTgtPosVector [4];
  float NormalTgtPosVectorY0 [4];
  float TmpMat [4] [4];
  
  pBVar1 = EffectButterflyTargetParameterPtrGet__Fi(Type);
  fVar6 = (float)pBVar1->TurnMax * DAT_003ed9b8;
  sceVu0SubVector(TgtPosVector,Target,Position);
  if (LockOn != 0) {
    WrkVelocity[2] = TgtPosVector[2];
    WrkVelocity[0] = TgtPosVector[0];
    WrkVelocity[1] = TgtPosVector[1];
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
    WrkVelocity[3] = TgtPosVector[3];
                    /* end of inlined section */
    Vector2Rot__FPCfPfT1(WrkVelocity,&VelRotX,&VelRotY);
    Vector2Rot__FPCfPfT1(Direction,&DirRotX,&DirRotY);
    fVar5 = VelRotY;
    arg_a = (double)fVar6;
    arg_a_00 = (double)(VelRotY - DirRotY);
    fVar4 = DirRotY;
    iVar2 = dpcmp((long)arg_a_00,0);
    if (iVar2 < 0) {
      arg_a_00 = 0.0 - arg_a_00;
    }
    iVar2 = dpcmp((long)arg_a,(long)arg_a_00);
    auVar9 = extraout_vf1_00;
    if (iVar2 < 0) {
      if (fVar5 < 0.0) {
        fVar5 = fVar5 + DAT_003ed9d0;
        VelRotY = fVar5;
      }
      if (fVar4 < 0.0) {
        fVar4 = fVar4 + DAT_003ed9d4;
        DirRotY = fVar4;
      }
      fVar3 = fVar5 - fVar4;
      if (fVar3 < DAT_003ed9d8) {
        fVar3 = fVar3 + DAT_003ed9dc;
      }
      if (DAT_003ed9e0 < fVar3) {
        fVar3 = fVar3 - DAT_003ed9e4;
      }
      if ((fVar3 < 0.0) || (DAT_003ed9e0 < fVar3)) {
        fVar5 = (fVar4 + -fVar6) - fVar5;
        if (fVar5 < 0.0) {
          fVar5 = fVar5 + DAT_003ed9e8;
        }
        if (DAT_003ed9ec < fVar5) {
          fVar5 = fVar5 - DAT_003ed9ec;
        }
      }
      else {
        fVar5 = (fVar4 + fVar6) - fVar5;
        if (fVar5 < 0.0) {
          fVar5 = fVar5 + DAT_003ed9f0;
        }
        if (DAT_003ed9e0 < fVar5) {
          fVar5 = fVar5 - DAT_003ed9f4;
        }
      }
      sceVu0UnitMatrix(TmpMat);
      sceVu0RotMatrixY(fVar5,TmpMat,TmpMat);
      sceVu0ApplyMatrix(WrkVelocity,TmpMat,WrkVelocity);
      auVar9 = extraout_vf1_01;
    }
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
    auVar7 = _lqc2((undefined  [16])WrkVelocity);
    auVar8 = _vmul(auVar7,auVar7);
    _vnop();
    _vnop();
    _vnop();
    _vaddabc(auVar8,auVar8);
    auVar9 = _vmaddbc(auVar9,auVar8);
    _vnop();
    _vnop();
    _vnop();
    uVar10 = _vrsqrt(in_vf0,auVar9);
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
    auVar9 = _vmulq(auVar7,uVar10);
    WrkVelocity = (float  [4])_sqc2(auVar9);
                    /* end of inlined section */
    sceVu0ScaleVector(Speed,Velocity,WrkVelocity);
    return;
  }
                    /* inlined from effect.h */
  rand();
                    /* end of inlined section */
                    /* inlined from effect.h */
  rand();
  auVar9._8_4_ = TgtPosVector[2];
  auVar9._0_4_ = TgtPosVector[0];
  auVar9._4_4_ = TgtPosVector[1];
  auVar9._12_4_ = TgtPosVector[3];
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
                    /* inlined from effect.h */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
  auVar9 = _lqc2(auVar9);
  auVar7 = _vmul(auVar9,auVar9);
  _vnop();
  _vnop();
  _vnop();
  _vaddabc(auVar7,auVar7);
  auVar7 = _vmaddbc(extraout_vf1,auVar7);
  _vnop();
  _vnop();
  _vnop();
  uVar10 = _vrsqrt(in_vf0,auVar7);
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
  auVar9 = _vmulq(auVar9,uVar10);
  NormalTgtPosVector = (float  [4])_sqc2(auVar9);
  NormalTgtPosVectorY0[2] = TgtPosVector[2];
  NormalTgtPosVectorY0[0] = TgtPosVector[0];
  NormalTgtPosVectorY0[1] = TgtPosVector[1];
  NormalTgtPosVectorY0[3] = TgtPosVector[3];
                    /* end of inlined section */
  NormalTgtPosVectorY0._0_8_ = TgtPosVector._0_8_ & 0xffffffff;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
  auVar9 = _lqc2((undefined  [16])NormalTgtPosVectorY0);
  auVar7 = _vmul(auVar9,auVar9);
  _vnop();
  _vnop();
  _vnop();
  _vaddabc(auVar7,auVar7);
  auVar7 = _vmaddbc(extraout_vf1,auVar7);
  _vnop();
  _vnop();
  _vnop();
  uVar10 = _vrsqrt(in_vf0,auVar7);
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
  auVar9 = _vmulq(auVar9,uVar10);
  _sqc2(auVar9);
                    /* WARNING: Subroutine does not return */
                    /* end of inlined section */
  sceVu0InnerProduct();
}

static void ButterflyDelete(SINGLE_LINK_LIST *pSLL, SLL_CELL *pCell) {
  void *pvVar1;
  
  pvVar1 = SingleLinkListCellBodyPtr__FPC9_SLL_CELL(pCell);
  motInitAniCtrlFree__FP8ANI_CTRL((ANI_CTRL *)((int)pvVar1 + 0x50));
  SingleLinkListRemove__FP16SINGLE_LINK_LISTP9_SLL_CELL(pSLL,pCell);
  return;
}

static void EffectGetButterflyPosition(float *Position, BUTTERFLY_DISP *pButterfly) {
	float LocalWorld[4][4];
	float *pv1;
	
  float LocalWorld [4] [4];
  
  motGetLocalWorldMatrix__FPA3_fPUii(LocalWorld,(pButterfly->AniCtrl).mpk_p,1);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
  *Position = (float)LocalWorld[3]._0_8_;
  Position[1] = SUB84(LocalWorld[3]._0_8_,4);
  Position[2] = LocalWorld[3][2];
  Position[3] = LocalWorld[3][3];
  return;
}

void EffectButterflyAllCut() {
	BUTTERFLY_DISP_CTRL *pCtrl;
	SLL_CELL *pCell;
	
  _SLL_CELL *pCell;
  _SLL_CELL *p_Var1;
  
                    /* inlined from ../../common/SingleLinkList.h */
  pCell = (_SLL_CELL *)0x0;
  if (ButterFlyDispCtrl.ButterflyList.RegCount != 0) {
    pCell = ButterFlyDispCtrl.ButterflyList.pBeginCell;
  }
                    /* end of inlined section */
  if (pCell != (_SLL_CELL *)0x0) {
                    /* inlined from ../../common/SingleLinkList.h */
    p_Var1 = (_SLL_CELL *)0x0;
    if (pCell != (_SLL_CELL *)0x0) {
      p_Var1 = pCell->pNext;
    }
                    /* end of inlined section */
    for (; ButterflyDelete__FP16SINGLE_LINK_LISTP9_SLL_CELL(&ButterFlyDispCtrl.ButterflyList,pCell),
        p_Var1 != (_SLL_CELL *)0x0; p_Var1 = p_Var1->pNext) {
      pCell = p_Var1;
    }
  }
  return;
}

static BUTTERFLY_DISP* EffectButterflyGetDispPtr(int Id) {
	SLL_CELL *pCell;
	BUTTERFLY_DISP *pRetButterfly;
	SINGLE_LINK_LIST *pSLL;
	
  _SLL_CELL *p_Var1;
  _BUTTERFLY_DISP *p_Var2;
  _SLL_CELL *pCell;
  
                    /* inlined from ../../common/SingleLinkList.h */
                    /* end of inlined section */
                    /* inlined from ../../common/SingleLinkList.h */
  pCell = (_SLL_CELL *)0x0;
  if (ButterFlyDispCtrl.ButterflyList.RegCount != 0) {
    pCell = ButterFlyDispCtrl.ButterflyList.pBeginCell;
  }
  do {
    if (pCell == (_SLL_CELL *)0x0) {
      return (_BUTTERFLY_DISP *)0x0;
    }
                    /* end of inlined section */
    p_Var1 = pCell->pNext;
    p_Var2 = (_BUTTERFLY_DISP *)SingleLinkListCellBodyPtr__FPC9_SLL_CELL(pCell);
    pCell = p_Var1;
  } while ((p_Var2->MoveType != 1) || (p_Var2->Id != Id));
  return p_Var2;
}

void EffectButterflyFadeOut(int Id) {
	BUTTERFLY_DISP *pButterfly;
	
  _BUTTERFLY_DISP *p_Var1;
  BUTTERFLY_TARGET_PARAMETER *pBVar2;
  
  p_Var1 = EffectButterflyGetDispPtr__Fi(Id);
  if (p_Var1 != (_BUTTERFLY_DISP *)0x0) {
    pBVar2 = EffectButterflyTargetParameterPtrGet__Fi(p_Var1->Type);
    p_Var1->OutTime = pBVar2->OutTime;
  }
  return;
}

void EffectButterflyAllFadeOut() {
	SLL_CELL *pCell;
	SINGLE_LINK_LIST *pSLL;
	BUTTERFLY_DISP *pButterfly;
	
  void *pvVar1;
  BUTTERFLY_TARGET_PARAMETER *pBVar2;
  _SLL_CELL *pCell;
  _SLL_CELL *p_Var3;
  
                    /* inlined from ../../common/SingleLinkList.h */
                    /* end of inlined section */
                    /* inlined from ../../common/SingleLinkList.h */
  pCell = (_SLL_CELL *)0x0;
  if (ButterFlyDispCtrl.ButterflyList.RegCount != 0) {
    pCell = ButterFlyDispCtrl.ButterflyList.pBeginCell;
  }
                    /* end of inlined section */
  if (pCell != (_SLL_CELL *)0x0) {
                    /* inlined from ../../common/SingleLinkList.h */
    p_Var3 = (_SLL_CELL *)0x0;
    if (pCell != (_SLL_CELL *)0x0) {
      p_Var3 = pCell->pNext;
    }
    while( true ) {
                    /* end of inlined section */
      pvVar1 = SingleLinkListCellBodyPtr__FPC9_SLL_CELL(pCell);
      if (*(int *)((int)pvVar1 + 0x29c) == 1) {
        pBVar2 = EffectButterflyTargetParameterPtrGet__Fi(*(int *)((int)pvVar1 + 0x2ac));
        *(int *)((int)pvVar1 + 0x2a4) = pBVar2->OutTime;
      }
      if (p_Var3 == (_SLL_CELL *)0x0) break;
      pCell = p_Var3;
      p_Var3 = p_Var3->pNext;
    }
  }
  return;
}

void EffectButterflyChangeTarget(int Id, float *Target) {
	BUTTERFLY_DISP *pButterfly;
	float *pv0;
	
  _BUTTERFLY_DISP *p_Var1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  p_Var1 = EffectButterflyGetDispPtr__Fi(Id);
                    /* end of inlined section */
  if (p_Var1 != (_BUTTERFLY_DISP *)0x0) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
    fVar2 = Target[1];
    fVar3 = Target[2];
    fVar4 = Target[3];
    p_Var1->Target[0] = *Target;
    p_Var1->Target[1] = fVar2;
    p_Var1->Target[2] = fVar3;
    p_Var1->Target[3] = fVar4;
  }
  return;
}

void EffectButterflyChangeType(int Id, int Type) {
	BUTTERFLY_DISP *pButterfly;
	
  _BUTTERFLY_DISP *p_Var1;
  
  p_Var1 = EffectButterflyGetDispPtr__Fi(Id);
  if (p_Var1 != (_BUTTERFLY_DISP *)0x0) {
    p_Var1->Type = Type;
  }
  return;
}

void EffectButterflyAllChangeTarget(float *Target) {
	SLL_CELL *pCell;
	SINGLE_LINK_LIST *pSLL;
	BUTTERFLY_DISP *pButterfly;
	float *pv0;
	
  void *pvVar1;
  _SLL_CELL *pCell;
  float fVar2;
  float fVar3;
  float fVar4;
  _SLL_CELL *p_Var5;
  
                    /* inlined from ../../common/SingleLinkList.h */
                    /* end of inlined section */
                    /* inlined from ../../common/SingleLinkList.h */
  pCell = (_SLL_CELL *)0x0;
  if (ButterFlyDispCtrl.ButterflyList.RegCount != 0) {
    pCell = ButterFlyDispCtrl.ButterflyList.pBeginCell;
  }
                    /* end of inlined section */
  if (pCell != (_SLL_CELL *)0x0) {
                    /* inlined from ../../common/SingleLinkList.h */
    p_Var5 = (_SLL_CELL *)0x0;
    if (pCell != (_SLL_CELL *)0x0) {
      p_Var5 = pCell->pNext;
    }
    while( true ) {
                    /* end of inlined section */
      pvVar1 = SingleLinkListCellBodyPtr__FPC9_SLL_CELL(pCell);
      if (*(int *)((int)pvVar1 + 0x29c) == 1) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
        fVar2 = Target[1];
        fVar3 = Target[2];
        fVar4 = Target[3];
        *(float *)((int)pvVar1 + 0x20) = *Target;
        *(float *)((int)pvVar1 + 0x24) = fVar2;
        *(float *)((int)pvVar1 + 0x28) = fVar3;
        *(float *)((int)pvVar1 + 0x2c) = fVar4;
                    /* end of inlined section */
      }
      if (p_Var5 == (_SLL_CELL *)0x0) break;
      pCell = p_Var5;
      p_Var5 = p_Var5->pNext;
    }
  }
  return;
}

int EffectButterflyNumGet() {
	BUTTERFLY_DISP_CTRL *pCtrl;
	
  return ButterFlyDispCtrl.ButterflyList.RegCount;
}

static BUTTERFLY_TARGET_PARAMETER* EffectButterflyTargetParameterPtrGet(int Type) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  if (4 < (uint)Type) {
    Type = 0;
  }
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1ZP26BUTTERFLY_TARGET_PARAMETER_UiUi_PX01(Type,5);
  return *(BUTTERFLY_TARGET_PARAMETER **)
          ((int)pButterflyTargetParamPtr.field0_0x0.m_aData + Type * 4);
}

BUTTERFLY_TARGET_PARAMETER* EffectButterflyTargetParameterPtrGetPublic(int Type) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1ZP26BUTTERFLY_TARGET_PARAMETER_UiUi_PX01(Type,5);
  return *(BUTTERFLY_TARGET_PARAMETER **)
          ((int)pButterflyTargetParamPtr.field0_0x0.m_aData + Type * 4);
}

void EffectButterflyParticleInit() {
  SingleLinkListInit__FP16SINGLE_LINK_LISTUi(&ButterFlyParticleCtrl.ParticleList,0x40);
  return;
}

void EffectButterflyParticleMain() {
	BUTTERFLY_PARTICLE_CTRL *pCtrl;
	SLL_CELL *pCell;
	GRA3DCAMERA *pCam;
	float RotX;
	float RotY;
	BUTTERFLY_PARTICLE *pParticle;
	
  _SLL_CELL *pCell;
  GRA3DCAMERA *pGVar1;
  float (*v1) [4];
  _BUTTERFLY_PARTICLE *pParticle;
  int iVar2;
  _SLL_CELL *p_Var3;
  float RotX;
  float RotY;
  
                    /* inlined from ../../common/SingleLinkList.h */
                    /* end of inlined section */
                    /* inlined from ../../common/SingleLinkList.h */
  p_Var3 = (_SLL_CELL *)0x0;
  if (ButterFlyParticleCtrl.ParticleList.RegCount != 0) {
    p_Var3 = ButterFlyParticleCtrl.ParticleList.pBeginCell;
  }
                    /* end of inlined section */
  pGVar1 = gra3dGetCamera__Fv();
  v1 = gra3dcamGetPosition__Fv();
  Get2PosRot__FPCfT0PfT2((float *)v1,pGVar1->vTarget,&RotX,&RotY);
  while (pCell = p_Var3, pCell != (_SLL_CELL *)0x0) {
    p_Var3 = (_SLL_CELL *)0x0;
                    /* end of inlined section */
    pParticle = (_BUTTERFLY_PARTICLE *)SingleLinkListCellBodyPtr__FPC9_SLL_CELL(pCell);
                    /* inlined from ../../common/SingleLinkList.h */
    if (pCell != (_SLL_CELL *)0x0) {
      p_Var3 = pCell->pNext;
    }
                    /* end of inlined section */
    ButterflyParticleOneDraw__FPC19_BUTTERFLY_PARTICLEff(pParticle,RotX,RotY);
    iVar2 = ButterflyParticleUpdate__FP19_BUTTERFLY_PARTICLE(pParticle);
    if (iVar2 == 0) {
      SingleLinkListRemove__FP16SINGLE_LINK_LISTP9_SLL_CELL
                (&ButterFlyParticleCtrl.ParticleList,pCell);
    }
  }
  return;
}

static void EffectButterflyParticleReq(SINGLE_LINK_LIST *pSLL, float *Position, float *Velocity, float *Acceleration) {
	BUTTERFLY_PARTICLE Particle;
	
  _BUTTERFLY_PARTICLE Particle;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
  Particle.Position[2] = Position[2];
  Particle.Position[3] = Position[3];
  Particle.Position[0] = (float)*(undefined8 *)Position;
  Particle.Position[1] = (float)((ulong)*(undefined8 *)Position >> 0x20);
  Particle.Velocity[2] = Velocity[2];
  Particle.Velocity[3] = Velocity[3];
  Particle.Velocity[0] = (float)*(undefined8 *)Velocity;
  Particle.Velocity[1] = (float)((ulong)*(undefined8 *)Velocity >> 0x20);
  Particle.Acceleration[2] = Acceleration[2];
  Particle.Acceleration[3] = Acceleration[3];
  Particle.Acceleration[0] = (float)*(undefined8 *)Acceleration;
  Particle.Acceleration[1] = (float)((ulong)*(undefined8 *)Acceleration >> 0x20);
                    /* end of inlined section */
  Particle.LifeTime = 0x1e;
  Particle.AlphaRate = 1.0;
  SingleLinkListAddEnd__FP16SINGLE_LINK_LISTPCv(pSLL,&Particle);
  return;
}

static void EffectButterflyParticleReqAdjustParam(SINGLE_LINK_LIST *pSLL, float *Position, float *Rot) {
	float TmpMat[4][4];
	float Accel[4];
	float Velocity[4];
	float RotX;
	float RotY;
	int ReqNum;
	int i;
	float ButterflyRotX;
	float ButterflyRotY;
	float TmpVec[4];
	
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float TmpMat [4] [4];
  float Accel [4];
  float Velocity [4];
  float TmpVec [4];
  
  memset(Accel,0,0x10);
  fVar11 = *Rot;
  fVar10 = Rot[1];
                    /* inlined from effect.h */
  Accel[1] = DAT_003ed9f8;
  iVar3 = rand();
  fVar2 = DAT_003eda08;
  fVar1 = DAT_003eda04;
  iVar3 = (int)(((float)iVar3 / DAT_003ed9fc) * 3.0 + 0.5);
                    /* end of inlined section */
  if (0 < iVar3 + 2) {
    iVar3 = iVar3 + 2;
    fVar7 = DAT_003ed9fc;
    fVar8 = DAT_003eda0c;
    fVar9 = DAT_003eda00;
    do {
      TmpVec[2] = (float)DAT_003a5d78;
      TmpVec[3] = DAT_003a5d78._4_4_;
      TmpVec[0] = (float)DAT_003a5d70;
      TmpVec[1] = DAT_003a5d70._4_4_;
                    /* inlined from effect.h */
      iVar4 = rand();
      TmpVec[2] = TmpVec[2] * ((((float)iVar4 / fVar7) * 40.0) / 10.0 + 1.0);
      iVar4 = rand();
      fVar5 = fVar11 + ((((float)iVar4 / fVar7) * 180.0 + 350.0) - 90.0) * fVar9;
      iVar4 = rand();
                    /* end of inlined section */
                    /* inlined from effect.h */
                    /* end of inlined section */
      fVar6 = fVar10 + ((((float)iVar4 / fVar7) * 180.0 + 180.0) - 90.0) * fVar9;
      if (fVar5 < fVar1) {
        fVar5 = fVar5 + fVar2;
      }
      else if (fVar8 < fVar5) {
        fVar5 = fVar5 - fVar2;
      }
      if (fVar6 < fVar1) {
        fVar6 = fVar6 + fVar2;
      }
      else if (fVar8 < fVar6) {
        fVar6 = fVar6 - fVar2;
      }
      iVar3 = iVar3 + -1;
      sceVu0UnitMatrix(TmpMat);
      sceVu0RotMatrixX(fVar5,TmpMat,TmpMat);
      sceVu0RotMatrixY(fVar6,TmpMat,TmpMat);
      sceVu0ApplyMatrix(Velocity,TmpMat,TmpVec);
      EffectButterflyParticleReq__FP16SINGLE_LINK_LISTPCfN21(pSLL,Position,Velocity,Accel);
    } while (iVar3 != 0);
  }
  return;
}

static void ButterflyParticleOneDraw(BUTTERFLY_PARTICLE *pParticle, float RotX, float RotY) {
	float matWorldLocal[4][4];
	DRAW_ENV DrawEnv;
	
  uchar a;
  float fVar1;
  float matWorldLocal [4] [4];
  DRAW_ENV DrawEnv;
  
  DrawEnv.tex1 = DAT_003a5d80;
  DrawEnv.zbuf = DAT_003a5d90;
  DrawEnv.test = DAT_003a5d98;
  DrawEnv.clamp = DAT_003a5da0;
  DrawEnv.prim = DAT_003a5da8;
  DrawEnv.alpha = DAT_003a5d88;
  sceVu0UnitMatrix(matWorldLocal);
  sceVu0RotMatrixX(RotX,matWorldLocal,matWorldLocal);
  sceVu0RotMatrixY(RotY,matWorldLocal,matWorldLocal);
  sceVu0TransMatrix(matWorldLocal,matWorldLocal,pParticle);
  fVar1 = pParticle->AlphaRate * 128.0;
  a = (uchar)(int)fVar1;
  if (2.147484e+09 <= fVar1) {
    a = (uchar)(int)(fVar1 - 2.147484e+09);
  }
  Set3DPosTexure2__FPA3_fP8DRAW_ENViffUcUcUcUci
            (matWorldLocal,&DrawEnv,0x58,DAT_003eda10,DAT_003eda10,0x80,0x80,0x80,a,0);
  return;
}

static int ButterflyParticleUpdate(BUTTERFLY_PARTICLE *pParticle) {
	int RetVal;
	
  bool bVar1;
  int iVar2;
  float *pfVar3;
  
  pfVar3 = pParticle->Velocity;
  bVar1 = 0 < pParticle->LifeTime;
  if (bVar1) {
    sceVu0AddVector(pParticle,pParticle,pfVar3);
    sceVu0AddVector(pfVar3,pfVar3,pParticle->Acceleration);
    iVar2 = pParticle->LifeTime + -1;
    pParticle->Position[3] = 1.0;
    pParticle->LifeTime = iVar2;
    pParticle->AlphaRate = (float)iVar2 / 30.0;
  }
  return (uint)bVar1;
}

void EffectButterflyParticleAllCut() {
	BUTTERFLY_PARTICLE_CTRL *pCtrl;
	SLL_CELL *pCell;
	
  _SLL_CELL *pDelCell;
  _SLL_CELL *p_Var1;
  
                    /* inlined from ../../common/SingleLinkList.h */
  pDelCell = (_SLL_CELL *)0x0;
  if (ButterFlyParticleCtrl.ParticleList.RegCount != 0) {
    pDelCell = ButterFlyParticleCtrl.ParticleList.pBeginCell;
  }
                    /* end of inlined section */
  if (pDelCell != (_SLL_CELL *)0x0) {
                    /* inlined from ../../common/SingleLinkList.h */
    p_Var1 = (_SLL_CELL *)0x0;
    if (pDelCell != (_SLL_CELL *)0x0) {
      p_Var1 = pDelCell->pNext;
    }
                    /* end of inlined section */
    for (; SingleLinkListRemove__FP16SINGLE_LINK_LISTP9_SLL_CELL
                     (&ButterFlyParticleCtrl.ParticleList,pDelCell), p_Var1 != (_SLL_CELL *)0x0;
        p_Var1 = p_Var1->pNext) {
      pDelCell = p_Var1;
    }
  }
  return;
}

GRA3DLIGHTSTATUS* GRA3DLIGHTSTATUS * _fixed_array_verifyrange<GRA3DLIGHTSTATUS>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_777);
  return (type_info *)v;
}

BUTTERFLY_TARGET_PARAMETER** BUTTERFLY_TARGET_PARAMETER * * _fixed_array_verifyrange<BUTTERFLY_TARGET_PARAMETER *>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_777);
  return (type_info *)v;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
	BUTTERFLY_TARGET_PARAMETER **ra;
	
  if ((__priority == 0xffff) && (__initialize_p == 1)) {
    pButterflyTargetParamPtr.field0_0x0.m_aData =
         (fixed_array_base<BUTTERFLY_TARGET_PARAMETER_*,5,BUTTERFLY_TARGET_PARAMETER_**>)
         &PTR_ButterflyTargetType00_003a5db0;
  }
  return;
}

type_info& GRA3DLIGHTSTATUS type_info function() {
  g3ddbgAssert__FbPCce(false,str_777);
  return (type_info *)v;
}

type_info& BUTTERFLY_TARGET_PARAMETER * type_info function() {
  g3ddbgAssert__FbPCce(false,str_777);
  return (type_info *)v;
}

type_info& BUTTERFLY_TARGET_PARAMETER type_info function() {
  g3ddbgAssert__FbPCce(false,str_777);
  return (type_info *)v;
}

static void global constructors keyed to ButterflyTargetType00() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
