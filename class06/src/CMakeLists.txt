cmake_minimum_required(VERSION 3.15)
project(exercise6 CXX)

add_executable(exercise6)

target_sources(
    exercise6
    PRIVATE
        course.cpp
        course.h
        main.cpp
        student.cpp
        student.h
)
