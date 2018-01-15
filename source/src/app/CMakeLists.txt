cmake_minimum_required(VERSION 2.6)

include_directories(${CMAKE_SOURCE_DIR})
project (app)
add_executable(exec main.c)
target_link_libraries(exec calc)

message("source_dir = ${CMAKE_SOURCE_DIR}")
message("binary_dir = ${CMAKE_BINARY_DIR}")

