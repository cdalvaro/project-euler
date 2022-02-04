//
//  tests_challenge_0023.cpp
//  project-euler
//
//  Created by Carlos Álvaro on 29/01/2022.
//  Copyright © 2022 cdalvaro.io. All rights reserved.
//

#include <gtest/gtest.h>

#include "challenges/c0023/challenge.hpp"

using namespace challenges;

namespace tests {

    TEST(Challenges, Challenge0023) {
        Challenge23 challenge(28'123);

        const auto expected = 4'179'871;
        const auto result = IChallenge::castSolution<Challenge23::Type_t>(challenge.solve());

        EXPECT_EQ(expected, result) << "Challenge 23 failed";
    }

} // namespace tests
