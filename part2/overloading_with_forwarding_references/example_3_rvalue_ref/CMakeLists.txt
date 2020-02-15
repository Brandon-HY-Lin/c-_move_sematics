cmake_minimum_required(VERSION 3.0 FATAL_ERROR)
project(rvalue_ref)

add_executable(rvalue_ref rvalue_ref.cpp)
set_property(TARGET rvalue_ref PROPERTY CXX_STANDARD 11)
