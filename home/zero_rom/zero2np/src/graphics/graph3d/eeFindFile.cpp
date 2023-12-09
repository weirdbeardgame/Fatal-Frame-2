// STATUS: NOT STARTED

#include "eeFindFile.h"

struct iterator_traits<basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> > *> {
};

struct __type_traits<basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> > > {
};

struct iterator_traits<sce_dirent *> {
};

struct __type_traits<sce_dirent> {
};

// warning: multiple differing types with the same name (#77, type name not equal)
typedef string _Tp;

struct __copy_dispatch<basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> > *,basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> > *,__false_type> {
	__copy_dispatch<basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> > *,basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> > *,__false_type>& operator=();
	__copy_dispatch();
	__copy_dispatch();
	static string* copy(/* parameters unknown */);
};

// warning: multiple differing types with the same name (#77, type name not equal)
typedef sce_dirent _Tp;

struct __copy_dispatch<sce_dirent *,sce_dirent *,__false_type> {
	__copy_dispatch<sce_dirent *,sce_dirent *,__false_type>& operator=();
	__copy_dispatch();
	__copy_dispatch();
	static sce_dirent* copy(/* parameters unknown */);
};

struct __copy_backward_dispatch<basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> > *,basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> > *,__false_type> {
	__copy_backward_dispatch<basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> > *,basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> > *,__false_type>& operator=();
	__copy_backward_dispatch();
	__copy_backward_dispatch();
	static string* copy(/* parameters unknown */);
};

struct __copy_backward_dispatch<sce_dirent *,sce_dirent *,__false_type> {
	__copy_backward_dispatch<sce_dirent *,sce_dirent *,__false_type>& operator=();
	__copy_backward_dispatch();
	__copy_backward_dispatch();
	static sce_dirent* copy(/* parameters unknown */);
};

struct CFindFile {
protected:
	string m_strError;
private:
	string m_strOriginDirectory;
	string m_strCurrentDirectory;
	vector<basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> > > m_vstrFileSpec;
	vector<sce_dirent> m_vDirEntry;
	vector<sce_dirent> m_vMatchFile;
	vector<sce_dirent> m_vSubDirectory;
	vector<sce_dirent> m_vSubDirectoryAll;
public:
	__vtbl_ptr_type *__vtable;
	
	CFindFile& operator=();
	CFindFile();
protected:
	int OnError(char *pStr);
public:
	char* ErrorString();
private:
	int ScanDirectory();
	int IsMatchSpec(char *pFileName, char *strFileSpec);
	int AnalyzeSpec(char *pFileSpec);
public:
	CFindFile();
	/* vtable[1] */ virtual CFindFile();
	int Scan();
	int Scan();
	void SetDirectory(char *pDirName);
	void SetFileSpec(char *pFileSpec);
	void Clear();
	int GetNumMatchFile();
	sce_dirent& GetMatchFileRef(int iIndex);
	int GetNumFile();
	sce_dirent& GetFileRef(int iIndex);
	int GetNumSubDirectory();
	sce_dirent& GetSubDirectoryRef(int iIndex);
	int GetNumSubDirectoryAll();
	sce_dirent& GetSubDirectoryAllRef(int iIndex);
	char* CurrentDirectory();
	static int IsDirectory(/* parameters unknown */);
};

struct custom_allocator<sce_dirent> {
	__vtbl_ptr_type *__vtable;
	
	custom_allocator<sce_dirent>& operator=();
	sce_dirent* address();
	sce_dirent* address();
	custom_allocator();
	custom_allocator();
	/* vtable[1] */ virtual sce_dirent* custom_allocate(size_t _Count);
	sce_dirent* allocate();
	sce_dirent* allocate();
	/* vtable[2] */ virtual void custom_deallocate(void *_Ptr);
	void deallocate();
	void construct();
	void destroy();
	size_t max_size();
};

struct custom_allocator<basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> > > {
	__vtbl_ptr_type *__vtable;
	
	custom_allocator<basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> > >& operator=();
	string* address();
	string* address();
	custom_allocator();
	custom_allocator();
	/* vtable[1] */ virtual string* custom_allocate();
	string* allocate();
	string* allocate();
	/* vtable[2] */ virtual void custom_deallocate();
	void deallocate();
	void construct();
	void destroy();
	size_t max_size();
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

__vtbl_ptr_type CFindFile virtual table[3] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ 0x2b21e8,
		/* .__delta2 = */ 8680
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ CFindFile::~CFindFile,
		/* .__delta2 = */ -19480
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type ctl::custom_allocator<sce_dirent> virtual table[4] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ 0x2b21a8,
		/* .__delta2 = */ 8616
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ 0x2b2498,
		/* .__delta2 = */ 9368
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ 0x2b2458,
		/* .__delta2 = */ 9304
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type ctl::custom_allocator<basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> > > virtual table[4] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ 0x2b2168,
		/* .__delta2 = */ 8552
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ 0x2b2478,
		/* .__delta2 = */ 9336
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ 0x2b2438,
		/* .__delta2 = */ 9272
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

unsigned char ctl::custom_allocator<basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> > > type_info node[8];
unsigned char ctl::custom_allocator<sce_dirent> type_info node[8];
unsigned char CFindFile type_info node[8];
unsigned char ctl::custom_allocator<char> type_info node[8];
size_t basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> >::npos = 65535;
bool _Alloc_traits<basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> >, ctl::custom_allocator<basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> > > >::_S_instanceless = false;
bool _Alloc_traits<sce_dirent, ctl::custom_allocator<sce_dirent> >::_S_instanceless = false;

CFindFile* CFindFile::CFindFile() {
	basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> > *this;
	basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> > *this;
	vector<basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> > > *this;
	vector<sce_dirent> *this;
	vector<sce_dirent> *this;
	vector<sce_dirent> *this;
	vector<sce_dirent> *this;
	size_t pos;
	sce_dirent *__first;
	sce_dirent *__last;
	sce_dirent *__first;
	sce_dirent *__first;
	sce_dirent *__last;
	sce_dirent *__first;
	sce_dirent *__first;
	sce_dirent *__last;
	sce_dirent *__first;
	sce_dirent *__first;
	sce_dirent *__last;
	sce_dirent *__first;
	string *__first;
	string *__last;
	string *__first;
	
  undefined *puVar1;
  bool bVar2;
  sce_dirent *psVar3;
  __vtbl_ptr_type *p_Var4;
  custom_allocator<sce_dirent>__vtable *pcVar5;
  undefined **ppuVar6;
  custom_allocator<sce_dirent> *pcVar7;
  char str [256];
  sce_dirent *__first;
  
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
  this[0x17].__vtable = (custom_allocator<sce_dirent>__vtable *)_vt_9CFindFile;
                    /* inlined from custom/bastring.h */
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var4 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var4 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep
                       (0x369d78);
  }
  this->__vtable = (custom_allocator<sce_dirent>__vtable *)p_Var4;
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var4 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var4 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep()
    ;
  }
  this[1].__vtable = (custom_allocator<sce_dirent>__vtable *)p_Var4;
  pcVar7 = this + 2;
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var4 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var4 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep()
    ;
  }
  pcVar7->__vtable = (custom_allocator<sce_dirent>__vtable *)p_Var4;
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[4].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[5].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[3].__vtable =
       (custom_allocator<sce_dirent>__vtable *)
       _vt_Q23ctlt16custom_allocator1Zt12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc
  ;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[6].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[8].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[9].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[10].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[7].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0xc].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[0xb].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0xd].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
  this[0xe].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x10].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[0xf].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x11].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
  this[0x12].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* end of inlined section */
                    /* inlined from ctl.h */
  this[0x13].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x14].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x15].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
  this[0x16].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from custom/bastring.h */
  ppuVar6 = &((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0x18))->custom_deallocate;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,*ppuVar6,1);
    p_Var4 = (__vtbl_ptr_type *)pcVar7->__vtable;
    ppuVar6 = &((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0x18))->custom_deallocate;
  }
  ppuVar6[3] = (undefined *)0x1;
  if (1 < ppuVar6[2]) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,*ppuVar6,1);
    p_Var4 = (__vtbl_ptr_type *)pcVar7->__vtable;
  }
  ((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0xc))->custom_deallocate =
       &GRA3DVU1MEM_VF02;
  pcVar5 = (custom_allocator<sce_dirent>__vtable *)p_Var4;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0x18))->
                      custom_deallocate,1);
    pcVar5 = pcVar7->__vtable;
  }
  pcVar5[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  puVar1 = pcVar5[-2].custom_deallocate;
  if (&GRA3DVU1MEM_VF02 < pcVar5[-1].custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,puVar1,1);
    pcVar5 = pcVar7->__vtable;
  }
  pcVar5[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  replace__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUiUiUic
            (pcVar7,(int)p_Var4 - (int)pcVar5,puVar1 + ((int)&pcVar5->field_0x0 - (int)p_Var4),0,0);
  pcVar5 = pcVar7->__vtable;
  bVar2 = pcVar5[-1].custom_allocate < &GRA3DVU1MEM_DBADDRESS;
  psVar3 = (sce_dirent *)(uint)bVar2;
  if (!bVar2) {
    psVar3 = (sce_dirent *)
             alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
                       (pcVar7,pcVar5[-2].custom_deallocate,1);
    pcVar5 = pcVar7->__vtable;
  }
                    /* end of inlined section */
  pcVar5[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
                    /* end of inlined section */
  return psVar3;
}

void CFindFile::~CFindFile(int __in_chrg) {
	vector<sce_dirent> *this;
	sce_dirent *__first;
	sce_dirent *__last;
	sce_dirent *__first;
	vector<sce_dirent> *this;
	sce_dirent *__first;
	sce_dirent *__last;
	sce_dirent *__first;
	vector<sce_dirent> *this;
	sce_dirent *__first;
	sce_dirent *__last;
	sce_dirent *__first;
	vector<sce_dirent> *this;
	sce_dirent *__first;
	sce_dirent *__last;
	sce_dirent *__first;
	vector<basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> > > *this;
	string *__first;
	string *__last;
	string *__first;
	
  sce_dirent *psVar1;
  custom_allocator<sce_dirent>__vtable *pcVar2;
  basic_string<char,string_char_traits<char>,ctl::custom_allocator<char>_> *pbVar3;
  custom_allocator<basic_string<char,_string_char_traits<char>,_ctl::custom_allocator<char>_>_>__vtable
  *pcVar4;
  sce_dirent *psVar5;
  int iVar6;
  char *pcVar7;
  basic_string<char,string_char_traits<char>,ctl::custom_allocator<char>_> *pbVar8;
  basic_string<char,string_char_traits<char>,ctl::custom_allocator<char>_> *__first;
  __vtbl_ptr_type *local_90;
  __vtbl_ptr_type *local_80;
  __vtbl_ptr_type *local_70;
  __vtbl_ptr_type *local_60;
  
  this->__vtable = (CFindFile__vtable *)_vt_9CFindFile;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_construct.h */
  psVar1 = (this->m_vSubDirectoryAll).field0_0x0.field0_0x0.field0_0x0._M_start;
  for (psVar5 = psVar1;
      psVar5 != (this->m_vSubDirectoryAll).field0_0x0.field0_0x0.field0_0x0._M_finish;
      psVar5 = psVar5 + 1) {
  }
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  if (psVar1 != (sce_dirent *)0x0) {
                    /* inlined from ctl.h */
    pcVar2 = (this->m_vSubDirectoryAll).field0_0x0.field0_0x0.field0_0x0._M_data_allocator.__vtable;
    (*(code *)pcVar2[1].custom_deallocate)
              ((int)&(this->m_vSubDirectoryAll).field0_0x0.field0_0x0.field0_0x0._M_data_allocator.
                     __vtable + (int)*(short *)&pcVar2[1].custom_allocate,psVar1);
  }
                    /* end of inlined section */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_construct.h */
  psVar1 = (this->m_vSubDirectory).field0_0x0.field0_0x0.field0_0x0._M_start;
  for (psVar5 = psVar1; psVar5 != (this->m_vSubDirectory).field0_0x0.field0_0x0.field0_0x0._M_finish
      ; psVar5 = psVar5 + 1) {
  }
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  if (psVar1 != (sce_dirent *)0x0) {
                    /* inlined from ctl.h */
    pcVar2 = (this->m_vSubDirectory).field0_0x0.field0_0x0.field0_0x0._M_data_allocator.__vtable;
    (*(code *)pcVar2[1].custom_deallocate)
              ((int)&(this->m_vSubDirectory).field0_0x0.field0_0x0.field0_0x0._M_data_allocator.
                     __vtable + (int)*(short *)&pcVar2[1].custom_allocate);
                    /* end of inlined section */
  }
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_construct.h */
  psVar1 = (this->m_vMatchFile).field0_0x0.field0_0x0.field0_0x0._M_start;
  for (psVar5 = psVar1; psVar5 != (this->m_vMatchFile).field0_0x0.field0_0x0.field0_0x0._M_finish;
      psVar5 = psVar5 + 1) {
  }
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  if (psVar1 != (sce_dirent *)0x0) {
                    /* inlined from ctl.h */
    pcVar2 = (this->m_vMatchFile).field0_0x0.field0_0x0.field0_0x0._M_data_allocator.__vtable;
    (*(code *)pcVar2[1].custom_deallocate)
              ((int)&(this->m_vMatchFile).field0_0x0.field0_0x0.field0_0x0._M_data_allocator.
                     __vtable + (int)*(short *)&pcVar2[1].custom_allocate);
                    /* end of inlined section */
  }
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_construct.h */
  psVar1 = (this->m_vDirEntry).field0_0x0.field0_0x0.field0_0x0._M_start;
  for (psVar5 = psVar1; psVar5 != (this->m_vDirEntry).field0_0x0.field0_0x0.field0_0x0._M_finish;
      psVar5 = psVar5 + 1) {
  }
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  if (psVar1 != (sce_dirent *)0x0) {
                    /* inlined from ctl.h */
    pcVar2 = (this->m_vDirEntry).field0_0x0.field0_0x0.field0_0x0._M_data_allocator.__vtable;
    (*(code *)pcVar2[1].custom_deallocate)
              ((int)&(this->m_vDirEntry).field0_0x0.field0_0x0.field0_0x0._M_data_allocator.__vtable
               + (int)*(short *)&pcVar2[1].custom_allocate);
                    /* end of inlined section */
  }
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_construct.h */
  pbVar8 = (this->m_vstrFileSpec).field0_0x0.field0_0x0.field0_0x0._M_start;
  pbVar3 = (this->m_vstrFileSpec).field0_0x0.field0_0x0.field0_0x0._M_finish;
  if (pbVar8 != pbVar3) {
                    /* inlined from custom/bastring.h */
    pcVar7 = pbVar8->dat;
    while( true ) {
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_construct.h */
      pbVar8 = pbVar8 + 1;
                    /* inlined from custom/bastring.h */
      iVar6 = *(int *)(pcVar7 + -8);
                    /* inlined from ctl.h */
                    /* inlined from custom/bastring.h */
      *(int *)(pcVar7 + -8) = iVar6 + -1;
      if (iVar6 + -1 == 0) {
                    /* inlined from ctl.h */
        local_90 = _vt_Q23ctlt16custom_allocator1Zc;
        (*(code *)_vt_Q23ctlt16custom_allocator1Zc[2]._4_4_)
                  ((int)&local_90 + (int)(short)_vt_Q23ctlt16custom_allocator1Zc[2].__delta,
                   pcVar7 + -0x10);
      }
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_construct.h */
      if (pbVar8 == pbVar3) break;
      pcVar7 = pbVar8->dat;
    }
    pbVar8 = (this->m_vstrFileSpec).field0_0x0.field0_0x0.field0_0x0._M_start;
  }
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  if (pbVar8 == (basic_string<char,string_char_traits<char>,ctl::custom_allocator<char>_> *)0x0) {
    pcVar7 = (this->m_strCurrentDirectory).dat;
  }
  else {
                    /* inlined from ctl.h */
    pcVar4 = (this->m_vstrFileSpec).field0_0x0.field0_0x0.field0_0x0._M_data_allocator.__vtable;
    (*(code *)pcVar4[1].custom_deallocate)
              ((int)&(this->m_vstrFileSpec).field0_0x0.field0_0x0.field0_0x0._M_data_allocator.
                     __vtable + (int)*(short *)&pcVar4[1].custom_allocate);
                    /* inlined from custom/bastring.h */
    pcVar7 = (this->m_strCurrentDirectory).dat;
  }
  iVar6 = *(int *)(pcVar7 + -8);
  *(int *)(pcVar7 + -8) = iVar6 + -1;
  if (iVar6 + -1 == 0) {
                    /* inlined from ctl.h */
    local_80 = _vt_Q23ctlt16custom_allocator1Zc;
    (*(code *)_vt_Q23ctlt16custom_allocator1Zc[2]._4_4_)
              ((int)&local_80 + (int)(short)_vt_Q23ctlt16custom_allocator1Zc[2].__delta);
  }
                    /* inlined from custom/bastring.h */
  pcVar7 = (this->m_strOriginDirectory).dat;
  iVar6 = *(int *)(pcVar7 + -8) + -1;
  *(int *)(pcVar7 + -8) = iVar6;
  if (iVar6 == 0) {
                    /* inlined from ctl.h */
    local_70 = _vt_Q23ctlt16custom_allocator1Zc;
    (*(code *)_vt_Q23ctlt16custom_allocator1Zc[2]._4_4_)
              ((int)&local_70 + (int)(short)_vt_Q23ctlt16custom_allocator1Zc[2].__delta);
  }
                    /* inlined from custom/bastring.h */
  pcVar7 = (this->m_strError).dat;
  iVar6 = *(int *)(pcVar7 + -8) + -1;
  *(int *)(pcVar7 + -8) = iVar6;
  if (iVar6 == 0) {
                    /* inlined from ctl.h */
    local_60 = _vt_Q23ctlt16custom_allocator1Zc;
    (*(code *)_vt_Q23ctlt16custom_allocator1Zc[2]._4_4_)
              ((int)&local_60 + (int)(short)_vt_Q23ctlt16custom_allocator1Zc[2].__delta);
  }
                    /* end of inlined section */
  if ((__in_chrg & 1U) != 0) {
    __builtin_delete(this);
  }
  return;
}

int CFindFile::IsMatchSpec(char *pFileName, char *strFileSpec) {
	char strSrcFile[256];
	char strSrcDot[2];
	char strSrcExt[256];
	char strSpecFile[256];
	char strSpecDot[2];
	char strSpecExt[256];
	char *string2;
	char str1[256];
	char str2[256];
	char *pCur;
	char *pCur;
	char *string2;
	char str1[256];
	char str2[256];
	char *pCur;
	char *pCur;
	char *pLastSlash;
	char *pLastYen;
	char *pLastSep;
	char *pDot;
	char *pFnameTop;
	int iLen;
	char str1[256];
	char str2[256];
	char *pCur;
	char *pCur;
	char str1[256];
	char str2[256];
	char *pCur;
	char *pCur;
	char str1[256];
	char str2[256];
	char *pCur;
	char *pCur;
	
  int iVar1;
  char *pcVar2;
  size_t __n;
  char *pcVar3;
  char *__s;
  char local_e70 [256];
  char local_d70 [256];
  char local_c70 [256];
  char local_b70 [256];
  char strSrcFile [256];
  char strSrcDot [2];
  char strSrcExt [256];
  char strSpecFile [256];
  char strSpecDot [2];
  char strSpecExt [256];
  char local_650 [256];
  char local_550 [256];
  char local_450 [256];
  char local_350 [256];
  char str1 [256];
  char str2 [256];
  
  pcVar3 = local_e70;
                    /* inlined from custom/string.h */
                    /* end of inlined section */
                    /* inlined from custom/string.h */
                    /* end of inlined section */
                    /* end of inlined section */
                    /* inlined from custom/string.h */
  strcpy(local_e70,pFileName);
  strcpy(local_d70,&DAT_003efbe8);
  while (pcVar2 = local_d70, local_e70[0] != '\0') {
    if ((""[local_e70[0] + 1] & 2U) != 0) {
      local_e70[0] = local_e70[0] + -0x20;
    }
    *pcVar3 = local_e70[0];
    pcVar3 = pcVar3 + 1;
    local_e70[0] = *pcVar3;
  }
  while (local_d70[0] != '\0') {
    if ((""[local_d70[0] + 1] & 2U) != 0) {
      local_d70[0] = local_d70[0] + -0x20;
    }
    *pcVar2 = local_d70[0];
    local_d70[0] = pcVar2[1];
    pcVar2 = pcVar2 + 1;
  }
  iVar1 = strcmp(local_e70,local_d70);
  if (iVar1 != 0) {
    strcpy(local_c70,pFileName);
    strcpy(local_b70,&DAT_003efbf0);
    pcVar3 = local_c70;
    while (pcVar2 = local_b70, local_c70[0] != '\0') {
      if ((""[local_c70[0] + 1] & 2U) != 0) {
        local_c70[0] = local_c70[0] + -0x20;
      }
      *pcVar3 = local_c70[0];
      pcVar3 = pcVar3 + 1;
      local_c70[0] = *pcVar3;
    }
    while (local_b70[0] != '\0') {
      if ((""[local_b70[0] + 1] & 2U) != 0) {
        local_b70[0] = local_b70[0] + -0x20;
      }
      *pcVar2 = local_b70[0];
      local_b70[0] = pcVar2[1];
      pcVar2 = pcVar2 + 1;
    }
    iVar1 = strcmp(local_c70,local_b70);
    if (iVar1 != 0) {
                    /* end of inlined section */
      memset(strSrcFile,0,0x100);
      memset(strSrcDot,0,2);
      memset(strSrcExt,0,0x100);
      memset(strSpecFile,0,0x100);
      memset(strSpecDot,0,2);
      memset(strSpecExt,0,0x100);
      sscanf(strFileSpec,"%[^.]%[.]%s");
                    /* inlined from custom/stdlib.h */
      strrchr(pFileName,0x3a);
      pcVar3 = strrchr(pFileName,0x2f);
      pcVar2 = strrchr(pFileName,0x5c);
      if ((int)pcVar3 <= (int)pcVar2) {
        pcVar3 = pcVar2;
      }
      pcVar2 = strrchr(pFileName,0x2e);
      if (strSrcFile != (char *)0x0) {
        __s = pFileName;
        if (pcVar3 != (char *)0x0) {
          __s = pcVar3 + 1;
        }
        strSrcFile[0] = '\0';
        __n = (size_t)((int)pcVar2 - (int)__s);
        if (pcVar2 == (char *)0x0) {
          __n = strlen(__s);
        }
        strncpy(strSrcFile,__s,__n);
      }
      if ((strSrcExt != (char *)0x0) && (strSrcExt[0] = '\0', pcVar2 != (char *)0x0)) {
        strcpy(strSrcExt,pcVar2);
      }
                    /* end of inlined section */
      sscanf(strSrcExt,s______s_003efc00);
                    /* inlined from custom/string.h */
      strcpy(local_650,strFileSpec);
      strcpy(local_550,pFileName);
      pcVar3 = local_650;
      while (pcVar2 = local_550, local_650[0] != '\0') {
        if ((""[local_650[0] + 1] & 2U) != 0) {
          local_650[0] = local_650[0] + -0x20;
        }
        *pcVar3 = local_650[0];
        pcVar3 = pcVar3 + 1;
        local_650[0] = *pcVar3;
      }
      while (local_550[0] != '\0') {
        if ((""[local_550[0] + 1] & 2U) != 0) {
          local_550[0] = local_550[0] + -0x20;
        }
        *pcVar2 = local_550[0];
        local_550[0] = pcVar2[1];
        pcVar2 = pcVar2 + 1;
      }
      iVar1 = strcmp(local_650,local_550);
                    /* end of inlined section */
      if ((iVar1 != 0) && (iVar1 = strcmp(strFileSpec,&DAT_003efc08), iVar1 != 0)) {
        iVar1 = strcmp(strFileSpec,&DAT_003efc10);
        if (iVar1 == 0) {
          return 1;
        }
        iVar1 = strcmp(strSpecExt,&DAT_003efc08);
        if (iVar1 == 0) {
                    /* inlined from custom/string.h */
          strcpy(local_450,strSpecFile);
          strcpy(local_350,strSrcFile);
          pcVar3 = local_450;
          while (pcVar2 = local_350, local_450[0] != '\0') {
            if ((""[local_450[0] + 1] & 2U) != 0) {
              local_450[0] = local_450[0] + -0x20;
            }
            *pcVar3 = local_450[0];
            pcVar3 = pcVar3 + 1;
            local_450[0] = *pcVar3;
          }
          while (local_350[0] != '\0') {
            if ((""[local_350[0] + 1] & 2U) != 0) {
              local_350[0] = local_350[0] + -0x20;
            }
            *pcVar2 = local_350[0];
            local_350[0] = pcVar2[1];
            pcVar2 = pcVar2 + 1;
          }
          iVar1 = strcmp(local_450,local_350);
          if (iVar1 == 0) {
            return 1;
          }
        }
                    /* end of inlined section */
        iVar1 = strcmp(strSpecFile,&DAT_003efc08);
        if (iVar1 != 0) {
          return 0;
        }
                    /* inlined from custom/string.h */
        strcpy(str1,strSpecExt);
        strcpy(str2,strSrcExt);
        pcVar3 = str1;
        while (pcVar2 = str2, str1[0] != '\0') {
          if ((""[str1[0] + 1] & 2U) != 0) {
            str1[0] = str1[0] + -0x20;
          }
          *pcVar3 = str1[0];
          pcVar3 = pcVar3 + 1;
          str1[0] = *pcVar3;
        }
        while (str2[0] != '\0') {
          if ((""[str2[0] + 1] & 2U) != 0) {
            str2[0] = str2[0] + -0x20;
          }
          *pcVar2 = str2[0];
          str2[0] = pcVar2[1];
          pcVar2 = pcVar2 + 1;
        }
        iVar1 = strcmp(str1,str2);
        if (iVar1 != 0) {
          return 0;
        }
      }
      return 1;
    }
  }
  return 0;
}

int CFindFile::AnalyzeSpec(char *pFileSpec) {
	char *pCur;
	vector<basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> >,ctl::custom_allocator<basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> > > > *this;
	string *__first;
	string *__last;
	string *__first;
	string *__last;
	string *__first;
	char strSpec[256];
	char strOR[2];
	basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> > *this;
	Rep *this;
	
  basic_string<char,string_char_traits<char>,ctl::custom_allocator<char>_> *pbVar1;
  __vtbl_ptr_type *p_Var2;
  int iVar3;
  size_t sVar4;
  size_t sVar5;
  char *pcVar6;
  basic_string<char,string_char_traits<char>,ctl::custom_allocator<char>_> *pbVar7;
  basic_string<char,string_char_traits<char>,ctl::custom_allocator<char>_> *pbVar8;
  basic_string<char,string_char_traits<char>,ctl::custom_allocator<char>_> *__first;
  __vtbl_ptr_type *local_1a0;
  char strSpec [256];
  char strOR [2];
  __vtbl_ptr_type *local_80 [8];
  __vtbl_ptr_type *local_60;
  
  iVar3 = 0;
  if (pFileSpec != (char *)0x0) {
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
                    /* end of inlined section */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
    pbVar1 = (this->m_vstrFileSpec).field0_0x0.field0_0x0.field0_0x0._M_start;
    pbVar7 = (this->m_vstrFileSpec).field0_0x0.field0_0x0.field0_0x0._M_finish;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_construct.h */
    pbVar8 = pbVar7;
    if (pbVar1 != pbVar7) {
                    /* inlined from custom/bastring.h */
      pcVar6 = pbVar1->dat;
      pbVar8 = pbVar1;
      while( true ) {
        iVar3 = *(int *)(pcVar6 + -8);
        *(int *)(pcVar6 + -8) = iVar3 + -1;
        if (iVar3 + -1 == 0) {
                    /* inlined from ctl.h */
          local_1a0 = _vt_Q23ctlt16custom_allocator1Zc;
          (*(code *)_vt_Q23ctlt16custom_allocator1Zc[2]._4_4_)
                    ((int)&local_1a0 + (int)(short)_vt_Q23ctlt16custom_allocator1Zc[2].__delta);
        }
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_construct.h */
        pbVar8 = pbVar8 + 1;
        if (pbVar8 == pbVar7) break;
        pcVar6 = pbVar8->dat;
      }
      pbVar8 = (this->m_vstrFileSpec).field0_0x0.field0_0x0.field0_0x0._M_finish;
    }
                    /* end of inlined section */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
                    /* end of inlined section */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
                    /* end of inlined section */
    (this->m_vstrFileSpec).field0_0x0.field0_0x0.field0_0x0._M_finish =
         (basic_string<char,string_char_traits<char>,ctl::custom_allocator<char>_> *)
         ((int)pbVar8 - ((int)pbVar7 - (int)pbVar1));
    while( true ) {
      if (*pFileSpec == '\0') break;
      memset(strSpec,0,0x100);
      memset(strOR,0,2);
      iVar3 = sscanf(pFileSpec,"%[^|]%[|]");
      if (iVar3 < 1) break;
                    /* inlined from custom/bastring.h */
      if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ ==
          0) {
        local_80[0] = _vt_Q23ctlt16custom_allocator1Zc;
        _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
             _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref +
             1;
      }
      else {
        local_80[0] = (__vtbl_ptr_type *)
                      clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep
                                ();
      }
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/std/straits.h */
      sVar4 = strlen(strSpec);
                    /* inlined from custom/bastring.h */
      replace__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUiUiPCcUi
                (local_80,0,0xffffffffffffffff,strSpec,sVar4);
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
      pbVar1 = (this->m_vstrFileSpec).field0_0x0.field0_0x0.field0_0x0._M_finish;
      if (pbVar1 == (this->m_vstrFileSpec).field0_0x0.field0_0x0.field0_0x0._M_end_of_storage) {
        _M_insert_aux__t6vector2Zt12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcZQ23ctlt16custom_allocator1Zt12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcPt12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcRCt12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc
                  (&this->m_vstrFileSpec,pbVar1,local_80);
      }
      else {
                    /* inlined from
                       /usr/local/sce/ee/gcc/lib/gcc-lib/ee/2.96-ee-001003-1/include/new */
        pbVar7 = pbVar1;
        if (pbVar1 != (basic_string<char,string_char_traits<char>,ctl::custom_allocator<char>_> *)
                      0x0) {
                    /* inlined from custom/bastring.h */
          if (*(int *)&local_80[0][-1].__delta2 == 0) {
            *(int *)(local_80[0] + -1) = *(int *)(local_80[0] + -1) + 1;
            p_Var2 = local_80[0];
          }
          else {
            p_Var2 = (__vtbl_ptr_type *)
                     clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep
                               ();
            pbVar7 = (this->m_vstrFileSpec).field0_0x0.field0_0x0.field0_0x0._M_finish;
          }
          pbVar1->dat = (char *)p_Var2;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
        }
        (this->m_vstrFileSpec).field0_0x0.field0_0x0.field0_0x0._M_finish = pbVar7 + 1;
      }
                    /* inlined from custom/bastring.h */
      iVar3 = *(int *)(local_80[0] + -1);
      *(int *)(local_80[0] + -1) = iVar3 + -1;
      if (iVar3 + -1 == 0) {
                    /* inlined from ctl.h */
        local_60 = _vt_Q23ctlt16custom_allocator1Zc;
        (*(code *)_vt_Q23ctlt16custom_allocator1Zc[2]._4_4_)
                  ((int)&local_60 + (int)(short)_vt_Q23ctlt16custom_allocator1Zc[2].__delta);
      }
                    /* end of inlined section */
      sVar4 = strlen(strSpec);
      sVar5 = strlen(strOR);
      pFileSpec = pFileSpec + (int)sVar4 + (int)sVar5;
    }
    iVar3 = 1;
  }
                    /* end of inlined section */
  return iVar3;
}

