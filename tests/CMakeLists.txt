project(${PROJECT_NAME}-tests)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_subdirectory(unit)
add_subdirectory(benchmark)
