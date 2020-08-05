//
//  wrapper.cpp
//  Tests
//
//  Created by Carlos David on 27/07/2020.
//  Copyright © 2020 cdalvaro. All rights reserved.
//

#include "challenges/c0014/challenge.hpp"

using namespace challenges;

extern "C" unsigned long long solveChallenge14(unsigned long long maximum_number) {
    return std::any_cast<Challenge14::Type_t>(Challenge14(maximum_number).solve());
}
