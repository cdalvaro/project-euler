//
//  tests_challenge_0012.cpp
//  project-euler
//
//  Created by Carlos Álvaro on 05/02/2022.
//  Copyright © 2022 cdalvaro.io. All rights reserved.
//

#include <gtest/gtest.h>

#include "challenges/c0012/challenge.hpp"

using namespace challenges;

namespace tests {

    TEST(Challenges, Challenge0012) {
        Challenge12 challenge(500);

        const auto expected = 76'576'500;
        const auto result = IChallenge::castSolution<Challenge12::Type_t>(challenge.solve());

        EXPECT_EQ(expected, result) << "Challenge 12 failed";
    }

} // namespace tests
