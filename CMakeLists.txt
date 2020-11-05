# CMake version
cmake_minimum_required(VERSION 3.0)

# Project name
set(myproject "proj1")
project(${myproject})

# Define the executable
add_executable(${PROJECT_NAME} main.cpp)
