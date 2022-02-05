//
//  tests_challenge_0013.cpp
//  project-euler
//
//  Created by Carlos Álvaro on 05/02/2022.
//  Copyright © 2022 cdalvaro.io. All rights reserved.
//

#include <gtest/gtest.h>

#include "challenges/c0013/challenge.hpp"

using namespace challenges;

namespace tests {

    TEST(Challenges, Challenge0013) {
        Challenge13 challenge;

        const auto expected = 5'537'376'230;
        const auto result = IChallenge::castSolution<Challenge13::Type_t>(challenge.solve());

        EXPECT_EQ(expected, result) << "Challenge 13 failed";
    }

} // namespace tests
