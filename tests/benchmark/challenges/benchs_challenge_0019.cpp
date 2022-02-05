//
//  benchs_challenge_0019.cpp
//  project-euler
//
//  Created by Carlos Álvaro on 05/02/2022.
//  Copyright © 2022 cdalvaro.io. All rights reserved.
//

#include <benchmark/benchmark.h>

#include "challenges/c0019/challenge.hpp"

using namespace challenges;

namespace tests {

    static void BM_Challenges_0019(benchmark::State &state) {
        for (auto _ : state) {
            benchmark::DoNotOptimize(Challenge19(1'901, 1'924).solve());
        }
    }

    BENCHMARK(BM_Challenges_0019);

} // namespace tests
