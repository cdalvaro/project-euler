//
//  tests_challenge_0003.cpp
//  project-euler
//
//  Created by Carlos Álvaro on 05/02/2022.
//  Copyright © 2022 cdalvaro.io. All rights reserved.
//

#include <gtest/gtest.h>

#include "challenges/c0003/challenge.hpp"

using namespace challenges;

namespace tests {

    TEST(Challenges, Challenge0003) {
        Challenge3 challenge(600'851'475'143);

        const auto expected = 6'857;
        const auto result = IChallenge::castSolution<Challenge3::Type_t>(challenge.solve());

        EXPECT_EQ(expected, result) << "Challenge 3 failed";
    }

} // namespace tests
