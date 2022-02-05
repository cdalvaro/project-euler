//
//  benchs_challenge_0009.cpp
//  project-euler
//
//  Created by Carlos Álvaro on 05/02/2022.
//  Copyright © 2022 cdalvaro.io. All rights reserved.
//

#include <benchmark/benchmark.h>

#include "challenges/c0009/challenge.hpp"

using namespace challenges;

namespace tests {

    static void BM_Challenges_0009(benchmark::State &state) {
        for (auto _ : state) {
            benchmark::DoNotOptimize(Challenge9(1'000).solve());
        }
    }

    BENCHMARK(BM_Challenges_0009);

} // namespace tests
