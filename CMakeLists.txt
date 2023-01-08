cmake_minimum_required(VERSION 3.20) 
project(main)
find_package(OpenCV REQUIRED) #
include_directories(${OpenCV_INCLUDE_DIRS}) #
set(CMAKE_CXX_STANDARD 11)
add_executable(main 013Trackbar.cpp) 
target_link_libraries(main ${OpenCV_LIBS}) #
