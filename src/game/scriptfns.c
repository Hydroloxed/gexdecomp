#include "scriptfns.h"
#include "platform.h"
#include "unimplemented.h"
#include <stddef.h>

// 00417f00 https://decomp.me/scratch/sRyCV 100%
static uint32 SCRIPT_GetUInt(uint8** data)
{
    uint32 value = (*data)[3] << 24 | (*data)[2] << 16 | (*data)[1] << 8 | (*data)[0];
    *data = *data + 4;
    return value;
}

// 00417f40
static uint32 SCRIPT_GetUInt16(uint8** param_1)
{
    UNIMPLEMENTED;
    return 0;
}

// 00417f60
static uint8* SCRIPT_CheckTileAtPos(uint8* data, struct GXObject* gob)
{
    UNIMPLEMENTED;
    return NULL;
}

// 00417fc0
static uint8* SCRIPT_MoveToHotSpot(uint8* data, struct GXObject* gob)
{
    UNIMPLEMENTED;
    return NULL;
}

// 00418020
static uint8* SCRIPT_SetLoadObject(uint8* data, struct GXObject* gob)
{
    UNIMPLEMENTED;
    return NULL;
}

// 00418040
static uint8* SCRIPT_GetFieldFromParent(uint8* data, struct GXObject* gob)
{
    UNIMPLEMENTED;
    return NULL;
}

// 00418080
static uint8* SCRIPT_LookupObjectData(uint8* data, struct GXObject* gob)
{
    UNIMPLEMENTED;
    return NULL;
}

// 004180a0
static uint8* SCRIPT_InitObject(uint8* data, struct GXObject* gob)
{
    UNIMPLEMENTED;
    return NULL;
}

// 004180c0
static uint8* SCRIPT_RemoveObject(uint8* data, struct GXObject* gob)
{
    UNIMPLEMENTED;
    return NULL;
}

// 00418180
static uint8* SCRIPT_MoveToParentHotSpot(uint8* data, struct GXObject* gob)
{
    UNIMPLEMENTED;
    return NULL;
}

// 00418220
static uint8* SCRIPT_TrackGXPositionX(uint8* data, struct GXObject* gob)
{
    UNIMPLEMENTED;
    return NULL;
}

// 00418270
static uint8* SCRIPT_Random(uint8* data, struct GXObject* gob)
{
    UNIMPLEMENTED;
    return NULL;
}

// 004182a0
static uint8* SCRIPT_TrackGXPositionY(uint8* data, struct GXObject* gob)
{
    UNIMPLEMENTED;
    return NULL;
}

// 004182f0
static uint8* SCRIPT_CopyFieldToChildren(uint8* data, struct GXObject* gob)
{
    UNIMPLEMENTED;
    return NULL;
}

// 00418320
static uint8* SCRIPT_LinkObject(uint8* data, struct GXObject* gob)
{
    UNIMPLEMENTED;
    return NULL;
}

// 00418390
static uint8* SCRIPT_CopyFieldToRoot(uint8* data, struct GXObject* gob)
{
    UNIMPLEMENTED;
    return NULL;
}

// 004183d0
static uint8* SCRIPT_CopyFieldToParent(uint8* data, struct GXObject* gob)
{
    UNIMPLEMENTED;
    return NULL;
}

// 00418400
static uint8* SCRIPT_UnlinkObject(uint8* data, struct GXObject* gob)
{
    UNIMPLEMENTED;
    return NULL;
}

// 004184d0
static uint8* SCRIPT_RezOut(uint8* data, struct GXObject* gob)
{
    UNIMPLEMENTED;
    return NULL;
}

// 004184f0
static uint8* SCRIPT_SetDoitRoutine(uint8* data, struct GXObject* gob)
{
    UNIMPLEMENTED;
    return NULL;
}

// 00418510
static uint8* SCRIPT_SetClidRoutine(uint8* data, struct GXObject* gob)
{
    UNIMPLEMENTED;
    return NULL;
}

