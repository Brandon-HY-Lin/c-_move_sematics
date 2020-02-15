cmake_minimum_required(VERSION 3.0 FATAL_ERROR)
project(pass_by_lvalue_ref)

add_executable(lvalue_ref pass_by_lvalue_ref.cpp)

set_property(TARGET lvalue_ref PROPERTY CXX_STANDARD 11)
