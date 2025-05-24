cmake_minimum_required(VERSION 3.10)
set(CMAKE_TOOLCHAIN_FILE "${CMAKE_SOURCE_DIR}/vcpkg/scripts/buildsystems/vcpkg.cmake"  CACHE STRING "vcpkg toolchain file")

project(test_3rd_func)
# enable_testing()

find_package(GTest CONFIG REQUIRED)

add_executable(test_3rd_func test_main.cpp)
target_link_libraries(test_3rd_func PRIVATE GTest::gtest GTest::gtest_main GTest::gmock GTest::gmock_main)
    