// 00418530
static uint8* SCRIPT_SetDrawRoutine(uint8* data, struct GXObject* gob)
{
    UNIMPLEMENTED;
    return NULL;
}

// 00418550
static uint8* SCRIPT_SwitchBlocks(uint8* data, struct GXObject* gob)
{
    UNIMPLEMENTED;
    return NULL;
}

// 00418680
static uint8* SCRIPT_TrackGXDiag(uint8* data, struct GXObject* gob)
{
    UNIMPLEMENTED;
    return NULL;
}

// 00418720
static uint8* SCRIPT_SetDisplayPriority(uint8* data, struct GXObject* gob)
{
    UNIMPLEMENTED;
    return NULL;
}

// 00418740
static uint8* SCRIPT_SetCollisionType(uint8* data, struct GXObject* gob)
{
    UNIMPLEMENTED;
    return NULL;
}

// 00418770
static uint8* SCRIPT_GetXDir(uint8* data, struct GXObject* gob)
{
    UNIMPLEMENTED;
    return NULL;
}

// 00418790
static uint8* SCRIPT_GetCLIDObjType(uint8* data, struct GXObject* gob)
{
    UNIMPLEMENTED;
    return NULL;
}

// 004187c0
static uint8* SCRIPT_GetCLIDObjField(uint8* data, struct GXObject* gob)
{
    UNIMPLEMENTED;
    return NULL;
}

// 004187f0
static uint8* SCRIPT_DisplayBehindParent(uint8* data, struct GXObject* gob)
{
    UNIMPLEMENTED;
    return NULL;
}

// 00418830
static uint8* SCRIPT_PrintWorkRegister(uint8* data, struct GXObject* gob)
{
    UNIMPLEMENTED;
    return NULL;
}

// 00418860
static uint8* SCRIPT_AddVisualScore(uint8* data, struct GXObject* gob)
{
    UNIMPLEMENTED;
    return NULL;
}

// 00418880
static uint8* SCRIPT_AddScoreFromTable(uint8* data, struct GXObject* gob)
{
    UNIMPLEMENTED;
    return NULL;
}

// 004188a0
static uint8* SCRIPT_InitPath(uint8* data, struct GXObject* gob)
{
    UNIMPLEMENTED;
    return NULL;
}

// 004188c0
static uint8* SCRIPT_RezIn(uint8* data, struct GXObject* gob)
{
    UNIMPLEMENTED;
    return NULL;
}

// 004188e0
static uint8* SCRIPT_SetCLIDCheckRoutine(uint8* data, struct GXObject* gob)
{
    UNIMPLEMENTED;
    return NULL;
}

// 00418900
static uint8* SCRIPT_SnapToContour(uint8* data, struct GXObject* gob)
{
    UNIMPLEMENTED;
    return NULL;
}

// 00418990
static uint8* SCRIPT_SubFields(uint8* data, struct GXObject* gob)
{
    UNIMPLEMENTED;
    return NULL;
}

// 004189c0
static uint8* SCRIPT_TurtleHeadAttack(uint8* data, struct GXObject* gob)
{
    UNIMPLEMENTED;
    return NULL;
}

// 004189e0
static uint8* SCRIPT_BreakTiles(uint8* data, struct GXObject* gob)
{
    UNIMPLEMENTED;
    return NULL;
}

// 00418a00
static uint8* SCRIPT_AdjustPlut(uint8* data, struct GXObject* gob)
{
    UNIMPLEMENTED;
    return NULL;
}

// 00418a80
static uint8* SCRIPT_ShiftRight(uint8* data, struct GXObject* gob)
{
    UNIMPLEMENTED;
    return NULL;
}

// 00418aa0
static uint8* SCRIPT_GetTileAttribute(uint8* data, struct GXObject* gob)
{
    UNIMPLEMENTED;
    return NULL;
}

