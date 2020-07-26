//
//  wrapper.cpp
//  Tests
//
//  Created by Carlos David on 25/07/2020.
//  Copyright © 2020 cdalvaro. All rights reserved.
//

#include "challenges/c0013/challenge.hpp"

using namespace challenges;

extern "C" unsigned long long solveChallenge13() {
    return std::any_cast<Challenge13::Type_t>(Challenge13().solve());
}
