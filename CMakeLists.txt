cmake_minimum_required(VERSION 3.10)
project(test_cmake)

set(CMAKE_CXX_STANDARD 17)

# Modules
add_subdirectory(src)
add_subdirectory(app)

# Copy res folder
file(MAKE_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/res)