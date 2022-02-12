//
//  tests_number_properties.cpp
//  project-euler
//
//  Created by Carlos Álvaro on 03/02/2022.
//  Copyright © 2022 cdalvaro.io. All rights reserved.
//

#include <gtest/gtest.h>

#include "tools/math/number_properties.hpp"

using namespace tools::math;

namespace tests {

    TEST(Tools_Math_NumberProperties, IsAbundant) {
        EXPECT_FALSE(isAbundant(6)) << "6 is not abundant";
        EXPECT_FALSE(isAbundant(10)) << "10 is not abundant";
        EXPECT_TRUE(isAbundant(12)) << "12 is abundant";
        EXPECT_TRUE(isAbundant(40)) << "40 is abundant";
        EXPECT_TRUE(isAbundant(66)) << "66 is abundant";
    }

    TEST(Tools_Math_NumberProperties, IsDeficient) {
        EXPECT_FALSE(isDeficient(6)) << "6 is not deficient";
        EXPECT_FALSE(isDeficient(12)) << "12 is not deficient";
        EXPECT_TRUE(isDeficient(10)) << "10 is deficient";
        EXPECT_TRUE(isDeficient(14)) << "14 is deficient";
        EXPECT_TRUE(isDeficient(19)) << "19 is deficient";
    }

    TEST(Tools_Math_NumberProperties, IsPerfect) {
        EXPECT_FALSE(isPerfect(10)) << "10 is not perfect";
        EXPECT_FALSE(isPerfect(12)) << "12 is not perfect";
        EXPECT_TRUE(isPerfect(6)) << "6 is perfect";
        EXPECT_TRUE(isPerfect(28)) << "28 is perfect";
        EXPECT_TRUE(isPerfect(496)) << "496 is perfect";
        EXPECT_TRUE(isPerfect(8128)) << "8128 is perfect";
    }

} // namespace tests
