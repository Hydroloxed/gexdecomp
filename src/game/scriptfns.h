#ifndef SCRIPTFNS_H
#define SCRIPTFNS_H
#include "platform.h"

struct GXObject;

typedef uint8* (*ScriptFn)(uint8* data, struct GXObject* gob);
extern ScriptFn gScriptFunctions[];

#endif
