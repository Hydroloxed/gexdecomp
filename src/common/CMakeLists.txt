add_library(common)

target_sources(common PRIVATE
    platform.h
    unimplemented.c
    unimplemented.h
)

target_include_directories(common PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
