cmake_minimum_required(VERSION 3.0 FATAL_ERROR)
project(perils_of_forwarding_references)

add_executable(perils perils_of_forwarding_references.cpp)

set_property(TARGET perils PROPERTY CXX_STANDARD 11)
