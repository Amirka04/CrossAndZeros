cmake_minimum_required(VERSION 3.5)

find_package(SDL2 REQUIRED)
set(source "${CMAKE_CURRENT_SOURCE_DIR}/window.cpp" "${CMAKE_CURRENT_SOURCE_DIR}/window.h")
add_library(WindowEngine STATIC ${source})


target_include_directories(WindowEngine PUBLIC ${SDL2_INCLUDE_DIRS})
target_include_directories(WindowEngine PUBLIC "../Color")


target_link_libraries(WindowEngine PUBLIC ${SDL2_LIBRARIES} ColorEngine)