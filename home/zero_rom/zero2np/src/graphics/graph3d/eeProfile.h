// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_GRAPH3D_EEPROFILE_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_GRAPH3D_EEPROFILE_H

struct PROFILEFUNCTION {
	void *pThisFunction;
	void *pCallSite;
};

extern int g_iCallStackCount;
extern PROFILEFUNCTION g_aProfileFunction[256];

void __cyg_profile_func_enter(void *this_fn, void *call_site);
void __cyg_profile_func_exit(void *this_fn, void *call_site);

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_GRAPH3D_EEPROFILE_H
