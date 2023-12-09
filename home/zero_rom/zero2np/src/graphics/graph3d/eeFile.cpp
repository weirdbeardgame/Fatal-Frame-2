// STATUS: NOT STARTED

#include "eeFile.h"

struct CStdioFile : CFile {
	CStdioFile& operator=();
	CStdioFile();
	CStdioFile();
	/* vtable[1] */ virtual CStdioFile();
	/* vtable[5] */ virtual void WriteString(char *lpsz);
	/* vtable[6] */ virtual char* ReadString(char *lpsz, unsigned int nMax);
};

struct CFile {
protected:
	string m_strError;
private:
	int m_iHandle;
	sce_stat m_Status;
	char m_strFileName[260];
public:
	__vtbl_ptr_type *__vtable;
	
	CFile& operator=();
	CFile();
protected:
	int OnError(char *pStr);
public:
	char* ErrorString();
	CFile();
	/* vtable[1] */ virtual CFile();
	int Open(char *pFileName, unsigned int uiOpenFlags);
	unsigned int Read(void *lpBuf, unsigned int uiCount);
	int Write(void *lpBuf, unsigned int uiCount);
	void Close();
	int Seek(int iOffset, int iFrom);
	unsigned int GetLength();
	unsigned int SeekToEnd();
	void SeekToBegin();
	/* vtable[2] */ virtual string GetFileName();
	/* vtable[3] */ virtual string GetFileTitle();
	/* vtable[4] */ virtual string GetFilePath();
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

__vtbl_ptr_type CFileName virtual table[3] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ 0x2b1430,
		/* .__delta2 = */ 5168
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ 0x2b1480,
		/* .__delta2 = */ 5248
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type CStdioFile virtual table[8] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ 0x2b1348,
		/* .__delta2 = */ 4936
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ 0x2b13c8,
		/* .__delta2 = */ 5064
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ CFile::GetFileName,
		/* .__delta2 = */ -27200
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ CFile::GetFileTitle,
		/* .__delta2 = */ -24136
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ CFile::GetFilePath,
		/* .__delta2 = */ -21072
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ CStdioFile::WriteString,
		/* .__delta2 = */ -20936
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ CStdioFile::ReadString,
		/* .__delta2 = */ -20928
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type CFile virtual table[6] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ 0x2b1248,
		/* .__delta2 = */ 4680
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ CFile::~CFile,
		/* .__delta2 = */ -28432
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ CFile::GetFileName,
		/* .__delta2 = */ -27200
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ CFile::GetFileTitle,
		/* .__delta2 = */ -24136
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ CFile::GetFilePath,
		/* .__delta2 = */ -21072
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

unsigned char CFile type_info node[8];
unsigned char CStdioFile type_info node[12];
unsigned char CFileName type_info node[12];
unsigned char ctl::custom_allocator<char> type_info node[8];
unsigned char basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> > type_info node[8];
size_t basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> >::npos = 65535;

CFile* CFile::CFile() {
  bool bVar1;
  __vtbl_ptr_type *p_Var2;
  custom_allocator<char>__vtable *pcVar3;
  char str [256];
  
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
  bVar1 = _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ ==
          0;
  this[0x53].__vtable = (custom_allocator<char>__vtable *)_vt_5CFile;
  if (bVar1) {
    p_Var2 = _vt_Q23ctlt16custom_allocator1Zc;
    pcVar3 = (custom_allocator<char>__vtable *)
             (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref +
             1);
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         (uint)pcVar3;
  }
  else {
    p_Var2 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep
                       (0x369d78);
    pcVar3 = (custom_allocator<char>__vtable *)p_Var2;
  }
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
  this->__vtable = (custom_allocator<char>__vtable *)p_Var2;
                    /* end of inlined section */
  this[1].__vtable = (custom_allocator<char>__vtable *)&_heap_size;
  return (type_info *)pcVar3;
}

void CFile::~CFile(int __in_chrg) {
  char *pcVar1;
  int iVar2;
  __vtbl_ptr_type *local_30;
  
  this->__vtable = (CFile__vtable *)_vt_5CFile;
  Close__5CFile(this);
                    /* inlined from ctl.h */
                    /* inlined from custom/bastring.h */
  pcVar1 = (this->m_strError).dat;
                    /* inlined from ctl.h */
                    /* inlined from custom/bastring.h */
  iVar2 = *(int *)(pcVar1 + -8);
                    /* inlined from ctl.h */
                    /* inlined from custom/bastring.h */
  *(int *)(pcVar1 + -8) = iVar2 + -1;
  if (iVar2 + -1 == 0) {
                    /* inlined from ctl.h */
    local_30 = _vt_Q23ctlt16custom_allocator1Zc;
    (*(code *)_vt_Q23ctlt16custom_allocator1Zc[2]._4_4_)
              ((int)&local_30 + (int)(short)_vt_Q23ctlt16custom_allocator1Zc[2].__delta,
               pcVar1 + -0x10);
  }
                    /* end of inlined section */
  if ((__in_chrg & 1U) != 0) {
    __builtin_delete(this);
  }
  return;
}

int CFile::Open(char *pFileName, unsigned int uiOpenFlags) {
	int iFlag;
	int iRW;
	
  int iVar1;
  char *pcVar2;
  uint uVar3;
  uint flag;
  
  uVar3 = 0;
  if ((uiOpenFlags & 3) == 0) {
    uVar3 = 1;
  }
  else {
    if ((uiOpenFlags & 3) != 1) {
      flag = 0x200;
      goto LAB_001391c8;
    }
    uVar3 = 2;
  }
  flag = uVar3 | 0x200;
LAB_001391c8:
  if ((uiOpenFlags & 0x1000) == 0) {
    flag = uVar3;
  }
  iVar1 = sceOpen(pFileName,flag);
  this->m_iHandle = iVar1;
  if (iVar1 < 0) {
                    /* inlined from IError.h */
    if (iVar1 < 0) {
      iVar1 = -iVar1;
    }
    pcVar2 = strerror(iVar1);
    iVar1 = OnError__5CFilePCce(this,pcVar2);
    return iVar1;
  }
                    /* end of inlined section */
  strcpy(this->m_strFileName,pFileName);
  return 1;
}

unsigned int CFile::Read(void *lpBuf, unsigned int uiCount) {
	static char __FUNCTION__[5] = {
		/* [0] = */ 82,
		/* [1] = */ 101,
		/* [2] = */ 97,
		/* [3] = */ 100,
		/* [4] = */ 0
	};
	int iBytesRead;
	
  uint uVar1;
  char *pcVar2;
  int iVar3;
  
  iVar3 = this->m_iHandle;
  if (iVar3 < 0) {
    _SetLineInfo__FPCciT0T0("eeFile.cpp",0x8b,(char *)&__FUNCTION___898,"m_iHandle >= 0");
    iVar3 = this->m_iHandle;
    if (iVar3 < 0) {
      iVar3 = -iVar3;
    }
    strerror(iVar3);
    g3ddbgAssert__FbPCce
              ((bool)((byte)~(byte)((uint)this->m_iHandle >> 0x18) >> 7),"m_iHandle:%d(%s)");
    iVar3 = this->m_iHandle;
  }
  uVar1 = sceRead(iVar3,lpBuf,uiCount);
  if ((int)uVar1 < 0) {
    pcVar2 = strerror(-uVar1);
    OnError__5CFilePCce(this,pcVar2);
  }
  return uVar1;
}

int CFile::Write(void *lpBuf, unsigned int uiCount) {
	static char __FUNCTION__[6] = {
		/* [0] = */ 87,
		/* [1] = */ 114,
		/* [2] = */ 105,
		/* [3] = */ 116,
		/* [4] = */ 101,
		/* [5] = */ 0
	};
	int iBytesRead;
	
  int iVar1;
  char *pcVar2;
  int iVar3;
  
  iVar3 = this->m_iHandle;
  if (iVar3 < 0) {
    _SetLineInfo__FPCciT0T0("eeFile.cpp",0x9c,__FUNCTION___901,"m_iHandle >= 0");
    iVar3 = this->m_iHandle;
    if (iVar3 < 0) {
      iVar3 = -iVar3;
    }
    strerror(iVar3);
    g3ddbgAssert__FbPCce
              ((bool)((byte)~(byte)((uint)this->m_iHandle >> 0x18) >> 7),"m_iHandle:%d(%s)");
    iVar3 = this->m_iHandle;
  }
  iVar1 = sceWrite(iVar3,lpBuf,uiCount);
                    /* inlined from IError.h */
  iVar3 = iVar1;
  if (iVar1 < 0) {
    iVar3 = -iVar1;
  }
                    /* end of inlined section */
  if (-1 < iVar1) {
                    /* end of inlined section */
    return (int)(iVar1 != 0);
  }
                    /* inlined from IError.h */
  pcVar2 = strerror(iVar3);
  iVar3 = OnError__5CFilePCce(this,pcVar2);
  return iVar3;
}

void CFile::Close() {
  if (this->m_iHandle != -1) {
    sceClose(this->m_iHandle);
    this->m_iHandle = -1;
  }
  return;
}

int CFile::Seek(int iOffset, int iFrom) {
	static char __FUNCTION__[5] = {
		/* [0] = */ 83,
		/* [1] = */ 101,
		/* [2] = */ 101,
		/* [3] = */ 107,
		/* [4] = */ 0
	};
	
  int iVar1;
  
  iVar1 = this->m_iHandle;
  if (iVar1 < 0) {
    _SetLineInfo__FPCciT0T0("eeFile.cpp",0xbd,(char *)&__FUNCTION___907,"m_iHandle >= 0");
    iVar1 = this->m_iHandle;
    if (iVar1 < 0) {
      iVar1 = -iVar1;
    }
    strerror(iVar1);
    g3ddbgAssert__FbPCce
              ((bool)((byte)~(byte)((uint)this->m_iHandle >> 0x18) >> 7),"m_iHandle:%d(%s)");
    iVar1 = this->m_iHandle;
  }
  iVar1 = sceLseek(iVar1,iOffset,iFrom);
  return iVar1;
}

unsigned int CFile::GetLength() {
	static char __FUNCTION__[10] = {
		/* [0] = */ 71,
		/* [1] = */ 101,
		/* [2] = */ 116,
		/* [3] = */ 76,
		/* [4] = */ 101,
		/* [5] = */ 110,
		/* [6] = */ 103,
		/* [7] = */ 116,
		/* [8] = */ 104,
		/* [9] = */ 0
	};
	int iCurPos;
	int iLength;
	
  int iVar1;
  uint uVar2;
  
  iVar1 = this->m_iHandle;
  if (iVar1 < 0) {
    _SetLineInfo__FPCciT0T0("eeFile.cpp",200,"GetLength","m_iHandle >= 0");
    iVar1 = this->m_iHandle;
    if (iVar1 < 0) {
      iVar1 = -iVar1;
    }
    strerror(iVar1);
    g3ddbgAssert__FbPCce
              ((bool)((byte)~(byte)((uint)this->m_iHandle >> 0x18) >> 7),"m_iHandle:%d(%s)");
    iVar1 = this->m_iHandle;
  }
  iVar1 = sceLseek(iVar1,0,1);
  uVar2 = sceLseek(this->m_iHandle,0,2);
  sceLseek(this->m_iHandle,iVar1,0);
  return uVar2;
}

unsigned int CFile::SeekToEnd() {
  uint uVar1;
  
  uVar1 = Seek__5CFileii(this,0,2);
  return uVar1;
}

void CFile::SeekToBegin() {
  Seek__5CFileii(this,0,0);
  return;
}

string CFile::GetFileName() {
	CFileName fn;
	CFileName *this;
	char *pStr;
	basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> > *this;
	basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> > *this;
	basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> > *this;
	basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> > *this;
	basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> > *this;
	basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> > *this;
	basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> > *this;
	basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> > *this;
	CFileName *this;
	char strDrive[260];
	char strDir[260];
	char strFile[260];
	char strExt[260];
	char *pColon;
	char *pLastSlash;
	char *pLastYen;
	char *pLastSep;
	char *pDot;
	int iLen;
	char *strTop;
	int iLen;
	char *pFnameTop;
	int iLen;
	basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> > *this;
	basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> > *this;
	basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> > *this;
	basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> > *this;
	basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> > *this;
	Rep *this;
	basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> > *this;
	Rep *this;
	
  int iVar1;
  __vtbl_ptr_type *p_Var2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  size_t sVar6;
  int in_a1_lo;
  basic_string<char,string_char_traits<char>,ctl::custom_allocator<char>_> bVar7;
  CFileName fn;
  char strDrive [260];
  char strDir [260];
  char strFile [260];
  char strExt [260];
  __vtbl_ptr_type *local_180;
  __vtbl_ptr_type *local_170;
  __vtbl_ptr_type *local_e0;
  __vtbl_ptr_type *local_d0;
  __vtbl_ptr_type *local_c0;
  __vtbl_ptr_type *local_b0;
  __vtbl_ptr_type *local_a0;
  __vtbl_ptr_type *local_90;
  __vtbl_ptr_type *local_80;
  __vtbl_ptr_type *local_70;
  CFile *local_60;
  
                    /* inlined from CFileName.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
  local_60 = this;
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var2 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var2 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep()
    ;
  }
  fn.field0_0x0.dat = (char *)p_Var2;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/std/straits.h */
  sVar6 = strlen((char *)(in_a1_lo + 0x48));
                    /* inlined from custom/bastring.h */
  replace__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUiUiPCcUi
            (&fn,0,0xffffffffffffffff,(char *)(in_a1_lo + 0x48),sVar6);
                    /* inlined from CFileName.h */
                    /* inlined from custom/bastring.h */
                    /* inlined from custom/bastring.h */
  fn.__vtable = (CFileName__vtable *)_vt_9CFileName;
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var2 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var2 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep()
    ;
  }
  fn.m_strDrive.dat = (char *)p_Var2;
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var2 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var2 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep()
    ;
  }
  fn.m_strDir.dat = (char *)p_Var2;
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var2 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var2 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep()
    ;
  }
  fn.m_strFile.dat = (char *)p_Var2;
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var2 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var2 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep()
    ;
  }
  fn.m_strExt.dat = (char *)p_Var2;
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var2 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var2 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep()
    ;
  }
  fn.m_strDriveDir.dat = (char *)p_Var2;
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var2 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var2 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep()
    ;
  }
  fn.m_strParentDir.dat = (char *)p_Var2;
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var2 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var2 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep()
    ;
  }
                    /* inlined from CFileName.h */
  fn.m_strFileExt.dat = (char *)p_Var2;
  memset(strDrive,0,0x104);
  memset(strDir,0,0x104);
  memset(strFile,0,0x104);
  memset(strExt,0,0x104);
                    /* inlined from custom/bastring.h */
  if (*(int *)(fn.field0_0x0.dat + -0x10) == 0) {
    bVar7.dat = "";
  }
  else {
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/std/straits.h */
    fn.field0_0x0.dat[*(int *)(fn.field0_0x0.dat + -0x10)] = '\0';
                    /* inlined from custom/bastring.h */
    bVar7 = fn.field0_0x0;
  }
                    /* inlined from custom/stdlib.h */
  pcVar3 = strrchr(bVar7.dat,0x3a);
  strDrive[0] = '\0';
  if (pcVar3 != (char *)0x0) {
    strncpy(strDrive,bVar7.dat,(long)(int)(pcVar3 + (1 - (int)bVar7.dat)));
  }
  pcVar4 = strrchr(bVar7.dat,0x2f);
  pcVar5 = strrchr(bVar7.dat,0x5c);
  if ((int)pcVar4 <= (int)pcVar5) {
    pcVar4 = pcVar5;
  }
  pcVar5 = bVar7.dat;
  if (pcVar3 != (char *)0x0) {
    pcVar5 = pcVar3 + 1;
  }
  sVar6 = 0;
  if (pcVar4 != (char *)0x0) {
    sVar6 = (long)((int)pcVar4 - (int)pcVar5);
  }
  strDir[0] = '\0';
  if (0 < (long)sVar6) {
    strncpy(strDir,pcVar5,sVar6);
    strcat(strDir,&DAT_003efbd8);
  }
  pcVar3 = strrchr(bVar7.dat,0x2e);
  if (strFile != (char *)0x0) {
    strFile[0] = '\0';
    if (pcVar4 != (char *)0x0) {
      bVar7.dat = pcVar4 + 1;
    }
    sVar6 = (size_t)((int)pcVar3 - (int)bVar7.dat);
    if (pcVar3 == (char *)0x0) {
      sVar6 = strlen(bVar7.dat);
    }
    strncpy(strFile,bVar7.dat,sVar6);
  }
  if ((strExt != (char *)0x0) && (strExt[0] = '\0', pcVar3 != (char *)0x0)) {
    strcpy(strExt,pcVar3);
  }
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/std/straits.h */
  sVar6 = strlen(strDrive);
                    /* inlined from custom/bastring.h */
  replace__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUiUiPCcUi
            (&fn.m_strDrive,0,0xffffffffffffffff,strDrive,sVar6);
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/std/straits.h */
  sVar6 = strlen(strDir);
                    /* inlined from custom/bastring.h */
  replace__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUiUiPCcUi
            (&fn.m_strDir,0,0xffffffffffffffff,strDir,sVar6);
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/std/straits.h */
  sVar6 = strlen(strFile);
                    /* inlined from custom/bastring.h */
  replace__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUiUiPCcUi
            (&fn.m_strFile,0,0xffffffffffffffff,strFile,sVar6);
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/std/straits.h */
  sVar6 = strlen(strExt);
                    /* inlined from custom/bastring.h */
  replace__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUiUiPCcUi
            (&fn.m_strExt,0,0xffffffffffffffff,strExt,sVar6);
  if (&fn.m_strDrive != &fn.m_strDriveDir) {
    iVar1 = *(int *)(fn.m_strDriveDir.dat + -8);
    *(int *)(fn.m_strDriveDir.dat + -8) = iVar1 + -1;
    if (iVar1 + -1 == 0) {
                    /* inlined from ctl.h */
      local_180 = _vt_Q23ctlt16custom_allocator1Zc;
      (*(code *)_vt_Q23ctlt16custom_allocator1Zc[2]._4_4_)
                ((int)&local_180 + (int)(short)_vt_Q23ctlt16custom_allocator1Zc[2].__delta);
    }
                    /* inlined from custom/bastring.h */
    if (*(int *)(fn.m_strDrive.dat + -4) == 0) {
      *(int *)(fn.m_strDrive.dat + -8) = *(int *)(fn.m_strDrive.dat + -8) + 1;
      fn.m_strDriveDir.dat = fn.m_strDrive.dat;
    }
    else {
      fn.m_strDriveDir.dat =
           (char *)clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep
                             ();
    }
  }
  replace__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUiUiRCt12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUiUi
            (&fn.m_strDriveDir,*(undefined4 *)(fn.m_strDriveDir.dat + -0x10),0,&fn.m_strDir,0,
             0xffffffffffffffff);
  if (&fn.m_strFile != &fn.m_strFileExt) {
    iVar1 = *(int *)(fn.m_strFileExt.dat + -8);
    *(int *)(fn.m_strFileExt.dat + -8) = iVar1 + -1;
    if (iVar1 + -1 == 0) {
                    /* inlined from ctl.h */
      local_170 = _vt_Q23ctlt16custom_allocator1Zc;
      (*(code *)_vt_Q23ctlt16custom_allocator1Zc[2]._4_4_)
                ((int)&local_170 + (int)(short)_vt_Q23ctlt16custom_allocator1Zc[2].__delta);
    }
                    /* inlined from custom/bastring.h */
    if (*(int *)(fn.m_strFile.dat + -4) == 0) {
      *(int *)(fn.m_strFile.dat + -8) = *(int *)(fn.m_strFile.dat + -8) + 1;
      fn.m_strFileExt.dat = fn.m_strFile.dat;
    }
    else {
      fn.m_strFileExt.dat =
           (char *)clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep
                             ();
    }
  }
  replace__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUiUiRCt12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUiUi
            (&fn.m_strFileExt,*(undefined4 *)(fn.m_strFileExt.dat + -0x10),0,&fn.m_strExt,0,
             0xffffffffffffffff);
  if (*(int *)(fn.m_strFileExt.dat + -0x10) == 0) {
    bVar7.dat = "";
  }
  else {
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/std/straits.h */
    fn.m_strFileExt.dat[*(int *)(fn.m_strFileExt.dat + -0x10)] = '\0';
                    /* inlined from custom/bastring.h */
    bVar7 = fn.m_strFileExt;
  }
                    /* inlined from custom/bastring.h */
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var2 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var2 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep()
    ;
  }
  (local_60->m_strError).dat = (char *)p_Var2;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/std/straits.h */
  sVar6 = strlen(bVar7.dat);
                    /* inlined from custom/bastring.h */
  replace__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUiUiPCcUi
            (local_60,0,0xffffffffffffffff,bVar7.dat,sVar6);
  fn.__vtable = (CFileName__vtable *)_vt_9CFileName;
  iVar1 = *(int *)(fn.m_strFileExt.dat + -8);
  *(int *)(fn.m_strFileExt.dat + -8) = iVar1 + -1;
  if (iVar1 + -1 == 0) {
                    /* inlined from ctl.h */
    local_e0 = _vt_Q23ctlt16custom_allocator1Zc;
    (*(code *)_vt_Q23ctlt16custom_allocator1Zc[2]._4_4_)
              ((int)&local_e0 + (int)(short)_vt_Q23ctlt16custom_allocator1Zc[2].__delta);
  }
                    /* inlined from custom/bastring.h */
  iVar1 = *(int *)(fn.m_strParentDir.dat + -8);
  *(int *)(fn.m_strParentDir.dat + -8) = iVar1 + -1;
  if (iVar1 + -1 == 0) {
                    /* inlined from ctl.h */
    local_d0 = _vt_Q23ctlt16custom_allocator1Zc;
    (*(code *)_vt_Q23ctlt16custom_allocator1Zc[2]._4_4_)
              ((int)&local_d0 + (int)(short)_vt_Q23ctlt16custom_allocator1Zc[2].__delta);
  }
                    /* inlined from custom/bastring.h */
  iVar1 = *(int *)(fn.m_strDriveDir.dat + -8);
  *(int *)(fn.m_strDriveDir.dat + -8) = iVar1 + -1;
  if (iVar1 + -1 == 0) {
                    /* inlined from ctl.h */
    local_c0 = _vt_Q23ctlt16custom_allocator1Zc;
    (*(code *)_vt_Q23ctlt16custom_allocator1Zc[2]._4_4_)
              ((int)&local_c0 + (int)(short)_vt_Q23ctlt16custom_allocator1Zc[2].__delta);
  }
                    /* inlined from custom/bastring.h */
  iVar1 = *(int *)(fn.m_strExt.dat + -8);
  *(int *)(fn.m_strExt.dat + -8) = iVar1 + -1;
  if (iVar1 + -1 == 0) {
                    /* inlined from ctl.h */
    local_b0 = _vt_Q23ctlt16custom_allocator1Zc;
    (*(code *)_vt_Q23ctlt16custom_allocator1Zc[2]._4_4_)
              ((int)&local_b0 + (int)(short)_vt_Q23ctlt16custom_allocator1Zc[2].__delta);
  }
                    /* inlined from custom/bastring.h */
  iVar1 = *(int *)(fn.m_strFile.dat + -8);
  *(int *)(fn.m_strFile.dat + -8) = iVar1 + -1;
  if (iVar1 + -1 == 0) {
                    /* inlined from ctl.h */
    local_a0 = _vt_Q23ctlt16custom_allocator1Zc;
    (*(code *)_vt_Q23ctlt16custom_allocator1Zc[2]._4_4_)
              ((int)&local_a0 + (int)(short)_vt_Q23ctlt16custom_allocator1Zc[2].__delta);
  }
                    /* inlined from custom/bastring.h */
  iVar1 = *(int *)(fn.m_strDir.dat + -8);
  *(int *)(fn.m_strDir.dat + -8) = iVar1 + -1;
  if (iVar1 + -1 == 0) {
                    /* inlined from ctl.h */
    local_90 = _vt_Q23ctlt16custom_allocator1Zc;
    (*(code *)_vt_Q23ctlt16custom_allocator1Zc[2]._4_4_)
              ((int)&local_90 + (int)(short)_vt_Q23ctlt16custom_allocator1Zc[2].__delta);
  }
                    /* inlined from custom/bastring.h */
  iVar1 = *(int *)(fn.m_strDrive.dat + -8);
  *(int *)(fn.m_strDrive.dat + -8) = iVar1 + -1;
  if (iVar1 + -1 == 0) {
                    /* inlined from ctl.h */
    local_80 = _vt_Q23ctlt16custom_allocator1Zc;
    (*(code *)_vt_Q23ctlt16custom_allocator1Zc[2]._4_4_)
              ((int)&local_80 + (int)(short)_vt_Q23ctlt16custom_allocator1Zc[2].__delta);
  }
                    /* inlined from custom/bastring.h */
  iVar1 = *(int *)(fn.field0_0x0.dat + -8);
  *(int *)(fn.field0_0x0.dat + -8) = iVar1 + -1;
  if (iVar1 + -1 == 0) {
                    /* inlined from ctl.h */
    local_70 = _vt_Q23ctlt16custom_allocator1Zc;
    (*(code *)_vt_Q23ctlt16custom_allocator1Zc[2]._4_4_)
              ((int)&local_70 + (int)(short)_vt_Q23ctlt16custom_allocator1Zc[2].__delta);
                    /* inlined from CFileName.h */
  }
  return (basic_string<char,string_char_traits<char>,ctl::custom_allocator<char>_>)(char *)local_60;
}

