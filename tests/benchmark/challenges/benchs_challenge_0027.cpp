//
//  benchs_challenge_0027.cpp
//  project-euler
//
//  Created by Carlos Álvaro on 15/01/2023.
//  Copyright © 2023 cdalvaro.io. All rights reserved.
//

#include <benchmark/benchmark.h>

#include "challenges/c0027/challenge.hpp"

using namespace challenges;

namespace tests {

    static void BM_Challenges_0027(benchmark::State &state) {
        for (auto _ : state) {
            benchmark::DoNotOptimize(Challenge27(100, 1700).solve());
        }
    }

    BENCHMARK(BM_Challenges_0027);

} // namespace tests
