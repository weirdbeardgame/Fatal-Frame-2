// STATUS: NOT STARTED

#include "cmp.h"

void CMP_DecodeOne(CMP_HEADER *header, int no, int from_adrs, int to_adrs) {
  _ENCODE_DIV_SECTION *p_Var1;
  
  p_Var1 = header->div_p + no;
  if (p_Var1->type == 1) {
    SlideDecode((uchar *)from_adrs,(uchar *)to_adrs,(uint)(ushort)p_Var1->size);
    return;
  }
  memcpy((void *)to_adrs,(void *)from_adrs,(ulong)(ushort)p_Var1->size);
  return;
}

int CMP_Decode(CMP_HEADER *header, void *decode_buf) {
	int i;
	int now_adrs;
	int now_size;
	
  uint uVar1;
  int no;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  no = 0;
  if (0 < header->div_num) {
    do {
      CMP_DecodeOne(header,no,header->data_offset + iVar3,(int)decode_buf);
      decode_buf = (void *)((int)decode_buf + header->div_size);
      iVar2 = no + 1;
      uVar1 = GetAlignUp((uint)(ushort)header->div_p[no].size,4);
      iVar3 = iVar3 + uVar1;
      no = iVar2;
    } while (iVar2 < header->div_num);
  }
  return header->size;
}

void CMP_Init(CMP_HEADER *header) {
  if (header->mapping == 0) {
    header->mapping = 1;
    header->data_offset = (int)&header->size + header->data_offset;
    header->div_p = (_ENCODE_DIV_SECTION *)((int)&header->size + (int)&header->div_p->type);
  }
  return;
}
