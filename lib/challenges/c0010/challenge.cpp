//
//  challenge.cpp
//  Challenges
//
//  Created by Carlos Álvaro on 22/07/2020.
//  Copyright © 2020 cdalvaro. All rights reserved.
//

#include "challenges/c0010/challenge.hpp"
#include "tools/math/factorization.hpp"

using namespace challenges;

Challenge10::Challenge10(const Type_t &limit) : limit(limit) {
}

IChallenge::Solution_t Challenge10::solve() {
    Type_t number = 3;
    Type_t sum = 2 + number; // 2 is the only even prime number

    while (number < limit) {
        number += 2;
        if (tools::math::isPrime(number)) {
            sum += number;
        }
    }

    return sum;
}
