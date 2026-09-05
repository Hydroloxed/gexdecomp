#include "async.h"
#include "platform.h"
#include "unimplemented.h"

// 00437e90
void ASYNC_LoadFileToMem(struct CDirectory* dir, int32 idx, /* CFileIOReq* */ void* ioreq, uint8* data, uint32 param_5)
{
    UNIMPLEMENTED;
}

// 00437f00
static void MarkDone(/* READ_REQUEST* */ void* param_1)
{
    UNIMPLEMENTED;
}

// 00437f10
BOOL ASYNC_DoneLoading(/*CFileIOReq * */ void* param_1)
{
    UNIMPLEMENTED;
    return 0;
}
