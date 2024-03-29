//
//  challenge.cpp
//  Challenges
//
//  Created by Carlos Álvaro on 25/07/2020.
//  Copyright © 2020 cdalvaro. All rights reserved.
//

#include "challenges/c0012/challenge.hpp"
#include "tools/math/factorization.hpp"

using namespace challenges;

Challenge12::Challenge12(const Type_t &numbers_of_divisors) : numbers_of_divisors(numbers_of_divisors) {
}

IChallenge::Solution_t Challenge12::solve() {
    Type_t triangle_number = 1;
    auto divisors = tools::math::divisors(triangle_number);

    Type_t increment = 1;
    while (divisors.size() < numbers_of_divisors) {
        triangle_number += ++increment;
        divisors = tools::math::divisors(triangle_number);
    }

    return triangle_number;
}
