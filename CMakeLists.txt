cmake_minimum_required(VERSION 3.16)
project(concurrency)

add_executable(tut01 tut01.cpp)
add_executable(tut02 tut02.cpp)
add_executable(tut03 tut03.cpp)
add_executable(tut04 tut04.cpp)
add_executable(tut05 tut05.cpp)
add_executable(tut06 tut06.cpp)
add_executable(tut07 tut07.cpp)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS -pthread)