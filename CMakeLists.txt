#cd build
#cmake ..
#cmake --build . --config Release

cmake_minimum_required(VERSION 3.10.0)
project(MyProject VERSION 1.0.0)

add_subdirectory(lib)
add_subdirectory(app)