cmake_minimum_required(VERSION 3.20)

project(unsigned_long_long)

add_executable(
    ull_output
    main.cpp
    src/grains.cpp
)

target_compile_features(
    ull_output
    PRIVATE
    cxx_std_20
)

target_compile_options(
    ull_output
    PRIVATE
    -Wall
    -Wextra
    -Wpedantic
)

target_include_directories(
    ull_output
    PRIVATE
    include
)

