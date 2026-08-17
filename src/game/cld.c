#include "cld.h"
#include "listapi.h"
#include "platform.h"
#include "unimplemented.h"

// 0041ca10
void CLD_InitCollides(void);

// 0041ca70
BOOL CLD_ComputeAngleEdgesWithFrame(struct FrameInfo* fi)
{
    UNIMPLEMENTED;
    return 0;
}

// 0041cb80
BOOL CLD_ComputeAngleEdges(struct GXObject* gob, struct FrameInfo* fi)
{
    UNIMPLEMENTED;
    return 0;
}

// 0041cc70
static void CLD_ApplyAngleToPoints(/* loads of params */)
{
    UNIMPLEMENTED;
}

// 0041d010
static void CLD_ComputeAnglePointsWithHitArea(/* loads of params */)
{
    UNIMPLEMENTED;
}

// 0041d0e0
static BOOL CLD_ComputeAnglePointsWithFrame(/* loads of params*/)
{
    UNIMPLEMENTED;
    return 0;
}

// 0041d250
static BOOL CLD_CheckRotatedRects(struct FrameInfo* fi1, struct FrameInfo* fi2)
{
    UNIMPLEMENTED;
    return 0;
}

// 0041d310
BOOL CLD_CheckCollisionFunkyAngle(struct GXObject* gob1, struct GXObject* gob2)
{
    UNIMPLEMENTED;
    return 0;
}

// 0041dd50
BOOL CLD_CheckCollisionAngle(struct GXObject* gob1, struct GXObject* gob2)
{
    UNIMPLEMENTED;
    return 0;
}

// 0041e190
BOOL CLD_CheckCollisionNormal(struct GXObject* gob1, struct GXObject* gob2)
{
    UNIMPLEMENTED;
    return 0;
}

// 0041e5c0
void CLD_ProcessCollisions(void)
{
    UNIMPLEMENTED;
}

// 0041e700
static void CLD_ResetCollides(void)
{
    UNIMPLEMENTED;
}

// 0041e710
static void CLD_CallAllCollisions(void)
{
    UNIMPLEMENTED;
}

// 0041e720
static void CLD_CollideWithRest(int dunno, struct CollideObject* clo)
{
    UNIMPLEMENTED;
}

// 0041e7c0
void CLD_RemoveObjectCollision(struct GXObject* gob)
{
    UNIMPLEMENTED;
}

// 0041e7e0
void CLD_AddObjectCollision(struct GXObject* gob, int cldprio, int cldtype, void* checkClidFunc /* TODO: Type!*/)
{
    UNIMPLEMENTED;
}

// 0041e880
void CLD_SetObjectCollisionType(struct GXObject* gob, int cldtype)
{
    UNIMPLEMENTED;
}

// 0041e8b0
static void CLD_FreeAllRemovedCldObjectsFromList(struct ListType* lst, int32 lstidx)
{
    UNIMPLEMENTED;
}

// 0041e930
void CLD_FreeAllRemovedCollideObjects(void)
{
    UNIMPLEMENTED;
}

// 0041e970
void CLD_RemoveAllCollisionObjects(void)
{
    UNIMPLEMENTED;
}

// 0041e9a0
static void CLD_RemoveAllCldObjsFromList(struct ListType* lst)
{
    UNIMPLEMENTED;
}

// 0041e9d0
BOOL CLD_CheckAboveContour(struct GXObject* gob, struct CollideInfo* ci)
{
    UNIMPLEMENTED;
    return 0;
}
