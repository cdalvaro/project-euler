//
//  wrapper.cpp
//  Tests
//
//  Created by Carlos David on 28/05/2020.
//  Copyright © 2020 cdalvaro. All rights reserved.
//

#include "challenges/c0003/challenge.hpp"

using namespace challenges;

extern "C" unsigned long long solveChallenge3(unsigned long long number) {
    return std::any_cast<Challenge3::Type_t>(Challenge3(number).solve());
}
