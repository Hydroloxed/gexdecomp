add_executable(gex)

target_link_libraries(gex PRIVATE common)

target_sources(gex PRIVATE
    bloc.c
    bloc.h
    breakabl.c
    breakabl.h
    camera.c
    camera.h
    cld.c
    cld.h
    collect.c
    collect.h
    gxinppad.c
    gxinppad.h
    idl.c
    idl.h
    input.c
    input.h
    listapi.c
    listapi.h
    m1level.c
    m1level.h
    m1main.c
    m1main.h
    mem.h
    menu.c
    menu.h
    ob.c
    ob.h
    obi.c
    obi.h
    par.c
    par.h
    paused.c
    paused.h
    player.c
    player.h
    points.c
    points.h
    vsit.c
    winmain.c
    winmain.h
)
