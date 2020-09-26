cmake_minimum_requried(VERSION 3.5.1)
project(sample)





set(CMAKE_CXX_STANDARD 11)

add_executable(sample account.cc)
add_executable(sample account_test.cc)