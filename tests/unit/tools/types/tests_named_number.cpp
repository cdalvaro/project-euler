//
//  tests_named_number.cpp
//  project-euler
//
//  Created by Carlos Álvaro on 04/02/2022.
//  Copyright © 2022 cdalvaro.io. All rights reserved.
//

#include <gtest/gtest.h>

#include "tools/types/named_number.hpp"

using namespace tools::types;

namespace tests {

    TEST(Tools_Types_NamedNumber, MinusOne) {
        const NamedNumber number(-1);
        EXPECT_EQ("minus one", number.getName()) << "Right name for -1";
    }

    TEST(Tools_Types_NamedNumber, Thirteen) {
        const NamedNumber number(13);
        EXPECT_EQ("thirteen", number.getName()) << "Right name for 13";
    }

    TEST(Tools_Types_NamedNumber, ThreeHundredAndSixtyFive) {
        const NamedNumber number(365);
        EXPECT_EQ("three hundred and sixty-five", number.getName()) << "Right name for 365";
    }

    TEST(Tools_Types_NamedNumber, TwoThousand) {
        const NamedNumber number(2'000);
        EXPECT_EQ("two thousand", number.getName()) << "Right name for 2,000";
    }

    TEST(Tools_Types_NamedNumber, TwoThousandFourHundredAndEightySix) {
        const NamedNumber number(2'486);
        EXPECT_EQ("two thousand four hundred and eighty-six", number.getName()) << "Right name for 2,486";
    }

    TEST(Tools_Types_NamedNumber, TwelveThousandThreeHundredAndFortyFive) {
        const NamedNumber number(12'345);
        EXPECT_EQ("twelve thousand three hundred and forty-five", number.getName()) << "Right name for 12,345";
    }

    TEST(Tools_Types_NamedNumber, LongNumber) {
        const NamedNumber number(9'876'543'210);
        EXPECT_EQ("nine billion eight hundred and seventy-six million five hundred and forty-three thousand two "
                  "hundred and ten",
                  number.getName())
            << "Right name for 9,876,543,210";
    }

} // namespace tests
