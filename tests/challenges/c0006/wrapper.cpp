//
//  wrapper.cpp
//  Tests
//
//  Created by Carlos David on 11/06/2020.
//  Copyright © 2020 cdalvaro. All rights reserved.
//

#include "challenges/c0006/challenge.hpp"

using namespace challenges;

extern "C" unsigned long long solveChallenge6(unsigned long long last_number) {
    return std::any_cast<Challenge6::Type_t>(Challenge6(last_number).solve());
}
