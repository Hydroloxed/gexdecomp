#ifndef M1LEVEL_H
#define M1LEVEL_H
#include "platform.h"

struct CDirectory;
struct M1Level;

void M1_LoadLevel(struct CDirectory* dir, struct M1Level* level, int32 fileidx);
BOOL M1_StreamLevel(struct M1Level* level);
void M1_ResolveLevel(struct M1Level* level);
void M1_UnloadLevel(struct M1Level* level);
void M1_ProcessBlockAnims(struct M1Level* level);
void M1_ProcessTileAnims(struct M1Level* level);

#endif
