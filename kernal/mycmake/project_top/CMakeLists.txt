cmake_minimum_required(VERSION 3.16)
project(my_project LANGUAGES C)

set(CMAKE_BINARY_OUTPUT_DIRECTORY${CMAKE_BINARY_DIR}/bin)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY${CMAKE_BINARY_DIR}/lib)
add_subdirectory(src)
