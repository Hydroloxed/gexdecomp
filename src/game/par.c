#include "par.h"
#include "unimplemented.h"
#include <stddef.h>

// 0041fdd0
void ParaContainerInit(struct GXObject* gob, BOOL removed)
{
    UNIMPLEMENTED;
}

// 0041feb0
void ParaContainerInit2(struct GXObject* gob, BOOL removed)
{
    UNIMPLEMENTED;
}

// 0041fec0
void ParaContainerDraw(struct GXObject* gob)
{
    UNIMPLEMENTED;
}

// 0041fef0
void PAR_DrawParallax(struct Parallax* par, int32 x, int32 y)
{
    UNIMPLEMENTED;
}

// 00420190
struct Parallax* PAR_ResolveParallax(void** blktbl, void* pardat)
{
    UNIMPLEMENTED;
    return NULL;
}

// 00420210
struct Parallax** PAR_LoadParallaxs(int32 fileidx, void** blktbl)
{
    UNIMPLEMENTED;
    return NULL;
}

// 004202b0
void PAR_FreeParallaxs(void** blktbl)
{
    UNIMPLEMENTED;
}

// 004202d0
void PAR_ClearParallaxs(void)
{
    UNIMPLEMENTED;
}
