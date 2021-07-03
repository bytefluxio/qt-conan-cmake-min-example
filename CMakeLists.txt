cmake_minimum_required(VERSION 3.19)
project(unifig)

set(CMAKE_CXX_STANDARD 20)

if(MSVC)
    add_compile_options(
            $<$<CONFIG:>:/MT>
            $<$<CONFIG:Debug>:/MTd>
            $<$<CONFIG:Release>:/MT>
    )
endif()

set(PROJECT_SOURCES
        main.cpp)

add_executable(${PROJECT_NAME} ${PROJECT_SOURCES})
