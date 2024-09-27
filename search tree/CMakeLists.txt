cmake_minimum_required(VERSION 3.24)
set(CMAKE_CXX_STANDARD 20)

project(SearchTree)

include_directories(include)

add_executable(SearchTree
        main.cc
        src/Tree.cc
        src/Node.cc)