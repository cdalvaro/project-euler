cmake_minimum_required(VERSION 3.9)

project(project-euler VERSION 1.0.0 DESCRIPTION "Mathematical problems solved in C++" LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -stdlib=libc++")
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -stdlib=libc++ -lc++abi")

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} --coverage -fsanitize=address")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} --coverage -fsanitize=address")
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
