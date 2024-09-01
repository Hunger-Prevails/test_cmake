set(SOURCE person.cpp jsoncpp.cpp)

add_library(person ${SOURCE})
target_include_directories(person PUBLIC ${CMAKE_SOURCE_DIR}/include ${CMAKE_SOURCE_DIR}/json)
