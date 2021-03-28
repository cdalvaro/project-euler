//
//  wrapper.cpp
//  Tests
//
//  Created by Carlos David on 27/03/2021.
//  Copyright © 2021 cdalvaro. All rights reserved.
//

#include "challenges/c0019/challenge.hpp"

using namespace challenges;

extern "C" unsigned long long solveChallenge19(int first_year, int last_year) {
    return std::any_cast<Challenge19::Type_t>(Challenge19(first_year, last_year).solve());
}
