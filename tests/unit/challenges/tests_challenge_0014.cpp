//
//  tests_challenge_0014.cpp
//  project-euler
//
//  Created by Carlos Álvaro on 05/02/2022.
//  Copyright © 2022 cdalvaro.io. All rights reserved.
//

#include <gtest/gtest.h>

#include "challenges/c0014/challenge.hpp"

using namespace challenges;

namespace tests {

    TEST(Challenges, Challenge0014) {
        Challenge14 challenge(1'000'000);

        const auto expected = 837'799;
        const auto result = IChallenge::castSolution<Challenge14::Type_t>(challenge.solve());

        EXPECT_EQ(expected, result) << "Challenge 14 failed";
    }

} // namespace tests
