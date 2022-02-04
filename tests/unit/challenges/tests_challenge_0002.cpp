//
//  tests_challenge_0002.cpp
//  project-euler
//
//  Created by Carlos Álvaro on 03/02/2022.
//  Copyright © 2022 cdalvaro.io. All rights reserved.
//

#include <gtest/gtest.h>

#include "challenges/c0002/challenge.hpp"

using namespace challenges;

namespace tests {

    TEST(Challenges, Challenge0002) {
        Challenge2 challenge(4'000'000);

        const auto expected = 4'613'732;
        const auto result = IChallenge::castSolution<Challenge2::Type_t>(challenge.solve());

        EXPECT_EQ(expected, result) << "Challenge 2 failed";
    }

} // namespace tests
