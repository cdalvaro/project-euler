//
//  tests_challenge_0004.cpp
//  project-euler
//
//  Created by Carlos Álvaro on 05/02/2022.
//  Copyright © 2022 cdalvaro.io. All rights reserved.
//

#include <gtest/gtest.h>

#include "challenges/c0004/challenge.hpp"

using namespace challenges;

namespace tests {

    TEST(Challenges, Challenge0004) {
        Challenge4 challenge(3, 2);

        const auto expected = 906'609;
        const auto result = IChallenge::castSolution<Challenge4::Type_t>(challenge.solve());

        EXPECT_EQ(expected, result) << "Challenge 4 failed";
    }

} // namespace tests
