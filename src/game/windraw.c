#include "windraw.h"
#include "mem.h"
#include "platform.h"
#include "unimplemented.h"
#include <stdarg.h>
#include <stdlib.h>

// 0043daf0
void DRAW_Init(void)
{
    UNIMPLEMENTED;
}

// 0043db50
void FUN_0043db50(void)
{
    UNIMPLEMENTED;
}

// 0043db70
void CEL_DrawCels(BOOL forReal)
{
    UNIMPLEMENTED;
}

// 0043dc70
void FUN_0043dc70(struct CD_UIMAGE* param_1, int16 posx, int16 posy, uint32 param_4, uint32 pixc, uint32 param_6, int16 param_7, int16 param_8)
{
    UNIMPLEMENTED;
}

// 0043e2c0
uint32 FUN_0043e2c0(uint32 pixc)
{
    UNIMPLEMENTED;
    return 0;
}

// 0043e350
void DRAW_CacheInit(void)
{
    UNIMPLEMENTED;
}

// 0043e430
void DRAW_CacheClear(int param_1)
{
    UNIMPLEMENTED;
}

// 0043e580
/*TODO*/ void* IMAGE_FUN_0043e580(struct CD_UIMAGE* param_1)
{
    UNIMPLEMENTED;
    return NULL;
}

// 0043e730
void IMG_Unpack(char* dest, int* control, int byteCount)
{
    UNIMPLEMENTED;
}

// 0043e800
void FUN_0043e800(int param_1, short * param_2, int param_3, int param_4)
{
    UNIMPLEMENTED;
}

// 0043e920
/*TODO*/ void* IMAGE_FUN_0043e920(struct CD_UIMAGE* param_1)
{
    UNIMPLEMENTED;
    return NULL;
}

// 0043eb50
void ReserveAtlasRect(struct Rect* param_1, BOOL param_2)
{
    UNIMPLEMENTED;
}

// 0043ec20
void AllocateTexture(struct Rect* param_1)
{
    UNIMPLEMENTED;
}

// 0043ecf0
uint32 PLUT_0043ecf0(void* plut)
{
    UNIMPLEMENTED;
    return 0;
}

// 0043ee60
void DRAW_RemovePlutCache(uint16* plut)
{
    UNIMPLEMENTED;
}

// 0043eea0
void DRAW_RemoveImageCache(struct CD_UIMAGE* param_1)
{
    UNIMPLEMENTED;
}

// 0043eed0
void FUN_0043eed0(void)
{
    UNIMPLEMENTED;
}

// 0043ef30
void GFX_Init(void)
{
    UNIMPLEMENTED;
}

// 0043f000
void GFX_OpenGraphics(uint32 param_1)
{
    UNIMPLEMENTED;
}

// 0043f050
void GFX_CloseGraphics(void)
{
    UNIMPLEMENTED;
}

// 0043f070
void FUN_0043f070(void)
{
    UNIMPLEMENTED;
}

// 0043f080
void FUN_0043f080(uint32 param_1)
{
    UNIMPLEMENTED;
}

// 0043f290
void FlushAllRegions(void)
{
    UNIMPLEMENTED;
}

// 0043f2d0
void GFX_DoFlush(BOOL param_1)
{
    UNIMPLEMENTED;
}

// 0043f2f0
void GFX_Frame(void)
{
    UNIMPLEMENTED;
}

// 0043f310
void GFX_DoFade(void)
{
    UNIMPLEMENTED;
}

// 0043f450
void GFX_ResetFade(void)
{
    UNIMPLEMENTED;
}

// 0043f490
void GFX_Fade(int32 frames, int32 r1, int32 r2, int32 g1, int32 g2, int32 b1, int32 b2)
{
    UNIMPLEMENTED;
}

// 0043f580
void PAL_WaitForFade(void)
{
    UNIMPLEMENTED;
}

// 0043f700
void TXT_LoadFont(struct FONTType* font, struct CDirectory* dir, int fileidx)
{
    UNIMPLEMENTED;
}

// 0043f7d0 https://decomp.me/scratch/FAmcs 100%
void TXT_UnloadFont(struct FONTType* font)
{
    MEM_Free(font->cels);
}

// 0043f7f0
void TXT_DrawPrint(const char* text)
{
    UNIMPLEMENTED;
}

