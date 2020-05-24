//
//  wrapper.cpp
//  Tests
//
//  Created by Carlos David on 24/05/2020.
//  Copyright © 2020 cdalvaro. All rights reserved.
//

#include "challenges/c0001/challenge.cpp"

extern "C" long solveChallenge1(long limit) {
    return std::any_cast<challenges::Challenge1::Type_t>(challenges::Challenge1(limit).solve());
}
