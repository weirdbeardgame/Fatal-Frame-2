// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_COMMON_SPR_STACK_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_COMMON_SPR_STACK_H

extern CStackMem zero2_spr_stack;

void* spr_stackGetMem(int size);
void spr_stackFreeMem(int size);

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_COMMON_SPR_STACK_H
