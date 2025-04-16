project(project-euler-unit-tests)

include(GoogleTest)

set(GTEST_VERSION 1.16.0)

find_package(GTest ${GTEST_VERSION})
if (NOT GTest_FOUND)
  if (DEFINED ENV{CI})
    MESSAGE(STATUS "GTest ${GTEST_VERSION} not found, installing it")
    include(FetchContent)
    FetchContent_Declare(
      GTest
      GIT_REPOSITORY https://github.com/google/googletest.git
      GIT_TAG v${GTEST_VERSION}
    )
    FetchContent_MakeAvailable(GTest)
  else ()
    MESSAGE(FATAL_ERROR "GTest ${GTEST_VERSION} not found")
  endif ()
endif ()

file(GLOB_RECURSE UNIT_TESTS_FILES LIST_DIRECTORIES false
  ${CMAKE_SOURCE_DIR}/tests/unit/*.cpp
)
add_executable(${PROJECT_NAME} ${UNIT_TESTS_FILES})

target_include_directories(${PROJECT_NAME} PUBLIC
  ${CMAKE_SOURCE_DIR}
  ${CMAKE_SOURCE_DIR}/tests/lib
)
target_link_libraries(${PROJECT_NAME} ${PROJECT_EULER_LIBRARY})
if (GTest_FOUND)
  target_link_libraries(${PROJECT_NAME} GTest::Main)
else ()
  target_link_libraries(${PROJECT_NAME} gtest_main)
endif ()

gtest_discover_tests(${PROJECT_NAME})
