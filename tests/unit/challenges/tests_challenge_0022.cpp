//
//  tests_challenge_0022.cpp
//  project-euler
//
//  Created by Carlos Álvaro on 05/02/2022.
//  Copyright © 2022 cdalvaro.io. All rights reserved.
//

#include <gtest/gtest.h>

#include "challenges/c0022/challenge.hpp"

using namespace challenges;

namespace tests {

    TEST(Challenges, Challenge0022) {
        Challenge22 challenge("lib/challenges/c0022/names.txt");

        const auto expected = 871'198'282;
        const auto result = IChallenge::castSolution<Challenge22::Type_t>(challenge.solve());

        EXPECT_EQ(expected, result) << "Challenge 22 failed";
    }

} // namespace tests
