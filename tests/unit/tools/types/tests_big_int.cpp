//
//  tests_big_int.cpp
//  project-euler
//
//  Created by Carlos Álvaro on 04/02/2022.
//  Copyright © 2022 cdalvaro.io. All rights reserved.
//

#include <limits>

#include <gtest/gtest.h>

#include "tools/types/big_int.hpp"

using namespace tools::types;

namespace tests {

    TEST(Tools_Types_BigInt, EqualityAndComparisons) {
        const BigInt numberA("97107287533902102798797998220837590246510135740250");
        const BigInt numberB("96376937677490009712648124896970078050417018260538");
        const BigInt numberC("963769376774900097126481248"); // Sorter number

        EXPECT_GT(numberA, numberB) << "A is greater than B";
        EXPECT_LT(numberB, numberA) << "B is smaller than A";
        EXPECT_NE(numberA, numberB) << "A is not equal to B";
        EXPECT_EQ(numberA, numberA) << "Number A is equal to its self";

        EXPECT_GT(numberA, numberC) << "A is greater than C";
        EXPECT_LT(numberC, numberA) << "C is smaller than A";
        EXPECT_NE(numberA, numberC) << "A is not equal to C";
    }

    TEST(Tools_Types_BigInt, IsZero) {
        const BigInt numberA("97107287533902102798797998220837590246510135740250");
        const BigInt zero("0");

        EXPECT_FALSE(numberA.isZero()) << "A is not 0";
        EXPECT_TRUE(zero.isZero()) << "Zero is 0";
    }

    TEST(Tools_Types_BigInt, IsNil) {
        const BigInt numberA("97107287533902102798797998220837590246510135740250");
        const BigInt nil("");

        EXPECT_FALSE(numberA.isNil()) << "A is not nil";
        EXPECT_TRUE(nil.isNil()) << "Nil is nil";
    }

    TEST(Tools_Types_BigInt, Size) {
        const BigInt number("1234567890");
        const std::size_t expected = 10;

        EXPECT_EQ(expected, number.size()) << "Number size is not 10";
    }

    TEST(Tools_Types_BigInt, CastToSize_t) {
        const std::size_t expected = std::numeric_limits<std::size_t>::max();
        const BigInt sizeTLimit(expected);
        const BigInt tooBigNumber = sizeTLimit + sizeTLimit;

        std::size_t result;
        EXPECT_THROW(result = std::size_t(tooBigNumber), std::out_of_range) << "BigInt do not cast to std::size_t";
        EXPECT_NO_THROW(result = std::size_t(sizeTLimit)) << "BigInt casts to std::size_t";
        EXPECT_EQ(expected, result) << "BigInt casts to std::size_t properly";
    }

    TEST(Tools_Types_BigInt, ToString) {
        const std::string expected = "97107287533902102798797998220837590246510135740250";
        const BigInt numberA(expected);

        EXPECT_EQ(expected, std::string(numberA)) << "BigInt casts to std::string";
    }

    TEST(Tools_Types_BigInt, AdditionWithSmallNumbers) {
        const auto numberA = 99;
        const auto numberB = 999;

        const BigInt expected(numberA + numberB);
        const auto obtained = BigInt(numberA) + BigInt(numberB);

        EXPECT_EQ(expected, obtained) << "BigInt addition with small numbers";
    }

    TEST(Tools_Types_BigInt, AdditionWithBigNumbers) {
        const BigInt numberA("97107287533902102798797998220837590246510135740250");
        const BigInt numberB("96376937677490009712648124896970078050417018260538");

        const BigInt expected("193484225211392112511446123117807668296927154000788");
        const auto obtained = numberA + numberB;

        EXPECT_EQ(expected, obtained) << "BigInt addition with big numbers";
    }

    TEST(Tools_Types_BigInt, ProductWithBigNumbers) {
        const BigInt numberA("97107287533902102798797998220837590246510135740250");
        const BigInt numberB("96376937677490009712648124896970078050417018260538");

        const BigInt expected(
            "9358902998684985500119528155398608764003964393411148270300529606925919096718140277943885319993254500");
        const auto obtained = numberA * numberB;

        EXPECT_EQ(expected, obtained) << "BigInt product with big numbers";
    }

    TEST(Tools_Types_BigInt, ProductWithBignumbersInPlace) {
        BigInt numberA("97107287533902102798797998220837590246510135740250");
        const BigInt numberB("96376937677490009712648124896970078050417018260538");

        const BigInt expected(
            "9358902998684985500119528155398608764003964393411148270300529606925919096718140277943885319993254500");
        numberA *= numberB;

        EXPECT_EQ(expected, numberA) << "BigInt in-place product with big numbers";
    }

} // namespace tests
