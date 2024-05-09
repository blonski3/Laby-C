cmake_minimum_required(VERSION 3.27)
project(zad1 C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(zad1
        triangle.c
        triangle.h
        main.c)
