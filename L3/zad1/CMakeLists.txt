cmake_minimum_required(VERSION 3.27)
project(L3 C)

set(CMAKE_C_STANDARD 23)

add_executable(L3 main.c
        zeros.h
        zeros.c)
