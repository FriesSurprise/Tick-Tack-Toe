cmake_minimum_required(VERSION 3.23)
project(Tick_Tack_Toe)

set(CMAKE_CXX_STANDARD 23)

add_executable(Tick_Tack_Toe main.cpp preperation.cpp funcs.h "board changing.cpp" "win checking.cpp")
