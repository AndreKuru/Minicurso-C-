cmake_minimum_required(VERSION 3.15)
project(exercise5 CXX)

add_executable(exercise5)

target_sources(
    exercise5
    PRIVATE
        functions.cpp
        functions.h
        main.cpp
        student.cpp
        student.h
)
