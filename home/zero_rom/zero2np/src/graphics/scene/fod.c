// STATUS: NOT STARTED

#include "fod.h"

struct fixed_array_base<G3DLIGHT,3,G3DLIGHT[3]> {
protected:
	G3DLIGHT m_aData[3];
	
public:
	fixed_array_base<G3DLIGHT,3,G3DLIGHT[3]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	G3DLIGHT& operator[]();
	G3DLIGHT& operator[]();
	G3DLIGHT* data();
	G3DLIGHT* begin();
	G3DLIGHT* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<G3DLIGHT,3> : fixed_array_base<G3DLIGHT,3,G3DLIGHT[3]> {
};

GRA3DLIGHTDATA FodLight = {
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

unsigned char FOD_LIT_SERIAL type_info node[8];
unsigned char float [3] type_info node[8];
unsigned char G3DLIGHT type_info node[8];
unsigned char GRA3DLIGHTSTATUS type_info node[8];

float fod_cmn_mtx[4][4] = {
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
};

FOD_EFF_PARAM eff_param = {
	/* .fix = */ {
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
		/* [11] = */ NULL
	},
	/* .lenz_pos = */ {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	},
	/* .lenz_rot = */ {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	},
	/* .pdf_pos = */ {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	},
	/* .pdf_spd = */ 0.f,
	/* .pdf_rate = */ 0.f,
	/* .pdf_trate = */ 0.f,
	/* .pdf_p = */ NULL,
	/* .fix_eff_num = */ 0,
	/* .fade_mdl_cnt = */ 0,
	/* .fire_num = */ 0,
	/* .mono_flg = */ 0
};

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3ae590;
	
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf16GRA3DLIGHTSTATUS(0x3f08f0,_max);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf16GRA3DLIGHTSTATUS(0x3f08f8,_max);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf16GRA3DLIGHTSTATUS(0x3ae5d8,_max);
  }
  return (uint **)0x0;
}

void FodInit(FOD_CTRL *fc, u_int *tcp, u_int *tlp, u_int *tep, float *offset) {
  uchar uVar1;
  uint uVar2;
  FOD_EFF_FRAME *pFVar3;
  FOD_LIT_FRAME *pFVar4;
  
  sceVu0UnitMatrix(0x313e20);
  fod_cmn_mtx[0][0] = 25.0;
  fod_cmn_mtx[2][2] = 25.0;
  fod_cmn_mtx[1][1] = 25.0;
  fod_cmn_mtx[3][3] = 1.0;
  sceVu0RotMatrixX(DAT_003ee2fc,0x313e20,0x313e20);
  memset(fc,0,0x1510);
  fc->cam_file_hdr = (FOD_FILE_HDR *)tcp;
  fc->now_reso = 0;
  fc->now_frame = 1;
  fc->cut_timing_index = 0;
  fc->cam_frame_top = (FOD_CAM_FRAME *)(tcp + 0x10);
  uVar2 = tcp[3];
  fc->float_now_frame = 1.0;
  fc->frame_max = uVar2;
  fc->lit_file_hdr = (FOD_FILE_HDR *)tlp;
  uVar1 = *(uchar *)(tcp + 2);
  fc->eff_file_hdr = (FOD_FILE_HDR *)tep;
  fc->resolution = uVar1;
  fc->end_flg = '\0';
  pFVar3 = (FOD_EFF_FRAME *)FodGetFixEffect__FPUi(tep);
  (fc->fod_light).lit_top = tlp;
  fc->eff_frame_top = pFVar3;
  FodGetLightNum__FP9FOD_LIGHT(&fc->fod_light);
  FodGetLightSerial__FP9FOD_LIGHT(&fc->fod_light);
  pFVar4 = (FOD_LIT_FRAME *)FodGetFirstLight__FP9FOD_LIGHTPf(&fc->fod_light,offset);
  fc->lit_frame_next = pFVar4;
  fc->eff_frame = fc->eff_frame_top;
  fc->cam_frame_next = fc->cam_frame_top;
  fc->lit_frame_top = pFVar4;
  fc->cam_frame = fc->cam_frame_top;
  fc->lit_frame = pFVar4;
  return;
}

int FodNextFrame(FOD_CTRL *fc, int SceneNo) {
	char *eff_addr;
	float resolution;
	int cut_timing;
	int *pTiming;
	float frame;
	int *fod_cam_addr;
	int i;
	int FirstFrame;
	int SecondFrame;
	int *fod_lit_addr;
	int i;
	int FirstFrame;
	int SecondFrame;
	
  FOD_EFF_FRAME *pFVar1;
  int iVar2;
  FOD_FILE_HDR *pFVar3;
  uint uVar4;
  int iVar5;
  FOD_CAM_FRAME *pFVar6;
  FOD_LIT_FRAME *pFVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  
  uVar4 = fc->now_reso + 1;
  pFVar1 = fc->eff_frame;
  fc->now_reso = uVar4;
  if (uVar4 < fc->resolution) {
    return 0;
  }
  fc->now_reso = 0;
  iVar2 = GetPALMode__Fv();
  fVar9 = DAT_003ee300;
  if (iVar2 == 0) {
    fVar9 = 1.0;
  }
  fc->float_now_frame = fc->float_now_frame + fVar9;
  iVar2 = GetPALMode__Fv();
  if (iVar2 == 0) {
    fVar9 = fc->float_now_frame;
  }
  else {
    fVar9 = fc->float_now_frame;
    if (scene_cut_timing[SceneNo][fc->cut_timing_index] != -1) {
      fVar10 = (float)scene_cut_timing[SceneNo][fc->cut_timing_index];
      if (fVar10 <= fVar9) {
        fc->float_now_frame = fVar10;
        fc->cut_timing_index = fc->cut_timing_index + 1;
        fVar9 = fVar10;
      }
    }
  }
  uVar4 = fc->frame_max;
  fc->now_frame = (int)(fVar9 + 0.5);
  if ((int)uVar4 < 0) {
    fVar10 = (float)(uVar4 & 1 | uVar4 >> 1);
    fVar10 = fVar10 + fVar10;
  }
  else {
    fVar10 = (float)uVar4;
  }
  if (fVar10 < fVar9) {
    if ((int)uVar4 < 0) {
      fVar9 = (float)(uVar4 & 1 | uVar4 >> 1);
      fc->float_now_frame = fVar9 + fVar9;
    }
    else {
      fc->float_now_frame = (float)uVar4;
    }
    uVar8 = fc->now_frame;
  }
  else {
    uVar8 = fc->now_frame;
  }
  if (uVar4 < uVar8) {
    fc->end_flg = '\x01';
    return 1;
  }
  iVar2 = (int)fc->float_now_frame;
  uVar8 = iVar2 + 1U;
  if ((int)uVar4 < (int)(iVar2 + 1U)) {
    uVar8 = uVar4;
  }
  if (((iVar2 <= (int)uVar4) && (iVar2 != 0)) &&
     (pFVar6 = fc->cam_frame_top, fc->cam_file_hdr->frame != 0)) {
    if (1 < iVar2) {
      iVar5 = iVar2 + -1;
      do {
        iVar5 = iVar5 + -1;
        pFVar6 = (FOD_CAM_FRAME *)((int)&pFVar6[1].frame + (pFVar6->size & 0xfffffffc));
      } while (iVar5 != 0);
    }
    fc->cam_frame = pFVar6;
    if (iVar2 < (int)uVar8) {
      pFVar6 = (FOD_CAM_FRAME *)((int)&pFVar6[1].frame + (pFVar6->size & 0xfffffffc));
    }
    fc->cam_frame_next = pFVar6;
  }
  iVar2 = (int)fc->float_now_frame;
  uVar8 = iVar2 + 1U;
  if ((int)uVar4 < (int)(iVar2 + 1U)) {
    uVar8 = uVar4;
  }
  if (iVar2 <= (int)uVar4) {
    if (iVar2 == 0) {
      pFVar3 = fc->eff_file_hdr;
      goto LAB_001951b8;
    }
    pFVar7 = fc->lit_frame_top;
    if (fc->lit_file_hdr->frame != 0) {
      if (1 < iVar2) {
        iVar5 = iVar2 + -1;
        do {
          iVar5 = iVar5 + -1;
          pFVar7 = (FOD_LIT_FRAME *)((int)pFVar7->pad + ((pFVar7->size & 0xfffffffc) - 8));
        } while (iVar5 != 0);
      }
      fc->lit_frame = pFVar7;
      if (iVar2 < (int)uVar8) {
        pFVar7 = (FOD_LIT_FRAME *)((int)pFVar7->pad + ((pFVar7->size & 0xfffffffc) - 8));
      }
      fc->lit_frame_next = pFVar7;
    }
  }
  pFVar3 = fc->eff_file_hdr;
LAB_001951b8:
  if (pFVar3->frame != 0) {
    fc->eff_frame = (FOD_EFF_FRAME *)((int)&pFVar1->frame_no + fc->eff_frame->size);
  }
  return 0;
}