string CFile::GetFileTitle() {
	CFileName fn;
	CFileName *this;
	char *pStr;
	basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> > *this;
	basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> > *this;
	basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> > *this;
	basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> > *this;
	basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> > *this;
	basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> > *this;
	basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> > *this;
	basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> > *this;
	CFileName *this;
	char strDrive[260];
	char strDir[260];
	char strFile[260];
	char strExt[260];
	char *pColon;
	char *pLastSlash;
	char *pLastYen;
	char *pLastSep;
	char *pDot;
	int iLen;
	char *strTop;
	int iLen;
	char *pFnameTop;
	int iLen;
	basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> > *this;
	basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> > *this;
	basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> > *this;
	basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> > *this;
	basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> > *this;
	Rep *this;
	basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> > *this;
	Rep *this;
	
  int iVar1;
  __vtbl_ptr_type *p_Var2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  size_t sVar6;
  int in_a1_lo;
  basic_string<char,string_char_traits<char>,ctl::custom_allocator<char>_> bVar7;
  CFileName fn;
  char strDrive [260];
  char strDir [260];
  char strFile [260];
  char strExt [260];
  __vtbl_ptr_type *local_180;
  __vtbl_ptr_type *local_170;
  __vtbl_ptr_type *local_e0;
  __vtbl_ptr_type *local_d0;
  __vtbl_ptr_type *local_c0;
  __vtbl_ptr_type *local_b0;
  __vtbl_ptr_type *local_a0;
  __vtbl_ptr_type *local_90;
  __vtbl_ptr_type *local_80;
  __vtbl_ptr_type *local_70;
  CFile *local_60;
  
                    /* inlined from CFileName.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
  local_60 = this;
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var2 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var2 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep()
    ;
  }
  fn.field0_0x0.dat = (char *)p_Var2;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/std/straits.h */
  sVar6 = strlen((char *)(in_a1_lo + 0x48));
                    /* inlined from custom/bastring.h */
  replace__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUiUiPCcUi
            (&fn,0,0xffffffffffffffff,(char *)(in_a1_lo + 0x48),sVar6);
                    /* inlined from CFileName.h */
                    /* inlined from custom/bastring.h */
                    /* inlined from custom/bastring.h */
  fn.__vtable = (CFileName__vtable *)_vt_9CFileName;
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var2 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var2 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep()
    ;
  }
  fn.m_strDrive.dat = (char *)p_Var2;
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var2 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var2 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep()
    ;
  }
  fn.m_strDir.dat = (char *)p_Var2;
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var2 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var2 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep()
    ;
  }
  fn.m_strFile.dat = (char *)p_Var2;
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var2 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var2 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep()
    ;
  }
  fn.m_strExt.dat = (char *)p_Var2;
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var2 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var2 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep()
    ;
  }
  fn.m_strDriveDir.dat = (char *)p_Var2;
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var2 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var2 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep()
    ;
  }
  fn.m_strParentDir.dat = (char *)p_Var2;
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var2 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var2 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep()
    ;
  }
                    /* inlined from CFileName.h */
  fn.m_strFileExt.dat = (char *)p_Var2;
  memset(strDrive,0,0x104);
  memset(strDir,0,0x104);
  memset(strFile,0,0x104);
  memset(strExt,0,0x104);
                    /* inlined from custom/bastring.h */
  if (*(int *)(fn.field0_0x0.dat + -0x10) == 0) {
    bVar7.dat = "";
  }
  else {
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/std/straits.h */
    fn.field0_0x0.dat[*(int *)(fn.field0_0x0.dat + -0x10)] = '\0';
                    /* inlined from custom/bastring.h */
    bVar7 = fn.field0_0x0;
  }
                    /* inlined from custom/stdlib.h */
  pcVar3 = strrchr(bVar7.dat,0x3a);
  strDrive[0] = '\0';
  if (pcVar3 != (char *)0x0) {
    strncpy(strDrive,bVar7.dat,(long)(int)(pcVar3 + (1 - (int)bVar7.dat)));
  }
  pcVar4 = strrchr(bVar7.dat,0x2f);
  pcVar5 = strrchr(bVar7.dat,0x5c);
  if ((int)pcVar4 <= (int)pcVar5) {
    pcVar4 = pcVar5;
  }
  pcVar5 = bVar7.dat;
  if (pcVar3 != (char *)0x0) {
    pcVar5 = pcVar3 + 1;
  }
  sVar6 = 0;
  if (pcVar4 != (char *)0x0) {
    sVar6 = (long)((int)pcVar4 - (int)pcVar5);
  }
  strDir[0] = '\0';
  if (0 < (long)sVar6) {
    strncpy(strDir,pcVar5,sVar6);
    strcat(strDir,&DAT_003efbd8);
  }
  pcVar3 = strrchr(bVar7.dat,0x2e);
  if (strFile != (char *)0x0) {
    strFile[0] = '\0';
    if (pcVar4 != (char *)0x0) {
      bVar7.dat = pcVar4 + 1;
    }
    sVar6 = (size_t)((int)pcVar3 - (int)bVar7.dat);
    if (pcVar3 == (char *)0x0) {
      sVar6 = strlen(bVar7.dat);
    }
    strncpy(strFile,bVar7.dat,sVar6);
  }
  if ((strExt != (char *)0x0) && (strExt[0] = '\0', pcVar3 != (char *)0x0)) {
    strcpy(strExt,pcVar3);
  }
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/std/straits.h */
  sVar6 = strlen(strDrive);
                    /* inlined from custom/bastring.h */
  replace__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUiUiPCcUi
            (&fn.m_strDrive,0,0xffffffffffffffff,strDrive,sVar6);
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/std/straits.h */
  sVar6 = strlen(strDir);
                    /* inlined from custom/bastring.h */
  replace__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUiUiPCcUi
            (&fn.m_strDir,0,0xffffffffffffffff,strDir,sVar6);
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/std/straits.h */
  sVar6 = strlen(strFile);
                    /* inlined from custom/bastring.h */
  replace__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUiUiPCcUi
            (&fn.m_strFile,0,0xffffffffffffffff,strFile,sVar6);
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/std/straits.h */
  sVar6 = strlen(strExt);
                    /* inlined from custom/bastring.h */
  replace__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUiUiPCcUi
            (&fn.m_strExt,0,0xffffffffffffffff,strExt,sVar6);
  if (&fn.m_strDrive != &fn.m_strDriveDir) {
    iVar1 = *(int *)(fn.m_strDriveDir.dat + -8);
    *(int *)(fn.m_strDriveDir.dat + -8) = iVar1 + -1;
    if (iVar1 + -1 == 0) {
                    /* inlined from ctl.h */
      local_180 = _vt_Q23ctlt16custom_allocator1Zc;
      (*(code *)_vt_Q23ctlt16custom_allocator1Zc[2]._4_4_)
                ((int)&local_180 + (int)(short)_vt_Q23ctlt16custom_allocator1Zc[2].__delta);
    }
                    /* inlined from custom/bastring.h */
    if (*(int *)(fn.m_strDrive.dat + -4) == 0) {
      *(int *)(fn.m_strDrive.dat + -8) = *(int *)(fn.m_strDrive.dat + -8) + 1;
      fn.m_strDriveDir.dat = fn.m_strDrive.dat;
    }
    else {
      fn.m_strDriveDir.dat =
           (char *)clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep
                             ();
    }
  }
  replace__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUiUiRCt12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUiUi
            (&fn.m_strDriveDir,*(undefined4 *)(fn.m_strDriveDir.dat + -0x10),0,&fn.m_strDir,0,
             0xffffffffffffffff);
  if (&fn.m_strFile != &fn.m_strFileExt) {
    iVar1 = *(int *)(fn.m_strFileExt.dat + -8);
    *(int *)(fn.m_strFileExt.dat + -8) = iVar1 + -1;
    if (iVar1 + -1 == 0) {
                    /* inlined from ctl.h */
      local_170 = _vt_Q23ctlt16custom_allocator1Zc;
      (*(code *)_vt_Q23ctlt16custom_allocator1Zc[2]._4_4_)
                ((int)&local_170 + (int)(short)_vt_Q23ctlt16custom_allocator1Zc[2].__delta);
    }
                    /* inlined from custom/bastring.h */
    if (*(int *)(fn.m_strFile.dat + -4) == 0) {
      *(int *)(fn.m_strFile.dat + -8) = *(int *)(fn.m_strFile.dat + -8) + 1;
      fn.m_strFileExt.dat = fn.m_strFile.dat;
    }
    else {
      fn.m_strFileExt.dat =
           (char *)clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep
                             ();
    }
  }
  replace__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUiUiRCt12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUiUi
            (&fn.m_strFileExt,*(undefined4 *)(fn.m_strFileExt.dat + -0x10),0,&fn.m_strExt,0,
             0xffffffffffffffff);
  if (*(int *)(fn.m_strFile.dat + -0x10) == 0) {
    bVar7.dat = "";
  }
  else {
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/std/straits.h */
    fn.m_strFile.dat[*(int *)(fn.m_strFile.dat + -0x10)] = '\0';
                    /* inlined from custom/bastring.h */
    bVar7 = fn.m_strFile;
  }
                    /* inlined from custom/bastring.h */
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    p_Var2 = _vt_Q23ctlt16custom_allocator1Zc;
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var2 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep()
    ;
  }
  (local_60->m_strError).dat = (char *)p_Var2;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/std/straits.h */
  sVar6 = strlen(bVar7.dat);
                    /* inlined from custom/bastring.h */
  replace__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUiUiPCcUi
            (local_60,0,0xffffffffffffffff,bVar7.dat,sVar6);
  fn.__vtable = (CFileName__vtable *)_vt_9CFileName;
  iVar1 = *(int *)(fn.m_strFileExt.dat + -8);
  *(int *)(fn.m_strFileExt.dat + -8) = iVar1 + -1;
  if (iVar1 + -1 == 0) {
                    /* inlined from ctl.h */
    local_e0 = _vt_Q23ctlt16custom_allocator1Zc;
    (*(code *)_vt_Q23ctlt16custom_allocator1Zc[2]._4_4_)
              ((int)&local_e0 + (int)(short)_vt_Q23ctlt16custom_allocator1Zc[2].__delta);
  }
                    /* inlined from custom/bastring.h */
  iVar1 = *(int *)(fn.m_strParentDir.dat + -8);
  *(int *)(fn.m_strParentDir.dat + -8) = iVar1 + -1;
  if (iVar1 + -1 == 0) {
                    /* inlined from ctl.h */
    local_d0 = _vt_Q23ctlt16custom_allocator1Zc;
    (*(code *)_vt_Q23ctlt16custom_allocator1Zc[2]._4_4_)
              ((int)&local_d0 + (int)(short)_vt_Q23ctlt16custom_allocator1Zc[2].__delta);
  }
                    /* inlined from custom/bastring.h */
  iVar1 = *(int *)(fn.m_strDriveDir.dat + -8);
  *(int *)(fn.m_strDriveDir.dat + -8) = iVar1 + -1;
  if (iVar1 + -1 == 0) {
                    /* inlined from ctl.h */
    local_c0 = _vt_Q23ctlt16custom_allocator1Zc;
    (*(code *)_vt_Q23ctlt16custom_allocator1Zc[2]._4_4_)
              ((int)&local_c0 + (int)(short)_vt_Q23ctlt16custom_allocator1Zc[2].__delta);
  }
                    /* inlined from custom/bastring.h */
  iVar1 = *(int *)(fn.m_strExt.dat + -8);
  *(int *)(fn.m_strExt.dat + -8) = iVar1 + -1;
  if (iVar1 + -1 == 0) {
                    /* inlined from ctl.h */
    local_b0 = _vt_Q23ctlt16custom_allocator1Zc;
    (*(code *)_vt_Q23ctlt16custom_allocator1Zc[2]._4_4_)
              ((int)&local_b0 + (int)(short)_vt_Q23ctlt16custom_allocator1Zc[2].__delta);
  }
                    /* inlined from custom/bastring.h */
  iVar1 = *(int *)(fn.m_strFile.dat + -8);
  *(int *)(fn.m_strFile.dat + -8) = iVar1 + -1;
  if (iVar1 + -1 == 0) {
                    /* inlined from ctl.h */
    local_a0 = _vt_Q23ctlt16custom_allocator1Zc;
    (*(code *)_vt_Q23ctlt16custom_allocator1Zc[2]._4_4_)
              ((int)&local_a0 + (int)(short)_vt_Q23ctlt16custom_allocator1Zc[2].__delta);
  }
                    /* inlined from custom/bastring.h */
  iVar1 = *(int *)(fn.m_strDir.dat + -8);
  *(int *)(fn.m_strDir.dat + -8) = iVar1 + -1;
  if (iVar1 + -1 == 0) {
                    /* inlined from ctl.h */
    local_90 = _vt_Q23ctlt16custom_allocator1Zc;
    (*(code *)_vt_Q23ctlt16custom_allocator1Zc[2]._4_4_)
              ((int)&local_90 + (int)(short)_vt_Q23ctlt16custom_allocator1Zc[2].__delta);
  }
                    /* inlined from custom/bastring.h */
  iVar1 = *(int *)(fn.m_strDrive.dat + -8);
  *(int *)(fn.m_strDrive.dat + -8) = iVar1 + -1;
  if (iVar1 + -1 == 0) {
                    /* inlined from ctl.h */
    local_80 = _vt_Q23ctlt16custom_allocator1Zc;
    (*(code *)_vt_Q23ctlt16custom_allocator1Zc[2]._4_4_)
              ((int)&local_80 + (int)(short)_vt_Q23ctlt16custom_allocator1Zc[2].__delta);
  }
                    /* inlined from custom/bastring.h */
  iVar1 = *(int *)(fn.field0_0x0.dat + -8);
  *(int *)(fn.field0_0x0.dat + -8) = iVar1 + -1;
  if (iVar1 + -1 == 0) {
                    /* inlined from ctl.h */
    local_70 = _vt_Q23ctlt16custom_allocator1Zc;
    (*(code *)_vt_Q23ctlt16custom_allocator1Zc[2]._4_4_)
              ((int)&local_70 + (int)(short)_vt_Q23ctlt16custom_allocator1Zc[2].__delta);
                    /* inlined from CFileName.h */
  }
  return (basic_string<char,string_char_traits<char>,ctl::custom_allocator<char>_>)(char *)local_60;
}

