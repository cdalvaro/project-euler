//
//  benchs_challenge_0023.cpp
//  project-euler
//
//  Created by Carlos Álvaro on 29/01/2022.
//  Copyright © 2022 cdalvaro.io. All rights reserved.
//

#include <benchmark/benchmark.h>

#include "challenges/c0023/challenge.hpp"

using namespace challenges;

namespace tests {

    static void BM_Challenges_0023(benchmark::State &state) {
        for (auto _ : state) {
            benchmark::DoNotOptimize(Challenge23(28'123).solve());
        }
    }

    BENCHMARK(BM_Challenges_0023);

} // namespace tests
