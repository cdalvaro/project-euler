//
//  tests_challenge_0007.cpp
//  project-euler
//
//  Created by Carlos Álvaro on 05/02/2022.
//  Copyright © 2022 cdalvaro.io. All rights reserved.
//

#include <gtest/gtest.h>

#include "challenges/c0007/challenge.hpp"

using namespace challenges;

namespace tests {

    TEST(Challenges, Challenge0007) {
        Challenge7 challenge(10'001);

        const auto expected = 104'743;
        const auto result = IChallenge::castSolution<Challenge7::Type_t>(challenge.solve());

        EXPECT_EQ(expected, result) << "Challenge 7 failed";
    }

} // namespace tests
