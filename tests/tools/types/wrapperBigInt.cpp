//
//  big_int_wrapper.cpp
//  Tests
//
//  Created by Carlos David on 26/07/2020.
//  Copyright © 2020 cdalvaro. All rights reserved.
//

#include "challenges/tools/types/big_int.hpp"

using namespace challenges::tools::types;

extern "C" unsigned long long addNumbersAsBigInt(unsigned long long a, unsigned long long b) {
    return BigInt{a} + BigInt{b};
}

extern "C" char *addNumbersAsBigIntFromChars(const char *a, const char *b) {
    auto bigint = BigInt{a} + BigInt{b};
    auto size = std::distance(bigint.begin(), bigint.end());

    char *sum = new char[size + 1];
    sum[size] = '\0';

    std::transform(bigint.begin(), bigint.end(), sum, [](const auto &n) {
        return static_cast<char>(n) + '0';
    });

    return sum;
}

extern "C" char *multiplyNumbersAsBigIntFromChars(const char *a, const char *b) {
    auto bigint = BigInt{a} * BigInt{b};
    auto size = std::distance(bigint.begin(), bigint.end());

    char *product = new char[size + 1];
    product[size] = '\0';

    std::transform(bigint.begin(), bigint.end(), product, [](const auto &n) {
        return static_cast<char>(n) + '0';
    });

    return product;
}

extern "C" char *mulitplyNumbersAsBigIntProductAssignment(const char *a, const char *b) {
    BigInt bigint_a{a};
    bigint_a *= BigInt{b};

    auto size = std::distance(bigint_a.begin(), bigint_a.end());
    char *product = new char[size + 1];
    product[size] = '\0';

    std::transform(bigint_a.begin(), bigint_a.end(), product, [](const auto &n) {
        return static_cast<char>(n) + '0';
    });

    return product;
}

extern "C" short compareBigInt(const char *a, const char *b) {
    BigInt number_a{a}, number_b{b};

    if (number_a < number_b) {
        return -1;
    } else if (number_b < number_a) {
        return 1;
    }

    return 0;
}

extern "C" short bigIntEqual(const char *a, const char *b) {
    return BigInt{a} == BigInt{b} ? 1 : 0;
}

extern "C" short bigIntIsZero(const char *a) {
    return BigInt{a}.isZero() ? 1 : 0;
}

extern "C" short bigIntIsNil(const char *a) {
    return BigInt{a}.isNil() ? 1 : 0;
}

extern "C" unsigned long long bigIntToSize_t(const char *a) {
    return static_cast<size_t>(BigInt{a});
}

extern "C" char *bigIntToChar(const char *a) {
    auto bigint_str = static_cast<std::string>(BigInt{a});

    char *string = new char[bigint_str.size() + 1];
    string[bigint_str.size()] = '\0';

    std::copy(bigint_str.begin(), bigint_str.end(), string);
    return string;
}
