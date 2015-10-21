cmake_minimum_required(VERSION 3.2)
project(quartz)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

include(quartz-config.cmake)

add_library(quartz SHARED
  source/Quartz.cpp
)

include_directories(
  ${quartz_includes}
)