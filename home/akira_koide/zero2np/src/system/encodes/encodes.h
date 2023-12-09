// STATUS: NOT STARTED

#ifndef HOME_AKIRA_KOIDE_ZERO2NP_SRC_SYSTEM_ENCODES_ENCODES_H
#define HOME_AKIRA_KOIDE_ZERO2NP_SRC_SYSTEM_ENCODES_ENCODES_H

extern short int dad[4097];
extern short int lson[4097];
extern short int rson[4353];
extern unsigned char text[4113];
extern short int matchpos;
extern short int matchlen;

int SlideEncode(unsigned char *base, unsigned char *addrs, int max_size);
void SlideDecode(unsigned char *base, unsigned char *addrs, int size);
void init_tree();
void insert_node(short int r);
void delete_node(short int p);

#endif // HOME_AKIRA_KOIDE_ZERO2NP_SRC_SYSTEM_ENCODES_ENCODES_H
