project(project-euler-benchmark-tests)

set(BENCHMARK_VERSION 1.6.1)

find_package(benchmark ${BENCHMARK_VERSION})
if (NOT benchmark_FOUND)
  if (DEFINED ENV{CI})
    MESSAGE(STATUS "benchmark ${BENCHMARK_VERSION} not found, installing it")
    include(FetchContent)
    FetchContent_Declare(
                benchmark
                GIT_REPOSITORY https://github.com/google/benchmark.git
                GIT_TAG v${BENCHMARK_VERSION}
        )
    set(BENCHMARK_ENABLE_TESTING OFF CACHE BOOL "" FORCE)
    FetchContent_MakeAvailable(benchmark)
  else ()
    MESSAGE(FATAL_ERROR "Google::benchmark ${BENCHMARK_VERSION} not found")
  endif ()
endif ()

file(GLOB_RECURSE BENCHMARK_TESTS_FILES LIST_DIRECTORIES false ${CMAKE_SOURCE_DIR}/tests/benchmark/*.cpp)
add_executable(${PROJECT_NAME} ${BENCHMARK_TESTS_FILES})

target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_SOURCE_DIR} ${CMAKE_SOURCE_DIR}/tests/lib)
target_link_libraries(${PROJECT_NAME} ${PROJECT_EULER_LIBRARY})
if (benchmark_FOUND)
  target_link_libraries(${PROJECT_NAME} benchmark::benchmark_main)
else ()
  target_link_libraries(${PROJECT_NAME} benchmark_main)
endif ()

add_test(BenchmarkTests ${PROJECT_NAME})
