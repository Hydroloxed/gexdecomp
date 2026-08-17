#ifndef PAR_H
#define PAR_H
#include "platform.h"

struct GXObject;
struct Parallax;

void ParaContainerInit(struct GXObject* gob, BOOL removed);
void ParaContainerInit2(struct GXObject* gob, BOOL removed);
void ParaContainerDraw(struct GXObject* gob);

void PAR_DrawParallax(struct Parallax* par, int32 x, int32 y);
struct Parallax* PAR_ResolveParallax(void** blktbl, void* pardat);
struct Parallax** PAR_LoadParallaxs(int32 fileidx, void** blktbl);
void PAR_FreeParallaxs(void** blktbl);
void PAR_ClearParallaxs(void);

#endif
