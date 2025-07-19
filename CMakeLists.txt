cmake_minimum_required(VERSION 3.30)

set(CMAKE_GENERATOR "Ninja")

project(exam-simulation)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(src)
add_subdirectory(gtest)