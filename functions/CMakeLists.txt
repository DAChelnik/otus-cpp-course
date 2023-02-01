cmake_minimum_required (VERSION 3.17)
 
project(MyFunctions)
 
set(HEADER_FILES 
    random_value.h
    read_write_file.h)

set(SOURCE_FILES 
    random_value.cpp
    read_write_file.cpp)
 
add_library(
    MyFunctions
    STATIC ${HEADER_FILES} ${SOURCE_FILES})

set_target_properties(MyFunctions PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED ON)