//
//  wrapper.cpp
//  Tests
//
//  Created by Carlos David on 11/06/2020.
//  Copyright © 2020 cdalvaro. All rights reserved.
//

#include "challenges/c0005/challenge.hpp"

using namespace challenges;

extern "C" unsigned long long solveChallenge5(unsigned long long last_number) {
    return std::any_cast<Challenge5::Type_t>(Challenge5(last_number).solve());
}