void FodSetFrame(FOD_CTRL *fc, u_int frame) {
	u_int i;
	u_int *fod_cam_addr;
	u_int *fod_lit_addr;
	u_int *fod_eff_addr;
	
  uint uVar1;
  FOD_CAM_FRAME *pFVar2;
  FOD_EFF_FRAME *pFVar3;
  FOD_LIT_FRAME *pFVar4;
  uint uVar5;
  
  if ((frame <= fc->frame_max) && (frame != 0)) {
    uVar5 = 1;
    pFVar2 = fc->cam_frame_top;
    pFVar4 = fc->lit_frame_top;
    pFVar3 = fc->eff_frame_top;
    if (1 < frame) {
      do {
        if (fc->cam_file_hdr->frame == 0) {
          uVar1 = fc->lit_file_hdr->frame;
        }
        else {
          pFVar2 = (FOD_CAM_FRAME *)((int)&pFVar2[1].frame + (pFVar2->size & 0xfffffffc));
          uVar1 = fc->lit_file_hdr->frame;
        }
        if (uVar1 == 0) {
          uVar1 = fc->eff_file_hdr->frame;
        }
        else {
          pFVar4 = (FOD_LIT_FRAME *)((int)pFVar4->pad + ((pFVar4->size & 0xfffffffc) - 8));
          uVar1 = fc->eff_file_hdr->frame;
        }
        uVar5 = uVar5 + 1;
        if (uVar1 != 0) {
          pFVar3 = (FOD_EFF_FRAME *)((int)&pFVar3->frame_no + (pFVar3->size & 0xfffffffc));
        }
      } while (uVar5 < frame);
    }
    fc->eff_frame = pFVar3;
    fc->now_frame = frame;
    fc->cam_frame = pFVar2;
    fc->lit_frame = pFVar4;
    fc->now_reso = 0;
  }
  return;
}

static void FodGetLightNum(FOD_LIGHT *fl) {
	u_int *lit_addr;
	
  uint *puVar1;
  
  puVar1 = fl->lit_top;
  fl->ilit_num = puVar1[4];
  fl->slit_num = puVar1[5];
  fl->plit_num = puVar1[6];
  fl->all_lit_num = puVar1[7] - 1;
  return;
}

