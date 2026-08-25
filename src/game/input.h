#ifndef INPUT_H
#define INPUT_H
#include "platform.h"

// INPUT_RECORDING
// INPUT_TIMEOUT_FUNCTION
// INPUT_PLAYBACK_FUNCTION
// INPUT_EMULATION_FUNCTION

typedef struct
{
	uint8 buttonLeft; // 00
	uint8 buttonRight; // 01
	uint8 buttonUp; // 02
	uint8 buttonDown; // 03
	uint8 buttonA; // 04
	uint8 buttonB; // 05
	uint8 buttonC; // 06
	uint8 buttonX; // 07
	uint8 buttonL; // 08
	uint8 buttonR; // 09
	uint8 buttonStart; // 0A
	uint8 buttonSelect; // 0B
	uint8 buttonD; // 0C
	uint8 buttonL2; // 0D
	uint8 buttonR2; // 0E
	// 0F
} BUTTON_RECORD;

typedef struct
{
	uint8 remapLeft; // 00
	uint8 remapRight; // 01
	uint8 remapUp; // 02
	uint8 remapDown; // 03
	uint8 remapA; // 04
	uint8 remapB; // 05
	uint8 remapC; // 06
	uint8 remapX; // 07
	uint8 remapL; // 08
	uint8 remapR; // 09
	uint8 remapStart; // 0A
	uint8 remapSelect; // 0B
	uint8 remapD; // 0C
	uint8 remapL2; // 0D
	uint8 remapR2; // 0E
	// 0F
} INPUT_REMAP_TABLE;

typedef struct
{
	int32 queueSize; // 00
	int32 nextEntry; // 04
	int32 firstEntry; // 08
	uint32 lastInputBits; // 0C
	uint32* bitQueue; // 10
	uint32** codes; // 14
	// 18
} INPUT_CODE_TABLE;

typedef struct
{
	int32 recordingFlag; // 00
	void* recordingFile; // 04
	int32 inputRecordingType; // 08
	int32 lastRecordingType; // 0C
	uint32 lastReadBits; // 10
	int32 lastReadAxis; // 14
	int32 lastReadAxisValue; // 18
	// 1C
} InputRecordingInfo;

typedef struct
{
	int32 playbackFlag; // 00
	uint8** playbackFunctionsTable; // 04
	uint8* playbackRecording; // 08
	int32 playbackCount; // 0C
	uint32 playbackBits; // 10
	int32 playbackAxisValue; // 14
	// 18
} InputPlaybackInfo;

typedef struct
{
	int32 controllerType; // 00
	uint32 inputBits; // 04
	uint32 oldInputBits; // 08
	InputPlaybackInfo playbackInfo; // 0C
	// 24
} CONTROLLER_INFO;

typedef struct
{
	BUTTON_RECORD gxir_padButtons; // 00
	BUTTON_RECORD gxir_padJustOnButtons; // 0F
	int32 gxir_dValue; // 20
	// 24
} GXInputRecord;


#endif
