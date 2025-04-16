//
//  tests_fibonacci.cpp
//  project-euler
//
//  Created by Carlos Álvaro on 12/02/2022.
//  Copyright © 2022 cdalvaro.io. All rights reserved.
//

#include <gtest/gtest.h>

#include "tools/math/sequences/fibonacci.hpp"

using namespace tools::math::sequences;

namespace tests {

    TEST(Tools_Math_Sequences, Fibonacci) {
        const std::size_t expected = 144;

        Fibonacci fibonacci;
        auto result = fibonacci(12);

        EXPECT_EQ(expected, result) << "Fibonacci(12) is wrong";
        EXPECT_EQ(233, fibonacci.next()) << "Fibonacci.next() is wrong";
        EXPECT_EQ(233, fibonacci(13)) << "Fibonacci(13) is wrong";
    }

} // namespace tests