static void FodGetLightSerial(FOD_LIGHT *fl) {
	FOD_LIT_SERIAL *fls;
	u_int *lit_addr;
	int i;
	
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  char *str;
  ulong uVar9;
  FOD_LIGHT *pFVar10;
  uint *puVar11;
  
  uVar9 = 0;
  fl->hand_spot_no = -1;
  uVar6 = (ulong)(int)fl->all_lit_num;
  puVar11 = fl->lit_top + 0x10;
  pFVar10 = fl;
  if (0 < (long)uVar6) {
    do {
      uVar8 = 0x24;
      uVar7 = uVar9;
      uVar5 = _fixed_array_verifyrange__H1Z14FOD_LIT_SERIAL_UiUi_PX01();
      uVar2 = (int)puVar11 + 7U & 7;
      uVar3 = (uint)puVar11 & 7;
      uVar5 = (*(long *)(((int)puVar11 + 7U) - uVar2) << (7 - uVar2) * 8 |
              uVar5 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
              *(ulong *)((int)puVar11 - uVar3) >> uVar3 * 8;
      uVar2 = (int)puVar11 + 0xfU & 7;
      uVar3 = (uint)(puVar11 + 2) & 7;
      uVar6 = (*(long *)(((int)puVar11 + 0xfU) - uVar2) << (7 - uVar2) * 8 |
              uVar6 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
              *(ulong *)((int)(puVar11 + 2) - uVar3) >> uVar3 * 8;
      uVar2 = (int)puVar11 + 0x17U & 7;
      uVar3 = (uint)(puVar11 + 4) & 7;
      uVar7 = (*(long *)(((int)puVar11 + 0x17U) - uVar2) << (7 - uVar2) * 8 |
              uVar7 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
              *(ulong *)((int)(puVar11 + 4) - uVar3) >> uVar3 * 8;
      uVar2 = (int)puVar11 + 0x1fU & 7;
      uVar3 = (uint)(puVar11 + 6) & 7;
      uVar8 = (*(long *)(((int)puVar11 + 0x1fU) - uVar2) << (7 - uVar2) * 8 |
              uVar8 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
              *(ulong *)((int)(puVar11 + 6) - uVar3) >> uVar3 * 8;
      pcVar1 = (pFVar10->lit_serial).field0_0x0.m_aData[0].light_name + 3;
      uVar2 = (uint)pcVar1 & 7;
      *(ulong *)(pcVar1 + -uVar2) =
           *(ulong *)(pcVar1 + -uVar2) & -1L << (uVar2 + 1) * 8 | uVar5 >> (7 - uVar2) * 8;
      uVar2 = (uint)pFVar10 & 7;
      *(ulong *)((int)pFVar10 - uVar2) =
           uVar5 << uVar2 * 8 |
           *(ulong *)((int)pFVar10 - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
      pcVar1 = (pFVar10->lit_serial).field0_0x0.m_aData[0].light_name + 0xb;
      uVar2 = (uint)pcVar1 & 7;
      *(ulong *)(pcVar1 + -uVar2) =
           *(ulong *)(pcVar1 + -uVar2) & -1L << (uVar2 + 1) * 8 | uVar6 >> (7 - uVar2) * 8;
      pcVar1 = (pFVar10->lit_serial).field0_0x0.m_aData[0].light_name + 4;
      uVar2 = (uint)pcVar1 & 7;
      *(ulong *)(pcVar1 + -uVar2) =
           uVar6 << uVar2 * 8 | *(ulong *)(pcVar1 + -uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8
      ;
      pcVar1 = (pFVar10->lit_serial).field0_0x0.m_aData[0].light_name + 0x13;
      uVar2 = (uint)pcVar1 & 7;
      *(ulong *)(pcVar1 + -uVar2) =
           *(ulong *)(pcVar1 + -uVar2) & -1L << (uVar2 + 1) * 8 | uVar7 >> (7 - uVar2) * 8;
      pcVar1 = (pFVar10->lit_serial).field0_0x0.m_aData[0].light_name + 0xc;
      uVar2 = (uint)pcVar1 & 7;
      *(ulong *)(pcVar1 + -uVar2) =
           uVar7 << uVar2 * 8 | *(ulong *)(pcVar1 + -uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8
      ;
      pcVar1 = (pFVar10->lit_serial).field0_0x0.m_aData[0].light_name + 0x1b;
      uVar2 = (uint)pcVar1 & 7;
      *(ulong *)(pcVar1 + -uVar2) =
           *(ulong *)(pcVar1 + -uVar2) & -1L << (uVar2 + 1) * 8 | uVar8 >> (7 - uVar2) * 8;
      str = (pFVar10->lit_serial).field0_0x0.m_aData[0].light_name;
      pcVar1 = (pFVar10->lit_serial).field0_0x0.m_aData[0].light_name + 0x14;
      uVar2 = (uint)pcVar1 & 7;
      *(ulong *)(pcVar1 + -uVar2) =
           uVar8 << uVar2 * 8 | *(ulong *)(pcVar1 + -uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8
      ;
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z14FOD_LIT_SERIAL_UiUi_PX01(uVar9,0x24);
      StrToLower(str);
      puVar11 = puVar11 + 8;
      _fixed_array_verifyrange__H1Z14FOD_LIT_SERIAL_UiUi_PX01(uVar9,0x24);
      iVar4 = strcmp(str,"hand_spot");
      if (iVar4 == 0) {
LAB_001953e8:
                    /* end of inlined section */
        if (fl->hand_spot_no == -1) {
          fl->hand_spot_no = (int)uVar9;
        }
        uVar2 = fl->all_lit_num;
      }
      else {
        _fixed_array_verifyrange__H1Z14FOD_LIT_SERIAL_UiUi_PX01(uVar9,0x24);
        iVar4 = strcmp(str,"hand-spot");
        if (iVar4 == 0) goto LAB_001953e8;
        uVar2 = fl->all_lit_num;
      }
      uVar9 = (ulong)((int)uVar9 + 1);
      pFVar10 = (FOD_LIGHT *)((pFVar10->lit_serial).field0_0x0.m_aData + 1);
    } while ((long)uVar9 < (long)(int)uVar2);
  }
  return;
}

static u_int* FodGetFirstLight(FOD_LIGHT *fl, float *offset) {
	float cone_deg;
	float intens;
	int i;
	int lit_type;
	u_int *lit_addr;
	
  uint uVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  fixed_array<float[4],6> *pfVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  G3DLIGHT *pLight;
  uint *puVar9;
  float *pfVar10;
  
  uVar1 = fl->all_lit_num;
  puVar9 = fl->lit_top;
  pfVar5 = &fl->amb;
  iVar8 = 0;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(iVar8,6);
    (pfVar5->field0_0x0).m_aData[0] = 0.0;
    _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(iVar8,6);
    (pfVar5->field0_0x0).m_aData[1] = 0.0;
    _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(iVar8,6);
    (pfVar5->field0_0x0).m_aData[2] = 0.0;
                    /* end of inlined section */
    iVar7 = iVar8 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(iVar8,6);
    (pfVar5->field0_0x0).m_aData[3] = 0.0;
                    /* end of inlined section */
    pfVar5 = (fixed_array<float[4],6> *)(pfVar5->field0_0x0).m_aData[1];
    iVar8 = iVar7;
  } while (iVar7 < 6);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(0,6);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
  uVar2 = *(undefined8 *)(puVar9 + uVar1 * 8 + 0x14);
  fVar3 = (float)puVar9[uVar1 * 8 + 0x16];
  fVar4 = (float)puVar9[uVar1 * 8 + 0x17];
  (fl->amb).field0_0x0.m_aData[0] = (float)uVar2;
  (fl->amb).field0_0x0.m_aData[1] = (float)((ulong)uVar2 >> 0x20);
  (fl->amb).field0_0x0.m_aData[2] = fVar3;
  (fl->amb).field0_0x0.m_aData[3] = fVar4;
                    /* end of inlined section */
  iVar8 = 0;
  puVar9 = puVar9 + uVar1 * 8 + 0x18;
  if (0 < (int)fl->all_lit_num) {
    pfVar10 = (fl->all_lit).field0_0x0.m_aData[0].vPosition;
    pLight = (G3DLIGHT *)&fl->all_lit;
    do {
      iVar7 = FodGetLightType__FP9FOD_LIGHTi(fl,*puVar9);
      if (iVar7 == 1) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(iVar8,0x24);
        g3dutilSetLightDefault__FP8G3DLIGHT12G3DLIGHTTYPE(pLight,G3DLIGHT_DIRECTIONAL);
        _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(iVar8,0x24);
        uVar2 = *(undefined8 *)(puVar9 + 4);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
        fVar3 = (float)puVar9[6];
        fVar4 = (float)puVar9[7];
        pLight->vDiffuse[0] = (float)uVar2;
        pLight->vDiffuse[1] = (float)((ulong)uVar2 >> 0x20);
        pLight->vDiffuse[2] = fVar3;
        pLight->vDiffuse[3] = fVar4;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(iVar8,0x24);
        uVar2 = *(undefined8 *)(puVar9 + 4);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
        fVar3 = (float)puVar9[6];
        fVar4 = (float)puVar9[7];
        pLight->vSpecular[0] = (float)uVar2;
        pLight->vSpecular[1] = (float)((ulong)uVar2 >> 0x20);
        pLight->vSpecular[2] = fVar3;
        pLight->vSpecular[3] = fVar4;
        puVar9 = puVar9 + 0xc;
                    /* end of inlined section */
LAB_00195860:
        uVar1 = fl->all_lit_num;
      }
      else {
        if (1 < iVar7) {
          if (iVar7 == 2) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
            _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(iVar8,0x24);
            g3dutilSetLightDefault__FP8G3DLIGHT12G3DLIGHTTYPE(pLight,G3DLIGHT_SPOT);
            _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(iVar8,0x24);
            uVar2 = *(undefined8 *)(puVar9 + 4);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
            fVar3 = (float)puVar9[6];
            fVar4 = (float)puVar9[7];
            pLight->vDiffuse[0] = (float)uVar2;
            pLight->vDiffuse[1] = (float)((ulong)uVar2 >> 0x20);
            pLight->vDiffuse[2] = fVar3;
            pLight->vDiffuse[3] = fVar4;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
            _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(iVar8,0x24);
            uVar2 = *(undefined8 *)(puVar9 + 4);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
            fVar3 = (float)puVar9[6];
            fVar4 = (float)puVar9[7];
            pLight->vSpecular[0] = (float)uVar2;
            pLight->vSpecular[1] = (float)((ulong)uVar2 >> 0x20);
            pLight->vSpecular[2] = fVar3;
            pLight->vSpecular[3] = fVar4;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
            _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(iVar8,0x24);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
            uVar2 = *(undefined8 *)(puVar9 + 8);
            fVar3 = (float)puVar9[10];
            fVar4 = (float)puVar9[0xb];
            *pfVar10 = (float)uVar2;
            pfVar10[1] = (float)((ulong)uVar2 >> 0x20);
            pfVar10[2] = fVar3;
            pfVar10[3] = fVar4;
            pfVar6 = pLight->vDirection;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
            _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(iVar8,0x24);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
            uVar2 = *(undefined8 *)(puVar9 + 0xc);
            fVar3 = (float)puVar9[0xe];
            fVar4 = (float)puVar9[0xf];
            *pfVar6 = (float)uVar2;
            pLight->vDirection[1] = (float)((ulong)uVar2 >> 0x20);
            pLight->vDirection[2] = fVar3;
            pLight->vDirection[3] = fVar4;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
            fVar4 = 0.0;
            _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(iVar8,0x24);
            _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(iVar8,0x24);
            sceVu0ApplyMatrix(pfVar10,0x313e20,pfVar10);
            _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(iVar8,0x24);
            _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(iVar8,0x24);
            sceVu0ApplyMatrix(pfVar6,0x313e20,pfVar6);
            _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(iVar8,0x24);
            _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(iVar8,0x24);
            sceVu0AddVector(pfVar10,pfVar10,offset);
            _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(iVar8,0x24);
            _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(iVar8,0x24);
            sceVu0AddVector(pfVar6,pfVar6,offset);
                    /* end of inlined section */
            fVar3 = cosf(((float)puVar9[0x10] * DAT_003ee304) / 180.0);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
            _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(iVar8,0x24);
            gra3dSetLightIntens__FPC8G3DLIGHTf(pLight,fVar3 * fVar3);
            _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(iVar8,0x24);
            if (pLight->afPad0[0] < fVar4) {
              _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(iVar8,0x24);
              gra3dSetLightIntens__FPC8G3DLIGHTf(pLight,fVar4);
            }
            _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(iVar8,0x24);
                    /* end of inlined section */
            puVar9 = puVar9 + 0x14;
                    /* end of inlined section */
            pLight->fMaxRange = DAT_003ee308;
          }
          else {
            if (iVar7 != 3) goto LAB_00195858;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
            _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(iVar8,0x24);
            g3dutilSetLightDefault__FP8G3DLIGHT12G3DLIGHTTYPE(pLight,G3DLIGHT_POINT);
            _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(iVar8,0x24);
            uVar2 = *(undefined8 *)(puVar9 + 4);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
            fVar3 = (float)puVar9[6];
            fVar4 = (float)puVar9[7];
            pLight->vDiffuse[0] = (float)uVar2;
            pLight->vDiffuse[1] = (float)((ulong)uVar2 >> 0x20);
            pLight->vDiffuse[2] = fVar3;
            pLight->vDiffuse[3] = fVar4;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
            _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(iVar8,0x24);
            uVar2 = *(undefined8 *)(puVar9 + 4);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
            fVar3 = (float)puVar9[6];
            fVar4 = (float)puVar9[7];
            pLight->vSpecular[0] = (float)uVar2;
            pLight->vSpecular[1] = (float)((ulong)uVar2 >> 0x20);
            pLight->vSpecular[2] = fVar3;
            pLight->vSpecular[3] = fVar4;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
            _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(iVar8,0x24);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
            uVar2 = *(undefined8 *)(puVar9 + 8);
            fVar3 = (float)puVar9[10];
            fVar4 = (float)puVar9[0xb];
            *pfVar10 = (float)uVar2;
            pfVar10[1] = (float)((ulong)uVar2 >> 0x20);
            pfVar10[2] = fVar3;
            pfVar10[3] = fVar4;
            puVar9 = puVar9 + 0xc;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
            _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(iVar8,0x24);
            _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(iVar8,0x24);
            sceVu0ApplyMatrix(pfVar10,0x313e20,pfVar10);
            _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(iVar8,0x24);
            _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(iVar8,0x24);
            sceVu0AddVector(pfVar10,pfVar10,offset);
            _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(iVar8,0x24);
                    /* end of inlined section */
            pLight->fMaxRange = DAT_003ee30c;
          }
          goto LAB_00195860;
        }
        if (iVar7 != 0) {
LAB_00195858:
          printf("Warning!! Unknown Light Data.\n");
          goto LAB_00195860;
        }
        puVar9 = puVar9 + 8;
        printf("light type seek errer!!\n");
        uVar1 = fl->all_lit_num;
      }
      iVar8 = iVar8 + 1;
      pfVar10 = pfVar10 + 0x1c;
      pLight = pLight + 1;
    } while (iVar8 < (int)uVar1);
  }
  return puVar9;
}

static void Fodg3dSetLight(int iLightId, G3DLIGHT *pLight) {
	GRA3DLIGHTDATA *pGra3dLight;
	
  float *pfVar1;
  float *pfVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  G3DLIGHT *pGVar6;
  G3DLIGHT *pGVar7;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(iLightId,0x27);
  pGVar7 = pLight;
  pfVar1 = FodLight.vAmbient + iLightId * 0x1c + 4;
  do {
    pfVar2 = pfVar1;
    pGVar6 = pGVar7;
    uVar3 = *(undefined8 *)(pGVar6->vDiffuse + 2);
    uVar4 = *(undefined8 *)pGVar6->vSpecular;
    uVar5 = *(undefined8 *)(pGVar6->vSpecular + 2);
    *(undefined8 *)pfVar2 = *(undefined8 *)pGVar6->vDiffuse;
    *(undefined8 *)(pfVar2 + 2) = uVar3;
    *(undefined8 *)(((fixed_array<G3DLIGHT,39> *)(pfVar2 + 4))->field0_0x0).m_aData[0].vDiffuse =
         uVar4;
    *(undefined8 *)(pfVar2 + 6) = uVar5;
    pGVar7 = (G3DLIGHT *)pGVar6->vAmbient;
    pfVar1 = pfVar2 + 8;
  } while (pGVar7 != (G3DLIGHT *)&pLight->fMinRange);
  uVar3 = *(undefined8 *)(pGVar6->vAmbient + 2);
  *(undefined8 *)(pfVar2 + 8) = *(undefined8 *)pGVar7;
  *(undefined8 *)(pfVar2 + 10) = uVar3;
  _fixed_array_verifyrange__H1Z16GRA3DLIGHTSTATUS_UiUi_PX01(iLightId,0x27);
  FodLight.aStatus.field0_0x0.m_aData[iLightId].bEnable = 1;
  _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(iLightId,0x27);
  FodLight.vAmbient[iLightId * 0x1c + 0x13] = 1.0;
  return;
}

void FodSetMyLight(FOD_LIGHT *fl, char *pfx, float *eye) {
  FodChangeFodLightToGra3dLight__FP14GRA3DLIGHTDATAP9FOD_LIGHTPcPCf(&FodLight,fl,pfx,eye);
  gra3dSetAmbient__FPCf(FodLight.vAmbient);
  gra3dSetLightData__FPC14GRA3DLIGHTDATAPCf(&FodLight,(float *)0x0);
  return;
}

void FodChangeFodLightToGra3dLight(GRA3DLIGHTDATA *pGra3dLight, FOD_LIGHT *fl, char *pfx, float *eye) {
	static fixed_array<G3DLIGHT,3> ilight;
	static fixed_array<G3DLIGHT,3> slight;
	static fixed_array<G3DLIGHT,3> plight;
	FOD_LIT_SERIAL *fls;
	G3DLIGHT *org;
	int i;
	int il_num;
	int sl_num;
	int pl_num;
	int get_light_flg;
	
  char cVar1;
  uchar uVar2;
  bool bVar3;
  undefined8 *puVar4;
  fixed_array<G3DLIGHT,36> *pfVar5;
  int iVar6;
  fixed_array<G3DLIGHT,36> *pfVar7;
  size_t __n;
  undefined8 *puVar8;
  G3DLIGHTTYPE iLightType;
  float (*pafVar9) [4];
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  char *__s1;
  fixed_array<GRA3DLIGHTSTATUS,39> *pfVar15;
  int iVar16;
  uint uVar17;
  fixed_array<G3DLIGHT,36> *pfVar18;
  G3DLIGHT *pGVar19;
  FOD_LIGHT *pFVar20;
  uint num;
  undefined4 *puVar21;
  int iVar22;
  int il_num;
  int pl_num;
  undefined4 *local_70;
  int local_6c;
  undefined4 *local_68;
  int local_64;
  int local_60;
  
  if (__tmp_10_1094 == 0) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    __tmp_10_1094 = 1;
  }
                    /* end of inlined section */
  if (__tmp_11_1096 == 0) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    __tmp_11_1096 = 1;
                    /* end of inlined section */
  }
  if (__tmp_12_1098 == 0) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    __tmp_12_1098 = 1;
  }
  _fixed_array_verifyrange__H1Z14FOD_LIT_SERIAL_UiUi_PX01(0,0x24,pfx,eye);
  pfVar18 = &fl->all_lit;
  _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(0,0x24);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  il_num = 0;
  iVar16 = 0;
  pl_num = 0;
  num = 0;
  if (0 < (int)fl->all_lit_num) {
    local_70 = &DAT_004af290;
    local_6c = 0;
    local_68 = &DAT_004aeff0;
    puVar21 = &DAT_004af140;
    local_64 = 0;
    iVar22 = 0;
    local_60 = 0;
    pFVar20 = fl;
    do {
      bVar3 = false;
      if (fl->hand_spot_no == iVar16) {
        if ((int)num < 3) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
          _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(num,3);
          pfVar5 = pfVar18;
          puVar4 = (undefined8 *)((int)&slight_1095 + iVar22);
          do {
            puVar8 = puVar4;
            pfVar7 = pfVar5;
            uVar12 = *(undefined8 *)((pfVar7->field0_0x0).m_aData[0].vDiffuse + 2);
            uVar13 = *(undefined8 *)(pfVar7->field0_0x0).m_aData[0].vSpecular;
            uVar14 = *(undefined8 *)((pfVar7->field0_0x0).m_aData[0].vSpecular + 2);
            *puVar8 = *(undefined8 *)(pfVar7->field0_0x0).m_aData[0].vDiffuse;
            puVar8[1] = uVar12;
            puVar8[2] = uVar13;
            puVar8[3] = uVar14;
            pfVar5 = (fixed_array<G3DLIGHT,36> *)(pfVar7->field0_0x0).m_aData[0].vAmbient;
            puVar4 = puVar8 + 4;
          } while (pfVar5 != (fixed_array<G3DLIGHT,36> *)&(pfVar18->field0_0x0).m_aData[0].fMinRange
                  );
          uVar12 = *(undefined8 *)((pfVar7->field0_0x0).m_aData[0].vAmbient + 2);
          puVar8[4] = *(undefined8 *)pfVar5;
                    /* end of inlined section */
          iVar22 = iVar22 + 0x70;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
          puVar8[5] = uVar12;
          _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(num,3);
          *puVar21 = 2;
                    /* end of inlined section */
          puVar21 = puVar21 + 0x1c;
          local_60 = local_60 + 0x70;
          num = num + 1;
        }
      }
      else {
        __s1 = (pFVar20->lit_serial).field0_0x0.m_aData[0].light_name;
        __n = strlen(pfx);
        iVar6 = strncmp(__s1,pfx,__n);
        if (iVar6 == 0) {
          bVar3 = true;
        }
        else if (*pfx != 'c') {
          iVar6 = strncmp(__s1,&DAT_003f0938,4);
          bVar3 = iVar6 == 0;
        }
      }
      if (bVar3) {
        uVar2 = (pFVar20->lit_serial).field0_0x0.m_aData[0].light_type;
        if (uVar2 != '\x01') {
          if (uVar2 == '\x02') {
            if (2 < (int)num) {
              uVar17 = fl->all_lit_num;
              goto LAB_00195e1c;
            }
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
            _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(num,3);
            pfVar5 = pfVar18;
            puVar4 = (undefined8 *)((int)&slight_1095 + local_60);
            do {
              puVar8 = puVar4;
              pfVar7 = pfVar5;
              uVar13 = *(undefined8 *)((pfVar7->field0_0x0).m_aData[0].vDiffuse + 2);
              uVar14 = *(undefined8 *)(pfVar7->field0_0x0).m_aData[0].vSpecular;
              uVar12 = *(undefined8 *)((pfVar7->field0_0x0).m_aData[0].vSpecular + 2);
              *puVar8 = *(undefined8 *)(pfVar7->field0_0x0).m_aData[0].vDiffuse;
              puVar8[1] = uVar13;
              puVar8[2] = uVar14;
              puVar8[3] = uVar12;
              pfVar5 = (fixed_array<G3DLIGHT,36> *)(pfVar7->field0_0x0).m_aData[0].vAmbient;
              puVar4 = puVar8 + 4;
            } while (pfVar5 != (fixed_array<G3DLIGHT,36> *)
                               &(pfVar18->field0_0x0).m_aData[0].fMinRange);
            uVar12 = *(undefined8 *)((pfVar7->field0_0x0).m_aData[0].vAmbient + 2);
            puVar8[4] = *(undefined8 *)pfVar5;
                    /* end of inlined section */
            iVar22 = iVar22 + 0x70;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
            puVar8[5] = uVar12;
            _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(num,3);
            *puVar21 = 2;
                    /* end of inlined section */
            puVar21 = puVar21 + 0x1c;
            local_60 = local_60 + 0x70;
            num = num + 1;
          }
          else if (uVar2 == '\x03') {
            if (2 < pl_num) {
              uVar17 = fl->all_lit_num;
              goto LAB_00195e1c;
            }
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
            _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(pl_num,3);
            pfVar5 = pfVar18;
            puVar4 = (undefined8 *)(&plight_1097 + local_6c);
            do {
              puVar8 = puVar4;
              pfVar7 = pfVar5;
              uVar13 = *(undefined8 *)((pfVar7->field0_0x0).m_aData[0].vDiffuse + 2);
              uVar14 = *(undefined8 *)(pfVar7->field0_0x0).m_aData[0].vSpecular;
              uVar12 = *(undefined8 *)((pfVar7->field0_0x0).m_aData[0].vSpecular + 2);
              *puVar8 = *(undefined8 *)(pfVar7->field0_0x0).m_aData[0].vDiffuse;
              puVar8[1] = uVar13;
              puVar8[2] = uVar14;
              puVar8[3] = uVar12;
              pfVar5 = (fixed_array<G3DLIGHT,36> *)(pfVar7->field0_0x0).m_aData[0].vAmbient;
              puVar4 = puVar8 + 4;
            } while (pfVar5 != (fixed_array<G3DLIGHT,36> *)
                               &(pfVar18->field0_0x0).m_aData[0].fMinRange);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
            uVar12 = *(undefined8 *)((pfVar7->field0_0x0).m_aData[0].vAmbient + 2);
            puVar8[4] = *(undefined8 *)pfVar5;
            puVar8[5] = uVar12;
            _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(pl_num,3);
            *local_70 = 1;
                    /* end of inlined section */
            local_70 = local_70 + 0x1c;
            local_6c = local_6c + 0x70;
            pl_num = pl_num + 1;
          }
          else {
            printf("Warning!! Unknown My Light Type.\n");
          }
          goto LAB_00195e18;
        }
        if (il_num < 3) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
          _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(il_num,3);
          pfVar5 = pfVar18;
          puVar4 = (undefined8 *)(&ilight_1093 + local_64);
          do {
            puVar8 = puVar4;
            pfVar7 = pfVar5;
            uVar12 = *(undefined8 *)((pfVar7->field0_0x0).m_aData[0].vDiffuse + 2);
            uVar13 = *(undefined8 *)(pfVar7->field0_0x0).m_aData[0].vSpecular;
            uVar14 = *(undefined8 *)((pfVar7->field0_0x0).m_aData[0].vSpecular + 2);
            *puVar8 = *(undefined8 *)(pfVar7->field0_0x0).m_aData[0].vDiffuse;
            puVar8[1] = uVar12;
            puVar8[2] = uVar13;
            puVar8[3] = uVar14;
            pfVar5 = (fixed_array<G3DLIGHT,36> *)(pfVar7->field0_0x0).m_aData[0].vAmbient;
            puVar4 = puVar8 + 4;
          } while (pfVar5 != (fixed_array<G3DLIGHT,36> *)&(pfVar18->field0_0x0).m_aData[0].fMinRange
                  );
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
          uVar12 = *(undefined8 *)((pfVar7->field0_0x0).m_aData[0].vAmbient + 2);
          puVar8[4] = *(undefined8 *)pfVar5;
          puVar8[5] = uVar12;
          _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(il_num,3);
          *local_68 = 0;
                    /* end of inlined section */
          local_68 = local_68 + 0x1c;
          local_64 = local_64 + 0x70;
          il_num = il_num + 1;
          goto LAB_00195e18;
        }
        uVar17 = fl->all_lit_num;
      }
      else {
LAB_00195e18:
        uVar17 = fl->all_lit_num;
      }
LAB_00195e1c:
      iVar16 = iVar16 + 1;
      pFVar20 = (FOD_LIGHT *)((pFVar20->lit_serial).field0_0x0.m_aData + 1);
      pfVar18 = (fixed_array<G3DLIGHT,36> *)((pfVar18->field0_0x0).m_aData + 1);
    } while (iVar16 < (int)uVar17);
  }
  uVar17 = 0;
  pGVar19 = (G3DLIGHT *)&pGra3dLight->aLight;
  pfVar15 = &pGra3dLight->aStatus;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z16GRA3DLIGHTSTATUS_UiUi_PX01(uVar17,0x27);
    (pfVar15->field0_0x0).m_aData[0].bEnable = 0;
    _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(uVar17,0x27);
                    /* inlined from ../../graphics/graph3d/gra3dTypes.h */
    iLightType = G3DLIGHT_DIRECTIONAL;
    if (((2 < uVar17) && (iLightType = G3DLIGHT_POINT, 0x12 < uVar17 - 3)) &&
       (iLightType = G3DLIGHT_SPOT, 0x10 < uVar17 - 0x16)) {
      iLightType = G3DLIGHTTYPE_FORCE_DWORD;
    }
    uVar17 = uVar17 + 1;
    g3dutilSetLightDefault__FP8G3DLIGHT12G3DLIGHTTYPE(pGVar19,iLightType);
                    /* end of inlined section */
    pGVar19 = pGVar19 + 1;
    pfVar15 = (fixed_array<GRA3DLIGHTSTATUS,39> *)((pfVar15->field0_0x0).m_aData + 1);
  } while ((int)uVar17 < 0x27);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(0,6);
  uVar12 = *(undefined8 *)(fl->amb).field0_0x0.m_aData;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
  fVar10 = (fl->amb).field0_0x0.m_aData[2];
  fVar11 = (fl->amb).field0_0x0.m_aData[3];
  pGra3dLight->vAmbient[0] = (float)uVar12;
  pGra3dLight->vAmbient[1] = (float)((ulong)uVar12 >> 0x20);
  pGra3dLight->vAmbient[2] = fVar10;
  pGra3dLight->vAmbient[3] = fVar11;
                    /* end of inlined section */
  cVar1 = *pfx;
  if (cVar1 == 'c') {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(1,6);
    pafVar9 = (fl->amb).field0_0x0.m_aData[1];
  }
  else {
                    /* end of inlined section */
    if (cVar1 == 'r') {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(2,6);
      pafVar9 = (fl->amb).field0_0x0.m_aData[2];
    }
    else {
                    /* end of inlined section */
      if (cVar1 == 'f') {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(3,6);
        pafVar9 = (fl->amb).field0_0x0.m_aData[3];
      }
      else {
                    /* end of inlined section */
        if (cVar1 != 'd') {
                    /* end of inlined section */
          if (cVar1 == 'i') {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
            _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(5,6);
            sceVu0AddVector(pGra3dLight,pGra3dLight,(fl->amb).field0_0x0.m_aData[5]);
                    /* end of inlined section */
          }
          goto LAB_00195f90;
        }
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(4,6);
        pafVar9 = (fl->amb).field0_0x0.m_aData[4];
      }
    }
  }
  sceVu0AddVector(pGra3dLight,pGra3dLight,pafVar9);
