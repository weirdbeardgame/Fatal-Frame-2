// STATUS: NOT STARTED

#include "defhandler.h"

_defStopDMA() {
  sceIpuStopDMA(*(int *)(param_1 + 0x40) + 0x68);
  return 1;
}

_defRestartDMA() {
  sceIpuRestartDMA(*(int *)(param_1 + 0x40) + 0x68);
  return 1;
}
