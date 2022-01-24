//
//  wrapper.cpp
//  Tests
//
//  Created by Carlos David on 25/07/2020.
//  Copyright © 2020 cdalvaro. All rights reserved.
//

#include "challenges/c0012/challenge.hpp"

using namespace challenges;

extern "C" unsigned long long solveChallenge12(unsigned long long numbers_of_divisors) {
    return IChallenge::castSolution<Challenge12::Type_t>(Challenge12(numbers_of_divisors).solve());
}
