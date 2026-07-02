cmake_minimum_required(VERSION 3.20)

project(raw_pointers)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(
    raw_pointer
    main.cpp
    src/speedywagon.cpp
)

target_include_directories(
    raw_pointer
    PRIVATE
    include
)