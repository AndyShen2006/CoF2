cmake_minimum_required(VERSION 3.16.3)

project(CoF2)

# Compile options
set(CMAKE_C_COMPILER "gcc")
set(CMAKE_CXX_COMPILER "g++")
set(CMAKE_BUILD_TYPE DEBUG)
set(CMAKE_CXX_FLAGS "-fno-asm -std=c++11 -Wall")
set(CMAKE_CXX_FLAGS_DEBUG "-g -Og")
set(CMAKE_CXX_FLAGS_RELEASE "-O2")
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_subdirectory(src/)