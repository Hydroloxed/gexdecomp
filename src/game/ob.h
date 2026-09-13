#ifndef OB_H
#define OB_H
#include "listapi.h"
#include "platform.h"

struct CD_UIMAGE;
struct CollideInfo;
struct CollideObject;
struct GXLoadObject;
struct GXObFrame;
struct GXObject;
struct GXObjectEvent;
struct M1Block;
struct M1Level;
struct ObjectIntro;
struct ObjectIntroTracker;

typedef struct GXAniScript
{
	uint8* gas_scriptPtr; // 00
	uint32 gas_waitCount; // 04
	uint8* gas_stackPtr; // 08
	uint32 gas_stack[2]; // 0C
	uint8* gas_loopPtr; // 14
	uint32 gas_loopVars[2]; // 18
	// 20
} GXAniScript;

typedef struct GXHotTable
{
	int32 gxhtb_numTables; // 00
	// gxhtb_tables[x]:
	//   gxhtb_tables[x][0] - number of hotspots
	//   gxhtb_tables[x][1] - hotspot 1 x
	//   gxhtb_tables[x][2] - hotspot 1 y
	//   gxhtb_tables[x][3] - hotspot 2 x
	//   ...
	int32** gxhtb_tables; // 04
	// 08
} GXHotTable;

typedef struct GXHitArea
{
	int32 gxha_left; // 00
	int32 gxha_top; // 04
	int32 gxha_right; // 08
	int32 gxha_bottom; // 0C
	// 10
} GXHitArea;

typedef struct GXObImage
{
	int32 gximg_offset; // 00
	int32 gximg_flags; // 04
	struct CD_UIMAGE* gximg_image; // 08
	uint16* gximg_plut; // 0C
	int32 gximg_pixc; // 10
	// 14
} GXObImage;

typedef struct GXContour
{
	uint32 gxcon_xoffset; // 00
	uint32 gxcon_yoffset; // 04
	uint32 gxcon_width; // 08
	uint8 gxcon_data[4]; // 0C
	// 10
} GXContour;


typedef struct GXPath
{
	uint16 gxpath_length; // 00
	uint8 gxpath_startmark[2]; // 02
	uint8 gxpath_data[4]; // 04
	// 08
} GXPath;

typedef struct GXObFrame
{
	int32 gxfrm_left; // 00
	int32 gxfrm_top; // 04
	int32 gxfrm_right; // 08
	int32 gxfrm_bottom; // 0C
	struct GXHitArea* gxfrm_hitAreas;// 10
	GXHotTable* gxfrm_hotspots; // 14
	GXObImage** gxfrm_images; // 18
	GXPath* gxfrm_path; // 1C
	GXContour* gxfrm_contour; // 20
	// 24
} GXObFrame;

typedef struct GXLoadObject
{
	struct GXObFrame** gxlob_anims; // 00
	uint8** gxlob_scripts; // 04
	uint32 gxlob_version; // 08
	int32 gxlob_numAnims; // 0C
	int32* gxlob_numFrames; // 10 - yes, this is a pointer!
	// 14	
} GXLoadObject;

typedef struct GXObjectData
{
	void (*gdat_initFunc)( struct GXObject*, int isRemoving ); // 00
	void (*gdat_doitFunc)( struct GXObject* ); // 04
	void (*gdat_drawFunc)( struct GXObject* ); // 08
	void (*gdat_clidFunc)( struct GXObject*, struct CollideInfo* ); // 0C
	uint32 gdat_points; // 10 - score given when the ob is killed/activated/whatever
	uint32 gdat_flags; // 14 -  same as GXObject:gob_flags
	// 18
} GXObjectData;

// There should be a struct GXObjecTableEntry here too, but I've never seen that
// in Ghidra so skipping it...

typedef struct GXObjectEvent
{
	uint32 goe_eventType; // 00
	void* goe_eventScript; // 04
	// 08
} GXObjectEvent;

