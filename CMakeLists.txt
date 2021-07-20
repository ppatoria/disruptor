# CMakeList.txt : CMake project for disruptor, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("disruptor" CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
SET(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} -fmodules-ts")


add_subdirectory (src)

enable_testing ()
add_subdirectory (test)
