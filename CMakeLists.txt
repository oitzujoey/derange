
cmake_minimum_required(VERSION 3.20)

project(derange VERSION 0.0)

configure_file(src/config.h.in src/config.h)

add_executable(derange src/main.cpp)
