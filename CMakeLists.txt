cmake_minimum_required(VERSION 3.5)

project("LibTest")

add_subdirectory(lib1)
add_subdirectory(lib2)

add_executable(libtest main.cpp)
target_link_libraries(libtest lib2)
