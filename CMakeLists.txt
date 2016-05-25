cmake_minimum_required(VERSION 2.8.3)
project(test)

find_package(catkin REQUIRED COMPONENTS diagnostic_msgs)

include_directories(${catkin_INCLUDE_DIRS})
add_executable(test_node main.cpp)
