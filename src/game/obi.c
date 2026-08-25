#include "obi.h"
#include "platform.h"
#include "unimplemented.h"
#include <stddef.h>

// 0040f8c0
void OBI_IntroduceAllImmediate(ObjectIntroTracker* oit)
{
    UNIMPLEMENTED;
}

// 0040f910
void OBI_IntroduceObjects(ObjectIntroTracker* oit,
                          int32 cameraX,
                          int32 cameraY,
                          BOOL isInLoad)
{
    UNIMPLEMENTED;
}

// 0040fce0
BOOL OBI_CheckRemoveObject(struct GXObject* gob)
{
    UNIMPLEMENTED;
    return 0;
}

// 0040fd50
void OBI_InitializeObjectIntroTracker(ObjectIntroTracker* oit,
                                      void* addFunc,
                                      int32 cxScreen,
                                      int32 cyScreen,
                                      int32 dxWrap,
                                      int32 dyWrap,
                                      int32 dpixIntro,
                                      int32 dpixRemove)
{
    UNIMPLEMENTED;
}

// 0040fda0
ObjectIntroTracker* OBI_NewObjectIntroTracker(ObjectIntro* oinFirst,
                                              int32 cntOin,
                                              void* addFunc,
                                              int32 cxScreen,
                                              int32 cyScreen,
                                              int32 dxWrap,
                                              int32 dyWrap,
                                              int32 dpixIntro,
                                              int32 dpixRemove)
{
    UNIMPLEMENTED;
    return NULL;
}
