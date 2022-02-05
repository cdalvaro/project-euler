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

    TEST(ToolsMathFactorial, FactorialOfZero) {
        EXPECT_EQ(1, factorial(0)) << "Factorial of zero is 1";
    }

    TEST(ToolsMathFactorial, FactorialOfOne) {
        EXPECT_EQ(1, factorial(1)) << "Factorial of one is 1";
    }

    TEST(ToolsMathFactorial, FactorialOfTen) {
        EXPECT_EQ(3628800, factorial(10)) << "Factorial of ten is 3628800";
    }

    TEST(ToolsMathFactorial, FactorialOfTwenty) {
        const size_t expected = 2432902008176640000;
        EXPECT_EQ(expected, factorial<size_t>(20)) << "Factorial of twenty is 2432902008176640000";
    }

    TEST(ToolsMathFactorial, FactorialOfThirty) {
        const tools::types::BigInt expected("265252859812191058636308480000000");
        const auto result = factorial<size_t, tools::types::BigInt>(30);
        EXPECT_EQ(expected, result) << "Factorial of thirty is 265252859812191058636308480000000";
    }

} // namespace tests
