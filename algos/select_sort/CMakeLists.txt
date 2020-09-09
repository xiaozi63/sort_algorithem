# CMakeLists for test
cmake_minimum_required(VERSION 2.8)

# project
project(select_sort)
# target file
add_library(select_sort select_sort.cpp)

include_directories(../../include)
