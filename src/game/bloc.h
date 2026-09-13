#ifndef BLOC_H
#define BLOC_H

struct CDirectory;

void* BLOC_ResolvePtr(void** blktbl, void* ptr);
void BLOC_OpenBlockSupport(void);
void BLOC_CloseBlockSupport(void);
void BLOC_FreeBlocks(void** blktbl);
void BLOC_LoadBlocks(struct CDirectory* dir, int diridx, void** blktbl, void** outptr);
void BLOC_WaitForBlocksToLoad(void);

#endif
