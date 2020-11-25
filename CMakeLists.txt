cmake_minimum_required (VERSION 3.7)

project(MyHello C CXX)

set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD 11)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)
#set(gtest_force_shared_crt ON)
#enable_testing()

#add_subdirectory(googletest)
#set(Headers Example.hpp)
set(Sources hello.cpp)
add_executable(MyHello ${Sources}) 
#add_library(${This} STATIC ${Sources} ${Headers})
#add_subdirectory(test)


