//
//  big_int_wrapper.cpp
//  Tests
//
//  Created by Carlos David on 26/07/2020.
//  Copyright © 2020 cdalvaro. All rights reserved.
//

#include "challenges/tools/types/big_int.hpp"

using namespace challenges::tools::types;

extern "C" unsigned long long addNumbersAsBigInt(unsigned long long a,
                                                 unsigned long long b) {
    return BigInt{a} + BigInt{b};
}

extern "C" char *addNumbersAsBigIntFromChars(const char *a,
                                             const char *b) {
    auto bigint = BigInt{a} + BigInt{b};
    auto size = std::distance(bigint.begin(), bigint.end());
    
    char *sum = new char[size + 1];
    sum[size] = '\0';
    
    std::transform(bigint.begin(), bigint.end(), sum,
                   [](const auto &n) {
        return static_cast<char>(n) + '0';
    });
    
    return sum;
}
