cmake_minimum_required(VERSION 3.30)

project(project-euler VERSION 1.0.0 DESCRIPTION "Mathematical problems solved in C++" LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} --coverage -fsanitize=address -fno-omit-frame-pointer")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} --coverage -fsanitize=address -fno-omit-frame-pointer")
set(CMAKE_CXX_OUTPUT_EXTENSION_REPLACE 1)

add_compile_options(-Wall -Wextra -Werror -pedantic-errors)

# Library
set(PROJECT_EULER_LIBRARY ${PROJECT_NAME}-library)
file(GLOB_RECURSE SRC_FILES LIST_DIRECTORIES false ${CMAKE_SOURCE_DIR}/lib/*.cpp)
add_library(${PROJECT_EULER_LIBRARY} SHARED ${SRC_FILES})
set_target_properties(${PROJECT_EULER_LIBRARY} PROPERTIES VERSION ${PROJECT_VERSION})
target_include_directories(${PROJECT_EULER_LIBRARY} PUBLIC ${CMAKE_SOURCE_DIR}/lib)

# Testing
enable_testing()
add_subdirectory(tests)
