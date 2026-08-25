#ifndef UTILS_H
#define UTILS_H

#include "platform.h"
#include "unimplemented.h"

uint32 UTL_ReallyRandom32(void);
uint32 UTL_ReallyRandom(uint32 max);
void DrawRect(int32 param_1, int32 param_2, int32 param_3, int32 param_4, uint32 color555, uint32 pixc);
void AdjustPlut(uint16* param_1, uint16* param_2, int param_3, int param_4, int param_5);

#endif
