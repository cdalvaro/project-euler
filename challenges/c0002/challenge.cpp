//
//  challenge.cpp
//  Challenges
//
//  Created by Carlos David on 24/05/2020.
//  Copyright © 2020 cdalvaro. All rights reserved.
//

#include "challenges/c0002/challenge.hpp"

using namespace challenges;

Challenge2::Challenge2(const Type_t &limit) : limit(limit) {
}

IChallenge::Solution_t Challenge2::solve() {

    Type_t f0 = 0, f1 = 1;
    Type_t sum = 0, tmp;

    while (f1 < limit) {
        tmp = f1;
        f1 += f0;
        f0 = tmp;

        if (f1 % 2 == 0) {
            sum += f1;
        }
    }

    return sum;
}
