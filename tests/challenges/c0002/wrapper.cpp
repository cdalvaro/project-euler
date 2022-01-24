//
//  wrapper.cpp
//  Tests
//
//  Created by Carlos David on 24/05/2020.
//  Copyright © 2020 cdalvaro. All rights reserved.
//

#include "challenges/c0002/challenge.hpp"

using namespace challenges;

extern "C" long solveChallenge2(long limit) {
    return IChallenge::castSolution<Challenge2::Type_t>(Challenge2(limit).solve());
}
