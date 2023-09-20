cmake_minimum_required(VERSION 3.18)
project(threads)

# Fix behavior of CMAKE_CXX_STANDARD when targeting macOS.
if (POLICY CMP0025)
    cmake_policy(SET CMP0025 NEW)
endif ()

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_BUILD_DIR _out)
add_compile_options(
    -lpthread # for linux
)


set(HEADERS
)

set(SOURCES
    main.cpp
)

add_executable(threads ${SOURCES} ${HEADERS})
