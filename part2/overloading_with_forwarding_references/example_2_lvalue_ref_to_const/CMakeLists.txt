cmake_minimum_required(VERSION 3.0 FATAL_ERROR)
project(pass_by_lvalue_ref_to_const)

add_executable(lvalue_ref_to_const pass_by_lvalue_ref_to_const.cpp)

set_property(TARGET lvalue_ref_to_const PROPERTY CXX_STANDARD 11)
