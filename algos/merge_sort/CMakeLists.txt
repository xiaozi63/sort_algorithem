# CMakeLists for test
cmake_minimum_required(VERSION 2.8)

# project
project(merge_sort)
# target file
add_library(merge_sort merge_sort.cpp)

include_directories(../../include)
