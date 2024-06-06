cmake_minimum_required(VERSION 3.27)
project(Zadanie_1 C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(Zadanie_1
        main.c
        reader.c
        reader.h
        statemachine.h
        statemachine.c
        state.c)
