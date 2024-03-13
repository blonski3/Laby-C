cmake_minimum_required(VERSION 3.27)
project(zad2 C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(zad2
        conversion.c
        conversion.h
        main.c)
