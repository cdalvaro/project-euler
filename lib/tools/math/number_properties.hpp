//
//  number_properties.hpp
//  project-euler
//
//  Created by Carlos Álvaro on 25/1/22.
//  Copyright © 2022 cdalvaro.io. All rights reserved.
//

#ifndef tools_math_number_properties_hpp
#define tools_math_number_properties_hpp

#include <iterator>
#include <numeric>
#include <type_traits>

#include "tools/math/concepts.hpp"
#include "tools/math/factorization.hpp"

namespace tools::math {

    template <typename T>
        requires Integral<T>
    constexpr T __divisorsSum(const T &number) {
        auto number_divisors = divisors(number);
        return std::accumulate(number_divisors.begin(), number_divisors.end(), static_cast<T>(0));
    }

    template <typename T>
        requires Integral<T>
    constexpr bool isAbundant(const T &number) {
        return __divisorsSum(number) > (number * 2);
    }

    template <typename T>
        requires Integral<T>
    constexpr bool isDeficient(const T &number) {
        return __divisorsSum(number) < (number * 2);
    }

    template <typename T>
        requires Integral<T>
    constexpr bool isPerfect(const T &number) {
        return __divisorsSum(number) == (number * 2);
    }

} // namespace tools::math

#endif /* tools_math_number_properties_hpp */
