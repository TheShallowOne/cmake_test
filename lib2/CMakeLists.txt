cmake_minimum_required(VERSION 3.5)

project("Lib 2")

add_library(lib2 bar.cpp)
target_link_libraries(lib2 lib1)
target_include_directories(lib2 PUBLIC ${CMAKE_CURRENT_LIST_DIR})
