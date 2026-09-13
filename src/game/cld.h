#ifndef CLD_H
#define CLD_H
#include "listapi.h"
#include "platform.h"

struct GXObFrame;
struct GXObject;

typedef struct CollideObject
{
	struct NodeType clo_node; // 00
	struct GXObject* clo_pgobThis; // 08
	// 0C
} CollideObject;

typedef struct FrameInfo
{
	struct GXObFrame* fi_frame; // 00
	int32 fi_angle; // 04
	int32 fi_xpos; // 08
	int32 fi_ypos; // 0C
	int32 fi_xflip; // 10
	int32 fi_yflip; // 14
	int32 fi_left; // 18
	int32 fi_right; // 1C
	int32 fi_top; // 20
	int32 fi_bottom; // 24
	// 28
} FrameInfo;


typedef struct CollideInfo
{
	int32 cld_small; // 00
	int32 cld_type; // 04
	FrameInfo cld_g; // 08
	FrameInfo cld_o; // 30
	// 58
} CollideInfo;

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
