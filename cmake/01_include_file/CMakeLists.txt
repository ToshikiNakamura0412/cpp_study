cmake_minimum_required(VERSION 3.15)
project(hello_world)

add_library(hello_world_lib src/hello_world.cpp)
target_include_directories(hello_world_lib PUBLIC include)

add_executable(hello_world src/main.cpp)
target_link_libraries(hello_world hello_world_lib)

# make installするときに実行ファイルが/usr/local/binにコピーされる
install(TARGETS hello_world DESTINATION bin)
# make installするときにinclude内のディレクトリ・ファイルが/usr/binにコピーされる
# 宣言のみのヘッダファイルなのでincludeするファイルとしては不適切
install(DIRECTORY include/ DESTINATION include)
# 以下のようにするとinclude自体がコピーされる
# install(DIRECTORY include DESTINATION include)