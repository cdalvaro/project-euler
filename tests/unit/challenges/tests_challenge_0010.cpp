//
//  tests_challenge_0010.cpp
//  project-euler
//
//  Created by Carlos Álvaro on 05/02/2022.
//  Copyright © 2022 cdalvaro.io. All rights reserved.
//

#include <gtest/gtest.h>

#include "challenges/c0010/challenge.hpp"

using namespace challenges;

namespace tests {

    TEST(Challenges, Challenge0010) {
        Challenge10 challenge(2'000'000);

        const auto expected = 142'913'828'922;
        const auto result = IChallenge::castSolution<Challenge10::Type_t>(challenge.solve());

        EXPECT_EQ(expected, result) << "Challenge 10 failed";
    }

} // namespace tests