typedef struct GXObject
{
	struct NodeType gob_node; // 00
	int32 gob_type; // 08
	struct GXLoadObject* gob_objectLoadData; // 0C
	struct GXAniScript gob_scripts[2]; // 10
	int32 gob_currentFrameGroup; // 50
	int32 gob_currentFrameIndex; // 54
	void (*gob_initFunc)( struct GXObject*, int isRemoving ); // 58
	void (*gob_doitFunc)( struct GXObject* ); // 5C
	void (*gob_drawFunc)( struct GXObject* ); // 60
	void (*gob_clidFunc)( struct GXObject*, struct CollideInfo* ); // 64
	uint32 gob_points; // 68
#define OB_LAYER_MASK    0xf
#define OB_CLDPRIO_MASK  0xf0
#define OB_CLDTYPE_MASK  0xf00
// 0x1000 is unused
#define OB_IS_MAPOBJECT  0x2000
#define OB_ALLOWXCHANGE  0x4000
#define OB_ALLOWYCHANGE  0x8000
// 0x10000 is unknown
// 0x20000 is unknown
// 0x40000 is unknown
// 0x80000 is unknown
#define OB_REMOVED 		 0x100000
#define OB_TRYING_TO_EAT 0x200000
// 0x400000 is unknown
#define OB_PARAOBJECT 	 0x800000
#define OB_EVENTMASK 	 0x1f000000
// 0x2000000 is unknown
#define OB_FLIPY 		 0x40000000
#define OB_FLIPX 		 0x80000000
	uint32 gob_flags; // 6C
	int32 gob_state; // 70
	int32 gob_newState; // 74
	int32 gob_xpos; // 78
	int32 gob_ypos; // 7C
	int32 gob_xVel; // 80
	int32 gob_maxxVel; // 84
	int32 gob_xAccl; // 88
	int32 gob_yVel; // 8C
	int32 gob_maxyVel; // 90
	int32 gob_yAccl; // 94
	int32 gob_work0; // 98
	int32 gob_work1; // 9C
	int32 gob_work2; // A0
	int32 gob_work3; // A4
	int32 gob_work4; // A8
	int32 gob_work5; // AC
	int32 gob_work6; // B0
	int32 gob_work7; // B4
	int32 gob_flashTime; // B8
	uint32 gob_pixc; // BC
	void* gob_plut; // C0
	int32 gob_angle; // C4
	int32 gob_xScale; // C8
	int32 gob_yScale; // CC
	int32 gob_removeDist; // D0
	int32 gob_xold; // D4
	int32 gob_yold; // D8
	int32 gob_oldContourDist; // DC
	int32 gob_flags2; // E0
	int32 gob_leftEdge; // E4
	int32 gob_rightEdge; // E8
	int32 gob_topEdge; // EC
	int32 gob_bottomEdge; // F0
	int32 gob_oldGroup; // F4
	int32 gob_oldIndex; // F8
	int32 gob_oldFlags; // FC
	int32 gob_sWork0; // 100
	int32 gob_sWork1; // 104
	int32 gob_sWork2; // 108
	int32 gob_sWork3; // 10C
	struct GXObject* gob_platform; // 110
	int32 gob_platHitType; // 114
	int32 gob_dummy_for_pluts; // 118
	uint16 gob_workPLUT[32]; // 11C
	struct GXObject* gob_parent; // 15C
	struct GXObject* gob_child; // 160
	struct GXObject* gob_sibling; // 164
	uint32 gob_ClidPriority; // 168
	int (*gob_pCheckClidFunc)( struct GXObject*, struct GXObject* ); // 16C
	struct GXHitArea* gob_phaClid; // 170
	struct GXHitArea* gob_phaClidWith; // 174
	struct GXObject* gob_pgobClidWith; // 178
	uint32 gob_ClidWithPri; // 17C
	struct CollideObject* gob_pclo; // 180
	int32 gob_checkXpos; // 184
	int32 gob_checkYpos; // 188
	struct ObjectIntro* gob_poin; // 18C
	struct ObjectIntroTracker* gob_poit; // 190
	struct GXObjectEvent gob_events[12]; // 194
	int32 gob_lastShown; // 1F4
	int32 gob_last_x; // 1F8
	int32 gob_last_y; // 1FC
    int32 gob_dunno; // 200 - something Windows-specific? Debug info doesn't mention this.
	// 204
} GXObject;

extern struct ListType gObjectLists[10];

struct GXLoadObject* GOB_ResolveLoadObject(void** blktbl, void* ptr);
void GOB_CleanUpLoadObject(struct GXLoadObject* glob);
void GOB_DoIt(struct ListType* gobs);
void GOB_DrawList(struct ListType* gobs);
void GOB_PhysicsStepX(struct GXObject* gob);
void GOB_PhysicsStepY(struct GXObject* gob);
void GOB_CallInit(struct GXObject* gob, BOOL removed);

void GOB_InitObjects(void);
void GOB_RemoveObject(struct GXObject* gob);
struct GXObject* GOB_AddObject(int type, int x, int y, struct GXLoadObject* glob);
struct GXObject* GOB_AddObjectByIndex(int type, int x, int y, int idx);
void GOB_RemoveMapObject(struct GXObject* gob);
void GOB_AddMapObject(struct ObjectIntro* oi, struct ObjectIntroTracker* oit);
void GOB_Remove(struct GXObject* gob);
void GOB_FreeAllObjects(void);
void GOB_FreeRemovedObjects(void);
void GOB_SetDisplayPriority(struct GXObject* gob, int prio);
void GOB_PutObjectBehindObject(struct GXObject* newob, struct GXObject* oldob);
void GOB_PutObjectInFrontOfObject(struct GXObject* newob, struct GXObject* oldob);
int GOB_GetHotSpot(struct GXObject* gob, int hottable, int hotspot, int* x, int* y);
struct M1Block* GOB_GetBlockAddress(struct M1Level* lev, int dunno1, int dunno2);
void GOB_DisplayObjectAtPos(struct GXObject* gob, int frameidx, int framegrp, int x, int y);
int GOB_LandedOnContoursExactly(struct GXObject* gob);
int GOB_LandedOnContours(struct GXObject* gob, int maxydist);
int GOB_LandedOnContoursWithOffset(struct GXObject* gob, int maxydist);
void SND_PlaySound1(struct GXObject* gob, int sndid, int vol, int dunno);
void SND_PlaySound2(struct GXObject* gob, int sndid, int vol);
void SND_PlaySound3(struct GXObject* gob, int sndid);
void SND_PlaySound4(int sndid, int vol);
struct GXObFrame* GOB_GetCurrentFrameWithDefault(struct GXObject* gob);
struct GXObFrame* GOB_GetOldFrame(struct GXObject* gob);
struct GXObFrame* GOB_GetCurrentFrame(struct GXObject* gob);
struct GXObFrame* GOB_GetCurrentFrameOrReset(struct GXObject* gob);

#endif