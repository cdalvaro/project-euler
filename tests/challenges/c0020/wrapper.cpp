//
//  wrapper.cpp
//  Tests
//
//  Created by Carlos David on 29/02/2021.
//  Copyright © 2021 cdalvaro. All rights reserved.
//

#include "challenges/c0020/challenge.hpp"

using namespace challenges;

extern "C" unsigned long long solveChallenge20(unsigned int number) {
    return std::any_cast<Challenge20::Type_t>(Challenge20(number).solve());
}
