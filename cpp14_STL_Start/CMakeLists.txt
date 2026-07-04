cmake_minimum_required(VERSION 3.20)

project(prj_name)

add_library(
    target_name
    src/pangram.cpp
)

target_compile_features(
    target_name
    PUBLIC
    cxx_std_20
)

target_compile_options(
    target_name
    PUBLIC
    -Wall
    -Wextra
    -Wpedantic
)

target_include_directories(
    target_name
    PUBLIC
    include
)

add_executable(
    exe_name
    main.cpp
)

target_link_libraries(
    exe_name
    PRIVATE
    target_name
)