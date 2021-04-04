//
//  wrapper.cpp
//  Tests
//
//  Created by Carlos David on 31/05/2020.
//  Copyright © 2020 cdalvaro. All rights reserved.
//

#include "challenges/c0004/challenge.hpp"

using namespace challenges;

extern "C" unsigned long long solveChallenge4(unsigned long long number_of_digits,
                                              unsigned long long number_of_products) {
    return std::any_cast<Challenge4::Type_t>(Challenge4(number_of_digits, number_of_products).solve());
}