int CFindFile::IsDirectory(sce_dirent *pDE) {
  return (int)(((pDE->d_stat).st_mode & 0xf000) == 0x1000);
}

int CFindFile::ScanDirectory() {
	int iFD;
	int bRet;
	basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> > *this;
	vector<sce_dirent,ctl::custom_allocator<sce_dirent> > *this;
	sce_dirent *__first;
	sce_dirent *__last;
	sce_dirent *__first;
	sce_dirent *__last;
	sce_dirent *__first;
	vector<sce_dirent,ctl::custom_allocator<sce_dirent> > *this;
	sce_dirent *__first;
	sce_dirent *__last;
	sce_dirent *__first;
	sce_dirent *__last;
	sce_dirent *__first;
	vector<sce_dirent,ctl::custom_allocator<sce_dirent> > *this;
	sce_dirent *__first;
	sce_dirent *__last;
	sce_dirent *__first;
	sce_dirent *__last;
	sce_dirent *__first;
	vector<sce_dirent,ctl::custom_allocator<sce_dirent> > *this;
	sce_dirent *__first;
	sce_dirent *__last;
	sce_dirent *__first;
	sce_dirent *__last;
	sce_dirent *__first;
	sce_dirent de;
	int iRet;
	int i;
	basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> > *this;
	int j;
	vector<sce_dirent,ctl::custom_allocator<sce_dirent> > *this;
	int i;
	char *pDirName;
	vector<sce_dirent,ctl::custom_allocator<sce_dirent> > *this;
	char str1[256];
	char str2[256];
	char *pCur;
	char *pCur;
	char str1[256];
	char str2[256];
	char *pCur;
	char *pCur;
	vector<sce_dirent,ctl::custom_allocator<sce_dirent> > *this;
	
  undefined *puVar1;
  uchar *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  ulong *puVar6;
  undefined4 uVar7;
  int iVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  ulong *puVar12;
  basic_string<char,string_char_traits<char>,ctl::custom_allocator<char>_> *pbVar13;
  uint uVar15;
  undefined8 *puVar16;
  ulong uVar17;
  char cVar19;
  char cVar20;
  sce_dirent *psVar21;
  sce_dirent *psVar22;
  ulong uVar23;
  undefined8 uVar24;
  ulong uVar25;
  ulong uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  char *pcVar29;
  ulong uVar30;
  int iVar31;
  sce_dirent *__first;
  sce_dirent de;
  char local_470 [256];
  char local_370 [256];
  char str1 [256];
  char str2 [256];
  vector<sce_dirent> *local_70;
  vector<sce_dirent> *local_6c;
  int bRet;
  char *local_64;
  char **ppcVar14;
  ulong uVar18;
  
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
  pcVar29 = (this->m_strCurrentDirectory).dat;
  iVar8 = *(int *)(pcVar29 + -0x10);
  if (iVar8 == 0) {
    pcVar29 = "";
  }
  else {
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/std/straits.h */
    pcVar29[iVar8] = '\0';
                    /* inlined from custom/bastring.h */
    pcVar29 = (this->m_strCurrentDirectory).dat;
  }
                    /* end of inlined section */
  iVar8 = sceDopen(pcVar29);
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
                    /* end of inlined section */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  psVar21 = (this->m_vDirEntry).field0_0x0.field0_0x0.field0_0x0._M_start;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_construct.h */
  for (psVar22 = psVar21; psVar22 != (this->m_vDirEntry).field0_0x0.field0_0x0.field0_0x0._M_finish;
      psVar22 = psVar22 + 1) {
  }
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  (this->m_vDirEntry).field0_0x0.field0_0x0.field0_0x0._M_finish = psVar21;
  psVar21 = (this->m_vMatchFile).field0_0x0.field0_0x0.field0_0x0._M_start;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_construct.h */
  for (psVar22 = psVar21; psVar22 != (this->m_vMatchFile).field0_0x0.field0_0x0.field0_0x0._M_finish
      ; psVar22 = psVar22 + 1) {
  }
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  local_70 = &this->m_vSubDirectory;
  (this->m_vMatchFile).field0_0x0.field0_0x0.field0_0x0._M_finish = psVar21;
  psVar21 = (this->m_vSubDirectory).field0_0x0.field0_0x0.field0_0x0._M_start;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_construct.h */
  for (psVar22 = psVar21;
      psVar22 != (this->m_vSubDirectory).field0_0x0.field0_0x0.field0_0x0._M_finish;
      psVar22 = psVar22 + 1) {
  }
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  uVar25 = (ulong)(int)local_70;
  local_6c = &this->m_vSubDirectoryAll;
  uVar23 = (ulong)(int)local_6c;
  (this->m_vSubDirectory).field0_0x0.field0_0x0.field0_0x0._M_finish = psVar21;
  psVar21 = (this->m_vSubDirectoryAll).field0_0x0.field0_0x0.field0_0x0._M_start;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_construct.h */
  for (psVar22 = psVar21;
      psVar22 != (this->m_vSubDirectoryAll).field0_0x0.field0_0x0.field0_0x0._M_finish;
      psVar22 = psVar22 + 1) {
  }
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  uVar26 = (ulong)(int)local_6c;
                    /* end of inlined section */
  (this->m_vSubDirectoryAll).field0_0x0.field0_0x0.field0_0x0._M_finish = psVar21;
  if (iVar8 < 0) {
    if (iVar8 < 0) {
      iVar8 = -iVar8;
    }
    pcVar9 = strerror(iVar8);
    bRet = OnError__9CFindFilePCce(this,0x3efc18,pcVar9,pcVar29);
  }
  else {
    bRet = 1;
    uVar30 = (ulong)(int)&de;
                    /* end of inlined section */
    while (iVar10 = sceDread(iVar8,&de), iVar10 != 0) {
      if (iVar10 < 0) {
                    /* inlined from IError.h */
        if (iVar10 < 0) {
          iVar10 = -iVar10;
        }
        pcVar29 = strerror(iVar10);
        bRet = OnError__9CFindFilePCce(this,pcVar29);
                    /* end of inlined section */
        break;
      }
      psVar21 = (this->m_vDirEntry).field0_0x0.field0_0x0.field0_0x0._M_finish;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
      if (psVar21 == (this->m_vDirEntry).field0_0x0.field0_0x0.field0_0x0._M_end_of_storage) {
        uVar23 = uVar30;
        _M_insert_aux__t6vector2Z10sce_direntZQ23ctlt16custom_allocator1Z10sce_direntP10sce_direntRC10sce_dirent
                  (&this->m_vDirEntry);
      }
      else {
                    /* inlined from
                       /usr/local/sce/ee/gcc/lib/gcc-lib/ee/2.96-ee-001003-1/include/new */
        if (psVar21 != (sce_dirent *)0x0) {
          if (((uint)psVar21 & 7) == 0) {
            uVar17 = uVar30;
            do {
              puVar16 = (undefined8 *)uVar17;
              uVar7 = *(undefined4 *)((int)puVar16 + 4);
              uVar23 = puVar16[1];
              uVar25 = puVar16[2];
              uVar26 = puVar16[3];
              (psVar21->d_stat).st_mode = *(undefined4 *)puVar16;
              (psVar21->d_stat).st_attr = uVar7;
              *(ulong *)&(psVar21->d_stat).st_size = uVar23;
              *(ulong *)((psVar21->d_stat).st_ctime + 4) = uVar25;
              *(ulong *)((psVar21->d_stat).st_atime + 4) = uVar26;
              puVar12 = puVar16 + 4;
              uVar17 = (ulong)(int)puVar12;
              psVar21 = (sce_dirent *)((psVar21->d_stat).st_mtime + 4);
            } while (uVar17 != (long)(int)&de.d_private);
          }
          else {
            uVar17 = uVar30;
            do {
              puVar12 = (ulong *)uVar17;
              uVar17 = *puVar12;
              uVar23 = puVar12[1];
              uVar25 = puVar12[2];
              uVar26 = puVar12[3];
              puVar1 = (undefined *)((int)&(psVar21->d_stat).st_attr + 3);
              uVar5 = (uint)puVar1 & 7;
              puVar6 = (ulong *)(puVar1 + -uVar5);
              *puVar6 = *puVar6 & -1L << (uVar5 + 1) * 8 | uVar17 >> (7 - uVar5) * 8;
              uVar5 = (uint)psVar21 & 7;
              *(ulong *)((int)psVar21 - uVar5) =
                   uVar17 << uVar5 * 8 |
                   *(ulong *)((int)psVar21 - uVar5) & 0xffffffffffffffffU >> (8 - uVar5) * 8;
              puVar2 = (psVar21->d_stat).st_ctime + 3;
              uVar5 = (uint)puVar2 & 7;
              *(ulong *)(puVar2 + -uVar5) =
                   *(ulong *)(puVar2 + -uVar5) & -1L << (uVar5 + 1) * 8 | uVar23 >> (7 - uVar5) * 8;
              puVar3 = &(psVar21->d_stat).st_size;
              uVar5 = (uint)puVar3 & 7;
              puVar6 = (ulong *)((int)puVar3 - uVar5);
              *puVar6 = uVar23 << uVar5 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
              puVar2 = (psVar21->d_stat).st_atime + 3;
              uVar5 = (uint)puVar2 & 7;
              *(ulong *)(puVar2 + -uVar5) =
                   *(ulong *)(puVar2 + -uVar5) & -1L << (uVar5 + 1) * 8 | uVar25 >> (7 - uVar5) * 8;
              puVar2 = (psVar21->d_stat).st_ctime + 4;
              uVar5 = (uint)puVar2 & 7;
              *(ulong *)(puVar2 + -uVar5) =
                   uVar25 << uVar5 * 8 |
                   *(ulong *)(puVar2 + -uVar5) & 0xffffffffffffffffU >> (8 - uVar5) * 8;
              puVar2 = (psVar21->d_stat).st_mtime + 3;
              uVar5 = (uint)puVar2 & 7;
              *(ulong *)(puVar2 + -uVar5) =
                   *(ulong *)(puVar2 + -uVar5) & -1L << (uVar5 + 1) * 8 | uVar26 >> (7 - uVar5) * 8;
              puVar2 = (psVar21->d_stat).st_atime + 4;
              uVar5 = (uint)puVar2 & 7;
              *(ulong *)(puVar2 + -uVar5) =
                   uVar26 << uVar5 * 8 |
                   *(ulong *)(puVar2 + -uVar5) & 0xffffffffffffffffU >> (8 - uVar5) * 8;
              puVar12 = puVar12 + 4;
              uVar17 = (ulong)(int)puVar12;
              psVar21 = (sce_dirent *)((psVar21->d_stat).st_mtime + 4);
            } while (uVar17 != (long)(int)&de.d_private);
          }
          (psVar21->d_stat).st_mode = *(uint *)puVar12;
          psVar21 = (this->m_vDirEntry).field0_0x0.field0_0x0.field0_0x0._M_finish;
        }
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
        (this->m_vDirEntry).field0_0x0.field0_0x0.field0_0x0._M_finish = psVar21 + 1;
      }
    }
    iVar10 = 0;
    sceDclose(iVar8);
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
    if (0 < (int)(this->m_vstrFileSpec).field0_0x0.field0_0x0.field0_0x0._M_finish -
            (int)(this->m_vstrFileSpec).field0_0x0.field0_0x0.field0_0x0._M_start >> 2) {
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
      pbVar13 = (this->m_vstrFileSpec).field0_0x0.field0_0x0.field0_0x0._M_start;
      iVar8 = 0;
      do {
        ppcVar14 = (char **)((int)&pbVar13->dat + iVar8);
                    /* inlined from custom/bastring.h */
        pcVar29 = *ppcVar14;
        iVar8 = *(int *)(pcVar29 + -0x10);
        if (iVar8 == 0) {
          local_64 = "";
        }
        else {
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/std/straits.h */
          pcVar29[iVar8] = '\0';
                    /* inlined from custom/bastring.h */
          local_64 = *ppcVar14;
        }
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
        iVar8 = 0;
        if (0 < ((int)(this->m_vDirEntry).field0_0x0.field0_0x0.field0_0x0._M_finish -
                 (int)(this->m_vDirEntry).field0_0x0.field0_0x0.field0_0x0._M_start >> 2) *
                0x781948b1) {
          iVar31 = 0;
          do {
                    /* end of inlined section */
            uVar30 = (ulong)(int)local_64;
            psVar21 = (sce_dirent *)
                      ((((this->m_vDirEntry).field0_0x0.field0_0x0.field0_0x0._M_start)->d_stat).
                       st_ctime + iVar31 + -0xc);
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
            uVar23 = (ulong)(int)psVar21;
                    /* end of inlined section */
            iVar11 = IsMatchSpec__9CFindFilePCcT1(this,psVar21->d_name,local_64);
            if (iVar11 == 0) {
              psVar21 = (this->m_vDirEntry).field0_0x0.field0_0x0.field0_0x0._M_finish;
              uVar23 = uVar30;
            }
            else {
              uVar17 = uVar23;
              iVar11 = IsDirectory__9CFindFilePC10sce_dirent(psVar21);
              if (iVar11 == 0) {
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
                psVar22 = (this->m_vMatchFile).field0_0x0.field0_0x0.field0_0x0._M_finish;
                if (psVar22 ==
                    (this->m_vMatchFile).field0_0x0.field0_0x0.field0_0x0._M_end_of_storage) {
                  _M_insert_aux__t6vector2Z10sce_direntZQ23ctlt16custom_allocator1Z10sce_direntP10sce_direntRC10sce_dirent
                            (&this->m_vMatchFile);
                }
                else {
                    /* inlined from
                       /usr/local/sce/ee/gcc/lib/gcc-lib/ee/2.96-ee-001003-1/include/new */
                  if (psVar22 != (sce_dirent *)0x0) {
                    if ((((uint)psVar21 | (uint)psVar22) & 7) == 0) {
                      do {
                        puVar16 = (undefined8 *)uVar23;
                        uVar7 = *(undefined4 *)((int)puVar16 + 4);
                        uVar28 = puVar16[1];
                        uVar30 = puVar16[2];
                        uVar25 = puVar16[3];
                        (psVar22->d_stat).st_mode = *(undefined4 *)puVar16;
                        (psVar22->d_stat).st_attr = uVar7;
                        *(undefined8 *)&(psVar22->d_stat).st_size = uVar28;
                        *(ulong *)((psVar22->d_stat).st_ctime + 4) = uVar30;
                        *(ulong *)((psVar22->d_stat).st_atime + 4) = uVar25;
                        puVar16 = puVar16 + 4;
                        uVar23 = (ulong)(int)puVar16;
                        psVar22 = (sce_dirent *)((psVar22->d_stat).st_mtime + 4);
                      } while (uVar23 != (long)(int)&psVar21->d_private);
                    }
                    else {
                      do {
                        uVar15 = (uint)uVar23;
                        uVar5 = uVar15 + 7 & 7;
                        uVar4 = uVar15 & 7;
                        uVar26 = (*(long *)((uVar15 + 7) - uVar5) << (7 - uVar5) * 8 |
                                 uVar26 & 0xffffffffffffffffU >> (uVar5 + 1) * 8) &
                                 -1L << (8 - uVar4) * 8 | *(ulong *)(uVar15 - uVar4) >> uVar4 * 8;
                        uVar5 = uVar15 + 0xf & 7;
                        uVar4 = uVar15 + 8 & 7;
                        uVar17 = (*(long *)((uVar15 + 0xf) - uVar5) << (7 - uVar5) * 8 |
                                 uVar17 & 0xffffffffffffffffU >> (uVar5 + 1) * 8) &
                                 -1L << (8 - uVar4) * 8 |
                                 *(ulong *)((uVar15 + 8) - uVar4) >> uVar4 * 8;
                        uVar5 = uVar15 + 0x17 & 7;
                        uVar4 = uVar15 + 0x10 & 7;
                        uVar30 = (*(long *)((uVar15 + 0x17) - uVar5) << (7 - uVar5) * 8 |
                                 uVar30 & 0xffffffffffffffffU >> (uVar5 + 1) * 8) &
                                 -1L << (8 - uVar4) * 8 |
                                 *(ulong *)((uVar15 + 0x10) - uVar4) >> uVar4 * 8;
                        uVar5 = uVar15 + 0x1f & 7;
                        uVar4 = uVar15 + 0x18 & 7;
                        uVar25 = (*(long *)((uVar15 + 0x1f) - uVar5) << (7 - uVar5) * 8 |
                                 uVar25 & 0xffffffffffffffffU >> (uVar5 + 1) * 8) &
                                 -1L << (8 - uVar4) * 8 |
                                 *(ulong *)((uVar15 + 0x18) - uVar4) >> uVar4 * 8;
                        puVar1 = (undefined *)((int)&(psVar22->d_stat).st_attr + 3);
                        uVar5 = (uint)puVar1 & 7;
                        puVar12 = (ulong *)(puVar1 + -uVar5);
                        *puVar12 = *puVar12 & -1L << (uVar5 + 1) * 8 | uVar26 >> (7 - uVar5) * 8;
                        uVar5 = (uint)psVar22 & 7;
                        *(ulong *)((int)psVar22 - uVar5) =
                             uVar26 << uVar5 * 8 |
                             *(ulong *)((int)psVar22 - uVar5) &
                             0xffffffffffffffffU >> (8 - uVar5) * 8;
                        puVar2 = (psVar22->d_stat).st_ctime + 3;
                        uVar5 = (uint)puVar2 & 7;
                        *(ulong *)(puVar2 + -uVar5) =
                             *(ulong *)(puVar2 + -uVar5) & -1L << (uVar5 + 1) * 8 |
                             uVar17 >> (7 - uVar5) * 8;
                        puVar3 = &(psVar22->d_stat).st_size;
                        uVar5 = (uint)puVar3 & 7;
                        puVar12 = (ulong *)((int)puVar3 - uVar5);
                        *puVar12 = uVar17 << uVar5 * 8 |
                                   *puVar12 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
                        puVar2 = (psVar22->d_stat).st_atime + 3;
                        uVar5 = (uint)puVar2 & 7;
                        *(ulong *)(puVar2 + -uVar5) =
                             *(ulong *)(puVar2 + -uVar5) & -1L << (uVar5 + 1) * 8 |
                             uVar30 >> (7 - uVar5) * 8;
                        puVar2 = (psVar22->d_stat).st_ctime + 4;
                        uVar5 = (uint)puVar2 & 7;
                        *(ulong *)(puVar2 + -uVar5) =
                             uVar30 << uVar5 * 8 |
                             *(ulong *)(puVar2 + -uVar5) & 0xffffffffffffffffU >> (8 - uVar5) * 8;
                        puVar2 = (psVar22->d_stat).st_mtime + 3;
                        uVar5 = (uint)puVar2 & 7;
                        *(ulong *)(puVar2 + -uVar5) =
                             *(ulong *)(puVar2 + -uVar5) & -1L << (uVar5 + 1) * 8 |
                             uVar25 >> (7 - uVar5) * 8;
                        puVar2 = (psVar22->d_stat).st_atime + 4;
                        uVar5 = (uint)puVar2 & 7;
                        *(ulong *)(puVar2 + -uVar5) =
                             uVar25 << uVar5 * 8 |
                             *(ulong *)(puVar2 + -uVar5) & 0xffffffffffffffffU >> (8 - uVar5) * 8;
                        puVar16 = (undefined8 *)(uVar15 + 0x20);
                        uVar23 = (ulong)(int)puVar16;
                        psVar22 = (sce_dirent *)((psVar22->d_stat).st_mtime + 4);
                      } while (uVar23 != (long)(int)&psVar21->d_private);
                    }
                    uVar26 = (ulong)(int)*(uint *)puVar16;
                    (psVar22->d_stat).st_mode = *(uint *)puVar16;
                    psVar22 = (this->m_vMatchFile).field0_0x0.field0_0x0.field0_0x0._M_finish;
                  }
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
                  (this->m_vMatchFile).field0_0x0.field0_0x0.field0_0x0._M_finish = psVar22 + 1;
                  uVar23 = uVar30;
                }
                psVar21 = (this->m_vDirEntry).field0_0x0.field0_0x0.field0_0x0._M_finish;
              }
              else {
                psVar21 = (this->m_vDirEntry).field0_0x0.field0_0x0.field0_0x0._M_finish;
                uVar23 = uVar30;
              }
            }
                    /* end of inlined section */
            iVar8 = iVar8 + 1;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
                    /* end of inlined section */
            iVar31 = iVar31 + 0x144;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
          } while (iVar8 < ((int)psVar21 -
                            (int)(this->m_vDirEntry).field0_0x0.field0_0x0.field0_0x0._M_start >> 2)
                           * 0x781948b1);
        }
                    /* end of inlined section */
        iVar10 = iVar10 + 1;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
        pbVar13 = (this->m_vstrFileSpec).field0_0x0.field0_0x0.field0_0x0._M_start;
        iVar8 = iVar10 * 4;
      } while (iVar10 < (int)(this->m_vstrFileSpec).field0_0x0.field0_0x0.field0_0x0._M_finish -
                        (int)pbVar13 >> 2);
    }
    iVar8 = 0;
    if (0 < ((int)(this->m_vDirEntry).field0_0x0.field0_0x0.field0_0x0._M_finish -
             (int)(this->m_vDirEntry).field0_0x0.field0_0x0.field0_0x0._M_start >> 2) * 0x781948b1)
    {
      iVar10 = 0;
      do {
        psVar21 = (sce_dirent *)
                  ((((this->m_vDirEntry).field0_0x0.field0_0x0.field0_0x0._M_start)->d_stat).
                   st_ctime + iVar10 + -0xc);
        uVar17 = (ulong)(int)psVar21;
        uVar30 = uVar17;
                    /* end of inlined section */
        iVar31 = IsDirectory__9CFindFilePC10sce_dirent(psVar21);
        if (iVar31 != 0) {
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
          psVar22 = (this->m_vSubDirectoryAll).field0_0x0.field0_0x0.field0_0x0._M_finish;
          if (psVar22 ==
              (this->m_vSubDirectoryAll).field0_0x0.field0_0x0.field0_0x0._M_end_of_storage) {
            uVar23 = uVar17;
            _M_insert_aux__t6vector2Z10sce_direntZQ23ctlt16custom_allocator1Z10sce_direntP10sce_direntRC10sce_dirent
                      (local_6c);
          }
          else {
                    /* inlined from
                       /usr/local/sce/ee/gcc/lib/gcc-lib/ee/2.96-ee-001003-1/include/new */
            if (psVar22 != (sce_dirent *)0x0) {
              if ((((uint)psVar21 | (uint)psVar22) & 7) == 0) {
                uVar23 = uVar17;
                do {
                  puVar16 = (undefined8 *)uVar23;
                  uVar7 = *(undefined4 *)((int)puVar16 + 4);
                  uVar27 = puVar16[1];
                  uVar28 = puVar16[2];
                  uVar24 = puVar16[3];
                  (psVar22->d_stat).st_mode = *(undefined4 *)puVar16;
                  (psVar22->d_stat).st_attr = uVar7;
                  *(undefined8 *)&(psVar22->d_stat).st_size = uVar27;
                  *(undefined8 *)((psVar22->d_stat).st_ctime + 4) = uVar28;
                  *(undefined8 *)((psVar22->d_stat).st_atime + 4) = uVar24;
                  puVar16 = puVar16 + 4;
                  uVar23 = (ulong)(int)puVar16;
                  psVar22 = (sce_dirent *)((psVar22->d_stat).st_mtime + 4);
                } while (uVar23 != (long)(int)&psVar21->d_private);
              }
              else {
                uVar18 = uVar17;
                do {
                  uVar15 = (uint)uVar18;
                  uVar5 = uVar15 + 7 & 7;
                  uVar4 = uVar15 & 7;
                  uVar25 = (*(long *)((uVar15 + 7) - uVar5) << (7 - uVar5) * 8 |
                           uVar25 & 0xffffffffffffffffU >> (uVar5 + 1) * 8) & -1L << (8 - uVar4) * 8
                           | *(ulong *)(uVar15 - uVar4) >> uVar4 * 8;
                  uVar5 = uVar15 + 0xf & 7;
                  uVar4 = uVar15 + 8 & 7;
                  uVar26 = (*(long *)((uVar15 + 0xf) - uVar5) << (7 - uVar5) * 8 |
                           uVar26 & 0xffffffffffffffffU >> (uVar5 + 1) * 8) & -1L << (8 - uVar4) * 8
                           | *(ulong *)((uVar15 + 8) - uVar4) >> uVar4 * 8;
                  uVar5 = uVar15 + 0x17 & 7;
                  uVar4 = uVar15 + 0x10 & 7;
                  uVar30 = (*(long *)((uVar15 + 0x17) - uVar5) << (7 - uVar5) * 8 |
                           uVar30 & 0xffffffffffffffffU >> (uVar5 + 1) * 8) & -1L << (8 - uVar4) * 8
                           | *(ulong *)((uVar15 + 0x10) - uVar4) >> uVar4 * 8;
                  uVar5 = uVar15 + 0x1f & 7;
                  uVar4 = uVar15 + 0x18 & 7;
                  uVar23 = (*(long *)((uVar15 + 0x1f) - uVar5) << (7 - uVar5) * 8 |
                           uVar23 & 0xffffffffffffffffU >> (uVar5 + 1) * 8) & -1L << (8 - uVar4) * 8
                           | *(ulong *)((uVar15 + 0x18) - uVar4) >> uVar4 * 8;
                  puVar1 = (undefined *)((int)&(psVar22->d_stat).st_attr + 3);
                  uVar5 = (uint)puVar1 & 7;
                  puVar12 = (ulong *)(puVar1 + -uVar5);
                  *puVar12 = *puVar12 & -1L << (uVar5 + 1) * 8 | uVar25 >> (7 - uVar5) * 8;
                  uVar5 = (uint)psVar22 & 7;
                  *(ulong *)((int)psVar22 - uVar5) =
                       uVar25 << uVar5 * 8 |
                       *(ulong *)((int)psVar22 - uVar5) & 0xffffffffffffffffU >> (8 - uVar5) * 8;
                  puVar2 = (psVar22->d_stat).st_ctime + 3;
                  uVar5 = (uint)puVar2 & 7;
                  *(ulong *)(puVar2 + -uVar5) =
                       *(ulong *)(puVar2 + -uVar5) & -1L << (uVar5 + 1) * 8 |
                       uVar26 >> (7 - uVar5) * 8;
                  puVar3 = &(psVar22->d_stat).st_size;
                  uVar5 = (uint)puVar3 & 7;
                  puVar12 = (ulong *)((int)puVar3 - uVar5);
                  *puVar12 = uVar26 << uVar5 * 8 | *puVar12 & 0xffffffffffffffffU >> (8 - uVar5) * 8
                  ;
                  puVar2 = (psVar22->d_stat).st_atime + 3;
                  uVar5 = (uint)puVar2 & 7;
                  *(ulong *)(puVar2 + -uVar5) =
                       *(ulong *)(puVar2 + -uVar5) & -1L << (uVar5 + 1) * 8 |
                       uVar30 >> (7 - uVar5) * 8;
                  puVar2 = (psVar22->d_stat).st_ctime + 4;
                  uVar5 = (uint)puVar2 & 7;
                  *(ulong *)(puVar2 + -uVar5) =
                       uVar30 << uVar5 * 8 |
                       *(ulong *)(puVar2 + -uVar5) & 0xffffffffffffffffU >> (8 - uVar5) * 8;
                  puVar2 = (psVar22->d_stat).st_mtime + 3;
                  uVar5 = (uint)puVar2 & 7;
                  *(ulong *)(puVar2 + -uVar5) =
                       *(ulong *)(puVar2 + -uVar5) & -1L << (uVar5 + 1) * 8 |
                       uVar23 >> (7 - uVar5) * 8;
                  puVar2 = (psVar22->d_stat).st_atime + 4;
                  uVar5 = (uint)puVar2 & 7;
                  *(ulong *)(puVar2 + -uVar5) =
                       uVar23 << uVar5 * 8 |
                       *(ulong *)(puVar2 + -uVar5) & 0xffffffffffffffffU >> (8 - uVar5) * 8;
                  puVar16 = (undefined8 *)(uVar15 + 0x20);
                  uVar18 = (ulong)(int)puVar16;
                  psVar22 = (sce_dirent *)((psVar22->d_stat).st_mtime + 4);
                } while (uVar18 != (long)(int)&psVar21->d_private);
              }
              (psVar22->d_stat).st_mode = *(uint *)puVar16;
              uVar23 = (ulong)(int)local_6c;
              psVar22 = (local_6c->field0_0x0).field0_0x0.field0_0x0._M_finish;
            }
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
            uVar25 = (ulong)(int)local_6c;
            (local_6c->field0_0x0).field0_0x0.field0_0x0._M_finish = psVar22 + 1;
          }
                    /* inlined from custom/string.h */
                    /* end of inlined section */
                    /* inlined from custom/string.h */
          strcpy(local_470,psVar21->d_name);
          uVar26 = 0x3f0000;
          strcpy(local_370,&DAT_003efbe8);
          pcVar29 = local_470;
          cVar19 = local_470[0];
          while (pcVar9 = local_370, cVar20 = local_370[0], cVar19 != '\0') {
            if ((""[cVar19 + 1] & 2U) != 0) {
              cVar19 = cVar19 + -0x20;
            }
            *pcVar29 = cVar19;
            pcVar29 = pcVar29 + 1;
            cVar19 = *pcVar29;
          }
          while (cVar20 != '\0') {
            if ((""[cVar20 + 1] & 2U) != 0) {
              cVar20 = cVar20 + -0x20;
            }
            *pcVar9 = cVar20;
            pcVar9 = pcVar9 + 1;
            cVar20 = *pcVar9;
          }
          iVar31 = strcmp(local_470,local_370);
          uVar30 = (ulong)(int)str1;
          if (iVar31 != 0) {
            strcpy(str1,psVar21->d_name);
            strcpy(str2,&DAT_003efbf0);
            uVar18 = uVar30;
            cVar19 = str1[0];
            while (pcVar29 = str2, cVar20 = str2[0], cVar19 != '\0') {
              if ((""[cVar19 + 1] & 2U) != 0) {
                cVar19 = cVar19 + -0x20;
              }
              *(char *)uVar18 = cVar19;
              pcVar29 = (char *)uVar18 + 1;
              uVar18 = (ulong)(int)pcVar29;
              cVar19 = *pcVar29;
            }
            while (cVar20 != '\0') {
              if ((""[cVar20 + 1] & 2U) != 0) {
                cVar20 = cVar20 + -0x20;
              }
              *pcVar29 = cVar20;
              pcVar29 = pcVar29 + 1;
              cVar20 = *pcVar29;
            }
            iVar31 = strcmp(str1,str2);
            if (iVar31 != 0) {
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
              psVar22 = (this->m_vSubDirectory).field0_0x0.field0_0x0.field0_0x0._M_finish;
              if (psVar22 ==
                  (this->m_vSubDirectory).field0_0x0.field0_0x0.field0_0x0._M_end_of_storage) {
                _M_insert_aux__t6vector2Z10sce_direntZQ23ctlt16custom_allocator1Z10sce_direntP10sce_direntRC10sce_dirent
                          (local_70);
                uVar23 = uVar17;
              }
              else {
                    /* inlined from
                       /usr/local/sce/ee/gcc/lib/gcc-lib/ee/2.96-ee-001003-1/include/new */
                if (psVar22 != (sce_dirent *)0x0) {
                  if ((((uint)psVar21 | (uint)psVar22) & 7) == 0) {
                    do {
                      puVar16 = (undefined8 *)uVar17;
                      uVar7 = *(undefined4 *)((int)puVar16 + 4);
                      uVar23 = puVar16[1];
                      uVar25 = puVar16[2];
                      uVar28 = puVar16[3];
                      (psVar22->d_stat).st_mode = *(undefined4 *)puVar16;
                      (psVar22->d_stat).st_attr = uVar7;
                      *(ulong *)&(psVar22->d_stat).st_size = uVar23;
                      *(ulong *)((psVar22->d_stat).st_ctime + 4) = uVar25;
                      *(undefined8 *)((psVar22->d_stat).st_atime + 4) = uVar28;
                      puVar16 = puVar16 + 4;
                      uVar17 = (ulong)(int)puVar16;
                      psVar22 = (sce_dirent *)((psVar22->d_stat).st_mtime + 4);
                    } while (uVar17 != (long)(int)&psVar21->d_private);
                  }
                  else {
                    do {
                      uVar15 = (uint)uVar17;
                      uVar5 = uVar15 + 7 & 7;
                      uVar4 = uVar15 & 7;
                      uVar30 = (*(long *)((uVar15 + 7) - uVar5) << (7 - uVar5) * 8 |
                               uVar30 & 0xffffffffffffffffU >> (uVar5 + 1) * 8) &
                               -1L << (8 - uVar4) * 8 | *(ulong *)(uVar15 - uVar4) >> uVar4 * 8;
                      uVar5 = uVar15 + 0xf & 7;
                      uVar4 = uVar15 + 8 & 7;
                      uVar23 = (*(long *)((uVar15 + 0xf) - uVar5) << (7 - uVar5) * 8 |
                               uVar23 & 0xffffffffffffffffU >> (uVar5 + 1) * 8) &
                               -1L << (8 - uVar4) * 8 |
                               *(ulong *)((uVar15 + 8) - uVar4) >> uVar4 * 8;
                      uVar5 = uVar15 + 0x17 & 7;
                      uVar4 = uVar15 + 0x10 & 7;
                      uVar25 = (*(long *)((uVar15 + 0x17) - uVar5) << (7 - uVar5) * 8 |
                               uVar25 & 0xffffffffffffffffU >> (uVar5 + 1) * 8) &
                               -1L << (8 - uVar4) * 8 |
                               *(ulong *)((uVar15 + 0x10) - uVar4) >> uVar4 * 8;
                      uVar5 = uVar15 + 0x1f & 7;
                      uVar4 = uVar15 + 0x18 & 7;
                      uVar26 = (*(long *)((uVar15 + 0x1f) - uVar5) << (7 - uVar5) * 8 |
                               uVar26 & 0xffffffffffffffffU >> (uVar5 + 1) * 8) &
                               -1L << (8 - uVar4) * 8 |
                               *(ulong *)((uVar15 + 0x18) - uVar4) >> uVar4 * 8;
                      puVar1 = (undefined *)((int)&(psVar22->d_stat).st_attr + 3);
                      uVar5 = (uint)puVar1 & 7;
                      puVar12 = (ulong *)(puVar1 + -uVar5);
                      *puVar12 = *puVar12 & -1L << (uVar5 + 1) * 8 | uVar30 >> (7 - uVar5) * 8;
                      uVar5 = (uint)psVar22 & 7;
                      *(ulong *)((int)psVar22 - uVar5) =
                           uVar30 << uVar5 * 8 |
                           *(ulong *)((int)psVar22 - uVar5) & 0xffffffffffffffffU >> (8 - uVar5) * 8
                      ;
                      puVar2 = (psVar22->d_stat).st_ctime + 3;
                      uVar5 = (uint)puVar2 & 7;
                      *(ulong *)(puVar2 + -uVar5) =
                           *(ulong *)(puVar2 + -uVar5) & -1L << (uVar5 + 1) * 8 |
                           uVar23 >> (7 - uVar5) * 8;
                      puVar3 = &(psVar22->d_stat).st_size;
                      uVar5 = (uint)puVar3 & 7;
                      puVar12 = (ulong *)((int)puVar3 - uVar5);
                      *puVar12 = uVar23 << uVar5 * 8 |
                                 *puVar12 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
                      puVar2 = (psVar22->d_stat).st_atime + 3;
                      uVar5 = (uint)puVar2 & 7;
                      *(ulong *)(puVar2 + -uVar5) =
                           *(ulong *)(puVar2 + -uVar5) & -1L << (uVar5 + 1) * 8 |
                           uVar25 >> (7 - uVar5) * 8;
                      puVar2 = (psVar22->d_stat).st_ctime + 4;
                      uVar5 = (uint)puVar2 & 7;
                      *(ulong *)(puVar2 + -uVar5) =
                           uVar25 << uVar5 * 8 |
                           *(ulong *)(puVar2 + -uVar5) & 0xffffffffffffffffU >> (8 - uVar5) * 8;
                      puVar2 = (psVar22->d_stat).st_mtime + 3;
                      uVar5 = (uint)puVar2 & 7;
                      *(ulong *)(puVar2 + -uVar5) =
                           *(ulong *)(puVar2 + -uVar5) & -1L << (uVar5 + 1) * 8 |
                           uVar26 >> (7 - uVar5) * 8;
                      puVar2 = (psVar22->d_stat).st_atime + 4;
                      uVar5 = (uint)puVar2 & 7;
                      *(ulong *)(puVar2 + -uVar5) =
                           uVar26 << uVar5 * 8 |
                           *(ulong *)(puVar2 + -uVar5) & 0xffffffffffffffffU >> (8 - uVar5) * 8;
                      puVar16 = (undefined8 *)(uVar15 + 0x20);
                      uVar17 = (ulong)(int)puVar16;
                      psVar22 = (sce_dirent *)((psVar22->d_stat).st_mtime + 4);
                    } while (uVar17 != (long)(int)&psVar21->d_private);
                  }
                  (psVar22->d_stat).st_mode = *(uint *)puVar16;
                  uVar26 = (ulong)(int)local_70;
                  psVar22 = (local_70->field0_0x0).field0_0x0.field0_0x0._M_finish;
                }
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
                (local_70->field0_0x0).field0_0x0.field0_0x0._M_finish = psVar22 + 1;
              }
            }
          }
        }
                    /* end of inlined section */
        iVar8 = iVar8 + 1;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
        iVar10 = iVar10 + 0x144;
      } while (iVar8 < ((int)(this->m_vDirEntry).field0_0x0.field0_0x0.field0_0x0._M_finish -
                        (int)(this->m_vDirEntry).field0_0x0.field0_0x0.field0_0x0._M_start >> 2) *
                       0x781948b1);
    }
  }
  return bRet;
}

