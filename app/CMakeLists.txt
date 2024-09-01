cmake_minimum_required(VERSION 3.1)
set(CMAKE_CXX_STANDARD 17)

set(SOURCE test_cmake.cpp)
add_executable(app ${SOURCE})
target_include_directories(app PUBLIC "${CMAKE_SOURCE_DIR}/include" "${CMAKE_SOURCE_DIR}/json")
target_link_libraries(app person)