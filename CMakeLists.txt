cmake_minimum_required(VERSION 3.23)
project(Inst_dev_tools_lab_5)

set(CMAKE_CXX_STANDARD 20)

set(CMAKE_EXE_LINKER_FLAGS "-static")
add_executable(Inst_dev_tools_lab_5 TestCalc.cpp)
