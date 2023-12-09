// STATUS: NOT STARTED

#include "MapSky.h"

struct fixed_array_base<unsigned int,12,unsigned int[12]> {
protected:
	u_int m_aData[12];
	
public:
	fixed_array_base<unsigned int,12,unsigned int[12]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	u_int& operator[]();
	u_int& operator[]();
	u_int* data();
	u_int* begin();
	u_int* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<unsigned int,12> : fixed_array_base<unsigned int,12,unsigned int[12]> {
};

static MAP_SKY_DB MapSkyDatList[18] = {
	/* [0] = */ {
		/* .len = */ 3100.f,
		/* .speed = */ 1.09999895f,
		/* .offset_y = */ 0.f,
		/* .offset_y2 = */ -75,
		/* .move_y = */ 255,
		/* .scale = */ 1.91999793f,
		/* .fog_r = */ 37,
		/* .fog_g = */ 55,
		/* .fog_b = */ 51,
		/* .fog_al = */ 75,
		/* .sky_stat = */ {
			/* [0] = */ {
				/* .hight = */ -3000.f,
				/* .scale_min = */ 1.f,
				/* .scale_max = */ 1.f,
				/* .scale_now = */ 0.f,
				/* .frame_now = */ 0,
				/* .frame = */ 0,
				/* .fr = */ 128,
				/* .fg = */ 128,
				/* .fb = */ 128,
				/* .fa = */ 96
			},
			/* [1] = */ {
				/* .hight = */ -3000.f,
				/* .scale_min = */ 3.5f,
				/* .scale_max = */ 1.f,
				/* .scale_now = */ 0.f,
				/* .frame_now = */ 0,
				/* .frame = */ 2029,
				/* .fr = */ 121,
				/* .fg = */ 122,
				/* .fb = */ 106,
				/* .fa = */ 120
			},
			/* [2] = */ {
				/* .hight = */ -3000.f,
				/* .scale_min = */ 1.f,
				/* .scale_max = */ 1.f,
				/* .scale_now = */ 0.f,
				/* .frame_now = */ 0,
				/* .frame = */ 0,
				/* .fr = */ 128,
				/* .fg = */ 128,
				/* .fb = */ 128,
				/* .fa = */ 96
			}
		}
	},
	/* [1] = */ {
		/* .len = */ 3000.f,
		/* .speed = */ 3.f,
		/* .offset_y = */ -400.f,
		/* .offset_y2 = */ 0,
		/* .move_y = */ 255,
		/* .scale = */ 1.f,
		/* .fog_r = */ 128,
		/* .fog_g = */ 128,
		/* .fog_b = */ 128,
		/* .fog_al = */ 90,
		/* .sky_stat = */ {
			/* [0] = */ {
				/* .hight = */ -3000.f,
				/* .scale_min = */ 1.f,
				/* .scale_max = */ 1.f,
				/* .scale_now = */ 0.f,
				/* .frame_now = */ 0,
				/* .frame = */ 0,
				/* .fr = */ 128,
				/* .fg = */ 128,
				/* .fb = */ 128,
				/* .fa = */ 96
			},
			/* [1] = */ {
				/* .hight = */ -3000.f,
				/* .scale_min = */ 1.f,
				/* .scale_max = */ 1.f,
				/* .scale_now = */ 0.f,
				/* .frame_now = */ 0,
				/* .frame = */ 0,
				/* .fr = */ 128,
				/* .fg = */ 128,
				/* .fb = */ 128,
				/* .fa = */ 96
			},
			/* [2] = */ {
				/* .hight = */ -3000.f,
				/* .scale_min = */ 1.f,
				/* .scale_max = */ 1.f,
				/* .scale_now = */ 0.f,
				/* .frame_now = */ 0,
				/* .frame = */ 0,
				/* .fr = */ 128,
				/* .fg = */ 128,
				/* .fb = */ 128,
				/* .fa = */ 96
			}
		}
	},
	/* [2] = */ {
		/* .len = */ 3000.f,
		/* .speed = */ 0.799999952f,
		/* .offset_y = */ 0.f,
		/* .offset_y2 = */ -262,
		/* .move_y = */ 255,
		/* .scale = */ 1.92f,
		/* .fog_r = */ 48,
		/* .fog_g = */ 63,
		/* .fog_b = */ 51,
		/* .fog_al = */ 45,
		/* .sky_stat = */ {
			/* [0] = */ {
				/* .hight = */ -3000.f,
				/* .scale_min = */ 4.30997086f,
				/* .scale_max = */ 3.66998792f,
				/* .scale_now = */ 0.f,
				/* .frame_now = */ 0,
				/* .frame = */ 1983,
				/* .fr = */ 128,
				/* .fg = */ 128,
				/* .fb = */ 128,
				/* .fa = */ 62
			},
			/* [1] = */ {
				/* .hight = */ -3000.f,
				/* .scale_min = */ 3.5f,
				/* .scale_max = */ 1.f,
				/* .scale_now = */ 0.f,
				/* .frame_now = */ 0,
				/* .frame = */ 2029,
				/* .fr = */ 121,
				/* .fg = */ 122,
				/* .fb = */ 106,
				/* .fa = */ 120
			},
			/* [2] = */ {
				/* .hight = */ -3000.f,
				/* .scale_min = */ 1.f,
				/* .scale_max = */ 1.f,
				/* .scale_now = */ 0.f,
				/* .frame_now = */ 0,
				/* .frame = */ 0,
				/* .fr = */ 128,
				/* .fg = */ 128,
				/* .fb = */ 128,
				/* .fa = */ 96
			}
		}
	},
	/* [3] = */ {
		/* .len = */ 3000.f,
		/* .speed = */ 2.19999981f,
		/* .offset_y = */ -400.f,
		/* .offset_y2 = */ 0,
		/* .move_y = */ 255,
		/* .scale = */ 2.19999886f,
		/* .fog_r = */ 80,
		/* .fog_g = */ 82,
		/* .fog_b = */ 81,
		/* .fog_al = */ 45,
		/* .sky_stat = */ {
			/* [0] = */ {
				/* .hight = */ -3000.f,
				/* .scale_min = */ 4.8199749f,
				/* .scale_max = */ 3.66998792f,
				/* .scale_now = */ 0.f,
				/* .frame_now = */ 0,
				/* .frame = */ 1983,
				/* .fr = */ 128,
				/* .fg = */ 128,
				/* .fb = */ 128,
				/* .fa = */ 62
			},
			/* [1] = */ {
				/* .hight = */ -3000.f,
				/* .scale_min = */ 3.099998f,
				/* .scale_max = */ 0.619999945f,
				/* .scale_now = */ 0.f,
				/* .frame_now = */ 0,
				/* .frame = */ 1198,
				/* .fr = */ 225,
				/* .fg = */ 223,
				/* .fb = */ 228,
				/* .fa = */ 23
			},
			/* [2] = */ {
				/* .hight = */ -3000.f,
				/* .scale_min = */ 1.f,
				/* .scale_max = */ 1.f,
				/* .scale_now = */ 0.f,
				/* .frame_now = */ 0,
				/* .frame = */ 0,
				/* .fr = */ 128,
				/* .fg = */ 128,
				/* .fb = */ 128,
				/* .fa = */ 96
			}
		}
	},
	/* [4] = */ {
		/* .len = */ 3000.f,
		/* .speed = */ 0.699996948f,
		/* .offset_y = */ 0.f,
		/* .offset_y2 = */ -154,
		/* .move_y = */ 255,
		/* .scale = */ 1.43999994f,
		/* .fog_r = */ 48,
		/* .fog_g = */ 63,
		/* .fog_b = */ 51,
		/* .fog_al = */ 48,
		/* .sky_stat = */ {
			/* [0] = */ {
				/* .hight = */ -3000.f,
				/* .scale_min = */ 1.f,
				/* .scale_max = */ 1.f,
				/* .scale_now = */ 0.f,
				/* .frame_now = */ 0,
				/* .frame = */ 0,
				/* .fr = */ 128,
				/* .fg = */ 128,
				/* .fb = */ 128,
				/* .fa = */ 96
			},
			/* [1] = */ {
				/* .hight = */ -3000.f,
				/* .scale_min = */ 3.5f,
				/* .scale_max = */ 1.f,
				/* .scale_now = */ 0.f,
				/* .frame_now = */ 0,
				/* .frame = */ 2029,
				/* .fr = */ 121,
				/* .fg = */ 122,
				/* .fb = */ 106,
				/* .fa = */ 120
			},
			/* [2] = */ {
				/* .hight = */ -3000.f,
				/* .scale_min = */ 1.f,
				/* .scale_max = */ 1.f,
				/* .scale_now = */ 0.f,
				/* .frame_now = */ 0,
				/* .frame = */ 0,
				/* .fr = */ 128,
				/* .fg = */ 128,
				/* .fb = */ 128,
				/* .fa = */ 96
			}
		}
	},
	/* [5] = */ {
		/* .len = */ 3000.f,
		/* .speed = */ 3.f,
		/* .offset_y = */ -400.f,
		/* .offset_y2 = */ 0,
		/* .move_y = */ 255,
		/* .scale = */ 1.f,
		/* .fog_r = */ 128,
		/* .fog_g = */ 128,
		/* .fog_b = */ 128,
		/* .fog_al = */ 90,
		/* .sky_stat = */ {
			/* [0] = */ {
				/* .hight = */ -3000.f,
				/* .scale_min = */ 1.f,
				/* .scale_max = */ 1.f,
				/* .scale_now = */ 0.f,
				/* .frame_now = */ 0,
				/* .frame = */ 0,
				/* .fr = */ 128,
				/* .fg = */ 128,
				/* .fb = */ 128,
				/* .fa = */ 96
			},
			/* [1] = */ {
				/* .hight = */ -3000.f,
				/* .scale_min = */ 1.f,
				/* .scale_max = */ 1.f,
				/* .scale_now = */ 0.f,
				/* .frame_now = */ 0,
				/* .frame = */ 0,
				/* .fr = */ 128,
				/* .fg = */ 128,
				/* .fb = */ 128,
				/* .fa = */ 96
			},
			/* [2] = */ {
				/* .hight = */ -3000.f,
				/* .scale_min = */ 1.f,
				/* .scale_max = */ 1.f,
				/* .scale_now = */ 0.f,
				/* .frame_now = */ 0,
				/* .frame = */ 0,
				/* .fr = */ 128,
				/* .fg = */ 128,
				/* .fb = */ 128,
				/* .fa = */ 96
			}
		}
	},
	/* [6] = */ {
		/* .len = */ 2990.f,
		/* .speed = */ 0.699986f,
		/* .offset_y = */ 0.f,
		/* .offset_y2 = */ -139,
		/* .move_y = */ 161,
		/* .scale = */ 2.51999879f,
		/* .fog_r = */ 45,
		/* .fog_g = */ 54,
		/* .fog_b = */ 48,
		/* .fog_al = */ 48,
		/* .sky_stat = */ {
			/* [0] = */ {
				/* .hight = */ -3000.f,
				/* .scale_min = */ 1.f,
				/* .scale_max = */ 1.f,
				/* .scale_now = */ 0.f,
				/* .frame_now = */ 0,
				/* .frame = */ 0,
				/* .fr = */ 128,
				/* .fg = */ 128,
				/* .fb = */ 128,
				/* .fa = */ 96
			},
			/* [1] = */ {
				/* .hight = */ -3000.f,
				/* .scale_min = */ 3.5f,
				/* .scale_max = */ 1.f,
				/* .scale_now = */ 0.f,
				/* .frame_now = */ 0,
				/* .frame = */ 2029,
				/* .fr = */ 121,
				/* .fg = */ 122,
				/* .fb = */ 106,
				/* .fa = */ 120
			},
			/* [2] = */ {
				/* .hight = */ -3000.f,
				/* .scale_min = */ 1.f,
				/* .scale_max = */ 1.f,
				/* .scale_now = */ 0.f,
				/* .frame_now = */ 0,
				/* .frame = */ 0,
				/* .fr = */ 128,
				/* .fg = */ 128,
				/* .fb = */ 128,
				/* .fa = */ 96
			}
		}
	},
	/* [7] = */ {
		/* .len = */ 3000.f,
		/* .speed = */ 3.f,
		/* .offset_y = */ -400.f,
		/* .offset_y2 = */ 0,
		/* .move_y = */ 255,
		/* .scale = */ 1.f,
		/* .fog_r = */ 128,
		/* .fog_g = */ 128,
		/* .fog_b = */ 128,
		/* .fog_al = */ 90,
		/* .sky_stat = */ {
			/* [0] = */ {
				/* .hight = */ -3000.f,
				/* .scale_min = */ 1.f,
				/* .scale_max = */ 1.f,
				/* .scale_now = */ 0.f,
				/* .frame_now = */ 0,
				/* .frame = */ 0,
				/* .fr = */ 128,
				/* .fg = */ 128,
				/* .fb = */ 128,
				/* .fa = */ 96
			},
			/* [1] = */ {
				/* .hight = */ -3000.f,
				/* .scale_min = */ 1.f,
				/* .scale_max = */ 1.f,
				/* .scale_now = */ 0.f,
				/* .frame_now = */ 0,
				/* .frame = */ 0,
				/* .fr = */ 128,
				/* .fg = */ 128,
				/* .fb = */ 128,
				/* .fa = */ 96
			},
			/* [2] = */ {
				/* .hight = */ -3000.f,
				/* .scale_min = */ 1.f,
				/* .scale_max = */ 1.f,
				/* .scale_now = */ 0.f,
				/* .frame_now = */ 0,
				/* .frame = */ 0,
				/* .fr = */ 128,
				/* .fg = */ 128,
				/* .fb = */ 128,
				/* .fa = */ 96
			}
		}
	},
	/* [8] = */ {
		/* .len = */ 3000.f,
		/* .speed = */ 0.799999952f,
		/* .offset_y = */ 0.f,
		/* .offset_y2 = */ -75,
		/* .move_y = */ 255,
		/* .scale = */ 3.37999582f,
		/* .fog_r = */ 45,
		/* .fog_g = */ 57,
		/* .fog_b = */ 54,
		/* .fog_al = */ 86,
		/* .sky_stat = */ {
			/* [0] = */ {
				/* .hight = */ -3000.f,
				/* .scale_min = */ 1.f,
				/* .scale_max = */ 1.f,
				/* .scale_now = */ 0.f,
				/* .frame_now = */ 0,
				/* .frame = */ 0,
				/* .fr = */ 128,
				/* .fg = */ 128,
				/* .fb = */ 128,
				/* .fa = */ 96
			},
			/* [1] = */ {
				/* .hight = */ -3000.f,
				/* .scale_min = */ 3.5f,
				/* .scale_max = */ 1.f,
				/* .scale_now = */ 0.f,
				/* .frame_now = */ 0,
				/* .frame = */ 2029,
				/* .fr = */ 121,
				/* .fg = */ 122,
				/* .fb = */ 106,
				/* .fa = */ 120
			},
			/* [2] = */ {
				/* .hight = */ -3000.f,
				/* .scale_min = */ 1.f,
				/* .scale_max = */ 1.f,
				/* .scale_now = */ 0.f,
				/* .frame_now = */ 0,
				/* .frame = */ 0,
				/* .fr = */ 128,
				/* .fg = */ 128,
				/* .fb = */ 128,
				/* .fa = */ 96
			}
		}
	},
	/* [9] = */ {
		/* .len = */ 3000.f,
		/* .speed = */ 0.799999f,
		/* .offset_y = */ -124.f,
		/* .offset_y2 = */ -129,
		/* .move_y = */ 255,
		/* .scale = */ 1.97999799f,
		/* .fog_r = */ 45,
		/* .fog_g = */ 60,
		/* .fog_b = */ 56,
		/* .fog_al = */ 94,
		/* .sky_stat = */ {
			/* [0] = */ {
				/* .hight = */ -3000.f,
				/* .scale_min = */ 1.f,
				/* .scale_max = */ 1.f,
				/* .scale_now = */ 0.f,
				/* .frame_now = */ 0,
				/* .frame = */ 0,
				/* .fr = */ 128,
				/* .fg = */ 128,
				/* .fb = */ 128,
				/* .fa = */ 96
			},
			/* [1] = */ {
				/* .hight = */ -3000.f,
				/* .scale_min = */ 1.f,
				/* .scale_max = */ 1.f,
				/* .scale_now = */ 0.f,
				/* .frame_now = */ 0,
				/* .frame = */ 0,
				/* .fr = */ 128,
				/* .fg = */ 128,
				/* .fb = */ 128,
				/* .fa = */ 96
			},
			/* [2] = */ {
				/* .hight = */ -3000.f,
				/* .scale_min = */ 1.f,
				/* .scale_max = */ 1.f,
				/* .scale_now = */ 0.f,
				/* .frame_now = */ 0,
				/* .frame = */ 0,
				/* .fr = */ 128,
				/* .fg = */ 128,
				/* .fb = */ 128,
				/* .fa = */ 96
			}
		}
	},
	/* [10] = */ {
		/* .len = */ 3000.f,
		/* .speed = */ 3.f,
		/* .offset_y = */ -400.f,
		/* .offset_y2 = */ 0,
		/* .move_y = */ 255,
		/* .scale = */ 1.f,
		/* .fog_r = */ 128,
		/* .fog_g = */ 128,
		/* .fog_b = */ 128,
		/* .fog_al = */ 90,
		/* .sky_stat = */ {
			/* [0] = */ {
				/* .hight = */ -3000.f,
				/* .scale_min = */ 1.f,
				/* .scale_max = */ 1.f,
				/* .scale_now = */ 0.f,
				/* .frame_now = */ 0,
				/* .frame = */ 0,
				/* .fr = */ 128,
				/* .fg = */ 128,
				/* .fb = */ 128,
				/* .fa = */ 96
			},
			/* [1] = */ {
				/* .hight = */ -3000.f,
				/* .scale_min = */ 1.f,
				/* .scale_max = */ 1.f,
				/* .scale_now = */ 0.f,
				/* .frame_now = */ 0,
				/* .frame = */ 0,
				/* .fr = */ 128,
				/* .fg = */ 128,
				/* .fb = */ 128,
				/* .fa = */ 96
			},
			/* [2] = */ {
				/* .hight = */ -3000.f,
				/* .scale_min = */ 1.f,
				/* .scale_max = */ 1.f,
				/* .scale_now = */ 0.f,
				/* .frame_now = */ 0,
				/* .frame = */ 0,
				/* .fr = */ 128,
				/* .fg = */ 128,
				/* .fb = */ 128,
				/* .fa = */ 96
			}
		}
	},
	/* [11] = */ {
		/* .len = */ 3000.f,
		/* .speed = */ 1.3999989f,
		/* .offset_y = */ 3452.f,
		/* .offset_y2 = */ -144,
		/* .move_y = */ 255,
		/* .scale = */ 1.99999893f,
		/* .fog_r = */ 55,
		/* .fog_g = */ 65,
		/* .fog_b = */ 60,
		/* .fog_al = */ 83,
		/* .sky_stat = */ {
			/* [0] = */ {
				/* .hight = */ -3000.f,
				/* .scale_min = */ 2.55999899f,
				/* .scale_max = */ 2.43999887f,
				/* .scale_now = */ 0.f,
				/* .frame_now = */ 0,
				/* .frame = */ 0,
				/* .fr = */ 128,
				/* .fg = */ 128,
				/* .fb = */ 128,
				/* .fa = */ 96
			},
			/* [1] = */ {
				/* .hight = */ -2640.f,
				/* .scale_min = */ 1.49995399f,
				/* .scale_max = */ 0.f,
				/* .scale_now = */ 0.f,
				/* .frame_now = */ 0,
				/* .frame = */ 0,
				/* .fr = */ 128,
				/* .fg = */ 128,
				/* .fb = */ 128,
				/* .fa = */ 96
			},
			/* [2] = */ {
				/* .hight = */ -3000.f,
				/* .scale_min = */ 1.f,
				/* .scale_max = */ 1.f,
				/* .scale_now = */ 0.f,
				/* .frame_now = */ 0,
				/* .frame = */ 0,
				/* .fr = */ 128,
				/* .fg = */ 128,
				/* .fb = */ 128,
				/* .fa = */ 96
			}
		}
	},
	/* [12] = */ {
		/* .len = */ 3000.f,
		/* .speed = */ 2.19999981f,
		/* .offset_y = */ -400.f,
		/* .offset_y2 = */ 0,
		/* .move_y = */ 255,
		/* .scale = */ 2.19999886f,
		/* .fog_r = */ 80,
		/* .fog_g = */ 82,
		/* .fog_b = */ 81,
		/* .fog_al = */ 45,
		/* .sky_stat = */ {
			/* [0] = */ {
				/* .hight = */ -3000.f,
				/* .scale_min = */ 1.f,
				/* .scale_max = */ 1.f,
				/* .scale_now = */ 0.f,
				/* .frame_now = */ 0,
				/* .frame = */ 0,
				/* .fr = */ 255,
				/* .fg = */ 128,
				/* .fb = */ 128,
				/* .fa = */ 96
			},
			/* [1] = */ {
				/* .hight = */ -3000.f,
				/* .scale_min = */ 3.10999799f,
				/* .scale_max = */ 0.64f,
				/* .scale_now = */ 0.f,
				/* .frame_now = */ 0,
				/* .frame = */ 1948,
				/* .fr = */ 225,
				/* .fg = */ 223,
				/* .fb = */ 226,
				/* .fa = */ 53
			},
			/* [2] = */ {
				/* .hight = */ -3000.f,
				/* .scale_min = */ 1.f,
				/* .scale_max = */ 1.f,
				/* .scale_now = */ 0.f,
				/* .frame_now = */ 0,
				/* .frame = */ 0,
				/* .fr = */ 128,
				/* .fg = */ 128,
				/* .fb = */ 128,
				/* .fa = */ 96
			}
		}
	},
	/* [13] = */ {
		/* .len = */ 3000.f,
		/* .speed = */ 0.899998963f,
		/* .offset_y = */ -3364.f,
		/* .offset_y2 = */ 93,
		/* .move_y = */ 255,
		/* .scale = */ 1.53999889f,
		/* .fog_r = */ 78,
		/* .fog_g = */ 85,
		/* .fog_b = */ 80,
		/* .fog_al = */ 54,
		/* .sky_stat = */ {
			/* [0] = */ {
				/* .hight = */ -3000.f,
				/* .scale_min = */ 3.12999797f,
				/* .scale_max = */ 1.f,
				/* .scale_now = */ 0.f,
				/* .frame_now = */ 0,
				/* .frame = */ 1539,
				/* .fr = */ 120,
				/* .fg = */ 128,
				/* .fb = */ 128,
				/* .fa = */ 96
			},
			/* [1] = */ {
				/* .hight = */ -3000.f,
				/* .scale_min = */ 2.99999785f,
				/* .scale_max = */ 1.f,
				/* .scale_now = */ 0.f,
				/* .frame_now = */ 0,
				/* .frame = */ 2016,
				/* .fr = */ 123,
				/* .fg = */ 128,
				/* .fb = */ 128,
				/* .fa = */ 96
			},
			/* [2] = */ {
				/* .hight = */ -3000.f,
				/* .scale_min = */ 1.f,
				/* .scale_max = */ 1.f,
				/* .scale_now = */ 0.f,
				/* .frame_now = */ 0,
				/* .frame = */ 0,
				/* .fr = */ 128,
				/* .fg = */ 128,
				/* .fb = */ 128,
				/* .fa = */ 96
			}
		}
	},
	/* [14] = */ {
		/* .len = */ 3000.f,
		/* .speed = */ 3.19998479f,
		/* .offset_y = */ -400.f,
		/* .offset_y2 = */ 0,
		/* .move_y = */ 255,
		/* .scale = */ 1.f,
		/* .fog_r = */ 128,
		/* .fog_g = */ 128,
		/* .fog_b = */ 128,
		/* .fog_al = */ 90,
		/* .sky_stat = */ {
			/* [0] = */ {
				/* .hight = */ -3000.f,
				/* .scale_min = */ 3.87999678f,
				/* .scale_max = */ 1.f,
				/* .scale_now = */ 0.f,
				/* .frame_now = */ 0,
				/* .frame = */ 0,
				/* .fr = */ 128,
				/* .fg = */ 128,
				/* .fb = */ 128,
				/* .fa = */ 96
			},
			/* [1] = */ {
				/* .hight = */ -3000.f,
				/* .scale_min = */ 3.75999689f,
				/* .scale_max = */ 1.f,
				/* .scale_now = */ 0.f,
				/* .frame_now = */ 0,
				/* .frame = */ 0,
				/* .fr = */ 128,
				/* .fg = */ 124,
				/* .fb = */ 128,
				/* .fa = */ 96
			},
			/* [2] = */ {
				/* .hight = */ -3000.f,
				/* .scale_min = */ 1.f,
				/* .scale_max = */ 1.f,
				/* .scale_now = */ 0.f,
				/* .frame_now = */ 0,
				/* .frame = */ 0,
				/* .fr = */ 128,
				/* .fg = */ 128,
				/* .fb = */ 128,
				/* .fa = */ 96
			}
		}
	},
	/* [15] = */ {
		/* .len = */ 3000.f,
		/* .speed = */ 1.8f,
		/* .offset_y = */ -1306.f,
		/* .offset_y2 = */ -150,
		/* .move_y = */ 255,
		/* .scale = */ 2.45999885f,
		/* .fog_r = */ 14,
		/* .fog_g = */ 31,
		/* .fog_b = */ 31,
		/* .fog_al = */ 72,
		/* .sky_stat = */ {
			/* [0] = */ {
				/* .hight = */ -3000.f,
				/* .scale_min = */ 1.f,
				/* .scale_max = */ 1.f,
				/* .scale_now = */ 0.f,
				/* .frame_now = */ 0,
				/* .frame = */ 0,
				/* .fr = */ 128,
				/* .fg = */ 128,
				/* .fb = */ 128,
				/* .fa = */ 96
			},
			/* [1] = */ {
				/* .hight = */ -3000.f,
				/* .scale_min = */ 3.60999799f,
				/* .scale_max = */ 1.f,
				/* .scale_now = */ 0.f,
				/* .frame_now = */ 0,
				/* .frame = */ 1950,
				/* .fr = */ 102,
				/* .fg = */ 130,
				/* .fb = */ 98,
				/* .fa = */ 78
			},
			/* [2] = */ {
				/* .hight = */ -3000.f,
				/* .scale_min = */ 1.f,
				/* .scale_max = */ 1.f,
				/* .scale_now = */ 0.f,
				/* .frame_now = */ 0,
				/* .frame = */ 0,
				/* .fr = */ 128,
				/* .fg = */ 128,
				/* .fb = */ 128,
				/* .fa = */ 96
			}
		}
	},
	/* [16] = */ {
		/* .len = */ 3000.f,
		/* .speed = */ 0.799999f,
		/* .offset_y = */ 0.f,
		/* .offset_y2 = */ -324,
		/* .move_y = */ 255,
		/* .scale = */ 2.45999885f,
		/* .fog_r = */ 48,
		/* .fog_g = */ 54,
		/* .fog_b = */ 60,
		/* .fog_al = */ 93,
		/* .sky_stat = */ {
			/* [0] = */ {
				/* .hight = */ -3000.f,
				/* .scale_min = */ 1.f,
				/* .scale_max = */ 1.f,
				/* .scale_now = */ 0.f,
				/* .frame_now = */ 0,
				/* .frame = */ 0,
				/* .fr = */ 128,
				/* .fg = */ 128,
				/* .fb = */ 128,
				/* .fa = */ 96
			},
			/* [1] = */ {
				/* .hight = */ -3000.f,
				/* .scale_min = */ 3.60999799f,
				/* .scale_max = */ 1.f,
				/* .scale_now = */ 0.f,
				/* .frame_now = */ 0,
				/* .frame = */ 1950,
				/* .fr = */ 102,
				/* .fg = */ 130,
				/* .fb = */ 98,
				/* .fa = */ 54
			},
			/* [2] = */ {
				/* .hight = */ -3000.f,
				/* .scale_min = */ 1.f,
				/* .scale_max = */ 1.f,
				/* .scale_now = */ 0.f,
				/* .frame_now = */ 0,
				/* .frame = */ 0,
				/* .fr = */ 128,
				/* .fg = */ 128,
				/* .fb = */ 128,
				/* .fa = */ 96
			}
		}
	},
	/* [17] = */ {
		/* .len = */ 3000.f,
		/* .speed = */ 0.7f,
		/* .offset_y = */ 48.f,
		/* .offset_y2 = */ -156,
		/* .move_y = */ 255,
		/* .scale = */ 2.45999885f,
		/* .fog_r = */ 50,
		/* .fog_g = */ 50,
		/* .fog_b = */ 50,
		/* .fog_al = */ 128,
		/* .sky_stat = */ {
			/* [0] = */ {
				/* .hight = */ -3000.f,
				/* .scale_min = */ 1.f,
				/* .scale_max = */ 1.f,
				/* .scale_now = */ 0.f,
				/* .frame_now = */ 0,
				/* .frame = */ 0,
				/* .fr = */ 128,
				/* .fg = */ 128,
				/* .fb = */ 128,
				/* .fa = */ 96
			},
			/* [1] = */ {
				/* .hight = */ -3000.f,
				/* .scale_min = */ 3.5f,
				/* .scale_max = */ 1.f,
				/* .scale_now = */ 0.f,
				/* .frame_now = */ 0,
				/* .frame = */ 2029,
				/* .fr = */ 121,
				/* .fg = */ 122,
				/* .fb = */ 106,
				/* .fa = */ 90
			},
			/* [2] = */ {
				/* .hight = */ -3000.f,
				/* .scale_min = */ 1.f,
				/* .scale_max = */ 1.f,
				/* .scale_now = */ 0.f,
				/* .frame_now = */ 0,
				/* .frame = */ 0,
				/* .fr = */ 128,
				/* .fg = */ 128,
				/* .fb = */ 128,
				/* .fa = */ 96
			}
		}
	}
};

static MAP_SKY_DB *MapSkyDp = NULL;
static u_int MapSkyTopAddr = 0;
static u_long MapSkyTex0 = 0;
static float MapSkyX = 0.f;
static float MapSkyRotY = 0.f;
static int MapSkyFlg = 0;
static int MapSkyAlpha = 128;
static int MapSkyFrame = 0;
static fixed_array<unsigned int,12> MapSkyDatAddr;
static float MapSkyPers[4][4];

static int s_iv1111[4] = {
	/* [0] = */ 1,
	/* [1] = */ 1,
	/* [2] = */ 1,
	/* [3] = */ 1
};

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x39f3e0;
	
