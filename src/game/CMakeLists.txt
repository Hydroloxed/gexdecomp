add_executable(gex)

target_link_libraries(gex PRIVATE common)

target_sources(gex PRIVATE
    bloc.c
    bloc.h
    breakabl.c
    breakabl.h
    collect.c
    collect.h
    listapi.c
    listapi.h
    mem.c
    mem.h
    ob.c
    ob.h
    paused.c
    paused.h
    points.c
    points.h
)
