cmake_minimum_required(VERSION 3.1)
project(mod2)


# Locate GTest - https://www.srcmake.com/home/google-cpp-test-framework
find_package(GTest REQUIRED)
# include_directories(${GTEST_INCLUDE_DIRS})
# add_subdirectory(lib)
include_directories(${gtest_SOURCE_DIR}/lib ${gtest_SOURCE_DIR})
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

# Link runTests with what we want to test and the GTest and pthread library
add_executable(executeTests ${CMAKE_CURRENT_SOURCE_DIR}/mod2q3_digitalphoto_test.cpp)
target_link_libraries(executeTests ${GTEST_LIBRARIES} pthread)