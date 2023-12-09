// STATUS: NOT STARTED

#include "spr_stack.h"

struct CStackMem {
private:
	void *mp_Adrs;
	void *mp_EndAdrs;
	
public:
	CStackMem& operator=();
	CStackMem();
	CStackMem();
	void* GetPush();
	void FreePop();
};

CStackMem zero2_spr_stack = {
	/* .mp_Adrs = */ NULL,
	/* .mp_EndAdrs = */ NULL
};

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3c7cf8;
	
  g3ddbgAssert__FbPCce(false,str_744);
  return;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_void__003f4580,_max,v);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_char__003f4588,_max,v);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi("unsigned int*",_max,v);
  }
  return (uint **)0x0;
}

void* spr_stackGetMem(int size) {
	static char __FUNCTION__[16] = {
		/* [0] = */ 115,
		/* [1] = */ 112,
		/* [2] = */ 114,
		/* [3] = */ 95,
		/* [4] = */ 115,
		/* [5] = */ 116,
		/* [6] = */ 97,
		/* [7] = */ 99,
		/* [8] = */ 107,
		/* [9] = */ 71,
		/* [10] = */ 101,
		/* [11] = */ 116,
		/* [12] = */ 77,
		/* [13] = */ 101,
		/* [14] = */ 109,
		/* [15] = */ 0
	};
	void *ret;
	
  uint uVar1;
  void *pvVar2;
  void *pvVar3;
  
                    /* inlined from stack_mem.h */
                    /* end of inlined section */
                    /* inlined from stack_mem.h */
  uVar1 = GetAlignUp(size,4);
                    /* end of inlined section */
                    /* inlined from stack_mem.h */
  pvVar2 = (void *)((int)zero2_spr_stack.mp_Adrs + uVar1);
                    /* end of inlined section */
                    /* inlined from stack_mem.h */
  pvVar3 = (void *)0x0;
                    /* end of inlined section */
                    /* inlined from stack_mem.h */
  if (pvVar2 <= zero2_spr_stack.mp_EndAdrs) {
    pvVar3 = zero2_spr_stack.mp_Adrs;
  }
                    /* end of inlined section */
  zero2_spr_stack.mp_Adrs = pvVar2;
  if (pvVar3 == (void *)0x0) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Cannot Get Scratch Pad Memory");
  }
  return pvVar3;
}

void spr_stackFreeMem(int size) {
  uint uVar1;
  
                    /* inlined from stack_mem.h */
  uVar1 = GetAlignUp(size,4);
                    /* end of inlined section */
                    /* inlined from stack_mem.h */
  zero2_spr_stack.mp_Adrs = (void *)((int)zero2_spr_stack.mp_Adrs - uVar1);
                    /* end of inlined section */
  return;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
	void *p_Adrs;
	void *p_EndAdrs;
	
  if ((__priority == 0xffff) && (__initialize_p == 1)) {
                    /* inlined from stack_mem.h */
    zero2_spr_stack.mp_Adrs = &DAT_70003900;
    zero2_spr_stack.mp_EndAdrs = (void *)0x70004000;
  }
  return;
}

static void global constructors keyed to zero2_spr_stack() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
