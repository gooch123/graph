cmake_minimum_required(VERSION 3.26)
project(graph C)

set(CMAKE_C_STANDARD 11)

add_executable(graph main.c
        node.h
        dfs.h
        dfs.c
        node.c
        bfs.h
        bfs.c)
