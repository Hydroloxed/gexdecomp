#include "bloc.h"
#include "unimplemented.h"
#include <stdlib.h>

// dat 004a2924 4
uint32 gNumFreeBlocks;

// 0040b390 https://decomp.me/scratch/9sSYN 100%
void* BLOC_ResolvePtr(void** blktbl, void* ptr)
{
    unsigned int offset = ((unsigned int)ptr) & 0xffffe;
    unsigned int blockndx = (((unsigned int)ptr) & 0x7ff00000) >> 0x14;
    void* blockaddr = blktbl[blockndx];

    return (char*)blockaddr + offset;
}

// 0040b3b0
static void BLOC_Loaded(void* dunno)
{
    UNIMPLEMENTED;
}

// 0040b460
static void BLOC_BlockLoader(void)
{
    UNIMPLEMENTED;
}

// 0040b6d0
static void** BLOC_InitTable(void** blktbl, char* mem, int blocks)
{
    UNIMPLEMENTED;
    return NULL;
}

// 0040b6f0
void BLOC_OpenBlockSupport(void)
{
    UNIMPLEMENTED;
}

// 0040b830
void BLOC_CloseBlockSupport(void)
{
    UNIMPLEMENTED;
}

// 0040b860
void BLOC_FreeBlocks(void** blktbl)
{
    UNIMPLEMENTED;
}

// 0040b8c0
void BLOC_LoadBlocks(struct CDirectory* dir, int diridx, void*** blktbl, void** outptr)
{
    UNIMPLEMENTED;
}

// 0040b940
void BLOC_WaitForBlocksToLoad(void)
{
    UNIMPLEMENTED;
}