// 00418af0
static uint8* SCRIPT_GetLevelStatus(uint8* data, struct GXObject* gob)
{
    UNIMPLEMENTED;
    return NULL;
}

// 00418b10
static uint8* SCRIPT_MakeSplash(uint8* data, struct GXObject* gob)
{
    UNIMPLEMENTED;
    return NULL;
}

// 00418b30
static uint8* SCRIPT_PlaySound(uint8* data, struct GXObject* gob)
{
    UNIMPLEMENTED;
    return NULL;
}

// 00418b50
static uint8* SCRIPT_PlaySoundWithVolume(uint8* data, struct GXObject* gob)
{
    UNIMPLEMENTED;
    return NULL;
}

// 00418b80
static uint8* SCRIPT_PlaySoundNoPosition(uint8* data, struct GXObject* gob)
{
    UNIMPLEMENTED;
    return NULL;
}

// 00418bb0
static uint8* SCRIPT_LinkObject2(uint8* data, struct GXObject* gob)
{
    UNIMPLEMENTED;
    return NULL;
}

// 00418bd0
static uint8* SCRIPT_DrawObject(uint8* data, struct GXObject* gob)
{
    UNIMPLEMENTED;
    return NULL;
}

// 00418c00
static uint8* SCRIPT_WhackWhack(uint8* data, struct GXObject* gob)
{
    UNIMPLEMENTED;
    return NULL;
}

// 00418c20
static uint8* SCRIPT_ModWorkField(uint8* data, struct GXObject* gob)
{
    UNIMPLEMENTED;
    return NULL;
}

// 00418c50
static uint8* SCRIPT_AddWorkField(uint8* data, struct GXObject* gob)
{
    UNIMPLEMENTED;
    return NULL;
}

// 00418c80
static uint8* SCRIPT_SubWorkField(uint8* data, struct GXObject* gob)
{
    UNIMPLEMENTED;
    return NULL;
}

// 00418cb0
static uint8* SCRIPT_GetObjectLoadData(uint8* data, struct GXObject* gob)
{
    UNIMPLEMENTED;
    return NULL;
}

// 00418cd0
static uint8* SCRIPT_Unimplemented(uint8* data, struct GXObject* gob)
{
    UNIMPLEMENTED;
    return NULL;
}

// 00418cf0
static uint8* SCRIPT_AddVoiceEntries(uint8* data, struct GXObject* gob)
{
    UNIMPLEMENTED;
    return NULL;
}

// 00418d10
static uint8* SCRIPT_PlayVoice(uint8* data, struct GXObject* gob)
{
    UNIMPLEMENTED;
    return NULL;
}

// 00418d30
static uint8* SCRIPT_ForceVoiceSituation(uint8* data, struct GXObject* gob)
{
    UNIMPLEMENTED;
    return NULL;
}

// 00418d50
static uint8* SCRIPT_ForcedVoiceSituationReady(uint8* data, struct GXObject* gob)
{
    UNIMPLEMENTED;
    return NULL;
}

// 00418d60
static uint8* SCRIPT_VoiceFinished(uint8* data, struct GXObject* gob)
{
    UNIMPLEMENTED;
    return NULL;
}

// 00418d70
static uint8* SCRIPT_PlayVoiceIfGexSeesMe(uint8* data, struct GXObject* gob)
{
    UNIMPLEMENTED;
    return NULL;
}

// 00418e10
static uint8* SCRIPT_ClearMidPoint(uint8* data, struct GXObject* gob)
{
    UNIMPLEMENTED;
    return NULL;
}

// 00418e20
static uint8* SCRIPT_UnforceVoiceSituation(uint8* data, struct GXObject* gob)
{
    UNIMPLEMENTED;
    return NULL;
}

// 00418e30
static uint8* SCRIPT_AdjustScreenPalette(uint8* data, struct GXObject* gob)
{
    UNIMPLEMENTED;
    return NULL;
}

