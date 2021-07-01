
cmake_minimum_required(VERSION 3.20)

project(derange VERSION 0.0)

configure_file(config.h.in config.h)

add_executable(derange src/main.cpp)
