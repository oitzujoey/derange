
cmake_minimum_required(VERSION 3.20)

project(derange VERSION 0.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}")

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

find_package(Qt6 COMPONENTS Widgets REQUIRED)

add_executable(derange src/main.cpp)

target_link_libraries(derange PUBLIC Qt6::Widgets)

configure_file(src/config.h.in src/config.h)

target_include_directories(derange PUBLIC "${PROJECT_BINARY_DIR}")

install(TARGETS derange DESTINATION bin)