// 00418ee0
static uint8* SCRIPT_GetGlobalArrayValue(uint8* data, struct GXObject* gob)
{
    UNIMPLEMENTED;
    return NULL;
}

// 00418f10
static uint8* SCRIPT_SetFrameGroup(uint8* data, struct GXObject* gob)
{
    UNIMPLEMENTED;
    return NULL;
}

// 00418f30
static uint8* SCRIPT_SetFrameIndex(uint8* data, struct GXObject* gob)
{
    UNIMPLEMENTED;
    return NULL;
}

// 00418f50
static uint8* SCRIPT_SetLinkField(uint8* data, struct GXObject* gob)
{
    UNIMPLEMENTED;
    return NULL;
}

// 00418fa0
static uint8* SCRIPT_GetLinkField(uint8* data, struct GXObject* gob)
{
    UNIMPLEMENTED;
    return NULL;
}

// 00418fd0
static uint8* SCRIPT_PutLinkField(uint8* data, struct GXObject* gob)
{
    UNIMPLEMENTED;
    return NULL;
}

// 00419000
static uint8* SCRIPT_PrintWithFont(uint8* data, struct GXObject* gob)
{
    UNIMPLEMENTED;
    return NULL;
}

// 00419040
static uint8* SCRIPT_KillPlayer(uint8* data, struct GXObject* gob)
{
    UNIMPLEMENTED;
    return NULL;
}

// 00419060
static uint8* SCRIPT_CollectAnItem(uint8* data, struct GXObject* gob)
{
    UNIMPLEMENTED;
    return NULL;
}

// 00419080
static uint8* SCRIPT_ClearController(uint8* data, struct GXObject* gob)
{
    UNIMPLEMENTED;
    return NULL;
}

// 00419140
static uint8* SCRIPT_PrintNumWithFont(uint8* data, struct GXObject* gob)
{
    UNIMPLEMENTED;
    return NULL;
}

// 004191e0
static uint8* SCRIPT_GetRemoteStatus(uint8* data, struct GXObject* gob)
{
    UNIMPLEMENTED;
    return NULL;
}

// 00419200
static uint8* SCRIPT_CelToQuad(uint8* data, struct GXObject* gob)
{
    UNIMPLEMENTED;
    return NULL;
}

// 004193b0
static uint8* SCRIPT_GetParentGroup(uint8* data, struct GXObject* gob)
{
    UNIMPLEMENTED;
    return NULL;
}

// 004193e0
static uint8* SCRIPT_GetParentIndex(uint8* data, struct GXObject* gob)
{
    UNIMPLEMENTED;
    return NULL;
}

// 00419410
static uint8* SCRIPT_CheckContour(uint8* data, struct GXObject* gob)
{
    UNIMPLEMENTED;
    return NULL;
}

