//
//  challenge.cpp
//  project-euler
//
//  Created by Carlos Álvaro on 24/1/22.
//  Copyright © 2022 cdalvaro.io. All rights reserved.
//

#include <set>
#include <vector>

#include "challenges/c0023/challenge.hpp"
#include "tools/math/number_properties.hpp"

using namespace challenges;

Challenge23::Challenge23(const size_t &limit) : limit(limit) {
}

IChallenge::Solution_t Challenge23::solve() {
    // Store all abundant numbers smaller than the given limit
    std::set<Type_t> abundant_numbers;
    for (Type_t number = 1; number < limit; ++number) {
        if (tools::math::isAbundant(number)) {
            abundant_numbers.insert(number);
        }
    }

    // Iterate over all abundant numbers
    std::vector<bool> is_sum_of_two_abundant_numbers(limit, false);
    for (const auto &abundant_number : abundant_numbers) {
        for (const auto &abundant_number_2 : abundant_numbers) {
            const auto sum = abundant_number + abundant_number_2;
            if (sum >= limit) {
                break;
            }
            is_sum_of_two_abundant_numbers[sum] = true;
        }
    }

    // Compute solution
    Type_t solution = 0;
    for (Type_t number = 1; number < limit; ++number) {
        if (!is_sum_of_two_abundant_numbers[number]) {
            solution += number;
        }
    }

    return solution;
}
