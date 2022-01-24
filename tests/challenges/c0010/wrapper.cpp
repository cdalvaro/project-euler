//
//  wrapper.cpp
//  Tests
//
//  Created by Carlos David on 22/07/2020.
//  Copyright © 2020 cdalvaro. All rights reserved.
//

#include "challenges/c0010/challenge.hpp"

using namespace challenges;

extern "C" unsigned long long solveChallenge10(unsigned long long limit) {
    return IChallenge::castSolution<Challenge10::Type_t>(Challenge10(limit).solve());
}
