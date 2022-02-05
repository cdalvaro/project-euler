//
//  challenge.cpp
//  project-euler
//
//  Created by Carlos Álvaro on 24/05/2020.
//  Copyright © 2020 cdalvaro.io. All rights reserved.
//

#include "challenges/c0001/challenge.hpp"

using namespace challenges;

Challenge1::Challenge1(const Type_t &limit) : limit(limit) {
}

IChallenge::Solution_t Challenge1::solve() {
    Type_t sum = 0;

    for (Type_t n = 0; n < limit; ++n) {
        if (n % 3 == 0 || n % 5 == 0) {
            sum += n;
        }
    }

    return sum;
}