LAB_00195f90:
  if ((0 < il_num) && (iVar16 = 0, 0 < il_num)) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    pGVar19 = (G3DLIGHT *)&ilight_1093;
    do {
      _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(iVar16,3);
      Fodg3dSetLight__FiPC8G3DLIGHT(iVar16,pGVar19);
                    /* end of inlined section */
      iVar16 = iVar16 + 1;
      pGVar19 = pGVar19 + 1;
    } while (iVar16 < il_num);
  }
  if ((0 < pl_num) && (iVar16 = 0, 0 < pl_num)) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    pGVar19 = (G3DLIGHT *)&plight_1097;
    do {
      _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(iVar16,3);
      Fodg3dSetLight__FiPC8G3DLIGHT(iVar16 + 3,pGVar19);
                    /* end of inlined section */
      iVar16 = iVar16 + 1;
      pGVar19 = pGVar19 + 1;
    } while (iVar16 < pl_num);
  }
  if (0 < (int)num) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(0,3);
    FodSetSpotLights__FP8G3DLIGHTUi((G3DLIGHT *)&slight_1095,num);
  }
  return;
}

void FodSetSpotLights(G3DLIGHT *sl, u_int num) {
	u_int i;
	
  int iLightId;
  float *pfVar1;
  uint uVar2;
  
  if ((sl != (G3DLIGHT *)0x0) && (uVar2 = 0, num != 0)) {
    pfVar1 = sl->vDirection;
    do {
      sl->vPosition[3] = 1.0;
      sceVu0SubVector(pfVar1,sl->vPosition,pfVar1);
      sceVu0Normalize(pfVar1,pfVar1);
      iLightId = uVar2 + 0x16;
      uVar2 = uVar2 + 1;
      Fodg3dSetLight__FiPC8G3DLIGHT(iLightId,sl);
      pfVar1 = sl[1].vDirection;
      sl = sl + 1;
    } while (uVar2 < num);
  }
  return;
}

