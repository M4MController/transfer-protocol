# cmake_minimum_required(VERSION <specify CMake version here>)
project(transfer_protocol)

set(CMAKE_CXX_STANDARD 17)

add_library(transfer_protocol transfer.cpp transfer.h)