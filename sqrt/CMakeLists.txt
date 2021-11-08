cmake_minimum_required(VERSION 3.1)
project(sqrt)
 
# Locate GTest - https://www.srcmake.com/home/google-cpp-test-framework
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})
 
# Link runTests with what we want to test and the GTest and pthread library
add_executable(executeTests ${CMAKE_CURRENT_SOURCE_DIR}/sqrt_test.cpp)
target_link_libraries(executeTests ${GTEST_LIBRARIES} pthread)