void FodGetToSgLight(FOD_LIGHT *pFodLignt, FOD_LIT_FRAME *pFodLitFrame, float *offset) {
	int i;
	u_int *lit_addr;
	float *data;
	
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint *puVar9;
  float fVar10;
  float fVar11;
  float *pfVar12;
  FOD_LIT_FRAME *pFVar13;
  G3DLIGHT *pLight;
  FOD_LIT_FRAME *pFVar14;
  int iVar15;
  FOD_LIGHT *pFVar16;
  
  pFVar14 = pFodLitFrame + 1;
  iVar15 = 0;
  if (0 < (int)pFodLignt->all_lit_num) {
    pLight = (G3DLIGHT *)&pFodLignt->all_lit;
    pFVar16 = pFodLignt;
    do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z14FOD_LIT_SERIAL_UiUi_PX01(iVar15,0x24);
      if ((pFVar16->lit_serial).field0_0x0.m_aData[0].anm_flg == '\x01') {
        _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(iVar15,0x24);
                    /* end of inlined section */
        uVar2 = pFVar14->size;
        pFVar13 = pFVar14 + 1;
        if (uVar2 == 2) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
          _fixed_array_verifyrange__H1ZUc_UiUi_PX01(0,8);
          if (*(char *)pFVar14->pad != '\0') {
            uVar4._0_4_ = pFVar13->frame;
            uVar4._4_4_ = pFVar13->size;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
            fVar10 = (float)pFVar14[1].pad[0];
            fVar11 = (float)pFVar14[1].pad[1];
            pLight->vDiffuse[0] = (float)uVar4;
            pLight->vDiffuse[1] = (float)((ulong)uVar4 >> 0x20);
            pLight->vDiffuse[2] = fVar10;
            pLight->vDiffuse[3] = fVar11;
            fVar10 = pLight->vDiffuse[2];
            fVar11 = pLight->vDiffuse[3];
            pLight->vSpecular[0] = (float)*(undefined8 *)pLight->vDiffuse;
            pLight->vSpecular[1] = (float)((ulong)*(undefined8 *)pLight->vDiffuse >> 0x20);
            pLight->vSpecular[2] = fVar10;
            pLight->vSpecular[3] = fVar11;
                    /* end of inlined section */
            pFVar13 = pFVar14 + 2;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
          }
          _fixed_array_verifyrange__H1ZUc_UiUi_PX01(1,8);
          pfVar12 = pLight->vPosition;
          if (*(char *)((int)pFVar14->pad + 1) != '\0') {
            uVar5._0_4_ = pFVar13->frame;
            uVar5._4_4_ = pFVar13->size;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
            fVar10 = (float)pFVar13->pad[0];
            fVar11 = (float)pFVar13->pad[1];
            *pfVar12 = (float)uVar5;
            pLight->vPosition[1] = (float)((ulong)uVar5 >> 0x20);
            pLight->vPosition[2] = fVar10;
            pLight->vPosition[3] = fVar11;
            pFVar13 = pFVar13 + 1;
                    /* end of inlined section */
            sceVu0ApplyMatrix(pfVar12,0x313e20,pfVar12);
            sceVu0AddVector(pfVar12,pfVar12,offset);
          }
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
          _fixed_array_verifyrange__H1ZUc_UiUi_PX01(2,8);
          pfVar12 = pLight->vDirection;
          if (*(char *)((int)pFVar14->pad + 2) != '\0') {
            uVar6._0_4_ = pFVar13->frame;
            uVar6._4_4_ = pFVar13->size;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
            fVar10 = (float)pFVar13->pad[0];
            fVar11 = (float)pFVar13->pad[1];
            *pfVar12 = (float)uVar6;
            pLight->vDirection[1] = (float)((ulong)uVar6 >> 0x20);
            pLight->vDirection[2] = fVar10;
            pLight->vDirection[3] = fVar11;
            pFVar13 = pFVar13 + 1;
                    /* end of inlined section */
            sceVu0ApplyMatrix(pfVar12,0x313e20,pfVar12);
            sceVu0AddVector(pfVar12,pfVar12,offset);
          }
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
          _fixed_array_verifyrange__H1ZUc_UiUi_PX01(3,8);
          puVar9 = pFVar14->pad;
          pFVar14 = pFVar13;
          if (*(char *)((int)puVar9 + 3) != '\0') {
                    /* end of inlined section */
            fVar10 = cosf(((float)pFVar13->frame * DAT_003ee310) / 180.0);
            gra3dSetLightIntens__FPC8G3DLIGHTf(pLight,fVar10 * fVar10);
            pFVar14 = pFVar13 + 1;
          }
        }
        else {
          if (uVar2 < 3) {
            if (uVar2 == 1) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
              _fixed_array_verifyrange__H1ZUc_UiUi_PX01(0,8);
              if (*(char *)pFVar14->pad != '\0') {
                uVar3._0_4_ = pFVar13->frame;
                uVar3._4_4_ = pFVar13->size;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
                fVar10 = (float)pFVar14[1].pad[0];
                fVar11 = (float)pFVar14[1].pad[1];
                pLight->vDiffuse[0] = (float)uVar3;
                pLight->vDiffuse[1] = (float)((ulong)uVar3 >> 0x20);
                pLight->vDiffuse[2] = fVar10;
                pLight->vDiffuse[3] = fVar11;
                fVar10 = pLight->vDiffuse[2];
                fVar11 = pLight->vDiffuse[3];
                pLight->vSpecular[0] = (float)*(undefined8 *)pLight->vDiffuse;
                pLight->vSpecular[1] = (float)((ulong)*(undefined8 *)pLight->vDiffuse >> 0x20);
                pLight->vSpecular[2] = fVar10;
                pLight->vSpecular[3] = fVar11;
                    /* end of inlined section */
                pFVar13 = pFVar14 + 2;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
              }
              _fixed_array_verifyrange__H1ZUc_UiUi_PX01(2,8);
              cVar1 = *(char *)((int)pFVar14->pad + 2);
              pfVar12 = pLight->vDirection;
              pFVar14 = pFVar13;
joined_r0x00196384:
              if (cVar1 != '\0') {
                uVar8._0_4_ = pFVar14->frame;
                uVar8._4_4_ = pFVar14->size;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
                fVar10 = (float)pFVar14->pad[0];
                fVar11 = (float)pFVar14->pad[1];
                *pfVar12 = (float)uVar8;
                pfVar12[1] = (float)((ulong)uVar8 >> 0x20);
                pfVar12[2] = fVar10;
                pfVar12[3] = fVar11;
                    /* end of inlined section */
                sceVu0ApplyMatrix(pfVar12,0x313e20,pfVar12);
                sceVu0AddVector(pfVar12,pfVar12,offset);
                pFVar14 = pFVar14 + 1;
              }
              goto LAB_001963cc;
            }
          }
          else if (uVar2 == 3) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
            _fixed_array_verifyrange__H1ZUc_UiUi_PX01(0,8);
            if (*(char *)pFVar14->pad != '\0') {
              uVar7._0_4_ = pFVar13->frame;
              uVar7._4_4_ = pFVar13->size;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
              fVar10 = (float)pFVar14[1].pad[0];
              fVar11 = (float)pFVar14[1].pad[1];
              pLight->vDiffuse[0] = (float)uVar7;
              pLight->vDiffuse[1] = (float)((ulong)uVar7 >> 0x20);
              pLight->vDiffuse[2] = fVar10;
              pLight->vDiffuse[3] = fVar11;
              fVar10 = pLight->vDiffuse[2];
              fVar11 = pLight->vDiffuse[3];
              pLight->vSpecular[0] = (float)*(undefined8 *)pLight->vDiffuse;
              pLight->vSpecular[1] = (float)((ulong)*(undefined8 *)pLight->vDiffuse >> 0x20);
              pLight->vSpecular[2] = fVar10;
              pLight->vSpecular[3] = fVar11;
                    /* end of inlined section */
              pFVar13 = pFVar14 + 2;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
            }
            _fixed_array_verifyrange__H1ZUc_UiUi_PX01(1,8);
            cVar1 = *(char *)((int)pFVar14->pad + 1);
            pfVar12 = pLight->vPosition;
            pFVar14 = pFVar13;
            goto joined_r0x00196384;
          }
          printf("Warning!!  Unknown Light Type.\n");
          pFVar14 = pFVar13;
        }
