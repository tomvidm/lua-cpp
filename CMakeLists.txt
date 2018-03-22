cmake_minimum_required(VERSION 3.0)

project(lua-cpp)

find_package(Lua 5.2 REQUIRED)
find_package(Boost COMPONENTS filesystem)

set(CMAKE_CXX_STANDARD 11)

set(LUACPP_INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/include/lua-cpp)
set(LUACPP_SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src/lua-cpp)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_subdirectory(src)