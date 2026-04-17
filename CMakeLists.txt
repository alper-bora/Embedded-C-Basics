cmake_minimum_required(VERSION 3.10)
project(Embedded_C_Basics C)

set(CMAKE_C_STANDARD 99)

add_executable(Embedded_C_Basics data_structures/main.c data_structures/stack.c
        data_structures/queue.h
        data_structures/queue.c
        data_structures/linkedlist.h
        data_structures/linkedlist.c
        data_structures/tree.h
        data_structures/tree.c
        enums_unions/main.c
        file_io/main.c
        ring_buffer/main.c
        sorting_algorithms/bubble_sort.c
        sorting_algorithms/insertion_sort.c
        graphs/main.c
        graphs/dfs.c
        graphs/dfs.h
        graphs/bfs.c
        graphs/bfs.h
        bitwise_ops/main.c
        io_exercises/car.c
        io_exercises/car.c)