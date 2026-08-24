#include "platform.h"

struct M1Level;

void LoadGx(void);
BOOL ResolveGx(void);
void FreeGx(void);
void FUN_00409970(void);
void M1_EnsureOldMusicStopped(BOOL param_1);
void M1_SetIntroDistance(int32 param_1);
void M1_EnterLevel(struct M1Level* param_1);
void M1_CheckCheatCodes(void);
void FUN_00409fe0(void);
BOOL M1_PlayLevel(struct M1Level* param_1);
void M1_ExitLevel(struct M1Level* param_1);
void M1_OpenLevelDirs(void);
void M1_CloseLevelDirs(void);
void FUN_0040a990(void);
void M1_EnsureLevelLoaded(void);
void M1_FreeLevel(void);
void FUN_0040ab00(void);
void FUN_0040ab60(void);
void FUN_0040abd0(void);
void M1_DoLevel(void);
void M1_RunGameLoop(void);
void M1_RunGame(void);
BOOL M1_Main(int param_1);
void FUN_0040b2d0(void);
BOOL FUN_0040b320(void);
void FUN_0040b380(void);
