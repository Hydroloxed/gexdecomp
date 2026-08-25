#include "input.h"
#include "platform.h"
#include "unimplemented.h"

// 0040f300
void InitControllers(int32 param_1, CONTROLLER_INFO* param_2)
{
    UNIMPLEMENTED;
}

// 0040f340
uint32 ReadBitsFromDigital(uint32 param_1)
{
    UNIMPLEMENTED;
    return 0;
}

// 0040f380
uint32 ReadBitsFromAnalog(void)
{
    UNIMPLEMENTED;
    return 0;
}

// 0040f390
uint32 ReadBitsFromMouse(void)
{
    UNIMPLEMENTED;
    return 0;
}

// 0040f3a0
uint32 ReadBitsFromKeyboard(void)
{
    UNIMPLEMENTED;
    return 0;
}

// 0040f3b0
uint32 ReadBitsFromUnknown(void)
{
    UNIMPLEMENTED;
    return 0;
}

// 0040f3c0
uint32 ReadBitsFromAI(uint32 param_1)
{
    UNIMPLEMENTED;
    return 0;
}

// 0040f400
uint32 ReadControllerNoPlayback(int32 param_1)
{
    UNIMPLEMENTED;
    return 0;
}

// 0040f440
void CheckIdle(uint32 param_1)
{
    UNIMPLEMENTED;
}

// 0040f4c0
uint32 ReadController(int32 param_1)
{
    UNIMPLEMENTED;
    return 0;
}

// 0040f500
uint32 GetRecordedBits(InputPlaybackInfo* param_1)
{
    UNIMPLEMENTED;
    return 0;
}

// 0040f520
void PlayRecording(InputPlaybackInfo* param_1)
{
    UNIMPLEMENTED;
}

// 0040f5e0
uint32 FilterInputForJustOn(int32 param_1, uint32 param_2)
{
    UNIMPLEMENTED;
    return 0;
}

// 0040f610
uint32 ReadAnalogValue(int32 param_1, BOOL param_2)
{
    UNIMPLEMENTED;
    return 0;
}

// 0040f680
uint32 ReadAxisFromAnalog(void)
{
    UNIMPLEMENTED;
    return 0;
}

// 0040f690
uint32 ReadAxisFromMouse(void)
{
    UNIMPLEMENTED;
    return 0;
}

// 0040f6a0
uint32 ReadAxisFromKeyboard(void)
{
    UNIMPLEMENTED;
    return 0;
}

// 0040f6b0
uint32 ReadAxisFromUnknown(void)
{
    UNIMPLEMENTED;
    return 0;
}

// 0040f6c0
uint32 ReadAxisFromAI(uint32 param_1, uint32 param_2)
{
    UNIMPLEMENTED;
    return 0;
}

// 0040f700
void MapInputBits(uint32 param_1, INPUT_REMAP_TABLE* param_2, BUTTON_RECORD* param_3)
{
    UNIMPLEMENTED;
}

// 0040f740
void StartInputPlayback(int32 param_1, uint8* param_2, void** param_3)
{
    UNIMPLEMENTED;
}

// 0040f780
void StopInputPlayback(int32 param_1)
{
    UNIMPLEMENTED;
}

// 0040f7a0
BOOL PCTranslateBits(int32 param_1, BOOL param_2, uint32* param_3)
{
    UNIMPLEMENTED;
    return 0;
}
