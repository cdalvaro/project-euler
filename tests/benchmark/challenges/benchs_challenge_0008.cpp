//
//  benchs_challenge_0008.cpp
//  project-euler
//
//  Created by Carlos Álvaro on 05/02/2022.
//  Copyright © 2022 cdalvaro.io. All rights reserved.
//

#include <benchmark/benchmark.h>

#include "challenges/c0008/challenge.hpp"

using namespace challenges;

namespace tests {

    static void BM_Challenges_0008(benchmark::State &state) {
        for (auto _ : state) {
            benchmark::DoNotOptimize(Challenge8(20).solve());
        }
    }

    BENCHMARK(BM_Challenges_0008);

} // namespace tests
