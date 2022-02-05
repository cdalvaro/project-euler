//
//  benchs_challenge_0020.cpp
//  project-euler
//
//  Created by Carlos Álvaro on 05/02/2022.
//  Copyright © 2022 cdalvaro.io. All rights reserved.
//

#include <benchmark/benchmark.h>

#include "challenges/c0020/challenge.hpp"

using namespace challenges;

namespace tests {

    static void BM_Challenges_0020(benchmark::State &state) {
        for (auto _ : state) {
            benchmark::DoNotOptimize(Challenge20(10).solve());
        }
    }

    BENCHMARK(BM_Challenges_0020);

} // namespace tests
