#ifndef PAR_H
#define PAR_H
#include "platform.h"

struct GXLoadObject;
struct GXObject;

typedef struct ParaObject
{
	uint32 gdo_flags; // 00
	struct GXLoadObject* gdo_objectLoadData; // 04
	uint32 gdo_currentFrameGroup; // 08
	uint32 gdo_currentFrameNdx; // 0C
	int32 gdo_xoffset; // 10
	int32 gdo_yoffset; // 14
	int32 gdo_dist; // 18
	int32 gdo_animSpeed; // 1C
	int32 gdo_animTimer; // 20
	// 24
} ParaObject;

typedef struct ParaStrip
{
	uint32 prs_flags; // 00
	int32 prs_xOffset; // 04
	int32 prs_yPos; // 08
	int32 prs_yPos2; // 0C
	int32 prs_xSpeed; // 10
	int32 prs_ySpeed; // 14
	int32 prs_xVel; // 18
	int32 prs_yVel; // 1C
	int32 prs_xold; // 20
	int32 prs_yold; // 24
	int32 prs_firstImageNdx; // 28
	int32 prs_lastImageNdx; // 2C
	void* prs_objects; // 30
	// 34
} ParaStrip;

typedef struct Parallax
{
	uint32 par_flags; // 00
	int32 par_height; // 04
	int32 par_oldXPos; // 08
	int32 par_oldYPos; // 0C
	uint32 par_yPos; // 10
	int32 par_ySpeed; // 14
	ParaStrip* par_strips[1]; // 18
	// 1C
} Parallax;

void ParaContainerInit(struct GXObject* gob, BOOL removed);
void ParaContainerInit2(struct GXObject* gob, BOOL removed);
void ParaContainerDraw(struct GXObject* gob);

void PAR_DrawParallax(struct Parallax* par, int32 x, int32 y);
struct Parallax* PAR_ResolveParallax(void** blktbl, void* pardat);
struct Parallax** PAR_LoadParallaxs(int32 fileidx, void** blktbl);
void PAR_FreeParallaxs(void** blktbl);
void PAR_ClearParallaxs(void);

#endif
