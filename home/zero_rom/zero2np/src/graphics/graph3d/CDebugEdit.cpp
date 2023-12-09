// STATUS: NOT STARTED

#include "CDebugEdit.h"

struct iterator_traits<IEditObject **> {
};

struct __type_traits<IEditObject *> {
};

// warning: multiple differing types with the same name (#3, type name not equal)
typedef __true_type _Trivial_destructor;
// warning: multiple differing types with the same name (#3, descriptor not equal)
typedef IEditObject *_Tp;

struct __copy_dispatch<IEditObject **,IEditObject **,__true_type> {
	__copy_dispatch<IEditObject **,IEditObject **,__true_type>& operator=();
	__copy_dispatch();
	__copy_dispatch();
	static IEditObject** copy(/* parameters unknown */);
};

struct __copy_backward_dispatch<IEditObject **,IEditObject **,__true_type> {
	__copy_backward_dispatch<IEditObject **,IEditObject **,__true_type>& operator=();
	__copy_backward_dispatch();
	__copy_backward_dispatch();
	static IEditObject** copy(/* parameters unknown */);
};

// warning: multiple differing types with the same name (#3, type name not equal)
typedef __true_type _Is_POD;

struct CEditRoot : IEditObject {
	vector<IEditObject *> m_vpEditItem;
	
	CEditRoot& operator=();
	CEditRoot(char *pStr, CEditRoot *pParentRoot);
	static void* operator new(/* parameters unknown */);
	static void* operator new [](/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
	static void operator delete [](/* parameters unknown */);
	CEditRoot(char *pStr, CEditRoot *pParentRoot);
	CEditRoot(char *pStr, CEditRoot *pParentRoot);
	/* vtable[1] */ virtual CEditRoot(char *pStr, CEditRoot *pParentRoot);
	/* vtable[2] */ virtual int IsItem();
	int Create(char *strLabel);
	/* vtable[8] */ virtual void Clear();
	CEditRoot* AddRoot(char *pStr);
	void SwitchNextItem();
	void SwitchPrevItem();
	int GetNumObject();
	IEditObject* GetObject(char *strLabel, int n);
	IEditObject* GetObject(char *strLabel, int n);
	/* vtable[9] */ virtual char* TypeString();
};

struct custom_allocator<IEditObject *> {
	__vtbl_ptr_type *__vtable;
	
	custom_allocator<IEditObject *>& operator=();
	IEditObject** address();
	IEditObject** address();
	custom_allocator();
	custom_allocator();
	/* vtable[1] */ virtual IEditObject** custom_allocate(size_t _Count);
	IEditObject** allocate();
	IEditObject** allocate();
	/* vtable[2] */ virtual void custom_deallocate(void *_Ptr);
	void deallocate();
	void construct();
	void destroy();
	size_t max_size();
};

struct IEditObject {
protected:
	string m_strLabel;
	LPFUNC_ONEDITVALUECHANGED m_fpOnValueChanged;
	void *m_pContext;
	CEditRoot *m_pParentRoot;
public:
	__vtbl_ptr_type *__vtable;
	
	IEditObject& operator=();
	IEditObject();
	IEditObject();
	/* vtable[1] */ virtual IEditObject(IEditObject*, int, void);
	/* vtable[2] */ virtual int IsItem();
	/* vtable[3] */ virtual char* ValueString();
	/* vtable[4] */ virtual void Inc(float fScale, int bExecCallback);
	/* vtable[5] */ virtual void Inc(float fScale, int bExecCallback);
	/* vtable[6] */ virtual void Dec(float fScale, int bExecCallback);
	/* vtable[7] */ virtual void Dec(float fScale, int bExecCallback);
	/* vtable[8] */ virtual void Clear();
	char* LabelString();
	/* vtable[9] */ virtual char* TypeString();
	/* vtable[10] */ virtual type_info& TypeInfo();
	void SetHandler();
	CEditRoot* GetParentRoot();
};

Rep basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> >::nilRep = {
	/* .len = */ 0,
	/* .res = */ 0,
	/* .ref = */ 1,
	/* .selfish = */ false
};

__vtbl_ptr_type ctl::custom_allocator<char> virtual table[4] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ 0x2af538,
		/* .__delta2 = */ -2760
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ 0x2af5b8,
		/* .__delta2 = */ -2632
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ 0x2af578,
		/* .__delta2 = */ -2696
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type CEditRoot virtual table[12] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ 0x2af438,
		/* .__delta2 = */ -3016
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ CEditRoot::~CEditRoot,
		/* .__delta2 = */ 2472
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ 0x2af508,
		/* .__delta2 = */ -2808
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ 0x2af3a8,
		/* .__delta2 = */ -3160
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ 0x2af3b0,
		/* .__delta2 = */ -3152
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ 0x2af3b8,
		/* .__delta2 = */ -3144
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ 0x2af3c0,
		/* .__delta2 = */ -3136
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ 0x2af3c8,
		/* .__delta2 = */ -3128
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ CEditRoot::Clear,
		/* .__delta2 = */ 2768
	},
	/* [9] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ 0x2af528,
		/* .__delta2 = */ -2776
	},
	/* [10] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ 0x2af3e0,
		/* .__delta2 = */ -3104
	},
	/* [11] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type ctl::custom_allocator<IEditObject *> virtual table[4] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ 0x2af3f8,
		/* .__delta2 = */ -3080
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ 0x2af5d8,
		/* .__delta2 = */ -2600
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ 0x2af598,
		/* .__delta2 = */ -2664
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type IEditObject virtual table[12] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ 0x2af2e0,
		/* .__delta2 = */ -3360
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ 0x2af320,
		/* .__delta2 = */ -3296
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ __pure_virtual,
		/* .__delta2 = */ -12168
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ 0x2af3a8,
		/* .__delta2 = */ -3160
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ 0x2af3b0,
		/* .__delta2 = */ -3152
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ 0x2af3b8,
		/* .__delta2 = */ -3144
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ 0x2af3c0,
		/* .__delta2 = */ -3136
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ 0x2af3c8,
		/* .__delta2 = */ -3128
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ 0x2af3d0,
		/* .__delta2 = */ -3120
	},
	/* [9] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ 0x2af3d8,
		/* .__delta2 = */ -3112
	},
	/* [10] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ 0x2af3e0,
		/* .__delta2 = */ -3104
	},
	/* [11] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

unsigned char IEditObject type_info node[8];
unsigned char ctl::custom_allocator<IEditObject *> type_info node[8];
unsigned char CEditRoot type_info node[12];
unsigned char ctl::custom_allocator<char> type_info node[8];
size_t basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> >::npos = 65535;
bool _Alloc_traits<IEditObject *, ctl::custom_allocator<IEditObject *> >::_S_instanceless = false;

CEditRoot* CEditRoot::CEditRoot() {
	IEditObject *this;
	size_t pos;
	
  undefined *puVar1;
  __vtbl_ptr_type *p_Var2;
  custom_allocator<IEditObject_*>__vtable *pcVar3;
  undefined **ppuVar4;
  
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from CDebugEdit.h */
                    /* end of inlined section */
                    /* inlined from CDebugEdit.h */
                    /* end of inlined section */
                    /* inlined from CDebugEdit.h */
  this[4].__vtable = (custom_allocator<IEditObject_*>__vtable *)_vt_11IEditObject;
                    /* inlined from custom/bastring.h */
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var2 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var2 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep
                       (0x369d78);
  }
  this->__vtable = (custom_allocator<IEditObject_*>__vtable *)p_Var2;
  ppuVar4 = &((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0x18))->custom_deallocate;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,*ppuVar4,1);
    p_Var2 = (__vtbl_ptr_type *)this->__vtable;
    ppuVar4 = &((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0x18))->custom_deallocate
    ;
  }
  ppuVar4[3] = (undefined *)0x1;
  if (1 < ppuVar4[2]) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,*ppuVar4,1);
    p_Var2 = (__vtbl_ptr_type *)this->__vtable;
  }
  ((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0xc))->custom_deallocate =
       &GRA3DVU1MEM_VF02;
  pcVar3 = (custom_allocator<IEditObject_*>__vtable *)p_Var2;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0x18))->
                    custom_deallocate,1);
    pcVar3 = this->__vtable;
  }
  pcVar3[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  puVar1 = pcVar3[-2].custom_deallocate;
  if (&GRA3DVU1MEM_VF02 < pcVar3[-1].custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,puVar1,1);
    pcVar3 = this->__vtable;
  }
  pcVar3[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  replace__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUiUiUic
            (this,(int)p_Var2 - (int)pcVar3,puVar1 + ((int)&pcVar3->field_0x0 - (int)p_Var2),0,0);
  pcVar3 = this->__vtable;
  if (&GRA3DVU1MEM_VF02 < pcVar3[-1].custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,pcVar3[-2].custom_deallocate,1);
    this->__vtable[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  }
  else {
    pcVar3[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  }
                    /* inlined from CDebugEdit.h */
  this[1].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
  this[2].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
                    /* end of inlined section */
  this[4].__vtable = (custom_allocator<IEditObject_*>__vtable *)_vt_9CEditRoot;
  this[3].__vtable = (custom_allocator<IEditObject_*>__vtable *)this;
                    /* inlined from ctl.h */
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* end of inlined section */
                    /* inlined from ctl.h */
  this[5].__vtable =
       (custom_allocator<IEditObject_*>__vtable *)_vt_Q23ctlt16custom_allocator1ZP11IEditObject;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[8].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[6].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
  this[7].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
                    /* end of inlined section */
  return (IEditObject **)_vt_9CEditRoot;
}

CEditRoot* CEditRoot::CEditRoot(char *pStr, CEditRoot *pParentRoot) {
	size_t pos;
	
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  __vtbl_ptr_type *p_Var10;
  CEditRoot *pCVar11;
  size_t sVar12;
  __vtbl_ptr_type *p_Var13;
  
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from CDebugEdit.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from CDebugEdit.h */
                    /* end of inlined section */
                    /* inlined from CDebugEdit.h */
  (this->field0_0x0).__vtable = (IEditObject__vtable *)_vt_11IEditObject;
                    /* inlined from custom/bastring.h */
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var10 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var10 = (__vtbl_ptr_type *)
              clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep
                        (0x369d78);
  }
  (this->field0_0x0).m_strLabel.dat = (char *)p_Var10;
  p_Var13 = p_Var10 + -2;
  uVar1._0_2_ = p_Var10[-0xffffffff00000001].__delta;
  uVar1._2_2_ = p_Var10[-0xffffffff00000001].__index;
  if (1 < uVar1) {
    uVar2._0_2_ = p_Var13->__delta;
    uVar2._2_2_ = p_Var13->__index;
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib(this,uVar2,1)
    ;
    p_Var10 = (__vtbl_ptr_type *)(this->field0_0x0).m_strLabel.dat;
    p_Var13 = p_Var10 + -2;
  }
  uVar3._0_2_ = p_Var13[1].__delta;
  uVar3._2_2_ = p_Var13[1].__index;
  *(undefined4 *)&p_Var13[1].__delta2 = 1;
  if (1 < uVar3) {
    uVar4._0_2_ = p_Var13->__delta;
    uVar4._2_2_ = p_Var13->__index;
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib(this,uVar4,1)
    ;
    p_Var10 = (__vtbl_ptr_type *)(this->field0_0x0).m_strLabel.dat;
  }
  uVar5._0_2_ = p_Var10[-0xffffffff00000001].__delta;
  uVar5._2_2_ = p_Var10[-0xffffffff00000001].__index;
  *(undefined4 *)&p_Var10[-1].__delta2 = 1;
  p_Var13 = p_Var10;
  if (1 < uVar5) {
    uVar6._0_2_ = p_Var10[-0xffffffff00000002].__delta;
    uVar6._2_2_ = p_Var10[-0xffffffff00000002].__index;
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib(this,uVar6,1)
    ;
    p_Var13 = (__vtbl_ptr_type *)(this->field0_0x0).m_strLabel.dat;
  }
  uVar7._0_2_ = p_Var13[-0xffffffff00000001].__delta;
  uVar7._2_2_ = p_Var13[-0xffffffff00000001].__index;
  *(undefined4 *)&p_Var13[-1].__delta2 = 1;
  iVar8 = *(int *)(p_Var13 + -2);
  if (1 < uVar7) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib(this,iVar8,1)
    ;
    p_Var13 = (__vtbl_ptr_type *)(this->field0_0x0).m_strLabel.dat;
  }
  *(undefined4 *)&p_Var13[-1].__delta2 = 1;
  replace__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUiUiUic
            (this,(int)p_Var10 - (int)p_Var13,(char *)((int)p_Var13 + (iVar8 - (int)p_Var10)),0,0);
  pcVar9 = (this->field0_0x0).m_strLabel.dat;
  if (*(uint *)(pcVar9 + -8) < 2) {
    *(undefined4 *)(pcVar9 + -4) = 1;
  }
  else {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,*(undefined4 *)(pcVar9 + -0x10),1);
    *(undefined4 *)((this->field0_0x0).m_strLabel.dat + -4) = 1;
  }
                    /* inlined from CDebugEdit.h */
  (this->field0_0x0).m_fpOnValueChanged = (undefined1 *)0x0;
  (this->field0_0x0).m_pContext = (void *)0x0;
  (this->field0_0x0).m_pParentRoot = (CEditRoot *)0x0;
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* end of inlined section */
  (this->field0_0x0).__vtable = (IEditObject__vtable *)_vt_9CEditRoot;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  (this->m_vpEditItem).field0_0x0.field0_0x0.field0_0x0._M_start = (IEditObject **)0x0;
                    /* inlined from ctl.h */
  (this->m_vpEditItem).field0_0x0.field0_0x0.field0_0x0._M_data_allocator.__vtable =
       (custom_allocator<IEditObject_*>__vtable *)_vt_Q23ctlt16custom_allocator1ZP11IEditObject;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  (this->m_vpEditItem).field0_0x0.field0_0x0.field0_0x0._M_finish = (IEditObject **)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  (this->m_vpEditItem).field0_0x0.field0_0x0.field0_0x0._M_end_of_storage = (IEditObject **)0x0;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/std/straits.h */
  sVar12 = strlen(pStr);
                    /* inlined from custom/bastring.h */
  pCVar11 = (CEditRoot *)
            replace__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUiUiPCcUi
                      (this,0,0xffffffffffffffff,pStr,sVar12);
                    /* end of inlined section */
  (this->field0_0x0).m_pParentRoot = pParentRoot;
                    /* end of inlined section */
  return pCVar11;
}

