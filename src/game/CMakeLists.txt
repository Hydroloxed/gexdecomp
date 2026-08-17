add_executable(gex)

target_link_libraries(gex PRIVATE common)

target_sources(gex PRIVATE
    bloc.c
    bloc.h
    breakabl.c
    breakabl.h
    cld.c
    cld.h
    collect.c
    collect.h
    gxinppad.c
    gxinppad.h
    listapi.c
    listapi.h
    m1level.c
    m1level.h
    mem.c
    mem.h
    ob.c
    ob.h
    paused.c
    paused.h
    points.c
    points.h
    vsit.c
)
