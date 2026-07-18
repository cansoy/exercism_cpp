

add_executable(
    app_output
    main.cpp
)

target_link_libraries(
    app_output
    PRIVATE
    science_lib
    pyhsics_lib
    my_math_lib
)

target_include_directories(
    app_output
    PRIVATE
    ${PROJECT_BINARY_DIR}/config
)