cmake_minimum_required(VERSION 3.23)
project(week2tutorial)

set(CMAKE_CXX_STANDARD 17)

add_library(week2tutorial SHARED MyPlugin.cpp)
