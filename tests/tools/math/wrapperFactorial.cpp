//
//  wrapperFactorial.cpp
//  Tests
//
//  Created by Carlos Álvaro on 29/3/21.
//  Copyright © 2021 cdalvaro. All rights reserved.
//

#include "challenges/tools/math/factorial.hpp"
#include "challenges/tools/types/big_int.hpp"

using namespace challenges::tools::math;

extern "C" double factorial(unsigned long long number) {
    return factorial<size_t, double>(number);
}

extern "C" char *factorialBigInt(unsigned long long number) {
    auto result = factorial<size_t, challenges::tools::types::BigInt>(number);

    auto size = std::distance(result.begin(), result.end());
    char *data = new char[size + 1];
    data[size] = '\0';

    std::transform(result.begin(), result.end(), data, [](const auto &n) {
        return static_cast<char>(n) + '0';
    });

    return data;
}
