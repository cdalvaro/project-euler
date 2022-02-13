//
//  tests_factorization.cpp
//  project-euler
//
//  Created by Carlos Álvaro on 11/02/2022.
//  Copyright © 2022 cdalvaro.io. All rights reserved.
//

#include <gtest/gtest.h>

#include "tests/tests.hpp"
#include "tools/math/factorization.hpp"

using namespace tools::math;

namespace tests {

    TEST(Tools_Math_Factorization, IsPrime) {
        const std::set<uint> composite_numbers{
            4,     6,     8,     9,     10,    12,    14,    15,    16,    18,    20,    21,    22,    24,
            25,    26,    27,    28,    276,   278,   279,   280,   282,   284,   285,   286,   287,   288,
            289,   290,   291,   292,   294,   295,   296,   297,   934,   935,   936,   938,   939,   940,
            942,   943,   944,   945,   946,   948,   949,   950,   951,   952,   954,   955,   998,   999,
            1'000, 1'001, 1'002, 1'003, 1'004, 1'005, 1'006, 1'007, 1'008, 1'010, 1'011, 1'012, 1'014, 1'015,
            1'016, 1'017, 1'018, 1'020, 1'022, 1'023, 1'024, 1'025, 1'026, 1'027, 1'028, 1'029, 1'030, 1'032,
            1'034, 1'035, 1'036, 1'037, 1'038, 1'040, 1'041, 1'042, 1'043, 1'044, 1'045, 1'046, 1'047, 1'048,
            1'050, 1'052, 1'053, 1'054, 1'075, 1'076, 1'077, 1'078, 1'079, 1'080, 1'081, 1'082, 1'083, 1'084,
            1'085, 1'086, 1'088, 1'089, 1'090, 1'092, 1'094, 1'095, 1'096, 1'098, 1'099, 1'100, 1'101, 1'102,
            1'104, 1'105, 1'106, 1'107, 1'108, 1'110, 1'111, 1'112, 1'113, 1'114, 1'115, 1'116, 1'118, 1'119,
            1'120, 1'121, 1'122, 1'124, 1'125, 1'126, 1'127, 1'128, 1'130, 1'131, 1'132, 1'133, 1'134};

        for (const auto &composite_number : composite_numbers) {
            EXPECT_FALSE(isPrime(composite_number)) << composite_number << " is composite";
        }

        const std::set<uint> prime_numbers{
            2,   3,   5,   7,   11,  13,  17,  19,  23,  29,  31,  37,  41,  43,  47,  53,  59,   61,  67,
            71,  73,  79,  83,  89,  97,  101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151,  157, 163,
            167, 173, 179, 181, 191, 193, 197, 199, 211, 223, 227, 229, 233, 239, 241, 251, 257,  263, 269,
            271, 277, 281, 283, 293, 307, 311, 313, 317, 331, 337, 347, 349, 353, 359, 367, 373,  379, 383,
            389, 397, 401, 409, 419, 421, 431, 433, 439, 443, 449, 457, 461, 463, 467, 479, 487,  491, 499,
            503, 509, 521, 523, 541, 547, 557, 563, 569, 571, 577, 587, 593, 599, 601, 607, 613,  617, 619,
            631, 641, 643, 647, 653, 659, 661, 673, 677, 683, 691, 701, 709, 719, 727, 733, 739,  743, 751,
            757, 761, 769, 773, 787, 797, 809, 811, 821, 823, 827, 829, 839, 853, 857, 859, 863,  877, 881,
            883, 887, 907, 911, 919, 929, 937, 941, 947, 953, 967, 971, 977, 983, 991, 997, 1'009};

        for (const auto &prime_number : prime_numbers) {
            EXPECT_TRUE(isPrime(prime_number)) << prime_number << " is prime";
        }
    }

    TEST(Tools_Math_Factorization, Divisors) {
        const std::set<uint> expected{1,         3,         9,          11,         19,         23,         33,
                                      57,        69,        99,         171,        207,        209,        253,
                                      437,       627,       759,        1'311,      1'881,      2'277,      3'137,
                                      3'933,     4'807,     9'411,      14'421,     28'233,     34'507,     43'263,
                                      59'603,    72'151,    103'521,    178'809,    216'453,    310'563,    536'427,
                                      649'359,   655'633,   793'661,    1'370'869,  1'966'899,  2'380'983,  4'112'607,
                                      5'900'697, 7'142'949, 12'337'821, 15'079'559, 45'238'677, 135'716'031};

        auto result = divisors(135716031);

        EXPECT_EQ_COLLECTIONS(expected.begin(), expected.end(), result.begin(), result.end());
    }

    TEST(Tools_Math_Factorization, Factorize) {
        std::vector<uint> expected{3, 3, 3, 5, 5, 7, 2'851, 100'747};
        auto result = factorize(1'357'160'318'325);

        EXPECT_EQ_COLLECTIONS(expected.begin(), expected.end(), result.begin(), result.end());

        expected = {2, 2, 2, 2, 53, 4519, 23'568'119};
        result = factorize(90'315'671'637'328);

        EXPECT_EQ_COLLECTIONS(expected.begin(), expected.end(), result.begin(), result.end());
    }

    TEST(Tools_Math_Factorization, AmicablePair) {
        std::pair<uint, uint> expected = {17'296, 18'416};
        auto result = amicablePair(17'296);

        EXPECT_EQ(expected.first, result->second) << "The first amicable pair of 17'296 is not correct";
        EXPECT_EQ(expected.second, result->first) << "The second amicable pair of 17'296 is not correct";

        result = amicablePair(18'416);

        EXPECT_EQ(expected.first, result->first) << "The first amicable pair of 18'416 is not correct";
        EXPECT_EQ(expected.second, result->second) << "The second amicable pair of 18'416 is not correct";

        EXPECT_EQ(std::nullopt, amicablePair(139'104)) << "The amicable pair for number 139'104";
        EXPECT_EQ(std::nullopt, amicablePair(1)) << "The amicable pair for number 1";
    }

} // namespace tests
