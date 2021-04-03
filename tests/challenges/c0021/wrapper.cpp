//
//  wrapper.cpp
//  Tests
//
//  Created by Carlos David on 03/04/2021.
//  Copyright © 2021 cdalvaro. All rights reserved.
//

#include "challenges/c0021/challenge.hpp"

using namespace challenges;

extern "C" unsigned long long solveChallenge21(unsigned long long number) {
    return std::any_cast<Challenge21::Type_t>(Challenge21(number).solve());
}
