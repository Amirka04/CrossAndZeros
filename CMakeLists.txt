cmake_minimum_required(VERSION 3.26)
project(MyGameEngine)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(GameEngine)

add_executable(MyGameEngine main.cpp)



target_include_directories(MyGameEngine PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/GameEngine/Window" )
target_include_directories(MyGameEngine PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/GameEngine/Color" )

target_link_libraries(MyGameEngine PUBLIC WindowEngine ColorEngine)