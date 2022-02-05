//
//  tests_challenge_0001.cpp
//  project-euler
//
//  Created by Carlos Álvaro on 29/01/2022.
//  Copyright © 2022 cdalvaro.io. All rights reserved.
//

#include <gtest/gtest.h>

#include "challenges/c0001/challenge.hpp"

using namespace challenges;

namespace tests {

    TEST(Challenges, Challenge0001) {
        Challenge1 challenge(1'000);

        const auto expected = 233'168;
        const auto result = IChallenge::castSolution<Challenge1::Type_t>(challenge.solve());

        EXPECT_EQ(expected, result) << "Challenge 1 failed";
    }

} // namespace tests