  g3ddbgAssert__FbPCce(false,str_849);
  return (uint *)v;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_verifyrange__H1ZUi_UiUi_PX01(0x3ef038,_max);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_verifyrange__H1ZUi_UiUi_PX01(0x3ef040,_max);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_verifyrange__H1ZUi_UiUi_PX01(0x39f428,_max);
  }
  return (uint **)0x0;
}

static MAP_SKY_DB* MapSkyGetDatNowArea() {
	MAP_SKY_ST aSkyCmn[2];
	MAP_SKY_DB *pSkyDat;
	int room_no;
	
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  MAP_SKY_ST *pMVar5;
  uint uVar6;
  uint uVar7;
  MAP_SKY_DB *pMVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  MAP_SKY_DB *pMVar14;
  MAP_SKY_ST aSkyCmn [2];
  
  pMVar5 = aSkyCmn;
  puVar4 = &DAT_0039f438;
  do {
    puVar9 = puVar4;
    puVar10 = (ulong *)pMVar5;
    uVar11 = puVar9[1];
    uVar12 = puVar9[2];
    uVar13 = puVar9[3];
    *puVar10 = *puVar9;
    puVar10[1] = uVar11;
    puVar10[2] = uVar12;
    puVar10[3] = uVar13;
    pMVar5 = (MAP_SKY_ST *)(puVar10 + 4);
    puVar4 = puVar9 + 4;
  } while (puVar9 + 4 != (ulong *)&UNK_0039f478);
  uVar11 = puVar9[5];
  uVar6 = (int)puVar10 + 0x27U & 7;
  puVar4 = (ulong *)(((int)puVar10 + 0x27U) - uVar6);
  *puVar4 = *puVar4 & -1L << (uVar6 + 1) * 8 | _UNK_0039f478 >> (7 - uVar6) * 8;
  puVar10[4] = _UNK_0039f478;
  uVar6 = (int)puVar10 + 0x2fU & 7;
  puVar4 = (ulong *)(((int)puVar10 + 0x2fU) - uVar6);
  *puVar4 = *puVar4 & -1L << (uVar6 + 1) * 8 | uVar11 >> (7 - uVar6) * 8;
  pMVar14 = (MAP_SKY_DB *)0x0;
  puVar10[5] = uVar11;
  uVar6 = MapLoadGetRoomNoNow__Fv();
  if (uVar6 == 0x35) {
    uVar6 = 0x28;
  }
  if (uVar6 == 0x29) {
    uVar6 = 0x28;
  }
  if (uVar6 < 0xd) {
    pMVar14 = MapSkyDatList + uVar6;
  }
  if (uVar6 == 0x28) {
    pMVar14 = MapSkyDatList + 0xd;
  }
  if (uVar6 == 0x2c) {
    pMVar14 = MapSkyDatList + 0xe;
  }
  if (uVar6 == 0x41) {
    pMVar14 = MapSkyDatList + 0xf;
  }
  if (uVar6 == 0x30) {
    pMVar14 = MapSkyDatList + 0x10;
  }
  if (uVar6 == 0x1e) {
    pMVar14 = MapSkyDatList + 0x11;
  }
  if (uVar6 == 0x1d) {
    pMVar14 = MapSkyDatList + 0x11;
  }
  if (uVar6 == 0x26) {
    pMVar14 = MapSkyDatList + 0x11;
  }
  pMVar8 = (MAP_SKY_DB *)0x0;
  if (pMVar14 != (MAP_SKY_DB *)0x0) {
    uVar7 = MapSpAraCheck__Fv();
    uVar7 = uVar7 & 1;
    uVar11._0_4_ = aSkyCmn[uVar7].hight;
    uVar11._4_4_ = aSkyCmn[uVar7].scale_min;
    uVar12._0_4_ = aSkyCmn[uVar7].scale_max;
    uVar12._4_4_ = aSkyCmn[uVar7].scale_now;
    uVar13._0_4_ = aSkyCmn[uVar7].frame_now;
    uVar13._4_4_ = aSkyCmn[uVar7].frame;
    uVar2._0_4_ = aSkyCmn[uVar7].fr;
    uVar2._4_4_ = aSkyCmn[uVar7].fg;
    puVar1 = (undefined *)((int)&pMVar14->sky_stat[1].scale_min + 3);
    uVar6 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar6);
    *puVar4 = *puVar4 & -1L << (uVar6 + 1) * 8 | uVar11 >> (7 - uVar6) * 8;
    pMVar14->sky_stat[1].hight = (float)(int)uVar11;
    pMVar14->sky_stat[1].scale_min = (float)(int)(uVar11 >> 0x20);
    puVar1 = (undefined *)((int)&pMVar14->sky_stat[1].scale_now + 3);
    uVar6 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar6);
    *puVar4 = *puVar4 & -1L << (uVar6 + 1) * 8 | uVar12 >> (7 - uVar6) * 8;
    pMVar14->sky_stat[1].scale_max = (float)(int)uVar12;
    pMVar14->sky_stat[1].scale_now = (float)(int)(uVar12 >> 0x20);
    puVar1 = (undefined *)((int)&pMVar14->sky_stat[1].frame + 3);
    uVar6 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar6);
    *puVar4 = *puVar4 & -1L << (uVar6 + 1) * 8 | uVar13 >> (7 - uVar6) * 8;
    pMVar14->sky_stat[1].frame_now = (int)uVar13;
    pMVar14->sky_stat[1].frame = (int)(uVar13 >> 0x20);
    puVar1 = (undefined *)((int)&pMVar14->sky_stat[1].fg + 3);
    uVar6 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar6);
    *puVar4 = *puVar4 & -1L << (uVar6 + 1) * 8 | uVar2 >> (7 - uVar6) * 8;
    pMVar14->sky_stat[1].fr = (int)uVar2;
    pMVar14->sky_stat[1].fg = (int)(uVar2 >> 0x20);
    uVar3._0_4_ = aSkyCmn[uVar7].fb;
    uVar3._4_4_ = aSkyCmn[uVar7].fa;
    puVar1 = (undefined *)((int)&pMVar14->sky_stat[1].fa + 3);
    uVar6 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar6);
    *puVar4 = *puVar4 & -1L << (uVar6 + 1) * 8 | uVar3 >> (7 - uVar6) * 8;
    pMVar14->sky_stat[1].fb = (int)uVar3;
    pMVar14->sky_stat[1].fa = (int)(uVar3 >> 0x20);
    pMVar8 = pMVar14;
  }
  return pMVar8;
}

