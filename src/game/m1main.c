#include "m1main.h"
#include "bloc.h"
#include "cld.h"
#include "levselct.h"
#include "mem.h"
#include "ob.h"
#include "platform.h"
#include "player.h"
#include "unimplemented.h"
#include "windraw.h"
#include "winmain.h"

// dat 00455c3c 4
int gGameState;

// dat 004a2a64 4
int gLevel;

// dat 004a2968 4
uint8* sM1PlaybackRecordingInfo;

// dat 004a2a80 4
int M1_GameThreadCommand;

// 00409880
void LoadGx(void)
{
    UNIMPLEMENTED;
}

// 004098d0
BOOL ResolveGx(void)
{
    UNIMPLEMENTED;
    return 0;
}

// 00409940
void FreeGx(void)
{
    UNIMPLEMENTED;
}

// 00409970
void FUN_00409970(void)
{
    UNIMPLEMENTED;
}

// 004099b0
void M1_EnsureOldMusicStopped(BOOL param_1)
{
    UNIMPLEMENTED;
}

// 00409a00
void M1_SetIntroDistance(int32 param_1)
{
    UNIMPLEMENTED;
}

// 00409a30
void M1_EnterLevel(struct M1Level* param_1)
{
    UNIMPLEMENTED;
}

// 00409f00
void M1_CheckCheatCodes(void)
{
    UNIMPLEMENTED;
}

// 00409fe0
void FUN_00409fe0(void)
{
    UNIMPLEMENTED;
}

// 0040a010
BOOL M1_PlayLevel(struct M1Level* param_1)
{
    UNIMPLEMENTED;
    return 0;
}

// 0040a660
void M1_ExitLevel(struct M1Level* param_1)
{
    UNIMPLEMENTED;
}

// 0040a8c0
void M1_OpenLevelDirs(void)
{
    UNIMPLEMENTED;
}

// 0040a940
void M1_CloseLevelDirs(void)
{
    UNIMPLEMENTED;
}

// 0040a990
void FUN_0040a990(void)
{
    UNIMPLEMENTED;
}

// 0040aa10
void M1_EnsureLevelLoaded(void)
{
    UNIMPLEMENTED;
}

// 0040aa60
void M1_FreeLevel(void)
{
    UNIMPLEMENTED;
}

// 0040ab00
void FUN_0040ab00(void)
{
    UNIMPLEMENTED;
}

// 0040ab60
void FUN_0040ab60(void)
{
    UNIMPLEMENTED;
}

// 0040abd0
void FUN_0040abd0(void)
{
    UNIMPLEMENTED;
}

// 0040ad40
void M1_DoLevel(void)
{
    UNIMPLEMENTED;
}

// OG function contains a weird "xor %ebx,%ebx", even though ebx is never used
// in the function...
// 0040af60 https://decomp.me/scratch/Y1NCT 35.42%
void M1_RunGameLoop(void)
{
    int oldlevel;
    unsigned done = 0;
    while(!done)
    {
        oldlevel = gLevel;
        if(M1_GameThreadCommand != 0) break;
        switch(gGameState)
        {
        case 0:
            DoLevelSelectScreen();
            break;
        case 1:
            FUN_0040ab60();
            break;
        case 2:
            FUN_0040abd0();
            break;
        case 4:
            M1_DoLevel();
            break;
        case 5:
            oldlevel = gLevel;
            gLevel = 0x44; // GLUE6 REWARD
            FUN_0040ab60();
            gLevel = oldlevel;
            // fallthrough
        case 3:
            gGameState = 1;
            break;
        default:
            done = 1;
            gLevel = oldlevel;
        }
    }
    M1_EnsureOldMusicStopped(1);
}

// 0040b000 https://decomp.me/scratch/tCP1z 100%
void M1_RunGame(void)
{
    struct FONTType font;

    DRAW_Init();
    MEM_Init();
    SND_Init();
    GFX_OpenGraphics(2);
    GFX_Frame();
    IDL_Open();
    sM1PlaybackRecordingInfo = MEM_Alloc(0x3800);
    GFX_ResetFade();
    TXT_LoadFont(&font, gRootDir, 1);
    GOB_InitObjects();
    CLD_InitCollides();
    BLOC_OpenBlockSupport();
    InitPlayer();
    M1_RunGameLoop();
    FreeGx();
    BLOC_CloseBlockSupport();
    TXT_UnloadFont(&font);
    CDIO_CloseFileSystem();
    GFX_CloseGraphics();
    SND_DeInit();
    MEM_Deinit();
}

// 0040b0a0
BOOL M1_Main(int param_1)
{
    UNIMPLEMENTED;
    M1_RunGame(); // temporary
    return 0;
}

// 0040b2d0
void FUN_0040b2d0(void)
{
    UNIMPLEMENTED;
}

// 0040b320
BOOL FUN_0040b320(void)
{
    UNIMPLEMENTED;
    return 0;
}

// 0040b380
void FUN_0040b380(void)
{
    UNIMPLEMENTED;
}

