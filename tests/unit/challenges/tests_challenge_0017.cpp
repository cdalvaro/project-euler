//
//  tests_challenge_0017.cpp
//  project-euler
//
//  Created by Carlos Álvaro on 05/02/2022.
//  Copyright © 2022 cdalvaro.io. All rights reserved.
//

#include <gtest/gtest.h>

#include "challenges/c0017/challenge.hpp"

using namespace challenges;

namespace tests {

    TEST(Challenges, Challenge0017) {
        Challenge17 challenge(1, 1'000);

        const auto expected = 21'124;
        const auto result = IChallenge::castSolution<Challenge17::Type_t>(challenge.solve());

        EXPECT_EQ(expected, result) << "Challenge 17 failed";
    }

} // namespace tests
