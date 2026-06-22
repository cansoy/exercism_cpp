cmake_minimum_required(VERSION 3.20)

project(lasagna_master)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(
    lasagna_master
    main.cpp
    src/lasagna_master.cpp
)

target_include_directories(
    lasagna_master
    PRIVATE
    include
)