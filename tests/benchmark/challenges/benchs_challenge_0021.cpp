//
//  benchs_challenge_0021.cpp
//  project-euler
//
//  Created by Carlos Álvaro on 05/02/2022.
//  Copyright © 2022 cdalvaro.io. All rights reserved.
//

#include <benchmark/benchmark.h>

#include "challenges/c0021/challenge.hpp"

using namespace challenges;

namespace tests {

    static void BM_Challenges_0021(benchmark::State &state) {
        for (auto _ : state) {
            benchmark::DoNotOptimize(Challenge21(3'000).solve());
        }
    }

    BENCHMARK(BM_Challenges_0021);

} // namespace tests
