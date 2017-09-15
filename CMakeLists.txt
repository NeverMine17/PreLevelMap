cmake_minimum_required(VERSION 3.8)
project(PreLevelMap)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        src/AStar.cpp
        src/AStar.h
        src/Dijkstra.cpp
        src/Dijkstra.h
        src/Node.cpp
        src/Node.h
        src/PathAlgorithm.h
        src/PathFinder.h
        main.cpp)

link_libraries(sfml-graphics sfml-window sfml-system)

add_executable(PreLevelMap ${SOURCE_FILES})