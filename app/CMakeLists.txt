find_package(fmt CONFIG REQUIRED)
find_package(range-v3 CONFIG REQUIRED)
find_package(cxxopts CONFIG REQUIRED)

set(SOURCE test_cmake.cpp)
add_executable(app ${SOURCE})

target_include_directories(app PUBLIC "${CMAKE_SOURCE_DIR}/include" "${CMAKE_SOURCE_DIR}/json")
target_link_libraries(app PRIVATE person fmt::fmt range-v3::range-v3 cxxopts::cxxopts)