// 0043fa70
void TXT_DrawPrintP(int32 x, int32 y, const char* text)
{
    UNIMPLEMENTED;
}

// 0043faa0
void TXT_DrawPrintFP(int32 x, int32 y, const char* text, ...)
{
    UNIMPLEMENTED;
}

// 0043fae0
int32 TXT_PixelLength(const char* text)
{
    UNIMPLEMENTED;
    return 0;
}

// 0043fb40
void RM_DrawTiles(struct RM_Map* param_1, struct M1Tile* param_2, int32 param_3, int32 param_4)
{
    UNIMPLEMENTED;
}

// 0043fce0
void RM_DrawScreen(struct RM_Screen* param_1, struct M1Tile* param_2, int32 param_3, int32 param_4)
{
    UNIMPLEMENTED;
}

// 00440430
struct M1Block* FUN_00440430(struct RM_Map* param_1, struct M1Block* param_2, int32 param_3, int32 param_4)
{
    UNIMPLEMENTED;
    return NULL;
}

// 004404b0
int32 FUN_004404b0(struct RM_Map* param_1, int32 param_2, int32 param_3)
{
    UNIMPLEMENTED;
    return 0;
}

// 00440510
void RM_LinkLoPriCels(void)
{
    UNIMPLEMENTED;
}

// 00440560
void RM_LinkHiPriCels(void)
{
    UNIMPLEMENTED;
}

// 004405b0
void RM_LoadTextures(void** blktbl, void* texdata)
{
    UNIMPLEMENTED;
}

// 00440750
void RM_ExtraResolve(struct CD_UIMAGE* param_1)
{
    UNIMPLEMENTED;
}

// 00440830
void GFX_FreeImageCache(void)
{
    UNIMPLEMENTED;
}

// 00440850
void FUN_00440850(void)
{
    UNIMPLEMENTED;
}

// 00440930
void FUN_00440930(void)
{
    UNIMPLEMENTED;
}

// 00440a30
void FUN_00440a30(void)
{
    UNIMPLEMENTED;
}

// 00440cb0
void DrawParaObject(struct ParaObject* param_1, uint32 param_2, uint32 param_3)
{
    UNIMPLEMENTED;
}

// 00440e70
void GOB_LoadTextures(void** blktbl, void* data)
{
    UNIMPLEMENTED;
}

// 00441010
void GOB_ExtraResolve(struct CD_UIMAGE* param_1)
{
    UNIMPLEMENTED;
}

// 00441110
void OBT_FreeObjectTextureMaps(void)
{
    UNIMPLEMENTED;
}

// 00441130
void GFX_InitDrawCells(void)
{
    UNIMPLEMENTED;
}

// 00441150
void GOB_DisplayObjectScaleAndRotate(struct GXObject* param_1)
{
    UNIMPLEMENTED;
}

// 00442de0
int32 FUN_00442de0(uint32 param_1, uint32 param_2)
{
    UNIMPLEMENTED;
    return 0;
}

// 00442e50
void FUN_00442e50(int32* param_1, int32* param_2, int32 angle)
{
    UNIMPLEMENTED;
}

// 004432c0
void GOB_DisplayObjectScale(struct GXObject* gob)
{
    UNIMPLEMENTED;
}

// 00443ae0
void GOB_DisplayCelToQuad(struct GXObject* gob, int32 param_2, int32 param_3, int32 param_4, int32 param_5, int32 param_6, int32 param_7, int32 param_8, int32 param_9, int32 param_10)
{
    UNIMPLEMENTED;
}

// 00444410
void RezzifyPLUT(uint16* plut)
{
    UNIMPLEMENTED;
}

// 00444530
void GOB_RezzifyObject(struct GXObject* gob)
{
    UNIMPLEMENTED;
}

// 00444590
void GOB_DisplayObject(struct GXObject* gob)
{
    UNIMPLEMENTED;
}

// 00444800
void DrawARect(void* dunno, int32 x, int32 y, int32 w, int32 h, uint32 color, uint32 pixc)
{
    UNIMPLEMENTED;
}

// 00444930
void my_vsprintf(char* buffer, const char* format, va_list vlist)
{
    UNIMPLEMENTED;
}

// 00444bf0
static char* FUN_00444bf0(uint32 param_1, char* param_2, uint32 param_3)
{
    UNIMPLEMENTED;
    return NULL;
}

