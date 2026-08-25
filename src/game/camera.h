#ifndef CAMERA_H
#define CAMERA_H
#include "platform.h"

struct GXObject;

void CameraBarrierInit(struct GXObject* gob, BOOL removed);
void CameraBarrierDoIt(struct GXObject* gob);

void SetForcedScrollSpeedObDraw(struct GXObject* gob);

void CAMERA_SaveScrollPosition(void);
void CAMERA_SetScrollPosition(void);
void CAMERA_ClampToMap(void);

#endif
