cmake_minimum_required(VERSION 3.20)

project(smart_pointers)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(
    smart_pointers
    main.cpp
    src/power_of_troy.cpp
)

target_include_directories(
    smart_pointers
    PRIVATE
    include
)