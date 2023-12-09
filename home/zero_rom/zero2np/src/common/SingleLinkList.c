// STATUS: NOT STARTED

#include "SingleLinkList.h"

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x39fa20;
	
  g3ddbgAssert__FbPCce(false,str_777);
  return;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_void__003ef1c8,_max,v);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_char__003ef1d0,_max,v);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi("unsigned int*",_max,v);
  }
  return (uint **)0x0;
}

static SLL_CELL* SingleLinkListCellAlloc(SINGLE_LINK_LIST *pSLL) {
	SLL_CELL *pCell;
	
  _SLL_CELL *p_Var1;
  
  p_Var1 = (_SLL_CELL *)EFFECT_MALLOC__Fi(pSLL->ElemSize + 0x10);
  if (p_Var1 != (_SLL_CELL *)0x0) {
    p_Var1->pNext = (_SLL_CELL *)0x0;
  }
  return p_Var1;
}

static void SingleLinkListCellFree(SLL_CELL *pCell) {
  if (pCell != (_SLL_CELL *)0x0) {
    EFFECT_FREE__FPv(pCell);
  }
  return;
}

SINGLE_LINK_LIST* SingleLinkListAlloc(u_int ElemSize) {
	SINGLE_LINK_LIST *pSLL;
	
  SINGLE_LINK_LIST *pSLL;
  
  pSLL = (SINGLE_LINK_LIST *)0x0;
  if ((ElemSize != 0) &&
     (pSLL = (SINGLE_LINK_LIST *)EFFECT_MALLOC__Fi(0x10), pSLL != (SINGLE_LINK_LIST *)0x0)) {
    SingleLinkListInit__FP16SINGLE_LINK_LISTUi(pSLL,ElemSize);
  }
  return pSLL;
}

void SingleLinkListInit(SINGLE_LINK_LIST *pSLL, u_int ElemSize) {
  if (pSLL != (SINGLE_LINK_LIST *)0x0) {
    pSLL->ElemSize = ElemSize;
    pSLL->pBeginCell = (_SLL_CELL *)0x0;
    pSLL->RegCount = 0;
    pSLL->pEndCell = (_SLL_CELL *)0x0;
  }
  return;
}

void SingleLinkListFree(SINGLE_LINK_LIST *pSLL) {
  uint uVar1;
  
  if (pSLL != (SINGLE_LINK_LIST *)0x0) {
    while( true ) {
      uVar1 = 0;
      if (pSLL != (SINGLE_LINK_LIST *)0x0) {
        uVar1 = pSLL->RegCount;
      }
      if (uVar1 == 0) break;
      SingleLinkListRemoveBegin__FP16SINGLE_LINK_LIST(pSLL);
                    /* inlined from SingleLinkList.h */
    }
                    /* end of inlined section */
    EFFECT_FREE__FPv(pSLL);
  }
  return;
}

void SingleLinkListAllCellFree(SINGLE_LINK_LIST *pSLL) {
  uint uVar1;
  
  if (pSLL != (SINGLE_LINK_LIST *)0x0) {
    while( true ) {
      uVar1 = 0;
      if (pSLL != (SINGLE_LINK_LIST *)0x0) {
        uVar1 = pSLL->RegCount;
      }
      if (uVar1 == 0) break;
      SingleLinkListRemoveBegin__FP16SINGLE_LINK_LIST(pSLL);
                    /* inlined from SingleLinkList.h */
    }
                    /* end of inlined section */
    pSLL->RegCount = 0;
  }
  return;
}

SLL_CELL* SingleLinkListAddEnd(SINGLE_LINK_LIST *pSLL, void *pData) {
	SLL_CELL *pRetVal;
	SLL_CELL *pCell;
	
  _SLL_CELL *pCell;
  void *__dest;
  _SLL_CELL *p_Var1;
  
  p_Var1 = (_SLL_CELL *)0x0;
  if ((pSLL != (SINGLE_LINK_LIST *)0x0) &&
     (pCell = SingleLinkListCellAlloc__FPC16SINGLE_LINK_LIST(pSLL), pCell != (_SLL_CELL *)0x0)) {
    __dest = SingleLinkListCellBodyPtr__FPC9_SLL_CELL(pCell);
    memcpy(__dest,pData,(long)(int)pSLL->ElemSize);
    if (pSLL->pEndCell == (_SLL_CELL *)0x0) {
      pSLL->pBeginCell = pCell;
    }
    else {
      pSLL->pEndCell->pNext = pCell;
    }
    pSLL->pEndCell = pCell;
    pSLL->RegCount = pSLL->RegCount + 1;
    p_Var1 = pCell;
  }
  return p_Var1;
}

int SingleLinkListRemoveBegin(SINGLE_LINK_LIST *pSLL) {
	int RetVal;
	SLL_CELL *pCell;
	
  _SLL_CELL *pCell;
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
                    /* inlined from SingleLinkList.h */
  uVar1 = 0;
  if (pSLL != (SINGLE_LINK_LIST *)0x0) {
    uVar1 = pSLL->RegCount;
  }
  if (uVar1 != 0) {
                    /* end of inlined section */
    pCell = pSLL->pBeginCell;
    pSLL->pBeginCell = pCell->pNext;
    SingleLinkListCellFree__FP9_SLL_CELL(pCell);
    iVar2 = 1;
    uVar1 = pSLL->RegCount - 1;
    pSLL->RegCount = uVar1;
    if (uVar1 == 0) {
      pSLL->pEndCell = (_SLL_CELL *)0x0;
    }
  }
  return iVar2;
}

int SingleLinkListRemove(SINGLE_LINK_LIST *pSLL, SLL_CELL *pDelCell) {
	int RetVal;
	SLL_CELL *pCell;
	
  _SLL_CELL *p_Var1;
  uint uVar2;
  int iVar3;
  _SLL_CELL *p_Var4;
  
  iVar3 = 0;
                    /* inlined from SingleLinkList.h */
  uVar2 = 0;
  if (pSLL != (SINGLE_LINK_LIST *)0x0) {
    uVar2 = pSLL->RegCount;
  }
  if (uVar2 != 0) {
                    /* end of inlined section */
    p_Var1 = pSLL->pBeginCell;
    if (pSLL->pBeginCell == pDelCell) {
      iVar3 = SingleLinkListRemoveBegin__FP16SINGLE_LINK_LIST(pSLL);
    }
    else {
      do {
        p_Var4 = p_Var1;
        p_Var1 = p_Var4->pNext;
        if (p_Var1 == (_SLL_CELL *)0x0) {
          return 0;
        }
      } while (p_Var1 != pDelCell);
      p_Var4->pNext = pDelCell->pNext;
      if (pSLL->pEndCell == pDelCell) {
        pSLL->pEndCell = p_Var4;
      }
      SingleLinkListCellFree__FP9_SLL_CELL(pDelCell);
      iVar3 = 1;
      pSLL->RegCount = pSLL->RegCount - 1;
    }
  }
  return iVar3;
}

void* SingleLinkListCellBodyPtr(SLL_CELL *pCell) {
  return &pCell->BodyStart;
}
