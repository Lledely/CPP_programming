cmake_minimum_required(VERSION 3.24)
set(CMAKE_CXX_STANDARD 20)

project(Wordly)

include_directories(include)
file (GLOB_RECURSE SOURCES "src/*.cc")

add_executable(Main main.cc)