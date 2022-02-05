//
//  tests_challenge_0006.cpp
//  project-euler
//
//  Created by Carlos Álvaro on 05/02/2022.
//  Copyright © 2022 cdalvaro.io. All rights reserved.
//

#include <gtest/gtest.h>

#include "challenges/c0006/challenge.hpp"

using namespace challenges;

namespace tests {

    TEST(Challenges, Challenge0006) {
        Challenge6 challenge(100);

        const auto expected = 25'164'150;
        const auto result = IChallenge::castSolution<Challenge6::Type_t>(challenge.solve());

        EXPECT_EQ(expected, result) << "Challenge 6 failed";
    }

} // namespace tests
