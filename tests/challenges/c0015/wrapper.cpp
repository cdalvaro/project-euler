//
//  wrapper.cpp
//  Tests
//
//  Created by Carlos David on 13/02/2021.
//  Copyright © 2021 cdalvaro. All rights reserved.
//

#include "challenges/c0015/challenge.hpp"

using namespace challenges;

extern "C" unsigned long long solveChallenge15(unsigned int width, unsigned int height) {
    return IChallenge::castSolution<Challenge15::Type_t>(Challenge15(width, height).solve());
}