u_long MapSkyGetTex0(u_int top_addr) {
	TIM2_PICTUREHEADER *tph;
	u_int li;
	int cx;
	int cy;
	
  int iVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  iVar1 = top_addr + 0x10;
  if ((*(char *)(top_addr + 5) != '\0') &&
     (iVar1 = top_addr + 0x80, *(char *)(top_addr + 5) != '\x01')) {
    iVar1 = 0;
  }
  lVar3 = 0;
  for (uVar4 = (uint)*(ushort *)(iVar1 + 0x14); ((uVar4 ^ 1) & 1) != 0; uVar4 = uVar4 >> 1) {
    lVar3 = (long)((int)lVar3 + 1);
  }
  lVar2 = 0;
  for (uVar4 = (uint)*(ushort *)(iVar1 + 0x16); ((uVar4 ^ 1) & 1) != 0; uVar4 = uVar4 >> 1) {
    lVar2 = (long)((int)lVar2 + 1);
  }
  return lVar3 << 0x1a | lVar2 << 0x1e | 0x2005780401312bc4;
}

void MapSkySetAlpha(int iAlpha) {
  MapSkyAlpha = iAlpha;
  return;
}

void MapSkySetTim2Vram(u_int *top_addr) {
  int iVar1;
  
  MapSkyTex0 = MapSkyGetTex0__FUi(*top_addr);
  MakeTim2Direct__FPUiii((uint *)*top_addr,0x2bc4,0);
  iVar1 = gra3dIsMonotoneDrawEnable__Fv();
  if (iVar1 != 0) {
    MakeClutDirect__FPUiii((uint *)top_addr[1],0x2bc0,0);
    return;
  }
  MakeClutDirect__FPUiii((uint *)*top_addr,0x2bc0,0);
  return;
}

