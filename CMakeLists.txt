cmake_minimum_required(VERSION 3.15)
project(colored_input CXX)
add_executable(${PROJECT_NAME} src/main.cpp)
target_link_libraries(${PROJECT_NAME} readline)