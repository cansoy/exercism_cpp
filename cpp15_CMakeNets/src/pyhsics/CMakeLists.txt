add_library(
    pyhsics_lib
    src/pyhsics.cpp
)

target_include_directories(
    pyhsics_lib
    PUBLIC
    include
)