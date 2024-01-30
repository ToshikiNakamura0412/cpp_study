cmake_minimum_required(VERSION 3.15)
project(hello_world)

# add_library(hello_world_lib src/hello_world.cpp)
# target_include_directories(hello_world_lib PUBLIC include)

add_executable(hello_world src/main.cpp)
# target_link_libraries(hello_world hello_world_lib)

# make installするときに実行ファイルを/usr/binにコピーする
# install(TARGETS hello_world DESTINATION bin)
# install(DIRECTORY include/ DESTINATION include)