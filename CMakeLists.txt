cmake_minimum_required(VERSION 3.15-3.18)

project(otus-edu-cpp-developer)

add_executable(CPP-HW
    main.cpp
    example.cpp
    example.h
)

set_target_properties(CPP-HW PROPERTIES
  CXX_STANDARD 17
  CXX_STANDARD_REQUIRED ON)

if(CMAKE_CXX_COMPILER_ID MATCHES "Clang" OR
  CMAKE_CXX_COMPILER_ID STREQUAL "GNU")

    target_compile_options(CPP-HW PRIVATE -Wall -Wextra -Werror -pedantic)

elseif(CMAKE_CXX_COMPILER_ID STREQUAL "MSVC")

    target_compile_options(CPP-HW PRIVATE /EHsc /W4 /WX)

endif()
