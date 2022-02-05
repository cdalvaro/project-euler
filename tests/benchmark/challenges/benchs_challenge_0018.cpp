//
//  benchs_challenge_0018.cpp
//  project-euler
//
//  Created by Carlos Álvaro on 05/02/2022.
//  Copyright © 2022 cdalvaro.io. All rights reserved.
//

#include <benchmark/benchmark.h>

#include "challenges/c0018/challenge.hpp"

using namespace challenges;

namespace tests {

    static void BM_Challenges_0018(benchmark::State &state) {
        const Challenge18::Triangle_t triangle{
            {3}, {7, 4}, {2, 4, 6}, {8, 5, 9, 3}, {5, 6, 3, 7, 9}, {7, 1, 6, 3, 8, 4}, {9, 3, 8, 2, 7, 1, 5}};

        for (auto _ : state) {
            benchmark::DoNotOptimize(Challenge18(triangle).solve());
        }
    }

    BENCHMARK(BM_Challenges_0018);

} // namespace tests
