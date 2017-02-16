cmake_minimum_required(VERSION 3.6)
project(TinyMath)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        CMakeLists.txt
        main.cpp
        Makefile
        README.md
        TinyColor.cpp
        TinyColor.h
        TinyVector TinyPoint.cpp TinyPoint.h)

add_executable(TinyMath ${SOURCE_FILES})