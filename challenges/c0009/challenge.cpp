//
//  challenge.cpp
//  Challenges
//
//  Created by Carlos David on 15/07/2020.
//  Copyright © 2020 cdalvaro. All rights reserved.
//

#include "challenges/c0009/challenge.hpp"

using namespace challenges;

Challenge9::Challenge9(const Type_t &number) : number(number) {
}

std::any Challenge9::solve() {
    Type_t a = 0, b = 0, c = 0;
    Type_t triplet = 0;

    do {
        ++a;
        b = a;
        do {
            ++b;
            c = number - (a + b);
            triplet = a * a + b * b - c * c;
        } while (b < c && triplet != 0);
    } while (triplet != 0);

    return a * b * c;
}
