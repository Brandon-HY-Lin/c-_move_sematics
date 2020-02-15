cmake_minimum_required(VERSION 3.0 FATAL_ERROR)
project(rvalue_ref_to_const)

add_executable(rvalue_ref_to_const rvalue_ref_to_const.cpp)

set_property(TARGET rvalue_ref_to_const PROPERTY CXX_STANDARD 11)
