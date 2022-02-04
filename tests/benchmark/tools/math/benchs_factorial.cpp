//
//  benchs_factorial.cpp
//  project-euler
//
//  Created by Carlos Álvaro on 03/02/2022.
//  Copyright © 2022 cdalvaro.io. All rights reserved.
//

#include <benchmark/benchmark.h>

#include "tools/math/factorial.hpp"

using namespace tools::math;

namespace tests {

    static void BM_Tools_Math_Factorial_Twenty(benchmark::State &state) {
        for (auto _ : state) {
            benchmark::DoNotOptimize(factorial(20));
        }
    }

    BENCHMARK(BM_Tools_Math_Factorial_Twenty);

} // namespace tests
