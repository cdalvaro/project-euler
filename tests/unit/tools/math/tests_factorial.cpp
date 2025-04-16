//
//  tests_factorial.cpp
//  project-euler
//
//  Created by Carlos Álvaro on 03/02/2022.
//  Copyright © 2022 cdalvaro.io. All rights reserved.
//

#include <gtest/gtest.h>

#include "tools/math/factorial.hpp"
#include "tools/types/big_int.hpp"

using namespace tools::math;

namespace tests {

    TEST(Tools_Math_Factorial, Zero) {
        EXPECT_EQ(1, factorial(0)) << "Factorial of zero is 1";
    }

    TEST(Tools_Math_Factorial, One) {
        EXPECT_EQ(1, factorial(1)) << "Factorial of one is 1";
    }

    TEST(Tools_Math_Factorial, Ten) {
        EXPECT_EQ(3628800, factorial(10)) << "Factorial of ten is 3,628,800";
    }

    TEST(Tools_Math_Factorial, Twenty) {
        const std::size_t expected = 2'432'902'008'176'640'000;
        EXPECT_EQ(expected, factorial<std::size_t>(20)) << "Factorial of twenty is 2,432,902,008,176,640,000";
    }

    TEST(Tools_Math_Factorial, BigInt) {
        const tools::types::BigInt expected("265252859812191058636308480000000");
        const auto result = factorial<std::size_t, tools::types::BigInt>(30);
        EXPECT_EQ(expected, result) << "Factorial of thirty is 265,252,859,812,191,058,636,308,480,000,000";
    }

} // namespace tests
