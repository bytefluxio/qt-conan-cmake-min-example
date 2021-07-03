cmake_minimum_required(VERSION 3.19)
project(MinExample)

set(CMAKE_CXX_STANDARD 20)


set(PROJECT_SOURCES
        main.cpp)


include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup(TARGETS)

add_executable(${PROJECT_NAME} ${PROJECT_SOURCES})

target_link_libraries(${PROJECT_NAME} CONAN_PKG::qt)

file(
        COPY
        ${CMAKE_BINARY_DIR}/qt.conf
        DESTINATION
        ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}
)