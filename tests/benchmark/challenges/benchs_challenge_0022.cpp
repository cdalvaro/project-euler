//
//  benchs_challenge_0022.cpp
//  project-euler
//
//  Created by Carlos Álvaro on 05/02/2022.
//  Copyright © 2022 cdalvaro.io. All rights reserved.
//

#include <benchmark/benchmark.h>

#include "challenges/c0022/challenge.hpp"

using namespace challenges;

namespace tests {

    static void BM_Challenges_0022(benchmark::State &state) {
        for (auto _ : state) {
            benchmark::DoNotOptimize(Challenge22("lib/challenges/c0022/names.txt").solve());
        }
    }

    BENCHMARK(BM_Challenges_0022);

} // namespace tests
