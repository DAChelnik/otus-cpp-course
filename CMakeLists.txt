cmake_minimum_required(VERSION 3.5)

project(
    03.homework
    VERSION 0.1
    DESCRIPTION "Игра Угадай число"
	)

add_executable(
	guess_the_number
	guess_the_number.cpp
    random_value.h
    random_value.cpp
	)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

set_property(TARGET guess_the_number PROPERTY
    MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")

