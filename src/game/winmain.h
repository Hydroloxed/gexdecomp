#ifndef WINMAIN_H
#define WINMAIN_H
#include "platform.h"
#include <stddef.h>

typedef struct CFileInfo
{
    uint32 cfi_fileHash; // 00
	uint32 cfi_fileLen; // 04
	uint32 cfi_filePos; // 08
	uint32 cfi_fileChecksum; // 0C
	// 10
} CFileInfo;

typedef struct CDirectory
{
    // Windows-specific
    uint32 cdir_numFiles; // 00
    struct CFileInfo* cdir_fileInfo; // 04
    void* cdir_fh; // 08
    // 0C
} CDirectory;

typedef struct CFile
{
    // Windows-specific
    uint32 cf_size; // 00
    struct CDirectory* cf_dir; // 04
    void* cf_fh; // 08
    uint32 cf_curPos; // 0C
    // 10
} CFile;

extern struct CDirectory* gRootDir;
extern struct CDirectory gRootDirX;

int32 DDRAW_GetDisplayMode(void);
BOOL DDRAW_Create(void);
void DDRAW_Destroy(void);
BOOL DDRAW_SetResolution(int param_1, int param_2);
BOOL FUN_00401270(int param_1, int param_2, int param_3);
void FUN_00401340(void* param_1);
void FUN_004013e0(uint32 param_1);
BOOL SND_CreateDirectSoundBuffer(int32 param_1, /*IDirectSoundBuffer*/ void** param_2, int32 param_3, int32 sampleRate);
BOOL SND_FillDirectSoundBuffer(/*IDirectSoundBuffer*/ void* param_1, int32 offset, int32 param_3, int32 numbytes);
BOOL FUN_004018b0(/*IDirectSoundBuffer*/ void* param_1, int32 param_2, int32 param_3);
BOOL VFX_SetTableEntry(int32 param_1, int32 param_2, int32 param_3);
BOOL FUN_004019c0(void);
void VFX_DoPlay(void);
void VFX_QueueToLoad(int32 param_1);
BOOL VFX_IsPlaying(void);
void FreeSFX(void);
void SND_PlaySound(int32 param_1, int32 pan, int32 dunno, int32 volume, int32 dunno2);
void SND_PlayPreviewSound(int32 param_1, int32 volume);
void SND_LoadSounds(int32* param_1);
void SetSoundEffectVolume(int param_1, BOOL playPreviewSound);
void SetVoiceVolume(int param_1, BOOL playPreviewSound);
void SetMusicVolume(int32 param_1, BOOL playPreviewSound);
void SFX_Open(void);
void SND_Destroy(void);
void SND_Init(void);
void SND_DeInit(void);
void FUN_00402140(int32 param_1);
void* FUN_00402400(uint8 param_1, uint8 param_2, uint8 param_3, int32 param_4, int32 param_5);
// 004025b0
void FUN_004025b0(int param_1);
void SoundThreadCloseMusic(void);
void FUN_00402790(void);
void FUN_004028b0(int32 param_1, uint32 param_2);
BOOL CreateMusicBuffer(void);
void SoundThreadOpenMusic(void);
void SoundThread(void);
void WaitForSoundThreadToFinish(void);
void FUN_00402e60(void);
BOOL MUS_QueuePlay(int32 param_1);
BOOL FUN_00402e90(void);
BOOL FUN_00402eb0(void);
void MUS_SetMusicPlaying(int param_1);
void MUS_PlayMusic(void);
void MUS_StopMusic(void);
void MUS_Stop(void);
void FUN_00402f90(void);
int32 TIME_GetTicks(void);
void OpenReadme(void);
BOOL OpenGexHomepage(int param_1);
BOOL ProcessMenuCommand(/*HWND*/ void* param_1, /*WINDOW_MESSAGE*/ int32 param_2, uint16 param_3);
BOOL AboutDialogProc(/*HWND*/ void* param_1, int32 param_2, int16 param_3);
BOOL CreditsDialogProc(/*HWND*/ void* param_1, uint32 param_2, uint32 param_3);
/*LRESULT*/ BOOL WndProc(/*HWND*/ void* param_1, /*WINDOW_MESSAGE*/ int32 param_2, /*HWND*/ void* param_3, void* param_4);
/*LRESULT*/ BOOL DebugVramWndProc(/*HWND*/ void* param_1, /*WINDOW_MESSAGE*/ int32 param_2, /*WPARAM*/ void* param_3, uint32 param_4);
void FUN_00404410(char* param_1, int* param_2);
void CloseVideoWindow(void);
void FUN_00404460(void);
void FUN_004044b0(int32 param_1, void* param_2);
void VideoError(/*MCIERROR*/ int32 param_1);
void FUN_00404710(void);
void FUN_00404890(void);
void FUN_004048e0(void);
void FUN_00404a20(void);
void FUN_00404a80(void);
void RunTimer(void);
uint32 INPUT_GetActiveKeys(uint32 param_1);
char* STRING_Load(uint32 param_1);
// 00404e40
void STRING_Init(void);
void FUN_00404f70(void);
void FUN_00404f90(void);
void GameThread(void);
int32 UpdateTimer(void);
void FUN_004051a0(void);
void GameUnpause(void);
void GamePause(void);
BOOL FUN_004052d0(void);
BOOL FUN_00405310(void);
void assertfail(char* param_1, ...);
void TracePrintf_Debug(char* param_1, ...);
void FUN_004053a0(void);
void FUN_00405450(void);
void FUN_004054c0(int32 param_1, int32 param_2);
/*HPALETTE*/ void* FUN_004055b0(/*BITMAPINFOHEADER*/ void* param_1, void* param_2);
// 00405660
/*HBITMAP*/ void* FUN_00405660(/*HMODULE*/ void* param_1, const char* param_2, /*HPALETTE**/ void** param_3);
// 00405700
void VRAM_Show(void);
void VRAM_Hide(void);
/*LRESULT*/ int32 FUN_00405850(/*HWND*/ void* param_1, uint32 param_2, /*HWND*/ void* param_3, /*LPARAM*/ int32 param_4);
void WinShowError(int param_1, const char* param_2);
void WND_CleanUp(void);
void GDI_Init(void);
void FUN_00406c00(void);
void GFX_Flush(void);
int FUN_00406fd0(uint32 param_1);
int32 FUN_00406fe0(int32 param_1);
BOOL WindowSizeDialogProc(/*HWND*/ void* param_1, /*WINDOW_MESSAGE*/ uint32 param_2, uint32 param_3, int32 param_4);
BOOL MusicDialogProc(/*HWND*/ void* param_1, /*WINDOW_MESSAGE*/ uint32 param_2, uint32 param_3, /*HWND*/ void* param_4);
/*LRESULT*/ int32 FUN_00407de0(/*HWND*/ void* param_1, uint32 param_2, uint32 param_3, uint32 param_4);
int32 InputDialogProc(/*HWND*/ void* param_1, /*WINDOW_MESSAGE*/ uint32 param_2, uint32 param_3, int32 param_4);
BOOL FUN_00408418(void);
/*LRESULT*/ int32 FUN_00408a30(/*HWND*/ void* param_1, uint32 param_2, /*WPARAM*/ uint32 param_3, /*LPARAM*/ uint32 param_4);
void SettingsGetFromRegistry(void);
void SettingsSetFromRegistry(void);
void* CDIO_FileOpen(const char* param_1);
// 00409200
void CDIO_FileClose(void* param_1);
void CDIO_FileRead(void* param_1, void* param_2, uint32 param_3);
uint32 CDIO_FileSize(void* param_1);
void CDIO_FileSeek(/*HANDLE*/ void* param_1, int32 param_2, uint32 param_3);
void CDIO_CloseDirectory(struct CDirectory* param_1);
BOOL CDIO_OpenDirectory(struct CDirectory* parentDir, struct CDirectory* destDir, int32 param_3);
BOOL CDIO_ReadFileTables(struct CDirectory* param_1);
BOOL FILE_Open(struct CDirectory* param_1, /*CFile_fake*/ void* param_2, int32 fileIndex);
void FILE_Close(/*CFile_fake*/ void* param_1);
BOOL FILE_ReadMaybeFromIDL(/*CFile_fake*/ void* param_1, void* pData, uint32 size);
BOOL IDL_Open(void);
void CDIO_CloseFileSystem(void);
char* FILE_ReadOneShot(struct CDirectory* param_1, int32 param_2);
// 00409680
BOOL FILE_ReadWithCallback(/*CFile_fake*/ void* param_1, /*CFileIOReq*/ void* param_2, char* pData, uint32 dataSize, /*TODO: function*/ void* param_5);
// MEM_ functions defined in mem.h
void FUN_004097f0(char charCode);

#endif
