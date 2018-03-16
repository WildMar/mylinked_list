cmake_minimum_required(VERSION 2.8.12)
set(CMAKE_BUILD_TYPE Debug)
include_directories(${PROJECT_SOURCE_DIR}/my_linked_list/include)
add_library(my_linked_list my_linked_list.c)