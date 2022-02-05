//
//  tests_challenge_0016.cpp
//  project-euler
//
//  Created by Carlos Álvaro on 05/02/2022.
//  Copyright © 2022 cdalvaro.io. All rights reserved.
//

#include <gtest/gtest.h>

#include "challenges/c0016/challenge.hpp"

using namespace challenges;

namespace tests {

    TEST(Challenges, Challenge0016) {
        Challenge16 challenge(1'000);

        const auto expected = 1'366;
        const auto result = IChallenge::castSolution<Challenge16::Type_t>(challenge.solve());

        EXPECT_EQ(expected, result) << "Challenge 16 failed";
    }

} // namespace tests
