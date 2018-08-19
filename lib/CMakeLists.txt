# use STATIC in place of SHARED to work with static libs
add_library(
    HelloLib STATIC
    public/include/hello.hpp
    source/hello.cpp
)

target_include_directories(HelloLib PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/public/include")
target_include_directories(HelloLib PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/source")

target_compile_definitions(HelloLib PRIVATE LIB_PRIVATE_MACRO=123)