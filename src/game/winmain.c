#include "winmain.h"
#include "mem.h"
#include "platform.h"
#include "unimplemented.h"
#include <stddef.h>
#include <stdlib.h>
#include <windows.h>

struct CDirectory* gRootDir;
struct CDirectory gRootDirX;

// 00401000
int32 DDRAW_GetDisplayMode(void)
{
    UNIMPLEMENTED;
    return 0;
}

// 004010a0
BOOL DDRAW_Create(void)
{
    UNIMPLEMENTED;
    return 0;
}

// 004010e0
void DDRAW_Destroy(void)
{
    UNIMPLEMENTED;
}

// 00401100
BOOL DDRAW_SetResolution(int param_1, int param_2)
{
    UNIMPLEMENTED;
    return 0;
}

// 00401270
BOOL FUN_00401270(int param_1, int param_2, int param_3)
{
    UNIMPLEMENTED;
    return 0;
}

// 00401340
void FUN_00401340(void* param_1)
{
    UNIMPLEMENTED;
}

// 004013e0
void FUN_004013e0(uint32 param_1)
{
    UNIMPLEMENTED;
}

// 00401720
BOOL SND_CreateDirectSoundBuffer(int32 param_1, /*IDirectSoundBuffer*/ void** param_2, int32 param_3, int32 sampleRate)
{
    UNIMPLEMENTED;
    return 0;
}

// 004017d0
BOOL SND_FillDirectSoundBuffer(/*IDirectSoundBuffer*/ void* param_1, int32 offset, int32 param_3, int32 numbytes)
{
    UNIMPLEMENTED;
    return 0;
}

// 004018b0
BOOL FUN_004018b0(/*IDirectSoundBuffer*/ void* param_1, int32 param_2, int32 param_3)
{
    UNIMPLEMENTED;
    return 0;
}

// 004019a0
BOOL VFX_SetTableEntry(int32 param_1, int32 param_2, int32 param_3)
{
    UNIMPLEMENTED;
    return 0;
}

// 004019c0
BOOL FUN_004019c0(void)
{
    UNIMPLEMENTED;
    return 0;
}

// 004019d0
void VFX_DoPlay(void)
{
    UNIMPLEMENTED;
}

// 00401ad0
void VFX_QueueToLoad(int32 param_1)
{
    UNIMPLEMENTED;
}

// 00401b00
BOOL VFX_IsPlaying(void)
{
    UNIMPLEMENTED;
    return 0;
}

// 00401b40
void FreeSFX(void)
{
    UNIMPLEMENTED;
}

// 00401b50
void SND_PlaySound(int32 param_1, int32 pan, int32 dunno, int32 volume, int32 dunno2)
{
    UNIMPLEMENTED;
}

// 00401d00
void SND_PlayPreviewSound(int32 param_1, int32 volume)
{
    UNIMPLEMENTED;
}

// 00401df0
void SND_LoadSounds(int32* param_1)
{
    UNIMPLEMENTED;
}

// 00401e20
void SetSoundEffectVolume(int param_1, BOOL playPreviewSound)
{
    UNIMPLEMENTED;
}

// 00401e70
void SetVoiceVolume(int param_1, BOOL playPreviewSound)
{
    UNIMPLEMENTED;
}

// 00401ed0
void SetMusicVolume(int32 param_1, BOOL playPreviewSound)
{
    UNIMPLEMENTED;
}

// 00401f20
void SFX_Open(void)
{
    UNIMPLEMENTED;
}

// 00401f90
void SND_Destroy(void)
{
    UNIMPLEMENTED;
}

// 00401fb0
void SND_Init(void)
{
    UNIMPLEMENTED;
}

// 00402080
void SND_DeInit(void)
{
    UNIMPLEMENTED;
}

// 00402140
void FUN_00402140(int32 param_1)
{
    UNIMPLEMENTED;
}

// 00402400
void* FUN_00402400(uint8 param_1, uint8 param_2, uint8 param_3, int32 param_4, int32 param_5)
{
    UNIMPLEMENTED;
    return NULL;
}

// 004025b0
void FUN_004025b0(int param_1)
{
    UNIMPLEMENTED;
}

