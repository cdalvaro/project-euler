//
//  benchs_challenge_0001.cpp
//  project-euler
//
//  Created by Carlos Álvaro on 29/01/2022.
//  Copyright © 2022 cdalvaro.io. All rights reserved.
//

#include <benchmark/benchmark.h>

#include "challenges/c0001/challenge.hpp"

using namespace challenges;

namespace tests {

    static void BM_Challenges_0001(benchmark::State &state) {
        for (auto _ : state) {
            benchmark::DoNotOptimize(Challenge1(1'000).solve());
        }
    }

    BENCHMARK(BM_Challenges_0001);

} // namespace tests
