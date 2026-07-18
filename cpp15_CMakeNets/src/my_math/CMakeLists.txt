add_library(
    my_math_lib
    src/my_math.cpp
)

target_include_directories(
    my_math_lib
    PUBLIC
    include
)