static Q_WORDDATA* MapSkySprite(Q_WORDDATA *pbuf, int x1, int y1, int x2, int y2, int u1, int v1, int u2, int v2, int r, int g, int b, int a) {
	int v2;
	int r;
	int g;
	int b;
	int a;
	
  pbuf->ul64[0] = 0x50ab400000008001;
  pbuf->ul64[1] = 0x43431;
  pbuf[1].iv[0] = r;
  *(int *)((int)pbuf + 0x14) = g;
  *(int *)((int)pbuf + 0x18) = b;
  *(int *)((int)pbuf + 0x1c) = a;
  pbuf[2].iv[0] = u1;
  *(int *)((int)pbuf + 0x24) = v1;
  *(undefined4 *)((int)pbuf + 0x2c) = 0;
  *(undefined4 *)((int)pbuf + 0x28) = 0;
  pbuf[3].iv[0] = x1;
  *(int *)((int)pbuf + 0x34) = y1;
  *(undefined4 *)((int)pbuf + 0x3c) = 0;
  *(undefined4 *)((int)pbuf + 0x38) = 0;
  *(int *)((int)pbuf + 0x44) = v2;
  pbuf[4].iv[0] = u2;
  *(undefined4 *)((int)pbuf + 0x4c) = 0;
  *(undefined4 *)((int)pbuf + 0x48) = 0;
  pbuf[5].iv[0] = x2;
  *(int *)((int)pbuf + 0x54) = y2;
  *(undefined4 *)((int)pbuf + 0x5c) = 0;
  *(undefined4 *)((int)pbuf + 0x58) = 0;
  return pbuf + 6;
}

