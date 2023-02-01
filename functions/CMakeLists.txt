cmake_minimum_required (VERSION 3.17)
 
project(MyFunctions)
 
set(HEADER_FILES 
    random_value.h
    ask_about_name.h)

set(SOURCE_FILES 
    random_value.cpp
    ask_about_name.cpp)
 
add_library(
    MyFunctions
    STATIC ${HEADER_FILES} ${SOURCE_FILES})

set_target_properties(MyFunctions PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED ON)