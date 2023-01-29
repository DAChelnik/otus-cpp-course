cmake_minimum_required (VERSION 3.17)
 
project(guess_the_number)
 
set(SOURCE_FILES "main.cpp")
 
add_executable (guess_the_number ${SOURCE_FILES})
 
include_directories("../libraries")

target_link_libraries(guess_the_number MyLibraries)