set(SRC_INCLUDE ${CMAKE_SOURCE_DIR}/include)
set(UTHASH_INCLUDE ${CMAKE_SOURCE_DIR}/lib/uthash/src)
set(UTILS_INCLUDE ${CMAKE_SOURCE_DIR}/lib/utils/include)
set(GTEST_INCLUDE googletest/googletest/include)

include_directories(${SRC_INCLUDE})
include_directories(${UTHASH_INCLUDE})
include_directories(${UTILS_INCLUDE})

add_subdirectory(googletest)
include(GoogleTest)

file(GLOB test_src "*.cpp")
add_executable(test_main main.cpp ${test_src})

target_link_directories(test_main PUBLIC ${GTEST_INCLUDE} ${SRC_INCLUDE} ${UTHASH_INCLUDE} ${UTILS_INCLUDE})
target_link_libraries(test_main gtest lib utils)

add_test(NAME test COMMAND test_main)
