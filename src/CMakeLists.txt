cmake_minimum_required(VERSION 2.8.12)

include_directories(${PROJECT_SOURCE_DIR}/my_linked_list/include)
add_library(my_linked_list my_linked_list.c)