static int MapSkySetBg(int ey, int eh, float *rot, int clip) {
	int *rc;
	Q_WORDDATA *pbuf;
	int bg_y;
	int fc[3];
	int fr;
	int fg;
	int fb;
	
  int *piVar1;
  int iVar2;
  Q_WORDDATA *pQVar3;
  int iVar4;
  int fc [3];
  
  iVar4 = ey + eh * 0x10;
  piVar1 = MapFogGetColor__Fv();
  fc[0] = *piVar1;
  fc[1] = piVar1[1];
  fc[2] = piVar1[2];
  iVar2 = gra3dIsMonotoneDrawEnable__Fv();
  if (iVar2 != 0) {
    fc[0] = (fc[0] + fc[1] + fc[2]) / 3;
    fc[1] = fc[0];
    fc[2] = fc[0];
  }
  if ((clip & 0xcU) != 0) {
    if (*rot < 0.0) {
      return 0;
    }
    iVar4 = 0x8f00;
  }
  pQVar3 = GetPK2Dbuf__Fv();
  pQVar3->ul64[0] = 0x3023400000008001;
  pQVar3->ul64[1] = 0x441;
  *(undefined4 *)((int)pQVar3 + 0x1c) = 0x80;
  pQVar3[1].iv[0] = fc[0];
  *(int *)((int)pQVar3 + 0x14) = fc[1];
  *(int *)((int)pQVar3 + 0x18) = fc[2];
  pQVar3[2].fl32[0] = 3.87431e-41;
  *(undefined4 *)((int)pQVar3 + 0x24) = 0x7100;
  *(undefined4 *)((int)pQVar3 + 0x2c) = 0;
  *(undefined4 *)((int)pQVar3 + 0x28) = 0;
  pQVar3[3].fl32[0] = 5.30924e-41;
  *(int *)((int)pQVar3 + 0x34) = iVar4;
  *(undefined4 *)((int)pQVar3 + 0x3c) = 0;
  *(undefined4 *)((int)pQVar3 + 0x38) = 0;
  EndPK2Dbuf__FP10Q_WORDDATA(pQVar3 + 4);
  return 0;
}

static void MapSkyGetPerspectiveMatrix(float *mat[4], GRA3DCAMERA *pCam, float fov) {
  float (*pafVar1) [4];
  GRA3DCAMERA *fFarZ;
  float fVar2;
  
  fFarZ = pCam;
  pafVar1 = _GetClipVolumeV__Fv();
  fVar2 = tanf(fov * 0.5);
  g3dCalcViewScreenMatrixPerspective__FPA3_ffffffffff
            (mat,(*pafVar1)[1] / fVar2,pCam->fAspectX,pCam->fAspectY,pCam->fCenterX,pCam->fCenterY,
             pCam->fZmin,pCam->fZmax,pCam->fNearZ,(float)fFarZ,pCam->fFarZ);
  return;
}

