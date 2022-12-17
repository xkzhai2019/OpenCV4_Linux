cmake_minimum_required(VERSION 3.20) 
project(test_imread_and_imwrite)
find_package(OpenCV REQUIRED) #加这一句 
include_directories(${OpenCV_INCLUDE_DIRS}) #加这一句 
set(CMAKE_CXX_STANDARD 11)
add_executable(test_imread_and_imwrite main.cpp) 
target_link_libraries(test_imread_and_imwrite ${OpenCV_LIBS}) #加这一句 ```
