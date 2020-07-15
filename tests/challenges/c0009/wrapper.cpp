//
//  wrapper.cpp
//  Tests
//
//  Created by Carlos David on 15/07/2020.
//  Copyright © 2020 cdalvaro. All rights reserved.
//

#include "challenges/c0009/challenge.hpp"

using namespace challenges;

extern "C" unsigned long long solveChallenge9(unsigned long long number) {
    return std::any_cast<Challenge9::Type_t>(Challenge9(number).solve());
}
