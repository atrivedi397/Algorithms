cmake_minimum_required(VERSION 3.10)
project(Advanced_Algos)

set(CMAKE_CXX_STANDARD 11)

set(BUILD1 RedBlack_Tree)
set(BUILD1_FILES RedBlack_Tree.cpp)
add_executable(${BUILD1} ${BUILD1_FILES})