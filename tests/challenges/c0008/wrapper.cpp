//
//  wrapper.cpp
//  Tests
//
//  Created by Carlos David on 15/07/2020.
//  Copyright © 2020 cdalvaro. All rights reserved.
//

#include "challenges/c0008/challenge.hpp"

using namespace challenges;

extern "C" unsigned long long solveChallenge8(unsigned long long number_of_digits) {
    return std::any_cast<Challenge8::Type_t>(Challenge8(number_of_digits).solve());
}
