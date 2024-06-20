cmake_minimum_required(VERSION 3.27)
project(zad1)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(zad1
        fib.h
        fibtest.cpp
        fib.cpp
        fib.cpp)
