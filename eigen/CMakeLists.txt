cmake_minimum_required(VERSION 3.0.2)
project(eigen_study)

# add_compile_options(-std=c++17)

find_package(Eigen3 REQUIRED COMPONENTS system)

include_directories(
    include
    ${EIGEN3_INCLUDE_DIRS}
)

add_executable(code1 src/code1.cpp)
