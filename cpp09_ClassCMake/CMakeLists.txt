cmake_minimum_required(VERSION 3.16)
project(doctor_data)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
add_executable(
    doctor_data
    ./main.cpp
    ./src/doctor_data.cpp
)