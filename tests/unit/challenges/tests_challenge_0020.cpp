//
//  tests_challenge_0020.cpp
//  project-euler
//
//  Created by Carlos Álvaro on 05/02/2022.
//  Copyright © 2022 cdalvaro.io. All rights reserved.
//

#include <gtest/gtest.h>

#include "challenges/c0020/challenge.hpp"

using namespace challenges;

namespace tests {

    TEST(Challenges, Challenge0020) {
        Challenge20 challenge(100);

        const auto expected = 648;
        const auto result = IChallenge::castSolution<Challenge20::Type_t>(challenge.solve());

        EXPECT_EQ(expected, result) << "Challenge 20 failed";
    }

} // namespace tests
