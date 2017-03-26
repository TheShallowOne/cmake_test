cmake_minimum_required(VERSION 3.5)

project("Lib 1")

add_library(lib1 foo.cpp)
target_include_directories(lib1 PUBLIC ${CMAKE_CURRENT_LIST_DIR})
