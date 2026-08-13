#include "bloc.h"
#include <stdlib.h>

// 0040b390
void* BLOC_ResolvePtr(void** blktbl, void* ptr)
{
    return NULL;
}

// 0040b3b0
static void BLOC_Loaded(void* dunno)
{}

// 0040b460
static void BLOC_BlockLoader()
{}

// 0040b6d0
static void** BLOC_InitTable(void** blktbl, char* mem, int blocks)
{
    return NULL;
}

// 0040b6f0
void BLOC_OpenBlockSupport()
{}

// 0040b830
void BLOC_CloseBlockSupport()
{}

// 0040b860
void BLOC_FreeBlocks(void** blktbl)
{}

// 0040b8c0
void BLOC_LoadBlocks(struct CDirectory* dir, int diridx, void** blktbl, void** outptr)
{}

// 0040b940
void BLOC_WaitForBlocksToLoad()
{}
