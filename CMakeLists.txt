cmake_minimum_required(VERSION 3.8)
project(LevelMap)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Blocks.h Tank.h)
add_executable(LevelMap ${SOURCE_FILES})