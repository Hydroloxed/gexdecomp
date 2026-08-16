#include "ob.h"
#include "unimplemented.h"
#include <stdlib.h>

// 004194c0
void GOB_InitObjects()
{
    UNIMPLEMENTED;
}

// 00419520
void GOB_RemoveObject(struct GXObject* gob)
{
    UNIMPLEMENTED;
}

// 004195d0
struct GXObject* GOB_AddObject(int type, int x, int y, struct GXLoadObject* glob)
{
    UNIMPLEMENTED;
    return NULL;
}

// 004196e0
struct GXObject* GOB_AddObjectByIndex(int type, int x, int y, int idx)
{
    UNIMPLEMENTED;
    return NULL;
}

// 00419840
void GOB_RemoveMapObject(struct GXObject* gob)
{
    UNIMPLEMENTED;
}

// 00419870
void GOB_AddMapObject(struct ObjectIntro* oi, struct ObjectIntroTracker* oit)
{
    UNIMPLEMENTED;
}

// 00419a80
void GOB_Remove(struct GXObject* gob)
{
    UNIMPLEMENTED;
}

// 00419aa0
void GOB_FreeAllObjects()
{
    UNIMPLEMENTED;
}

// 00419b20
void GOB_FreeRemovedObjects()
{
    UNIMPLEMENTED;
}

// 00419b80
void GOB_SetDisplayPriority(struct GXObject* gob, int prio)
{
    UNIMPLEMENTED;
}

// 00419bc0
void GOB_PutObjectBehindObject(struct GXObject* newob, struct GXObject* oldob)
{
    UNIMPLEMENTED;
}

// 00419be0
void GOB_PutObjectInFrontOfObject(struct GXObject* newob, struct GXObject* oldob)
{
    UNIMPLEMENTED;
}

// 00419c00
int GOB_GetHotSpot(struct GXObject* gob, int hottable, int hotspot, int* x, int* y)
{
    UNIMPLEMENTED;
    return 0;
}

// 00419fe0
struct M1Block* GOB_GetBlockAddress(struct M1Level* lev, int dunno1, int dunno2)
{
    UNIMPLEMENTED;
    return NULL;
}

// 0041a030
void GOB_DisplayObjectAtPos(struct GXObject* gob, int frameidx, int framegrp, int x, int y)
{
    UNIMPLEMENTED;
}

// 0041a090
int GOB_LandedOnContoursExactly(struct GXObject* gob)
{
    UNIMPLEMENTED;
    return 0;
}

// 0041a0a0
int GOB_LandedOnContours(struct GXObject* gob, int maxydist)
{
    UNIMPLEMENTED;
    return 0;
}

// 0041a160
int GOB_LandedOnContoursWithOffset(struct GXObject* gob, int maxydist)
{
    UNIMPLEMENTED;
    return 0;
}

// 0041a250
void SND_PlaySound1(struct GXObject* gob, int sndid, int vol, int dunno)
{
    UNIMPLEMENTED;
}

// 0041a320 https://decomp.me/scratch/BHS04 100%
void SND_PlaySound2(struct GXObject* gob, int sndid, int vol)
{
    SND_PlaySound1(gob, sndid, vol >> 1, 64);
}

// 0041a340 https://decomp.me/scratch/Kh93q 100%
void SND_PlaySound3(struct GXObject* gob, int sndid)
{
    SND_PlaySound1(gob, sndid, 96, 64);
}

// 0041a360
void SND_PlaySound4(int sndid, int vol)
{
    UNIMPLEMENTED;
}

// 0041a380
struct GXObFrame* GOB_GetCurrentFrameWithDefault(struct GXObject* gob)
{
    UNIMPLEMENTED;
    return NULL;
}

// 0041a400
struct GXObFrame* GOB_GetOldFrame(struct GXObject* gob)
{
    UNIMPLEMENTED;
    return NULL;
}

// 0041a480
struct GXObFrame* GOB_GetCurrentFrame(struct GXObject* gob)
{
    UNIMPLEMENTED;
    return NULL;
}

// 0041a500
struct GXObFrame* GOB_GetCurrentFrameOrReset(struct GXObject* gob)
{
    UNIMPLEMENTED;
    return NULL;
}
