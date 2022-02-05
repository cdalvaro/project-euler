//
//  tests_challenge_0019.cpp
//  project-euler
//
//  Created by Carlos Álvaro on 05/02/2022.
//  Copyright © 2022 cdalvaro.io. All rights reserved.
//

#include <gtest/gtest.h>

#include "challenges/c0019/challenge.hpp"

using namespace challenges;

namespace tests {

    TEST(Challenges, Challenge0019) {
        Challenge19 challenge(1'901, 2'000);

        const auto expected = 171;
        const auto result = IChallenge::castSolution<Challenge19::Type_t>(challenge.solve());

        EXPECT_EQ(expected, result) << "Challenge 19 failed";
    }

} // namespace tests
