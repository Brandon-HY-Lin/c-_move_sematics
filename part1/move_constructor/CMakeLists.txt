cmake_minimum_required(VERSION 3.0 FATAL_ERROR)
project(move_constructor)

add_executable(move_constructor move_constructor.cpp)
set_property(TARGET move_constructor PROPERTY CXX_STANDARD 11)
