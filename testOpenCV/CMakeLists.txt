cmake_minimum_required(VERSION 3.20) 
project(test_install)
find_package(OpenCV REQUIRED) #加这一句 
include_directories(${OpenCV_INCLUDE_DIRS}) #加这一句 
set(CMAKE_CXX_STANDARD 11)
add_executable(test_install testOpenCV.cpp) 
target_link_libraries(test_install ${OpenCV_LIBS}) #加这一句 ```
