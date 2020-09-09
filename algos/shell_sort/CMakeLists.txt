# CMakeLists for test
cmake_minimum_required(VERSION 2.8)

# project
project(shell_sort)
# target file
add_library(shell_sort shell_sort.cpp)

include_directories(../../include)
