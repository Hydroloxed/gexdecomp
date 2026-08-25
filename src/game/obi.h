#ifndef OBI_H
#define OBI_H
#include "platform.h"

struct GXObject;

typedef struct ObjectIntro
{
	// &0xffff0000 - gob_xpos
	// &0x0000ffff - gob_ypos
	uint32 oin_InitPos; // 00
	// &0x3fff - gob_type
	// &0x4000 - is enabled? (will not be added if this flag is not set)
	// &0x8000 - does object exist in game? (set and unset at runtime)
	uint32 oin_IndexByYNType; // 04
	// &0x0000ffff - LoadID (index in rmp_objectGroups[0])
	// &0xffff0000 - Flags
	//   &0xc0000000 - valid flags (OB_FLIPX and OB_FLIPY)
	//   &0x0f000000 - object priority
	uint32 oin_FlagsNLoadID; // 08
	void* oin_pWired; // 0C
	// 10
} ObjectIntro;

typedef struct ObjectIntroTracker
{
	ObjectIntro* oit_rgOinFirst; // 00
	void* oit_pAddFunc; // 04
	int32 oit_cntOin; // 08
	int32 oit_dxWrap; // 0C
	int32 oit_dyWrap; // 10
	int32 oit_iXL; // 14
	int32 oit_iXR; // 18
	int32 oit_iYT; // 1C
	int32 oit_iYB; // 20
	int32 oit_dxScreen; // 24
	int32 oit_dyScreen; // 28
	int32 oit_cxScreen; // 2C
	int32 oit_cyScreen; // 30
	int32 oit_dpixIntro; // 34 - introduction distance in pixels
	int32 oit_dpixRemove; // 38 - removal distancce in pixels
	// 3C
} ObjectIntroTracker;

void OBI_IntroduceAllImmediate(ObjectIntroTracker* oit);
void OBI_IntroduceObjects(ObjectIntroTracker* oit,
                          int32 cameraX,
                          int32 cameraY,
                          BOOL isInLoad);
BOOL OBI_CheckRemoveObject(struct GXObject* gob);
void OBI_InitializeObjectIntroTracker(ObjectIntroTracker* oit,
                                      void* addFunc,
                                      int32 cxScreen,
                                      int32 cyScreen,
                                      int32 dxWrap,
                                      int32 dyWrap,
                                      int32 dpixIntro,
                                      int32 dpixRemove);
ObjectIntroTracker* OBI_NewObjectIntroTracker(ObjectIntro* oinFirst,
                                              int32 cntOin,
                                              void* addFunc,
                                              int32 cxScreen,
                                              int32 cyScreen,
                                              int32 dxWrap,
                                              int32 dyWrap,
                                              int32 dpixIntro,
                                              int32 dpixRemove);

#endif
