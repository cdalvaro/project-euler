//
//  tests_challenge_0025.cpp
//  project-euler
//
//  Created by Carlos Álvaro on 12/02/2022.
//  Copyright © 2022 cdalvaro.io. All rights reserved.
//

#include <gtest/gtest.h>

#include "challenges/c0025/challenge.hpp"

using namespace challenges;

namespace tests {

    TEST(Challenges, Challenge0025) {
        Challenge25 challenge(1'000);

        const Challenge25::Type_t expected = 4'782;
        const auto result = IChallenge::castSolution<Challenge25::Type_t>(challenge.solve());

        EXPECT_EQ(expected, result) << "Challenge 25 failed";
    }
} // namespace tests
