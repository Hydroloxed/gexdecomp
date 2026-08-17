#ifndef CLD_H
#define CLD_H
#include "platform.h"

struct CollideInfo;
struct CollideObject;
struct FrameInfo;
struct GXObject;

void CLD_InitCollides(void);
BOOL CLD_ComputeAngleEdgesWithFrame(struct FrameInfo* fi);
BOOL CLD_ComputeAngleEdges(struct GXObject* gob, struct FrameInfo* fi);
BOOL CLD_CheckCollisionFunkyAngle(struct GXObject* gob1, struct GXObject* gob2);
BOOL CLD_CheckCollisionAngle(struct GXObject* gob1, struct GXObject* gob2);
BOOL CLD_CheckCollisionNormal(struct GXObject* gob1, struct GXObject* gob2);
void CLD_ProcessCollisions(void);
void CLD_RemoveObjectCollision(struct GXObject* gob);
void CLD_AddObjectCollision(struct GXObject* gob, int cldprio, int cldtype, void* checkClidFunc /* TODO: Type!*/);
void CLD_SetObjectCollisionType(struct GXObject* gob, int cldtype);
void CLD_FreeAllRemovedCollideObjects(void);
void CLD_RemoveAllCollisionObjects(void);
BOOL CLD_CheckAboveContour(struct GXObject* gob, struct CollideInfo* ci);

#endif