LAB_001963cc:
        uVar2 = pFodLignt->all_lit_num;
      }
      else {
        uVar2 = pFodLignt->all_lit_num;
      }
      iVar15 = iVar15 + 1;
      pLight = pLight + 1;
      pFVar16 = (FOD_LIGHT *)((pFVar16->lit_serial).field0_0x0.m_aData + 1);
    } while (iVar15 < (int)uVar2);
  }
  return;
}

void FodGetDropSpotPos(FOD_LIGHT *fl, char *pfx, float *lp, float *li) {
	FOD_LIT_SERIAL *fls;
	int i;
	int no;
	float *pv1;
	
  undefined8 uVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  iVar6 = 0;
  iVar7 = -1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z14FOD_LIT_SERIAL_UiUi_PX01(0,0x24);
                    /* end of inlined section */
  iVar5 = 0;
  if (0 < (int)fl->all_lit_num) {
    do {
      _fixed_array_verifyrange__H1Z14FOD_LIT_SERIAL_UiUi_PX01(iVar6,0x24);
                    /* end of inlined section */
      iVar2 = strncmp(pfx,(fl->lit_serial).field0_0x0.m_aData[0].light_name + iVar5,4);
      if ((iVar2 == 0) &&
         (iVar5 = strncmp("drop_spot",(fl->lit_serial).field0_0x0.m_aData[0].light_name + iVar5 + 5,
                          9), iVar5 == 0)) {
        iVar7 = iVar6;
      }
      iVar6 = iVar6 + 1;
      iVar5 = iVar6 * 0x20;
    } while (iVar6 < (int)fl->all_lit_num);
  }
  if (-1 < iVar7) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(iVar7,0x24);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
    uVar1 = *(undefined8 *)(fl->all_lit).field0_0x0.m_aData[iVar7].vPosition;
    fVar3 = (fl->all_lit).field0_0x0.m_aData[iVar7].vPosition[2];
    fVar4 = (fl->all_lit).field0_0x0.m_aData[iVar7].vPosition[3];
    *lp = (float)uVar1;
    lp[1] = (float)((ulong)uVar1 >> 0x20);
    lp[2] = fVar3;
    lp[3] = fVar4;
    uVar1 = *(undefined8 *)(fl->all_lit).field0_0x0.m_aData[iVar7].vDirection;
    fVar3 = (fl->all_lit).field0_0x0.m_aData[iVar7].vDirection[2];
    fVar4 = (fl->all_lit).field0_0x0.m_aData[iVar7].vDirection[3];
    *li = (float)uVar1;
    li[1] = (float)((ulong)uVar1 >> 0x20);
    li[2] = fVar3;
    li[3] = fVar4;
    return;
  }
  printf("Can\'t Get Drop Spot!!\n");
  return;
}

