//
//  wrapper.cpp
//  Tests
//
//  Created by Carlos David on 23/07/2020.
//  Copyright © 2020 cdalvaro. All rights reserved.
//

#include "challenges/c0011/challenge.hpp"

using namespace challenges;

extern "C" unsigned long long solveChallenge11(unsigned long long numbers_to_take) {
    return std::any_cast<Challenge11::Type_t>(Challenge11(numbers_to_take).solve());
}
