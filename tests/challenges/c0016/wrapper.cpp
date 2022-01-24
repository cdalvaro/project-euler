//
//  wrapper.cpp
//  Tests
//
//  Created by Carlos David on 28/02/2021.
//  Copyright © 2021 cdalvaro. All rights reserved.
//

#include "challenges/c0016/challenge.hpp"

using namespace challenges;

extern "C" unsigned long long solveChallenge16(unsigned int exponent) {
    return IChallenge::castSolution<Challenge16::Type_t>(Challenge16(exponent).solve());
}
