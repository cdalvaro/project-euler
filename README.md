[![Challenges Soved][challenges_solved_badge]][profile_link]
[![C++ Version][cpp_badge]][cpp_link]
[![Compilation Tool][compilation_tool_badge]][compilation_tool_link]
[![Unit Tests][unit_testing_badge]][unit_testing_link]
[![GitHub Challenges][gh_challenges_badge]][gh_challenges_link]
[![Code coverage][codecov_badge]][codecov_link]

# Project Euler Challenges

[Project Euler](https://projecteuler.net) is a series of challenging mathematical/computer programming problems that
will require more than just mathematical insights to solve. Although mathematics will help you arrive at elegant and
efficient methods, the use of a computer and programming skills will be required to solve most problems.

The motivation for starting Project Euler, and its continuation, is to provide a platform for the inquiring mind to
delve into unfamiliar areas and learn new concepts in a fun and recreational context.

## Table of Contents

  - [Structure](#structure)
  - [Solutions](#solutions)

## Structure

This project is composed by the [`Challenges`](lib) library, where you can find algorithms for each Project Euler's
challenge inside its corresponding directory. And the [`tests`](tests) directory, which contains the verification of
each challenge algorithm.

Tests are built using [_Google Test_](https://github.com/google/googletest) and [_Google
Benchmark_](https://github.com/google/benchmark) libraries.

## Solutions

Solutions are located inside `lib/challenges/cWXYZ` directory, where `WXYZ` is the challenge number following
the [Archive](https://projecteuler.net/archives) section on Project Euler webpage.

<details>
  <summary>Click here to unfold solved challenges list</summary>

  - [Challenge 1](lib/challenges/c0001)
  - [Challenge 2](lib/challenges/c0002)
  - [Challenge 3](lib/challenges/c0003)
  - [Challenge 4](lib/challenges/c0004)
  - [Challenge 5](lib/challenges/c0005)
  - [Challenge 6](lib/challenges/c0006)
  - [Challenge 7](lib/challenges/c0007)
  - [Challenge 8](lib/challenges/c0008)
  - [Challenge 9](lib/challenges/c0009)
  - [Challenge 10](lib/challenges/c0010)
  - [Challenge 11](lib/challenges/c0011)
  - [Challenge 12](lib/challenges/c0012)
  - [Challenge 13](lib/challenges/c0013)
  - [Challenge 14](lib/challenges/c0014)
  - [Challenge 15](lib/challenges/c0015)
  - [Challenge 16](lib/challenges/c0016)
  - [Challenge 17](lib/challenges/c0017)
  - [Challenge 18](lib/challenges/c0018)
  - [Challenge 19](lib/challenges/c0019)
  - [Challenge 20](lib/challenges/c0020)
  - [Challenge 21](lib/challenges/c0021)
  - [Challenge 22](lib/challenges/c0022)
  - [Challenge 23](lib/challenges/c0023)
  - [Challenge 24](lib/challenges/c0024)

</details>

[challenges_solved_badge]: https://img.shields.io/badge/Solved-24-f93

[profile_link]: https://projecteuler.net/progress=cdalvaro

[cpp_badge]: https://img.shields.io/badge/C++-17-00599C?logo=C%2B%2B

[cpp_link]: https://en.cppreference.com/w/cpp/17

[compilation_tool_badge]: https://img.shields.io/badge/CMake-3.9-064F8C?logo=CMake

[compilation_tool_link]: https://cmake.org/

[unit_testing_badge]: https://img.shields.io/badge/GTest-1.11.0-4285F4?logo=Google

[unit_testing_link]: https://developer.apple.com/library/archive/documentation/ToolsLanguages/Conceptual/Xcode_Overview/UnitTesting.html

[gh_challenges_badge]: https://img.shields.io/github/workflow/status/cdalvaro/project-euler/Challenges

[gh_challenges_link]: https://github.com/cdalvaro/project-euler/actions/workflows/tests.yml

[codecov_badge]: https://codecov.io/gh/cdalvaro/project-euler/branch/main/graph/badge.svg?token=O8ZAI16P6C

[codecov_link]: https://codecov.io/gh/cdalvaro/project-euler
