//
//  tests_challenge_0011.cpp
//  project-euler
//
//  Created by Carlos Álvaro on 05/02/2022.
//  Copyright © 2022 cdalvaro.io. All rights reserved.
//

#include <gtest/gtest.h>

#include "challenges/c0011/challenge.hpp"

using namespace challenges;

namespace tests {

    TEST(Challenges, Challenge0011) {
        Challenge11 challenge(4);

        const auto expected = 70'600'674;
        const auto result = IChallenge::castSolution<Challenge11::Type_t>(challenge.solve());

        EXPECT_EQ(expected, result) << "Challenge 11 failed";
    }

} // namespace tests
