//
//  wrapper.cpp
//  Tests
//
//  Created by Carlos David on 14/06/2020.
//  Copyright © 2020 cdalvaro. All rights reserved.
//

#include "challenges/c0007/challenge.hpp"

using namespace challenges;

extern "C" unsigned long long solveChallenge7(unsigned long long nth_prime) {
    return std::any_cast<Challenge7::Type_t>(Challenge7(nth_prime).solve());
}
