cmake_minimum_required(VERSION 3.21)
project(untitled)

set(CMAKE_CXX_STANDARD 14)

add_executable(untitled main.cpp operator_over_loading.cpp operator_over_loading.h smart_pointer/move/move_example.cpp smart_pointer/move/move_example.h)
