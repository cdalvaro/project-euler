//
//  benchs_number_properties.cpp
//  project-euler
//
//  Created by Carlos Álvaro on 03/02/2022.
//  Copyright © 2022 cdalvaro.io. All rights reserved.
//

#include <benchmark/benchmark.h>

#include "tools/math/number_properties.hpp"

using namespace tools::math;

namespace tests {

    static void BM_Tools_Math_NumberProperties_isAbundant(benchmark::State &state) {
        for (auto _ : state) {
            benchmark::DoNotOptimize(isAbundant(12));
        }
    }

    static void BM_Tools_Math_NumberProperties_isDeficient(benchmark::State &state) {
        for (auto _ : state) {
            benchmark::DoNotOptimize(isDeficient(10));
        }
    }

    static void BM_Tools_Math_NumberProperties_isPerfect(benchmark::State &state) {
        for (auto _ : state) {
            benchmark::DoNotOptimize(isPerfect(496));
        }
    }

    BENCHMARK(BM_Tools_Math_NumberProperties_isAbundant);
    BENCHMARK(BM_Tools_Math_NumberProperties_isDeficient);
    BENCHMARK(BM_Tools_Math_NumberProperties_isPerfect);

} // namespace tests
