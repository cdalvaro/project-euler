//
//  tests_challenge_0021.cpp
//  project-euler
//
//  Created by Carlos Álvaro on 05/02/2022.
//  Copyright © 2022 cdalvaro.io. All rights reserved.
//

#include <gtest/gtest.h>

#include "challenges/c0021/challenge.hpp"

using namespace challenges;

namespace tests {

    TEST(Challenges, Challenge0021) {
        Challenge21 challenge(10'000);

        const auto expected = 31'626;
        const auto result = IChallenge::castSolution<Challenge21::Type_t>(challenge.solve());

        EXPECT_EQ(expected, result) << "Challenge 21 failed";
    }

} // namespace tests
