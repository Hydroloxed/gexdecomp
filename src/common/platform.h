#ifndef PLATFORM_H
#define PLATFORM_H
// MSVC4.0 doesn't have stdint.h so we reimplement similar types here.

// These are the same as in echidna/platform.h
typedef signed char int8;
typedef unsigned char uint8;
typedef signed short int16;
typedef unsigned short uint16;
typedef signed int int32;
typedef unsigned int uint32;
typedef int BOOL;

#endif
