// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_COMMON_SINGLELINKLIST_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_COMMON_SINGLELINKLIST_H

struct _SLL_CELL {
	_SLL_CELL *pNext;
	char BodyStart;
};

typedef _SLL_CELL SLL_CELL;

typedef struct {
	u_int ElemSize;
	u_int RegCount;
	SLL_CELL *pBeginCell;
	SLL_CELL *pEndCell;
} SINGLE_LINK_LIST;

SINGLE_LINK_LIST* SingleLinkListAlloc(u_int ElemSize);
void SingleLinkListInit(SINGLE_LINK_LIST *pSLL, u_int ElemSize);
void SingleLinkListFree(SINGLE_LINK_LIST *pSLL);
void SingleLinkListAllCellFree(SINGLE_LINK_LIST *pSLL);
SLL_CELL* SingleLinkListAddEnd(SINGLE_LINK_LIST *pSLL, void *pData);
int SingleLinkListRemoveBegin(SINGLE_LINK_LIST *pSLL);
int SingleLinkListRemove(SINGLE_LINK_LIST *pSLL, SLL_CELL *pDelCell);
void* SingleLinkListCellBodyPtr(SLL_CELL *pCell);

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_COMMON_SINGLELINKLIST_H
