cmake_minimum_required(VERSION 3.29)
project(Sadi)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Sadi
    main.cpp
    problems.h)
