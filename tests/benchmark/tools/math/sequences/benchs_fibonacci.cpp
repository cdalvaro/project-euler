//
//  benchs_fibonacci.cpp
//  project-euler
//
//  Created by Carlos Álvaro on 12/02/2022.
//  Copyright © 2022 cdalvaro.io. All rights reserved.
//

#include <benchmark/benchmark.h>

#include "tools/math/sequences/fibonacci.hpp"

using namespace tools::math::sequences;

namespace tests {

    static void BM_Tools_Math_Sequences_Fibonacci(benchmark::State &state) {
        Fibonacci fibonacci;
        for (auto _ : state) {
            benchmark::DoNotOptimize(fibonacci(100));
        }
    }

    BENCHMARK(BM_Tools_Math_Sequences_Fibonacci);

} // namespace tests
