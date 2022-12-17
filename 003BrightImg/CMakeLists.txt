cmake_minimum_required(VERSION 3.20) 
project(Bright_Mat)
find_package(OpenCV REQUIRED) #
include_directories(${OpenCV_INCLUDE_DIRS}) #
set(CMAKE_CXX_STANDARD 11)
add_executable(Bright_Mat main.cpp) 
target_link_libraries(Bright_Mat ${OpenCV_LIBS}) #
