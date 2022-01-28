//
//  number_properties.hpp
//  Challenges
//
//  Created by Carlos Álvaro on 25/1/22.
//  Copyright © 2022 cdalvaro. All rights reserved.
//

#ifndef challenges_tools_math_number_properties_hpp
#define challenges_tools_math_number_properties_hpp

#include <iterator>
#include <numeric>
#include <type_traits>

#include "challenges/tools/math/factorization.hpp"

namespace challenges::tools::math {

    template <typename Integer_t, typename = std::enable_if<std::is_integral<Integer_t>::value>>
    constexpr Integer_t __divisorsSum(const Integer_t &number) {
        auto number_divisors = divisors(number);
        return std::accumulate(number_divisors.begin(), number_divisors.end(), static_cast<Integer_t>(0));
    }

    template <typename Integer_t, typename = std::enable_if<std::is_integral<Integer_t>::value>>
    constexpr bool isAbundant(const Integer_t &number) {
        return __divisorsSum(number) > (number * 2);
    }

    template <typename Integer_t, typename = std::enable_if<std::is_integral<Integer_t>::value>>
    constexpr bool isDeficient(const Integer_t &number) {
        return __divisorsSum(number) < (number * 2);
    }

    template <typename Integer_t, typename = std::enable_if<std::is_integral<Integer_t>::value>>
    constexpr bool isPerfect(const Integer_t &number) {
        return __divisorsSum(number) == (number * 2);
    }

} // namespace challenges::tools::math

#endif /* challenges_tools_math_number_properties_hpp */
