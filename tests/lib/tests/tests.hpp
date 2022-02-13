//
//  tests.hpp
//  project-euler
//
//  Created by Carlos Álvaro on 12/02/2022.
//  Copyright © 2022 cdalvaro.io. All rights reserved.
//

#ifndef tests_tests_hpp
#define tests_tests_hpp

#include <iterator>

#define EXPECT_EQ_COLLECTIONS(expected_first, expected_last, result_first, result_last)                                \
    {                                                                                                                  \
        auto expected_size = std::distance(expected_first, expected_last);                                             \
        auto result_size = std::distance(result_first, result_last);                                                   \
        EXPECT_EQ(expected_size, result_size) << "Number of elements is wrong";                                        \
                                                                                                                       \
        auto it_expected = expected_first;                                                                             \
        auto it_result = result_first;                                                                                 \
        for (; it_expected != expected_last && it_result != result_last; ++it_expected, ++it_result) {                 \
            EXPECT_EQ(*it_expected, *it_result)                                                                        \
                << "Value at index " << std::distance(it_expected, expected_first) << " is wrong";                     \
        }                                                                                                              \
    }

#endif /* tests_tests_hpp */
