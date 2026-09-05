#ifndef ASYNC_H
#define ASYNC_H
#include "platform.h"

struct CDirectory;

// TODO: This is probably not CFileIOReq, but some other struct "AsyncIOReq"
//       with CFileIOReq as its first member...
void ASYNC_LoadFileToMem(struct CDirectory* dir, int32 idx, /* CFileIOReq* */ void* ioreq, uint8* data, uint32 param_5);
BOOL ASYNC_DoneLoading(/*CFileIOReq * */ void* param_1);

#endif
