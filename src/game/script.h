#ifndef SCRIPT_H
#define SCRIPT_H
#include "platform.h"

struct GXAniScript;
struct GXObject;

uint8* GOB_RunScript(struct GXObject* gob, struct GXAniScript* script, uint8* bytecode);

#endif
