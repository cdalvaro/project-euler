//
//  challenge.cpp
//  project-euler
//
//  Created by Carlos Álvaro on 12/02/22.
//  Copyright © 2022 cdalvaro.io. All rights reserved.
//

#include "challenges/c0025/challenge.hpp"
#include "tools/math/sequences/fibonacci.hpp"
#include "tools/types/big_int.hpp"

using namespace challenges;
using namespace tools::math::sequences;
using namespace tools::types;

Challenge25::Challenge25(const size_t &number_of_digits) : number_of_digits(number_of_digits) {
}

IChallenge::Solution_t Challenge25::solve() {
    Fibonacci<BigInt> fibonacci;
    Type_t index = 0;
    while (true) {
        if (fibonacci.next().size() >= number_of_digits) {
            break;
        }
        ++index;
    }

    return index;
}
