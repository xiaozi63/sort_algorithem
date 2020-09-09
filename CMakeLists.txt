# CMakeLists for test
cmake_minimum_required(VERSION 2.8)

# project
project(sort_algo)
set(MODULE_NAME sort_algo)

add_subdirectory(algos/bubble_sort)
add_subdirectory(algos/select_sort)
add_subdirectory(algos/insertion_sort)
add_subdirectory(algos/shell_sort)
# target file

# include dir
include_directories(
    ${PROJECT_SOURCE_DIR}/include)

set(SRC
    src/main.cpp)

add_executable(sort_algo ${SRC})
target_link_libraries(sort_algo 
    bubble_sort 
    select_sort 
    insertion_sort
    shell_sort)
