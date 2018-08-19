#cd build
#cmake ..
#cmake --build .

cmake_minimum_required(VERSION 3.10.0)
project(MyProject VERSION 1.0.0)

# use STATIC in place of SHARED to work with static libs
add_library(
    HelloLib STATIC
    hello.hpp
    hello.cpp
)

add_executable(cmake-exec main.cpp)

target_link_libraries(cmake-exec PRIVATE HelloLib)