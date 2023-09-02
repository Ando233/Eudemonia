cmake_minimum_required(VERSION 3.26)
project(Eudemonia)
set(CMAKE_CXX_STANDARD 17)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/src)
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -O0")

file(GLOB_RECURSE DIR_SRC "src/*.cpp" "src/IR/*.cpp" "src/Driver/*.cpp" "src/Support/*.cpp" "src/Interpreter/*.cpp")
file(GLOB_RECURSE DIR_LIB_SRC "third_party/*.cpp")
add_compile_options(--std=c++17 -O2)
include_directories(src)
include_directories(third_party/antlr4-runtime)

add_executable(compiler ${DIR_SRC} ${DIR_LIB_SRC}
        src/Driver/Driver.cpp
        src/Support/IList.h
        src/Backend/ObjFunction.h
        src/Backend/ObjModule.cpp
        src/Interpreter/Interpreter.h
)
target_link_libraries(compiler -static)