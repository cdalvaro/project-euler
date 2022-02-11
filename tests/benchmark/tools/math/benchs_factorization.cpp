//
//  benchs_factorization.cpp
//  project-euler
//
//  Created by Carlos Álvaro on 11/02/2022.
//  Copyright © 2022 cdalvaro.io. All rights reserved.
//

#include <benchmark/benchmark.h>

#include "tools/math/factorization.hpp"

using namespace tools::math;

namespace tests {

    static void BM_Tools_Math_Factorization_isPrime_1009(benchmark::State &state) {
        for (auto _ : state) {
            benchmark::DoNotOptimize(isPrime(1'009));
        }
    }

    static void BM_Tools_Math_Factorization_isPrime_1133(benchmark::State &state) {
        for (auto _ : state) {
            benchmark::DoNotOptimize(isPrime(1'133));
        }
    }

    static void BM_Tools_Math_Factorization_divisors(benchmark::State &state) {
        for (auto _ : state) {
            benchmark::DoNotOptimize(divisors(135'716'031));
        }
    }

    static void BM_Tools_Math_Factorization_factorize(benchmark::State &state) {
        for (auto _ : state) {
            benchmark::DoNotOptimize(factorize(1'357'160'318'325));
        }
    }

    static void BM_Tools_Math_Factorization_amicablePair(benchmark::State &state) {
        for (auto _ : state) {
            benchmark::DoNotOptimize(amicablePair(17'296));
        }
    }

    BENCHMARK(BM_Tools_Math_Factorization_isPrime_1009);
    BENCHMARK(BM_Tools_Math_Factorization_isPrime_1133);
    BENCHMARK(BM_Tools_Math_Factorization_divisors);
    BENCHMARK(BM_Tools_Math_Factorization_factorize);
    BENCHMARK(BM_Tools_Math_Factorization_amicablePair);

} // namespace tests
