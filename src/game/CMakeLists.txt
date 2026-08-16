add_executable(gex)

target_link_libraries(gex PRIVATE common)

target_sources(gex PRIVATE
    bloc.c
    bloc.h
    listapi.c
    listapi.h
    mem.c
    mem.h
    ob.c
    ob.h
)