void MapSkyDraw(int &ivec[4], float ry, MAP_SKY_DB *ep) {
	Q_WORDDATA *pbuf;
	float p_scale;
	u_int x1;
	u_int x2;
	u_int y1;
	u_int y2;
	int iPscale;
	int fc[3];
	float r2;
	float sa;
	int fr;
	int fg;
	int fb;
	
  int y1;
  int iVar1;
  int iVar2;
  ulong uVar3;
  Q_WORDDATA *pQVar4;
  int iVar5;
  int iVar6;
  uint x1;
  uint x2;
  float fVar7;
  float fVar8;
  _DRAW_ENV_5 local_a0;
  int fc [3];
  uint y2;
  
  if (MapSkyAlpha != 0) {
    fVar7 = MapSkyRotY - ry;
    fVar8 = ep->scale * 255.0;
    if (((ry * MapSkyRotY < 0.0) && (fVar7 <= DAT_003ed888)) || (DAT_003ed88c <= fVar7)) {
      if (ry < 0.0) {
        for (; 0.0 <= fVar7; fVar7 = fVar7 - DAT_003ed890) {
        }
      }
      else {
        for (; fVar7 < 0.0; fVar7 = fVar7 + DAT_003ed894) {
        }
      }
    }
    else if ((DAT_003ed898 <= fVar7) || (fVar7 <= -1.0)) {
      if (0.0 < fVar7) {
        fVar7 = fVar7 + -2.0;
      }
      else {
        fVar7 = fVar7 + 2.0;
      }
    }
    for (MapSkyX = MapSkyX + fVar7 * fVar8 * ep->speed; MapSkyX < -fVar8; MapSkyX = MapSkyX + fVar8)
    {
    }
    for (; 0.0 <= MapSkyX; MapSkyX = MapSkyX - fVar8) {
    }
    fVar7 = MapSkyX + fVar8;
    x1 = ((int)MapSkyX + 0x6c0) * 0x10;
    local_a0.alpha = DAT_0039f488;
    local_a0.tex1 = DAT_0039f490;
    local_a0.clamp = DAT_0039f498;
    local_a0.test = DAT_0039f4a0;
    local_a0.zbuf = DAT_0039f4a8;
    y1 = (*ivec)[1];
    MapSkyRotY = ry;
    SetDrawEnv__FiPC11_DRAW_ENV_5(0,&local_a0);
    pQVar4 = GetPK2Dbuf__Fv();
    pQVar4->ul64[0] = 0x2000000000008001;
    pQVar4->ul64[1] = 0xeee;
    uVar3 = MapSkyTex0;
    *(undefined8 *)((int)pQVar4 + 0x18) = 0x3f;
    pQVar4[1].ul64[0] = 0;
    pQVar4[2].ul64[0] = uVar3;
    *(undefined8 *)((int)pQVar4 + 0x28) = 6;
    pQVar4 = pQVar4 + 3;
    iVar6 = ep->fog_r;
    iVar1 = ep->fog_g;
    iVar2 = ep->fog_b;
    iVar5 = gra3dIsMonotoneDrawEnable__Fv();
    fc[0] = iVar6;
    fc[1] = iVar1;
    fc[2] = iVar2;
    if (iVar5 != 0) {
      fc[0] = (iVar6 + iVar1 + iVar2) / 3;
      fc[1] = fc[0];
      fc[2] = fc[0];
    }
    if (x1 < 0xc000) {
      iVar6 = ep->fog_al;
      x2 = ((int)fVar7 + 0x6c0) * 0x10;
      while( true ) {
        pQVar4 = MapSkySprite__FP10Q_WORDDATAiiiiiiiiiiii
                           (pQVar4,x1,y1,x2,y1 + (int)fVar8 * 0x10,0,0,0x1000,0x1000,fc[0],fc[1],
                            fc[2],iVar6 * MapSkyAlpha >> 8);
        if (0xbfff < x2) break;
        iVar6 = ep->fog_al;
        x1 = x2;
        x2 = x2 + (int)fVar8 * 0x10;
      }
    }
    EndPK2Dbuf__FP10Q_WORDDATA(pQVar4);
  }
  return;
}

static Q_WORDDATA* MapSkyBlockPoly(Q_WORDDATA *pbuf, float *mat[4], float *vec[4], int *u, int *v, int wn, int hn, int ox, int oy, int r, int g, int b, int a) {
	int oy;
	int r;
	int g;
	int b;
	int a;
	int iWj;
	int i;
	int j;
	static int iout[529][4];
	float fYPos;
	float fXPos;
	float vOut[4];
	int id[4];
	int viUV[4];
	
  undefined8 uVar1;
  undefined4 *puVar2;
  undefined auVar3 [16];
  int iVar4;
  uint uVar5;
  undefined (*pauVar6) [16];
  undefined4 uVar7;
  undefined4 uVar8;
  long lVar9;
  undefined in_register_000000a4 [12];
  undefined auVar10 [16];
  undefined auVar11 [16];
  int *piVar12;
  Q_WORDDATA *pQVar13;
  int iVar14;
  long lVar15;
  int iVar16;
  long lVar17;
  long lVar18;
  float fVar19;
  float fVar20;
  float vOut [4];
  int id [4];
  int viUV [4];
  undefined local_100 [8];
  undefined8 local_f8;
  float (*local_d0) [4];
  int *local_cc;
  int *local_c8;
  int local_c4;
  int local_c0;
  undefined4 uStack_bc;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  int local_90;
  undefined4 uStack_8c;
  int local_80;
  undefined4 uStack_7c;
  int local_70;
  undefined4 uStack_6c;
  
  auVar10._8_8_ = in_register_000000a4._4_8_;
  lVar9 = (long)hn;
  iVar16 = 0;
  auVar10._0_8_ = 0x1000000000008001;
  if (lVar9 == 0) {
    trap(7);
  }
  vOut[0] = (*vec)[0];
  vOut[1] = (*vec)[1];
  fVar19 = vec[1][0] - vOut[0];
  fVar20 = (vec[3][2] - (*vec)[2]) / (float)hn;
  iVar14 = u[1];
  vOut[3] = 1.0;
  vOut[2] = (*vec)[2];
  lVar17 = (long)(((v[3] - *v) * 0x10) / hn);
  iVar4 = *u;
  pbuf->ul64[0] = 0x1000000000008001;
  pbuf->ul64[1] = 1;
  pbuf[1].iv[0] = r;
  *(int *)((int)pbuf + 0x14) = g;
  *(int *)((int)pbuf + 0x18) = b;
  *(int *)((int)pbuf + 0x1c) = a;
  pQVar13 = pbuf + 2;
  lVar18 = (long)(((iVar14 - iVar4) * 0x10) / wn);
  lVar15 = lVar9;
  local_d0 = mat;
  local_cc = u;
  local_c8 = v;
  local_c4 = ox;
  if (0 < lVar9) {
    do {
      vOut[0] = (*vec)[0];
      if (0 < wn) {
        auVar10._0_8_ = 60000;
        local_b0 = 45000;
        uStack_ac = 0;
        local_c0 = 4000;
        uStack_bc = 0;
        piVar12 = &DAT_0041eb8c + iVar16 * 4;
        iVar14 = wn;
        puVar2 = &iout_1024 + iVar16 * 4;
        do {
          local_a0 = auVar10._0_4_;
          uStack_9c = auVar10._4_4_;
          uStack_98 = auVar10._8_4_;
          uStack_94 = auVar10._12_4_;
          local_90 = (int)lVar9;
          uStack_8c = (undefined4)((ulong)lVar9 >> 0x20);
          local_80 = (int)lVar18;
          uStack_7c = (undefined4)((ulong)lVar18 >> 0x20);
          local_70 = (int)lVar17;
          uStack_6c = (undefined4)((ulong)lVar17 >> 0x20);
          sceVu0RotTransPers(puVar2,local_d0,vOut,0);
          vOut[0] = vOut[0] + fVar19 / (float)wn;
          auVar10._8_4_ = uStack_98;
          auVar10._0_8_ = CONCAT44(uStack_9c,local_a0);
          auVar10._12_4_ = uStack_94;
          lVar9 = CONCAT44(uStack_8c,local_90);
          lVar18 = CONCAT44(uStack_7c,local_80);
          lVar17 = CONCAT44(uStack_6c,local_70);
          if ((CONCAT44(uStack_9c,local_a0) < (ulong)(long)piVar12[-3]) ||
             (CONCAT44(uStack_ac,local_b0) < (ulong)(long)piVar12[-2])) {
            piVar12[-3] = -1;
          }
          else {
            piVar12[-1] = 0;
            iVar4 = local_c0 - (*piVar12 >> 6);
            if (iVar4 < 0) {
              iVar4 = 0;
            }
            *piVar12 = iVar4;
          }
          iVar14 = iVar14 + -1;
          piVar12 = piVar12 + 4;
          iVar16 = iVar16 + 1;
          puVar2 = puVar2 + 4;
        } while (iVar14 != 0);
      }
      lVar15 = (long)((int)lVar15 + -1);
      vOut[2] = vOut[2] + fVar20;
    } while (lVar15 != 0);
  }
  id[2] = wn + 1;
  local_90 = (int)lVar9;
  uStack_8c = (undefined4)((ulong)lVar9 >> 0x20);
  local_80 = (int)lVar18;
  uStack_7c = (undefined4)((ulong)lVar18 >> 0x20);
  local_70 = (int)lVar17;
  uStack_6c = (undefined4)((ulong)lVar17 >> 0x20);
  id[1] = 1;
  id[0] = 0;
  memset(local_100,0,0x10);
  viUV[1] = *local_c8 * 0x10 + oy;
  local_90 = local_90 + -1;
  if (0 < local_90) {
    id[3] = wn;
    do {
      viUV[0] = *local_cc * 0x10 + local_c4;
      iVar16 = wn + -1;
      if (0 < wn + -1) {
        do {
          pauVar6 = (undefined (*) [16])(&iout_1024 + id[1] * 4);
          if (-1 < (int)(*(uint *)*(undefined (*) [16])(&iout_1024 + id[0] * 4) |
                         (&iout_1024)[id[3] * 4] |
                        *(uint *)*(undefined (*) [16])(&iout_1024 + id[2] * 4) | *(uint *)*pauVar6))
          {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
            auVar10 = _psubsw(*pauVar6,*(undefined (*) [16])(&iout_1024 + id[0] * 4));
            auVar11 = _psubsw(*(undefined (*) [16])(&iout_1024 + id[2] * 4),*pauVar6);
                    /* end of inlined section */
            if (-1 < auVar10._0_4_ * auVar11._4_4_ - auVar10._4_4_ * auVar11._0_4_) {
              pQVar13->ul64[0] = 0x80bec00000008001;
              pQVar13->ul64[1] = 0x43434343;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
              viUV[2] = (int)local_f8;
              viUV[3] = (int)((ulong)local_f8 >> 0x20);
              pQVar13[1].iv[0] = viUV[0];
              *(int *)((int)pQVar13 + 0x14) = viUV[1];
              *(int *)((int)pQVar13 + 0x18) = viUV[2];
              *(int *)((int)pQVar13 + 0x1c) = viUV[3];
              uVar1 = *(undefined8 *)(&iout_1024 + id[0] * 4);
              uVar7 = (&DAT_0041eb88)[id[0] * 4];
              uVar8 = (&DAT_0041eb8c)[id[0] * 4];
              pQVar13[2].ui32[0] = (uint)uVar1;
              *(int *)((int)pQVar13 + 0x24) = (int)((ulong)uVar1 >> 0x20);
              *(undefined4 *)((int)pQVar13 + 0x28) = uVar7;
              *(undefined4 *)((int)pQVar13 + 0x2c) = uVar8;
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
                    /* end of inlined section */
              uVar5 = viUV[0] + local_80;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
              pQVar13[3].ui32[0] = uVar5;
              *(int *)((int)pQVar13 + 0x34) = viUV[1];
              *(int *)((int)pQVar13 + 0x38) = viUV[2];
              *(int *)((int)pQVar13 + 0x3c) = viUV[3];
              uVar1 = *(undefined8 *)(&iout_1024 + id[1] * 4);
              uVar7 = (&DAT_0041eb88)[id[1] * 4];
              uVar8 = (&DAT_0041eb8c)[id[1] * 4];
              pQVar13[4].ui32[0] = (uint)uVar1;
              *(int *)((int)pQVar13 + 0x44) = (int)((ulong)uVar1 >> 0x20);
              *(undefined4 *)((int)pQVar13 + 0x48) = uVar7;
              *(undefined4 *)((int)pQVar13 + 0x4c) = uVar8;
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
                    /* end of inlined section */
              iVar14 = viUV[1] + local_70;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
              pQVar13[5].ui32[0] = uVar5;
              *(int *)((int)pQVar13 + 0x54) = iVar14;
              *(int *)((int)pQVar13 + 0x58) = viUV[2];
              *(int *)((int)pQVar13 + 0x5c) = viUV[3];
              uVar1 = *(undefined8 *)(&iout_1024 + id[2] * 4);
              uVar7 = (&DAT_0041eb88)[id[2] * 4];
              uVar8 = (&DAT_0041eb8c)[id[2] * 4];
              pQVar13[6].ui32[0] = (uint)uVar1;
              *(int *)((int)pQVar13 + 100) = (int)((ulong)uVar1 >> 0x20);
              *(undefined4 *)((int)pQVar13 + 0x68) = uVar7;
              *(undefined4 *)((int)pQVar13 + 0x6c) = uVar8;
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
                    /* end of inlined section */
              viUV[0] = uVar5 - local_80;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
              pQVar13[7].ui32[0] = viUV[0];
              *(int *)((int)pQVar13 + 0x74) = iVar14;
              *(int *)((int)pQVar13 + 0x78) = viUV[2];
              *(int *)((int)pQVar13 + 0x7c) = viUV[3];
              uVar1 = *(undefined8 *)(&iout_1024 + id[3] * 4);
              uVar7 = (&DAT_0041eb88)[id[3] * 4];
              uVar8 = (&DAT_0041eb8c)[id[3] * 4];
              pQVar13[8].ui32[0] = (uint)uVar1;
              *(int *)((int)pQVar13 + 0x84) = (int)((ulong)uVar1 >> 0x20);
              *(undefined4 *)((int)pQVar13 + 0x88) = uVar7;
              *(undefined4 *)((int)pQVar13 + 0x8c) = uVar8;
                    /* end of inlined section */
              pQVar13 = pQVar13 + 9;
              viUV[1] = iVar14 - local_70;
            }
          }
          iVar16 = iVar16 + -1;
          viUV[0] = viUV[0] + local_80;
          auVar11._4_4_ = id[1];
          auVar11._0_4_ = id[0];
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
          auVar11._8_4_ = id[2];
          auVar11._12_4_ = id[3];
          auVar10 = _paddsw(auVar11,(undefined  [16])s_iv1111);
          id[0] = auVar10._0_4_;
          id[1] = auVar10._4_4_;
          id[2] = auVar10._8_4_;
          id[3] = auVar10._12_4_;
        } while (iVar16 != 0);
      }
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
                    /* end of inlined section */
      viUV[1] = viUV[1] + local_70;
      auVar3._4_4_ = id[1];
      auVar3._0_4_ = id[0];
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
      auVar3._8_4_ = id[2];
      auVar3._12_4_ = id[3];
      auVar10 = _paddsw(auVar3,(undefined  [16])s_iv1111);
      id[0] = auVar10._0_4_;
      id[1] = auVar10._4_4_;
      id[2] = auVar10._8_4_;
      id[3] = auVar10._12_4_;
                    /* end of inlined section */
      local_90 = local_90 + -1;
    } while (local_90 != 0);
  }
  return pQVar13;
}

