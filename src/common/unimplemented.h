#ifndef UNIMPLEMENTED_H
#define UNIMPLEMENTED_H

void unimplemented_fn(const char* fn);

#define UNIMPLEMENTED \
do \
{ \
    unimplemented_fn(__func__); \
} while(0)

#endif
