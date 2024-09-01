cmake_minimum_required(VERSION 3.25)
set(CMAKE_CXX_STANDARD 17)

project(test_cmake)

# Modules
add_subdirectory(src)
add_subdirectory(app)

# Copy res folder
file(MAKE_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/res)
