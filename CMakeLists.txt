cmake_minimum_required(VERSION 3.2.2)
project(cppbot)

include_directories(${PROJECT_SOURCE_DIR}/include)

file(GLOB_RECURSE SRC_FILES RELATIVE ${PROJECT_SOURCE_DIR} src/*.cpp)
add_executable(cppbot ${SRC_FILES})
