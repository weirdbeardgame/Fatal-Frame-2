// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_SYSTEM_PAD_KEY_CNF_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_SYSTEM_PAD_KEY_CNF_H

extern u_short *default_key[32];
extern u_short *default_key_bak[32];
extern u_char key_type[32];
extern short unsigned int *paddat_m[3][26];
extern unsigned char *pushdat_m[3][26];

void SetDefaultKeyType();
void SetKeyType();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_SYSTEM_PAD_KEY_CNF_H
