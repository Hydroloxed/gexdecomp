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
    idl.c
    idl.h
    listapi.c
    listapi.h
    m1level.c
    m1level.h
    mem.h
    ob.c
    ob.h
    par.c
    par.h
    paused.c
    paused.h
    points.c
    points.h
    vsit.c
    winmain.c
    winmain.h
)
