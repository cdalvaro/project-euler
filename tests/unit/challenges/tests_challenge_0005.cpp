//
//  tests_challenge_0005.cpp
//  project-euler
//
//  Created by Carlos Álvaro on 05/02/2022.
//  Copyright © 2022 cdalvaro.io. All rights reserved.
//

#include <gtest/gtest.h>

#include "challenges/c0005/challenge.hpp"

using namespace challenges;

namespace tests {

    TEST(Challenges, Challenge0005) {
        Challenge5 challenge(20);

        const auto expected = 232'792'560;
        const auto result = IChallenge::castSolution<Challenge5::Type_t>(challenge.solve());

        EXPECT_EQ(expected, result) << "Challenge 5 failed";
    }

} // namespace tests
