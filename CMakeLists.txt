cmake_minimum_required(VERSION 3.15)
project(untitled3)

set(CMAKE_CXX_STANDARD 14)

include_directories(
        ${CMAKE_SOURCE_DIR}/include
)

add_executable(untitled3
        main.cpp
        ${CMAKE_SOURCE_DIR}/include/CJsonObject.cpp
        ${CMAKE_SOURCE_DIR}/include/cJSON.c
        )