// 004026d0
void SoundThreadCloseMusic(void)
{
    UNIMPLEMENTED;
}

// 00402790
void FUN_00402790(void)
{
    UNIMPLEMENTED;
}

// 004028b0
void FUN_004028b0(int32 param_1, uint32 param_2)
{
    UNIMPLEMENTED;
}

// 00402940
BOOL CreateMusicBuffer(void)
{
    UNIMPLEMENTED;
    return 0;
}

// 00402a00
void SoundThreadOpenMusic(void)
{
    UNIMPLEMENTED;
}

// 00402c00
void SoundThread(void)
{
    UNIMPLEMENTED;
}

// 00402e30
void WaitForSoundThreadToFinish(void)
{
    UNIMPLEMENTED;
}

// 00402e60
void FUN_00402e60(void)
{
    UNIMPLEMENTED;
}

// 00402e70
BOOL MUS_QueuePlay(int32 param_1)
{
    UNIMPLEMENTED;
    return 0;
}

// 00402e90
BOOL FUN_00402e90(void)
{
    UNIMPLEMENTED;
    return 0;
}

// 00402eb0
BOOL FUN_00402eb0(void)
{
    UNIMPLEMENTED;
    return 0;
}

// 00402ec0
void MUS_SetMusicPlaying(int param_1)
{
    UNIMPLEMENTED;
}

// 00402f30
void MUS_PlayMusic(void)
{
    UNIMPLEMENTED;
}

// 00402f50
void MUS_StopMusic(void)
{
    UNIMPLEMENTED;
}

// 00402f70
void MUS_Stop(void)
{
    UNIMPLEMENTED;
}

// 00402f90
void FUN_00402f90(void)
{
    UNIMPLEMENTED;
}

// 00402fa0
int32 TIME_GetTicks(void)
{
    UNIMPLEMENTED;
    return 0;
}

// 00402fb0
void OpenReadme(void)
{
    UNIMPLEMENTED;
}

// 00403030
BOOL OpenGexHomepage(int param_1)
{
    UNIMPLEMENTED;
    return 0;
}

// 004032a0
BOOL ProcessMenuCommand(/*HWND*/ void* param_1, /*WINDOW_MESSAGE*/ int32 param_2, uint16 param_3)
{
    UNIMPLEMENTED;
    return 0;
}

// 00403590
BOOL AboutDialogProc(/*HWND*/ void* param_1, int32 param_2, int16 param_3)
{
    UNIMPLEMENTED;
    return 0;
}

// 004036f0
BOOL CreditsDialogProc(/*HWND*/ void* param_1, uint32 param_2, uint32 param_3)
{
    UNIMPLEMENTED;
    return 0;
}

// 00403960
/*LRESULT*/ BOOL WndProc(/*HWND*/ void* param_1, /*WINDOW_MESSAGE*/ int32 param_2, /*HWND*/ void* param_3, void* param_4)
{
    UNIMPLEMENTED;
    return 0;
}

// 00404230
/*LRESULT*/ BOOL DebugVramWndProc(/*HWND*/ void* param_1, /*WINDOW_MESSAGE*/ int32 param_2, /*WPARAM*/ void* param_3, uint32 param_4)
{
    UNIMPLEMENTED;
    return 0;
}

// 00404410
void FUN_00404410(char* param_1, int* param_2)
{
    UNIMPLEMENTED;
}

// 00404440
void CloseVideoWindow(void)
{
    UNIMPLEMENTED;
}

// 00404460
void FUN_00404460(void)
{
    UNIMPLEMENTED;
}

// 004044b0
void FUN_004044b0(int32 param_1, void* param_2)
{
    UNIMPLEMENTED;
}

// 004046b0
void VideoError(/*MCIERROR*/ int32 param_1)
{
    UNIMPLEMENTED;
}

// 00404710
void FUN_00404710(void)
{
    UNIMPLEMENTED;
}

// 00404890
void FUN_00404890(void)
{
    UNIMPLEMENTED;
}

// 004048e0
void FUN_004048e0(void)
{
    UNIMPLEMENTED;
}

// 00404a20
void FUN_00404a20(void)
{
    UNIMPLEMENTED;
}

