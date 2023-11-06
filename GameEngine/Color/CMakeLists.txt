cmake_minimum_required(VERSION 3.5)

set(source "${CMAKE_CURRENT_SOURCE_DIR}/Color.h" "${CMAKE_CURRENT_SOURCE_DIR}/Color.cpp")

add_library(ColorEngine ${source})