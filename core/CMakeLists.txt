cmake_minimum_required (VERSION 3.17)
 
project(guess_the_number)
 
set(SOURCE_FILES "main.cpp")
 
add_executable (guess_the_number ${SOURCE_FILES})
 
include_directories("../functions")

target_link_libraries(guess_the_number MyFunctions)

set_target_properties(guess_the_number PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED ON)

    if (CMAKE_CXX_COMPILER_ID MATCHES "Clang" OR
    CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
    target_compile_options(guess_the_number PRIVATE 
        -g
        -Wall
        -Wextra
        -Werror
        -pedantic
    )
elseif (CMAKE_CXX_COMPILER_ID STREQUAL "MSVC")
    target_compile_options(guess_the_number PRIVATE
        /EHsc
        /W4
        /WX
    )
endif()