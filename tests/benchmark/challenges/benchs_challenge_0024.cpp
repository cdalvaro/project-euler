//
//  benchs_challenge_0024.cpp
//  project-euler
//
//  Created by Carlos Álvaro on 06/02/2022.
//  Copyright © 2022 cdalvaro.io. All rights reserved.
//

#include <benchmark/benchmark.h>

#include "challenges/c0024/challenge.hpp"

using namespace challenges;

namespace tests {

    static void BM_Challenges_0024(benchmark::State &state) {
        for (auto _ : state) {
            benchmark::DoNotOptimize(Challenge24("012345", 600).solve());
        }
    }

    BENCHMARK(BM_Challenges_0024);

} // namespace tests
