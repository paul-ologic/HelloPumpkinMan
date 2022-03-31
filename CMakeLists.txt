cmake_minimum_required(VERSION 2.6)
project(hello_pumpkin_man)

find_package(Boost REQUIRED)
include_directories(${Boost_INCLUDE_DIRS})

add_executable(hello_pumpkin_man main.cpp)
install(TARGETS hello_pumpkin_man DESTINATION bin)