static void MapSkyDrawTen(MAP_SKY_ST *skp, float *rot) {
	Q_WORDDATA *pbuf;
	float mat[4][4];
	static float tes[4][4] = {
		/* [0] = */ {
			/* [0] = */ -24000.f,
			/* [1] = */ 0.f,
			/* [2] = */ -24000.f,
			/* [3] = */ 1.f
		},
		/* [1] = */ {
			/* [0] = */ 24000.f,
			/* [1] = */ 0.f,
			/* [2] = */ -24000.f,
			/* [3] = */ 1.f
		},
		/* [2] = */ {
			/* [0] = */ 24000.f,
			/* [1] = */ 0.f,
			/* [2] = */ 24000.f,
			/* [3] = */ 1.f
		},
		/* [3] = */ {
			/* [0] = */ -24000.f,
			/* [1] = */ 0.f,
			/* [2] = */ 24000.f,
			/* [3] = */ 1.f
		}
	};
	int move;
	int iWork;
	int tu[4];
	int tv[4];
	int fc[3];
	int iMstFrame;
	int *out;
	int fr;
	int fg;
	int fb;
	
  ulong uVar1;
  int iVar2;
  int iVar3;
  Q_WORDDATA *pQVar4;
  uint ox;
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined auVar11 [16];
  undefined auVar12 [16];
  float mat [4] [4];
  int tu [4];
  int tv [4];
  int fc [3];
  
  ox = 0;
  if (0 < skp->frame) {
    iVar2 = MapSpAraCheck__Fv();
    if (iVar2 == 0) {
      iVar2 = skp->frame;
    }
    else {
      iVar2 = (skp->frame * 100) / 0xaa;
    }
    if (iVar2 == 0) {
      trap(7);
    }
    iVar3 = MapSkyFrame << 0xc;
    MapSkyFrame = MapSkyFrame + 1;
    ox = iVar3 / iVar2 & 0xfff;
    if (iVar2 <= MapSkyFrame) {
      MapSkyFrame = MapSkyFrame - iVar2;
    }
  }
  if (DAT_003ed89c <= *rot) {
    tes_1037._4_4_ = skp->hight;
    tu[0] = 0;
    tu[3] = 0;
    tu[1] = (int)(skp->scale_min * 255.0);
    tv[0] = 0;
    tv[1] = 0;
    tu[2] = tu[1];
    tv[2] = tu[1];
    tv[3] = tu[1];
    sceVu0UnitMatrix(mat);
    sceVu0RotMatrixY(-rot[1],mat,mat);
    sceVu0RotMatrixX(-*rot,mat,mat);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
    auVar5 = _lqc2((undefined  [16])MapSkyPers[0]);
    auVar6 = _lqc2((undefined  [16])MapSkyPers[1]);
    auVar7 = _lqc2((undefined  [16])MapSkyPers[2]);
    auVar8 = _lqc2((undefined  [16])MapSkyPers[3]);
    auVar9 = _lqc2((undefined  [16])mat[0]);
    auVar10 = _lqc2((undefined  [16])mat[1]);
    auVar11 = _lqc2((undefined  [16])mat[2]);
    auVar12 = _lqc2((undefined  [16])mat[3]);
    _vmulabc(auVar5,auVar9);
    _vmaddabc(auVar6,auVar9);
    _vmaddabc(auVar7,auVar9);
    auVar9 = _vmaddbc(auVar8,auVar9);
    _vmulabc(auVar5,auVar10);
    _vmaddabc(auVar6,auVar10);
    _vmaddabc(auVar7,auVar10);
    auVar10 = _vmaddbc(auVar8,auVar10);
    _vmulabc(auVar5,auVar11);
    _vmaddabc(auVar6,auVar11);
    _vmaddabc(auVar7,auVar11);
    auVar11 = _vmaddbc(auVar8,auVar11);
    _vmulabc(auVar5,auVar12);
    _vmaddabc(auVar6,auVar12);
    _vmaddabc(auVar7,auVar12);
    auVar5 = _vmaddbc(auVar8,auVar12);
    mat[0] = (float  [4])_sqc2(auVar9);
    mat[1] = (float  [4])_sqc2(auVar10);
    mat[2] = (float  [4])_sqc2(auVar11);
    mat[3] = (float  [4])_sqc2(auVar5);
                    /* end of inlined section */
    pQVar4 = GetPK2Dbuf__Fv();
    pQVar4->ul64[0] = 0x1000000000008002;
    pQVar4->ul64[1] = 0xe;
    uVar1 = MapSkyTex0;
    *(undefined8 *)((int)pQVar4 + 0x18) = 0x3f;
    pQVar4[1].ul64[0] = 0;
    pQVar4[2].ul64[0] = uVar1;
    *(undefined8 *)((int)pQVar4 + 0x28) = 6;
    fc[0] = skp->fr;
    fc[1] = skp->fg;
    fc[2] = skp->fb;
    iVar2 = gra3dIsMonotoneDrawEnable__Fv();
    if (iVar2 != 0) {
      fc[0] = (fc[0] + fc[1] + fc[2]) / 3;
      fc[1] = fc[0];
      fc[2] = fc[0];
    }
    pQVar4 = MapSkyBlockPoly__FP10Q_WORDDATAPA3_fT1PiT3iiiiiiii
                       (pQVar4 + 3,mat,(float (*) [4])tes_1037,tu,tv,0x17,0x17,ox,0,fc[0],fc[1],
                        fc[2],skp->fa);
    EndPK2Dbuf__FP10Q_WORDDATA(pQVar4);
  }
  return;
}

