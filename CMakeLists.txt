cmake_minimum_required(VERSION 3.10)
project(ASCII-Table C)
file(GLOB_RECURSE SOURCE_FILES CONFIGURE_DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/src/*.c ${CMAKE_CURRENT_SOURCE_DIR}/src/*.h)
add_executable(ascii-table ${SOURCE_FILES})
target_include_directories(ascii-table PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/src)
