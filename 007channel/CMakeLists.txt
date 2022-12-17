cmake_minimum_required(VERSION 3.20) 
project(test_channel)
find_package(OpenCV REQUIRED) #
include_directories(${OpenCV_INCLUDE_DIRS}) #
set(CMAKE_CXX_STANDARD 11)
add_executable(test_channel main.cpp) 
target_link_libraries(test_channel ${OpenCV_LIBS}) #
