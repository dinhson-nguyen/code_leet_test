cmake_minimum_required(VERSION 3.26)
project(codeleet)

set(CMAKE_CXX_STANDARD 14)

add_executable(codeleet main.cpp
        jump_game.h
        merge-sorted-array.h
        triangle.h
        "Best Time to Buy and Sell Stock.h"
        "Sqrt(x).h")
