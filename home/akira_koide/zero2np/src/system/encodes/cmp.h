// STATUS: NOT STARTED

#ifndef HOME_AKIRA_KOIDE_ZERO2NP_SRC_SYSTEM_ENCODES_CMP_H
#define HOME_AKIRA_KOIDE_ZERO2NP_SRC_SYSTEM_ENCODES_CMP_H

struct _CMP_HEADER {
	int size;
	int ext;
	int div_size;
	int div_num;
	int data_offset;
	ENCODE_DIV_SECTION *div_p;
	int mapping;
	int cmp_size;
};

typedef _CMP_HEADER CMP_HEADER;
void CMP_DecodeOne(CMP_HEADER *header, int no, int from_adrs, int to_adrs);
int CMP_Decode(CMP_HEADER *header, void *decode_buf);
void CMP_Init(CMP_HEADER *header);

#endif // HOME_AKIRA_KOIDE_ZERO2NP_SRC_SYSTEM_ENCODES_CMP_H
