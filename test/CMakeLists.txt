cmake_minimum_required (VERSION 3.7)
set(This ExampleTests)
project(${This} C CXX)


set(Sources ExampleTests.cpp)

add_executable(${This} ${Sources})
target_link_libraries(${This} PUBLIC gtest_main gmock_main MyLib)
add_test(NAME ${This} COMMAND ${This})