static int FodGetLightType(FOD_LIGHT *fl, int id) {
	int i;
	int ret_type;
	
  FOD_LIGHT *pFVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = 0;
  uVar4 = 0;
  pFVar1 = fl;
  if (0 < (int)fl->all_lit_num) {
    do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z14FOD_LIT_SERIAL_UiUi_PX01(iVar2,0x24);
      iVar3 = iVar2 + 1;
      if ((uint)(pFVar1->lit_serial).field0_0x0.m_aData[0].light_no == id) {
        _fixed_array_verifyrange__H1Z14FOD_LIT_SERIAL_UiUi_PX01(iVar2,0x24);
        uVar4 = (uint)(pFVar1->lit_serial).field0_0x0.m_aData[0].light_type;
      }
                    /* end of inlined section */
      pFVar1 = (FOD_LIGHT *)((pFVar1->lit_serial).field0_0x0.m_aData + 1);
      iVar2 = iVar3;
    } while (iVar3 < (int)fl->all_lit_num);
  }
  return uVar4;
}

void FodGetFirstCam(FOD_CAMERA_DATA *pFodCam, FOD_CTRL *pFodCtrl, float *offset) {
	FOD_FIRST_CAM *pFodFirst;
	
  FOD_FILE_HDR *pFVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  float fVar7;
  
  pFVar1 = pFodCtrl->cam_file_hdr;
  uVar2._0_4_ = pFVar1[1].file_id;
  uVar2._4_4_ = pFVar1[1].version;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
  fVar4 = (float)pFVar1[1].reso;
  fVar5 = (float)pFVar1[1].frame;
  pFodCam->vPosition[0] = (float)uVar2;
  pFodCam->vPosition[1] = (float)((ulong)uVar2 >> 0x20);
  pFodCam->vPosition[2] = fVar4;
  pFodCam->vPosition[3] = fVar5;
  pfVar6 = pFodCam->vTarget;
  uVar3._0_4_ = pFVar1[2].file_id;
  uVar3._4_4_ = pFVar1[2].version;
  fVar4 = (float)pFVar1[2].reso;
  fVar5 = (float)pFVar1[2].frame;
  *pfVar6 = (float)uVar3;
  pFodCam->vTarget[1] = (float)((ulong)uVar3 >> 0x20);
  pFodCam->vTarget[2] = fVar4;
  pFodCam->vTarget[3] = fVar5;
  fVar4 = DAT_003ee314;
                    /* end of inlined section */
  pFodCam->fRoll = (float)pFVar1[3].file_id * DAT_003ee314;
  sceVu0ApplyMatrix(pFodCam,0x313e20,pFodCam);
  sceVu0ApplyMatrix(pfVar6,0x313e20,pfVar6);
  sceVu0AddVector(pFodCam,pFodCam,offset);
  sceVu0AddVector(pfVar6,pfVar6,offset);
  fVar5 = DAT_003ee318;
  if (DAT_003ee318 < pFodCam->fRoll) {
    pFodCam->fRoll = pFodCam->fRoll - DAT_003ee31c;
    fVar7 = pFVar1[3].version;
  }
  else {
    fVar7 = pFVar1[3].version;
  }
  fVar7 = fVar7 * fVar4;
  pFodCam->fFov = fVar7;
  if (fVar5 < fVar7) {
    pFodCam->fFov = fVar7 - DAT_003ee320;
  }
  pFodCam->fNearZ = (float)pFVar1[3].reso;
  pFodCam->fFarZ = (float)pFVar1[3].frame;
  return;
}

