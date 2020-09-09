# CMakeLists for test
cmake_minimum_required(VERSION 2.8)

# project
project(bubble_sort)
# target file
add_library(bubble_sort bubble_sort.cpp)

include_directories(../../include)