int CFindFile::Scan(char *pDirName, char *pFileSpec) {
  int iVar1;
  
  SetDirectory__9CFindFilePCc(this,pDirName);
  SetFileSpec__9CFindFilePCc(this,pFileSpec);
  iVar1 = ScanDirectory__9CFindFile(this);
  return iVar1;
}

void CFindFile::SetDirectory(char *pDirName) {
	basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> > *this;
	
  size_t sVar1;
  
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/std/straits.h */
  sVar1 = strlen(pDirName);
                    /* inlined from custom/bastring.h */
  replace__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUiUiPCcUi
            (&this->m_strCurrentDirectory,0,0xffffffffffffffff,pDirName,sVar1);
  return;
}

void CFindFile::SetFileSpec(char *pFileSpec) {
  AnalyzeSpec__9CFindFilePCc(this,pFileSpec);
  return;
}

int CFindFile::Scan() {
  int iVar1;
  
  iVar1 = ScanDirectory__9CFindFile(this);
  return iVar1;
}

void CFindFile::Clear() {
	basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> > *this;
	size_t pos;
	basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> > *this;
	size_t pos;
	vector<basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> >,ctl::custom_allocator<basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> > > > *this;
	string *__first;
	string *__last;
	string *__first;
	string *__last;
	string *__first;
	vector<sce_dirent,ctl::custom_allocator<sce_dirent> > *this;
	sce_dirent *__first;
	sce_dirent *__last;
	sce_dirent *__first;
	sce_dirent *__last;
	sce_dirent *__first;
	vector<sce_dirent,ctl::custom_allocator<sce_dirent> > *this;
	sce_dirent *__first;
	sce_dirent *__last;
	sce_dirent *__first;
	sce_dirent *__last;
	sce_dirent *__first;
	vector<sce_dirent,ctl::custom_allocator<sce_dirent> > *this;
	sce_dirent *__first;
	sce_dirent *__last;
	sce_dirent *__first;
	sce_dirent *__last;
	sce_dirent *__first;
	vector<sce_dirent,ctl::custom_allocator<sce_dirent> > *this;
	sce_dirent *__first;
	sce_dirent *__last;
	sce_dirent *__first;
	sce_dirent *__last;
	sce_dirent *__first;
	size_t pos;
	
  int iVar1;
  basic_string<char,string_char_traits<char>,ctl::custom_allocator<char>_> *pbVar2;
  uint uVar3;
  sce_dirent *psVar4;
  sce_dirent *psVar5;
  sce_dirent *psVar6;
  char *pcVar7;
  char *pcVar8;
  undefined4 *puVar9;
  basic_string<char,string_char_traits<char>,ctl::custom_allocator<char>_> *pbVar10;
  basic_string<char,string_char_traits<char>,ctl::custom_allocator<char>_> *pbVar11;
  __vtbl_ptr_type *local_70;
  sce_dirent *__first;
  
                    /* inlined from custom/bastring.h */
  pbVar10 = &this->m_strOriginDirectory;
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
  pcVar7 = pbVar10->dat;
  puVar9 = (undefined4 *)(pcVar7 + -0x10);
  if (1 < *(uint *)(pcVar7 + -8)) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pbVar10,*puVar9,1);
    pcVar7 = pbVar10->dat;
    puVar9 = (undefined4 *)(pcVar7 + -0x10);
  }
  puVar9[3] = 1;
  if (1 < (uint)puVar9[2]) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pbVar10,*puVar9,1);
    pcVar7 = pbVar10->dat;
  }
  *(undefined4 *)(pcVar7 + -4) = 1;
  pcVar8 = pcVar7;
  if (1 < *(uint *)(pcVar7 + -8)) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pbVar10,*(undefined4 *)(pcVar7 + -0x10),1);
    pcVar8 = pbVar10->dat;
  }
  *(undefined4 *)(pcVar8 + -4) = 1;
  iVar1 = *(int *)(pcVar8 + -0x10);
  if (1 < *(uint *)(pcVar8 + -8)) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pbVar10,iVar1,1);
    pcVar8 = pbVar10->dat;
  }
  *(undefined4 *)(pcVar8 + -4) = 1;
  replace__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUiUiUic
            (pbVar10,(int)pcVar7 - (int)pcVar8,pcVar8 + (iVar1 - (int)pcVar7),0,0);
  pcVar7 = pbVar10->dat;
  if (1 < *(uint *)(pcVar7 + -8)) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pbVar10,*(undefined4 *)(pcVar7 + -0x10),1);
    pcVar7 = pbVar10->dat;
  }
  pbVar10 = &this->m_strCurrentDirectory;
  *(undefined4 *)(pcVar7 + -4) = 1;
  pcVar7 = pbVar10->dat;
  puVar9 = (undefined4 *)(pcVar7 + -0x10);
  if (*(uint *)(pcVar7 + -8) < 2) {
    uVar3 = *(uint *)(pcVar7 + -8);
  }
  else {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pbVar10,*puVar9,1);
    pcVar7 = pbVar10->dat;
    puVar9 = (undefined4 *)(pcVar7 + -0x10);
    uVar3 = *(uint *)(pcVar7 + -8);
  }
  puVar9[3] = 1;
  if (1 < uVar3) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pbVar10,*puVar9,1);
    pcVar7 = pbVar10->dat;
  }
  *(undefined4 *)(pcVar7 + -4) = 1;
  pcVar8 = pcVar7;
  if (1 < *(uint *)(pcVar7 + -8)) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pbVar10,*(undefined4 *)(pcVar7 + -0x10),1);
    pcVar8 = pbVar10->dat;
  }
  *(undefined4 *)(pcVar8 + -4) = 1;
  iVar1 = *(int *)(pcVar8 + -0x10);
  if (1 < *(uint *)(pcVar8 + -8)) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pbVar10,iVar1,1);
    pcVar8 = pbVar10->dat;
  }
  *(undefined4 *)(pcVar8 + -4) = 1;
  replace__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUiUiUic
            (pbVar10,(int)pcVar7 - (int)pcVar8,pcVar8 + (iVar1 - (int)pcVar7),0,0);
  pcVar7 = pbVar10->dat;
  if (1 < *(uint *)(pcVar7 + -8)) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pbVar10,*(undefined4 *)(pcVar7 + -0x10),1);
    pcVar7 = pbVar10->dat;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  }
                    /* inlined from custom/bastring.h */
  *(undefined4 *)(pcVar7 + -4) = 1;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  pbVar10 = (this->m_vstrFileSpec).field0_0x0.field0_0x0.field0_0x0._M_start;
  pbVar2 = (this->m_vstrFileSpec).field0_0x0.field0_0x0.field0_0x0._M_finish;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_construct.h */
  pbVar11 = pbVar2;
  if (pbVar10 != pbVar2) {
                    /* inlined from custom/bastring.h */
    pcVar7 = pbVar10->dat;
    pbVar11 = pbVar10;
    while( true ) {
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_construct.h */
      pbVar11 = pbVar11 + 1;
                    /* inlined from custom/bastring.h */
      iVar1 = *(int *)(pcVar7 + -8);
                    /* inlined from ctl.h */
                    /* inlined from custom/bastring.h */
      *(int *)(pcVar7 + -8) = iVar1 + -1;
      if (iVar1 + -1 == 0) {
                    /* inlined from ctl.h */
        local_70 = _vt_Q23ctlt16custom_allocator1Zc;
        (*(code *)_vt_Q23ctlt16custom_allocator1Zc[2]._4_4_)
                  ((int)&local_70 + (int)(short)_vt_Q23ctlt16custom_allocator1Zc[2].__delta,
                   pcVar7 + -0x10);
      }
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_construct.h */
      if (pbVar11 == pbVar2) break;
      pcVar7 = pbVar11->dat;
    }
    pbVar11 = (this->m_vstrFileSpec).field0_0x0.field0_0x0.field0_0x0._M_finish;
  }
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  psVar5 = (this->m_vDirEntry).field0_0x0.field0_0x0.field0_0x0._M_start;
  psVar6 = (this->m_vDirEntry).field0_0x0.field0_0x0.field0_0x0._M_finish;
  (this->m_vstrFileSpec).field0_0x0.field0_0x0.field0_0x0._M_finish =
       (basic_string<char,string_char_traits<char>,ctl::custom_allocator<char>_> *)
       ((int)pbVar11 - ((int)pbVar2 - (int)pbVar10));
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_construct.h */
  for (psVar4 = psVar5; psVar4 != psVar6; psVar4 = psVar4 + 1) {
  }
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  (this->m_vDirEntry).field0_0x0.field0_0x0.field0_0x0._M_finish = psVar5;
  psVar5 = (this->m_vMatchFile).field0_0x0.field0_0x0.field0_0x0._M_start;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_construct.h */
  for (psVar6 = psVar5; psVar6 != (this->m_vMatchFile).field0_0x0.field0_0x0.field0_0x0._M_finish;
      psVar6 = psVar6 + 1) {
  }
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  (this->m_vMatchFile).field0_0x0.field0_0x0.field0_0x0._M_finish = psVar5;
  psVar5 = (this->m_vSubDirectory).field0_0x0.field0_0x0.field0_0x0._M_start;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_construct.h */
  for (psVar6 = psVar5; psVar6 != (this->m_vSubDirectory).field0_0x0.field0_0x0.field0_0x0._M_finish
      ; psVar6 = psVar6 + 1) {
  }
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  (this->m_vSubDirectory).field0_0x0.field0_0x0.field0_0x0._M_finish = psVar5;
  __first = (this->m_vSubDirectoryAll).field0_0x0.field0_0x0.field0_0x0._M_start;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_construct.h */
  for (psVar5 = __first;
      psVar5 != (this->m_vSubDirectoryAll).field0_0x0.field0_0x0.field0_0x0._M_finish;
      psVar5 = psVar5 + 1) {
  }
                    /* inlined from custom/bastring.h */
  pcVar7 = (this->m_strError).dat;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
                    /* inlined from custom/bastring.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  (this->m_vSubDirectoryAll).field0_0x0.field0_0x0.field0_0x0._M_finish = __first;
                    /* inlined from custom/bastring.h */
  if (*(uint *)(pcVar7 + -8) < 2) {
    pcVar7 = (this->m_strError).dat;
  }
  else {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,*(undefined4 *)(pcVar7 + -0x10),1);
    pcVar7 = (this->m_strError).dat;
  }
  puVar9 = (undefined4 *)(pcVar7 + -0x10);
  *(undefined4 *)(pcVar7 + -4) = 1;
  if (1 < *(uint *)(pcVar7 + -8)) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,*puVar9,1);
    pcVar7 = (this->m_strError).dat;
    puVar9 = (undefined4 *)(pcVar7 + -0x10);
  }
  puVar9[3] = 1;
  pcVar8 = pcVar7;
  if (1 < (uint)puVar9[2]) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,*puVar9,1);
    pcVar8 = (this->m_strError).dat;
  }
  *(undefined4 *)(pcVar8 + -4) = 1;
  iVar1 = *(int *)(pcVar8 + -0x10);
  if (1 < *(uint *)(pcVar8 + -8)) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib(this,iVar1,1)
    ;
    pcVar8 = (this->m_strError).dat;
  }
  *(undefined4 *)(pcVar8 + -4) = 1;
  replace__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUiUiUic
            (this,(int)pcVar7 - (int)pcVar8,pcVar8 + (iVar1 - (int)pcVar7),0,0);
  pcVar7 = (this->m_strError).dat;
  if (*(uint *)(pcVar7 + -8) < 2) {
    *(undefined4 *)(pcVar7 + -4) = 1;
  }
  else {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (this,*(undefined4 *)(pcVar7 + -0x10),1);
    *(undefined4 *)((this->m_strError).dat + -4) = 1;
  }
  return;
}

char* basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> >::Rep::clone() {
	size_t extra;
	size_t s;
	size_t i;
	
  undefined *puVar1;
  bool bVar2;
  sce_dirent *psVar3;
  __vtbl_ptr_type *p_Var4;
  custom_allocator<sce_dirent>__vtable *pcVar5;
  undefined **ppuVar6;
  custom_allocator<sce_dirent> *pcVar7;
  char str [256];
  sce_dirent *__first;
  
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
  this[0x17].__vtable = (custom_allocator<sce_dirent>__vtable *)_vt_9CFindFile;
                    /* inlined from custom/bastring.h */
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var4 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var4 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep
                       (0x369d78);
  }
  this->__vtable = (custom_allocator<sce_dirent>__vtable *)p_Var4;
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var4 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var4 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep()
    ;
  }
  this[1].__vtable = (custom_allocator<sce_dirent>__vtable *)p_Var4;
  pcVar7 = this + 2;
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var4 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var4 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep()
    ;
  }
  pcVar7->__vtable = (custom_allocator<sce_dirent>__vtable *)p_Var4;
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[4].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[5].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[3].__vtable =
       (custom_allocator<sce_dirent>__vtable *)
       _vt_Q23ctlt16custom_allocator1Zt12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc
  ;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[6].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[8].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[9].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[10].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[7].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0xc].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[0xb].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0xd].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
  this[0xe].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x10].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[0xf].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x11].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
  this[0x12].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* end of inlined section */
                    /* inlined from ctl.h */
  this[0x13].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x14].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x15].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
  this[0x16].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from custom/bastring.h */
  ppuVar6 = &((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0x18))->custom_deallocate;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,*ppuVar6,1);
    p_Var4 = (__vtbl_ptr_type *)pcVar7->__vtable;
    ppuVar6 = &((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0x18))->custom_deallocate;
  }
  ppuVar6[3] = (undefined *)0x1;
  if (1 < ppuVar6[2]) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,*ppuVar6,1);
    p_Var4 = (__vtbl_ptr_type *)pcVar7->__vtable;
  }
  ((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0xc))->custom_deallocate =
       &GRA3DVU1MEM_VF02;
  pcVar5 = (custom_allocator<sce_dirent>__vtable *)p_Var4;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0x18))->
                      custom_deallocate,1);
    pcVar5 = pcVar7->__vtable;
  }
  pcVar5[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  puVar1 = pcVar5[-2].custom_deallocate;
  if (&GRA3DVU1MEM_VF02 < pcVar5[-1].custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,puVar1,1);
    pcVar5 = pcVar7->__vtable;
  }
  pcVar5[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  replace__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUiUiUic
            (pcVar7,(int)p_Var4 - (int)pcVar5,puVar1 + ((int)&pcVar5->field_0x0 - (int)p_Var4),0,0);
  pcVar5 = pcVar7->__vtable;
  bVar2 = pcVar5[-1].custom_allocate < &GRA3DVU1MEM_DBADDRESS;
  psVar3 = (sce_dirent *)(uint)bVar2;
  if (!bVar2) {
    psVar3 = (sce_dirent *)
             alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
                       (pcVar7,pcVar5[-2].custom_deallocate,1);
    pcVar5 = pcVar7->__vtable;
  }
                    /* end of inlined section */
  pcVar5[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
                    /* end of inlined section */
  return psVar3;
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
  bool bVar2;
  sce_dirent *psVar3;
  __vtbl_ptr_type *p_Var4;
  custom_allocator<sce_dirent>__vtable *pcVar5;
  undefined **ppuVar6;
  custom_allocator<sce_dirent> *pcVar7;
  char str [256];
  sce_dirent *__first;
  
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
  this[0x17].__vtable = (custom_allocator<sce_dirent>__vtable *)_vt_9CFindFile;
                    /* inlined from custom/bastring.h */
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var4 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var4 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep
                       (0x369d78);
  }
  this->__vtable = (custom_allocator<sce_dirent>__vtable *)p_Var4;
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var4 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var4 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep()
    ;
  }
  this[1].__vtable = (custom_allocator<sce_dirent>__vtable *)p_Var4;
  pcVar7 = this + 2;
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var4 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var4 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep()
    ;
  }
  pcVar7->__vtable = (custom_allocator<sce_dirent>__vtable *)p_Var4;
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[4].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[5].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[3].__vtable =
       (custom_allocator<sce_dirent>__vtable *)
       _vt_Q23ctlt16custom_allocator1Zt12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc
  ;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[6].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[8].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[9].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[10].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[7].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0xc].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[0xb].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0xd].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
  this[0xe].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x10].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[0xf].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x11].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
  this[0x12].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* end of inlined section */
                    /* inlined from ctl.h */
  this[0x13].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x14].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x15].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
  this[0x16].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from custom/bastring.h */
  ppuVar6 = &((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0x18))->custom_deallocate;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,*ppuVar6,1);
    p_Var4 = (__vtbl_ptr_type *)pcVar7->__vtable;
    ppuVar6 = &((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0x18))->custom_deallocate;
  }
  ppuVar6[3] = (undefined *)0x1;
  if (1 < ppuVar6[2]) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,*ppuVar6,1);
    p_Var4 = (__vtbl_ptr_type *)pcVar7->__vtable;
  }
  ((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0xc))->custom_deallocate =
       &GRA3DVU1MEM_VF02;
  pcVar5 = (custom_allocator<sce_dirent>__vtable *)p_Var4;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0x18))->
                      custom_deallocate,1);
    pcVar5 = pcVar7->__vtable;
  }
  pcVar5[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  puVar1 = pcVar5[-2].custom_deallocate;
  if (&GRA3DVU1MEM_VF02 < pcVar5[-1].custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,puVar1,1);
    pcVar5 = pcVar7->__vtable;
  }
  pcVar5[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  replace__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUiUiUic
            (pcVar7,(int)p_Var4 - (int)pcVar5,puVar1 + ((int)&pcVar5->field_0x0 - (int)p_Var4),0,0);
  pcVar5 = pcVar7->__vtable;
  bVar2 = pcVar5[-1].custom_allocate < &GRA3DVU1MEM_DBADDRESS;
  psVar3 = (sce_dirent *)(uint)bVar2;
  if (!bVar2) {
    psVar3 = (sce_dirent *)
             alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
                       (pcVar7,pcVar5[-2].custom_deallocate,1);
    pcVar5 = pcVar7->__vtable;
  }
                    /* end of inlined section */
  pcVar5[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
                    /* end of inlined section */
  return psVar3;
}

void basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> >::alloc(size_t __size, bool __save) {
	size_t s;
	size_t extra;
	size_t s;
	size_t i;
	
  undefined *puVar1;
  bool bVar2;
  sce_dirent *psVar3;
  __vtbl_ptr_type *p_Var4;
  custom_allocator<sce_dirent>__vtable *pcVar5;
  undefined **ppuVar6;
  custom_allocator<sce_dirent> *pcVar7;
  char str [256];
  sce_dirent *__first;
  
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
  this[0x17].__vtable = (custom_allocator<sce_dirent>__vtable *)_vt_9CFindFile;
                    /* inlined from custom/bastring.h */
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var4 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var4 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep
                       (0x369d78);
  }
  this->__vtable = (custom_allocator<sce_dirent>__vtable *)p_Var4;
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var4 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var4 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep()
    ;
  }
  this[1].__vtable = (custom_allocator<sce_dirent>__vtable *)p_Var4;
  pcVar7 = this + 2;
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var4 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var4 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep()
    ;
  }
  pcVar7->__vtable = (custom_allocator<sce_dirent>__vtable *)p_Var4;
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[4].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[5].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[3].__vtable =
       (custom_allocator<sce_dirent>__vtable *)
       _vt_Q23ctlt16custom_allocator1Zt12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc
  ;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[6].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[8].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[9].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[10].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[7].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0xc].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[0xb].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0xd].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
  this[0xe].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x10].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[0xf].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x11].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
  this[0x12].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* end of inlined section */
                    /* inlined from ctl.h */
  this[0x13].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x14].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x15].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
  this[0x16].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from custom/bastring.h */
  ppuVar6 = &((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0x18))->custom_deallocate;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,*ppuVar6,1);
    p_Var4 = (__vtbl_ptr_type *)pcVar7->__vtable;
    ppuVar6 = &((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0x18))->custom_deallocate;
  }
  ppuVar6[3] = (undefined *)0x1;
  if (1 < ppuVar6[2]) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,*ppuVar6,1);
    p_Var4 = (__vtbl_ptr_type *)pcVar7->__vtable;
  }
  ((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0xc))->custom_deallocate =
       &GRA3DVU1MEM_VF02;
  pcVar5 = (custom_allocator<sce_dirent>__vtable *)p_Var4;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0x18))->
                      custom_deallocate,1);
    pcVar5 = pcVar7->__vtable;
  }
  pcVar5[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  puVar1 = pcVar5[-2].custom_deallocate;
  if (&GRA3DVU1MEM_VF02 < pcVar5[-1].custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,puVar1,1);
    pcVar5 = pcVar7->__vtable;
  }
  pcVar5[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  replace__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUiUiUic
            (pcVar7,(int)p_Var4 - (int)pcVar5,puVar1 + ((int)&pcVar5->field_0x0 - (int)p_Var4),0,0);
  pcVar5 = pcVar7->__vtable;
  bVar2 = pcVar5[-1].custom_allocate < &GRA3DVU1MEM_DBADDRESS;
  psVar3 = (sce_dirent *)(uint)bVar2;
  if (!bVar2) {
    psVar3 = (sce_dirent *)
             alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
                       (pcVar7,pcVar5[-2].custom_deallocate,1);
    pcVar5 = pcVar7->__vtable;
  }
                    /* end of inlined section */
  pcVar5[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
                    /* end of inlined section */
  return psVar3;
}

void vector<basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> >, ctl::custom_allocator<basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> > > >::_M_insert_aux(string *__position, string &__x) {
	string __x_copy;
	basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> > &__value;
	Rep *this;
	Rep *this;
	string *__last;
	string *__result;
	ptrdiff_t __n;
	basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> > &str;
	Rep *this;
	Rep *this;
	size_t __len;
	string *__new_finish;
	Rep *this;
	string *__first;
	string *__first;
	
  undefined *puVar1;
  bool bVar2;
  sce_dirent *psVar3;
  __vtbl_ptr_type *p_Var4;
  custom_allocator<sce_dirent>__vtable *pcVar5;
  undefined **ppuVar6;
  custom_allocator<sce_dirent> *pcVar7;
  char str [256];
  sce_dirent *__first;
  
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
  this[0x17].__vtable = (custom_allocator<sce_dirent>__vtable *)_vt_9CFindFile;
                    /* inlined from custom/bastring.h */
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var4 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var4 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep
                       (0x369d78);
  }
  this->__vtable = (custom_allocator<sce_dirent>__vtable *)p_Var4;
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var4 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var4 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep()
    ;
  }
  this[1].__vtable = (custom_allocator<sce_dirent>__vtable *)p_Var4;
  pcVar7 = this + 2;
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var4 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var4 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep()
    ;
  }
  pcVar7->__vtable = (custom_allocator<sce_dirent>__vtable *)p_Var4;
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[4].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[5].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[3].__vtable =
       (custom_allocator<sce_dirent>__vtable *)
       _vt_Q23ctlt16custom_allocator1Zt12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc
  ;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[6].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[8].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[9].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[10].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[7].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0xc].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[0xb].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0xd].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
  this[0xe].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x10].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[0xf].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x11].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
  this[0x12].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* end of inlined section */
                    /* inlined from ctl.h */
  this[0x13].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x14].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x15].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
  this[0x16].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from custom/bastring.h */
  ppuVar6 = &((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0x18))->custom_deallocate;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,*ppuVar6,1);
    p_Var4 = (__vtbl_ptr_type *)pcVar7->__vtable;
    ppuVar6 = &((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0x18))->custom_deallocate;
  }
  ppuVar6[3] = (undefined *)0x1;
  if (1 < ppuVar6[2]) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,*ppuVar6,1);
    p_Var4 = (__vtbl_ptr_type *)pcVar7->__vtable;
  }
  ((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0xc))->custom_deallocate =
       &GRA3DVU1MEM_VF02;
  pcVar5 = (custom_allocator<sce_dirent>__vtable *)p_Var4;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0x18))->
                      custom_deallocate,1);
    pcVar5 = pcVar7->__vtable;
  }
  pcVar5[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  puVar1 = pcVar5[-2].custom_deallocate;
  if (&GRA3DVU1MEM_VF02 < pcVar5[-1].custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,puVar1,1);
    pcVar5 = pcVar7->__vtable;
  }
  pcVar5[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  replace__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUiUiUic
            (pcVar7,(int)p_Var4 - (int)pcVar5,puVar1 + ((int)&pcVar5->field_0x0 - (int)p_Var4),0,0);
  pcVar5 = pcVar7->__vtable;
  bVar2 = pcVar5[-1].custom_allocate < &GRA3DVU1MEM_DBADDRESS;
  psVar3 = (sce_dirent *)(uint)bVar2;
  if (!bVar2) {
    psVar3 = (sce_dirent *)
             alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
                       (pcVar7,pcVar5[-2].custom_deallocate,1);
    pcVar5 = pcVar7->__vtable;
  }
                    /* end of inlined section */
  pcVar5[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
                    /* end of inlined section */
  return psVar3;
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
  bool bVar2;
  sce_dirent *psVar3;
  __vtbl_ptr_type *p_Var4;
  custom_allocator<sce_dirent>__vtable *pcVar5;
  undefined **ppuVar6;
  custom_allocator<sce_dirent> *pcVar7;
  char str [256];
  sce_dirent *__first;
  
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
  this[0x17].__vtable = (custom_allocator<sce_dirent>__vtable *)_vt_9CFindFile;
                    /* inlined from custom/bastring.h */
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var4 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var4 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep
                       (0x369d78);
  }
  this->__vtable = (custom_allocator<sce_dirent>__vtable *)p_Var4;
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var4 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var4 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep()
    ;
  }
  this[1].__vtable = (custom_allocator<sce_dirent>__vtable *)p_Var4;
  pcVar7 = this + 2;
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var4 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var4 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep()
    ;
  }
  pcVar7->__vtable = (custom_allocator<sce_dirent>__vtable *)p_Var4;
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[4].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[5].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[3].__vtable =
       (custom_allocator<sce_dirent>__vtable *)
       _vt_Q23ctlt16custom_allocator1Zt12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc
  ;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[6].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[8].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[9].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[10].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[7].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0xc].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[0xb].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0xd].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
  this[0xe].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x10].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[0xf].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x11].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
  this[0x12].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* end of inlined section */
                    /* inlined from ctl.h */
  this[0x13].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x14].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x15].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
  this[0x16].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from custom/bastring.h */
  ppuVar6 = &((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0x18))->custom_deallocate;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,*ppuVar6,1);
    p_Var4 = (__vtbl_ptr_type *)pcVar7->__vtable;
    ppuVar6 = &((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0x18))->custom_deallocate;
  }
  ppuVar6[3] = (undefined *)0x1;
  if (1 < ppuVar6[2]) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,*ppuVar6,1);
    p_Var4 = (__vtbl_ptr_type *)pcVar7->__vtable;
  }
  ((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0xc))->custom_deallocate =
       &GRA3DVU1MEM_VF02;
  pcVar5 = (custom_allocator<sce_dirent>__vtable *)p_Var4;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0x18))->
                      custom_deallocate,1);
    pcVar5 = pcVar7->__vtable;
  }
  pcVar5[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  puVar1 = pcVar5[-2].custom_deallocate;
  if (&GRA3DVU1MEM_VF02 < pcVar5[-1].custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,puVar1,1);
    pcVar5 = pcVar7->__vtable;
  }
  pcVar5[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  replace__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUiUiUic
            (pcVar7,(int)p_Var4 - (int)pcVar5,puVar1 + ((int)&pcVar5->field_0x0 - (int)p_Var4),0,0);
  pcVar5 = pcVar7->__vtable;
  bVar2 = pcVar5[-1].custom_allocate < &GRA3DVU1MEM_DBADDRESS;
  psVar3 = (sce_dirent *)(uint)bVar2;
  if (!bVar2) {
    psVar3 = (sce_dirent *)
             alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
                       (pcVar7,pcVar5[-2].custom_deallocate,1);
    pcVar5 = pcVar7->__vtable;
  }
                    /* end of inlined section */
  pcVar5[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
                    /* end of inlined section */
  return psVar3;
}

void vector<sce_dirent, ctl::custom_allocator<sce_dirent> >::_M_insert_aux(sce_dirent *__position, sce_dirent &__x) {
	sce_dirent __x_copy;
	sce_dirent &__value;
	sce_dirent *__last;
	sce_dirent *__result;
	ptrdiff_t __n;
	size_t __len;
	sce_dirent *__new_finish;
	sce_dirent *__first;
	sce_dirent *__first;
	
  undefined *puVar1;
  bool bVar2;
  sce_dirent *psVar3;
  __vtbl_ptr_type *p_Var4;
  custom_allocator<sce_dirent>__vtable *pcVar5;
  undefined **ppuVar6;
  custom_allocator<sce_dirent> *pcVar7;
  char str [256];
  sce_dirent *__first;
  
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
  this[0x17].__vtable = (custom_allocator<sce_dirent>__vtable *)_vt_9CFindFile;
                    /* inlined from custom/bastring.h */
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var4 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var4 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep
                       (0x369d78);
  }
  this->__vtable = (custom_allocator<sce_dirent>__vtable *)p_Var4;
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var4 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var4 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep()
    ;
  }
  this[1].__vtable = (custom_allocator<sce_dirent>__vtable *)p_Var4;
  pcVar7 = this + 2;
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var4 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var4 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep()
    ;
  }
  pcVar7->__vtable = (custom_allocator<sce_dirent>__vtable *)p_Var4;
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[4].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[5].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[3].__vtable =
       (custom_allocator<sce_dirent>__vtable *)
       _vt_Q23ctlt16custom_allocator1Zt12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc
  ;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[6].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[8].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[9].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[10].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[7].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0xc].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[0xb].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0xd].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
  this[0xe].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x10].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[0xf].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x11].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
  this[0x12].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* end of inlined section */
                    /* inlined from ctl.h */
  this[0x13].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x14].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x15].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
  this[0x16].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from custom/bastring.h */
  ppuVar6 = &((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0x18))->custom_deallocate;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,*ppuVar6,1);
    p_Var4 = (__vtbl_ptr_type *)pcVar7->__vtable;
    ppuVar6 = &((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0x18))->custom_deallocate;
  }
  ppuVar6[3] = (undefined *)0x1;
  if (1 < ppuVar6[2]) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,*ppuVar6,1);
    p_Var4 = (__vtbl_ptr_type *)pcVar7->__vtable;
  }
  ((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0xc))->custom_deallocate =
       &GRA3DVU1MEM_VF02;
  pcVar5 = (custom_allocator<sce_dirent>__vtable *)p_Var4;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0x18))->
                      custom_deallocate,1);
    pcVar5 = pcVar7->__vtable;
  }
  pcVar5[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  puVar1 = pcVar5[-2].custom_deallocate;
  if (&GRA3DVU1MEM_VF02 < pcVar5[-1].custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,puVar1,1);
    pcVar5 = pcVar7->__vtable;
  }
  pcVar5[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  replace__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUiUiUic
            (pcVar7,(int)p_Var4 - (int)pcVar5,puVar1 + ((int)&pcVar5->field_0x0 - (int)p_Var4),0,0);
  pcVar5 = pcVar7->__vtable;
  bVar2 = pcVar5[-1].custom_allocate < &GRA3DVU1MEM_DBADDRESS;
  psVar3 = (sce_dirent *)(uint)bVar2;
  if (!bVar2) {
    psVar3 = (sce_dirent *)
             alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
                       (pcVar7,pcVar5[-2].custom_deallocate,1);
    pcVar5 = pcVar7->__vtable;
  }
                    /* end of inlined section */
  pcVar5[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
                    /* end of inlined section */
  return psVar3;
}

string* basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> > * __uninitialized_copy_aux<basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> > *, basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> > *>(string *__first, string *__last, string *__result) {
	string *__cur;
	Rep *this;
	
  undefined *puVar1;
  bool bVar2;
  sce_dirent *psVar3;
  __vtbl_ptr_type *p_Var4;
  custom_allocator<sce_dirent>__vtable *pcVar5;
  undefined **ppuVar6;
  custom_allocator<sce_dirent> *pcVar7;
  char str [256];
  sce_dirent *__first;
  
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
  this[0x17].__vtable = (custom_allocator<sce_dirent>__vtable *)_vt_9CFindFile;
                    /* inlined from custom/bastring.h */
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var4 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var4 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep
                       (0x369d78);
  }
  this->__vtable = (custom_allocator<sce_dirent>__vtable *)p_Var4;
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var4 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var4 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep()
    ;
  }
  this[1].__vtable = (custom_allocator<sce_dirent>__vtable *)p_Var4;
  pcVar7 = this + 2;
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var4 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var4 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep()
    ;
  }
  pcVar7->__vtable = (custom_allocator<sce_dirent>__vtable *)p_Var4;
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[4].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[5].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[3].__vtable =
       (custom_allocator<sce_dirent>__vtable *)
       _vt_Q23ctlt16custom_allocator1Zt12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc
  ;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[6].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[8].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[9].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[10].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[7].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0xc].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[0xb].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0xd].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
  this[0xe].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x10].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[0xf].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x11].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
  this[0x12].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* end of inlined section */
                    /* inlined from ctl.h */
  this[0x13].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x14].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x15].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
  this[0x16].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from custom/bastring.h */
  ppuVar6 = &((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0x18))->custom_deallocate;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,*ppuVar6,1);
    p_Var4 = (__vtbl_ptr_type *)pcVar7->__vtable;
    ppuVar6 = &((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0x18))->custom_deallocate;
  }
  ppuVar6[3] = (undefined *)0x1;
  if (1 < ppuVar6[2]) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,*ppuVar6,1);
    p_Var4 = (__vtbl_ptr_type *)pcVar7->__vtable;
  }
  ((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0xc))->custom_deallocate =
       &GRA3DVU1MEM_VF02;
  pcVar5 = (custom_allocator<sce_dirent>__vtable *)p_Var4;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0x18))->
                      custom_deallocate,1);
    pcVar5 = pcVar7->__vtable;
  }
  pcVar5[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  puVar1 = pcVar5[-2].custom_deallocate;
  if (&GRA3DVU1MEM_VF02 < pcVar5[-1].custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,puVar1,1);
    pcVar5 = pcVar7->__vtable;
  }
  pcVar5[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  replace__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUiUiUic
            (pcVar7,(int)p_Var4 - (int)pcVar5,puVar1 + ((int)&pcVar5->field_0x0 - (int)p_Var4),0,0);
  pcVar5 = pcVar7->__vtable;
  bVar2 = pcVar5[-1].custom_allocate < &GRA3DVU1MEM_DBADDRESS;
  psVar3 = (sce_dirent *)(uint)bVar2;
  if (!bVar2) {
    psVar3 = (sce_dirent *)
             alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
                       (pcVar7,pcVar5[-2].custom_deallocate,1);
    pcVar5 = pcVar7->__vtable;
  }
                    /* end of inlined section */
  pcVar5[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
                    /* end of inlined section */
  return psVar3;
}

sce_dirent* sce_dirent * __uninitialized_copy_aux<sce_dirent *, sce_dirent *>(sce_dirent *__first, sce_dirent *__last, sce_dirent *__result) {
	sce_dirent *__cur;
	
  undefined *puVar1;
  bool bVar2;
  sce_dirent *psVar3;
  __vtbl_ptr_type *p_Var4;
  custom_allocator<sce_dirent>__vtable *pcVar5;
  undefined **ppuVar6;
  custom_allocator<sce_dirent> *pcVar7;
  char str [256];
  sce_dirent *__first;
  
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
  this[0x17].__vtable = (custom_allocator<sce_dirent>__vtable *)_vt_9CFindFile;
                    /* inlined from custom/bastring.h */
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var4 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var4 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep
                       (0x369d78);
  }
  this->__vtable = (custom_allocator<sce_dirent>__vtable *)p_Var4;
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var4 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var4 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep()
    ;
  }
  this[1].__vtable = (custom_allocator<sce_dirent>__vtable *)p_Var4;
  pcVar7 = this + 2;
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var4 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var4 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep()
    ;
  }
  pcVar7->__vtable = (custom_allocator<sce_dirent>__vtable *)p_Var4;
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[4].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[5].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[3].__vtable =
       (custom_allocator<sce_dirent>__vtable *)
       _vt_Q23ctlt16custom_allocator1Zt12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc
  ;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[6].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[8].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[9].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[10].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[7].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0xc].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[0xb].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0xd].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
  this[0xe].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x10].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[0xf].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x11].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
  this[0x12].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* end of inlined section */
                    /* inlined from ctl.h */
  this[0x13].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x14].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x15].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
  this[0x16].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from custom/bastring.h */
  ppuVar6 = &((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0x18))->custom_deallocate;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,*ppuVar6,1);
    p_Var4 = (__vtbl_ptr_type *)pcVar7->__vtable;
    ppuVar6 = &((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0x18))->custom_deallocate;
  }
  ppuVar6[3] = (undefined *)0x1;
  if (1 < ppuVar6[2]) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,*ppuVar6,1);
    p_Var4 = (__vtbl_ptr_type *)pcVar7->__vtable;
  }
  ((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0xc))->custom_deallocate =
       &GRA3DVU1MEM_VF02;
  pcVar5 = (custom_allocator<sce_dirent>__vtable *)p_Var4;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0x18))->
                      custom_deallocate,1);
    pcVar5 = pcVar7->__vtable;
  }
  pcVar5[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  puVar1 = pcVar5[-2].custom_deallocate;
  if (&GRA3DVU1MEM_VF02 < pcVar5[-1].custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,puVar1,1);
    pcVar5 = pcVar7->__vtable;
  }
  pcVar5[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  replace__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUiUiUic
            (pcVar7,(int)p_Var4 - (int)pcVar5,puVar1 + ((int)&pcVar5->field_0x0 - (int)p_Var4),0,0);
  pcVar5 = pcVar7->__vtable;
  bVar2 = pcVar5[-1].custom_allocate < &GRA3DVU1MEM_DBADDRESS;
  psVar3 = (sce_dirent *)(uint)bVar2;
  if (!bVar2) {
    psVar3 = (sce_dirent *)
             alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
                       (pcVar7,pcVar5[-2].custom_deallocate,1);
    pcVar5 = pcVar7->__vtable;
  }
                    /* end of inlined section */
  pcVar5[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
                    /* end of inlined section */
  return psVar3;
}

type_info& ctl::custom_allocator<basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> > > type_info function() {
  undefined *puVar1;
  bool bVar2;
  sce_dirent *psVar3;
  __vtbl_ptr_type *p_Var4;
  custom_allocator<sce_dirent>__vtable *pcVar5;
  undefined **ppuVar6;
  custom_allocator<sce_dirent> *pcVar7;
  char str [256];
  sce_dirent *__first;
  
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
  this[0x17].__vtable = (custom_allocator<sce_dirent>__vtable *)_vt_9CFindFile;
                    /* inlined from custom/bastring.h */
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var4 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var4 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep
                       (0x369d78);
  }
  this->__vtable = (custom_allocator<sce_dirent>__vtable *)p_Var4;
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var4 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var4 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep()
    ;
  }
  this[1].__vtable = (custom_allocator<sce_dirent>__vtable *)p_Var4;
  pcVar7 = this + 2;
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var4 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var4 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep()
    ;
  }
  pcVar7->__vtable = (custom_allocator<sce_dirent>__vtable *)p_Var4;
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[4].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[5].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[3].__vtable =
       (custom_allocator<sce_dirent>__vtable *)
       _vt_Q23ctlt16custom_allocator1Zt12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc
  ;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[6].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[8].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[9].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[10].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[7].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0xc].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[0xb].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0xd].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
  this[0xe].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x10].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[0xf].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x11].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
  this[0x12].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* end of inlined section */
                    /* inlined from ctl.h */
  this[0x13].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x14].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x15].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
  this[0x16].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from custom/bastring.h */
  ppuVar6 = &((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0x18))->custom_deallocate;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,*ppuVar6,1);
    p_Var4 = (__vtbl_ptr_type *)pcVar7->__vtable;
    ppuVar6 = &((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0x18))->custom_deallocate;
  }
  ppuVar6[3] = (undefined *)0x1;
  if (1 < ppuVar6[2]) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,*ppuVar6,1);
    p_Var4 = (__vtbl_ptr_type *)pcVar7->__vtable;
  }
  ((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0xc))->custom_deallocate =
       &GRA3DVU1MEM_VF02;
  pcVar5 = (custom_allocator<sce_dirent>__vtable *)p_Var4;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0x18))->
                      custom_deallocate,1);
    pcVar5 = pcVar7->__vtable;
  }
  pcVar5[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  puVar1 = pcVar5[-2].custom_deallocate;
  if (&GRA3DVU1MEM_VF02 < pcVar5[-1].custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,puVar1,1);
    pcVar5 = pcVar7->__vtable;
  }
  pcVar5[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  replace__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUiUiUic
            (pcVar7,(int)p_Var4 - (int)pcVar5,puVar1 + ((int)&pcVar5->field_0x0 - (int)p_Var4),0,0);
  pcVar5 = pcVar7->__vtable;
  bVar2 = pcVar5[-1].custom_allocate < &GRA3DVU1MEM_DBADDRESS;
  psVar3 = (sce_dirent *)(uint)bVar2;
  if (!bVar2) {
    psVar3 = (sce_dirent *)
             alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
                       (pcVar7,pcVar5[-2].custom_deallocate,1);
    pcVar5 = pcVar7->__vtable;
  }
                    /* end of inlined section */
  pcVar5[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
                    /* end of inlined section */
  return psVar3;
}

type_info& ctl::custom_allocator<sce_dirent> type_info function() {
  undefined *puVar1;
  bool bVar2;
  sce_dirent *psVar3;
  __vtbl_ptr_type *p_Var4;
  custom_allocator<sce_dirent>__vtable *pcVar5;
  undefined **ppuVar6;
  custom_allocator<sce_dirent> *pcVar7;
  char str [256];
  sce_dirent *__first;
  
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
  this[0x17].__vtable = (custom_allocator<sce_dirent>__vtable *)_vt_9CFindFile;
                    /* inlined from custom/bastring.h */
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var4 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var4 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep
                       (0x369d78);
  }
  this->__vtable = (custom_allocator<sce_dirent>__vtable *)p_Var4;
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var4 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var4 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep()
    ;
  }
  this[1].__vtable = (custom_allocator<sce_dirent>__vtable *)p_Var4;
  pcVar7 = this + 2;
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var4 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var4 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep()
    ;
  }
  pcVar7->__vtable = (custom_allocator<sce_dirent>__vtable *)p_Var4;
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[4].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[5].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[3].__vtable =
       (custom_allocator<sce_dirent>__vtable *)
       _vt_Q23ctlt16custom_allocator1Zt12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc
  ;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[6].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[8].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[9].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[10].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[7].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0xc].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[0xb].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0xd].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
  this[0xe].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x10].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[0xf].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x11].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
  this[0x12].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* end of inlined section */
                    /* inlined from ctl.h */
  this[0x13].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x14].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x15].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
  this[0x16].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from custom/bastring.h */
  ppuVar6 = &((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0x18))->custom_deallocate;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,*ppuVar6,1);
    p_Var4 = (__vtbl_ptr_type *)pcVar7->__vtable;
    ppuVar6 = &((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0x18))->custom_deallocate;
  }
  ppuVar6[3] = (undefined *)0x1;
  if (1 < ppuVar6[2]) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,*ppuVar6,1);
    p_Var4 = (__vtbl_ptr_type *)pcVar7->__vtable;
  }
  ((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0xc))->custom_deallocate =
       &GRA3DVU1MEM_VF02;
  pcVar5 = (custom_allocator<sce_dirent>__vtable *)p_Var4;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0x18))->
                      custom_deallocate,1);
    pcVar5 = pcVar7->__vtable;
  }
  pcVar5[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  puVar1 = pcVar5[-2].custom_deallocate;
  if (&GRA3DVU1MEM_VF02 < pcVar5[-1].custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,puVar1,1);
    pcVar5 = pcVar7->__vtable;
  }
  pcVar5[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  replace__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUiUiUic
            (pcVar7,(int)p_Var4 - (int)pcVar5,puVar1 + ((int)&pcVar5->field_0x0 - (int)p_Var4),0,0);
  pcVar5 = pcVar7->__vtable;
  bVar2 = pcVar5[-1].custom_allocate < &GRA3DVU1MEM_DBADDRESS;
  psVar3 = (sce_dirent *)(uint)bVar2;
  if (!bVar2) {
    psVar3 = (sce_dirent *)
             alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
                       (pcVar7,pcVar5[-2].custom_deallocate,1);
    pcVar5 = pcVar7->__vtable;
  }
                    /* end of inlined section */
  pcVar5[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
                    /* end of inlined section */
  return psVar3;
}

type_info& CFindFile type_info function() {
  undefined *puVar1;
  bool bVar2;
  sce_dirent *psVar3;
  __vtbl_ptr_type *p_Var4;
  custom_allocator<sce_dirent>__vtable *pcVar5;
  undefined **ppuVar6;
  custom_allocator<sce_dirent> *pcVar7;
  char str [256];
  sce_dirent *__first;
  
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
  this[0x17].__vtable = (custom_allocator<sce_dirent>__vtable *)_vt_9CFindFile;
                    /* inlined from custom/bastring.h */
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var4 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var4 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep
                       (0x369d78);
  }
  this->__vtable = (custom_allocator<sce_dirent>__vtable *)p_Var4;
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var4 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var4 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep()
    ;
  }
  this[1].__vtable = (custom_allocator<sce_dirent>__vtable *)p_Var4;
  pcVar7 = this + 2;
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var4 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var4 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep()
    ;
  }
  pcVar7->__vtable = (custom_allocator<sce_dirent>__vtable *)p_Var4;
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[4].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[5].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[3].__vtable =
       (custom_allocator<sce_dirent>__vtable *)
       _vt_Q23ctlt16custom_allocator1Zt12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc
  ;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[6].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[8].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[9].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[10].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[7].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0xc].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[0xb].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0xd].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
  this[0xe].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x10].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[0xf].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x11].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
  this[0x12].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* end of inlined section */
                    /* inlined from ctl.h */
  this[0x13].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x14].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x15].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
  this[0x16].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from custom/bastring.h */
  ppuVar6 = &((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0x18))->custom_deallocate;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,*ppuVar6,1);
    p_Var4 = (__vtbl_ptr_type *)pcVar7->__vtable;
    ppuVar6 = &((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0x18))->custom_deallocate;
  }
  ppuVar6[3] = (undefined *)0x1;
  if (1 < ppuVar6[2]) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,*ppuVar6,1);
    p_Var4 = (__vtbl_ptr_type *)pcVar7->__vtable;
  }
  ((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0xc))->custom_deallocate =
       &GRA3DVU1MEM_VF02;
  pcVar5 = (custom_allocator<sce_dirent>__vtable *)p_Var4;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0x18))->
                      custom_deallocate,1);
    pcVar5 = pcVar7->__vtable;
  }
  pcVar5[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  puVar1 = pcVar5[-2].custom_deallocate;
  if (&GRA3DVU1MEM_VF02 < pcVar5[-1].custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,puVar1,1);
    pcVar5 = pcVar7->__vtable;
  }
  pcVar5[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  replace__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUiUiUic
            (pcVar7,(int)p_Var4 - (int)pcVar5,puVar1 + ((int)&pcVar5->field_0x0 - (int)p_Var4),0,0);
  pcVar5 = pcVar7->__vtable;
  bVar2 = pcVar5[-1].custom_allocate < &GRA3DVU1MEM_DBADDRESS;
  psVar3 = (sce_dirent *)(uint)bVar2;
  if (!bVar2) {
    psVar3 = (sce_dirent *)
             alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
                       (pcVar7,pcVar5[-2].custom_deallocate,1);
    pcVar5 = pcVar7->__vtable;
  }
                    /* end of inlined section */
  pcVar5[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
                    /* end of inlined section */
  return psVar3;
}

int CFindFile::OnError(char *pStr) {
	char str[256];
	
  undefined *puVar1;
  bool bVar2;
  sce_dirent *psVar3;
  __vtbl_ptr_type *p_Var4;
  custom_allocator<sce_dirent>__vtable *pcVar5;
  undefined **ppuVar6;
  custom_allocator<sce_dirent> *pcVar7;
  char str [256];
  sce_dirent *__first;
  
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
  this[0x17].__vtable = (custom_allocator<sce_dirent>__vtable *)_vt_9CFindFile;
                    /* inlined from custom/bastring.h */
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var4 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var4 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep
                       (0x369d78);
  }
  this->__vtable = (custom_allocator<sce_dirent>__vtable *)p_Var4;
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var4 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var4 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep()
    ;
  }
  this[1].__vtable = (custom_allocator<sce_dirent>__vtable *)p_Var4;
  pcVar7 = this + 2;
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var4 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var4 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep()
    ;
  }
  pcVar7->__vtable = (custom_allocator<sce_dirent>__vtable *)p_Var4;
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[4].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[5].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[3].__vtable =
       (custom_allocator<sce_dirent>__vtable *)
       _vt_Q23ctlt16custom_allocator1Zt12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc
  ;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[6].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[8].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[9].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[10].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[7].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0xc].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[0xb].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0xd].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
  this[0xe].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x10].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[0xf].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x11].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
  this[0x12].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* end of inlined section */
                    /* inlined from ctl.h */
  this[0x13].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x14].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x15].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
  this[0x16].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from custom/bastring.h */
  ppuVar6 = &((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0x18))->custom_deallocate;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,*ppuVar6,1);
    p_Var4 = (__vtbl_ptr_type *)pcVar7->__vtable;
    ppuVar6 = &((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0x18))->custom_deallocate;
  }
  ppuVar6[3] = (undefined *)0x1;
  if (1 < ppuVar6[2]) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,*ppuVar6,1);
    p_Var4 = (__vtbl_ptr_type *)pcVar7->__vtable;
  }
  ((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0xc))->custom_deallocate =
       &GRA3DVU1MEM_VF02;
  pcVar5 = (custom_allocator<sce_dirent>__vtable *)p_Var4;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0x18))->
                      custom_deallocate,1);
    pcVar5 = pcVar7->__vtable;
  }
  pcVar5[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  puVar1 = pcVar5[-2].custom_deallocate;
  if (&GRA3DVU1MEM_VF02 < pcVar5[-1].custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,puVar1,1);
    pcVar5 = pcVar7->__vtable;
  }
  pcVar5[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  replace__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUiUiUic
            (pcVar7,(int)p_Var4 - (int)pcVar5,puVar1 + ((int)&pcVar5->field_0x0 - (int)p_Var4),0,0);
  pcVar5 = pcVar7->__vtable;
  bVar2 = pcVar5[-1].custom_allocate < &GRA3DVU1MEM_DBADDRESS;
  psVar3 = (sce_dirent *)(uint)bVar2;
  if (!bVar2) {
    psVar3 = (sce_dirent *)
             alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
                       (pcVar7,pcVar5[-2].custom_deallocate,1);
    pcVar5 = pcVar7->__vtable;
  }
                    /* end of inlined section */
  pcVar5[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
                    /* end of inlined section */
  return psVar3;
}

char* CFindFile::ErrorString() {
	basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> > *this;
	
  undefined *puVar1;
  bool bVar2;
  sce_dirent *psVar3;
  __vtbl_ptr_type *p_Var4;
  custom_allocator<sce_dirent>__vtable *pcVar5;
  undefined **ppuVar6;
  custom_allocator<sce_dirent> *pcVar7;
  char str [256];
  sce_dirent *__first;
  
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
  this[0x17].__vtable = (custom_allocator<sce_dirent>__vtable *)_vt_9CFindFile;
                    /* inlined from custom/bastring.h */
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var4 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var4 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep
                       (0x369d78);
  }
  this->__vtable = (custom_allocator<sce_dirent>__vtable *)p_Var4;
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var4 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var4 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep()
    ;
  }
  this[1].__vtable = (custom_allocator<sce_dirent>__vtable *)p_Var4;
  pcVar7 = this + 2;
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var4 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var4 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep()
    ;
  }
  pcVar7->__vtable = (custom_allocator<sce_dirent>__vtable *)p_Var4;
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[4].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[5].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[3].__vtable =
       (custom_allocator<sce_dirent>__vtable *)
       _vt_Q23ctlt16custom_allocator1Zt12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc
  ;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[6].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[8].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[9].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[10].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[7].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0xc].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[0xb].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0xd].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
  this[0xe].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x10].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[0xf].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x11].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
  this[0x12].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* end of inlined section */
                    /* inlined from ctl.h */
  this[0x13].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x14].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x15].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
  this[0x16].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from custom/bastring.h */
  ppuVar6 = &((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0x18))->custom_deallocate;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,*ppuVar6,1);
    p_Var4 = (__vtbl_ptr_type *)pcVar7->__vtable;
    ppuVar6 = &((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0x18))->custom_deallocate;
  }
  ppuVar6[3] = (undefined *)0x1;
  if (1 < ppuVar6[2]) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,*ppuVar6,1);
    p_Var4 = (__vtbl_ptr_type *)pcVar7->__vtable;
  }
  ((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0xc))->custom_deallocate =
       &GRA3DVU1MEM_VF02;
  pcVar5 = (custom_allocator<sce_dirent>__vtable *)p_Var4;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0x18))->
                      custom_deallocate,1);
    pcVar5 = pcVar7->__vtable;
  }
  pcVar5[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  puVar1 = pcVar5[-2].custom_deallocate;
  if (&GRA3DVU1MEM_VF02 < pcVar5[-1].custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,puVar1,1);
    pcVar5 = pcVar7->__vtable;
  }
  pcVar5[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  replace__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUiUiUic
            (pcVar7,(int)p_Var4 - (int)pcVar5,puVar1 + ((int)&pcVar5->field_0x0 - (int)p_Var4),0,0);
  pcVar5 = pcVar7->__vtable;
  bVar2 = pcVar5[-1].custom_allocate < &GRA3DVU1MEM_DBADDRESS;
  psVar3 = (sce_dirent *)(uint)bVar2;
  if (!bVar2) {
    psVar3 = (sce_dirent *)
             alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
                       (pcVar7,pcVar5[-2].custom_deallocate,1);
    pcVar5 = pcVar7->__vtable;
  }
                    /* end of inlined section */
  pcVar5[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
                    /* end of inlined section */
  return psVar3;
}

int CFindFile::GetNumMatchFile() {
  undefined *puVar1;
  bool bVar2;
  sce_dirent *psVar3;
  __vtbl_ptr_type *p_Var4;
  custom_allocator<sce_dirent>__vtable *pcVar5;
  undefined **ppuVar6;
  custom_allocator<sce_dirent> *pcVar7;
  char str [256];
  sce_dirent *__first;
  
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
  this[0x17].__vtable = (custom_allocator<sce_dirent>__vtable *)_vt_9CFindFile;
                    /* inlined from custom/bastring.h */
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var4 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var4 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep
                       (0x369d78);
  }
  this->__vtable = (custom_allocator<sce_dirent>__vtable *)p_Var4;
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var4 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var4 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep()
    ;
  }
  this[1].__vtable = (custom_allocator<sce_dirent>__vtable *)p_Var4;
  pcVar7 = this + 2;
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var4 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var4 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep()
    ;
  }
  pcVar7->__vtable = (custom_allocator<sce_dirent>__vtable *)p_Var4;
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[4].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[5].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[3].__vtable =
       (custom_allocator<sce_dirent>__vtable *)
       _vt_Q23ctlt16custom_allocator1Zt12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc
  ;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[6].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[8].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[9].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[10].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[7].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0xc].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[0xb].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0xd].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
  this[0xe].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x10].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[0xf].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x11].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
  this[0x12].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* end of inlined section */
                    /* inlined from ctl.h */
  this[0x13].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x14].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x15].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
  this[0x16].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from custom/bastring.h */
  ppuVar6 = &((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0x18))->custom_deallocate;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,*ppuVar6,1);
    p_Var4 = (__vtbl_ptr_type *)pcVar7->__vtable;
    ppuVar6 = &((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0x18))->custom_deallocate;
  }
  ppuVar6[3] = (undefined *)0x1;
  if (1 < ppuVar6[2]) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,*ppuVar6,1);
    p_Var4 = (__vtbl_ptr_type *)pcVar7->__vtable;
  }
  ((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0xc))->custom_deallocate =
       &GRA3DVU1MEM_VF02;
  pcVar5 = (custom_allocator<sce_dirent>__vtable *)p_Var4;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0x18))->
                      custom_deallocate,1);
    pcVar5 = pcVar7->__vtable;
  }
  pcVar5[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  puVar1 = pcVar5[-2].custom_deallocate;
  if (&GRA3DVU1MEM_VF02 < pcVar5[-1].custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,puVar1,1);
    pcVar5 = pcVar7->__vtable;
  }
  pcVar5[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  replace__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUiUiUic
            (pcVar7,(int)p_Var4 - (int)pcVar5,puVar1 + ((int)&pcVar5->field_0x0 - (int)p_Var4),0,0);
  pcVar5 = pcVar7->__vtable;
  bVar2 = pcVar5[-1].custom_allocate < &GRA3DVU1MEM_DBADDRESS;
  psVar3 = (sce_dirent *)(uint)bVar2;
  if (!bVar2) {
    psVar3 = (sce_dirent *)
             alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
                       (pcVar7,pcVar5[-2].custom_deallocate,1);
    pcVar5 = pcVar7->__vtable;
  }
                    /* end of inlined section */
  pcVar5[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
                    /* end of inlined section */
  return psVar3;
}

sce_dirent& CFindFile::GetMatchFileRef(int iIndex) {
  undefined *puVar1;
  bool bVar2;
  sce_dirent *psVar3;
  __vtbl_ptr_type *p_Var4;
  custom_allocator<sce_dirent>__vtable *pcVar5;
  undefined **ppuVar6;
  custom_allocator<sce_dirent> *pcVar7;
  char str [256];
  sce_dirent *__first;
  
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
  this[0x17].__vtable = (custom_allocator<sce_dirent>__vtable *)_vt_9CFindFile;
                    /* inlined from custom/bastring.h */
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var4 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var4 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep
                       (0x369d78);
  }
  this->__vtable = (custom_allocator<sce_dirent>__vtable *)p_Var4;
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var4 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var4 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep()
    ;
  }
  this[1].__vtable = (custom_allocator<sce_dirent>__vtable *)p_Var4;
  pcVar7 = this + 2;
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var4 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var4 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep()
    ;
  }
  pcVar7->__vtable = (custom_allocator<sce_dirent>__vtable *)p_Var4;
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[4].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[5].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[3].__vtable =
       (custom_allocator<sce_dirent>__vtable *)
       _vt_Q23ctlt16custom_allocator1Zt12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc
  ;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[6].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[8].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[9].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[10].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[7].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0xc].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[0xb].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0xd].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
  this[0xe].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x10].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[0xf].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x11].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
  this[0x12].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* end of inlined section */
                    /* inlined from ctl.h */
  this[0x13].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x14].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x15].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
  this[0x16].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from custom/bastring.h */
  ppuVar6 = &((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0x18))->custom_deallocate;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,*ppuVar6,1);
    p_Var4 = (__vtbl_ptr_type *)pcVar7->__vtable;
    ppuVar6 = &((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0x18))->custom_deallocate;
  }
  ppuVar6[3] = (undefined *)0x1;
  if (1 < ppuVar6[2]) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,*ppuVar6,1);
    p_Var4 = (__vtbl_ptr_type *)pcVar7->__vtable;
  }
  ((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0xc))->custom_deallocate =
       &GRA3DVU1MEM_VF02;
  pcVar5 = (custom_allocator<sce_dirent>__vtable *)p_Var4;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0x18))->
                      custom_deallocate,1);
    pcVar5 = pcVar7->__vtable;
  }
  pcVar5[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  puVar1 = pcVar5[-2].custom_deallocate;
  if (&GRA3DVU1MEM_VF02 < pcVar5[-1].custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,puVar1,1);
    pcVar5 = pcVar7->__vtable;
  }
  pcVar5[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  replace__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUiUiUic
            (pcVar7,(int)p_Var4 - (int)pcVar5,puVar1 + ((int)&pcVar5->field_0x0 - (int)p_Var4),0,0);
  pcVar5 = pcVar7->__vtable;
  bVar2 = pcVar5[-1].custom_allocate < &GRA3DVU1MEM_DBADDRESS;
  psVar3 = (sce_dirent *)(uint)bVar2;
  if (!bVar2) {
    psVar3 = (sce_dirent *)
             alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
                       (pcVar7,pcVar5[-2].custom_deallocate,1);
    pcVar5 = pcVar7->__vtable;
  }
                    /* end of inlined section */
  pcVar5[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
                    /* end of inlined section */
  return psVar3;
}

int CFindFile::GetNumFile() {
  undefined *puVar1;
  bool bVar2;
  sce_dirent *psVar3;
  __vtbl_ptr_type *p_Var4;
  custom_allocator<sce_dirent>__vtable *pcVar5;
  undefined **ppuVar6;
  custom_allocator<sce_dirent> *pcVar7;
  char str [256];
  sce_dirent *__first;
  
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
  this[0x17].__vtable = (custom_allocator<sce_dirent>__vtable *)_vt_9CFindFile;
                    /* inlined from custom/bastring.h */
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var4 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var4 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep
                       (0x369d78);
  }
  this->__vtable = (custom_allocator<sce_dirent>__vtable *)p_Var4;
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var4 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var4 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep()
    ;
  }
  this[1].__vtable = (custom_allocator<sce_dirent>__vtable *)p_Var4;
  pcVar7 = this + 2;
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var4 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var4 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep()
    ;
  }
  pcVar7->__vtable = (custom_allocator<sce_dirent>__vtable *)p_Var4;
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[4].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[5].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[3].__vtable =
       (custom_allocator<sce_dirent>__vtable *)
       _vt_Q23ctlt16custom_allocator1Zt12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc
  ;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[6].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[8].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[9].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[10].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[7].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0xc].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[0xb].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0xd].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
  this[0xe].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x10].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[0xf].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x11].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
  this[0x12].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* end of inlined section */
                    /* inlined from ctl.h */
  this[0x13].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x14].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x15].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
  this[0x16].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from custom/bastring.h */
  ppuVar6 = &((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0x18))->custom_deallocate;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,*ppuVar6,1);
    p_Var4 = (__vtbl_ptr_type *)pcVar7->__vtable;
    ppuVar6 = &((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0x18))->custom_deallocate;
  }
  ppuVar6[3] = (undefined *)0x1;
  if (1 < ppuVar6[2]) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,*ppuVar6,1);
    p_Var4 = (__vtbl_ptr_type *)pcVar7->__vtable;
  }
  ((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0xc))->custom_deallocate =
       &GRA3DVU1MEM_VF02;
  pcVar5 = (custom_allocator<sce_dirent>__vtable *)p_Var4;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0x18))->
                      custom_deallocate,1);
    pcVar5 = pcVar7->__vtable;
  }
  pcVar5[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  puVar1 = pcVar5[-2].custom_deallocate;
  if (&GRA3DVU1MEM_VF02 < pcVar5[-1].custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,puVar1,1);
    pcVar5 = pcVar7->__vtable;
  }
  pcVar5[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  replace__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUiUiUic
            (pcVar7,(int)p_Var4 - (int)pcVar5,puVar1 + ((int)&pcVar5->field_0x0 - (int)p_Var4),0,0);
  pcVar5 = pcVar7->__vtable;
  bVar2 = pcVar5[-1].custom_allocate < &GRA3DVU1MEM_DBADDRESS;
  psVar3 = (sce_dirent *)(uint)bVar2;
  if (!bVar2) {
    psVar3 = (sce_dirent *)
             alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
                       (pcVar7,pcVar5[-2].custom_deallocate,1);
    pcVar5 = pcVar7->__vtable;
  }
                    /* end of inlined section */
  pcVar5[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
                    /* end of inlined section */
  return psVar3;
}

sce_dirent& CFindFile::GetFileRef(int iIndex) {
  undefined *puVar1;
  bool bVar2;
  sce_dirent *psVar3;
  __vtbl_ptr_type *p_Var4;
  custom_allocator<sce_dirent>__vtable *pcVar5;
  undefined **ppuVar6;
  custom_allocator<sce_dirent> *pcVar7;
  char str [256];
  sce_dirent *__first;
  
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
  this[0x17].__vtable = (custom_allocator<sce_dirent>__vtable *)_vt_9CFindFile;
                    /* inlined from custom/bastring.h */
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var4 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var4 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep
                       (0x369d78);
  }
  this->__vtable = (custom_allocator<sce_dirent>__vtable *)p_Var4;
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var4 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var4 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep()
    ;
  }
  this[1].__vtable = (custom_allocator<sce_dirent>__vtable *)p_Var4;
  pcVar7 = this + 2;
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var4 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var4 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep()
    ;
  }
  pcVar7->__vtable = (custom_allocator<sce_dirent>__vtable *)p_Var4;
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[4].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[5].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[3].__vtable =
       (custom_allocator<sce_dirent>__vtable *)
       _vt_Q23ctlt16custom_allocator1Zt12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc
  ;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[6].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[8].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[9].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[10].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[7].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0xc].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[0xb].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0xd].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
  this[0xe].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x10].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[0xf].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x11].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
  this[0x12].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* end of inlined section */
                    /* inlined from ctl.h */
  this[0x13].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x14].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x15].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
  this[0x16].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from custom/bastring.h */
  ppuVar6 = &((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0x18))->custom_deallocate;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,*ppuVar6,1);
    p_Var4 = (__vtbl_ptr_type *)pcVar7->__vtable;
    ppuVar6 = &((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0x18))->custom_deallocate;
  }
  ppuVar6[3] = (undefined *)0x1;
  if (1 < ppuVar6[2]) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,*ppuVar6,1);
    p_Var4 = (__vtbl_ptr_type *)pcVar7->__vtable;
  }
  ((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0xc))->custom_deallocate =
       &GRA3DVU1MEM_VF02;
  pcVar5 = (custom_allocator<sce_dirent>__vtable *)p_Var4;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0x18))->
                      custom_deallocate,1);
    pcVar5 = pcVar7->__vtable;
  }
  pcVar5[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  puVar1 = pcVar5[-2].custom_deallocate;
  if (&GRA3DVU1MEM_VF02 < pcVar5[-1].custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,puVar1,1);
    pcVar5 = pcVar7->__vtable;
  }
  pcVar5[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  replace__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUiUiUic
            (pcVar7,(int)p_Var4 - (int)pcVar5,puVar1 + ((int)&pcVar5->field_0x0 - (int)p_Var4),0,0);
  pcVar5 = pcVar7->__vtable;
  bVar2 = pcVar5[-1].custom_allocate < &GRA3DVU1MEM_DBADDRESS;
  psVar3 = (sce_dirent *)(uint)bVar2;
  if (!bVar2) {
    psVar3 = (sce_dirent *)
             alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
                       (pcVar7,pcVar5[-2].custom_deallocate,1);
    pcVar5 = pcVar7->__vtable;
  }
                    /* end of inlined section */
  pcVar5[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
                    /* end of inlined section */
  return psVar3;
}

int CFindFile::GetNumSubDirectory() {
  undefined *puVar1;
  bool bVar2;
  sce_dirent *psVar3;
  __vtbl_ptr_type *p_Var4;
  custom_allocator<sce_dirent>__vtable *pcVar5;
  undefined **ppuVar6;
  custom_allocator<sce_dirent> *pcVar7;
  char str [256];
  sce_dirent *__first;
  
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
  this[0x17].__vtable = (custom_allocator<sce_dirent>__vtable *)_vt_9CFindFile;
                    /* inlined from custom/bastring.h */
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var4 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var4 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep
                       (0x369d78);
  }
  this->__vtable = (custom_allocator<sce_dirent>__vtable *)p_Var4;
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var4 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var4 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep()
    ;
  }
  this[1].__vtable = (custom_allocator<sce_dirent>__vtable *)p_Var4;
  pcVar7 = this + 2;
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var4 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var4 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep()
    ;
  }
  pcVar7->__vtable = (custom_allocator<sce_dirent>__vtable *)p_Var4;
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[4].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[5].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[3].__vtable =
       (custom_allocator<sce_dirent>__vtable *)
       _vt_Q23ctlt16custom_allocator1Zt12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc
  ;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[6].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[8].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[9].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[10].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[7].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0xc].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[0xb].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0xd].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
  this[0xe].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x10].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[0xf].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x11].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
  this[0x12].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* end of inlined section */
                    /* inlined from ctl.h */
  this[0x13].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x14].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x15].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
  this[0x16].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from custom/bastring.h */
  ppuVar6 = &((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0x18))->custom_deallocate;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,*ppuVar6,1);
    p_Var4 = (__vtbl_ptr_type *)pcVar7->__vtable;
    ppuVar6 = &((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0x18))->custom_deallocate;
  }
  ppuVar6[3] = (undefined *)0x1;
  if (1 < ppuVar6[2]) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,*ppuVar6,1);
    p_Var4 = (__vtbl_ptr_type *)pcVar7->__vtable;
  }
  ((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0xc))->custom_deallocate =
       &GRA3DVU1MEM_VF02;
  pcVar5 = (custom_allocator<sce_dirent>__vtable *)p_Var4;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0x18))->
                      custom_deallocate,1);
    pcVar5 = pcVar7->__vtable;
  }
  pcVar5[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  puVar1 = pcVar5[-2].custom_deallocate;
  if (&GRA3DVU1MEM_VF02 < pcVar5[-1].custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,puVar1,1);
    pcVar5 = pcVar7->__vtable;
  }
  pcVar5[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  replace__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUiUiUic
            (pcVar7,(int)p_Var4 - (int)pcVar5,puVar1 + ((int)&pcVar5->field_0x0 - (int)p_Var4),0,0);
  pcVar5 = pcVar7->__vtable;
  bVar2 = pcVar5[-1].custom_allocate < &GRA3DVU1MEM_DBADDRESS;
  psVar3 = (sce_dirent *)(uint)bVar2;
  if (!bVar2) {
    psVar3 = (sce_dirent *)
             alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
                       (pcVar7,pcVar5[-2].custom_deallocate,1);
    pcVar5 = pcVar7->__vtable;
  }
                    /* end of inlined section */
  pcVar5[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
                    /* end of inlined section */
  return psVar3;
}

sce_dirent& CFindFile::GetSubDirectoryRef(int iIndex) {
  undefined *puVar1;
  bool bVar2;
  sce_dirent *psVar3;
  __vtbl_ptr_type *p_Var4;
  custom_allocator<sce_dirent>__vtable *pcVar5;
  undefined **ppuVar6;
  custom_allocator<sce_dirent> *pcVar7;
  char str [256];
  sce_dirent *__first;
  
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
  this[0x17].__vtable = (custom_allocator<sce_dirent>__vtable *)_vt_9CFindFile;
                    /* inlined from custom/bastring.h */
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var4 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var4 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep
                       (0x369d78);
  }
  this->__vtable = (custom_allocator<sce_dirent>__vtable *)p_Var4;
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var4 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var4 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep()
    ;
  }
  this[1].__vtable = (custom_allocator<sce_dirent>__vtable *)p_Var4;
  pcVar7 = this + 2;
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var4 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var4 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep()
    ;
  }
  pcVar7->__vtable = (custom_allocator<sce_dirent>__vtable *)p_Var4;
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[4].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[5].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[3].__vtable =
       (custom_allocator<sce_dirent>__vtable *)
       _vt_Q23ctlt16custom_allocator1Zt12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc
  ;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[6].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[8].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[9].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[10].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[7].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0xc].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[0xb].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0xd].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
  this[0xe].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x10].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[0xf].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x11].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
  this[0x12].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* end of inlined section */
                    /* inlined from ctl.h */
  this[0x13].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x14].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x15].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
  this[0x16].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from custom/bastring.h */
  ppuVar6 = &((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0x18))->custom_deallocate;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,*ppuVar6,1);
    p_Var4 = (__vtbl_ptr_type *)pcVar7->__vtable;
    ppuVar6 = &((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0x18))->custom_deallocate;
  }
  ppuVar6[3] = (undefined *)0x1;
  if (1 < ppuVar6[2]) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,*ppuVar6,1);
    p_Var4 = (__vtbl_ptr_type *)pcVar7->__vtable;
  }
  ((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0xc))->custom_deallocate =
       &GRA3DVU1MEM_VF02;
  pcVar5 = (custom_allocator<sce_dirent>__vtable *)p_Var4;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0x18))->
                      custom_deallocate,1);
    pcVar5 = pcVar7->__vtable;
  }
  pcVar5[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  puVar1 = pcVar5[-2].custom_deallocate;
  if (&GRA3DVU1MEM_VF02 < pcVar5[-1].custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,puVar1,1);
    pcVar5 = pcVar7->__vtable;
  }
  pcVar5[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  replace__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUiUiUic
            (pcVar7,(int)p_Var4 - (int)pcVar5,puVar1 + ((int)&pcVar5->field_0x0 - (int)p_Var4),0,0);
  pcVar5 = pcVar7->__vtable;
  bVar2 = pcVar5[-1].custom_allocate < &GRA3DVU1MEM_DBADDRESS;
  psVar3 = (sce_dirent *)(uint)bVar2;
  if (!bVar2) {
    psVar3 = (sce_dirent *)
             alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
                       (pcVar7,pcVar5[-2].custom_deallocate,1);
    pcVar5 = pcVar7->__vtable;
  }
                    /* end of inlined section */
  pcVar5[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
                    /* end of inlined section */
  return psVar3;
}

int CFindFile::GetNumSubDirectoryAll() {
  undefined *puVar1;
  bool bVar2;
  sce_dirent *psVar3;
  __vtbl_ptr_type *p_Var4;
  custom_allocator<sce_dirent>__vtable *pcVar5;
  undefined **ppuVar6;
  custom_allocator<sce_dirent> *pcVar7;
  char str [256];
  sce_dirent *__first;
  
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
  this[0x17].__vtable = (custom_allocator<sce_dirent>__vtable *)_vt_9CFindFile;
                    /* inlined from custom/bastring.h */
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var4 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var4 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep
                       (0x369d78);
  }
  this->__vtable = (custom_allocator<sce_dirent>__vtable *)p_Var4;
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var4 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var4 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep()
    ;
  }
  this[1].__vtable = (custom_allocator<sce_dirent>__vtable *)p_Var4;
  pcVar7 = this + 2;
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var4 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var4 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep()
    ;
  }
  pcVar7->__vtable = (custom_allocator<sce_dirent>__vtable *)p_Var4;
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[4].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[5].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[3].__vtable =
       (custom_allocator<sce_dirent>__vtable *)
       _vt_Q23ctlt16custom_allocator1Zt12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc
  ;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[6].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[8].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[9].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[10].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[7].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0xc].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[0xb].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0xd].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
  this[0xe].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x10].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[0xf].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x11].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
  this[0x12].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* end of inlined section */
                    /* inlined from ctl.h */
  this[0x13].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x14].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x15].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
  this[0x16].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from custom/bastring.h */
  ppuVar6 = &((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0x18))->custom_deallocate;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,*ppuVar6,1);
    p_Var4 = (__vtbl_ptr_type *)pcVar7->__vtable;
    ppuVar6 = &((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0x18))->custom_deallocate;
  }
  ppuVar6[3] = (undefined *)0x1;
  if (1 < ppuVar6[2]) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,*ppuVar6,1);
    p_Var4 = (__vtbl_ptr_type *)pcVar7->__vtable;
  }
  ((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0xc))->custom_deallocate =
       &GRA3DVU1MEM_VF02;
  pcVar5 = (custom_allocator<sce_dirent>__vtable *)p_Var4;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0x18))->
                      custom_deallocate,1);
    pcVar5 = pcVar7->__vtable;
  }
  pcVar5[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  puVar1 = pcVar5[-2].custom_deallocate;
  if (&GRA3DVU1MEM_VF02 < pcVar5[-1].custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,puVar1,1);
    pcVar5 = pcVar7->__vtable;
  }
  pcVar5[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  replace__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUiUiUic
            (pcVar7,(int)p_Var4 - (int)pcVar5,puVar1 + ((int)&pcVar5->field_0x0 - (int)p_Var4),0,0);
  pcVar5 = pcVar7->__vtable;
  bVar2 = pcVar5[-1].custom_allocate < &GRA3DVU1MEM_DBADDRESS;
  psVar3 = (sce_dirent *)(uint)bVar2;
  if (!bVar2) {
    psVar3 = (sce_dirent *)
             alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
                       (pcVar7,pcVar5[-2].custom_deallocate,1);
    pcVar5 = pcVar7->__vtable;
  }
                    /* end of inlined section */
  pcVar5[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
                    /* end of inlined section */
  return psVar3;
}

sce_dirent& CFindFile::GetSubDirectoryAllRef(int iIndex) {
  undefined *puVar1;
  bool bVar2;
  sce_dirent *psVar3;
  __vtbl_ptr_type *p_Var4;
  custom_allocator<sce_dirent>__vtable *pcVar5;
  undefined **ppuVar6;
  custom_allocator<sce_dirent> *pcVar7;
  char str [256];
  sce_dirent *__first;
  
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
  this[0x17].__vtable = (custom_allocator<sce_dirent>__vtable *)_vt_9CFindFile;
                    /* inlined from custom/bastring.h */
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var4 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var4 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep
                       (0x369d78);
  }
  this->__vtable = (custom_allocator<sce_dirent>__vtable *)p_Var4;
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var4 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var4 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep()
    ;
  }
  this[1].__vtable = (custom_allocator<sce_dirent>__vtable *)p_Var4;
  pcVar7 = this + 2;
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var4 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var4 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep()
    ;
  }
  pcVar7->__vtable = (custom_allocator<sce_dirent>__vtable *)p_Var4;
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[4].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[5].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[3].__vtable =
       (custom_allocator<sce_dirent>__vtable *)
       _vt_Q23ctlt16custom_allocator1Zt12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc
  ;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[6].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[8].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[9].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[10].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[7].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0xc].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[0xb].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0xd].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
  this[0xe].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x10].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[0xf].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x11].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
  this[0x12].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* end of inlined section */
                    /* inlined from ctl.h */
  this[0x13].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x14].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x15].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
  this[0x16].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from custom/bastring.h */
  ppuVar6 = &((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0x18))->custom_deallocate;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,*ppuVar6,1);
    p_Var4 = (__vtbl_ptr_type *)pcVar7->__vtable;
    ppuVar6 = &((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0x18))->custom_deallocate;
  }
  ppuVar6[3] = (undefined *)0x1;
  if (1 < ppuVar6[2]) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,*ppuVar6,1);
    p_Var4 = (__vtbl_ptr_type *)pcVar7->__vtable;
  }
  ((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0xc))->custom_deallocate =
       &GRA3DVU1MEM_VF02;
  pcVar5 = (custom_allocator<sce_dirent>__vtable *)p_Var4;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0x18))->
                      custom_deallocate,1);
    pcVar5 = pcVar7->__vtable;
  }
  pcVar5[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  puVar1 = pcVar5[-2].custom_deallocate;
  if (&GRA3DVU1MEM_VF02 < pcVar5[-1].custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,puVar1,1);
    pcVar5 = pcVar7->__vtable;
  }
  pcVar5[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  replace__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUiUiUic
            (pcVar7,(int)p_Var4 - (int)pcVar5,puVar1 + ((int)&pcVar5->field_0x0 - (int)p_Var4),0,0);
  pcVar5 = pcVar7->__vtable;
  bVar2 = pcVar5[-1].custom_allocate < &GRA3DVU1MEM_DBADDRESS;
  psVar3 = (sce_dirent *)(uint)bVar2;
  if (!bVar2) {
    psVar3 = (sce_dirent *)
             alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
                       (pcVar7,pcVar5[-2].custom_deallocate,1);
    pcVar5 = pcVar7->__vtable;
  }
                    /* end of inlined section */
  pcVar5[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
                    /* end of inlined section */
  return psVar3;
}

char* CFindFile::CurrentDirectory() {
	basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> > *this;
	
  undefined *puVar1;
  bool bVar2;
  sce_dirent *psVar3;
  __vtbl_ptr_type *p_Var4;
  custom_allocator<sce_dirent>__vtable *pcVar5;
  undefined **ppuVar6;
  custom_allocator<sce_dirent> *pcVar7;
  char str [256];
  sce_dirent *__first;
  
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
  this[0x17].__vtable = (custom_allocator<sce_dirent>__vtable *)_vt_9CFindFile;
                    /* inlined from custom/bastring.h */
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var4 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var4 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep
                       (0x369d78);
  }
  this->__vtable = (custom_allocator<sce_dirent>__vtable *)p_Var4;
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var4 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var4 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep()
    ;
  }
  this[1].__vtable = (custom_allocator<sce_dirent>__vtable *)p_Var4;
  pcVar7 = this + 2;
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var4 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var4 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep()
    ;
  }
  pcVar7->__vtable = (custom_allocator<sce_dirent>__vtable *)p_Var4;
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[4].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[5].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[3].__vtable =
       (custom_allocator<sce_dirent>__vtable *)
       _vt_Q23ctlt16custom_allocator1Zt12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc
  ;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[6].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[8].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[9].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[10].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[7].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0xc].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[0xb].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0xd].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
  this[0xe].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x10].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[0xf].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x11].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
  this[0x12].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* end of inlined section */
                    /* inlined from ctl.h */
  this[0x13].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x14].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x15].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
  this[0x16].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from custom/bastring.h */
  ppuVar6 = &((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0x18))->custom_deallocate;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,*ppuVar6,1);
    p_Var4 = (__vtbl_ptr_type *)pcVar7->__vtable;
    ppuVar6 = &((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0x18))->custom_deallocate;
  }
  ppuVar6[3] = (undefined *)0x1;
  if (1 < ppuVar6[2]) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,*ppuVar6,1);
    p_Var4 = (__vtbl_ptr_type *)pcVar7->__vtable;
  }
  ((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0xc))->custom_deallocate =
       &GRA3DVU1MEM_VF02;
  pcVar5 = (custom_allocator<sce_dirent>__vtable *)p_Var4;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0x18))->
                      custom_deallocate,1);
    pcVar5 = pcVar7->__vtable;
  }
  pcVar5[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  puVar1 = pcVar5[-2].custom_deallocate;
  if (&GRA3DVU1MEM_VF02 < pcVar5[-1].custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,puVar1,1);
    pcVar5 = pcVar7->__vtable;
  }
  pcVar5[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  replace__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUiUiUic
            (pcVar7,(int)p_Var4 - (int)pcVar5,puVar1 + ((int)&pcVar5->field_0x0 - (int)p_Var4),0,0);
  pcVar5 = pcVar7->__vtable;
  bVar2 = pcVar5[-1].custom_allocate < &GRA3DVU1MEM_DBADDRESS;
  psVar3 = (sce_dirent *)(uint)bVar2;
  if (!bVar2) {
    psVar3 = (sce_dirent *)
             alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
                       (pcVar7,pcVar5[-2].custom_deallocate,1);
    pcVar5 = pcVar7->__vtable;
  }
                    /* end of inlined section */
  pcVar5[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
                    /* end of inlined section */
  return psVar3;
}

type_info& ctl::custom_allocator<char> type_info function() {
  undefined *puVar1;
  bool bVar2;
  sce_dirent *psVar3;
  __vtbl_ptr_type *p_Var4;
  custom_allocator<sce_dirent>__vtable *pcVar5;
  undefined **ppuVar6;
  custom_allocator<sce_dirent> *pcVar7;
  char str [256];
  sce_dirent *__first;
  
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
  this[0x17].__vtable = (custom_allocator<sce_dirent>__vtable *)_vt_9CFindFile;
                    /* inlined from custom/bastring.h */
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var4 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var4 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep
                       (0x369d78);
  }
  this->__vtable = (custom_allocator<sce_dirent>__vtable *)p_Var4;
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var4 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var4 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep()
    ;
  }
  this[1].__vtable = (custom_allocator<sce_dirent>__vtable *)p_Var4;
  pcVar7 = this + 2;
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var4 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var4 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep()
    ;
  }
  pcVar7->__vtable = (custom_allocator<sce_dirent>__vtable *)p_Var4;
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[4].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[5].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[3].__vtable =
       (custom_allocator<sce_dirent>__vtable *)
       _vt_Q23ctlt16custom_allocator1Zt12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc
  ;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[6].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[8].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[9].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[10].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[7].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0xc].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[0xb].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0xd].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
  this[0xe].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x10].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[0xf].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x11].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
  this[0x12].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* end of inlined section */
                    /* inlined from ctl.h */
  this[0x13].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x14].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x15].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
  this[0x16].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from custom/bastring.h */
  ppuVar6 = &((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0x18))->custom_deallocate;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,*ppuVar6,1);
    p_Var4 = (__vtbl_ptr_type *)pcVar7->__vtable;
    ppuVar6 = &((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0x18))->custom_deallocate;
  }
  ppuVar6[3] = (undefined *)0x1;
  if (1 < ppuVar6[2]) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,*ppuVar6,1);
    p_Var4 = (__vtbl_ptr_type *)pcVar7->__vtable;
  }
  ((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0xc))->custom_deallocate =
       &GRA3DVU1MEM_VF02;
  pcVar5 = (custom_allocator<sce_dirent>__vtable *)p_Var4;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0x18))->
                      custom_deallocate,1);
    pcVar5 = pcVar7->__vtable;
  }
  pcVar5[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  puVar1 = pcVar5[-2].custom_deallocate;
  if (&GRA3DVU1MEM_VF02 < pcVar5[-1].custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,puVar1,1);
    pcVar5 = pcVar7->__vtable;
  }
  pcVar5[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  replace__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUiUiUic
            (pcVar7,(int)p_Var4 - (int)pcVar5,puVar1 + ((int)&pcVar5->field_0x0 - (int)p_Var4),0,0);
  pcVar5 = pcVar7->__vtable;
  bVar2 = pcVar5[-1].custom_allocate < &GRA3DVU1MEM_DBADDRESS;
  psVar3 = (sce_dirent *)(uint)bVar2;
  if (!bVar2) {
    psVar3 = (sce_dirent *)
             alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
                       (pcVar7,pcVar5[-2].custom_deallocate,1);
    pcVar5 = pcVar7->__vtable;
  }
                    /* end of inlined section */
  pcVar5[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
                    /* end of inlined section */
  return psVar3;
}

void ctl::custom_allocator<char>::custom_deallocate(void *_Ptr) {
  undefined *puVar1;
  bool bVar2;
  sce_dirent *psVar3;
  __vtbl_ptr_type *p_Var4;
  custom_allocator<sce_dirent>__vtable *pcVar5;
  undefined **ppuVar6;
  custom_allocator<sce_dirent> *pcVar7;
  char str [256];
  sce_dirent *__first;
  
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
  this[0x17].__vtable = (custom_allocator<sce_dirent>__vtable *)_vt_9CFindFile;
                    /* inlined from custom/bastring.h */
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var4 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var4 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep
                       (0x369d78);
  }
  this->__vtable = (custom_allocator<sce_dirent>__vtable *)p_Var4;
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var4 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var4 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep()
    ;
  }
  this[1].__vtable = (custom_allocator<sce_dirent>__vtable *)p_Var4;
  pcVar7 = this + 2;
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var4 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var4 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep()
    ;
  }
  pcVar7->__vtable = (custom_allocator<sce_dirent>__vtable *)p_Var4;
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[4].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[5].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[3].__vtable =
       (custom_allocator<sce_dirent>__vtable *)
       _vt_Q23ctlt16custom_allocator1Zt12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc
  ;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[6].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[8].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[9].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[10].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[7].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0xc].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[0xb].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0xd].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
  this[0xe].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x10].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[0xf].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x11].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
  this[0x12].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* end of inlined section */
                    /* inlined from ctl.h */
  this[0x13].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x14].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x15].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
  this[0x16].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from custom/bastring.h */
  ppuVar6 = &((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0x18))->custom_deallocate;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,*ppuVar6,1);
    p_Var4 = (__vtbl_ptr_type *)pcVar7->__vtable;
    ppuVar6 = &((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0x18))->custom_deallocate;
  }
  ppuVar6[3] = (undefined *)0x1;
  if (1 < ppuVar6[2]) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,*ppuVar6,1);
    p_Var4 = (__vtbl_ptr_type *)pcVar7->__vtable;
  }
  ((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0xc))->custom_deallocate =
       &GRA3DVU1MEM_VF02;
  pcVar5 = (custom_allocator<sce_dirent>__vtable *)p_Var4;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0x18))->
                      custom_deallocate,1);
    pcVar5 = pcVar7->__vtable;
  }
  pcVar5[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  puVar1 = pcVar5[-2].custom_deallocate;
  if (&GRA3DVU1MEM_VF02 < pcVar5[-1].custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,puVar1,1);
    pcVar5 = pcVar7->__vtable;
  }
  pcVar5[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  replace__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUiUiUic
            (pcVar7,(int)p_Var4 - (int)pcVar5,puVar1 + ((int)&pcVar5->field_0x0 - (int)p_Var4),0,0);
  pcVar5 = pcVar7->__vtable;
  bVar2 = pcVar5[-1].custom_allocate < &GRA3DVU1MEM_DBADDRESS;
  psVar3 = (sce_dirent *)(uint)bVar2;
  if (!bVar2) {
    psVar3 = (sce_dirent *)
             alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
                       (pcVar7,pcVar5[-2].custom_deallocate,1);
    pcVar5 = pcVar7->__vtable;
  }
                    /* end of inlined section */
  pcVar5[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
                    /* end of inlined section */
  return psVar3;
}

void ctl::custom_allocator<basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> > >::custom_deallocate(void *_Ptr) {
  undefined *puVar1;
  bool bVar2;
  sce_dirent *psVar3;
  __vtbl_ptr_type *p_Var4;
  custom_allocator<sce_dirent>__vtable *pcVar5;
  undefined **ppuVar6;
  custom_allocator<sce_dirent> *pcVar7;
  char str [256];
  sce_dirent *__first;
  
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
  this[0x17].__vtable = (custom_allocator<sce_dirent>__vtable *)_vt_9CFindFile;
                    /* inlined from custom/bastring.h */
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var4 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var4 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep
                       (0x369d78);
  }
  this->__vtable = (custom_allocator<sce_dirent>__vtable *)p_Var4;
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var4 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var4 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep()
    ;
  }
  this[1].__vtable = (custom_allocator<sce_dirent>__vtable *)p_Var4;
  pcVar7 = this + 2;
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var4 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var4 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep()
    ;
  }
  pcVar7->__vtable = (custom_allocator<sce_dirent>__vtable *)p_Var4;
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[4].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[5].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[3].__vtable =
       (custom_allocator<sce_dirent>__vtable *)
       _vt_Q23ctlt16custom_allocator1Zt12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc
  ;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[6].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[8].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[9].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[10].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[7].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0xc].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[0xb].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0xd].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
  this[0xe].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x10].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[0xf].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x11].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
  this[0x12].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* end of inlined section */
                    /* inlined from ctl.h */
  this[0x13].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x14].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x15].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
  this[0x16].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from custom/bastring.h */
  ppuVar6 = &((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0x18))->custom_deallocate;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,*ppuVar6,1);
    p_Var4 = (__vtbl_ptr_type *)pcVar7->__vtable;
    ppuVar6 = &((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0x18))->custom_deallocate;
  }
  ppuVar6[3] = (undefined *)0x1;
  if (1 < ppuVar6[2]) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,*ppuVar6,1);
    p_Var4 = (__vtbl_ptr_type *)pcVar7->__vtable;
  }
  ((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0xc))->custom_deallocate =
       &GRA3DVU1MEM_VF02;
  pcVar5 = (custom_allocator<sce_dirent>__vtable *)p_Var4;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0x18))->
                      custom_deallocate,1);
    pcVar5 = pcVar7->__vtable;
  }
  pcVar5[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  puVar1 = pcVar5[-2].custom_deallocate;
  if (&GRA3DVU1MEM_VF02 < pcVar5[-1].custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,puVar1,1);
    pcVar5 = pcVar7->__vtable;
  }
  pcVar5[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  replace__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUiUiUic
            (pcVar7,(int)p_Var4 - (int)pcVar5,puVar1 + ((int)&pcVar5->field_0x0 - (int)p_Var4),0,0);
  pcVar5 = pcVar7->__vtable;
  bVar2 = pcVar5[-1].custom_allocate < &GRA3DVU1MEM_DBADDRESS;
  psVar3 = (sce_dirent *)(uint)bVar2;
  if (!bVar2) {
    psVar3 = (sce_dirent *)
             alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
                       (pcVar7,pcVar5[-2].custom_deallocate,1);
    pcVar5 = pcVar7->__vtable;
  }
                    /* end of inlined section */
  pcVar5[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
                    /* end of inlined section */
  return psVar3;
}

void ctl::custom_allocator<sce_dirent>::custom_deallocate(void *_Ptr) {
  undefined *puVar1;
  bool bVar2;
  sce_dirent *psVar3;
  __vtbl_ptr_type *p_Var4;
  custom_allocator<sce_dirent>__vtable *pcVar5;
  undefined **ppuVar6;
  custom_allocator<sce_dirent> *pcVar7;
  char str [256];
  sce_dirent *__first;
  
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
  this[0x17].__vtable = (custom_allocator<sce_dirent>__vtable *)_vt_9CFindFile;
                    /* inlined from custom/bastring.h */
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var4 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var4 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep
                       (0x369d78);
  }
  this->__vtable = (custom_allocator<sce_dirent>__vtable *)p_Var4;
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var4 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var4 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep()
    ;
  }
  this[1].__vtable = (custom_allocator<sce_dirent>__vtable *)p_Var4;
  pcVar7 = this + 2;
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var4 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var4 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep()
    ;
  }
  pcVar7->__vtable = (custom_allocator<sce_dirent>__vtable *)p_Var4;
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[4].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[5].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[3].__vtable =
       (custom_allocator<sce_dirent>__vtable *)
       _vt_Q23ctlt16custom_allocator1Zt12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc
  ;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[6].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[8].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[9].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[10].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[7].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0xc].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[0xb].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0xd].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
  this[0xe].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x10].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[0xf].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x11].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
  this[0x12].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* end of inlined section */
                    /* inlined from ctl.h */
  this[0x13].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x14].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x15].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
  this[0x16].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from custom/bastring.h */
  ppuVar6 = &((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0x18))->custom_deallocate;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,*ppuVar6,1);
    p_Var4 = (__vtbl_ptr_type *)pcVar7->__vtable;
    ppuVar6 = &((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0x18))->custom_deallocate;
  }
  ppuVar6[3] = (undefined *)0x1;
  if (1 < ppuVar6[2]) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,*ppuVar6,1);
    p_Var4 = (__vtbl_ptr_type *)pcVar7->__vtable;
  }
  ((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0xc))->custom_deallocate =
       &GRA3DVU1MEM_VF02;
  pcVar5 = (custom_allocator<sce_dirent>__vtable *)p_Var4;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0x18))->
                      custom_deallocate,1);
    pcVar5 = pcVar7->__vtable;
  }
  pcVar5[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  puVar1 = pcVar5[-2].custom_deallocate;
  if (&GRA3DVU1MEM_VF02 < pcVar5[-1].custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,puVar1,1);
    pcVar5 = pcVar7->__vtable;
  }
  pcVar5[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  replace__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUiUiUic
            (pcVar7,(int)p_Var4 - (int)pcVar5,puVar1 + ((int)&pcVar5->field_0x0 - (int)p_Var4),0,0);
  pcVar5 = pcVar7->__vtable;
  bVar2 = pcVar5[-1].custom_allocate < &GRA3DVU1MEM_DBADDRESS;
  psVar3 = (sce_dirent *)(uint)bVar2;
  if (!bVar2) {
    psVar3 = (sce_dirent *)
             alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
                       (pcVar7,pcVar5[-2].custom_deallocate,1);
    pcVar5 = pcVar7->__vtable;
  }
                    /* end of inlined section */
  pcVar5[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
                    /* end of inlined section */
  return psVar3;
}

char* ctl::custom_allocator<char>::custom_allocate(size_t _Count) {
  undefined *puVar1;
  bool bVar2;
  sce_dirent *psVar3;
  __vtbl_ptr_type *p_Var4;
  custom_allocator<sce_dirent>__vtable *pcVar5;
  undefined **ppuVar6;
  custom_allocator<sce_dirent> *pcVar7;
  char str [256];
  sce_dirent *__first;
  
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
  this[0x17].__vtable = (custom_allocator<sce_dirent>__vtable *)_vt_9CFindFile;
                    /* inlined from custom/bastring.h */
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var4 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var4 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep
                       (0x369d78);
  }
  this->__vtable = (custom_allocator<sce_dirent>__vtable *)p_Var4;
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var4 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var4 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep()
    ;
  }
  this[1].__vtable = (custom_allocator<sce_dirent>__vtable *)p_Var4;
  pcVar7 = this + 2;
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var4 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var4 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep()
    ;
  }
  pcVar7->__vtable = (custom_allocator<sce_dirent>__vtable *)p_Var4;
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[4].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[5].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[3].__vtable =
       (custom_allocator<sce_dirent>__vtable *)
       _vt_Q23ctlt16custom_allocator1Zt12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc
  ;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[6].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[8].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[9].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[10].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[7].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0xc].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[0xb].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0xd].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
  this[0xe].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x10].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[0xf].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x11].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
  this[0x12].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* end of inlined section */
                    /* inlined from ctl.h */
  this[0x13].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x14].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x15].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
  this[0x16].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from custom/bastring.h */
  ppuVar6 = &((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0x18))->custom_deallocate;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,*ppuVar6,1);
    p_Var4 = (__vtbl_ptr_type *)pcVar7->__vtable;
    ppuVar6 = &((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0x18))->custom_deallocate;
  }
  ppuVar6[3] = (undefined *)0x1;
  if (1 < ppuVar6[2]) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,*ppuVar6,1);
    p_Var4 = (__vtbl_ptr_type *)pcVar7->__vtable;
  }
  ((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0xc))->custom_deallocate =
       &GRA3DVU1MEM_VF02;
  pcVar5 = (custom_allocator<sce_dirent>__vtable *)p_Var4;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0x18))->
                      custom_deallocate,1);
    pcVar5 = pcVar7->__vtable;
  }
  pcVar5[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  puVar1 = pcVar5[-2].custom_deallocate;
  if (&GRA3DVU1MEM_VF02 < pcVar5[-1].custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,puVar1,1);
    pcVar5 = pcVar7->__vtable;
  }
  pcVar5[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  replace__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUiUiUic
            (pcVar7,(int)p_Var4 - (int)pcVar5,puVar1 + ((int)&pcVar5->field_0x0 - (int)p_Var4),0,0);
  pcVar5 = pcVar7->__vtable;
  bVar2 = pcVar5[-1].custom_allocate < &GRA3DVU1MEM_DBADDRESS;
  psVar3 = (sce_dirent *)(uint)bVar2;
  if (!bVar2) {
    psVar3 = (sce_dirent *)
             alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
                       (pcVar7,pcVar5[-2].custom_deallocate,1);
    pcVar5 = pcVar7->__vtable;
  }
                    /* end of inlined section */
  pcVar5[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
                    /* end of inlined section */
  return psVar3;
}

string* ctl::custom_allocator<basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> > >::custom_allocate(size_t _Count) {
  undefined *puVar1;
  bool bVar2;
  sce_dirent *psVar3;
  __vtbl_ptr_type *p_Var4;
  custom_allocator<sce_dirent>__vtable *pcVar5;
  undefined **ppuVar6;
  custom_allocator<sce_dirent> *pcVar7;
  char str [256];
  sce_dirent *__first;
  
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
  this[0x17].__vtable = (custom_allocator<sce_dirent>__vtable *)_vt_9CFindFile;
                    /* inlined from custom/bastring.h */
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var4 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var4 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep
                       (0x369d78);
  }
  this->__vtable = (custom_allocator<sce_dirent>__vtable *)p_Var4;
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var4 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var4 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep()
    ;
  }
  this[1].__vtable = (custom_allocator<sce_dirent>__vtable *)p_Var4;
  pcVar7 = this + 2;
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var4 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var4 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep()
    ;
  }
  pcVar7->__vtable = (custom_allocator<sce_dirent>__vtable *)p_Var4;
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[4].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[5].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[3].__vtable =
       (custom_allocator<sce_dirent>__vtable *)
       _vt_Q23ctlt16custom_allocator1Zt12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc
  ;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[6].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[8].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[9].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[10].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[7].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0xc].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[0xb].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0xd].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
  this[0xe].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x10].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[0xf].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x11].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
  this[0x12].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* end of inlined section */
                    /* inlined from ctl.h */
  this[0x13].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x14].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x15].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
  this[0x16].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from custom/bastring.h */
  ppuVar6 = &((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0x18))->custom_deallocate;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,*ppuVar6,1);
    p_Var4 = (__vtbl_ptr_type *)pcVar7->__vtable;
    ppuVar6 = &((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0x18))->custom_deallocate;
  }
  ppuVar6[3] = (undefined *)0x1;
  if (1 < ppuVar6[2]) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,*ppuVar6,1);
    p_Var4 = (__vtbl_ptr_type *)pcVar7->__vtable;
  }
  ((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0xc))->custom_deallocate =
       &GRA3DVU1MEM_VF02;
  pcVar5 = (custom_allocator<sce_dirent>__vtable *)p_Var4;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0x18))->
                      custom_deallocate,1);
    pcVar5 = pcVar7->__vtable;
  }
  pcVar5[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  puVar1 = pcVar5[-2].custom_deallocate;
  if (&GRA3DVU1MEM_VF02 < pcVar5[-1].custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,puVar1,1);
    pcVar5 = pcVar7->__vtable;
  }
  pcVar5[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  replace__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUiUiUic
            (pcVar7,(int)p_Var4 - (int)pcVar5,puVar1 + ((int)&pcVar5->field_0x0 - (int)p_Var4),0,0);
  pcVar5 = pcVar7->__vtable;
  bVar2 = pcVar5[-1].custom_allocate < &GRA3DVU1MEM_DBADDRESS;
  psVar3 = (sce_dirent *)(uint)bVar2;
  if (!bVar2) {
    psVar3 = (sce_dirent *)
             alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
                       (pcVar7,pcVar5[-2].custom_deallocate,1);
    pcVar5 = pcVar7->__vtable;
  }
                    /* end of inlined section */
  pcVar5[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
                    /* end of inlined section */
  return psVar3;
}

sce_dirent* ctl::custom_allocator<sce_dirent>::custom_allocate(size_t _Count) {
  undefined *puVar1;
  bool bVar2;
  sce_dirent *psVar3;
  __vtbl_ptr_type *p_Var4;
  custom_allocator<sce_dirent>__vtable *pcVar5;
  undefined **ppuVar6;
  custom_allocator<sce_dirent> *pcVar7;
  char str [256];
  sce_dirent *__first;
  
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
  this[0x17].__vtable = (custom_allocator<sce_dirent>__vtable *)_vt_9CFindFile;
                    /* inlined from custom/bastring.h */
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var4 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var4 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep
                       (0x369d78);
  }
  this->__vtable = (custom_allocator<sce_dirent>__vtable *)p_Var4;
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var4 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var4 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep()
    ;
  }
  this[1].__vtable = (custom_allocator<sce_dirent>__vtable *)p_Var4;
  pcVar7 = this + 2;
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var4 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var4 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep()
    ;
  }
  pcVar7->__vtable = (custom_allocator<sce_dirent>__vtable *)p_Var4;
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[4].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[5].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[3].__vtable =
       (custom_allocator<sce_dirent>__vtable *)
       _vt_Q23ctlt16custom_allocator1Zt12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc
  ;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[6].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[8].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[9].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[10].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[7].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0xc].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[0xb].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0xd].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
  this[0xe].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* end of inlined section */
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x10].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
  this[0xf].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x11].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
  this[0x12].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* end of inlined section */
                    /* inlined from ctl.h */
  this[0x13].__vtable =
       (custom_allocator<sce_dirent>__vtable *)_vt_Q23ctlt16custom_allocator1Z10sce_dirent;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x14].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from ctl.h */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_vector.h */
  this[0x15].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
  this[0x16].__vtable = (custom_allocator<sce_dirent>__vtable *)0x0;
                    /* inlined from custom/bastring.h */
  ppuVar6 = &((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0x18))->custom_deallocate;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,*ppuVar6,1);
    p_Var4 = (__vtbl_ptr_type *)pcVar7->__vtable;
    ppuVar6 = &((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0x18))->custom_deallocate;
  }
  ppuVar6[3] = (undefined *)0x1;
  if (1 < ppuVar6[2]) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,*ppuVar6,1);
    p_Var4 = (__vtbl_ptr_type *)pcVar7->__vtable;
  }
  ((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0xc))->custom_deallocate =
       &GRA3DVU1MEM_VF02;
  pcVar5 = (custom_allocator<sce_dirent>__vtable *)p_Var4;
  if (&GRA3DVU1MEM_VF02 <
      ((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0xc))->custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,((custom_allocator<sce_dirent>__vtable *)((int)p_Var4 + -0x18))->
                      custom_deallocate,1);
    pcVar5 = pcVar7->__vtable;
  }
  pcVar5[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  puVar1 = pcVar5[-2].custom_deallocate;
  if (&GRA3DVU1MEM_VF02 < pcVar5[-1].custom_allocate) {
    alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
              (pcVar7,puVar1,1);
    pcVar5 = pcVar7->__vtable;
  }
  pcVar5[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
  replace__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUiUiUic
            (pcVar7,(int)p_Var4 - (int)pcVar5,puVar1 + ((int)&pcVar5->field_0x0 - (int)p_Var4),0,0);
  pcVar5 = pcVar7->__vtable;
  bVar2 = pcVar5[-1].custom_allocate < &GRA3DVU1MEM_DBADDRESS;
  psVar3 = (sce_dirent *)(uint)bVar2;
  if (!bVar2) {
    psVar3 = (sce_dirent *)
             alloc__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUib
                       (pcVar7,pcVar5[-2].custom_deallocate,1);
    pcVar5 = pcVar7->__vtable;
  }
                    /* end of inlined section */
  pcVar5[-1].custom_deallocate = &GRA3DVU1MEM_VF02;
                    /* end of inlined section */
  return psVar3;
}
