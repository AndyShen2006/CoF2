cmake_minimum_required(VERSION 3.14)

project(CoF2 VERSION 0.1.0)
message(STATUS "[Project] ${PROJECT_NAME}")

# Compile options
# set(CMAKE_C_COMPILER "clang")
# set(CMAKE_CXX_COMPILER "clang++")
set(CMAKE_BUILD_TYPE DEBUG)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_FLAGS "-fno-asm")
set(CMAKE_CXX_FLAGS_DEBUG "-g -Og -Wall -Wextra")
set(CMAKE_CXX_FLAGS_RELEASE "-O2")
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(COF2_BASE_DIR ${PROJECT_SOURCE_DIR})
message(STATUS "[Project] ${COF2_BASE_DIR}")

set(COF2_INCLUDE_DIR ${COF2_BASE_DIR}/include/)

# include_directories(include/COF2/Frontend/Lexer/ include/COF2/Frontend/Parser/)
include_directories(${COF2_INCLUDE_DIR})
add_subdirectory(src/)

set(COF2_ENABLE_TEST OFF)
if(COF2_ENABLE_TEST)
    add_subdirectory(tests/)
endif()
