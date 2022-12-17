cmake_minimum_required(VERSION 3.20) 
project(test_pixel)
find_package(OpenCV REQUIRED) #
include_directories(${OpenCV_INCLUDE_DIRS}) #
set(CMAKE_CXX_STANDARD 11)
add_executable(test_pixel main.cpp) 
target_link_libraries(test_pixel ${OpenCV_LIBS}) #
