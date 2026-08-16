#ifndef BREAKABL_H
#define BREAKABL_H
#include "platform.h"

struct GXObject;

void BreakTile(int32 x, int32 y);
void PlayerTryBreakStuff(int32 x, int32 y);

void FUN_0041b3b0();

void ob237Init(struct GXObject* gob, BOOL removed);
void ob284Init(struct GXObject* gob, BOOL removed);
void ob284DoIt(struct GXObject* gob);

void FUN_0041b700(struct GXObject* gob);

#endif
