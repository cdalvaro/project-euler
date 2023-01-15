//
//  tests_challenge_0027.cpp
//  project-euler
//
//  Created by Carlos Álvaro on 15/01/2023.
//  Copyright © 2023 cdalvaro.io. All rights reserved.
//

#include <gtest/gtest.h>

#include "challenges/c0027/challenge.hpp"

using namespace challenges;

namespace tests {

    TEST(Challenges, Challenge0027) {
        Challenge27 challenge(999, 1000);

        const Challenge27::Type_t expected = -59'231;
        const auto result = IChallenge::castSolution<Challenge27::Type_t>(challenge.solve());

        EXPECT_EQ(expected, result) << "Challenge 27 failed";
    }
} // namespace tests
