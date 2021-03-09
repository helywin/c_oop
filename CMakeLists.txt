cmake_minimum_required(VERSION 3.10)
project(oop_c C)

set(CMAKE_C_STANDARD 11)

add_executable(oop_c main.c shape.c shape.h rectangle.c rectangle.h)