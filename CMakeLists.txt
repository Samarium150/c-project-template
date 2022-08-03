cmake_minimum_required(VERSION 3.0)

if (POLICY CMP0048)
    cmake_policy(SET CMP0048 NEW)
endif (POLICY CMP0048)

project(template LANGUAGES C CXX VERSION 1.0.0)

include(CTest)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_C_FLAGS_DEBUG "-g")
set(CMAKE_CXX_FLAGS_DEBUG "-g")
set(CMAKE_C_FLAGS_RELEASE "-O3")
set(CMAKE_CXX_FLAGS_RELEASE "-O3")

add_subdirectory(lib)
add_subdirectory(src)
enable_testing()
add_subdirectory(test)
