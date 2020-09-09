# CMakeLists for test
cmake_minimum_required(VERSION 2.8)

# project
project(insertion_sort)
# target file
add_library(insertion_sort insertion_sort.cpp)

include_directories(../../include)