string CFile::GetFilePath() {
	char *s;
	
  size_t sVar1;
  int in_a1_lo;
  __vtbl_ptr_type *p_Var2;
  
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
  p_Var2 = _vt_Q23ctlt16custom_allocator1Zc;
  if (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ == 0)
  {
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref + 1;
  }
  else {
    p_Var2 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep
                       (0x369d78);
  }
  (this->m_strError).dat = (char *)p_Var2;
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/std/straits.h */
  sVar1 = strlen((char *)(in_a1_lo + 0x48));
                    /* inlined from custom/bastring.h */
  replace__t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1ZcUiUiPCcUi
            (this,0,0xffffffffffffffff,(char *)(in_a1_lo + 0x48),sVar1);
                    /* end of inlined section */
  return (basic_string<char,string_char_traits<char>,ctl::custom_allocator<char>_>)(char *)this;
}

void CStdioFile::WriteString(char *lpsz) {
  return;
}

char* CStdioFile::ReadString(char *lpsz, unsigned int nMax) {
  return (char *)0x0;
}

char* basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> >::Rep::clone() {
	size_t extra;
	size_t s;
	size_t i;
	
  bool bVar1;
  __vtbl_ptr_type *p_Var2;
  custom_allocator<char>__vtable *pcVar3;
  char str [256];
  
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
  bVar1 = _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ ==
          0;
  this[0x53].__vtable = (custom_allocator<char>__vtable *)_vt_5CFile;
  if (bVar1) {
    p_Var2 = _vt_Q23ctlt16custom_allocator1Zc;
    pcVar3 = (custom_allocator<char>__vtable *)
             (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref +
             1);
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         (uint)pcVar3;
  }
  else {
    p_Var2 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep
                       (0x369d78);
    pcVar3 = (custom_allocator<char>__vtable *)p_Var2;
  }
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
  this->__vtable = (custom_allocator<char>__vtable *)p_Var2;
                    /* end of inlined section */
  this[1].__vtable = (custom_allocator<char>__vtable *)&_heap_size;
  return (type_info *)pcVar3;
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
	
  bool bVar1;
  __vtbl_ptr_type *p_Var2;
  custom_allocator<char>__vtable *pcVar3;
  char str [256];
  
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
  bVar1 = _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ ==
          0;
  this[0x53].__vtable = (custom_allocator<char>__vtable *)_vt_5CFile;
  if (bVar1) {
    p_Var2 = _vt_Q23ctlt16custom_allocator1Zc;
    pcVar3 = (custom_allocator<char>__vtable *)
             (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref +
             1);
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         (uint)pcVar3;
  }
  else {
    p_Var2 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep
                       (0x369d78);
    pcVar3 = (custom_allocator<char>__vtable *)p_Var2;
  }
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
  this->__vtable = (custom_allocator<char>__vtable *)p_Var2;
                    /* end of inlined section */
  this[1].__vtable = (custom_allocator<char>__vtable *)&_heap_size;
  return (type_info *)pcVar3;
}

basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> >& basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> >::replace(size_t pos1, size_t n1, basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> > &str, size_t pos2, size_t n2) {
	size_t len2;
	Rep *this;
	
  bool bVar1;
  __vtbl_ptr_type *p_Var2;
  custom_allocator<char>__vtable *pcVar3;
  char str [256];
  
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
  bVar1 = _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ ==
          0;
  this[0x53].__vtable = (custom_allocator<char>__vtable *)_vt_5CFile;
  if (bVar1) {
    p_Var2 = _vt_Q23ctlt16custom_allocator1Zc;
    pcVar3 = (custom_allocator<char>__vtable *)
             (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref +
             1);
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         (uint)pcVar3;
  }
  else {
    p_Var2 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep
                       (0x369d78);
    pcVar3 = (custom_allocator<char>__vtable *)p_Var2;
  }
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
  this->__vtable = (custom_allocator<char>__vtable *)p_Var2;
                    /* end of inlined section */
  this[1].__vtable = (custom_allocator<char>__vtable *)&_heap_size;
  return (type_info *)pcVar3;
}

type_info& CFile type_info function() {
  bool bVar1;
  __vtbl_ptr_type *p_Var2;
  custom_allocator<char>__vtable *pcVar3;
  char str [256];
  
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
  bVar1 = _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ ==
          0;
  this[0x53].__vtable = (custom_allocator<char>__vtable *)_vt_5CFile;
  if (bVar1) {
    p_Var2 = _vt_Q23ctlt16custom_allocator1Zc;
    pcVar3 = (custom_allocator<char>__vtable *)
             (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref +
             1);
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         (uint)pcVar3;
  }
  else {
    p_Var2 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep
                       (0x369d78);
    pcVar3 = (custom_allocator<char>__vtable *)p_Var2;
  }
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
  this->__vtable = (custom_allocator<char>__vtable *)p_Var2;
                    /* end of inlined section */
  this[1].__vtable = (custom_allocator<char>__vtable *)&_heap_size;
  return (type_info *)pcVar3;
}

