cmake_minimum_required(VERSION 3.0)

project(Contest2 CXX)

if (NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Debug)
endif(NOT CMAKE_BUILD_TYPE)

set(CMAKE_CXX_STANDARD 14)

# the following options prevent compiler-optimization issues that are unwanted in an edu process
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -O0 -Werror=return-type")
set(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -O0")

#### the list of targets ####
add_executable(ProblemA a/main.cpp)
add_executable(ProblemB b/main.cpp)
add_executable(ProblemC c/main.cpp)
add_executable(ProblemD d/main.cpp)
add_executable(ProblemE e/main.cpp)
add_executable(ProblemF f/main.cpp)
add_executable(ProblemG g/main.cpp)
add_executable(ProblemH h/main.cpp)
add_executable(ProblemI i/main.cpp)
add_executable(ProblemJ j/main.cpp)
add_executable(ProblemK k/main.cpp)
