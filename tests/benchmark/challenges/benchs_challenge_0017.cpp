//
//  benchs_challenge_0017.cpp
//  project-euler
//
//  Created by Carlos Álvaro on 05/02/2022.
//  Copyright © 2022 cdalvaro.io. All rights reserved.
//

#include <benchmark/benchmark.h>

#include "challenges/c0017/challenge.hpp"

using namespace challenges;

namespace tests {

    static void BM_Challenges_0017(benchmark::State &state) {
        for (auto _ : state) {
            benchmark::DoNotOptimize(Challenge17(1, 100).solve());
        }
    }

    BENCHMARK(BM_Challenges_0017);

} // namespace tests