int CFile::OnError(char *pStr) {
	char str[256];
	
  bool bVar1;
  __vtbl_ptr_type *p_Var2;
  custom_allocator<char>__vtable *pcVar3;
  char str [256];
  
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
  bVar1 = _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ ==
          0;
  this[0x53].__vtable = (custom_allocator<char>__vtable *)_vt_5CFile;
  if (bVar1) {
    p_Var2 = _vt_Q23ctlt16custom_allocator1Zc;
    pcVar3 = (custom_allocator<char>__vtable *)
             (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref +
             1);
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         (uint)pcVar3;
  }
  else {
    p_Var2 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep
                       (0x369d78);
    pcVar3 = (custom_allocator<char>__vtable *)p_Var2;
  }
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
  this->__vtable = (custom_allocator<char>__vtable *)p_Var2;
                    /* end of inlined section */
  this[1].__vtable = (custom_allocator<char>__vtable *)&_heap_size;
  return (type_info *)pcVar3;
}

char* CFile::ErrorString() {
	basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> > *this;
	
  bool bVar1;
  __vtbl_ptr_type *p_Var2;
  custom_allocator<char>__vtable *pcVar3;
  char str [256];
  
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
  bVar1 = _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ ==
          0;
  this[0x53].__vtable = (custom_allocator<char>__vtable *)_vt_5CFile;
  if (bVar1) {
    p_Var2 = _vt_Q23ctlt16custom_allocator1Zc;
    pcVar3 = (custom_allocator<char>__vtable *)
             (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref +
             1);
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         (uint)pcVar3;
  }
  else {
    p_Var2 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep
                       (0x369d78);
    pcVar3 = (custom_allocator<char>__vtable *)p_Var2;
  }
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
  this->__vtable = (custom_allocator<char>__vtable *)p_Var2;
                    /* end of inlined section */
  this[1].__vtable = (custom_allocator<char>__vtable *)&_heap_size;
  return (type_info *)pcVar3;
}

