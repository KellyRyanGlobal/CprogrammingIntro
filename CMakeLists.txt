# cmake_minimum_required(VERSION <specify CMake version here>)
project(Cprogramming C)

set(CMAKE_C_STANDARD 11)

add_executable(Cprogramming
        2darray.c
        array.c
        linkedlist.c
        string_calls.c
        test.c readfile.c)
