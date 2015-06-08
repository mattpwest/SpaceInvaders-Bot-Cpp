cmake_minimum_required(VERSION 3.2.2)
project(cppbot)

set(CMAKE_CXX_FLAGS "-std=c++11")

include_directories(${PROJECT_SOURCE_DIR}/include)

file(GLOB_RECURSE SRC_FILES RELATIVE ${PROJECT_SOURCE_DIR} src/*.cpp)
file(GLOB_RECURSE MAIN_FILES RELATIVE ${PROJECT_SOURCE_DIR} main/*.cpp)
add_executable(cppbot ${SRC_FILES} ${MAIN_FILES})

enable_testing()
file(GLOB_RECURSE TEST_FILES RELATIVE ${PROJECT_SOURCE_DIR} test/*.cpp)
add_executable(cppbot_test ${SRC_FILES} ${TEST_FILES})
add_test(Tests cppbot_test)
