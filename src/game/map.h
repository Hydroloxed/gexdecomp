#ifndef MAP_H
#define MAP_H
#include "platform.h"

struct CollideInfo;
struct GXObject;

int32 FUN_00429190(int param_1, int param_2, int param_3, int param_4);
void PasswordGet(char* password);
BOOL PasswordDecode(char* param_1);
BOOL PasswordIsValid(char* param_1);
void PasswordGetChars(char* param_1);
void PasswordPutBits(char* param_1, uint32 value, uint32 first, uint32 num);
int PasswordDecodeGetBits(char* param_1, uint32 first, uint32 num);
void PasswordEncrypt(char* param_1, uint8* param_2, int param_3);
int32 PasswordDecrypt(char* param_1, char* param_2);
void PasswordEnterLevel(void);
void ob220Init(struct GXObject* gob, BOOL removed);
void ob220DoIt(struct GXObject* gob);
void ob220Draw(struct GXObject* gob);
struct GXObject* RemoteFindWithLevel(int32 level);
struct GXObject* FUN_00429b80(void);
struct GXObject* FUN_00429bd0(void);
struct GXObject* FUN_00429c10(uint32 param_1);
struct GXObject* GOB_FindFirstWithType(uint32 gobtype);
int32 FUN_00429c90(void);
void FUN_00429cb0(int param_1, int param_2);
void MapVcrDoIt(struct GXObject* gob);
int FUN_0042a560(struct GXObject* param_1, int param_2);
int FUN_0042a5d0(struct GXObject* param_1, int param_2);
BOOL FUN_0042a630(struct GXObject* gob);
void MapVcrDraw(struct GXObject* gob);
void ob262Init(struct GXObject* gob, BOOL removed);
void ob262DoIt(struct GXObject* gob);
void ob262Draw(struct GXObject* gob);
void ob270Init(struct GXObject* gob, BOOL removed);
void ob270DoIt(struct GXObject* gob);
void ob270Draw(struct GXObject* gob);
void MapPlayerInit(struct GXObject* gob, BOOL removed);
void FUN_0042b760(int32 x, int32 y);
void MapPlayerDoIt(struct GXObject* gob);
int FUN_0042bfe0(struct GXObject* gob, int32 param_2);
void FUN_0042c0a0(struct GXObject* param_1, struct GXObject* param_2, int param_3);
void FUN_0042c1a0(struct GXObject* gob);
void MapPlayerDraw(struct GXObject* gob);
void FUN_0042c860(struct GXObject* param_1, int param_2, int param_3);
void FUN_0042ca40(struct GXObject* gob);
void MapPlayerClid(struct GXObject* gob, struct CollideInfo* ci);

#endif
