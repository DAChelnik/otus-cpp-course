cmake_minimum_required (VERSION 3.17)
 
project(MyLibraries)
 
set(HEADER_FILES 
    random_value.h
    ask_about_name.h)

set(SOURCE_FILES 
    random_value.cpp
    ask_about_name.cpp)
 
# We declare the project as a static library and add all the source code files to it.
add_library(
    MyLibraries
    STATIC ${HEADER_FILES} ${SOURCE_FILES})

set_target_properties(MyLibraries PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED ON)