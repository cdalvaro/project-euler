//
//  challenge.cpp
//  project-euler
//
//  Created by Carlos Álvaro on 15/01/23.
//  Copyright © 2023 cdalvaro.io. All rights reserved.
//

#include "challenges/c0027/challenge.hpp"
#include "tools/math/factorization.hpp"

using namespace challenges;
using namespace tools::math;

Challenge27::Challenge27(const size_t &a_limit, const size_t &b_limit) : a_limit(a_limit), b_limit(b_limit) {
}

IChallenge::Solution_t Challenge27::solve() {
    Type_t coefficient = 0;
    size_t max_n = 0;
    for (auto a = static_cast<long>(-a_limit); std::cmp_less_equal(a, a_limit); ++a) {
        for (auto b = static_cast<long>(-b_limit); std::cmp_less_equal(b, b_limit); ++b) {
            long n = 0;
            long value = 0;
            do {
                ++n;
                value = n * n + a * n + b;
            } while (isPrime(std::abs(value)));

            if (std::cmp_greater_equal(n, max_n)) {
                max_n = n;
                coefficient = a * b;
            }
        }
    }

    return coefficient;
}
