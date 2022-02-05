//
//  benchs_big_int.cpp
//  project-euler
//
//  Created by Carlos Álvaro on 05/02/2022.
//  Copyright © 2022 cdalvaro.io. All rights reserved.
//

#include <benchmark/benchmark.h>

#include "tools/types/big_int.hpp"

using namespace tools::types;

namespace tests {

    static void BM_Tools_Types_BigInt_Addition(benchmark::State &state) {
        const BigInt numberA("37107287533902102798797998220837590246510135740250");
        const BigInt numberB("46376937677490009712648124896970078050417018260538");
        for (auto _ : state) {
            benchmark::DoNotOptimize(numberA + numberB);
        }
    }

    static void BM_Tools_Types_BigInt_AdditionWithZero(benchmark::State &state) {
        const BigInt numberA("37107287533902102798797998220837590246510135740250");
        const BigInt zero("0");
        for (auto _ : state) {
            benchmark::DoNotOptimize(numberA + zero);
        }
    }

    static void BM_Tools_Types_BigInt_Product(benchmark::State &state) {
        const BigInt numberA("37107287533902102798797998220837590246510135740250");
        const BigInt numberB("46376937677490009712648124896970078050417018260538");
        for (auto _ : state) {
            benchmark::DoNotOptimize(numberA * numberB);
        }
    }

    static void BM_Tools_Types_BigInt_ProductByZero(benchmark::State &state) {
        const BigInt numberA("37107287533902102798797998220837590246510135740250");
        const BigInt zero("0");
        for (auto _ : state) {
            benchmark::DoNotOptimize(numberA * zero);
        }
    }

    static void BM_Tools_Types_BigInt_LowerThan_Comparison(benchmark::State &state) {
        const BigInt numberA("371072875339021027984637693767749000971264813");
        const BigInt numberB("371072875339021027984637693767749000971264812");
        for (auto _ : state) {
            benchmark::DoNotOptimize(numberA < numberB);
        }
    }

    static void BM_Tools_Types_BigInt_LowerThan_Comparison_SmallNumber(benchmark::State &state) {
        const BigInt numberA("371072875339021027984637693767749000971264813");
        const BigInt numberB("37107287533902102798463769");
        for (auto _ : state) {
            benchmark::DoNotOptimize(numberA < numberB);
        }
    }

    static void BM_Tools_Types_BigInt_EqualTo_Comparison(benchmark::State &state) {
        const BigInt numberA("371072875339021027984637693767749000971264813");
        const BigInt numberB("371072875339021027984637693767749000971264812");
        for (auto _ : state) {
            benchmark::DoNotOptimize(numberA == numberB);
        }
    }

    static void BM_Tools_Types_BigInt_EqualTo_Comparison_SmallNumber(benchmark::State &state) {
        const BigInt numberA("371072875339021027984637693767749000971264813");
        const BigInt numberB("37107287533902102798463769");
        for (auto _ : state) {
            benchmark::DoNotOptimize(numberA == numberB);
        }
    }

    BENCHMARK(BM_Tools_Types_BigInt_Addition);
    BENCHMARK(BM_Tools_Types_BigInt_AdditionWithZero);
    BENCHMARK(BM_Tools_Types_BigInt_Product);
    BENCHMARK(BM_Tools_Types_BigInt_ProductByZero);
    BENCHMARK(BM_Tools_Types_BigInt_LowerThan_Comparison);
    BENCHMARK(BM_Tools_Types_BigInt_LowerThan_Comparison_SmallNumber);
    BENCHMARK(BM_Tools_Types_BigInt_EqualTo_Comparison);
    BENCHMARK(BM_Tools_Types_BigInt_EqualTo_Comparison_SmallNumber);

} // namespace tests
