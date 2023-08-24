cmake_minimum_required(VERSION 3.26)
project(Eudemonia)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/src)

file(GLOB_RECURSE DIR_SRC "src/*.cpp")
file(GLOB_RECURSE DIR_LIB_SRC "third_party/*.cpp")
add_compile_options(-g -std=c++17 -O2)
add_executable(compiler ${DIR_SRC} ${DIR_LIB_SRC})
