// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_SYSTEM_COMPRESS_COMPRESS_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_SYSTEM_COMPRESS_COMPRESS_H

typedef struct {
	unsigned char sta;
	unsigned char cnt;
	unsigned char no;
} PHOTO_EXPAND;

extern DCT_ROOT ZigZag[64];
extern PHOTO_EXPAND photo_expand;

float CompressFile(unsigned int *input, char *output, unsigned int max_size, char quality);
char CheckPhotoExpandEnd();
unsigned char GetPhotoExpand();
void InitPhotoExpand(unsigned char no);
void ReqPhotoExpand(unsigned char no);
unsigned char GetPhotoExpandNo();
void ExpandFile(char *input, unsigned int *output2);

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_SYSTEM_COMPRESS_COMPRESS_H
