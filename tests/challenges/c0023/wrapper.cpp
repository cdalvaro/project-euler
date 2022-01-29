//
//  wrapper.cpp
//  Tests
//
//  Created by Carlos Álvaro on 28/01/2022.
//  Copyright © 2022 cdalvaro. All rights reserved.
//

#include "challenges/c0023/challenge.hpp"

using namespace challenges;

extern "C" unsigned long long solveChallenge23(unsigned long long number) {
    return IChallenge::castSolution<Challenge23::Type_t>(Challenge23(number).solve());
}
