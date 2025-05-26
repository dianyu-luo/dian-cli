cmake_minimum_required(VERSION 3.10)

project(test_3rd_func)
# enable_testing()

find_package(GTest CONFIG REQUIRED)
find_package(Boost CONFIG REQUIRED COMPONENTS log log_setup )

add_executable(test_3rd_func test_main.cpp)
target_link_libraries(test_3rd_func PRIVATE GTest::gtest GTest::gtest_main GTest::gmock GTest::gmock_main
                                            Boost::boost  Boost::log  Boost::log_setup)
    