// 00404a80
void FUN_00404a80(void)
{
    UNIMPLEMENTED;
}

// 00404ab0
void RunTimer(void)
{
    UNIMPLEMENTED;
}

// 00404ba0
uint32 INPUT_GetActiveKeys(void)
{
    UNIMPLEMENTED;
    return 0;
}

// 00404e00
char* STRING_Load(uint32 param_1)
{
    UNIMPLEMENTED;
    return NULL;
}

// 00404e40
void STRING_Init(void)
{
    UNIMPLEMENTED;
}

// 00404f70
void FUN_00404f70(void)
{
    UNIMPLEMENTED;
}

// 00404f90
void FUN_00404f90(void)
{
    UNIMPLEMENTED;
}

// 004050e0
void GameThread(void)
{
    UNIMPLEMENTED;
}

// 00405120
BOOL WaitForNextFrame(void)
{
    UNIMPLEMENTED;
    return 0;
}

// 004051a0
void FUN_004051a0(void)
{
    UNIMPLEMENTED;
}

// 004051d0
void GameUnpause(void)
{
    UNIMPLEMENTED;
}

// 00405240
void GamePause(void)
{
    UNIMPLEMENTED;
}

// 004052d0
BOOL FUN_004052d0(void)
{
    UNIMPLEMENTED;
    return 0;
}

// 00405310
BOOL ReallyExit(void)
{
    UNIMPLEMENTED;
    return 0;
}

// 00405350
void assertfail(char* param_1, ...) // name is probably very wrong
{
    UNIMPLEMENTED;
}

// 00405390
void TracePrintf_Debug(char* param_1, ...)
{
    UNIMPLEMENTED;
}

// 004053a0
void FUN_004053a0(void)
{
    UNIMPLEMENTED;
}

// 00405450
void FUN_00405450(void)
{
    UNIMPLEMENTED;
}

// 004054c0
void FUN_004054c0(int32 param_1, int32 param_2)
{
    UNIMPLEMENTED;
}

// 004055b0
/*HPALETTE*/ void* FUN_004055b0(/*BITMAPINFOHEADER*/ void* param_1, void* param_2)
{
    UNIMPLEMENTED;
    return NULL;
}

// 00405660
/*HBITMAP*/ void* FUN_00405660(/*HMODULE*/ void* param_1, const char* param_2, /*HPALETTE**/ void** param_3)
{
    UNIMPLEMENTED;
    return NULL;
}

// 00405700
void VRAM_Show(void)
{
    UNIMPLEMENTED;
}

// 00405810
void VRAM_Hide(void)
{
    UNIMPLEMENTED;
}

// 00405850
/*LRESULT*/ int32 FUN_00405850(/*HWND*/ void* param_1, uint32 param_2, /*HWND*/ void* param_3, /*LPARAM*/ int32 param_4)
{
    UNIMPLEMENTED;
    return 0;
}

// 00405bf0
int WinMain(HINSTANCE param_1, HINSTANCE param_2, LPSTR param_3, int param_4)
{
    UNIMPLEMENTED;
    return 0;
}

// 004063d0
void WinShowError(int param_1, const char* param_2)
{
    UNIMPLEMENTED;
}

// 004064d0
void WND_CleanUp(void)
{
    UNIMPLEMENTED;
}

// 004066d0
void GDI_Init(void)
{
    UNIMPLEMENTED;
}

// 00406c00
void FUN_00406c00(void)
{
    UNIMPLEMENTED;
}

// 00406c30
void GFX_Flush(void)
{
    UNIMPLEMENTED;
}

// 00406fd0
int FUN_00406fd0(uint32 param_1)
{
    UNIMPLEMENTED;
    return 0;
}

// 00406fe0
int32 FUN_00406fe0(int32 param_1)
{
    UNIMPLEMENTED;
    return 0;
}

// 00407330
BOOL WindowSizeDialogProc(/*HWND*/ void* param_1, /*WINDOW_MESSAGE*/ uint32 param_2, uint32 param_3, int32 param_4)
{
    UNIMPLEMENTED;
    return 0;
}