void CEditRoot::~CEditRoot(int __in_chrg) {
  IEditObject **ppIVar1;
  custom_allocator<IEditObject_*>__vtable *pcVar2;
  char *pcVar3;
  int iVar4;
  vector<IEditObject_*> *pvVar5;
  __vtbl_ptr_type *local_30;
  
  pvVar5 = &this->m_vpEditItem;
  (this->field0_0x0).__vtable = (IEditObject__vtable *)_vt_9CEditRoot;
  _delete_ContainerPtr_ForEach__H1ZQ23ctlt6vector1ZP11IEditObject_RX01_v(pvVar5);
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_construct.h */
  ppIVar1 = (this->m_vpEditItem).field0_0x0.field0_0x0.field0_0x0._M_start;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  if (ppIVar1 != (IEditObject **)0x0) {
                    /* inlined from ctl.h */
    pcVar2 = (pvVar5->field0_0x0).field0_0x0.field0_0x0._M_data_allocator.__vtable;
    (*(code *)pcVar2[1].custom_deallocate)
              ((int)&(pvVar5->field0_0x0).field0_0x0.field0_0x0._M_data_allocator.__vtable +
               (int)*(short *)&pcVar2[1].custom_allocate,ppIVar1);
  }
                    /* inlined from custom/bastring.h */
  pcVar3 = (this->field0_0x0).m_strLabel.dat;
                    /* inlined from CDebugEdit.h */
                    /* inlined from custom/bastring.h */
                    /* inlined from CDebugEdit.h */
  (this->field0_0x0).__vtable = (IEditObject__vtable *)_vt_11IEditObject;
                    /* inlined from custom/bastring.h */
  iVar4 = *(int *)(pcVar3 + -8);
                    /* inlined from ctl.h */
                    /* inlined from custom/bastring.h */
  *(int *)(pcVar3 + -8) = iVar4 + -1;
  if (iVar4 + -1 == 0) {
                    /* inlined from ctl.h */
    local_30 = _vt_Q23ctlt16custom_allocator1Zc;
    (*(code *)_vt_Q23ctlt16custom_allocator1Zc[2]._4_4_)
              ((int)&local_30 + (int)(short)_vt_Q23ctlt16custom_allocator1Zc[2].__delta,
               pcVar3 + -0x10);
  }
                    /* end of inlined section */
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from CDebugEdit.h */
    g3dFree__FPv(this);
  }
  return;
}

int CEditRoot::Create(char *strLabel) {
  size_t sVar1;
  
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/std/straits.h */
  sVar1 = strlen(strLabel);
                    /* inlined from custom/bastring.h */
  replace__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUiUiPCcUi
            (this,0,0xffffffffffffffff,strLabel,sVar1);
                    /* end of inlined section */
  return 1;
}

void CEditRoot::Clear() {
	int i;
	
  IEditObject *pIVar1;
  IEditObject **ppIVar2;
  IEditObject **ppIVar3;
  IEditObject **ppIVar4;
  int iVar5;
  
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
                    /* end of inlined section */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  iVar5 = 0;
  if (0 < (int)(this->m_vpEditItem).field0_0x0.field0_0x0.field0_0x0._M_finish -
          (int)(this->m_vpEditItem).field0_0x0.field0_0x0.field0_0x0._M_start >> 2) {
    do {
      ppIVar3 = (this->m_vpEditItem).field0_0x0.field0_0x0.field0_0x0._M_start;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
      ppIVar4 = ppIVar3 + iVar5;
                    /* end of inlined section */
      pIVar1 = *ppIVar4;
      iVar5 = iVar5 + 1;
      if (pIVar1 != (IEditObject *)0x0) {
        (*(code *)pIVar1->__vtable->ValueString)
                  ((int)&(pIVar1->m_strLabel).dat + (int)*(short *)&pIVar1->__vtable->IsItem,3);
        ppIVar3 = (this->m_vpEditItem).field0_0x0.field0_0x0.field0_0x0._M_start;
      }
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
      ppIVar2 = (this->m_vpEditItem).field0_0x0.field0_0x0.field0_0x0._M_finish;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
      *ppIVar4 = (IEditObject *)0x0;
    } while (iVar5 < (int)ppIVar2 - (int)ppIVar3 >> 2);
  }
  ppIVar3 = (this->m_vpEditItem).field0_0x0.field0_0x0.field0_0x0._M_start;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_algobase.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  ppIVar4 = (this->m_vpEditItem).field0_0x0.field0_0x0.field0_0x0._M_finish;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_algobase.h */
  memmove(ppIVar3,ppIVar4,0);
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_construct.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  (this->m_vpEditItem).field0_0x0.field0_0x0.field0_0x0._M_finish =
       (IEditObject **)
       ((int)(this->m_vpEditItem).field0_0x0.field0_0x0.field0_0x0._M_finish -
       ((int)ppIVar4 - (int)ppIVar3));
  return;
}

CEditRoot* CEditRoot::AddRoot(char *pStr) {
	char str[256];
	vector<IEditObject *,ctl::custom_allocator<IEditObject *> > *this;
	IEditObject *&__x;
	
  CEditRoot **ppCVar1;
  CEditRoot *this_00;
  char str [256];
  CEditRoot *local_7c [3];
  undefined local_30 [48];
  
  vsprintf(str,pStr,local_30);
                    /* inlined from CDebugEdit.h */
  this_00 = (CEditRoot *)g3dMalloc__FUiPCc(0x24,"CEditRoot");
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
                    /* inlined from CDebugEdit.h */
  __9CEditRootPCcP9CEditRoot(this_00,str,this);
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  ppCVar1 = (CEditRoot **)(this->m_vpEditItem).field0_0x0.field0_0x0.field0_0x0._M_finish;
  if (ppCVar1 ==
      (CEditRoot **)(this->m_vpEditItem).field0_0x0.field0_0x0.field0_0x0._M_end_of_storage) {
    local_7c[0] = this_00;
    _M_insert_aux__t6vector2ZP11IEditObjectZQ23ctlt16custom_allocator1ZP11IEditObjectPP11IEditObjectRCP11IEditObject
              (&this->m_vpEditItem,ppCVar1,local_7c);
  }
  else {
                    /* inlined from
                       /usr/local/sce/ee/gcc/lib/gcc-lib/ee/2.96-ee-001003-1/include/new */
    if (ppCVar1 != (CEditRoot **)0x0) {
      *ppCVar1 = this_00;
      ppCVar1 = (CEditRoot **)(this->m_vpEditItem).field0_0x0.field0_0x0.field0_0x0._M_finish;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
    }
    (this->m_vpEditItem).field0_0x0.field0_0x0.field0_0x0._M_finish = (IEditObject **)(ppCVar1 + 1);
  }
                    /* end of inlined section */
  return this_00;
}

void CEditRoot::SwitchNextItem() {
  return;
}

void CEditRoot::SwitchPrevItem() {
  return;
}

IEditObject* CEditRoot::GetObject(int n) {
  IEditObject **ppIVar1;
  IEditObject *pIVar2;
  
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  ppIVar1 = (this->m_vpEditItem).field0_0x0.field0_0x0.field0_0x0._M_start;
  pIVar2 = (IEditObject *)0x0;
  if (n < (int)(this->m_vpEditItem).field0_0x0.field0_0x0.field0_0x0._M_finish - (int)ppIVar1 >> 2)
  {
    pIVar2 = ppIVar1[n];
  }
                    /* end of inlined section */
  return pIVar2;
}

IEditObject* CEditRoot::GetObject(char *strLabel, int n) {
	int iCount;
	int i;
	basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> > *this;
	
  bool bVar1;
  IEditObject *pIVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  IEditObject **ppIVar6;
  char *__s2;
  int iVar7;
  int iVar8;
  
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
                    /* end of inlined section */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  iVar7 = 0;
                    /* end of inlined section */
  iVar8 = 0;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
                    /* end of inlined section */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  if (0 < (int)(this->m_vpEditItem).field0_0x0.field0_0x0.field0_0x0._M_finish -
          (int)(this->m_vpEditItem).field0_0x0.field0_0x0.field0_0x0._M_start >> 2) {
    ppIVar6 = (this->m_vpEditItem).field0_0x0.field0_0x0.field0_0x0._M_start;
    iVar4 = 0;
    do {
      __s2 = "";
                    /* end of inlined section */
      iVar7 = iVar7 + 1;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
                    /* inlined from CDebugEdit.h */
      pIVar2 = *(IEditObject **)((int)ppIVar6 + iVar4);
                    /* inlined from custom/bastring.h */
      pcVar3 = (pIVar2->m_strLabel).dat;
      iVar5 = *(int *)(pcVar3 + -0x10);
      if (iVar5 != 0) {
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/std/straits.h */
        pcVar3[iVar5] = '\0';
                    /* inlined from custom/bastring.h */
        __s2 = (pIVar2->m_strLabel).dat;
      }
                    /* inlined from CDebugEdit.h */
      iVar5 = strcmp(strLabel,__s2);
                    /* end of inlined section */
      if ((iVar5 == 0) && (bVar1 = iVar8 == n, iVar8 = iVar8 + 1, bVar1)) {
        return *(IEditObject **)((int)ppIVar6 + iVar4);
      }
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
      ppIVar6 = (this->m_vpEditItem).field0_0x0.field0_0x0.field0_0x0._M_start;
      iVar4 = iVar7 * 4;
    } while (iVar7 < (int)(this->m_vpEditItem).field0_0x0.field0_0x0.field0_0x0._M_finish -
                     (int)ppIVar6 >> 2);
  }
                    /* end of inlined section */
  return (IEditObject *)0x0;
}

char* basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> >::Rep::clone() {
	size_t extra;
	size_t s;
	size_t i;
	
  undefined *puVar1;
  __vtbl_ptr_type *p_Var2;
  custom_allocator<IEditObject_*>__vtable *pcVar3;
  undefined **ppuVar4;
  
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from CDebugEdit.h */
                    /* end of inlined section */
                    /* inlined from CDebugEdit.h */
                    /* end of inlined section */
                    /* inlined from CDebugEdit.h */
  this[4].__vtable = (custom_allocator<IEditObject_*>__vtable *)_vt_11IEditObject;
                    /* inlined from custom/bastring.h */
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var2 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var2 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep
                       (0x369d78);
  }
  this->__vtable = (custom_allocator<IEditObject_*>__vtable *)p_Var2;
  ppuVar4 = &((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0x18))->custom_deallocate;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,*ppuVar4,1);
    p_Var2 = (__vtbl_ptr_type *)this->__vtable;
    ppuVar4 = &((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0x18))->custom_deallocate
    ;
  }
  ppuVar4[3] = (undefined *)0x1;
  if (1 < ppuVar4[2]) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,*ppuVar4,1);
    p_Var2 = (__vtbl_ptr_type *)this->__vtable;
  }
  ((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0xc))->custom_deallocate =
       &GRA3DVU1MEM_VF02;
  pcVar3 = (custom_allocator<IEditObject_*>__vtable *)p_Var2;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0x18))->
                    custom_deallocate,1);
    pcVar3 = this->__vtable;
  }
  pcVar3[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  puVar1 = pcVar3[-2].custom_deallocate;
  if (&GRA3DVU1MEM_VF02 < pcVar3[-1].custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,puVar1,1);
    pcVar3 = this->__vtable;
  }
  pcVar3[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  replace__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUiUiUic
            (this,(int)p_Var2 - (int)pcVar3,puVar1 + ((int)&pcVar3->field_0x0 - (int)p_Var2),0,0);
  pcVar3 = this->__vtable;
  if (&GRA3DVU1MEM_VF02 < pcVar3[-1].custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,pcVar3[-2].custom_deallocate,1);
    this->__vtable[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  }
  else {
    pcVar3[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  }
                    /* inlined from CDebugEdit.h */
  this[1].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
  this[2].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
                    /* end of inlined section */
  this[4].__vtable = (custom_allocator<IEditObject_*>__vtable *)_vt_9CEditRoot;
  this[3].__vtable = (custom_allocator<IEditObject_*>__vtable *)this;
                    /* inlined from ctl.h */
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* end of inlined section */
                    /* inlined from ctl.h */
  this[5].__vtable =
       (custom_allocator<IEditObject_*>__vtable *)_vt_Q23ctlt16custom_allocator1ZP11IEditObject;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[8].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[6].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
  this[7].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
                    /* end of inlined section */
  return (IEditObject **)_vt_9CEditRoot;
}

basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> >& basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> >::replace(size_t pos, size_t n1, size_t n2, char c) {
	size_t len;
	size_t newlen;
	size_t s;
	size_t extra;
	size_t i;
	size_t pos;
	char *s;
	size_t n;
	size_t pos;
	char *s;
	size_t n;
	char c;
	
  undefined *puVar1;
  __vtbl_ptr_type *p_Var2;
  custom_allocator<IEditObject_*>__vtable *pcVar3;
  undefined **ppuVar4;
  
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from CDebugEdit.h */
                    /* end of inlined section */
                    /* inlined from CDebugEdit.h */
                    /* end of inlined section */
                    /* inlined from CDebugEdit.h */
  this[4].__vtable = (custom_allocator<IEditObject_*>__vtable *)_vt_11IEditObject;
                    /* inlined from custom/bastring.h */
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var2 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var2 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep
                       (0x369d78);
  }
  this->__vtable = (custom_allocator<IEditObject_*>__vtable *)p_Var2;
  ppuVar4 = &((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0x18))->custom_deallocate;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,*ppuVar4,1);
    p_Var2 = (__vtbl_ptr_type *)this->__vtable;
    ppuVar4 = &((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0x18))->custom_deallocate
    ;
  }
  ppuVar4[3] = (undefined *)0x1;
  if (1 < ppuVar4[2]) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,*ppuVar4,1);
    p_Var2 = (__vtbl_ptr_type *)this->__vtable;
  }
  ((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0xc))->custom_deallocate =
       &GRA3DVU1MEM_VF02;
  pcVar3 = (custom_allocator<IEditObject_*>__vtable *)p_Var2;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0x18))->
                    custom_deallocate,1);
    pcVar3 = this->__vtable;
  }
  pcVar3[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  puVar1 = pcVar3[-2].custom_deallocate;
  if (&GRA3DVU1MEM_VF02 < pcVar3[-1].custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,puVar1,1);
    pcVar3 = this->__vtable;
  }
  pcVar3[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  replace__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUiUiUic
            (this,(int)p_Var2 - (int)pcVar3,puVar1 + ((int)&pcVar3->field_0x0 - (int)p_Var2),0,0);
  pcVar3 = this->__vtable;
  if (&GRA3DVU1MEM_VF02 < pcVar3[-1].custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,pcVar3[-2].custom_deallocate,1);
    this->__vtable[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  }
  else {
    pcVar3[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  }
                    /* inlined from CDebugEdit.h */
  this[1].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
  this[2].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
                    /* end of inlined section */
  this[4].__vtable = (custom_allocator<IEditObject_*>__vtable *)_vt_9CEditRoot;
  this[3].__vtable = (custom_allocator<IEditObject_*>__vtable *)this;
                    /* inlined from ctl.h */
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* end of inlined section */
                    /* inlined from ctl.h */
  this[5].__vtable =
       (custom_allocator<IEditObject_*>__vtable *)_vt_Q23ctlt16custom_allocator1ZP11IEditObject;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[8].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[6].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
  this[7].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
                    /* end of inlined section */
  return (IEditObject **)_vt_9CEditRoot;
}

void basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> >::alloc(size_t __size, bool __save) {
	size_t s;
	size_t extra;
	size_t s;
	size_t i;
	
  undefined *puVar1;
  __vtbl_ptr_type *p_Var2;
  custom_allocator<IEditObject_*>__vtable *pcVar3;
  undefined **ppuVar4;
  
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from CDebugEdit.h */
                    /* end of inlined section */
                    /* inlined from CDebugEdit.h */
                    /* end of inlined section */
                    /* inlined from CDebugEdit.h */
  this[4].__vtable = (custom_allocator<IEditObject_*>__vtable *)_vt_11IEditObject;
                    /* inlined from custom/bastring.h */
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var2 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var2 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep
                       (0x369d78);
  }
  this->__vtable = (custom_allocator<IEditObject_*>__vtable *)p_Var2;
  ppuVar4 = &((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0x18))->custom_deallocate;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,*ppuVar4,1);
    p_Var2 = (__vtbl_ptr_type *)this->__vtable;
    ppuVar4 = &((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0x18))->custom_deallocate
    ;
  }
  ppuVar4[3] = (undefined *)0x1;
  if (1 < ppuVar4[2]) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,*ppuVar4,1);
    p_Var2 = (__vtbl_ptr_type *)this->__vtable;
  }
  ((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0xc))->custom_deallocate =
       &GRA3DVU1MEM_VF02;
  pcVar3 = (custom_allocator<IEditObject_*>__vtable *)p_Var2;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0x18))->
                    custom_deallocate,1);
    pcVar3 = this->__vtable;
  }
  pcVar3[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  puVar1 = pcVar3[-2].custom_deallocate;
  if (&GRA3DVU1MEM_VF02 < pcVar3[-1].custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,puVar1,1);
    pcVar3 = this->__vtable;
  }
  pcVar3[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  replace__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUiUiUic
            (this,(int)p_Var2 - (int)pcVar3,puVar1 + ((int)&pcVar3->field_0x0 - (int)p_Var2),0,0);
  pcVar3 = this->__vtable;
  if (&GRA3DVU1MEM_VF02 < pcVar3[-1].custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,pcVar3[-2].custom_deallocate,1);
    this->__vtable[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  }
  else {
    pcVar3[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  }
                    /* inlined from CDebugEdit.h */
  this[1].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
  this[2].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
                    /* end of inlined section */
  this[4].__vtable = (custom_allocator<IEditObject_*>__vtable *)_vt_9CEditRoot;
  this[3].__vtable = (custom_allocator<IEditObject_*>__vtable *)this;
                    /* inlined from ctl.h */
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* end of inlined section */
                    /* inlined from ctl.h */
  this[5].__vtable =
       (custom_allocator<IEditObject_*>__vtable *)_vt_Q23ctlt16custom_allocator1ZP11IEditObject;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[8].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[6].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
  this[7].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
                    /* end of inlined section */
  return (IEditObject **)_vt_9CEditRoot;
}

basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> >& basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> >::replace(size_t pos, size_t n1, char *s, size_t n2) {
	size_t len;
	size_t newlen;
	size_t s;
	size_t extra;
	size_t i;
	size_t pos;
	char *s;
	size_t n;
	size_t pos;
	char *s;
	size_t n;
	
  undefined *puVar1;
  __vtbl_ptr_type *p_Var2;
  custom_allocator<IEditObject_*>__vtable *pcVar3;
  undefined **ppuVar4;
  
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from CDebugEdit.h */
                    /* end of inlined section */
                    /* inlined from CDebugEdit.h */
                    /* end of inlined section */
                    /* inlined from CDebugEdit.h */
  this[4].__vtable = (custom_allocator<IEditObject_*>__vtable *)_vt_11IEditObject;
                    /* inlined from custom/bastring.h */
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var2 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var2 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep
                       (0x369d78);
  }
  this->__vtable = (custom_allocator<IEditObject_*>__vtable *)p_Var2;
  ppuVar4 = &((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0x18))->custom_deallocate;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,*ppuVar4,1);
    p_Var2 = (__vtbl_ptr_type *)this->__vtable;
    ppuVar4 = &((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0x18))->custom_deallocate
    ;
  }
  ppuVar4[3] = (undefined *)0x1;
  if (1 < ppuVar4[2]) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,*ppuVar4,1);
    p_Var2 = (__vtbl_ptr_type *)this->__vtable;
  }
  ((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0xc))->custom_deallocate =
       &GRA3DVU1MEM_VF02;
  pcVar3 = (custom_allocator<IEditObject_*>__vtable *)p_Var2;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0x18))->
                    custom_deallocate,1);
    pcVar3 = this->__vtable;
  }
  pcVar3[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  puVar1 = pcVar3[-2].custom_deallocate;
  if (&GRA3DVU1MEM_VF02 < pcVar3[-1].custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,puVar1,1);
    pcVar3 = this->__vtable;
  }
  pcVar3[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  replace__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUiUiUic
            (this,(int)p_Var2 - (int)pcVar3,puVar1 + ((int)&pcVar3->field_0x0 - (int)p_Var2),0,0);
  pcVar3 = this->__vtable;
  if (&GRA3DVU1MEM_VF02 < pcVar3[-1].custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,pcVar3[-2].custom_deallocate,1);
    this->__vtable[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  }
  else {
    pcVar3[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  }
                    /* inlined from CDebugEdit.h */
  this[1].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
  this[2].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
                    /* end of inlined section */
  this[4].__vtable = (custom_allocator<IEditObject_*>__vtable *)_vt_9CEditRoot;
  this[3].__vtable = (custom_allocator<IEditObject_*>__vtable *)this;
                    /* inlined from ctl.h */
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* end of inlined section */
                    /* inlined from ctl.h */
  this[5].__vtable =
       (custom_allocator<IEditObject_*>__vtable *)_vt_Q23ctlt16custom_allocator1ZP11IEditObject;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[8].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[6].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
  this[7].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
                    /* end of inlined section */
  return (IEditObject **)_vt_9CEditRoot;
}

void void _delete_ContainerPtr_ForEach<ctl::vector<IEditObject *> >(vector<IEditObject *> &rContainer) {
	IEditObject **it;
	
  undefined *puVar1;
  __vtbl_ptr_type *p_Var2;
  custom_allocator<IEditObject_*>__vtable *pcVar3;
  undefined **ppuVar4;
  
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from CDebugEdit.h */
                    /* end of inlined section */
                    /* inlined from CDebugEdit.h */
                    /* end of inlined section */
                    /* inlined from CDebugEdit.h */
  this[4].__vtable = (custom_allocator<IEditObject_*>__vtable *)_vt_11IEditObject;
                    /* inlined from custom/bastring.h */
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var2 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var2 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep
                       (0x369d78);
  }
  this->__vtable = (custom_allocator<IEditObject_*>__vtable *)p_Var2;
  ppuVar4 = &((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0x18))->custom_deallocate;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,*ppuVar4,1);
    p_Var2 = (__vtbl_ptr_type *)this->__vtable;
    ppuVar4 = &((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0x18))->custom_deallocate
    ;
  }
  ppuVar4[3] = (undefined *)0x1;
  if (1 < ppuVar4[2]) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,*ppuVar4,1);
    p_Var2 = (__vtbl_ptr_type *)this->__vtable;
  }
  ((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0xc))->custom_deallocate =
       &GRA3DVU1MEM_VF02;
  pcVar3 = (custom_allocator<IEditObject_*>__vtable *)p_Var2;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0x18))->
                    custom_deallocate,1);
    pcVar3 = this->__vtable;
  }
  pcVar3[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  puVar1 = pcVar3[-2].custom_deallocate;
  if (&GRA3DVU1MEM_VF02 < pcVar3[-1].custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,puVar1,1);
    pcVar3 = this->__vtable;
  }
  pcVar3[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  replace__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUiUiUic
            (this,(int)p_Var2 - (int)pcVar3,puVar1 + ((int)&pcVar3->field_0x0 - (int)p_Var2),0,0);
  pcVar3 = this->__vtable;
  if (&GRA3DVU1MEM_VF02 < pcVar3[-1].custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,pcVar3[-2].custom_deallocate,1);
    this->__vtable[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  }
  else {
    pcVar3[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  }
                    /* inlined from CDebugEdit.h */
  this[1].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
  this[2].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
                    /* end of inlined section */
  this[4].__vtable = (custom_allocator<IEditObject_*>__vtable *)_vt_9CEditRoot;
  this[3].__vtable = (custom_allocator<IEditObject_*>__vtable *)this;
                    /* inlined from ctl.h */
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* end of inlined section */
                    /* inlined from ctl.h */
  this[5].__vtable =
       (custom_allocator<IEditObject_*>__vtable *)_vt_Q23ctlt16custom_allocator1ZP11IEditObject;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[8].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[6].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
  this[7].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
                    /* end of inlined section */
  return (IEditObject **)_vt_9CEditRoot;
}

void vector<IEditObject *, ctl::custom_allocator<IEditObject *> >::_M_insert_aux(IEditObject **__position, IEditObject *&__x) {
	IEditObject *__x_copy;
	IEditObject *&__value;
	size_t __len;
	IEditObject **__new_finish;
	
  undefined *puVar1;
  __vtbl_ptr_type *p_Var2;
  custom_allocator<IEditObject_*>__vtable *pcVar3;
  undefined **ppuVar4;
  
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from CDebugEdit.h */
                    /* end of inlined section */
                    /* inlined from CDebugEdit.h */
                    /* end of inlined section */
                    /* inlined from CDebugEdit.h */
  this[4].__vtable = (custom_allocator<IEditObject_*>__vtable *)_vt_11IEditObject;
                    /* inlined from custom/bastring.h */
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var2 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var2 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep
                       (0x369d78);
  }
  this->__vtable = (custom_allocator<IEditObject_*>__vtable *)p_Var2;
  ppuVar4 = &((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0x18))->custom_deallocate;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,*ppuVar4,1);
    p_Var2 = (__vtbl_ptr_type *)this->__vtable;
    ppuVar4 = &((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0x18))->custom_deallocate
    ;
  }
  ppuVar4[3] = (undefined *)0x1;
  if (1 < ppuVar4[2]) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,*ppuVar4,1);
    p_Var2 = (__vtbl_ptr_type *)this->__vtable;
  }
  ((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0xc))->custom_deallocate =
       &GRA3DVU1MEM_VF02;
  pcVar3 = (custom_allocator<IEditObject_*>__vtable *)p_Var2;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0x18))->
                    custom_deallocate,1);
    pcVar3 = this->__vtable;
  }
  pcVar3[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  puVar1 = pcVar3[-2].custom_deallocate;
  if (&GRA3DVU1MEM_VF02 < pcVar3[-1].custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,puVar1,1);
    pcVar3 = this->__vtable;
  }
  pcVar3[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  replace__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUiUiUic
            (this,(int)p_Var2 - (int)pcVar3,puVar1 + ((int)&pcVar3->field_0x0 - (int)p_Var2),0,0);
  pcVar3 = this->__vtable;
  if (&GRA3DVU1MEM_VF02 < pcVar3[-1].custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,pcVar3[-2].custom_deallocate,1);
    this->__vtable[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  }
  else {
    pcVar3[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  }
                    /* inlined from CDebugEdit.h */
  this[1].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
  this[2].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
                    /* end of inlined section */
  this[4].__vtable = (custom_allocator<IEditObject_*>__vtable *)_vt_9CEditRoot;
  this[3].__vtable = (custom_allocator<IEditObject_*>__vtable *)this;
                    /* inlined from ctl.h */
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* end of inlined section */
                    /* inlined from ctl.h */
  this[5].__vtable =
       (custom_allocator<IEditObject_*>__vtable *)_vt_Q23ctlt16custom_allocator1ZP11IEditObject;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[8].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[6].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
  this[7].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
                    /* end of inlined section */
  return (IEditObject **)_vt_9CEditRoot;
}

type_info& IEditObject type_info function() {
  undefined *puVar1;
  __vtbl_ptr_type *p_Var2;
  custom_allocator<IEditObject_*>__vtable *pcVar3;
  undefined **ppuVar4;
  
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from CDebugEdit.h */
                    /* end of inlined section */
                    /* inlined from CDebugEdit.h */
                    /* end of inlined section */
                    /* inlined from CDebugEdit.h */
  this[4].__vtable = (custom_allocator<IEditObject_*>__vtable *)_vt_11IEditObject;
                    /* inlined from custom/bastring.h */
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var2 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var2 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep
                       (0x369d78);
  }
  this->__vtable = (custom_allocator<IEditObject_*>__vtable *)p_Var2;
  ppuVar4 = &((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0x18))->custom_deallocate;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,*ppuVar4,1);
    p_Var2 = (__vtbl_ptr_type *)this->__vtable;
    ppuVar4 = &((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0x18))->custom_deallocate
    ;
  }
  ppuVar4[3] = (undefined *)0x1;
  if (1 < ppuVar4[2]) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,*ppuVar4,1);
    p_Var2 = (__vtbl_ptr_type *)this->__vtable;
  }
  ((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0xc))->custom_deallocate =
       &GRA3DVU1MEM_VF02;
  pcVar3 = (custom_allocator<IEditObject_*>__vtable *)p_Var2;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0x18))->
                    custom_deallocate,1);
    pcVar3 = this->__vtable;
  }
  pcVar3[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  puVar1 = pcVar3[-2].custom_deallocate;
  if (&GRA3DVU1MEM_VF02 < pcVar3[-1].custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,puVar1,1);
    pcVar3 = this->__vtable;
  }
  pcVar3[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  replace__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUiUiUic
            (this,(int)p_Var2 - (int)pcVar3,puVar1 + ((int)&pcVar3->field_0x0 - (int)p_Var2),0,0);
  pcVar3 = this->__vtable;
  if (&GRA3DVU1MEM_VF02 < pcVar3[-1].custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,pcVar3[-2].custom_deallocate,1);
    this->__vtable[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  }
  else {
    pcVar3[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  }
                    /* inlined from CDebugEdit.h */
  this[1].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
  this[2].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
                    /* end of inlined section */
  this[4].__vtable = (custom_allocator<IEditObject_*>__vtable *)_vt_9CEditRoot;
  this[3].__vtable = (custom_allocator<IEditObject_*>__vtable *)this;
                    /* inlined from ctl.h */
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* end of inlined section */
                    /* inlined from ctl.h */
  this[5].__vtable =
       (custom_allocator<IEditObject_*>__vtable *)_vt_Q23ctlt16custom_allocator1ZP11IEditObject;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[8].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[6].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
  this[7].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
                    /* end of inlined section */
  return (IEditObject **)_vt_9CEditRoot;
}

void IEditObject::~IEditObject(int __in_chrg) {
  undefined *puVar1;
  __vtbl_ptr_type *p_Var2;
  custom_allocator<IEditObject_*>__vtable *pcVar3;
  undefined **ppuVar4;
  
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from CDebugEdit.h */
                    /* end of inlined section */
                    /* inlined from CDebugEdit.h */
                    /* end of inlined section */
                    /* inlined from CDebugEdit.h */
  this[4].__vtable = (custom_allocator<IEditObject_*>__vtable *)_vt_11IEditObject;
                    /* inlined from custom/bastring.h */
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var2 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var2 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep
                       (0x369d78);
  }
  this->__vtable = (custom_allocator<IEditObject_*>__vtable *)p_Var2;
  ppuVar4 = &((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0x18))->custom_deallocate;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,*ppuVar4,1);
    p_Var2 = (__vtbl_ptr_type *)this->__vtable;
    ppuVar4 = &((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0x18))->custom_deallocate
    ;
  }
  ppuVar4[3] = (undefined *)0x1;
  if (1 < ppuVar4[2]) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,*ppuVar4,1);
    p_Var2 = (__vtbl_ptr_type *)this->__vtable;
  }
  ((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0xc))->custom_deallocate =
       &GRA3DVU1MEM_VF02;
  pcVar3 = (custom_allocator<IEditObject_*>__vtable *)p_Var2;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0x18))->
                    custom_deallocate,1);
    pcVar3 = this->__vtable;
  }
  pcVar3[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  puVar1 = pcVar3[-2].custom_deallocate;
  if (&GRA3DVU1MEM_VF02 < pcVar3[-1].custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,puVar1,1);
    pcVar3 = this->__vtable;
  }
  pcVar3[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  replace__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUiUiUic
            (this,(int)p_Var2 - (int)pcVar3,puVar1 + ((int)&pcVar3->field_0x0 - (int)p_Var2),0,0);
  pcVar3 = this->__vtable;
  if (&GRA3DVU1MEM_VF02 < pcVar3[-1].custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,pcVar3[-2].custom_deallocate,1);
    this->__vtable[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  }
  else {
    pcVar3[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  }
                    /* inlined from CDebugEdit.h */
  this[1].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
  this[2].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
                    /* end of inlined section */
  this[4].__vtable = (custom_allocator<IEditObject_*>__vtable *)_vt_9CEditRoot;
  this[3].__vtable = (custom_allocator<IEditObject_*>__vtable *)this;
                    /* inlined from ctl.h */
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* end of inlined section */
                    /* inlined from ctl.h */
  this[5].__vtable =
       (custom_allocator<IEditObject_*>__vtable *)_vt_Q23ctlt16custom_allocator1ZP11IEditObject;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[8].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[6].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
  this[7].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
                    /* end of inlined section */
  return (IEditObject **)_vt_9CEditRoot;
}

char* IEditObject::ValueString() {
  undefined *puVar1;
  __vtbl_ptr_type *p_Var2;
  custom_allocator<IEditObject_*>__vtable *pcVar3;
  undefined **ppuVar4;
  
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from CDebugEdit.h */
                    /* end of inlined section */
                    /* inlined from CDebugEdit.h */
                    /* end of inlined section */
                    /* inlined from CDebugEdit.h */
  this[4].__vtable = (custom_allocator<IEditObject_*>__vtable *)_vt_11IEditObject;
                    /* inlined from custom/bastring.h */
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var2 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var2 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep
                       (0x369d78);
  }
  this->__vtable = (custom_allocator<IEditObject_*>__vtable *)p_Var2;
  ppuVar4 = &((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0x18))->custom_deallocate;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,*ppuVar4,1);
    p_Var2 = (__vtbl_ptr_type *)this->__vtable;
    ppuVar4 = &((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0x18))->custom_deallocate
    ;
  }
  ppuVar4[3] = (undefined *)0x1;
  if (1 < ppuVar4[2]) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,*ppuVar4,1);
    p_Var2 = (__vtbl_ptr_type *)this->__vtable;
  }
  ((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0xc))->custom_deallocate =
       &GRA3DVU1MEM_VF02;
  pcVar3 = (custom_allocator<IEditObject_*>__vtable *)p_Var2;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0x18))->
                    custom_deallocate,1);
    pcVar3 = this->__vtable;
  }
  pcVar3[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  puVar1 = pcVar3[-2].custom_deallocate;
  if (&GRA3DVU1MEM_VF02 < pcVar3[-1].custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,puVar1,1);
    pcVar3 = this->__vtable;
  }
  pcVar3[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  replace__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUiUiUic
            (this,(int)p_Var2 - (int)pcVar3,puVar1 + ((int)&pcVar3->field_0x0 - (int)p_Var2),0,0);
  pcVar3 = this->__vtable;
  if (&GRA3DVU1MEM_VF02 < pcVar3[-1].custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,pcVar3[-2].custom_deallocate,1);
    this->__vtable[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  }
  else {
    pcVar3[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  }
                    /* inlined from CDebugEdit.h */
  this[1].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
  this[2].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
                    /* end of inlined section */
  this[4].__vtable = (custom_allocator<IEditObject_*>__vtable *)_vt_9CEditRoot;
  this[3].__vtable = (custom_allocator<IEditObject_*>__vtable *)this;
                    /* inlined from ctl.h */
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* end of inlined section */
                    /* inlined from ctl.h */
  this[5].__vtable =
       (custom_allocator<IEditObject_*>__vtable *)_vt_Q23ctlt16custom_allocator1ZP11IEditObject;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[8].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[6].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
  this[7].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
                    /* end of inlined section */
  return (IEditObject **)_vt_9CEditRoot;
}

void IEditObject::Inc(int bExecCallback) {
  undefined *puVar1;
  __vtbl_ptr_type *p_Var2;
  custom_allocator<IEditObject_*>__vtable *pcVar3;
  undefined **ppuVar4;
  
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from CDebugEdit.h */
                    /* end of inlined section */
                    /* inlined from CDebugEdit.h */
                    /* end of inlined section */
                    /* inlined from CDebugEdit.h */
  this[4].__vtable = (custom_allocator<IEditObject_*>__vtable *)_vt_11IEditObject;
                    /* inlined from custom/bastring.h */
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var2 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var2 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep
                       (0x369d78);
  }
  this->__vtable = (custom_allocator<IEditObject_*>__vtable *)p_Var2;
  ppuVar4 = &((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0x18))->custom_deallocate;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,*ppuVar4,1);
    p_Var2 = (__vtbl_ptr_type *)this->__vtable;
    ppuVar4 = &((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0x18))->custom_deallocate
    ;
  }
  ppuVar4[3] = (undefined *)0x1;
  if (1 < ppuVar4[2]) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,*ppuVar4,1);
    p_Var2 = (__vtbl_ptr_type *)this->__vtable;
  }
  ((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0xc))->custom_deallocate =
       &GRA3DVU1MEM_VF02;
  pcVar3 = (custom_allocator<IEditObject_*>__vtable *)p_Var2;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0x18))->
                    custom_deallocate,1);
    pcVar3 = this->__vtable;
  }
  pcVar3[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  puVar1 = pcVar3[-2].custom_deallocate;
  if (&GRA3DVU1MEM_VF02 < pcVar3[-1].custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,puVar1,1);
    pcVar3 = this->__vtable;
  }
  pcVar3[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  replace__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUiUiUic
            (this,(int)p_Var2 - (int)pcVar3,puVar1 + ((int)&pcVar3->field_0x0 - (int)p_Var2),0,0);
  pcVar3 = this->__vtable;
  if (&GRA3DVU1MEM_VF02 < pcVar3[-1].custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,pcVar3[-2].custom_deallocate,1);
    this->__vtable[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  }
  else {
    pcVar3[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  }
                    /* inlined from CDebugEdit.h */
  this[1].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
  this[2].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
                    /* end of inlined section */
  this[4].__vtable = (custom_allocator<IEditObject_*>__vtable *)_vt_9CEditRoot;
  this[3].__vtable = (custom_allocator<IEditObject_*>__vtable *)this;
                    /* inlined from ctl.h */
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* end of inlined section */
                    /* inlined from ctl.h */
  this[5].__vtable =
       (custom_allocator<IEditObject_*>__vtable *)_vt_Q23ctlt16custom_allocator1ZP11IEditObject;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[8].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[6].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
  this[7].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
                    /* end of inlined section */
  return (IEditObject **)_vt_9CEditRoot;
}

void IEditObject::Inc(float fScale, int bExecCallback) {
  undefined *puVar1;
  __vtbl_ptr_type *p_Var2;
  custom_allocator<IEditObject_*>__vtable *pcVar3;
  undefined **ppuVar4;
  
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from CDebugEdit.h */
                    /* end of inlined section */
                    /* inlined from CDebugEdit.h */
                    /* end of inlined section */
                    /* inlined from CDebugEdit.h */
  this[4].__vtable = (custom_allocator<IEditObject_*>__vtable *)_vt_11IEditObject;
                    /* inlined from custom/bastring.h */
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var2 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var2 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep
                       (0x369d78);
  }
  this->__vtable = (custom_allocator<IEditObject_*>__vtable *)p_Var2;
  ppuVar4 = &((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0x18))->custom_deallocate;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,*ppuVar4,1);
    p_Var2 = (__vtbl_ptr_type *)this->__vtable;
    ppuVar4 = &((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0x18))->custom_deallocate
    ;
  }
  ppuVar4[3] = (undefined *)0x1;
  if (1 < ppuVar4[2]) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,*ppuVar4,1);
    p_Var2 = (__vtbl_ptr_type *)this->__vtable;
  }
  ((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0xc))->custom_deallocate =
       &GRA3DVU1MEM_VF02;
  pcVar3 = (custom_allocator<IEditObject_*>__vtable *)p_Var2;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0x18))->
                    custom_deallocate,1);
    pcVar3 = this->__vtable;
  }
  pcVar3[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  puVar1 = pcVar3[-2].custom_deallocate;
  if (&GRA3DVU1MEM_VF02 < pcVar3[-1].custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,puVar1,1);
    pcVar3 = this->__vtable;
  }
  pcVar3[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  replace__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUiUiUic
            (this,(int)p_Var2 - (int)pcVar3,puVar1 + ((int)&pcVar3->field_0x0 - (int)p_Var2),0,0);
  pcVar3 = this->__vtable;
  if (&GRA3DVU1MEM_VF02 < pcVar3[-1].custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,pcVar3[-2].custom_deallocate,1);
    this->__vtable[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  }
  else {
    pcVar3[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  }
                    /* inlined from CDebugEdit.h */
  this[1].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
  this[2].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
                    /* end of inlined section */
  this[4].__vtable = (custom_allocator<IEditObject_*>__vtable *)_vt_9CEditRoot;
  this[3].__vtable = (custom_allocator<IEditObject_*>__vtable *)this;
                    /* inlined from ctl.h */
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* end of inlined section */
                    /* inlined from ctl.h */
  this[5].__vtable =
       (custom_allocator<IEditObject_*>__vtable *)_vt_Q23ctlt16custom_allocator1ZP11IEditObject;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[8].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[6].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
  this[7].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
                    /* end of inlined section */
  return (IEditObject **)_vt_9CEditRoot;
}

void IEditObject::Dec(int bExecCallback) {
  undefined *puVar1;
  __vtbl_ptr_type *p_Var2;
  custom_allocator<IEditObject_*>__vtable *pcVar3;
  undefined **ppuVar4;
  
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from CDebugEdit.h */
                    /* end of inlined section */
                    /* inlined from CDebugEdit.h */
                    /* end of inlined section */
                    /* inlined from CDebugEdit.h */
  this[4].__vtable = (custom_allocator<IEditObject_*>__vtable *)_vt_11IEditObject;
                    /* inlined from custom/bastring.h */
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var2 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var2 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep
                       (0x369d78);
  }
  this->__vtable = (custom_allocator<IEditObject_*>__vtable *)p_Var2;
  ppuVar4 = &((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0x18))->custom_deallocate;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,*ppuVar4,1);
    p_Var2 = (__vtbl_ptr_type *)this->__vtable;
    ppuVar4 = &((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0x18))->custom_deallocate
    ;
  }
  ppuVar4[3] = (undefined *)0x1;
  if (1 < ppuVar4[2]) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,*ppuVar4,1);
    p_Var2 = (__vtbl_ptr_type *)this->__vtable;
  }
  ((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0xc))->custom_deallocate =
       &GRA3DVU1MEM_VF02;
  pcVar3 = (custom_allocator<IEditObject_*>__vtable *)p_Var2;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0x18))->
                    custom_deallocate,1);
    pcVar3 = this->__vtable;
  }
  pcVar3[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  puVar1 = pcVar3[-2].custom_deallocate;
  if (&GRA3DVU1MEM_VF02 < pcVar3[-1].custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,puVar1,1);
    pcVar3 = this->__vtable;
  }
  pcVar3[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  replace__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUiUiUic
            (this,(int)p_Var2 - (int)pcVar3,puVar1 + ((int)&pcVar3->field_0x0 - (int)p_Var2),0,0);
  pcVar3 = this->__vtable;
  if (&GRA3DVU1MEM_VF02 < pcVar3[-1].custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,pcVar3[-2].custom_deallocate,1);
    this->__vtable[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  }
  else {
    pcVar3[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  }
                    /* inlined from CDebugEdit.h */
  this[1].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
  this[2].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
                    /* end of inlined section */
  this[4].__vtable = (custom_allocator<IEditObject_*>__vtable *)_vt_9CEditRoot;
  this[3].__vtable = (custom_allocator<IEditObject_*>__vtable *)this;
                    /* inlined from ctl.h */
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* end of inlined section */
                    /* inlined from ctl.h */
  this[5].__vtable =
       (custom_allocator<IEditObject_*>__vtable *)_vt_Q23ctlt16custom_allocator1ZP11IEditObject;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[8].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[6].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
  this[7].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
                    /* end of inlined section */
  return (IEditObject **)_vt_9CEditRoot;
}

void IEditObject::Dec(float fScale, int bExecCallback) {
  undefined *puVar1;
  __vtbl_ptr_type *p_Var2;
  custom_allocator<IEditObject_*>__vtable *pcVar3;
  undefined **ppuVar4;
  
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from CDebugEdit.h */
                    /* end of inlined section */
                    /* inlined from CDebugEdit.h */
                    /* end of inlined section */
                    /* inlined from CDebugEdit.h */
  this[4].__vtable = (custom_allocator<IEditObject_*>__vtable *)_vt_11IEditObject;
                    /* inlined from custom/bastring.h */
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var2 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var2 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep
                       (0x369d78);
  }
  this->__vtable = (custom_allocator<IEditObject_*>__vtable *)p_Var2;
  ppuVar4 = &((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0x18))->custom_deallocate;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,*ppuVar4,1);
    p_Var2 = (__vtbl_ptr_type *)this->__vtable;
    ppuVar4 = &((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0x18))->custom_deallocate
    ;
  }
  ppuVar4[3] = (undefined *)0x1;
  if (1 < ppuVar4[2]) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,*ppuVar4,1);
    p_Var2 = (__vtbl_ptr_type *)this->__vtable;
  }
  ((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0xc))->custom_deallocate =
       &GRA3DVU1MEM_VF02;
  pcVar3 = (custom_allocator<IEditObject_*>__vtable *)p_Var2;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0x18))->
                    custom_deallocate,1);
    pcVar3 = this->__vtable;
  }
  pcVar3[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  puVar1 = pcVar3[-2].custom_deallocate;
  if (&GRA3DVU1MEM_VF02 < pcVar3[-1].custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,puVar1,1);
    pcVar3 = this->__vtable;
  }
  pcVar3[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  replace__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUiUiUic
            (this,(int)p_Var2 - (int)pcVar3,puVar1 + ((int)&pcVar3->field_0x0 - (int)p_Var2),0,0);
  pcVar3 = this->__vtable;
  if (&GRA3DVU1MEM_VF02 < pcVar3[-1].custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,pcVar3[-2].custom_deallocate,1);
    this->__vtable[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  }
  else {
    pcVar3[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  }
                    /* inlined from CDebugEdit.h */
  this[1].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
  this[2].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
                    /* end of inlined section */
  this[4].__vtable = (custom_allocator<IEditObject_*>__vtable *)_vt_9CEditRoot;
  this[3].__vtable = (custom_allocator<IEditObject_*>__vtable *)this;
                    /* inlined from ctl.h */
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* end of inlined section */
                    /* inlined from ctl.h */
  this[5].__vtable =
       (custom_allocator<IEditObject_*>__vtable *)_vt_Q23ctlt16custom_allocator1ZP11IEditObject;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[8].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[6].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
  this[7].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
                    /* end of inlined section */
  return (IEditObject **)_vt_9CEditRoot;
}

void IEditObject::Clear() {
  undefined *puVar1;
  __vtbl_ptr_type *p_Var2;
  custom_allocator<IEditObject_*>__vtable *pcVar3;
  undefined **ppuVar4;
  
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from CDebugEdit.h */
                    /* end of inlined section */
                    /* inlined from CDebugEdit.h */
                    /* end of inlined section */
                    /* inlined from CDebugEdit.h */
  this[4].__vtable = (custom_allocator<IEditObject_*>__vtable *)_vt_11IEditObject;
                    /* inlined from custom/bastring.h */
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var2 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var2 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep
                       (0x369d78);
  }
  this->__vtable = (custom_allocator<IEditObject_*>__vtable *)p_Var2;
  ppuVar4 = &((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0x18))->custom_deallocate;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,*ppuVar4,1);
    p_Var2 = (__vtbl_ptr_type *)this->__vtable;
    ppuVar4 = &((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0x18))->custom_deallocate
    ;
  }
  ppuVar4[3] = (undefined *)0x1;
  if (1 < ppuVar4[2]) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,*ppuVar4,1);
    p_Var2 = (__vtbl_ptr_type *)this->__vtable;
  }
  ((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0xc))->custom_deallocate =
       &GRA3DVU1MEM_VF02;
  pcVar3 = (custom_allocator<IEditObject_*>__vtable *)p_Var2;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0x18))->
                    custom_deallocate,1);
    pcVar3 = this->__vtable;
  }
  pcVar3[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  puVar1 = pcVar3[-2].custom_deallocate;
  if (&GRA3DVU1MEM_VF02 < pcVar3[-1].custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,puVar1,1);
    pcVar3 = this->__vtable;
  }
  pcVar3[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  replace__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUiUiUic
            (this,(int)p_Var2 - (int)pcVar3,puVar1 + ((int)&pcVar3->field_0x0 - (int)p_Var2),0,0);
  pcVar3 = this->__vtable;
  if (&GRA3DVU1MEM_VF02 < pcVar3[-1].custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,pcVar3[-2].custom_deallocate,1);
    this->__vtable[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  }
  else {
    pcVar3[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  }
                    /* inlined from CDebugEdit.h */
  this[1].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
  this[2].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
                    /* end of inlined section */
  this[4].__vtable = (custom_allocator<IEditObject_*>__vtable *)_vt_9CEditRoot;
  this[3].__vtable = (custom_allocator<IEditObject_*>__vtable *)this;
                    /* inlined from ctl.h */
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* end of inlined section */
                    /* inlined from ctl.h */
  this[5].__vtable =
       (custom_allocator<IEditObject_*>__vtable *)_vt_Q23ctlt16custom_allocator1ZP11IEditObject;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[8].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[6].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
  this[7].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
                    /* end of inlined section */
  return (IEditObject **)_vt_9CEditRoot;
}

char* IEditObject::TypeString() {
  undefined *puVar1;
  __vtbl_ptr_type *p_Var2;
  custom_allocator<IEditObject_*>__vtable *pcVar3;
  undefined **ppuVar4;
  
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from CDebugEdit.h */
                    /* end of inlined section */
                    /* inlined from CDebugEdit.h */
                    /* end of inlined section */
                    /* inlined from CDebugEdit.h */
  this[4].__vtable = (custom_allocator<IEditObject_*>__vtable *)_vt_11IEditObject;
                    /* inlined from custom/bastring.h */
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var2 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var2 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep
                       (0x369d78);
  }
  this->__vtable = (custom_allocator<IEditObject_*>__vtable *)p_Var2;
  ppuVar4 = &((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0x18))->custom_deallocate;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,*ppuVar4,1);
    p_Var2 = (__vtbl_ptr_type *)this->__vtable;
    ppuVar4 = &((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0x18))->custom_deallocate
    ;
  }
  ppuVar4[3] = (undefined *)0x1;
  if (1 < ppuVar4[2]) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,*ppuVar4,1);
    p_Var2 = (__vtbl_ptr_type *)this->__vtable;
  }
  ((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0xc))->custom_deallocate =
       &GRA3DVU1MEM_VF02;
  pcVar3 = (custom_allocator<IEditObject_*>__vtable *)p_Var2;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0x18))->
                    custom_deallocate,1);
    pcVar3 = this->__vtable;
  }
  pcVar3[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  puVar1 = pcVar3[-2].custom_deallocate;
  if (&GRA3DVU1MEM_VF02 < pcVar3[-1].custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,puVar1,1);
    pcVar3 = this->__vtable;
  }
  pcVar3[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  replace__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUiUiUic
            (this,(int)p_Var2 - (int)pcVar3,puVar1 + ((int)&pcVar3->field_0x0 - (int)p_Var2),0,0);
  pcVar3 = this->__vtable;
  if (&GRA3DVU1MEM_VF02 < pcVar3[-1].custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,pcVar3[-2].custom_deallocate,1);
    this->__vtable[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  }
  else {
    pcVar3[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  }
                    /* inlined from CDebugEdit.h */
  this[1].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
  this[2].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
                    /* end of inlined section */
  this[4].__vtable = (custom_allocator<IEditObject_*>__vtable *)_vt_9CEditRoot;
  this[3].__vtable = (custom_allocator<IEditObject_*>__vtable *)this;
                    /* inlined from ctl.h */
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* end of inlined section */
                    /* inlined from ctl.h */
  this[5].__vtable =
       (custom_allocator<IEditObject_*>__vtable *)_vt_Q23ctlt16custom_allocator1ZP11IEditObject;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[8].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[6].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
  this[7].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
                    /* end of inlined section */
  return (IEditObject **)_vt_9CEditRoot;
}

type_info& IEditObject::TypeInfo() {
  undefined *puVar1;
  __vtbl_ptr_type *p_Var2;
  custom_allocator<IEditObject_*>__vtable *pcVar3;
  undefined **ppuVar4;
  
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from CDebugEdit.h */
                    /* end of inlined section */
                    /* inlined from CDebugEdit.h */
                    /* end of inlined section */
                    /* inlined from CDebugEdit.h */
  this[4].__vtable = (custom_allocator<IEditObject_*>__vtable *)_vt_11IEditObject;
                    /* inlined from custom/bastring.h */
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var2 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var2 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep
                       (0x369d78);
  }
  this->__vtable = (custom_allocator<IEditObject_*>__vtable *)p_Var2;
  ppuVar4 = &((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0x18))->custom_deallocate;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,*ppuVar4,1);
    p_Var2 = (__vtbl_ptr_type *)this->__vtable;
    ppuVar4 = &((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0x18))->custom_deallocate
    ;
  }
  ppuVar4[3] = (undefined *)0x1;
  if (1 < ppuVar4[2]) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,*ppuVar4,1);
    p_Var2 = (__vtbl_ptr_type *)this->__vtable;
  }
  ((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0xc))->custom_deallocate =
       &GRA3DVU1MEM_VF02;
  pcVar3 = (custom_allocator<IEditObject_*>__vtable *)p_Var2;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0x18))->
                    custom_deallocate,1);
    pcVar3 = this->__vtable;
  }
  pcVar3[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  puVar1 = pcVar3[-2].custom_deallocate;
  if (&GRA3DVU1MEM_VF02 < pcVar3[-1].custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,puVar1,1);
    pcVar3 = this->__vtable;
  }
  pcVar3[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  replace__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUiUiUic
            (this,(int)p_Var2 - (int)pcVar3,puVar1 + ((int)&pcVar3->field_0x0 - (int)p_Var2),0,0);
  pcVar3 = this->__vtable;
  if (&GRA3DVU1MEM_VF02 < pcVar3[-1].custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,pcVar3[-2].custom_deallocate,1);
    this->__vtable[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  }
  else {
    pcVar3[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  }
                    /* inlined from CDebugEdit.h */
  this[1].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
  this[2].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
                    /* end of inlined section */
  this[4].__vtable = (custom_allocator<IEditObject_*>__vtable *)_vt_9CEditRoot;
  this[3].__vtable = (custom_allocator<IEditObject_*>__vtable *)this;
                    /* inlined from ctl.h */
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* end of inlined section */
                    /* inlined from ctl.h */
  this[5].__vtable =
       (custom_allocator<IEditObject_*>__vtable *)_vt_Q23ctlt16custom_allocator1ZP11IEditObject;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[8].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[6].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
  this[7].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
                    /* end of inlined section */
  return (IEditObject **)_vt_9CEditRoot;
}

type_info& ctl::custom_allocator<IEditObject *> type_info function() {
  undefined *puVar1;
  __vtbl_ptr_type *p_Var2;
  custom_allocator<IEditObject_*>__vtable *pcVar3;
  undefined **ppuVar4;
  
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from CDebugEdit.h */
                    /* end of inlined section */
                    /* inlined from CDebugEdit.h */
                    /* end of inlined section */
                    /* inlined from CDebugEdit.h */
  this[4].__vtable = (custom_allocator<IEditObject_*>__vtable *)_vt_11IEditObject;
                    /* inlined from custom/bastring.h */
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var2 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var2 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep
                       (0x369d78);
  }
  this->__vtable = (custom_allocator<IEditObject_*>__vtable *)p_Var2;
  ppuVar4 = &((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0x18))->custom_deallocate;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,*ppuVar4,1);
    p_Var2 = (__vtbl_ptr_type *)this->__vtable;
    ppuVar4 = &((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0x18))->custom_deallocate
    ;
  }
  ppuVar4[3] = (undefined *)0x1;
  if (1 < ppuVar4[2]) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,*ppuVar4,1);
    p_Var2 = (__vtbl_ptr_type *)this->__vtable;
  }
  ((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0xc))->custom_deallocate =
       &GRA3DVU1MEM_VF02;
  pcVar3 = (custom_allocator<IEditObject_*>__vtable *)p_Var2;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0x18))->
                    custom_deallocate,1);
    pcVar3 = this->__vtable;
  }
  pcVar3[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  puVar1 = pcVar3[-2].custom_deallocate;
  if (&GRA3DVU1MEM_VF02 < pcVar3[-1].custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,puVar1,1);
    pcVar3 = this->__vtable;
  }
  pcVar3[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  replace__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUiUiUic
            (this,(int)p_Var2 - (int)pcVar3,puVar1 + ((int)&pcVar3->field_0x0 - (int)p_Var2),0,0);
  pcVar3 = this->__vtable;
  if (&GRA3DVU1MEM_VF02 < pcVar3[-1].custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,pcVar3[-2].custom_deallocate,1);
    this->__vtable[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  }
  else {
    pcVar3[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  }
                    /* inlined from CDebugEdit.h */
  this[1].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
  this[2].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
                    /* end of inlined section */
  this[4].__vtable = (custom_allocator<IEditObject_*>__vtable *)_vt_9CEditRoot;
  this[3].__vtable = (custom_allocator<IEditObject_*>__vtable *)this;
                    /* inlined from ctl.h */
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* end of inlined section */
                    /* inlined from ctl.h */
  this[5].__vtable =
       (custom_allocator<IEditObject_*>__vtable *)_vt_Q23ctlt16custom_allocator1ZP11IEditObject;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[8].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[6].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
  this[7].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
                    /* end of inlined section */
  return (IEditObject **)_vt_9CEditRoot;
}

type_info& CEditRoot type_info function() {
  undefined *puVar1;
  __vtbl_ptr_type *p_Var2;
  custom_allocator<IEditObject_*>__vtable *pcVar3;
  undefined **ppuVar4;
  
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from CDebugEdit.h */
                    /* end of inlined section */
                    /* inlined from CDebugEdit.h */
                    /* end of inlined section */
                    /* inlined from CDebugEdit.h */
  this[4].__vtable = (custom_allocator<IEditObject_*>__vtable *)_vt_11IEditObject;
                    /* inlined from custom/bastring.h */
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var2 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var2 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep
                       (0x369d78);
  }
  this->__vtable = (custom_allocator<IEditObject_*>__vtable *)p_Var2;
  ppuVar4 = &((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0x18))->custom_deallocate;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,*ppuVar4,1);
    p_Var2 = (__vtbl_ptr_type *)this->__vtable;
    ppuVar4 = &((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0x18))->custom_deallocate
    ;
  }
  ppuVar4[3] = (undefined *)0x1;
  if (1 < ppuVar4[2]) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,*ppuVar4,1);
    p_Var2 = (__vtbl_ptr_type *)this->__vtable;
  }
  ((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0xc))->custom_deallocate =
       &GRA3DVU1MEM_VF02;
  pcVar3 = (custom_allocator<IEditObject_*>__vtable *)p_Var2;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0x18))->
                    custom_deallocate,1);
    pcVar3 = this->__vtable;
  }
  pcVar3[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  puVar1 = pcVar3[-2].custom_deallocate;
  if (&GRA3DVU1MEM_VF02 < pcVar3[-1].custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,puVar1,1);
    pcVar3 = this->__vtable;
  }
  pcVar3[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  replace__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUiUiUic
            (this,(int)p_Var2 - (int)pcVar3,puVar1 + ((int)&pcVar3->field_0x0 - (int)p_Var2),0,0);
  pcVar3 = this->__vtable;
  if (&GRA3DVU1MEM_VF02 < pcVar3[-1].custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,pcVar3[-2].custom_deallocate,1);
    this->__vtable[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  }
  else {
    pcVar3[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  }
                    /* inlined from CDebugEdit.h */
  this[1].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
  this[2].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
                    /* end of inlined section */
  this[4].__vtable = (custom_allocator<IEditObject_*>__vtable *)_vt_9CEditRoot;
  this[3].__vtable = (custom_allocator<IEditObject_*>__vtable *)this;
                    /* inlined from ctl.h */
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* end of inlined section */
                    /* inlined from ctl.h */
  this[5].__vtable =
       (custom_allocator<IEditObject_*>__vtable *)_vt_Q23ctlt16custom_allocator1ZP11IEditObject;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[8].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[6].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
  this[7].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
                    /* end of inlined section */
  return (IEditObject **)_vt_9CEditRoot;
}

void* CEditRoot::operator new(size_t Size) {
  undefined *puVar1;
  __vtbl_ptr_type *p_Var2;
  custom_allocator<IEditObject_*>__vtable *pcVar3;
  undefined **ppuVar4;
  
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from CDebugEdit.h */
                    /* end of inlined section */
                    /* inlined from CDebugEdit.h */
                    /* end of inlined section */
                    /* inlined from CDebugEdit.h */
  this[4].__vtable = (custom_allocator<IEditObject_*>__vtable *)_vt_11IEditObject;
                    /* inlined from custom/bastring.h */
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var2 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var2 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep
                       (0x369d78);
  }
  this->__vtable = (custom_allocator<IEditObject_*>__vtable *)p_Var2;
  ppuVar4 = &((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0x18))->custom_deallocate;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,*ppuVar4,1);
    p_Var2 = (__vtbl_ptr_type *)this->__vtable;
    ppuVar4 = &((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0x18))->custom_deallocate
    ;
  }
  ppuVar4[3] = (undefined *)0x1;
  if (1 < ppuVar4[2]) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,*ppuVar4,1);
    p_Var2 = (__vtbl_ptr_type *)this->__vtable;
  }
  ((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0xc))->custom_deallocate =
       &GRA3DVU1MEM_VF02;
  pcVar3 = (custom_allocator<IEditObject_*>__vtable *)p_Var2;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0x18))->
                    custom_deallocate,1);
    pcVar3 = this->__vtable;
  }
  pcVar3[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  puVar1 = pcVar3[-2].custom_deallocate;
  if (&GRA3DVU1MEM_VF02 < pcVar3[-1].custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,puVar1,1);
    pcVar3 = this->__vtable;
  }
  pcVar3[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  replace__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUiUiUic
            (this,(int)p_Var2 - (int)pcVar3,puVar1 + ((int)&pcVar3->field_0x0 - (int)p_Var2),0,0);
  pcVar3 = this->__vtable;
  if (&GRA3DVU1MEM_VF02 < pcVar3[-1].custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,pcVar3[-2].custom_deallocate,1);
    this->__vtable[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  }
  else {
    pcVar3[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  }
                    /* inlined from CDebugEdit.h */
  this[1].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
  this[2].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
                    /* end of inlined section */
  this[4].__vtable = (custom_allocator<IEditObject_*>__vtable *)_vt_9CEditRoot;
  this[3].__vtable = (custom_allocator<IEditObject_*>__vtable *)this;
                    /* inlined from ctl.h */
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* end of inlined section */
                    /* inlined from ctl.h */
  this[5].__vtable =
       (custom_allocator<IEditObject_*>__vtable *)_vt_Q23ctlt16custom_allocator1ZP11IEditObject;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[8].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[6].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
  this[7].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
                    /* end of inlined section */
  return (IEditObject **)_vt_9CEditRoot;
}

void* CEditRoot::operator new [](size_t Size) {
  undefined *puVar1;
  __vtbl_ptr_type *p_Var2;
  custom_allocator<IEditObject_*>__vtable *pcVar3;
  undefined **ppuVar4;
  
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from CDebugEdit.h */
                    /* end of inlined section */
                    /* inlined from CDebugEdit.h */
                    /* end of inlined section */
                    /* inlined from CDebugEdit.h */
  this[4].__vtable = (custom_allocator<IEditObject_*>__vtable *)_vt_11IEditObject;
                    /* inlined from custom/bastring.h */
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var2 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var2 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep
                       (0x369d78);
  }
  this->__vtable = (custom_allocator<IEditObject_*>__vtable *)p_Var2;
  ppuVar4 = &((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0x18))->custom_deallocate;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,*ppuVar4,1);
    p_Var2 = (__vtbl_ptr_type *)this->__vtable;
    ppuVar4 = &((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0x18))->custom_deallocate
    ;
  }
  ppuVar4[3] = (undefined *)0x1;
  if (1 < ppuVar4[2]) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,*ppuVar4,1);
    p_Var2 = (__vtbl_ptr_type *)this->__vtable;
  }
  ((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0xc))->custom_deallocate =
       &GRA3DVU1MEM_VF02;
  pcVar3 = (custom_allocator<IEditObject_*>__vtable *)p_Var2;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0x18))->
                    custom_deallocate,1);
    pcVar3 = this->__vtable;
  }
  pcVar3[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  puVar1 = pcVar3[-2].custom_deallocate;
  if (&GRA3DVU1MEM_VF02 < pcVar3[-1].custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,puVar1,1);
    pcVar3 = this->__vtable;
  }
  pcVar3[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  replace__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUiUiUic
            (this,(int)p_Var2 - (int)pcVar3,puVar1 + ((int)&pcVar3->field_0x0 - (int)p_Var2),0,0);
  pcVar3 = this->__vtable;
  if (&GRA3DVU1MEM_VF02 < pcVar3[-1].custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,pcVar3[-2].custom_deallocate,1);
    this->__vtable[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  }
  else {
    pcVar3[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  }
                    /* inlined from CDebugEdit.h */
  this[1].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
  this[2].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
                    /* end of inlined section */
  this[4].__vtable = (custom_allocator<IEditObject_*>__vtable *)_vt_9CEditRoot;
  this[3].__vtable = (custom_allocator<IEditObject_*>__vtable *)this;
                    /* inlined from ctl.h */
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* end of inlined section */
                    /* inlined from ctl.h */
  this[5].__vtable =
       (custom_allocator<IEditObject_*>__vtable *)_vt_Q23ctlt16custom_allocator1ZP11IEditObject;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[8].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[6].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
  this[7].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
                    /* end of inlined section */
  return (IEditObject **)_vt_9CEditRoot;
}

void CEditRoot::operator delete(void *pData, size_t Size) {
  undefined *puVar1;
  __vtbl_ptr_type *p_Var2;
  custom_allocator<IEditObject_*>__vtable *pcVar3;
  undefined **ppuVar4;
  
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from CDebugEdit.h */
                    /* end of inlined section */
                    /* inlined from CDebugEdit.h */
                    /* end of inlined section */
                    /* inlined from CDebugEdit.h */
  this[4].__vtable = (custom_allocator<IEditObject_*>__vtable *)_vt_11IEditObject;
                    /* inlined from custom/bastring.h */
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var2 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var2 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep
                       (0x369d78);
  }
  this->__vtable = (custom_allocator<IEditObject_*>__vtable *)p_Var2;
  ppuVar4 = &((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0x18))->custom_deallocate;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,*ppuVar4,1);
    p_Var2 = (__vtbl_ptr_type *)this->__vtable;
    ppuVar4 = &((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0x18))->custom_deallocate
    ;
  }
  ppuVar4[3] = (undefined *)0x1;
  if (1 < ppuVar4[2]) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,*ppuVar4,1);
    p_Var2 = (__vtbl_ptr_type *)this->__vtable;
  }
  ((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0xc))->custom_deallocate =
       &GRA3DVU1MEM_VF02;
  pcVar3 = (custom_allocator<IEditObject_*>__vtable *)p_Var2;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0x18))->
                    custom_deallocate,1);
    pcVar3 = this->__vtable;
  }
  pcVar3[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  puVar1 = pcVar3[-2].custom_deallocate;
  if (&GRA3DVU1MEM_VF02 < pcVar3[-1].custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,puVar1,1);
    pcVar3 = this->__vtable;
  }
  pcVar3[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  replace__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUiUiUic
            (this,(int)p_Var2 - (int)pcVar3,puVar1 + ((int)&pcVar3->field_0x0 - (int)p_Var2),0,0);
  pcVar3 = this->__vtable;
  if (&GRA3DVU1MEM_VF02 < pcVar3[-1].custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,pcVar3[-2].custom_deallocate,1);
    this->__vtable[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  }
  else {
    pcVar3[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  }
                    /* inlined from CDebugEdit.h */
  this[1].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
  this[2].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
                    /* end of inlined section */
  this[4].__vtable = (custom_allocator<IEditObject_*>__vtable *)_vt_9CEditRoot;
  this[3].__vtable = (custom_allocator<IEditObject_*>__vtable *)this;
                    /* inlined from ctl.h */
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* end of inlined section */
                    /* inlined from ctl.h */
  this[5].__vtable =
       (custom_allocator<IEditObject_*>__vtable *)_vt_Q23ctlt16custom_allocator1ZP11IEditObject;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[8].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[6].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
  this[7].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
                    /* end of inlined section */
  return (IEditObject **)_vt_9CEditRoot;
}

void CEditRoot::operator delete [](void *pData, size_t Size) {
  undefined *puVar1;
  __vtbl_ptr_type *p_Var2;
  custom_allocator<IEditObject_*>__vtable *pcVar3;
  undefined **ppuVar4;
  
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from CDebugEdit.h */
                    /* end of inlined section */
                    /* inlined from CDebugEdit.h */
                    /* end of inlined section */
                    /* inlined from CDebugEdit.h */
  this[4].__vtable = (custom_allocator<IEditObject_*>__vtable *)_vt_11IEditObject;
                    /* inlined from custom/bastring.h */
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var2 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var2 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep
                       (0x369d78);
  }
  this->__vtable = (custom_allocator<IEditObject_*>__vtable *)p_Var2;
  ppuVar4 = &((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0x18))->custom_deallocate;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,*ppuVar4,1);
    p_Var2 = (__vtbl_ptr_type *)this->__vtable;
    ppuVar4 = &((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0x18))->custom_deallocate
    ;
  }
  ppuVar4[3] = (undefined *)0x1;
  if (1 < ppuVar4[2]) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,*ppuVar4,1);
    p_Var2 = (__vtbl_ptr_type *)this->__vtable;
  }
  ((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0xc))->custom_deallocate =
       &GRA3DVU1MEM_VF02;
  pcVar3 = (custom_allocator<IEditObject_*>__vtable *)p_Var2;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0x18))->
                    custom_deallocate,1);
    pcVar3 = this->__vtable;
  }
  pcVar3[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  puVar1 = pcVar3[-2].custom_deallocate;
  if (&GRA3DVU1MEM_VF02 < pcVar3[-1].custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,puVar1,1);
    pcVar3 = this->__vtable;
  }
  pcVar3[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  replace__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUiUiUic
            (this,(int)p_Var2 - (int)pcVar3,puVar1 + ((int)&pcVar3->field_0x0 - (int)p_Var2),0,0);
  pcVar3 = this->__vtable;
  if (&GRA3DVU1MEM_VF02 < pcVar3[-1].custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,pcVar3[-2].custom_deallocate,1);
    this->__vtable[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  }
  else {
    pcVar3[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  }
                    /* inlined from CDebugEdit.h */
  this[1].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
  this[2].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
                    /* end of inlined section */
  this[4].__vtable = (custom_allocator<IEditObject_*>__vtable *)_vt_9CEditRoot;
  this[3].__vtable = (custom_allocator<IEditObject_*>__vtable *)this;
                    /* inlined from ctl.h */
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* end of inlined section */
                    /* inlined from ctl.h */
  this[5].__vtable =
       (custom_allocator<IEditObject_*>__vtable *)_vt_Q23ctlt16custom_allocator1ZP11IEditObject;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[8].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[6].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
  this[7].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
                    /* end of inlined section */
  return (IEditObject **)_vt_9CEditRoot;
}

int CEditRoot::IsItem() {
  undefined *puVar1;
  __vtbl_ptr_type *p_Var2;
  custom_allocator<IEditObject_*>__vtable *pcVar3;
  undefined **ppuVar4;
  
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from CDebugEdit.h */
                    /* end of inlined section */
                    /* inlined from CDebugEdit.h */
                    /* end of inlined section */
                    /* inlined from CDebugEdit.h */
  this[4].__vtable = (custom_allocator<IEditObject_*>__vtable *)_vt_11IEditObject;
                    /* inlined from custom/bastring.h */
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var2 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var2 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep
                       (0x369d78);
  }
  this->__vtable = (custom_allocator<IEditObject_*>__vtable *)p_Var2;
  ppuVar4 = &((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0x18))->custom_deallocate;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,*ppuVar4,1);
    p_Var2 = (__vtbl_ptr_type *)this->__vtable;
    ppuVar4 = &((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0x18))->custom_deallocate
    ;
  }
  ppuVar4[3] = (undefined *)0x1;
  if (1 < ppuVar4[2]) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,*ppuVar4,1);
    p_Var2 = (__vtbl_ptr_type *)this->__vtable;
  }
  ((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0xc))->custom_deallocate =
       &GRA3DVU1MEM_VF02;
  pcVar3 = (custom_allocator<IEditObject_*>__vtable *)p_Var2;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0x18))->
                    custom_deallocate,1);
    pcVar3 = this->__vtable;
  }
  pcVar3[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  puVar1 = pcVar3[-2].custom_deallocate;
  if (&GRA3DVU1MEM_VF02 < pcVar3[-1].custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,puVar1,1);
    pcVar3 = this->__vtable;
  }
  pcVar3[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  replace__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUiUiUic
            (this,(int)p_Var2 - (int)pcVar3,puVar1 + ((int)&pcVar3->field_0x0 - (int)p_Var2),0,0);
  pcVar3 = this->__vtable;
  if (&GRA3DVU1MEM_VF02 < pcVar3[-1].custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,pcVar3[-2].custom_deallocate,1);
    this->__vtable[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  }
  else {
    pcVar3[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  }
                    /* inlined from CDebugEdit.h */
  this[1].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
  this[2].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
                    /* end of inlined section */
  this[4].__vtable = (custom_allocator<IEditObject_*>__vtable *)_vt_9CEditRoot;
  this[3].__vtable = (custom_allocator<IEditObject_*>__vtable *)this;
                    /* inlined from ctl.h */
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* end of inlined section */
                    /* inlined from ctl.h */
  this[5].__vtable =
       (custom_allocator<IEditObject_*>__vtable *)_vt_Q23ctlt16custom_allocator1ZP11IEditObject;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[8].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[6].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
  this[7].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
                    /* end of inlined section */
  return (IEditObject **)_vt_9CEditRoot;
}

int CEditRoot::GetNumObject() {
  undefined *puVar1;
  __vtbl_ptr_type *p_Var2;
  custom_allocator<IEditObject_*>__vtable *pcVar3;
  undefined **ppuVar4;
  
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from CDebugEdit.h */
                    /* end of inlined section */
                    /* inlined from CDebugEdit.h */
                    /* end of inlined section */
                    /* inlined from CDebugEdit.h */
  this[4].__vtable = (custom_allocator<IEditObject_*>__vtable *)_vt_11IEditObject;
                    /* inlined from custom/bastring.h */
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var2 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var2 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep
                       (0x369d78);
  }
  this->__vtable = (custom_allocator<IEditObject_*>__vtable *)p_Var2;
  ppuVar4 = &((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0x18))->custom_deallocate;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,*ppuVar4,1);
    p_Var2 = (__vtbl_ptr_type *)this->__vtable;
    ppuVar4 = &((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0x18))->custom_deallocate
    ;
  }
  ppuVar4[3] = (undefined *)0x1;
  if (1 < ppuVar4[2]) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,*ppuVar4,1);
    p_Var2 = (__vtbl_ptr_type *)this->__vtable;
  }
  ((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0xc))->custom_deallocate =
       &GRA3DVU1MEM_VF02;
  pcVar3 = (custom_allocator<IEditObject_*>__vtable *)p_Var2;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0x18))->
                    custom_deallocate,1);
    pcVar3 = this->__vtable;
  }
  pcVar3[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  puVar1 = pcVar3[-2].custom_deallocate;
  if (&GRA3DVU1MEM_VF02 < pcVar3[-1].custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,puVar1,1);
    pcVar3 = this->__vtable;
  }
  pcVar3[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  replace__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUiUiUic
            (this,(int)p_Var2 - (int)pcVar3,puVar1 + ((int)&pcVar3->field_0x0 - (int)p_Var2),0,0);
  pcVar3 = this->__vtable;
  if (&GRA3DVU1MEM_VF02 < pcVar3[-1].custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,pcVar3[-2].custom_deallocate,1);
    this->__vtable[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  }
  else {
    pcVar3[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  }
                    /* inlined from CDebugEdit.h */
  this[1].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
  this[2].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
                    /* end of inlined section */
  this[4].__vtable = (custom_allocator<IEditObject_*>__vtable *)_vt_9CEditRoot;
  this[3].__vtable = (custom_allocator<IEditObject_*>__vtable *)this;
                    /* inlined from ctl.h */
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* end of inlined section */
                    /* inlined from ctl.h */
  this[5].__vtable =
       (custom_allocator<IEditObject_*>__vtable *)_vt_Q23ctlt16custom_allocator1ZP11IEditObject;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[8].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[6].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
  this[7].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
                    /* end of inlined section */
  return (IEditObject **)_vt_9CEditRoot;
}

char* CEditRoot::TypeString() {
  undefined *puVar1;
  __vtbl_ptr_type *p_Var2;
  custom_allocator<IEditObject_*>__vtable *pcVar3;
  undefined **ppuVar4;
  
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from CDebugEdit.h */
                    /* end of inlined section */
                    /* inlined from CDebugEdit.h */
                    /* end of inlined section */
                    /* inlined from CDebugEdit.h */
  this[4].__vtable = (custom_allocator<IEditObject_*>__vtable *)_vt_11IEditObject;
                    /* inlined from custom/bastring.h */
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var2 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var2 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep
                       (0x369d78);
  }
  this->__vtable = (custom_allocator<IEditObject_*>__vtable *)p_Var2;
  ppuVar4 = &((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0x18))->custom_deallocate;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,*ppuVar4,1);
    p_Var2 = (__vtbl_ptr_type *)this->__vtable;
    ppuVar4 = &((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0x18))->custom_deallocate
    ;
  }
  ppuVar4[3] = (undefined *)0x1;
  if (1 < ppuVar4[2]) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,*ppuVar4,1);
    p_Var2 = (__vtbl_ptr_type *)this->__vtable;
  }
  ((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0xc))->custom_deallocate =
       &GRA3DVU1MEM_VF02;
  pcVar3 = (custom_allocator<IEditObject_*>__vtable *)p_Var2;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0x18))->
                    custom_deallocate,1);
    pcVar3 = this->__vtable;
  }
  pcVar3[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  puVar1 = pcVar3[-2].custom_deallocate;
  if (&GRA3DVU1MEM_VF02 < pcVar3[-1].custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,puVar1,1);
    pcVar3 = this->__vtable;
  }
  pcVar3[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  replace__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUiUiUic
            (this,(int)p_Var2 - (int)pcVar3,puVar1 + ((int)&pcVar3->field_0x0 - (int)p_Var2),0,0);
  pcVar3 = this->__vtable;
  if (&GRA3DVU1MEM_VF02 < pcVar3[-1].custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,pcVar3[-2].custom_deallocate,1);
    this->__vtable[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  }
  else {
    pcVar3[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  }
                    /* inlined from CDebugEdit.h */
  this[1].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
  this[2].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
                    /* end of inlined section */
  this[4].__vtable = (custom_allocator<IEditObject_*>__vtable *)_vt_9CEditRoot;
  this[3].__vtable = (custom_allocator<IEditObject_*>__vtable *)this;
                    /* inlined from ctl.h */
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* end of inlined section */
                    /* inlined from ctl.h */
  this[5].__vtable =
       (custom_allocator<IEditObject_*>__vtable *)_vt_Q23ctlt16custom_allocator1ZP11IEditObject;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[8].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[6].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
  this[7].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
                    /* end of inlined section */
  return (IEditObject **)_vt_9CEditRoot;
}

type_info& ctl::custom_allocator<char> type_info function() {
  undefined *puVar1;
  __vtbl_ptr_type *p_Var2;
  custom_allocator<IEditObject_*>__vtable *pcVar3;
  undefined **ppuVar4;
  
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from CDebugEdit.h */
                    /* end of inlined section */
                    /* inlined from CDebugEdit.h */
                    /* end of inlined section */
                    /* inlined from CDebugEdit.h */
  this[4].__vtable = (custom_allocator<IEditObject_*>__vtable *)_vt_11IEditObject;
                    /* inlined from custom/bastring.h */
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var2 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var2 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep
                       (0x369d78);
  }
  this->__vtable = (custom_allocator<IEditObject_*>__vtable *)p_Var2;
  ppuVar4 = &((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0x18))->custom_deallocate;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,*ppuVar4,1);
    p_Var2 = (__vtbl_ptr_type *)this->__vtable;
    ppuVar4 = &((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0x18))->custom_deallocate
    ;
  }
  ppuVar4[3] = (undefined *)0x1;
  if (1 < ppuVar4[2]) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,*ppuVar4,1);
    p_Var2 = (__vtbl_ptr_type *)this->__vtable;
  }
  ((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0xc))->custom_deallocate =
       &GRA3DVU1MEM_VF02;
  pcVar3 = (custom_allocator<IEditObject_*>__vtable *)p_Var2;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0x18))->
                    custom_deallocate,1);
    pcVar3 = this->__vtable;
  }
  pcVar3[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  puVar1 = pcVar3[-2].custom_deallocate;
  if (&GRA3DVU1MEM_VF02 < pcVar3[-1].custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,puVar1,1);
    pcVar3 = this->__vtable;
  }
  pcVar3[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  replace__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUiUiUic
            (this,(int)p_Var2 - (int)pcVar3,puVar1 + ((int)&pcVar3->field_0x0 - (int)p_Var2),0,0);
  pcVar3 = this->__vtable;
  if (&GRA3DVU1MEM_VF02 < pcVar3[-1].custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,pcVar3[-2].custom_deallocate,1);
    this->__vtable[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  }
  else {
    pcVar3[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  }
                    /* inlined from CDebugEdit.h */
  this[1].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
  this[2].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
                    /* end of inlined section */
  this[4].__vtable = (custom_allocator<IEditObject_*>__vtable *)_vt_9CEditRoot;
  this[3].__vtable = (custom_allocator<IEditObject_*>__vtable *)this;
                    /* inlined from ctl.h */
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* end of inlined section */
                    /* inlined from ctl.h */
  this[5].__vtable =
       (custom_allocator<IEditObject_*>__vtable *)_vt_Q23ctlt16custom_allocator1ZP11IEditObject;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[8].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[6].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
  this[7].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
                    /* end of inlined section */
  return (IEditObject **)_vt_9CEditRoot;
}

void ctl::custom_allocator<char>::custom_deallocate(void *_Ptr) {
  undefined *puVar1;
  __vtbl_ptr_type *p_Var2;
  custom_allocator<IEditObject_*>__vtable *pcVar3;
  undefined **ppuVar4;
  
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from CDebugEdit.h */
                    /* end of inlined section */
                    /* inlined from CDebugEdit.h */
                    /* end of inlined section */
                    /* inlined from CDebugEdit.h */
  this[4].__vtable = (custom_allocator<IEditObject_*>__vtable *)_vt_11IEditObject;
                    /* inlined from custom/bastring.h */
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var2 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var2 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep
                       (0x369d78);
  }
  this->__vtable = (custom_allocator<IEditObject_*>__vtable *)p_Var2;
  ppuVar4 = &((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0x18))->custom_deallocate;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,*ppuVar4,1);
    p_Var2 = (__vtbl_ptr_type *)this->__vtable;
    ppuVar4 = &((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0x18))->custom_deallocate
    ;
  }
  ppuVar4[3] = (undefined *)0x1;
  if (1 < ppuVar4[2]) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,*ppuVar4,1);
    p_Var2 = (__vtbl_ptr_type *)this->__vtable;
  }
  ((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0xc))->custom_deallocate =
       &GRA3DVU1MEM_VF02;
  pcVar3 = (custom_allocator<IEditObject_*>__vtable *)p_Var2;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0x18))->
                    custom_deallocate,1);
    pcVar3 = this->__vtable;
  }
  pcVar3[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  puVar1 = pcVar3[-2].custom_deallocate;
  if (&GRA3DVU1MEM_VF02 < pcVar3[-1].custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,puVar1,1);
    pcVar3 = this->__vtable;
  }
  pcVar3[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  replace__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUiUiUic
            (this,(int)p_Var2 - (int)pcVar3,puVar1 + ((int)&pcVar3->field_0x0 - (int)p_Var2),0,0);
  pcVar3 = this->__vtable;
  if (&GRA3DVU1MEM_VF02 < pcVar3[-1].custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,pcVar3[-2].custom_deallocate,1);
    this->__vtable[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  }
  else {
    pcVar3[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  }
                    /* inlined from CDebugEdit.h */
  this[1].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
  this[2].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
                    /* end of inlined section */
  this[4].__vtable = (custom_allocator<IEditObject_*>__vtable *)_vt_9CEditRoot;
  this[3].__vtable = (custom_allocator<IEditObject_*>__vtable *)this;
                    /* inlined from ctl.h */
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* end of inlined section */
                    /* inlined from ctl.h */
  this[5].__vtable =
       (custom_allocator<IEditObject_*>__vtable *)_vt_Q23ctlt16custom_allocator1ZP11IEditObject;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[8].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[6].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
  this[7].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
                    /* end of inlined section */
  return (IEditObject **)_vt_9CEditRoot;
}

void ctl::custom_allocator<IEditObject *>::custom_deallocate(void *_Ptr) {
  undefined *puVar1;
  __vtbl_ptr_type *p_Var2;
  custom_allocator<IEditObject_*>__vtable *pcVar3;
  undefined **ppuVar4;
  
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from CDebugEdit.h */
                    /* end of inlined section */
                    /* inlined from CDebugEdit.h */
                    /* end of inlined section */
                    /* inlined from CDebugEdit.h */
  this[4].__vtable = (custom_allocator<IEditObject_*>__vtable *)_vt_11IEditObject;
                    /* inlined from custom/bastring.h */
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var2 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var2 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep
                       (0x369d78);
  }
  this->__vtable = (custom_allocator<IEditObject_*>__vtable *)p_Var2;
  ppuVar4 = &((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0x18))->custom_deallocate;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,*ppuVar4,1);
    p_Var2 = (__vtbl_ptr_type *)this->__vtable;
    ppuVar4 = &((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0x18))->custom_deallocate
    ;
  }
  ppuVar4[3] = (undefined *)0x1;
  if (1 < ppuVar4[2]) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,*ppuVar4,1);
    p_Var2 = (__vtbl_ptr_type *)this->__vtable;
  }
  ((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0xc))->custom_deallocate =
       &GRA3DVU1MEM_VF02;
  pcVar3 = (custom_allocator<IEditObject_*>__vtable *)p_Var2;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0x18))->
                    custom_deallocate,1);
    pcVar3 = this->__vtable;
  }
  pcVar3[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  puVar1 = pcVar3[-2].custom_deallocate;
  if (&GRA3DVU1MEM_VF02 < pcVar3[-1].custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,puVar1,1);
    pcVar3 = this->__vtable;
  }
  pcVar3[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  replace__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUiUiUic
            (this,(int)p_Var2 - (int)pcVar3,puVar1 + ((int)&pcVar3->field_0x0 - (int)p_Var2),0,0);
  pcVar3 = this->__vtable;
  if (&GRA3DVU1MEM_VF02 < pcVar3[-1].custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,pcVar3[-2].custom_deallocate,1);
    this->__vtable[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  }
  else {
    pcVar3[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  }
                    /* inlined from CDebugEdit.h */
  this[1].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
  this[2].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
                    /* end of inlined section */
  this[4].__vtable = (custom_allocator<IEditObject_*>__vtable *)_vt_9CEditRoot;
  this[3].__vtable = (custom_allocator<IEditObject_*>__vtable *)this;
                    /* inlined from ctl.h */
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* end of inlined section */
                    /* inlined from ctl.h */
  this[5].__vtable =
       (custom_allocator<IEditObject_*>__vtable *)_vt_Q23ctlt16custom_allocator1ZP11IEditObject;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[8].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[6].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
  this[7].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
                    /* end of inlined section */
  return (IEditObject **)_vt_9CEditRoot;
}

char* ctl::custom_allocator<char>::custom_allocate(size_t _Count) {
  undefined *puVar1;
  __vtbl_ptr_type *p_Var2;
  custom_allocator<IEditObject_*>__vtable *pcVar3;
  undefined **ppuVar4;
  
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from CDebugEdit.h */
                    /* end of inlined section */
                    /* inlined from CDebugEdit.h */
                    /* end of inlined section */
                    /* inlined from CDebugEdit.h */
  this[4].__vtable = (custom_allocator<IEditObject_*>__vtable *)_vt_11IEditObject;
                    /* inlined from custom/bastring.h */
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var2 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var2 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep
                       (0x369d78);
  }
  this->__vtable = (custom_allocator<IEditObject_*>__vtable *)p_Var2;
  ppuVar4 = &((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0x18))->custom_deallocate;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,*ppuVar4,1);
    p_Var2 = (__vtbl_ptr_type *)this->__vtable;
    ppuVar4 = &((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0x18))->custom_deallocate
    ;
  }
  ppuVar4[3] = (undefined *)0x1;
  if (1 < ppuVar4[2]) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,*ppuVar4,1);
    p_Var2 = (__vtbl_ptr_type *)this->__vtable;
  }
  ((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0xc))->custom_deallocate =
       &GRA3DVU1MEM_VF02;
  pcVar3 = (custom_allocator<IEditObject_*>__vtable *)p_Var2;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0x18))->
                    custom_deallocate,1);
    pcVar3 = this->__vtable;
  }
  pcVar3[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  puVar1 = pcVar3[-2].custom_deallocate;
  if (&GRA3DVU1MEM_VF02 < pcVar3[-1].custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,puVar1,1);
    pcVar3 = this->__vtable;
  }
  pcVar3[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  replace__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUiUiUic
            (this,(int)p_Var2 - (int)pcVar3,puVar1 + ((int)&pcVar3->field_0x0 - (int)p_Var2),0,0);
  pcVar3 = this->__vtable;
  if (&GRA3DVU1MEM_VF02 < pcVar3[-1].custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,pcVar3[-2].custom_deallocate,1);
    this->__vtable[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  }
  else {
    pcVar3[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  }
                    /* inlined from CDebugEdit.h */
  this[1].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
  this[2].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
                    /* end of inlined section */
  this[4].__vtable = (custom_allocator<IEditObject_*>__vtable *)_vt_9CEditRoot;
  this[3].__vtable = (custom_allocator<IEditObject_*>__vtable *)this;
                    /* inlined from ctl.h */
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* end of inlined section */
                    /* inlined from ctl.h */
  this[5].__vtable =
       (custom_allocator<IEditObject_*>__vtable *)_vt_Q23ctlt16custom_allocator1ZP11IEditObject;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[8].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[6].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
  this[7].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
                    /* end of inlined section */
  return (IEditObject **)_vt_9CEditRoot;
}

IEditObject** ctl::custom_allocator<IEditObject *>::custom_allocate(size_t _Count) {
  undefined *puVar1;
  __vtbl_ptr_type *p_Var2;
  custom_allocator<IEditObject_*>__vtable *pcVar3;
  undefined **ppuVar4;
  
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from CDebugEdit.h */
                    /* end of inlined section */
                    /* inlined from CDebugEdit.h */
                    /* end of inlined section */
                    /* inlined from CDebugEdit.h */
  this[4].__vtable = (custom_allocator<IEditObject_*>__vtable *)_vt_11IEditObject;
                    /* inlined from custom/bastring.h */
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var2 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var2 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep
                       (0x369d78);
  }
  this->__vtable = (custom_allocator<IEditObject_*>__vtable *)p_Var2;
  ppuVar4 = &((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0x18))->custom_deallocate;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,*ppuVar4,1);
    p_Var2 = (__vtbl_ptr_type *)this->__vtable;
    ppuVar4 = &((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0x18))->custom_deallocate
    ;
  }
  ppuVar4[3] = (undefined *)0x1;
  if (1 < ppuVar4[2]) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,*ppuVar4,1);
    p_Var2 = (__vtbl_ptr_type *)this->__vtable;
  }
  ((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0xc))->custom_deallocate =
       &GRA3DVU1MEM_VF02;
  pcVar3 = (custom_allocator<IEditObject_*>__vtable *)p_Var2;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,((custom_allocator<IEditObject_*>__vtable *)((int)p_Var2 + -0x18))->
                    custom_deallocate,1);
    pcVar3 = this->__vtable;
  }
  pcVar3[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  puVar1 = pcVar3[-2].custom_deallocate;
  if (&GRA3DVU1MEM_VF02 < pcVar3[-1].custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,puVar1,1);
    pcVar3 = this->__vtable;
  }
  pcVar3[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  replace__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUiUiUic
            (this,(int)p_Var2 - (int)pcVar3,puVar1 + ((int)&pcVar3->field_0x0 - (int)p_Var2),0,0);
  pcVar3 = this->__vtable;
  if (&GRA3DVU1MEM_VF02 < pcVar3[-1].custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,pcVar3[-2].custom_deallocate,1);
    this->__vtable[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  }
  else {
    pcVar3[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  }
                    /* inlined from CDebugEdit.h */
  this[1].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
  this[2].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
                    /* end of inlined section */
  this[4].__vtable = (custom_allocator<IEditObject_*>__vtable *)_vt_9CEditRoot;
  this[3].__vtable = (custom_allocator<IEditObject_*>__vtable *)this;
                    /* inlined from ctl.h */
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* end of inlined section */
                    /* inlined from ctl.h */
  this[5].__vtable =
       (custom_allocator<IEditObject_*>__vtable *)_vt_Q23ctlt16custom_allocator1ZP11IEditObject;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[8].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[6].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
  this[7].__vtable = (custom_allocator<IEditObject_*>__vtable *)0x0;
                    /* end of inlined section */
  return (IEditObject **)_vt_9CEditRoot;
}