ScriptFn gScriptFunctions[86] =
{
    &SCRIPT_CheckTileAtPos, //[ 0]
    &SCRIPT_MoveToHotSpot, //[ 1]
    &SCRIPT_SetLoadObject, //[ 2]
    &SCRIPT_GetFieldFromParent, //[ 3]
    &SCRIPT_LookupObjectData, //[ 4]
    &SCRIPT_InitObject, //[ 5]
    &SCRIPT_RemoveObject, //[ 6]
    &SCRIPT_MoveToParentHotSpot, //[ 7]
    &SCRIPT_TrackGXPositionX, //[ 8]
    &SCRIPT_Random, //[ 9]
    &SCRIPT_TrackGXPositionY, // [10]
    &SCRIPT_CopyFieldToChildren, // [11]
    &SCRIPT_LinkObject, // [12]
    &SCRIPT_CopyFieldToRoot, // [13]
    &SCRIPT_CopyFieldToParent, // [14]
    &SCRIPT_UnlinkObject, // [15]
    &SCRIPT_RezOut, // [16]
    &SCRIPT_SetDoitRoutine, // [17]
    &SCRIPT_SetClidRoutine, // [18]
    &SCRIPT_SwitchBlocks, // [19]
    &SCRIPT_TrackGXDiag, // [20]
    &SCRIPT_SetDisplayPriority, // [21]
    &SCRIPT_SetDrawRoutine, // [22]
    &SCRIPT_SetCollisionType, // [23]
    &SCRIPT_GetXDir, // [24]
    &SCRIPT_GetCLIDObjType, // [25]
    &SCRIPT_GetCLIDObjField, // [26]
    &SCRIPT_DisplayBehindParent, // [27]
    &SCRIPT_PrintWorkRegister, // [28]
    &SCRIPT_AddVisualScore, // [29]
    &SCRIPT_InitPath, // [30]
    &SCRIPT_RezIn, // [31]
    &SCRIPT_SetCLIDCheckRoutine, // [32]
    &SCRIPT_SnapToContour, // [33]
    &SCRIPT_SubFields, // [34]
    &SCRIPT_TurtleHeadAttack, // [35]
    &SCRIPT_BreakTiles, // [36]
    &SCRIPT_AdjustPlut, // [37]
    &SCRIPT_ShiftRight, // [38]
    &SCRIPT_GetTileAttribute, // [39]
    &SCRIPT_GetLevelStatus, // [40]
    &SCRIPT_MakeSplash, // [41]
    &SCRIPT_PlaySound, // [42]
    &SCRIPT_PlaySoundWithVolume, // [43]
    &SCRIPT_PlaySoundNoPosition, // [44]
    &SCRIPT_AddScoreFromTable, // [45]
    &SCRIPT_LinkObject2, // [46]
    &SCRIPT_DrawObject, // [47]
    &SCRIPT_WhackWhack, // [48]
    &SCRIPT_ModWorkField, // [49]
    &SCRIPT_AddWorkField, // [50]
    &SCRIPT_SubWorkField, // [51]
    &SCRIPT_GetObjectLoadData, // [52]
    &SCRIPT_AddVoiceEntries, // [53]
    &SCRIPT_PlayVoice, // [54]
    &SCRIPT_ForceVoiceSituation, // [55]
    &SCRIPT_ForcedVoiceSituationReady, // [56]
    &SCRIPT_VoiceFinished, // [57]
    &SCRIPT_PlayVoiceIfGexSeesMe, // [58]
    &SCRIPT_ClearMidPoint, // [59]
    &SCRIPT_UnforceVoiceSituation, // [60]
    &SCRIPT_AdjustScreenPalette, // [61]
    &SCRIPT_GetGlobalArrayValue, // [62]
    &SCRIPT_SetFrameGroup, // [63]
    &SCRIPT_SetFrameIndex, // [64]
    &SCRIPT_SetLinkField, // [65]
    &SCRIPT_GetLinkField, // [66]
    &SCRIPT_PutLinkField, // [67]
    &SCRIPT_PrintWithFont, // [68]
    &SCRIPT_KillPlayer, // [69]
    &SCRIPT_CollectAnItem, // [70]
    &SCRIPT_ClearController, // [71]
    &SCRIPT_PrintNumWithFont, // [72]
    &SCRIPT_GetRemoteStatus, // [73]
    &SCRIPT_CelToQuad, // [74]
    &SCRIPT_GetParentGroup, // [75]
    &SCRIPT_GetParentIndex, // [76]
    &SCRIPT_CheckContour, // [77]
    &SCRIPT_Unimplemented, // [78]
    &SCRIPT_Unimplemented, // [79]
    &SCRIPT_Unimplemented, // [80]
    &SCRIPT_Unimplemented, // [81]
    &SCRIPT_Unimplemented, // [82]
    &SCRIPT_Unimplemented, // [83]
    &SCRIPT_Unimplemented, // [84]
    &SCRIPT_Unimplemented, // [85]
};
