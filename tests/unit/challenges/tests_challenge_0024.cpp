//
//  tests_challenge_0024.cpp
//  project-euler
//
//  Created by Carlos Álvaro on 06/02/2022.
//  Copyright © 2022 cdalvaro.io. All rights reserved.
//

#include <gtest/gtest.h>

#include "challenges/c0024/challenge.hpp"

using namespace challenges;

namespace tests {

    TEST(Challenges, Challenge0024) {
        Challenge24 challenge("0123456789", 1'000'000);

        const auto expected = "2783915460";
        const auto result = IChallenge::castSolution<Challenge24::Type_t>(challenge.solve());

        EXPECT_EQ(expected, result) << "Challenge 24 failed";

        EXPECT_THROW(challenge = Challenge24("", 1), std::logic_error) << "Sequence cannot be empty";
        EXPECT_THROW(challenge = Challenge24("01", 0), std::logic_error) << "nth_permutation > 0";
        EXPECT_THROW(challenge = Challenge24("01", 3), std::logic_error) << "nth_permutation > number of permutations";
    }

} // namespace tests
