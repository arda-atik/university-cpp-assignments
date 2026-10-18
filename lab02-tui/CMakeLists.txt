cmake_minimum_required(VERSION 3.20)
project(TUI)

set(CMAKE_CXX_STANDARD 20)

include_directories(headers)

add_executable(TUI
        sources/main.cpp
        sources/tui.cpp
        sources/files.cpp
        headers/tui.h
        headers/files.h
)