type_info& CStdioFile type_info function() {
  bool bVar1;
  __vtbl_ptr_type *p_Var2;
  custom_allocator<char>__vtable *pcVar3;
  char str [256];
  
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
  bVar1 = _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ ==
          0;
  this[0x53].__vtable = (custom_allocator<char>__vtable *)_vt_5CFile;
  if (bVar1) {
    p_Var2 = _vt_Q23ctlt16custom_allocator1Zc;
    pcVar3 = (custom_allocator<char>__vtable *)
             (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref +
             1);
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         (uint)pcVar3;
  }
  else {
    p_Var2 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep
                       (0x369d78);
    pcVar3 = (custom_allocator<char>__vtable *)p_Var2;
  }
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
  this->__vtable = (custom_allocator<char>__vtable *)p_Var2;
                    /* end of inlined section */
  this[1].__vtable = (custom_allocator<char>__vtable *)&_heap_size;
  return (type_info *)pcVar3;
}

CStdioFile* CStdioFile::CStdioFile() {
  bool bVar1;
  __vtbl_ptr_type *p_Var2;
  custom_allocator<char>__vtable *pcVar3;
  char str [256];
  
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
  bVar1 = _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ ==
          0;
  this[0x53].__vtable = (custom_allocator<char>__vtable *)_vt_5CFile;
  if (bVar1) {
    p_Var2 = _vt_Q23ctlt16custom_allocator1Zc;
    pcVar3 = (custom_allocator<char>__vtable *)
             (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref +
             1);
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         (uint)pcVar3;
  }
  else {
    p_Var2 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep
                       (0x369d78);
    pcVar3 = (custom_allocator<char>__vtable *)p_Var2;
  }
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
  this->__vtable = (custom_allocator<char>__vtable *)p_Var2;
                    /* end of inlined section */
  this[1].__vtable = (custom_allocator<char>__vtable *)&_heap_size;
  return (type_info *)pcVar3;
}

