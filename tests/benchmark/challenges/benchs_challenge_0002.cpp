//
//  benchs_challenge_0002.cpp
//  project-euler
//
//  Created by Carlos Álvaro on 03/02/2022.
//  Copyright © 2022 cdalvaro.io. All rights reserved.
//

#include <benchmark/benchmark.h>

#include "challenges/c0002/challenge.hpp"

using namespace challenges;

namespace tests {

    static void BM_Challenges_0002(benchmark::State &state) {
        for (auto _ : state) {
            benchmark::DoNotOptimize(Challenge2(10'000'000).solve());
        }
    }

    BENCHMARK(BM_Challenges_0002);

} // namespace tests
