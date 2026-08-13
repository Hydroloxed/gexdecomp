#ifndef MEM_H
#define MEM_H
#include <stddef.h>

void* MEM_Alloc(size_t nb);
void MEM_Free(void* p);
void MEM_Init();
void MEM_Deinit();

#endif