void MapSkyRegist() {
	int i;
	int sora_max;
	
  int iVar1;
  void *pvVar2;
  fixed_array<unsigned_int,12> *pfVar3;
  int iVar4;
  int iVar5;
  int num;
  
  pfVar3 = &MapSkyDatAddr;
  iVar1 = *(int *)MapSkyTopAddr;
  num = iVar1 + -2;
  iVar5 = 0;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
    iVar4 = iVar5 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1ZUi_UiUi_PX01(iVar5,0xc);
    *(uint *)pfVar3 = 0;
                    /* end of inlined section */
    pfVar3 = (fixed_array<unsigned_int,12> *)((int)pfVar3 + 4);
    iVar5 = iVar4;
  } while (iVar4 < 0xc);
  iVar5 = 0;
  if (0 < num) {
    pfVar3 = &MapSkyDatAddr;
    do {
      iVar4 = iVar5 + 1;
      pvVar2 = GetFileInPak__FPvi((void *)MapSkyTopAddr,iVar5);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1ZUi_UiUi_PX01(iVar5,0xc);
      *(void **)pfVar3 = pvVar2;
                    /* end of inlined section */
      iVar5 = iVar5 + 2;
      pvVar2 = GetFileInPak__FPvi((void *)MapSkyTopAddr,iVar4);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1ZUi_UiUi_PX01(iVar4,0xc);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      *(void **)((int)pfVar3 + 4) = pvVar2;
      pfVar3 = (fixed_array<unsigned_int,12> *)((int)pfVar3 + 8);
                    /* end of inlined section */
      if (num <= iVar5) break;
    } while (iVar5 < 10);
  }
                    /* end of inlined section */
  pvVar2 = GetFileInPak__FPvi((void *)MapSkyTopAddr,num);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1ZUi_UiUi_PX01(10,0xc);
                    /* end of inlined section */
  MapSkyDatAddr.field0_0x0.m_aData[10] = (uint)pvVar2;
  pvVar2 = GetFileInPak__FPvi((void *)MapSkyTopAddr,iVar1 + -1);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1ZUi_UiUi_PX01(0xb,0xc);
  MapSkyDatAddr.field0_0x0.m_aData[11] = (uint)pvVar2;
                    /* end of inlined section */
  MapSkyFlg = MapSkyFlg & 0xfffffffe;
  return;
}

void MapSkyProc() {
	int ivec[4];
	GRA3DCAMERA *pCam;
	float c_rot[4];
	
  MAP_SKY_DB *pMVar1;
  GRA3DCAMERA *pCam;
  float (*p0) [4];
  uint clip;
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  int ivec [4];
  float c_rot [4];
  undefined local_90 [16];
  undefined local_80 [16];
  undefined local_70 [16];
  undefined local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  float local_38;
  undefined4 uStack_34;
  
  if (((MapSkyFlg & 1U) == 0) &&
     (MapSkyDp = MapSkyGetDatNowArea__Fv(), MapSkyDp != (MAP_SKY_DB *)0x0)) {
    pCam = gra3dGetCamera__Fv();
    p0 = gra3dcamGetPosition__Fv();
    GetTrgtRot__FPCfT0Pfi((float *)p0,pCam->vTarget,c_rot,3);
    MapSkyGetPerspectiveMatrix__FPA3_fPC11GRA3DCAMERAf(MapSkyPers,pCam,DAT_003ed8a0);
    pMVar1 = MapSkyDp;
    local_40 = 0;
    uStack_3c = 0;
    local_38 = MapSkyDp->len;
    uStack_34 = 0x3f800000;
    local_50 = 0;
    local_48 = CONCAT44(0x3f800000,local_38);
    sceVu0UnitMatrix(local_90);
    sceVu0RotMatrixX(-c_rot[0],local_90,local_90);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
    auVar2 = _lqc2((undefined  [16])MapSkyPers[0]);
    auVar3 = _lqc2((undefined  [16])MapSkyPers[1]);
    auVar4 = _lqc2((undefined  [16])MapSkyPers[2]);
    auVar5 = _lqc2((undefined  [16])MapSkyPers[3]);
    auVar6 = _lqc2(local_90);
    auVar7 = _lqc2(local_80);
    auVar8 = _lqc2(local_70);
    auVar9 = _lqc2(local_60);
    _vmulabc(auVar2,auVar6);
    _vmaddabc(auVar3,auVar6);
    _vmaddabc(auVar4,auVar6);
    auVar6 = _vmaddbc(auVar5,auVar6);
    _vmulabc(auVar2,auVar7);
    _vmaddabc(auVar3,auVar7);
    _vmaddabc(auVar4,auVar7);
    auVar7 = _vmaddbc(auVar5,auVar7);
    _vmulabc(auVar2,auVar8);
    _vmaddabc(auVar3,auVar8);
    _vmaddabc(auVar4,auVar8);
    auVar8 = _vmaddbc(auVar5,auVar8);
    _vmulabc(auVar2,auVar9);
    _vmaddabc(auVar3,auVar9);
    _vmaddabc(auVar4,auVar9);
    auVar2 = _vmaddbc(auVar5,auVar9);
    local_90 = _sqc2(auVar6);
    local_80 = _sqc2(auVar7);
    local_70 = _sqc2(auVar8);
    local_60 = _sqc2(auVar2);
                    /* end of inlined section */
    sceVu0RotTransPers(ivec,local_90,&local_50,0);
    clip = (uint)(ivec[0] < 0x4000);
    if (0xc000 < ivec[0]) {
      clip = ivec[0] < 0x4000 | 2;
    }
    ivec[1] = ((ivec[1] + -0x8000) * pMVar1->move_y >> 8) + 0x8000 + pMVar1->offset_y2 * 0x10;
    if (ivec[1] < 0x4000) {
      clip = clip | 4;
    }
    if (0xc000 < ivec[1]) {
      clip = clip | 8;
    }
    if ((uint)ivec[2] < 0xf) {
      clip = clip | 0x10;
    }
    if (0xffffff < (uint)ivec[2]) {
      clip = clip | 0x20;
    }
    MapSkySetBg__FiiPfi(ivec[1],(int)(MapSkyDp->scale * 255.0),c_rot,clip);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1ZUi_UiUi_PX01(2,0xc);
    MapSkySetTim2Vram__FPUi(MapSkyDatAddr.field0_0x0.m_aData + 2);
                    /* end of inlined section */
    MapSkyDrawTen__FP10MAP_SKY_STPf(MapSkyDp->sky_stat + 1,c_rot);
    if (clip == 0) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1ZUi_UiUi_PX01(10,0xc);
      MapSkySetTim2Vram__FPUi(MapSkyDatAddr.field0_0x0.m_aData + 10);
                    /* end of inlined section */
      MapSkyDraw__FRA3_ifP10MAP_SKY_DB((int (*) [4])ivec,c_rot[1],MapSkyDp);
    }
  }
  return;
}

u_int MapSkyInit(u_int mst_addr) {
  uint uVar1;
  
  MapSkyFlg = MapSkyFlg | 1;
  MapSkyX = 0.0;
  MapSkyRotY = 0.0;
  MapSkyTopAddr = mst_addr;
  uVar1 = LoadReqGetAddr__FiUiPi(0x9d,mst_addr,(int *)0x0);
  return uVar1;
}

u_int* unsigned int * _fixed_array_verifyrange<unsigned int>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_849);
  return (uint *)v;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  return;
}

static void global constructors keyed to MapSkyGetTex0() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
