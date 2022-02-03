//
//  challenge.cpp
//  Challenges
//
//  Created by Carlos Álvaro on 11/06/2020.
//  Copyright © 2020 cdalvaro. All rights reserved.
//

#include <numeric>
#include <vector>

#include "challenges/c0005/challenge.hpp"
#include "tools/math/factorial.hpp"

using namespace challenges;

Challenge5::Challenge5(const Type_t &last_number) : last_number(last_number) {
}

IChallenge::Solution_t Challenge5::solve() {
    std::vector<Type_t> divisors(last_number - 1, 0);
    std::iota(divisors.begin(), divisors.end(), 2);

    auto smallest_number = tools::math::factorial(last_number);

    bool new_number_found;
    do {
        new_number_found = false;
        for (const auto &divisor : divisors) {
            if (smallest_number % divisor == 0) {
                Type_t new_smallest_number = smallest_number / divisor;

                bool is_multiple = true;
                for (const auto &divisor : divisors) {
                    if (new_smallest_number % divisor != 0) {
                        is_multiple = false;
                        break;
                    }
                }

                if (is_multiple) {
                    smallest_number = new_smallest_number;
                    new_number_found = true;
                }
            }
        }
    } while (new_number_found);

    return smallest_number;
}
