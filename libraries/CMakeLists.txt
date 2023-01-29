cmake_minimum_required (VERSION 3.17)
 
project(MyLibraries)
 
set(HEADER_FILES 
    "random_value.h")

set(SOURCE_FILES 
    "random_value.cpp")
 
# We declare the project as a static library and add all the source code files to it.
add_library(
    MyLibraries
    STATIC ${HEADER_FILES} ${SOURCE_FILES})