// 00407710
BOOL MusicDialogProc(/*HWND*/ void* param_1, /*WINDOW_MESSAGE*/ uint32 param_2, uint32 param_3, /*HWND*/ void* param_4)
{
    UNIMPLEMENTED;
    return 0;
}

// 00407de0
/*LRESULT*/ int32 FUN_00407de0(/*HWND*/ void* param_1, uint32 param_2, uint32 param_3, uint32 param_4)
{
    UNIMPLEMENTED;
    return 0;
}

// 00407f80
int32 InputDialogProc(/*HWND*/ void* param_1, /*WINDOW_MESSAGE*/ uint32 param_2, uint32 param_3, int32 param_4)
{
    UNIMPLEMENTED;
    return 0;
}

// 00408418
BOOL FUN_00408418(void)
{
    UNIMPLEMENTED;
    return 0;
}

// 00408a30
/*LRESULT*/ int32 FUN_00408a30(/*HWND*/ void* param_1, uint32 param_2, /*WPARAM*/ uint32 param_3, /*LPARAM*/ uint32 param_4)
{
    UNIMPLEMENTED;
    return 0;
}

// 00408b60
void SettingsGetFromRegistry(void)
{
    UNIMPLEMENTED;
}

// 00408f40
void SettingsSetFromRegistry(void)
{
    UNIMPLEMENTED;
}

// 00409170
void* CDIO_FileOpen(const char* param_1)
{
    UNIMPLEMENTED;
    return NULL;
}

// 00409200
void CDIO_FileClose(void* param_1)
{
    UNIMPLEMENTED;
}

// 00409250
void CDIO_FileRead(void* param_1, void* param_2, uint32 param_3)
{
    UNIMPLEMENTED;
}

// 004092a0
uint32 CDIO_FileSize(void* param_1)
{
    UNIMPLEMENTED;
    return 0;
}

// 004092d0
void CDIO_FileSeek(/*HANDLE*/ void* param_1, int32 param_2, uint32 param_3)
{
    UNIMPLEMENTED;
}

// 00409320
void CDIO_CloseDirectory(struct CDirectory* param_1)
{
    UNIMPLEMENTED;
}

// 00409350
BOOL CDIO_OpenDirectory(struct CDirectory* parentDir, struct CDirectory* destDir, int32 param_3)
{
    UNIMPLEMENTED;
    return 0;
}

// 004093e0
BOOL CDIO_ReadFileTables(struct CDirectory* param_1)
{
    UNIMPLEMENTED;
    return 0;
}

// 00409430
BOOL FILE_Open(struct CDirectory* param_1, /*CFile_fake*/ void* param_2, int32 fileIndex)
{
    UNIMPLEMENTED;
    return 0;
}

// 004094c0
void FILE_Close(/*CFile_fake*/ void* param_1)
{
    UNIMPLEMENTED;
}

// 004094f0
BOOL FILE_ReadMaybeFromIDL(/*CFile_fake*/ void* param_1, void* pData, uint32 size)
{
    UNIMPLEMENTED;
    return 0;
}

// 00409560
BOOL IDL_Open(void)
{
    UNIMPLEMENTED;
    return 0;
}

// 004095c0
void CDIO_CloseFileSystem(void)
{
    UNIMPLEMENTED;
}

// 00409630
char* FILE_ReadOneShot(struct CDirectory* param_1, int32 param_2)
{
    UNIMPLEMENTED;
    return NULL;
}

// 00409680
BOOL FILE_ReadWithCallback(/*CFile_fake*/ void* param_1, /*CFileIOReq*/ void* param_2, char* pData, uint32 dataSize, /*TODO: function*/ void* param_5)
{
    UNIMPLEMENTED;
    return 0;
}

// 004096c0
void* MEM_Alloc(size_t nb)
{
    UNIMPLEMENTED;
    return NULL;
}

// 00409740
void MEM_Free(void* p)
{
    UNIMPLEMENTED;
}

// 004097a0
void MEM_Init(void)
{
    UNIMPLEMENTED;
}

// 004097b0
void MEM_Deinit(void)
{
    UNIMPLEMENTED;
}

// 004097f0
void FUN_004097f0(char charCode)
{
    UNIMPLEMENTED;
}