// 00444c90
static BOOL InitVRamAndDithering(void)
{
    UNIMPLEMENTED;
    return 0;
}

// 00444d10
BOOL FillRectRGB(struct Rect* param_1, uint8 r, uint8 g, uint8 b)
{
    UNIMPLEMENTED;
    return 0;
}

// 00444dc0
void CEL_DrawCel(struct CD_CEL* cel)
{
    UNIMPLEMENTED;
}

// 00445140
void CEL_DrawCelList(struct CD_CEL* cellist)
{
    UNIMPLEMENTED;
}

// 00445170
BOOL FUN_00445170(void)
{
    UNIMPLEMENTED;
    return 0;
}

// 00445180
uint32 FUN_00445180(uint32 param_1, uint32 param_2)
{
    UNIMPLEMENTED;
    return 0;
}

// 004451a0
uint32 FUN_004451a0(uint32 param_1, uint32 param_2, uint32 param_3, uint32 param_4)
{
    UNIMPLEMENTED;
    return 0;
}

// 004451e0
BOOL TransferImageToRect(struct Rect* param_1, uint16* param_2)
{
    UNIMPLEMENTED;
    return 0;
}

// 00445240
void* FUN_00445240(void* param_1)
{
    UNIMPLEMENTED;
    return NULL;
}

// 00445270
void* FUN_00445270(void* param_1)
{
    UNIMPLEMENTED;
    return NULL;
}

// 00445280
void FUN_00445280(/*AtlasRegion*/ void* param_1, uint16 x, uint16 y, uint16 w, uint16 h)
{
    UNIMPLEMENTED;
}

// 004452d0
/*DrawBuffer*/ void* FUN_004452d0(/*DrawBuffer*/ void* param_1, uint16 x, uint16 y, uint16 w, uint16 h)
{
    UNIMPLEMENTED;
    return NULL;
}

// 00445340
void CEL_SetInit(uint8 param_1)
{
    UNIMPLEMENTED;
}

// 00445350
void FUN_00445350(/*CD_CEL*/ void* param_1, int32 param_2, int32 param_3, int32 param_4)
{
    UNIMPLEMENTED;
}

// 00445380
BOOL FUN_00445380(void)
{
    UNIMPLEMENTED;
    return 0;
}

// 00445390
void FUN_00445390(/*CD_CEL*/ void* param_1)
{
    UNIMPLEMENTED;
}

// 004457b0
void FUN_004457b0(/*CD_CEL*/ void* param_1)
{
    UNIMPLEMENTED;
}

// 004459e0
void FUN_004459e0(/*CD_CEL*/ void* param_1)
{
    UNIMPLEMENTED;
}

// 00445ca0
void FUN_00445ca0(/*CD_CEL*/ void* param_1)
{
    UNIMPLEMENTED;
}

// 004461c0
void FUN_004461c0(/*CD_CEL*/ void* param_1)
{
    UNIMPLEMENTED;
}

// 00446430
void FUN_00446430(/*CD_CEL*/ void* param_1)
{
    UNIMPLEMENTED;
}

// 004466a0
void FUN_004466a0(int32 x, int32 y, int32 w, int32 h, uint32 rgb555Value, BOOL doDarken)
{
    UNIMPLEMENTED;
}

// 00446890
void FUN_00446890(/*CD_CEL*/ void* param_1, int32 param_2)
{
    UNIMPLEMENTED;
}

// 00447680
void FUN_00447680(int32 param_1, int32 param_2, int32 param_3, uint32 param_4, int32 param_5, int32 param_6, uint32 param_7, int32 param_8)
{
    UNIMPLEMENTED;
}

// 00447850
void FUN_00447850(int32 param_1, int32 param_2)
{
    UNIMPLEMENTED;
}

// 00448560
void FUN_00448560(int32 param_1, int32 param_2, int32 param_3, uint32 param_4, int32 param_5, int32 param_6, uint32 param_7, int32 param_8)
{
    UNIMPLEMENTED;
}

// 00448710
void FUN_00448710(/*CD_CEL*/ void* param_1, int32 param_2)
{
    UNIMPLEMENTED;
}

// 00449500
void FUN_00449500(int32 param_1, int32 param_2, uint32 param_3, uint32 param_4, int32 param_5, int32 param_6, uint32 param_7, int32 param_8)
{
    UNIMPLEMENTED;
}
