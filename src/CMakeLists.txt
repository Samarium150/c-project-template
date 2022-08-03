set(SRC_INCLUDE ${CMAKE_SOURCE_DIR}/include)
set(UTHASH_INCLUDE ${CMAKE_SOURCE_DIR}/lib/uthash/src)
set(UTILS_INCLUDE ${CMAKE_SOURCE_DIR}/lib/utils/include)

include_directories(${SRC_INCLUDE})
include_directories(${UTHASH_INCLUDE})
include_directories(${UTILS_INCLUDE})

file(GLOB src "*.c")
LIST(REMOVE_ITEM src ${CMAKE_CURRENT_SOURCE_DIR}/main.c)
add_library(lib OBJECT ${src})
target_link_directories(lib PUBLIC ${SRC_INCLUDE} ${UTHASH_INCLUDE} ${UTILS_INCLUDE})
target_link_libraries(lib utils)

add_executable(main main.c)
target_link_libraries(main lib utils)
