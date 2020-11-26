cmake_minimum_required (VERSION 3.7)

project(MyHello C CXX)

set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD 11)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)
SET(GCC_COVERAGE_COMPILE_FLAGS "-fprofile-arcs -ftest-coverage")
SET(GCC_COVERAGE_LINK_FLAGS    "-lgcov")
SET(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} ${GCC_COVERAGE_COMPILE_FLAGS}")
SET(CMAKE_EXE_LINKER_FLAGS  "${CMAKE_EXE_LINKER_FLAGS} ${GCC_COVERAGE_LINK_FLAGS}")


#set(gtest_force_shared_crt ON)
enable_testing()

add_subdirectory(googletest)
add_subdirectory(test)
set(Headers src/mike_math.hpp)
set(Sources src/hello.cpp)
set(Sources2 src/mike_math.cpp)

add_library(MyLib STATIC ${Sources2} ${Headers})

add_executable(MyHello ${Sources} ${Headers}) 
target_link_libraries(MyHello MyLib)





