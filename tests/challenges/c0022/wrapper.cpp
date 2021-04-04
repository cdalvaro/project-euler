//
//  wrapper.cpp
//  Tests
//
//  Created by Carlos David on 04/04/2021.
//  Copyright © 2021 cdalvaro. All rights reserved.
//

#include "challenges/c0022/challenge.hpp"

using namespace challenges;

extern "C" unsigned long long solveChallenge22(const char *file_path) {
    return std::any_cast<Challenge22::Type_t>(Challenge22(file_path).solve());
}
