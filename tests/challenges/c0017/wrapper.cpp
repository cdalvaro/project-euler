//
//  wrapper.cpp
//  Tests
//
//  Created by Carlos David on 28/02/2021.
//  Copyright © 2021 cdalvaro. All rights reserved.
//

#include "challenges/c0017/challenge.hpp"

using namespace challenges;

extern "C" unsigned long long solveChallenge17(unsigned int first, unsigned int last) {
    return std::any_cast<Challenge17::Type_t>(Challenge17(first, last).solve());
}
