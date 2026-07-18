add_library(
    science_lib
    src/science.cpp
)

target_include_directories(
    science_lib
    PUBLIC
    include
)