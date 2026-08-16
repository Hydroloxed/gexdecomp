#ifndef OB_H
#define OB_H

struct GXObFrame;
struct GXLoadObject;
struct GXObject;
struct M1Block;
struct M1Level;
struct ObjectIntro;
struct ObjectIntroTracker;

void GOB_InitObjects();
void GOB_RemoveObject(struct GXObject* gob);
struct GXObject* GOB_AddObject(int type, int x, int y, struct GXLoadObject* glob);
struct GXObject* GOB_AddObjectByIndex(int type, int x, int y, int idx);
void GOB_RemoveMapObject(struct GXObject* gob);
void GOB_AddMapObject(struct ObjectIntro* oi, struct ObjectIntroTracker* oit);
void GOB_Remove(struct GXObject* gob);
void GOB_FreeAllObjects();
void GOB_FreeRemovedObjects();
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