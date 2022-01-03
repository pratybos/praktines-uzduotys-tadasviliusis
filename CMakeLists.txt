cmake_minimum_required(VERSION 3.20)
project(antrauzdv)

set(CMAKE_CXX_STANDARD 14)

add_executable(antrauzdv main.cpp Component.h Leaf.cpp Leaf.h Composite.cpp Composite.h Color.cpp Color.h)