void FodGetCamData(FOD_CAMERA_DATA *pFodCam, FOD_CAM_FRAME *pFodCamFrame, float *offset) {
	float CamPos[4];
	float CamTgt[4];
	float CamRoll;
	float *fdat;
	int i;
	
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint *puVar4;
  FOD_CAM_FRAME *pFVar5;
  int iVar6;
  float fVar7;
  float CamPos [4];
  float CamTgt [4];
  
  pFVar5 = pFodCamFrame + 1;
  iVar6 = 0;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  do {
    _fixed_array_verifyrange__H1ZUc_UiUi_PX01(iVar6,8);
    if ((pFodCamFrame->anm).field0_0x0.m_aData[iVar6] != '\x01') goto switchD_00196780_caseD_6;
                    /* end of inlined section */
    switch(iVar6) {
    case 0:
      uVar2._0_4_ = pFVar5->frame;
      uVar2._4_4_ = pFVar5->size;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
      CamPos[2] = *(float *)(pFVar5->anm).field0_0x0.m_aData;
      CamPos[3] = *(float *)((pFVar5->anm).field0_0x0.m_aData + 4);
      CamPos[0] = (float)uVar2;
      CamPos[1] = (float)((ulong)uVar2 >> 0x20);
                    /* end of inlined section */
      sceVu0ApplyMatrix(CamPos,0x313e20,CamPos);
      sceVu0AddVector(CamPos,CamPos,offset);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
      pFodCam->vPosition[0] = CamPos[0];
      pFodCam->vPosition[1] = CamPos[1];
      pFodCam->vPosition[2] = CamPos[2];
      pFodCam->vPosition[3] = CamPos[3];
      pFVar5 = pFVar5 + 1;
                    /* end of inlined section */
      break;
    case 1:
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
      uVar3._0_4_ = pFVar5->frame;
      uVar3._4_4_ = pFVar5->size;
      CamTgt[2] = *(float *)(pFVar5->anm).field0_0x0.m_aData;
      CamTgt[3] = *(float *)((pFVar5->anm).field0_0x0.m_aData + 4);
      CamTgt[0] = (float)uVar3;
      CamTgt[1] = (float)((ulong)uVar3 >> 0x20);
                    /* end of inlined section */
      sceVu0ApplyMatrix(CamTgt,0x313e20,CamTgt);
      sceVu0AddVector(CamTgt,CamTgt,offset);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
      pFodCam->vTarget[0] = CamTgt[0];
      pFodCam->vTarget[1] = CamTgt[1];
      pFodCam->vTarget[2] = CamTgt[2];
      pFodCam->vTarget[3] = CamTgt[3];
      pFVar5 = pFVar5 + 1;
                    /* end of inlined section */
      break;
    case 2:
      fVar7 = ((float)pFVar5->frame * DAT_003ee324) / 180.0;
      if (DAT_003ee324 < fVar7) {
        pFodCam->fRoll = fVar7 - DAT_003ee328;
      }
      else {
        pFodCam->fRoll = fVar7;
      }
      goto LAB_00196848;
    case 3:
      fVar7 = (float)pFVar5->frame * DAT_003ee32c;
      bVar1 = DAT_003ee330 < fVar7;
      pFodCam->fFov = fVar7;
      if (bVar1) {
        pFodCam->fFov = fVar7 - DAT_003ee334;
      }
LAB_00196848:
      pFVar5 = (FOD_CAM_FRAME *)&pFVar5->size;
      break;
    case 4:
      puVar4 = &pFVar5->frame;
      pFVar5 = (FOD_CAM_FRAME *)&pFVar5->size;
      pFodCam->fNearZ = (float)*puVar4;
      break;
    case 5:
      puVar4 = &pFVar5->frame;
      pFVar5 = (FOD_CAM_FRAME *)&pFVar5->size;
      pFodCam->fFarZ = (float)*puVar4;
    }
switchD_00196780_caseD_6:
    iVar6 = iVar6 + 1;
    if (5 < iVar6) {
      return;
    }
  } while( true );
}

static u_int* FodGetFixEffect(u_int *tep) {
	FOD_EFF_DATA *fed;
	u_int i;
	
  uint uVar1;
  uint *puVar2;
  FOD_EFF_DATA *pFVar3;
  uint uVar4;
  FOD_EFF_PARAM *pFVar5;
  
  if (tep[3] == 0) {
    puVar2 = tep + 4;
    eff_param.fix_eff_num = 0;
  }
  else {
    pFVar5 = &eff_param;
    memset(&eff_param,0,0x80);
    pFVar3 = (FOD_EFF_DATA *)(tep + 8);
    uVar1 = tep[4];
    uVar4 = 0;
    eff_param.pdf_p = (void *)0x0;
    eff_param.fix_eff_num = uVar1;
    if (uVar1 != 0) {
      do {
        uVar4 = uVar4 + 1;
        pFVar5->fix[0] = pFVar3;
        pFVar3 = pFVar3 + 1;
        pFVar5 = (FOD_EFF_PARAM *)(pFVar5->fix + 1);
      } while (uVar4 < uVar1);
    }
    puVar2 = tep + 4 + eff_param.fix_eff_num * 4 + 4;
  }
  return puVar2;
}

GRA3DLIGHTDATA* FodGetGra3DLight() {
  return &FodLight;
}

FOD_LIT_SERIAL* FOD_LIT_SERIAL * _fixed_array_verifyrange<FOD_LIT_SERIAL>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

float*[4] float [3] * _fixed_array_verifyrange<float [3]>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

G3DLIGHT* G3DLIGHT * _fixed_array_verifyrange<G3DLIGHT>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

GRA3DLIGHTSTATUS* GRA3DLIGHTSTATUS * _fixed_array_verifyrange<GRA3DLIGHTSTATUS>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

u_char* unsigned char * _fixed_array_verifyrange<unsigned char>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  return;
}

type_info& FOD_LIT_SERIAL type_info function() {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

type_info& float [3] type_info function() {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

type_info& G3DLIGHT type_info function() {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

type_info& GRA3DLIGHTSTATUS type_info function() {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

static void global constructors keyed to FodLight() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
