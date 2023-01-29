# Основной CMake, который содержит подключение всех подкаталогов

cmake_minimum_required(VERSION 3.17)

project(
    03.homework
    VERSION 0.1
    DESCRIPTION "Игра Угадай число"
	)

add_subdirectory (core)         # смотрим в директорию "core" для обработки CMake
add_subdirectory (libraries)    # смотрим в директорию "libraries" для обработки CMake