void CStdioFile::~CStdioFile(int __in_chrg) {
  bool bVar1;
  __vtbl_ptr_type *p_Var2;
  custom_allocator<char>__vtable *pcVar3;
  char str [256];
  
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
  bVar1 = _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ ==
          0;
  this[0x53].__vtable = (custom_allocator<char>__vtable *)_vt_5CFile;
  if (bVar1) {
    p_Var2 = _vt_Q23ctlt16custom_allocator1Zc;
    pcVar3 = (custom_allocator<char>__vtable *)
             (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref +
             1);
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         (uint)pcVar3;
  }
  else {
    p_Var2 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep
                       (0x369d78);
    pcVar3 = (custom_allocator<char>__vtable *)p_Var2;
  }
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
  this->__vtable = (custom_allocator<char>__vtable *)p_Var2;
                    /* end of inlined section */
  this[1].__vtable = (custom_allocator<char>__vtable *)&_heap_size;
  return (type_info *)pcVar3;
}

type_info& CFileName type_info function() {
  bool bVar1;
  __vtbl_ptr_type *p_Var2;
  custom_allocator<char>__vtable *pcVar3;
  char str [256];
  
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
  bVar1 = _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ ==
          0;
  this[0x53].__vtable = (custom_allocator<char>__vtable *)_vt_5CFile;
  if (bVar1) {
    p_Var2 = _vt_Q23ctlt16custom_allocator1Zc;
    pcVar3 = (custom_allocator<char>__vtable *)
             (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref +
             1);
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         (uint)pcVar3;
  }
  else {
    p_Var2 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep
                       (0x369d78);
    pcVar3 = (custom_allocator<char>__vtable *)p_Var2;
  }
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
  this->__vtable = (custom_allocator<char>__vtable *)p_Var2;
                    /* end of inlined section */
  this[1].__vtable = (custom_allocator<char>__vtable *)&_heap_size;
  return (type_info *)pcVar3;
}

