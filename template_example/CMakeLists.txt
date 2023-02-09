cmake_minimum_required(VERSION 3.23)
project(template_example)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(template_example
        bootlegVector.cpp
        bootlegVector.h
        bootlegVector_main.cpp)
