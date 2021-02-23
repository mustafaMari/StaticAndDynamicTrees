cmake_minimum_required(VERSION 3.17)
project(Lab3)

set(CMAKE_CXX_STANDARD 14)

add_executable(Lab3 main.cpp CNodeDynamic.cpp CNodeDynamic.h CNodeStatic.cpp CNodeStatic.h CTreeDynamic.cpp CTreeDynamic.h CTreeStatic.cpp CTreeStatic.h)