void CFileName::~CFileName(int __in_chrg) {
  bool bVar1;
  __vtbl_ptr_type *p_Var2;
  custom_allocator<char>__vtable *pcVar3;
  char str [256];
  
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
  bVar1 = _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ ==
          0;
  this[0x53].__vtable = (custom_allocator<char>__vtable *)_vt_5CFile;
  if (bVar1) {
    p_Var2 = _vt_Q23ctlt16custom_allocator1Zc;
    pcVar3 = (custom_allocator<char>__vtable *)
             (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref +
             1);
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         (uint)pcVar3;
  }
  else {
    p_Var2 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep
                       (0x369d78);
    pcVar3 = (custom_allocator<char>__vtable *)p_Var2;
  }
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
  this->__vtable = (custom_allocator<char>__vtable *)p_Var2;
                    /* end of inlined section */
  this[1].__vtable = (custom_allocator<char>__vtable *)&_heap_size;
  return (type_info *)pcVar3;
}

type_info& ctl::custom_allocator<char> type_info function() {
  bool bVar1;
  __vtbl_ptr_type *p_Var2;
  custom_allocator<char>__vtable *pcVar3;
  char str [256];
  
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
  bVar1 = _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ ==
          0;
  this[0x53].__vtable = (custom_allocator<char>__vtable *)_vt_5CFile;
  if (bVar1) {
    p_Var2 = _vt_Q23ctlt16custom_allocator1Zc;
    pcVar3 = (custom_allocator<char>__vtable *)
             (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref +
             1);
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         (uint)pcVar3;
  }
  else {
    p_Var2 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep
                       (0x369d78);
    pcVar3 = (custom_allocator<char>__vtable *)p_Var2;
  }
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
  this->__vtable = (custom_allocator<char>__vtable *)p_Var2;
                    /* end of inlined section */
  this[1].__vtable = (custom_allocator<char>__vtable *)&_heap_size;
  return (type_info *)pcVar3;
}

void ctl::custom_allocator<char>::custom_deallocate(void *_Ptr) {
  bool bVar1;
  __vtbl_ptr_type *p_Var2;
  custom_allocator<char>__vtable *pcVar3;
  char str [256];
  
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
  bVar1 = _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ ==
          0;
  this[0x53].__vtable = (custom_allocator<char>__vtable *)_vt_5CFile;
  if (bVar1) {
    p_Var2 = _vt_Q23ctlt16custom_allocator1Zc;
    pcVar3 = (custom_allocator<char>__vtable *)
             (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref +
             1);
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         (uint)pcVar3;
  }
  else {
    p_Var2 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep
                       (0x369d78);
    pcVar3 = (custom_allocator<char>__vtable *)p_Var2;
  }
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
  this->__vtable = (custom_allocator<char>__vtable *)p_Var2;
                    /* end of inlined section */
  this[1].__vtable = (custom_allocator<char>__vtable *)&_heap_size;
  return (type_info *)pcVar3;
}

char* ctl::custom_allocator<char>::custom_allocate(size_t _Count) {
  bool bVar1;
  __vtbl_ptr_type *p_Var2;
  custom_allocator<char>__vtable *pcVar3;
  char str [256];
  
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
  bVar1 = _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ ==
          0;
  this[0x53].__vtable = (custom_allocator<char>__vtable *)_vt_5CFile;
  if (bVar1) {
    p_Var2 = _vt_Q23ctlt16custom_allocator1Zc;
    pcVar3 = (custom_allocator<char>__vtable *)
             (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref +
             1);
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         (uint)pcVar3;
  }
  else {
    p_Var2 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep
                       (0x369d78);
    pcVar3 = (custom_allocator<char>__vtable *)p_Var2;
  }
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
  this->__vtable = (custom_allocator<char>__vtable *)p_Var2;
                    /* end of inlined section */
  this[1].__vtable = (custom_allocator<char>__vtable *)&_heap_size;
  return (type_info *)pcVar3;
}

type_info& basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> > type_info function() {
  bool bVar1;
  __vtbl_ptr_type *p_Var2;
  custom_allocator<char>__vtable *pcVar3;
  char str [256];
  
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
  bVar1 = _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep._12_4_ ==
          0;
  this[0x53].__vtable = (custom_allocator<char>__vtable *)_vt_5CFile;
  if (bVar1) {
    p_Var2 = _vt_Q23ctlt16custom_allocator1Zc;
    pcVar3 = (custom_allocator<char>__vtable *)
             (_t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref +
             1);
    _t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc_nilRep.ref =
         (uint)pcVar3;
  }
  else {
    p_Var2 = (__vtbl_ptr_type *)
             clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZQ23ctlt16custom_allocator1Zc3Rep
                       (0x369d78);
    pcVar3 = (custom_allocator<char>__vtable *)p_Var2;
  }
                    /* end of inlined section */
                    /* inlined from custom/bastring.h */
  this->__vtable = (custom_allocator<char>__vtable *)p_Var2;
                    /* end of inlined section */
  this[1].__vtable = (custom_allocator<char>__vtable *)&_heap_size;
  return (type_info *)pcVar3;
}
