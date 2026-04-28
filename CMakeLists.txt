cmake_minimum_required(VERSION 3.10)
project(factorize_project)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(GTest REQUIRED)
enable_testing()

add_executable(factorize_test test_prime.cpp)

target_link_libraries(factorize_test PRIVATE GTest::gtest GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(factorize_test)
