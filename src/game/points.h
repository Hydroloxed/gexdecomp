#ifndef POINTS_H
#define POINTS_H
#include "platform.h"

struct GXObject;

void HUDInit(struct GXObject* gob, BOOL removed);
void HUDDraw(struct GXObject* gob);

void PointsTextInit(struct GXObject* gob, BOOL removed);
void PointsTextDraw(struct GXObject* gob);

void PNT_AddPoints(struct GXObject* origin, int32 points, int32 xoff, int32 yoff);
void PNT_AddPointsFromTable(struct GXObject* origin, int32 xoff, int32 yoff);

#endif
