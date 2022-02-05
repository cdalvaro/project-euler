//
//  tests_challenge_0009.cpp
//  project-euler
//
//  Created by Carlos Álvaro on 05/02/2022.
//  Copyright © 2022 cdalvaro.io. All rights reserved.
//

#include <gtest/gtest.h>

#include "challenges/c0009/challenge.hpp"

using namespace challenges;

namespace tests {

    TEST(Challenges, Challenge0009) {
        Challenge9 challenge(1'000);

        const auto expected = 31'875'000;
        const auto result = IChallenge::castSolution<Challenge9::Type_t>(challenge.solve());

        EXPECT_EQ(expected, result) << "Challenge 9 failed";
    }

} // namespace tests
