add_library(common)

target_sources(common PRIVATE unimplemented.c)

target_include_directories(common PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
