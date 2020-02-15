cmake_minimum_required(VERSION 3.0 FATAL_ERROR)
project(move_assignment)

add_executable(move_assignment move_assignment.cpp)
set_property(TARGET move_assignment PROPERTY CXX_STANDARD 11)
