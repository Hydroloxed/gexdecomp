#ifndef TILES_H
#define TILES_H
#include "platform.h"

struct GXObject;
struct M1Block;
struct M1Level;
struct RM_Map;

void FUN_0042cc70(BOOL param_1, struct GXObject* gob);
BOOL TILES_CheckHorizForcedScroll(struct GXObject* param_1, void* cb);
BOOL TILES_CheckVertForcedScroll(struct GXObject* param_1, void* cb);
struct M1Block* TILES_GetBlockAddress(struct RM_Map* param_1, struct M1Block** param_2, int32 param_3, int32 param_4);
BOOL TILES_CheckOneXPoint(struct M1Level* param_1, struct GXObject* gob, void* cb, int32 yoff);
BOOL TILES_CheckXTileClid(struct M1Level* param_1, struct GXObject* gob, void* cb);
BOOL TILES_CheckYTileClid(struct M1Level* param_1, struct GXObject* gob, void* cb);
BOOL FUN_0042d4e0(struct GXObject* gob, struct M1Block* blk);
BOOL FUN_0042d5c0(struct GXObject* gob, struct M1Block* blk);
BOOL FUN_0042d680(struct GXObject* gob, struct M1Block* blk);
BOOL FUN_0042d6e0(struct GXObject* gob, struct M1Block* blk);
BOOL FUN_0042d7b0(struct GXObject* gob, struct M1Block* blk);
BOOL FUN_0042d7c0(struct GXObject* gob, struct M1Block* blk);
BOOL FUN_0042d910(struct GXObject* gob, struct M1Block* blk);
BOOL FUN_0042da40(struct GXObject* gob, struct M1Block* blk);
BOOL FUN_0042dab0(struct GXObject* gob, struct M1Block* blk);
BOOL FUN_0042db90(struct GXObject* gob, struct M1Block* blk);
BOOL FUN_0042dbb0(struct GXObject* gob, struct M1Block* blk);
BOOL FUN_0042dbc0(struct GXObject* gob, struct M1Block* blk);
BOOL FUN_0042dbd0(struct GXObject* gob, struct M1Block* blk);
BOOL FUN_0042dce0(struct GXObject* gob, struct M1Block* blk);
BOOL FUN_0042dcf0(struct GXObject* gob, struct M1Block* blk);
BOOL FUN_0042dd10(struct GXObject* gob, struct M1Block* blk);
BOOL FUN_0042dd40(struct GXObject* gob, struct M1Block* blk);
BOOL FUN_0042dd70(struct GXObject* gob, struct M1Block* blk);
BOOL FUN_0042dda0(struct GXObject* gob, struct M1Block* blk);
BOOL FUN_0042ddd0(struct GXObject* gob, struct M1Block* blk);
BOOL FUN_0042de00(struct GXObject* gob, struct M1Block* blk);
BOOL FUN_0042de30(struct GXObject* gob, struct M1Block* blk);
BOOL FUN_0042de50(struct GXObject* gob, struct M1Block* blk);
BOOL FUN_0042de80(struct GXObject* gob, struct M1Block* blk);
BOOL FUN_0042deb0(struct GXObject* gob, struct M1Block* blk);
BOOL FUN_0042dee0(struct GXObject* gob, struct M1Block* blk);
BOOL FUN_0042df10(struct GXObject* gob, struct M1Block* blk);
BOOL FUN_0042df40(struct GXObject* gob, struct M1Block* blk);
BOOL FUN_0042df80(struct GXObject* gob, struct M1Block* blk);
BOOL FUN_0042e040(struct GXObject* gob, struct M1Block* blk);
BOOL FUN_0042e110(struct GXObject* gob, struct M1Block* blk);
BOOL FUN_0042e1e0(struct GXObject* gob, struct M1Block* blk);

#endif
