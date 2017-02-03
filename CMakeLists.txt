cmake_minimum_required(VERSION 3.6)
project(TinyMath)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp TinyVector TinyColor.cpp TinyColor.h)
add_executable(TinyMath ${SOURCE_FILES})