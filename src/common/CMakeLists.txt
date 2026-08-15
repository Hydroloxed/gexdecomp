add_library(common)

target_sources(common PRIVATE fake_main.c unimplemented.c unimplemented.h)

target_include_directories(common PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
