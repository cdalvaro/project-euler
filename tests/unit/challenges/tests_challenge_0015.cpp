//
//  tests_challenge_0015.cpp
//  project-euler
//
//  Created by Carlos Álvaro on 05/02/2022.
//  Copyright © 2022 cdalvaro.io. All rights reserved.
//

#include <gtest/gtest.h>

#include "challenges/c0015/challenge.hpp"

using namespace challenges;

namespace tests {

    TEST(Challenges, Challenge0015) {
        Challenge15 challenge(20, 20);

        const auto expected = 137'846'528'820;
        const auto result = IChallenge::castSolution<Challenge15::Type_t>(challenge.solve());

        EXPECT_EQ(expected, result) << "Challenge 15 failed";
    }

} // namespace tests
