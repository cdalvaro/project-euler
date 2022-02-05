//
//  tests_challenge_0008.cpp
//  project-euler
//
//  Created by Carlos Álvaro on 05/02/2022.
//  Copyright © 2022 cdalvaro.io. All rights reserved.
//

#include <gtest/gtest.h>

#include "challenges/c0008/challenge.hpp"

using namespace challenges;

namespace tests {

    TEST(Challenges, Challenge0008) {
        Challenge8 challenge(13);

        const auto expected = 23'514'624'000;
        const auto result = IChallenge::castSolution<Challenge8::Type_t>(challenge.solve());

        EXPECT_EQ(expected, result) << "Challenge 8 failed";
    }

} // namespace tests
