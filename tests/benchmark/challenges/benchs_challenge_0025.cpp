//
//  benchs_challenge_0025.cpp
//  project-euler
//
//  Created by Carlos Álvaro on 12/02/2022.
//  Copyright © 2022 cdalvaro.io. All rights reserved.
//

#include <benchmark/benchmark.h>

#include "challenges/c0025/challenge.hpp"

using namespace challenges;

namespace tests {

    static void BM_Challenges_0025(benchmark::State &state) {
        for (auto _ : state) {
            benchmark::DoNotOptimize(Challenge25(10).solve());
        }
    }

    BENCHMARK(BM_Challenges_0025);

} // namespace tests
