include_directories(include)

file(GLOB util_src "src/*.c")
add_library(utils OBJECT ${util_src})
target_link_directories(utils PUBLIC include)
