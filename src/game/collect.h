#ifndef COLLECT_H
#define COLLECT_H
#include "platform.h"

struct CollideInfo;
struct GXObject;

int32 COL_GetRemoteStatus(int32 level);
void COL_ClearStartDoor(void);
void COL_ClearStartDoors(void);
void COL_CollectAnItem(int32 coltype);
void COL_ResetCollectibles(void);
int32 COL_RemoveOldVcrs(void);

void CameraInit(struct GXObject* gob, BOOL removed);
void CameraDoIt(struct GXObject* gob);
void CameraDraw(struct GXObject* gob);
void CameraClid(struct GXObject* gob, struct CollideInfo* ci);

void RemoteInit(struct GXObject* gob, BOOL removed);
void RemoteDoIt(struct GXObject* gob);
void RemoteClid(struct GXObject* gob, struct CollideInfo* ci);
void RemoteDraw(struct GXObject* gob);

void TapeInit(struct GXObject* gob, BOOL removed);
void TapeDoIt(struct GXObject* gob);
void TapeClid(struct GXObject* gob, struct CollideInfo* ci);
void TapeDraw(struct GXObject* gob);

#endif
