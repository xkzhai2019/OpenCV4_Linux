cmake_minimum_required(VERSION 3.20) 
project(test_Mat)
find_package(OpenCV REQUIRED) #
include_directories(${OpenCV_INCLUDE_DIRS}) #
set(CMAKE_CXX_STANDARD 11)
add_executable(test_Mat main.cpp) 
target_link_libraries(test_Mat ${OpenCV_LIBS}) #
